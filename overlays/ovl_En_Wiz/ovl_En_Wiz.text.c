typedef struct EnWiz {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ ? unk18E;                           /* inferred */
    /* 0x18E */ char pad18E[0x6];
    /* 0x194 */ ? unk194;                           /* inferred */
    /* 0x194 */ char pad194[0x6];
    /* 0x19A */ ? unk19A;                           /* inferred */
    /* 0x19A */ char pad19A[0x66];
    /* 0x200 */ Vec3s unk200;                       /* inferred */
    /* 0x206 */ char pad206[0x72];                  /* maybe part of unk200[20]? */
    /* 0x278 */ SkelAnime unk278;                   /* inferred */
    /* 0x2BC */ Vec3s unk2BC;                       /* inferred */
    /* 0x2C2 */ ? unk2C2;                           /* inferred */
    /* 0x2C2 */ char pad2C2[0x6];
    /* 0x2C8 */ ? unk2C8;                           /* inferred */
    /* 0x2C8 */ char pad2C8[0x6];
    /* 0x2CE */ ? unk2CE;                           /* inferred */
    /* 0x2CE */ char pad2CE[0x66];
    /* 0x334 */ Vec3s unk334;                       /* inferred */
    /* 0x33A */ char pad33A[0x72];                  /* maybe part of unk334[20]? */
    /* 0x3AC */ void (*actionFunc)(EnWiz *, GlobalContext *);
    /* 0x3B0 */ s16 unk3B0;                         /* inferred */
    /* 0x3B2 */ s16 unk3B2;                         /* inferred */
    /* 0x3B4 */ s16 unk3B4;                         /* inferred */
    /* 0x3B6 */ s16 unk3B6;                         /* inferred */
    /* 0x3B8 */ s16 unk3B8;                         /* inferred */
    /* 0x3BA */ char pad3BA[0x8];                   /* maybe part of unk3B8[5]? */
    /* 0x3C2 */ s16 unk3C2;                         /* inferred */
    /* 0x3C4 */ s16 unk3C4;                         /* inferred */
    /* 0x3C6 */ char pad3C6[0xE];                   /* maybe part of unk3C4[8]? */
    /* 0x3D4 */ f32 unk3D4;                         /* inferred */
    /* 0x3D8 */ f32 unk3D8;                         /* inferred */
    /* 0x3DC */ f32 unk3DC;                         /* inferred */
    /* 0x3E0 */ f32 unk3E0;                         /* inferred */
    /* 0x3E4 */ f32 unk3E4;                         /* inferred */
    /* 0x3E8 */ f32 unk3E8;                         /* inferred */
    /* 0x3EC */ f32 unk3EC;                         /* inferred */
    /* 0x3F0 */ f32 unk3F0;                         /* inferred */
    /* 0x3F4 */ f32 unk3F4;                         /* inferred */
    /* 0x3F8 */ f32 unk3F8;                         /* inferred */
    /* 0x3FC */ char pad3FC[0x18];                  /* maybe part of unk3F8[7]? */
    /* 0x414 */ f32 unk414;                         /* inferred */
    /* 0x418 */ f32 unk418;                         /* inferred */
    /* 0x41C */ f32 unk41C;                         /* inferred */
    /* 0x420 */ char pad420[0x30];                  /* maybe part of unk41C[13]? */
    /* 0x450 */ f32 unk450;                         /* inferred */
    /* 0x454 */ ColliderJntSph unk454;              /* inferred */
    /* 0x474 */ ColliderJntSphElement unk474;       /* inferred */
    /* 0x4B4 */ char pad4B4[0x240];                 /* maybe part of unk474[10]? */
    /* 0x6F4 */ ColliderCylinder unk6F4;            /* inferred */
    /* 0x740 */ s32 unk740;                         /* inferred */
    /* 0x744 */ char pad744[0x4];
    /* 0x748 */ s16 unk748;                         /* inferred */
    /* 0x74A */ s16 unk74A;                         /* inferred */
    /* 0x74C */ s16 unk74C;                         /* inferred */
    /* 0x74E */ s16 unk74E;                         /* inferred */
    /* 0x750 */ char pad750[0x2];
    /* 0x752 */ s16 unk752;                         /* inferred */
    /* 0x754 */ s16 unk754;                         /* inferred */
    /* 0x756 */ char pad756[0x2];
    /* 0x758 */ f32 unk758;                         /* inferred */
    /* 0x75C */ f32 unk75C;                         /* inferred */
    /* 0x760 */ Vec3f unk760;                       /* inferred */
    /* 0x76C */ char pad76C[0x614];                 /* maybe part of unk760[130]? */
} EnWiz;                                            /* size = 0xD80 */

struct _mips2c_stack_EnWiz_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnWiz_Draw {
    /* 0x00 */ char pad0[0x58];
    /* 0x58 */ void *sp58;                          /* inferred */
    /* 0x5C */ Vec3s *sp5C;                         /* inferred */
    /* 0x60 */ char pad60[0x56];                    /* maybe part of sp5C[22]? */
    /* 0xB6 */ s16 spB6;                            /* inferred */
    /* 0xB8 */ char padB8[0x4];                     /* maybe part of spB6[3]? */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char padC0[0x20];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_EnWiz_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnWiz_Update {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ char pad2C[0x14];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A455C4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ u8 *sp28;                            /* inferred */
    /* 0x2C */ AnimationHeaderCommon **sp2C;        /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A456A0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad3C[0x8];                     /* maybe part of sp38[3]? */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80A45CD8 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x18];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A460A4 {
    /* 0x00 */ char pad0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A46280 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A462F8 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A46414 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A4668C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A46764 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A468CC {
    /* 0x00 */ char pad0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A46990 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ PosRot *sp3C;                        /* inferred */
    /* 0x40 */ char pad40[0x28];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80A46C88 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A46CC4 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A46DDC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A46E24 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ s16 sp48;                            /* inferred */
    /* 0x4A */ char pad4A[0x6];                     /* maybe part of sp48[4]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80A47000 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A470D8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A47298 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A473B8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A4767C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A476C8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A477E8 {
    /* 0x00 */ char pad0[0xA4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ char padC8[0x4];
    /* 0xCC */ s32 spCC;                            /* inferred */
};                                                  /* size = 0xD0 */

struct _mips2c_stack_func_80A47FCC {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A48138 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x8];                     /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x4];
};                                                  /* size = 0x58 */

void func_80A455C4(Actor *arg0, s32 arg1, s32 arg2); /* static */
void func_80A456A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A45CD8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A460A4(Actor *arg0);                    /* static */
void func_80A46280(EnWiz *, GlobalContext *);       /* static */
void func_80A462F8(EnWiz *arg0, GlobalContext *arg1); /* static */
void func_80A46414(Actor *arg0, void *arg1);        /* static */
void func_80A4668C(Actor *arg0);                    /* static */
void func_80A46764(Actor *arg0, ? arg1);            /* static */
void func_80A468CC(Actor *arg0, ? arg1);            /* static */
void func_80A46990(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A46C88(Actor *arg0);                    /* static */
void func_80A46CC4(Actor *arg0, ? arg1);            /* static */
void func_80A46DDC(Actor *arg0);                    /* static */
void func_80A46E24(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A47000(Actor *arg0, void *, s16, s16);  /* static */
void func_80A470D8(void *arg0, ? arg1);             /* static */
void func_80A47298(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A473B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A4767C(Actor *arg0);                    /* static */
void func_80A476C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A477E8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A47FCC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80A48138(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern ? D_06001860;
extern void D_0600211C;
extern AnimationHeaderCommon D_060025F0;
extern AnimationHeader D_060066C0;
extern FlexSkeletonHeader D_0600B320;
static ColliderJntSphElementInit D_80A48B50[10] = {
    {{0, {0xF7CFFFFF, 0, 0}, {0x1000202, 0, 0}, 0, 0, 0}, {1, {{0, 0, 0}, 0}, 1}},
    {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {1, {{0, 0, 0}, 0}, 0}},
    {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {1, {{0, 0, 0}, 0}, 0}},
    {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {1, {{0, 0, 0}, 0}, 0}},
    {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {1, {{0, 0, 0}, 0}, 0}},
    {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {1, {{0, 0, 0}, 0}, 0}},
    {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {1, {{0, 0, 0}, 0}, 0}},
    {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {1, {{0, 0, 0}, 0}, 0}},
    {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {1, {{0, 0, 0}, 0}, 0}},
    {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {1, {{0, 0, 0}, 0}, 0}},
};
static ColliderJntSphInit D_80A48CB8 = {{2, 0, 9, 0, 0x10, 0}, 0xA, &D_80A48B50};
static ColliderCylinderInit D_80A48CC8 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {1, {0xF7CFFFFF, 8, 4}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x23, 0x82, 0, {0, 0, 0}},
};
static DamageTable D_80A48CF4 = {
    {
        0x10,
        0xF1,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF1,
        0xF1,
        0xF1,
        0xF3,
        0x21,
        0x32,
        0x42,
        0,
        0xF1,
        0xF1,
        0,
        0x10,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static DamageTable D_80A48D14 = {
    {
        0x10,
        0xF1,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF1,
        0xF2,
        0xF1,
        0xF3,
        0x22,
        0x31,
        0x42,
        0,
        0xF1,
        0xF1,
        0,
        0x10,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ? D_80A48D34;                                /* unable to generate initializer */
static ? D_80A48D4C;                                /* unable to generate initializer */
static ? D_80A48D54;                                /* unable to generate initializer */
static Color_RGBA8 D_80A48D60 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80A48D64 = {0xB4, 0xB4, 0xB4, 0xFF};
static ? D_80A48D68;                                /* unable to generate initializer */
static ? D_80A48D74;                                /* unable to generate initializer */

void EnWiz_Init(EnWiz *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v1;
    EnWiz *this = (EnWiz *) thisx;

    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600B320, &D_060066C0, &this->unk188, &this->unk200, 0x14);
    SkelAnime_InitSV(globalCtx, &this->unk278, &D_0600B320, &D_060066C0, &this->unk2BC, &this->unk334, 0x14);
    Actor_SetScale((Actor *) this, 0.0f);
    this->unk3C4 = 0;
    this->unk3C2 = 0xFF;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 3;
    this->unk450 = 1.0f;
    this->actor.shape.yOffset = 700.0f;
    Collider_InitAndSetJntSph(globalCtx, &this->unk454, (Actor *) this, &D_80A48CB8, &this->unk474);
    Collider_InitAndSetCylinder(globalCtx, &this->unk6F4, (Actor *) this, &D_80A48CC8);
    temp_v1 = this->actor.params;
    this->unk3B8 = Rand_S16Offset(0, 7);
    this->unk74C = temp_v1 & 0x7F;
    this->unk74A = ((s32) temp_v1 >> 8) & 0xFF;
    if (this->unk74C == 0x7F) {
        this->unk74C = -1;
    }
    temp_v0 = this->unk74A;
    if ((temp_v0 == 0) || (temp_v0 == 2)) {
        this->actor.colChkInfo.damageTable = &D_80A48CF4;
        this->actor.colChkInfo.health = 8;
        this->actor.flags &= 0xFFEFFFFF;
    } else {
        this->actor.colChkInfo.damageTable = &D_80A48D14;
        this->actor.colChkInfo.health = 6;
    }
    temp_a1 = this->unk74C;
    if (((s32) temp_a1 >= 0) && (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.hintId = 0x4B;
    this->unk748 = 0x309;
    this->unk454.elements->dim.modelSphere.radius = 0;
    this->unk454.elements->dim.scale = 0.0f;
    this->unk454.elements->dim.modelSphere.center.x = 0;
    this->unk454.elements->dim.modelSphere.center.y = 0;
    this->unk454.elements->dim.modelSphere.center.z = 0;
    this->actionFunc = func_80A46280;
}

void EnWiz_Destroy(EnWiz *this, GlobalContext *globalCtx) {
    EnWiz *this = (EnWiz *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk6F4);
    Collider_DestroyJntSph(globalCtx, &this->unk454);
    if (this->unk74A != 2) {
        func_801A2ED8();
    }
}

void func_80A455C4(Actor *arg0, s32 arg1, s32 arg2) {
    AnimationHeaderCommon **sp2C;
    u8 *sp28;
    AnimationHeaderCommon **temp_v0;
    f32 temp_f0;
    u8 *temp_v1;

    temp_v0 = (arg1 * 4) + &D_80A48D34;
    sp2C = temp_v0;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*temp_v0);
    arg0->unk3D0 = temp_f0;
    temp_v1 = arg1 + &D_80A48D4C;
    sp28 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x144, *sp2C, 1.0f, 0.0f, temp_f0, (u8) (s32) *temp_v1, -2.0f);
    if (arg2 != 0) {
        SkelAnime_ChangeAnim(arg0 + 0x278, *sp2C, 1.0f, 0.0f, arg0->unk3D0, (u8) (s32) *temp_v1, -2.0f);
    }
}

void func_80A456A0(Actor *arg0, GlobalContext *arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    s32 sp44;
    Vec3f *sp38;
    PosRot *sp34;
    Actor *sp2C;
    Camera *temp_s0;
    PosRot *temp_a1_2;
    PosRot *temp_a1_3;
    PosRot *temp_a1_4;
    Vec3f *temp_a1;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_v0;
    s32 temp_t8;
    s32 temp_v0_2;
    s32 temp_v1_2;
    u8 temp_v1;
    s32 phi_v1;
    Actor *phi_a2;
    Vec3f *phi_s0;

    if ((s32) arg0->unk3CB < 6) {
        temp_v1 = arg0->unk3CB;
        temp_s0 = Play_GetCamera(arg1, arg0->unk74E);
        switch (temp_v1) {
        case 0:
            arg0->unk3B4 = 0x64;
            arg0->unk3CB = (u8) (temp_v1 + 1);
            arg0->unk3C8 = (s16) arg0->world.rot.y;
            break;
        case 1:
            temp_a1 = arg0 + 0x24;
            sp38 = temp_a1;
            Math_Vec3f_Copy((Vec3f *) &sp58, temp_a1);
            Math_Vec3f_Copy((Vec3f *) &sp4C, temp_a1);
            temp_f10 = sp58 + (Math_SinS(arg0->unk3C8) * 200.0f);
            sp5C += 100.0f;
            sp58 = temp_f10;
            temp_f16 = sp60 + (Math_CosS(arg0->unk3C8) * 200.0f);
            sp50 += 80.0f;
            sp60 = temp_f16;
            Math_ApproachF((f32 *) &temp_s0->eye, sp58, 0.3f, 30.0f);
            Math_ApproachF(&temp_s0->eye.z, sp60, 0.3f, 30.0f);
            Math_ApproachF((f32 *) &temp_s0->at, sp4C, 0.3f, 30.0f);
            Math_ApproachF(&temp_s0->at.z, sp54, 0.3f, 30.0f);
            temp_s0->eye.y = sp5C;
            temp_s0->at.y = sp50;
            if ((fabsf(temp_s0->eye.x - sp58) < 2.0f) && (fabsf(temp_s0->eye.y - sp5C) < 2.0f) && (fabsf(temp_s0->eye.z - sp60) < 2.0f) && (fabsf(temp_s0->at.x - sp4C) < 2.0f) && (fabsf(temp_s0->at.y - sp50) < 2.0f) && (fabsf(temp_s0->at.z - sp54) < 2.0f)) {
                temp_a1_2 = &arg1->actorCtx.actorList[2].first->world;
                sp34 = temp_a1_2;
                temp_v0 = Math_Vec3f_Yaw(sp38, (Vec3f *) temp_a1_2);
                arg0->shape.rot.y = temp_v0;
                arg0->world.rot.y = temp_v0;
                phi_v1 = 0;
                if (arg0->unk740 > 0) {
                    phi_a2 = arg0;
                    phi_s0 = arg0 + 0x81C;
                    do {
                        sp44 = phi_v1;
                        sp2C = phi_a2;
                        phi_a2->unk896 = Math_Vec3f_Yaw(phi_s0, (Vec3f *) sp34);
                        temp_v1_2 = phi_v1 + 1;
                        phi_v1 = temp_v1_2;
                        phi_a2 += 6;
                        phi_s0 += 0xC;
                    } while (temp_v1_2 < arg0->unk740);
                }
                func_80A455C4(arg0, 0, 1);
                arg0->unk3CA = 0;
                arg0->unk3C6 = 0xFF;
                Math_Vec3f_Copy(arg0 + 0x414, sp38);
                if (arg0->unk3B6 == 0) {
                    Audio_PlayActorSound2(arg0, 0x38A4U);
                } else {
                    Audio_PlayActorSound2(arg0, 0x30A6U);
                }
                arg0->unk3B4 = 0x28;
                arg0->unk3CB = (u8) (arg0->unk3CB + 1);
            }
            break;
        case 2:
            if (arg0->unk3B4 == 0) {
                arg0->unk3B4 = 0x14;
                arg0->unk3CB = (u8) (temp_v1 + 1);
            }
            break;
        case 3:
            temp_a1_3 = &arg0->world;
            sp38 = (Vec3f *) temp_a1_3;
            Math_Vec3f_Copy((Vec3f *) &sp58, (Vec3f *) temp_a1_3);
            Math_Vec3f_Copy((Vec3f *) &sp4C, (Vec3f *) temp_a1_3);
            temp_f8 = sp58 + (Math_SinS(arg0->world.rot.y) * 160.0f);
            sp5C += 70.0f;
            sp58 = temp_f8;
            temp_f12 = Math_CosS(arg0->world.rot.y) * 140.0f;
            sp4C += -10.0f;
            sp60 += temp_f12;
            sp50 += 100.0f;
            Math_ApproachF((f32 *) &temp_s0->eye, sp58, 0.3f, 30.0f);
            Math_ApproachF(&temp_s0->eye.z, sp60, 0.3f, 30.0f);
            Math_ApproachF((f32 *) &temp_s0->at, sp4C, 0.3f, 30.0f);
            Math_ApproachF(&temp_s0->at.z, sp54, 0.3f, 30.0f);
            temp_s0->eye.y = sp5C;
            temp_s0->at.y = sp50;
            if (arg0->unk3B4 == 0) {
                arg0->unk3B4 = 0xA;
                arg0->unk3CB = (u8) (arg0->unk3CB + 1);
                arg0->unk3C8 = (s16) arg0->world.rot.y;
            }
            break;
        case 4:
            if (arg0->unk3B4 == 0) {
                func_80A455C4(arg0, 1, 0);
                arg0->unk3C0 = 0;
                arg0->unk3B4 = 0x22;
                arg0->unk3CB = (u8) (arg0->unk3CB + 1);
            }
            break;
        case 5:
            Audio_PlayActorSound2(arg0, 0x30A5U);
            if (arg0->unk3B4 == 0) {
                arg0->unk3C8 = 0;
                arg0->unk3CB = 6U;
                arg0->unk44C = (s16) arg0->unk3C8;
            } else {
                Math_SmoothStepToS(arg0 + 0x3C0, 0x1388, 0x64, 0x3E8, (s16) 0x3E8);
                arg0->world.rot.y += arg0->unk3C0;
            }
            temp_a1_4 = &arg0->world;
            sp38 = (Vec3f *) temp_a1_4;
            Math_Vec3f_Copy((Vec3f *) &sp58, (Vec3f *) temp_a1_4);
            Math_Vec3f_Copy((Vec3f *) &sp4C, (Vec3f *) temp_a1_4);
            temp_f4 = sp58 + (Math_SinS(arg0->unk3C8) * 200.0f);
            sp5C += 100.0f;
            sp58 = temp_f4;
            temp_f10_2 = sp60 + (Math_CosS(arg0->unk3C8) * 200.0f);
            sp50 += 80.0f;
            sp60 = temp_f10_2;
            Math_ApproachF((f32 *) &temp_s0->eye, sp58, 0.3f, 30.0f);
            Math_ApproachF(&temp_s0->eye.z, sp60, 0.3f, 30.0f);
            Math_ApproachF((f32 *) &temp_s0->at, sp4C, 0.3f, 30.0f);
            Math_ApproachF(&temp_s0->at.z, sp54, 0.3f, 30.0f);
            temp_s0->eye.y = sp5C;
            temp_s0->at.y = sp50;
            break;
        }
        temp_v0_2 = arg0->unk3CC;
        if (temp_v0_2 < 0xB) {
            temp_t8 = temp_v0_2 + 1;
            arg0->unk3CC = temp_t8;
            if ((arg0->unk74A != 2) && (temp_t8 == 0xB)) {
                func_801A2E54(0x38);
            }
        }
    }
}

void func_80A45CD8(Actor *arg0, GlobalContext *arg1) {
    f32 sp44;
    ? *temp_a2;
    Actor *temp_v0;
    Vec3f *temp_s4;
    f32 temp_f12;
    s16 temp_v0_4;
    s16 temp_v1;
    s32 temp_f6;
    s32 temp_f8;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 temp_v0_5;
    void *temp_a1;
    void *temp_a3;
    void *temp_s1;
    void *temp_s4_2;
    void *temp_s5;
    void *temp_s6;
    void *temp_t0;
    void *temp_t1;
    void *temp_t2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1_2;
    Actor *phi_v0;
    s32 phi_s3;
    void *phi_v0_2;
    s32 phi_s3_2;
    s16 phi_v1;
    s32 phi_s3_3;
    s16 phi_s3_4;
    s16 phi_v1_2;
    s16 phi_fp;
    s16 phi_s3_5;
    Vec3f *phi_s2;
    void *phi_a0;
    void *phi_v1_3;
    ? *phi_a2;
    void *phi_a1;
    void *phi_t0;
    void *phi_a3;
    void *phi_t2;
    void *phi_t1;
    s32 phi_v0_3;
    Vec3f *phi_s2_2;
    s16 phi_s0;
    Actor *phi_s1;
    s32 phi_s3_6;
    s32 phi_s3_7;

    phi_v0 = arg0;
    phi_s3 = 0;
    phi_s3_2 = 0;
    phi_s3_3 = 0;
    phi_s3_4 = (s16) 0;
    phi_s3_6 = 0;
    do {
        temp_s3 = phi_s3 + 1;
        temp_v0 = phi_v0 + 4;
        temp_v0->unk41C = 0;
        phi_v0 = temp_v0;
        phi_s3 = temp_s3;
    } while (temp_s3 < 0xA);
    temp_v0_2 = arg1->actorCtx.actorList[6].first;
    phi_v0_2 = temp_v0_2;
    if (temp_v0_2 != 0) {
        do {
            phi_s3_7 = phi_s3_2;
            if (phi_v0_2->id != 0x15E) {

            } else {
                (arg0 + (phi_s3_2 * 4))->unk420 = phi_v0_2;
                phi_s3_7 = phi_s3_2 + 1;
                if (arg0->unk3B0 != 6) {
                    temp_v1 = arg0->unk74A;
                    phi_v1 = temp_v1;
                    if (temp_v1 == 2) {
                        phi_v1 = 0;
                    }
                    phi_v0_2->colChkInfo.health = phi_v1 + 1;
                } else {
                    phi_v0_2->colChkInfo.health = 0;
                }
            }
            temp_v0_3 = phi_v0_2->next;
            phi_v0_2 = temp_v0_3;
            phi_s3_2 = phi_s3_7;
            phi_s3_3 = phi_s3_7;
        } while (temp_v0_3 != 0);
    }
    phi_s3_4 = (s16) phi_s3_3;
    if (arg0->unk3B0 != 5) {
        arg0->unk740 = phi_s3_3;
        if (phi_s3_3 < 0) {

        } else if (arg0->unk740 >= 0xB) {
            arg0->unk740 = 0xA;
        }
        temp_f12 = (f32) phi_s3_4;
        sp44 = temp_f12;
        temp_f6 = (s32) Rand_ZeroFloat(temp_f12);
        phi_v1_2 = (s16) temp_f6;
        phi_fp = (s16) temp_f6;
        if (((s16) temp_f6 == arg0->unk748) || ((s16) temp_f6 == phi_s3_4)) {
            do {
loop_19:
                temp_f8 = (s32) Rand_ZeroFloat(sp44);
                phi_fp = (s16) temp_f8;
                if ((s16) temp_f8 == arg0->unk748) {
                    goto loop_19;
                }
            } while ((s16) temp_f8 == phi_s3_4);
            phi_v1_2 = (s16) temp_f8;
        }
        temp_v0_4 = arg0->unk3B6;
        arg0->unk748 = phi_v1_2;
        if (temp_v0_4 != 0) {
            temp_s4 = arg0 + 0x24;
            if (temp_v0_4 != 1) {
                Math_Vec3f_Copy(arg0 + 0x24, (arg0 + (phi_fp * 4))->unk420 + 0x24);
                temp_s3_2 = phi_s3_4 - 1;
                phi_s3_5 = (s16) temp_s3_2;
                if (temp_s3_2 >= 0) {
                    phi_s2 = arg0 + (temp_s3_2 * 0xC) + 0x81C;
                    do {
                        if (phi_fp != phi_s3_5) {
                            temp_s1 = arg0 + (phi_s3_5 * 2);
                            temp_s6 = arg0 + (phi_s3_5 * 0x78);
                            temp_s4_2 = arg0 + (phi_s3_5 * 6) + 0x894;
                            temp_s5 = arg0 + 0x30;
                            Math_Vec3f_Copy(phi_s2, (arg0 + (phi_s3_5 * 4))->unk420 + 0x24);
                            temp_s4_2->unk0 = (unaligned s32) temp_s5->unk0;
                            temp_s4_2->unk4 = (u16) temp_s5->unk4;
                            temp_s1->unk7F2 = 0x64;
                            temp_s1->unk806 = phi_s3_5;
                            phi_a0 = arg0 + 0x188;
                            phi_v1_3 = temp_s6 + 0x8D0;
                            phi_a2 = arg0 + 0x18E;
                            phi_a1 = temp_s6 + 0x8D6;
                            phi_t0 = arg0 + 0x194;
                            phi_a3 = temp_s6 + 0x8DC;
                            phi_t2 = arg0 + 0x19A;
                            phi_t1 = temp_s6 + 0x8E2;
                            phi_v0_3 = 0;
                            do {
                                temp_v0_5 = phi_v0_3 + 4;
                                temp_v1_2 = phi_v1_3 + 0x18;
                                temp_v1_2->unk-18 = (unaligned s32) phi_a0->unk0;
                                temp_a1 = phi_a1 + 0x18;
                                temp_v1_2->unk-14 = (u16) phi_a0->unk4;
                                temp_a2 = phi_a2 + 0x18;
                                temp_a3 = phi_a3 + 0x18;
                                temp_a1->unk-18 = (unaligned s32) *phi_a2;
                                temp_t0 = phi_t0 + 0x18;
                                temp_t1 = phi_t1 + 0x18;
                                temp_a1->unk-14 = (u16) temp_a2->unk-14;
                                temp_t2 = phi_t2 + 0x18;
                                temp_a3->unk-18 = (unaligned s32) temp_t0->unk-18;
                                temp_a3->unk-14 = (u16) temp_t0->unk-14;
                                temp_t1->unk-18 = (unaligned s32) temp_t2->unk-18;
                                temp_t1->unk-14 = (u16) temp_t2->unk-14;
                                phi_a0 += 0x18;
                                phi_v1_3 = temp_v1_2;
                                phi_a2 = temp_a2;
                                phi_a1 = temp_a1;
                                phi_t0 = temp_t0;
                                phi_a3 = temp_a3;
                                phi_t2 = temp_t2;
                                phi_t1 = temp_t1;
                                phi_v0_3 = temp_v0_5;
                            } while (temp_v0_5 != 0x14);
                        } else {
                            Math_Vec3f_Copy(phi_s2, &D_801D15B0);
                        }
                        temp_s3_3 = phi_s3_5 - 1;
                        phi_s3_5 = (s16) temp_s3_3;
                        phi_s2 += -0xC;
                    } while (temp_s3_3 >= 0);
                }
                /* Duplicate return node #37. Try simplifying control flow for better match */
                return;
            }
            Math_Vec3f_Copy(temp_s4, arg0->unk420 + 0x24);
            phi_s2_2 = arg0 + 0x81C;
            phi_s0 = 0x80;
            phi_s1 = arg0;
            if (arg0->unk740 > 0) {
                do {
                    Math_Vec3f_Copy(phi_s2_2, temp_s4);
                    phi_s1->unk7F2 = phi_s0;
                    temp_s3_4 = phi_s3_6 + 1;
                    phi_s2_2 += 0xC;
                    phi_s0 = (s16) (phi_s0 - 0xA);
                    phi_s1 += 2;
                    phi_s3_6 = temp_s3_4;
                } while (temp_s3_4 < arg0->unk740);
                return;
            }
            /* Duplicate return node #37. Try simplifying control flow for better match */
            return;
        }
        Math_Vec3f_Copy(arg0 + 0x24, (arg0 + (phi_fp * 4))->unk420 + 0x24);
    }
}

void func_80A460A4(Actor *arg0) {
    f32 *temp_s4;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_s2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1_2;
    Actor *phi_s1;
    s32 phi_s2;
    s32 phi_v1;
    s32 phi_fp;
    s32 phi_fp_2;
    s32 phi_fp_3;

    temp_v1 = arg0->unk740;
    phi_s2 = 0;
    phi_fp = 0;
    phi_v1 = temp_v1;
    phi_fp_3 = 0;
    if (temp_v1 > 0) {
        phi_s1 = arg0;
        do {
            temp_f14 = phi_s1->unk81C;
            phi_fp_2 = phi_fp_3;
            if (temp_f14 != 0.0f) {
                temp_f16 = phi_s1->unk824;
                if (temp_f16 != 0.0f) {
                    temp_v1_2 = arg0 + (phi_s2 * 2);
                    temp_v0 = temp_v1_2->unk806;
                    temp_a0 = (arg0 + (temp_v0 * 4))->unk420;
                    temp_s4 = phi_s1 + 0x81C;
                    temp_f2 = temp_a0->unk24 - temp_f14;
                    temp_f12 = temp_a0->unk2C - temp_f16;
                    phi_fp_2 = phi_fp_3 + 1;
                    if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 30.0f) {
                        temp_v1_2->unk806 = (s16) (temp_v0 - 1);
                        if ((s32) temp_v1_2->unk806 < 0) {
                            temp_v1_2->unk806 = (s16) (arg0->unk740 - 1);
                        }
                    }
                    temp_s0 = arg0 + (temp_v1_2->unk806 * 4);
                    Math_ApproachF(temp_s4, temp_s0->unk420->unk24, 0.3f, 30.0f);
                    Math_ApproachF(phi_s1 + 0x820, temp_s0->unk420->unk28, 0.3f, 30.0f);
                    Math_ApproachF(phi_s1 + 0x824, temp_s0->unk420->unk2C, 0.3f, 30.0f);
                    (arg0 + (phi_s2 * 6))->unk896 = Math_Vec3f_Yaw((Vec3f *) temp_s4, temp_s0->unk420 + 0x24);
                    phi_v1 = arg0->unk740;
                }
            }
            temp_s2 = phi_s2 + 1;
            phi_s1 += 0xC;
            phi_s2 = temp_s2;
            phi_fp = phi_fp_2;
            phi_fp_3 = phi_fp_2;
        } while (temp_s2 < phi_v1);
    }
    if (phi_fp != 0) {
        Audio_PlayActorSound2(arg0, 0x30A5U);
    }
}

void func_80A46280(EnWiz *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetFlag((s16) arg0->actor.cutscene, (Actor *) arg0);
        arg0->unk74E = ActorCutscene_GetCurrentCamera((s16) arg0->actor.cutscene);
        arg0->actor.flags |= 0x100000;
        func_80A462F8(arg0, arg1);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
}

void func_80A462F8(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp30;
    Vec3f *temp_a0;
    Vec3f *temp_s3;
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    Vec3f *phi_s1;
    Actor *phi_s2;
    s32 phi_s0;

    temp_s0 = arg1->actorCtx.actorList[2].first;
    arg0->unk3B0 = 1;
    if (arg0->unk3B2 == 0) {
        func_80A45CD8(arg0);
        temp_s3 = temp_s0 + 0x24;
        temp_a0 = arg0 + 0x24;
        if (arg0->unk3CB != 0) {
            sp30 = temp_a0;
            temp_v0 = Math_Vec3f_Yaw(temp_a0, temp_s3);
            arg0->shape.rot.y = temp_v0;
            arg0->world.rot.y = temp_v0;
            phi_s0 = 0;
            if (arg0->unk740 > 0) {
                phi_s1 = arg0 + 0x81C;
                phi_s2 = arg0;
                do {
                    phi_s2->unk896 = Math_Vec3f_Yaw(phi_s1, temp_s3);
                    temp_s0_2 = phi_s0 + 1;
                    phi_s1 += 0xC;
                    phi_s2 += 6;
                    phi_s0 = temp_s0_2;
                } while (temp_s0_2 < arg0->unk740);
            }
            func_80A455C4(arg0, 0, 1);
            arg0->unk3CA = 0;
            arg0->unk3C6 = 0xFF;
            Math_Vec3f_Copy(arg0 + 0x414, sp30);
            if (arg0->unk3B6 == 0) {
                Audio_PlayActorSound2(arg0, 0x38A4U);
            } else {
                Audio_PlayActorSound2(arg0, 0x30A6U);
            }
        }
        arg0->unk3AC = func_80A46414;
    }
}

void func_80A46414(Actor *arg0, void *arg1) {
    ? sp3C;
    void *sp38;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    u8 temp_v0_3;
    s32 phi_a0;
    s32 phi_v1;

    sp3C.unk0 = (s32) D_80A48D54.unk0;
    sp3C.unk4 = (s32) D_80A48D54.unk4;
    sp3C.unk8 = (s32) D_80A48D54.unk8;
    sp38 = arg1->unk1CCC;
    func_80A456A0(arg0);
    if ((s32) arg0->unk3CB >= 2) {
        SkelAnime_FrameUpdateMatrix((SkelAnime *) (arg0 + 0x144));
        if ((arg0->unk3B6 == 0) && ((s32) arg0->unk3CB >= 6)) {
            if (!(arg0->xzDistToPlayer < 200.0f)) {
                if (sp38->unkD57 != 0) {
                    temp_v1 = arg0->yawTowardsPlayer;
                    temp_v0 = temp_v1 - arg0->shape.rot.y;
                    phi_a0 = (s32) temp_v0;
                    if ((s32) temp_v0 < 0) {
                        phi_a0 = -(s32) temp_v0;
                    }
                    if (phi_a0 < 0x7D0) {
                        temp_v0_2 = temp_v1 - (sp38->unkBE + 0x8000);
                        phi_v1 = (s32) temp_v0_2;
                        if ((s32) temp_v0_2 < 0) {
                            phi_v1 = -(s32) temp_v0_2;
                        }
                        if (phi_v1 < 0x7D0) {
                            goto block_11;
                        }
                        goto block_12;
                    }
                    goto block_12;
                }
                goto block_12;
            }
block_11:
            func_80A47000(arg0, sp38, 0xA, 0xBB8);
            return;
        }
block_12:
        Math_SmoothStepToS(&arg0->world.rot.y, arg0->yawTowardsPlayer, 0xA, 0xBB8, (s16) 0);
        if (arg0->unk3B6 == 0) {
            Math_SmoothStepToS(arg0 + 0x3C4, arg0->unk3C6, 0xA, 0xA, (s16) 0xA);
            if (arg0->unk3CA == 0) {
                arg0->unk3B2 = 0x14;
                arg0->unk3CA = 1U;
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x30A6U);
        }
        if (arg0->unk3B2 == 0) {
            Math_ApproachF(arg0 + 0x3D4, 0.015f, 0.05f, 0.01f);
            Math_SmoothStepToS(arg0 + 0x3C2, 0xFF, 1, 5, (s16) 0);
        }
        if (!(arg0->unk3D4 < 0.0138f)) {
            arg0->unk3B0 = 7;
            arg0->flags &= 0xF7FFFFFF;
            arg0->unk470->unk8 = 0x1013A22;
            Math_Vec3f_Copy(arg0 + 0x3F0, (Vec3f *) &sp3C);
            temp_v0_3 = arg0->unk3CB;
            arg0->unk3C6 = 0;
            if (temp_v0_3 == 6) {
                arg0->unk3B2 = 0;
                arg0->unk3B4 = 0x14;
                func_80A47000(arg0);
                return;
            }
            if ((s32) temp_v0_3 >= 7) {
                if (arg0->unk3B6 == 1) {
                    arg0->unk3AC = func_80A468CC;
                    return;
                }
                func_80A4668C(arg0);
                /* Duplicate return node #25. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
    }
}

void func_80A4668C(Actor *arg0) {
    func_80A455C4(arg0, 2, 0);
    Math_ApproachF(arg0 + 0x3D4, 0.015f, 0.05f, 0.001f);
    arg0->unk3C0 = 0;
    arg0->unk44C = 0;
    arg0->unk3B0 = 9;
    if ((s32) arg0->unk3B6 >= 2) {
        SkelAnime_ChangeAnim(arg0 + 0x278, (AnimationHeader *) &D_060025F0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060025F0), (u8) 0, 0.0f);
        arg0->unk3B6 = 3;
    }
    Math_SmoothStepToS(arg0 + 0x3C2, 0xFF, 1, 5, (s16) 0);
    arg0->unk3AC = func_80A46764;
}

void func_80A46764(Actor *arg0, ? arg1) {
    f32 sp2C;
    Actor *temp_v0;
    s16 temp_v0_2;
    s32 temp_v1;
    Actor *phi_v0;
    s32 phi_v1;

    sp2C = arg0->unk15C;
    Math_SmoothStepToS(arg0 + 0x3C2, 0xFF, 1, 5, (s16) 0);
    Math_ApproachF(arg0 + 0x3D4, 0.015f, 0.05f, 0.001f);
    Audio_PlayActorSound2(arg0, 0x30A5U);
    arg0->world.rot.y += arg0->unk3C0;
    if ((s32) arg0->unk3B6 >= 3) {
        func_80A460A4(arg0);
    } else {
        phi_v0 = arg0;
        phi_v1 = 0;
        if (arg0->unk740 > 0) {
            do {
                temp_v1 = phi_v1 + 1;
                temp_v0 = phi_v0 + 6;
                temp_v0->unk890 = (s16) (phi_v0->unk896 + arg0->unk3C0);
                phi_v0 = temp_v0;
                phi_v1 = temp_v1;
            } while (temp_v1 < arg0->unk740);
        }
    }
    Math_SmoothStepToS(arg0 + 0x3C0, 0x1388, 0x64, 0x3E8, (s16) 0x3E8);
    Math_SmoothStepToS(arg0 + 0x3C4, arg0->unk3C6, 0x14, 0x32, (s16) 0xA);
    if (arg0->unk3D0 <= sp2C) {
        temp_v0_2 = arg0->unk44C;
        if ((s32) temp_v0_2 < 0xA) {
            arg0->unk44C = (s16) (temp_v0_2 + 1);
        }
    }
    if (((s32) arg0->unk44C >= 3) && (arg0->unk3BA == 0)) {
        arg0->unk3C6 = 0;
        func_80A46C88(arg0);
    }
}

void func_80A468CC(Actor *arg0, ? arg1) {
    s16 sp2E;
    s16 temp_v0;
    s32 temp_a0;

    temp_v0 = ActorCutscene_GetAdditionalCutscene((s16) arg0->cutscene);
    temp_a0 = temp_v0 << 0x10;
    sp2E = temp_v0;
    if (ActorCutscene_GetCanPlayNext((s16) (temp_a0 >> 0x10)) == 0) {
        ActorCutscene_SetIntentToPlay(sp2E);
        return;
    }
    ActorCutscene_StartAndSetFlag(sp2E, arg0);
    arg0->unk74E = ActorCutscene_GetCurrentCamera(sp2E);
    arg0->flags |= 0x100000;
    func_80A455C4(arg0, 2, 0);
    arg0->unk3B0 = 2;
    arg0->unk744 = 1;
    arg0->unk3BC = 0;
    Math_SmoothStepToS(arg0 + 0x3C2, 0xFF, 1, 5, (s16) 0);
    arg0->unk3AC = func_80A46990;
}

void func_80A46990(Actor *arg0, GlobalContext *arg1) {
    PosRot *sp3C;
    PosRot *temp_a1;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_t9;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_3;
    Vec3f *phi_s1;
    s32 phi_s0;
    Vec3f *phi_s2;
    Vec3f *phi_s3;
    void *phi_s0_2;
    s32 phi_s1_2;

    Math_SmoothStepToS(arg0 + 0x3C2, 0xFF, 1, 5, (s16) 0);
    Math_Vec3f_Copy(Play_GetCamera(arg1, arg0->unk74E) + 0x50, arg0 + 0x3C);
    Audio_PlayActorSound2(arg0, 0x30A5U);
    temp_v1 = arg0->unk744;
    temp_v0 = (arg0 + (temp_v1 * 4))->unk420;
    if ((temp_v0 != 0) && (temp_f14 = arg0->world.pos.x, temp_f16 = arg0->world.pos.z, temp_f2 = temp_f14 - temp_v0->unk24, temp_f12 = temp_f16 - temp_v0->unk2C, (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 30.0f))) {
        if (arg0->unk3BC == 0) {
            temp_t9 = temp_v1 + 1;
            arg0->unk744 = temp_t9;
            if (temp_t9 >= arg0->unk740) {
                arg0->unk3BC = 1;
                arg0->unk744 = 0;
            }
            goto block_10;
        }
        temp_v1_2 = arg0->unk740;
        temp_v0_2 = arg0 + (temp_v1_2 * 0xC);
        temp_f2_2 = temp_f14 - temp_v0_2->unk81C;
        temp_f12_2 = temp_f16 - temp_v0_2->unk824;
        arg0->flags |= 0x8000000;
        if (sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2)) < 20.0f) {
            phi_s0 = 0;
            if (temp_v1_2 > 0) {
                phi_s1 = arg0 + 0x81C;
                do {
                    Math_Vec3f_Copy(phi_s1, &D_801D15B0);
                    temp_s0 = phi_s0 + 1;
                    phi_s1 += 0xC;
                    phi_s0 = temp_s0;
                } while (temp_s0 < arg0->unk740);
            }
            arg0->unk744 = 0;
            arg0->unk740 = 0;
            arg0->unk3B6 = 2;
            arg0->unk3B2 = 0;
            ActorCutscene_Stop(ActorCutscene_GetAdditionalCutscene((s16) arg0->cutscene));
            arg0->flags &= 0xFFEFFFFF;
            func_80A47000(arg0);
            return;
        }
        goto block_10;
    }
block_10:
    temp_a1 = &arg0->world;
    sp3C = temp_a1;
    Math_Vec3f_Copy(arg0 + 0x81C, (Vec3f *) temp_a1);
    arg0->unk896 = (s16) arg0->world.rot.y;
    Math_ApproachF((f32 *) sp3C, (arg0 + (arg0->unk744 * 4))->unk420->unk24, 0.3f, 30.0f);
    Math_ApproachF(&arg0->world.pos.y, (arg0 + (arg0->unk744 * 4))->unk420->unk28, 0.3f, 30.0f);
    Math_ApproachF(&arg0->world.pos.z, (arg0 + (arg0->unk744 * 4))->unk420->unk2C, 0.3f, 30.0f);
    temp_v0_3 = arg0->unk740;
    if (temp_v0_3 > 0) {
        temp_s1 = temp_v0_3 * 0xC;
        temp_v1_3 = arg0 + temp_s1;
        phi_s2 = temp_v1_3 + 0x81C;
        phi_s3 = temp_v1_3 + 0x810;
        phi_s0_2 = arg0 + (temp_v0_3 * 6);
        phi_s1_2 = temp_s1;
        do {
            Math_Vec3f_Copy(phi_s2, phi_s3);
            temp_s1_2 = phi_s1_2 - 0xC;
            temp_s0_2 = phi_s0_2 - 6;
            temp_s0_2->unk89C = (s16) phi_s0_2->unk890;
            phi_s2 += -0xC;
            phi_s3 += -0xC;
            phi_s0_2 = temp_s0_2;
            phi_s1_2 = temp_s1_2;
        } while (temp_s1_2 >= 0xC);
    }
    arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) sp3C, (arg0 + (arg0->unk744 * 4))->unk420 + 0x24);
}

void func_80A46C88(Actor *arg0) {
    func_80A455C4((Actor *)3, 0);
    arg0->unk44C = 0;
    arg0->unk3AC = func_80A46CC4;
}

void func_80A46CC4(Actor *arg0, ? arg1) {
    f32 sp34;
    s32 temp_s0;
    s16 *phi_s1;
    s32 phi_s0;

    sp34 = arg0->unk15C;
    Math_SmoothStepToS(arg0 + 0x32, arg0->yawTowardsPlayer, 0xC8, 0x1F40, (s16) 0x1388);
    if ((s32) arg0->unk3B6 >= 3) {
        func_80A460A4(arg0);
    } else {
        phi_s1 = arg0 + 0x896;
        phi_s0 = 0;
        if (arg0->unk740 > 0) {
            do {
                Math_SmoothStepToS(phi_s1, arg0->yawTowardsPlayer, 0xC8, 0x1F40, (s16) 0x1388);
                temp_s0 = phi_s0 + 1;
                phi_s1 += 6;
                phi_s0 = temp_s0;
            } while (temp_s0 < arg0->unk740);
        }
    }
    if (arg0->unk3D0 <= sp34) {
        arg0->unk44C = (s16) (arg0->unk44C + 1);
        if ((s32) arg0->unk44C >= 2) {
            func_80A46DDC(arg0);
        }
    }
    Math_SmoothStepToS(arg0 + 0x3C4, arg0->unk3C6, 0xA, 0xA, (s16) 0xA);
}

void func_80A46DDC(Actor *arg0) {
    func_80A455C4((Actor *)4, 0);
    arg0->unk3B2 = 0;
    arg0->unk3CA = 0;
    arg0->unk3B0 = 8;
    arg0->unk3AC = func_80A46E24;
}

void func_80A46E24(Actor *arg0, GlobalContext *arg1) {
    f32 sp64;
    s32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s32 sp50;
    s16 sp48;
    Vec3f *sp44;
    Vec3f *temp_a1;
    f32 temp_f16;

    sp64 = arg0->unk15C;
    if ((s32) arg0->unk3B6 >= 3) {
        func_80A460A4(arg0);
    }
    if (arg0->unk3B2 == 0) {
        if ((func_801378B8((SkelAnime *) (arg0 + 0x144), 6.0f) != 0) && (arg0->unk3BA == 0)) {
            sp60 = arg1->actorCtx.actorList[2].first;
            sp50 = (s32) arg0->unk74A;
            Math_Vec3f_Copy((Vec3f *) &sp54, (Vec3f *) &arg0->world);
            temp_f16 = sp54 + (Math_SinS(arg0->world.rot.y) * 40.0f);
            sp58 += 60.0f;
            sp54 = temp_f16;
            sp5C += Math_CosS(arg0->world.rot.y) * 40.0f;
            if (sp50 == 2) {
                sp50 = 0;
            }
            temp_a1 = sp60 + 0x24;
            sp44 = temp_a1;
            sp48 = Math_Vec3f_Pitch((Vec3f *) &sp54, temp_a1);
            Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x15F, sp54, sp58, sp5C, (s16) (s32) sp48, (s16) Math_Vec3f_Yaw((Vec3f *) &sp54, temp_a1), (s16) 0, sp50 * 4);
            arg0->unk3BA = 1;
            Audio_PlayActorSound2(arg0, 0x38A8U);
            Audio_PlayActorSound2(arg0, 0x879U);
        }
        if ((sp64 >= 8.0f) && (arg0->unk3CA == 0)) {
            arg0->unk3B2 = 3;
            arg0->unk3CA = 1U;
        }
        if (arg0->unk3D0 <= sp64) {
            func_80A47000(arg0);
        }
    }
}

void func_80A47000(Actor *arg0) {
    if (arg0->unk3B0 != 4) {
        arg0->unk3C0 = 0x2710;
        arg0->unk3B2 = 0;
        func_80A455C4(arg0, 0, 0);
        arg0->unk3B0 = 3;
    } else {
        arg0->unk3C0 = 0x2710;
        arg0->world.rot.y += arg0->unk3C0;
    }
    arg0->unk3C6 = 0;
    arg0->flags |= 0x8000000;
    Audio_PlayActorSound2(arg0, 0x3877U);
    Math_SmoothStepToS(arg0 + 0x3C0, 0x1388, 0x64, 0x3E8, (s16) 0x3E8);
    arg0->world.rot.y += arg0->unk3C0;
    arg0->flags &= -2;
    arg0->unk3AC = func_80A470D8;
}

void func_80A470D8(void *arg0, ? arg1) {
    s32 temp_v1;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;

    Math_SmoothStepToS(arg0 + 0x3C0, 0, 0xA, 0xBB8, (s16) 0x14);
    arg0->unk32 = (s16) (arg0->unk32 + arg0->unk3C0);
    if ((arg0->unk3B6 == 0) || (arg0->unk3B0 == 4)) {
        Math_ApproachZeroF(arg0 + 0x3D4, 0.3f, 0.01f);
        Math_SmoothStepToS(arg0 + 0x3C4, arg0->unk3C6, 5, 0x32, (s16) 0);
    } else {
        Math_ApproachZeroF(arg0 + 0x3D4, 0.3f, 0.001f);
        Math_SmoothStepToS(arg0 + 0x3C4, arg0->unk3C6, 0xA, 0x32, (s16) 0);
        phi_v0 = arg0;
        phi_v1 = 0;
        if (arg0->unk740 > 0) {
            do {
                temp_v1 = phi_v1 + 1;
                temp_v0 = phi_v0 + 6;
                temp_v0->unk890 = (s16) (phi_v0->unk896 + arg0->unk3C0);
                phi_v0 = temp_v0;
                phi_v1 = temp_v1;
            } while (temp_v1 < arg0->unk740);
        }
    }
    Math_Vec3f_Copy(arg0 + 0x3F0, &D_801D15B0);
    if (arg0->unk3D4 < 0.001f) {
        arg0->unk3D4 = 0.0f;
        if ((arg0->unk3CB == 6) && (arg0->unk3B4 == 0)) {
            arg0->unk3CB = 7U;
            ActorCutscene_Stop((s16) arg0->unk38);
            arg0->unk4 = (s32) (arg0->unk4 & 0xFFEFFFFF);
        }
        if (arg0->unk3CB != 6) {
            arg0->unk3C2 = 0;
            if (arg0->unk3B6 == 0) {
                arg0->unk470->unk8 = 0x1000202;
            }
            arg0->unk3AC = func_80A462F8;
            arg0->unk4 = (s32) (arg0->unk4 | 1);
        }
    }
}

void func_80A47298(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;

    func_80A455C4(arg0, 5, 0);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
    arg0->unk3B2 = 0x14;
    if ((arg0->unk3B6 != 0) && ((s32) arg0->colChkInfo.health <= 0)) {
        Enemy_StartFinishingBlow(arg1, arg0);
        Audio_PlayActorSound2(arg0, 0x38AAU);
        arg0->unk3B2 = 0;
        arg0->flags &= -2;
    } else {
        Audio_PlayActorSound2(arg0, 0x38A9U);
    }
    arg0->unk740 = 0;
    arg0->unk3C6 = 0;
    arg0->unk3D4 = 0.015f;
    if ((arg0->unk752 != 0) && ((temp_v1 = arg0->unk754, (temp_v1 == 0)) || (temp_v1 == 0x14))) {
        arg0->unk3B2 = 0;
    }
    arg0->unk3C0 = 0x4E20;
    if ((arg0->unk752 != 0) && (arg0->unk754 == 0xB)) {
        arg0->unk3C0 = 0;
        arg0->unk3B2 = 0;
    }
    arg0->unk3B0 = 4;
    arg0->unk3AC = func_80A473B8;
}

void func_80A473B8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0_2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v1;
    Actor *phi_v0;
    s32 phi_v1;

    if (((s32) arg0->unk752 < 0x32) && (arg0->unk754 == 0xB)) {
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x760), 0xC, 2, 1.0f, 0.7f);
        arg0->unk752 = 0;
        arg0->unk754 = 0;
        arg0->unk3C0 = 0x4E20;
        arg0->velocity.y = 30.0f;
        arg0->gravity = -3.0f;
    }
    if (((s32) arg0->unk752 != 0) && ((s32) arg0->unk752 < 0x1E) && ((temp_v0 = arg0->unk754, (temp_v0 == 0)) || (temp_v0 == 0x14))) {
        arg0->velocity.y = 30.0f;
        arg0->gravity = -3.0f;
        arg0->unk752 = 0;
        arg0->unk754 = 0;
    } else if ((arg0->unk750 == 0) && (arg0->unk3B6 != 0) && ((s32) arg0->colChkInfo.health <= 0)) {
        arg0->velocity.y = 30.0f;
        arg0->gravity = -3.0f;
        arg0->unk750 = 1;
    }
    arg0->world.rot.y += arg0->unk3C0;
    Math_SmoothStepToS(arg0 + 0x3C0, 0, 0xA, 0xBB8, (s16) 0x14);
    phi_v0 = arg0;
    phi_v1 = 0;
    if (arg0->unk740 > 0) {
        do {
            temp_v1 = phi_v1 + 1;
            temp_v0_2 = phi_v0 + 6;
            temp_v0_2->unk890 = (s16) (phi_v0->unk896 + arg0->unk3C0);
            phi_v0 = temp_v0_2;
            phi_v1 = temp_v1;
        } while (temp_v1 < arg0->unk740);
    }
    if ((arg0->unk3B2 == 1) || ((arg0->velocity.y < 0.0f) && (arg0->world.pos.y < ((arg0 + (arg0->unk748 * 4))->unk420->unk28 + 11.0f)))) {
        arg0->unk3B2 = 0;
        temp_v0_3 = arg0->unk3B2;
        arg0->velocity.y = 0.0f;
        arg0->gravity = 0.0f;
        arg0->unk752 = temp_v0_3;
        arg0->unk754 = temp_v0_3;
        if ((s32) arg0->colChkInfo.health <= 0) {
            if (arg0->unk3B6 == 0) {
                temp_v0_4 = arg0->unk74A;
                arg0->unk3B6 = 1;
                if ((temp_v0_4 == 0) || (temp_v0_4 == 2)) {
                    arg0->colChkInfo.health = 8;
                } else {
                    arg0->colChkInfo.health = 6;
                }
                func_80A47000(arg0);
            } else {
                func_80A4767C(arg0);
            }
        } else {
            func_80A47000(arg0);
        }
        arg0->flags |= 0x8000000;
    }
    Math_SmoothStepToS(arg0 + 0x3C4, arg0->unk3C6, 0x14, 0x32, (s16) 0xA);
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    Actor_UpdateBgCheckInfo(arg1, arg0, 35.0f, 40.0f, 40.0f, 0x1FU);
}

void func_80A4767C(Actor *arg0) {
    func_80A455C4((Actor *)5, 0);
    arg0->unk3C0 = 0x2710;
    arg0->unk3B0 = 5;
    arg0->unk3B2 = 0;
    arg0->unk3AC = func_80A476C8;
}

void func_80A476C8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    s32 temp_s0;
    s16 *phi_s1;
    s32 phi_s0;

    arg0->world.rot.y += arg0->unk3C0;
    Math_SmoothStepToS(arg0 + 0x3C0, 0, 0xA, 0xBB8, (s16) 0x14);
    if ((s32) arg0->unk3C0 < 0x1E) {
        Math_SmoothStepToS(arg0 + 0x3C2, 0, 0xA, 0x1E, (s16) 0x14);
        phi_s1 = arg0 + 0x7F2;
        phi_s0 = 0;
        if (arg0->unk740 > 0) {
            do {
                Math_SmoothStepToS(phi_s1, 0, 0xA, 0x1E, (s16) 0x14);
                temp_s0 = phi_s0 + 1;
                phi_s1 += 2;
                phi_s0 = temp_s0;
            } while (temp_s0 < arg0->unk740);
        }
        arg0->unk3B0 = 6;
    }
    if ((s32) arg0->unk3C2 < 0x1E) {
        func_80A45CD8(arg0, arg1);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x32, 0x3878U);
        Actor_MarkForDeath(arg0);
        temp_a1 = arg0->unk74C;
        if ((s32) temp_a1 >= 0) {
            Actor_SetSwitchFlag(arg1, (s32) temp_a1);
        }
    }
}

void func_80A477E8(Actor *arg0, GlobalContext *arg1) {
    s32 spCC;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    Actor *temp_s1;
    Vec3f *temp_s3;
    f32 *temp_s2;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f20;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s1_2;
    s32 temp_v0_3;
    s32 temp_v1;
    u8 temp_s0;
    void *temp_v0_4;
    Actor *phi_s1;
    s32 phi_s2;
    Actor *phi_s1_2;
    Actor *phi_s1_3;
    s32 phi_v1;
    f32 phi_f0;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s1_4;
    s32 phi_v1_2;
    Actor *phi_s1_5;

    temp_s1 = arg0;
    phi_s1 = temp_s1;
    phi_s2 = 0;
    phi_s1_2 = temp_s1;
    phi_s2 = 0;
    if ((temp_s1->unk705 & 2) != 0) {
        temp_s1->unk465 = (u8) (temp_s1->unk465 & 0xFFFD);
        if ((s32) temp_s1->unk3B0 >= 7) {
            temp_s0 = temp_s1->colChkInfo.damageEffect;
            if (temp_s0 != 2) {
                if (temp_s0 != 3) {
                    if (temp_s0 != 4) {
                        if (temp_s0 != 0xF) {

                        } else {
                            phi_s2 = 1;
                        }
                    } else {
                        temp_v0 = temp_s1->unk754;
                        if (((temp_v0 != 0xB) && (temp_v0 != 0xA)) || (arg0 = temp_s1, (temp_s1->unk752 == 0))) {
                            arg0 = temp_s1;
                            Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, temp_s1->focus.pos.x, temp_s1->focus.pos.y, temp_s1->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                            arg0->unk752 = 0x28;
                            arg0->unk754 = 0x14;
                            phi_s2 = 1;
                        }
                        goto block_19;
                    }
                } else {
                    temp_v0_2 = temp_s1->unk74A;
                    if ((temp_v0_2 == 0) || (temp_v0_2 == 2)) {
                        temp_s1->unk752 = 0x50;
                        temp_s1->unk754 = 0xB;
                        temp_s1->unk758 = 0.0f;
                        temp_s1->unk75C = 1.5f;
                    }
                    arg0 = temp_s1;
                    Actor_ApplyDamage(temp_s1);
                    func_80A47298(arg0, arg1);
block_19:
                    phi_s1 = arg0;
                }
            } else {
                if (temp_s1->unk74A == 1) {
                    temp_s1->unk752 = 0x28;
                    temp_s1->unk754 = 0;
                }
                phi_s2 = 1;
            }
            phi_s1->unk3C2 = 0xFF;
            phi_s1_2 = phi_s1;
            if (phi_s2 != 0) {
                arg0 = phi_s1;
                Actor_ApplyDamage(phi_s1);
                func_80A47298(arg0, arg1);
                return;
            }
            goto block_22;
        }
        /* Duplicate return node #39. Try simplifying control flow for better match */
        return;
    }
block_22:
    temp_v0_3 = phi_s1_2->unk740;
    phi_s1_3 = phi_s1_2;
    if ((temp_v0_3 != 0) && (phi_s1_2->unk3B6 != 1)) {
        phi_v1 = 0;
        if (temp_v0_3 > 0) {
            temp_s5 = &spBC;
            temp_s4 = &spB0;
            temp_s2 = &spA4;
            phi_f0 = 0.0f;
            phi_f0 = 0.0f;
            do {
                phi_v1_2 = phi_v1;
                phi_s1_5 = phi_s1_3;
                if ((gGameInfo->data[1682] != 0) || (((phi_s1_3->unk470 + (phi_v1 << 6))->unk56 & 2) != 0)) {
                    phi_s1_3->unk3B6 = 2;
                    temp_v0_4 = phi_s1_3 + (phi_v1 * 0xC);
                    phi_s1_3->unk465 = (u8) (phi_s1_3->unk465 & 0xFFFD);
                    arg0 = phi_s1_3;
                    temp_s3 = temp_v0_4 + 0x81C;
                    if (phi_f0 == temp_v0_4->unk81C) {
                        if (phi_f0 != temp_v0_4->unk824) {
                            arg0 = phi_s1_3;
                            goto block_31;
                        }
                    } else {
block_31:
                        spCC = phi_v1;
                        phi_s1_4 = 0;
                        do {
                            spBC = 0.0f;
                            spC0 = 1.0f;
                            spC4 = 0.0f;
                            spB0 = 0.0f;
                            spB4 = 1.0f;
                            spB8 = 0.0f;
                            temp_f20 = (f32) Rand_S16Offset(0x14, 0xA);
                            Math_Vec3f_Copy((Vec3f *) temp_s2, temp_s3);
                            phi_s0 = 1;
                            phi_s0_2 = 1;
                            if (Rand_ZeroOne() < 0.5f) {
                                phi_s0 = -1;
                            }
                            spA4 += (f32) Rand_S16Offset(0x14, 0x14) * (f32) phi_s0;
                            spA8 += 70.0f + randPlusMinusPoint5Scaled(30.0f);
                            if (Rand_ZeroOne() < 0.5f) {
                                phi_s0_2 = -1;
                            }
                            spAC += (f32) Rand_S16Offset(0x14, 0x14) * (f32) phi_s0_2;
                            func_800B0DE0(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s4, (Vec3f *) temp_s5, &D_80A48D60, &D_80A48D64, (s16) Rand_S16Offset(0x15E, 0x64), (s16) (s32) temp_f20);
                            temp_s1_2 = phi_s1_4 + 1;
                            phi_s1_4 = temp_s1_2;
                        } while (temp_s1_2 != 9);
                        Audio_PlaySoundAtPosition(arg1, temp_s3, 0x32, 0x38A7U);
                        Math_Vec3f_Copy(temp_s3, &D_801D15B0);
                        phi_v1_2 = spCC;
                        phi_s1_5 = arg0;
                    }
                }
                temp_v1 = phi_v1_2 + 1;
                phi_s1_3 = phi_s1_5;
                phi_v1 = temp_v1;
            } while (temp_v1 < phi_s1_5->unk740);
        }
    }
}

void EnWiz_Update(EnWiz *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp28;
    ? *temp_t0;
    ? *temp_t1;
    ? *temp_t1_2;
    ? *temp_t2;
    ? *temp_t2_2;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_s1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_ra;
    s32 temp_ra_2;
    s32 temp_v0_5;
    s32 temp_v0_6;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v1;
    void *temp_v1_2;
    Vec3s *phi_a3;
    void *phi_v1;
    ? *phi_t0;
    void *phi_a0;
    ? *phi_t1;
    void *phi_a1;
    ? *phi_t2;
    void *phi_a2;
    s32 phi_v0;
    s32 phi_ra;
    Vec3s *phi_a3_2;
    void *phi_v1_2;
    ? *phi_t0_2;
    void *phi_a0_2;
    ? *phi_t1_2;
    void *phi_a1_2;
    ? *phi_t2_2;
    void *phi_a2_2;
    s32 phi_v0_2;
    s32 phi_ra_2;
    EnWiz *phi_s1;
    EnWiz *phi_s1_2;
    EnWiz *this = (EnWiz *) thisx;

    if (this->unk3B0 != 1) {
        SkelAnime_FrameUpdateMatrix(&this->unk144);
        SkelAnime_FrameUpdateMatrix(&this->unk278);
    }
    Actor_SetHeight((Actor *) this, 60.0f);
    Actor_SetScale((Actor *) this, this->unk3D4);
    func_80A477E8((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk3B2;
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if (temp_v0 != 0) {
        this->unk3B2 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk3B4;
    if (temp_v0_2 != 0) {
        this->unk3B4 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk752;
    if (temp_v0_3 != 0) {
        this->unk752 = temp_v0_3 - 1;
    }
    this->unk6F4.dim.radius = 0x23;
    this->unk6F4.dim.height = 0x82;
    this->unk6F4.dim.yShift = 0;
    if ((s32) this->unk3B0 >= 7) {
        temp_s1 = &globalCtx->colChkCtx;
        CollisionCheck_SetAC(globalCtx, temp_s1, (Collider *) &this->unk454);
        temp_a1 = &this->unk6F4;
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        CollisionCheck_SetAC(globalCtx, temp_s1, (Collider *) sp28);
        CollisionCheck_SetOC(globalCtx, temp_s1, (Collider *) sp28);
    }
    Math_ApproachF(&this->unk3E4, this->unk3F0, 0.3f, 0.002f);
    Math_ApproachF(&this->unk3E8, this->unk3F4, 0.3f, 0.002f);
    Math_ApproachF(&this->unk3EC, this->unk3F8, 0.3f, 0.002f);
    temp_v0_4 = this->unk3B6;
    if (temp_v0_4 == 0) {
        this->unk740 = 0;
        return;
    }
    if (temp_v0_4 == 3) {
        phi_ra = 0;
        phi_s1 = this;
        if (this->unk740 > 0) {
            do {
                phi_a3 = &this->unk2BC;
                phi_v1 = phi_s1 + 0x8D0;
                phi_t0 = &this->unk2C2;
                phi_a0 = phi_s1 + 0x8D6;
                phi_t1 = &this->unk2C8;
                phi_a1 = phi_s1 + 0x8DC;
                phi_t2 = &this->unk2CE;
                phi_a2 = phi_s1 + 0x8E2;
                phi_v0 = 0;
loop_15:
                temp_v0_5 = phi_v0 + 4;
                temp_v1 = phi_v1 + 0x18;
                temp_v1->unk-18 = (unaligned s32) phi_a3->unk0;
                temp_a0 = phi_a0 + 0x18;
                temp_a1_2 = phi_a1 + 0x18;
                temp_v1->unk-14 = (u16) phi_a3->z;
                temp_a2 = phi_a2 + 0x18;
                temp_a0->unk-18 = (unaligned s32) phi_t0->unk0;
                temp_t1 = phi_t1 + 0x18;
                temp_a0->unk-14 = (u16) phi_t0->unk4;
                temp_t2 = phi_t2 + 0x18;
                temp_a1_2->unk-18 = (unaligned s32) temp_t1->unk-18;
                temp_a1_2->unk-14 = (u16) temp_t1->unk-14;
                temp_a2->unk-18 = (unaligned s32) temp_t2->unk-18;
                temp_a2->unk-14 = (u16) temp_t2->unk-14;
                phi_a3 += 0x18;
                phi_v1 = temp_v1;
                phi_t0 += 0x18;
                phi_a0 = temp_a0;
                phi_t1 = temp_t1;
                phi_a1 = temp_a1_2;
                phi_t2 = temp_t2;
                phi_a2 = temp_a2;
                phi_v0 = temp_v0_5;
                if (temp_v0_5 != 0x14) {
                    goto loop_15;
                }
                temp_ra = phi_ra + 1;
                phi_ra = temp_ra;
                phi_s1 += 0x78;
            } while (temp_ra < this->unk740);
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    phi_ra_2 = 0;
    phi_s1_2 = this;
    if (this->unk740 > 0) {
        do {
            phi_a3_2 = &this->unk188;
            phi_v1_2 = phi_s1_2 + 0x8D0;
            phi_t0_2 = &this->unk18E;
            phi_a0_2 = phi_s1_2 + 0x8D6;
            phi_t1_2 = &this->unk194;
            phi_a1_2 = phi_s1_2 + 0x8DC;
            phi_t2_2 = &this->unk19A;
            phi_a2_2 = phi_s1_2 + 0x8E2;
            phi_v0_2 = 0;
loop_20:
            temp_v0_6 = phi_v0_2 + 4;
            temp_v1_2 = phi_v1_2 + 0x18;
            temp_v1_2->unk-18 = (unaligned s32) phi_a3_2->unk0;
            temp_a0_2 = phi_a0_2 + 0x18;
            temp_v1_2->unk-14 = (u16) phi_a3_2->z;
            temp_t0 = phi_t0_2 + 0x18;
            temp_a1_3 = phi_a1_2 + 0x18;
            temp_a0_2->unk-18 = (unaligned s32) *phi_t0_2;
            temp_t1_2 = phi_t1_2 + 0x18;
            temp_a2_2 = phi_a2_2 + 0x18;
            temp_a0_2->unk-14 = (u16) temp_t0->unk-14;
            temp_t2_2 = phi_t2_2 + 0x18;
            temp_a1_3->unk-18 = (unaligned s32) temp_t1_2->unk-18;
            temp_a1_3->unk-14 = (u16) temp_t1_2->unk-14;
            temp_a2_2->unk-18 = (unaligned s32) temp_t2_2->unk-18;
            temp_a2_2->unk-14 = (u16) temp_t2_2->unk-14;
            phi_a3_2 += 0x18;
            phi_v1_2 = temp_v1_2;
            phi_t0_2 = temp_t0;
            phi_a0_2 = temp_a0_2;
            phi_t1_2 = temp_t1_2;
            phi_a1_2 = temp_a1_3;
            phi_t2_2 = temp_t2_2;
            phi_a2_2 = temp_a2_2;
            phi_v0_2 = temp_v0_6;
            if (temp_v0_6 != 0x14) {
                goto loop_20;
            }
            temp_ra_2 = phi_ra_2 + 1;
            phi_ra_2 = temp_ra_2;
            phi_s1_2 += 0x78;
        } while (temp_ra_2 < this->unk740);
    }
}

void func_80A47FCC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp28;
    f32 sp24;

    sp24.unk0 = D_80A48D68.unk0;
    sp24.unk4 = (s32) D_80A48D68.unk4;
    sp24.unk8 = (s32) D_80A48D68.unk8;
    if (arg1 == 9) {
        sp24 = 0x45E42000;
        sp28 = -1500.0f;
        if (arg4->unk3B0 != 9) {
            sp28 = 0.0f;
            sp24 = 0x45A5A000;
        }
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp24, arg4 + 0x3D8);
    }
    Collider_UpdateSpheres(arg1, arg4 + 0x454);
    if ((arg1 == 1) || (arg1 == 2) || (arg1 == 3) || (arg1 == 4) || (arg1 == 6) || (arg1 == 7) || (arg1 == 0xA) || (arg1 == 0xB) || (arg1 == 0xC) || (arg1 == 0xF) || (arg1 == 0x12) || (arg1 == 0xD)) {
        SysMatrix_GetStateTranslation(arg4 + (arg4->unk7F0 * 0xC) + 0x760);
        arg4->unk7F0 = (s16) (arg4->unk7F0 + 1);
        if ((s32) arg4->unk7F0 >= 0xC) {
            arg4->unk7F0 = 0;
        }
    }
}

void func_80A48138(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 sp3C;
    f32 sp38;

    sp4C.unk0 = D_80A48D74.unk0;
    sp4C.unk4 = (s32) D_80A48D74.unk4;
    sp4C.unk8 = (s32) D_80A48D74.unk8;
    if (arg4->unk3B0 != 6) {
        if (arg1 == 9) {
            sp4C = 0x45E42000;
            sp50 = -1500.0f;
            if (arg4->unk3B0 != 9) {
                sp50 = 0.0f;
                sp4C = 0x45A5A000;
            }
            SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp4C, arg4 + 0x3D8);
        }
    } else {
        if (arg4->unk3B2 == 0) {
            SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp4C, (Vec3f *) &sp38);
            sp38 += randPlusMinusPoint5Scaled(4.0f);
            sp3C += randPlusMinusPoint5Scaled(7.0f);
            sp40 += randPlusMinusPoint5Scaled(5.0f);
            func_800B3030(arg0, (Vec3f *) &sp38, &D_801D15B0, &D_801D15B0, (s16) (s32) ((Rand_ZeroFloat(1.0f) * 50.0f) + 70.0f), (s16) 0xA, 1);
            Audio_PlaySoundAtPosition(arg0, (Vec3f *) &sp38, 0xA, 0x3878U);
        }
        if ((arg1 >= 0x13) && (arg4->unk3B2 == 0)) {
            arg4->unk3B2 = 4;
        }
    }
    if ((arg1 == 1) || (arg1 == 2) || (arg1 == 3) || (arg1 == 4) || (arg1 == 6) || (arg1 == 7) || (arg1 == 0xA) || (arg1 == 0xB) || (arg1 == 0xC) || (arg1 == 0xF) || (arg1 == 0x12) || (arg1 == 0xD)) {
        SysMatrix_GetStateTranslation(arg4 + (arg4->unk7F0 * 0xC) + 0x760);
        arg4->unk7F0 = (s16) (arg4->unk7F0 + 1);
        if ((s32) arg4->unk7F0 >= 0xC) {
            arg4->unk7F0 = 0;
        }
    }
}

void EnWiz_Draw(EnWiz *this, GlobalContext *globalCtx) {
    f32 spBC;
    s16 spB6;
    Vec3s *sp5C;
    void *sp58;
    ColliderJntSphElement *temp_v1_8;
    ColliderJntSphElement *temp_v1_9;
    Gfx *temp_s0_2;
    Gfx *temp_s0_3;
    Gfx *temp_s0_4;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s5;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1_5;
    s32 temp_s3;
    void *temp_s0;
    s32 phi_v0;
    EnWiz *phi_s2;
    s32 phi_s3;
    EnWiz *this = (EnWiz *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s5 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    if ((this->unk3B0 == 6) || (this->unk3C2 != 0xFF)) {
        Scene_SetRenderModeXlu(globalCtx, 1, 2U);
        temp_v1_3 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w1 = 0;
        temp_v1_3->words.w0 = 0xE7000000;
        temp_v1_4 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xFB000000;
        temp_v1_4->words.w1 = this->unk3C2 & 0xFF;
        temp_s5->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, func_80A48138, (Actor *) this, temp_s5->polyXlu.p);
    } else {
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_v1 = temp_s5->polyOpa.p;
        temp_s5->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w1 = 0;
        temp_v1->words.w0 = 0xE7000000;
        temp_v1_2 = temp_s5->polyOpa.p;
        temp_s5->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFB000000;
        temp_v1_2->words.w1 = (this->unk3C2 & 0xFF) | ~0xFF;
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, func_80A47FCC, (Actor *) this);
    }
    temp_v1_5 = this->unk752;
    if (temp_v1_5 != 0) {
        temp_f6 = (f32) temp_v1_5;
        temp_v0 = this->unk754;
        if ((temp_v0 == 0xB) || (temp_v0 == 0xA)) {
            this->unk758 += 0.3f;
            if (this->unk758 > 0.5f) {
                this->unk758 = 0.5f;
            }
            spBC = temp_f6 * 0.05f;
            Math_ApproachF(&this->unk75C, this->unk758, 0.1f, 0.04f);
        } else {
            this->unk758 = 0.8f;
            this->unk75C = 0.8f;
        }
        func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk760, 0xC, this->unk758, this->unk75C, temp_f6 * 0.05f, (u8) (s32) this->unk754);
    }
    if (this->unk740 > 0) {
        SysMatrix_StatePush();
        phi_v0 = (s32) this->unk742;
        phi_s2 = this;
        if (this->unk3B6 == 1) {
            phi_v0 = 0xA;
        }
        phi_s3 = 0;
        if (phi_v0 > 0) {
            spB6 = (s16) phi_v0;
            do {
                func_8012C28C(globalCtx->state.gfxCtx);
                func_8012C2DC(globalCtx->state.gfxCtx);
                temp_f12 = phi_s2->unk81C;
                if (temp_f12 != 0.0f) {
                    temp_f0 = phi_s2->unk824;
                    if (temp_f0 != 0.0f) {
                        temp_s0 = this + (phi_s3 * 6);
                        sp5C = this + (phi_s3 * 0x78) + 0x8D0;
                        sp58 = this + (phi_s3 * 2);
                        SysMatrix_InsertTranslation(temp_f12, phi_s2->unk820 + 10.0f, temp_f0, 0);
                        temp_f12_2 = this->unk3D4;
                        Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
                        Matrix_RotateY(temp_s0->unk896, 1U);
                        SysMatrix_InsertXRotation_s(temp_s0->unk894, 1);
                        SysMatrix_InsertZRotation_s(temp_s0->unk898, 1);
                        Scene_SetRenderModeXlu(globalCtx, 1, 2U);
                        temp_v1_6 = temp_s5->polyXlu.p;
                        temp_s5->polyXlu.p = temp_v1_6 + 8;
                        temp_v1_6->words.w1 = 0;
                        temp_v1_6->words.w0 = 0xE7000000;
                        temp_v1_7 = temp_s5->polyXlu.p;
                        temp_s5->polyXlu.p = temp_v1_7 + 8;
                        temp_v1_7->words.w0 = 0xFB000000;
                        temp_v1_7->words.w1 = sp58->unk7F2 & 0xFF;
                        temp_s5->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk278.skeleton, sp5C, (s32) this->unk278.dListCount, NULL, NULL, (Actor *) this, temp_s5->polyXlu.p);
                        this->unk454.elements[phi_s3].unk70 = (s16) (s32) phi_s2->unk81C;
                        this->unk454.elements[phi_s3].unk72 = (s16) (s32) (phi_s2->unk820 + 50.0f);
                        this->unk454.elements[phi_s3].unk74 = (s16) (s32) phi_s2->unk824;
                        temp_v1_8 = this->unk454.elements;
                        temp_v1_8[phi_s3].unk76 = (s16) temp_v1_8->dim.modelSphere.radius;
                        temp_v1_9 = this->unk454.elements;
                        temp_v1_9[phi_s3].unk78 = (f32) temp_v1_9->dim.scale;
                    }
                }
                temp_s3 = phi_s3 + 1;
                phi_s2 += 0xC;
                phi_s3 = temp_s3;
            } while (temp_s3 != spB6);
        }
        SysMatrix_StatePop();
    }
    func_8012C2DC(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    if (this->unk3B6 == 0) {
        SysMatrix_StatePush();
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600211C));
        SysMatrix_InsertTranslation(this->unk414, this->unk418, this->unk41C, 0);
        Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
        temp_v1_10 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v1_10 + 8;
        temp_v1_10->words.w1 = 0;
        temp_v1_10->words.w0 = 0xE7000000;
        temp_v1_11 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v1_11 + 8;
        temp_v1_11->words.w0 = 0xFA000080;
        temp_v1_11->words.w1 = (this->unk3C4 & 0xFF) | ~0xFF;
        temp_v0_2 = this->unk74A;
        if ((temp_v0_2 == 0) || (temp_v0_2 == 2)) {
            temp_v1_13 = temp_s5->polyXlu.p;
            temp_s5->polyXlu.p = temp_v1_13 + 8;
            temp_v1_13->words.w1 = 0xFF0064FF;
            temp_v1_13->words.w0 = 0xFB000000;
        } else {
            temp_v1_12 = temp_s5->polyXlu.p;
            temp_s5->polyXlu.p = temp_v1_12 + 8;
            temp_v1_12->words.w1 = 0x3200FFFF;
            temp_v1_12->words.w0 = 0xFB000000;
        }
        temp_s0_2 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_s0_2 + 8;
        temp_s0_2->words.w0 = 0xDA380003;
        temp_s0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_14 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v1_14 + 8;
        temp_v1_14->words.w0 = 0xDE000000;
        temp_v1_14->words.w1 = (u32) &D_06001860;
        SysMatrix_StatePop();
    }
    SysMatrix_InsertTranslation(this->unk3D8, this->unk3DC, this->unk3E0, 0);
    Matrix_Scale(this->unk3E4, this->unk3E8, this->unk3EC, 1);
    temp_s0_3 = temp_s5->polyXlu.p;
    temp_s5->polyXlu.p = temp_s0_3 + 8;
    temp_s0_3->words.w0 = 0xDB060020;
    temp_s0_3->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((this->unk3B8 * 0xA) - (globalCtx->state.frames * 0x14)) & 0x1FF, 0x20, 0x80);
    temp_v1_15 = temp_s5->polyXlu.p;
    temp_s5->polyXlu.p = temp_v1_15 + 8;
    temp_v1_15->words.w1 = 0;
    temp_v1_15->words.w0 = 0xE7000000;
    temp_v0_3 = this->unk74A;
    if ((temp_v0_3 == 0) || (temp_v0_3 == 2)) {
        temp_v1_18 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v1_18 + 8;
        temp_v1_18->words.w1 = -0x5501;
        temp_v1_18->words.w0 = 0xFA008080;
        temp_v1_19 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v1_19 + 8;
        temp_v1_19->words.w1 = 0xFF3200FF;
        temp_v1_19->words.w0 = 0xFB000000;
    } else {
        temp_v1_16 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v1_16 + 8;
        temp_v1_16->words.w0 = 0xFA008080;
        temp_v1_16->words.w1 = 0xAAFFFFFF;
        temp_v1_17 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v1_17 + 8;
        temp_v1_17->words.w0 = 0xFB000000;
        temp_v1_17->words.w1 = 0x32FFFF;
    }
    SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
    temp_s0_4 = temp_s5->polyXlu.p;
    temp_s5->polyXlu.p = temp_s0_4 + 8;
    temp_s0_4->words.w0 = 0xDA380003;
    temp_s0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1_20 = temp_s5->polyXlu.p;
    temp_s5->polyXlu.p = temp_v1_20 + 8;
    temp_v1_20->words.w0 = 0xDE000000;
    temp_v1_20->words.w1 = (u32) D_0407D590;
}
