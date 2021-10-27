CRASHED

typedef struct Actor {
    /* 0x000 */ s16 id;
    /* 0x002 */ u8 category;
    /* 0x003 */ s8 room;
    /* 0x004 */ u32 flags;
    /* 0x008 */ PosRot home;
    /* 0x01C */ s16 params;
    /* 0x01E */ s8 objBankIndex;
    /* 0x01F */ s8 targetMode;
    /* 0x020 */ s16 unk20;
    /* 0x022 */ char pad_22[0x2];
    /* 0x024 */ PosRot world;
    /* 0x038 */ s8 cutscene;
    /* 0x039 */ s8 unk39;
    /* 0x03A */ char pad_3A[0x2];                   /* maybe part of unk39[3]? */
    /* 0x03C */ PosRot focus;
    /* 0x050 */ u16 sfx;
    /* 0x052 */ s8 unk_52;                          /* inferred */
    /* 0x053 */ u8 unk_53;                          /* inferred */
    /* 0x054 */ f32 targetArrowOffset;
    /* 0x058 */ Vec3f scale;
    /* 0x064 */ Vec3f velocity;
    /* 0x070 */ f32 speedXZ;
    /* 0x074 */ f32 gravity;
    /* 0x078 */ f32 minVelocityY;
    /* 0x07C */ CollisionPoly *wallPoly;
    /* 0x080 */ CollisionPoly *floorPoly;
    /* 0x084 */ u8 wallBgId;
    /* 0x085 */ u8 floorBgId;
    /* 0x086 */ s16 wallYaw;
    /* 0x088 */ f32 floorHeight;
    /* 0x08C */ f32 yDistToWater;
    /* 0x090 */ u16 bgCheckFlags;
    /* 0x092 */ s16 yawTowardsPlayer;
    /* 0x094 */ f32 xyzDistToPlayerSq;
    /* 0x098 */ f32 xzDistToPlayer;
    /* 0x09C */ f32 yDistToPlayer;
    /* 0x0A0 */ CollisionCheckInfo colChkInfo;
    /* 0x0BC */ ActorShape shape;
    /* 0x0EC */ Vec3f projectedPos;
    /* 0x0F8 */ f32 projectedW;
    /* 0x0FC */ f32 uncullZoneForward;
    /* 0x100 */ f32 uncullZoneScale;
    /* 0x104 */ f32 uncullZoneDownward;
    /* 0x108 */ Vec3f prevPos;
    /* 0x114 */ u8 isTargeted;
    /* 0x115 */ u8 targetPriority;
    /* 0x116 */ u16 textId;
    /* 0x118 */ u16 freezeTimer;
    /* 0x11A */ u16 colorFilterParams;
    /* 0x11C */ u8 colorFilterTimer;
    /* 0x11D */ u8 isDrawn;
    /* 0x11E */ u8 dropFlag;
    /* 0x11F */ u8 hintId;
    /* 0x120 */ Actor *parent;
    /* 0x124 */ Actor *child;
    /* 0x128 */ Actor *prev;
    /* 0x12C */ Actor *next;
    /* 0x130 */ void (*init)(Actor *, GlobalContext *);
    /* 0x134 */ void (*destroy)(Actor *, GlobalContext *);
    /* 0x138 */ void (*update)(Actor *, GlobalContext *);
    /* 0x13C */ void (*draw)(Actor *, GlobalContext *);
    /* 0x140 */ ActorOverlay *overlayEntry;
} Actor;                                            /* size = 0x144 */

typedef struct EnKusa {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnKusa *, GlobalContext *);
    /* 0x148 */ ColliderCylinder unk_148;           /* inferred */
    /* 0x194 */ u8 unk_194;                         /* inferred */
    /* 0x195 */ s8 unk_195;                         /* inferred */
    /* 0x196 */ s8 unk_196;                         /* inferred */
    /* 0x197 */ u8 unk_197;                         /* inferred */
    /* 0x198 */ u8 unk_198;                         /* inferred */
    /* 0x199 */ char pad_199[0x3];                  /* maybe part of unk_198[4]? */
} EnKusa;                                           /* size = 0x19C */

struct _mips2c_stack_EnKusa_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnKusa_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnKusa_Update {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809349E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80934AB4 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x20];                   /* maybe part of sp58[9]? */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x14];                   /* maybe part of sp98[6]? */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char pad_B8[0x4];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x8];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80934F58 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ CollisionPoly *sp38;                 /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80934FFC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809350C4 {};              /* size 0x0 */

struct _mips2c_stack_func_809350F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093517C {};              /* size 0x0 */

struct _mips2c_stack_func_809351A0 {
    /* 0x00 */ char pad_0[0xB8];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
};                                                  /* size = 0xD0 */

struct _mips2c_stack_func_809354F8 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809355A4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8093561C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderCylinder *sp18;              /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809358C4 {};              /* size 0x0 */

struct _mips2c_stack_func_809358D8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80935988 {};              /* size 0x0 */

struct _mips2c_stack_func_809359AC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80935B94 {};              /* size 0x0 */

struct _mips2c_stack_func_80935BBC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80935CE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80935D64 {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80936168 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809361A4 {};              /* size 0x0 */

struct _mips2c_stack_func_809361B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80936220 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80936290 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809362D8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80936414 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809365CC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_800C9EBC(GlobalContext *, s32, s32, s32, f32 *, ? *, ? *); /* extern */
void func_809349E0(f32 *arg0, Actor *, GlobalContext *); /* static */
void func_80934AB4(EnKusa *, GlobalContext *);      /* static */
s32 func_80934F58(Actor *arg0, GlobalContext *arg1, f32 arg2); /* static */
void func_80934FFC(EnKusa *arg0, GlobalContext *arg1); /* static */
void func_809350C4(EnKusa *arg0);                   /* static */
void func_809350F8(Vec3f *arg0, f32 arg1);          /* static */
void func_8093517C(void *arg0);                     /* static */
void func_809351A0(EnKusa *arg0, GlobalContext *arg1); /* static */
void func_809354F8(EnKusa *arg0, GlobalContext *arg1); /* static */
s32 func_809355A4(EnKusa *arg0, GlobalContext *arg1); /* static */
void func_8093561C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809358C4(EnKusa *arg0);                   /* static */
void func_80935988(EnKusa *arg0);                   /* static */
void func_80935B94(EnKusa *arg0);                   /* static */
void func_80935CE8(EnKusa *arg0);                   /* static */
? func_80936120(EnKusa *);                          /* static */
void func_80936168(void *arg0, ? arg1);             /* static */
void func_809361B4(EnKusa *arg0);                   /* static */
void func_80936290(EnKusa *arg0);                   /* static */
void func_80936414(Actor *this, GlobalContext *globalCtx); /* static */
void func_809365CC(Actor *this, GlobalContext *globalCtx); /* static */
extern Gfx D_06000140;
extern Gfx D_060002E0;
static s16 D_809366A0 = 0;
static s16 D_809366A4 = 0;
static s16 D_809366A8 = 0;
static s16 D_809366AC = 0;
static s16 D_809366B0 = 0;
static u8 D_809366B4 = 1;
static ? D_809366D8;                                /* unable to generate initializer */
static ColliderCylinderInit D_809366E0 = {
    {0xA, 9, 9, 0x29, 0x20, 1},
    {0, {0x400000, 0, 2}, {0x580C71C, 0, 0}, 0x19, 1, 1},
    {6, 0x2C, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_8093670C = {0, 0xC, 0x1E, 0xFF};
static ? D_80936714;                                /* unable to generate initializer */
static ? D_80936744;                                /* unable to generate initializer */
static InitChainEntry D_80936754[7];                /* unable to generate initializer */
static u32 D_80936AD0;
static ? D_80936AD8;
static s16 D_80936CD8;
static s16 D_80936CDA;
static s16 D_80936CDC;
static s16 D_80936CDE;
static s16 D_80936CE0;

void func_809349E0(f32 *arg0) {
    MtxF *temp_v0;
    MtxF *temp_v1;
    f32 *temp_a0;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_a1;
    void *temp_a0_2;
    void *temp_v1_2;
    f32 phi_f18;
    f32 *phi_a0;
    MtxF *phi_v1;
    s32 phi_a1;
    f32 phi_f18_2;
    f32 *phi_a0_2;
    MtxF *phi_v1_2;

    temp_v0 = SysMatrix_GetCurrentState();
    temp_f18 = temp_v0->mf[0][0];
    phi_f18 = temp_f18;
    phi_a0 = arg0;
    phi_v1 = temp_v0;
    phi_a1 = 4;
    phi_f18_2 = temp_f18;
    phi_a0_2 = arg0;
    phi_v1_2 = temp_v0;
    if (4 != 0x10) {
        do {
            temp_f18_2 = phi_v1->mf[1][0];
            temp_a1 = phi_a1 + 4;
            phi_v1->mf[0][0] = phi_f18 + phi_a0->unk_0;
            temp_a0 = phi_a0 + 0x10;
            temp_v1 = phi_v1 + 0x10;
            temp_v1->unk_-C = (f32) (phi_v1->mf[0][1] + phi_a0[1]);
            temp_v1->unk_-8 = (f32) (phi_v1->mf[0][2] + temp_a0->unk_-8);
            temp_v1->unk_-4 = (f32) (phi_v1->mf[0][3] + temp_a0->unk_-4);
            phi_f18 = temp_f18_2;
            phi_a0 = temp_a0;
            phi_v1 = temp_v1;
            phi_a1 = temp_a1;
            phi_f18_2 = temp_f18_2;
            phi_a0_2 = temp_a0;
            phi_v1_2 = temp_v1;
        } while (temp_a1 != 0x10);
    }
    temp_a0_2 = phi_a0_2 + 0x10;
    temp_v1_2 = phi_v1_2 + 0x10;
    temp_v1_2->unk_-10 = (f32) (phi_f18_2 + *phi_a0_2);
    temp_v1_2->unk_-C = (f32) (phi_v1_2->mf[0][1] + temp_a0_2->unk_-C);
    temp_v1_2->unk_-8 = (f32) (phi_v1_2->mf[0][2] + temp_a0_2->unk_-8);
    temp_v1_2->unk_-4 = (f32) (phi_v1_2->mf[0][3] + temp_a0_2->unk_-4);
}

void func_80934AB4(void) {
    f32 spBC;
    f32 spB4;
    f32 spB0;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp58;
    f32 sp54;
    f32 sp4C;
    f32 sp48;
    ? *temp_v0;
    f32 *temp_v1;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_a1;
    ? *phi_v0;
    s32 phi_a0;

    D_80936CD8 += 0x46;
    D_80936CDA += 0x12C;
    D_80936CDC += 0x2BC;
    D_80936CDE += 0x514;
    D_80936CE0 += 0x22C4;
    temp_f28 = Math_SinS(D_80936CD8);
    spBC = Math_SinS(D_80936CDA);
    temp_f30 = Math_SinS(D_80936CDC);
    spB4 = Math_SinS(D_80936CDE) * 1.2f;
    spB0 = Math_SinS(D_80936CE0) * 1.5f;
    temp_f26 = Math_CosS(D_80936CD8);
    temp_f20 = Math_CosS(D_80936CDA);
    temp_f22 = Math_CosS(D_80936CDC);
    temp_f24 = Math_CosS(D_80936CDE) * 1.3f;
    temp_f12 = Math_CosS(D_80936CE0) * 1.7f;
    sp48 = spBC;
    sp4C = spB4;
    temp_f14 = spB4 - temp_f20;
    temp_v1 = &sp7C;
    sp7C = (temp_f28 - temp_f20) * temp_f30 * temp_f26 * temp_f28 * 0.0015f;
    temp_f8 = (spBC - temp_f22) * spB4 * temp_f20 * temp_f28 * 0.0015f;
    sp80 = temp_f8;
    sp84 = (temp_f30 - temp_f24) * temp_f22 * temp_f28 * temp_f26 * 0.0015f;
    temp_f6 = temp_f14 * temp_f24 * spBC * temp_f26 * 0.0015f;
    sp88 = temp_f6;
    sp8C = (temp_f28 - temp_f22) * temp_f28 * sp48 * spB0 * 0.0015f;
    sp90 = (sp48 - temp_f24) * temp_f30 * sp4C * spB0 * 0.0015f;
    sp94 = (temp_f30 - temp_f26) * temp_f26 * temp_f20 * temp_f12 * 0.0015f;
    sp98 = temp_f14 * temp_f22 * temp_f24 * temp_f12 * 0.0015f;
    sp58 = temp_f8 * 0.2f;
    sp54 = temp_f6 * 0.2f;
    phi_v0 = &D_80936AD8;
    phi_a0 = 0;
    do {
        temp_a1 = phi_a0 + 4;
        temp_f14_2 = temp_v1[(phi_a0 + 1) & 7];
        temp_f2 = temp_v1[(phi_a0 + 2) & 7];
        temp_f16 = temp_v1[(phi_a0 + 3) & 7];
        temp_f22_2 = temp_v1[temp_a1 & 7];
        temp_f26_2 = temp_v1[(phi_a0 + 5) & 7];
        temp_f30_2 = temp_v1[(phi_a0 + 6) & 7];
        phi_v0->unk_40 = sp58;
        phi_v0->unk_0 = sp58;
        phi_v0->unk_14 = sp7C;
        phi_v0->unk_28 = sp54;
        phi_v0->unk_80 = sp58;
        phi_v0->unk_68 = sp54;
        phi_v0->unk_54 = sp7C;
        phi_v0->unk_94 = sp7C;
        phi_v0->unk_FC = 0.0f;
        phi_v0->unk_F8 = 0.0f;
        phi_v0->unk_F4 = 0.0f;
        phi_v0->unk_F0 = 0.0f;
        phi_v0->unk_EC = 0.0f;
        phi_v0->unk_DC = 0.0f;
        phi_v0->unk_CC = 0.0f;
        phi_v0->unk_BC = 0.0f;
        phi_v0->unk_B8 = 0.0f;
        phi_v0->unk_B4 = 0.0f;
        phi_v0->unk_B0 = 0.0f;
        phi_v0->unk_AC = 0.0f;
        phi_v0->unk_9C = 0.0f;
        phi_v0->unk_8C = 0.0f;
        phi_v0->unk_7C = 0.0f;
        phi_v0->unk_78 = 0.0f;
        phi_v0->unk_74 = 0.0f;
        phi_v0->unk_70 = 0.0f;
        phi_v0->unk_6C = 0.0f;
        phi_v0->unk_5C = 0.0f;
        phi_v0->unk_4C = 0.0f;
        temp_v0 = phi_v0 + 0x100;
        temp_v0->unk_-F4 = 0.0f;
        temp_v0->unk_-E4 = 0.0f;
        temp_v0->unk_-D4 = 0.0f;
        temp_v0->unk_-D0 = 0.0f;
        temp_v0->unk_-CC = 0.0f;
        temp_v0->unk_-C8 = 0.0f;
        temp_v0->unk_-C4 = 0.0f;
        temp_v0->unk_-FC = (f32) temp_v1[phi_a0 & 7];
        temp_v0->unk_-BC = temp_f14_2;
        temp_v0->unk_-F8 = temp_f14_2;
        temp_v0->unk_-7C = temp_f2;
        temp_v0->unk_-B8 = temp_f2;
        temp_v0->unk_-F0 = temp_f2;
        temp_v0->unk_-E8 = temp_f2;
        temp_v0->unk_-3C = temp_f16;
        temp_v0->unk_-78 = temp_f16;
        temp_v0->unk_-A8 = temp_f16;
        temp_v0->unk_-B0 = temp_f16;
        temp_v0->unk_-E0 = temp_f16;
        temp_v0->unk_-38 = temp_f22_2;
        temp_v0->unk_-68 = temp_f22_2;
        temp_v0->unk_-70 = temp_f22_2;
        temp_v0->unk_-A0 = temp_f22_2;
        temp_v0->unk_-DC = temp_f22_2;
        temp_v0->unk_-28 = temp_f26_2;
        temp_v0->unk_-30 = temp_f26_2;
        temp_v0->unk_-60 = temp_f26_2;
        temp_v0->unk_-9C = temp_f26_2;
        temp_v0->unk_-20 = temp_f30_2;
        temp_v0->unk_-5C = temp_f30_2;
        temp_v0->unk_-1C = (f32) temp_v1[(phi_a0 + 7) & 7];
        temp_v0->unk_-18 = sp54;
        temp_v0->unk_-58 = sp54;
        temp_v0->unk_-40 = sp58;
        temp_v0->unk_-2C = sp7C;
        phi_v0 = temp_v0;
        phi_a0 = temp_a1;
    } while (temp_a1 != 8);
}

s32 func_80934F58(Actor *arg0, GlobalContext *arg1, f32 arg2) {
    CollisionPoly *sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 sp28;
    Actor *temp_a3;
    f32 temp_f0;
    f32 temp_f16;
    s32 phi_v0;

    temp_a3 = arg0;
    sp2C = temp_a3->world.pos.x;
    sp30 = temp_a3->world.pos.y + 30.0f;
    temp_f16 = temp_a3->world.pos.z;
    arg0 = temp_a3;
    sp34 = temp_f16;
    temp_f0 = func_800C411C(arg1 + 0x830, &sp38, &sp28, temp_a3, (Vec3f *) &sp2C);
    phi_v0 = 0;
    if (temp_f0 > -32000.0f) {
        arg0->world.pos.y = temp_f0 + arg2;
        Math_Vec3f_Copy((Vec3f *) &arg0->home, (Vec3f *) &arg0->world);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80934FFC(EnKusa *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v1 = arg0->actor.params;
    temp_v0 = temp_v1 & 3;
    if ((temp_v0 == 2) || (temp_v0 == 0)) {
        if ((((s32) temp_v1 >> 0xC) & 1) == 0) {
            Item_DropCollectibleRandom(arg1, NULL, arg0 + 0x24, (s16) ((((s32) temp_v1 >> 8) & 0xF) * 0x10));
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 1) {
        Item_DropCollectible(arg1, arg0 + 0x24, 3U);
        return;
    }
    temp_v0_2 = func_800A8150(((s32) temp_v1 >> 2) & 0x3F);
    if (temp_v0_2 >= 0) {
        Item_DropCollectible(arg1, arg0 + 0x24, ((((s32) arg0->actor.params >> 8) & 0x7F) << 8) | temp_v0_2);
    }
}

void func_809350C4(EnKusa *arg0) {
    f32 temp_f0;

    temp_f0 = arg0->actor.minVelocityY;
    arg0->actor.velocity.y += arg0->actor.gravity;
    if (arg0->actor.velocity.y < temp_f0) {
        arg0->actor.velocity.y = temp_f0;
    }
}

void func_809350F8(Vec3f *arg0, f32 arg1) {
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    arg1 = arg1;
    temp_f2 = arg0->x;
    temp_f14 = arg0->y;
    temp_f16 = arg0->z;
    temp_f12 = arg1 + (((Rand_ZeroOne() * 0.2f) - 0.1f) * arg1);
    temp_f18 = temp_f16 * temp_f12;
    temp_f10 = temp_f14 - (temp_f14 * temp_f12);
    arg0->x = temp_f2 - (temp_f2 * temp_f12);
    arg0->y = temp_f10;
    arg0->z = temp_f16 - temp_f18;
}

void func_8093517C(void *arg0) {
    arg0->unk_58 = 0.120000005f;
    arg0->unk_60 = 0.120000005f;
    arg0->unk_5C = 0.16000001f;
}

void func_809351A0(EnKusa *arg0, GlobalContext *arg1) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    ? *temp_s1;
    f32 *temp_s2;
    f32 *temp_s4;
    ? *phi_s1;

    temp_s4 = &spC4;
    temp_s2 = &spB8;
    phi_s1 = &D_80936714;
    do {
        spB8 = arg0->actor.world.pos.x + (phi_s1->unk_0 * arg0->actor.scale.x * 20.0f);
        spBC = arg0->actor.world.pos.y + (phi_s1->unk_4 * arg0->actor.scale.y * 20.0f) + 10.0f;
        spC0 = arg0->actor.world.pos.z + (phi_s1->unk_8 * arg0->actor.scale.z * 20.0f);
        spC4 = (Rand_ZeroOne() - 0.5f) * 8.0f;
        spC8 = Rand_ZeroOne() * 10.0f;
        spCC = (Rand_ZeroOne() - 0.5f) * 8.0f;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s4, (Vec3f *) temp_s2, (s16) -0x64, (s16) 0x40, (s16) 0x28, (s16) 3, (s16) 0, (s16) (s32) *(&D_80936744 + (((s32) (Rand_ZeroOne() * 111.1f) & 7) * 2)), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 1, (Gfx *) &D_040527F0);
        spB8 = arg0->actor.world.pos.x + (phi_s1->unk_0 * arg0->actor.scale.x * 40.0f);
        spBC = arg0->actor.world.pos.y + (phi_s1->unk_4 * arg0->actor.scale.y * 40.0f) + 10.0f;
        spC0 = arg0->actor.world.pos.z + (phi_s1->unk_8 * arg0->actor.scale.z * 40.0f);
        spC4 = (Rand_ZeroOne() - 0.5f) * 6.0f;
        spC8 = Rand_ZeroOne() * 10.0f;
        spCC = (Rand_ZeroOne() - 0.5f) * 6.0f;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s4, (Vec3f *) temp_s2, (s16) -0x64, (s16) 0x40, (s16) 0x28, (s16) 3, (s16) 0, (s16) (s32) *(&D_80936744 + (((s32) (Rand_ZeroOne() * 111.1f) % 7) * 2)), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 1, (Gfx *) &D_040528B0);
        temp_s1 = phi_s1 + 0xC;
        phi_s1 = temp_s1;
    } while (temp_s1 != &D_80936744);
}

void func_809354F8(EnKusa *arg0, GlobalContext *arg1) {
    s32 temp_s1;
    s32 phi_s1;

    phi_s1 = 0;
loop_1:
    temp_s1 = phi_s1 + 1;
    phi_s1 = temp_s1;
    if (Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, 0x16, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 1, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL) != 0) {
        if (temp_s1 != 3) {
            goto loop_1;
        }
    }
}

s32 func_809355A4(EnKusa *arg0, GlobalContext *arg1) {
    ? sp30;
    f32 sp2C;
    ? sp28;

    if ((func_800C9EBC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30, &sp28) != 0) && (arg0->actor.world.pos.y < sp2C)) {
        return 1;
    }
    return 0;
}

void func_8093561C(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a1;

    temp_a1 = arg0 + 0x148;
    sp18 = temp_a1;
    arg0 = arg0;
    Collider_InitCylinder(arg1, temp_a1);
    Collider_SetCylinder(arg1, temp_a1, arg0, &D_809366E0);
    Collider_UpdateCylinder(arg0, temp_a1);
}

void EnKusa_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp24;
    s16 temp_v1;
    EnKusa *this = (EnKusa *) thisx;

    sp24 = this->actor.params & 3;
    Actor_ProcessInitChain((Actor *) this, D_80936754);
    if (globalCtx->csCtx.state != 0) {
        this->actor.uncullZoneForward += 1000.0f;
    }
    func_8093561C((Actor *) this, globalCtx);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_8093670C);
    if (sp24 == 0) {
        this->actor.shape.shadowAlpha = 0x3C;
        this->actor.shape.shadowScale = 1.0f;
    } else {
        this->actor.shape.shadowAlpha = 0x46;
        this->actor.shape.shadowScale = 0.9f;
    }
    if (this->actor.shape.rot.y == 0) {
        this->actor.shape.rot.y = (s16) (Rand_Next() >> 0x10);
        temp_v1 = this->actor.shape.rot.y;
        this->actor.home.rot.y = temp_v1;
        this->actor.world.rot.y = temp_v1;
    }
    if (func_80934F58((Actor *) this, globalCtx, 0.0f) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (func_809355A4(this, globalCtx) != 0) {
        this->unk_198 |= 1;
    }
    this->unk_195 = Object_GetIndex(&globalCtx->objectCtx, *(&D_809366D8 + ((this->actor.params & 3) * 2)));
    if ((s32) this->unk_195 < 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_809358C4(this);
    if (D_809366B4 != 0) {
        D_80936CD8 = (s16) (Rand_Next() >> 0x10);
        D_80936CDA = (s16) (Rand_Next() >> 0x10);
        D_80936CDC = (s16) (Rand_Next() >> 0x10);
        D_80936CDE = (s16) (Rand_Next() >> 0x10);
        D_80936CE0 = (s16) (Rand_Next() >> 0x10);
        D_809366B4 = 0;
        func_80934AB4();
        D_80936AD0 = globalCtx->gameplayFrames;
    }
    this->unk_196 = D_809366B0 & 7;
    D_809366B0 += 1;
}

void EnKusa_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnKusa *this = (EnKusa *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_148);
}

void func_809358C4(EnKusa *arg0) {
    arg0->actionFunc = func_809358D8;
}

void func_809358D8(EnKusa *this, GlobalContext *globalCtx) {
    s32 sp20;

    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk_195) != 0) {
        sp20 = this->actor.params & 3;
        if (this->unk_197 != 0) {
            func_80936120(this);
        } else {
            func_80935988(this);
        }
        if (sp20 == 0) {
            this->actor.draw = func_80936414;
        } else {
            this->actor.draw = func_809365CC;
        }
        this->actor.flags &= -0x11;
        this->actor.objBankIndex = this->unk_195;
    }
}

void func_80935988(EnKusa *arg0) {
    arg0->actionFunc = func_809359AC;
    arg0->actor.flags &= -0x11;
}

void func_809359AC(EnKusa *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp28;
    CollisionCheckContext *sp24;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;

    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        func_80935B94(this);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x14, 0x869U);
        this->actor.shape.shadowDraw = func_800B3FC0;
        return;
    }
    temp_v0 = this->unk_148.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        this->unk_148.base.acFlags = temp_v0 & 0xFFFD;
        func_809351A0(this, globalCtx);
        func_80934FFC(this, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x14, 0x284EU);
        temp_v0_2 = this->actor.params;
        if (((((s32) temp_v0_2 >> 4) & 1) != 0) && ((temp_v0_2 & 3) != 3)) {
            func_809354F8(this, globalCtx);
        }
        if ((this->actor.params & 3) == 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        func_80936120(this);
        this->unk_197 = 1;
        return;
    }
    temp_v0_3 = this->unk_148.base.ocFlags1;
    temp_a1 = &this->unk_148;
    if (((temp_v0_3 & 8) == 0) && (this->actor.xzDistToPlayer > 12.0f)) {
        this->unk_148.base.ocFlags1 = temp_v0_3 | 8;
    }
    if (this->actor.xzDistToPlayer < 600.0f) {
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp24 = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp28);
        if (this->actor.xzDistToPlayer < 400.0f) {
            CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp28);
            if ((this->actor.xzDistToPlayer < 100.0f) && ((this->actor.params & 3) != 3)) {
                func_800B8BB0((Actor *) this, globalCtx);
            }
        }
    }
}

void func_80935B94(EnKusa *arg0) {
    arg0->actionFunc = func_80935BBC;
    arg0->actor.room = -1;
    arg0->actor.flags |= 0x10;
}

void func_80935BBC(EnKusa *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;
    f32 temp_f0;

    if (Actor_HasNoParent((Actor *) this, globalCtx) != 0) {
        this->actor.room = globalCtx->roomCtx.currRoom.num;
        func_80935CE8(this);
        this->actor.velocity.x = Math_SinS(this->actor.world.rot.y) * this->actor.speedXZ;
        temp_f0 = Math_CosS(this->actor.world.rot.y);
        this->actor.colChkInfo.mass = 0x50;
        this->actor.velocity.z = temp_f0 * this->actor.speedXZ;
        this->actor.gravity = -0.1f;
        func_809350C4(this);
        func_809350F8(&this->actor.velocity, 0.005f);
        Actor_ApplyMovement((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 7.5f, 35.0f, 0.0f, 0xC5U);
        this->actor.gravity = -3.2f;
        return;
    }
    sp30 = this->actor.world.pos.x;
    sp34 = this->actor.world.pos.y + 20.0f;
    sp38 = this->actor.world.pos.z;
    this->actor.floorHeight = func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp2C, (Actor *) this, (Vec3f *) &sp30);
}

void func_80935CE8(EnKusa *arg0) {
    arg0->actionFunc = func_80935D64;
    D_809366A0 = -0xBB8;
    D_809366A8 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 1600.0f);
    D_809366A4 = 0;
    D_809366AC = 0;
    arg0->unk_194 = 0;
}

void func_80935D64(EnKusa *this, GlobalContext *globalCtx) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    ColliderCylinder *temp_s0;
    CollisionCheckContext *temp_s1_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v1_2;
    u8 temp_t8;
    u8 temp_v1;
    s16 phi_s0;
    s32 phi_s1;

    temp_v1 = this->unk_148.base.atFlags;
    temp_v0 = (temp_v1 & 2) != 0;
    if (temp_v0 != 0) {
        this->unk_148.base.atFlags = temp_v1 & 0xFFFD;
    }
    temp_v1_2 = this->actor.bgCheckFlags;
    temp_t8 = this->unk_194 + 1;
    this->unk_194 = temp_t8;
    if (((temp_v1_2 & 0xB) != 0) || (temp_v0 != 0) || ((temp_t8 & 0xFF) >= 0x64)) {
        if ((temp_v1_2 & 0x20) == 0) {
            Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x14, 0x284EU);
        }
        func_809351A0(this, globalCtx);
        func_80934FFC(this, globalCtx);
        temp_v0_2 = this->actor.params & 3;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                if (temp_v0_2 == 2) {
                    goto block_10;
                }
                /* Duplicate return node #17. Try simplifying control flow for better match */
                return;
            }
            func_809361B4(this);
            this->actor.shape.shadowDraw = NULL;
            return;
        }
block_10:
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    phi_s0 = 0;
    if ((temp_v1_2 & 0x40) != 0) {
        sp60 = this->actor.world.pos.y + this->actor.yDistToWater;
        phi_s1 = 0;
        do {
            sp5C = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + this->actor.world.pos.x;
            sp64 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + this->actor.world.pos.z;
            EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp5C, NULL, NULL, (s16) 0, (s16) 0xBE);
            temp_s1 = phi_s1 + 1;
            phi_s0 = (s16) (phi_s0 + 0x4000);
            phi_s1 = temp_s1;
        } while (temp_s1 != 4);
        sp5C = this->actor.world.pos.x;
        sp64 = this->actor.world.pos.z;
        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp5C, NULL, NULL, (s16) 0, (s16) 0x118);
        EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp5C, 0x12C, 0x2BC, (s16) 0);
        this->actor.minVelocityY = -3.0f;
        this->actor.velocity.x *= 0.1f;
        this->actor.velocity.y *= 0.4f;
        this->actor.velocity.z *= 0.1f;
        this->actor.gravity *= 0.5f;
        D_809366A4 = (s16) ((s32) D_809366A4 >> 1);
        D_809366A0 = (s16) ((s32) D_809366A0 >> 1);
        D_809366AC = (s16) ((s32) D_809366AC >> 1);
        D_809366A8 = (s16) ((s32) D_809366A8 >> 1);
        this->actor.bgCheckFlags &= 0xFFBF;
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x28C5U);
    }
    func_809350C4(this);
    Math_StepToS(&D_809366A4, D_809366A0, 0x1F4);
    Math_StepToS(&D_809366AC, D_809366A8, 0xAA);
    this->actor.shape.rot.x += D_809366A4;
    this->actor.shape.rot.y += D_809366AC;
    func_809350F8(&this->actor.velocity, 0.05f);
    Actor_ApplyMovement((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 7.5f, 35.0f, 0.0f, 0xC5U);
    temp_s0 = &this->unk_148;
    Collider_UpdateCylinder((Actor *) this, temp_s0);
    temp_s1_2 = &globalCtx->colChkCtx;
    CollisionCheck_SetAT(globalCtx, temp_s1_2, (Collider *) temp_s0);
    CollisionCheck_SetOC(globalCtx, temp_s1_2, (Collider *) temp_s0);
}

/*
Failed to decompile function func_80936120:

Label L8093614C refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80936168(void *arg0, ? arg1) {
    u8 temp_t7;

    temp_t7 = arg0->unk_194 + 1;
    arg0->unk_194 = temp_t7;
    if ((temp_t7 & 0xFF) >= 0x78) {
        func_80936290();
    }
}

void func_809361A4(EnKusa *this, GlobalContext *globalCtx) {

}

void func_809361B4(EnKusa *arg0) {
    arg0->actor.world.pos.x = arg0->actor.home.pos.x;
    arg0->actor.world.pos.z = arg0->actor.home.pos.z;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y - 9.0f;
    func_8093517C();
    arg0->unk_194 = 0;
    arg0->actionFunc = func_80936220;
    arg0->unk_BC = (unaligned s32) arg0->unk_14;
    arg0->actor.shape.rot.z = arg0->actor.home.rot.z;
}

void func_80936220(EnKusa *this, GlobalContext *globalCtx) {
    f32 *temp_a0;
    f32 temp_a1;
    u8 temp_t7;

    temp_a0 = &this->actor.world.pos.y;
    temp_t7 = this->unk_194 + 1;
    this->unk_194 = temp_t7;
    if ((temp_t7 & 0xFF) >= 0x79) {
        temp_a1 = this->actor.home.pos.y;
        this = this;
        if ((Math_StepToF(temp_a0, temp_a1, 0.6f) != 0) && ((s32) this->unk_194 >= 0xAA)) {
            func_80936290(this);
        }
    }
}

void func_80936290(EnKusa *arg0) {
    arg0->actionFunc = func_809362D8;
    func_8093517C();
    arg0->unk_197 = 0;
    arg0->unk_BC = (unaligned s32) arg0->unk_14;
    arg0->actor.shape.rot.z = arg0->actor.home.rot.z;
}

void func_809362D8(EnKusa *this, GlobalContext *globalCtx) {
    s32 sp24;
    s32 temp_v1;

    temp_v1 = Math_StepToF(&this->actor.scale.y, 0.4f, 0.014f) & 1;
    sp24 = temp_v1;
    this->actor.scale.z = this->actor.scale.x;
    if ((temp_v1 & Math_StepToF((f32 *) &this->actor.scale, 0.4f, 0.011f)) != 0) {
        Actor_SetScale((Actor *) this, 0.4f);
        func_80935988(this);
        this->unk_148.base.ocFlags1 &= 0xFFF7;
    }
}

void EnKusa_Update(Actor *thisx, GlobalContext *globalCtx) {
    void *sp1C;
    GlobalContext *temp_a1;
    EnKusa *this = (EnKusa *) thisx;

    this->actionFunc(this, globalCtx);
    temp_a1 = globalCtx;
    if (this->unk_197 != 0) {
        this->actor.shape.yOffset = -6.25f;
    } else {
        this->actor.shape.yOffset = 0.0f;
    }
    if ((D_80936AD0 != temp_a1->gameplayFrames) && (temp_a1->roomCtx.currRoom.unk3 == 0)) {
        sp1C = temp_a1 + 0x18000;
        globalCtx = temp_a1;
        func_80934AB4(this, temp_a1);
        D_80936AD0 = temp_a1->gameplayFrames;
    }
}

void func_80936414(Actor *this, GlobalContext *globalCtx) {
    s32 sp24;
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GlobalContext *temp_a3;
    GraphicsContext *temp_a0;
    f32 temp_f0;
    GlobalContext *phi_a3;

    temp_a3 = globalCtx;
    temp_f0 = this->projectedPos.z;
    phi_a3 = temp_a3;
    if ((temp_f0 <= 1200.0f) || (((this->unk_198 & 1) != 0) && (temp_f0 < 1300.0f))) {
        if ((temp_a3->roomCtx.currRoom.unk3 == 0) && (func_809359AC == this->unk_144) && (temp_f0 > -150.0f) && (temp_f0 < 400.0f)) {
            globalCtx = temp_a3;
            func_809349E0((this[1].unk_52 << 6) + &D_80936AD8, this, temp_a3);
            phi_a3 = globalCtx;
        }
        func_800BDFC0(phi_a3, (Gfx *) &D_050078A0);
        return;
    }
    if (temp_f0 < 1300.0f) {
        temp_a0 = temp_a3->state.gfxCtx;
        globalCtx = temp_a3;
        sp20 = temp_a0;
        sp24 = (s32) ((1300.0f - temp_f0) * 2.55f);
        func_8012C2DC(temp_a0);
        temp_v0 = sp20->polyXlu.p;
        sp20->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp20 = sp20;
        sp18 = temp_v0;
        sp18->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = sp20->polyXlu.p;
        sp20->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v0_2->words.w1 = (sp24 & 0xFF) | ~0xFF;
        temp_v0_3 = sp20->polyXlu.p;
        sp20->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w1 = (u32) &D_05007938;
        temp_v0_3->words.w0 = 0xDE000000;
    }
}

void func_809365CC(Actor *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a3;
    f32 temp_f0;
    GlobalContext *phi_a3;

    temp_a3 = globalCtx;
    phi_a3 = temp_a3;
    if (this[1].unk_53 != 0) {
        func_800BDFC0(temp_a3, &D_060002E0);
        return;
    }
    if ((temp_a3->roomCtx.currRoom.unk3 == 0) && (func_809359AC == this->unk_144)) {
        temp_f0 = this->projectedPos.z;
        if ((temp_f0 > -150.0f) && (temp_f0 < 400.0f)) {
            globalCtx = temp_a3;
            func_809349E0((this[1].unk_52 << 6) + &D_80936AD8, this, temp_a3);
            phi_a3 = globalCtx;
        }
    }
    func_800BDFC0(phi_a3, &D_06000140);
}
