/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_0200c0a4(void);
    void func_0200c5d8(void);
    void func_0200c8b0(void);
    void pad_0200cbfa(void);
    void func_0200cbfc(void);
    void func_0200cc64(void);
    void func_0200ce20(void);
    void func_0200cf24(void);
    void func_0200cf60(void);
    void func_0200d218(void);
    void pad_0200d21a(void);
    void func_0200d21c(void);
    void pad_0200d21e(void);
    void data_020bc584(void);
    void data_020bc5a8(void);
    void data_020bc5cc(void);
    void data_020bc5f0(void);
    void data_020bc614(void);
    void data_020bc638(void);
    void data_020bc640(void);
    void data_020bc64c(void);
    void data_020c7830(void);
    void data_020c7980(void);
    void func_02057f50(void);
    void func_02057f58(void);
    void func_020882a4(void);
    void func_020882b0(void);
}

#pragma thumb on
extern "C" asm void func_0200c0a4(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	add r6, r1, #0
	mov r0, #1
	mov r4, #0
	ldrsb r2, [r6, r0]
	ldrsb r0, [r6, r4]
	mov r7, #0x64
	add r1, r0, #0
	mul r1, r7
	add r2, r1
	ldr r1, [pc, #0x2b0]
	cmp r2, r1
	ble lbl_0200c0c2
	b lbl_0200c260
lbl_0200c0c2:
	blt lbl_0200c0c6
	b lbl_0200c454
lbl_0200c0c6:
	ldr r0, [pc, #0x2a8]
	cmp r2, r0
	bgt lbl_0200c1c8
	blt lbl_0200c0d0
	b lbl_0200c54a
lbl_0200c0d0:
	add r1, r0, #0
	sub r1, #0x74
	cmp r2, r1
	bgt lbl_0200c158
	add r1, r0, #0
	sub r1, #0x74
	cmp r2, r1
	blt lbl_0200c0e2
	b lbl_0200c496
lbl_0200c0e2:
	add r1, r0, #0
	sub r1, #0x78
	cmp r2, r1
	bgt lbl_0200c132
	add r1, r0, #0
	sub r1, #0x78
	cmp r2, r1
	blt lbl_0200c0f4
	b lbl_0200c47e
lbl_0200c0f4:
	add r1, r0, #0
	sub r1, #0xd1
	cmp r2, r1
	bgt lbl_0200c128
	sub r0, #0xdd
	sub r0, r2, r0
	bmi lbl_0200c130
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r6, r3, #0xb
	lsl r0, r4, #0xb
	lsl r4, r4, #0xb
	lsl r0, r5, #0xb
	lsl r4, r5, #0xb
	lsl r0, r6, #0xb
	lsl r4, r6, #0xb
	lsl r0, r7, #0xb
	lsl r4, r7, #0xb
	lsl r0, r0, #0xc
	lsl r0, r1, #0xc
	lsl r4, r1, #0xc
	lsl r4, r0, #0xc
lbl_0200c128:
	ldr r0, [pc, #0x248]
	cmp r2, r0
	bne lbl_0200c130
	b lbl_0200c47a
lbl_0200c130:
	b lbl_0200c552
lbl_0200c132:
	add r1, r0, #0
	sub r1, #0x76
	cmp r2, r1
	bgt lbl_0200c14e
	add r1, r0, #0
	sub r1, #0x76
	cmp r2, r1
	blt lbl_0200c144
	b lbl_0200c48a
lbl_0200c144:
	sub r0, #0x77
	cmp r2, r0
	bne lbl_0200c14c
	b lbl_0200c484
lbl_0200c14c:
	b lbl_0200c552
lbl_0200c14e:
	sub r0, #0x75
	cmp r2, r0
	bne lbl_0200c156
	b lbl_0200c490
lbl_0200c156:
	b lbl_0200c552
lbl_0200c158:
	add r1, r0, #0
	sub r1, #0x70
	cmp r2, r1
	bgt lbl_0200c190
	add r1, r0, #0
	sub r1, #0x70
	cmp r2, r1
	blt lbl_0200c16a
	b lbl_0200c4b4
lbl_0200c16a:
	add r1, r0, #0
	sub r1, #0x72
	cmp r2, r1
	bgt lbl_0200c186
	add r1, r0, #0
	sub r1, #0x72
	cmp r2, r1
	blt lbl_0200c17c
	b lbl_0200c4a8
lbl_0200c17c:
	sub r0, #0x73
	cmp r2, r0
	bne lbl_0200c184
	b lbl_0200c49c
lbl_0200c184:
	b lbl_0200c552
lbl_0200c186:
	sub r0, #0x71
	cmp r2, r0
	bne lbl_0200c18e
	b lbl_0200c4ae
lbl_0200c18e:
	b lbl_0200c552
lbl_0200c190:
	add r1, r0, #0
	sub r1, #0x6e
	cmp r2, r1
	bgt lbl_0200c1ac
	add r1, r0, #0
	sub r1, #0x6e
	cmp r2, r1
	blt lbl_0200c1a2
	b lbl_0200c4c0
lbl_0200c1a2:
	sub r0, #0x6f
	cmp r2, r0
	bne lbl_0200c1aa
	b lbl_0200c4ba
lbl_0200c1aa:
	b lbl_0200c552
lbl_0200c1ac:
	sub r0, #0x6d
	sub r0, r2, r0
	cmp r0, #3
	bhi lbl_0200c1ec
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r4, r0, #0xc
	lsl r2, r1, #0xc
	lsl r0, r4, #0xb
	lsl r0, r2, #0xc
lbl_0200c1c8:
	ldr r1, [pc, #0x1ac]
	cmp r2, r1
	bgt lbl_0200c21a
	blt lbl_0200c1d2
	b lbl_0200c434
lbl_0200c1d2:
	ldr r0, [pc, #0x1a8]
	cmp r2, r0
	bgt lbl_0200c1f8
	blt lbl_0200c1dc
	b lbl_0200c424
lbl_0200c1dc:
	add r1, r0, #0
	sub r1, #0xc0
	cmp r2, r1
	bgt lbl_0200c1ee
	sub r0, #0xc0
	cmp r2, r0
	bne lbl_0200c1ec
	b lbl_0200c546
lbl_0200c1ec:
	b lbl_0200c552
lbl_0200c1ee:
	sub r0, r0, #2
	cmp r2, r0
	bne lbl_0200c1f6
	b lbl_0200c420
lbl_0200c1f6:
	b lbl_0200c552
lbl_0200c1f8:
	sub r3, r1, #2
	cmp r2, r3
	bgt lbl_0200c210
	sub r1, r1, #2
	cmp r2, r1
	blt lbl_0200c206
	b lbl_0200c42c
lbl_0200c206:
	add r0, r0, #5
	cmp r2, r0
	bne lbl_0200c20e
	b lbl_0200c428
lbl_0200c20e:
	b lbl_0200c552
lbl_0200c210:
	sub r0, r1, #1
	cmp r2, r0
	bne lbl_0200c218
	b lbl_0200c430
lbl_0200c218:
	b lbl_0200c552
lbl_0200c21a:
	add r0, r1, #4
	cmp r2, r0
	bgt lbl_0200c242
	blt lbl_0200c224
	b lbl_0200c444
lbl_0200c224:
	add r0, r1, #2
	cmp r2, r0
	bgt lbl_0200c238
	blt lbl_0200c22e
	b lbl_0200c43c
lbl_0200c22e:
	add r0, r1, #1
	cmp r2, r0
	bne lbl_0200c236
	b lbl_0200c438
lbl_0200c236:
	b lbl_0200c552
lbl_0200c238:
	add r0, r1, #3
	cmp r2, r0
	bne lbl_0200c240
	b lbl_0200c440
lbl_0200c240:
	b lbl_0200c552
lbl_0200c242:
	add r0, r1, #6
	cmp r2, r0
	bgt lbl_0200c256
	blt lbl_0200c24c
	b lbl_0200c44c
lbl_0200c24c:
	add r0, r1, #5
	cmp r2, r0
	bne lbl_0200c254
	b lbl_0200c448
lbl_0200c254:
	b lbl_0200c552
lbl_0200c256:
	add r0, r1, #7
	cmp r2, r0
	bne lbl_0200c25e
	b lbl_0200c450
lbl_0200c25e:
	b lbl_0200c552
lbl_0200c260:
	ldr r0, [pc, #0x11c]
	cmp r2, r0
	bgt lbl_0200c31c
	blt lbl_0200c26a
	b lbl_0200c516
lbl_0200c26a:
	add r3, r0, #0
	sub r3, #8
	cmp r2, r3
	bgt lbl_0200c2d6
	add r3, r0, #0
	sub r3, #8
	cmp r2, r3
	blt lbl_0200c27c
	b lbl_0200c4f2
lbl_0200c27c:
	add r3, r1, #3
	cmp r2, r3
	bgt lbl_0200c2a0
	add r0, r3, #0
	cmp r2, r0
	blt lbl_0200c28a
	b lbl_0200c460
lbl_0200c28a:
	add r0, r1, #1
	cmp r2, r0
	bgt lbl_0200c296
	bne lbl_0200c294
	b lbl_0200c458
lbl_0200c294:
	b lbl_0200c552
lbl_0200c296:
	add r0, r1, #2
	cmp r2, r0
	bne lbl_0200c29e
	b lbl_0200c45c
lbl_0200c29e:
	b lbl_0200c552
lbl_0200c2a0:
	add r3, r1, #0
	add r3, #8
	cmp r2, r3
	bgt lbl_0200c2cc
	add r0, r1, #5
	sub r0, r2, r0
	bmi lbl_0200c2c2
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r4, r5, #6
	lsl r0, r6, #6
	lsl r4, r6, #6
	lsl r0, r7, #6
lbl_0200c2c2:
	ldr r0, [pc, #0xc0]
	cmp r2, r0
	bne lbl_0200c2ca
	b lbl_0200c464
lbl_0200c2ca:
	b lbl_0200c552
lbl_0200c2cc:
	sub r0, #9
	cmp r2, r0
	bne lbl_0200c2d4
	b lbl_0200c4ee
lbl_0200c2d4:
	b lbl_0200c552
lbl_0200c2d6:
	sub r1, r0, #4
	cmp r2, r1
	bgt lbl_0200c2fe
	blt lbl_0200c2e0
	b lbl_0200c504
lbl_0200c2e0:
	sub r1, r0, #6
	cmp r2, r1
	bgt lbl_0200c2f4
	blt lbl_0200c2ea
	b lbl_0200c4fa
lbl_0200c2ea:
	sub r0, r0, #7
	cmp r2, r0
	bne lbl_0200c2f2
	b lbl_0200c4f6
lbl_0200c2f2:
	b lbl_0200c552
lbl_0200c2f4:
	sub r0, r0, #5
	cmp r2, r0
	bne lbl_0200c2fc
	b lbl_0200c4fe
lbl_0200c2fc:
	b lbl_0200c552
lbl_0200c2fe:
	sub r1, r0, #2
	cmp r2, r1
	bgt lbl_0200c312
	blt lbl_0200c308
	b lbl_0200c50e
lbl_0200c308:
	sub r0, r0, #3
	cmp r2, r0
	bne lbl_0200c310
	b lbl_0200c508
lbl_0200c310:
	b lbl_0200c552
lbl_0200c312:
	sub r0, r0, #1
	cmp r2, r0
	bne lbl_0200c31a
	b lbl_0200c512
lbl_0200c31a:
	b lbl_0200c552
lbl_0200c31c:
	add r1, r0, #0
	add r1, #8
	cmp r2, r1
	bgt lbl_0200c392
	add r1, r0, #0
	add r1, #8
	cmp r2, r1
	blt lbl_0200c32e
	b lbl_0200c53c
lbl_0200c32e:
	add r1, r0, #4
	cmp r2, r1
	bgt lbl_0200c356
	blt lbl_0200c338
	b lbl_0200c52a
lbl_0200c338:
	add r1, r0, #2
	cmp r2, r1
	bgt lbl_0200c34c
	blt lbl_0200c342
	b lbl_0200c51e
lbl_0200c342:
	add r0, r0, #1
	cmp r2, r0
	bne lbl_0200c34a
	b lbl_0200c51a
lbl_0200c34a:
	b lbl_0200c552
lbl_0200c34c:
	add r0, r0, #3
	cmp r2, r0
	bne lbl_0200c354
	b lbl_0200c524
lbl_0200c354:
	b lbl_0200c552
lbl_0200c356:
	add r1, r0, #6
	cmp r2, r1
	bgt lbl_0200c388
	blt lbl_0200c360
	b lbl_0200c534
lbl_0200c360:
	add r0, r0, #5
	cmp r2, r0
	bne lbl_0200c368
	b lbl_0200c52e
lbl_0200c368:
	b lbl_0200c552
	mov r8, r8
	dcd 0x00002AFF
	dcd 0x000027EA
	dcd 0x00002771
	dcd 0x00002AF7
	dcd 0x00002903
	dcd 0x00002D56
	dcd 0x00002B03
lbl_0200c388:
	add r0, r0, #7
	cmp r2, r0
	bne lbl_0200c390
	b lbl_0200c538
lbl_0200c390:
	b lbl_0200c552
lbl_0200c392:
	add r1, r0, #0
	add r1, #0x5d
	cmp r2, r1
	bgt lbl_0200c3ca
	add r1, r0, #0
	add r1, #0x5d
	cmp r2, r1
	blt lbl_0200c3a4
	b lbl_0200c4e2
lbl_0200c3a4:
	add r1, r0, #0
	add r1, #0x5b
	cmp r2, r1
	bgt lbl_0200c3c0
	add r1, r0, #0
	add r1, #0x5b
	cmp r2, r1
	blt lbl_0200c3b6
	b lbl_0200c4d8
lbl_0200c3b6:
	add r0, #9
	cmp r2, r0
	bne lbl_0200c3be
	b lbl_0200c540
lbl_0200c3be:
	b lbl_0200c552
lbl_0200c3c0:
	add r0, #0x5c
	cmp r2, r0
	bne lbl_0200c3c8
	b lbl_0200c4de
lbl_0200c3c8:
	b lbl_0200c552
lbl_0200c3ca:
	add r1, r0, #0
	add r1, #0x5f
	cmp r2, r1
	bgt lbl_0200c3e6
	add r1, r0, #0
	add r1, #0x5f
	cmp r2, r1
	blt lbl_0200c3dc
	b lbl_0200c4ea
lbl_0200c3dc:
	add r0, #0x5e
	cmp r2, r0
	bne lbl_0200c3e4
	b lbl_0200c4e6
lbl_0200c3e4:
	b lbl_0200c552
lbl_0200c3e6:
	ldr r0, [pc, #0x19c]
	cmp r2, r0
	bne lbl_0200c3ee
	b lbl_0200c54e
lbl_0200c3ee:
	b lbl_0200c552
	mov r4, #3
	b lbl_0200c552
	mov r4, #7
	b lbl_0200c552
	mov r4, #0x14
	b lbl_0200c552
	mov r4, #0x1b
	b lbl_0200c552
	mov r4, #0x22
	b lbl_0200c552
	mov r4, #0x25
	b lbl_0200c552
	mov r4, #0x28
	b lbl_0200c552
	mov r4, #0x2d
	b lbl_0200c552
	mov r4, #0x34
	b lbl_0200c552
	mov r4, #0x3f
	b lbl_0200c552
	mov r4, #0x45
	b lbl_0200c552
	mov r4, #0x4a
	b lbl_0200c552
lbl_0200c420:
	mov r4, #0x56
	b lbl_0200c552
lbl_0200c424:
	mov r4, #0x5f
	b lbl_0200c552
lbl_0200c428:
	mov r4, #0x6b
	b lbl_0200c552
lbl_0200c42c:
	mov r4, #0x71
	b lbl_0200c552
lbl_0200c430:
	mov r4, #0x7b
	b lbl_0200c552
lbl_0200c434:
	mov r4, #0x83
	b lbl_0200c552
lbl_0200c438:
	mov r4, #0x8b
	b lbl_0200c552
lbl_0200c43c:
	mov r4, #0x92
	b lbl_0200c552
lbl_0200c440:
	mov r4, #0x95
	b lbl_0200c552
lbl_0200c444:
	mov r4, #0x9e
	b lbl_0200c552
lbl_0200c448:
	mov r4, #0xa4
	b lbl_0200c552
lbl_0200c44c:
	mov r4, #0xb2
	b lbl_0200c552
lbl_0200c450:
	mov r4, #0xb9
	b lbl_0200c552
lbl_0200c454:
	mov r4, #0xc3
	b lbl_0200c552
lbl_0200c458:
	mov r4, #0xc9
	b lbl_0200c552
lbl_0200c45c:
	mov r4, #0xd3
	b lbl_0200c552
lbl_0200c460:
	mov r4, #0xda
	b lbl_0200c552
lbl_0200c464:
	mov r4, #0xe5
	b lbl_0200c552
	mov r4, #0xeb
	b lbl_0200c552
	mov r4, #0xf1
	b lbl_0200c552
	mov r4, #0xfa
	b lbl_0200c552
	add r4, r7, #0
	add r4, #0x9c
	b lbl_0200c552
lbl_0200c47a:
	ldr r4, [pc, #0x10c]
	b lbl_0200c552
lbl_0200c47e:
	add r4, r7, #0
	add r4, #0xa3
	b lbl_0200c552
lbl_0200c484:
	add r4, r7, #0
	add r4, #0xac
	b lbl_0200c552
lbl_0200c48a:
	add r4, r7, #0
	add r4, #0xaf
	b lbl_0200c552
lbl_0200c490:
	add r4, r7, #0
	add r4, #0xb6
	b lbl_0200c552
lbl_0200c496:
	add r4, r7, #0
	add r4, #0xbc
	b lbl_0200c552
lbl_0200c49c:
	add r4, r7, #0
	add r4, #0xbe
	b lbl_0200c552
	add r4, r7, #0
	add r4, #0xc3
	b lbl_0200c552
lbl_0200c4a8:
	add r4, r7, #0
	add r4, #0xc8
	b lbl_0200c552
lbl_0200c4ae:
	add r4, r7, #0
	add r4, #0xce
	b lbl_0200c552
lbl_0200c4b4:
	add r4, r7, #0
	add r4, #0xd2
	b lbl_0200c552
lbl_0200c4ba:
	add r4, r7, #0
	add r4, #0xd5
	b lbl_0200c552
lbl_0200c4c0:
	add r4, r7, #0
	add r4, #0xd8
	b lbl_0200c552
	add r4, r7, #0
	add r4, #0xde
	b lbl_0200c552
	add r4, r7, #0
	add r4, #0xe4
	b lbl_0200c552
	add r4, r7, #0
	add r4, #0xef
	b lbl_0200c552
lbl_0200c4d8:
	mov r4, #0x17
	lsl r4, r4, #4
	b lbl_0200c552
lbl_0200c4de:
	ldr r4, [pc, #0xac]
	b lbl_0200c552
lbl_0200c4e2:
	ldr r4, [pc, #0xac]
	b lbl_0200c552
lbl_0200c4e6:
	ldr r4, [pc, #0xac]
	b lbl_0200c552
lbl_0200c4ea:
	ldr r4, [pc, #0xac]
	b lbl_0200c552
lbl_0200c4ee:
	ldr r4, [pc, #0xac]
	b lbl_0200c552
lbl_0200c4f2:
	ldr r4, [pc, #0xac]
	b lbl_0200c552
lbl_0200c4f6:
	ldr r4, [pc, #0xac]
	b lbl_0200c552
lbl_0200c4fa:
	ldr r4, [pc, #0xac]
	b lbl_0200c552
lbl_0200c4fe:
	mov r4, #0x69
	lsl r4, r4, #2
	b lbl_0200c552
lbl_0200c504:
	ldr r4, [pc, #0xa4]
	b lbl_0200c552
lbl_0200c508:
	mov r4, #0x6a
	lsl r4, r4, #2
	b lbl_0200c552
lbl_0200c50e:
	ldr r4, [pc, #0xa0]
	b lbl_0200c552
lbl_0200c512:
	ldr r4, [pc, #0xa0]
	b lbl_0200c552
lbl_0200c516:
	ldr r4, [pc, #0xa0]
	b lbl_0200c552
lbl_0200c51a:
	ldr r4, [pc, #0xa0]
	b lbl_0200c552
lbl_0200c51e:
	mov r4, #7
	lsl r4, r4, #6
	b lbl_0200c552
lbl_0200c524:
	mov r4, #0x71
	lsl r4, r4, #2
	b lbl_0200c552
lbl_0200c52a:
	ldr r4, [pc, #0x94]
	b lbl_0200c552
lbl_0200c52e:
	mov r4, #0x72
	lsl r4, r4, #2
	b lbl_0200c552
lbl_0200c534:
	ldr r4, [pc, #0x8c]
	b lbl_0200c552
lbl_0200c538:
	ldr r4, [pc, #0x8c]
	b lbl_0200c552
lbl_0200c53c:
	ldr r4, [pc, #0x8c]
	b lbl_0200c552
lbl_0200c540:
	mov r4, #0x1d
	lsl r4, r4, #4
	b lbl_0200c552
lbl_0200c546:
	ldr r4, [pc, #0x88]
	b lbl_0200c552
lbl_0200c54a:
	ldr r4, [pc, #0x88]
	b lbl_0200c552
lbl_0200c54e:
	mov r4, #0x81
	lsl r4, r4, #2
lbl_0200c552:
	mov r0, #0x22
	lsl r0, r0, #4
	cmp r4, r0
	bcs lbl_0200c57c
	mov r0, #0x2a
	mul r0, r4
	mov r7, #0x22
	add r5, r0
	lsl r7, r7, #4
lbl_0200c564:
	add r0, r5, #2
	add r1, r6, #0
	blx func_020882b0
	cmp r0, #0
	bne lbl_0200c574
	add r0, r4, #0
	pop {r3, r4, r5, r6, r7, pc}
lbl_0200c574:
	add r4, r4, #1
	add r5, #0x2a
	cmp r4, r7
	bcc lbl_0200c564
lbl_0200c57c:
	mov r0, #0
	mvn r0, r0
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x00003009
	dcd 0x00000106
	dcd 0x00000177
	dcd 0x0000017E
	dcd 0x00000183
	dcd 0x00000189
	dcd 0x0000019D
	dcd 0x0000019E
	dcd 0x000001A1
	dcd 0x000001A2
	dcd 0x000001A7
	dcd 0x000001A9
	dcd 0x000001AD
	dcd 0x000001AE
	dcd 0x000001B9
	dcd 0x000001C5
	dcd 0x000001CA
	dcd 0x000001CB
	dcd 0x000001CF
	dcd 0x000001FA
	dcd 0x000001FB
}

extern "C" asm void func_0200c5d8(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	add r6, r1, #0
	mov r0, #1
	mov r4, #0
	ldrsb r2, [r6, r0]
	ldrsb r0, [r6, r4]
	mov r7, #0x64
	add r1, r0, #0
	mul r1, r7
	add r3, r2, r1
	ldr r2, [pc, #0x278]
	cmp r3, r2
	bgt lbl_0200c6c0
	blt lbl_0200c5f8
	b lbl_0200c7d4
lbl_0200c5f8:
	ldr r0, [pc, #0x270]
	cmp r3, r0
	bgt lbl_0200c67a
	blt lbl_0200c602
	b lbl_0200c7b4
lbl_0200c602:
	mov r1, #0x9e
	lsl r1, r1, #6
	cmp r3, r1
	bgt lbl_0200c654
	blt lbl_0200c60e
	b lbl_0200c87c
lbl_0200c60e:
	add r0, r1, #0
	sub r0, #0xe
	cmp r3, r0
	bgt lbl_0200c64a
	add r0, r1, #0
	sub r0, #0xe
	cmp r3, r0
	blt lbl_0200c620
	b lbl_0200c85c
lbl_0200c620:
	sub r1, #0x73
	sub r0, r3, r1
	cmp r0, #0xa
	bhi lbl_0200c652
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r2, r1, #5
	lsl r6, r1, #5
	lsl r2, r2, #5
	lsl r6, r2, #5
	lsl r2, r3, #5
	lsl r2, r1, #9
	lsl r6, r3, #5
	lsl r2, r4, #5
	lsl r6, r4, #5
	lsl r2, r5, #5
	lsl r6, r5, #5
lbl_0200c64a:
	ldr r0, [pc, #0x224]
	cmp r3, r0
	bne lbl_0200c652
	b lbl_0200c862
lbl_0200c652:
	b lbl_0200c880
lbl_0200c654:
	add r2, r1, #0
	add r2, #0xc3
	cmp r3, r2
	bgt lbl_0200c670
	add r0, r1, #0
	add r0, #0xc3
	cmp r3, r0
	blt lbl_0200c666
	b lbl_0200c7ac
lbl_0200c666:
	add r1, #0x6a
	cmp r3, r1
	bne lbl_0200c66e
	b lbl_0200c7a8
lbl_0200c66e:
	b lbl_0200c880
lbl_0200c670:
	sub r0, r0, #2
	cmp r3, r0
	bne lbl_0200c678
	b lbl_0200c7b0
lbl_0200c678:
	b lbl_0200c880
lbl_0200c67a:
	sub r1, r2, #4
	cmp r3, r1
	bgt lbl_0200c6a2
	blt lbl_0200c684
	b lbl_0200c7c4
lbl_0200c684:
	sub r1, r2, #6
	cmp r3, r1
	bgt lbl_0200c698
	blt lbl_0200c68e
	b lbl_0200c7bc
lbl_0200c68e:
	add r0, r0, #5
	cmp r3, r0
	bne lbl_0200c696
	b lbl_0200c7b8
lbl_0200c696:
	b lbl_0200c880
lbl_0200c698:
	sub r0, r2, #5
	cmp r3, r0
	bne lbl_0200c6a0
	b lbl_0200c7c0
lbl_0200c6a0:
	b lbl_0200c880
lbl_0200c6a2:
	sub r0, r2, #2
	cmp r3, r0
	bgt lbl_0200c6b6
	blt lbl_0200c6ac
	b lbl_0200c7cc
lbl_0200c6ac:
	sub r0, r2, #3
	cmp r3, r0
	bne lbl_0200c6b4
	b lbl_0200c7c8
lbl_0200c6b4:
	b lbl_0200c880
lbl_0200c6b6:
	sub r0, r2, #1
	cmp r3, r0
	bne lbl_0200c6be
	b lbl_0200c7d0
lbl_0200c6be:
	b lbl_0200c880
lbl_0200c6c0:
	ldr r1, [pc, #0x1b0]
	cmp r3, r1
	bgt lbl_0200c726
	blt lbl_0200c6ca
	b lbl_0200c826
lbl_0200c6ca:
	sub r0, r1, #4
	cmp r3, r0
	bgt lbl_0200c70c
	blt lbl_0200c6d4
	b lbl_0200c80e
lbl_0200c6d4:
	add r0, r2, #2
	cmp r3, r0
	bgt lbl_0200c6e4
	bge lbl_0200c7dc
	add r0, r2, #1
	cmp r3, r0
	beq lbl_0200c7d8
	b lbl_0200c880
lbl_0200c6e4:
	add r0, r2, #3
	sub r0, r3, r0
	cmp r0, #9
	bhi lbl_0200c71c
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r6, r4, #3
	lsl r2, r5, #3
	lsl r6, r5, #3
	lsl r2, r6, #3
	lsl r6, r6, #3
	lsl r2, r7, #3
	lsl r6, r7, #3
	lsl r2, r0, #4
	lsl r0, r1, #4
	lsl r6, r1, #4
lbl_0200c70c:
	ldr r0, [pc, #0x168]
	cmp r3, r0
	bgt lbl_0200c71e
	blt lbl_0200c716
	b lbl_0200c81a
lbl_0200c716:
	sub r0, r0, #1
	cmp r3, r0
	beq lbl_0200c814
lbl_0200c71c:
	b lbl_0200c880
lbl_0200c71e:
	add r0, r0, #1
	cmp r3, r0
	beq lbl_0200c820
	b lbl_0200c880
lbl_0200c726:
	add r0, r1, #0
	add r0, #0x5f
	cmp r3, r0
	bgt lbl_0200c750
	add r0, r1, #0
	add r0, #0x5f
	cmp r3, r0
	blt lbl_0200c738
	b lbl_0200c83e
lbl_0200c738:
	add r0, r1, #4
	cmp r3, r0
	bgt lbl_0200c748
	bge lbl_0200c832
	add r0, r1, #2
	cmp r3, r0
	beq lbl_0200c82c
	b lbl_0200c880
lbl_0200c748:
	add r1, #0xd
	cmp r3, r1
	beq lbl_0200c838
	b lbl_0200c880
lbl_0200c750:
	add r0, r1, #0
	add r0, #0x61
	cmp r3, r0
	bgt lbl_0200c768
	add r0, r1, #0
	add r0, #0x61
	cmp r3, r0
	bge lbl_0200c84a
	add r1, #0x60
	cmp r3, r1
	beq lbl_0200c844
	b lbl_0200c880
lbl_0200c768:
	add r0, r1, #0
	add r0, #0x62
	cmp r3, r0
	bgt lbl_0200c778
	add r1, #0x62
	cmp r3, r1
	beq lbl_0200c850
	b lbl_0200c880
lbl_0200c778:
	add r1, #0x63
	cmp r3, r1
	beq lbl_0200c856
	b lbl_0200c880
	mov r4, #8
	b lbl_0200c880
	mov r4, #0x14
	b lbl_0200c880
	mov r4, #0x24
	b lbl_0200c880
	mov r4, #0x2c
	b lbl_0200c880
	mov r4, #0x34
	b lbl_0200c880
	mov r4, #0x3c
	b lbl_0200c880
	mov r4, #0x40
	b lbl_0200c880
	mov r4, #0x44
	b lbl_0200c880
	mov r4, #0x48
	b lbl_0200c880
	mov r4, #0x4c
	b lbl_0200c880
lbl_0200c7a8:
	mov r4, #0x60
	b lbl_0200c880
lbl_0200c7ac:
	mov r4, #0x6c
	b lbl_0200c880
lbl_0200c7b0:
	mov r4, #0x70
	b lbl_0200c880
lbl_0200c7b4:
	mov r4, #0x74
	b lbl_0200c880
lbl_0200c7b8:
	mov r4, #0x7c
	b lbl_0200c880
lbl_0200c7bc:
	mov r4, #0x80
	b lbl_0200c880
lbl_0200c7c0:
	mov r4, #0x84
	b lbl_0200c880
lbl_0200c7c4:
	mov r4, #0x88
	b lbl_0200c880
lbl_0200c7c8:
	mov r4, #0x90
	b lbl_0200c880
lbl_0200c7cc:
	mov r4, #0x94
	b lbl_0200c880
lbl_0200c7d0:
	mov r4, #0x98
	b lbl_0200c880
lbl_0200c7d4:
	mov r4, #0x9c
	b lbl_0200c880
lbl_0200c7d8:
	mov r4, #0xa8
	b lbl_0200c880
lbl_0200c7dc:
	mov r4, #0xb8
	b lbl_0200c880
	mov r4, #0xbc
	b lbl_0200c880
	mov r4, #0xcc
	b lbl_0200c880
	mov r4, #0xd0
	b lbl_0200c880
	mov r4, #0xd8
	b lbl_0200c880
	mov r4, #0xdc
	b lbl_0200c880
	mov r4, #0xf4
	b lbl_0200c880
	mov r4, #0xf8
	b lbl_0200c880
	add r4, r7, #0
	add r4, #0x9c
	b lbl_0200c880
	add r4, r7, #0
	add r4, #0xa8
	b lbl_0200c880
	add r4, r7, #0
	add r4, #0xac
	b lbl_0200c880
lbl_0200c80e:
	add r4, r7, #0
	add r4, #0xb0
	b lbl_0200c880
lbl_0200c814:
	mov r4, #0x46
	lsl r4, r4, #2
	b lbl_0200c880
lbl_0200c81a:
	mov r4, #0x47
	lsl r4, r4, #2
	b lbl_0200c880
lbl_0200c820:
	mov r4, #0x12
	lsl r4, r4, #4
	b lbl_0200c880
lbl_0200c826:
	add r4, r7, #0
	add r4, #0xc0
	b lbl_0200c880
lbl_0200c82c:
	add r4, r7, #0
	add r4, #0xc4
	b lbl_0200c880
lbl_0200c832:
	add r4, r7, #0
	add r4, #0xc8
	b lbl_0200c880
lbl_0200c838:
	add r4, r7, #0
	add r4, #0xe4
	b lbl_0200c880
lbl_0200c83e:
	mov r4, #0x5a
	lsl r4, r4, #2
	b lbl_0200c880
lbl_0200c844:
	mov r4, #0x5e
	lsl r4, r4, #2
	b lbl_0200c880
lbl_0200c84a:
	mov r4, #0x63
	lsl r4, r4, #2
	b lbl_0200c880
lbl_0200c850:
	mov r4, #0x1a
	lsl r4, r4, #4
	b lbl_0200c880
lbl_0200c856:
	mov r4, #0x6d
	lsl r4, r4, #2
	b lbl_0200c880
lbl_0200c85c:
	mov r4, #0x81
	lsl r4, r4, #2
	b lbl_0200c880
lbl_0200c862:
	mov r4, #0x82
	lsl r4, r4, #2
	b lbl_0200c880
	dcd 0x00002AFB
	dcd 0x00002903
	dcd 0x0000277D
	dcd 0x00002D52
	dcd 0x00002D50
lbl_0200c87c:
	mov r4, #0x83
	lsl r4, r4, #2
lbl_0200c880:
	mov r0, #0x87
	lsl r0, r0, #2
	cmp r4, r0
	bcs lbl_0200c8aa
	mov r0, #0xc
	mul r0, r4
	mov r7, #0x87
	add r5, r0
	lsl r7, r7, #2
lbl_0200c892:
	add r0, r5, #1
	add r1, r6, #0
	blx func_020882b0
	cmp r0, #0
	bne lbl_0200c8a2
	add r0, r4, #0
	pop {r3, r4, r5, r6, r7, pc}
lbl_0200c8a2:
	add r4, r4, #1
	add r5, #0xc
	cmp r4, r7
	bcc lbl_0200c892
lbl_0200c8aa:
	mov r0, #0
	mvn r0, r0
	pop {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0200c8b0(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r7, r0, #0
	add r6, r2, #0
	ldr r0, [pc, #0x27c]
	add r3, r1, #0
	mov r5, #1
	mov r4, #0
	mul r0, r3
	ldrsb r3, [r6, r4]
	mov r2, #0x64
	ldrsb r1, [r6, r5]
	mul r2, r3
	add r0, r2
	ldr r2, [pc, #0x26c]
	add r1, r0
	cmp r1, r2
	bgt lbl_0200c936
	blt lbl_0200c8d6
	b lbl_0200ca28
lbl_0200c8d6:
	ldr r0, [pc, #0x264]
	cmp r1, r0
	bgt lbl_0200c90e
	bge lbl_0200c9d8
	ldr r0, [pc, #0x260]
	cmp r1, r0
	bgt lbl_0200c8fc
	bge lbl_0200c9cc
	ldr r0, [pc, #0x25c]
	cmp r1, r0
	bgt lbl_0200c8fa
	sub r2, r0, #1
	cmp r1, r2
	blt lbl_0200c8fa
	bne lbl_0200c8f6
	b lbl_0200ca36
lbl_0200c8f6:
	cmp r1, r0
	beq lbl_0200c9c8
lbl_0200c8fa:
	b lbl_0200ca34
lbl_0200c8fc:
	ldr r0, [pc, #0x248]
	cmp r1, r0
	bgt lbl_0200c906
	beq lbl_0200c9d0
	b lbl_0200ca34
lbl_0200c906:
	ldr r0, [pc, #0x244]
	cmp r1, r0
	beq lbl_0200c9d4
	b lbl_0200ca34
lbl_0200c90e:
	ldr r3, [pc, #0x240]
	cmp r1, r3
	bgt lbl_0200c91e
	bge lbl_0200c9e0
	add r0, r0, #1
	cmp r1, r0
	beq lbl_0200c9dc
	b lbl_0200ca34
lbl_0200c91e:
	add r0, r3, #0
	add r0, #8
	cmp r1, r0
	bgt lbl_0200c92e
	add r3, #8
	cmp r1, r3
	beq lbl_0200c9e4
	b lbl_0200ca34
lbl_0200c92e:
	sub r2, #0xa
	cmp r1, r2
	beq lbl_0200c9f4
	b lbl_0200ca34
lbl_0200c936:
	ldr r0, [pc, #0x21c]
	cmp r1, r0
	bgt lbl_0200c98a
	bge lbl_0200ca24
	add r0, r2, #0
	add r0, #0x5a
	cmp r1, r0
	bgt lbl_0200c956
	add r0, r2, #0
	add r0, #0x5a
	cmp r1, r0
	bge lbl_0200c9f8
	add r0, r2, #1
	cmp r1, r0
	beq lbl_0200ca14
	b lbl_0200ca34
lbl_0200c956:
	add r0, r2, #0
	add r0, #0x67
	cmp r1, r0
	bgt lbl_0200c982
	add r2, #0x5f
	sub r0, r1, r2
	bmi lbl_0200ca34
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r6, r7, #1
	lsl r2, r0, #3
	lsl r2, r7, #1
	lsl r2, r1, #2
	lsl r6, r1, #2
	lsl r2, r2, #2
	lsl r6, r2, #2
	lsl r6, r5, #2
	lsl r6, r3, #2
lbl_0200c982:
	ldr r0, [pc, #0x1d4]
	cmp r1, r0
	beq lbl_0200ca0c
	b lbl_0200ca34
lbl_0200c98a:
	add r2, r0, #0
	add r2, #0x5c
	cmp r1, r2
	bgt lbl_0200c9b0
	add r2, r0, #0
	add r2, #0x5c
	cmp r1, r2
	bge lbl_0200ca18
	add r2, r0, #6
	cmp r1, r2
	bgt lbl_0200c9a8
	add r0, r0, #6
	cmp r1, r0
	beq lbl_0200ca2c
	b lbl_0200ca34
lbl_0200c9a8:
	add r0, #0x5b
	cmp r1, r0
	beq lbl_0200c9e8
	b lbl_0200ca34
lbl_0200c9b0:
	add r2, r0, #0
	add r2, #0x5d
	cmp r1, r2
	bgt lbl_0200c9c0
	add r0, #0x5d
	cmp r1, r0
	beq lbl_0200ca1c
	b lbl_0200ca34
lbl_0200c9c0:
	ldr r0, [pc, #0x198]
	cmp r1, r0
	beq lbl_0200ca30
	b lbl_0200ca34
lbl_0200c9c8:
	add r4, r5, #0
	b lbl_0200ca36
lbl_0200c9cc:
	mov r4, #0xa
	b lbl_0200ca36
lbl_0200c9d0:
	mov r4, #0x11
	b lbl_0200ca36
lbl_0200c9d4:
	mov r4, #0x14
	b lbl_0200ca36
lbl_0200c9d8:
	mov r4, #0x1b
	b lbl_0200ca36
lbl_0200c9dc:
	mov r4, #0x22
	b lbl_0200ca36
lbl_0200c9e0:
	mov r4, #0x28
	b lbl_0200ca36
lbl_0200c9e4:
	mov r4, #0x2c
	b lbl_0200ca36
lbl_0200c9e8:
	mov r4, #0x2f
	b lbl_0200ca36
	mov r4, #0x34
	b lbl_0200ca36
	mov r4, #0x38
	b lbl_0200ca36
lbl_0200c9f4:
	mov r4, #0x3d
	b lbl_0200ca36
lbl_0200c9f8:
	mov r4, #0x41
	b lbl_0200ca36
	mov r4, #0x4a
	b lbl_0200ca36
	mov r4, #0x4d
	b lbl_0200ca36
	mov r4, #0x51
	b lbl_0200ca36
	mov r4, #0x57
	b lbl_0200ca36
lbl_0200ca0c:
	mov r4, #0x5d
	b lbl_0200ca36
	mov r4, #0x68
	b lbl_0200ca36
lbl_0200ca14:
	mov r4, #0x6d
	b lbl_0200ca36
lbl_0200ca18:
	mov r4, #0x73
	b lbl_0200ca36
lbl_0200ca1c:
	mov r4, #0x79
	b lbl_0200ca36
	mov r4, #0x8d
	b lbl_0200ca36
lbl_0200ca24:
	mov r4, #0x9a
	b lbl_0200ca36
lbl_0200ca28:
	mov r4, #0x9f
	b lbl_0200ca36
lbl_0200ca2c:
	mov r4, #0xab
	b lbl_0200ca36
lbl_0200ca30:
	mov r4, #0xac
	b lbl_0200ca36
lbl_0200ca34:
	mov r4, #0
lbl_0200ca36:
	cmp r4, #0xc9
	bcs lbl_0200ca58
	mov r0, #0xc
	mul r0, r4
	add r5, r7, r0
lbl_0200ca40:
	add r0, r5, #3
	add r1, r6, #0
	blx func_020882b0
	cmp r0, #0
	bne lbl_0200ca50
	add r0, r4, #0
	pop {r3, r4, r5, r6, r7, pc}
lbl_0200ca50:
	add r4, r4, #1
	add r5, #0xc
	cmp r4, #0xc9
	bcc lbl_0200ca40
lbl_0200ca58:
	mov r4, #0
	mov r3, #1
	ldrsb r2, [r6, r4]
	mov r1, #0x64
	ldrsb r0, [r6, r3]
	mul r1, r2
	add r0, r1
	ldr r1, [pc, #0xf8]
	cmp r0, r1
	bgt lbl_0200caee
	blt lbl_0200ca70
	b lbl_0200cbbc
lbl_0200ca70:
	ldr r1, [pc, #0xf0]
	cmp r0, r1
	bgt lbl_0200caae
	blt lbl_0200ca7a
	b lbl_0200cbd2
lbl_0200ca7a:
	add r2, r1, #0
	sub r2, #0x63
	cmp r0, r2
	bgt lbl_0200ca8c
	sub r1, #0x63
	cmp r0, r1
	bne lbl_0200ca8a
	b lbl_0200cb94
lbl_0200ca8a:
	b lbl_0200cbcc
lbl_0200ca8c:
	add r2, r1, #0
	sub r2, #0x58
	cmp r0, r2
	bgt lbl_0200caac
	add r2, r1, #0
	sub r2, #0x59
	cmp r0, r2
	blt lbl_0200caac
	add r2, r1, #0
	sub r2, #0x59
	cmp r0, r2
	bne lbl_0200caa6
	b lbl_0200cbc0
lbl_0200caa6:
	sub r1, #0x58
	cmp r0, r1
	beq lbl_0200cbac
lbl_0200caac:
	b lbl_0200cbcc
lbl_0200caae:
	add r2, r1, #0
	add r2, #0xf
	cmp r0, r2
	bgt lbl_0200cae6
	add r1, r1, #1
	sub r1, r0, r1
	bmi lbl_0200caec
	add r1, r1
	add r1, pc
	ldrh r1, [r1, #6]
	lsl r1, r1, #0x10
	asr r1, r1, #0x10
	add pc, r1
	lsl r2, r4, #2
	lsl r2, r5, #2
	lsl r2, r6, #2
	lsl r6, r6, #2
	lsl r2, r0, #4
	lsl r2, r7, #2
	lsl r2, r0, #4
	lsl r6, r0, #3
	lsl r6, r1, #3
	lsl r2, r2, #3
	lsl r6, r2, #3
	lsl r2, r3, #3
	lsl r6, r5, #3
	lsl r6, r7, #2
	lsl r6, r7, #3
lbl_0200cae6:
	ldr r1, [pc, #0x80]
	cmp r0, r1
	beq lbl_0200cba8
lbl_0200caec:
	b lbl_0200cbcc
lbl_0200caee:
	add r2, r1, #0
	add r2, #0x5a
	cmp r0, r2
	bgt lbl_0200cb14
	add r2, r1, #0
	add r2, #0x5a
	cmp r0, r2
	bge lbl_0200cb78
	add r2, r1, #6
	cmp r0, r2
	bgt lbl_0200cb0c
	add r1, r1, #6
	cmp r0, r1
	beq lbl_0200cbc4
	b lbl_0200cbcc
lbl_0200cb0c:
	add r1, #0x59
	cmp r0, r1
	beq lbl_0200cb70
	b lbl_0200cbcc
lbl_0200cb14:
	add r2, r1, #0
	add r2, #0x5c
	cmp r0, r2
	bgt lbl_0200cb2c
	add r2, r1, #0
	add r2, #0x5c
	cmp r0, r2
	bge lbl_0200cbb0
	add r1, #0x5b
	cmp r0, r1
	beq lbl_0200cb8c
	b lbl_0200cbcc
lbl_0200cb2c:
	add r1, #0x5d
	cmp r0, r1
	beq lbl_0200cbb4
	b lbl_0200cbcc
	dcd 0x00002710
	dcd 0x0000EA68
	dcd 0x00009CA4
	dcd 0x000054C1
	dcd 0x00004E82
	dcd 0x00007593
	dcd 0x00007BD2
	dcd 0x0000C3B7
	dcd 0x0000F0A8
	dcd 0x0000F0A6
	dcd 0x000111E0
	dcd 0x00002D58
	dcd 0x00002771
	dcd 0x00002D56
	dcd 0xE0301C1C
lbl_0200cb70:
	dcd 0xE02E240A
	dcd 0xE02C2411
lbl_0200cb78:
	dcd 0xE02A2414
	dcd 0xE028241B
	dcd 0xE0262422
	dcd 0xE0242428
	dcd 0xE022242C
lbl_0200cb8c:
	dcd 0xE020242F
	dcd 0xE01E2434
lbl_0200cb94:
	dcd 0xE01C243D
	dcd 0xE01A244A
	dcd 0xE018244D
	dcd 0xE0162451
	dcd 0xE0142457
lbl_0200cba8:
	dcd 0xE012245D
lbl_0200cbac:
	dcd 0xE010246D
lbl_0200cbb0:
	dcd 0xE00E2473
lbl_0200cbb4:
	dcd 0xE00C2479
	dcd 0xE00A248D
lbl_0200cbbc:
	dcd 0xE008249A
lbl_0200cbc0:
	dcd 0xE006249F
lbl_0200cbc4:
	dcd 0xE00424AB
	dcd 0xE00224AC
lbl_0200cbcc:
	dcd 0x43C02000
	dcd 0x0000BDF8
lbl_0200cbd2:
	dcd 0xD20E2CC9
	dcd 0x4360200C
	dcd 0x1CE8183D
	dcd 0xF07B1C31
	dcd 0x2800EB66
	dcd 0x1C20D101
	dcd 0x1C64BDF8
	dcd 0x2CC9350C
	dcd 0x2000D3F3
	dcd 0xBDF843C0
}

extern "C" asm void pad_0200cbfa(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200cbfc(void)
{
	push {r4, lr}
	add r4, r0, #0
	mov r1, #0
	cmp r4, #0xb3
	bcs lbl_0200cc0a
	ldr r1, [pc, #0x3c]
	b lbl_0200cc24
lbl_0200cc0a:
	cmp r4, #0xf3
	bcs lbl_0200cc12
	ldr r1, [pc, #0x38]
	b lbl_0200cc24
lbl_0200cc12:
	ldr r0, [pc, #0x38]
	cmp r4, r0
	bcs lbl_0200cc1c
	ldr r1, [pc, #0x34]
	b lbl_0200cc24
lbl_0200cc1c:
	add r0, #0x2a
	cmp r4, r0
	bcs lbl_0200cc24
	ldr r1, [pc, #0x30]
lbl_0200cc24:
	ldr r0, [pc, #0x30]
	blx func_02057f58
	ldr r1, [pc, #0x30]
	blx func_02057f50
	ldr r1, [pc, #0x2c]
	mov r3, #0
lbl_0200cc34:
	ldrh r2, [r0]
	cmp r4, r2
	beq lbl_0200cc42
	add r3, r3, #1
	add r0, #0x9c
	cmp r3, r1
	bcc lbl_0200cc34
lbl_0200cc42:
	pop {r4, pc}
	dcd 0x020BC584
	dcd 0x020BC5A8
	dcd 0x00000132
	dcd 0x020BC5CC
	dcd 0x020BC5F0
	dcd 0x020C7830
	dcd 0x0000EA9C
	dcd 0x00000742
}

extern "C" asm void func_0200cc64(void)
{
	push {r4, r5}
	mov r4, #0
	mov r5, #1
	ldrsb r2, [r0, r4]
	mov r1, #0x64
	ldrsb r3, [r0, r5]
	mul r1, r2
	ldr r2, [pc, #0x198]
	add r3, r1
	cmp r3, r2
	bgt lbl_0200cce0
	blt lbl_0200cc7e
	b lbl_0200cd98
lbl_0200cc7e:
	ldr r1, [pc, #0x190]
	cmp r3, r1
	bgt lbl_0200ccbe
	bge lbl_0200cd58
	mov r0, #0x9e
	lsl r0, r0, #6
	cmp r3, r0
	bgt lbl_0200ccb6
	blt lbl_0200cc92
	b lbl_0200cdc8
lbl_0200cc92:
	sub r0, #0x70
	sub r0, r3, r0
	cmp r0, #7
	bhi lbl_0200ccbc
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r0, r7, #2
	lsl r2, r3, #5
	lsl r6, r5, #2
	lsl r0, r2, #3
	lsl r2, r3, #5
	lsl r0, r1, #4
	lsl r2, r3, #5
	lsl r0, r3, #4
lbl_0200ccb6:
	ldr r0, [pc, #0x15c]
	cmp r3, r0
	beq lbl_0200cda4
lbl_0200ccbc:
	b lbl_0200ce02
lbl_0200ccbe:
	sub r0, r2, #3
	cmp r3, r0
	bgt lbl_0200ccce
	bge lbl_0200cda0
	add r0, r1, #5
	cmp r3, r0
	beq lbl_0200cd8c
	b lbl_0200ce02
lbl_0200ccce:
	sub r0, r2, #2
	cmp r3, r0
	bgt lbl_0200ccd8
	beq lbl_0200cd90
	b lbl_0200ce02
lbl_0200ccd8:
	sub r0, r2, #1
	cmp r3, r0
	beq lbl_0200cd94
	b lbl_0200ce02
lbl_0200cce0:
	ldr r1, [pc, #0x134]
	cmp r3, r1
	bgt lbl_0200cd28
	bge lbl_0200cdb8
	sub r0, r1, #6
	cmp r3, r0
	bgt lbl_0200cd20
	bge lbl_0200cd5c
	add r0, r2, #2
	sub r0, r3, r0
	cmp r0, #0xd
	bhi lbl_0200cd26
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r6, r3, #1
	lsl r4, r7, #3
	lsl r2, r0, #2
	lsl r6, r7, #1
	lsl r6, r6, #1
	lsl r2, r7, #1
	lsl r4, r7, #3
	lsl r6, r4, #1
	lsl r2, r5, #1
	lsl r6, r5, #1
	lsl r6, r4, #2
	lsl r2, r4, #2
	lsl r6, r0, #3
	lsl r6, r6, #2
lbl_0200cd20:
	ldr r0, [pc, #0xf8]
	cmp r3, r0
	beq lbl_0200cd68
lbl_0200cd26:
	b lbl_0200ce02
lbl_0200cd28:
	add r2, r1, #0
	add r2, #0xb
	cmp r3, r2
	bgt lbl_0200cd40
	add r2, r1, #0
	add r2, #0xb
	cmp r3, r2
	bge lbl_0200cdd0
	add r0, r1, #5
	cmp r3, r0
	beq lbl_0200cdc4
	b lbl_0200ce02
lbl_0200cd40:
	add r0, r1, #0
	add r0, #0x5e
	cmp r3, r0
	bgt lbl_0200cd50
	add r1, #0x5e
	cmp r3, r1
	beq lbl_0200cd9c
	b lbl_0200ce02
lbl_0200cd50:
	add r1, #0x60
	cmp r3, r1
	beq lbl_0200cdb4
	b lbl_0200ce02
lbl_0200cd58:
	add r4, r5, #0
	b lbl_0200ce02
lbl_0200cd5c:
	mov r4, #2
	b lbl_0200ce02
	mov r4, #3
	b lbl_0200ce02
	mov r4, #4
	b lbl_0200ce02
lbl_0200cd68:
	mov r4, #5
	b lbl_0200ce02
	mov r4, #6
	b lbl_0200ce02
	mov r4, #7
	b lbl_0200ce02
	mov r4, #8
	b lbl_0200ce02
	mov r4, #9
	b lbl_0200ce02
	mov r4, #0xa
	b lbl_0200ce02
	mov r4, #0xb
	b lbl_0200ce02
	mov r4, #0xc
	b lbl_0200ce02
	mov r4, #0xd
	b lbl_0200ce02
lbl_0200cd8c:
	mov r4, #0xe
	b lbl_0200ce02
lbl_0200cd90:
	mov r4, #0xf
	b lbl_0200ce02
lbl_0200cd94:
	mov r4, #0x10
	b lbl_0200ce02
lbl_0200cd98:
	mov r4, #0x11
	b lbl_0200ce02
lbl_0200cd9c:
	mov r4, #0x12
	b lbl_0200ce02
lbl_0200cda0:
	mov r4, #0x13
	b lbl_0200ce02
lbl_0200cda4:
	mov r4, #0x14
	b lbl_0200ce02
	mov r4, #0x15
	b lbl_0200ce02
	mov r4, #0x16
	b lbl_0200ce02
	mov r4, #0x17
	b lbl_0200ce02
lbl_0200cdb4:
	mov r4, #0x18
	b lbl_0200ce02
lbl_0200cdb8:
	mov r4, #0x19
	b lbl_0200ce02
	mov r4, #0x1a
	b lbl_0200ce02
	mov r4, #0x1b
	b lbl_0200ce02
lbl_0200cdc4:
	mov r4, #0x1c
	b lbl_0200ce02
lbl_0200cdc8:
	mov r4, #0x1d
	b lbl_0200ce02
	mov r4, #0x1e
	b lbl_0200ce02
lbl_0200cdd0:
	mov r1, #2
	ldrsb r0, [r0, r1]
	sub r0, #0x31
	cmp r0, #4
	bhi lbl_0200ce02
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r0, r1
	mov r4, r1
	mov r0, r2
	mov r4, r2
	mov r0, r3
	mov r4, #0x1f
	b lbl_0200ce02
	mov r4, #0x20
	b lbl_0200ce02
	mov r4, #0x21
	b lbl_0200ce02
	mov r4, #0x22
	b lbl_0200ce02
	mov r4, #0x23
lbl_0200ce02:
	mov r0, #0x34
	mul r0, r4
	pop {r4, r5}
	bx lr
	mov r8, r8
	dcd 0x00002AF8
	dcd 0x00002903
	dcd 0x00002901
	dcd 0x00002D54
	dcd 0x00002D51
}

extern "C" asm void func_0200ce20(void)
{
	push {r3, r4}
	mov r1, #0
	mov r2, #1
	ldrsb r3, [r0, r1]
	ldrsb r4, [r0, r2]
	mov r0, #0x64
	mul r0, r3
	ldr r3, [pc, #0xe0]
	add r0, r4
	cmp r0, r3
	bgt lbl_0200ce7a
	bge lbl_0200cec0
	ldr r3, [pc, #0xd8]
	cmp r0, r3
	bgt lbl_0200ce68
	bge lbl_0200cf04
	add r2, r3, #0
	sub r2, #0xd1
	cmp r0, r2
	bgt lbl_0200cf06
	add r2, r3, #0
	sub r2, #0xd3
	cmp r0, r2
	blt lbl_0200cf06
	add r2, r3, #0
	sub r2, #0xd3
	cmp r0, r2
	beq lbl_0200cedc
	add r2, r3, #0
	sub r2, #0xd2
	cmp r0, r2
	beq lbl_0200ceec
	sub r3, #0xd1
	cmp r0, r3
	beq lbl_0200cef8
	b lbl_0200cf06
lbl_0200ce68:
	ldr r2, [pc, #0xac]
	cmp r0, r2
	bgt lbl_0200ce72
	cmp r0, r2
	b lbl_0200cf06
lbl_0200ce72:
	add r2, r2, #2
	cmp r0, r2
	beq lbl_0200ced8
	b lbl_0200cf06
lbl_0200ce7a:
	add r2, r3, #0
	add r2, #0xa
	cmp r0, r2
	bgt lbl_0200ceae
	add r2, r3, #2
	sub r2, r0, r2
	bmi lbl_0200cea6
	add r2, r2
	add r2, pc
	ldrh r2, [r2, #6]
	lsl r2, r2, #0x10
	asr r2, r2, #0x10
	add pc, r2
	mov r2, r6
	mov r6, r6
	mov r2, r7
	lsl r6, r1, #1
	lsl r2, r2, #1
	lsl r2, r3, #1
	lsl r6, r3, #1
	lsl r6, r4, #1
	lsl r2, r5, #1
lbl_0200cea6:
	ldr r2, [pc, #0x74]
	cmp r0, r2
	beq lbl_0200cec4
	b lbl_0200cf06
lbl_0200ceae:
	ldr r2, [pc, #0x70]
	cmp r0, r2
	bgt lbl_0200ceb8
	beq lbl_0200ced4
	b lbl_0200cf06
lbl_0200ceb8:
	add r2, #0x64
	cmp r0, r2
	beq lbl_0200cee0
	b lbl_0200cf06
lbl_0200cec0:
	add r1, r2, #0
	b lbl_0200cf06
lbl_0200cec4:
	mov r1, #2
	b lbl_0200cf06
	mov r1, #3
	b lbl_0200cf06
	mov r1, #4
	b lbl_0200cf06
	mov r1, #5
	b lbl_0200cf06
lbl_0200ced4:
	mov r1, #6
	b lbl_0200cf06
lbl_0200ced8:
	mov r1, #7
	b lbl_0200cf06
lbl_0200cedc:
	mov r1, #8
	b lbl_0200cf06
lbl_0200cee0:
	mov r1, #9
	b lbl_0200cf06
	mov r1, #0xa
	b lbl_0200cf06
	mov r1, #0xb
	b lbl_0200cf06
lbl_0200ceec:
	mov r1, #0xc
	b lbl_0200cf06
	mov r1, #0xd
	b lbl_0200cf06
	mov r1, #0xe
	b lbl_0200cf06
lbl_0200cef8:
	mov r1, #0xf
	b lbl_0200cf06
	mov r1, #0x10
	b lbl_0200cf06
	mov r1, #0x11
	b lbl_0200cf06
lbl_0200cf04:
	mov r1, #0x12
lbl_0200cf06:
	mov r0, #0x34
	mul r0, r1
	pop {r3, r4}
	bx lr
	mov r8, r8
	dcd 0x00002AF5
	dcd 0x000027E2
	dcd 0x00002901
	dcd 0x00002AF6
	dcd 0x00002D4E
}

extern "C" asm void func_0200cf24(void)
{
	push {r4, lr}
	add r4, r0, #0
	ldr r0, [pc, #0x24]
	cmp r4, r0
	bcs lbl_0200cf30
	ldr r1, [pc, #0x24]
lbl_0200cf30:
	ldr r0, [pc, #0x24]
	blx func_02057f58
	ldr r1, [pc, #0x24]
	blx func_02057f50
	ldr r1, [pc, #0x10]
	mov r3, #0
lbl_0200cf40:
	ldrh r2, [r0]
	cmp r4, r2
	beq lbl_0200cf4e
	add r3, r3, #1
	add r0, #0xa4
	cmp r3, r1
	bcc lbl_0200cf40
lbl_0200cf4e:
	pop {r4, pc}
	dcd 0x0000015B
	dcd 0x020BC614
	dcd 0x020C7980
	dcd 0x02CE0284
}

extern "C" asm void func_0200cf60(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r6, r1, #0
	add r7, r0, #0
	ldr r1, [pc, #0x288]
	add r0, r6, #0
	blx func_020882a4
	cmp r0, #0
	beq lbl_0200cf7a
	mov r0, #5
	ldrsb r0, [r6, r0]
	mov r1, #4
	b lbl_0200cf80
lbl_0200cf7a:
	mov r0, #4
	ldrsb r0, [r6, r0]
	mov r1, #3
lbl_0200cf80:
	ldrsb r2, [r6, r1]
	mov r1, #0x64
	mul r1, r2
	add r4, r0, r1
	ldr r1, [pc, #0x268]
	add r0, r6, #0
	blx func_020882a4
	cmp r0, #0
	beq lbl_0200cf96
	ldr r4, [pc, #0x260]
lbl_0200cf96:
	ldr r1, [pc, #0x264]
	add r0, r6, #0
	blx func_020882a4
	cmp r0, #0
	beq lbl_0200cfa4
	ldr r4, [pc, #0x254]
lbl_0200cfa4:
	ldr r0, [pc, #0x258]
	mov r5, #0
	cmp r4, r0
	bgt lbl_0200d084
	blt lbl_0200cfb0
	b lbl_0200d128
lbl_0200cfb0:
	ldr r2, [pc, #0x250]
	cmp r4, r2
	bgt lbl_0200d01c
	blt lbl_0200cfba
	b lbl_0200d150
lbl_0200cfba:
	sub r0, r2, #4
	cmp r4, r0
	bgt lbl_0200cffe
	blt lbl_0200cfc4
	b lbl_0200d140
lbl_0200cfc4:
	mov r0, #0x96
	lsl r0, r0, #6
	cmp r4, r0
	bgt lbl_0200cfd2
	bne lbl_0200cfd0
	b lbl_0200d134
lbl_0200cfd0:
	b lbl_0200d1ca
lbl_0200cfd2:
	sub r2, #0x67
	sub r0, r4, r2
	cmp r0, #0xb
	bhi lbl_0200d010
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r4, r0, #7
	lsl r0, r1, #7
	lsl r2, r4, #7
	lsl r4, r1, #7
	lsl r2, r4, #7
	lsl r2, r4, #7
	lsl r2, r4, #7
	lsl r2, r4, #7
	lsl r0, r2, #7
	lsl r2, r4, #7
	lsl r4, r2, #7
	lsl r0, r3, #7
lbl_0200cffe:
	ldr r0, [pc, #0x208]
	cmp r4, r0
	bgt lbl_0200d012
	blt lbl_0200d008
	b lbl_0200d148
lbl_0200d008:
	sub r0, r0, #1
	cmp r4, r0
	bne lbl_0200d010
	b lbl_0200d144
lbl_0200d010:
	b lbl_0200d1ca
lbl_0200d012:
	add r0, r0, #1
	cmp r4, r0
	bne lbl_0200d01a
	b lbl_0200d14c
lbl_0200d01a:
	b lbl_0200d1ca
lbl_0200d01c:
	ldr r1, [pc, #0x1ec]
	cmp r4, r1
	bgt lbl_0200d070
	bge lbl_0200d124
	add r0, r1, #0
	sub r0, #0x11
	cmp r4, r0
	bgt lbl_0200d066
	sub r1, #0x11
	cmp r4, r1
	blt lbl_0200d034
	b lbl_0200d1c4
lbl_0200d034:
	add r0, r2, #2
	sub r0, r4, r0
	cmp r0, #0xe
	bhi lbl_0200d06e
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r2, r1, #4
	lsl r6, r1, #4
	lsl r2, r2, #4
	lsl r6, r2, #4
	lsl r2, r3, #4
	lsl r6, r3, #4
	lsl r2, r4, #4
	lsl r6, r4, #4
	lsl r2, r5, #4
	lsl r6, r5, #4
	lsl r0, r0, #6
	lsl r0, r0, #6
	lsl r0, r0, #6
	lsl r0, r0, #6
	lsl r6, r5, #3
lbl_0200d066:
	ldr r0, [pc, #0x1a8]
	cmp r4, r0
	bne lbl_0200d06e
	b lbl_0200d1c8
lbl_0200d06e:
	b lbl_0200d1ca
lbl_0200d070:
	ldr r1, [pc, #0x1a0]
	cmp r4, r1
	bgt lbl_0200d07e
	bge lbl_0200d12c
	sub r0, r1, #3
	cmp r4, r0
	b lbl_0200d1ca
lbl_0200d07e:
	sub r0, r0, #1
	cmp r4, r0
	b lbl_0200d1ca
lbl_0200d084:
	add r1, r0, #0
	add r1, #0xd
	cmp r4, r1
	bgt lbl_0200d0dc
	add r1, r0, #0
	add r1, #0xd
	cmp r4, r1
	blt lbl_0200d096
	b lbl_0200d1a8
lbl_0200d096:
	add r1, r0, #0
	add r1, #9
	cmp r4, r1
	bgt lbl_0200d0bc
	add r1, r0, #0
	add r1, #9
	cmp r4, r1
	bge lbl_0200d198
	add r1, r0, #5
	cmp r4, r1
	bgt lbl_0200d0b4
	add r0, r0, #5
	cmp r4, r0
	beq lbl_0200d190
	b lbl_0200d1ca
lbl_0200d0b4:
	add r0, r0, #7
	cmp r4, r0
	beq lbl_0200d194
	b lbl_0200d1ca
lbl_0200d0bc:
	add r1, r0, #0
	add r1, #0xb
	cmp r4, r1
	bgt lbl_0200d0d4
	add r1, r0, #0
	add r1, #0xb
	cmp r4, r1
	bge lbl_0200d1a0
	add r0, #0xa
	cmp r4, r0
	beq lbl_0200d19c
	b lbl_0200d1ca
lbl_0200d0d4:
	add r0, #0xc
	cmp r4, r0
	beq lbl_0200d1a4
	b lbl_0200d1ca
lbl_0200d0dc:
	add r1, r0, #0
	add r1, #0x63
	cmp r4, r1
	bgt lbl_0200d10c
	add r1, r0, #0
	add r1, #0x63
	cmp r4, r1
	bge lbl_0200d188
	add r1, r0, #0
	add r1, #0x61
	cmp r4, r1
	bgt lbl_0200d104
	add r1, r0, #0
	add r1, #0x61
	cmp r4, r1
	bge lbl_0200d180
	add r0, #0x60
	cmp r4, r0
	beq lbl_0200d17c
	b lbl_0200d1ca
lbl_0200d104:
	add r0, #0x62
	cmp r4, r0
	beq lbl_0200d184
	b lbl_0200d1ca
lbl_0200d10c:
	ldr r1, [pc, #0xe8]
	cmp r4, r1
	bgt lbl_0200d11c
	bge lbl_0200d130
	add r0, #0x64
	cmp r4, r0
	beq lbl_0200d18c
	b lbl_0200d1ca
lbl_0200d11c:
	add r1, #0xc5
	cmp r4, r1
	beq lbl_0200d13c
	b lbl_0200d1ca
lbl_0200d124:
	mov r5, #4
	b lbl_0200d1ca
lbl_0200d128:
	mov r5, #7
	b lbl_0200d1ca
lbl_0200d12c:
	mov r5, #0xa
	b lbl_0200d1ca
lbl_0200d130:
	mov r5, #0xd
	b lbl_0200d1ca
lbl_0200d134:
	mov r5, #0x11
	b lbl_0200d1ca
	mov r5, #0x15
	b lbl_0200d1ca
lbl_0200d13c:
	mov r5, #0x16
	b lbl_0200d1ca
lbl_0200d140:
	mov r5, #0x18
	b lbl_0200d1ca
lbl_0200d144:
	mov r5, #0x1b
	b lbl_0200d1ca
lbl_0200d148:
	mov r5, #0x1c
	b lbl_0200d1ca
lbl_0200d14c:
	mov r5, #0x1d
	b lbl_0200d1ca
lbl_0200d150:
	mov r5, #0x1f
	b lbl_0200d1ca
	mov r5, #0x20
	b lbl_0200d1ca
	mov r5, #0x21
	b lbl_0200d1ca
	mov r5, #0x22
	b lbl_0200d1ca
	mov r5, #0x23
	b lbl_0200d1ca
	mov r5, #0x24
	b lbl_0200d1ca
	mov r5, #0x25
	b lbl_0200d1ca
	mov r5, #0x26
	b lbl_0200d1ca
	mov r5, #0x28
	b lbl_0200d1ca
	mov r5, #0x29
	b lbl_0200d1ca
	mov r5, #0x2a
	b lbl_0200d1ca
lbl_0200d17c:
	mov r5, #0x2b
	b lbl_0200d1ca
lbl_0200d180:
	mov r5, #0x43
	b lbl_0200d1ca
lbl_0200d184:
	mov r5, #0x47
	b lbl_0200d1ca
lbl_0200d188:
	mov r5, #0x4a
	b lbl_0200d1ca
lbl_0200d18c:
	mov r5, #0x51
	b lbl_0200d1ca
lbl_0200d190:
	mov r5, #0x57
	b lbl_0200d1ca
lbl_0200d194:
	mov r5, #0x5a
	b lbl_0200d1ca
lbl_0200d198:
	mov r5, #0x5d
	b lbl_0200d1ca
lbl_0200d19c:
	mov r5, #0x5e
	b lbl_0200d1ca
lbl_0200d1a0:
	mov r5, #0x5f
	b lbl_0200d1ca
lbl_0200d1a4:
	mov r5, #0x60
	b lbl_0200d1ca
lbl_0200d1a8:
	mov r5, #0x61
	b lbl_0200d1ca
	mov r5, #0x62
	b lbl_0200d1ca
	mov r5, #0x63
	b lbl_0200d1ca
	mov r5, #0x69
	b lbl_0200d1ca
	mov r5, #0x6c
	b lbl_0200d1ca
	mov r5, #0x6d
	b lbl_0200d1ca
	mov r5, #0x7c
	b lbl_0200d1ca
lbl_0200d1c4:
	mov r5, #0x7e
	b lbl_0200d1ca
lbl_0200d1c8:
	mov r5, #0x81
lbl_0200d1ca:
	cmp r5, #0x8a
	bcs lbl_0200d1ea
	lsl r0, r5, #4
	add r4, r7, r0
lbl_0200d1d2:
	add r0, r4, #3
	add r1, r6, #0
	blx func_020882b0
	cmp r0, #0
	bne lbl_0200d1e2
	add r0, r5, #0
	pop {r3, r4, r5, r6, r7, pc}
lbl_0200d1e2:
	add r5, r5, #1
	add r4, #0x10
	cmp r5, #0x8a
	bcc lbl_0200d1d2
lbl_0200d1ea:
	mov r0, #0
	mvn r0, r0
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x020BC638
	dcd 0x020BC640
	dcd 0x00002EE0
	dcd 0x020BC64C
	dcd 0x00002D51
	dcd 0x00002775
	dcd 0x00002773
	dcd 0x00002B08
	dcd 0x00002B05
	dcd 0x00002C2F
}

extern "C" asm void func_0200d218(void)
{
	bx lr
}

extern "C" asm void pad_0200d21a(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200d21c(void)
{
	bx lr
}

extern "C" asm void pad_0200d21e(void)
{
	dcd 0x00000000
}
