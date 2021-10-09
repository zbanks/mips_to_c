typedef struct DmChar04 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x54];                 /* maybe part of unk_188[15]? */
    /* 0x1E2 */ Vec3s unk_1E2;                      /* inferred */
    /* 0x1E8 */ char pad_1E8[0x54];                 /* maybe part of unk_1E2[15]? */
    /* 0x23C */ void (*actionFunc)(DmChar04 *, GlobalContext *);
    /* 0x240 */ f32 unk_240;                        /* inferred */
    /* 0x244 */ f32 unk_244;                        /* inferred */
    /* 0x248 */ f32 unk_248;                        /* inferred */
    /* 0x24C */ f32 unk_24C;                        /* inferred */
    /* 0x250 */ f32 unk_250;                        /* inferred */
    /* 0x254 */ f32 unk_254;                        /* inferred */
    /* 0x258 */ f32 unk_258;                        /* inferred */
    /* 0x25C */ s32 unk_25C;                        /* inferred */
    /* 0x260 */ u8 unk_260;                         /* inferred */
    /* 0x261 */ u8 unk_261;                         /* inferred */
    /* 0x262 */ u16 unk_262;                        /* inferred */
} DmChar04;                                         /* size = 0x264 */

struct _mips2c_stack_DmChar04_Destroy {};           /* size 0x0 */

struct _mips2c_stack_DmChar04_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x20];                   /* maybe part of sp30[9]? */
    /* 0x54 */ GraphicsContext *sp54;               /* inferred */
    /* 0x58 */ char pad_58[0x10];
};                                                  /* size = 0x68 */

struct _mips2c_stack_DmChar04_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ ActorShape *sp38;                    /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_DmChar04_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AABC40 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AABE34 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x2];
    /* 0x26 */ u16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AABF74 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

void func_80AABC40(SkelAnime *arg0, ? *arg1, s32 arg2, u32); /* static */
void func_80AABE34(DmChar04 *, GlobalContext *);    /* static */
s32 func_80AABF74(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
extern SkeletonHeader D_0402AF58;
static ? D_80AAC460;                                /* unable to generate initializer */
static ? D_80AAC490;                                /* unable to generate initializer */
static ? D_80AAC4C0;                                /* unable to generate initializer */
static Vec3f D_80AAC4F0 = {0.0f, 0.0f, 0.0f};

void func_80AABC40(SkelAnime *arg0, ? *arg1, s32 arg2) {
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

void DmChar04_Init(Actor *thisx, GlobalContext *globalCtx) {
    ActorShape *sp38;
    SkelAnime *sp34;
    ActorShape *temp_a0;
    SkelAnime *temp_a1;
    void *temp_t5;
    void *temp_t9;
    DmChar04 *this = (DmChar04 *) thisx;

    temp_t9 = (this->actor.params * 0x10) + &D_80AAC490;
    this->unk_240 = temp_t9->unk_0;
    this->unk_244 = temp_t9->unk_4;
    temp_t5 = (this->actor.params * 0x10) + &D_80AAC4C0;
    this->unk_248 = temp_t9->unk_8;
    this->unk_24C = temp_t9->unk_C;
    temp_a0 = &this->actor.shape;
    this->unk_250 = temp_t5->unk_0;
    this->unk_254 = temp_t5->unk_4;
    this->unk_258 = temp_t5->unk_8;
    this->unk_25C = temp_t5->unk_C;
    this->unk_260 = 0x63;
    this->unk_262 = this->actor.params << 0xB;
    this->actor.targetArrowOffset = 3000.0f;
    sp38 = temp_a0;
    ActorShape_Init(temp_a0, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk_144;
    sp34 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_0402AF58, (AnimationHeader *) &D_04029140, &this->unk_188, &this->unk_1E2, 7);
    ActorShape_Init(temp_a0, 0.0f, NULL, 15.0f);
    func_80AABC40(sp34, &D_80AAC460, 0);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = func_80AABE34;
}

void DmChar04_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmChar04 *this = (DmChar04 *) thisx;

}

void func_80AABE34(DmChar04 *arg0, GlobalContext *arg1) {
    u16 sp26;
    u32 sp20;
    CsCmdActorAction *temp_a0;
    u16 temp_a1;
    u16 temp_a1_2;
    u32 temp_a3;
    u32 temp_v0;
    void *temp_v1;

    temp_a1 = (arg0->actor.params + 0x71) & 0xFFFF;
    sp26 = temp_a1;
    if (func_800EE29C(arg1, (u32) temp_a1) != 0) {
        temp_v0 = func_800EE200(arg1, (u32) temp_a1);
        temp_v1 = arg1 + (temp_v0 * 4);
        temp_a0 = arg1->csCtx.npcActions[temp_v0];
        temp_a3 = temp_v0;
        if (arg1->csCtx.frames == temp_a0->startFrame) {
            temp_a1_2 = temp_a0->unk0;
            if (arg0->unk_260 != temp_a1_2) {
                arg0->unk_260 = (u8) temp_a1_2;
                if (*temp_v1->unk_1F4C == 1) {

                }
                arg0->unk_261 = 0;
                sp20 = temp_a3;
                func_80AABC40(&arg0->unk_144, (arg0->unk_261 * 0x18) + &D_80AAC460, 0, temp_a3);
            }
        }
        func_800EDF24((Actor *) arg0, arg1, temp_a3);
        return;
    }
    arg0->unk_260 = 0x63;
}

void DmChar04_Update(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    DmChar04 *this = (DmChar04 *) thisx;

    temp_a0 = &this->unk_144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    this->actionFunc(this, globalCtx);
    this->unk_262 += 1;
}

s32 func_80AABF74(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 sp28;
    f32 sp1C;

    if (arg1 == 6) {
        sp28 = ((Math_SinS((s16) (arg5->unk_262 << 0xC)) * 0.1f) + 1.0f) * 0.012f * (arg5->unk_58 * 124.99999f);
        SysMatrix_MultiplyVector3fByState(&D_80AAC4F0, (Vec3f *) &sp1C);
        SysMatrix_InsertTranslation(sp1C, sp20, sp24, 0);
        Matrix_Scale(sp28, sp28, sp28, 1);
    }
    return 0;
}

void DmChar04_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp54;
    Gfx *sp30;
    Gfx *temp_a2;
    Gfx *temp_t8;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    s32 temp_a0_3;
    s32 phi_a0;
    DmChar04 *this = (DmChar04 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_a2 = temp_a0->polyOpa.d - 0x20;
    temp_a0->polyOpa.d = temp_a2;
    temp_a0_2 = globalCtx->state.gfxCtx;
    sp30 = temp_a2;
    sp54 = temp_a0_2;
    func_8012C94C(temp_a0_2);
    temp_a0_3 = (this->unk_262 * 0x32) & 0x1FF;
    phi_a0 = temp_a0_3;
    if (temp_a0_3 >= 0x100) {
        phi_a0 = 0x1FF - temp_a0_3;
    }
    temp_v0 = sp54->polyXlu.p;
    sp54->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = (u32) temp_a2;
    temp_v0->words.w0 = 0xDB060020;
    temp_v0_2 = temp_a2 + 8;
    temp_a2->words.w0 = 0xE7000000;
    temp_a2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xFA000001;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_2->words.w1 = ((u32) this->unk_240 << 0x18) | (((u32) this->unk_244 & 0xFF) << 0x10) | (((u32) this->unk_248 & 0xFF) << 8) | ((u32) (this->unk_24C * 1.0f) & 0xFF);
    temp_v0_3->words.w0 = 0xE200001C;
    temp_v0_3->words.w1 = 0xC184B50;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->words.w0 = 0xDF000000;
    temp_v0_4->words.w1 = 0;
    temp_v0_5 = sp54->polyXlu.p;
    sp54->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFB000000;
    temp_v0_5->words.w1 = ((s32) this->unk_250 << 0x18) | (((s32) this->unk_254 & 0xFF) << 0x10) | (((s32) this->unk_258 & 0xFF) << 8) | ((s32) ((f32) phi_a0 * 1.0f) & 0xFF);
    temp_v0_6 = sp54->polyXlu.p;
    sp54->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0x40;
    temp_v0_6->words.w0 = 0xE3001803;
    temp_t8 = sp54->polyXlu.p;
    sp54 = sp54;
    sp54->polyXlu.p = SkelAnime_Draw2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_80AABF74, NULL, (Actor *) this, temp_t8);
}
