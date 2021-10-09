s32 func_800C5A64(s32, s32, s32, Actor *);          /* extern */
void func_80B28370(Actor *arg0, s32 arg1);          /* static */
s32 func_80B28478(Actor *arg0);                     /* static */
void func_80B287F4(Actor *arg0, s32 arg1);          /* static */
s32 func_80B288E8(Actor *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4); /* static */
s32 func_80B2899C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B289DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B28B5C(EnFish2 *arg0);                  /* static */
void func_80B28C14(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B29128(Actor *arg0);                    /* static */
void func_80B2913C(EnFish2 *arg0, GlobalContext *arg1); /* static */
void func_80B29194(Actor *arg0, s32);               /* static */
void func_80B29250(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B2938C(Actor *arg0);                    /* static */
void func_80B293C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B2951C(Actor *arg0);                    /* static */
void func_80B295A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B29778(Actor *arg0);                    /* static */
void func_80B297FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B29E5C(void *arg0, void *arg1);         /* static */
void func_80B29EE4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B2A01C(EnFish2 *, GlobalContext *);     /* static */
void func_80B2A094(EnFish2 *, GlobalContext *);     /* static */
void func_80B2A23C(EnFish2 *, GlobalContext *);     /* static */
void func_80B2A448(Actor *arg0);                    /* static */
void func_80B2A498(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B2ABF4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80B2AC20(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B2ADB0(Actor *arg0, Vec3f *arg1, s16 arg2); /* static */
void func_80B2AF80(EnFish2 *arg0, GlobalContext *arg1); /* static */
void func_80B2B180(EnFish2 *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_060013AC;
extern FlexSkeletonHeader D_06006190;
static s32 D_80B2B2E0 = 0;
static s32 D_80B2B2E4 = 0;
static s32 D_80B2B2E8 = 0;
static s32 D_80B2B2EC = 0;
static s32 D_80B2B2F0 = 0;
static Actor *D_80B2B2F4 = NULL;
static ColliderJntSphElementInit D_80B2B318 = {
    {{2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1}, {1, {{0, 0, 0}, 0}, 1}},
    {
        {2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
        {0x11, {{0, 0, 0}, 0}, 1},
    },
};
static ColliderJntSphInit D_80B2B360 = {{0xC, 0, 0, 0x39, 0x10, 0}, 2, &D_80B2B318};
static ? D_80B2B370;                                /* unable to generate initializer */
static f32 D_80B2B380 = {0.019f, 0.033f};
static ? D_80B2B388;                                /* unable to generate initializer */
static ? D_80B2B3A0;                                /* unable to generate initializer */
static ? D_80B2B3A8;                                /* unable to generate initializer */

typedef struct EnFish2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x8A];                 /* maybe part of unk188[24]? */
    /* 0x0218 */ Vec3s unk218;                      /* inferred */
    /* 0x021E */ char pad21E[0x8A];                 /* maybe part of unk218[24]? */
    /* 0x02A8 */ void (*actionFunc)(EnFish2 *, GlobalContext *);
    /* 0x02AC */ char pad2AC[0x4];                  /* maybe part of actionFunc[2]? */
    /* 0x02B0 */ s32 unk2B0;                        /* inferred */
    /* 0x02B4 */ s16 unk2B4;                        /* inferred */
    /* 0x02B6 */ s16 unk2B6;                        /* inferred */
    /* 0x02B8 */ s16 unk2B8;                        /* inferred */
    /* 0x02BA */ s16 unk2BA;                        /* inferred */
    /* 0x02BC */ char pad2BC[0x4];                  /* maybe part of unk2BA[3]? */
    /* 0x02C0 */ s32 unk2C0;                        /* inferred */
    /* 0x02C4 */ s32 unk2C4;                        /* inferred */
    /* 0x02C8 */ s8 unk2C8;                         /* inferred */
    /* 0x02C9 */ char pad2C9[0x1];                  /* maybe part of unk2C8[2]? */
    /* 0x02CA */ s16 unk2CA;                        /* inferred */
    /* 0x02CC */ char pad2CC[0x8];                  /* maybe part of unk2CA[5]? */
    /* 0x02D4 */ f32 unk2D4;                        /* inferred */
    /* 0x02D8 */ f32 unk2D8;                        /* inferred */
    /* 0x02DC */ Vec3f unk2DC;                      /* inferred */
    /* 0x02E8 */ Vec3f unk2E8;                      /* inferred */
    /* 0x02F4 */ Vec3f unk2F4;                      /* inferred */
    /* 0x0300 */ char pad300[0x24];                 /* maybe part of unk2F4[4]? */
    /* 0x0324 */ Vec3f unk324;                      /* inferred */
    /* 0x0330 */ f32 unk330;                        /* inferred */
    /* 0x0334 */ f32 unk334;                        /* inferred */
    /* 0x0338 */ char pad338[0x4];                  /* maybe part of unk334[2]? */
    /* 0x033C */ f32 unk33C;                        /* inferred */
    /* 0x0340 */ char pad340[0x4];                  /* maybe part of unk33C[2]? */
    /* 0x0344 */ s32 unk344;                        /* inferred */
    /* 0x0348 */ s16 unk348;                        /* inferred */
    /* 0x034A */ s16 unk34A;                        /* inferred */
    /* 0x034C */ s16 unk34C;                        /* inferred */
    /* 0x034E */ char pad34E[0x2];                  /* maybe part of unk34C[2]? */
    /* 0x0350 */ void *unk350;                      /* inferred */
    /* 0x0354 */ char pad354[0x4];                  /* maybe part of unk350[2]? */
    /* 0x0358 */ ColliderJntSph unk358;             /* inferred */
    /* 0x0378 */ ColliderJntSphElement unk378;      /* inferred */
    /* 0x03B8 */ char pad3B8[0x1C60];
} EnFish2;                                          /* size 0x2018 */

void func_80B28370(Actor *arg0, s32 arg1) {
    f32 sp34;
    s32 temp_v1;
    f32 phi_f0;
    s32 phi_v1;

    arg0->unk2AC = arg1;
    temp_v1 = arg0->unk2AC;
    arg0->unk2CC = (f32) SkelAnime_GetFrameCount(*(&D_80B2B388 + (arg1 * 4)));
    phi_f0 = 0.0f;
    if (temp_v1 == 3) {
        phi_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80B2B388 + (temp_v1 * 4))) - 21.0f;
    }
    phi_v1 = arg0->unk2AC;
    if (arg0->unk2AC == 2) {
        sp34 = phi_f0;
        arg0->unk2CC = (f32) ((f32) SkelAnime_GetFrameCount(*(&D_80B2B388 + (arg0->unk2AC * 4))) - 21.0f);
        phi_v1 = arg0->unk2AC;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80B2B388 + (phi_v1 * 4)), 1.0f, phi_f0, arg0->unk2CC, (u8) (s32) *(&D_80B2B3A0 + phi_v1), -10.0f);
}

s32 func_80B28478(Actor *arg0) {
    void *temp_v0;
    void *temp_v0_2;

    if (arg0->unk2C8 == 0) {
        if ((D_80B2B2E4 != 0) && ((D_80B2B2E0 != 1) || (temp_v0 = arg0->unk350, (temp_v0 == 0)) || (temp_v0->unk138 == 0)) && (arg0->unk2B0 == 0)) {
            arg0->unk2B4 = 0;
            arg0->unk2C4 = 0;
            arg0->unk2B6 = (s16) arg0->unk2B4;
            func_80B28B5C();
            return 1;
        }
        goto block_10;
    }
    temp_v0_2 = arg0->unk350;
    if ((temp_v0_2 == 0) || (temp_v0_2->unk138 == 0)) {
        arg0->unk2B4 = 0;
        arg0->unk2C4 = 0;
        arg0->unk2B6 = (s16) arg0->unk2B4;
        func_80B28B5C();
        return 1;
    }
block_10:
    return 0;
}

void EnFish2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnFish2 *this = (EnFish2 *) thisx;
    s16 temp_v0_3;
    s16 temp_v1;
    s8 temp_s0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;
    s16 phi_s0;
    EnFish2 *phi_s1;

    Math_Vec3f_Copy(&this->unk324, &this->actor.home.pos);
    this->unk344 = D_80B2B2F0;
    D_80B2B2F0 += 1;
    temp_v1 = this->actor.params;
    if (temp_v1 == 0) {
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
        SkelAnime_InitSV(globalCtx, &this->unk144, &D_06006190, &D_060013AC, &this->unk188, &this->unk218, 0x18);
        this->actor.colChkInfo.mass = 0xFF;
        if (this->unk344 == 0) {
            temp_v0 = gSaveContext.weekEventReg[81];
            phi_v0 = temp_v0;
            if ((temp_v0 & 0x10) != 0) {
                this->unk2C0 = 1;
                phi_v0 = gSaveContext.weekEventReg[81];
            }
            phi_v0_2 = phi_v0;
            if ((phi_v0 & 0x20) != 0) {
                this->unk2C0 = 2;
                phi_v0_2 = gSaveContext.weekEventReg[81];
            }
            if ((phi_v0_2 & 0x40) != 0) {
                this->unk2C0 = 3;
            }
        } else {
            if ((gSaveContext.weekEventReg[81] & 0x80) != 0) {
                this->unk2C0 = 1;
            }
            temp_v0_2 = gSaveContext.weekEventReg[82];
            phi_v0_3 = temp_v0_2;
            if ((temp_v0_2 & 1) != 0) {
                this->unk2C0 = 2;
                phi_v0_3 = gSaveContext.weekEventReg[82];
            }
            if ((phi_v0_3 & 2) != 0) {
                this->unk2C0 = 3;
            }
        }
        temp_s0 = this->actor.cutscene;
        this->unk330 = *(&D_80B2B370 + (this->unk2C0 * 4));
        phi_s0 = (s16) temp_s0;
        if (temp_s0 != -1) {
            phi_s1 = this;
            do {
                phi_s1->unk2BA = phi_s0;
                temp_v0_3 = ActorCutscene_GetAdditionalCutscene(phi_s0);
                phi_s0 = temp_v0_3;
                phi_s1 += 2;
            } while (temp_v0_3 != -1);
        }
        Collider_InitAndSetJntSph(globalCtx, &this->unk358, &this->actor, &D_80B2B360, &this->unk378);
        this->unk358.elements->dim.modelSphere.radius = 5;
        this->unk358.elements->dim.scale = 1.0f;
        this->unk358.elements->dim.modelSphere.center.x = 0x514;
        this->unk358.elements->dim.modelSphere.center.y = 0;
        this->unk358.elements->dim.modelSphere.center.z = 0;
        this->unk358.elements->unk6E = 5;
        this->unk358.elements->unk78 = 1.0f;
        this->unk358.elements->unk68 = 0x1F4;
        this->unk358.elements->unk6A = 0;
        this->unk358.elements->unk6C = 0;
        this->actor.textId = 0x24C;
        func_80B28B5C(this);
        return;
    }
    if (temp_v1 != 0) {
        this->unk2B4 = 0xA;
        this->actor.draw = NULL;
        this->actor.flags |= 0x8000000;
        this->actionFunc = func_80B2A01C;
    }
}

void EnFish2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnFish2 *this = (EnFish2 *) thisx;
    if (this->actor.params != 1) {
        Collider_DestroyJntSph(globalCtx, &this->unk358);
    }
}

void func_80B287F4(Actor *arg0, s32 arg1) {
    Vec3f sp2C;
    Vec3f *sp28;
    Vec3f *temp_a0;
    f32 temp_f0;
    s32 temp_t8;
    s32 temp_v0;
    s32 phi_v0;

    if ((arg0->unk354 != 0) && (arg0->unk2C8 == 0)) {
        temp_v0 = arg0->unk2C4;
        temp_t8 = temp_v0 + 1;
        phi_v0 = temp_v0;
        if (temp_v0 < 0x190) {
            arg0->unk2C4 = temp_t8;
            phi_v0 = temp_t8;
        }
        temp_f0 = (f32) phi_v0;
        arg0->unk338 = (f32) (440.0f - temp_f0);
        if (arg1 == 0) {
            arg0->unk338 = (f32) (410.0f - temp_f0);
        }
        Math_ApproachF(arg0->unk350 + 0x70, (D_80B2B380 - arg0->unk330) * arg0->unk338, 0.1f, 0.4f);
    }
    Math_Vec3f_Copy(&sp2C, arg0->unk350 + 0x24);
    temp_a0 = arg0 + 0x24;
    sp28 = temp_a0;
    arg0->unk34A = Math_Vec3f_Yaw(temp_a0, &sp2C);
    arg0->unk348 = Math_Vec3f_Pitch(temp_a0, &sp2C);
}

s32 func_80B288E8(Actor *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    void *temp_v0;
    f32 phi_f2;

    temp_v0 = arg0->unk350;
    temp_f2 = temp_v0->unk24 - arg1;
    temp_f12 = temp_v0->unk28 - arg2;
    temp_f14 = temp_v0->unk2C - arg3;
    if (arg4 == 0) {
        phi_f2 = 40.0f;
    } else {
        temp_f2_2 = arg0->unk330 * 2000.0f;
        phi_f2 = temp_f2_2;
        if (temp_f2_2 > 20.0f) {
            phi_f2 = 20.0f;
        }
    }
    if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < phi_f2) {
        return 1;
    }
    return 0;
}

s32 func_80B2899C(Actor *arg0, GlobalContext *arg1) {
    if (func_800C5A64(arg1 + 0x830, arg0 + 0x2F4, arg0->unk33C, arg0) != 0) {
        return 1;
    }
    return 0;
}

void func_80B289DC(Actor *arg0, GlobalContext *arg1) {
    WaterBox *sp2C;
    f32 temp_f0;
    s16 temp_v0;

    if (arg0->unk2B4 != 0) {
        arg0->unk348 = 0;
    }
    temp_v0 = arg0->unk348;
    if (temp_v0 != 0) {
        if ((s32) temp_v0 > 0) {
            if (arg0->unk2D4 < arg0->world.pos.y) {
                arg0->velocity.y = (f32) arg0->world.rot.x * 0.001f * -0.1f;
                if (func_80B297FC == arg0->unk2A8) {
                    arg0->velocity.y *= 2.0f;
                    return;
                }
                // Duplicate return node #15. Try simplifying control flow for better match
                return;
            }
            arg0->unk348 = 0;
            arg0->velocity.y = 0.0f;
            goto block_14;
        }
        if (func_800CA1AC(arg1, arg1 + 0x830, arg0->world.pos.x, arg0->world.pos.z, arg0 + 0x334, &sp2C) != 0) {
            temp_f0 = arg0->unk334;
            if ((temp_f0 != -32000.0f) && (arg0->world.pos.y < (temp_f0 - arg0->unk2D8)) && (arg0->velocity.y = (f32) arg0->world.rot.x * 0.001f * -0.1f, (func_80B297FC == arg0->unk2A8))) {
                arg0->velocity.y *= 2.0f;
                return;
            }
            // Duplicate return node #15. Try simplifying control flow for better match
            return;
        }
        arg0->unk348 = 0;
        arg0->velocity.y = 0.0f;
block_14:
        arg0->gravity = 0.0f;
        // Duplicate return node #15. Try simplifying control flow for better match
    }
}

void func_80B28B5C(EnFish2 *arg0) {
    void *temp_v0;

    func_80B28370(NULL);
    arg0->unk2B4 = 0;
    arg0->unk348 = 0;
    arg0->unk2C4 = 0;
    arg0->unk2C8 = 0;
    arg0->unk334 = -32000.0f;
    arg0->unk2B6 = arg0->unk2B4;
    arg0->unk34C = arg0->unk348;
    arg0->unk34A = arg0->actor.world.rot.y;
    arg0->unk358.elements->unk6E = (s16) ((s32) ((arg0->unk330 - 0.01f) * 1000.0f) + 5);
    temp_v0 = arg0->unk358.elements;
    if ((s32) temp_v0->unk6E >= 0x10) {
        temp_v0->unk6E = 0xF;
    }
    arg0->actionFunc = func_80B28C14;
}

void func_80B28C14(Actor *arg0, GlobalContext *arg1) {
    void *sp54;
    WaterBox *sp50;
    Actor *temp_v0_3;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;
    void *phi_v1_2;
    void *phi_v1_3;
    f32 phi_f2;

    temp_v1 = arg1->actorCtx.actorList[7].first;
    sp54 = temp_v1;
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80B29128(arg0);
        return;
    }
    if ((arg0->unk2B8 == 0) && (fabsf((f32) (arg0->world.rot.y - arg0->unk34A)) < 100.0f)) {
        sp54 = temp_v1;
        if (func_80B2899C(arg0, arg1) != 0) {
            if (arg0->unk340 == 0) {
                arg0->unk34A = (s16) (arg0->unk34A + 0x4000);
            } else {
                arg0->unk34A = (s16) (arg0->unk34A - 0x4000);
            }
            arg0->unk2B8 = (s16) ((s32) (arg0->unk330 * 1000.0f) - 0xA);
        }
    }
    sp54 = arg1->actorCtx.actorList[7].first;
    func_80B289DC(arg0, arg1);
    phi_v1_2 = arg1->actorCtx.actorList[7].first;
    if (arg0->unk2B6 == 0) {
        temp_v0 = arg0->unk2B4;
        if (temp_v0 == 0) {
            sp54 = arg1->actorCtx.actorList[7].first;
            arg0->unk2B4 = (s16) ((s32) Rand_ZeroFloat(20.0f) + 0xA);
            phi_v1_2 = arg1->actorCtx.actorList[7].first;
        } else if (temp_v0 == 1) {
            if ((arg0->unk348 == 0) || (sp54 = arg1->actorCtx.actorList[7].first, (Rand_ZeroOne() < 0.6f))) {
                sp54 = arg1->actorCtx.actorList[7].first;
                arg0->unk348 = (s16) (s32) randPlusMinusPoint5Scaled(8192.0f);
                phi_v1 = arg1->actorCtx.actorList[7].first;
            } else {
                sp54 = arg1->actorCtx.actorList[7].first;
                arg0->unk348 = Math_Vec3f_Pitch(&arg0->world.pos, arg0 + 0x324);
                phi_v1 = arg1->actorCtx.actorList[7].first;
                if ((s32) arg0->unk348 < -0x1000) {
                    arg0->unk348 = -0x1000;
                }
                if ((s32) arg0->unk348 >= 0x1001) {
                    arg0->unk348 = 0x1000;
                }
            }
            sp54 = phi_v1;
            arg0->unk2B6 = (s16) ((s32) Rand_ZeroFloat(70.0f) + 0x1E);
            phi_v1_2 = phi_v1;
            if (arg0->unk2C0 >= 3) {
                sp54 = phi_v1;
                arg0->unk2B6 = (s16) (arg0->unk2B6 - (s32) Rand_ZeroFloat(20.0f));
                phi_v1_2 = phi_v1;
            }
        }
    }
    if (arg0->unk334 == -32000.0f) {
        sp54 = phi_v1_2;
        if (func_800CA1AC(arg1, &arg1->colCtx, arg0->world.pos.x, arg0->world.pos.z, arg0 + 0x334, &sp50) == 0) {
            arg0->unk334 = (f32) arg0->world.pos.y;
        }
    }
    if (arg0->unk2B4 == 0) {
        sp54 = phi_v1_2;
        Math_ApproachF(&arg0->speedXZ, (D_80B2B380 - arg0->unk330) * 400.0f, 0.3f, 0.3f);
        temp_f0 = arg0->speedXZ;
        if (temp_f0 > 3.0f) {
            arg0->speedXZ = 3.0f;
        } else if (temp_f0 < 1.5f) {
            arg0->speedXZ = 1.5f;
        }
    } else {
        sp54 = phi_v1_2;
        Math_ApproachZeroF(&arg0->speedXZ, 0.3f, 0.3f);
    }
    phi_v1_3 = phi_v1_2;
    phi_f2 = 100.0f;
    if ((D_80B2B2E8 == 0) && (D_80B2B2E0 != 2)) {
        if (phi_v1_2 != 0) {
loop_35:
            temp_v0_2 = phi_v1_3->id;
            if ((temp_v0_2 != 0x17) && (temp_v0_2 != 0x17B)) {
                goto block_51;
            }
            if (temp_v0_2 == 0x17B) {
                if ((phi_v1_3->update != 0) && ((phi_v1_3->unk30C & 0x200) != 0)) {
                    arg0->unk350 = phi_v1_3;
                    arg0->unk2C8 = 1;
                    func_80B29194(arg0, 0x17);
                    phi_f2 = 100.0f;
                } else {
                    goto block_51;
                }
            } else if ((phi_v1_3->update != 0) && (phi_v1_3->params == 0) && (fabsf(phi_v1_3->world.pos.x - arg0->world.pos.x) < 100.0f) && (fabsf(phi_v1_3->world.pos.z - arg0->world.pos.z) < 100.0f) && ((phi_v1_3->bgCheckFlags & 0x20) != 0)) {
                arg0->unk350 = phi_v1_3;
                if (D_80B2B2E0 == 0) {
                    arg0->unk354 = NULL;
                    temp_v0_3 = Actor_SpawnAsChild(&arg1->actorCtx, arg0, arg1, 0x1F1, arg0->unk324, arg0->unk328, arg0->unk32C, (s16) 0, (s16) 0, (s16) 0, 1);
                    arg0->unk354 = temp_v0_3;
                    if (temp_v0_3 != 0) {
                        D_80B2B2E4 = 0;
                        D_80B2B2E0 = 1;
                        temp_v0_3->unk2BA = (s16) arg0->unk2BA;
                        temp_v0_3->unk350 = (Actor *) arg0->unk350;
                    }
                }
                func_80B29194(arg0);
                phi_f2 = 100.0f;
            } else {
block_51:
                temp_v1_2 = phi_v1_3->next;
                phi_v1_3 = temp_v1_2;
                if (temp_v1_2 != 0) {
                    goto loop_35;
                }
            }
        }
        func_800B8614(arg0, arg1, phi_f2);
    }
}

void func_80B29128(Actor *arg0) {
    arg0->unk2A8 = func_80B2913C;
}

void func_80B2913C(EnFish2 *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        func_801477B4(arg1);
        func_80B28B5C(arg0);
    }
}

void func_80B29194(Actor *arg0) {
    if ((arg0->unk354 != 0) && (arg0->unk2C8 == 0)) {
        arg0->unk350->unk277 = 1;
    }
    arg0->unk2C4 = 0;
    arg0->speedXZ = 0.0f;
    if (arg0->unk2C8 == 0) {
        arg0->unk34C = 0x190;
        Math_Vec3f_Copy(arg0 + 0x24, arg0 + 0x324);
        arg0->world.pos.y = arg0->floorHeight + (arg0->unk330 * 1200.0f);
    }
    arg0->unk34A = 0;
    arg0->unk340 = (s32) ((s32) Rand_ZeroOne() & 1);
    func_80B28370(arg0, 1);
    arg0->unk2A8 = func_80B29250;
}

void func_80B29250(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    u8 temp_v0;
    f32 phi_f2;

    if (func_80B28478(arg0) == 0) {
        Math_ApproachF(arg0 + 0x70, (D_80B2B380 - arg0->unk330) * 1000.0f, 0.3f, 0.3f);
        temp_f0 = arg0->speedXZ;
        phi_f2 = 4.0f;
        if (temp_f0 > 4.0f) {
            goto block_4;
        }
        phi_f2 = 2.0f;
        if (temp_f0 < 2.0f) {
block_4:
            arg0->speedXZ = phi_f2;
        }
        func_80B287F4(arg0, 0);
        func_80B289DC(arg0, arg1);
        if ((func_80B288E8(arg0, subroutine_arg1, arg0->unk304, arg0->unk308, 0) != 0) && (((temp_v0 = arg0->unk2C8, (temp_v0 == 0)) && (D_80B2B2E4 == 1)) || (temp_v0 != 0))) {
            Math_Vec3f_Copy(arg0 + 0x30C, arg0->unk350 + 0x24);
            func_80B2938C(arg0);
        }
    }
}

void func_80B2938C(Actor *arg0) {
    func_80B28370((Actor *)5);
    arg0->unk348 = 0;
    arg0->unk2A8 = func_80B293C4;
}

void func_80B293C4(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 temp_f0;
    f32 phi_f2;

    sp2C = arg0->unk15C;
    if (func_80B28478(arg0) == 0) {
        func_80B287F4(arg0, 1);
        Math_ApproachF(&arg0->speedXZ, (D_80B2B380 - arg0->unk330) * 1000.0f, 0.3f, 0.3f);
        temp_f0 = arg0->speedXZ;
        phi_f2 = 3.0f;
        if (temp_f0 > 3.0f) {
            goto block_4;
        }
        phi_f2 = 1.0f;
        if (temp_f0 < 1.0f) {
block_4:
            arg0->speedXZ = phi_f2;
        }
        if (arg0->unk2CC <= sp2C) {
            func_80B28370(arg0, 1);
            if (arg0->unk2B0 == 0) {
                arg0->unk2A8 = func_80B29250;
                return;
            }
            arg0->unk2A8 = func_80B29EE4;
            return;
        }
        func_80B289DC(arg0, arg1);
        if (func_80B288E8(arg0, subroutine_arg1, arg0->unk31C, arg0->unk320, 1) != 0) {
            func_80B2951C(arg0);
        }
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_80B2951C(Actor *arg0) {
    Actor *temp_a0;

    arg0->velocity.y = 0.0f;
    arg0->gravity = 0.0f;
    arg0->unk348 = 0;
    if (arg0->unk2C8 == 0) {
        D_80B2B2E0 = 2;
    }
    arg0->unk2B4 = 0xA;
    temp_a0 = arg0->unk350;
    arg0->speedXZ = 3.0f;
    arg0 = arg0;
    Actor_MarkForDeath(temp_a0);
    arg0->unk350 = NULL;
    D_80B2B2F4 = arg0;
    Audio_PlayActorSound2(arg0, 0x3826U);
    arg0->unk2A8 = func_80B295A4;
}

void func_80B295A4(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp60;
    Vec3f *temp_s3;
    f32 temp_f20;
    s32 temp_s0;
    s32 phi_s0;

    temp_f20 = arg0->unk15C;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_SmoothStepToS(arg0 + 0x32, Math_Vec3f_Yaw(arg0 + 0x24, arg1 + 0xE0), 1, 0x1388, (s16) 0);
    Math_ApproachZeroF(arg0 + 0x70, 0.3f, 0.3f);
    temp_s3 = &sp60;
    if (arg0->unk2B4 != 0) {
        Math_Vec3f_Copy(temp_s3, arg0 + 0x318);
        sp60.x += randPlusMinusPoint5Scaled(100.0f);
        sp60.z += randPlusMinusPoint5Scaled(100.0f);
        phi_s0 = 0;
        do {
            EffectSsBubble_Spawn(arg1, temp_s3, 0.0f, 5.0f, 5.0f, Rand_ZeroFloat(arg0->unk330 * 4.0f) + 0.1f);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 2);
        return;
    }
    if (arg0->unk2CC <= temp_f20) {
        if (arg0->unk2AC != 5) {
            func_80B28370(arg0, 5);
            return;
        }
        if (arg0->unk2C8 == 0) {
            func_80B29778(arg0);
            return;
        }
        arg0->unk2B4 = 0;
        arg0->unk2C4 = 0;
        arg0->unk2B6 = (s16) arg0->unk2B4;
        func_80B28B5C((EnFish2 *) arg0);
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void func_80B29778(Actor *arg0) {
    func_80B28370(NULL);
    arg0->unk2B4 = 0;
    arg0->unk2C4 = 0;
    arg0->unk2B6 = (s16) arg0->unk2B4;
    if (arg0->unk2B0 != 0) {
        arg0->unk324 = (f32) (arg0->home.pos.x - 14.0f);
        arg0->unk32C = (f32) (arg0->home.pos.z - 18.0f);
    }
    arg0->unk2A8 = func_80B297FC;
    arg0->unk328 = (f32) arg0->unk2D4;
    arg0->speedXZ = 0.0f;
}

void func_80B297FC(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp48;
    Vec3f sp3C;
    s32 sp38;
    Vec3f *sp30;
    Vec3f *sp2C;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_t6;
    void *temp_v0_3;
    void *temp_v0_4;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f0_3;
    s32 phi_v0;
    f32 phi_f0_4;
    f32 phi_f0_5;
    f32 phi_f0_6;

    temp_t6 = arg0->unk2C4;
    phi_f0 = 0.0f;
    phi_f0_2 = 0.0f;
    phi_f0_4 = 0.0f;
    phi_f0_5 = 0.0f;
    switch (temp_t6) {
    case 0:
        temp_a1 = arg0 + 0x324;
        sp30 = temp_a1;
        Math_Vec3f_Copy(&sp48, temp_a1);
        temp_a0 = arg0 + 0x24;
        sp2C = temp_a0;
        sp48.y = arg0->unk2D4;
        arg0->unk348 = Math_Vec3f_Pitch(temp_a0, &sp48);
        if ((s32) arg0->unk348 < -0x2000) {
            arg0->unk348 = -0x2000;
        }
        if ((s32) arg0->unk348 >= 0x2001) {
            arg0->unk348 = 0x2000;
        }
        arg0->unk34A = Math_Vec3f_Yaw(sp2C, sp30);
        func_80B289DC(arg0, arg1);
        Math_ApproachF(&sp2C->x, arg0->unk324, 0.3f, 3.0f);
        Math_ApproachF(&arg0->world.pos.y, arg0->unk2D4, 0.3f, 3.0f);
        Math_ApproachF(&arg0->world.pos.z, arg0->unk32C, 0.3f, 3.0f);
        if ((fabsf(arg0->world.pos.x - arg0->unk324) < 2.0f) && (arg0->world.pos.y < (arg0->unk2D4 + 3.0f)) && (fabsf(arg0->world.pos.z - arg0->unk32C) < 2.0f)) {
            arg0->speedXZ = 0.0f;
            arg0->unk34A = (s16) (arg0->home.rot.y + 0x8000);
            arg0->unk2C4 = (u32) (arg0->unk2C4 + 1);
            arg0->velocity.y = 0.0f;
            arg0->gravity = 0.0f;
        }
        break;
    case 1:
        Math_SmoothStepToS(arg0 + 0x348, 0, 1, 0x7D0, (s16) 0);
        if ((fabsf((f32) (arg0->world.rot.y - arg0->unk34A)) < 100.0f) && (fabsf((f32) arg0->world.rot.x) < 30.0f)) {
            temp_t8 = arg0->unk2C0 + 1;
            arg0->unk2C0 = temp_t8;
            if (arg0->unk344 == 0) {
                if (temp_t8 == 1) {
                    gSaveContext.weekEventReg[81] |= 0x10;
                } else if (temp_t8 == 2) {
                    gSaveContext.weekEventReg[81] |= 0x20;
                } else if (temp_t8 == 3) {
                    gSaveContext.weekEventReg[81] |= 0x40;
                }
            } else {
                temp_v0 = arg0->unk2C0;
                if (temp_v0 == 1) {
                    gSaveContext.weekEventReg[81] |= 0x80;
                } else if (temp_v0 == 2) {
                    gSaveContext.weekEventReg[82] |= 1;
                } else if (temp_v0 == 3) {
                    gSaveContext.weekEventReg[82] |= 2;
                }
            }
            if (arg0->unk2B0 != 0) {
                arg0->unk2C0 = 5;
            }
            arg0->unk2B6 = 4;
            Audio_PlayActorSound2(arg0, 0x28BCU);
            arg0->unk2C4 = (u32) (arg0->unk2C4 + 1);
        }
        break;
    case 2:
        phi_f0 = 0.1f;
        // fallthrough
    case 4:
        phi_f0_2 = phi_f0;
        if (phi_f0 == 0.0f) {
            phi_f0_2 = 0.3f;
        }
        // fallthrough
    case 6:
        phi_f0_3 = phi_f0_2;
        if (phi_f0_2 == 0.0f) {
            phi_f0_3 = 0.5f;
        }
        Math_ApproachF(arg0 + 0x330, *(&D_80B2B370 + (arg0->unk2C0 * 4)) * phi_f0_3, 0.3f, 0.004f);
        if (arg0->unk2B6 == 0) {
            Math_Vec3f_Copy(&sp3C, &arg0->world.pos);
            sp3C.y += -10.0f;
            phi_v0 = 0;
            do {
                sp38 = phi_v0;
                func_80B2ADB0(arg0, &sp3C, 0x46);
                temp_v0_2 = phi_v0 + 1;
                phi_v0 = temp_v0_2;
            } while (temp_v0_2 != 0x1E);
            arg0->unk2B6 = 2;
            arg0->unk2C4 = (u32) (arg0->unk2C4 + 1);
        }
        break;
    case 3:
        phi_f0_4 = 1.3f;
        // fallthrough
    case 5:
        phi_f0_5 = phi_f0_4;
        if (phi_f0_4 == 0.0f) {
            phi_f0_5 = 1.5f;
        }
        // fallthrough
    case 7:
        phi_f0_6 = phi_f0_5;
        if (phi_f0_5 == 0.0f) {
            phi_f0_6 = 1.7f;
        }
        Math_ApproachF(arg0 + 0x330, *(&D_80B2B370 + (arg0->unk2C0 * 4)) * phi_f0_6, 0.3f, 0.004f);
        if (arg0->unk2B6 == 0) {
            arg0->unk2B6 = 2;
            arg0->unk2C4 = (u32) (arg0->unk2C4 + 1);
        }
        break;
    case 8:
        Math_ApproachF(arg0 + 0x330, *(&D_80B2B370 + (arg0->unk2C0 * 4)), 0.3f, 0.004f);
        if (arg0->unk2B6 == 0) {
            arg0->unk2B6 = 0x1E;
            arg0->unk2C4 = (u32) (arg0->unk2C4 + 1);
        }
        break;
    case 9:
        if (arg0->unk2B6 == 0) {
            if (arg0->unk2C0 >= 4) {
                arg0->unk2C0 = 3;
                arg0->unk2C4 = 0U;
                if (arg0->unk2B0 == 0) {
                    arg0->unk2A8 = func_80B29E5C;
                } else {
                    func_80B2A448(arg0);
                }
            } else {
                arg0->unk2B6 = 0;
                arg0->unk2B4 = 0;
                arg0->unk2C4 = 0U;
                if (D_80B2B2EC >= 0xC9) {
                    D_80B2B2E4 = 0;
                    D_80B2B2EC = 0;
                    D_80B2B2E0 = 0;
                } else {
                    D_80B2B2E4 = 3;
                }
                arg0->unk374->unk2E = (s16) ((s32) ((arg0->unk330 - 0.01f) * 1000.0f) + 5);
                temp_v0_3 = arg0->unk374;
                if ((s32) temp_v0_3->unk2E >= 0x10) {
                    temp_v0_3->unk2E = 0xF;
                }
                arg0->unk374->unk6E = (s16) ((s32) ((arg0->unk330 - 0.01f) * 1000.0f) + 5);
                temp_v0_4 = arg0->unk374;
                if ((s32) temp_v0_4->unk6E >= 0x10) {
                    temp_v0_4->unk6E = 0xF;
                }
                func_80B28B5C((EnFish2 *) arg0);
            }
        }
        break;
    }
    Math_SmoothStepToS(&arg0->world.rot.y, arg0->unk34A, 1, 0xFA0, (s16) 0);
}

void func_80B29E5C(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg1->unk1CFC;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if (phi_v0->unk0 != 0x1F1) {
            goto block_5;
        }
        if (arg0 != phi_v0) {
            arg0->unk350 = phi_v0;
            D_80B2B2E8 = 1;
            arg0->unk2B0 = 1;
            func_80B28370(NULL);
            arg0->unk2A8 = func_80B29EE4;
            return;
        }
block_5:
        temp_v0_2 = phi_v0->unk12C;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            // Duplicate return node #6. Try simplifying control flow for better match
            return;
        }
        goto loop_1;
    }
}

void func_80B29EE4(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp2C;
    PosRot *sp28;
    PosRot *temp_a0;
    s32 temp_t6;
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk2C4;
    temp_t6 = temp_v0 + 1;
    phi_v0 = temp_v0;
    if (temp_v0 < 0x190) {
        arg0->unk2C4 = temp_t6;
        phi_v0 = temp_t6;
    }
    arg0->unk338 = (f32) (410.0f - (f32) phi_v0);
    Math_ApproachF(arg0 + 0x70, 2.0f, 0.3f, 0.3f);
    Math_ApproachF(arg0->unk350 + 0x70, (D_80B2B380 - arg0->unk330) * arg0->unk338, 0.1f, 0.4f);
    func_80B289DC(arg0, arg1);
    Math_Vec3f_Copy(&sp2C, arg0->unk350 + 0x24);
    temp_a0 = &arg0->world;
    sp28 = temp_a0;
    arg0->unk34A = Math_Vec3f_Yaw(&temp_a0->pos, &sp2C);
    arg0->unk348 = Math_Vec3f_Pitch(&temp_a0->pos, &sp2C);
    if (func_80B288E8(arg0, subroutine_arg1, arg0->unk304, arg0->unk308, 0) != 0) {
        Math_Vec3f_Copy(arg0 + 0x30C, arg0->unk350 + 0x24);
        func_80B2938C(arg0);
    }
}

void func_80B2A01C(EnFish2 *arg0, GlobalContext *arg1) {
    EnFish2 *temp_a1;
    s16 temp_a0;
    s16 temp_a0_2;

    if (arg0->unk2B4 == 0) {
        temp_a0 = arg0->unk2BA;
        arg0 = arg0;
        temp_a1 = arg0;
        if (ActorCutscene_GetCanPlayNext(temp_a0) == 0) {
            ActorCutscene_SetIntentToPlay(temp_a1->unk2BA);
            return;
        }
        temp_a1->unk2B4 = 0xF;
        temp_a0_2 = temp_a1->unk2BA;
        arg0 = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields(temp_a0_2, &temp_a1->actor);
        arg0->actionFunc = func_80B2A094;
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_80B2A094(EnFish2 *arg0, GlobalContext *arg1) {
    Vec3f sp2C;
    s32 temp_t3;
    s32 temp_t8;
    s32 temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (arg0->unk2B4 == 0) {
        D_80B2B2E4 = 1;
    }
    arg0->unk2CA = ActorCutscene_GetCurrentCamera(arg0->unk2BA);
    temp_v1 = D_80B2B2EC;
    temp_t8 = temp_v1 + 1;
    if ((temp_v1 != 0) && (D_80B2B2EC = temp_t8, ((temp_t8 < 0xC9) == 0))) {
        Actor_MarkForDeath(&arg0->actor);
        ActorCutscene_Stop(arg0->unk2BA);
        return;
    }
    temp_v1_2 = arg0->unk350;
    if ((temp_v1_2 != 0) && (temp_v1_2->unk138 != 0)) {
        Math_Vec3f_Copy(&sp2C, temp_v1_2 + 0x24);
        sp2C.x += Math_SinS(-0x3A98) * 110.0f;
        sp2C.z += Math_CosS(-0x3A98) * 110.0f;
        Math_Vec3f_Copy(&arg0->unk2DC, &sp2C);
        Math_Vec3f_Copy(&sp2C, arg0->unk350 + 0x24);
        sp2C.x += Math_SinS(-0x3A98) * 10.0f;
        sp2C.z += Math_CosS(-0x3A98) * 10.0f;
        Math_Vec3f_Copy(&arg0->unk2E8, &sp2C);
    }
    Play_CameraSetAtEye(arg1, arg0->unk2CA, &arg0->unk2E8, &arg0->unk2DC);
    temp_v1_3 = arg0->unk350;
    if ((temp_v1_3 == 0) || (temp_v1_3->unk138 == 0)) {
        arg0->unk350 = NULL;
        temp_t3 = arg0->unk2B0 + 1;
        arg0->unk2B0 = temp_t3;
        if (temp_t3 >= 0xB) {
            arg0->unk2B4 = 0x14;
            arg0->actionFunc = func_80B2A23C;
        }
    }
}

void func_80B2A23C(EnFish2 *arg0, GlobalContext *arg1) {
    Vec3f sp2C;
    PosRot *sp24;
    Actor *temp_v0;
    PosRot *temp_a1;
    f32 temp_f10;

    temp_a1 = &arg0->actor.world;
    sp24 = temp_a1;
    Math_Vec3f_Copy(&sp2C, &temp_a1->pos);
    if (D_80B2B2E4 == 2) {
        temp_f10 = sp2C.x + (Math_SinS(-0x3A98) * 180.0f);
        sp2C.y += 90.0f;
        sp2C.x = temp_f10;
        sp2C.z += Math_CosS(-0x3A98) * 180.0f;
        Math_Vec3f_Copy(&arg0->unk2DC, &sp2C);
        Math_Vec3f_Copy(&sp2C, &sp24->pos);
        sp2C.y += 70.0f;
        Math_Vec3f_Copy(&arg0->unk2E8, &sp2C);
    } else {
        temp_v0 = D_80B2B2F4;
        if (temp_v0 != 0) {
            Math_Vec3f_Copy(&sp2C, &temp_v0->world.pos);
            sp2C.x += Math_SinS(-0x3A98) * 110.0f;
            sp2C.z += Math_CosS(-0x3A98) * 110.0f;
            Math_Vec3f_Copy(&arg0->unk2DC, &sp2C);
            Math_Vec3f_Copy(&sp2C, &D_80B2B2F4->world.pos);
            sp2C.x += Math_SinS(-0x3A98) * 10.0f;
            sp2C.z += Math_CosS(-0x3A98) * 10.0f;
            Math_Vec3f_Copy(&arg0->unk2E8, &sp2C);
        }
    }
    Play_CameraSetAtEye(arg1, arg0->unk2CA, &arg0->unk2E8, &arg0->unk2DC);
    if ((arg0->unk2B4 == 0) && (D_80B2B2E4 == 3)) {
        D_80B2B2E4 = 0;
        D_80B2B2EC = 0;
        D_80B2B2E0 = 0;
        D_80B2B2F4 = NULL;
        ActorCutscene_Stop(arg0->unk2BA);
        Actor_MarkForDeath(&arg0->actor);
    }
}

void func_80B2A448(Actor *arg0) {
    func_80B28370((Actor *)4);
    arg0->unk2B4 = 0;
    arg0->unk2C4 = 0;
    arg0->unk2B6 = (s16) arg0->unk2B4;
    D_80B2B2E4 = 2;
    arg0->unk2A8 = func_80B2A498;
}

void func_80B2A498(Actor *arg0, GlobalContext *arg1) {
    f32 sp8C;
    Vec3f sp80;
    WaterBox *sp78;
    Vec3f sp6C;
    Actor *temp_s0;
    Actor *temp_v0;
    PosRot *temp_s2;
    Vec3f *temp_s1;
    s32 temp_s0_2;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t8;
    s32 phi_s0;

    sp8C = arg0->unk15C;
    if ((arg0->unk2AC == 4) && (func_801378B8(arg0 + 0x144, 13.0f) != 0)) {
        Math_Vec3f_Copy(&sp80, arg0 + 0x318);
        temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x1D9, sp80.x, sp80.y, sp80.z, (s16) 0, (s16) (s32) arg0->world.rot.y, (s16) 0, (s16) 0);
        if (temp_v0 != 0) {
            temp_v0->speedXZ = 4.0f;
            temp_v0->velocity.y = 15.0f;
            Audio_PlayActorSound2(arg0, 0x4823U);
            temp_t0 = gSaveContext.weekEventReg[81] & 0xEF;
            temp_t2 = temp_t0 & 0xDF;
            gSaveContext.weekEventReg[81] = temp_t0;
            temp_t4 = temp_t2 & 0xBF;
            temp_t8 = gSaveContext.weekEventReg[82] & 0xFE;
            gSaveContext.weekEventReg[81] = temp_t2;
            gSaveContext.weekEventReg[81] = temp_t4;
            gSaveContext.weekEventReg[82] = temp_t8;
            gSaveContext.weekEventReg[81] = temp_t4 & 0x7F;
            gSaveContext.weekEventReg[82] = temp_t8 & 0xFD;
        }
    }
    temp_s0 = arg0 + 0x144;
    if ((arg0->unk2AC == 4) && ((func_801378B8((SkelAnime *) temp_s0, 13.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0, 31.0f) != 0)) && (func_800CA1AC(arg1, &arg1->colCtx, arg0->world.pos.x, arg0->world.pos.z, arg0 + 0x334, &sp78) != 0)) {
        temp_s2 = &arg0->world;
        Audio_PlaySoundAtPosition(arg1, &temp_s2->pos, 0x32, 0x2817U);
        temp_s1 = &sp6C;
        phi_s0 = 0;
        do {
            Math_Vec3f_Copy(temp_s1, &temp_s2->pos);
            sp6C.x += randPlusMinusPoint5Scaled(70.0f);
            sp6C.y = arg0->unk334 + 10.0f;
            sp6C.z += randPlusMinusPoint5Scaled(70.0f);
            EffectSsGSplash_Spawn(arg1, temp_s1, NULL, NULL, (s16) 0, (s16) ((s32) randPlusMinusPoint5Scaled(50.0f) + 0x15E));
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0xA);
    }
    if ((arg0->unk2CC <= sp8C) && (arg0->unk2AC == 4)) {
        D_80B2B2E0 = 0;
        D_80B2B2E4 = 3;
        arg0->world.pos.x = arg0->unk324;
        arg0->world.pos.z = arg0->unk32C;
        func_80B28370(arg0, 0);
    }
}

void EnFish2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnFish2 *this = (EnFish2 *) thisx;
    WaterBox *sp6C;
    Vec3f sp5C;
    f32 sp54;
    WaterBox *sp4C;
    Vec3s *sp44;
    CollisionContext *sp3C;
    f32 *sp38;
    CollisionContext *temp_a1;
    f32 *temp_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_4;
    void *temp_v0_5;
    s32 phi_s0;
    f32 phi_f20;
    f32 phi_f2;
    s32 phi_v0;

    if ((func_80B295A4 != this->actionFunc) && (this->actor.params != 1)) {
        SkelAnime_FrameUpdateMatrix(&this->unk144);
    }
    temp_v0 = this->unk2B8;
    if (temp_v0 != 0) {
        this->unk2B8 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk2B6;
    if (temp_v0_2 != 0) {
        this->unk2B6 = temp_v0_2 - 1;
    }
    temp_v1 = this->unk2B4;
    if (temp_v1 == 0) {

    } else {
        this->unk2B4 = temp_v1 - 1;
    }
    this->actionFunc(this, globalCtx);
    Actor_SetHeight(&this->actor, 0.0f);
    temp_v0_3 = this->actor.params;
    if (temp_v0_3 != 1) {
        if (temp_v0_3 == 0) {
            Math_SmoothStepToS(&this->actor.world.rot.x, this->unk348, 1, (s16) (this->unk34C + 0xC8), (s16) 0);
            if (func_80B297FC != this->actionFunc) {
                Math_SmoothStepToS(&this->actor.world.rot.y, this->unk34A, 1, 0xBB8, (s16) 0);
            }
        }
        sp44 = &this->actor.world.rot;
        if ((globalCtx->gameplayFrames & 7) == 0) {
            Math_Vec3f_Copy(&sp5C, &this->unk324);
            sp5C.x += randPlusMinusPoint5Scaled(100.0f);
            sp5C.y = this->actor.floorHeight;
            sp5C.z += randPlusMinusPoint5Scaled(100.0f);
            phi_s0 = 0;
            if (((s32) randPlusMinusPoint5Scaled(5.0f) + 0xA) > 0) {
                do {
                    EffectSsBubble_Spawn(globalCtx, &sp5C, 0.0f, 5.0f, 5.0f, Rand_ZeroFloat(this->unk330 * 4.0f) + 0.1f);
                    temp_s0 = phi_s0 + 1;
                    phi_s0 = temp_s0;
                } while (temp_s0 < ((s32) randPlusMinusPoint5Scaled(5.0f) + 0xA));
            }
        }
        func_80B2AF80(this, globalCtx);
        Math_Vec3s_Copy(&this->actor.shape.rot, sp44);
        Math_Vec3f_Copy(&this->unk2F4, &this->actor.world.pos);
        this->unk2F4.x += (Math_SinS(this->actor.world.rot.y) * 25.0f) - this->unk330;
        temp_f2 = this->unk330;
        this->unk2F4.z += (Math_CosS(this->actor.world.rot.y) * 25.0f) - temp_f2;
        this->unk33C = 25.0f - ((temp_f2 - 0.01f) * 1000.0f);
        Actor_SetScale(&this->actor, temp_f2);
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 15.0f, 10.0f, 7U);
        temp_a1 = &globalCtx->colCtx;
        if (this->actor.params != 2) {
            temp_f2_2 = this->unk330;
            temp_v1_2 = &this->unk334;
            temp_f0 = this->actor.floorHeight + (temp_f2_2 * 1000.0f);
            this->unk2D8 = temp_f2_2 * 600.0f;
            this->unk2D4 = temp_f0;
            if (this->actor.world.pos.y < temp_f0) {
                this->actor.world.pos.y = this->unk2D4 + 0.1f;
            }
            sp3C = temp_a1;
            sp38 = temp_v1_2;
            if (func_800CA1AC(globalCtx, temp_a1, this->actor.world.pos.x, this->actor.world.pos.z, temp_v1_2, &sp6C) != 0) {
                temp_f0_2 = this->unk334;
                if (temp_f0_2 != -32000.0f) {
                    temp_f2_3 = temp_f0_2 - this->unk2D8;
                    if (temp_f2_3 < this->actor.world.pos.y) {
                        this->actor.world.pos.y = temp_f2_3;
                    }
                }
            }
            temp_v0_4 = D_80B2B2E8;
            phi_v0 = temp_v0_4;
            if ((temp_v0_4 == 0) && (func_80B28C14 == this->actionFunc)) {
                temp_s0_2 = this->unk344 * 2;
                sp54 = 0.0f;
                phi_f20 = 0.0f;
                phi_f2 = 0.0f;
                if (func_800CA1AC(globalCtx, temp_a1, this->actor.world.pos.x, this->actor.world.pos.z, temp_v1_2, &sp4C) != 0) {
                    temp_v0_5 = (temp_s0_2 * 4) + &D_80B2B3A8;
                    phi_f20 = temp_v0_5->unk0 + (this->unk334 - this->unk2D8);
                    phi_f2 = temp_v0_5->unk4 + this->unk2D4;
                }
                if ((phi_f20 < this->actor.world.pos.y) && ((s32) this->unk348 < 0)) {
                    this->unk348 = 0;
                    this->actor.velocity.y = 0.0f;
                    this->actor.gravity = 0.0f;
                }
                if ((this->actor.world.pos.y < phi_f2) && ((s32) this->unk348 > 0)) {
                    this->unk348 = 0;
                    this->actor.velocity.y = 0.0f;
                    this->actor.gravity = 0.0f;
                }
                phi_v0 = D_80B2B2E8;
            }
            if (phi_v0 == 0) {
                CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk358.base);
            }
        }
    }
}

s32 func_80B2ABF4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    if ((arg1 == 0x14) || (arg1 == 0x15)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80B2AC20(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;

    if ((arg1 == 0x14) || (arg1 == 0x15)) {
        sp24 = *arg0;
        SysMatrix_StatePush();
        SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
        temp_v0 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp1C = temp_v0;
        sp1C->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_2 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = *arg2;
        SysMatrix_StatePop();
    }
    if (arg1 == 0xE) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x318);
    }
    if (arg1 == 0x11) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x300);
    }
    Collider_UpdateSpheres(arg1, arg4 + 0x358);
}

void EnFish2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnFish2 *this = (EnFish2 *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80B2ABF4, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80B2AC20, &this->actor);
    func_80B2B180(this, globalCtx);
}

void func_80B2ADB0(Actor *arg0, Vec3f *arg1, s16 arg2) {
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f18;
    s16 temp_v0;
    s32 temp_t8;
    u8 temp_t0;
    void *phi_s0;
    s32 phi_v0;
    f32 phi_f18;
    f32 phi_f16;
    s16 phi_v0_2;

    phi_s0 = arg0 + 0x3F8;
    phi_v0_2 = 0;
loop_1:
    if (phi_s0->unk0 == 0) {
        phi_v0 = (s32) &D_04091BE0;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0 = (s32) &D_04091CE0;
        }
        phi_s0->unk0 = 1U;
        phi_s0->unk20 = (s32) (gSegments[(u32) (phi_v0 * 0x10) >> 0x1C] + (phi_v0 & 0xFFFFFF));
        temp_t8 = 1U & 0xFF;
        phi_s0->unk4 = (f32) arg1->x;
        temp_f18 = (f32) temp_t8;
        phi_s0->unk8 = (f32) arg1->y;
        phi_s0->unkC = (f32) arg1->z;
        phi_f18 = temp_f18;
        if (temp_t8 < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        phi_s0->unk4 = (f32) (phi_s0->unk4 + randPlusMinusPoint5Scaled(phi_f18 + (arg0->unk330 * 4000.0f)));
        temp_t0 = phi_s0->unk0;
        phi_s0->unk8 = (f32) (phi_s0->unk8 + randPlusMinusPoint5Scaled(20.0f));
        temp_f16 = (f32) temp_t0;
        phi_f16 = temp_f16;
        if ((s32) temp_t0 < 0) {
            phi_f16 = temp_f16 + 4294967296.0f;
        }
        phi_s0->unkC = (f32) (phi_s0->unkC + randPlusMinusPoint5Scaled(phi_f16 + (arg0->unk330 * 4000.0f)));
        temp_f0 = Rand_ZeroFloat(5.0f);
        phi_s0->unk1C = 0x42;
        phi_s0->unk18 = (f32) ((arg0->unk330 * 20.0f) - (temp_f0 * 0.01f));
        phi_s0->unk10 = arg2;
        return;
    }
    temp_v0 = phi_v0_2 + 1;
    phi_s0 += 0x24;
    phi_v0_2 = temp_v0;
    if ((s32) temp_v0 >= 0xC8) {
        return;
    }
    goto loop_1;
}

void func_80B2AF80(EnFish2 *arg0, GlobalContext *arg1) {
    WaterBox *sp90;
    f32 sp8C;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 *temp_a1;
    f32 *temp_s4;
    s32 temp_s2;
    void *phi_s0;
    s32 phi_s2;

    temp_s4 = &sp8C;
    phi_s0 = arg0 + 0x3F8;
    phi_s2 = 0;
    do {
        if (phi_s0->unk0 != 0) {
            if ((phi_s0->unk10 != 0) && (phi_s0->unk1C != 0)) {
                Math_ApproachF(phi_s0 + 0x14, phi_s0->unk18, 0.4f, 0.5f);
                phi_s0->unk10 = (s16) (phi_s0->unk10 - 1);
            } else {
                phi_s0->unk0 = 0U;
            }
            if (phi_s0->unk0 != 0) {
                phi_s0->unk4 = (f32) (phi_s0->unk4 + ((0.3f + (Rand_ZeroOne() * 0.5f)) - 0.55f));
                phi_s0->unk8 = (f32) (phi_s0->unk8 + (1.0f + ((Rand_ZeroOne() - 0.3f) * 1.2f)));
                phi_s0->unkC = (f32) (phi_s0->unkC + ((0.3f + (Rand_ZeroOne() * 0.5f)) - 0.55f));
                sp8C = phi_s0->unk8;
                if (func_800CA1AC(arg1, arg1 + 0x830, phi_s0->unk4, phi_s0->unkC, temp_s4, &sp90) == 0) {
                    goto block_11;
                }
                temp_a1 = &sp7C;
                if (sp8C < phi_s0->unk8) {
                    sp80 = sp8C;
                    sp7C = phi_s0->unk4;
                    sp84 = phi_s0->unkC;
                    EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0, 0x50, (s16) 0);
block_11:
                    phi_s0->unk0 = 0U;
                }
            }
        }
        temp_s2 = phi_s2 + 1;
        phi_s0 += 0x24;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xC8);
}

void func_80B2B180(EnFish2 *arg0, GlobalContext *arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_s3;
    void *phi_s1;
    s16 phi_s3;

    temp_s0 = arg1->state.gfxCtx;
    func_8012C28C(temp_s0);
    phi_s1 = arg0 + 0x3F8;
    phi_s3 = 0;
    do {
        if (phi_s1->unk0 != 0) {
            SysMatrix_InsertTranslation(phi_s1->unk4, phi_s1->unk8, phi_s1->unkC, 0);
            temp_f12 = phi_s1->unk14;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = -1;
            temp_v0_2->words.w0 = 0xFA000000;
            temp_v0_3 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0x96969600;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v0_4 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDB060020;
            temp_v0_4->words.w1 = phi_s1->unk20;
            temp_v0_5 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) &D_040301B0;
            temp_v0_5->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s1 += 0x24;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0xC8);
}

