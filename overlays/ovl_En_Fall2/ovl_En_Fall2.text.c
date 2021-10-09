typedef struct EnFall2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ? unk144;                           /* inferred */
    /* 0x144 */ char pad144[0x18];
    /* 0x15C */ void *unk15C;                       /* inferred */
    /* 0x160 */ char pad160[0x14];                  /* maybe part of unk15C[6]? */
    /* 0x174 */ ? unk174;                           /* inferred */
    /* 0x174 */ char pad174[0xB4];
    /* 0x228 */ ? unk228;                           /* inferred */
    /* 0x228 */ char pad228[0xB4];
    /* 0x2DC */ void *unk2DC;                       /* inferred */
    /* 0x2E0 */ f32 unk2E0;                         /* inferred */
    /* 0x2E4 */ s16 unk2E4;                         /* inferred */
    /* 0x2E6 */ u16 unk2E6;                         /* inferred */
    /* 0x2E8 */ void (*actionFunc)(EnFall2 *, GlobalContext *);
} EnFall2;                                          /* size = 0x2EC */

struct _mips2c_stack_EnFall2_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFall2_Draw {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnFall2_Init {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ? *sp28;                             /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnFall2_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1B724 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ u8 sp24;                             /* inferred */
    /* 0x25 */ s8 sp25;                             /* inferred */
    /* 0x26 */ s8 sp26;                             /* inferred */
    /* 0x27 */ s8 sp27;                             /* inferred */
    /* 0x28 */ s8 sp28;                             /* inferred */
    /* 0x29 */ s8 sp29;                             /* inferred */
    /* 0x2A */ char pad2A[0x6];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C1B8A4 {};              /* size 0x0 */

struct _mips2c_stack_func_80C1B8B4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1B8F0 {};              /* size 0x0 */

struct _mips2c_stack_func_80C1B9D4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

? func_80183430(? *, ? *, ? *, ? *, ? *, s32);      /* extern */
? func_8018349C(? *, EnFall2 *);                    /* extern */
? func_801835EC(? *, ? *);                          /* extern */
? func_80183DE0(? *);                               /* extern */
? func_8018450C(GlobalContext *, ? *, Gfx *, ?, s32, EnFall2 *); /* extern */
void func_80C1B724(f32 arg0);                       /* static */
void func_80C1B8A4(EnFall2 *, GlobalContext *);     /* static */
void func_80C1B8B4(Actor *arg0);                    /* static */
void func_80C1B8F0(EnFall2 *arg0);                  /* static */
void func_80C1B9D4(EnFall2 *, GlobalContext *);     /* static */
extern ? D_06005EF4;
extern void D_06005F10;
extern void D_06008840;
extern ? D_06008898;
static u8 D_80C1BC00 = 0;
static u8 D_80C1BC01 = 2;
static u8 D_80C1BC02 = 0;
static u8 D_80C1BC03[235] = {
    0,
    4,
    0,
    4,
    4,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    4,
    4,
    4,
    2,
    0,
    4,
    2,
    2,
    0,
    4,
    4,
    4,
    4,
    0,
    2,
    2,
    4,
    0,
    2,
    0,
    4,
    4,
    2,
    0,
    2,
    4,
    4,
    4,
    2,
    0,
    4,
    4,
    4,
    2,
    2,
    0,
    4,
    4,
    2,
    4,
    0,
    2,
    0,
    0,
    2,
    4,
    4,
    2,
    0,
    2,
    4,
    4,
    4,
    2,
    0,
    4,
    4,
    4,
    4,
    4,
    2,
    2,
    0,
    2,
    4,
    0,
    2,
    0,
    0,
    2,
    4,
    4,
    2,
    0,
    2,
    4,
    4,
    4,
    2,
    0,
    0,
    2,
    2,
    4,
    4,
    4,
    4,
    4,
    4,
    2,
    0,
    2,
    0,
    0,
    2,
    4,
    4,
    2,
    0,
    2,
    4,
    4,
    4,
    2,
    0,
    2,
    0,
    5,
    2,
    5,
    5,
    5,
    5,
    0,
    2,
    5,
    0,
    2,
    0,
    2,
    5,
    5,
    2,
    0,
    2,
    5,
    5,
    5,
    2,
    0,
    3,
    3,
    3,
    2,
    2,
    0,
    0,
    3,
    3,
    0,
    2,
    2,
    3,
    0,
    2,
    3,
    3,
    2,
    0,
    2,
    3,
    3,
    3,
    2,
    0,
    2,
    2,
    2,
    2,
    0,
    2,
    2,
    2,
    2,
    2,
    0,
    0,
    2,
    0,
    2,
    2,
    2,
    2,
    0,
    2,
    2,
    2,
    2,
    2,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};
static ? D_80C1BCEF;                                /* unable to generate initializer */

void EnFall2_Init(EnFall2 *this, GlobalContext *globalCtx) {
    ? *sp28;
    ? *temp_a0;
    EnFall2 *this = (EnFall2 *) thisx;

    Actor_SetScale((Actor *) this, 1.0f);
    this->actionFunc = func_80C1B8A4;
    temp_a0 = &this->unk144;
    sp28 = temp_a0;
    func_80183430(temp_a0, &D_06008898, &D_06005EF4, &this->unk174, &this->unk228, 0);
    func_801835EC(temp_a0, &D_06005EF4);
    this->unk2DC = Lib_SegmentedToVirtual(&D_06008840);
    Actor_SetScale((Actor *) this, 0.02f);
    this->actionFunc = func_80C1B9D4;
    this->unk2E6 = 0x231;
    this->unk2E0 = 0.0f;
}

void EnFall2_Destroy(EnFall2 *this, GlobalContext *globalCtx) {
    EnFall2 *this = (EnFall2 *) thisx;
    func_8018349C(&this->unk144, this);
}

void func_80C1B724(f32 arg0) {
    s8 sp29;
    s8 sp28;
    s8 sp27;
    s8 sp26;
    s8 sp25;
    u8 sp24;
    u8 *temp_a0;
    u8 *temp_a1;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    f32 phi_f12;
    f32 phi_f12_2;
    u8 *phi_a0;
    void *phi_v1;

    temp_v0 = Lib_SegmentedToVirtual(&D_06005F10);
    phi_f12 = arg0;
    if (arg0 > 1.0f) {
        phi_f12 = 1.0f;
    }
    phi_f12_2 = phi_f12;
    if (phi_f12 < 0.0f) {
        phi_f12_2 = 0.0f;
    }
    temp_a1 = &sp24;
    sp24 = 0;
    sp25 = (s8) (s32) (54.0f * phi_f12_2);
    sp26 = (s8) (s32) (104.0f * phi_f12_2);
    temp_v1 = temp_v0 + 0x30;
    sp27 = (s8) (s32) (155.0f * phi_f12_2);
    sp28 = (s8) (s32) (255.0f * phi_f12_2);
    sp29 = (s8) (s32) (205.0f * phi_f12_2);
    temp_v0->unkF = (u8) temp_a1[D_80C1BC00];
    temp_v1->unk-11 = (u8) temp_a1[D_80C1BC01];
    temp_v1->unk-1 = (u8) temp_a1[D_80C1BC02];
    phi_a0 = D_80C1BC03;
    phi_v1 = temp_v1;
    do {
        temp_a0 = phi_a0 + 4;
        temp_v1_2 = phi_v1 + 0x40;
        temp_v1_2->unk-31 = (u8) temp_a1[*phi_a0];
        temp_v1_2->unk-21 = (u8) temp_a1[temp_a0->unk-3];
        temp_v1_2->unk-11 = (u8) temp_a1[temp_a0->unk-2];
        temp_v1_2->unk-1 = (u8) temp_a1[temp_a0->unk-1];
        phi_a0 = temp_a0;
        phi_v1 = temp_v1_2;
    } while (temp_a0 != &D_80C1BCEF);
}

void func_80C1B8A4(EnFall2 *arg0, GlobalContext *arg1) {

}

void func_80C1B8B4(Actor *arg0) {
    arg0->draw = EnFall2_Draw;
    if (arg0->unk2E4 == 1) {
        Actor_SetScale(arg0, 0.02f);
    }
}

void func_80C1B8F0(EnFall2 *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s16 temp_v0;

    temp_v0 = arg0->unk2E4;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return;
        }
        temp_f0 = arg0->unk2E0;
        if (temp_f0 > 0.0f) {
            arg0->unk2E0 = temp_f0 - 0.1f;
            if (arg0->unk2E0 < 0.0f) {
                arg0->unk2E0 = 0.0f;
            }
        }
        temp_f0_2 = arg0->actor.scale.x;
        if (temp_f0_2 > 0.0f) {
            arg0->actor.scale.x = temp_f0_2 - 0.0019999999f;
            if (arg0->actor.scale.x < 0.0f) {
                arg0->actor.scale.x = 0.0f;
            }
            arg0->actor.scale.z = arg0->actor.scale.x;
        }
        return;
    }
    temp_f0_3 = arg0->unk2E0;
    if (temp_f0_3 < 1.0f) {
        arg0->unk2E0 = temp_f0_3 + 0.033333335f;
        return;
    }
    arg0->unk2E0 = 1.0f;
}

void func_80C1B9D4(EnFall2 *arg0, GlobalContext *arg1) {
    func_80183DE0(&arg0->unk144);
    if (func_800EE29C(arg1, (u32) arg0->unk2E6) != 0) {
        func_800EDF24((Actor *) arg0, arg1, func_800EE200(arg1, (u32) arg0->unk2E6));
        if (arg0->unk2E4 != arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk2E6)]->unk0) {
            arg0->unk2E4 = (s16) arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk2E6)]->unk0;
            func_80C1B8B4((Actor *) arg0);
        }
        func_80C1B8F0(arg0);
        if (arg0->unk2E0 > 0.0f) {
            func_800B9010((Actor *) arg0, 0x20EEU);
            goto block_6;
        }
    } else {
        arg0->actor.draw = NULL;
block_6:
    }
    func_80C1B724(arg0->unk2E0);
}

void EnFall2_Update(EnFall2 *this, GlobalContext *globalCtx) {
    EnFall2 *this = (EnFall2 *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnFall2_Draw(EnFall2 *this, GlobalContext *globalCtx) {
    Gfx *sp28;
    Gfx *temp_a2;
    GraphicsContext *temp_v0;
    EnFall2 *this = (EnFall2 *) thisx;

    if (!(this->unk2E0 <= 0.0f)) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        AnimatedMat_DrawXlu(globalCtx, Lib_SegmentedToVirtual(&D_06008840));
        temp_v0 = globalCtx->state.gfxCtx;
        temp_a2 = temp_v0->polyOpa.d - (((this->unk15C->unk1 << 6) + 0xF) & ~0xF);
        temp_v0->polyOpa.d = temp_a2;
        if (temp_a2 != 0) {
            sp28 = temp_a2;
            func_8012C2DC(globalCtx->state.gfxCtx);
            Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 1U);
            func_8018450C(globalCtx, &this->unk144, temp_a2, 0, 0, this);
        }
    }
}
