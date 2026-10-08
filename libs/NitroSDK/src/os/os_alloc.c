#include "os_internal.h"

#define HEADER_SIZE 0x20
#define MIN_OBJ_SIZE 0x40

typedef struct UnkHeapCell UnkHeapCell;
struct UnkHeapCell {
    /* 0x00 */ UnkHeapCell* prev;
    /* 0x04 */ UnkHeapCell* next;
    /* 0x08 */ s32          size;
};

typedef struct UnkHeapDesc {
    /* 0x00 */ s32          size;
    /* 0x04 */ UnkHeapCell* free;
    /* 0x08 */ UnkHeapCell* allocated;
} UnkHeapDesc; // size 0xc

typedef struct UnkHeapInfo {
    /* 0x00 */ s32          currentHeap;
    /* 0x04 */ s32          numHeaps;
    /* 0x08 */ void*        arenaStart;
    /* 0x0c */ void*        arenaEnd;
    /* 0x10 */ UnkHeapDesc* heapArray;
} UnkHeapInfo;

UnkHeapInfo* data_02114428[9]; // heap info per arena

// Adds a cell at the front of a list
UnkHeapCell* OS_AddOccupiedMemoryBlock(UnkHeapCell* list, UnkHeapCell* cell) {
    cell->next = list;
    cell->prev = NULL;
    if (list != NULL) {
        list->prev = cell;
    }
    return cell;
}

// Removes a cell from a list
UnkHeapCell* OS_RemoveMemoryBlock(UnkHeapCell* list, UnkHeapCell* cell) {
    if (cell->next != NULL) {
        cell->next->prev = cell->prev;
    }
    if (cell->prev == NULL) {
        list = cell->next;
    } else {
        cell->prev->next = cell->next;
    }
    return list;
}

// Inserts a cell in an address-sorted list, merging it with its neighbours
UnkHeapCell* OS_AddFreeMemoryBlock(UnkHeapCell* list, UnkHeapCell* cell) {
    UnkHeapCell* prev = NULL;
    UnkHeapCell* next;

    for (next = list; next != NULL; prev = next, next = next->next) {
        if (cell <= next) {
            break;
        }
    }

    cell->next = next;
    cell->prev = prev;

    if (next != NULL) {
        next->prev = cell;
        if ((char*)cell + cell->size == (char*)next) {
            cell->size += next->size;
            next       = next->next;
            cell->next = next;
            if (next != NULL) {
                next->prev = cell;
            }
        }
    }

    if (prev != NULL) {
        prev->next = cell;
        if ((char*)prev + prev->size == (char*)cell) {
            prev->size += cell->size;
            prev->next = next;
            if (next != NULL) {
                next->prev = prev;
            }
        }
        return list;
    } else {
        return cell;
    }
}

void* OS_AllocFromHeap(u32 id, s32 heap, s32 size) {
    UnkHeapInfo* heapInfo;
    UnkHeapDesc* hd;
    UnkHeapCell* cell;
    UnkHeapCell* newCell;
    u32          leftoverSize;
    u32          prev = OS_DisableIRQ();

    heapInfo = data_02114428[id];
    if (heapInfo == NULL) {
        OS_RestoreIRQ(prev);
        return NULL;
    }

    if (heap < 0) {
        heap = heapInfo->currentHeap;
    }
    hd = &heapInfo->heapArray[heap];

    size += HEADER_SIZE;
    size = (size + 31) & ~31;

    for (cell = hd->free; cell != NULL; cell = cell->next) {
        if (size <= cell->size) {
            break;
        }
    }

    if (cell == NULL) {
        OS_RestoreIRQ(prev);
        return NULL;
    }

    leftoverSize = cell->size - size;
    if (leftoverSize < MIN_OBJ_SIZE) {
        hd->free = OS_RemoveMemoryBlock(hd->free, cell);
    } else {
        cell->size    = size;
        newCell       = (UnkHeapCell*)((char*)cell + size);
        newCell->size = leftoverSize;
        newCell->prev = cell->prev;
        newCell->next = cell->next;
        if (newCell->next != NULL) {
            newCell->next->prev = newCell;
        }
        if (newCell->prev != NULL) {
            newCell->prev->next = newCell;
        } else {
            hd->free = newCell;
        }
    }

    hd->allocated = OS_AddOccupiedMemoryBlock(hd->allocated, cell);

    OS_RestoreIRQ(prev);
    return (char*)cell + HEADER_SIZE;
}

void OS_FreeFromHeap(u32 id, s32 heap, void* ptr) {
    UnkHeapInfo* heapInfo;
    UnkHeapDesc* hd;
    UnkHeapCell* cell;
    u32          prev = OS_DisableIRQ();

    heapInfo = data_02114428[id];
    if (heap < 0) {
        heap = heapInfo->currentHeap;
    }
    hd = &heapInfo->heapArray[heap];

    cell          = (UnkHeapCell*)((char*)ptr - HEADER_SIZE);
    hd->allocated = OS_RemoveMemoryBlock(hd->allocated, cell);
    hd->free      = OS_AddFreeMemoryBlock(hd->free, cell);

    OS_RestoreIRQ(prev);
}
