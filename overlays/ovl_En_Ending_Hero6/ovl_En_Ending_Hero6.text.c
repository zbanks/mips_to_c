typedef struct EnEndingHero6 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x72];                  /* maybe part of unk188[20]? */
    /* 0x200 */ Vec3s unk200;                       /* inferred */
    /* 0x206 */ char pad206[0x72];                  /* maybe part of unk200[20]? */
    /* 0x278 */ void (*actionFunc)(EnEndingHero6 *, GlobalContext *);
    /* 0x27C */ char pad27C[0x4];
    /* 0x280 */ s32 unk280;                         /* inferred */
    /* 0x284 */ s8 unk284;                          /* inferred */
    /* 0x285 */ char pad285[0x1];
    /* 0x286 */ s16 unk286;                         /* inferred */
    /* 0x288 */ s16 unk288;                         /* inferred */
    /* 0x28A */ s16 unk28A;                         /* inferred */
    /* 0x28C */ char pad28C[0x4];                   /* maybe part of unk28A[3]? */
    /* 0x290 */ s16 unk290;                         /* inferred */
    /* 0x292 */ char pad292[0x2];
} EnEndingHero6;                                    /* size = 0x294 */

struct _mips2c_stack_EnEndingHero6_Destroy {};      /* size 0x0 */

struct _mips2c_stack_EnEndingHero6_Draw {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x1C];                    /* maybe part of sp38[8]? */
    /* 0x58 */ GraphicsContext *sp58;               /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ char pad60[0x8];
};                                                  /* size = 0x68 */

struct _mips2c_stack_EnEndingHero6_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnEndingHero6_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C23D60 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C23DDC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C23E18 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C23F14 {};              /* size 0x0 */

void func_80C23D60(void *arg0, s32 arg1);           /* static */
void func_80C23DDC(EnEndingHero6 *arg0);            /* static */
void func_80C23F14(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
static ? D_80C24200;                                /* unable to generate initializer */
static ? D_80C24224;                                /* unable to generate initializer */
static ? D_80C24248;                                /* unable to generate initializer */
static ? D_80C2426C;                                /* unable to generate initializer */
static ? D_80C24280;                                /* unable to generate initializer */
static ? D_80C24294;                                /* unable to generate initializer */

void EnEndingHero6_Init(EnEndingHero6 *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    EnEndingHero6 *this = (EnEndingHero6 *) thisx;

    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    temp_v0 = this->unk280 * 4;
    SkelAnime_InitSV(globalCtx, &this->unk144, *(&D_80C24200 + temp_v0), *(&D_80C24224 + temp_v0), &this->unk188, &this->unk200, *(&D_80C24248 + temp_v0));
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    func_80C23DDC(this);
}

void EnEndingHero6_Destroy(EnEndingHero6 *this, GlobalContext *globalCtx) {
    EnEndingHero6 *this = (EnEndingHero6 *) thisx;

}

void func_80C23D60(void *arg0, s32 arg1) {
    f32 temp_f0;

    arg0->unk27C = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80C24224 + (arg1 * 4)));
    arg0->unk28C = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80C24224 + (arg0->unk27C * 4)), 1.0f, 0.0f, temp_f0, (u8) 0, 0.0f);
}

void func_80C23DDC(EnEndingHero6 *arg0) {
    func_80C23D60(arg0->unk280);
    arg0->unk290 = 1;
    arg0->actionFunc = func_80C23E18;
}

void func_80C23E18(EnEndingHero6 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk144);
}

void EnEndingHero6_Update(EnEndingHero6 *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnEndingHero6 *this = (EnEndingHero6 *) thisx;

    temp_v0 = this->unk286;
    if (temp_v0 != 0) {
        this->unk286 = temp_v0 - 1;
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if (this->unk288 == 0) {
        this->unk28A += 1;
        if ((s32) this->unk28A >= 3) {
            this->unk28A = 0;
            this->unk288 = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
}

void func_80C23F14(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s32 temp_v1;
    void *temp_a1;
    void *temp_v0;

    temp_v1 = arg4->unk280;
    temp_v0 = *arg0;
    if ((temp_v1 >= 4) && (arg1 == 0xF)) {
        temp_a1 = temp_v0->unk2B0;
        temp_v0->unk2B0 = (void *) (temp_a1 + 8);
        temp_a1->unk0 = 0xDE000000;
        temp_a1->unk4 = (s32) *(&D_80C2426C + ((temp_v1 - 4) * 4));
    }
}

void EnEndingHero6_Draw(EnEndingHero6 *this, GlobalContext *globalCtx) {
    s32 sp5C;
    GraphicsContext *sp58;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    s16 temp_v0_9;
    s32 temp_v0_2;
    s8 temp_a1;
    EnEndingHero6 *this = (EnEndingHero6 *) thisx;

    sp5C = 0;
    if (this->unk290 == 1) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp58 = temp_a0;
        func_8012C28C(temp_a0);
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_a1 = this->unk284;
        if ((s32) temp_a1 >= 0) {
            sp58 = sp58;
            if (Object_IsLoaded(&globalCtx->objectCtx, (s32) temp_a1) != 0) {
                temp_v0 = sp58->polyOpa.p;
                sp58->polyOpa.p = temp_v0 + 8;
                temp_v0->words.w0 = 0xDB060018;
                temp_v0->words.w1 = (u32) globalCtx->objectCtx.status[this->unk284].segment;
                temp_v0_2 = this->unk280;
                switch (temp_v0_2) {
                case 4:
                    temp_v0_3 = sp58->polyOpa.p;
                    sp58->polyOpa.p = temp_v0_3 + 8;
                    temp_v0_3->words.w0 = 0xFB000000;
                    temp_v0_3->words.w1 = 0xAA0A46FF;
block_10:
                    break;
                case 5:
                    temp_v0_4 = sp58->polyOpa.p;
                    sp58->polyOpa.p = temp_v0_4 + 8;
                    temp_v0_4->words.w0 = 0xFB000000;
                    temp_v0_4->words.w1 = 0xAAC8FFFF;
                    goto block_10;
                case 6:
                    temp_v0_5 = sp58->polyOpa.p;
                    sp58->polyOpa.p = temp_v0_5 + 8;
                    temp_v0_5->words.w0 = 0xFB000000;
                    temp_v0_5->words.w1 = 0xE646FF;
                    goto block_10;
                case 7:
                    temp_v0_6 = sp58->polyOpa.p;
                    sp58->polyOpa.p = temp_v0_6 + 8;
                    temp_v0_6->words.w0 = 0xFB000000;
                    temp_v0_6->words.w1 = 0xC80096FF;
                    goto block_10;
                case 8:
                    temp_v0_7 = sp58->polyOpa.p;
                    sp58->polyOpa.p = temp_v0_7 + 8;
                    temp_v0_7->words.w0 = 0xFB000000;
                    temp_v0_7->words.w1 = 0xF59B00FF;
                    goto block_10;
                }
                if (this->unk280 == 0) {
                    temp_v0_8 = sp58->polyOpa.p;
                    sp58->polyOpa.p = temp_v0_8 + 8;
                    temp_v0_8->words.w0 = 0xDB060020;
                    sp58 = sp58;
                    sp38 = temp_v0_8;
                    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80C24280 + (this->unk28A * 4)));
                    temp_v0_9 = this->unk28A;
                    if ((s32) temp_v0_9 < 3) {
                        sp5C = (s32) temp_v0_9;
                    }
                    temp_v0_10 = sp58->polyOpa.p;
                    sp58->polyOpa.p = temp_v0_10 + 8;
                    temp_v0_10->words.w0 = 0xDB060024;
                    sp34 = temp_v0_10;
                    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80C24294 + (sp5C * 4)));
                }
                SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80C23F14, (Actor *) this);
            }
        }
    }
}
