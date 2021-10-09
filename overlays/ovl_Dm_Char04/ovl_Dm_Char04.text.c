void func_80AABC40(SkelAnime *arg0, ? *arg1, s32 arg2, u32); /* static */
void func_80AABE34(DmChar04 *, GlobalContext *);    /* static */
s32 func_80AABF74(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
extern SkeletonHeader D_0402AF58;
static ? D_80AAC460;                                /* unable to generate initializer */
static ? D_80AAC490;                                /* unable to generate initializer */
static ? D_80AAC4C0;                                /* unable to generate initializer */
static Vec3f D_80AAC4F0 = {0.0f, 0.0f, 0.0f};

typedef struct DmChar04 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x54];                 /* maybe part of unk188[15]? */
    /* 0x01E2 */ Vec3s unk1E2;                      /* inferred */
    /* 0x01E8 */ char pad1E8[0x54];                 /* maybe part of unk1E2[15]? */
    /* 0x023C */ void (*actionFunc)(DmChar04 *, GlobalContext *);
    /* 0x0240 */ f32 unk240;                        /* inferred */
    /* 0x0244 */ f32 unk244;                        /* inferred */
    /* 0x0248 */ f32 unk248;                        /* inferred */
    /* 0x024C */ f32 unk24C;                        /* inferred */
    /* 0x0250 */ f32 unk250;                        /* inferred */
    /* 0x0254 */ f32 unk254;                        /* inferred */
    /* 0x0258 */ f32 unk258;                        /* inferred */
    /* 0x025C */ s32 unk25C;                        /* inferred */
    /* 0x0260 */ u8 unk260;                         /* inferred */
    /* 0x0261 */ u8 unk261;                         /* inferred */
    /* 0x0262 */ u16 unk262;                        /* inferred */
} DmChar04;                                         /* size 0x264 */

void func_80AABC40(SkelAnime *arg0, ? *arg1, s32 arg2) {
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

void DmChar04_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmChar04 *this = (DmChar04 *) thisx;
    ActorShape *sp38;
    SkelAnime *sp34;
    ActorShape *temp_a0;
    SkelAnime *temp_a1;
    void *temp_t5;
    void *temp_t9;

    temp_t9 = (this->actor.params * 0x10) + &D_80AAC490;
    this->unk240 = temp_t9->unk0;
    this->unk244 = temp_t9->unk4;
    temp_t5 = (this->actor.params * 0x10) + &D_80AAC4C0;
    this->unk248 = temp_t9->unk8;
    this->unk24C = temp_t9->unkC;
    temp_a0 = &this->actor.shape;
    this->unk250 = temp_t5->unk0;
    this->unk254 = temp_t5->unk4;
    this->unk258 = temp_t5->unk8;
    this->unk25C = temp_t5->unkC;
    this->unk260 = 0x63;
    this->unk262 = this->actor.params << 0xB;
    this->actor.targetArrowOffset = 3000.0f;
    sp38 = temp_a0;
    ActorShape_Init(temp_a0, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk144;
    sp34 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_0402AF58, (AnimationHeader *) &D_04029140, &this->unk188, &this->unk1E2, 7);
    ActorShape_Init(temp_a0, 0.0f, NULL, 15.0f);
    func_80AABC40(sp34, &D_80AAC460, 0);
    Actor_SetScale(&this->actor, 0.01f);
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
            if (arg0->unk260 != temp_a1_2) {
                arg0->unk260 = (u8) temp_a1_2;
                if (*temp_v1->unk1F4C == 1) {

                }
                arg0->unk261 = 0;
                sp20 = temp_a3;
                func_80AABC40(&arg0->unk144, (arg0->unk261 * 0x18) + &D_80AAC460, 0, temp_a3);
            }
        }
        func_800EDF24(&arg0->actor, arg1, temp_a3);
        return;
    }
    arg0->unk260 = 0x63;
}

void DmChar04_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmChar04 *this = (DmChar04 *) thisx;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    this->actionFunc(this, globalCtx);
    this->unk262 += 1;
}

s32 func_80AABF74(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 sp28;
    Vec3f sp1C;

    if (arg1 == 6) {
        sp28 = ((Math_SinS((s16) (arg5->unk262 << 0xC)) * 0.1f) + 1.0f) * 0.012f * (arg5->unk58 * 124.99999f);
        SysMatrix_MultiplyVector3fByState(&D_80AAC4F0, &sp1C);
        SysMatrix_InsertTranslation(sp1C.x, sp1C.y, sp1C.z, 0);
        Matrix_Scale(sp28, sp28, sp28, 1);
    }
    return 0;
}

void DmChar04_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmChar04 *this = (DmChar04 *) thisx;
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

    temp_a0 = globalCtx->state.gfxCtx;
    temp_a2 = temp_a0->polyOpa.d - 0x20;
    temp_a0->polyOpa.d = temp_a2;
    temp_a0_2 = globalCtx->state.gfxCtx;
    sp30 = temp_a2;
    sp54 = temp_a0_2;
    func_8012C94C(temp_a0_2);
    temp_a0_3 = (this->unk262 * 0x32) & 0x1FF;
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
    temp_v0_2->words.w1 = ((u32) this->unk240 << 0x18) | (((u32) this->unk244 & 0xFF) << 0x10) | (((u32) this->unk248 & 0xFF) << 8) | ((u32) (this->unk24C * 1.0f) & 0xFF);
    temp_v0_3->words.w0 = 0xE200001C;
    temp_v0_3->words.w1 = 0xC184B50;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->words.w0 = 0xDF000000;
    temp_v0_4->words.w1 = 0;
    temp_v0_5 = sp54->polyXlu.p;
    sp54->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFB000000;
    temp_v0_5->words.w1 = ((s32) this->unk250 << 0x18) | (((s32) this->unk254 & 0xFF) << 0x10) | (((s32) this->unk258 & 0xFF) << 8) | ((s32) ((f32) phi_a0 * 1.0f) & 0xFF);
    temp_v0_6 = sp54->polyXlu.p;
    sp54->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0x40;
    temp_v0_6->words.w0 = 0xE3001803;
    temp_t8 = sp54->polyXlu.p;
    sp54 = sp54;
    sp54->polyXlu.p = SkelAnime_Draw2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, func_80AABF74, NULL, &this->actor, temp_t8);
}

