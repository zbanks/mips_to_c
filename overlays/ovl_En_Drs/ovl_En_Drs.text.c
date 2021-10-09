void func_80C1E290(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C1E4B0(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80C1E568(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06000E70;
extern FlexSkeletonHeader D_06005A78;
static ColliderCylinderInit D_80C1E5E0 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x10, 0x3E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80C1E60C = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80C1E618 = {(AnimationHeader *)0x600001C, 1.0f, 0, 0xFFFF, 0, 0};

typedef struct EnDrs {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnDrs *, GlobalContext *);
    /* 0x018C */ ColliderCylinder unk18C;           /* inferred */
    /* 0x01D8 */ Vec3s unk1D8;                      /* inferred */
    /* 0x01DE */ char pad1DE[0x12];                 /* maybe part of unk1D8[4]? */
    /* 0x01F0 */ Vec3s unk1F0;                      /* inferred */
    /* 0x01F6 */ char pad1F6[0x12];                 /* maybe part of unk1F0[4]? */
    /* 0x0208 */ s8 unk208;                         /* inferred */
    /* 0x0209 */ char pad209[0x3];                  /* maybe part of unk208[4]? */
} EnDrs;                                            /* size 0x20C */

void func_80C1E290(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x18C;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
}

void func_80C1E2D4(EnDrs *this, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    s8 temp_a2;

    temp_a2 = this->unk208;
    if (((s32) temp_a2 >= 0) && (func_8013D8DC(temp_a2, globalCtx) != 0)) {
        ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
        temp_a1 = &this->unk144;
        sp30 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_06005A78, NULL, &this->unk1D8, &this->unk1F0, 4);
        func_8013BC6C(sp30, &D_80C1E618, 0);
        Collider_InitAndSetCylinder(globalCtx, &this->unk18C, &this->actor, &D_80C1E5E0);
        CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80C1E60C);
        Actor_SetScale(&this->actor, 0.01f);
        this->actor.draw = func_80C1E568;
        this->actionFunc = func_80C1E3DC;
    }
}

void func_80C1E3DC(EnDrs *this, GlobalContext *globalCtx) {

}

void EnDrs_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDrs *this = (EnDrs *) thisx;
    this->unk208 = func_8013D924(0x16, globalCtx);
    this->actionFunc = func_80C1E2D4;
}

void EnDrs_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDrs *this = (EnDrs *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk18C);
}

void EnDrs_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDrs *this = (EnDrs *) thisx;
    EnDrs *temp_a2;
    SkelAnime *temp_a0;

    temp_a2 = this;
    this = temp_a2;
    temp_a2->actionFunc(temp_a2, globalCtx);
    temp_a0 = &this->unk144;
    if (this->actor.draw != 0) {
        this = this;
        SkelAnime_FrameUpdateMatrix(temp_a0);
        func_80C1E290(&this->actor, globalCtx);
    }
}

void func_80C1E4B0(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a1;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;

    if (((gSaveContext.weekEventReg[87] & 2) == 0) && (arg1 == 2)) {
        temp_a1 = *arg0;
        temp_a3 = temp_a1->unk2B0;
        temp_a1->unk2B0 = (void *) (temp_a3 + 8);
        temp_a3->unk0 = 0xDB060018;
        temp_a3->unk4 = (s32) (arg0 + (arg4->unk208 * 0x44))->unk17D98;
        temp_a3_2 = temp_a1->unk2B0;
        temp_a1->unk2B0 = (void *) (temp_a3_2 + 8);
        temp_a3_2->unk4 = &D_06000E70;
        temp_a3_2->unk0 = 0xDE000000;
        temp_a3_3 = temp_a1->unk2B0;
        temp_a1->unk2B0 = (void *) (temp_a3_3 + 8);
        temp_a3_3->unk0 = 0xDB060018;
        temp_a3_3->unk4 = (s32) (arg0 + (arg4->objBankIndex * 0x44))->unk17D98;
    }
}

void func_80C1E568(Actor *this, GlobalContext *globalCtx) {
    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk148, this->unk164, (s32) this->unk146, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80C1E4B0, this);
}

