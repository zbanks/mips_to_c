typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ u16 startFrame;
    /* 0x04 */ u16 endFrame;
    /* 0x06 */ char pad_6[0x4];                     /* maybe part of endFrame[3]? */
    /* 0x0A */ u16 unk_A;                           /* inferred */
    /* 0x0C */ char pad_C[0x24];                    /* maybe part of unk_A[19]? */
} CsCmdActorAction;                                 /* size = 0x30 */

typedef struct DmChar09 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x36];                 /* maybe part of unk_188[10]? */
    /* 0x1C4 */ Vec3s unk_1C4;                      /* inferred */
    /* 0x1CA */ char pad_1CA[0x36];                 /* maybe part of unk_1C4[10]? */
    /* 0x200 */ void (*actionFunc)(DmChar09 *, GlobalContext *);
    /* 0x204 */ char pad_204[0xC];                  /* maybe part of actionFunc[4]? */
    /* 0x210 */ f32 unk_210;                        /* inferred */
    /* 0x214 */ s32 unk_214;                        /* inferred */
    /* 0x218 */ s32 unk_218;                        /* inferred */
    /* 0x21C */ s32 unk_21C;                        /* inferred */
    /* 0x220 */ s32 unk_220;                        /* inferred */
    /* 0x224 */ void *unk_224;                      /* inferred */
    /* 0x228 */ s16 unk_228;                        /* inferred */
    /* 0x22A */ s16 unk_22A;                        /* inferred */
    /* 0x22C */ char pad_22C[0x2];
    /* 0x22E */ u8 unk_22E;                         /* inferred */
    /* 0x22F */ u8 unk_22F;                         /* inferred */
} DmChar09;                                         /* size = 0x230 */

struct _mips2c_stack_DmChar09_Destroy {};           /* size 0x0 */

struct _mips2c_stack_DmChar09_Draw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_DmChar09_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_DmChar09_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB1E10 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB1FA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB1FDC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ char pad_34[0xC];                    /* maybe part of sp30[4]? */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x14];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x10];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80AB2258 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB2268 {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
    /* 0x28 */ char pad_28[0x4];                    /* maybe part of sp27[5]? */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ Path *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AB24BC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB25D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80AB1E10(SkelAnime *arg0, ? *arg1, s32 arg2); /* static */
void func_80AB1FA0(DmChar09 *arg0, s32 arg1);       /* static */
void func_80AB24BC(DmChar09 *arg0, GlobalContext *arg1); /* static */
s32 func_80AB25D8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
extern AnimationHeader D_0600005C;
extern SkeletonHeader D_06001398;
static ? D_80AB26B0;                                /* unable to generate initializer */

void func_80AB1E10(SkelAnime *arg0, ? *arg1, s32 arg2) {
    f32 temp_f0;
    void *temp_s0;
    f32 phi_f2;

    temp_s0 = arg1 + ((arg2 & 0xFFFF) * 0x18);
    temp_f0 = temp_s0->unk_C;
    if (temp_f0 < 0.0f) {
        phi_f2 = (f32) SkelAnime_GetFrameCount(temp_s0->unk_0);
    } else {
        phi_f2 = temp_f0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk_0, temp_s0->unk_4, temp_s0->unk_8, phi_f2, (u8) (s32) temp_s0->unk_10, temp_s0->unk_14);
}

void DmChar09_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    f32 temp_f16;
    DmChar09 *this = (DmChar09 *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    temp_a1 = &this->unk_144;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_06001398, &D_0600005C, &this->unk_188, &this->unk_1C4, 0xA);
    func_80AB1E10(sp30, &D_80AB26B0, 0);
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_228 = (s16) (s32) (Rand_ZeroOne() * 65535.0f);
    temp_f16 = Rand_ZeroOne() * 65535.0f;
    this->actionFunc = func_80AB2258;
    this->unk_22A = (s16) (s32) temp_f16;
}

void DmChar09_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmChar09 *this = (DmChar09 *) thisx;

}

void func_80AB1FA0(DmChar09 *arg0, s32 arg1) {
    Math_Vec3s_ToVec3f(arg0 + 0x24, arg0->unk_224 + (arg1 * 6));
}

void func_80AB1FDC(DmChar09 *this, GlobalContext *globalCtx) {
    ? sp58;
    f32 sp54;
    ? sp40;
    PosRot *sp30;
    Vec3f *sp28;
    PosRot *temp_a1;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    f32 phi_f0;
    f32 phi_f12;
    s32 phi_a1;

    temp_a1 = &this->actor.world;
    sp30 = temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp40, (Vec3f *) temp_a1);
    Math_Vec3s_ToVec3f((Vec3f *) &sp58, this->unk_224 + (this->unk_21C * 6) + (this->unk_220 * 6));
    temp_a2 = &this->actor.velocity;
    sp28 = temp_a2;
    Math_Vec3f_Diff((Vec3f *) &sp58, (Vec3f *) temp_a1, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp28);
    temp_f2 = this->unk_210;
    if ((temp_f0 < (temp_f2 * 8.0f)) && (temp_f2 > 2.0f)) {
        phi_f0 = ((temp_f2 - 2.0f) * 0.1f) + 2.0f;
        phi_f12 = temp_f2 * 0.03f;
    } else {
        phi_f0 = temp_f2;
        phi_f12 = temp_f2 * 0.16f;
    }
    sp54 = temp_f0;
    Math_StepToF(&this->actor.speedXZ, phi_f0, phi_f12);
    temp_f0_2 = this->actor.speedXZ;
    if ((temp_f0_2 + 0.05f) < temp_f0) {
        Math_Vec3f_Scale(sp28, temp_f0_2 / temp_f0);
        this->actor.world.pos.x += this->actor.velocity.x;
        this->actor.world.pos.y += this->actor.velocity.y;
        this->actor.world.pos.z += this->actor.velocity.z;
    } else {
        temp_v0 = this->unk_21C + this->unk_220;
        this->unk_21C = temp_v0;
        temp_a0 = this->unk_218;
        this->actor.speedXZ *= 0.4f;
        phi_a1 = 1;
        if (((temp_v0 >= temp_a0) && (this->unk_220 > 0)) || ((temp_v0 <= 0) && (this->unk_220 < 0))) {
            temp_v0_2 = this->unk_224;
            temp_v1 = temp_v0_2 + (temp_a0 * 6);
            if ((temp_v1->unk_0 == temp_v0_2->unk_0) && (temp_v1->unk_2 == temp_v0_2->unk_2) && (temp_v1->unk_4 == temp_v0_2->unk_4)) {
                this->unk_21C = 0;
                this->unk_220 = 1;
            } else {
                this->actionFunc = func_80AB2268;
                phi_a1 = 0;
            }
        }
        if (phi_a1 != 0) {
            func_80AB1FA0(this, this->unk_21C);
        }
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (Math_Vec3f_Yaw((Vec3f *) sp30, (Vec3f *) &sp40) + 0x7FFF), 1, 0x7D0, (s16) 0);
    this->actor.shape.rot.y = this->actor.world.rot.y;
}

void func_80AB2258(DmChar09 *this, GlobalContext *globalCtx) {

}

void func_80AB2268(DmChar09 *this, GlobalContext *globalCtx) {
    Path *sp3C;
    u32 sp30;
    s32 sp2C;
    u8 sp27;
    GlobalContext *temp_a0;
    Path *temp_a1_2;
    Path *temp_v1;
    Path *temp_v1_2;
    Path *temp_v1_3;
    f32 temp_f6;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_v0_2;
    u16 temp_a1;
    u16 temp_a2;
    u16 temp_t5;
    u32 temp_t0;
    u32 temp_v0;
    void *temp_a0_2;
    u8 phi_v1;
    s32 phi_a3;
    s32 phi_a0;
    s32 phi_a0_2;
    Path *phi_v1_2;
    f32 phi_f6;
    Path *phi_v1_3;
    Path *phi_v1_4;

    temp_a0 = globalCtx;
    phi_v1 = 0U;
    phi_a3 = 0;
    if ((this->actor.params & 0xF) == 0) {
        if (globalCtx->csCtx.unk_12 == 1) {
            goto block_4;
        }
    } else if (globalCtx->csCtx.unk_12 == 0) {
block_4:
        phi_v1 = 1U;
    }
    sp27 = phi_v1;
    globalCtx = globalCtx;
    sp2C = 0;
    if ((func_800EE29C(temp_a0, 0x1F7U) != 0) && (phi_v1 != 0)) {
        sp2C = 0;
        temp_v0 = func_800EE200(globalCtx, 0x1F7U);
        temp_a0_2 = globalCtx + (temp_v0 * 4);
        temp_t0 = temp_v0;
        temp_a1 = globalCtx->csCtx.npcActions[temp_v0]->unk0;
        if (this->unk_22F != temp_a1) {
            this->unk_22F = (u8) temp_a1;
            temp_a2 = *temp_a0_2->unk_1F4C;
            if (temp_a2 != 2) {
                if (temp_a2 != 3) {
                    if (temp_a2 != 4) {
                        if (temp_a2 != 5) {

                        } else {
                            phi_a3 = 3;
                        }
                    } else {
                        phi_a3 = 2;
                    }
                } else {
                    phi_a3 = 1;
                }
            }
            if ((s32) temp_a2 >= 2) {
                temp_a1_2 = globalCtx->setupPathList;
                temp_v1 = &temp_a1_2[((s32) this->actor.params >> 4) & 0xF];
                phi_a0 = 0;
                phi_a0_2 = 0;
                phi_v1_2 = temp_v1;
                phi_v1_3 = temp_v1;
                phi_v1_4 = temp_v1;
                if (phi_a3 > 0) {
                    temp_v0_2 = phi_a3 & 3;
                    if (temp_v0_2 != 0) {
                        do {
                            temp_a0_3 = phi_a0 + 1;
                            temp_v1_2 = &temp_a1_2[phi_v1_3->unk1];
                            phi_a0 = temp_a0_3;
                            phi_a0_2 = temp_a0_3;
                            phi_v1_2 = temp_v1_2;
                            phi_v1_3 = temp_v1_2;
                            phi_v1_4 = temp_v1_2;
                        } while (temp_v0_2 != temp_a0_3);
                        if (temp_a0_3 != phi_a3) {
                            goto loop_21;
                        }
                    } else {
                        do {
loop_21:
                            temp_a0_4 = phi_a0_2 + 4;
                            temp_v1_3 = &temp_a1_2[temp_a1_2[temp_a1_2[temp_a1_2[phi_v1_4->unk1].unk1].unk1].unk1];
                            phi_a0_2 = temp_a0_4;
                            phi_v1_2 = temp_v1_3;
                            phi_v1_4 = temp_v1_3;
                        } while (temp_a0_4 != phi_a3);
                    }
                }
                sp30 = temp_t0;
                sp3C = phi_v1_2;
                this->unk_224 = Lib_SegmentedToVirtual(phi_v1_2->points);
                this->unk_21C = 0;
                this->unk_214 = (s32) phi_v1_2->count;
                this->unk_220 = 1;
                this->unk_218 = phi_v1_2->count - 1;
                this->unk_22E = 1;
                temp_t5 = globalCtx->csCtx.npcActions[temp_t0]->unk_A;
                temp_f6 = (f32) temp_t5;
                phi_f6 = temp_f6;
                if ((s32) temp_t5 < 0) {
                    phi_f6 = temp_f6 + 4294967296.0f;
                }
                this->actionFunc = func_80AB1FDC;
                this->unk_210 = phi_f6 * 0.00390625f;
                return;
            }
            this->unk_22E = 0;
            this->actionFunc = func_80AB2258;
            return;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
        return;
    }
    this->unk_22F = 0x63;
}

void func_80AB24BC(DmChar09 *arg0, GlobalContext *arg1) {
    arg0->unk_228 += 0xBB8;
    arg0->unk_22A += 0x1388;
    arg0->unk_204 = Math_SinS(arg0->unk_228) * 150.0f;
    arg0->unk_208 = Math_SinS(arg0->unk_22A) * 150.0f;
    arg0->unk_20C = Math_SinS(arg0->unk_228) * 150.0f;
}

void DmChar09_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmChar09 *this = (DmChar09 *) thisx;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->actionFunc(this, globalCtx);
    func_80AB2268(this, globalCtx);
    func_80AB24BC(this, globalCtx);
    if ((globalCtx->csCtx.state != 0) && (this->unk_22E != 0) && ((this->actor.params & 0x100) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x304AU);
    }
}

s32 func_80AB25D8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    SysMatrix_InsertTranslation(arg5->unk_204, arg5->unk_208, arg5->unk_20C, 1);
    return 0;
}

void DmChar09_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmChar09 *this = (DmChar09 *) thisx;
    if ((globalCtx->csCtx.state != 0) && (this->unk_22E != 0)) {
        func_8012C28C(globalCtx->state.gfxCtx);
        func_8012C2DC(globalCtx->state.gfxCtx);
        SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_80AB25D8, NULL, (Actor *) this);
    }
}
