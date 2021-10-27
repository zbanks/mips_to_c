typedef struct EnDrs {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnDrs *, GlobalContext *);
    /* 0x18C */ ColliderCylinder unk_18C;           /* inferred */
    /* 0x1D8 */ Vec3s unk_1D8;                      /* inferred */
    /* 0x1DE */ char pad_1DE[0x12];                 /* maybe part of unk_1D8[4]? */
    /* 0x1F0 */ Vec3s unk_1F0;                      /* inferred */
    /* 0x1F6 */ char pad_1F6[0x12];                 /* maybe part of unk_1F0[4]? */
    /* 0x208 */ s8 unk_208;                         /* inferred */
    /* 0x209 */ char pad_209[0x3];                  /* maybe part of unk_208[4]? */
} EnDrs;                                            /* size = 0x20C */

struct _mips2c_stack_EnDrs_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDrs_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDrs_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1E290 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C1E2D4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C1E3DC {};              /* size 0x0 */

struct _mips2c_stack_func_80C1E4B0 {};              /* size 0x0 */

struct _mips2c_stack_func_80C1E568 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

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

void func_80C1E290(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x18C;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
}

void func_80C1E2D4(EnDrs *this, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    s8 temp_a2;

    temp_a2 = this->unk_208;
    if (((s32) temp_a2 >= 0) && (func_8013D8DC(temp_a2, globalCtx) != 0)) {
        ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
        temp_a1 = &this->unk_144;
        sp30 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_06005A78, NULL, &this->unk_1D8, &this->unk_1F0, 4);
        func_8013BC6C(sp30, &D_80C1E618, 0);
        Collider_InitAndSetCylinder(globalCtx, &this->unk_18C, (Actor *) this, &D_80C1E5E0);
        CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80C1E60C);
        Actor_SetScale((Actor *) this, 0.01f);
        this->actor.draw = func_80C1E568;
        this->actionFunc = func_80C1E3DC;
    }
}

void func_80C1E3DC(EnDrs *this, GlobalContext *globalCtx) {

}

void EnDrs_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDrs *this = (EnDrs *) thisx;
    this->unk_208 = func_8013D924(0x16, globalCtx);
    this->actionFunc = func_80C1E2D4;
}

void EnDrs_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDrs *this = (EnDrs *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_18C);
}

void EnDrs_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDrs *temp_a2;
    SkelAnime *temp_a0;
    EnDrs *this = (EnDrs *) thisx;

    temp_a2 = this;
    this = temp_a2;
    temp_a2->actionFunc(temp_a2, globalCtx);
    temp_a0 = &this->unk_144;
    if (this->actor.draw != 0) {
        this = this;
        SkelAnime_FrameUpdateMatrix(temp_a0);
        func_80C1E290((Actor *) this, globalCtx);
    }
}

void func_80C1E4B0(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a1;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;

    if (((gSaveContext.weekEventReg[87] & 2) == 0) && (arg1 == 2)) {
        temp_a1 = *arg0;
        temp_a3 = temp_a1->unk_2B0;
        temp_a1->unk_2B0 = (void *) (temp_a3 + 8);
        temp_a3->unk_0 = 0xDB060018;
        temp_a3->unk_4 = (s32) (arg0 + (arg4->unk_208 * 0x44))->unk_17D98;
        temp_a3_2 = temp_a1->unk_2B0;
        temp_a1->unk_2B0 = (void *) (temp_a3_2 + 8);
        temp_a3_2->unk_4 = &D_06000E70;
        temp_a3_2->unk_0 = 0xDE000000;
        temp_a3_3 = temp_a1->unk_2B0;
        temp_a1->unk_2B0 = (void *) (temp_a3_3 + 8);
        temp_a3_3->unk_0 = 0xDB060018;
        temp_a3_3->unk_4 = (s32) (arg0 + (arg4->objBankIndex * 0x44))->unk_17D98;
    }
}

void func_80C1E568(Actor *this, GlobalContext *globalCtx) {
    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, (void **) this[1].flags, this->unk_164, (s32) this[1].category, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80C1E4B0, this);
}
