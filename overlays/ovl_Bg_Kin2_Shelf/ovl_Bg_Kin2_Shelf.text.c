? func_800C56E0(s32, Vec3f *, Vec3f *, ? *, ? *, s32, s32, s32, s32, ? *, void *, f32); /* extern */
void func_80B6FB30(void *arg0, s32 arg1);           /* static */
void func_80B6FCA4(void *arg0, s32 arg1);           /* static */
void func_80B6FE08(GlobalContext *arg0, void *);    /* static */
s32 func_80B6FE48(void *arg0, ? arg1);              /* static */
s32 func_80B6FEBC(GlobalContext *arg0, void *arg1); /* static */
s32 func_80B6FF28(GlobalContext *arg0, void *arg1); /* static */
void func_80B700A8(BgKin2Shelf *arg0);              /* static */
void func_80B700C0(BgKin2Shelf *arg0, GlobalContext *arg1); /* static */
void func_80B70214(BgKin2Shelf *arg0);              /* static */
void func_80B70230(BgKin2Shelf *arg0, GlobalContext *arg1); /* static */
void func_80B70498(BgKin2Shelf *arg0);              /* static */
void func_80B704B4(BgKin2Shelf *arg0, GlobalContext *arg1); /* static */
static ? D_80B70750;                                /* unable to generate initializer */
static f32 D_80B70758 = 40.0f;
static f32 D_80B70760 = {10.0f, 15.0f};
static ? D_80B70768;                                /* unable to generate initializer */
static f32 D_80B70770 = {10.0f, 15.0f};
static ? D_80B70778;                                /* unable to generate initializer */
static InitChainEntry D_80B7077C;                   /* unable to generate initializer */
static ? D_80B70780;                                /* unable to generate initializer */
static ? D_80B70788;                                /* unable to generate initializer */

typedef struct BgKin2Shelf {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ f32 unk148;                        /* inferred */
    /* 0x014C */ char pad14C[0x4];                  /* maybe part of unk148[2]? */
    /* 0x0150 */ s16 unk150;                        /* inferred */
    /* 0x0152 */ char pad152[0xA];                  /* maybe part of unk150[6]? */
    /* 0x015C */ void (*actionFunc)(BgKin2Shelf *, GlobalContext *);
    /* 0x0160 */ f32 unk160;                        /* inferred */
    /* 0x0164 */ u8 unk164;                         /* inferred */
    /* 0x0165 */ s8 unk165;                         /* inferred */
    /* 0x0166 */ s8 unk166;                         /* inferred */
    /* 0x0167 */ s8 unk167;                         /* inferred */
} BgKin2Shelf;                                      /* size 0x168 */

void func_80B6FB30(void *arg0, s32 arg1) {
    f32 spA4;
    s16 spA2;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f sp70;
    ? sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    ? sp54;
    ? sp50;
    s32 temp_v0;
    s16 phi_a0;
    f32 phi_f0;

    if ((arg0->unk164 & 2) != 0) {
        phi_a0 = 0x4000;
    } else {
        phi_a0 = -0x4000;
    }
    temp_v0 = (arg0->unk1C & 1) * 4;
    if (arg0->unk148 < 0.0f) {
        phi_f0 = 28.0f;
    } else {
        phi_f0 = -2.0f;
    }
    spA2 = phi_a0;
    spA4 = *(&D_80B70768 + temp_v0) + (*(&D_80B70750 + temp_v0) + phi_f0);
    SysMatrix_InsertTranslation(0.0f, 10.0f, *(&D_80B70760 + temp_v0), 0);
    Matrix_RotateY(phi_a0, 1U);
    sp58 = 0.0f;
    sp5C = 0.0f;
    sp60 = 0.0f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp58, &sp94);
    sp60 = spA4;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp58, &sp88);
    SysMatrix_SetStateRotationAndTranslation(arg0->unk24, arg0->unk28, arg0->unk2C, arg0 + 0xBC);
    SysMatrix_MultiplyVector3fByState(&sp94, &sp7C);
    SysMatrix_MultiplyVector3fByState(&sp88, &sp70);
    func_800C56E0(arg1 + 0x830, &sp7C, &sp70, &sp64, &sp54, 1, 0, 0, 1, &sp50, arg0, 0.0f);
}

void func_80B6FCA4(void *arg0, s32 arg1) {
    f32 spA0;
    s16 sp9E;
    Vec3f sp90;
    Vec3f sp84;
    Vec3f sp78;
    Vec3f sp6C;
    ? sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    ? sp50;
    ? sp4C;
    s16 phi_a0;
    f32 phi_f0;

    phi_a0 = -0x8000;
    if ((arg0->unk164 & 1) != 0) {
        phi_a0 = 0;
    }
    if (arg0->unk148 < 0.0f) {
        phi_f0 = 28.0f;
    } else {
        phi_f0 = -2.0f;
    }
    sp9E = phi_a0;
    spA0 = D_80B70770 + (D_80B70758 + phi_f0);
    SysMatrix_InsertTranslation(0.0f, 10.0f, D_80B70760, 0);
    Matrix_RotateY(phi_a0, 1U);
    sp54 = 0.0f;
    sp58 = 0.0f;
    sp5C = 0.0f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp54, &sp90);
    sp5C = spA0;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp54, &sp84);
    SysMatrix_SetStateRotationAndTranslation(arg0->unk24, arg0->unk28, arg0->unk2C, arg0 + 0xBC);
    SysMatrix_MultiplyVector3fByState(&sp90, &sp78);
    SysMatrix_MultiplyVector3fByState(&sp84, &sp6C);
    func_800C56E0(arg1 + 0x830, &sp78, &sp6C, &sp60, &sp50, 1, 0, 0, 1, &sp4C, arg0, 0.0f);
}

void func_80B6FE08(void *arg0) {
    if ((arg0->unk164 & 0xA) != 0) {
        func_80B6FB30();
        return;
    }
    func_80B6FCA4();
}

s32 func_80B6FE48(void *arg0, ? arg1) {
    s32 temp_v1;
    s8 temp_a1;

    temp_a1 = arg0->unk166;
    temp_v1 = *(&D_80B70778 + (arg0->unk1C & 1)) & arg0->unk164 & 0xFF;
    if ((temp_a1 != 0) && (arg0->unk167 != 0)) {
        return 0;
    }
    if ((temp_a1 == 0) && (arg0->unk167 == 0)) {
        return temp_v1 != 0;
    }
    if (temp_a1 != 0) {
        return temp_v1 & 0xA;
    }
    return temp_v1 & 5;
}

s32 func_80B6FEBC(void *arg0, void *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk164;
    if ((temp_v0 & 1) != 0) {
        return (s32) arg0->unk167 < 1;
    }
    if ((temp_v0 & 2) != 0) {
        return (s32) arg0->unk166 < 1;
    }
    if ((temp_v0 & 4) != 0) {
        return ((s32) arg0->unk167 < 0) ^ 1;
    }
    if ((temp_v0 & 8) != 0) {
        return ((s32) arg0->unk166 < 0) ^ 1;
    }
    return 0;
}

s32 func_80B6FF28(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 phi_v0;

    temp_v0 = ((s32) arg0->unk165 < 9) ^ 1;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_80B6FE48(arg1) != 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_v0_3 = func_80B6FEBC(arg0, arg1) != 0;
            phi_v0 = temp_v0_3;
            if (temp_v0_3 != 0) {
                phi_v0 = func_80B6FE08(arg0, arg1) == 0;
            }
        }
    }
    return phi_v0;
}

void BgKin2Shelf_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Shelf *this = (BgKin2Shelf *) thisx;
    s32 sp24;

    sp24 = this->actor.params & 1;
    Actor_ProcessInitChain(&this->actor, &D_80B7077C);
    if (sp24 == 0) {
        this->actor.uncullZoneScale = 150.0f;
        this->actor.uncullZoneDownward = 140.0f;
        Actor_SetScale(&this->actor, 0.1f);
    } else {
        this->actor.uncullZoneScale = 250.0f;
        this->actor.uncullZoneDownward = 300.0f;
        Actor_SetScale(&this->actor, 1.0f);
        this->actor.flags |= 0x10000000;
    }
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, *(&D_80B70780 + (sp24 * 4)));
    func_80B700A8(this);
}

void BgKin2Shelf_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Shelf *this = (BgKin2Shelf *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80B700A8(BgKin2Shelf *arg0) {
    arg0->unk165 = 0;
    arg0->actionFunc = func_80B700C0;
}

void func_80B700C0(BgKin2Shelf *arg0, GlobalContext *arg1) {
    f32 temp_f2;
    s16 temp_v0;
    u8 temp_v1;
    void *temp_v0_2;
    s32 phi_v0;
    u8 phi_v0_2;

    temp_f2 = arg0->unk148;
    if (fabsf(temp_f2) > 0.1f) {
        temp_v0 = arg0->unk150 - arg0->actor.shape.rot.y;
        phi_v0 = (s32) temp_v0;
        if (temp_f2 < 0.0f) {
            phi_v0 = (s32) (s16) (temp_v0 + 0x8000);
        }
        if ((phi_v0 < -0x6000) || (phi_v0 >= 0x6000)) {
            phi_v0_2 = 4U;
        } else if (phi_v0 < -0x2000) {
            phi_v0_2 = 8U;
        } else {
            phi_v0_2 = 2U;
            if (phi_v0 < 0x2000) {
                phi_v0_2 = 1U;
            }
        }
        temp_v1 = arg0->unk164;
        if ((temp_v1 == phi_v0_2) || (temp_v1 == 0)) {
            arg0->unk164 = phi_v0_2;
            arg0->unk165 += 1;
        } else {
            arg0->unk165 = 0;
            arg0->unk164 = 0;
        }
        if (func_80B6FF28(arg1) != 0) {
            if ((arg0->unk164 & 0xA) != 0) {
                func_80B70214(arg0);
                return;
            }
            func_80B70498(arg0);
            return;
        }
        temp_v0_2 = arg1->actorCtx.actorList[2].first;
        temp_v0_2->unkA70 = (s32) (temp_v0_2->unkA70 & ~0x10);
        arg0->unk148 = 0.0f;
        return;
    }
    arg0->unk165 = 0;
    arg0->unk164 = 0;
}

void func_80B70214(BgKin2Shelf *arg0) {
    arg0->actionFunc = func_80B70230;
    arg0->unk160 = 0.0f;
}

void func_80B70230(BgKin2Shelf *arg0, GlobalContext *arg1) {
    s32 sp40;
    s16 sp36;
    f32 *sp28;
    f32 *temp_v0_3;
    f32 *temp_v0_4;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_v0;
    void *temp_v0_2;
    f32 phi_f2;
    f32 phi_f20;

    temp_v0 = arg0->actor.params & 1;
    sp40 = temp_v0;
    sp36 = arg0->actor.shape.rot.y + 0x4000;
    if (temp_v0 == 0) {
        phi_f2 = (Math_SinS((s16) (s32) (arg0->unk160 * 32768.0f)) * 0.012f) + 0.014f;
    } else {
        phi_f2 = (Math_SinS((s16) (s32) (arg0->unk160 * 32768.0f)) * 0.003f) + 0.009f;
    }
    arg0->unk160 += phi_f2;
    temp_f0 = arg0->unk160;
    if (temp_f0 >= 1.0f) {
        temp_v0_2 = arg1->actorCtx.actorList[2].first;
        arg0->unk160 = 1.0f;
        temp_v0_2->unkA70 = (s32) (temp_v0_2->unkA70 & ~0x10);
        arg0->unk148 = 0.0f;
        if ((arg0->unk164 & 8) != 0) {
            arg0->unk166 += -1;
        } else {
            arg0->unk166 += 1;
        }
        temp_f20 = (f32) arg0->unk166;
        temp_v0_3 = (sp40 * 4) + &D_80B70750;
        arg0->actor.world.pos.x = (*temp_v0_3 * (Math_SinS(sp36) * temp_f20)) + arg0->actor.home.pos.x;
        sp28 = temp_v0_3;
        arg0->actor.world.pos.z = (*temp_v0_3 * (Math_CosS(sp36) * temp_f20)) + arg0->actor.home.pos.z;
        if (arg0->unk166 != 0) {
            play_sound(0x4807U);
        }
        func_80B700A8(arg0);
        return;
    }
    if ((arg0->unk164 & 8) != 0) {
        phi_f20 = (f32) arg0->unk166 - temp_f0;
    } else {
        phi_f20 = (f32) arg0->unk166 + temp_f0;
    }
    temp_v0_4 = (sp40 * 4) + &D_80B70750;
    arg0->actor.world.pos.x = (*temp_v0_4 * (Math_SinS(sp36) * phi_f20)) + arg0->actor.home.pos.x;
    sp28 = temp_v0_4;
    arg0->actor.world.pos.z = (*temp_v0_4 * (Math_CosS(sp36) * phi_f20)) + arg0->actor.home.pos.z;
}

void func_80B70498(BgKin2Shelf *arg0) {
    arg0->actionFunc = func_80B704B4;
    arg0->unk160 = 0.0f;
}

void func_80B704B4(BgKin2Shelf *arg0, GlobalContext *arg1) {
    s32 sp40;
    s16 sp36;
    f32 *sp28;
    f32 *temp_v0_2;
    f32 *temp_v0_3;
    f32 temp_f20;
    f32 temp_f2;
    void *temp_v0;
    f32 phi_f20;

    sp40 = arg0->actor.params & 1;
    sp36 = arg0->actor.shape.rot.y;
    arg0->unk160 += (Math_SinS((s16) (s32) (arg0->unk160 * 32768.0f)) * 0.022f) + 0.022f;
    temp_f2 = arg0->unk160;
    if (temp_f2 >= 1.0f) {
        temp_v0 = arg1->actorCtx.actorList[2].first;
        arg0->unk160 = 1.0f;
        temp_v0->unkA70 = (s32) (temp_v0->unkA70 & ~0x10);
        arg0->unk148 = 0.0f;
        if ((arg0->unk164 & 4) != 0) {
            arg0->unk167 += -1;
        } else {
            arg0->unk167 += 1;
        }
        temp_f20 = (f32) arg0->unk167;
        temp_v0_2 = &(&D_80B70758)[sp40];
        arg0->actor.world.pos.x = (*temp_v0_2 * (Math_SinS(sp36) * temp_f20)) + arg0->actor.home.pos.x;
        sp28 = temp_v0_2;
        arg0->actor.world.pos.z = (*temp_v0_2 * (Math_CosS(sp36) * temp_f20)) + arg0->actor.home.pos.z;
        if (arg0->unk167 != 0) {
            play_sound(0x4807U);
        }
        func_80B700A8(arg0);
        return;
    }
    if ((arg0->unk164 & 4) != 0) {
        phi_f20 = (f32) arg0->unk167 - temp_f2;
    } else {
        phi_f20 = (f32) arg0->unk167 + temp_f2;
    }
    temp_v0_3 = &(&D_80B70758)[sp40];
    arg0->actor.world.pos.x = (*temp_v0_3 * (Math_SinS(sp36) * phi_f20)) + arg0->actor.home.pos.x;
    sp28 = temp_v0_3;
    arg0->actor.world.pos.z = (*temp_v0_3 * (Math_CosS(sp36) * phi_f20)) + arg0->actor.home.pos.z;
}

void BgKin2Shelf_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Shelf *this = (BgKin2Shelf *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgKin2Shelf_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Shelf *this = (BgKin2Shelf *) thisx;
    func_800BDFC0(globalCtx, *(&D_80B70788 + ((this->actor.params & 1) * 4)));
}

