void func_80A38190(SkelAnime *arg0, void *arg1, s32 arg2, s16); /* static */
void func_80A3830C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A38468(DmZl *arg0);                     /* static */
s32 func_80A3862C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80A38648(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern ? D_0600DE08;
extern FlexSkeletonHeader D_0600E038;
static ? D_80A387F0;                                /* unable to generate initializer */
static ? D_80A38898;                                /* unable to generate initializer */
static ? D_80A388A8;                                /* unable to generate initializer */

typedef struct DmZl {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ char pad188[0xD8];
    /* 0x0260 */ void (*actionFunc)(DmZl *, GlobalContext *);
    /* 0x0264 */ char pad264[0x4C];                 /* maybe part of actionFunc[20]? */
    /* 0x02B0 */ s16 unk2B0;                        /* inferred */
    /* 0x02B2 */ u8 unk2B2;                         /* inferred */
    /* 0x02B3 */ u8 unk2B3;                         /* inferred */
    /* 0x02B4 */ u8 unk2B4;                         /* inferred */
    /* 0x02B5 */ u8 unk2B5;                         /* inferred */
    /* 0x02B6 */ u8 unk2B6;                         /* inferred */
    /* 0x02B7 */ char pad2B7[0x1];                  /* maybe part of unk2B6[2]? */
    /* 0x02B8 */ s16 unk2B8;                        /* inferred */
    /* 0x02BA */ s16 unk2BA;                        /* inferred */
    /* 0x02BC */ char pad2BC[0x18];                 /* maybe part of unk2BA[13]? */
} DmZl;                                             /* size 0x2D4 */

void func_80A38190(SkelAnime *arg0, void *arg1, s32 arg2) {
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

void DmZl_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmZl *this = (DmZl *) thisx;
    SkelAnime *sp34;
    SkelAnime *temp_a1;

    this->unk2B0 = 0;
    this->unk2BA = 0;
    this->actor.targetArrowOffset = 1000.0f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk144;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600E038, NULL, NULL, NULL, 0);
    func_80A38190(sp34, (this->unk2B0 * 0x18) + &D_80A387F0, 0);
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_80A382FC;
}

void DmZl_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmZl *this = (DmZl *) thisx;

}

void func_80A382FC(DmZl *this, GlobalContext *globalCtx) {

}

void func_80A3830C(Actor *arg0, GlobalContext *arg1) {
    u32 sp34;
    Actor *sp24;
    Actor *temp_a0_2;
    s16 temp_v0_2;
    s32 temp_t7;
    u16 temp_v1;
    u32 temp_v0;
    void *temp_a0;
    s16 phi_a3;

    if (func_800EE29C(arg1, 0x66U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x66U);
        temp_t7 = temp_v0 * 4;
        sp34 = temp_v0;
        temp_a0 = (arg1 + temp_t7)->unk1F4C;
        if (arg1->csCtx.frames == temp_a0->unk2) {
            temp_v1 = temp_a0->unk0;
            phi_a3 = 0;
            if (temp_v1 != 1) {
                if (temp_v1 != 2) {
                    if (temp_v1 != 3) {
                        if (temp_v1 != 4) {

                        } else {
                            phi_a3 = 5;
                        }
                    } else {
                        phi_a3 = 3;
                    }
                } else {
                    phi_a3 = 1;
                }
            }
            if (phi_a3 != arg0->unk2B0) {
                arg0->unk2B0 = phi_a3;
                func_80A38190(arg0 + 0x144, (arg0->unk2B0 * 0x18) + &D_80A387F0, 0, phi_a3);
            }
        }
        func_800EDF24(arg0, arg1, sp34);
    }
    temp_a0_2 = arg0 + 0x144;
    sp24 = temp_a0_2;
    if ((func_801378B8((SkelAnime *) temp_a0_2, arg0->unk154) != 0) && ((temp_v0_2 = arg0->unk2B0, (temp_v0_2 == 1)) || (temp_v0_2 == 3) || (temp_v0_2 == 5))) {
        arg0->unk2B0 = (s16) (temp_v0_2 + 1);
        func_80A38190((SkelAnime *) temp_a0_2, (arg0->unk2B0 * 0x18) + &D_80A387F0, 0);
    }
}

void func_80A38468(DmZl *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    u8 temp_t7;
    u8 temp_v0_3;

    temp_v0 = arg0->unk2B8;
    if ((s32) temp_v0 > 0) {
        arg0->unk2B8 = temp_v0 - 1;
    } else {
        arg0->unk2B8 = 0;
    }
    temp_v0_2 = arg0->unk2B8;
    if ((s32) temp_v0_2 < 3) {
        arg0->unk2B3 = (u8) temp_v0_2;
        arg0->unk2B2 = (u8) temp_v0_2;
    }
    temp_t7 = arg0->unk2B5;
    switch (temp_t7) {
    case 0:
        if (temp_v0_2 == 0) {
            arg0 = arg0;
            arg0->unk2B8 = Rand_S16Offset(0x1E, 0x1E);
        }
        break;
    case 1:
        if (temp_v0_2 == 0) {
            arg0->unk2B3 = 2;
            arg0->unk2B2 = 2;
        }
        break;
    case 2:
        if (temp_v0_2 == 0) {
            arg0->unk2B2 = 5;
            arg0->unk2B3 = 6;
        }
        break;
    case 3:
        if (temp_v0_2 == 0) {
            arg0->unk2B2 = 6;
            arg0->unk2B3 = 5;
        }
        break;
    case 4:
        if (temp_v0_2 == 0) {
            arg0->unk2B3 = 3;
            arg0->unk2B2 = 3;
        }
        break;
    case 5:
        if (temp_v0_2 == 0) {
            arg0->unk2B3 = 4;
            arg0->unk2B2 = 4;
        }
        break;
    case 6:
        if ((s32) temp_v0_2 >= 3) {
            arg0->unk2B8 = 0;
        }
        break;
    }
    temp_v0_3 = arg0->unk2B6;
    if (temp_v0_3 != 1) {
        if (temp_v0_3 != 2) {
            if (temp_v0_3 != 3) {
                arg0->unk2B4 = 0;
            } else {
                arg0->unk2B4 = 3;
            }
        } else {
            arg0->unk2B4 = 2;
        }
    } else {
        arg0->unk2B4 = 1;
    }
    if (arg0->unk2B0 == 6) {
        arg0->unk2B3 = 2;
        arg0->unk2B2 = 2;
    }
}

void DmZl_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmZl *this = (DmZl *) thisx;
    func_80A38468(this);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_80A3830C(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
}

s32 func_80A3862C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80A38648(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s16 temp_v1;
    void *temp_a0;
    void *temp_v0;

    if (arg1 == 0x10) {
        temp_v1 = arg4->unk2B0;
        if (((s32) temp_v1 >= 3) && ((s32) temp_v1 < 7)) {
            temp_v0 = *arg0;
            temp_a0 = temp_v0->unk2B0;
            temp_v0->unk2B0 = (void *) (temp_a0 + 8);
            temp_a0->unk4 = &D_0600DE08;
            temp_a0->unk0 = 0xDE000000;
        }
    }
}

void DmZl_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmZl *this = (DmZl *) thisx;
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_v1;

    temp_v1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_v1->polyOpa.p;
    temp_v1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp40 = temp_v1;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80A388A8 + (this->unk2B3 * 4)));
    temp_v0_2 = temp_v1->polyOpa.p;
    temp_v1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp40 = temp_v1;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80A388A8 + (this->unk2B2 * 4)));
    temp_v0_3 = temp_v1->polyOpa.p;
    temp_v1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060028;
    sp30 = temp_v0_3;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80A38898 + (this->unk2B4 * 4)));
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80A3862C, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80A38648, &this->actor);
}

