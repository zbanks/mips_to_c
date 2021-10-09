struct _mips2c_stack_func_8013A240 {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ void *sp40;                          /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x18];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8013A41C {};              /* size 0x0 */

struct _mips2c_stack_func_8013A46C {};              /* size 0x0 */

struct _mips2c_stack_func_8013A4C4 {};              /* size 0x0 */

struct _mips2c_stack_func_8013A504 {};              /* size 0x0 */

struct _mips2c_stack_func_8013A530 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ u32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ Actor *sp4C;                         /* inferred */
    /* 0x50 */ Actor *sp50;                         /* inferred */
    /* 0x54 */ Camera *sp54;                        /* inferred */
    /* 0x58 */ CollisionPoly *sp58;                 /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad60[0x2];
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x4];
};                                                  /* size = 0x70 */

SaveContext gSaveContext;

s32 func_8013A240(GlobalContext *globalCtx) {
    s32 sp44;
    void *sp40;
    s16 temp_v1;
    s32 (*temp_v0)(GlobalContext *, void *);
    s32 temp_t5;
    s32 temp_t7;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;
    s32 phi_a0;
    s32 phi_s2;
    s32 phi_a0_2;
    s32 phi_s2_2;
    s32 phi_s2_3;
    s32 phi_s2_4;

    gSaveContext.roomInf[123][3] = 0;
    gSaveContext.roomInf[123][4] = 0;
    phi_s2_2 = 0;
    if (globalCtx->sceneNum == 0x45) {
        func_8013A41C(1);
    }
    temp_t7 = 0 * 0xC;
    sp40 = globalCtx + temp_t7;
    sp44 = temp_t7;
    do {
        temp_s0 = sp40->unk1CB4;
        phi_s0 = temp_s0;
        phi_s2 = phi_s2_2;
        phi_s2_4 = phi_s2_2;
        if (temp_s0 != 0) {
            do {
                phi_a0_2 = 0;
                phi_s2_3 = phi_s2_4;
                if (globalCtx->sceneNum == 0x45) {
                    temp_v1 = phi_s0->unk0;
                    if ((temp_v1 == 0x19E) || (temp_v1 == 0x1A8)) {
                        phi_a0_2 = 1;
                    }
                }
                phi_a0 = phi_a0_2;
                if (phi_s0->unk0 != 0x9F) {
                    if (phi_s0->unk0 != 0xCA) {
                        if (phi_s0->unk0 != 0xFA) {
                            if (phi_s0->unk0 != 0x16A) {
                                if (phi_s0->unk0 != 0x176) {
                                    if ((phi_s0->unk0 != 0x21D) && (phi_s0->unk0 != 0x21E)) {
                                        if (phi_s0->unk0 != 0x252) {

                                        } else {
                                            goto block_20;
                                        }
                                    } else {
                                        goto block_23;
                                    }
                                } else {
                                    goto block_23;
                                }
                            } else {
                                goto block_23;
                            }
                        } else {
                            goto block_23;
                        }
                    } else {
                        if ((phi_s0->unk1C & 1) == 1) {

                        } else {
block_20:
                        }
                        goto block_23;
                    }
                } else {
block_23:
                    phi_a0 = phi_a0_2 | 2;
                }
                if (phi_a0 != 0) {
                    temp_v0 = phi_s0->unk144;
                    if ((temp_v0 != 0) && (temp_v0(globalCtx, phi_s0) == 0)) {
                        phi_s2_3 = phi_s2_4 + 1;
                    }
                }
                temp_s0_2 = phi_s0->unk12C;
                phi_s0 = temp_s0_2;
                phi_s2 = phi_s2_3;
                phi_s2_4 = phi_s2_3;
            } while (temp_s0_2 != 0);
        }
        temp_t5 = sp44 + 0xC;
        sp40 += 0xC;
        sp44 = temp_t5;
        phi_s2_2 = phi_s2;
    } while (temp_t5 < 0x90);
    return phi_s2;
}

void func_8013A41C(s32 flag) {
    if (flag < 0x20) {
        gSaveContext.roomInf[123][3] |= 1 << flag;
        return;
    }
    gSaveContext.roomInf[123][4] |= 1 << (flag & 0x1F);
}

void func_8013A46C(s32 flag) {
    if (flag < 0x20) {
        gSaveContext.roomInf[123][3] &= ~(1 << flag);
        return;
    }
    gSaveContext.roomInf[123][4] &= ~(1 << (flag & 0x1F));
}

u32 func_8013A4C4(s32 flag) {
    if (flag < 0x20) {
        return gSaveContext.roomInf[123][3] & (1 << flag);
    }
    return gSaveContext.roomInf[123][4] & (1 << (flag & 0x1F));
}

s16 func_8013A504(s16 val) {
    s16 phi_v1;

    phi_v1 = (s16) -(s32) val;
    if ((s32) val >= 0) {
        phi_v1 = val;
    }
    return phi_v1;
}

s32 func_8013A530(GlobalContext *globalCtx, Actor *actor, s32 flag, Vec3f *pos, Vec3s *rot, f32 distanceMin, f32 distanceMax, s16 angleError) {
    f32 sp64;
    s16 sp62;
    f32 sp5C;
    CollisionPoly *sp58;
    Camera *sp54;
    Actor *sp50;
    Actor *sp4C;
    u32 sp44;
    Vec3f *sp3C;
    Camera *temp_v0;
    Vec3f *temp_a1;
    f32 temp_f0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s0_3;
    s32 phi_s0_4;
    s32 phi_s0_5;

    temp_v0 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    temp_a1 = &temp_v0->eye;
    sp3C = temp_a1;
    sp54 = temp_v0;
    temp_f0 = OLib_Vec3fDist(pos, temp_a1);
    sp5C = temp_f0;
    phi_s0_5 = 0;
    if ((temp_f0 < distanceMin) || (distanceMax < temp_f0)) {
        func_8013A41C(0x3F);
        phi_s0_5 = 0x3F;
    }
    sp62 = func_8013A504((s16) (func_800DFCB4(sp54) + rot->x));
    phi_s0_4 = phi_s0_5;
    if (((s32) angleError > 0) && (((s32) angleError < (s32) sp62) || ((s32) angleError < func_8013A504((s16) (func_800DFCDC(sp54) - (rot->y - 0x7FFF)))))) {
        func_8013A41C(0x3E);
        phi_s0_4 = phi_s0_5 | 0x3E;
    }
    func_800B4EDC(globalCtx, pos, (Vec3f *) &sp64, &sp5C);
    temp_v0_2 = (s16) (s32) ((sp64 * sp5C * 160.0f) + 160.0f) - 0x55;
    phi_s0_3 = phi_s0_4;
    if (((s32) temp_v0_2 < 0) || ((s32) temp_v0_2 >= 0x97) || (temp_v0_3 = (s16) (s32) ((sp68 * sp5C * -120.0f) + 120.0f) - 0x43, ((s32) temp_v0_3 < 0)) || ((s32) temp_v0_3 >= 0x6A)) {
        func_8013A41C(0x3D);
        phi_s0_3 = phi_s0_4 | 0x3D;
    }
    phi_s0_2 = phi_s0_3;
    if (func_800C576C(&globalCtx->colCtx, pos, sp3C, (Vec3f *) &sp64, &sp58, 1U, 1U, 1U, 1U, &sp44) != 0) {
        func_8013A41C(0x3C);
        phi_s0_2 = phi_s0_3 | 0x3C;
    }
    sp4C = actor;
    sp50 = globalCtx->actorCtx.actorList[2].first;
    phi_s0 = phi_s0_2;
    if (CollisionCheck_LineOCCheck(globalCtx, &globalCtx->colChkCtx, pos, sp3C, &sp4C, 2) != 0) {
        func_8013A41C(0x3B);
        phi_s0 = phi_s0_2 | 0x3B;
    }
    if (phi_s0 == 0) {
        func_8013A41C(flag);
    }
    return phi_s0;
}
