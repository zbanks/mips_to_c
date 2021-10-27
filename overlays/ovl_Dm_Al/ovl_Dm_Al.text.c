typedef struct DmAl {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(DmAl *, GlobalContext *);
    /* 0x18C */ MtxF unk_18C;                       /* inferred */
    /* 0x1CC */ char pad_1CC[0x140];                /* maybe part of unk_18C[6]? */
    /* 0x30C */ Vec3s unk_30C;                      /* inferred */
    /* 0x312 */ char pad_312[0x9C];                 /* maybe part of unk_30C[27]? */
    /* 0x3AE */ Vec3s unk_3AE;                      /* inferred */
    /* 0x3B4 */ char pad_3B4[0x9C];                 /* maybe part of unk_3AE[27]? */
    /* 0x450 */ u8 unk_450;                         /* inferred */
    /* 0x451 */ char pad_451[0x3];                  /* maybe part of unk_450[4]? */
    /* 0x454 */ s32 unk_454;                        /* inferred */
    /* 0x458 */ s32 unk_458;                        /* inferred */
    /* 0x45C */ s32 unk_45C;                        /* inferred */
} DmAl;                                             /* size = 0x460 */

struct _mips2c_stack_DmAl_Destroy {};               /* size 0x0 */

struct _mips2c_stack_DmAl_Draw {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_DmAl_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_DmAl_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C1BD90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1BDD8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x14];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C1C028 {};              /* size 0x0 */

struct _mips2c_stack_func_80C1C064 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1C11C {};              /* size 0x0 */

s32 func_80C1BD90(DmAl *arg0, s32 arg1, u32, DmAl *); /* static */
s32 func_80C1C028(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80C1C064(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80C1C11C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_0600A0D8;
static ActorAnimationEntryS D_80C1C270 = {(AnimationHeader *)0x600DBE0, 1.0f, 0, 0xFFFF, 0, 0};
static ? D_80C1C280;                                /* unable to generate initializer */
static ? D_80C1C294;                                /* unable to generate initializer */
static ? D_80C1C2AC;                                /* unable to generate initializer */

s32 func_80C1BD90(DmAl *arg0, s32 arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if (arg1 != arg0->unk_454) {
        arg0->unk_454 = arg1;
        phi_v1 = func_8013BC6C(arg0 + 0x144, &D_80C1C270, arg1);
    }
    return phi_v1;
}

void func_80C1BDD8(DmAl *this, GlobalContext *globalCtx) {
    ? sp2C;
    u32 sp24;
    DmAl *temp_a0;
    DmAl *temp_a3;
    u16 temp_v1;
    u32 temp_a2;
    u32 temp_v0;
    Actor *phi_a3;
    u32 phi_a2;

    sp2C.unk_0 = (s32) D_80C1C280.unk_0;
    sp2C.unk_4 = (s32) D_80C1C280.unk_4;
    sp2C.unk_8 = (s32) D_80C1C280.unk_8;
    sp2C.unk_C = (s32) D_80C1C280.unk_C;
    sp2C.unk_10 = (s32) D_80C1C280.unk_10;
    if (globalCtx->csCtx.state != 0) {
        if (this->unk_45C == 0) {
            this->unk_450 = 0xFF;
            this->unk_45C = 1;
            this->unk_458 = this->unk_454;
        }
        this = this;
        if (func_800EE29C(globalCtx, 0x232U) != 0) {
            this = this;
            temp_v0 = func_800EE200(globalCtx, 0x232U);
            temp_a3 = this;
            temp_a2 = temp_v0;
            temp_v1 = globalCtx->csCtx.npcActions[temp_v0]->unk0;
            temp_a0 = temp_a3;
            phi_a3 = (Actor *) temp_a3;
            phi_a2 = temp_a2;
            if ((temp_v1 & 0xFF) != temp_a3->unk_450) {
                temp_a3->unk_450 = (u8) temp_v1;
                this = temp_a3;
                sp24 = temp_v0;
                func_80C1BD90(temp_a0, (sp + (temp_v1 * 4))->unk_2C, temp_a2, temp_a3);
                phi_a3 = (Actor *) this;
                phi_a2 = sp24;
            }
            func_800EDF24(phi_a3, globalCtx, phi_a2);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (this->unk_45C != 0) {
        this->unk_45C = 0;
        func_80C1BD90(this, this->unk_458);
    }
}

void DmAl_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmAl *this = (DmAl *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_0600A0D8, NULL, &this->unk_30C, &this->unk_3AE, 0x1B);
    this->unk_454 = -1;
    func_80C1BD90(this, 0);
    this->actor.flags &= -2;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = func_80C1BDD8;
}

void DmAl_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmAl *this = (DmAl *) thisx;

}

void DmAl_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmAl *this = (DmAl *) thisx;
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
}

s32 func_80C1C028(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    switch (arg1) {
    case 3:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        *arg2 = NULL;
        break;
    }
    return 0;
}

void func_80C1C064(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    switch (arg1) {
    case 3:
        SysMatrix_CopyCurrentState(arg4 + 0x18C);
        return;
    case 11:
        SysMatrix_CopyCurrentState(arg4 + 0x1CC);
        return;
    case 12:
        SysMatrix_CopyCurrentState(arg4 + 0x20C);
        return;
    case 13:
        SysMatrix_CopyCurrentState(arg4 + 0x24C);
        return;
    case 14:
        SysMatrix_CopyCurrentState(arg4 + 0x28C);
        return;
    case 15:
        SysMatrix_CopyCurrentState(arg4 + 0x2CC);
        /* fallthrough */
    default:
        return;
    }
}

void func_80C1C11C(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void DmAl_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ? *temp_s1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s3;
    MtxF *phi_s2;
    ? *phi_s1;
    DmAl *this = (DmAl *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s3 = temp_a0;
    func_8012C28C(temp_a0);
    func_801343C0(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80C1C028, func_80C1C064, func_80C1C11C, (Actor *) this);
    phi_s2 = &this->unk_18C;
    phi_s1 = &D_80C1C294;
    do {
        SysMatrix_SetCurrentState(phi_s2);
        temp_v0 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s3->polyOpa.p;
        temp_s1 = phi_s1 + 4;
        temp_s3->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = temp_s1->unk_-4;
        phi_s2 = &phi_s2[1];
        phi_s1 = temp_s1;
    } while (temp_s1 != &D_80C1C2AC);
}
