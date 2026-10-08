; Hand-written Metrowerks runtime routines. Branches retain symbolic targets.
.text
.arm
.global _dadd
.type _dadd, @function
.global _ll_ufrom_d
.type _ll_ufrom_d, @function
.global _dmul
.type _dmul, @function
.global _dsub
.type _dsub, @function
.global _fadd
.type _fadd, @function
.global func_02005198
.type func_02005198, @function
.global _dgr
.type _dgr, @function
.global _dls
.type _dls, @function
.global _deq
.type _deq, @function
.global _fgeq
.type _fgeq, @function
.global _fgr
.type _fgr, @function
.global _fls
.type _fls, @function
.global _fdiv
.type _fdiv, @function
.global _f2d
.type _f2d, @function
.global _ffix
.type _ffix, @function
.global _ffixu
.type _ffixu, @function
.global _fflt
.type _fflt, @function
.global _ffltu
.type _ffltu, @function
.global _fmul
.type _fmul, @function
.global _fsub
.type _fsub, @function
.global func_02004bb0
.type func_02004bb0, @function
.global func_02005474
.type func_02005474, @function
.global func_02005ba0
.type func_02005ba0, @function
_dadd:
    stmfd sp!, {r4, lr}
    eors r12, r1, r3
    eormi r3, r3, #0x80000000
    bmi .L_shared_02004bd8
.L_shared_020044b8:
    subs r12, r0, r2
    sbcs lr, r1, r3
    bhs L_20044d4
    adds r2, r2, r12
    adc r3, r3, lr
    subs r0, r0, r12
    sbc r1, r1, lr
L_20044d4:
    mov lr, #0x80000000
    mov r12, r1, lsr #0x14
    orr r1, lr, r1, lsl #11
    orr r1, r1, r0, lsr #21
    mov r0, r0, lsl #0xb
    movs r4, r12, lsl #0x15
    cmnne r4, #0x200000
    beq L_20045d0
    mov r4, r3, lsr #0x14
    orr r3, lr, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs lr, r4, lsl #0x15
    beq L_2004618
L_200450c:
    subs r4, r12, r4
    beq L_2004564
    cmp r4, #0x20
    ble L_2004548
    cmp r4, #0x38
    movge r4, #0x3f
    sub r4, r4, #0x20
    rsb lr, r4, #0x20
    orrs lr, r2, r3, lsl lr
    mov r2, r3, lsr r4
    orrne r2, r2, #1
    adds r0, r0, r2
    adcs r1, r1, #0
    blo L_200458c
    b L_2004570
L_2004548:
    rsb lr, r4, #0x20
    movs lr, r2, lsl lr
    rsb lr, r4, #0x20
    mov r2, r2, lsr r4
    orr r2, r2, r3, lsl lr
    mov r3, r3, lsr r4
    orrne r2, r2, #1
L_2004564:
    adds r0, r0, r2
    adcs r1, r1, r3
    blo L_200458c
L_2004570:
    add r12, r12, #1
    and r4, r0, #1
    movs r1, r1, rrx
    orr r0, r4, r0, rrx
    mov lr, r12, lsl #0x15
    cmn lr, #0x200000
    beq L_200479c
L_200458c:
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    mov r1, r1, lsr #0xc
    orr r1, r1, r12, lsl #20
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andeqs r2, r0, #1
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmfd sp!, {r4, lr}
    bx lr
L_20045d0:
    cmp r12, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bics r12, r12, #0x800
    beq L_200463c
    orrs r4, r0, r1, lsl #1
    bne L_2004778
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    beq L_2004764
    cmn r4, #0x200000
    bne L_2004764
    orrs r4, r2, r3, lsl #1
    beq L_2004764
    b L_2004778
L_2004618:
    cmp r4, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bic r12, r12, #0x800
    bics r4, r4, #0x800
    beq L_20046a8
    orrs r4, r2, r3, lsl #1
    bne L_2004778
    b L_2004764
L_200463c:
    orrs r4, r0, r1, lsl #1
    beq L_200467c
    mov r12, #1
    bic r1, r1, #0x80000000
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    cmnne r4, #0x200000
    mov r4, r4, lsr #0x15
    orr r4, r4, lr, lsr #20
    beq L_2004618
    orr r3, r3, #0x80000000
    orr r12, r12, lr, lsr #20
    b L_200450c
L_200467c:
    mov r12, r3, lsr #0x14
    mov r1, r3, lsl #0xb
    orr r1, r1, r2, lsr #21
    mov r0, r2, lsl #0xb
    movs r4, r12, lsl #0x15
    beq L_2004730
    cmn r4, #0x200000
    bne L_2004730
    orrs r4, r0, r1, lsl #1
    beq L_2004764
    b L_200477c
L_20046a8:
    orrs r4, r2, r3, lsl #1
    beq L_2004740
    mov r4, #1
    bic r3, r3, #0x80000000
    cmp r1, #0
    bpl L_20046cc
    orr r12, r12, lr, lsr #20
    orr r4, r4, lr, lsr #20
    b L_200450c
L_20046cc:
    adds r0, r0, r2
    adcs r1, r1, r3
    blo L_20046ec
    add r12, r12, #1
    and r4, r0, #1
    movs r1, r1, rrx
    mov r0, r0, rrx
    orr r0, r0, r4
L_20046ec:
    cmp r1, #0
    subges r12, r12, #1
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andeqs r2, r0, #1
    ldmeqfd sp!, {r4, lr}
    bxeq lr
L_2004730:
    mov r1, r3
    mov r0, r2
    ldmfd sp!, {r4, lr}
    bx lr
L_2004740:
    cmp r1, #0
    subges r12, r12, #1
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmfd sp!, {r4, lr}
    bx lr
L_2004764:
    ldr r1, [pc, #0x50]
    orr r1, lr, r1
    mov r0, #0
    ldmfd sp!, {r4, lr}
    bx lr
L_2004778:
    mov r1, r3
L_200477c:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
L_200479c:
    cmp r12, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    ldr r1, [pc, #0xc]
    orr r1, lr, r1
    mov r0, #0
    ldmfd sp!, {r4, lr}
    bx lr
    .word 0x7ff00000
_ll_ufrom_d:
    tst r1, #0x80000000
    bne L_2004824
    ldr r2, [pc, #0x78]
    subs r2, r2, r1, lsr #20
    blt L_200483c
    cmp r2, #0x40
    bge L_2004818
    mov r12, r1, lsl #0xb
    orr r12, r12, #0x80000000
    orr r12, r12, r0, lsr #21
    cmp r2, #0x20
    ble L_2004800
    sub r2, r2, #0x20
    mov r1, #0
    mov r0, r12, lsr r2
    bx lr
L_2004800:
    mov r3, r0, lsl #0xb
    mov r1, r12, lsr r2
    mov r0, r3, lsr r2
    rsb r2, r2, #0x20
    orr r0, r0, r12, lsl r2
    bx lr
L_2004818:
    mov r1, #0
    mov r0, #0
    bx lr
L_2004824:
    cmn r1, #0x100000
    cmpeq r0, #0
    bhi L_200483c
    mov r1, #0
    mov r0, #0
    bx lr
L_200483c:
    mvn r1, #0
    mvn r0, #0
    bx lr
    .word 0x0000043e
_dmul:
    stmfd sp!, {r4, r5, r6, r7, lr}
    eor lr, r1, r3
    and lr, lr, #0x80000000
    mov r12, r1, lsr #0x14
    mov r1, r1, lsl #0xb
    orr r1, r1, r0, lsr #21
    mov r0, r0, lsl #0xb
    movs r6, r12, lsl #0x15
    cmnne r6, #0x200000
    beq L_2004954
    orr r1, r1, #0x80000000
    bic r12, r12, #0x800
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r5, r4, lsl #0x15
    cmnne r5, #0x200000
    beq L_200499c
    orr r3, r3, #0x80000000
    bic r4, r4, #0x800
L_20048a0:
    add r12, r4, r12
    umull r5, r4, r0, r2
    umull r7, r6, r0, r3
    adds r4, r7, r4
    adc r6, r6, #0
    umull r7, r0, r1, r2
    adds r4, r7, r4
    adcs r0, r0, r6
    umull r7, r2, r1, r3
    adc r1, r2, #0
    adds r0, r0, r7
    adc r1, r1, #0
    orrs r4, r4, r5
    orrne r0, r0, #1
    cmp r1, #0
    blt L_20048ec
    sub r12, r12, #1
    adds r0, r0, r0
    adc r1, r1, r1
L_20048ec:
    add r12, r12, #2
    subs r12, r12, #0x400
    bmi L_2004a88
    beq L_2004a88
    mov r6, r12, lsl #0x14
    cmn r6, #0x100000
    bmi L_2004b88
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andeqs r2, r0, #1
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_2004954:
    bics r12, r12, #0x800
    beq L_20049b0
    orrs r6, r0, r1, lsl #1
    bne L_2004b3c
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r5, r4, lsl #0x15
    beq L_2004990
    cmn r5, #0x200000
    bne L_2004b28
    orrs r5, r2, r3, lsl #1
    beq L_2004b28
    b L_2004b3c
L_2004990:
    orrs r5, r3, r2
    beq L_2004b50
    b L_2004b28
L_200499c:
    bics r4, r4, #0x800
    beq L_2004a44
    orrs r6, r2, r3, lsl #1
    bne L_2004b3c
    b L_2004b28
L_20049b0:
    orrs r6, r0, r1, lsl #1
    beq L_2004a18
    mov r12, #1
    cmp r1, #0
    bne L_20049d4
    sub r12, r12, #0x20
    movs r1, r0
    mov r0, #0
    bmi L_20049f0
L_20049d4:
    clz r6, r1
    movs r1, r1, lsl r6
    rsb r6, r6, #0x20
    orr r1, r1, r0, lsr r6
    rsb r6, r6, #0x20
    mov r0, r0, lsl r6
    sub r12, r12, r6
L_20049f0:
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r5, r4, lsl #0x15
    cmnne r5, #0x200000
    beq L_200499c
    orr r3, r3, #0x80000000
    bic r4, r4, #0x800
    b L_20048a0
L_2004a18:
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r5, r4, lsl #0x15
    beq L_2004b9c
    cmn r5, #0x200000
    bne L_2004b9c
    orrs r6, r2, r3, lsl #1
    beq L_2004b50
    b L_2004b3c
L_2004a44:
    orrs r5, r2, r3, lsl #1
    beq L_2004b9c
    mov r4, #1
    cmp r3, #0
    bne L_2004a68
    sub r4, r4, #0x20
    movs r3, r2
    mov r2, #0
    bmi L_20048a0
L_2004a68:
    clz r6, r3
    movs r3, r3, lsl r6
    rsb r6, r6, #0x20
    orr r3, r3, r2, lsr r6
    rsb r6, r6, #0x20
    mov r2, r2, lsl r6
    sub r4, r4, r6
    b L_20048a0
L_2004a88:
    cmn r12, #0x34
    beq L_2004b20
    bmi L_2004b78
    mov r2, r1
    mov r3, r0
    add r4, r12, #0x34
    cmp r4, #0x20
    movge r2, r3
    movge r3, #0
    subge r4, r4, #0x20
    rsb r5, r4, #0x20
    mov r2, r2, lsl r4
    orr r2, r2, r3, lsr r5
    movs r3, r3, lsl r4
    orrne r2, r2, #1
    rsb r12, r12, #0xc
    cmp r12, #0x20
    movge r0, r1
    movge r1, #0
    subge r12, r12, #0x20
    rsb r4, r12, #0x20
    mov r0, r0, lsr r12
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr r12
    cmp r2, #0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andeqs r2, r0, #1
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_2004b20:
    orr r0, r0, r1, lsl #1
    b L_2004b60
L_2004b28:
    ldr r1, [pc, #0x7c]
    orr r1, lr, r1
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_2004b3c:
    mov r1, r3
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_2004b50:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_2004b60:
    movs r2, r0
    mov r1, lr
    mov r0, #0
    addne r0, r0, #1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_2004b78:
    mov r1, lr
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_2004b88:
    ldr r1, [pc, #0x1c]
    orr r1, lr, r1
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_2004b9c:
    mov r1, lr
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
    .word 0x7ff00000
func_02004bb0:
    eor r1, r1, r3
    eor r3, r1, r3
    eor r1, r1, r3
    eor r0, r0, r2
    eor r2, r0, r2
    eor r0, r0, r2
_dsub:
    stmfd sp!, {r4, lr}
    eors r12, r1, r3
    eormi r3, r3, #0x80000000
    bmi .L_shared_020044b8
.L_shared_02004bd8:
    subs r12, r0, r2
    sbcs lr, r1, r3
    bhs L_2004bf8
    eor lr, lr, #0x80000000
    adds r2, r2, r12
    adc r3, r3, lr
    subs r0, r0, r12
    sbc r1, r1, lr
L_2004bf8:
    mov lr, #0x80000000
    mov r12, r1, lsr #0x14
    orr r1, lr, r1, lsl #11
    orr r1, r1, r0, lsr #21
    mov r0, r0, lsl #0xb
    movs r4, r12, lsl #0x15
    cmnne r4, #0x200000
    beq L_2004dfc
    mov r4, r3, lsr #0x14
    orr r3, lr, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs lr, r4, lsl #0x15
    beq L_2004e44
L_2004c30:
    subs r4, r12, r4
    beq L_2004cd8
    cmp r4, #0x20
    ble L_2004c6c
    cmp r4, #0x38
    movge r4, #0x3f
    sub r4, r4, #0x20
    rsb lr, r4, #0x20
    orrs lr, r2, r3, lsl lr
    mov r2, r3, lsr r4
    orrne r2, r2, #1
    subs r0, r0, r2
    sbcs r1, r1, #0
    bmi L_2004c94
    b L_2004d84
L_2004c6c:
    rsb lr, r4, #0x20
    movs lr, r2, lsl lr
    rsb lr, r4, #0x20
    mov r2, r2, lsr r4
    orr r2, r2, r3, lsl lr
    mov r3, r3, lsr r4
    orrne r2, r2, #1
    subs r0, r0, r2
    sbcs r1, r1, r3
    bpl L_2004d84
L_2004c94:
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    mov r1, r1, lsr #0xc
    orr r1, r1, r12, lsl #20
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andeqs r2, r0, #1
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmfd sp!, {r4, lr}
    bx lr
L_2004cd8:
    subs r0, r0, r2
    sbc r1, r1, r3
    orrs lr, r1, r0
    beq L_2004f68
    mov lr, r12, lsl #0x14
    and lr, lr, #0x80000000
    bic r12, r12, #0x800
    cmp r1, #0
    bmi L_2004d60
    bne L_2004d10
    sub r12, r12, #0x20
    movs r1, r0
    mov r0, #0
    bmi L_2004d2c
L_2004d10:
    clz r4, r1
    movs r1, r1, lsl r4
    rsb r4, r4, #0x20
    orr r1, r1, r0, lsr r4
    rsb r4, r4, #0x20
    mov r0, r0, lsl r4
    sub r12, r12, r4
L_2004d2c:
    cmp r12, #0
    bgt L_2004d68
    rsb r12, r12, #0xc
    cmp r12, #0x20
    movge r0, r1
    movge r1, #0
    subge r12, r12, #0x20
    rsb r4, r12, #0x20
    mov r0, r0, lsr r12
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr r12
    ldmfd sp!, {r4, lr}
    bx lr
L_2004d60:
    cmp r1, #0
    subges r12, r12, #1
L_2004d68:
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmfd sp!, {r4, lr}
    bx lr
L_2004d84:
    mov lr, r12, lsl #0x14
    and lr, lr, #0x80000000
    bic r12, r12, #0x800
    cmp r1, #0
    bne L_2004da8
    sub r12, r12, #0x20
    movs r1, r0
    mov r0, #0
    bmi L_2004dc4
L_2004da8:
    clz r4, r1
    movs r1, r1, lsl r4
    rsb r4, r4, #0x20
    orr r1, r1, r0, lsr r4
    rsb r4, r4, #0x20
    mov r0, r0, lsl r4
    sub r12, r12, r4
L_2004dc4:
    cmp r12, #0
    orrgt r12, r12, lr, lsr #20
    bgt L_2004c94
    rsb r12, r12, #0xc
    cmp r12, #0x20
    movge r0, r1
    movge r1, #0
    subge r12, r12, #0x20
    rsb r4, r12, #0x20
    mov r0, r0, lsr r12
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr r12
    ldmfd sp!, {r4, lr}
    bx lr
L_2004dfc:
    cmp r12, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bics r12, r12, #0x800
    beq L_2004e68
    orrs r4, r0, r1, lsl #1
    bne L_2004f44
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    beq L_2004f30
    cmn r4, #0x200000
    bne L_2004f30
    orrs r4, r2, r3, lsl #1
    beq L_2004f58
    b L_2004f44
L_2004e44:
    cmp r4, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bic r12, r12, #0x800
    bics r4, r4, #0x800
    beq L_2004ee0
    orrs r4, r2, r3, lsl #1
    bne L_2004f44
    b L_2004f30
L_2004e68:
    orrs r4, r0, r1, lsl #1
    beq L_2004ea8
    mov r12, #1
    bic r1, r1, #0x80000000
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    cmnne r4, #0x200000
    mov r4, r4, lsr #0x15
    orr r4, r4, lr, lsr #20
    beq L_2004e44
    orr r3, r3, #0x80000000
    orr r12, r12, lr, lsr #20
    b L_2004c30
L_2004ea8:
    mov r12, r3, lsr #0x14
    mov r1, r3, lsl #0xb
    orr r1, r1, r2, lsr #21
    mov r0, r2, lsl #0xb
    movs r4, r12, lsl #0x15
    beq L_2004ed4
    cmn r4, #0x200000
    bne L_2004efc
    orrs r4, r0, r1, lsl #1
    bne L_2004f48
    b L_2004f30
L_2004ed4:
    orrs r4, r0, r1, lsl #1
    beq L_2004f68
    b L_2004efc
L_2004ee0:
    orrs r4, r2, r3, lsl #1
    beq L_2004f0c
    mov r4, #1
    bic r3, r3, #0x80000000
    orr r12, r12, lr, lsr #20
    orr r4, r4, lr, lsr #20
    b L_2004c30
L_2004efc:
    mov r1, r3
    mov r0, r2
    ldmfd sp!, {r4, lr}
    bx lr
L_2004f0c:
    cmp r1, #0
    subges r12, r12, #1
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmfd sp!, {r4, lr}
    bx lr
L_2004f30:
    ldr r1, [pc, #0x40]
    orr r1, lr, r1
    mov r0, #0
    ldmfd sp!, {r4, lr}
    bx lr
L_2004f44:
    mov r1, r3
L_2004f48:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
L_2004f58:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
L_2004f68:
    mov r1, #0
    mov r0, #0
    ldmfd sp!, {r4, lr}
    bx lr
    .word 0x7ff00000
_fadd:
    eors r2, r0, r1
    eormi r1, r1, #0x80000000
    bmi .L_shared_02005bb8
.L_shared_02004f88:
    subs r12, r0, r1
    sublo r0, r0, r12
    addlo r1, r1, r12
    mov r2, #0x80000000
    mov r3, r0, lsr #0x17
    orr r0, r2, r0, lsl #8
    ands r12, r3, #0xff
    cmpne r12, #0xff
    beq L_200501c
    mov r12, r1, lsr #0x17
    orr r1, r2, r1, lsl #8
    ands r2, r12, #0xff
    beq L_200505c
L_2004fbc:
    subs r12, r3, r12
    beq L_2004fd4
    rsb r2, r12, #0x20
    movs r2, r1, lsl r2
    mov r1, r1, lsr r12
    orrne r1, r1, #1
L_2004fd4:
    adds r0, r0, r1
    blo L_2004ff4
    and r1, r0, #1
    orr r0, r1, r0, rrx
    add r3, r3, #1
    and r2, r3, #0xff
    cmp r2, #0xff
    beq L_2005164
L_2004ff4:
    ands r1, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r3, lsl #23
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_200501c:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    ands r3, r3, #0xff
    beq L_2005080
    movs r0, r0, lsl #1
    bne L_2005190
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq L_2005184
    cmp r12, #0xff
    blt L_2005184
    cmp r1, #0
    beq L_2005184
    b L_2005190
L_200505c:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    and r3, r3, #0xff
    ands r12, r12, #0xff
    beq L_20050dc
L_2005074:
    movs r1, r1, lsl #1
    bne L_2005190
    b L_2005184
L_2005080:
    movs r0, r0, lsl #1
    beq L_20050b8
    mov r3, #1
    mov r0, r0, lsr #1
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #8
    ands r12, r12, #0xff
    beq L_20050dc
    cmp r12, #0xff
    beq L_2005074
    orr r1, r1, #0x80000000
    orr r3, r3, r2, lsr #23
    orr r12, r12, r2, lsr #23
    b L_2004fbc
L_20050b8:
    mov r3, r1, lsr #0x17
    mov r0, r1, lsl #9
    ands r3, r3, #0xff
    beq L_2005144
    cmp r3, #0xff
    blt L_2005144
    cmp r0, #0
    beq L_2005184
    b L_200517c
L_20050dc:
    movs r1, r1, lsl #1
    beq L_200514c
    mov r1, r1, lsr #1
    mov r12, #1
    orr r3, r3, r2, lsr #23
    orr r12, r12, r2, lsr #23
    cmp r0, #0
    bmi L_2004fbc
    adds r0, r0, r1
    blo L_2005110
    and r1, r0, #1
    orr r0, r1, r0, rrx
    add r12, r12, #1
L_2005110:
    cmp r0, #0
    subge r12, r12, #1
    ands r1, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r12, lsl #23
    bxeq lr
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_2005144:
    mov r0, r1
    bx lr
L_200514c:
    cmp r0, #0
    subges r3, r3, #1
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
L_2005164:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_200517c:
    mvn r0, #0x80000000
    bx lr
L_2005184:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_2005190:
    mvn r0, #0x80000000
    bx lr
func_02005198:
    mvn r0, #0x80000000
    bx lr
_dgr:
    mov r12, #0x200000
    cmn r12, r1, lsl #1
    bhs L_2005214
    cmn r12, r3, lsl #1
    bhs L_2005228
L_20051b4:
    orrs r12, r3, r1
    bmi L_20051e4
    cmp r1, r3
    cmpeq r0, r2
    movhi r0, #1
    movls r0, #0
    bx lr
L_20051d0:
    mov r0, #0
    mrs r12, cpsr
    bic r12, r12, #0x20000000
    msr cpsr_f, r12
    bx lr
L_20051e4:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #0
    mrs r12, cpsr
    bic r12, r12, #0x20000000
    msr cpsr_f, r12
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhi r0, #1
    movls r0, #0
    bx lr
L_2005214:
    bne L_20051d0
    cmp r0, #0
    bhi L_20051d0
    cmn r12, r3, lsl #1
    blo L_20051b4
L_2005228:
    bne L_20051d0
    cmp r2, #0
    bhi L_20051d0
    b L_20051b4
_dls:
    mov r12, #0x200000
    cmn r12, r1, lsl #1
    bhs L_20052b0
    cmn r12, r3, lsl #1
    bhs L_20052c4
L_200524c:
    orrs r12, r3, r1
    bmi L_200527c
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #1
    movhs r0, #0
    bx lr
L_2005268:
    mov r0, #0
    mrs r12, cpsr
    orr r12, r12, #0x20000000
    msr cpsr_f, r12
    bx lr
L_200527c:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #0
    bne L_200529c
    mrs r12, cpsr
    orr r12, r12, #0x20000000
    msr cpsr_f, r12
    bxeq lr
L_200529c:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #1
    movhs r0, #0
    bx lr
L_20052b0:
    bne L_2005268
    cmp r0, #0
    bhi L_2005268
    cmn r12, r3, lsl #1
    blo L_200524c
L_20052c4:
    bne L_2005268
    cmp r2, #0
    bhi L_2005268
    b L_200524c
_deq:
    mov r12, #0x200000
    cmn r12, r1, lsl #1
    bhs L_200533c
    cmn r12, r3, lsl #1
    bhs L_2005350
L_20052e8:
    orrs r12, r3, r1
    bmi L_2005318
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #1
    movne r0, #0
    bx lr
L_2005304:
    mov r0, #0
    mrs r12, cpsr
    bic r12, r12, #0x40000000
    msr cpsr_f, r12
    bx lr
L_2005318:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #1
    movne r0, #0
    bx lr
L_200533c:
    bne L_2005304
    cmp r0, #0
    bhi L_2005304
    cmn r12, r3, lsl #1
    blo L_20052e8
L_2005350:
    bne L_2005304
    cmp r2, #0
    bhi L_2005304
    b L_20052e8
_fgeq:
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    cmphs r3, r1, lsl #1
    blo L_20053a8
    cmp r0, #0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r1, #0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0
    cmp r0, r1
    movge r0, #1
    movlt r0, #0
    mrs r12, cpsr
    biclt r12, r12, #0x20000000
    orrge r12, r12, #0x20000000
    msr cpsr_f, r12
    bx lr
L_20053a8:
    mov r0, #0
    mrs r12, cpsr
    bic r12, r12, #0x20000000
    msr cpsr_f, r12
    bx lr
_fgr:
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    cmphs r3, r1, lsl #1
    blo L_2005404
    cmp r0, #0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r1, #0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0
    cmp r0, r1
    movgt r0, #1
    movle r0, #0
    mrs r12, cpsr
    bicle r12, r12, #0x20000000
    orrgt r12, r12, #0x20000000
    msr cpsr_f, r12
    bx lr
L_2005404:
    mov r0, #0
    mrs r12, cpsr
    bic r12, r12, #0x20000000
    msr cpsr_f, r12
    bx lr
_fls:
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    cmphs r3, r1, lsl #1
    blo L_2005460
    cmp r0, #0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r1, #0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0
    cmp r0, r1
    movlt r0, #1
    movge r0, #0
    mrs r12, cpsr
    orrge r12, r12, #0x20000000
    biclt r12, r12, #0x20000000
    msr cpsr_f, r12
    bx lr
L_2005460:
    mov r0, #0
    mrs r12, cpsr
    orr r12, r12, #0x20000000
    msr cpsr_f, r12
    bx lr
func_02005474:
    eor r0, r0, r1
    eor r1, r0, r1
    eor r0, r0, r1
_fdiv:
    stmdb sp!, {lr}
    mov r12, #0xff
    ands r3, r12, r0, lsr #23
    cmpne r3, #0xff
    beq L_2005654
    ands r12, r12, r1, lsr #23
    cmpne r12, #0xff
    beq L_2005690
    orr r1, r1, #0x800000
    orr r0, r0, #0x800000
    bic r2, r0, #0xff000000
    bic lr, r1, #0xff000000
L_20054b0:
    cmp r2, lr
    movlo r2, r2, lsl #1
    sublo r3, r3, #1
    teq r0, r1
    sub r0, pc, #0x94
    ldrb r1, [r0, lr, lsr #15]
    rsb lr, lr, #0
    mov r0, lr, asr #1
    mul r0, r1, r0
    add r0, r0, #0x80000000
    mov r0, r0, lsr #6
    mul r0, r1, r0
    mov r0, r0, lsr #0xe
    mul r1, lr, r0
    sub r12, r3, r12
    mov r1, r1, lsr #0xc
    mul r1, r0, r1
    mov r0, r0, lsl #0xe
    add r0, r0, r1, lsr #15
    umull r1, r0, r2, r0
    mov r3, r0
    orrmi r0, r0, #0x80000000
    adds r12, r12, #0x7e
    bmi L_2005758
    cmp r12, #0xfe
    bge L_200580c
    add r0, r0, r12, lsl #23
    mov r12, r1, lsr #0x1c
    cmp r12, #7
    beq L_2005634
    add r0, r0, r1, lsr #31
    ldmia sp!, {lr}
    bx lr
data_02005534:
    .word 0xfdfeffff
    .word 0xf9fafbfc
    .word 0xf5f6f7f8
    .word 0xf1f2f3f4
    .word 0xeeeff0f0
    .word 0xeaebeced
    .word 0xe7e8e9ea
    .word 0xe4e5e6e6
    .word 0xe1e2e2e3
    .word 0xdedfdfe0
    .word 0xdbdcdcdd
    .word 0xd8d9d9da
    .word 0xd5d6d7d7
    .word 0xd2d3d4d4
    .word 0xd0d0d1d2
    .word 0xcdcececf
    .word 0xcbcbcccc
    .word 0xc8c9c9ca
    .word 0xc6c6c7c8
    .word 0xc3c4c5c5
    .word 0xc1c2c2c3
    .word 0xbfbfc0c0
    .word 0xbdbdbebe
    .word 0xbabbbcbc
    .word 0xb8b9b9ba
    .word 0xb6b7b7b8
    .word 0xb4b5b5b6
    .word 0xb2b3b3b4
    .word 0xb0b1b1b2
    .word 0xafafafb0
    .word 0xadadaeae
    .word 0xababacac
    .word 0xa9aaaaaa
    .word 0xa7a8a8a9
    .word 0xa6a6a7a7
    .word 0xa4a4a5a5
    .word 0xa2a3a3a4
    .word 0xa1a1a2a2
    .word 0x9fa0a0a0
    .word 0x9e9e9e9f
    .word 0x9c9d9d9d
    .word 0x9b9b9b9c
    .word 0x999a9a9a
    .word 0x98989999
    .word 0x96979798
    .word 0x95959696
    .word 0x94949495
    .word 0x92939393
    .word 0x91919292
    .word 0x90909191
    .word 0x8f8f8f90
    .word 0x8d8e8e8e
    .word 0x8c8c8d8d
    .word 0x8b8b8c8c
    .word 0x8a8a8a8b
    .word 0x8989898a
    .word 0x88888888
    .word 0x86878787
    .word 0x85868686
    .word 0x84858585
    .word 0x83838484
    .word 0x82828383
    .word 0x81818282
    .word 0x80808181
UnkFpDivideResume:
L_2005634:
    mov r1, r3, lsl #1
    add r1, r1, #1
    rsb lr, lr, #0
    mul r1, lr, r1
    cmp r1, r2, lsl #24
    addmi r0, r0, #1
    ldmia sp!, {lr}
    bx lr
L_2005654:
    eor lr, r0, r1
    and lr, lr, #0x80000000
    cmp r3, #0
    beq L_20056ac
    movs r0, r0, lsl #9
    bne L_20057f4
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq L_20057e4
    cmp r12, #0xff
    blt L_20057e4
    cmp r1, #0
    beq L_2005800
    b L_20057dc
L_2005690:
    eor lr, r0, r1
    and lr, lr, #0x80000000
    cmp r12, #0
    beq L_2005710
L_20056a0:
    movs r1, r1, lsl #9
    bne L_20057dc
    b L_200582c
L_20056ac:
    movs r2, r0, lsl #9
    beq L_20056e0
    clz r3, r2
    movs r2, r2, lsl r3
    rsb r3, r3, #0
    mov r2, r2, lsr #8
    ands r12, r12, r1, lsr #23
    beq L_2005738
    cmp r12, #0xff
    beq L_20056a0
    orr r1, r1, #0x800000
    bic lr, r1, #0xff000000
    b L_20054b0
L_20056e0:
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq L_2005704
    cmp r12, #0xff
    blt L_200582c
    cmp r1, #0
    beq L_200582c
    b L_20057dc
L_2005704:
    cmp r1, #0
    beq L_2005800
    b L_200582c
L_2005710:
    movs r12, r1, lsl #9
    beq L_20057e4
    mov lr, r12
    clz r12, lr
    movs lr, lr, lsl r12
    rsb r12, r12, #0
    mov lr, lr, lsr #8
    orr r0, r0, #0x800000
    bic r2, r0, #0xff000000
    b L_20054b0
L_2005738:
    movs r12, r1, lsl #9
    beq L_20057e4
    mov lr, r12
    clz r12, lr
    movs lr, lr, lsl r12
    rsb r12, r12, #0
    mov lr, lr, lsr #8
    b L_20054b0
L_2005758:
    and r0, r0, #0x80000000
    cmn r12, #0x18
    beq L_20057cc
    bmi L_2005824
    add r1, r12, #0x17
    mov r2, r2, lsl r1
    rsb r12, r12, #0
    mov r3, r3, lsr r12
    orr r0, r0, r3
    rsb lr, lr, #0
    mul r1, lr, r3
    cmp r1, r2
    ldmeqia sp!, {lr}
    bxeq lr
    add r1, r1, lr
    cmp r1, r2
    beq L_20057c0
    addmi r0, r0, #1
    subpl r1, r1, lr
    add r1, lr, r1, lsl #1
    cmp r1, r2, lsl #1
    and r3, r0, #1
    addmi r0, r0, #1
    addeq r0, r0, r3
    ldmia sp!, {lr}
    bx lr
L_20057c0:
    add r0, r0, #1
    ldmia sp!, {lr}
    bx lr
L_20057cc:
    cmn r2, lr
    addne r0, r0, #1
    ldmia sp!, {lr}
    bx lr
L_20057dc:
    mov r0, r1
    b L_20057f4
L_20057e4:
    mov r0, #0xff000000
    orr r0, lr, r0, lsr #1
    ldmia sp!, {lr}
    bx lr
L_20057f4:
    mvn r0, #0x80000000
    ldmia sp!, {lr}
    bx lr
L_2005800:
    mvn r0, #0x80000000
    ldmia sp!, {lr}
    bx lr
L_200580c:
    tst r0, #0x80000000
    mov r0, #0xff000000
    movne r0, r0, asr #1
    moveq r0, r0, lsr #1
    ldmia sp!, {lr}
    bx lr
L_2005824:
    ldmia sp!, {lr}
    bx lr
L_200582c:
    mov r0, lr
    ldmia sp!, {lr}
    bx lr
_f2d:
    and r2, r0, #0x80000000
    mov r12, r0, lsr #0x17
    mov r3, r0, lsl #9
    ands r12, r12, #0xff
    beq L_2005868
    cmp r12, #0xff
    beq L_2005894
L_2005854:
    add r12, r12, #0x380
    mov r0, r3, lsl #0x14
    orr r1, r2, r3, lsr #12
    orr r1, r1, r12, lsl #20
    bx lr
L_2005868:
    cmp r3, #0
    bne L_200587c
    mov r1, r2
    mov r0, #0
    bx lr
L_200587c:
    mov r3, r3, lsr #1
    clz r12, r3
    movs r3, r3, lsl r12
    rsb r12, r12, #1
    add r3, r3, r3
    b L_2005854
L_2005894:
    cmp r3, #0
    bhi L_20058ac
    ldr r1, [pc, #0x14]
    orr r1, r1, r2
    mov r0, #0
    bx lr
L_20058ac:
    mvn r0, #0
    bic r1, r0, #0x80000000
    bx lr
    .word 0x7ff00000
_ffix:
    bic r1, r0, #0x80000000
    mov r2, #0x9e
    subs r2, r2, r1, lsr #23
    ble L_20058e4
    mov r1, r1, lsl #8
    orr r1, r1, #0x80000000
    cmp r0, #0
    mov r0, r1, lsr r2
    rsbmi r0, r0, #0
    bx lr
L_20058e4:
    mvn r0, r0, asr #31
    add r0, r0, #0x80000000
    bx lr
_ffixu:
    tst r0, #0x80000000
    bne L_2005914
    mov r1, #0x9e
    subs r1, r1, r0, lsr #23
    blt L_2005928
    mov r2, r0, lsl #8
    orr r0, r2, #0x80000000
    mov r0, r0, lsr r1
    bx lr
L_2005914:
    mov r2, #0xff000000
    cmp r2, r0, lsl #1
    movhs r0, #0
    mvnlo r0, #0
    bx lr
L_2005928:
    mvn r0, #0
    bx lr
_fflt:
    ands r2, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r0, #0
    bxeq lr
    clz r3, r0
    movs r0, r0, lsl r3
    rsb r3, r3, #0x9e
    ands r1, r0, #0xff
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bxeq lr
    tst r1, #0x80
    bxeq lr
    ands r3, r1, #0x7f
    andeqs r3, r0, #1
    addne r0, r0, #1
    bx lr
_ffltu:
    cmp r0, #0
    bxeq lr
    mov r3, #0x9e
    bmi L_2005994
    clz r12, r0
    movs r0, r0, lsl r12
    sub r3, r3, r12
L_2005994:
    ands r2, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bxeq lr
    tst r2, #0x80
    bxeq lr
    ands r1, r2, #0x7f
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
_fmul:
    eor r2, r0, r1
    and r2, r2, #0x80000000
    mov r12, #0xff
    ands r3, r12, r0, lsr #23
    mov r0, r0, lsl #8
    cmpne r3, #0xff
    beq L_2005a3c
    orr r0, r0, #0x80000000
    ands r12, r12, r1, lsr #23
    mov r1, r1, lsl #8
    cmpne r12, #0xff
    beq L_2005a7c
    orr r1, r1, #0x80000000
L_20059f4:
    add r12, r3, r12
    umull r1, r3, r0, r1
    movs r0, r3
    addpl r0, r0, r0
    subpl r12, r12, #1
    subs r12, r12, #0x7f
    bmi L_2005b08
    cmp r12, #0xfe
    bge L_2005b74
    ands r3, r0, #0xff
    orr r0, r2, r0, lsr #8
    add r0, r0, r12, lsl #23
    tst r3, #0x80
    bxeq lr
    orrs r1, r1, r3, lsl #25
    andeqs r3, r0, #1
    addne r0, r0, #1
    bx lr
L_2005a3c:
    cmp r3, #0
    beq L_2005a90
    movs r0, r0, lsl #1
    bne L_2005b64
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq L_2005a70
    cmp r12, #0xff
    blt L_2005b58
    cmp r1, #0
    beq L_2005b58
    b L_2005b64
L_2005a70:
    cmp r1, #0
    beq L_2005b6c
    b L_2005b58
L_2005a7c:
    cmp r12, #0
    beq L_2005aec
L_2005a84:
    movs r1, r1, lsl #1
    bne L_2005b64
    b L_2005b58
L_2005a90:
    movs r0, r0, lsl #1
    beq L_2005ac8
    mov r0, r0, lsr #1
    clz r3, r0
    movs r0, r0, lsl r3
    rsb r3, r3, #1
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #8
    ands r12, r12, #0xff
    beq L_2005aec
    cmp r12, #0xff
    beq L_2005a84
    orr r1, r1, #0x80000000
    b L_20059f4
L_2005ac8:
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq L_2005b98
    cmp r12, #0xff
    blt L_2005b98
    cmp r1, #0
    beq L_2005b6c
    b L_2005b64
L_2005aec:
    movs r1, r1, lsl #1
    beq L_2005b98
    mov r1, r1, lsr #1
    clz r12, r1
    movs r1, r1, lsl r12
    rsb r12, r12, #1
    b L_20059f4
L_2005b08:
    cmn r12, #0x18
    beq L_2005b50
    bmi L_2005b90
    cmp r1, #0
    orrne r0, r0, #1
    mov r3, r0
    mov r0, r0, lsr #8
    rsb r12, r12, #0
    orr r0, r2, r0, lsr r12
    rsb r12, r12, #0x18
    movs r1, r3, lsl r12
    bxeq lr
    tst r1, #0x80000000
    bxeq lr
    movs r1, r1, lsl #1
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_2005b50:
    mov r0, r0, lsl #1
    b L_2005b80
L_2005b58:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_2005b64:
    mvn r0, #0x80000000
    bx lr
L_2005b6c:
    mvn r0, #0x80000000
    bx lr
L_2005b74:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_2005b80:
    movs r1, r0
    mov r0, r2
    addne r0, r0, #1
    bx lr
L_2005b90:
    mov r0, r2
    bx lr
L_2005b98:
    mov r0, r2
    bx lr
func_02005ba0:
    eor r0, r0, r1
    eor r1, r0, r1
    eor r0, r0, r1
_fsub:
    eors r2, r0, r1
    eormi r1, r1, #0x80000000
    bmi .L_shared_02004f88
.L_shared_02005bb8:
    subs r12, r0, r1
    eorlo r12, r12, #0x80000000
    sublo r0, r0, r12
    addlo r1, r1, r12
    mov r2, #0x80000000
    mov r3, r0, lsr #0x17
    orr r0, r2, r0, lsl #8
    ands r12, r3, #0xff
    cmpne r12, #0xff
    beq L_2005cd4
    mov r12, r1, lsr #0x17
    orr r1, r2, r1, lsl #8
    ands r2, r12, #0xff
    beq L_2005d14
L_2005bf0:
    subs r12, r3, r12
    beq L_2005c38
    rsb r2, r12, #0x20
    movs r2, r1, lsl r2
    mov r1, r1, lsr r12
    orrne r1, r1, #1
    subs r0, r0, r1
    bpl L_2005c7c
    ands r1, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r3, lsl #23
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_2005c38:
    subs r0, r0, r1
    beq L_2005de0
    mov r2, r3, lsl #0x17
    and r2, r2, #0x80000000
    bic r3, r3, #0x100
    clz r12, r0
    movs r0, r0, lsl r12
    sub r3, r3, r12
    cmp r3, #0
    bgt L_2005c6c
    rsb r3, r3, #9
    orr r0, r2, r0, lsr r3
    bx lr
L_2005c6c:
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
L_2005c7c:
    mov r2, r3, lsl #0x17
    and r2, r2, #0x80000000
    bic r3, r3, #0x100
    clz r12, r0
    movs r0, r0, lsl r12
    sub r3, r3, r12
    cmp r3, #0
    bgt L_2005ca8
    rsb r3, r3, #9
    orr r0, r2, r0, lsr r3
    bx lr
L_2005ca8:
    ands r1, r0, #0xff
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bxeq lr
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_2005cd4:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    ands r3, r3, #0xff
    beq L_2005d3c
    movs r0, r0, lsl #1
    bne L_2005e14
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq L_2005e08
    cmp r12, #0xff
    blt L_2005e08
    cmp r1, #0
    beq L_2005e1c
    b L_2005e14
L_2005d14:
    cmp r12, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    and r3, r3, #0xff
    ands r12, r12, #0xff
    beq L_2005da4
L_2005d2c:
    eor r2, r2, #0x80000000
    movs r1, r1, lsl #1
    bne L_2005e14
    b L_2005e08
L_2005d3c:
    movs r0, r0, lsl #1
    beq L_2005d74
    mov r0, r0, lsr #1
    mov r3, #1
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #8
    ands r12, r12, #0xff
    beq L_2005da4
    cmp r12, #0xff
    beq L_2005d2c
    orr r1, r1, #0x80000000
    orr r3, r3, r2, lsr #23
    orr r12, r12, r2, lsr #23
    b L_2005bf0
L_2005d74:
    mov r3, r1, lsr #0x17
    mov r0, r1, lsl #9
    ands r2, r3, #0xff
    beq L_2005d98
    cmp r2, #0xff
    blt L_2005dc0
    cmp r0, #0
    bne L_2005e00
    b L_2005e08
L_2005d98:
    cmp r0, #0
    beq L_2005de0
    b L_2005dc0
L_2005da4:
    movs r1, r1, lsl #1
    beq L_2005dc8
    mov r1, r1, lsr #1
    mov r12, #1
    orr r12, r12, r2, lsr #23
    orr r3, r3, r2, lsr #23
    b L_2005bf0
L_2005dc0:
    mov r0, r1
    bx lr
L_2005dc8:
    cmp r0, #0
    subges r3, r3, #1
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
L_2005de0:
    mov r0, #0
    bx lr
    cmp r0, #0
    subges r3, r3, #1
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
L_2005e00:
    mvn r0, #0x80000000
    bx lr
L_2005e08:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_2005e14:
    mvn r0, #0x80000000
    bx lr
L_2005e1c:
    mvn r0, #0x80000000
    bx lr
.size _dadd, 792
.size _ll_ufrom_d, 140
.size _dmul, 868
.size _dsub, 948
.size _fadd, 540
.size func_02005198, 8
.size _dgr, 152
.size _dls, 156
.size _deq, 140
.size _fgeq, 92
.size _fgr, 92
.size _fls, 92
.size _fdiv, 952
.size _f2d, 132
.size _ffix, 52
.size _ffixu, 64
.size _fflt, 72
.size _ffltu, 72
.size _fmul, 480
.size _fsub, 632
.size func_02004bb0, 24
.size func_02005474, 12
.size func_02005ba0, 12


.global data_02005534
.global UnkFpDivideResume
