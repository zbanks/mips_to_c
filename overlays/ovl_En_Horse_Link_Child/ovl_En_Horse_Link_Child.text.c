? func_800F415C(Actor *, PosRot *, ?);              /* extern */
? func_80138258(EnHorseLinkChild *, GlobalContext *, ? *, void (*)(void *, GlobalContext *, ?), ? (*)(void *, void **, s32, ?), s32); /* extern */
? func_80138300(?, u8, f32 *, f32 *);               /* extern */
? func_8013859C(GlobalContext *, ? *, ? *, ? *);    /* extern */
? func_80138700(GlobalContext *, ? *);              /* extern */
void func_808DE5C0(EnHorseLinkChild *arg0, EnHorseLinkChild *); /* static */
void func_808DE660(EnHorseLinkChild *arg0);         /* static */
f32 func_808DE728(Actor *arg0, s32);                /* static */
void func_808DE9A8(Actor *arg0, Actor *);           /* static */
void func_808DEA0C(Actor *arg0, ? arg1);            /* static */
void func_808DEA54(Actor *arg0, s32 arg1);          /* static */
void func_808DEB14(Actor *arg0, void *arg1);        /* static */
void func_808DECA0(Actor *arg0);                    /* static */
void func_808DED40(Actor *arg0, void *arg1);        /* static */
void func_808DEFE8(EnHorseLinkChild *arg0);         /* static */
void func_808DF088(Actor *arg0, void *arg1);        /* static */
void func_808DF194(Actor *arg0, void *arg1);        /* static */
void func_808DF560(Actor *arg0);                    /* static */
void func_808DF620(Actor *arg0, void *arg1);        /* static */
void func_808DF788(Actor *arg0);                    /* static */
void func_808DF838(Actor *arg0, void *arg1);        /* static */
void func_808DFC3C(void *arg0, GlobalContext *arg1, ? arg2); /* static */
? func_808DFDC8(void *arg0, void **arg1, s32 arg2, ? arg3); /* static */
extern ? D_06002F98;
extern ? D_0600A480;
extern s32 D_801BDAA4;
static AnimationHeader *D_808DFEC0 = {(AnimationHeader *)0x6006D44, (AnimationHeader *)0x6007468};
static AnimationHeaderCommon *D_808DFEC8 = {
    (AnimationHeaderCommon *)0x6007D50,
    (AnimationHeaderCommon *)0x60043AC,
    (AnimationHeaderCommon *)0x6002F98,
};
static ColliderJntSphElementInit D_808DFED4 = {{0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1}, {0xD, {{0, 0, 0}, 0xA}, 0x64}};
static ColliderJntSphInit D_808DFEF8 = {{0xA, 0, 9, 0x39, 0x12, 0}, 1, &D_808DFED4};
static CollisionCheckInfoInit D_808DFF08 = {0xA, 0x23, 0x64, 0xFE};
static ? D_808DFF10;                                /* unable to generate initializer */
static ? D_808DFF18;                                /* unable to generate initializer */
static InitChainEntry D_808DFF2C;                   /* unable to generate initializer */
static ? D_808DFF30;                                /* unable to generate initializer */
static ? D_808DFF48;                                /* unable to generate initializer */
static ? D_808DFF54;                                /* unable to generate initializer */

typedef struct EnHorseLinkChild {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ s32 unk148;                        /* inferred */
    /* 0x014C */ ? unk14C;                          /* inferred */
    /* 0x014D */ char pad14D[0x4B];
    /* 0x0198 */ SkelAnime unk198;                  /* inferred */
    /* 0x01DC */ char pad1DC[0x8];
    /* 0x01E4 */ u8 unk1E4;                         /* inferred */
    /* 0x01E5 */ char pad1E5[0x3];                  /* maybe part of unk1E4[4]? */
    /* 0x01E8 */ s32 unk1E8;                        /* inferred */
    /* 0x01EC */ ColliderCylinder unk1EC;           /* inferred */
    /* 0x0238 */ ColliderJntSph unk238;             /* inferred */
    /* 0x0258 */ ColliderJntSphElement unk258;      /* inferred */
    /* 0x0298 */ char pad298[0x4];
} EnHorseLinkChild;                                 /* size 0x29C */

void func_808DE5C0(EnHorseLinkChild *arg0) {
    Vec3f *temp_a0;
    f32 temp_f0;
    s32 temp_t1;
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    temp_f0 = arg0->unk198.animCurrentFrame;
    if (((f32) *(&D_808DFF10 + (temp_v0 * 4)) < temp_f0) && ((temp_a0 = arg0 + 0xEC, (temp_v0 != 0)) || !((f32) D_808DFF10.unk4 < temp_f0))) {
        arg0 = arg0;
        func_8019F1C0(temp_a0, 0x2842U);
        temp_t1 = arg0->unk1E8 + 1;
        arg0->unk1E8 = temp_t1;
        if (temp_t1 >= 2) {
            arg0->unk1E8 = 0;
        }
    }
}

void func_808DE660(EnHorseLinkChild *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk148;
    if (temp_v0 == 2) {
        func_808DE5C0(arg0, arg0);
        return;
    }
    if (arg0->unk198.animCurrentFrame == 0.0f) {
        if ((temp_v0 == 3) || (temp_v0 == 4)) {
            func_8019F1C0(arg0 + 0xEC, 0x2843U);
            return;
        }
        if (temp_v0 == 1) {
            arg0 = arg0;
            if (Rand_ZeroOne() > 0.5f) {
                func_8019F1C0(arg0 + 0xEC, 0x2845U);
                return;
            }
            func_8019F1C0(arg0 + 0xEC, 0x2844U);
            // Duplicate return node #10. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

f32 func_808DE728(Actor *arg0) {
    s32 temp_v0;
    f32 phi_f2;

    temp_v0 = arg0->unk148;
    if (temp_v0 == 2) {
        phi_f2 = *(&D_808DFF18 + (temp_v0 * 4)) * arg0->speedXZ * 0.5f;
    } else if (temp_v0 == 3) {
        phi_f2 = *(&D_808DFF18 + (temp_v0 * 4)) * arg0->speedXZ * 0.33333334f;
    } else if (temp_v0 == 4) {
        phi_f2 = *(&D_808DFF18 + (temp_v0 * 4)) * arg0->speedXZ * 0.2f;
    } else {
        phi_f2 = *(&D_808DFF18 + (temp_v0 * 4));
    }
    return phi_f2;
}

void EnHorseLinkChild_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnHorseLinkChild *this = (EnHorseLinkChild *) thisx;
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a1;
    s16 temp_v0;

    Actor_ProcessInitChain(&this->actor, &D_808DFF2C);
    Actor_SetScale(&this->actor, 0.00648f);
    this->actor.gravity = -3.5f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B40B8, 20.0f);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->unk144 = 1;
    this->actor.focus.pos.y += 70.0f;
    this->actor.speedXZ = 0.0f;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    func_8013859C(globalCtx, &this->unk14C, &D_0600A480, &D_06002F98);
    this->unk148 = 0;
    SkelAnime_ChangeAnimDefaultStop(&this->unk198, D_808DFEC0);
    Collider_InitCylinder(globalCtx, &this->unk1EC);
    temp_a1 = &this->unk238;
    sp2C = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, &this->actor, &D_808DFEF8, &this->unk258);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_808DFF08);
    this->unk1E8 = 0;
    this->unk1E4 = 0;
    if (gSaveContext.sceneSetupIndex >= 4) {
        func_808DEFE8(this);
    } else {
        func_808DEFE8(this);
    }
    this->actor.shape.rot.z = 0;
    temp_v0 = this->actor.shape.rot.z;
    this->actor.world.rot.z = temp_v0;
    this->actor.home.rot.z = temp_v0;
}

void EnHorseLinkChild_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHorseLinkChild *this = (EnHorseLinkChild *) thisx;
    func_80138700(globalCtx, &this->unk14C);
    Collider_DestroyCylinder(globalCtx, &this->unk1EC);
    Collider_DestroyJntSph(globalCtx, &this->unk238);
}

void func_808DE9A8(Actor *arg0) {
    SkelAnime *temp_a0;
    s32 temp_v0;
    s32 phi_v0;

    arg0->unk144 = 0;
    temp_a0 = arg0 + 0x198;
    temp_v0 = arg0->unk148 + 1;
    arg0->unk148 = temp_v0;
    phi_v0 = temp_v0;
    if (temp_v0 >= 5) {
        arg0->unk148 = 0;
        phi_v0 = 0;
    }
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, (&D_808DFEC0)[phi_v0]);
    arg0->unk1B4 = func_808DE728(arg0);
}

void func_808DEA0C(Actor *arg0, ? arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x198;
    arg0->speedXZ = 0.0f;
    arg0 = arg0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        func_808DE9A8(arg0, arg0);
    }
}

void func_808DEA54(Actor *arg0, s32 arg1) {
    f32 sp30;
    s32 phi_a1;

    arg0->unk144 = 2;
    arg0->speedXZ = 0.0f;
    phi_a1 = arg1;
    if ((arg1 != 0) && (arg1 != 1)) {
        phi_a1 = 0;
    }
    if (phi_a1 != arg0->unk148) {
        arg0->unk148 = phi_a1;
        sp30 = func_808DE728(arg0, phi_a1);
        SkelAnime_ChangeAnim(arg0 + 0x198, (&D_808DFEC0)[arg0->unk148], sp30, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, -5.0f);
    }
}

void func_808DEB14(Actor *arg0, void *arg1) {
    f32 sp44;
    f32 sp38;
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s32 temp_v1;
    s32 phi_v0;

    temp_f0 = Actor_XZDistanceBetweenActors(arg0, arg1->unk1CCC);
    temp_a0 = arg0 + 0x198;
    sp34 = temp_a0;
    sp44 = temp_f0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if ((sp44 < 1000.0f) && (sp44 > 70.0f)) {
            func_808DECA0(arg0);
            return;
        }
        temp_v1 = arg0->unk148;
        phi_v0 = 1;
        if (temp_v1 == 1) {
            phi_v0 = 0;
        }
        if (phi_v0 != temp_v1) {
            arg0->unk148 = phi_v0;
            sp38 = func_808DE728(arg0);
            SkelAnime_ChangeAnim(sp34, (&D_808DFEC0)[arg0->unk148], sp38, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, -5.0f);
            return;
        }
        sp38 = func_808DE728(arg0);
        SkelAnime_ChangeAnim(sp34, (&D_808DFEC0)[arg0->unk148], sp38, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, 0.0f);
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_808DECA0(Actor *arg0) {
    f32 sp30;

    arg0->unk144 = 1;
    arg0->unk148 = 0;
    arg0->speedXZ = 0.0f;
    sp30 = func_808DE728(arg0);
    SkelAnime_ChangeAnim(arg0 + 0x198, (&D_808DFEC0)[arg0->unk148], sp30, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, -5.0f);
}

void func_808DED40(Actor *arg0, void *arg1) {
    f32 sp34;
    SkelAnime *sp30;
    SkelAnime *temp_a0_2;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk148;
    if ((temp_v0 == 4) || (temp_v0 == 3) || (temp_v0 == 2)) {
        temp_v1 = arg0->world.rot.y;
        temp_a0 = Actor_YawBetweenActors(arg0, arg1->unk1CCC) - temp_v1;
        if ((s32) temp_a0 >= 0x12D) {
            arg0->world.rot.y = temp_v1 + 0x12C;
        } else if ((s32) temp_a0 < -0x12C) {
            arg0->world.rot.y = temp_v1 - 0x12C;
        } else {
            arg0->world.rot.y = temp_v1 + temp_a0;
        }
        arg0->shape.rot.y = arg0->world.rot.y;
    }
    temp_a0_2 = arg0 + 0x198;
    sp30 = temp_a0_2;
    if (SkelAnime_FrameUpdateMatrix(temp_a0_2) != 0) {
        temp_f0 = Actor_XZDistanceBetweenActors(arg0, arg1->unk1CCC);
        if (temp_f0 > 1000.0f) {
            func_808DEA54(arg0, 0);
            return;
        }
        if ((temp_f0 < 1000.0f) && (temp_f0 >= 300.0f)) {
            arg0->speedXZ = 6.0f;
            phi_v0 = 4;
            goto block_22;
        }
        if ((temp_f0 < 300.0f) && (temp_f0 >= 150.0f)) {
            arg0->speedXZ = 4.0f;
            phi_v0 = 3;
            goto block_22;
        }
        if ((temp_f0 < 150.0f) && (phi_v0 = 2, (temp_f0 >= 70.0f))) {
            arg0->unk1E8 = 0;
            arg0->speedXZ = 2.0f;
block_22:
            if (phi_v0 != arg0->unk148) {
                arg0->unk148 = phi_v0;
                sp34 = func_808DE728(arg0);
                SkelAnime_ChangeAnim(sp30, (&D_808DFEC0)[arg0->unk148], sp34, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, -5.0f);
                return;
            }
            sp34 = func_808DE728(arg0);
            SkelAnime_ChangeAnim(sp30, (&D_808DFEC0)[arg0->unk148], sp34, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, 0.0f);
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        }
        func_808DEA54(arg0, 1);
    }
}

void func_808DEFE8(Actor *arg0) {
    f32 sp30;

    arg0->unk144 = 3;
    arg0->unk148 = 0;
    arg0->speedXZ = 0.0f;
    sp30 = func_808DE728(arg0);
    SkelAnime_ChangeAnim(arg0 + 0x198, (&D_808DFEC0)[arg0->unk148], sp30, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, -5.0f);
}

void func_808DF088(Actor *arg0, void *arg1) {
    Actor *sp34;
    s16 sp32;
    Vec3f *sp24;
    Actor *temp_a2;
    Vec3f *temp_a1;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg0->unk148;
    if ((temp_v0 == 4) || (temp_v0 == 3) || (temp_v0 == 2)) {
        temp_a2 = arg1->unk1CCC;
        temp_a1 = arg0 + 8;
        sp24 = temp_a1;
        sp34 = temp_a2;
        if (Math3D_Distance(temp_a2 + 0x24, temp_a1) < 250.0f) {
            temp_v1 = temp_a2->shape.rot.y;
            sp32 = temp_v1;
            if (Actor_YawBetweenActors(arg0, temp_a2) > 0) {
                phi_v0 = 1;
            } else {
                phi_v0 = -1;
            }
            phi_v1 = (s32) (s16) (temp_v1 + (phi_v0 << 0xE));
        } else {
            phi_v1 = (s32) (s16) (Math_Vec3f_Yaw(&arg0->world.pos, temp_a1) - arg0->world.rot.y);
        }
        if (phi_v1 >= 0x12D) {
            arg0->world.rot.y += 0x12C;
        } else if (phi_v1 < -0x12C) {
            arg0->world.rot.y += -0x12C;
        } else {
            arg0->world.rot.y += phi_v1;
        }
        arg0->shape.rot.y = arg0->world.rot.y;
    }
}

void func_808DF194(Actor *arg0, void *arg1) {
    Actor *sp54;
    f32 sp50;
    s32 sp4C;
    s32 sp48;
    f32 sp44;
    f32 sp38;
    PosRot *sp34;
    SkelAnime *sp30;
    Actor *temp_a1;
    PosRot *temp_a1_2;
    SkelAnime *temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v1;

    func_808DF088(arg0, arg1);
    temp_a1 = arg1->unk1CCC;
    sp54 = temp_a1;
    sp50 = Actor_XZDistanceBetweenActors(arg0, temp_a1);
    temp_v1 = arg0->unk148;
    temp_a0 = arg0 + 0x198;
    sp30 = temp_a0;
    sp48 = temp_v1;
    temp_v0 = SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a3 = temp_v0;
    phi_v1 = temp_v1;
    if ((temp_v0 != 0) || (temp_a0_2 = arg0->unk148, (temp_a0_2 == 1)) || (temp_a0_2 == 0)) {
        temp_a1_2 = &arg0->home;
        if ((gSaveContext.weekEventReg[1] & 0x20) != 0) {
            sp34 = temp_a1_2;
            sp4C = temp_a3;
            sp44 = Math3D_Distance(&arg0->world.pos, &temp_a1_2->pos);
            if (Math3D_Distance(&sp54->world.pos, &temp_a1_2->pos) > 250.0f) {
                if (sp44 >= 300.0f) {
                    arg0->speedXZ = 6.0f;
                    phi_v1 = 4;
                } else if ((sp44 < 300.0f) && (sp44 >= 150.0f)) {
                    arg0->speedXZ = 4.0f;
                    phi_v1 = 3;
                } else if ((sp44 < 150.0f) && (sp44 >= 70.0f)) {
                    arg0->unk1E8 = 0;
                    arg0->speedXZ = 2.0f;
                    phi_v1 = 2;
                } else {
                    arg0->speedXZ = 0.0f;
                    if (arg0->unk148 == 0) {
                        if (temp_a3 == 1) {
                            phi_v1 = 1;
                        } else {
                            phi_v1 = 0;
                        }
                    } else if (temp_a3 == 1) {
                        phi_v1 = 0;
                    } else {
                        phi_v1 = 1;
                    }
                }
            } else if (sp50 < 200.0f) {
                arg0->speedXZ = 6.0f;
                phi_v1 = 4;
            } else if (sp50 < 300.0f) {
                arg0->speedXZ = 4.0f;
                phi_v1 = 3;
            } else if (sp50 < 400.0f) {
                arg0->unk1E8 = 0;
                arg0->speedXZ = 2.0f;
                phi_v1 = 2;
            } else {
                arg0->speedXZ = 0.0f;
                if (arg0->unk148 == 0) {
                    if (temp_a3 == 1) {
                        phi_v1 = 1;
                    } else {
                        phi_v1 = 0;
                    }
                } else if (temp_a3 == 1) {
                    phi_v1 = 0;
                } else {
                    phi_v1 = 1;
                }
            }
        } else {
            arg0->speedXZ = 0.0f;
            if (arg0->unk148 == 0) {
                if (temp_v0 == 1) {
                    phi_v1 = 1;
                } else {
                    phi_v1 = 0;
                }
            } else {
                phi_v1 = 1;
                if (temp_v0 == 1) {
                    phi_v1 = 0;
                }
            }
        }
    }
    if ((phi_v1 != arg0->unk148) || (temp_a3 == 1)) {
        arg0->unk148 = phi_v1;
        sp38 = func_808DE728(arg0);
        SkelAnime_ChangeAnim(sp30, (&D_808DFEC0)[arg0->unk148], sp38, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, -5.0f);
        return;
    }
    sp38 = func_808DE728(arg0);
    SkelAnime_ChangeAnim(sp30, (&D_808DFEC0)[arg0->unk148], sp38, arg0->unk1B0, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, 0.0f);
}

void func_808DF560(Actor *arg0) {
    f32 sp30;

    arg0->unk144 = 5;
    if (Rand_ZeroOne() > 0.5f) {
        arg0->unk148 = 0;
    } else {
        arg0->unk148 = 1;
    }
    D_801BDAA4 = 0;
    sp30 = func_808DE728(arg0);
    SkelAnime_ChangeAnim(arg0 + 0x198, (&D_808DFEC0)[arg0->unk148], sp30, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, 0.0f);
}

void func_808DF620(Actor *arg0, void *arg1) {
    s16 sp36;
    SkelAnime *sp30;
    SkelAnime *temp_a0_2;
    s16 temp_a0;
    s32 temp_v1;

    if (D_801BDAA4 != 0) {
        D_801BDAA4 = 0;
        func_8019F1C0(arg0 + 0xEC, 0x2844U);
        func_808DF788(arg0);
        return;
    }
    arg0->speedXZ = 0.0f;
    temp_a0 = Actor_YawBetweenActors(arg0, arg1->unk1CCC) - arg0->world.rot.y;
    sp36 = temp_a0;
    if ((Math_CosS(temp_a0) < 0.7071f) && (arg0->unk148 == 2)) {
        func_800F415C(arg0, &arg1->unk1CCC->world, 0x12C);
    }
    temp_a0_2 = arg0 + 0x198;
    sp30 = temp_a0_2;
    if (SkelAnime_FrameUpdateMatrix(temp_a0_2) != 0) {
        if (Math_CosS(sp36) < 0.0f) {
            arg0->unk148 = 2;
            temp_v1 = arg0->unk148;
            SkelAnime_ChangeAnim(sp30, (&D_808DFEC0)[temp_v1], *(&D_808DFF18 + (temp_v1 * 4)), 0.0f, (f32) SkelAnime_GetFrameCount(D_808DFEC8), (u8) 2, -5.0f);
            return;
        }
        func_808DF560(arg0);
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_808DF788(Actor *arg0) {
    f32 sp30;

    arg0->unk1DC = 0;
    arg0->unk144 = 4;
    arg0->unk148 = 2;
    arg0->unk1E0 = 0;
    arg0->speedXZ = 2.0f;
    sp30 = func_808DE728(arg0);
    SkelAnime_ChangeAnim(arg0 + 0x198, (&D_808DFEC0)[arg0->unk148], sp30, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, -5.0f);
}

void func_808DF838(Actor *arg0, void *arg1) {
    f32 sp34;
    SkelAnime *sp30;
    SkelAnime *temp_a0;
    s32 temp_t8;
    s32 temp_v0;
    f32 phi_f0;
    s32 phi_v0;

    temp_t8 = arg0->unk1DC + 1;
    arg0->unk1DC = temp_t8;
    if (temp_t8 >= 0x12D) {
        arg0->unk1E0 = 1;
    }
    temp_v0 = arg0->unk148;
    if ((temp_v0 == 4) || (temp_v0 == 3) || (temp_v0 == 2)) {
        if (arg0->unk1E0 == 0) {
            func_800F415C(arg0, arg1->unk1CCC + 0x24, 0x12C);
        } else {
            func_800F415C(arg0, arg0 + 8, 0x12C);
        }
    }
    temp_a0 = arg0 + 0x198;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (arg0->unk1E0 == 0) {
            phi_f0 = Actor_XZDistanceBetweenActors(arg0, arg1->unk1CCC);
        } else {
            phi_f0 = Math3D_Distance(&arg0->world.pos, &arg0->home.pos);
        }
        if (arg0->unk1E0 == 0) {
            if (phi_f0 >= 300.0f) {
                arg0->speedXZ = 6.0f;
                phi_v0 = 4;
            } else if (phi_f0 >= 150.0f) {
                arg0->speedXZ = 4.0f;
                phi_v0 = 3;
            } else {
                arg0->unk1E8 = 0;
                arg0->speedXZ = 2.0f;
                phi_v0 = 2;
            }
            goto block_25;
        }
        if (phi_f0 >= 300.0f) {
            arg0->speedXZ = 6.0f;
            phi_v0 = 4;
            goto block_25;
        }
        if (phi_f0 >= 150.0f) {
            arg0->speedXZ = 4.0f;
            phi_v0 = 3;
            goto block_25;
        }
        if (phi_f0 >= 70.0f) {
            arg0->unk1E8 = 0;
            arg0->speedXZ = 2.0f;
            phi_v0 = 2;
block_25:
            if (phi_v0 != arg0->unk148) {
                arg0->unk148 = phi_v0;
                sp34 = func_808DE728(arg0);
                SkelAnime_ChangeAnim(sp30, (&D_808DFEC0)[arg0->unk148], sp34, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, -5.0f);
                return;
            }
            sp34 = func_808DE728(arg0);
            SkelAnime_ChangeAnim(sp30, (&D_808DFEC0)[arg0->unk148], sp34, 0.0f, (f32) SkelAnime_GetFrameCount(&(&D_808DFEC0)[arg0->unk148]->common), (u8) 2, 0.0f);
            // Duplicate return node #28. Try simplifying control flow for better match
            return;
        }
        func_808DF560(arg0);
    }
}

void EnHorseLinkChild_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHorseLinkChild *this = (EnHorseLinkChild *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    u8 temp_t3;
    u8 temp_v0;
    u8 temp_v0_2;

    *(&D_808DFF30 + (this->unk144 * 4))(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 55.0f, 100.0f, 0x1DU);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->actor.focus.pos.y += 70.0f;
    temp_a2 = &this->unk1EC;
    if ((Rand_ZeroOne() < 0.025f) && (temp_v0 = this->unk1E4, (temp_v0 == 0))) {
        this->unk1E4 = temp_v0 + 1;
    } else {
        temp_v0_2 = this->unk1E4;
        temp_t3 = temp_v0_2 + 1;
        if ((s32) temp_v0_2 > 0) {
            this->unk1E4 = temp_t3;
            if ((temp_t3 & 0xFF) >= 4) {
                this->unk1E4 = 0;
            }
        }
    }
    sp2C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    func_808DE660(this);
}

void func_808DFC3C(void *arg0, GlobalContext *arg1, ? arg2) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 *temp_a2;
    s32 temp_s2;
    void *temp_v0;
    s32 phi_s0;
    s32 phi_s2;

    phi_s0 = 0;
    phi_s2 = 0;
    if (arg0->unk250 > 0) {
        do {
            temp_a2 = &sp4C;
            sp4C = (f32) (arg0->unk254 + phi_s0)->unk28;
            sp50 = (f32) (arg0->unk254 + phi_s0)->unk2A;
            sp54 = (f32) (arg0->unk254 + phi_s0)->unk2C;
            func_80138300(arg2, (arg0->unk254 + phi_s0)->unk3C, temp_a2, &sp40);
            temp_s2 = phi_s2 + 1;
            (arg0->unk254 + phi_s0)->unk30 = (s16) (s32) sp40;
            (arg0->unk254 + phi_s0)->unk32 = (s16) (s32) sp44;
            (arg0->unk254 + phi_s0)->unk34 = (s16) (s32) sp48;
            temp_v0 = arg0->unk254 + phi_s0;
            temp_v0->unk36 = (s16) (s32) (temp_v0->unk38 * (f32) temp_v0->unk2E);
            phi_s0 += 0x40;
            phi_s2 = temp_s2;
        } while (temp_s2 < arg0->unk250);
    }
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x238);
}

? func_808DFDC8(void *arg0, void **arg1, s32 arg2, ? arg3) {
    s32 *sp1C;
    s32 *temp_v0;
    void *temp_v1;

    temp_v1 = *arg1;
    if (arg2 == 0xD) {
        temp_v0 = temp_v1->unk2B0;
        temp_v1->unk2B0 = (s32 *) (temp_v0 + 8);
        *temp_v0 = 0xDB060020;
        sp1C = temp_v0;
        sp1C->unk4 = Lib_SegmentedToVirtual(*(&D_808DFF48 + (*(&D_808DFF54 + arg0->unk1E4) * 4)));
    }
    return 1;
}

void EnHorseLinkChild_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnHorseLinkChild *this = (EnHorseLinkChild *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_80138258(this, globalCtx, &this->unk14C, func_808DFC3C, func_808DFDC8, 1);
}

