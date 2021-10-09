s32 func_80C1BD90(DmAl *arg0, s32 arg1, u32, DmAl *); /* static */
s32 func_80C1C028(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80C1C064(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80C1C11C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_0600A0D8;
static ActorAnimationEntryS D_80C1C270 = {(AnimationHeader *)0x600DBE0, 1.0f, 0, 0xFFFF, 0, 0};
static ? D_80C1C280;                                /* unable to generate initializer */
static ? D_80C1C294;                                /* unable to generate initializer */
static ? D_80C1C2AC;                                /* unable to generate initializer */

typedef struct DmAl {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(DmAl *, GlobalContext *);
    /* 0x018C */ MtxF unk18C;                       /* inferred */
    /* 0x01CC */ char pad1CC[0x140];                /* maybe part of unk18C[6]? */
    /* 0x030C */ Vec3s unk30C;                      /* inferred */
    /* 0x0312 */ char pad312[0x9C];                 /* maybe part of unk30C[27]? */
    /* 0x03AE */ Vec3s unk3AE;                      /* inferred */
    /* 0x03B4 */ char pad3B4[0x9C];                 /* maybe part of unk3AE[27]? */
    /* 0x0450 */ u8 unk450;                         /* inferred */
    /* 0x0451 */ char pad451[0x3];                  /* maybe part of unk450[4]? */
    /* 0x0454 */ s32 unk454;                        /* inferred */
    /* 0x0458 */ s32 unk458;                        /* inferred */
    /* 0x045C */ s32 unk45C;                        /* inferred */
} DmAl;                                             /* size 0x460 */

s32 func_80C1BD90(DmAl *arg0, s32 arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if (arg1 != arg0->unk454) {
        arg0->unk454 = arg1;
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

    sp2C.unk0 = (s32) D_80C1C280.unk0;
    sp2C.unk4 = (s32) D_80C1C280.unk4;
    sp2C.unk8 = (s32) D_80C1C280.unk8;
    sp2C.unkC = (s32) D_80C1C280.unkC;
    sp2C.unk10 = (s32) D_80C1C280.unk10;
    if (globalCtx->csCtx.state != 0) {
        if (this->unk45C == 0) {
            this->unk450 = 0xFF;
            this->unk45C = 1;
            this->unk458 = this->unk454;
        }
        this = this;
        if (func_800EE29C(globalCtx, 0x232U) != 0) {
            this = this;
            temp_v0 = func_800EE200(globalCtx, 0x232U);
            temp_a3 = this;
            temp_a2 = temp_v0;
            temp_v1 = globalCtx->csCtx.npcActions[temp_v0]->unk0;
            temp_a0 = temp_a3;
            phi_a3 = &temp_a3->actor;
            phi_a2 = temp_a2;
            if ((temp_v1 & 0xFF) != temp_a3->unk450) {
                temp_a3->unk450 = (u8) temp_v1;
                this = temp_a3;
                sp24 = temp_v0;
                func_80C1BD90(temp_a0, (sp + (temp_v1 * 4))->unk2C, temp_a2, temp_a3);
                phi_a3 = &this->actor;
                phi_a2 = sp24;
            }
            func_800EDF24(phi_a3, globalCtx, phi_a2);
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    if (this->unk45C != 0) {
        this->unk45C = 0;
        func_80C1BD90(this, this->unk458);
    }
}

void DmAl_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmAl *this = (DmAl *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600A0D8, NULL, &this->unk30C, &this->unk3AE, 0x1B);
    this->unk454 = -1;
    func_80C1BD90(this, 0);
    this->actor.flags &= -2;
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_80C1BDD8;
}

void DmAl_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmAl *this = (DmAl *) thisx;

}

void DmAl_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmAl *this = (DmAl *) thisx;
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 12.0f, 0.0f, 4U);
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
        // fallthrough
    default:
        return;
    }
}

void func_80C1C11C(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void DmAl_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmAl *this = (DmAl *) thisx;
    ? *temp_s1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s3;
    MtxF *phi_s2;
    ? *phi_s1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s3 = temp_a0;
    func_8012C28C(temp_a0);
    func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80C1C028, func_80C1C064, func_80C1C11C, &this->actor);
    phi_s2 = &this->unk18C;
    phi_s1 = &D_80C1C294;
    do {
        SysMatrix_SetCurrentState(phi_s2);
        temp_v0 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s3->polyOpa.p;
        temp_s1 = phi_s1 + 4;
        temp_s3->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = temp_s1->unk-4;
        phi_s2 += 0x40;
        phi_s1 = temp_s1;
    } while (temp_s1 != &D_80C1C2AC);
}

