#include "gx_internal.h"

#define REG_BG0OFS          (*(vu32 *)0x04000010)
#define REG_GXFIFO_ADDR     ((vu32 *)0x04000400)
#define REG_MTX_MODE        (*(vu32 *)0x04000440)
#define REG_MTX_POP         (*(vu32 *)0x04000448)
#define REG_MTX_IDENTITY    (*(vu32 *)0x04000454)
#define REG_POLYGON_ATTR    (*(vu32 *)0x040004a4)
#define REG_TEXIMAGE_PARAM  (*(vu32 *)0x040004a8)
#define REG_TEXPLTT_BASE    (*(vu32 *)0x040004ac)
#define REG_END_VTXS        (*(vu32 *)0x04000504)
#define REG_GXSTAT          (*(vu32 *)0x04000600)
#define REG_CLEAR_COLOR     (*(vu32 *)0x04000350)
#define REG_CLEAR_DEPTH     (*(vu16 *)0x04000354)
#define REG_CLRIMAGE_OFFSET (*(vu16 *)0x04000356)
#define REG_FOG_COLOR       (*(vu32 *)0x04000358)
#define REG_FOG_OFFSET      (*(vu16 *)0x0400035c)
#define REG_SHININESS       (*(vu32 *)0x040004d0)

void func_02065200(void);
void func_02065228(void);
void func_020652c0(void);
void func_02065444(void);
s32 func_020654e4(s32 *level);
s32 func_02065514(s32 *level);
void func_02065570(volatile void *fifo);
void MI_CpuCopy64(const void *src, void *dest);
void func_02067940(const void *src, volatile void *dest);
void func_02067924(const void *src, volatile void *dest);
void func_02067228(u32 dmaNo, void *dest, u32 data, u32 size, void (*callback)(void *), void *arg);

/* Initialize the 3D engine */
void func_02065088(void) {
    func_02065200();
    REG_END_VTXS = 0;
    while (REG_GXSTAT & 0x8000000) {
    }
    REG_DISP3DCNT = 0;
    REG_GXSTAT    = 0;
    REG_BG0OFS    = 0;
    REG_DISP3DCNT |= 0x2000;
    REG_DISP3DCNT |= 0x1000;
    REG_DISP3DCNT &= ~0x3002;
    REG_DISP3DCNT = (REG_DISP3DCNT & ~0x3000) | 0x10;
    REG_DISP3DCNT &= (u16)~0x3004;
    REG_GXSTAT |= 0x8000;
    REG_GXSTAT = (REG_GXSTAT & ~0xc0000000) | 0x80000000;
    func_02065228();
    REG_CLEAR_COLOR     = 0;
    REG_CLEAR_DEPTH     = 0x7fff;
    REG_CLRIMAGE_OFFSET = 0;
    REG_FOG_COLOR       = 0;
    REG_FOG_OFFSET      = 0;
    REG_BG0CNT &= ~3;
    func_02065444();
    REG_POLYGON_ATTR   = 0x1f0080;
    REG_TEXIMAGE_PARAM = 0;
    REG_TEXPLTT_BASE   = 0;
}

/* Reset the 3D engine state */
void func_02065194(void) {
    while (REG_GXSTAT & 0x8000000) {
    }
    REG_GXSTAT |= 0x8000;
    REG_DISP3DCNT |= 0x2000;
    REG_DISP3DCNT |= 0x1000;
    func_020652c0();
    REG_POLYGON_ATTR   = 0x1f0080;
    REG_TEXIMAGE_PARAM = 0;
    REG_TEXPLTT_BASE   = 0;
}

void func_02065200(void) {
    func_02065570(REG_GXFIFO_ADDR);
    while (REG_GXSTAT & 0x8000000) {
    }
}

/* Reset the position/vector and projection matrix stacks */
void func_02065228(void) {
    s32 pvLevel, pjLevel;

    REG_GXSTAT |= 0x8000;
    while (func_020654e4(&pvLevel)) {
    }
    while (func_02065514(&pjLevel)) {
    }
    REG_MTX_MODE     = 3;
    REG_MTX_IDENTITY = 0;
    REG_MTX_MODE     = 0;
    if (pjLevel != 0) {
        REG_MTX_POP = pjLevel;
    }
    REG_MTX_IDENTITY = 0;
    REG_MTX_MODE     = 2;
    REG_MTX_POP      = pvLevel;
    REG_MTX_IDENTITY = 0;
}

void func_020652c0(void) {
    s32 pvLevel, pjLevel;

    REG_GXSTAT |= 0x8000;
    while (func_020654e4(&pvLevel)) {
    }
    while (func_02065514(&pjLevel)) {
    }
    REG_MTX_MODE     = 3;
    REG_MTX_IDENTITY = 0;
    REG_MTX_MODE     = 0;
    if (pjLevel != 0) {
        REG_MTX_POP = pjLevel;
    }
    REG_MTX_MODE = 2;
    REG_MTX_POP  = pvLevel;
    REG_MTX_IDENTITY = 0;
}

/* Fog setup */
void func_02065350(BOOL enable, s32 fogMode, s32 fogSlope, s32 fogOffset) {
    if (enable) {
        REG_FOG_OFFSET = fogOffset;
        REG_DISP3DCNT  = (REG_DISP3DCNT & ~0x3f40) | ((fogSlope << 8) | (fogMode << 6) | 0x80);
    } else {
        REG_DISP3DCNT &= (u16)~0x3080;
    }
}

/* Read the current clip matrix */
s32 func_020653a8(void *dest) {
    if (REG_GXSTAT & 0x8000000) {
        return -1;
    }
    MI_CpuCopy64((const void *)0x04000640, dest);
    return 0;
}

/* Read the current vector matrix */
s32 func_020653d8(void *dest) {
    if (REG_GXSTAT & 0x8000000) {
        return -1;
    }
    func_02067940((const void *)0x04000680, dest);
    return 0;
}

/* Set the edge color table */
void func_02065408(const void *table) {
    func_02067924(table, (void *)0x04000360);
}

/* Set the clear color / depth */
void func_0206541c(u32 rgb, u32 alpha, u32 depth, u32 polygonID, BOOL fog) {
    u32 val = rgb | (alpha << 16) | (polygonID << 24);
    if (fog) {
        val |= 0x8000;
    }
    REG_CLEAR_COLOR = val;
    REG_CLEAR_DEPTH = depth;
}

/* Clear the edge color, fog and toon tables and the shininess table */
void func_02065444(void) {
    s32 i;

    if (data_020c3dbc != -1) {
        func_02067228(data_020c3dbc, (void *)0x04000330, 0, 0x10, NULL, NULL);
        func_020670cc(data_020c3dbc, (void *)0x04000360, 0, 0x60);
    } else {
        func_0206785c(0, (void *)0x04000330, 0x10);
        func_0206785c(0, (void *)0x04000360, 0x60);
    }
    for (i = 0; i < 0x20; i++) {
        REG_SHININESS = 0;
    }
}

s32 func_020654e4(s32 *level) {
    if (REG_GXSTAT & 0x4000) {
        return -1;
    }
    *level = (REG_GXSTAT & 0x1f00) >> 8;
    return 0;
}

s32 func_02065514(s32 *level) {
    if (REG_GXSTAT & 0x4000) {
        return -1;
    }
    *level = (REG_GXSTAT & 0x2000) >> 13;
    return 0;
}

/* Read the box test result */
s32 func_02065544(s32 *in) {
    if (REG_GXSTAT & 1) {
        return -1;
    }
    *in = REG_GXSTAT & 2;
    return 0;
}

/* Write 128 zero words to the geometry FIFO */
// clang-format off
asm void func_02065570(register volatile void *fifo) {
    mov r1, #0
    mov r2, #0
    mov r3, #0
    mov r12, #0
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    bx lr
}
// clang-format on
