struct _mips2c_stack_EnItem00_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnItem00_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ObjectContext *sp18;                 /* inferred */
    /* 0x1C */ char pad_1C[0x3];
    /* 0x1F */ s8 sp1F;                             /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnItem00_DrawHeartContainer {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnItem00_DrawHeartPiece {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnItem00_DrawRupee {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnItem00_DrawSprite {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnItem00_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnItem00_SetObject {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnItem00_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnItem00_WaitForHeartObject {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ObjectContext *sp18;                 /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Item_DropCollectible {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ u32 sp44;                            /* inferred */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ s16 sp54;                            /* inferred */
    /* 0x56 */ s16 sp56;                            /* inferred */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0xC];
};                                                  /* size = 0x68 */

struct _mips2c_stack_Item_DropCollectible2 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ Actor *sp4C;                         /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_Item_DropCollectibleRandom {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ s16 sp50;                            /* inferred */
    /* 0x52 */ char pad_52[0xE];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_800A640C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800A6650 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800A6780 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_800A6A40 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800A7650 {};              /* size 0x0 */

struct _mips2c_stack_func_800A8150 {};              /* size 0x0 */

struct _mips2c_stack_func_800A817C {};              /* size 0x0 */

struct _mips2c_stack_func_800A81A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void EnItem00_SetObject(Actor *arg0, GlobalContext *arg1, f32 *arg2, f32 *arg3); /* static */
s16 func_800A7650(s16 arg0, Vec3f *);               /* static */
extern ? D_06001290;
extern ? D_06001470;
static Color_RGBA8 D_801ADF10 = {0xFF, 0xFF, 0x7F, 0};
static Color_RGBA8 D_801ADF14 = {0xFF, 0xFF, 0xFF, 0};
static Vec3f D_801ADF18 = {0.0f, 0.1f, 0.0f};
static Vec3f D_801ADF24 = {0.0f, 0.01f, 0.0f};
static ColliderCylinderInit enItem00CylinderInit = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0, 0, 0}, {0x10, 0, 0}, 0, 1, 0},
    {0xA, 0x1E, 0, {0, 0, 0}},
};
static InitChainEntry enItem00InitVars;             /* unable to generate initializer */
void *D_801ADF30[5] = {
    (void *)0x4061FC0,
    (void *)0x4061FE0,
    (void *)0x4062000,
    (void *)0x4062040,
    (void *)0x4062020,
};
void *D_801ADF44[12] = {
    (void *)0x405E6F0,
    (void *)0x405CEF0,
    (void *)0x405BEF0,
    (void *)0x405B6F0,
    (void *)0x405C6F0,
    (void *)0x405CEF0,
    (void *)0x40607C0,
    (void *)0x4060FC0,
    (void *)0x40617C0,
    (void *)0x405FFC0,
    NULL,
    (void *)0x405F7C0,
};
s32 D_801AE194[32] = {
    0xFFFFFFFF,
    0,
    1,
    0xFFFFFFFF,
    2,
    0x14,
    0xFFFFFFFF,
    0x13,
    0x1C,
    0x1D,
    3,
    0x15,
    6,
    7,
    0xF,
    0xE,
    0x12,
    0x1A,
    0xFFFFFFFF,
    0x17,
    0xFFFFFFFF,
    4,
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xD,
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xFFFFFFFF,
    5,
    8,
};
u8 D_801AE214[32] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    0,
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
};
u8 gItemSlots[80] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    0xA,
    0xB,
    0xC,
    0xD,
    0xE,
    0xF,
    0x10,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    5,
    5,
    5,
    5,
    5,
    0xB,
    0xB,
    0x11,
    0x11,
    0x11,
    0x1D,
    0x23,
    0x29,
    0x2F,
    0x28,
    0x26,
    0x19,
    0x20,
    0x1E,
    0x2C,
    0x24,
    0x25,
    0x18,
    0x27,
    0x1C,
    0x2B,
    0x21,
    0x2A,
    0x2D,
    0x1B,
    0x1F,
    0x1A,
    0x22,
    0x2E,
    1,
    1,
    1,
    0,
    0,
    0,
};
SaveContext gSaveContext;
u8 sDropTable[272] = {
    0,
    0,
    1,
    0xFF,
    0xFF,
    0x10,
    0x10,
    0xFF,
    0xFF,
    4,
    0xF,
    0xFF,
    0xFF,
    0xFF,
    3,
    0x12,
    0,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x10,
    0x10,
    0xFF,
    0xFF,
    0xFF,
    0xF,
    0xFF,
    3,
    3,
    3,
    0x12,
    0,
    0,
    0xFF,
    0xFF,
    0xFF,
    0x10,
    0x10,
    0xFF,
    0xFF,
    4,
    0xF,
    0xE,
    0xE,
    3,
    3,
    0x12,
    0,
    0xFF,
    1,
    2,
    0xFF,
    0x10,
    0x10,
    0xFF,
    0xFF,
    4,
    0xF,
    0xFF,
    0xFF,
    3,
    3,
    0x12,
    0x10,
    0x10,
    0x10,
    0x10,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    0x12,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    0,
    0,
    0,
    1,
    1,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    8,
    8,
    0xF,
    0xF,
    0xE,
    0xE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xF,
    0xF,
    0xF,
    0xF,
    0xF,
    0xF,
    0xE,
    0xE,
    0xF,
    0xF,
    0xF,
    0xF,
    0xF,
    0xF,
    0xF,
    0xF,
    0xF,
    0xF,
    0xE,
    0xE,
    0xE,
    0xE,
    0xE,
    0xE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xC,
    0xC,
    0xFF,
    5,
    5,
    5,
    0xD,
    0xD,
    0xFF,
    3,
    3,
    0x12,
    0,
    1,
    1,
    2,
    0xFF,
    5,
    5,
    8,
    4,
    0xFF,
    0xD,
    0xF,
    0xE,
    3,
    3,
    0x12,
    0,
    3,
    3,
    0xF,
    0x10,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
};
u8 sDropTableAmounts[272] = {
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    3,
    1,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
};

void EnItem00_SetObject(Actor *arg0, GlobalContext *arg1, f32 *arg2, f32 *arg3) {
    Actor_SetObjectSegment(arg1, arg0);
    Actor_SetScale(arg0, 0.5f);
    arg0->unk_154 = 0.5f;
    *arg2 = 0.0f;
    *arg3 = 0.6f;
    arg0->world.rot.x = 0x4000;
}

void EnItem00_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    s32 sp30;
    s16 temp_v0;
    u16 temp_t3;
    u16 temp_t7;
    EnItem00 *this = (EnItem00 *) thisx;

    sp34 = 0;
    sp3C = 980.0f;
    sp38 = 6.0f;
    temp_v0 = this->actor.params;
    if ((temp_v0 & 0x8000) != 0) {
        sp30 = 1;
    } else {
        sp30 = 0;
    }
    this->collectibleFlag = (s16) ((s32) (temp_v0 & 0x7F00) >> 8);
    this->actor.params &= 0xFF;
    if (Actor_GetCollectibleFlag(globalCtx, (s32) this->collectibleFlag) != 0) {
        if (this->actor.params == 6) {
            sp30 = 0;
            this->collectibleFlag = 0;
            this->actor.params = 3;
            goto block_7;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
block_7:
    if (this->actor.params == 0x15) {
        this->actor.params = 3;
    }
    Actor_ProcessInitChain((Actor *) this, &enItem00InitVars);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &enItem00CylinderInit);
    temp_t7 = (u16) this->actor.params;
    this->unk150 = 1;
    switch (temp_t7) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
        Actor_SetScale((Actor *) this, 0.015f);
        this->unk154 = 0.015f;
        sp3C = 750.0f;
        break;
    case 17:                                        /* switch 1 */
        this->unk150 = 0;
        Actor_SetScale((Actor *) this, 0.03f);
        this->unk154 = 0.03f;
        sp3C = 350.0f;
        break;
    case 6:                                         /* switch 1 */
    case 7:                                         /* switch 1 */
        this->unk150 = 0;
        Actor_SetScale((Actor *) this, 0.02f);
        this->unk154 = 0.02f;
        sp3C = 650.0f;
        if (this->actor.params == 7) {
            sp30 = -1;
        }
        break;
    case 3:                                         /* switch 1 */
        this->actor.home.rot.z = (s16) (s32) randPlusMinusPoint5Scaled(65535.0f);
        sp3C = 430.0f;
        Actor_SetScale((Actor *) this, 0.02f);
        this->unk154 = 0.02f;
        break;
    case 5:                                         /* switch 1 */
    case 8:                                         /* switch 1 */
    case 9:                                         /* switch 1 */
    case 10:                                        /* switch 1 */
        Actor_SetScale((Actor *) this, 0.035f);
        this->unk154 = 0.035f;
        sp3C = 250.0f;
        break;
    case 4:                                         /* switch 1 */
    case 11:                                        /* switch 1 */
    case 12:                                        /* switch 1 */
    case 13:                                        /* switch 1 */
    case 15:                                        /* switch 1 */
    case 23:                                        /* switch 1 */
    case 25:                                        /* switch 1 */
        Actor_SetScale((Actor *) this, 0.03f);
        this->unk154 = 0.03f;
        sp3C = 320.0f;
        break;
    case 14:                                        /* switch 1 */
        Actor_SetScale((Actor *) this, 0.044999998f);
        this->unk154 = 0.044999998f;
        sp3C = 320.0f;
        break;
    case 19:                                        /* switch 1 */
        Actor_SetScale((Actor *) this, 0.044999998f);
        this->unk154 = 0.044999998f;
        sp3C = 750.0f;
        break;
    case 20:                                        /* switch 1 */
        Actor_SetScale((Actor *) this, 0.03f);
        this->unk154 = 0.03f;
        sp3C = 750.0f;
        break;
    case 18:                                        /* switch 1 */
    case 26:                                        /* switch 1 */
        sp3C = 500.0f;
        Actor_SetScale((Actor *) this, 0.01f);
        this->unk154 = 0.01f;
        break;
    case 22:                                        /* switch 1 */
        this->actor.objBankIndex = Object_GetIndex(&globalCtx->objectCtx, 0xB3);
        EnItem00_SetObject((Actor *) this, globalCtx, &sp3C, &sp38);
        break;
    case 27:                                        /* switch 1 */
        this->actor.objBankIndex = Object_GetIndex(&globalCtx->objectCtx, 0xA0);
        EnItem00_SetObject((Actor *) this, globalCtx, &sp3C, &sp38);
        break;
    case 28:                                        /* switch 1 */
        this->actor.objBankIndex = Object_GetIndex(&globalCtx->objectCtx, 0x91);
        EnItem00_SetObject((Actor *) this, globalCtx, &sp3C, &sp38);
        break;
    }
    this->unk14E = 0;
    ActorShape_Init(&this->actor.shape, sp3C, func_800B3FC0, sp38);
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.shape.shadowAlpha = 0xB4;
    this->unk14A = 0;
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    if (sp30 < 0) {
        this->actionFunc = EnItem00_WaitForHeartObject;
        this->unk152 = -1;
        return;
    }
    if (sp30 == 0) {
        this->actionFunc = func_800A640C;
        this->unk152 = -1;
        return;
    }
    temp_t3 = (u16) this->actor.params;
    this->unk152 = 0xF;
    this->unk14C = 0x23;
    this->actor.speedXZ = 0.0f;
    this->actor.velocity.y = 0.0f;
    this->actor.gravity = 0.0f;
    switch (temp_t3) {                              /* switch 2 */
    case 0:                                         /* switch 2 */
        Item_Give(globalCtx, 0x84U);
        break;
    case 1:                                         /* switch 2 */
        Item_Give(globalCtx, 0x85U);
        break;
    case 2:                                         /* switch 2 */
        Item_Give(globalCtx, 0x87U);
        break;
    case 20:                                        /* switch 2 */
        Item_Give(globalCtx, 0x88U);
        break;
    case 19:                                        /* switch 2 */
        Item_Give(globalCtx, 0x8AU);
        break;
    case 3:                                         /* switch 2 */
        Item_Give(globalCtx, 0x83U);
        break;
    case 18:                                        /* switch 2 */
    case 26:                                        /* switch 2 */
        func_80115908(globalCtx, 0x70U);
        break;
    case 4:                                         /* switch 2 */
    case 11:                                        /* switch 2 */
        Item_Give(globalCtx, 0x8FU);
        break;
    case 5:                                         /* switch 2 */
        Item_Give(globalCtx, 0x93U);
        break;
    case 8:                                         /* switch 2 */
        Item_Give(globalCtx, 0x94U);
        break;
    case 9:                                         /* switch 2 */
        Item_Give(globalCtx, 0x95U);
        break;
    case 10:                                        /* switch 2 */
        Item_Give(globalCtx, 0x96U);
        break;
    case 14:                                        /* switch 2 */
        Item_Give(globalCtx, 0x7AU);
        break;
    case 15:                                        /* switch 2 */
        Item_Give(globalCtx, 0x79U);
        break;
    case 17:                                        /* switch 2 */
        Item_Give(globalCtx, 0x78U);
        break;
    case 12:                                        /* switch 2 */
        sp34 = 0x28;
        break;
    case 23:                                        /* switch 2 */
        sp34 = 0x2A;
        break;
    }
    if ((sp34 != 0) && (Actor_HasParent((Actor *) this, globalCtx) == 0)) {
        func_800B8A1C((Actor *) this, globalCtx, sp34, 50.0f, 20.0f);
    }
    this->actionFunc = func_800A6A40;
    func_800A6A40(this, globalCtx);
}

void EnItem00_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnItem00 *this = (EnItem00 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnItem00_WaitForHeartObject(EnItem00 *this, GlobalContext *globalCtx) {
    s32 sp1C;
    ObjectContext *sp18;
    ObjectContext *temp_a0;
    s32 temp_v0;

    temp_a0 = &globalCtx->objectCtx;
    sp18 = temp_a0;
    temp_v0 = Object_GetIndex(temp_a0, 0x96);
    sp1C = temp_v0;
    if (Object_IsLoaded(temp_a0, temp_v0) != 0) {
        this->actor.objBankIndex = (s8) sp1C;
        this->actionFunc = func_800A640C;
    }
}

void func_800A640C(EnItem00 *this, GlobalContext *globalCtx) {
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;

    temp_v1 = this->actor.params;
    if (((s32) temp_v1 < 3) || ((temp_v1 == 3) && ((s32) this->unk152 < 0)) || (temp_v1 == 6) || (temp_v1 == 7)) {
        this->actor.shape.rot.y += 0x3C0;
    } else if (((s32) temp_v1 >= 0x16) && (temp_v1 != 0x17) && ((s32) temp_v1 < 0x19)) {
        if (this->unk152 == -1) {
            if (Math_SmoothStepToS((s16 *) &this->actor.shape, (s16) (this->actor.world.rot.x - 0x4000), 2, 0xBB8, (s16) 0x5DC) == 0) {
                this->unk152 = -2;
            }
        } else if (Math_SmoothStepToS((s16 *) &this->actor.shape, (s16) (-0x4000 - this->actor.world.rot.x), 2, 0xBB8, (s16) 0x5DC) == 0) {
            this->unk152 = -1;
        }
        Math_SmoothStepToS((s16 *) &this->actor.world.rot, 0, 2, 0x9C4, (s16) 0x1F4);
    } else if ((temp_v1 == 0x1B) || (temp_v1 == 0x1C)) {
        this->unk152 = -1;
        this->actor.shape.rot.y += 0x3C0;
    }
    if ((this->actor.params == 6) || (this->actor.params == 7)) {
        this->actor.shape.yOffset = (Math_SinS(this->actor.shape.rot.y) * 150.0f) + 850.0f;
    }
    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 1.0f, 0.5f, 0.0f);
    if (this->unk14C == 0) {
        temp_v1_2 = this->actor.params;
        if ((temp_v1_2 != 0x11) && (temp_v1_2 != 6) && (temp_v1_2 != 7)) {
            this->unk14C = -1;
        }
    }
    if (this->unk152 == 0) {
        temp_v1_3 = this->actor.params;
        if ((temp_v1_3 != 0x11) && (temp_v1_3 != 6) && (temp_v1_3 != 7)) {
            Actor_MarkForDeath((Actor *) this);
        }
    }
    if ((this->actor.gravity != 0.0f) && ((this->actor.bgCheckFlags & 1) == 0)) {
        this->actionFunc = func_800A6650;
    }
}

void func_800A6650(EnItem00 *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 temp_f0;
    u16 temp_v0;

    if ((s32) this->actor.params < 3) {
        this->actor.shape.rot.y += 0x3C0;
    }
    if ((globalCtx->gameplayFrames & 1) != 0) {
        sp30 = randPlusMinusPoint5Scaled(10.0f) + this->actor.world.pos.x;
        sp34 = randPlusMinusPoint5Scaled(10.0f) + this->actor.world.pos.y;
        sp38 = randPlusMinusPoint5Scaled(10.0f) + this->actor.world.pos.z;
        EffectSsKiraKira_SpawnSmall(globalCtx, (Vec3f *) &sp30, &D_801ADF18, &D_801ADF24, &D_801ADF10, &D_801ADF14);
    }
    temp_v0 = this->actor.bgCheckFlags;
    if ((temp_v0 & 3) != 0) {
        temp_f0 = this->actor.velocity.y;
        if (temp_f0 > -2.0f) {
            this->actionFunc = func_800A640C;
            return;
        }
        this->actor.bgCheckFlags = temp_v0 & 0xFFFE;
        this->actor.velocity.y = temp_f0 * -0.8f;
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_800A6780(EnItem00 *this, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp34;
    f32 temp_f0;
    s16 temp_v1;

    this->unk152 += 1;
    if (this->actor.params == 3) {
        temp_f0 = this->actor.velocity.y;
        if (temp_f0 < 0.0f) {
            this->actor.speedXZ = 0.0f;
            this->actor.gravity = -0.4f;
            if (temp_f0 < -1.5f) {
                this->actor.velocity.y = -1.5f;
            }
            this->actor.home.rot.z += (s32) ((this->actor.velocity.y + 3.0f) * 1000.0f);
            sp34 = Math_CosS(this->actor.home.rot.z);
            this->actor.world.pos.x += Math_CosS(this->actor.yawTowardsPlayer) * (-3.0f * sp34);
            sp34 = Math_CosS(this->actor.home.rot.z);
            this->actor.world.pos.z += Math_SinS(this->actor.yawTowardsPlayer) * (-3.0f * sp34);
        }
    }
    if ((s32) this->actor.params < 3) {
        this->actor.shape.rot.y += 0x3C0;
    } else if (((s32) this->actor.params >= 0x16) && ((s32) this->actor.params != 0x17) && ((s32) this->actor.params != 0x19)) {
        this->actor.world.rot.x += -0x2BC;
        this->actor.shape.rot.y += 0x190;
        this->actor.shape.rot.x = this->actor.world.rot.x - 0x4000;
    }
    if (this->actor.velocity.y <= 2.0f) {
        temp_v1 = this->actor.shape.rot.z;
        if (((temp_v1 & 0xFFFF) + 0x2710) < 0xFFFF) {
            this->actor.shape.rot.z = temp_v1 + 0x2710;
        } else {
            this->actor.shape.rot.z = -1;
        }
    }
    if ((globalCtx->gameplayFrames & 1) == 0) {
        sp40 = ((Rand_ZeroOne() - 0.5f) * 10.0f) + this->actor.world.pos.x;
        sp44 = ((Rand_ZeroOne() - 0.5f) * 10.0f) + this->actor.world.pos.y;
        sp48 = ((Rand_ZeroOne() - 0.5f) * 10.0f) + this->actor.world.pos.z;
        EffectSsKiraKira_SpawnSmall(globalCtx, (Vec3f *) &sp40, &D_801ADF18, &D_801ADF24, &D_801ADF10, &D_801ADF14);
    }
    if ((this->actor.bgCheckFlags & 3) != 0) {
        this->actionFunc = func_800A640C;
        this->actor.shape.rot.z = 0;
        this->actor.speedXZ = 0.0f;
    }
}

void func_800A6A40(EnItem00 *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    s16 temp_v0;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if (this->unk14A != 0) {
        if (Actor_HasParent((Actor *) this, globalCtx) == 0) {
            func_800B8A1C((Actor *) this, globalCtx, (s32) this->unk14A, 50.0f, 80.0f);
            this->unk152 += 1;
        } else {
            this->unk14A = 0;
        }
    }
    if (this->unk152 == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0 = this->actor.params;
    this->actor.world.pos.x = sp2C->world.pos.x;
    this->actor.world.pos.y = sp2C->world.pos.y;
    this->actor.world.pos.z = sp2C->world.pos.z;
    if ((s32) temp_v0 < 3) {
        this->actor.shape.rot.y += 0x3C0;
    } else if (temp_v0 == 3) {
        this->actor.shape.rot.y = 0;
    }
    this->actor.world.pos.y += 40.0f + (Math_SinS((s16) (this->unk152 * 0x3A98)) * ((f32) this->unk152 * 0.3f));
    if (gSaveContext.linkAge == 0) {
        this->actor.world.pos.y += 20.0f;
    }
}

void EnItem00_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp38;
    s32 sp34;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    u16 temp_t3;
    EnItem00 *this = (EnItem00 *) thisx;

    sp34 = 0;
    sp38 = globalCtx->actorCtx.actorList[2].first->unk_A74 & 0x1000;
    temp_v0 = this->unk152;
    if ((s32) temp_v0 > 0) {
        this->unk152 = temp_v0 - 1;
    }
    if (((s32) this->unk152 > 0) && ((s32) this->unk152 < 0x29) && ((s32) this->unk14C <= 0)) {
        this->unk14E = (s16) (s32) this->unk152;
    }
    this->actionFunc(this, globalCtx);
    temp_f0 = this->unk154;
    Math_SmoothStepToF((f32 *) &this->actor.scale, temp_f0, 0.1f, temp_f0 * 0.1f, 0.0f);
    temp_f2 = this->actor.scale.x;
    this->actor.scale.z = temp_f2;
    this->actor.scale.y = temp_f2;
    if ((this->actor.gravity != 0.0f) && (Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this), Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 15.0f, 15.0f, 0x1DU), (this->actor.floorHeight <= -32000.0f))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_a2 = &this->collider;
    sp28 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    temp_v1 = this->actor.params;
    if ((temp_v1 == 0x16) || (temp_v1 == 0x1B) || (temp_v1 == 0x1C)) {
        this->actor.shape.yOffset = fabsf(Math_CosS(this->actor.shape.rot.x) * 37.0f);
    }
    if (((s32) this->unk14C <= 0) && (((sp38 != 0) && (this->actor.xzDistToPlayer <= 60.0f) && (temp_f0_2 = this->actor.yDistToPlayer, (temp_f0_2 >= -100.0f)) && (temp_f0_2 <= 100.0f)) || ((sp38 == 0) && (this->actor.xzDistToPlayer <= 30.0f) && (temp_f0_3 = this->actor.yDistToPlayer, (temp_f0_3 >= -50.0f)) && (temp_f0_3 <= 50.0f)) || (Actor_HasParent((Actor *) this, globalCtx) != 0)) && (globalCtx->gameOverCtx.state == 0)) {
        temp_t3 = (u16) this->actor.params;
        switch (temp_t3) {                          /* switch 1 */
        case 0:                                     /* switch 1 */
            this->unk1A4 = 1;
            Item_Give(globalCtx, 0x84U);
            break;
        case 1:                                     /* switch 1 */
            this->unk1A4 = 1;
            Item_Give(globalCtx, 0x85U);
            break;
        case 2:                                     /* switch 1 */
            this->unk1A4 = 1;
            Item_Give(globalCtx, 0x87U);
            break;
        case 20:                                    /* switch 1 */
            this->unk1A4 = 1;
            Item_Give(globalCtx, 0x88U);
            break;
        case 19:                                    /* switch 1 */
            this->unk1A4 = 1;
            Item_Give(globalCtx, 0x8AU);
            break;
        case 13:                                    /* switch 1 */
            sp34 = 0x19;
            break;
        case 12:                                    /* switch 1 */
            sp34 = 0x28;
            break;
        case 23:                                    /* switch 1 */
            sp34 = 0x2A;
            break;
        case 3:                                     /* switch 1 */
            Item_Give(globalCtx, 0x83U);
            break;
        case 18:                                    /* switch 1 */
        case 26:                                    /* switch 1 */
            func_80115908(globalCtx, 0x70U);
            break;
        case 4:                                     /* switch 1 */
        case 11:                                    /* switch 1 */
            Item_Give(globalCtx, 0x8FU);
            break;
        case 5:                                     /* switch 1 */
            Item_Give(globalCtx, 0x93U);
            break;
        case 8:                                     /* switch 1 */
            Item_Give(globalCtx, 0x94U);
            break;
        case 9:                                     /* switch 1 */
            Item_Give(globalCtx, 0x95U);
            break;
        case 10:                                    /* switch 1 */
            Item_Give(globalCtx, 0x96U);
            break;
        case 17:                                    /* switch 1 */
            sp34 = 0x3C;
            break;
        case 6:                                     /* switch 1 */
            sp34 = 0xC;
            break;
        case 7:                                     /* switch 1 */
            sp34 = 0xD;
            break;
        case 14:                                    /* switch 1 */
            Item_Give(globalCtx, 0x7AU);
            break;
        case 15:                                    /* switch 1 */
            Item_Give(globalCtx, 0x79U);
            break;
        case 22:                                    /* switch 1 */
            sp34 = 0x32;
            break;
        case 27:                                    /* switch 1 */
            sp34 = 0x3E;
            break;
        case 28:                                    /* switch 1 */
            sp34 = 0x3F;
            break;
        }
        if ((sp34 != 0) && (Actor_HasParent((Actor *) this, globalCtx) == 0)) {
            func_800B8A1C((Actor *) this, globalCtx, sp34, 50.0f, 20.0f);
        }
        temp_v0_2 = this->actor.params;
        switch (temp_v0_2) {                        /* switch 2 */
        case 6:                                     /* switch 2 */
        case 7:                                     /* switch 2 */
        case 17:                                    /* switch 2 */
        case 22:                                    /* switch 2 */
        case 27:                                    /* switch 2 */
        case 28:                                    /* switch 2 */
            if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
                Actor_SetCollectibleFlag(globalCtx, (s32) this->collectibleFlag);
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            /* Duplicate return node #64. Try simplifying control flow for better match */
            return;
        default:                                    /* switch 2 */
            if (((s32) temp_v0_2 < 3) || (temp_v0_2 == 0x13)) {
                play_sound(0x4803U);
                goto block_63;
            }
            if (sp34 != 0) {
                if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
                    Actor_SetCollectibleFlag(globalCtx, (s32) this->collectibleFlag);
                    Actor_MarkForDeath((Actor *) this);
                    return;
                }
                /* Duplicate return node #64. Try simplifying control flow for better match */
                return;
            }
            play_sound(0x4824U);
block_63:
            Actor_SetCollectibleFlag(globalCtx, (s32) this->collectibleFlag);
            this->unk152 = 0xF;
            this->unk14C = 0x23;
            this->actor.shape.rot.z = 0;
            this->actor.speedXZ = 0.0f;
            this->actor.velocity.y = 0.0f;
            this->actor.gravity = 0.0f;
            Actor_SetScale((Actor *) this, this->unk154);
            this->unk14A = 0;
            this->actionFunc = func_800A6A40;
            /* Duplicate return node #64. Try simplifying control flow for better match */
            return;
        }
    }
}

void EnItem00_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s8 sp1F;
    ObjectContext *sp18;
    EnItem00 *temp_a1_2;
    ObjectContext *temp_a0;
    s16 temp_v0;
    s32 temp_a1;
    s8 temp_v0_2;
    u16 temp_t9;
    EnItem00 *this = (EnItem00 *) thisx;

    if ((this->unk14E & this->unk150) == 0) {
        temp_t9 = (u16) this->actor.params;
        switch (temp_t9) {
        case 0:
        case 1:
        case 2:
        case 19:
        case 20:
            EnItem00_DrawRupee(this, globalCtx);
            return;
        case 6:
            EnItem00_DrawHeartPiece(this, globalCtx);
            return;
        case 7:
            EnItem00_DrawHeartContainer(this, globalCtx);
            return;
        case 3:
            temp_v0 = this->unk152;
            if ((s32) temp_v0 < 0) {
                if (temp_v0 == -1) {
                    temp_a0 = &globalCtx->objectCtx;
                    sp18 = temp_a0;
                    this = this;
                    temp_v0_2 = Object_GetIndex(temp_a0, 0x90);
                    temp_a1 = temp_v0_2 << 0x18;
                    sp1F = temp_v0_2;
                    if (Object_IsLoaded(temp_a0, temp_a1 >> 0x18) != 0) {
                        temp_a1_2 = this;
                        this->actor.objBankIndex = sp1F;
                        this = this;
                        Actor_SetObjectSegment(globalCtx, (Actor *) temp_a1_2);
                        this->unk152 = -2;
                        return;
                    }
                    /* Duplicate return node #15. Try simplifying control flow for better match */
                    return;
                }
                Matrix_Scale(16.0f, 16.0f, 16.0f, 1);
                GetItem_Draw(globalCtx, 8);
                return;
            }
        case 4:
        case 5:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 17:
        case 23:
        case 25:
            EnItem00_DrawSprite(this, globalCtx);
            return;
        case 22:
            GetItem_Draw(globalCtx, 0x27);
            return;
        case 27:
            GetItem_Draw(globalCtx, 0x1B);
            return;
        case 28:
            GetItem_Draw(globalCtx, 0xA);
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void EnItem00_DrawRupee(EnItem00 *this, GlobalContext *globalCtx) {
    s32 sp30;
    Gfx *sp24;
    Gfx *sp20;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_v0;
    s32 phi_a1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_800B8050((Actor *) this, globalCtx, 0);
    temp_v0 = this->actor.params;
    phi_a1 = temp_v0 - 0x10;
    if ((s32) temp_v0 < 3) {
        phi_a1 = (s32) temp_v0;
    }
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp30 = phi_a1;
    sp24 = temp_v0_2;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    sp20 = temp_v0_3;
    sp20->words.w1 = Lib_SegmentedToVirtual(D_801ADF30[phi_a1]);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) D_040622C0;
    temp_v0_4->words.w0 = 0xDE000000;
}

void EnItem00_DrawSprite(EnItem00 *this, GlobalContext *globalCtx) {
    s32 sp34;
    Gfx *sp28;
    Gfx *sp24;
    Gfx *temp_a1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GlobalContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_v1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 phi_a2;

    temp_a2 = this->actor.params - 3;
    temp_s0 = globalCtx->state.gfxCtx;
    temp_a0 = globalCtx;
    temp_a1 = temp_s0->polyOpa.p;
    globalCtx = globalCtx;
    sp34 = temp_a2;
    temp_s0->polyOpa.p = func_801660B8(temp_a0, temp_a1);
    temp_v1 = this->actor.params;
    phi_a2 = temp_a2;
    if (temp_v1 == 0x17) {
        phi_a2 = 6;
    } else if (temp_v1 == 0x19) {
        phi_a2 = 1;
    } else if ((s32) temp_v1 >= 8) {
        temp_a2_2 = temp_a2 - 3;
        phi_a2 = temp_a2_2;
        if ((s32) temp_v1 < 0xA) {
            phi_a2 = temp_a2_2 + 1;
        }
    }
    sp34 = phi_a2;
    temp_s0->polyOpa.p = func_8012C724(temp_s0->polyOpa.p);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp28 = temp_v0;
    sp28->words.w1 = Lib_SegmentedToVirtual(D_801ADF44[phi_a2]);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp24 = temp_v0_2;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) D_0405F6F0;
    temp_v0_3->words.w0 = 0xDE000000;
}

void EnItem00_DrawHeartContainer(EnItem00 *this, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    if (Object_GetIndex(&globalCtx->objectCtx, 0x96) == this->actor.objBankIndex) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s0 = temp_a0;
        func_8012C2DC(temp_a0);
        Matrix_Scale(20.0f, 20.0f, 20.0f, 1);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp24 = temp_v0;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_06001290;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_06001470;
        temp_v0_3->words.w0 = 0xDE000000;
    }
}

void EnItem00_DrawHeartPiece(EnItem00 *this, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    func_800B8118((Actor *) this, globalCtx, 0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) D_0405AAB0;
    temp_v0_2->words.w0 = 0xDE000000;
}

s16 func_800A7650(s16 arg0) {
    if ((((arg0 == 4) || (arg0 == 0x19) || (arg0 == 0xB)) && (gSaveContext.inventory.items[gItemSlots[6]] == 0xFF)) || (((arg0 == 5) || (arg0 == 8) || (arg0 == 9) || (arg0 == 0xA)) && (gSaveContext.inventory.items[gItemSlots[1]] == 0xFF)) || (((arg0 == 0xE) || (arg0 == 0xF)) && (gSaveContext.magicLevel == 0))) {
        return -1;
    }
    if ((arg0 == 3) && (gSaveContext.healthCapacity == gSaveContext.health)) {
        return 0;
    }
    return arg0;
}

EnItem00 *Item_DropCollectible(GlobalContext *globalCtx, Vec3f *spawnPos, u32 params) {
    s32 sp58;
    s16 sp56;
    s16 sp54;
    s32 sp50;
    s32 sp48;
    u32 sp44;
    Actor *temp_s3;
    Actor *temp_v0_2;
    EnItem00 *temp_s3_2;
    s16 temp_s0;
    s16 temp_t0;
    s16 temp_v0_3;
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 phi_v1;
    s16 phi_s0;
    EnItem00 *phi_s3;

    temp_t1 = params & 0x10000;
    temp_t0 = params & 0x8000;
    temp_v1 = params & 0x20000;
    temp_v0 = params & 0xFF;
    sp54 = params & 0x7F00;
    temp_s0 = params & 0x7FFF;
    phi_s0 = temp_s0;
    phi_s3 = NULL;
    if (temp_v0 == 0x15) {
        sp44 = sp54 | 3 | temp_t0;
        phi_v1 = 0;
        do {
            sp48 = phi_v1;
            temp_v1_2 = phi_v1 + 1;
            phi_v1 = temp_v1_2;
            phi_s3 = Item_DropCollectible(globalCtx, spawnPos, sp44);
        } while (temp_v1_2 != 3);
    } else if (temp_v0 == 0x1D) {
        temp_t2 = (s32) sp54 >> 8;
        temp_a1 = temp_t2 << 0x10;
        sp54 = (s16) temp_t2;
        if (Actor_GetCollectibleFlag(globalCtx, temp_a1 >> 0x10) == 0) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x23B, spawnPos->x, spawnPos->y, spawnPos->z, (s16) 0, (s16) 0, (s16) 0, (s16) (s32) sp54);
        }
    } else if (((temp_v0 == 0x12) || ((temp_s0 & 0xFF) == 0x1A)) && (temp_t1 == 0)) {
        if ((temp_s0 & 0xFF) == 0x12) {
            temp_s0_2 = ((s32) sp54 >> 8) & 0x7F;
            temp_s3 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x10, spawnPos->x, spawnPos->y + 40.0f, spawnPos->z, (s16) 0, (s16) 0, (s16) 0, (s16) (((temp_s0_2 << 9) & 0xFE00) | 0x102));
            phi_s3 = (EnItem00 *) temp_s3;
            if (Actor_GetCollectibleFlag(globalCtx, temp_s0_2) == 0) {
                Audio_PlaySoundAtPosition(globalCtx, spawnPos, 0x28, 0x28E7U);
                phi_s3 = (EnItem00 *) temp_s3;
            }
        } else {
            temp_s0_3 = ((s32) sp54 >> 8) & 0x7F;
            sp50 = temp_v1;
            temp_s3_2 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x1B0, spawnPos->x, spawnPos->y + 40.0f, spawnPos->z, (s16) 0, (s16) 0, (s16) 0, (s16) (((temp_s0_3 & 0x7F) << 9) | 7));
            phi_s3 = temp_s3_2;
            if ((temp_v1 == 0) && (Actor_GetCollectibleFlag(globalCtx, temp_s0_3) == 0)) {
                Audio_PlaySoundAtPosition(globalCtx, spawnPos, 0x28, 0x28E7U);
            }
        }
    } else {
        if (temp_t0 == 0) {
            sp56 = temp_t0;
            sp58 = temp_t1;
            phi_s0 = func_800A7650((s16) (temp_s0 & 0xFF));
        }
        if (phi_s0 != -1) {
            sp58 = params & 0x10000;
            sp56 = temp_t0;
            temp_v0_2 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xE, spawnPos->x, spawnPos->y, spawnPos->z, (s16) 0, (s16) 0, (s16) 0, (s16) (phi_s0 | temp_t0 | sp54));
            phi_s3 = (EnItem00 *) temp_v0_2;
            if ((temp_v0_2 != 0) && (temp_t0 == 0)) {
                if ((params & 0x10000) == 0) {
                    temp_v0_2->velocity.y = 8.0f;
                } else {
                    temp_v0_2->velocity.y = -2.0f;
                }
                temp_v0_2->speedXZ = 2.0f;
                temp_v0_2->gravity = -0.9f;
                temp_v0_2->world.rot.y = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
                Actor_SetScale(temp_v0_2, 0.0f);
                temp_v0_3 = temp_v0_2->params;
                temp_v0_2->unk_144 = func_800A6780;
                temp_v0_2->unk_152 = 0xDC;
                if ((temp_v0_3 != 0x11) && (temp_v0_3 != 6) && (temp_v0_3 != 7)) {
                    temp_v0_2->room = -1;
                }
                temp_v0_2->flags |= 0x10;
            }
        }
    }
    return phi_s3;
}

Actor *Item_DropCollectible2(GlobalContext *globalCtx, Vec3f *spawnPos, u32 params) {
    Actor *sp4C;
    s32 sp44;
    s16 sp42;
    s16 sp40;
    Actor *temp_v0_3;
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_t1;
    s32 temp_t2;
    Actor *phi_v0;
    s32 phi_s0;
    Actor *phi_v1;

    temp_t1 = params & 0x10000;
    temp_t0 = params & 0x7F00;
    temp_v0 = params & 0xFF;
    sp42 = params & 0x8000;
    phi_v1 = NULL;
    if (temp_v0 == 0x15) {
        return NULL;
    }
    if (((temp_v0 == 0x12) || (temp_v0 == 0x1A)) && (temp_t1 == 0)) {
        if (temp_v0 == 0x12) {
            temp_s0 = ((s32) temp_t0 >> 8) & 0x7F;
            phi_v0 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x10, spawnPos->x, spawnPos->y + 40.0f, spawnPos->z, (s16) 0, (s16) 0, (s16) 0, (s16) (((temp_s0 << 9) & 0xFE00) | 0x102));
            phi_s0 = temp_s0;
        } else {
            temp_s0_2 = ((s32) temp_t0 >> 8) & 0x7F;
            phi_v0 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x1B0, spawnPos->x, spawnPos->y + 40.0f, spawnPos->z, (s16) 0, (s16) 0, (s16) 0, (s16) (((temp_s0_2 & 0x7F) << 9) | 7));
            phi_s0 = temp_s0_2;
        }
        sp4C = phi_v0;
        phi_v1 = phi_v0;
        if (Actor_GetCollectibleFlag(globalCtx, phi_s0) == 0) {
            sp4C = phi_v0;
            Audio_PlaySoundAtPosition(globalCtx, spawnPos, 0x28, 0x28E7U);
            phi_v1 = phi_v0;
        }
    } else {
        sp4C = NULL;
        sp40 = temp_t0;
        sp44 = temp_t1;
        temp_v0_2 = func_800A7650(temp_v0);
        if (temp_v0_2 != -1) {
            sp44 = temp_t1;
            temp_v0_3 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xE, spawnPos->x, spawnPos->y, spawnPos->z, (s16) 0, (s16) 0, (s16) 0, (s16) (temp_v0_2 | sp42 | temp_t0));
            phi_v1 = temp_v0_3;
            if ((temp_v0_3 != 0) && (sp42 == 0)) {
                temp_v0_3->velocity.y = 0.0f;
                temp_v0_3->speedXZ = 0.0f;
                if (temp_t1 != 0) {
                    temp_v0_3->gravity = 0.0f;
                } else {
                    temp_v0_3->gravity = -0.9f;
                }
                sp4C = temp_v0_3;
                temp_t2 = (s32) randPlusMinusPoint5Scaled(65536.0f);
                temp_v0_3->flags |= 0x10;
                temp_v0_3->world.rot.y = (s16) temp_t2;
                phi_v1 = temp_v0_3;
            }
        }
    }
    return phi_v1;
}

void Item_DropCollectibleRandom(GlobalContext *globalCtx, Actor *fromActor, Vec3f *spawnPos, s16 params) {
    s16 sp50;
    Actor *temp_v0_6;
    f32 temp_f0;
    s16 temp_s7;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v0_7;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_v0;
    s8 temp_v0_4;
    u8 temp_s2;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 phi_s2;
    u8 phi_s1;
    s32 phi_s3;
    s16 phi_s2_2;
    s16 phi_s7;
    s32 phi_s3_2;

    temp_f0 = Rand_ZeroOne();
    temp_s7 = params & 0x1F0;
    sp50 = params & 0x8000;
    phi_s7 = temp_s7;
    phi_s7 = temp_s7;
    if ((s32) temp_s7 < 0x101) {
        temp_v0 = temp_s7 + (s16) (s32) (temp_f0 * 16.0f);
        temp_s2 = sDropTable[temp_v0];
        phi_s2 = temp_s2;
        phi_s3 = (s32) sDropTableAmounts[temp_v0];
        if (temp_s2 == 0x10) {
            temp_v0_2 = gSaveContext.playerForm;
            phi_s2 = 0xFU;
            phi_s3 = 1;
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    if (temp_v0_2 != 4) {
                        phi_s2 = 0U;
                    } else {
                        phi_s2 = 5U;
                    }
                } else {
                    phi_s2 = 3U;
                }
            }
        }
        if (fromActor != 0) {
            temp_v1 = fromActor->dropFlag;
            if (temp_v1 != 0) {
                if ((temp_v1 & 1) != 0) {
                    phi_s2 = 8U;
                    phi_s7 = 0x10;
                    goto block_16;
                }
                if ((temp_v1 & 2) != 0) {
                    phi_s2 = 3U;
                    phi_s7 = 0x10;
                    goto block_16;
                }
                if ((temp_v1 & 0x20) != 0) {
                    phi_s2 = 0x14U;
block_16:
                    phi_s3 = 1;
                }
            }
        }
        phi_s1 = phi_s2;
        phi_s2_2 = (s16) phi_s2;
        if (phi_s2 == 0x12) {
            temp_v0_3 = gSaveContext.health;
            if ((s32) temp_v0_3 < 0x11) {
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x10, spawnPos->x, spawnPos->y + 40.0f, spawnPos->z, (s16) 0, (s16) 0, (s16) 0, (s16) 2);
                Audio_PlaySoundAtPosition(globalCtx, spawnPos, 0x28, 0x28E7U);
                return;
            }
            phi_s7 = 0x10;
            if ((s32) temp_v0_3 < 0x31) {
                phi_s1 = 3U;
                phi_s3 = 3;
                phi_s2_2 = 3;
                goto block_36;
            }
            if ((s32) temp_v0_3 < 0x51) {
                phi_s1 = 3U;
                phi_s3 = 1;
                phi_s2_2 = 3;
                goto block_36;
            }
            temp_v0_4 = gSaveContext.magicLevel;
            if ((temp_v0_4 != 0) && (gSaveContext.magic == 0)) {
                phi_s1 = 0xEU;
                phi_s3 = 1;
                phi_s7 = 0xD0;
                phi_s2_2 = 0xE;
                goto block_36;
            }
            if ((temp_v0_4 != 0) && (((s32) temp_v0_4 >> 1) >= (s32) gSaveContext.magic)) {
                phi_s1 = 0xEU;
                phi_s3 = 1;
                phi_s7 = 0xD0;
                phi_s2_2 = 0xE;
                goto block_36;
            }
            phi_s7 = 0xA0;
            phi_s2_2 = 8;
            if ((s32) gSaveContext.inventory.ammo[gItemSlots->unk_1] < 6) {
                phi_s1 = 8U;
                phi_s3 = 1;
                goto block_36;
            }
            phi_s7 = 0xB0;
            phi_s2_2 = 4;
            if ((s32) gSaveContext.inventory.ammo[gItemSlots->unk_6] < 6) {
                phi_s1 = 4U;
                phi_s3 = 1;
                goto block_36;
            }
            phi_s2_2 = 2;
            if ((s32) gSaveContext.rupees < 0xB) {
                phi_s1 = 2U;
                phi_s3 = 1;
                goto block_36;
            }
            /* Duplicate return node #49. Try simplifying control flow for better match */
            return;
        }
block_36:
        phi_s3_2 = phi_s3;
        if ((phi_s1 != 0xFF) && (phi_s3 > 0)) {
            do {
                if (sp50 == 0) {
                    temp_v0_5 = func_800A7650(phi_s2_2, spawnPos);
                    temp_s2_2 = temp_v0_5 & 0xFF;
                    phi_s2_2 = (s16) temp_s2_2;
                    if ((temp_v0_5 & 0xFF) != 0xFF) {
                        temp_v0_6 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xE, spawnPos->x, spawnPos->y, spawnPos->z, (s16) 0, (s16) 0, (s16) 0, (s16) temp_s2_2);
                        if ((temp_v0_6 != 0) && (temp_s2_2 != 0xFF)) {
                            temp_v0_6->velocity.y = 8.0f;
                            temp_v0_6->speedXZ = 2.0f;
                            temp_v0_6->gravity = -0.9f;
                            temp_v0_6->world.rot.y = (s16) (s32) (Rand_ZeroOne() * 40000.0f);
                            Actor_SetScale(temp_v0_6, 0.0f);
                            temp_v0_7 = temp_v0_6->params;
                            temp_v0_6->unk_144 = func_800A6780;
                            temp_v0_6->flags |= 0x10;
                            if ((temp_v0_7 != 0x11) && (temp_v0_7 != 6) && (temp_v0_7 != 7)) {
                                temp_v0_6->room = -1;
                            }
                            temp_v0_6->unk_152 = 0xDC;
                        }
                    }
                } else {
                    Item_DropCollectible(globalCtx, spawnPos, phi_s7 | 0x8000);
                }
                temp_s3 = phi_s3_2 - 1;
                phi_s3_2 = temp_s3;
            } while (temp_s3 > 0);
        }
        /* Duplicate return node #49. Try simplifying control flow for better match */
    }
}

s32 func_800A8150(s32 index) {
    if ((index < 0) || (index >= 0x20)) {
        return -1;
    }
    return D_801AE194[index];
}

s32 func_800A817C(s32 index) {
    if ((index < 0) || (index >= 0x20)) {
        return 0;
    }
    return (s32) D_801AE214[index];
}

s32 func_800A81A4(GlobalContext *globalCtx, s32 a1, s32 a2) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = func_800A8150(a1) == 0x1A;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = Actor_GetCollectibleFlag(globalCtx, a2) == 0;
    }
    return phi_v0;
}
