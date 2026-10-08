#include "math_internal.h"

/* block hash function used by the update / final functions */
UnkSha1BlockFunc data_020c3c90 = (UnkSha1BlockFunc)func_0205f73c;

void func_0205f13c(UnkSha1Context* context) {
    context->unk_00[0] = 0x67452301;
    context->unk_00[1] = 0xEFCDAB89;
    context->unk_00[2] = 0x98BADCFE;
    context->unk_00[3] = 0x10325476;
    context->unk_00[4] = 0xC3D2E1F0;
    context->unk_14    = 0;
    context->unk_18    = 0;
    context->unk_1c    = 0;
}

void func_0205f18c(UnkSha1Context* context, const void* data, u32 len) {
    const u8* src = (const u8*)data;
    u8* const buf = context->unk_20;

    if (len == 0) {
        return;
    }

    {
        const u32 low = context->unk_14 + (len << 3);
        if (low < context->unk_14) {
            context->unk_18++;
        }
        context->unk_18 += len >> 29;
        context->unk_14 = low;
    }

    if (context->unk_1c != 0) {
        const u32 used = (u32)context->unk_1c;
        if (used + len >= 64) {
            const u32 rest = 64 - used;
            MI_CpuCopyU8(src, buf + used, rest);
            len -= rest;
            src += rest;
            data_020c3c90(context, buf, 64);
            context->unk_1c = 0;
        } else {
            MI_CpuCopyU8(src, buf + used, len);
            context->unk_1c += len;
            return;
        }
    }

    if (len >= 64) {
        s32 blocks = (s32)(len & ~63);
        len -= blocks;
        if (((u32)src & 3) == 0) {
            data_020c3c90(context, src, (u32)blocks);
            src += blocks;
        } else {
            do {
                MI_CpuCopyU8(src, buf, 64);
                src += 64;
                data_020c3c90(context, buf, 64);
                blocks -= 64;
            } while (blocks > 0);
        }
    }

    context->unk_1c = (s32)len;
    if (len != 0) {
        MI_CpuCopyU8(src, buf, len);
    }
}

void func_0205f2e0(UnkSha1Context* context, u8* digest) {
    u32* const words = (u32*)context->unk_20;
    s32        used  = context->unk_1c;
    s32        i     = used >> 2;

    if ((used & 3) == 0) {
        words[i] = 0;
    }
    {
        u8* const bytes = context->unk_20;
        bytes[used++]   = 0x80;
        while (used & 3) {
            bytes[used++] = 0;
        }
        i++;

        if (context->unk_1c >= 56) {
            for (; i < 16; i++) {
                words[i] = 0;
            }
            data_020c3c90(context, words, 64);
            i = 0;
        }
        for (; i < 14; i++) {
            words[i] = 0;
        }

        {
            const u32 low = context->unk_14;
            bytes[63]     = (u8)(low >> 0);
            bytes[62]     = (u8)(low >> 8);
            bytes[61]     = (u8)(low >> 16);
            bytes[60]     = (u8)(low >> 24);
        }
        {
            const u32 high = context->unk_18;
            bytes[59]      = (u8)(high >> 0);
            bytes[58]      = (u8)(high >> 8);
            bytes[57]      = (u8)(high >> 16);
            bytes[56]      = (u8)(high >> 24);
        }
        data_020c3c90(context, words, 64);
    }

    {
        const u32 h       = context->unk_00[0];
        digest[0] = (u8)(h >> 24);
        digest[1] = (u8)(h >> 16);
        digest[2] = (u8)(h >> 8);
        digest[3] = (u8)(h >> 0);
    }
    {
        const u32 h       = context->unk_00[1];
        digest[4] = (u8)(h >> 24);
        digest[5] = (u8)(h >> 16);
        digest[6] = (u8)(h >> 8);
        digest[7] = (u8)(h >> 0);
    }
    {
        const u32 h       = context->unk_00[2];
        digest[8] = (u8)(h >> 24);
        digest[9] = (u8)(h >> 16);
        digest[10] = (u8)(h >> 8);
        digest[11] = (u8)(h >> 0);
    }
    {
        const u32 h       = context->unk_00[3];
        digest[12] = (u8)(h >> 24);
        digest[13] = (u8)(h >> 16);
        digest[14] = (u8)(h >> 8);
        digest[15] = (u8)(h >> 0);
    }
    {
        const u32 h       = context->unk_00[4];
        digest[16] = (u8)(h >> 24);
        digest[17] = (u8)(h >> 16);
        digest[18] = (u8)(h >> 8);
        digest[19] = (u8)(h >> 0);
    }

    context->unk_1c = 0;
    func_0206785c(0, &context, sizeof(context));
}

/* SHA-1 test vectors (messages, repeat counts and expected digests), used by the self test below.
   The definition order gives the ROM data layout. */
static char data_020c3cc4[] = "abc";
static u32  data_020c3cb4[4] = {1, 1, 1000000, 10};
static char data_020c3cf8[] = "\xa9\x99\x3e\x36\x47\x06\x81\x6a\xba\x3e\x25\x71\x78\x50\xc2\x6c\x9c\xd0\xd8\x9d";
static char data_020c3d10[] = "\x84\x98\x3e\x44\x1c\x3b\xd2\x6e\xba\xae\x4a\xa1\xf9\x51\x29\xe5\xe5\x46\x70\xf1";
static char data_020c3cc8[] = "\x34\xaa\x97\x3c\xd4\xc4\xda\xa4\xf6\x1e\xeb\x2b\xdb\xad\x27\x31\x65\x34\x01\x6f";
static char data_020c3ce0[] = "\xde\xa3\x56\xa2\xcd\xdd\x90\xc7\xa7\xec\xed\xc5\xeb\xb5\x63\x93\x4f\x46\x04\x52";
static char data_020c3d28[] = "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq";
static char data_020c3c8c[] = "a";
static char data_020c3d64[] = "0123456701234567012345670123456701234567012345670123456701234567";
static const char* data_020c3ca4[4] = {data_020c3cc4, data_020c3d28, data_020c3c8c, data_020c3d64};
static const char* data_020c3c94[4] = {data_020c3cf8, data_020c3d10, data_020c3cc8, data_020c3ce0};

/* Self test over the test vectors; not linked in the ROM (no caller), its data stays in this unit's .data. */
BOOL unkfunc_unused_23(void) {
    int i;

    for (i = 0; i < 4; i++) {
        UnkSha1Context context;
        u8             digest[20];
        const char*    msg = data_020c3ca4[i];
        u32            len = 0;
        u32            j;

        while (msg[len] != 0) {
            len++;
        }
        func_0205f13c(&context);
        for (j = 0; j < data_020c3cb4[i]; j++) {
            func_0205f18c(&context, msg, len);
        }
        func_0205f2e0(&context, digest);
        for (j = 0; j < 20; j++) {
            if (digest[j] != (u8)data_020c3c94[i][j]) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
