typedef struct EnBjt {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnBjt *, GlobalContext *);
    /* 0x18C */ ColliderCylinder unk_18C;           /* inferred */
    /* 0x1D8 */ u8 unk_1D8;                         /* inferred */
    /* 0x1D9 */ char pad_1D9[0x3];                  /* maybe part of unk_1D8[4]? */
    /* 0x1DC */ s32 unk_1DC;                        /* inferred */
    /* 0x1E0 */ Vec3s unk_1E0;                      /* inferred */
    /* 0x1E6 */ char pad_1E6[0x24];                 /* maybe part of unk_1E0[7]? */
    /* 0x20A */ Vec3s unk_20A;                      /* inferred */
    /* 0x210 */ char pad_210[0x24];                 /* maybe part of unk_20A[7]? */
    /* 0x234 */ u16 unk_234;                        /* inferred */
    /* 0x236 */ char pad_236[0x12];                 /* maybe part of unk_234[10]? */
    /* 0x248 */ s32 unk_248;                        /* inferred */
    /* 0x24C */ void *unk_24C;                      /* inferred */
    /* 0x250 */ s32 unk_250;                        /* inferred */
    /* 0x254 */ char pad_254[0x8];                  /* maybe part of unk_250[3]? */
} EnBjt;                                            /* size = 0x25C */

struct _mips2c_stack_EnBjt_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnBjt_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBjt_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBjt_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BFD2E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFD30C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFD3A4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BFD434 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFD4FC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BFD5E4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BFD6BC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BFD8F0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFD984 {
    /* 0x00 */ char pad_0[0x1A];
    /* 0x1A */ u16 sp1A;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFDA48 {
    /* 0x00 */ char pad_0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BFDAE8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ u8 sp28;                             /* inferred */
    /* 0x29 */ char pad_29[0xF];
};                                                  /* size = 0x38 */

? func_801149A0(?, u8);                             /* extern */
void func_80BFD2E0(EnBjt *arg0);                    /* static */
s32 func_80BFD30C(Actor *arg0, s32 arg1);           /* static */
void func_80BFD3A4(EnBjt *arg0, GlobalContext *arg1); /* static */
? func_80BFD434(s8 arg0);                           /* static */
s32 func_80BFD4FC(Actor *arg0);                     /* static */
s32 func_80BFD5E4(Actor *arg0);                     /* static */
s32 func_80BFD6BC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BFD8F0(Actor *arg0, GlobalContext *arg1); /* static */
? func_80BFD984(EnBjt *arg0, GlobalContext *arg1);  /* static */
extern FlexSkeletonHeader D_06002390;
static void D_80BFDEA0;                             /* unable to generate initializer */
static s32 D_80BFDEB4[29] = {
    0xE29480C,
    0xE00FF2B,
    0x52,
    0x5F2C29,
    0x4A0C2F00,
    0xC1509,
    0xE29,
    0x4B0C1509,
    0xE29,
    0x4C0C1200,
    0x4908001D,
    0x9000006,
    0xC0000,
    0x13000C2F,
    0x2E2D,
    0x282D00,
    0xD0C1149,
    0x8115A80,
    0x10090000,
    0x6000200,
    0x130002,
    0x2F00002E,
    0x2D000D0C,
    0x115A8010,
    0x2C29490C,
    0x2F00000C,
    0x2D000D12,
    0x102D000D,
    0x12100000,
};
static ColliderCylinderInit D_80BFDF48 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xA, 0x44, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BFDF74 = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80BFDF80[6] = {
    {(AnimationHeader *)0x60007B8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60007B8, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60000FC, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60003A8, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6000564, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6000218, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
};
static Vec3f D_80BFDFE0 = {0.0f, 8.0f, 10.0f};

void func_80BFD2E0(EnBjt *arg0) {
    arg0->unk_144.animPlaybackSpeed = arg0->unk_238;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

s32 func_80BFD30C(Actor *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_t0;
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_t0;

    phi_v1 = 0;
    phi_t0 = 0;
    if ((arg1 == 0) || (arg1 == 1)) {
        temp_v0 = arg0->unk_250;
        if ((temp_v0 != 0) && (temp_v0 != 1)) {
            goto block_6;
        }
    } else if (arg1 != arg0->unk_250) {
block_6:
        phi_v1 = 1;
    }
    temp_a0 = arg0 + 0x144;
    if (phi_v1 != 0) {
        arg0->unk_250 = arg1;
        arg0 = arg0;
        temp_t0 = func_8013BC6C(temp_a0, D_80BFDF80, arg1);
        arg0->unk_238 = (f32) arg0->unk_160;
        phi_t0 = temp_t0;
    }
    return phi_t0;
}

void func_80BFD3A4(EnBjt *arg0, GlobalContext *arg1) {
    ? sp28;

    if ((arg0->unk_234 & 0x280) != 0) {
        Lib_Vec3f_TranslateAndRotateY(arg0 + 0x24, arg0->actor.shape.rot.y, &D_80BFDFE0, (Vec3f *) &sp28);
        Math_Vec3f_ToVec3s(arg0 + 0x1D2, (Vec3f *) &sp28);
        arg0->unk_18C.dim.radius = 0x20;
        arg0->unk_18C.dim.height = (s16) (s32) (arg0->actor.focus.pos.y - arg0->actor.world.pos.y);
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x18C);
    }
}

? func_80BFD434(s8 arg0) {
    switch (arg0) {
    case 45:
        func_801149A0(0x2F, gItemSlots[0x2F]);
        break;
    case 47:
        func_801149A0(0x2A, gItemSlots[0x2A]);
        break;
    case 48:
        func_801149A0(0x2B, gItemSlots[0x2B]);
        break;
    case 49:
        func_801149A0(0x2C, gItemSlots[0x2C]);
        break;
    case 43:
        func_801149A0(0x29, gItemSlots[0x29]);
        break;
    case 51:
        func_801149A0(0x2E, gItemSlots[0x2E]);
        break;
    }
    return 0;
}

s32 func_80BFD4FC(Actor *arg0) {
    s32 sp24;
    f32 temp_f0;
    u16 temp_t0;

    sp24 = 0;
    if (arg0->unk_248 == 0) {
        Audio_PlayActorSound2(arg0, 0x28D0U);
        arg0->unk_248 = 1;
    }
    Math_ApproachF((f32 *) &arg0->scale, 0.017f, 0.21f, 0.3f);
    if ((0.017f - arg0->scale.x) < 0.00017000001f) {
        arg0->scale.x = 0.017f;
        temp_t0 = arg0->unk_234 | 0x200;
        arg0->unk_234 = temp_t0;
        arg0->unk_234 = (u16) (temp_t0 & 0xFF7F);
        sp24 = 1;
    }
    temp_f0 = (arg0->scale.x / 0.017f) * 4.0f;
    arg0->unk_23C = temp_f0;
    arg0->world.pos.y = arg0->home.pos.y + temp_f0;
    Actor_SetScale(arg0, arg0->scale.x);
    return sp24;
}

s32 func_80BFD5E4(Actor *arg0) {
    s32 sp24;
    f32 temp_f0;

    sp24 = 0;
    if (arg0->unk_248 == 0) {
        Audio_PlayActorSound2(arg0, 0x28D1U);
        arg0->unk_248 = 1;
    }
    Math_ApproachF((f32 *) &arg0->scale, 0.0f, 0.21f, 0.3f);
    if (arg0->scale.x < 0.00017000001f) {
        arg0->unk_234 = (u16) (arg0->unk_234 & 0xFEFF);
        arg0->scale.x = 0.0f;
        sp24 = 1;
    }
    temp_f0 = (arg0->scale.x / 0.017f) * 4.0f;
    arg0->unk_23C = temp_f0;
    arg0->world.pos.y = arg0->home.pos.y + temp_f0;
    Actor_SetScale(arg0, arg0->scale.x);
    return sp24;
}

s32 func_80BFD6BC(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s32 sp20;
    s16 temp_v0_3;
    s32 temp_v0_2;
    s8 temp_a0;
    u16 temp_t6;
    u8 temp_v0;
    void *temp_v1;
    s16 phi_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp20 = 0;
    temp_t6 = arg0->unk_240;
    switch (temp_t6) {
    case 0:
        temp_v0 = func_80152498(arg1 + 0x4908);
        if ((temp_v0 != 4) && (temp_v0 != 5)) {
            if (temp_v0 != 0x10) {

            } else {
                goto block_7;
            }
        } else if (func_80147624(arg1) != 0) {
block_7:
            temp_v0_2 = func_80123810(arg1);
            if ((temp_v0_2 == 0x2B) || (temp_v0_2 == 0x2D) || (temp_v0_2 == 0x2F) || (temp_v0_2 == 0x30) || (temp_v0_2 == 0x31) || (temp_v0_2 == 0x33)) {
                func_80BFD30C(arg0, 1);
                arg0->unk_248 = 0;
                arg0->unk_240 = (u16) ((s16) arg0->unk_240 + 1);
                sp20 = 1;
            } else if (temp_v0_2 < 0) {
                arg0->unk_248 = 0;
                arg0->unk_240 = (u16) ((s16) arg0->unk_240 + 1);
                sp20 = 3;
            } else if (temp_v0_2 != 0) {
                arg0->unk_248 = 0;
                arg0->unk_240 = (u16) ((s16) arg0->unk_240 + 1);
                sp20 = 2;
            }
        }
        break;
    case 1:
        temp_a0 = temp_v1->unk_A87;
        if (temp_a0 != 0) {
            sp2C = temp_v1;
            func_80BFD434(temp_a0);
            temp_v1->unk_A87 = 0;
        }
        if (func_80BFD5E4(arg0) != 0) {
            arg0->unk_242 = 0x3C;
            arg0->unk_240 = (u16) ((s16) arg0->unk_240 + 1);
            sp20 = 1;
        }
        break;
    case 2:
        temp_v0_3 = arg0->unk_242;
        if (temp_v0_3 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_242 = (s16) (temp_v0_3 - 1);
            phi_v1 = arg0->unk_242;
        }
        if (phi_v1 == 0) {
            func_80BFD30C(arg0, 5);
            arg0->unk_248 = 0;
            arg0->unk_240 = (u16) ((s16) arg0->unk_240 + 1);
        } else if (arg0->unk_242 == 0xA) {
            Audio_PlayActorSound2(arg0, 0x2897U);
        }
        break;
    case 3:
        if (func_80BFD4FC(arg0) != 0) {
            arg0->unk_240 = (u16) ((s16) arg0->unk_240 + 1);
            sp20 = 1;
        }
        break;
    case 4:
        func_80BFD30C(arg0, 4);
        arg0->unk_240 = (u16) ((s16) arg0->unk_240 + 1);
        sp20 = 1;
        break;
    }
    return sp20;
}

s32 func_80BFD8F0(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    Actor *temp_a0;
    u16 *temp_a0_2;
    s32 phi_v1;

    temp_a0 = arg0;
    phi_v1 = 0;
    if ((arg0->unk_234 & 7) != 0) {
        sp1C = 0;
        arg0 = arg0;
        phi_v1 = sp1C;
        if (func_800B84D0(temp_a0, arg1) != 0) {
            temp_a0_2 = arg0 + 0x234;
            arg0->unk_234 = (u16) (arg0->unk_234 | 8);
            arg0 = arg0;
            func_8013AED4(temp_a0_2, 0U, 7U);
            arg0->unk_24C = func_80BFD6BC;
            arg0->unk_240 = 0;
            arg0->unk_188 = func_80BFDA48;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

? func_80BFD984(EnBjt *arg0, GlobalContext *arg1) {
    u16 sp1A;
    u16 temp_v0;
    u16 temp_v1;
    u16 phi_v1;

    temp_v1 = arg1->msgCtx.unk11F04;
    phi_v1 = temp_v1;
    if ((arg1->actorCtx.actorList[2].first->unk_A6C & 0x440) != 0) {
        arg0->unk_234 |= 0x10;
        if (temp_v1 != arg0->unk_236) {
            if (temp_v1 != 0x2949) {
                if (temp_v1 != 0x294A) {

                } else {
                    sp1A = temp_v1;
                    func_80BFD30C((Actor *)3);
                    goto block_7;
                }
            } else {
                sp1A = temp_v1;
                func_80BFD30C((Actor *)2);
block_7:
                phi_v1 = arg1->msgCtx.unk11F04;
            }
        }
        arg0->unk_236 = phi_v1;
    } else {
        temp_v0 = arg0->unk_234;
        if ((temp_v0 & 0x10) != 0) {
            arg0->unk_234 = temp_v0 & 0xFFEF;
            func_80BFD30C(NULL);
        }
    }
    return 0;
}

void func_80BFDA48(EnBjt *this, GlobalContext *globalCtx) {
    s16 sp2E;

    sp2E = this->actor.yawTowardsPlayer;
    if (func_8010BF58((Actor *) this, globalCtx, D_80BFDEB4, this->unk_24C, &this->unk_1DC) != 0) {
        this->actor.flags &= -0x101;
        func_8013AED4(&this->unk_234, 3U, 7U);
        this->unk_234 &= 0xFFF7;
        this->unk_1DC = 0;
        this->actionFunc = func_80BFDAE8;
        return;
    }
    Math_ApproachS(&this->actor.shape.rot.y, sp2E, 4, 0x2AA8);
}

void func_80BFDAE8(EnBjt *this, GlobalContext *globalCtx) {
    u8 sp28;
    u16 temp_t4;
    u16 temp_v0;

    if (func_80133038(globalCtx, &D_80BFDEA0, (struct_80133038_arg2 *) &sp28) == 0) {
        sp28 = 0;
    }
    if (sp28 == 1) {
        temp_v0 = this->unk_234;
        if ((temp_v0 & 0x80) != 0) {
            if (func_80BFD4FC((Actor *) this) != 0) {
                func_8013AED4(&this->unk_234, 3U, 7U);
            }
        } else if ((temp_v0 & 0x100) != 0) {
            func_80BFD5E4((Actor *) this);
        } else if ((temp_v0 & 0x200) != 0) {
            if ((fabsf(this->actor.yDistToPlayer) > 70.0f) || (this->actor.xzDistToPlayer > 140.0f) || ((gSaveContext.weekEventReg[90] & 0x80) != 0)) {
                func_8013AED4(&this->unk_234, 0U, 7U);
                this->unk_248 = 0;
                temp_t4 = this->unk_234 & 0xFDFF;
                this->unk_234 = temp_t4;
                this->unk_234 = temp_t4 | 0x100;
            }
        } else if ((fabsf(this->actor.yDistToPlayer) < 20.0f) && (this->actor.xzDistToPlayer < 70.0f) && ((gSaveContext.weekEventReg[90] & 0x80) == 0)) {
            this->unk_234 = temp_v0 | 0x80;
            this->unk_248 = 0;
        }
        this->unk_1D8 = sp28;
        return;
    }
    this->actor.flags |= 0x8000000;
    Actor_SetScale((Actor *) this, 0.0f);
    this->unk_234 = 0;
    this->unk_24C = NULL;
    this->unk_1D8 = 0;
}

void EnBjt_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBjt *this = (EnBjt *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06002390, NULL, &this->unk_1E0, &this->unk_20A, 7);
    this->unk_250 = -1;
    func_80BFD30C((Actor *) this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_18C, (Actor *) this, &D_80BFDF48);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80BFDF74);
    this->actor.flags |= 0x8000000;
    Actor_SetScale((Actor *) this, 0.0f);
    this->unk_1D8 = 0;
    this->unk_234 = 0;
    this->actionFunc = func_80BFDAE8;
}

void EnBjt_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBjt *this = (EnBjt *) thisx;

}

void EnBjt_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBjt *this = (EnBjt *) thisx;
    func_80BFD8F0((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80BFD984(this, globalCtx);
    if (this->unk_1D8 != 0) {
        func_80BFD2E0(this);
        func_8013C964((Actor *) this, globalCtx, 60.0f, 10.0f, 0, (s16) (this->unk_234 & 7));
        Actor_SetHeight((Actor *) this, 26.0f);
        func_80BFD3A4(this, globalCtx);
    }
}

void EnBjt_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBjt *this = (EnBjt *) thisx;
    if (this->unk_1D8 != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, NULL, (Actor *) this);
    }
}
