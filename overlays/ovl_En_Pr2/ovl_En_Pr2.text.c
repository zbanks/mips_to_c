s32 func_80A7429C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A7436C(Actor *arg0, s16 arg1);          /* static */
void func_80A74510(EnPr2 *arg0, s32 arg1, EnPr2 *); /* static */
void func_80A745C4(EnPr2 *arg0);                    /* static */
void func_80A745FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A74888(EnPr2 *arg0, f32, EnPr2 *);      /* static */
void func_80A748E8(Actor *arg0, Actor *arg1);       /* static */
void func_80A74DEC(f32 arg0, Actor *arg1, Actor *); /* static */
void func_80A74E90(EnPr2 *, GlobalContext *);       /* static */
void func_80A751B4(EnPr2 *arg0);                    /* static */
void func_80A75310(EnPr2 *, GlobalContext *);       /* static */
void func_80A755D8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A758E8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80A75950(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 func_80A759D8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5, Gfx **gfx); /* static */
extern AnimationHeaderCommon D_06003904;
extern FlexSkeletonHeader D_06004188;
extern AnimationHeader D_06004340;
static DamageTable D_80A75BC0 = {
    {
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF2,
        0,
        0,
        0xF1,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ColliderCylinderInit D_80A75BE0 = {
    {0xA, 0x11, 9, 0x11, 0x10, 1},
    {0, {0xF7CFFFFF, 8, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0x11, 0x20, 0xFFF6, {0, 0, 0}},
};
static ? D_80A75C2C;                                /* unable to generate initializer */
static ? D_80A75C38;                                /* unable to generate initializer */
static ? D_80A75C3C;                                /* unable to generate initializer */

typedef struct ActorContext {
    /* 0x0000 */ Vec3f unk0;                        /* inferred */
    /* 0x0002 */ u8 unk2;                           /* overlap */
    /* 0x0003 */ u8 unk3;
    /* 0x0004 */ s8 unk4;
    /* 0x0005 */ u8 unk5;
    /* 0x0006 */ char pad6[0x5];                    /* maybe part of unk5[6]? */
    /* 0x000B */ s8 unkB;
    /* 0x000C */ s16 unkC;
    /* 0x000E */ u8 totalLoadedActors;
    /* 0x000F */ u8 undrawnActorCount;
    /* 0x0010 */ ActorListEntry actorList[12];
    /* 0x00A0 */ Actor *undrawnActors[32];
    /* 0x0120 */ TargetContext targetContext;
    /* 0x01B8 */ u32 switchFlags[4];
    /* 0x01C8 */ u32 chestFlags;
    /* 0x01CC */ u32 clearedRooms;
    /* 0x01D0 */ u32 clearedRoomsTemp;
    /* 0x01D4 */ u32 collectibleFlags[4];
    /* 0x01E4 */ TitleCardContext titleCtxt;
    /* 0x01F4 */ u8 unk1F4;
    /* 0x01F5 */ u8 unk1F5;
    /* 0x01F6 */ char pad1F6[0x2];                  /* maybe part of unk1F5[3]? */
    /* 0x01F8 */ f32 unk1F8;
    /* 0x01FC */ Vec3f unk1FC;
    /* 0x0208 */ char pad208[0x48];                 /* maybe part of unk1FC[7]? */
    /* 0x0250 */ void *unk250;
    /* 0x0254 */ u32 unk254[5];
    /* 0x0268 */ u8 unk268;
    /* 0x0269 */ char pad269[0xF];                  /* maybe part of unk268[16]? */
    /* 0x0278 */ u16 unk278;
    /* 0x027A */ char pad27A[0xA];                  /* maybe part of unk278[6]? */
} ActorContext;                                     /* size 0x284 */

typedef struct EnPr2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x18];                 /* maybe part of unk188[5]? */
    /* 0x01A6 */ Vec3s unk1A6;                      /* inferred */
    /* 0x01AC */ char pad1AC[0x18];                 /* maybe part of unk1A6[5]? */
    /* 0x01C4 */ void (*actionFunc)(EnPr2 *, GlobalContext *);
    /* 0x01C8 */ s16 unk1C8;                        /* inferred */
    /* 0x01CA */ char pad1CA[0x2];                  /* maybe part of unk1C8[2]? */
    /* 0x01CC */ Path *unk1CC;                      /* inferred */
    /* 0x01D0 */ char pad1D0[0x4];                  /* maybe part of unk1CC[2]? */
    /* 0x01D4 */ s16 unk1D4;                        /* inferred */
    /* 0x01D6 */ s16 unk1D6;                        /* inferred */
    /* 0x01D8 */ s16 unk1D8;                        /* inferred */
    /* 0x01DA */ s16 unk1DA;                        /* inferred */
    /* 0x01DC */ s16 unk1DC;                        /* inferred */
    /* 0x01DE */ s16 unk1DE;                        /* inferred */
    /* 0x01E0 */ s16 unk1E0;                        /* inferred */
    /* 0x01E2 */ char pad1E2[0x2];                  /* maybe part of unk1E0[2]? */
    /* 0x01E4 */ s16 unk1E4;                        /* inferred */
    /* 0x01E6 */ s16 unk1E6;                        /* inferred */
    /* 0x01E8 */ char pad1E8[0x4];                  /* maybe part of unk1E6[3]? */
    /* 0x01EC */ s16 unk1EC;                        /* inferred */
    /* 0x01EE */ s16 unk1EE;                        /* inferred */
    /* 0x01F0 */ s16 unk1F0;                        /* inferred */
    /* 0x01F2 */ char pad1F2[0x2];                  /* maybe part of unk1F0[2]? */
    /* 0x01F4 */ s16 unk1F4;                        /* inferred */
    /* 0x01F6 */ char pad1F6[0x2];                  /* maybe part of unk1F4[2]? */
    /* 0x01F8 */ f32 unk1F8;                        /* inferred */
    /* 0x01FC */ char pad1FC[0x4];                  /* maybe part of unk1F8[2]? */
    /* 0x0200 */ f32 unk200;                        /* inferred */
    /* 0x0204 */ f32 unk204;                        /* inferred */
    /* 0x0208 */ f32 unk208;                        /* inferred */
    /* 0x020C */ f32 unk20C;                        /* inferred */
    /* 0x0210 */ s32 unk210;                        /* inferred */
    /* 0x0214 */ char pad214[0x4];                  /* maybe part of unk210[2]? */
    /* 0x0218 */ s32 unk218;                        /* inferred */
    /* 0x021C */ Vec3f unk21C;                      /* inferred */
    /* 0x0228 */ Vec3f unk228;                      /* inferred */
    /* 0x0234 */ f32 unk234;                        /* inferred */
    /* 0x0238 */ f32 unk238;                        /* inferred */
    /* 0x023C */ f32 unk23C;                        /* inferred */
    /* 0x0240 */ char pad240[0x30];                 /* maybe part of unk23C[13]? */
    /* 0x0270 */ Vec3f unk270;                      /* inferred */
    /* 0x027C */ ColliderCylinder unk27C;           /* inferred */
} EnPr2;                                            /* size 0x2C8 */

void EnPr2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnPr2 *this = (EnPr2 *) thisx;
    Actor *sp34;
    Actor *temp_v1;
    Actor *temp_v1_3;
    s16 temp_v0;
    s16 temp_v1_2;

    this->actor.targetMode = 3;
    this->actor.hintId = 0x5B;
    this->unk1EC = 0xFF;
    this->actor.colChkInfo.health = 1;
    this->actor.colChkInfo.damageTable = &D_80A75BC0;
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06004188, &D_06004340, &this->unk188, &this->unk1A6, 5);
    this->actor.colChkInfo.mass = 0xA;
    this->unk1E0 = this->actor.params & 0xF;
    Math_Vec3f_Copy(&this->unk228, &this->actor.home.pos);
    if (this->unk1E0 == 2) {
        this->unk208 = (f32) (((s32) this->actor.params >> 4) & 0xFF) * 20.0f;
    }
    this->unk1F4 = 0xFF;
    this->actor.shape.yOffset = 500.0f;
    this->actor.shape.shadowScale = 12.0f;
    if ((s32) this->unk1E0 < 0xA) {
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
        Collider_InitAndSetCylinder(globalCtx, &this->unk27C, &this->actor, &D_80A75BE0);
        temp_v1 = this->actor.parent;
        this->unk218 = -1;
        this->unk204 = 0.0f;
        if (temp_v1 != 0) {
            if (temp_v1->update != 0) {
                temp_v1_2 = temp_v1->world.rot.y;
                if (temp_v1_2 != 0) {
                    this->unk218 = temp_v1_2 - 1;
                }
            }
        } else {
            temp_v0 = this->actor.world.rot.z;
            if (temp_v0 != 0) {
                this->unk218 = temp_v0 - 1;
                this->actor.world.rot.z = 0;
            }
        }
        if (this->unk1E0 == 3) {
            temp_v1_3 = this->actor.parent;
            if (temp_v1_3 != 0) {
                if (temp_v1_3->update != 0) {
                    this->unk1C8 = temp_v1_3->unk15A;
                    sp34 = temp_v1_3;
                    this->unk1CC = func_8013D648(globalCtx, this->unk1C8, 0x3F);
                    this->unk208 = (f32) sp34->world.rot.z * 20.0f;
                    if (this->unk208 < 20.0f) {
                        this->unk208 = 20.0f;
                    }
                }
                func_80A745C4(this);
                goto block_18;
            }
            Actor_MarkForDeath(&this->actor);
            return;
        }
        func_80A74888(this);
        goto block_18;
    }
    this->unk204 = 0.02f;
    func_80A751B4(this);
block_18:
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 20.0f, 20.0f, 0x1DU);
    if ((this->actor.bgCheckFlags & 0x60) == 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnPr2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPr2 *this = (EnPr2 *) thisx;
    ColliderCylinder *temp_a1;
    s16 temp_v1_2;
    void *temp_v1;

    temp_a1 = &this->unk27C;
    if ((s32) this->unk1E0 < 0xA) {
        this = this;
        Collider_DestroyCylinder(globalCtx, temp_a1);
    }
    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->update != 0)) {
        temp_v1_2 = temp_v1->unk14E;
        if ((s32) temp_v1_2 > 0) {
            temp_v1->unk14E = (s16) (temp_v1_2 - 1);
        }
    }
}

s32 func_80A7429C(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    s16 sp1A;
    s16 sp18;
    Actor *temp_a1;
    void *temp_v0;
    s32 phi_v0;

    temp_a1 = arg0;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    arg0 = temp_a1;
    sp1C = temp_v0;
    func_800B8898(arg1, temp_a1, &sp1A, &sp18);
    if ((fabsf(temp_v0->world.pos.y - arg0->world.pos.y) > 160.0f) || (arg0->projectedPos.z < -40.0f) || ((s32) sp1A < 0) || ((s32) sp1A >= 0x141) || ((s32) sp18 < 0) || ((s32) sp18 >= 0xF1)) {
        return 0;
    }
    phi_v0 = 1;
    if ((temp_v0->unkA6C * 0x10) >= 0) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void func_80A7436C(Actor *arg0, s16 arg1) {
    s16 sp2E;
    s16 temp_v1;
    s16 phi_v1;

    temp_v1 = arg1 - arg0->world.rot.y;
    phi_v1 = temp_v1;
    if ((s32) temp_v1 >= 0x2711) {
        phi_v1 = 0x2710;
    } else if ((s32) temp_v1 < -0x2710) {
        phi_v1 = -0x2710;
    }
    sp2E = phi_v1;
    Math_ApproachF(arg0 + 0x28, arg0->unk220, 0.3f, 5.0f);
    if (fabsf(arg0->world.pos.y - arg0->unk220) > 10.0f) {
        sp2E = phi_v1;
        Math_SmoothStepToS(arg0 + 0x30, (s16) (s32) ((f32) Math_Vec3f_Pitch(arg0 + 0x24, arg0 + 0x21C) * 0.3f), 0x14, 0x1388, (s16) 0x1F4);
    } else {
        sp2E = phi_v1;
        Math_SmoothStepToS(arg0 + 0x30, 0, 0x14, 0x1388, (s16) 0x1F4);
    }
    if (fabsf((f32) (arg0->world.rot.y - arg1)) < 30.0f) {
        Math_ApproachZeroF(arg0 + 0x1FC, 0.5f, 20.0f);
    } else {
        Math_ApproachF(arg0 + 0x1FC, (f32) sp2E, 0.5f, 3000.0f);
    }
    Math_SmoothStepToS(arg0 + 0x32, arg1, 1, 0x7D0, (s16) 0x12C);
}

void func_80A74510(EnPr2 *arg0, s32 arg1) {
    f32 sp34;
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    f32 phi_f0;

    arg0->unk210 = arg1;
    temp_v1 = (arg1 * 4) + &D_80A75C2C;
    sp30 = temp_v1;
    sp34 = 1.0f;
    arg0->unk1F8 = (f32) SkelAnime_GetFrameCount(*temp_v1);
    phi_f0 = 1.0f;
    if (arg0->unk210 == 3) {
        phi_f0 = 0.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, phi_f0, 0.0f, arg0->unk1F8, (u8) (s32) *(&D_80A75C38 + arg1), 0.0f);
}

void func_80A745C4(EnPr2 *arg0) {
    func_80A74510(NULL);
    arg0->unk1D4 = 0;
    arg0->actionFunc = func_80A745FC;
}

void func_80A745FC(Actor *arg0, GlobalContext *arg1) {
    f32 sp38;
    Vec3f *sp30;
    PosRot *sp2C;
    Path *temp_a0;
    PosRot *temp_a0_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;

    if (fabsf((f32) (arg0->world.rot.y - arg0->unk1EE)) < 200.0f) {
        SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    }
    Audio_PlayActorSound2(arg0, 0x31F3U);
    Math_ApproachF(arg0 + 0x204, 0.02f, 0.1f, 0.005f);
    if ((s32) arg0->unk1CC->unk2 < arg0->unk1D0) {
        Math_ApproachF(&arg0->speedXZ, 5.0f, 0.3f, 1.0f);
    } else {
        Math_ApproachF(&arg0->speedXZ, 10.0f, 0.3f, 1.0f);
    }
    temp_a0 = arg0->unk1CC;
    if ((temp_a0 != 0) && (func_8013D68C(temp_a0, (s16) arg0->unk1D0, arg0 + 0x21C) == 0)) {
        Actor_MarkForDeath(arg0);
    }
    sp30 = arg0 + 0x21C;
    Math_ApproachF(&arg0->world.pos.y, arg0->unk220, 0.3f, 5.0f);
    if (fabsf(arg0->world.pos.y - arg0->unk220) > 10.0f) {
        temp_a0_2 = &arg0->world;
        sp2C = temp_a0_2;
        Math_SmoothStepToS(&arg0->world.rot.x, (s16) (s32) ((f32) Math_Vec3f_Pitch(&temp_a0_2->pos, sp30) * 0.3f), 0x14, 0x1388, (s16) 0x1F4);
    } else {
        Math_SmoothStepToS(&arg0->world.rot.x, 0, 0x14, 0x1388, (s16) 0x1F4);
        sp2C = &arg0->world;
    }
    temp_f2 = arg0->world.pos.x - arg0->unk21C;
    temp_f14 = arg0->world.pos.y - arg0->unk220;
    temp_f16 = arg0->world.pos.z - arg0->unk224;
    sp38 = sqrtf((temp_f2 * temp_f2) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16));
    if (sp38 < (Rand_ZeroFloat(20.0f) + 15.0f)) {
        arg0->unk1D0 = (s32) (arg0->unk1D0 + 1);
        Math_Vec3f_Copy(arg0 + 0x228, &sp2C->pos);
        if (arg0->unk1D0 >= (s32) arg0->unk1CC->count) {
            arg0->unk1E0 = 2;
            func_80A74888((EnPr2 *) arg0);
        }
    }
    arg0->unk1EE = Math_Vec3f_Yaw(&sp2C->pos, sp30);
    func_80A7436C(arg0, arg0->unk1EE);
}

void func_80A74888(EnPr2 *arg0) {
    EnPr2 *temp_a0;
    EnPr2 *temp_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_80A74510(temp_a0, 0, temp_a2);
    arg0->unk1DA = 2;
    arg0->unk1D8 = 0;
    Math_Vec3f_Copy(arg0 + 0x21C, arg0 + 0x228);
    arg0->unk1D4 = 1;
    arg0->actionFunc = func_80A748E8;
}

void func_80A748E8(Actor *arg0, Actor *arg1) {
    void *sp5C;
    s32 sp4C;
    s32 sp48;
    Vec3f sp3C;
    f32 *sp30;
    Vec3f *sp2C;
    f32 *temp_a0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;

    sp4C = 0;
    sp48 = 0;
    sp5C = arg1->unk1CCC;
    Math_ApproachF(arg0 + 0x204, 0.02f, 0.1f, 0.005f);
    Audio_PlayActorSound2(arg0, 0x31F3U);
    if (fabsf((f32) (arg0->world.rot.y - arg0->unk1EE)) < 200.0f) {
        sp48 = 1;
        SkelAnime_FrameUpdateMatrix((SkelAnime *) (arg0 + 0x144));
    }
    if (arg0->unk1F4 != 0xFF) {
        arg0->speedXZ = 0.0f;
        Math_SmoothStepToS(arg0 + 0x1F4, 0, 1, 0x1E, (s16) 0x64);
        if ((s32) arg0->unk1F4 < 2) {
            Actor_MarkForDeath(arg0);
            return;
        }
        // Duplicate return node #39. Try simplifying control flow for better match
        return;
    }
    temp_v0 = arg0->unk1E0;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {

        } else if (arg0->unk1DE == 0) {
            temp_f2 = sp5C->unk24 - arg0->unk228;
            temp_f12 = sp5C->unk2C - arg0->unk230;
            if ((sp48 != 0) && ((sp5C->unkA6C * 0x10) < 0) && (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < arg0->unk208)) {
                sp4C = 1;
                func_80A74DEC(temp_f12, arg0, arg1);
            }
        } else {
            temp_f2_2 = arg0->world.pos.x - arg0->unk228;
            temp_f12_2 = arg0->world.pos.z - arg0->unk230;
            if (sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2)) > 20.0f) {
                arg0->unk1DE = 5;
                sp4C = 1;
                arg0->unk1DC = 0;
                Math_Vec3f_Copy(arg0 + 0x21C, arg0 + 0x228);
                Math_ApproachF(&arg0->speedXZ, 3.0f, 0.3f, 0.2f);
            }
        }
    } else if (arg0->unk1DC == 0) {
        sp4C = 1;
        func_80A74DEC((bitwise f32) arg0, arg1);
    } else if ((func_80A7429C(arg0, (GlobalContext *) arg1) == 0) && (arg0->unk1F4 == 0xFF)) {
        arg0->unk1F4 = 0xFE;
    }
    if (sp4C == 0) {
        temp_a0 = &arg0->speedXZ;
        arg0->unk220 = (f32) arg0->world.pos.y;
        if (arg0->unk1DA != 0) {
            sp30 = temp_a0;
            if ((Rand_ZeroOne() < 0.3f) && (arg0->unk1D6 == 0)) {
                arg0->unk1D6 = 1;
            }
            Math_ApproachZeroF(temp_a0, 0.1f, 0.2f);
            if (arg0->unk1DA == 1) {
                sp2C = arg0 + 0x228;
                sp30 = arg0 + 0x21C;
                arg0->unk1D8 = Rand_S16Offset(0x64, 0x64);
                Math_Vec3f_Copy(&sp3C, sp2C);
                sp3C.x += randPlusMinusPoint5Scaled(300.0f);
                sp3C.z += randPlusMinusPoint5Scaled(300.0f);
                Math_Vec3f_Copy((Vec3f *) sp30, &sp3C);
            }
        } else {
            Math_ApproachF(temp_a0, 2.0f, 0.3f, 0.2f);
            Math_Vec3f_Copy(&sp3C, &arg0->world.pos);
            sp3C.x += Math_SinS(arg0->world.rot.y) * 20.0f;
            sp3C.z += Math_CosS(arg0->world.rot.y) * 20.0f;
            if (fabsf((f32) (arg0->world.rot.y - arg0->unk1EE)) < 100.0f) {
                if ((func_800C5A20(arg1 + 0x830, &sp3C, 20.0f) != 0) || ((arg0->bgCheckFlags & 8) != 0)) {
                    arg0->unk1DC = 0;
                    arg0->unk1F2 = (s16) (arg0->unk1F2 + 1);
                    Math_Vec3f_Copy(arg0 + 0x21C, arg0 + 0x228);
                    if ((s32) arg0->unk1F2 >= 0xB) {
                        arg0->unk1F0 = (s16) (arg0->unk1F0 + 0x2000);
                    }
                } else {
                    Math_SmoothStepToS(arg0 + 0x1F0, 0, 1, 0x3E8, (s16) 0x64);
                    arg0->unk1F2 = 0;
                }
            }
            if ((arg0->unk1D8 == 0) || ((fabsf(arg0->unk21C - arg0->world.pos.x) < 10.0f) && (fabsf(arg0->unk224 - arg0->world.pos.z) < 10.0f))) {
                arg0->unk1DA = Rand_S16Offset(0x14, 0x1E);
            }
        }
    }
    if (arg0->unk1DA == 0) {
        arg0->unk1EE = (s16) (Math_Vec3f_Yaw(&arg0->world.pos, arg0 + 0x21C) + arg0->unk1F0);
        func_80A7436C(arg0, arg0->unk1EE);
    }
}

void func_80A74DEC(EnPr2 *arg0, EnPr2 *arg1) {
    s32 sp24;
    Vec3f *sp20;
    Vec3f *temp_a2;

    sp24 = arg1->unk1CCC;
    arg0->unk1F0 = 0;
    func_80A74510(arg0, 1, arg1);
    Audio_PlayActorSound2(&arg0->actor, 0x39F4U);
    temp_a2 = &arg0->unk21C;
    sp20 = temp_a2;
    Math_Vec3f_Copy(temp_a2, sp24 + 0x24);
    arg0->unk1EE = Math_Vec3f_Yaw(&arg0->actor.world.pos, sp20);
    arg0->unk20C = Rand_ZeroFloat(30.0f);
    arg0->unk1DC = 0;
    arg0->unk1D8 = 0x46;
    arg0->unk1D4 = 2;
    arg0->actionFunc = func_80A74E90;
}

void func_80A74E90(EnPr2 *arg0, GlobalContext *arg1) {
    Actor *sp44;
    WaterBox *sp40;
    Vec3f *sp30;
    PosRot *sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    sp44 = arg1->actorCtx.actorList[2].first;
    Math_ApproachF(&arg0->unk204, 0.02f, 0.1f, 0.005f);
    if ((arg0->unk1D8 == 0) || ((sp44->unkA6C * 0x10) >= 0) || (arg0->unk1E0 == 0)) {
        func_80A74888(arg0);
        return;
    }
    if (arg0->unk1F4 != 0xFF) {
        arg0->actor.speedXZ = 0.0f;
        Math_SmoothStepToS(&arg0->unk1F4, 0, 1, 0x1E, (s16) 0x64);
        if ((s32) arg0->unk1F4 < 2) {
            Actor_MarkForDeath(&arg0->actor);
            return;
        }
        // Duplicate return node #28. Try simplifying control flow for better match
        return;
    }
    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    if ((arg0->unk1DC == 0) && (fabsf((f32) (arg0->actor.world.rot.y - arg0->unk1EE)) < 200.0f)) {
        Math_Vec3f_Copy(&arg0->unk21C, &sp44->world.pos);
    }
    if ((Rand_ZeroOne() < 0.3f) && (arg0->unk1D6 == 0)) {
        arg0->unk1D6 = 1;
        arg0->unk20C = Rand_ZeroFloat(30.0f);
    }
    arg0->unk21C.y = sp44->world.pos.y + 30.0f + arg0->unk20C;
    Math_ApproachF(&arg0->actor.speedXZ, 5.0f, 0.3f, 1.0f);
    arg0->unk1F0 = 0;
    if (arg0->unk1E0 == 2) {
        temp_f14 = arg0->actor.world.pos.x;
        temp_f2 = temp_f14 - arg0->unk228.x;
        temp_f12 = arg0->actor.world.pos.z - arg0->unk228.z;
        if (arg0->unk208 < sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12))) {
            arg0->unk1DE = 0x14;
            func_80A74888((bitwise EnPr2 *) temp_f12, temp_f14, arg0);
            return;
        }
        goto block_17;
    }
    Math_Vec3f_Copy(&arg0->unk228, &arg0->actor.world.pos);
block_17:
    if (func_800CA1AC(arg1, &arg1->colCtx, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &arg0->unk200, &sp40) != 0) {
        temp_f0 = arg0->unk200 - 40.0f;
        if (temp_f0 < arg0->unk21C.y) {
            arg0->unk21C.y = temp_f0;
        }
    }
    if ((arg0->unk1E0 == 1) && (func_80A7429C(&arg0->actor, arg1) == 0)) {
        if (arg0->unk1F4 == 0xFF) {
            arg0->unk1F4 = 0xFE;
            return;
        }
        // Duplicate return node #28. Try simplifying control flow for better match
        return;
    }
    sp2C = &arg0->actor.world;
    sp30 = &arg0->unk21C;
    if ((arg0->unk27C.base.atFlags & 2) != 0) {
        arg0->unk1DC = Rand_S16Offset(0x1E, 0x1E);
        arg0->unk1D8 = 0x64;
        if (arg0->unk1E0 != 2) {
            func_80A74888(arg0);
        }
    }
    arg0->unk1EE = Math_Vec3f_Yaw(&sp2C->pos, sp30);
    func_80A7436C(&arg0->actor, arg0->unk1EE);
}

void func_80A751B4(EnPr2 *arg0) {
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_t7;
    s32 temp_t9;

    temp_t7 = arg0->actor.flags | 0x8000000;
    temp_t9 = temp_t7 & ~1;
    arg0->actor.flags = temp_t7;
    arg0->unk1EC = 0;
    arg0->actor.flags = temp_t9;
    if ((s32) arg0->unk1E0 < 0xA) {
        func_80A74510(arg0, 2);
    } else {
        temp_f0 = (f32) SkelAnime_GetFrameCount(&D_06003904);
        arg0->unk1F8 = temp_f0;
        SkelAnime_ChangeAnim(&arg0->unk144, (AnimationHeader *) &D_06003904, 1.0f, temp_f0, temp_f0, (u8) 2, 0.0f);
        arg0->unk1D8 = Rand_S16Offset(0x14, 0x1E);
        arg0->unk1E4 = 0x4000;
        if (Rand_ZeroOne() < 0.5f) {
            arg0->unk1E4 = -0x4000;
        }
        temp_v0 = arg0->actor.world.rot.y;
        arg0->unk1D8 = 0x1E;
        arg0->unk1E6 = temp_v0;
        arg0->actor.shape.rot.y = temp_v0;
        arg0->actor.shape.rot.x = arg0->actor.world.rot.x;
        arg0->actor.shape.rot.z = arg0->actor.world.rot.z;
        arg0->actor.speedXZ = Rand_ZeroFloat(0.5f);
        arg0->actor.world.rot.y = (s16) (s32) randPlusMinusPoint5Scaled(32768.0f);
    }
    func_800BCB70(&arg0->actor, 0x4000, 0xFF, 0, (s16) 0xA);
    arg0->unk1D4 = 3;
    arg0->actionFunc = func_80A75310;
}

void func_80A75310(EnPr2 *arg0, GlobalContext *arg1) {
    WaterBox *sp74;
    Vec3f sp64;
    ActorContext *sp58;
    Vec3f *temp_s1_2;
    f32 temp_f0;
    s32 temp_s0;
    s32 temp_s1;
    EnPr2 *phi_s0;
    s32 phi_s1;
    s32 phi_s0_2;
    s32 phi_s0_3;

    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    if ((s32) arg0->unk1E0 < 0xA) {
        phi_s0 = arg0;
        phi_s1 = 0;
        if (arg0->unk1F8 <= arg0->unk144.animCurrentFrame) {
            sp58 = &arg1->actorCtx;
            do {
                Actor_Spawn(sp58, arg1, 0x180, phi_s0->unk234, phi_s0->unk238, phi_s0->unk23C, (s16) (s32) arg0->actor.world.rot.x, (s16) (s32) arg0->actor.world.rot.y, (s16) (s32) arg0->actor.world.rot.z, (s16) (phi_s1 + 0xA));
                temp_s1 = phi_s1 + 1;
                phi_s0 += 0xC;
                phi_s1 = temp_s1;
            } while (temp_s1 != 5);
            Actor_MarkForDeath(&arg0->actor);
            return;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
        return;
    }
    Math_SmoothStepToS(&arg0->actor.shape.rot.x, 0, 5, 0x2710, (s16) 0x3E8);
    Math_SmoothStepToS(&arg0->actor.shape.rot.z, arg0->unk1E4, 5, 0x2710, (s16) 0x3E8);
    Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->unk1E6, 5, 0x2710, (s16) 0x3E8);
    phi_s0_2 = 0;
    phi_s0_3 = 0;
    if ((Rand_ZeroOne() < 0.3f) && (arg0->unk1D6 == 0)) {
        arg0->unk1D6 = 1;
    }
    if (func_800CA1AC(arg1, &arg1->colCtx, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &arg0->unk200, &sp74) != 0) {
        temp_f0 = arg0->unk200 - 15.0f;
        if (temp_f0 <= arg0->actor.world.pos.y) {
            phi_s0_2 = 1;
        } else {
            Math_ApproachF(&arg0->actor.world.pos.y, temp_f0, 0.3f, 1.0f);
        }
    }
    if ((arg0->unk1D8 == 0) || (phi_s0_2 != 0)) {
        Math_SmoothStepToS(&arg0->unk1F4, 0, 1, 0xF, (s16) 0x32);
        temp_s1_2 = &sp64;
        if ((s32) arg0->unk1F4 < 2) {
            sp58 = (ActorContext *) &arg0->actor.world;
            do {
                Math_Vec3f_Copy(temp_s1_2, &sp58->unk0);
                sp64.x += randPlusMinusPoint5Scaled(20.0f);
                sp64.y += randPlusMinusPoint5Scaled(5.0f);
                sp64.z += randPlusMinusPoint5Scaled(20.0f);
                EffectSsBubble_Spawn(arg1, temp_s1_2, 0.0f, 5.0f, 5.0f, Rand_ZeroFloat(0.03f) + 0.07f);
                temp_s0 = phi_s0_3 + 1;
                phi_s0_3 = temp_s0;
            } while (temp_s0 != 0xA);
            Actor_MarkForDeath(&arg0->actor);
        }
    }
}

void func_80A755D8(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    if ((arg0->unk28D & 2) != 0) {
        Actor_ApplyDamage(arg0);
        if (((s32) arg0->colChkInfo.health <= 0) && (arg0->unk1D4 != 3)) {
            Enemy_StartFinishingBlow(arg1, arg0);
            arg0->speedXZ = 0.0f;
            Audio_PlayActorSound2(arg0, 0x39F5U);
            temp_v0 = arg0->unk218;
            if (temp_v0 >= 0) {
                Item_DropCollectibleRandom(arg1, NULL, &arg0->world.pos, *(&D_80A75C3C + (temp_v0 * 2)));
            }
            arg0->colChkInfo.health = 0;
            func_80A751B4((EnPr2 *) arg0);
        }
    }
    if ((arg0->unk28C & 4) != 0) {
        arg0->speedXZ = -10.0f;
    }
}

void EnPr2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnPr2 *this = (EnPr2 *) thisx;
    Vec3f sp58;
    ColliderCylinder *temp_s0_2;
    CollisionCheckContext *temp_s1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_s0;
    s32 phi_s0;

    Actor_SetScale(&this->actor, this->unk204);
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk1DA;
    if (temp_v0 != 0) {
        this->unk1DA = temp_v0 - 1;
    }
    temp_v0_2 = this->unk1D8;
    if (temp_v0_2 != 0) {
        this->unk1D8 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk1DC;
    if (temp_v0_3 != 0) {
        this->unk1DC = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk1DE;
    if (temp_v0_4 != 0) {
        this->unk1DE = temp_v0_4 - 1;
    }
    Actor_SetHeight(&this->actor, 10.0f);
    func_80A755D8(&this->actor, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 10.0f, 20.0f, 0x1FU);
    if (this->unk1D6 != 0) {
        Math_Vec3f_Copy(&sp58, &this->unk270);
        this->unk1D6 = 0;
        sp58.x += randPlusMinusPoint5Scaled(20.0f);
        sp58.y += randPlusMinusPoint5Scaled(5.0f);
        sp58.z += randPlusMinusPoint5Scaled(20.0f);
        phi_s0 = 0;
        do {
            EffectSsBubble_Spawn(globalCtx, &sp58, 0.0f, 5.0f, 5.0f, Rand_ZeroFloat(0.03f) + 0.07f);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 2);
    }
    if ((this->unk1F4 == 0xFF) && ((s32) this->unk1E0 < 0xA)) {
        this->actor.shape.rot.x = this->actor.world.rot.x;
        this->actor.shape.rot.y = this->actor.world.rot.y;
        this->actor.shape.rot.z = this->actor.world.rot.z;
        if (this->unk1D4 != 3) {
            temp_s0_2 = &this->unk27C;
            Collider_UpdateCylinder(&this->actor, temp_s0_2);
            temp_s1 = &globalCtx->colChkCtx;
            CollisionCheck_SetOC(globalCtx, temp_s1, &temp_s0_2->base);
            CollisionCheck_SetAC(globalCtx, temp_s1, &temp_s0_2->base);
            CollisionCheck_SetAT(globalCtx, temp_s1, &temp_s0_2->base);
        }
    }
}

s32 func_80A758E8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s16 temp_v0;

    temp_v0 = arg5->unk1E0;
    if ((s32) temp_v0 < 0xA) {
        if (arg1 == 2) {
            arg4->y += -(s32) arg5->unk1FC;
        }
    } else if ((arg1 + 0xA) != temp_v0) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80A75950(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if ((s32) arg4->unk1E0 < 0xA) {
        if (arg1 == 2) {
            SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
            SysMatrix_GetStateTranslation(arg4 + 0x270);
        }
        SysMatrix_GetStateTranslation(arg4 + (arg1 * 0xC) + 0x234);
    }
}

s32 func_80A759D8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s16 temp_v0;

    temp_v0 = arg5->unk1E0;
    if ((s32) temp_v0 < 0xA) {
        if (arg1 == 2) {
            arg4->y += -(s32) arg5->unk1FC;
        }
    } else if ((arg1 + 0xA) != temp_v0) {
        *arg2 = NULL;
    }
    return 0;
}

void EnPr2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnPr2 *this = (EnPr2 *) thisx;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_v1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if (this->unk1F4 == 0xFF) {
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v1 = this->unk1EC & 0xFF;
        temp_v0_2->words.w1 = (temp_v1 << 0x18) | (temp_v1 << 0x10) | (temp_v1 << 8) | 0xFF;
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = this->unk1F4 & 0xFF;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80A758E8, func_80A75950, &this->actor);
        return;
    }
    temp_v1_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0;
    temp_v1_2->words.w0 = 0xE7000000;
    temp_v1_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v1_3 + 8;
    temp_v1_3->words.w0 = 0xFB000000;
    temp_v1_3->words.w1 = this->unk1F4 & 0xFF;
    Scene_SetRenderModeXlu(globalCtx, 1, 2U);
    temp_s0->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80A759D8, NULL, &this->actor, temp_s0->polyXlu.p);
}

