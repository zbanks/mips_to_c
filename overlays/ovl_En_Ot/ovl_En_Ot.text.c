f32 func_800C40B4(CollisionContext *, CollisionPoly **, ? *, PosRot *); /* extern */
s32 func_801242B4(Actor *);                         /* extern */
void func_80B5B2E0(GlobalContext *arg0, Vec3f *arg1, s16 arg2, Vec3f *arg3, s32 *arg4); /* static */
void func_80B5BAAC(LightInfo *arg0, f32 *arg1, u8 *arg2, s16 arg3); /* static */
void func_80B5BB38(u8 *arg0, u8 *arg1, f32 arg2);   /* static */
void func_80B5BDA8(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5BE88(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5BF60(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5C154(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B5C244(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5C3B8(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5C634(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5C684(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5C910(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5C9A8(EnOt *arg0, GlobalContext *arg1, s32); /* static */
void func_80B5C9D0(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5CAD0(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5CBA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B5CC88(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5CCF4(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5CE6C(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5D114(EnOt *arg0, GlobalContext *arg1); /* static */
s32 func_80B5D37C(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
s32 func_80B5D470(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
void func_80B5D648(EnOt *arg0, GlobalContext *arg1); /* static */
void func_80B5DAEC(Actor *this, GlobalContext *globalCtx); /* static */
void func_80B5DB6C(Actor *this, GlobalContext *globalCtx); /* static */
void func_80B5DECC(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3s *rot, Actor *actor); /* static */
u8 *func_80B5DF58(u8 *arg0, u8 arg1, Vec3f *arg2, ActorShape *arg3, s32 arg4); /* static */
void func_80B5E078(GlobalContext *arg0, u8 *arg1, s32 arg2); /* static */
void func_80B5E1D8(GlobalContext *arg0, u8 *arg1, s32 arg2); /* static */
extern ? D_06000040;
extern ? D_06000078;
extern ? D_060004A0;
extern void D_060005F8;
extern AnimationHeader D_060008D8;
extern FlexSkeletonHeader D_06004800;
static ColliderCylinderInit D_80B5E3A0 = {
    {0, 0, 0x19, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {5, 0x21, 0xFFEC, {0, 0, 0}},
};
static struct_80B8E1A8 D_80B5E3CC = {
    {(AnimationHeader *)0x6004B30, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x60008D8, 1.0f, 0, -5.0f},
    {(AnimationHeader *)0x6000420, 1.0f, 0, 0.0f},
};
static InitChainEntry D_80B5E3FC;                   /* unable to generate initializer */
static Color_RGB8 D_80B5E408 = {0xFF, 0xC8, 0x50};
static Color_RGB8 D_80B5E40C = {0xFF, 0x3C, 0xC8};
static Vec3f D_80B5E410 = {400.0f, 600.0f, 0.0f};
static EnOt *D_80B5E880;
static EnOt *D_80B5E884;
static EnOt *D_80B5E888;

typedef struct EnDno_ActorUnkStruct {
    /* 0x0000 */ Vec3f unk_00;
    /* 0x000C */ char padC[0x4];
    /* 0x0010 */ s16 unk_10;
    /* 0x0012 */ char pad12[0xA];                   /* maybe part of unk_10[6]? */
    /* 0x001C */ u8 unk_1C;
    /* 0x001D */ u8 unk_1D;
    /* 0x001E */ char pad1E[0x2];                   /* maybe part of unk_1D[3]? */
    /* 0x0020 */ Vec3f unk_20;
    /* 0x002C */ Vec3f unk_2C;
    /* 0x0038 */ f32 unk38;                         /* inferred */
    /* 0x003C */ f32 unk3C;                         /* inferred */
    /* 0x0040 */ f32 unk40;                         /* inferred */
    /* 0x0044 */ char pad44[0x4];                   /* maybe part of unk40[2]? */
    /* 0x0048 */ Actor *unk_48;
    /* 0x004C */ f32 unk_4C;
    /* 0x0050 */ f32 unk_50;
    /* 0x0054 */ s16 unk_54;
    /* 0x0056 */ s16 unk_56;
    /* 0x0058 */ s32 unk_58;
    /* 0x005C */ s32 (*unk_5C)(GlobalContext *, EnDno_ActorUnkStruct *);
    /* 0x0060 */ s32 (*unk_60)(GlobalContext *, EnDno_ActorUnkStruct *);
    /* 0x0064 */ s32 (*unk_64)(GlobalContext *, EnDno_ActorUnkStruct *);
    /* 0x0068 */ s32 (*unk_68)(GlobalContext *, EnDno_ActorUnkStruct *);
} EnDno_ActorUnkStruct;                             /* size 0x6C */

typedef struct EnOt {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnOt *, GlobalContext *);
    /* 0x0148 */ SkelAnime unk148;                  /* inferred */
    /* 0x018C */ ColliderCylinder unk18C;           /* inferred */
    /* 0x01D8 */ Vec3s unk1D8;                      /* inferred */
    /* 0x01DE */ char pad1DE[0x6C];                 /* maybe part of unk1D8[19]? */
    /* 0x024A */ Vec3s unk24A;                      /* inferred */
    /* 0x0250 */ char pad250[0x6C];                 /* maybe part of unk24A[19]? */
    /* 0x02BC */ s32 unk2BC;                        /* inferred */
    /* 0x02C0 */ EnDno_ActorUnkStruct unk2C0;       /* inferred */
    /* 0x032C */ u16 unk32C;                        /* inferred */
    /* 0x032E */ char pad32E[0x2];                  /* maybe part of unk32C[2]? */
    /* 0x0330 */ Vec3f unk330;                      /* inferred */
    /* 0x033C */ s32 unk33C;                        /* inferred */
    /* 0x0340 */ char pad340[0x4];                  /* maybe part of unk33C[2]? */
    /* 0x0344 */ s16 unk344;                        /* inferred */
    /* 0x0346 */ s16 unk346;                        /* inferred */
    /* 0x0348 */ f32 unk348;                        /* inferred */
    /* 0x034C */ f32 unk34C;                        /* inferred */
    /* 0x0350 */ f32 unk350;                        /* inferred */
    /* 0x0354 */ s16 unk354;                        /* inferred */
    /* 0x0356 */ s16 unk356;                        /* inferred */
    /* 0x0358 */ char pad358[0x2];                  /* maybe part of unk356[2]? */
    /* 0x035A */ s16 unk35A;                        /* inferred */
    /* 0x035C */ s16 unk35C;                        /* inferred */
    /* 0x035E */ char pad35E[0x2];                  /* maybe part of unk35C[2]? */
    /* 0x0360 */ EnOt *unk360;                      /* inferred */
    /* 0x0364 */ LightNode *unk364;                 /* inferred */
    /* 0x0368 */ LightInfo unk368;                  /* inferred */
    /* 0x0376 */ char pad376[0x2];
    /* 0x0378 */ f32 unk378;                        /* inferred */
    /* 0x037C */ f32 unk37C;                        /* inferred */
    /* 0x0380 */ f32 unk380;                        /* inferred */
    /* 0x0384 */ u8 unk384;                         /* inferred */
    /* 0x0385 */ char pad385[0x3];                  /* maybe part of unk384[4]? */
    /* 0x0388 */ s32 unk388;                        /* inferred */
    /* 0x038C */ s32 unk38C;                        /* inferred */
    /* 0x0390 */ s16 unk390;                        /* inferred */
    /* 0x0392 */ char pad392[0x2];                  /* maybe part of unk390[2]? */
    /* 0x0394 */ f32 unk394;                        /* inferred */
    /* 0x0398 */ f32 unk398;                        /* inferred */
    /* 0x039C */ f32 unk39C;                        /* inferred */
    /* 0x03A0 */ s16 unk3A0;                        /* inferred */
    /* 0x03A2 */ char pad3A2[0x2];                  /* maybe part of unk3A0[2]? */
    /* 0x03A4 */ u8 unk3A4;                         /* inferred */
    /* 0x03A5 */ char pad3A5[0x397];                /* maybe part of unk3A4[920]? */
    /* 0x073C */ s16 unk73C;                        /* inferred */
    /* 0x073E */ char pad73E[0x2];                  /* maybe part of unk73C[2]? */
    /* 0x0740 */ f32 unk740;                        /* inferred */
    /* 0x0744 */ u8 unk744;                         /* inferred */
    /* 0x0745 */ s8 unk745;                         /* inferred */
    /* 0x0746 */ s8 unk746;                         /* inferred */
    /* 0x0747 */ u8 unk747;                         /* inferred */
    /* 0x0748 */ u8 unk748;                         /* inferred */
    /* 0x0749 */ u8 unk749;                         /* inferred */
    /* 0x074A */ char pad74A[0x2];                  /* maybe part of unk749[3]? */
    /* 0x074C */ Vec3f unk74C;                      /* inferred */
} EnOt;                                             /* size 0x758 */

void func_80B5B2E0(GlobalContext *arg0, Vec3f *arg1, s16 arg2, Vec3f *arg3, s32 *arg4) {
    Vec3f sp58;
    Vec3f sp4C;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_s0;
    void *temp_s3;
    s32 phi_s1;
    f32 phi_f20;
    s32 phi_s0;

    temp_s3 = arg0->setupPathList + (arg2 * 8);
    phi_s1 = 0;
    phi_f20 = 3.4028235e38f;
    phi_s0 = 0;
    if ((s32) temp_s3->unk0 > 0) {
        do {
            Math_Vec3s_ToVec3f(&sp58, Lib_SegmentedToVirtual(temp_s3->unk4) + phi_s1);
            temp_f0 = Math_Vec3f_DistXYZ(arg1, &sp58);
            if (temp_f0 < phi_f20) {
                temp_f20 = temp_f0;
                Math_Vec3f_Copy(&sp4C, &sp58);
                *arg4 = phi_s0;
                phi_f20 = temp_f20;
            }
            temp_s0 = phi_s0 + 1;
            phi_s1 += 6;
            phi_s0 = temp_s0;
        } while (temp_s0 < (s32) temp_s3->unk0);
    }
    Math_Vec3f_Copy(arg3, &sp4C);
}

void EnOt_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnOt *this = (EnOt *) thisx;
    ? sp74;
    Vec3f sp64;
    Vec3f sp58;
    f32 sp4C;
    s16 sp4A;
    SkelAnime *sp40;
    PosRot *sp3C;
    Actor *temp_v0_2;
    EnOt *temp_t2;
    EnOt *temp_v0_3;
    EnOt *temp_v0_4;
    EnOt *temp_v0_5;
    PosRot *temp_a3;
    SkelAnime *temp_a1;
    s16 temp_t8;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_v0;
    s32 temp_v1;
    u32 temp_t1;
    u32 temp_t7;

    Actor_ProcessInitChain(&this->actor, &D_80B5E3FC);
    this->unk388 = 0;
    temp_v0 = ((s32) this->actor.params >> 0xE) & 3;
    this->unk33C = temp_v0;
    if (temp_v0 == 0) {
        D_80B5E880 = this;
        temp_t7 = this->actor.flags | 0x8000000;
        this->actor.flags = temp_t7;
        this->actor.flags = temp_t7 & ~9;
        this->actor.update = func_80B5DB6C;
        this->actor.draw = NULL;
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    temp_a1 = &this->unk148;
    sp40 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06004800, &D_060008D8, &this->unk1D8, &this->unk24A, 0x13);
    Collider_InitAndSetCylinder(globalCtx, &this->unk18C, &this->actor, &D_80B5E3A0);
    sp4A = SkelAnime_GetFrameCount(D_80B5E3CC.animationSeg);
    sp4C = Rand_ZeroOne();
    SkelAnime_ChangeAnim(sp40, (AnimationHeader *) D_80B5E3CC.animationSeg, 1.0f, sp4C * (f32) sp4A, (f32) SkelAnime_GetFrameCount(D_80B5E3CC.animationSeg), (u8) (s32) D_80B5E3CC.mode, D_80B5E3CC.transitionRate);
    temp_t8 = this->actor.world.rot.z;
    this->unk346 = this->actor.params & 0x7F;
    this->actor.world.rot.z = 0;
    this->actor.shape.rot.z = 0;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk344 = temp_t8;
    this->actor.gravity = 0.0f;
    func_8013E3B8(&this->actor, (s16 []) &this->unk356, 4);
    func_8013E1C8(sp40, (struct_80B8E1A8 []) &D_80B5E3CC, 0, &this->unk2BC);
    this->unk148.animCurrentFrame = Rand_ZeroOne() * this->unk148.animFrameCount;
    temp_v1 = ((s32) this->actor.params >> 0xE) & 3;
    this->unk364 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->unk368);
    this->unk744 = 0xFF;
    this->unk745 = 0xC8;
    this->unk746 = 0x50;
    if (temp_v1 != 1) {
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                return;
            }
            if ((gSaveContext.weekEventReg[26] & 8) == 0) {
                temp_t1 = this->actor.flags | 0x8000000;
                this->actor.flags = temp_t1;
                this->actor.flags = temp_t1 & ~9;
                Actor_SetScale(&this->actor, 0.0064999997f);
                this->actor.update = func_80B5DAEC;
                this->unk18C.dim.radius = (s16) (s32) ((f32) this->unk18C.dim.radius * 0.5f);
                this->unk18C.dim.height = (s16) (s32) ((f32) this->unk18C.dim.height * 0.5f);
                this->unk18C.dim.yShift = (s16) (s32) ((f32) this->unk18C.dim.yShift * 0.5f);
                func_80B5C634(this, globalCtx);
                return;
            }
            Actor_MarkForDeath(&this->actor);
            return;
        }
        D_80B5E888 = this;
        temp_v1_2 = this->unk344;
        if (temp_v1_2 != 0) {
            if (temp_v1_2 != 1) {
                return;
            }
            Actor_SetScale(&this->actor, 0.012999999f);
            if ((gSaveContext.weekEventReg[84] & 0x10) != 0) {
                if ((gSaveContext.weekEventReg[32] & 1) != 0) {
                    func_80B5C244(this, globalCtx);
                    return;
                }
                func_80B5C684(this, globalCtx);
                return;
            }
            func_80B5CE6C(this, globalCtx);
            return;
        }
        Actor_SetScale(&this->actor, 0.0f);
        if ((gSaveContext.weekEventReg[13] & 1) == 0) {
            Actor_SetScale(&this->actor, 0.0f);
            func_80B5C910(this, globalCtx);
            return;
        }
        temp_v0_2 = globalCtx->actorCtx.actorList[2].first;
        if (func_800C9B90(&globalCtx->colCtx, temp_v0_2->floorPoly, (s32) temp_v0_2->floorBgId) != 0) {
            Actor_SetScale(&this->actor, 0.0f);
            func_80B5C910(this, globalCtx);
            return;
        }
        temp_t2 = D_80B5E884;
        this->unk360 = temp_t2;
        temp_t2->unk360 = this;
        func_80B5C9D0(this, globalCtx);
        return;
    }
    D_80B5E884 = this;
    Actor_SetScale(&this->actor, 0.012999999f);
    temp_v1_3 = this->unk344;
    if (temp_v1_3 != 0) {
        if (temp_v1_3 != 1) {
            return;
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_a3 = &this->actor.world;
    sp3C = temp_a3;
    this->actor.world.pos.y = func_800C40B4(&globalCtx->colCtx, &this->actor.floorPoly, &sp74, temp_a3) + 50.0f;
    if ((gSaveContext.weekEventReg[84] & 0x10) != 0) {
        Matrix_RotateY(this->actor.shape.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(52.519997f, &sp64);
        Math_Vec3f_Sum(&sp3C->pos, &sp64, &sp64);
        temp_v0_3 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x205, sp64.x, sp64.y, sp64.z, (s16) 0, (s16) (this->actor.shape.rot.y + 0x8000), (s16) 1, (s16) ((this->actor.params & 0x3FFF) | 0x8000));
        this->unk360 = temp_v0_3;
        if (temp_v0_3 != 0) {
            temp_v0_3->unk360 = this;
            this->unk3A0 = 0;
            this->unk360->unk3A0 = this->unk3A0 + 0x8000;
            temp_v0_4 = this->unk360;
            this->unk398 = this->actor.world.pos.y;
            this->unk394 = (this->actor.world.pos.x + temp_v0_4->actor.world.pos.x) * 0.5f;
            this->unk39C = (this->actor.world.pos.z + temp_v0_4->actor.world.pos.z) * 0.5f;
            Math_Vec3f_Copy((Vec3f *) &temp_v0_4->unk394, (Vec3f *) &this->unk394);
            if ((gSaveContext.weekEventReg[32] & 1) != 0) {
                func_80B5C244(this, globalCtx);
                return;
            }
            func_80B5C684(this, globalCtx);
            return;
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v0_5 = D_80B5E888;
    if ((temp_v0_5 != 0) && ((temp_v0_5->unk32C & 1) != 0)) {
        this->unk360 = temp_v0_5;
        temp_v0_5->unk360 = this;
        Matrix_RotateY(this->actor.world.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(800.0f, &sp58);
        Math_Vec3f_Sum(&sp3C->pos, &sp58, &sp58);
        Math_Vec3f_Copy(&this->unk360->actor.world.pos, &sp58);
        Math_Vec3f_Copy(&this->unk360->actor.prevPos, &sp58);
        func_80B5BDA8(this, globalCtx);
        func_80B5BE88(this->unk360, globalCtx);
        return;
    }
    func_80B5CE6C(this, globalCtx);
}

void EnOt_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnOt *this = (EnOt *) thisx;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    Collider_DestroyCylinder(temp_a0, &this->unk18C);
    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->unk364);
}

void func_80B5BAAC(LightInfo *arg0, f32 *arg1, u8 *arg2, s16 arg3) {
    Lights_PointNoGlowSetInfo(arg0, (s16) (s32) arg1->unk0, (s16) (s32) arg1->unk4, (s16) (s32) arg1->unk8, (u8) (s32) arg2->unk0, (u8) (s32) arg2->unk1, (u8) (s32) arg2->unk2, (s16) (s32) arg3);
}

void func_80B5BB38(u8 *arg0, s8 *arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    u8 temp_t2;
    u8 temp_t6;
    u8 temp_t9;
    f32 phi_f12;
    f32 phi_f14;
    f32 phi_f16;

    temp_f0 = Rand_ZeroOne();
    temp_t6 = arg1->unk0;
    temp_f12 = (f32) temp_t6;
    phi_f12 = temp_f12;
    if ((s32) temp_t6 < 0) {
        phi_f12 = temp_f12 + 4294967296.0f;
    }
    temp_f2 = 1.0f - arg2;
    arg0->unk0 = (u8) (u32) ((phi_f12 * arg2) + (phi_f12 * temp_f2 * temp_f0));
    temp_t9 = arg1->unk1;
    temp_f14 = (f32) temp_t9;
    phi_f14 = temp_f14;
    if ((s32) temp_t9 < 0) {
        phi_f14 = temp_f14 + 4294967296.0f;
    }
    arg0->unk1 = (s8) (u32) ((phi_f14 * arg2) + (phi_f14 * temp_f2 * temp_f0));
    temp_t2 = arg1->unk2;
    temp_f16 = (f32) temp_t2;
    phi_f16 = temp_f16;
    if ((s32) temp_t2 < 0) {
        phi_f16 = temp_f16 + 4294967296.0f;
    }
    arg0->unk2 = (s8) (u32) ((phi_f16 * arg2) + (phi_f16 * temp_f2 * temp_f0));
}

void func_80B5BDA8(Actor *arg0, GlobalContext *arg1) {
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) &D_80B5E3CC, 1, arg0 + 0x2BC);
    func_8013E3B8(arg0, (s16 []) (arg0 + 0x356), 4);
    arg0->unk144 = func_80B5BE04;
}

void func_80B5BE04(EnOt *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = this->unk388;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return;
        }
        if (func_8013E2D4(&this->actor, this->unk35C, -1, 0) != 0) {
            func_80B5BF60(this, globalCtx);
        }
        // Duplicate return node #7. Try simplifying control flow for better match
        return;
    }
    if (func_8013E2D4(&this->actor, this->unk35A, -1, 0) != 0) {
        func_80B5BF60(this, globalCtx);
    }
}

void func_80B5BE88(EnOt *arg0, GlobalContext *arg1) {
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) &D_80B5E3CC, 1, arg0 + 0x2BC);
    arg0->actionFunc = func_80B5BED4;
}

void func_80B5BED4(EnOt *this, GlobalContext *globalCtx) {
    func_800BE33C(&this->actor.world.pos, &this->unk360->actor.world.pos, &this->actor.world.rot, 0);
    Math_SmoothStepToS(&this->actor.shape.rot.y, Actor_YawBetweenActors(&this->actor, &this->unk360->actor), 3, 0xE38, (s16) 0x38E);
    this->actor.speedXZ = 3.5f;
    this->actor.world.pos.y = this->unk360->actor.world.pos.y;
    Actor_SetVelocityAndMoveXYRotationReverse(&this->actor);
}

void func_80B5BF60(EnOt *arg0, GlobalContext *arg1) {
    arg0->unk32C |= 0x40;
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) &D_80B5E3CC, 0, arg0 + 0x2BC);
    arg0->actionFunc = func_80B5BFB8;
}

void func_80B5BFB8(EnOt *this, GlobalContext *globalCtx) {
    Vec3f sp34;
    EnOt *temp_v0;
    f32 temp_f0;

    temp_f0 = this->actor.floorHeight + 50.0f;
    if (temp_f0 <= this->actor.world.pos.y) {
        Math_StepToF(&this->actor.world.pos.y, temp_f0, 2.0f);
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, Actor_YawBetweenActors(&this->actor, &this->unk360->actor), 3, 0xE38, (s16) 0x38E);
    if (Actor_DistanceBetweenActors(&this->actor, &this->unk360->actor) <= 52.519997f) {
        this->unk73C = 0x32;
        Matrix_RotateY(this->actor.world.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(52.519997f, &sp34);
        this->unk360->actor.world.pos.x = this->actor.world.pos.x + sp34.x;
        this->unk360->actor.world.pos.y = this->actor.world.pos.y + sp34.y;
        this->unk360->actor.world.pos.z = this->actor.world.pos.z + sp34.z;
        temp_v0 = this->unk360;
        this->unk394 = (temp_v0->actor.world.pos.x + this->actor.world.pos.x) * 0.5f;
        this->unk398 = (temp_v0->actor.world.pos.y + this->actor.world.pos.y) * 0.5f;
        this->unk39C = (temp_v0->actor.world.pos.z + this->actor.world.pos.z) * 0.5f;
        temp_v0->unk394 = this->unk394;
        this->unk360->unk398 = this->unk398;
        this->unk360->unk39C = this->unk39C;
        func_80B5C684(this->unk360, globalCtx);
        func_80B5C684(this, globalCtx);
        return;
    }
    Actor_SetVelocityAndMoveXYRotationReverse(&this->actor);
}

void func_80B5C154(Actor *arg0, GlobalContext *arg1) {
    if ((gSaveContext.weekEventReg[32] & 1) != 0) {
        arg0->unk38C = 4;
    } else {
        arg0->unk38C = 0xC;
        gSaveContext.weekEventReg[32] |= 1;
    }
    func_800B8A1C(arg0, arg1, arg0->unk38C, arg0->xzDistToPlayer, arg0->yDistToPlayer);
    arg0->unk144 = func_80B5C1CC;
}

void func_80B5C1CC(EnOt *this, GlobalContext *globalCtx) {
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        this->actor.parent = NULL;
        func_80B5C244(this, globalCtx);
        func_80B5C244(this->unk360, globalCtx);
        return;
    }
    func_800B8A1C(&this->actor, globalCtx, this->unk38C, this->actor.xzDistToPlayer, this->actor.yDistToPlayer);
}

void func_80B5C244(EnOt *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80B5C25C;
}

void func_80B5C25C(EnOt *this, GlobalContext *globalCtx) {
    EnOt *temp_v0;
    EnOt *temp_v0_2;
    EnOt *temp_v0_3;
    EnOt *temp_v0_4;
    u16 temp_v1;
    u32 temp_t6;

    this->unk390 = Actor_YawBetweenActors(&this->actor, &this->unk360->actor);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk390, 3, 0xE38, (s16) 0x38E);
    if ((s32) (s16) ((this->unk360->actor.shape.rot.y + 0x8000) - this->actor.shape.rot.y) < 0x38E) {
        this->unk32C |= 0x80;
    }
    if (this->unk33C == 2) {
        temp_v1 = this->unk32C;
        if ((temp_v1 & 0x80) != 0) {
            temp_v0 = this->unk360;
            if ((temp_v0->unk32C & 0x80) != 0) {
                this->unk32C = temp_v1 | 0x100;
                temp_v0->unk32C |= 0x100;
                func_8013E1C8(&this->unk148, (struct_80B8E1A8 []) &D_80B5E3CC, 2, &this->unk2BC);
                temp_v0_2 = this->unk360;
                func_8013E1C8(&temp_v0_2->unk148, (struct_80B8E1A8 []) &D_80B5E3CC, 2, &temp_v0_2->unk2BC);
                temp_v0_3 = this->unk360;
                temp_t6 = this->actor.flags | 0x8000000;
                this->actor.flags = temp_t6;
                this->actor.flags = temp_t6 & ~9;
                temp_v0_3->actor.flags |= 0x8000000;
                temp_v0_4 = this->unk360;
                temp_v0_4->actor.flags &= -0xA;
                func_80B5C9A8(this->unk360, globalCtx, -0xA);
                func_80B5C3B8(this, globalCtx);
            }
        }
    }
}

void func_80B5C3B8(EnOt *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80B5C3D8;
    arg0->unk740 = 0.0f;
}

void func_80B5C3D8(EnOt *this, GlobalContext *globalCtx) {
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    Vec3f *sp30;
    u8 *sp2C;
    ActorShape *sp28;
    ActorShape *temp_a3;
    EnOt *temp_v0;
    Vec3f *temp_a0_2;
    f32 *temp_a0;
    f32 *temp_a0_4;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_t1;
    s16 temp_v0_2;
    u8 *temp_a0_3;

    this->unk3A0 += 0x2D8;
    Matrix_RotateY(this->unk3A0, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(26.259998f, &sp5C);
    SysMatrix_GetStateTranslationAndScaledZ(-26.259998f, &sp50);
    temp_f0 = this->unk394;
    this->unk34C = this->unk398;
    this->unk348 = temp_f0 + sp5C.x;
    this->unk350 = this->unk39C + sp5C.z;
    this->unk360->unk348 = temp_f0 + sp50.x;
    this->unk360->unk34C = this->unk398;
    this->unk360->unk350 = this->unk39C + sp50.z;
    Math_Vec3f_Copy(&this->actor.world.pos, (Vec3f *) &this->unk348);
    temp_v0 = this->unk360;
    Math_Vec3f_Copy(&temp_v0->actor.world.pos, (Vec3f *) &temp_v0->unk348);
    temp_v0_2 = Actor_YawBetweenActors(&this->actor, &this->unk360->actor);
    temp_t1 = temp_v0_2 + 0x8000;
    this->actor.shape.rot.y = temp_v0_2;
    this->unk360->actor.shape.rot.y = temp_t1;
    temp_f0_2 = this->unk740;
    if (temp_f0_2 < 1.0f) {
        Lib_LerpRGB(&D_80B5E408, &D_80B5E40C, temp_f0_2, (Color_RGB8 *) &this->unk744);
        Lib_LerpRGB(&D_80B5E408, &D_80B5E40C, this->unk740, (Color_RGB8 *) &this->unk360->unk744);
        Math_StepToF(&this->unk740, 1.0f, 0.05f);
    }
    if (func_801378B8(&this->unk148, 12.0f) != 0) {
        Matrix_RotateY(func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]), 0U);
        temp_a0 = &sp38;
        sp38 = 1.0f;
        sp3C = 8.1f;
        sp40 = 0.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, &sp44);
        temp_a0_2 = &this->unk74C;
        sp30 = temp_a0_2;
        Math_Vec3f_Sum(temp_a0_2, &sp44, &sp44);
        temp_a0_3 = &this->unk3A4;
        temp_a3 = &this->actor.shape;
        sp28 = temp_a3;
        sp2C = temp_a0_3;
        func_80B5DF58(temp_a0_3, 1U, &sp44, temp_a3, 0xA);
        temp_a0_4 = &sp38;
        sp38 = -1.0f;
        sp3C = 8.1f;
        sp40 = 0.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_4, &sp44);
        Math_Vec3f_Sum(temp_a0_2, &sp44, &sp44);
        func_80B5DF58(temp_a0_3, 2U, &sp44, temp_a3, 0xA);
    }
}

void func_80B5C634(EnOt *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80B5C64C;
}

void func_80B5C64C(EnOt *this, GlobalContext *globalCtx) {
    if ((gSaveContext.weekEventReg[26] & 8) != 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80B5C684(EnOt *arg0, GlobalContext *arg1) {
    arg0->actor.speedXZ = 0.0f;
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) &D_80B5E3CC, 0, arg0 + 0x2BC);
    arg0->actionFunc = func_80B5C6DC;
}

void func_80B5C6DC(EnOt *this, GlobalContext *globalCtx) {
    Actor *sp44;
    s16 sp3E;
    Vec3f sp30;
    Actor *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a0_2;
    s32 temp_v0_3;

    temp_a0 = globalCtx->actorCtx.actorList[2].first;
    sp44 = temp_a0;
    temp_v0 = Actor_YawToPoint(temp_a0, (Vec3f *) &this->unk394);
    temp_a0_2 = (temp_v0 + 0x4000) << 0x10;
    sp3E = temp_v0;
    Matrix_RotateY((s16) (temp_a0_2 >> 0x10), 0U);
    if (this->unk33C == 2) {
        SysMatrix_GetStateTranslationAndScaledZ(26.259998f, &sp30);
    } else {
        temp_v0_2 = this->unk73C;
        if (temp_v0_2 == 0) {
            gSaveContext.weekEventReg[84] = gSaveContext.weekEventReg[84] | 0x10;
            temp_v0_3 = this->unk388;
            if (temp_v0_3 != 0) {
                if (temp_v0_3 != 1) {

                } else {
                    ActorCutscene_Stop(this->unk35C);
                }
            } else {
                ActorCutscene_Stop(this->unk35A);
            }
            this->unk73C = -1;
        } else {
            this->unk73C = temp_v0_2 - 1;
        }
        SysMatrix_GetStateTranslationAndScaledZ(-26.259998f, &sp30);
    }
    this->unk34C = this->unk398;
    this->unk348 = this->unk394 + sp30.x;
    this->unk350 = this->unk39C + sp30.z;
    Math_SmoothStepToF(&this->actor.world.pos.x, this->unk348, 1.0f, 2.0f, 0.01f);
    Math_SmoothStepToF(&this->actor.world.pos.z, this->unk350, 1.0f, 2.0f, 0.01f);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0xE38, (s16) 0x38E);
    if (((gSaveContext.weekEventReg[84] & 0x10) != 0) && (this->unk33C == 1)) {
        this->actor.textId = 0;
        this->unk384 = 1;
        if (func_800B84D0(&this->actor, globalCtx) != 0) {
            this->unk3A0 = sp3E + 0x4000;
            this->unk360->unk3A0 = this->unk3A0;
            func_80B5C9A8(this, globalCtx);
            func_80B5D114(this, globalCtx);
            return;
        }
        if (((sp44->bgCheckFlags & 1) != 0) && (func_801242B4(sp44) == 0) && (this->actor.xzDistToPlayer < 130.0f)) {
            func_800B8614(&this->actor, globalCtx, 130.0f);
        }
        // Duplicate return node #19. Try simplifying control flow for better match
    }
}

void func_80B5C910(EnOt *arg0, GlobalContext *arg1) {
    arg0->actor.shape.rot.x = 0;
    arg0->actor.shape.rot.z = 0;
    arg0->actionFunc = func_80B5C950;
    arg0->actor.shape.rot.y = arg0->actor.yawTowardsPlayer;
    arg0->actor.world.rot.x = arg0->actor.world.rot.x;
    arg0->actor.world.rot.y = arg0->actor.world.rot.y;
    arg0->actor.world.rot.z = arg0->actor.world.rot.z;
}

void func_80B5C950(EnOt *this, GlobalContext *globalCtx) {
    if ((this->unk32C & 8) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x294BU);
        gSaveContext.weekEventReg[25] |= 4;
        func_80B5CAD0(this, globalCtx);
    }
}

void func_80B5C9A8(EnOt *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80B5C9C0;
}

void func_80B5C9C0(EnOt *this, GlobalContext *globalCtx) {

}

void func_80B5C9D0(Actor *arg0, GlobalContext *arg1) {
    arg0->shape.rot.x = 0;
    arg0->shape.rot.z = 0;
    arg0->shape.rot.y = arg0->yawTowardsPlayer;
    arg0->world.rot.x = arg0->world.rot.x;
    arg0->world.rot.y = arg0->world.rot.y;
    arg0->world.rot.z = arg0->world.rot.z;
    Audio_PlayActorSound2(arg0, 0x294BU);
    arg0->unk144 = func_80B5CA30;
}

void func_80B5CA30(EnOt *this, GlobalContext *globalCtx) {
    EnOt *temp_v0;

    Math_SmoothStepToF(&this->actor.scale.x, 0.012999999f, 0.7f, 0.0001f, 0.01f);
    Actor_SetScale(&this->actor, this->actor.scale.x);
    if (this->actor.scale.x == 0.012999999f) {
        temp_v0 = this->unk360;
        temp_v0->unk32C |= 0x1000;
        this->unk360->unk360 = this;
        func_80B5C9A8(this, globalCtx);
    }
}

void func_80B5CAD0(Actor *arg0, GlobalContext *arg1) {
    func_8013E3B8(arg0, (s16 []) (arg0 + 0x356), 2);
    arg0->unk144 = func_80B5CB0C;
}

void func_80B5CB0C(EnOt *this, GlobalContext *globalCtx) {
    Math_SmoothStepToF(&this->actor.scale.x, 0.012999999f, 0.7f, 0.0001f, 0.01f);
    Actor_SetScale(&this->actor, this->actor.scale.x);
    if (this->actor.scale.x == 0.012999999f) {
        this->unk32C |= 0x800;
        func_80B5CE6C(this, globalCtx);
    }
}

void func_80B5CBA0(Actor *arg0, GlobalContext *arg1) {
    arg0->flags |= 0x10000;
    func_800B8500(arg0, arg1, arg0->xzDistToPlayer, arg0->yDistToPlayer, 0);
    arg0->unk144 = func_80B5CBEC;
}

void func_80B5CBEC(EnOt *this, GlobalContext *globalCtx) {
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        this->actor.flags &= 0xFFFEFFFF;
        func_80B5CC88(this, globalCtx);
        return;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0xE38, (s16) 0x38E);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    func_800B8500(&this->actor, globalCtx, this->actor.xzDistToPlayer, this->actor.yDistToPlayer, 0);
}

void func_80B5CC88(EnOt *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80B5CCA0;
}

void func_80B5CCA0(EnOt *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    if (func_8013E2D4(&this->actor, this->unk356, 0x7C, 1) != 0) {
        temp_v0 = globalCtx->actorCtx.actorList[2].first;
        temp_v0->unkA70 = (s32) (temp_v0->unkA70 | 0x20000000);
        func_80B5CCF4(this, globalCtx);
    }
}

void func_80B5CCF4(EnOt *arg0, GlobalContext *arg1) {
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) &D_80B5E3CC, 0, arg0 + 0x2BC);
    arg0->actionFunc = func_80B5CD40;
}

void func_80B5CD40(EnOt *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    u32 temp_v0;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 0:
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (Math_SmoothStepToS(&this->actor.shape.rot.y, (s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 3, 0xE38, (s16) 0x38E) == 0) {
            gSaveContext.weekEventReg[23] |= 0x10;
            func_801518B0(globalCtx, 0x1069U, NULL);
            return;
        }
    default:
        return;
    case 4:
    case 5:
    case 6:
        if ((func_80147624(globalCtx) != 0) && (globalCtx->msgCtx.unk11F04 == 0x1069)) {
            this->unk32C |= 4;
            ActorCutscene_Stop(this->unk356);
            sp2C->unkA70 = (s32) (sp2C->unkA70 & 0xDFFFFFFF);
            func_80B5CE6C(this, globalCtx);
        }
        // Duplicate return node #7. Try simplifying control flow for better match
        return;
    }
}

void func_80B5CE6C(EnOt *arg0, GlobalContext *arg1) {
    arg0->unk384 = 0;
    arg0->unk32C |= 0x20;
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) &D_80B5E3CC, 0, arg0 + 0x2BC);
    arg0->actionFunc = func_80B5CEC8;
}

void func_80B5CEC8(EnOt *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    Vec3f sp2C;
    EnOt *temp_v0;
    EnOt *temp_v0_2;
    EnOt *temp_v0_3;

    sp3C = globalCtx->actorCtx.actorList[2].first;
    this->actor.textId = 0;
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80B5D114(this, globalCtx);
        return;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0xE38, (s16) 0x38E);
    if ((this->unk32C & 0x800) != 0) {
        this->actor.flags |= 0x10000;
        func_800B8500(&this->actor, globalCtx, this->actor.xzDistToPlayer, this->actor.yDistToPlayer, 0);
    } else {
        this->actor.flags &= 0xFFFEFFFF;
        if (((sp3C->bgCheckFlags & 1) != 0) && (func_801242B4(sp3C) == 0) && (this->actor.xzDistToPlayer < 130.0f)) {
            func_800B8614(&this->actor, globalCtx, 130.0f);
        }
    }
    if (((gSaveContext.weekEventReg[84] & 0x10) == 0) && ((((s32) this->actor.params >> 0xE) & 3) == 1)) {
        if ((fabsf(this->actor.xzDistToPlayer) <= 130.0f) && (fabsf(this->actor.yDistToPlayer) <= 130.0f)) {
            sp3C->unkB2B = 0x1D;
        }
        temp_v0 = D_80B5E888;
        if ((temp_v0 != 0) && ((temp_v0->unk32C & 1) != 0)) {
            this->unk360 = temp_v0;
            temp_v0->unk360 = this;
            Matrix_RotateY(this->actor.home.rot.y, 0U);
            SysMatrix_GetStateTranslationAndScaledZ(800.0f, &sp2C);
            Math_Vec3f_Sum(&this->actor.world.pos, &sp2C, &this->unk360->actor.world.pos);
            temp_v0_2 = this->unk360;
            Math_Vec3f_Copy(&temp_v0_2->actor.prevPos, &temp_v0_2->actor.world.pos);
            temp_v0_3 = this->unk360;
            this->unk32C &= 0xF7FF;
            temp_v0_3->unk32C &= 0xF7FF;
            func_80B5BDA8(this, globalCtx);
            func_80B5BE88(this->unk360, globalCtx);
            return;
        }
        goto block_16;
    }
block_16:
    if ((this->unk32C & 0x1000) != 0) {
        this->unk388 = 1;
        func_80B5BDA8(this, globalCtx);
        func_80B5BE88(this->unk360, globalCtx);
    }
}

void func_80B5D114(EnOt *arg0, GlobalContext *arg1) {
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) &D_80B5E3CC, 0, arg0 + 0x2BC);
    arg0->actionFunc = func_80B5D160;
}

void func_80B5D160(EnOt *this, GlobalContext *globalCtx) {
    s32 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u32 temp_v0;
    u8 temp_v0_2;
    u16 phi_a1;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) { // switch 1
    case 0: // switch 1
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0xE38, (s16) 0x38E) == 0) {
            temp_v0_2 = this->unk384;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 1) {
                    return;
                }
                func_801518B0(globalCtx, 0x106DU, &this->actor);
                func_80B5D114(this, globalCtx);
                return;
            }
            temp_v0_3 = this->unk33C;
            phi_a1 = 0x10A5U;
            if ((temp_v0_3 != 1) && (temp_v0_3 == 2)) {
                temp_v0_4 = this->unk32C;
                if ((temp_v0_4 & 1) != 0) {
                    if ((temp_v0_4 & 4) != 0) {
                        phi_a1 = 0x106AU;
                    } else {
                        phi_a1 = 0x1069U;
                    }
                } else if (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 7) & 0x7F) != 0) {
                    if ((gSaveContext.weekEventReg[23] & 0x10) != 0) {
                        phi_a1 = 0x106CU;
                    } else {
                        phi_a1 = 0x106BU;
                    }
                } else {
                    phi_a1 = 0x1068U;
                }
            }
            func_801518B0(globalCtx, phi_a1, &this->actor);
            func_80B5D114(this, globalCtx);
            return;
        }
    default: // switch 1
        return;
    case 4: // switch 1
    case 5: // switch 1
    case 6: // switch 1
        if (func_80147624(globalCtx) != 0) {
            temp_v0_5 = globalCtx->msgCtx.unk11F04;
            if ((s32) temp_v0_5 >= 0x106E) {
                if (temp_v0_5 != 0x10A5) {
                    goto block_25;
                }
                func_801477B4(globalCtx);
                func_80B5CE6C(this, globalCtx);
                return;
            }
            switch (temp_v0_5) { // switch 2
            default: // switch 2
block_25:
                func_80B5D648(this, globalCtx);
                return;
            case 4201: // switch 2
                this->unk32C |= 4;
                // fallthrough
            case 4202: // switch 2
                func_80B5CE6C(this, globalCtx);
                return;
            case 4205: // switch 2
                func_801477B4(globalCtx);
                func_80B5C154(&this->actor, globalCtx);
                // Duplicate return node #30. Try simplifying control flow for better match
                return;
            }
        } else {
            // Duplicate return node #30. Try simplifying control flow for better match
            return;
        }
        break;
    }
}

s32 func_80B5D37C(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    f32 sp24;
    f32 sp20;
    f32 temp_f6;
    void *temp_s0;

    temp_s0 = arg1->unk_48;
    temp_f6 = Math_CosS((s16) ((s32) temp_s0->world.rot.x * -1)) * temp_s0->speedXZ;
    sp20 = gFramerateDivisorHalf;
    sp24 = temp_f6;
    temp_s0->velocity.x = Math_SinS(temp_s0->world.rot.y) * sp24;
    temp_s0->velocity.y = Math_SinS((s16) ((s32) temp_s0->world.rot.x * -1)) * temp_s0->speedXZ;
    temp_s0->velocity.z = Math_CosS(temp_s0->world.rot.y) * temp_f6;
    temp_s0->unk330 = (f32) (temp_s0->unk330 + ((temp_s0->velocity.x * sp20) + temp_s0->colChkInfo.displacement.x));
    temp_s0->unk334 = (f32) (temp_s0->unk334 + ((temp_s0->velocity.y * sp20) + temp_s0->colChkInfo.displacement.y));
    temp_s0->unk338 = (f32) (temp_s0->unk338 + ((temp_s0->velocity.z * sp20) + temp_s0->colChkInfo.displacement.z));
    return 0;
}

s32 func_80B5D470(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    s32 sp60;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s32 sp34;
    s32 sp30;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a1_2;
    s16 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s1;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_s1 = arg1->unk_48;
    sp60 = 0;
    temp_s1->gravity = 0.0f;
    Math_SmoothStepToF(temp_s1 + 0x70, 10.0f, 0.8f, 2.0f, 0.0f);
    temp_a0 = &sp50;
    temp_a1 = &sp44;
    sp50 = arg1->unk_20.x - temp_s1->world.pos.x;
    sp54 = arg1->unk_20.y - temp_s1->world.pos.y;
    sp58 = arg1->unk_20.z - temp_s1->world.pos.z;
    sp44 = arg1->unk_20.x - arg1->unk38;
    sp48 = arg1->unk_20.y - arg1->unk3C;
    sp4C = arg1->unk_20.z - arg1->unk40;
    temp_f2 = temp_s1->speedXZ;
    temp_f12 = temp_f2 * temp_f2;
    if ((arg1->unk_4C < temp_f12) || ((bitwise f32) Math3D_Parallel((Vec3f *) temp_a0, (Vec3f *) temp_a1) <= 0.0f)) {
        sp60 = 1;
    } else {
        temp_a1_2 = arg1->unk_54;
        temp_v0 = temp_a1_2 - temp_s1->world.rot.x;
        temp_f0 = temp_f12 / arg1->unk_50;
        if (temp_v0 >= 0) {
            phi_v1_2 = temp_v0;
        } else {
            phi_v1_2 = -temp_v0;
        }
        temp_v0_2 = arg1->unk_56 - temp_s1->world.rot.y;
        phi_v1 = -temp_v0_2;
        if (temp_v0_2 >= 0) {
            phi_v1 = temp_v0_2;
        }
        sp34 = phi_v1;
        sp40 = temp_f0;
        Math_SmoothStepToS(temp_s1 + 0x30, temp_a1_2, 1, (s16) ((s32) ((f32) phi_v1_2 * temp_f0) + 0xAAA), (s16) 0);
        temp_a3 = (s32) ((f32) phi_v1 * temp_f0) + 0xAAA;
        sp30 = (s32) temp_a3;
        Math_SmoothStepToS(temp_s1 + 0x32, arg1->unk_56, 1, temp_a3, (s16) 0);
        Math_SmoothStepToS(temp_s1 + 0xBE, temp_s1->world.rot.y, 2, temp_a3, (s16) 0);
    }
    return sp60;
}

void func_80B5D648(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp3C;
    Vec3f *sp38;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    u32 temp_t1;

    temp_a1 = arg0 + 0x24;
    sp3C = temp_a1;
    func_80B5B2E0(arg1, temp_a1, arg0->unk346, arg0 + 0x348, arg0 + 0x340);
    temp_a0 = arg0 + 0x330;
    sp38 = temp_a0;
    Math_Vec3f_Copy(temp_a0, temp_a1);
    func_8013DCE0(arg1, sp38, arg0, arg0 + 0x2C0, arg1->setupPathList, (s32) arg0->unk346, 0, 0, arg0->unk340, 0);
    arg0->unk32C = 0;
    arg0->unk2EC = 0.0f;
    arg0->unk2F0 = 0.0f;
    arg0->unk2F4 = 0.0f;
    arg0->gravity = 0.0f;
    arg0->speedXZ = 0.0f;
    func_8013E1C8(arg0 + 0x148, (struct_80B8E1A8 []) &D_80B5E3CC, 1, arg0 + 0x2BC);
    temp_t1 = arg0->flags | 0x8000000;
    arg0->flags = temp_t1;
    arg0->flags = temp_t1 & ~9;
    Actor_SetSwitchFlag(arg1, ((s32) arg0->params >> 7) & 0x7F);
    arg0->unk144 = func_80B5D750;
}

void func_80B5D750(EnOt *this, GlobalContext *globalCtx) {
    u16 temp_t7;
    u16 temp_v0;
    u16 temp_v0_2;
    u32 temp_t0;
    u16 phi_v0;

    temp_v0 = this->unk32C;
    if (((temp_v0 & 1) == 0) && ((temp_v0 & 2) == 0)) {
        func_8013DE04(globalCtx, &this->unk2C0, func_8013DF3C, func_80B5D470, func_80B5D37C, func_8013E0A4);
    }
    Math_Vec3f_Copy(&this->actor.world.pos, &this->unk330);
    if ((this->unk2C0.unk_1C & 0x40) != 0) {
        this->unk32C |= 2;
    }
    if ((this->unk2C0.unk_1C & 0x80) != 0) {
        this->unk32C |= 1;
    }
    temp_v0_2 = this->unk32C;
    phi_v0 = temp_v0_2;
    if ((temp_v0_2 & 2) != 0) {
        temp_t7 = temp_v0_2 & 0xFFFD;
        if (this->actor.xyzDistToPlayerSq <= 14400.0f) {
            this->unk32C = temp_t7;
            phi_v0 = temp_t7 & 0xFFFF;
        }
    }
    if (((phi_v0 & 1) != 0) && (this->actor.xzDistToPlayer <= 180.0f)) {
        temp_t0 = this->actor.flags & 0xF7FFFFFF;
        this->actor.flags = temp_t0;
        this->actor.flags = temp_t0 | 9;
        if (D_80B5E884 != 0) {
            func_80B5C9A8(this, globalCtx);
            return;
        }
        func_80B5CBA0(&this->actor, globalCtx);
        // Duplicate return node #15. Try simplifying control flow for better match
    }
}

void EnOt_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnOt *this = (EnOt *) thisx;
    SkelAnime *sp58;
    ColliderCylinder *temp_s0_2;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_s0;
    u8 *temp_s0_3;
    s16 phi_v0;
    s32 phi_s0;

    if ((this->unk2BC == 1) && (func_801378B8(&this->unk148, this->unk148.animFrameCount) != 0)) {
        Audio_PlayActorSound2(&this->actor, 0x2951U);
    }
    sp58 = &this->unk148;
    this->actionFunc(this, globalCtx);
    if ((this->actor.bgCheckFlags & 0x20) != 0) {
        temp_v1 = this->unk354;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk354 = temp_v1 - 1;
            phi_v0 = this->unk354;
        }
        if (phi_v0 == 0) {
            phi_s0 = 0;
            if ((this->actor.flags & 0x40) != 0) {
                do {
                    EffectSsBubble_Spawn(globalCtx, &this->actor.world.pos, 0.0f, 20.0f, 5.0f, 0.1f);
                    temp_s0 = phi_s0 + 1;
                    phi_s0 = temp_s0;
                } while (temp_s0 != 2);
                this->unk354 = (s16) (s32) ((Rand_ZeroOne() * 10.0f) + 10.0f);
            }
        }
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 10.0f, 0.0f, 4U);
    temp_f0 = this->actor.floorHeight + 50.0f;
    if (this->actor.world.pos.y <= temp_f0) {
        this->actor.world.pos.y = temp_f0;
        this->actor.prevPos.y = temp_f0;
    }
    Actor_SetHeight(&this->actor, 12.0f);
    SkelAnime_FrameUpdateMatrix(sp58);
    temp_s0_2 = &this->unk18C;
    Collider_UpdateCylinder(&this->actor, temp_s0_2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_s0_2->base);
    temp_s0_3 = &this->unk747;
    func_80B5BB38(temp_s0_3, &this->unk744, 0.7f);
    if ((this->unk32C & 0x400) != 0) {
        func_80B5BAAC(&this->unk368, &this->unk378, temp_s0_3, 0xD2);
    }
    func_80B5E078(globalCtx, &this->unk3A4, 0xA);
}

void func_80B5DAEC(Actor *this, GlobalContext *globalCtx) {
    u8 *sp24;
    u8 *temp_a0;

    this->unk144(this);
    Actor_SetHeight(this, 12.0f);
    SkelAnime_FrameUpdateMatrix(this + 0x148);
    temp_a0 = this + 0x747;
    sp24 = temp_a0;
    func_80B5BB38(temp_a0, this + 0x744, 0.7f);
    if ((this->unk32C & 0x400) != 0) {
        func_80B5BAAC(this + 0x368, this + 0x378, sp24, 0xD2);
    }
}

void func_80B5DB6C(Actor *this, GlobalContext *globalCtx) {
    Actor *sp5C;
    Vec3f sp50;
    s32 sp4C;
    Actor *temp_v1;
    EnOt *temp_v0;
    s32 phi_a3;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (((gSaveContext.weekEventReg[84] & 0x10) == 0) && ((this->unk32C & 8) == 0)) {
        if ((gSaveContext.weekEventReg[25] & 4) != 0) {
            func_80B5B2E0(globalCtx, &this->world.pos, (s16) (this->params & 0x7F), &sp50, this + 0x340);
            if (Actor_SpawnAsChildAndCutscene(&globalCtx->actorCtx, globalCtx, 0x205, sp50.x, sp50.y, sp50.z, (s16) 0, (s16) (s32) this->shape.rot.y, (s16) 1, (this->params & 0x3FFF) | 0x8000, (u32) this->cutscene, (s32) this->unk20, NULL) != 0) {
                this->unk32C = (u16) (this->unk32C | 8);
                return;
            }
            // Duplicate return node #13. Try simplifying control flow for better match
            return;
        }
        if (D_80B5E888 != 0) {
            phi_a3 = 0;
            if ((gSaveContext.weekEventReg[13] & 1) != 0) {
                sp4C = 0;
                phi_a3 = sp4C;
                if (func_800C9B90(&globalCtx->colCtx, temp_v1->floorPoly, (s32) temp_v1->floorBgId) == 0) {
                    phi_a3 = 1;
                }
            }
            if (phi_a3 == 0) {
                temp_v0 = D_80B5E888;
                temp_v0->unk32C |= 8;
                temp_v0->unk346 = this->params & 0x7F;
                temp_v0->actor.params = this->params;
                temp_v0->actor.cutscene = this->cutscene;
                this->unk32C = (u16) (this->unk32C | 8);
                return;
            }
            // Duplicate return node #13. Try simplifying control flow for better match
            return;
        }
        sp5C = temp_v1;
        if (func_800C9B90(&globalCtx->colCtx, temp_v1->floorPoly, (s32) temp_v1->floorBgId) != 0) {
            temp_v1->unkB2B = 0x1D;
        }
        // Duplicate return node #13. Try simplifying control flow for better match
    }
}

void EnOt_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnOt *this = (EnOt *) thisx;
    Gfx *sp40;
    GraphicsContext *sp3C;
    GraphicsContext *sp34;
    Gfx *temp_v0_2;
    Gfx *temp_v1_2;
    GraphicsContext *temp_v0;
    GraphicsContext *temp_v1;

    SysMatrix_StatePush();
    func_80B5E1D8(globalCtx, &this->unk3A4, 0xA);
    SysMatrix_StatePop();
    temp_v1 = globalCtx->state.gfxCtx;
    sp3C = temp_v1;
    temp_v1->polyOpa.p = Gfx_CallSetupDL(temp_v1->polyOpa.p, 0x19U);
    temp_v1->polyXlu.p = func_8012C2B4(temp_v1->polyXlu.p);
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060005F8));
    SkelAnime_DrawSV(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, NULL, func_80B5DECC, &this->actor);
    SysMatrix_InsertTranslation(this->unk378, this->unk37C, this->unk380, 0);
    Matrix_Scale(0.0882f, 0.0882f, 0.0882f, 1);
    temp_v0 = globalCtx->state.gfxCtx;
    sp34 = temp_v0;
    temp_v0_2 = func_8012C7FC(temp_v0->polyXlu.p);
    temp_v1_2 = temp_v0_2;
    temp_v0_2->words.w1 = 0x80;
    temp_v0_2->words.w0 = 0xE3001803;
    temp_v0_2->unk8 = 0xFCFF97FF;
    temp_v0_2->unkC = 0xFF2DFEFF;
    temp_v0_2->unk10 = 0xDE000000;
    temp_v0_2->unk14 = D_04029CB0;
    temp_v0_2->unk18 = 0xFA000000;
    temp_v0_2->unk1C = (s32) ((this->unk747 << 0x18) | (this->unk748 << 0x10) | (this->unk749 << 8) | 0x32);
    temp_v1_2->unk20 = 0xDA380003;
    sp40 = temp_v1_2;
    temp_v1_2->unk24 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1_2->unk2C = D_04029CF0;
    temp_v1_2->unk28 = 0xDE000000;
    sp34->polyXlu.p = temp_v1_2 + 0x30;
}

void func_80B5DECC(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3s *rot, Actor *actor) {
    Gfx *temp_v0;
    GraphicsContext *temp_v1;

    if (limbIndex == 4) {
        temp_v1 = globalCtx->state.gfxCtx;
        temp_v0 = temp_v1->polyOpa.p;
        temp_v0->words.w0 = 0xDE000000;
        temp_v0->words.w1 = (u32) &D_060004A0;
        temp_v1->polyOpa.p = temp_v0 + 8;
        SysMatrix_MultiplyVector3fByState(&D_80B5E410, actor + 0x74C);
        return;
    }
    if (limbIndex == 1) {
        SysMatrix_GetStateTranslation(actor + 0x378);
        actor->unk32C = (u16) (actor->unk32C | 0x400);
    }
}

u8 *func_80B5DF58(u8 *arg0, u8 arg1, Vec3f *arg2, ActorShape *arg3, s32 arg4) {
    s32 temp_v0;
    u8 *temp_a3;
    s32 phi_v0;
    u8 *phi_a3;
    s32 phi_v0_2;
    u8 *phi_a3_2;
    u8 *phi_a3_3;

    phi_v0 = 0;
    phi_a3 = arg0;
    phi_v0_2 = 0;
    phi_a3_2 = arg0;
    if ((arg4 > 0) && (arg0->unk0 != 0)) {
loop_2:
        temp_v0 = phi_v0 + 1;
        temp_a3 = phi_a3 + 0x5C;
        phi_v0 = temp_v0;
        phi_a3 = temp_a3;
        phi_v0_2 = temp_v0;
        phi_a3_2 = temp_a3;
        if (temp_v0 < arg4) {
            if (*temp_a3 != 0) {
                goto loop_2;
            }
        }
    }
    phi_a3_3 = phi_a3_2;
    if ((phi_v0_2 < arg4) && ((arg1 == 1) || (arg1 == 2))) {
        *phi_a3_2 = arg1;
        arg0 = phi_a3_2;
        Math_Vec3f_Copy(phi_a3_2 + 0xC, arg2);
        Math_Vec3f_Copy(arg0 + 0x50, arg2);
        arg0->unk30 = 0.0f;
        arg0->unk4 = 0.009f;
        arg0->unk34 = 0.0f;
        arg0->unk38 = 0.3f;
        arg0->unk3C = 1.4f;
        arg0->unk4C = 0x28;
        arg0->unk40 = -0.05f;
        phi_a3_3 = arg0;
        if (arg0->unk0 == 2) {
            arg0->unk30 = (f32) -arg0->unk30;
            arg0->unk38 = (f32) -arg0->unk38;
        }
    }
    return phi_a3_3;
}

void func_80B5E078(GlobalContext *arg0, u8 *arg1, s32 arg2) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Vec3f *temp_s1;
    f32 *temp_s5;
    f32 temp_f0;
    s32 temp_a0;
    s32 temp_s2;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 *phi_s0;
    s32 phi_v1;
    s32 phi_s2;

    phi_s0 = arg1;
    phi_s2 = 0;
    if (arg2 > 0) {
        temp_s5 = &sp54;
        do {
            temp_v0 = phi_s0->unk0;
            if ((temp_v0 == 1) || (temp_v0 == 2)) {
                temp_v0_2 = phi_s0->unk4C;
                temp_t9 = temp_v0_2 - 1;
                if (temp_v0_2 == 0) {
                    phi_v1 = 0;
                } else {
                    phi_s0->unk4C = temp_t9;
                    phi_v1 = temp_t9 & 0xFF;
                }
                if (phi_v1 == 0) {
                    phi_s0->unk0 = 0;
                }
                temp_f0 = phi_s0->unk3C;
                temp_a0 = func_800DFC68((arg0 + (arg0->activeCamera * 4))->unk800) << 0x10;
                phi_s0->unk30 = (f32) (phi_s0->unk30 + phi_s0->unk38);
                phi_s0->unk34 = (f32) (phi_s0->unk34 + temp_f0);
                phi_s0->unk3C = (f32) (temp_f0 + phi_s0->unk40);
                sp54 = phi_s0->unk30;
                sp5C = 0.0f;
                sp58 = phi_s0->unk34;
                Matrix_RotateY((s16) (temp_a0 >> 0x10), 0U);
                temp_s1 = phi_s0 + 0xC;
                SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s5, temp_s1);
                Math_Vec3f_Sum(temp_s1, phi_s0 + 0x50, temp_s1);
                phi_s0->unk4C = (u8) (phi_s0->unk4C - 1);
            }
            temp_s2 = phi_s2 + 1;
            phi_s0 += 0x5C;
            phi_s2 = temp_s2;
        } while (temp_s2 != arg2);
    }
}

void func_80B5E1D8(GlobalContext *arg0, u8 *arg1, s32 arg2) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    s32 temp_s4;
    u8 *phi_s2;
    s32 phi_s7;
    s32 phi_s4;

    temp_s1 = arg0->state.gfxCtx;
    temp_v0 = func_801660B8(arg0, temp_s1->polyOpa.p);
    temp_s1->polyOpa.p = temp_v0;
    temp_s1->polyOpa.p = func_8012C724(temp_v0);
    phi_s2 = arg1;
    phi_s7 = 0;
    phi_s4 = 0;
    if (arg2 > 0) {
        do {
            if (phi_s2->unk0 != 0) {
                if (phi_s7 == 0) {
                    temp_v0_2 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v0_2 + 8;
                    temp_v0_2->words.w1 = (u32) &D_06000040;
                    temp_v0_2->words.w0 = 0xDE000000;
                    phi_s7 = 1;
                }
                SysMatrix_InsertTranslation(phi_s2->unkC, phi_s2->unk10, phi_s2->unk14, 0);
                Matrix_RotateY((s16) (func_800DFCDC(arg0->cameraPtrs[arg0->activeCamera]) + 0x8000), 1U);
                temp_f12 = phi_s2->unk4;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                temp_v0_3 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDB060020;
                temp_v0_3->words.w1 = Lib_SegmentedToVirtual((void *) &D_0405E6F0);
                temp_v0_4 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xDA380003;
                temp_v0_4->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                temp_v0_5 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = (u32) &D_06000078;
                temp_v0_5->words.w0 = 0xDE000000;
            }
            temp_s4 = phi_s4 + 1;
            phi_s2 += 0x5C;
            phi_s4 = temp_s4;
        } while (temp_s4 != arg2);
    }
}

