void func_80AB1E10(SkelAnime *arg0, ? *arg1, s32 arg2); /* static */
void func_80AB1FA0(DmChar09 *arg0, s32 arg1);       /* static */
void func_80AB24BC(DmChar09 *arg0, GlobalContext *arg1); /* static */
s32 func_80AB25D8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
extern AnimationHeader D_0600005C;
extern SkeletonHeader D_06001398;
static ? D_80AB26B0;                                /* unable to generate initializer */

typedef struct {
    /* 0x0000 */ u16 unk0;
    /* 0x0002 */ u16 startFrame;
    /* 0x0004 */ u16 endFrame;
    /* 0x0006 */ char pad6[0x4];                    /* maybe part of endFrame[3]? */
    /* 0x000A */ u16 unkA;                          /* inferred */
    /* 0x000C */ char padC[0x24];                   /* maybe part of unkA[19]? */
} CsCmdActorAction;                                 /* size 0x30 */

typedef struct DmChar09 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x36];                 /* maybe part of unk188[10]? */
    /* 0x01C4 */ Vec3s unk1C4;                      /* inferred */
    /* 0x01CA */ char pad1CA[0x36];                 /* maybe part of unk1C4[10]? */
    /* 0x0200 */ void (*actionFunc)(DmChar09 *, GlobalContext *);
    /* 0x0204 */ f32 unk204;                        /* inferred */
    /* 0x0208 */ f32 unk208;                        /* inferred */
    /* 0x020C */ f32 unk20C;                        /* inferred */
    /* 0x0210 */ f32 unk210;                        /* inferred */
    /* 0x0214 */ s32 unk214;                        /* inferred */
    /* 0x0218 */ s32 unk218;                        /* inferred */
    /* 0x021C */ s32 unk21C;                        /* inferred */
    /* 0x0220 */ s32 unk220;                        /* inferred */
    /* 0x0224 */ void *unk224;                      /* inferred */
    /* 0x0228 */ s16 unk228;                        /* inferred */
    /* 0x022A */ s16 unk22A;                        /* inferred */
    /* 0x022C */ char pad22C[0x2];                  /* maybe part of unk22A[2]? */
    /* 0x022E */ u8 unk22E;                         /* inferred */
    /* 0x022F */ u8 unk22F;                         /* inferred */
} DmChar09;                                         /* size 0x230 */

void func_80AB1E10(SkelAnime *arg0, ? *arg1, s32 arg2) {
    f32 temp_f0;
    void *temp_s0;
    f32 phi_f2;

    temp_s0 = arg1 + ((arg2 & 0xFFFF) * 0x18);
    temp_f0 = temp_s0->unkC;
    if (temp_f0 < 0.0f) {
        phi_f2 = (f32) SkelAnime_GetFrameCount(temp_s0->unk0);
    } else {
        phi_f2 = temp_f0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, phi_f2, (u8) (s32) temp_s0->unk10, temp_s0->unk14);
}

void DmChar09_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmChar09 *this = (DmChar09 *) thisx;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    f32 temp_f16;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_06001398, &D_0600005C, &this->unk188, &this->unk1C4, 0xA);
    func_80AB1E10(sp30, &D_80AB26B0, 0);
    Actor_SetScale(&this->actor, 0.01f);
    this->unk228 = (s16) (s32) (Rand_ZeroOne() * 65535.0f);
    temp_f16 = Rand_ZeroOne() * 65535.0f;
    this->actionFunc = func_80AB2258;
    this->unk22A = (s16) (s32) temp_f16;
}

void DmChar09_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmChar09 *this = (DmChar09 *) thisx;

}

void func_80AB1FA0(DmChar09 *arg0, s32 arg1) {
    Math_Vec3s_ToVec3f(arg0 + 0x24, arg0->unk224 + (arg1 * 6));
}

void func_80AB1FDC(DmChar09 *this, GlobalContext *globalCtx) {
    Vec3f sp58;
    f32 sp54;
    Vec3f sp40;
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
    Math_Vec3f_Copy(&sp40, &temp_a1->pos);
    Math_Vec3s_ToVec3f(&sp58, this->unk224 + (this->unk21C * 6) + (this->unk220 * 6));
    temp_a2 = &this->actor.velocity;
    sp28 = temp_a2;
    Math_Vec3f_Diff(&sp58, &temp_a1->pos, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp28);
    temp_f2 = this->unk210;
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
        temp_v0 = this->unk21C + this->unk220;
        this->unk21C = temp_v0;
        temp_a0 = this->unk218;
        this->actor.speedXZ *= 0.4f;
        phi_a1 = 1;
        if (((temp_v0 >= temp_a0) && (this->unk220 > 0)) || ((temp_v0 <= 0) && (this->unk220 < 0))) {
            temp_v0_2 = this->unk224;
            temp_v1 = temp_v0_2 + (temp_a0 * 6);
            if ((temp_v1->unk0 == temp_v0_2->unk0) && (temp_v1->unk2 == temp_v0_2->unk2) && (temp_v1->unk4 == temp_v0_2->unk4)) {
                this->unk21C = 0;
                this->unk220 = 1;
            } else {
                this->actionFunc = func_80AB2268;
                phi_a1 = 0;
            }
        }
        if (phi_a1 != 0) {
            func_80AB1FA0(this, this->unk21C);
        }
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (Math_Vec3f_Yaw(&sp30->pos, &sp40) + 0x7FFF), 1, 0x7D0, (s16) 0);
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
        if (this->unk22F != temp_a1) {
            this->unk22F = (u8) temp_a1;
            temp_a2 = *temp_a0_2->unk1F4C;
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
                this->unk224 = Lib_SegmentedToVirtual(phi_v1_2->points);
                this->unk21C = 0;
                this->unk214 = (s32) phi_v1_2->count;
                this->unk220 = 1;
                this->unk218 = phi_v1_2->count - 1;
                this->unk22E = 1;
                temp_t5 = globalCtx->csCtx.npcActions[temp_t0]->unkA;
                temp_f6 = (f32) temp_t5;
                phi_f6 = temp_f6;
                if ((s32) temp_t5 < 0) {
                    phi_f6 = temp_f6 + 4294967296.0f;
                }
                this->actionFunc = func_80AB1FDC;
                this->unk210 = phi_f6 * 0.00390625f;
                return;
            }
            this->unk22E = 0;
            this->actionFunc = func_80AB2258;
            return;
        }
        // Duplicate return node #27. Try simplifying control flow for better match
        return;
    }
    this->unk22F = 0x63;
}

void func_80AB24BC(DmChar09 *arg0, GlobalContext *arg1) {
    arg0->unk228 += 0xBB8;
    arg0->unk22A += 0x1388;
    arg0->unk204 = Math_SinS(arg0->unk228) * 150.0f;
    arg0->unk208 = Math_SinS(arg0->unk22A) * 150.0f;
    arg0->unk20C = Math_SinS(arg0->unk228) * 150.0f;
}

void DmChar09_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmChar09 *this = (DmChar09 *) thisx;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    this->actionFunc(this, globalCtx);
    func_80AB2268(this, globalCtx);
    func_80AB24BC(this, globalCtx);
    if ((globalCtx->csCtx.state != 0) && (this->unk22E != 0) && ((this->actor.params & 0x100) != 0)) {
        Audio_PlayActorSound2(&this->actor, 0x304AU);
    }
}

s32 func_80AB25D8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    SysMatrix_InsertTranslation(arg5->unk204, arg5->unk208, arg5->unk20C, 1);
    return 0;
}

void DmChar09_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmChar09 *this = (DmChar09 *) thisx;
    if ((globalCtx->csCtx.state != 0) && (this->unk22E != 0)) {
        func_8012C28C(globalCtx->state.gfxCtx);
        func_8012C2DC(globalCtx->state.gfxCtx);
        SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, func_80AB25D8, NULL, &this->actor);
    }
}

