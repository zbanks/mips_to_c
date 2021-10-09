? func_8019FB0C(void *, void *, ?, f32, ?);         /* extern */
? func_801A7328(Vec3f *, ?);                        /* extern */
void func_80B823B0(BgDblueBalance *arg0);           /* static */
s32 func_80B82454(BgDblueBalance *arg0, GlobalContext *arg1); /* static */
void func_80B8259C(BgDblueBalance *arg0, GlobalContext *arg1); /* static */
void func_80B8264C(BgDblueBalance *arg0);           /* static */
void func_80B828E4(BgDblueBalance *arg0, GlobalContext *arg1); /* static */
void func_80B8296C(GlobalContext *arg0, f32 *arg1, f32 arg2); /* static */
s32 func_80B82B00(s16 arg0, s16 arg1, s16 arg2);    /* static */
void func_80B82DC4(BgDblueBalance *arg0);           /* static */
void func_80B8330C(DynaPolyActor *arg0, ? arg1);    /* static */
void func_80B83344(BgDblueBalance *arg0);           /* static */
void func_80B833A8(BgDblueBalance *arg0);           /* static */
void func_80B83518(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B83758(void *arg0, GlobalContext *arg1); /* static */
extern ? D_0600CD10;
extern void D_0600CE00;
extern ? D_0600D110;
extern void D_0600D250;
static ? D_80B83A20;                                /* unable to generate initializer */
static ? D_80B83A74;                                /* unable to generate initializer */
static s8 D_80B83A90 = {0, 4};
static ? D_80B83A92;                                /* unable to generate initializer */
static s8 D_80B83A94 = {0, 2, 4, 6};
static InitChainEntry D_80B83A98;                   /* unable to generate initializer */
static void *D_80B83C70;
static void *D_80B83C74;

typedef struct BgDblueBalance {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ Actor *unk15C;                     /* inferred */
    /* 0x0160 */ Actor *unk160;                     /* inferred */
    /* 0x0164 */ void *unk164;                      /* inferred */
    /* 0x0168 */ void (*actionFunc)(BgDblueBalance *, GlobalContext *);
    /* 0x016C */ u32 unk16C;                        /* inferred */
    /* 0x0170 */ u32 unk170;                        /* inferred */
    /* 0x0174 */ s16 unk174;                        /* inferred */
    /* 0x0176 */ s16 unk176;                        /* inferred */
    /* 0x0178 */ s16 unk178;                        /* inferred */
    /* 0x017A */ s16 unk17A;                        /* inferred */
    /* 0x017C */ s8 unk17C;                         /* inferred */
    /* 0x017D */ s8 unk17D;                         /* inferred */
    /* 0x017E */ char pad17E[0x1];                  /* maybe part of unk17D[2]? */
    /* 0x017F */ s8 unk17F;                         /* inferred */
    /* 0x0180 */ char pad180[0x2];                  /* maybe part of unk17F[3]? */
    /* 0x0182 */ s8 unk182;                         /* inferred */
    /* 0x0183 */ u8 unk183;                         /* inferred */
    /* 0x0184 */ s16 unk184;                        /* inferred */
    /* 0x0186 */ s8 unk186;                         /* inferred */
    /* 0x0187 */ s8 unk187;                         /* inferred */
    /* 0x0188 */ char pad188[0xA0];                 /* maybe part of unk187[161]? */
    /* 0x0228 */ f32 unk228;                        /* inferred */
} BgDblueBalance;                                   /* size 0x22C */

void func_80B823B0(BgDblueBalance *arg0) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;

    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    sp2C = 0.0f;
    sp30 = 0.0f;
    sp28 = -138.28f;
    temp_v0 = arg0->unk15C;
    if (temp_v0 != 0) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp28, temp_v0 + 0x24);
    }
    temp_a0 = &sp28;
    sp28 = 138.28f;
    temp_v0_2 = arg0->unk160;
    if (temp_v0_2 != 0) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, temp_v0_2 + 0x24);
    }
}

s32 func_80B82454(BgDblueBalance *arg0, GlobalContext *arg1) {
    s32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    Vec3f sp3C;
    ActorContext *sp38;
    Actor *temp_v0;
    Actor *temp_v0_2;
    ActorContext *temp_a0_2;
    f32 *temp_a0;
    f32 *temp_a0_3;

    sp58 = 1;
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    temp_a0 = &sp48;
    sp4C = 0.0f;
    sp50 = 0.0f;
    sp48 = -138.28f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, &sp3C);
    temp_a0_2 = arg1 + 0x1CA0;
    sp38 = temp_a0_2;
    temp_v0 = Actor_Spawn(temp_a0_2, arg1, 0x21B, sp3C.x, sp3C.y, sp3C.z, (s16) 0, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, (s16) 0x100);
    arg0->unk15C = temp_v0;
    if (temp_v0 == 0) {
        sp58 = 0;
    } else {
        arg0->unk15C->unk164 = arg0;
    }
    temp_a0_3 = &sp48;
    sp48 = 138.28f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_3, &sp3C);
    temp_v0_2 = Actor_Spawn(sp38, arg1, 0x21B, sp3C.x, sp3C.y, sp3C.z, (s16) 0, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, (s16) 0x200);
    arg0->unk160 = temp_v0_2;
    if (temp_v0_2 == 0) {
        sp58 = 0;
    } else {
        arg0->unk160->unk164 = arg0;
    }
    return sp58;
}

void func_80B8259C(BgDblueBalance *arg0, GlobalContext *arg1) {
    WaterBox *sp30;
    f32 sp2C;
    f32 temp_f0;

    if (func_800CA1E8(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30) != 0) {
        arg0->actor.yDistToWater = sp2C - arg0->actor.world.pos.y;
        temp_f0 = arg0->actor.yDistToWater;
        arg0->unk228 = sp2C;
        if ((temp_f0 < 150.0f) && (temp_f0 > -150.0f)) {
            arg0->unk182 = 1;
            return;
        }
        goto block_5;
    }
block_5:
    arg0->unk182 = 0;
}

void func_80B8264C(BgDblueBalance *arg0) {
    Vec3f sp78;
    f32 temp_f0;
    s32 temp_s1;
    u8 temp_v0;
    u8 temp_v0_2;
    s16 phi_s2;
    Vec3f *phi_s0;
    s32 phi_s1;

    if (arg0->unk170 != 0) {
        temp_v0 = arg0->unk183;
        if ((s32) temp_v0 < 8) {
            arg0->unk183 = 0;
        } else {
            arg0->unk183 = temp_v0 - 7;
        }
    } else {
        temp_v0_2 = arg0->unk183;
        if ((s32) temp_v0_2 >= 0xFB) {
            arg0->unk183 = 0xFF;
        } else {
            arg0->unk183 = temp_v0_2 + 4;
        }
    }
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    phi_s2 = 0;
    phi_s0 = arg0 + 0x188;
    phi_s1 = 0;
    do {
        phi_s0->unkC = (s16) (arg0->actor.shape.rot.x + phi_s2);
        SysMatrix_StatePush();
        SysMatrix_InsertXRotation_s(phi_s0->unkC, 0);
        SysMatrix_InsertTranslation(-545.0f, 0.0f, 270.0f, 1);
        SysMatrix_GetStateTranslation(&sp78);
        SysMatrix_StatePop();
        SysMatrix_MultiplyVector3fByState(&sp78, phi_s0);
        temp_s1 = phi_s1 + 1;
        phi_s2 = (s16) (phi_s2 + 0x2000);
        phi_s1 = temp_s1;
        if (sp78.z > 135.0f) {
            temp_f0 = (sp78.z - 135.0f) * 1.8962963f;
            if (temp_f0 > 255.0f) {
                phi_s0->unkE = 0xFFU;
                phi_s0->unk10 = 0.1f;
            } else if (temp_f0 < 1.0f) {
                phi_s0->unkE = 0U;
                phi_s0->unk10 = 0.0f;
            } else {
                phi_s0->unkE = (u8) (u32) temp_f0;
                phi_s0->unk10 = (f32) (temp_f0 * 0.000390625f);
            }
        } else {
            phi_s0->unkE = 0U;
        }
        phi_s0 += 0x14;
    } while (temp_s1 != 8);
}

void func_80B828E4(BgDblueBalance *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_a1 = arg0->actor.params;
    arg0 = arg0;
    if ((Flags_GetSwitch(arg1, temp_a1 & 0x7F) != 0) && ((s32) arg0->unk17D <= 0)) {
        temp_v0 = arg0->unk183;
        if ((s32) temp_v0 >= 0xFC) {
            arg0->unk183 = 0xFF;
            return;
        }
        arg0->unk183 = temp_v0 + 3;
        return;
    }
    temp_v0_2 = arg0->unk183;
    if ((s32) temp_v0_2 < 7) {
        arg0->unk183 = 0;
        return;
    }
    arg0->unk183 = temp_v0_2 - 6;
}

void func_80B8296C(GlobalContext *arg0, f32 *arg1, f32 arg2) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 *temp_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    s8 *temp_s0;
    s8 *temp_s0_2;
    s8 *phi_s0;
    f32 phi_f20;
    f32 phi_f20_2;
    s8 *phi_s0_2;

    temp_f20 = arg2 * 2.0f;
    temp_s4 = &sp60;
    phi_s0 = &D_80B83A90;
    do {
        sp60 = ((Rand_ZeroOne() - 0.5f) * temp_f20) + arg1->unk0;
        sp64 = arg1->unk4;
        sp68 = ((Rand_ZeroOne() - 0.5f) * temp_f20) + arg1->unk8;
        EffectSsGRipple_Spawn(arg0, (Vec3f *) temp_s4, 0x1F4, 0x7D0, (s16) (s32) *phi_s0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((u32) temp_s0 < (u32) &D_80B83A92);
    phi_s0_2 = &D_80B83A94;
    do {
        temp_f0 = Rand_ZeroOne();
        temp_f20_2 = 1.0f - (temp_f0 * temp_f0);
        phi_f20 = temp_f20_2;
        if (Rand_Next() > 0) {
            phi_f20 = -temp_f20_2;
        }
        sp60 = (phi_f20 * arg2) + arg1->unk0;
        sp64 = arg1->unk4;
        temp_f0_2 = Rand_ZeroOne();
        temp_f20_3 = 1.0f - (temp_f0_2 * temp_f0_2);
        phi_f20_2 = temp_f20_3;
        if (Rand_Next() > 0) {
            phi_f20_2 = -temp_f20_3;
        }
        sp68 = (phi_f20_2 * arg2) + arg1->unk8;
        EffectSsGRipple_Spawn(arg0, (Vec3f *) temp_s4, 0x190, 0x320, (s16) (s32) *phi_s0_2);
        temp_s0_2 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_2;
    } while (temp_s0_2 != &D_80B83A98);
}

s32 func_80B82B00(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v0 = (s32) arg0 < (s32) arg2;
    phi_v0 = temp_v0;
    if ((s32) arg0 < (s32) arg1) {
        temp_v0_2 = (s32) arg0 < (s32) arg2;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            return ((s32) arg1 < (s32) arg2) ^ 1;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return phi_v0;
    }
    if (temp_v0 == 0) {
        phi_v0 = ((s32) arg1 < (s32) arg2) ^ 1;
    }
    return phi_v0;
}

void BgDblueBalance_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgDblueBalance *this = (BgDblueBalance *) thisx;
    s32 sp2C;
    u32 sp24;
    void *sp20;
    s16 temp_v0;
    void *temp_v1;
    void *phi_v1;
    s16 phi_v0;

    temp_v0 = this->actor.params;
    sp2C = ((s32) temp_v0 >> 8) & 3;
    sp24 = Flags_GetSwitch(globalCtx, temp_v0 & 0x7F);
    Actor_ProcessInitChain(&this->actor, &D_80B83A98);
    temp_v1 = (sp2C * 0x1C) + &D_80B83A20;
    this->actor.flags = temp_v1->unk8;
    this->actor.uncullZoneScale = temp_v1->unkC;
    this->actor.uncullZoneDownward = temp_v1->unk10;
    this->actor.update = temp_v1->unk14;
    this->actor.draw = temp_v1->unk18;
    sp20 = temp_v1;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, temp_v1->unk4);
    phi_v1 = temp_v1;
    if (temp_v1 == &D_80B83A74) {
        sp20 = temp_v1;
        D_80B83C70 = Lib_SegmentedToVirtual(&D_0600CE00);
        goto block_4;
    }
    if (temp_v1 == &D_80B83A20) {
        sp20 = temp_v1;
        D_80B83C74 = Lib_SegmentedToVirtual(&D_0600D250);
block_4:
        phi_v1 = sp20;
    }
    if (phi_v1 == &D_80B83A20) {
        phi_v0 = 0x1C72;
        if (sp24 != 0) {
            this->actor.shape.rot.z = -0x1C72;
            phi_v0 = -0x1C72;
        } else {
            this->actor.shape.rot.z = 0x1C72;
        }
        this->unk174 = phi_v0;
        func_80B82454(this, globalCtx);
        func_80B8259C(this, globalCtx);
        func_80B82DC4(this);
        return;
    }
    if (phi_v1 == &D_80B83A74) {
        this->unk16C = sp24;
        this->unk170 = sp24;
        if (sp24 != 0) {
            func_80B83344(this);
            return;
        }
        this->unk178 = 0x1F4;
        func_80B833A8(this);
        // Duplicate return node #14. Try simplifying control flow for better match
    }
}

void BgDblueBalance_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgDblueBalance *this = (BgDblueBalance *) thisx;
    s32 sp1C;
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    s32 temp_a2;
    s32 temp_v0;
    void *temp_v0_4;
    void *temp_v0_5;

    temp_a2 = this->unk144;
    temp_v0 = ((s32) this->actor.params >> 8) & 3;
    sp1C = temp_v0;
    this = this;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
    if (temp_v0 == 0) {
        temp_v0_2 = this->unk15C;
        if (temp_v0_2 != 0) {
            temp_v0_2->unk164 = 0;
        }
        temp_v0_3 = this->unk160;
        if (temp_v0_3 != 0) {
            temp_v0_3->unk164 = 0;
            return;
        }
        // Duplicate return node #11. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 1) {
        temp_v0_4 = this->unk164;
        if (temp_v0_4 != 0) {
            temp_v0_4->unk15C = 0;
            return;
        }
        // Duplicate return node #11. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 2) {
        temp_v0_5 = this->unk164;
        if (temp_v0_5 != 0) {
            temp_v0_5->unk160 = 0;
        }
    }
}

void func_80B82DC4(BgDblueBalance *arg0) {
    arg0->unk17D = 0x14;
    arg0->actionFunc = func_80B82DE0;
}

void func_80B82DE0(BgDblueBalance *this, GlobalContext *globalCtx) {
    f32 sp88;
    f32 sp70;
    Vec3f sp60;
    Actor *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Vec3f sp40;
    Actor *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    Actor *temp_v0_2;
    Actor *temp_v1;
    f32 *temp_a1;
    f32 *temp_a1_2;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1_2;
    s8 temp_v0;
    s32 phi_a0;
    s32 phi_a1;
    s32 phi_v1;
    s32 phi_a0_2;
    f32 phi_f2;

    sp88 = Math_CosS((s16) (s32) ((f32) this->actor.shape.rot.z * 2.2499313f));
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        temp_v0 = this->unk17D;
        if ((s32) temp_v0 > 0) {
            this->unk17D = temp_v0 - 1;
        } else {
            this->unk174 = -0x1C72;
            this->unk176 = (s32) (sp88 * -300.0f) - 0x3C;
        }
    } else {
        temp_v0_2 = this->unk160;
        temp_v1 = this->unk15C;
        this->unk17D = 0x14;
        phi_a0 = 0;
        phi_a1 = 1;
        if (temp_v0_2 != 0) {
            if (temp_v0_2->unk181 != 0) {
                phi_a0 = 4;
            } else if (temp_v0_2->unk180 != 0) {
                phi_a0 = 2;
            }
        }
        if (temp_v1 != 0) {
            if (temp_v1->unk181 != 0) {
                phi_a1 = 5;
            } else if (temp_v1->unk180 != 0) {
                phi_a1 = 3;
            }
        }
        if (phi_a0 < phi_a1) {
            this->unk174 = 0x1C72;
            this->unk176 = (s32) (sp88 * 370.0f) + 0x50;
        } else {
            this->unk174 = -0x1C72;
            this->unk176 = (s32) (sp88 * -160.0f) - 0x50;
        }
    }
    temp_a0 = this->unk174;
    temp_v0_3 = this->actor.shape.rot.z;
    temp_v1_2 = temp_v0_3 - temp_a0;
    if (temp_a0 == temp_v0_3) {
        this->unk178 = 0;
        this->unk17C = 0;
        return;
    }
    phi_v1 = (s32) temp_v1_2;
    phi_a0_2 = 0x28;
    if ((s32) temp_v1_2 < 0) {
        phi_v1 = (s32) (s16) ((s32) temp_v1_2 * -1);
    }
    if (((s32) this->unk17C > 0) && (phi_v1 < 0x7D0)) {
        phi_a0_2 = 3;
    } else {
        this->unk17C = 0;
    }
    temp_v0_4 = this->unk176;
    if ((s32) temp_v0_4 >= 0) {
        this->unk178 += phi_a0_2;
        if ((s32) temp_v0_4 < (s32) this->unk178) {
            this->unk178 = temp_v0_4;
            goto block_30;
        }
    } else {
        this->unk178 -= phi_a0_2;
        if ((s32) this->unk178 < (s32) temp_v0_4) {
            this->unk178 = temp_v0_4;
block_30:
        }
    }
    temp_f2 = (f32) this->unk178;
    if ((temp_f2 * (f32) this->unk17A) <= 0.0f) {
        sp70 = temp_f2;
        func_801A7328(&this->actor.projectedPos, 0x216F);
    }
    temp_f0 = fabsf((f32) this->unk178 * 0.0022222223f);
    phi_f2 = temp_f0;
    if (temp_f0 > 1.0f) {
        phi_f2 = 1.0f;
    }
    func_8019FAD8(&this->actor.projectedPos, 0x216FU, phi_f2 + 1.0f);
    this->actor.shape.rot.z += this->unk178;
    temp_v0_5 = this->actor.shape.rot.z;
    if ((s32) temp_v0_5 >= 0x1C72) {
        if ((s32) this->unk17C < 2) {
            this->actor.shape.rot.z = 0x1C71;
            this->unk17C += 1;
            this->unk178 = (s16) (s32) ((f32) this->unk178 * -0.6f);
            if (this->unk182 != 0) {
                Audio_PlayActorSound2(&this->actor, 0x2864U);
                sp5C = this->unk15C;
                SysMatrix_StatePush();
                Matrix_RotateY((s16) (this->actor.shape.rot.y - 0x4000), 0U);
                SysMatrix_GetStateTranslationAndScaledZ(45.0f, &sp60);
                SysMatrix_StatePop();
                temp_a1 = &sp50;
                sp50 = sp5C->world.pos.x + sp60.x;
                sp54 = this->unk228;
                sp58 = sp5C->world.pos.z + sp60.z;
                func_80B8296C(globalCtx, temp_a1, 70.0f);
            } else {
                Audio_PlayActorSound2(&this->actor, 0x2871U);
            }
        } else {
            this->actor.shape.rot.z = 0x1C72;
            goto block_47;
        }
    } else if ((s32) temp_v0_5 < -0x1C71) {
        if ((s32) this->unk17C < 2) {
            this->actor.shape.rot.z = -0x1C71;
            this->unk17C += 1;
            this->unk178 = (s16) (s32) ((f32) this->unk178 * -0.6f);
            if (this->unk182 != 0) {
                Audio_PlayActorSound2(&this->actor, 0x2864U);
                sp3C = this->unk160;
                SysMatrix_StatePush();
                Matrix_RotateY((s16) (this->actor.shape.rot.y + 0x4000), 0U);
                SysMatrix_GetStateTranslationAndScaledZ(30.0f, &sp40);
                SysMatrix_StatePop();
                temp_a1_2 = &sp30;
                sp30 = sp3C->world.pos.x + sp40.x;
                sp34 = this->unk228;
                sp38 = sp3C->world.pos.z + sp40.z;
                func_80B8296C(globalCtx, temp_a1_2, 47.0f);
            } else {
                Audio_PlayActorSound2(&this->actor, 0x2871U);
            }
        } else {
            this->actor.shape.rot.z = -0x1C72;
block_47:
            this->unk178 = 0;
        }
    }
    func_80B823B0(this);
}

void BgDblueBalance_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgDblueBalance *this = (BgDblueBalance *) thisx;
    this->unk17A = this->unk178;
    this->actionFunc(this, globalCtx);
    func_80B828E4(this, globalCtx);
}

void func_80B8330C(DynaPolyActor *arg0, ? arg1) {
    arg0->unk180 = func_800CAFB8(arg0);
    arg0->unk181 = func_800CAFDC(arg0);
}

void func_80B83344(BgDblueBalance *arg0) {
    arg0->unk178 = 0;
    arg0->actionFunc = func_80B8335C;
}

void func_80B8335C(BgDblueBalance *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    temp_a1 = this->actor.params;
    this = this;
    if (Flags_GetSwitch(globalCtx, temp_a1 & 0x7F) == 0) {
        this->unk178 = -0x14;
        func_80B833A8(this);
    }
}

void func_80B833A8(BgDblueBalance *arg0) {
    arg0->unk186 = 0;
    arg0->unk187 = 0;
    arg0->actionFunc = func_80B833C4;
}

void func_80B833C4(BgDblueBalance *this, GlobalContext *globalCtx) {
    s32 sp28;
    s16 sp26;
    s16 sp24;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v1;

    sp28 = 0;
    if (this->unk170 != 0) {
        if ((this->unk16C == 0) && (this->unk17F == 0)) {
            this->unk17F = 1;
        }
        if (this->unk186 != 0) {
            temp_v1 = this->unk178;
            if ((s32) temp_v1 >= 0x50) {
                this->unk178 = temp_v1 - 5;
            }
        }
    } else {
        this->unk187 = Math_StepToS(&this->unk178, 0x1F4, 5);
    }
    temp_v0 = this->actor.shape.rot.x;
    this->actor.shape.rot.x = temp_v0 + this->unk178;
    temp_a1 = this->actor.shape.rot.x;
    if (this->unk170 != 0) {
        if (this->unk186 != 0) {
            if (func_80B82B00(temp_v0, temp_a1, this->unk184) != 0) {
                sp28 = 1;
            }
        } else if (this->unk187 != 0) {
            sp26 = temp_v0;
            sp24 = temp_a1;
            if (func_80B82B00(temp_v0, temp_a1, 0x2097) != 0) {
                this->unk184 = -0x8000;
                this->unk186 = 1;
            } else if (func_80B82B00(temp_v0, temp_a1, -0x5F69) != 0) {
                this->unk184 = 0;
                this->unk186 = 1;
            }
        }
    }
    func_80B8264C(this);
    if (sp28 != 0) {
        this->actor.shape.rot.x = this->unk184;
        func_80B83344(this);
    }
}

void func_80B83518(Actor *arg0, GlobalContext *arg1) {
    s8 temp_v0;

    arg0->unk170 = Flags_GetSwitch(arg1, arg0->params & 0x7F);
    arg0->unk168(arg0, arg1);
    temp_v0 = arg0->unk17F;
    if (temp_v0 == 2) {
        arg0->unk17E = (s8) (arg0->unk17E - 1);
        if ((s32) arg0->unk17E <= 0) {
            ActorCutscene_Stop((s16) arg0->cutscene);
            arg0->unk17F = 0;
        }
    } else if ((temp_v0 != 0) && (temp_v0 == 1)) {
        if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
            arg0->unk17F = 2;
            arg0->unk17E = 0x50;
        } else {
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        }
    }
    arg0->unk16C = (u32) arg0->unk170;
}

void BgDblueBalance_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgDblueBalance *this = (BgDblueBalance *) thisx;
    Actor *sp38;
    Gfx *sp34;
    GraphicsContext *sp30;
    Gfx *sp24;
    Actor *temp_v0;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a2;

    func_800BDFC0(globalCtx, *(((((s32) this->actor.params >> 8) & 3) * 0x1C) + &D_80B83A20));
    if (((((s32) this->actor.params >> 8) & 3) == 0) && (this->unk160 != 0)) {
        AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) D_80B83C74);
        temp_v0 = this->unk160;
        sp38 = temp_v0;
        SysMatrix_SetStateRotationAndTranslation(temp_v0->world.pos.x, temp_v0->world.pos.y, temp_v0->world.pos.z, temp_v0 + 0xBC);
        SysMatrix_InsertTranslation(30.0f, 15.0f, 0.0f, 1);
        Matrix_Scale(temp_v0->scale.x, temp_v0->scale.y, temp_v0->scale.z, 1);
        temp_a2 = globalCtx->state.gfxCtx;
        temp_v1 = temp_a2->polyXlu.p;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1->words.w1 = (u32) (sSetupDL + 0x4B0);
        temp_v1_2 = temp_v1 + 8;
        temp_v1_2->words.w0 = 0xDA380003;
        temp_v1_3 = temp_v1_2 + 8;
        sp30 = temp_a2;
        sp24 = temp_v1_2;
        sp34 = temp_v1_3;
        temp_v1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_4 = temp_v1_3 + 8;
        temp_v1_3->words.w1 = (u32) this->unk183;
        temp_v1_4->words.w1 = (u32) &D_0600D110;
        temp_v1_4->words.w0 = 0xDE000000;
        temp_a2->polyXlu.p = temp_v1_4 + 8;
    }
}

void func_80B83758(void *arg0, GlobalContext *arg1) {
    GraphicsContext *sp4C;
    Gfx *temp_s1;
    GraphicsContext *temp_t5;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f6;
    s16 temp_v0;
    s32 temp_s3;
    u8 temp_t0;
    void *temp_s1_2;
    void *temp_s1_3;
    void *phi_f12;
    f32 phi_f0;
    void *phi_s0;
    f32 phi_f6;
    Gfx *phi_s1;
    s32 phi_s3;
    Gfx *phi_s1_2;
    f32 phi_f2;

    temp_v0 = arg0->unk178;
    phi_f12 = arg0;
    phi_f12 = arg0;
    if (temp_v0 != 0) {
        if (temp_v0 == 0x1F4) {
            phi_f0 = 1.0f;
        } else {
            temp_f0 = (f32) temp_v0 * 0.002f;
            phi_f2 = 0.0f;
            if (temp_f0 < 0.0f) {

            } else {
                phi_f12 = (bitwise void *) 1.0f;
                if (temp_f0 > 1.0f) {
                    phi_f2 = 1.0f;
                } else {
                    phi_f2 = temp_f0;
                }
            }
            phi_f0 = phi_f2;
        }
        func_8019FB0C(phi_f12, arg0 + 0xEC, 0x216A, phi_f0, 0x20);
    }
    if ((arg0->unk4 & 0x40) != 0) {
        func_800BDFC0(arg1, *(((((s32) arg0->unk1C >> 8) & 3) * 0x1C) + &D_80B83A20));
        if (arg0->unk183 != 0) {
            AnimatedMat_Draw(arg1, (AnimatedMaterial *) D_80B83C70);
            temp_t5 = arg1->state.gfxCtx;
            sp4C = temp_t5;
            temp_s1 = temp_t5->polyXlu.p;
            temp_s1->words.w0 = 0xDE000000;
            temp_s1->words.w1 = (u32) (sSetupDL + 0x4B0);
            phi_s0 = arg0 + 0x188;
            phi_s1 = temp_s1 + 8;
            phi_s3 = 0;
            do {
                phi_s1_2 = phi_s1;
                if (phi_s0->unkE != 0) {
                    SysMatrix_InsertTranslation(phi_s0->unk0, phi_s0->unk4, phi_s0->unk8, 0);
                    Matrix_RotateY(arg0->unkBE, 1U);
                    SysMatrix_InsertXRotation_s(phi_s0->unkC, 1);
                    temp_f12 = phi_s0->unk10;
                    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                    temp_s1_2 = phi_s1 + 8;
                    temp_t0 = arg0->unk183;
                    temp_f6 = (f32) temp_t0;
                    phi_f6 = temp_f6;
                    if ((s32) temp_t0 < 0) {
                        phi_f6 = temp_f6 + 4294967296.0f;
                    }
                    phi_s1->words.w1 = (s32) ((f32) phi_s0->unkE * phi_f6 * 0.003921569f) & 0xFF;
                    phi_s1->words.w0 = 0xFB000000;
                    temp_s1_2->unk0 = 0xDA380003;
                    temp_s1_3 = temp_s1_2 + 8;
                    temp_s1_2->unk4 = Matrix_NewMtx(arg1->state.gfxCtx);
                    temp_s1_3->unk0 = 0xDE000000;
                    temp_s1_3->unk4 = &D_0600CD10;
                    phi_s1_2 = temp_s1_3 + 8;
                }
                temp_s3 = phi_s3 + 1;
                phi_s0 += 0x14;
                phi_s1 = phi_s1_2;
                phi_s3 = temp_s3;
            } while (temp_s3 != 8);
            sp4C->polyXlu.p = phi_s1_2;
        }
    }
}

