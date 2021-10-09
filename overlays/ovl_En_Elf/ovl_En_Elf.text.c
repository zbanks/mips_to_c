typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ u16 startFrame;
    /* 0x04 */ u16 endFrame;
    /* 0x06 */ u16 unk_6;                           /* inferred */
    /* 0x08 */ u16 unk_8;                           /* inferred */
    /* 0x0A */ char pad_A[0x26];                    /* maybe part of unk_8[20]? */
} CsCmdActorAction;                                 /* size = 0x30 */

typedef struct EnElf {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x24];                 /* maybe part of unk_188[7]? */
    /* 0x1B2 */ Vec3s unk_1B2;                      /* inferred */
    /* 0x1B8 */ char pad_1B8[0x24];                 /* maybe part of unk_1B2[7]? */
    /* 0x1DC */ ? unk_1DC;                          /* inferred */
    /* 0x1DC */ char pad_1DC[0x4];
    /* 0x1E0 */ f32 unk_1E0;                        /* inferred */
    /* 0x1E4 */ f32 unk_1E4;                        /* inferred */
    /* 0x1E8 */ f32 unk_1E8;                        /* inferred */
    /* 0x1EC */ f32 unk_1EC;                        /* inferred */
    /* 0x1F0 */ f32 unk_1F0;                        /* inferred */
    /* 0x1F4 */ f32 unk_1F4;                        /* inferred */
    /* 0x1F8 */ ?32 unk_1F8;                        /* inferred */
    /* 0x1FC */ LightInfo unk_1FC;                  /* inferred */
    /* 0x20A */ char pad_20A[0x2];
    /* 0x20C */ LightNode *unk_20C;                 /* inferred */
    /* 0x210 */ LightInfo unk_210;                  /* inferred */
    /* 0x21E */ char pad_21E[0x2];
    /* 0x220 */ LightNode *unk_220;                 /* inferred */
    /* 0x224 */ f32 unk_224;                        /* inferred */
    /* 0x228 */ f32 unk_228;                        /* inferred */
    /* 0x22C */ f32 unk_22C;                        /* inferred */
    /* 0x230 */ s32 unk_230;                        /* inferred */
    /* 0x234 */ s32 unk_234;                        /* inferred */
    /* 0x238 */ char pad_238[0x4];
    /* 0x23C */ f32 unk_23C;                        /* inferred */
    /* 0x240 */ f32 unk_240;                        /* inferred */
    /* 0x244 */ s16 unk_244;                        /* inferred */
    /* 0x246 */ s16 unk_246;                        /* inferred */
    /* 0x248 */ s16 unk_248;                        /* inferred */
    /* 0x24A */ s16 unk_24A;                        /* inferred */
    /* 0x24C */ s16 unk_24C;                        /* inferred */
    /* 0x24E */ char pad_24E[0x2];
    /* 0x250 */ f32 unk_250;                        /* inferred */
    /* 0x254 */ f32 unk_254;                        /* inferred */
    /* 0x258 */ s16 unk_258;                        /* inferred */
    /* 0x25A */ u16 unk_25A;                        /* inferred */
    /* 0x25C */ s16 unk_25C;                        /* inferred */
    /* 0x25E */ s16 unk_25E;                        /* inferred */
    /* 0x260 */ s16 unk_260;                        /* inferred */
    /* 0x262 */ u16 unk_262;                        /* inferred */
    /* 0x264 */ u16 unk264;
    /* 0x266 */ u16 unk_266;                        /* inferred */
    /* 0x268 */ char pad_268[0x1];
    /* 0x269 */ u8 unk_269;                         /* inferred */
    /* 0x26A */ char pad_26A[0x2];                  /* maybe part of unk_269[3]? */
    /* 0x26C */ void (*unk_26C)(EnElf *, GlobalContext *); /* inferred */
    /* 0x270 */ void (*actionFunc)(EnElf *, GlobalContext *);
} EnElf;                                            /* size = 0x274 */

struct _mips2c_stack_EnElf_Destroy {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ LightContext *sp1C;                  /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnElf_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x20];                   /* maybe part of sp34[9]? */
    /* 0x58 */ GraphicsContext *sp58;               /* inferred */
    /* 0x5C */ char pad_5C[0x14];                   /* maybe part of sp58[6]? */
    /* 0x70 */ Actor *sp70;                         /* inferred */
    /* 0x74 */ char pad_74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_EnElf_Init {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ LightInfo *sp38;                     /* inferred */
    /* 0x3C */ LightContext *sp3C;                  /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnElf_SetupAction {};          /* size 0x0 */

struct _mips2c_stack_EnElf_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088C51C {};              /* size 0x0 */

struct _mips2c_stack_func_8088C804 {};              /* size 0x0 */

struct _mips2c_stack_func_8088C858 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8088C920 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8088C9CC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8088CBAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088CC48 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8088CD3C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088D3EC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8088D470 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8088D504 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8088D5A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088D660 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8088D7F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088D864 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088D8D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088D9BC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8088DB4C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8088DCA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088DD34 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8088E018 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8088E0E0 {};              /* size 0x0 */

struct _mips2c_stack_func_8088E0F0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8088E304 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8088E484 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8088E5A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088E60C {
    /* 0x00 */ char pad_0[0x36];
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8088E850 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ u32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ Actor *sp44;                         /* inferred */
    /* 0x48 */ Actor *sp48;                         /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8088EF18 {};              /* size 0x0 */

struct _mips2c_stack_func_8088EFA4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8088F214 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ PosRot *sp1C;                        /* inferred */
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ EnElf *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8088F5F4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s8 sp30;                             /* inferred */
    /* 0x31 */ s8 sp31;                             /* inferred */
    /* 0x32 */ s8 sp32;                             /* inferred */
    /* 0x33 */ char pad_33[0x1];
    /* 0x34 */ s8 sp34;                             /* inferred */
    /* 0x35 */ s8 sp35;                             /* inferred */
    /* 0x36 */ s8 sp36;                             /* inferred */
    /* 0x37 */ char pad_37[0x1];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8088F9E4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8088FA38 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8088FC34 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8088FD04 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8088FDCC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8088FE64 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8089010C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80890494 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808908D0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

? Parameter_AddMagic(GlobalContext *, s16);         /* extern */
f32 func_800C4188(GlobalContext *, s32, s32, ? *, EnElf *, s32); /* extern */
u16 func_800F05C0(GlobalContext *);                 /* extern */
f32 func_800F5A8C(f32, f32, u16, u16, u16, GlobalContext *); /* extern */
s32 func_800FD2B4(GlobalContext *, f32, f32, ?, f32); /* extern */
void func_8088C51C(EnElf *arg0, s16 arg1, EnElf *, Actor *); /* static */
s32 func_8088C804(PosRot *arg0, PosRot *arg1, f32 arg2, EnElf *); /* static */
void func_8088C858(void *arg0, EnElf *arg1);        /* static */
void func_8088C920(void *arg0, EnElf *arg1);        /* static */
void func_8088C9CC(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088CBAC(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088CC48(EnElf *arg0, GlobalContext *arg1); /* static */
f32 func_8088CD3C(u8 arg0);                         /* static */
void func_8088D3EC(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088D470(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088D504(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088D5A0(Actor *arg0, void *arg1, f32 arg2, f32); /* static */
void func_8088D660(Actor *arg0, f32 *arg1, f32 arg2, Vec3f *); /* static */
void func_8088D7F8(Actor *arg0, Actor *arg1);       /* static */
void func_8088D864(Actor *arg0, Actor *arg1);       /* static */
void func_8088D8D0(EnElf *arg0, f32 *arg1);         /* static */
void func_8088D9BC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8088DB4C(Actor *arg0, f32 *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
s32 func_8088DCA4(Actor *arg0, ?);                  /* static */
void func_8088E304(Actor *arg0, GlobalContext *arg1); /* static */
void func_8088E5A8(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088E60C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8088EF18(void *arg0, void *arg1, void *arg2, f32 arg3); /* static */
void func_8088EFA4(EnElf *arg0, GlobalContext *arg1, EnElf *); /* static */
void func_8088F214(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088F5F4(EnElf *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_8088F9E4(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088FA38(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088FC34(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8088FD04(Actor *arg0);                    /* static */
void func_8088FDCC(EnElf *arg0);                    /* static */
void func_8088FE64(EnElf *arg0, GlobalContext *arg1); /* static */
void func_8089010C(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_80890494(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void func_808908D0(f32 *arg0, GlobalContext *arg1, u32 arg2); /* static */
extern SkeletonHeader D_0402AF58;
static InitChainEntry D_808909E0;                   /* unable to generate initializer */
static ? D_808909E4;                                /* unable to generate initializer */
static ? D_80890A14;                                /* unable to generate initializer */
static ? D_80890A44;                                /* unable to generate initializer */
static Vec3f D_80890A6C = {0.0f, -0.05f, 0.0f};
static Vec3f D_80890A78 = {0.0f, -0.025f, 0.0f};
static Vec3f D_80890A84 = {0.0f, 0.0f, 0.0f};

void EnElf_SetupAction(EnElf *this, void (*actionFunc)(EnElf *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void func_8088C51C(EnElf *arg0, s16 arg1) {
    u32 temp_t6;

    temp_t6 = arg1 & 0xFFFF;
    arg0->unk_244 = arg1;
    switch (temp_t6) {
    case 0:
        arg0->unk_24A = 0x400;
        arg0->unk_24C = 0x200;
        arg0->unk_26C = func_8088D3EC;
        arg0->unk_25C = 0x64;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        arg0->unk_250 = 5.0f;
        arg0->unk_254 = 20.0f;
        return;
    case 10:
        arg0->unk_24A = 0x400;
        arg0->unk_24C = 0x200;
        arg0->unk_26C = func_8088D3EC;
        arg0->unk_25C = 0x64;
        arg0->unk_250 = 1.0f;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        arg0->unk_254 = 5.0f;
        return;
    case 8:
        arg0->unk_24A = 0x400;
        arg0->unk_24C = 0;
        arg0->unk_26C = func_8088D3EC;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        arg0->unk_254 = 0.0f;
        arg0->unk_250 = 5.0f;
        return;
    case 7:
        arg0->unk_24A = 0x1000;
        arg0->unk_24C = 0x200;
        arg0->unk_26C = func_8088D3EC;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        arg0->unk_250 = 3.0f;
        arg0->unk_254 = 10.0f;
        return;
    case 5:
        arg0->unk_26C = func_8088D3EC;
        arg0->unk_24A = 0x1E;
        arg0->unk_25C = 1;
        arg0->unk_250 = 0.0f;
        arg0->unk_254 = 0.0f;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        return;
    case 6:
        arg0->unk_24A = 0x1000;
        arg0->unk_24C = 0x200;
        arg0->unk_26C = func_8088D3EC;
        arg0->unk_250 = 0.0f;
        arg0->unk_254 = 0.0f;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        return;
    case 1:
        arg0->unk_24A = 0x1000;
        arg0->unk_24C = 0x800;
        arg0->unk_26C = func_8088D3EC;
        arg0->unk_250 = 5.0f;
        arg0->unk_254 = 7.5f;
        arg0->unk_144.animPlaybackSpeed = 2.0f;
        return;
    case 2:
        arg0->unk_24A = 0x400;
        arg0->unk_24C = 0x1000;
        arg0->unk_26C = func_8088D470;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        arg0->unk_250 = 10.0f;
        arg0->unk_254 = 20.0f;
        return;
    case 3:
        arg0->unk_24C = 0x600;
        arg0->unk_26C = func_8088D504;
        arg0->unk_254 = 1.0f;
        arg0->unk_250 = 1.0f;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        return;
    case 4:
        arg0->unk_24A = 0x1000;
        arg0->unk_24C = 0x800;
        arg0->unk_26C = func_8088D3EC;
        arg0->unk_250 = 60.0f;
        arg0->unk_254 = 20.0f;
        arg0->unk_144.animPlaybackSpeed = 2.0f;
        return;
    case 9:
        arg0->unk_24A = 0x400;
        arg0->unk_24C = 0x2000;
        arg0->unk_26C = func_8088D3EC;
        arg0->unk_25C = 0x2A;
        arg0->unk_254 = 1.0f;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        arg0->unk_250 = 5.0f;
        /* fallthrough */
    default:
        return;
    }
}

s32 func_8088C804(PosRot *arg0, PosRot *arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f2;
    s32 phi_v0;

    temp_f0 = arg1->pos.x - arg0->pos.x;
    temp_f2 = arg1->pos.z - arg0->pos.z;
    phi_v0 = 0;
    if ((arg2 * arg2) < ((temp_f0 * temp_f0) + (temp_f2 * temp_f2))) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_8088C858(void *arg0, EnElf *arg1) {
    s16 temp_v0;
    s32 temp_f16;

    if (func_8088C804(arg0 + 0x24, arg1->unk_1CCC + 0x24, 30.0f, arg1) == 0) {
        arg0->unk_254 = 0.5f;
    } else {
        arg0->unk_254 = 2.0f;
    }
    temp_v0 = arg0->unk_25C;
    if ((s32) temp_v0 > 0) {
        arg0->unk_25C = (s16) (temp_v0 - 1);
        return;
    }
    arg0->unk_244 = 1;
    arg0->unk_248 = 0x80;
    arg0->unk_254 = (f32) (Rand_ZeroFloat(1.0f) + 0.5f);
    temp_f16 = (s32) randPlusMinusPoint5Scaled(32767.0f);
    arg0->unk_26C = func_8088C9CC;
    arg0->unk_24C = (s16) temp_f16;
}

void func_8088C920(void *arg0, EnElf *arg1) {
    s16 temp_v0;
    s32 temp_f8;

    if (func_8088C804(arg0 + 0x24, arg1->unk_1CCC + 0x24, 50.0f, arg1) != 0) {
        temp_v0 = arg0->unk_25C;
        if ((s32) temp_v0 > 0) {
            arg0->unk_25C = (s16) (temp_v0 - 1);
            return;
        }
        arg0->unk_244 = 1;
        arg0->unk_248 = 0x80;
        arg0->unk_254 = (f32) (Rand_ZeroFloat(1.0f) + 0.5f);
        temp_f8 = (s32) randPlusMinusPoint5Scaled(32767.0f);
        arg0->unk_26C = func_8088C9CC;
        arg0->unk_24C = (s16) temp_f8;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_8088C9CC(EnElf *arg0, GlobalContext *arg1) {
    f32 sp24;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    f32 phi_f2;

    temp_v0 = arg0->unk_25C;
    if ((s32) temp_v0 > 0) {
        arg0->unk_25C = temp_v0 - 1;
    } else {
        temp_f2 = arg0->actor.xzDistToPlayer;
        phi_f2 = temp_f2;
        if (temp_f2 < 50.0f) {
            if (Rand_ZeroOne() < 0.2f) {
                arg0->unk_244 = 2;
                arg0->unk_248 = 0x400;
                arg0->unk_26C = func_8088C920;
                arg0->unk_254 = 2.0f;
                arg0->actor.speedXZ = 1.5f;
                arg0->unk_25C = (s32) Rand_ZeroFloat(8.0f) + 4;
            } else {
                arg0->unk_25C = 0xA;
            }
        } else {
            if (temp_f2 > 150.0f) {
                phi_f2 = 150.0f;
            }
            temp_f2_2 = ((phi_f2 - 50.0f) * 0.95f) + 0.05f;
            sp24 = temp_f2_2;
            if (Rand_ZeroOne() < temp_f2_2) {
                arg0->unk_244 = 3;
                arg0->unk_248 = 0x200;
                arg0->unk_26C = func_8088C858;
                arg0->unk_254 = (2.0f * temp_f2_2) + 1.0f;
                arg0->unk_25C = (s32) Rand_ZeroFloat(16.0f) + 0x10;
            } else {
                arg0->unk_25C = 0xA;
            }
        }
    }
    if (Rand_ZeroOne() < 0.1f) {
        arg0->unk_244 = 1;
        arg0->unk_248 = 0x80;
        arg0->unk_254 = Rand_ZeroFloat(0.5f) + 0.5f;
        arg0->unk_24C = (s16) (s32) randPlusMinusPoint5Scaled(32767.0f);
    }
}

void func_8088CBAC(EnElf *arg0, GlobalContext *arg1) {
    EnElf *temp_a3;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 phi_f0;

    temp_a3 = arg0;
    temp_a0 = temp_a3 + 0x224;
    temp_a1 = temp_a3 + 0x24;
    if ((temp_a3->unk_262 & 0x4000) != 0) {
        phi_f0 = 0.0f;
    } else {
        phi_f0 = 100.0f;
    }
    arg0 = temp_a3;
    if (func_8088C804(temp_a0, temp_a1, phi_f0, temp_a3) != 0) {
        arg0->unk_244 = 0;
        arg0->unk_248 = 0x200;
        arg0->unk_26C = func_8088C9CC;
        arg0->unk_254 = 1.5f;
        return;
    }
    arg0->unk_26C(arg0, arg1);
}

void func_8088CC48(EnElf *arg0, GlobalContext *arg1) {
    f32 temp_f6;
    s32 temp_f10;
    s32 temp_t7;

    EnElf_SetupAction(arg0, func_8088DD34);
    temp_f6 = Rand_ZeroFloat(10.0f) + 10.0f;
    arg0->unk_246 = 0;
    arg0->unk_250 = temp_f6;
    temp_t7 = (s32) Rand_ZeroFloat(1048.0f);
    arg0->unk_224 = arg0->actor.world.pos.x;
    arg0->unk_24A = temp_t7 + 0x200;
    arg0->unk_228 = arg0->actor.world.pos.y;
    arg0->unk_22C = arg0->actor.world.pos.z;
    temp_f10 = (s32) randPlusMinusPoint5Scaled(32767.0f);
    arg0->unk_26C = func_8088C9CC;
    arg0->unk_258 = (s16) temp_f10;
    func_8088CBAC(arg0, arg1);
    arg0->unk_25C = 0;
    arg0->unk_25E = 0xF0;
    if (((arg0->unk_262 & 0x400) != 0) && (Actor_GetCollectibleFlag(arg1, (s32) arg0->unk_260) != 0)) {
        Actor_MarkForDeath((Actor *) arg0);
    }
}

f32 func_8088CD3C(u8 arg0) {
    if (arg0 != 1) {
        if (arg0 != 2) {
            return 0.0f;
        }
        return Rand_ZeroFloat(255.0f);
    }
    return Rand_ZeroFloat(55.0f) + 200.0f;
}

void EnElf_Init(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp4C;
    s32 sp48;
    s32 sp40;
    LightContext *sp3C;
    LightInfo *sp38;
    ? *temp_v1_3;
    LightContext *temp_a1;
    LightInfo *temp_a0;
    LightInfo *temp_a0_2;
    s16 temp_v1;
    s32 temp_v0_2;
    s32 temp_v1_2;
    u16 temp_t0;
    u16 temp_t1;
    u16 temp_t5;
    u16 temp_t6;
    u16 temp_t7;
    u16 temp_t8;
    u16 temp_v0;
    u32 temp_a0_3;
    void *temp_s1;
    void *temp_t2;
    void *temp_t6_2;
    s32 phi_v1;
    EnElf *this = (EnElf *) thisx;

    sp4C = globalCtx->actorCtx.actorList[2].first;
    Actor_ProcessInitChain((Actor *) this, &D_808909E0);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_0402AF58, (AnimationHeader *) &D_04029140, &this->unk_188, &this->unk_1B2, 7);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 15.0f);
    this->actor.shape.shadowAlpha = 0xFF;
    temp_a0 = &this->unk_1FC;
    sp38 = temp_a0;
    Lights_PointGlowSetInfo(temp_a0, (s16) (s32) this->actor.world.pos.x, (s16) (s32) this->actor.world.pos.y, (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0);
    temp_a1 = &globalCtx->lightCtx;
    sp3C = temp_a1;
    this->unk_20C = LightContext_InsertLight(globalCtx, temp_a1, sp38);
    temp_a0_2 = &this->unk_210;
    sp38 = temp_a0_2;
    Lights_PointNoGlowSetInfo(temp_a0_2, (s16) (s32) this->actor.world.pos.x, (s16) (s32) this->actor.world.pos.y, (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0);
    this->unk_220 = LightContext_InsertLight(globalCtx, temp_a1, sp38);
    this->unk_262 = 0;
    this->unk_25E = 0x258;
    this->unk_240 = 0.0f;
    sp48 = 0;
    temp_v1 = this->actor.params;
    this->unk_260 = (s16) ((s32) (temp_v1 & 0xFE00) >> 9);
    temp_a0_3 = temp_v1 & 0xF;
    if ((this->actor.params & 0x100) != 0) {
        this->unk_262 |= 0x400;
    }
    this->actor.params = (s16) temp_a0_3;
    switch (temp_a0_3) {
    case 0:
        this->actor.room = -1;
        EnElf_SetupAction(this, func_8088E850);
        func_8088C51C(this, 0);
        this->unk_262 |= 4;
        this->actor.update = func_8089010C;
        this->unk_230 = 0;
        this->unk_234 = 0;
        this->unk_269 = 0x14;
        temp_v0 = gSaveContext.naviTimer;
        if (((s32) temp_v0 >= 0x64C8) || ((s32) temp_v0 < 0xBB8)) {
            gSaveContext.naviTimer = 0;
        }
        this->unk_266 = func_800F05C0(globalCtx);
    default:
block_19:
        this->unk_23C = 3.0f;
        temp_v1_3 = &this->unk_1DC;
        temp_v1_3->unk_0 = (s32) D_808909E4.unk_0;
        temp_v1_3->unk_4 = (s32) D_808909E4.unk_4;
        temp_v1_3->unk_8 = (s32) D_808909E4.unk_8;
        temp_v1_3->unk_C = (s32) D_808909E4.unk_C;
        if (sp48 > 0) {
            temp_s1 = (sp48 * 3) + &D_80890A44;
            this->unk_1EC = func_8088CD3C(temp_s1->unk_0);
            this->unk_1F0 = func_8088CD3C(temp_s1->unk_1);
            this->unk_1F4 = func_8088CD3C(temp_s1->unk_2);
            this->unk_1F8 = 0;
            return;
        }
        temp_v0_2 = sp48 * -0x10;
        temp_t2 = &D_808909E4 + temp_v0_2;
        temp_v1_3->unk_0 = (s32) temp_t2->unk_0;
        temp_t6_2 = temp_v0_2 + &D_80890A14;
        temp_v1_3->unk_4 = (s32) temp_t2->unk_4;
        temp_v1_3->unk_8 = (s32) temp_t2->unk_8;
        temp_v1_3->unk_C = (s32) temp_t2->unk_C;
        this->unk_1EC = temp_t6_2->unk_0;
        this->unk_1F0 = temp_t6_2->unk_4;
        this->unk_1F4 = temp_t6_2->unk_8;
        this->unk_1F8 = temp_t6_2->unk_C;
        return;
    case 1:
        sp48 = -1;
        gSaveContext.unk_1016 = 0;
        EnElf_SetupAction(this, func_8088E0F0);
        this->unk_254 = Math_Vec3f_DistXZ((Vec3f *) &this->actor.world, (Vec3f *) &sp4C->world);
        this->unk_24C = -0x1000;
        this->unk_248 = sp4C->shape.rot.y;
        this->unk_246 = 0;
        this->unk_250 = 0.0f;
        this->unk_228 = this->actor.world.pos.y - sp4C->world.pos.y;
        goto block_19;
    case 5:
        sp48 = -1;
        EnElf_SetupAction(this, func_8088E484);
        this->unk_254 = 0.0f;
        this->unk_24C = 0;
        this->unk_248 = sp4C->shape.rot.y;
        this->unk_246 = 0;
        this->unk_250 = 7.0f;
        this->unk_228 = this->actor.world.pos.y - sp4C->world.pos.y;
        goto block_19;
    case 7:
        temp_t6 = this->unk_262 | 0x200;
        this->unk_262 = temp_t6;
        this->actor.shape.shadowDraw = func_800B4088;
        this->unk_262 = temp_t6 | 0x100;
        sp48 = -1;
        temp_t1 = this->unk_262 | 0x800;
        this->unk_262 = temp_t1;
        this->unk_262 = temp_t1 | 0x1000;
        func_8088CC48(this, globalCtx);
        goto block_19;
    case 2:
        this->unk_262 |= 0x100;
        sp48 = -1;
        temp_t8 = this->unk_262 | 0x800;
        temp_t0 = temp_t8 | 0x2000;
        this->unk_262 = temp_t8;
        this->unk_262 = temp_t0;
        this->unk_262 = temp_t0 | 0x1000;
        func_8088CC48(this, globalCtx);
        goto block_19;
    case 6:
        sp48 = -1;
        temp_t5 = this->unk_262 | 0x800;
        temp_t7 = temp_t5 | 0x2000;
        this->unk_262 = temp_t5;
        this->unk_262 = temp_t7;
        this->unk_262 = temp_t7 | 0x1000;
        func_8088CC48(this, globalCtx);
        goto block_19;
    case 9:
        this->unk_262 |= 0x1000;
        /* fallthrough */
    case 10:
        sp48 = -2;
        func_8088CC48(this, globalCtx);
        goto block_19;
    case 8:
        Actor_MarkForDeath((Actor *) this);
        return;
    case 3:
        sp48 = (s32) (Rand_ZeroFloat(11.99f) + 1.0f);
        EnElf_SetupAction(this, func_8088E018);
        func_8088C51C(this, 0);
        goto block_19;
    case 4:
        EnElf_SetupAction(this, func_8088E0E0);
        func_8088C51C(this, 6);
        this->unk_262 |= 8;
        sp3C = (LightContext *) &globalCtx->actorCtx;
        phi_v1 = 0;
        do {
            sp40 = phi_v1;
            Actor_Spawn((ActorContext *) sp3C, globalCtx, 0x10, this->actor.world.pos.x, this->actor.world.pos.y - 30.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 6);
            temp_v1_2 = phi_v1 + 1;
            phi_v1 = temp_v1_2;
        } while (temp_v1_2 != 8);
        goto block_19;
    }
}

void EnElf_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    LightContext *sp1C;
    GlobalContext *temp_a0;
    LightContext *temp_a1;
    EnElf *this = (EnElf *) thisx;

    temp_a1 = &globalCtx->lightCtx;
    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    sp1C = temp_a1;
    LightContext_RemoveLight(temp_a0, temp_a1, this->unk_20C);
    LightContext_RemoveLight(globalCtx, temp_a1, this->unk_220);
}

void func_8088D3EC(EnElf *arg0, GlobalContext *arg1) {
    f32 temp_f18;

    arg0->unk_224 = Math_SinS(arg0->unk_248) * arg0->unk_254;
    arg0->unk_228 = Math_SinS(arg0->unk_246) * arg0->unk_250;
    temp_f18 = Math_CosS(arg0->unk_248) * arg0->unk_254;
    arg0->unk_248 += arg0->unk_24C;
    arg0->unk_246 += arg0->unk_24A;
    arg0->unk_22C = temp_f18;
}

void func_8088D470(EnElf *arg0, GlobalContext *arg1) {
    f32 sp24;
    f32 temp_f18;
    f32 temp_f8;

    sp24 = (Math_CosS(arg0->unk_246) * arg0->unk_250) + arg0->unk_254;
    temp_f18 = Math_SinS(arg0->unk_248) * sp24;
    arg0->unk_228 = 0.0f;
    arg0->unk_224 = temp_f18;
    temp_f8 = Math_CosS(arg0->unk_248) * sp24;
    arg0->unk_248 += arg0->unk_24C;
    arg0->unk_246 += arg0->unk_24A;
    arg0->unk_22C = temp_f8;
}

void func_8088D504(EnElf *arg0, GlobalContext *arg1) {
    void *sp24;
    f32 temp_f8;
    s16 temp_a0;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_a0 = arg0->unk_248;
    arg0->unk_246 = temp_a0 * 2;
    arg0->unk_224 = Math_SinS(temp_a0) * arg0->unk_254;
    arg0->unk_228 = Math_SinS(arg0->unk_246) * arg0->unk_250;
    arg0->unk_22C = -Math_SinS(sp24->shape.rot.y) * arg0->unk_224;
    temp_f8 = Math_CosS(sp24->shape.rot.y) * arg0->unk_224;
    arg0->unk_248 += arg0->unk_24C;
    arg0->unk_224 = temp_f8;
}

void func_8088D5A0(Actor *arg0, void *arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f2;
    f32 phi_f0;
    f32 phi_f12;
    f32 phi_f2;

    temp_f2 = ((arg1->unk_4 + arg0->unk_228) - arg0->world.pos.y) * arg2;
    temp_f0 = fabsf(temp_f2);
    if (temp_f2 >= 0.0f) {
        phi_f12 = 1.0f;
    } else {
        phi_f12 = -1.0f;
    }
    if (temp_f0 < 0.0f) {
        phi_f0 = 0.0f;
    } else {
        if (temp_f0 > 30.0f) {
            phi_f2 = 30.0f;
        } else {
            phi_f2 = temp_f0;
        }
        phi_f0 = phi_f2;
    }
    Math_StepToF(arg0 + 0x68, phi_f0 * phi_f12, 32.0f);
}

void func_8088D660(Actor *arg0, f32 *arg1, f32 arg2) {
    f32 sp34;
    f32 sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f18;
    Actor *phi_f12;
    f32 phi_f12_2;
    f32 phi_f12_3;

    temp_f14 = ((arg1->unk_0 + arg0->unk_224) - arg0->world.pos.x) * arg2;
    temp_f2 = ((arg1->unk_8 + arg0->unk_22C) - arg0->world.pos.z) * arg2;
    temp_f0 = fabsf(temp_f14);
    phi_f12 = arg0;
    if (temp_f14 >= 0.0f) {
        phi_f18 = 1.0f;
    } else {
        phi_f18 = -1.0f;
    }
    if (temp_f2 >= 0.0f) {
        sp28 = 1.0f;
    } else {
        sp28 = -1.0f;
    }
    temp_f0_2 = fabsf(temp_f2);
    if (temp_f0 < 0.0f) {
        phi_f2_2 = 0.0f;
    } else {
        if (temp_f0 > 30.0f) {
            phi_f12_3 = 30.0f;
        } else {
            phi_f12_3 = temp_f0;
        }
        phi_f2_2 = phi_f12_3;
        phi_f12 = (bitwise Actor *) phi_f12_3;
    }
    temp_f14_2 = phi_f2_2 * phi_f18;
    if (temp_f0_2 < 0.0f) {
        phi_f2 = 0.0f;
    } else {
        if (temp_f0_2 > 30.0f) {
            phi_f12_2 = 30.0f;
        } else {
            phi_f12_2 = temp_f0_2;
        }
        phi_f2 = phi_f12_2;
        phi_f12 = (bitwise Actor *) phi_f12_2;
    }
    sp24 = phi_f2;
    sp34 = temp_f14_2;
    func_8088D5A0(phi_f12, (bitwise void *) temp_f14_2, (bitwise f32) arg0, arg2);
    Math_StepToF(arg0 + 0x64, temp_f14_2, 1.5f);
    Math_StepToF(arg0 + 0x6C, phi_f2 * sp28, 1.5f);
    Actor_ApplyMovement(arg0);
}

void func_8088D7F8(Actor *arg0, Actor *arg1) {
    func_8088D5A0(arg1, (void *)0x3E4CCCCD);
    arg0->velocity.x = 0.0f;
    arg0->velocity.z = 0.0f;
    Actor_ApplyMovement(arg0);
    arg0->world.pos.x = arg1->unk_0 + arg0->unk_224;
    arg0->world.pos.z = arg1->home.pos.x + arg0->unk_22C;
}

void func_8088D864(Actor *arg0, Actor *arg1) {
    func_8088D5A0(arg1, (void *)0x3E4CCCCD);
    arg0->velocity.z = 0.0f;
    arg0->velocity.x = 0.0f;
    Actor_ApplyMovement(arg0);
    arg0->world.pos.x = arg1->unk_0 + arg0->unk_224;
    arg0->world.pos.z = arg1->home.pos.x + arg0->unk_22C;
}

void func_8088D8D0(EnElf *arg0, f32 *arg1) {
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_a0;
    f32 phi_f0;
    f32 phi_f12;
    f32 phi_f2;

    temp_a0 = arg0->unk_246;
    arg0 = arg0;
    temp_f2 = (((Math_SinS(temp_a0) * arg0->unk_250) + arg1->unk_4) - arg0->actor.world.pos.y) * 0.2f;
    temp_f0 = fabsf(temp_f2);
    if (temp_f2 >= 0.0f) {
        phi_f12 = 1.0f;
    } else {
        phi_f12 = -1.0f;
    }
    arg0->unk_246 += arg0->unk_24A;
    if (temp_f0 < 0.0f) {
        phi_f0 = 0.0f;
    } else {
        if (temp_f0 > 30.0f) {
            phi_f2 = 30.0f;
        } else {
            phi_f2 = temp_f0;
        }
        phi_f0 = phi_f2;
    }
    Math_StepToF(arg0 + 0x68, phi_f0 * phi_f12, 1.5f);
}

void func_8088D9BC(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s16 temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    s16 phi_a1;
    s32 phi_a1_2;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk_262 & 0x4000) != 0) {
        sp2C = temp_v1;
        Math_SmoothStepToF(arg0 + 0x70, 5.0f, 0.5f, 1.0f, 0.01f);
    } else {
        sp2C = temp_v1;
        Math_SmoothStepToF(arg0 + 0x70, arg0->unk_254, 0.2f, 0.5f, 0.01f);
    }
    temp_v0 = arg0->unk_244;
    if (temp_v0 != 0) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                phi_a1 = arg0->unk_24C;
            } else {
                phi_a1_2 = Math_FAtan2F(-(arg0->world.pos.z - sp2C->world.pos.z), -(arg0->world.pos.x - sp2C->world.pos.x)) << 0x10;
                goto block_10;
            }
        } else {
            phi_a1_2 = Math_FAtan2F(arg0->world.pos.z - sp2C->world.pos.z, arg0->world.pos.x - sp2C->world.pos.x) << 0x10;
            goto block_10;
        }
    } else {
        temp_v0_2 = arg0 + 0x224;
        phi_a1_2 = Math_FAtan2F(-(arg0->world.pos.z - temp_v0_2->unk_8), -(arg0->world.pos.x - temp_v0_2->unk_0)) << 0x10;
block_10:
        phi_a1 = (s16) (phi_a1_2 >> 0x10);
    }
    if ((arg0->unk_262 & 0x4000) != 0) {
        Math_SmoothStepToS(arg0 + 0x258, phi_a1, 0xA, arg0->unk_248, (s16) 0x1000);
    } else {
        Math_SmoothStepToS(arg0 + 0x258, phi_a1, 0xA, arg0->unk_248, (s16) 0x20);
    }
    arg0->world.rot.y = arg0->unk_258;
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void func_8088DB4C(Actor *arg0, f32 *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp24;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 phi_f2;
    f32 phi_f18;
    f32 phi_f16;
    f32 phi_f12;

    temp_f16 = ((arg1->unk_0 + arg0->unk_224) - arg0->world.pos.x) * arg4;
    sp24 = temp_f16;
    temp_f18 = ((arg1->unk_8 + arg0->unk_22C) - arg0->world.pos.z) * arg4;
    temp_f12 = arg4 + 0.3f;
    temp_f14 = arg3 + 30.0f;
    sp20 = temp_f18;
    arg3 = temp_f14;
    func_8088D5A0((bitwise Actor *) temp_f12, (bitwise void *) temp_f14, (bitwise f32) arg0, temp_f12);
    temp_f0 = sqrtf((temp_f16 * temp_f16) + (temp_f18 * temp_f18));
    phi_f18 = temp_f18;
    phi_f16 = temp_f16;
    if (temp_f0 < arg2) {
        phi_f2 = arg2;
    } else {
        if (arg3 < temp_f0) {
            phi_f12 = arg3;
        } else {
            phi_f12 = temp_f0;
        }
        phi_f2 = phi_f12;
    }
    arg0->speedXZ = phi_f2;
    if ((temp_f0 != phi_f2) && (temp_f0 != 0.0f)) {
        temp_f12_2 = phi_f2 / temp_f0;
        phi_f18 = temp_f18 * temp_f12_2;
        phi_f16 = temp_f16 * temp_f12_2;
    }
    sp20 = phi_f18;
    Math_StepToF(arg0 + 0x64, phi_f16, 5.0f);
    Math_StepToF(arg0 + 0x6C, phi_f18, 5.0f);
    Actor_ApplyMovement(arg0);
}

s32 func_8088DCA4(Actor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk_25E;
    if ((s32) temp_v0 > 0) {
        arg0->unk_25E = (s16) (temp_v0 - 1);
        goto block_5;
    }
    arg0->unk_25E = (s16) (temp_v0 - 1);
    temp_v0_2 = arg0->unk_25E;
    if ((s32) temp_v0_2 >= -9) {
        Actor_SetScale(arg0, (f32) (temp_v0_2 + 0xA) * 0.008f * 0.1f);
block_5:
        return 0;
    }
    Actor_MarkForDeath(arg0);
    return 1;
}

void func_8088DD34(EnElf *this, GlobalContext *globalCtx) {
    Actor *sp34;
    Actor *sp2C;
    Actor *temp_v0;
    f32 temp_f0;
    u16 temp_v0_2;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp34 = temp_v0;
    sp2C = temp_v0;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if (Rand_ZeroOne() < 0.05f) {
        this->unk_250 = Rand_ZeroFloat(10.0f) + 10.0f;
        this->unk_24A = (s32) Rand_ZeroFloat(1024.0f) + 0x200;
    }
    func_8088CBAC(this, globalCtx);
    if ((this->unk_262 & 0x800) != 0) {
        this->unk_228 = sp2C->unk_BF0;
    }
    func_8088D8D0(this, &this->unk_224);
    func_8088D9BC((Actor *) this, globalCtx);
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        if ((this->unk_262 & 0x400) != 0) {
            Actor_SetCollectibleFlag(globalCtx, (s32) this->unk_260);
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (func_801233E4(globalCtx) != 0) {
        temp_v0_2 = this->unk_262;
        if (((temp_v0_2 & 0x4000) != 0) && ((temp_v0_2 & 0x100) != 0) && (func_8088DCA4((Actor *) this) != 0)) {
            return;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
        return;
    }
    temp_f0 = this->actor.world.pos.y - sp34->world.pos.y;
    if (((this->unk_262 & 0x1000) != 0) && (temp_f0 > 0.0f) && (temp_f0 < 60.0f) && (func_8088C804(&this->actor.world, &sp34->world, 10.0f) == 0)) {
        func_80115908(globalCtx, 0x80U);
        if ((this->unk_262 & 0x200) != 0) {
            Parameter_AddMagic(globalCtx, (s16) (gSaveContext.unk_3F30 + (gSaveContext.doubleMagic * 0x30) + 0x30));
        }
        gSaveContext.unk_1016 = 0;
        this->unk_254 = 50.0f;
        this->unk_24C = -0x1000;
        this->unk_246 = 0;
        this->unk_228 = 30.0f;
        this->unk_250 = 0.0f;
        this->unk_248 = sp34->shape.rot.y;
        EnElf_SetupAction(this, func_8088E0F0);
        if ((this->unk_262 & 0x400) != 0) {
            Actor_SetCollectibleFlag(globalCtx, (s32) this->unk_260);
            return;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
        return;
    }
    if ((this->unk_262 & 0x100) != 0) {
        if (func_8088DCA4((Actor *) this, 0x3C030000) != 0) {
            return;
        }
        goto block_25;
    }
    Actor_SetScale((Actor *) this, 0.008f);
block_25:
    if ((this->unk_262 & 0x2000) != 0) {
        func_800B8A1C((Actor *) this, globalCtx, 0xBA, 80.0f, 60.0f);
    }
}

void func_8088E018(EnElf *this, GlobalContext *globalCtx) {
    f32 sp30;
    f32 sp2C;
    Actor *temp_v1;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    func_8088D3EC(this, globalCtx);
    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->update != 0)) {
        sp2C.unk_0 = temp_v1->world.pos.x;
        sp2C.unk_4 = (f32) temp_v1->world.pos.y;
        sp2C.unk_8 = (f32) temp_v1->world.pos.z;
        sp30 += (1500.0f * this->actor.scale.y) + 40.0f;
        func_8088D660((Actor *) this, &sp2C, 0.2f);
    } else {
        Actor_MarkForDeath((Actor *) this);
    }
    this->unk_258 = Math_FAtan2F(this->actor.velocity.z, this->actor.velocity.x);
}

void func_8088E0E0(EnElf *this, GlobalContext *globalCtx) {

}

void func_8088E0F0(EnElf *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_v0;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    Math_SmoothStepToF(&this->unk_254, 30.0f, 0.1f, 4.0f, 1.0f);
    temp_f2 = this->unk_250;
    temp_f8 = Math_CosS(this->unk_248) * this->unk_254;
    temp_v0 = this->unk_246;
    this->unk_228 += temp_f2;
    this->unk_224 = temp_f8;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {

        } else if (temp_f2 > -1.0f) {
            this->unk_250 = temp_f2 - 0.2f;
        }
    } else if (temp_f2 < 2.0f) {
        this->unk_250 = temp_f2 + 0.1f;
    } else {
        gSaveContext.healthAccumulator = 0xA0;
        this->unk_246 += 1;
    }
    temp_f6 = Math_SinS(this->unk_248) * -this->unk_254;
    this->unk_248 += this->unk_24C;
    this->unk_22C = temp_f6;
    func_8088D660((Actor *) this, (f32 *) &sp2C->world, 0.2f);
    if (this->unk_250 < 0.0f) {
        temp_f0 = this->unk_228;
        if ((temp_f0 < 20.0f) && (temp_f0 > 0.0f)) {
            Actor_SetScale((Actor *) this, temp_f0 * 0.008f * 0.05f);
        }
    }
    if (this->unk_228 < -10.0f) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_258 = Math_FAtan2F(this->actor.velocity.z, this->actor.velocity.x);
    func_8088F5F4(this, globalCtx, 0x20);
    Audio_PlayActorSound2((Actor *) this, 0x20A8U);
}

void func_8088E304(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f6;
    s16 temp_v0;
    f32 phi_f8;

    sp24 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_f0 = arg0->unk_228;
    if (temp_f0 > 200.0f) {
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_v0 = arg0->unk_24A;
    if ((s32) temp_v0 >= 0x7E) {
        arg0->unk_250 = (f32) (arg0->unk_250 + 0.5f);
        arg0->unk_254 = (f32) (arg0->unk_254 + 0.1f);
        phi_f8 = temp_f0 + arg0->unk_250;
        goto block_8;
    }
    temp_f0_2 = arg0->unk_254;
    arg0->unk_24A = (s16) (temp_v0 + 1);
    if (temp_f0_2 < 30.0f) {
        arg0->unk_254 = (f32) (temp_f0_2 + 0.5f);
    }
    temp_f0_3 = arg0->unk_228;
    if (temp_f0_3 > 0.0f) {
        phi_f8 = temp_f0_3 - 0.7f;
block_8:
        arg0->unk_228 = phi_f8;
    }
    arg0->unk_224 = (f32) (Math_CosS(arg0->unk_248) * arg0->unk_254);
    temp_f6 = Math_SinS(arg0->unk_248) * -arg0->unk_254;
    arg0->unk_248 = (s16) (arg0->unk_248 + arg0->unk_24C);
    arg0->unk_22C = temp_f6;
    func_8088D7F8(arg0, sp24 + 0xBEC);
    arg0->unk_258 = Math_FAtan2F(arg0->velocity.z, arg0->velocity.x);
    func_8088F5F4((EnElf *) arg0, arg1, 0x20);
    Audio_PlayActorSound2(arg0, 0x20A8U);
}

void func_8088E484(EnElf *this, GlobalContext *globalCtx) {
    Actor *sp24;
    f32 temp_f0;
    f32 temp_f0_2;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_f0 = this->unk_250;
    this->unk_22C = 0.0f;
    this->unk_224 = 0.0f;
    this->unk_228 += temp_f0;
    this->unk_250 = temp_f0 - 0.35f;
    if (this->unk_250 <= 0.0f) {
        EnElf_SetupAction(this, (void (*)(EnElf *, GlobalContext *)) func_8088E304);
        this->unk_24C = 0x800;
        this->unk_24A = 0;
        this->unk_250 = 0.0f;
        this->unk_254 = 1.0f;
    }
    func_8088D7F8((Actor *) this, sp24 + 0xBEC);
    temp_f0_2 = this->unk_250;
    Actor_SetScale((Actor *) this, (1.0f - (temp_f0_2 * temp_f0_2 * 0.012345679f)) * 0.008f);
    this->unk_258 = Math_FAtan2F(this->actor.velocity.z, this->actor.velocity.x);
    func_8088F5F4(this, globalCtx, 0x20);
    Audio_PlayActorSound2((Actor *) this, 0x20A8U);
}

void func_8088E5A8(EnElf *arg0, GlobalContext *arg1) {
    EnElf *temp_a0;
    EnElf *temp_a2;
    EnElf *phi_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    phi_a2 = temp_a2;
    if ((temp_a2->unk_262 & 4) != 0) {
        arg0 = temp_a2;
        func_8088EFA4(temp_a0, arg1, temp_a2);
        phi_a2 = arg0;
    }
    arg0 = phi_a2;
    SkelAnime_FrameUpdateMatrix(phi_a2 + 0x144);
    arg0->unk_26C(arg0, arg1);
}

void func_8088E60C(Actor *arg0, GlobalContext *arg1) {
    s16 sp36;
    Actor *temp_v0;
    GlobalContext *temp_a0;
    s32 temp_v1;
    s16 phi_t0;
    s16 phi_t0_2;

    temp_a0 = arg1;
    temp_v1 = arg1->actorCtx.actorList[2].first->unk_A6C;
    phi_t0 = 0x64;
    if ((temp_v1 & 0x400) != 0) {
        phi_t0 = 0xC8;
    }
    if ((arg0->unk_244 == 6) || ((temp_v1 & 2) != 0) || ((arg0->unk_262 & 0x8000) != 0)) {
        phi_t0 = 0;
    }
    arg1 = arg1;
    sp36 = phi_t0;
    phi_t0_2 = phi_t0;
    if (func_800EE29C(temp_a0, 0xC9U) != 0) {
        sp36 = phi_t0;
        phi_t0_2 = phi_t0;
        if (arg1->csCtx.npcActions[func_800EE200(arg1, 0xC9U)]->unk0 == 6) {
            phi_t0_2 = 0;
        }
    }
    if ((arg0->unk_262 & 0x20) != 0) {
        temp_v0 = arg1->actorCtx.actorList[2].first;
        sp36 = phi_t0_2;
        Lights_PointNoGlowSetInfo(arg0 + 0x210, (s16) (s32) temp_v0->world.pos.x, (s16) (s32) (temp_v0->world.pos.y + 60.0f), (s16) (s32) temp_v0->world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0xC8);
    } else {
        sp36 = phi_t0_2;
        Lights_PointNoGlowSetInfo(arg0 + 0x210, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) -1);
    }
    Lights_PointGlowSetInfo(arg0 + 0x1FC, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) (s32) phi_t0_2);
    arg0->unk_258 = Math_FAtan2F(arg0->velocity.z, arg0->velocity.x);
    Actor_SetScale(arg0, arg0->scale.x);
}

void func_8088E850(EnElf *this, GlobalContext *globalCtx) {
    f32 sp50;
    f32 sp4C;
    Actor *sp48;
    Actor *sp44;
    f32 sp40;
    f32 sp3C;
    u32 sp38;
    Vec3f *sp30;
    PosRot *sp2C;
    Camera *temp_t8;
    PosRot *temp_a1;
    Vec3f *temp_a3;
    f32 temp_f0;
    f32 temp_f12;
    s16 temp_v0_3;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v1;
    s32 temp_v0_4;
    u16 temp_v0_2;
    u16 temp_v0_5;
    u32 temp_v0;
    s16 phi_v1;

    sp48 = globalCtx->actorCtx.actorList[2].first;
    func_8088F214(this);
    func_8088E5A8(this, globalCtx);
    sp40 = 0.0f;
    if (func_800EE29C(globalCtx, 0xC9U) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0xC9U);
        sp38 = temp_v0;
        func_808908D0(&sp4C, globalCtx, temp_v0);
        this->actor.shape.rot.y = (s16) globalCtx->csCtx.npcActions[sp38]->unk_8;
        this->actor.shape.rot.x = (s16) globalCtx->csCtx.npcActions[sp38]->unk_6;
        if (globalCtx->csCtx.npcActions[sp38]->unk0 == 5) {
            func_8088F5F4(this, globalCtx, 0x10);
        }
        if (this->unk_244 == 8) {
            func_8088D864((Actor *) this, (Actor *) &sp4C);
        } else {
            func_8088D660((Actor *) this, &sp4C, 0.2f);
        }
        temp_v1 = globalCtx->sceneNum;
        phi_v1 = temp_v1;
        if ((temp_v1 == 0x6F) && (gSaveContext.sceneSetupIndex == 0) && (globalCtx->csCtx.unk_12 == 0) && ((temp_v0_2 = globalCtx->csCtx.frames, (temp_v0_2 == 0x95)) || (temp_v0_2 == 0x17D) || (temp_v0_2 == 0x24F))) {
            Audio_PlayActorSound2((Actor *) this, 0x281BU);
            phi_v1 = globalCtx->sceneNum;
        }
        if ((phi_v1 == 0x4F) && (gSaveContext.sceneSetupIndex == 0) && (globalCtx->csCtx.unk_12 == 4) && (globalCtx->csCtx.frames == 0x5F)) {
            Audio_PlayActorSound2((Actor *) this, 0x281BU);
        }
    } else {
        this->actor.shape.rot.x = 0;
        temp_a1 = &this->actor.world;
        sp2C = temp_a1;
        temp_a3 = sp48 + 0xC4C;
        sp30 = temp_a3;
        sp3C = Math_Vec3f_DistXYZ(temp_a3, (Vec3f *) temp_a1);
        temp_v0_3 = this->unk_244;
        if (temp_v0_3 != 5) {
            if (temp_v0_3 != 6) {
                if (temp_v0_3 != 9) {
                    if (temp_v0_3 != 0xA) {
                        sp44 = globalCtx->actorCtx.targetContext.unk38;
                        if (((sp48->unk_A6C & 0x40) != 0) && (temp_v0_4 = sp48->unk_A88, (temp_v0_4 != 0))) {
                            Math_Vec3f_Copy((Vec3f *) &sp4C, temp_v0_4 + 0x3C);
                        } else {
                            Math_Vec3f_Copy((Vec3f *) &sp4C, (Vec3f *) &globalCtx->actorCtx.targetContext);
                        }
                        sp50 += 1500.0f * this->actor.scale.y;
                        if (sp44 != 0) {
                            func_8088DB4C((Actor *) this, &sp4C, 0.0f, 30.0f, 0.2f);
                            if (this->actor.speedXZ >= 5.0f) {
                                func_8088F5F4(this, globalCtx, 0x10);
                            }
                        } else {
                            if ((this->unk_25A & 0x1F) == 0) {
                                this->unk_23C = Rand_ZeroFloat(7.0f) + 3.0f;
                            }
                            temp_v0_5 = this->unk_262;
                            if ((temp_v0_5 & 2) != 0) {
                                if (sp3C < 30.0f) {
                                    this->unk_262 = temp_v0_5 ^ 2;
                                }
                                func_8088DB4C((Actor *) this, &sp4C, 0.0f, 30.0f, 0.2f);
                                func_8088F5F4(this, globalCtx, 0x10);
                            } else {
                                if (sp3C > 100.0f) {
                                    this->unk_262 = temp_v0_5 | 2;
                                    if (this->unk_269 == 0) {
                                        Audio_PlayActorSound2((Actor *) this, 0x299FU);
                                    }
                                    this->unk_25C = 0x64;
                                }
                                func_8088DB4C((Actor *) this, &sp4C, 0.0f, this->unk_23C, 0.2f);
                            }
                        }
                    } else {
                        temp_t8 = globalCtx->cameraPtrs[globalCtx->activeCamera];
                        sp4C.unk_0 = temp_t8->eye.x;
                        sp4C.unk_4 = (f32) temp_t8->eye.y;
                        sp4C.unk_8 = (f32) temp_t8->eye.z;
                        sp50 += -2000.0f * this->actor.scale.y;
                        func_8088DB4C((Actor *) this, &sp4C, 0.0f, 30.0f, 0.2f);
                    }
                } else {
                    sp4C.unk_0 = temp_a3->x;
                    sp4C.unk_4 = (f32) temp_a3->y;
                    sp4C.unk_8 = (f32) temp_a3->z;
                    sp50 += 1500.0f * this->actor.scale.y;
                    func_8088D7F8((Actor *) this, (Actor *) &sp4C);
                    func_8088F5F4(this, globalCtx, 0x10);
                    temp_f0 = this->unk_254;
                    if (temp_f0 <= 19.0f) {
                        this->unk_254 = temp_f0 + 1.0f;
                    }
                    if (this->unk_254 >= 21.0f) {
                        this->unk_254 -= 1.0f;
                    }
                    temp_v0_6 = this->unk_25C;
                    if ((s32) temp_v0_6 < 0x20) {
                        this->unk_24C = (temp_v0_6 * 0xF0) + 0x200;
                    }
                }
            } else {
                sp30 = temp_a3;
                func_8088D660((Actor *) this, (f32 *) temp_a3, 0.2f, temp_a3);
                sp2C->pos.x = temp_a3->x;
                sp2C->pos.y = temp_a3->y;
                sp2C->pos.z = temp_a3->z;
            }
        } else {
            sp30 = temp_a3;
            func_8088D660((Actor *) this, (f32 *) temp_a3, 1.0f - ((f32) this->unk_24A * 0.033333335f), temp_a3);
            if (sp3C < 7.0f) {
                this->unk_25C = 0;
                sp40 = 0.0f;
            } else if (sp3C < 25.0f) {
                temp_f12 = 1.0f - ((Math_Vec3f_DistXYZ(sp30, (Vec3f *) sp2C) - 5.0f) * 0.05f);
                sp40 = (1.0f - (temp_f12 * temp_f12)) * 0.008f;
            } else {
                sp40 = 0.008f;
            }
            func_8088F5F4(this, globalCtx, 0x10);
        }
    }
    temp_v0_7 = this->unk_244;
    if (temp_v0_7 == 5) {
        this->actor.scale.x = sp40;
    } else if (temp_v0_7 == 6) {
        this->actor.scale.x = 0.0f;
    } else {
        Math_SmoothStepToF((f32 *) &this->actor.scale, 0.008f, 0.3f, 0.00080000004f, 0.000080000005f);
    }
    func_8088E60C((Actor *) this, globalCtx);
    if (func_800EE29C(globalCtx, 0xC9U) == 0) {
        this->actor.shape.rot.y = this->unk_258;
    }
}

void func_8088EF18(void *arg0, void *arg1, void *arg2, f32 arg3) {
    arg0->unk_0 = (f32) (arg0->unk_0 + ((arg1->unk_0 - arg2->unk_0) * arg3));
    arg0->unk_4 = (f32) (arg0->unk_4 + ((arg1->unk_4 - arg2->unk_4) * arg3));
    arg0->unk_8 = (f32) (arg0->unk_8 + ((arg1->unk_8 - arg2->unk_8) * arg3));
    arg0->unk_C = (f32) (arg0->unk_C + ((arg1->unk_C - arg2->unk_C) * arg3));
}

void func_8088EFA4(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    void *sp28;
    f32 sp24;
    f32 temp_f0;
    s32 temp_v1;
    u16 temp_t1;
    u16 temp_t8;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    s32 phi_v1;
    u16 phi_v0;

    sp2C = arg1->actorCtx.targetContext.unk38;
    sp28 = arg1->actorCtx.actorList[2].first;
    temp_v0 = arg0->unk_264;
    temp_v1 = temp_v0 & 8;
    temp_t8 = temp_v0 & 0xFFEF;
    phi_v1 = temp_v1;
    phi_v0 = temp_v0;
    if (temp_v1 == 0) {
        temp_v0_2 = temp_t8 & 0xFFFF;
        arg0->unk_264 = temp_t8;
        phi_v1 = temp_v0_2 & 8;
        phi_v0 = temp_v0_2;
    }
    if (phi_v1 != 0) {
        if ((phi_v0 & 0x10) != 0) {
            temp_t1 = phi_v0 & 0xFFF7;
            arg0->unk_264 = temp_t1;
            arg0->unk_268 = 0U;
            arg0->unk_264 = (u16) (temp_t1 & 0xFFEF);
            arg0->unk_238 = 1.0f;
        } else {
            arg0->unk_1DC = 0x437F0000;
            arg0->unk_1E8 = 0x437F0000;
            arg0->unk_1F0 = 0x42A00000;
            arg0->unk_1F4 = 0x42A00000;
            arg0->unk_1E0 = 0;
            arg0->unk_1E4 = 0;
            arg0->unk_1F8 = 0;
            arg0->unk_1EC = 0x43480000;
        }
    } else if (arg1->actorCtx.targetContext.unk40 != 0.0f) {
        arg0->unk_268 = 0U;
        arg0->unk_238 = 1.0f;
        if (arg0->unk_269 == 0) {
            Audio_PlayActorSound2(arg0, 0x299FU);
        }
    } else if (arg0->unk_268 == 0) {
        if ((sp2C == 0) || (Math_Vec3f_DistXYZ((Vec3f *) &arg0->world, arg1 + 0x1DC0) < 50.0f)) {
            arg0->unk_268 = 1U;
        }
    } else if (arg0->unk_238 != 0.0f) {
        arg1 = arg1;
        if (Math_StepToF(arg0 + 0x238, 0.0f, 0.25f) != 0) {
            arg0->unk_1DC = (?32) arg1->actorCtx.targetContext.unk18;
            arg0->unk_1E0 = (?32) arg1->actorCtx.targetContext.unk1C;
            arg0->unk_1E4 = (f32) arg1->actorCtx.targetContext.unk20;
            arg0->unk_1E8 = (f32) arg1->actorCtx.targetContext.unk24;
            arg0->unk_1EC = (?32) arg1->actorCtx.targetContext.unk28;
            arg0->unk_1F0 = (?32) arg1->actorCtx.targetContext.unk2C;
            arg0->unk_1F4 = (f32) arg1->actorCtx.targetContext.unk30;
            arg0->unk_1F8 = (f32) arg1->actorCtx.targetContext.unk34;
        } else {
            temp_a0 = arg0 + 0x1DC;
            temp_f0 = 0.25f / arg0->unk_238;
            sp24 = temp_f0;
            func_8088EF18(temp_a0, arg1 + 0x1DD8, temp_a0, temp_f0);
            temp_a0_2 = arg0 + 0x1EC;
            func_8088EF18(temp_a0_2, arg1 + 0x1DE8, temp_a0_2, temp_f0);
        }
    }
    temp_v1_2 = arg0->unk_262;
    if ((temp_v1_2 & 1) != 0) {
        if ((sp2C == 0) || (sp28->unk_730 == 0)) {
            arg0->unk_262 = (u16) (temp_v1_2 ^ 1);
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    }
    if ((sp2C != 0) && (sp28->unk_730 != 0)) {
        if (arg0->unk_269 == 0) {
            Audio_PlayActorSound2(arg0, 0U);
        }
        arg0->unk_262 = (u16) (arg0->unk_262 | 1);
    }
}

void func_8088F214(Actor *arg0, GlobalContext *arg1) {
    EnElf *sp34;
    void *sp2C;
    Vec3f *sp20;
    PosRot *sp1C;
    Actor *temp_a0_3;
    Actor *temp_a0_5;
    Actor *temp_v0;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    PosRot *temp_a1_2;
    Vec3f *temp_a2;
    s16 temp_a0_4;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_a1;
    s32 temp_v0_5;
    u16 temp_v1;
    void *temp_t0;
    s16 phi_a2;
    void *phi_t0;
    Actor *phi_a3;
    EnElf *phi_a2_2;
    Actor *phi_a3_2;
    void *phi_t0_2;

    temp_t0 = arg1->actorCtx.actorList[2].first;
    temp_a0 = arg1;
    phi_t0 = temp_t0;
    phi_a3 = arg0;
    if (arg1->csCtx.state != 0) {
        arg1 = arg1;
        arg0 = arg0;
        sp2C = temp_t0;
        if (func_800EE29C(temp_a0, 0xC9U) != 0) {
            temp_a0_2 = arg1;
            arg1 = arg1;
            arg0 = arg0;
            sp2C = temp_t0;
            temp_v1 = arg1->csCtx.npcActions[func_800EE200(temp_a0_2, 0xC9U)]->unk0;
            if (temp_v1 != 1) {
                if (temp_v1 != 3) {
                    if (temp_v1 != 4) {
                        phi_a2_2 = NULL;
                    } else {
                        phi_a2_2 = (EnElf *)7;
                    }
                } else {
                    phi_a2_2 = (EnElf *)4;
                }
            } else {
                phi_a2_2 = (EnElf *)8;
            }
        } else {
            arg0->unk_25C = 0x64;
            phi_a2_2 = NULL;
        }
        phi_a3_2 = arg0;
        phi_t0_2 = temp_t0;
    } else {
        temp_a0_3 = arg0;
        if ((arg0->unk_264 & 8) != 0) {
            sp34 = (EnElf *)1;
            arg0 = arg0;
            sp2C = temp_t0;
            func_800B9010(temp_a0_3, 0x21A5U);
            phi_a2_2 = (EnElf *)1;
            phi_a3_2 = arg0;
            phi_t0_2 = temp_t0;
        } else {
            temp_a1 = temp_t0->unk_A6C;
            temp_v0 = arg1->actorCtx.targetContext.unk38;
            phi_a2 = 0xA;
            if ((temp_a1 & 0x400) != 0) {
                arg0->unk_25C = 0x64;
            } else if ((temp_v0 == 0) || (phi_a2 = 1, (temp_v0->category == 4))) {
                if (temp_v0 != 0) {
                    arg0->unk_25C = 0x64;
                    temp_t0->unk_A70 = (s32) (temp_t0->unk_A70 | 0x100000);
                    phi_a2 = 0;
                } else {
                    temp_a0_4 = arg0->unk_244;
                    if (temp_a0_4 != 0) {
                        if (temp_a0_4 != 5) {
                            if (temp_a0_4 != 6) {
                                if (temp_a0_4 != 9) {
                                    phi_a2 = 0;
                                } else {
                                    temp_v0_2 = arg0->unk_25C;
                                    phi_a2 = temp_a0_4;
                                    if ((s32) temp_v0_2 > 0) {
                                        arg0->unk_25C = (s16) (temp_v0_2 - 1);
                                    } else {
                                        phi_a2 = 0;
                                    }
                                }
                            } else {
                                phi_a2 = 6;
                            }
                        } else if (arg0->unk_25C != 0) {
                            temp_v0_3 = arg0->unk_24A;
                            if ((s32) temp_v0_3 > 0) {
                                arg0->unk_24A = (s16) (temp_v0_3 - 1);
                                phi_a2 = 5;
                            } else {
                                temp_t0->unk_A70 = (s32) (temp_t0->unk_A70 | 0x100000);
                                phi_a2 = 0;
                            }
                        } else {
                            phi_a2 = 6;
                        }
                    } else {
                        temp_v0_4 = arg0->unk_25C;
                        if (temp_v0_4 != 0) {
                            arg0->unk_25C = (s16) (temp_v0_4 - 1);
                            phi_a2 = 0;
                        } else if ((temp_a1 & 0x40) == 0) {
                            temp_a0_5 = arg0;
                            if (arg0->unk_269 == 0) {
                                arg0 = arg0;
                                sp2C = temp_t0;
                                Audio_PlayActorSound2(temp_a0_5, 0x285FU);
                            }
                            phi_a2 = 5;
                            phi_t0 = temp_t0;
                            phi_a3 = arg0;
                        } else {
                            phi_a2 = 0;
                        }
                    }
                }
            }
            phi_a2_2 = (EnElf *) phi_a2;
            phi_a3_2 = phi_a3;
            phi_t0_2 = phi_t0;
            phi_a2_2 = (EnElf *) phi_a2;
            phi_a2_2 = (EnElf *) phi_a2;
            phi_a3_2 = phi_a3;
            phi_a3_2 = phi_a3;
            if (phi_a2 != 0) {
                if (phi_a2 != 5) {
                    if (phi_a2 != 6) {
                        phi_t0->unk_A70 = (s32) (phi_t0->unk_A70 | 0x100000);
                    } else {
                        temp_v0_5 = phi_t0->unk_A70;
                        if (temp_v0_5 & 0x100000) {
                            phi_a3->unk_25C = 0x2A;
                            phi_a2_2 = (EnElf *)9;
                            if (phi_a3->unk_269 == 0) {
                                sp34 = (EnElf *)9;
                                arg0 = phi_a3;
                                sp2C = phi_t0;
                                Audio_PlayActorSound2(phi_a3, 0x299FU);
                                phi_a3_2 = arg0;
                            }
                        } else if ((phi_t0->unk_A6C & 0x40) != 0) {
                            phi_t0->unk_A70 = (s32) (temp_v0_5 | 0x100000);
                            phi_a3->unk_25C = 0;
                            phi_a2_2 = NULL;
                        }
                        phi_t0_2 = phi_t0;
                    }
                } else {
                    phi_t0->unk_A70 = (s32) (phi_t0->unk_A70 & 0xFFEFFFFF);
                }
            } else {
                if ((phi_t0->unk_A70 << 0xB) >= 0) {
                    phi_a2_2 = (EnElf *)5;
                    if (phi_a3->unk_269 == 0) {
                        sp34 = (EnElf *)5;
                        arg0 = phi_a3;
                        sp2C = phi_t0;
                        Audio_PlayActorSound2(phi_a3, 0x285FU);
                        phi_a3_2 = arg0;
                    }
                }
                phi_t0_2 = phi_t0;
            }
        }
    }
    if (phi_a2_2 != phi_a3_2->unk_244) {
        sp34 = phi_a2_2;
        arg0 = phi_a3_2;
        sp2C = phi_t0_2;
        func_8088C51C((EnElf *) phi_a3_2, (s16) phi_a2_2, phi_a2_2, phi_a3_2);
        if (phi_a2_2 == 9) {
            temp_a2 = phi_t0_2 + 0xC4C;
            temp_a1_2 = &arg0->world;
            sp1C = temp_a1_2;
            sp20 = temp_a2;
            arg0 = arg0;
            arg0->unk_254 = Math_Vec3f_DistXZ(temp_a2, (Vec3f *) temp_a1_2);
            arg0->unk_248 = Math_Vec3f_Yaw((Vec3f *) sp1C, sp20);
        }
    }
}

void func_8088F5F4(EnElf *arg0, GlobalContext *arg1, s32 arg2) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s8 sp36;
    s8 sp35;
    s8 sp34;
    s8 sp32;
    s8 sp31;
    s8 sp30;
    s8 *temp_t1;

    if ((arg0->unk_262 & 8) == 0) {
        sp38 = randPlusMinusPoint5Scaled(6.0f) + arg0->actor.world.pos.x;
        sp3C = (Rand_ZeroOne() * 6.0f) + arg0->actor.world.pos.y;
        sp40 = randPlusMinusPoint5Scaled(6.0f) + arg0->actor.world.pos.z;
        sp34 = (s8) (u32) arg0->unk_1DC;
        sp35 = (s8) (u32) arg0->unk_1E0;
        temp_t1 = &sp30;
        sp36 = (s8) (u32) arg0->unk_1E4;
        sp30 = (s8) (u32) arg0->unk_1EC;
        sp31 = (s8) (u32) arg0->unk_1F0;
        sp32 = (s8) (u32) arg0->unk_1F4;
        EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) &sp38, &D_80890A6C, &D_80890A78, (Color_RGBA8 *) &sp34, (Color_RGBA8 *) temp_t1, (s16) 0x3E8, arg2);
    }
}

void func_8088F9E4(EnElf *arg0, GlobalContext *arg1) {
    ? sp28;

    arg0->actor.floorHeight = func_800C4188(arg1, arg1 + 0x830, arg0 + 0x80, &sp28, arg0, arg0 + 0x24);
    arg0->actor.shape.shadowAlpha = 0x32;
}

void func_8088FA38(EnElf *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    void *sp30;
    void *sp2C;
    s32 temp_v1_2;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk_262 & 0x10) != 0) {
        sp34.unk_0 = arg1->actorCtx.targetContext.unk0.x;
        sp34.unk_4 = (s32) arg1->actorCtx.targetContext.unk0.y;
        sp34.unk_8 = (s32) arg1->actorCtx.targetContext.unk0.z;
        temp_v1 = arg0->unk_234;
        if (temp_v1 != 0) {
            sp34.unk_0 = temp_v1->unk_24;
            sp34.unk_4 = (f32) temp_v1->unk_28;
            sp34.unk_8 = (f32) temp_v1->unk_2C;
        } else {
            temp_v1_2 = temp_v0->unk_730;
            if ((temp_v1_2 == 0) || (temp_v0 == temp_v1_2) || (arg0 == temp_v1_2) || ((arg0->unk264 & 4) != 0)) {
                sp30 = temp_v0;
                sp34 = (Math_SinS(temp_v0->shape.rot.y) * 20.0f) + temp_v0->unk_C40;
                sp38 = temp_v0->unk_C44 + 5.0f;
                sp3C = (Math_CosS(temp_v0->shape.rot.y) * 20.0f) + temp_v0->unk_C48;
                arg0->unk264 &= 0xFFFB;
            }
        }
        arg0->actor.focus.pos.x = sp34.unk_0;
        arg0->actor.focus.pos.y = sp34.unk_4;
        arg0->unk_262 &= 0xFFEF;
        arg0->actor.focus.pos.z = sp34.unk_8;
    }
    sp2C = arg0 + 0x3C;
    func_8088E5A8(arg0, arg1);
    sp34.unk_0 = sp2C->unk_0;
    sp34.unk_4 = (f32) sp2C->unk_4;
    sp34.unk_8 = (f32) sp2C->unk_8;
    func_8088DB4C((Actor *) arg0, &sp34, 0.0f, 30.0f, 0.2f);
    if (arg0->actor.speedXZ >= 5.0f) {
        func_8088F5F4(arg0, arg1, 0x10);
    }
    Math_SmoothStepToF((f32 *) &arg0->actor.scale, 0.008f, 0.3f, 0.00080000004f, 0.000080000005f);
    func_8088E60C((Actor *) arg0, arg1);
}

void func_8088FC34(EnElf *arg0, GlobalContext *arg1) {
    void *sp2C;
    f32 temp_f0;

    sp2C = arg1->actorCtx.actorList[2].first;
    Math_SmoothStepToS(arg0 + 0xBE, arg0->unk_258, 5, 0x1000, (s16) 0x400);
    arg0->unk_25A += 1;
    if (arg0->unk_234 == 0) {
        if ((arg0->unk264 & 0x20) != 0) {
            arg0->unk_240 = 0.0f;
        } else {
            Math_StepToF(arg0 + 0x240, 1.0f, 0.05f);
        }
        temp_f0 = arg0->unk_240;
        func_800FD2B4(arg1, temp_f0 * temp_f0, sp2C->projectedPos.z + 780.0f, 0x3E4CCCCD, 0.5f);
    }
}

void func_8088FD04(Actor *arg0) {
    u16 temp_t5;
    u16 temp_t9;

    if (ActorCutscene_GetCurrentIndex() == arg0->cutscene) {
        temp_t9 = arg0->unk_264 & 0xFFFE;
        arg0->unk_264 = temp_t9;
        arg0->unk_264 = (u16) (temp_t9 | 2);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        arg0->unk_264 = (u16) (arg0->unk_264 | 1);
        return;
    }
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_Start((s16) arg0->cutscene, arg0);
        temp_t5 = arg0->unk_264 & 0xFFFE;
        arg0->unk_264 = temp_t5;
        arg0->unk_264 = (u16) (temp_t5 | 2);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
    arg0->unk_264 = (u16) (arg0->unk_264 | 1);
}

void func_8088FDCC(EnElf *arg0) {
    EnElf *temp_a2;
    s8 temp_a0;
    u16 temp_v0;
    u16 phi_v0;

    temp_a2 = arg0;
    temp_a2->actor.update = func_8089010C;
    arg0 = temp_a2;
    func_8088C51C(temp_a2, 0, temp_a2);
    temp_v0 = arg0->unk264;
    arg0->actor.focus.pos.x = arg0->actor.world.pos.x;
    arg0->unk_262 &= 0xFFDF;
    arg0->unk_234 = NULL;
    arg0->actor.focus.pos.z = arg0->actor.world.pos.z;
    arg0->actor.focus.pos.y = arg0->actor.world.pos.y;
    phi_v0 = temp_v0;
    if ((temp_v0 & 2) != 0) {
        temp_a0 = arg0->actor.cutscene;
        if (temp_a0 != 0x7C) {
            arg0 = arg0;
            ActorCutscene_Stop((s16) temp_a0);
            phi_v0 = arg0->unk264;
        }
    }
    arg0->unk264 = phi_v0 & 0xFFDF;
}

void func_8088FE64(EnElf *arg0, GlobalContext *arg1) {
    void *sp20;
    s32 temp_hi;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_v1;
    void *phi_v1;

    func_8088FA38(arg0, arg1);
    temp_v0 = func_80152498(&arg1->msgCtx);
    if (temp_v0 != 2) {
        if (temp_v0 != 4) {
            if (temp_v0 != 5) {

            } else if (func_80147624(arg1) != 0) {
                temp_v0_2 = arg1->msgCtx.unk11F04;
                if ((s32) temp_v0_2 >= 0x224) {
                    switch (temp_v0_2) {            /* switch 1 */
                    case 576:                       /* switch 1 */
                        func_80151938(arg1, 0x245U);
                        break;
                    }
                } else {
                    switch (temp_v0_2) {            /* switch 2 */
                    case 575:                       /* switch 1 */
                    case 577:                       /* switch 1 */
                    case 578:                       /* switch 1 */
                    case 579:                       /* switch 1 */
                    case 580:                       /* switch 1 */
                        temp_hi = (s32) gSaveContext.day % 5;
                        if (temp_hi != 1) {
                            if (temp_hi != 2) {
                                if (temp_hi != 3) {

                                } else if (gSaveContext.isNight == 0) {
                                    func_80151938(arg1, 0x248U);
                                } else if (((s32) gSaveContext.time < 0x4000) && ((gSaveContext.weekEventReg[74] & 0x20) != 0)) {
                                    func_80151938(arg1, 0x225U);
                                } else {
                                    func_80151938(arg1, 0x249U);
                                }
                            } else {
                                func_80151938(arg1, 0x247U);
                            }
                        } else {
                            func_80151938(arg1, 0x246U);
                        }
                        break;
                    default:                        /* switch 2 */
                    default:                        /* switch 1 */
                        func_801477B4(arg1);
                        func_8088FDCC(arg0);
                        break;
                    }
                }
            }
        } else if (func_80147624(arg1) != 0) {
            temp_v1 = arg1 + 0x10000;
            phi_v1 = temp_v1;
            if (arg1->msgCtx.unk11F04 == 0x202) {
                temp_v0_3 = arg1->msgCtx.choiceIndex;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {

                    } else {
                        sp20 = temp_v1;
                        func_8019F208();
                        goto block_11;
                    }
                } else {
                    sp20 = temp_v1;
                    func_8019F230();
block_11:
                    phi_v1 = sp20;
                }
            }
            temp_v0_4 = phi_v1->unk_6929;
            if (temp_v0_4 != 0) {
                if (temp_v0_4 != 1) {

                } else {
                    func_80151938(arg1, (phi_v1->unk_680C + 1) & 0xFFFF);
                }
            } else {
                func_80151938(arg1, (phi_v1->unk_680C - 1) & 0xFFFF);
            }
        }
    } else {
        func_8088FDCC(arg0);
    }
    func_8088FC34(arg0, arg1);
    if ((arg0->unk264 & 1) != 0) {
        func_8088FD04((Actor *) arg0);
    }
}

void func_8089010C(Actor *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    Actor *temp_a2;
    Actor *temp_a2_2;
    f32 temp_f0;
    s16 temp_v1;
    u16 temp_t0;
    u16 temp_t2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_t0_2;
    u8 temp_v0_4;
    s32 phi_v1;
    u8 phi_v0;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = func_800F05C0(globalCtx);
    if (this->unk_266 != temp_v0) {
        this->unk_266 = temp_v0;
        gSaveContext.naviTimer = 0;
    }
    temp_v1 = sp2C->unk_A84;
    phi_v1 = (s32) temp_v1;
    if ((temp_v1 == 0) && (sp2C->unk_730 == 0)) {
        temp_v0_2 = gSaveContext.naviTimer;
        if (((s32) temp_v0_2 >= 0x258) && ((s32) temp_v0_2 < 0xBB9)) {
            sp2C->unk_A84 = func_800F05C0(globalCtx);
            phi_v1 = (s32) sp2C->unk_A84;
        }
    }
    if (phi_v1 < 0) {
        this->flags |= 0x10000;
    }
    if (func_800B84D0(this, globalCtx) != 0) {
        func_8019FDC8((void *) &D_801DB4A4, 0x6873U, 0x20);
        this->focus.pos.x = this->world.pos.x;
        this->focus.pos.y = this->world.pos.y;
        this->focus.pos.z = this->world.pos.z;
        if (this->textId == func_800F05C0(globalCtx)) {
            this->unk_262 = (u16) (this->unk_262 | 0x80);
            gSaveContext.naviTimer = 0xBB9;
        }
        this->update = (void (*)(Actor *, GlobalContext *)) func_8088FE64;
        temp_t2 = this->unk_262 | 0x10;
        this->unk_262 = temp_t2;
        this->unk_262 = (u16) (temp_t2 | 0x20);
        func_8088C51C((EnElf *) this, 3);
        temp_a2 = this->unk_230;
        if (temp_a2 != 0) {
            temp_a2->flags |= 0x100;
            this->cutscene = this->unk_230->cutscene;
            if (this->cutscene != -1) {
                func_8088FD04(this);
            }
            temp_a2_2 = this->unk_230;
            if (temp_a2_2->home.rot.x == -0x961) {
                this->unk_234 = temp_a2_2;
                func_800B86C8(this, globalCtx, temp_a2_2);
            }
        } else {
            this->cutscene = -1;
        }
        this->flags &= 0xFFFEFFFF;
    } else if ((this->unk_264 & 4) != 0) {
        this->focus.pos.x = this->world.pos.x;
        temp_t0 = this->unk_262 | 0x10;
        this->unk_262 = temp_t0;
        this->unk_262 = (u16) (temp_t0 | 0x20);
        this->update = (void (*)(Actor *, GlobalContext *)) func_8088FE64;
        this->focus.pos.y = this->world.pos.y;
        this->focus.pos.z = this->world.pos.z;
        func_8088C51C((EnElf *) this, 3);
    } else {
        this->unk_270(this, globalCtx);
        if (func_801690CC(globalCtx) == 0) {
            temp_v0_3 = gSaveContext.naviTimer;
            if ((s32) temp_v0_3 < 0x64C8) {
                gSaveContext.naviTimer = temp_v0_3 + 1;
            } else if ((this->unk_262 & 0x80) == 0) {
                gSaveContext.naviTimer = 0;
            }
        }
    }
    temp_f0 = this->unk_240;
    this->unk_230 = NULL;
    this->unk_25A = (u16) (this->unk_25A + 1);
    if ((temp_f0 >= 0.0f) && (func_800FD2B4(globalCtx, temp_f0 * temp_f0 * temp_f0, sp2C->projectedPos.z + 780.0f, 0x3E4CCCCD, 0.5f) != 0)) {
        Math_StepToF(this + 0x240, -0.05f, 0.05f);
    }
    temp_v0_4 = this->unk_269;
    temp_t0_2 = temp_v0_4 - 1;
    phi_v0 = temp_v0_4;
    if ((s32) temp_v0_4 > 0) {
        this->unk_269 = temp_t0_2;
        phi_v0 = temp_t0_2 & 0xFF;
    }
    if ((phi_v0 == 0) && (globalCtx->csCtx.state != 0)) {
        this->unk_269 = 1U;
    }
}

void EnElf_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnElf *this = (EnElf *) thisx;
    this->actionFunc(this, globalCtx);
    this->unk_25A += 1;
    this->actor.shape.rot.y = this->unk_258;
    if ((this->unk_262 & 0x200) != 0) {
        func_8088F9E4(this, globalCtx);
    }
}

s32 func_80890494(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 sp34;
    f32 temp_f20;
    f32 temp_f2;
    f32 phi_f20;

    if (arg1 == 6) {
        temp_f2 = ((Math_SinS((s16) (arg5->unk_25A << 0xC)) * 0.1f) + 1.0f) * 0.012f;
        phi_f20 = temp_f2;
        if ((arg5->unk_262 & 0x200) != 0) {
            phi_f20 = 2.0f * temp_f2;
        }
        temp_f20 = phi_f20 * (arg5->unk_58 * 124.99999f);
        SysMatrix_MultiplyVector3fByState(&D_80890A84, (Vec3f *) &sp34);
        SysMatrix_InsertTranslation(sp34, sp38, sp3C, 0);
        Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
    }
    if (((arg5->unk_262 & 0x200) != 0) && ((arg1 == 4) || (arg1 == 7) || (arg1 == 0xB) || (arg1 == 0xE))) {
        *arg2 = NULL;
    }
    return 0;
}

void EnElf_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp70;
    GraphicsContext *sp58;
    Gfx *sp34;
    Actor *temp_v1;
    Gfx *temp_a1;
    Gfx *temp_t3;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GlobalContext *temp_a0;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_a0_3;
    s16 temp_v0;
    s32 temp_a0_4;
    f32 phi_f0;
    Gfx *phi_v0;
    s32 phi_a0;
    EnElf *this = (EnElf *) thisx;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (temp_v1->unk_153 != 0x14) {
        temp_a0 = globalCtx;
        if (((this->unk_262 & 8) == 0) && ((sp70 = temp_v1, globalCtx = globalCtx, (func_800EE29C(temp_a0, 0xC9U) == 0)) || (sp70 = temp_v1, (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0xC9U)]->unk0 != 6))) && (!(globalCtx->actorCtx.actorList[2].first->unk_A6C & 0x100000) || ((f32) gGameInfo->data[2682] < this->actor.projectedPos.z))) {
            temp_a0_2 = globalCtx->state.gfxCtx;
            temp_a1 = temp_a0_2->polyOpa.d - 0x20;
            temp_a0_2->polyOpa.d = temp_a1;
            temp_a0_3 = globalCtx->state.gfxCtx;
            sp34 = temp_a1;
            sp58 = temp_a0_3;
            func_8012C94C(temp_a0_3);
            temp_a0_4 = (this->unk_25A * 0x32) & 0x1FF;
            phi_a0 = temp_a0_4;
            if (temp_a0_4 >= 0x100) {
                phi_a0 = 0x1FF - temp_a0_4;
            }
            temp_v0 = this->unk_25E;
            if ((s32) temp_v0 < 0) {
                phi_f0 = ((f32) temp_v0 * 0.0011666666f) + 1.0f;
            } else {
                phi_f0 = 1.0f;
            }
            temp_v1_2 = sp58->polyXlu.p;
            sp58->polyXlu.p = temp_v1_2 + 8;
            temp_v1_2->words.w1 = (u32) temp_a1;
            temp_v1_2->words.w0 = 0xDB060020;
            temp_v0_2 = temp_a1 + 8;
            temp_a1->words.w0 = 0xE7000000;
            temp_a1->words.w1 = 0;
            temp_v0_2->words.w0 = 0xFA000001;
            temp_v0_3 = temp_v0_2 + 8;
            temp_v0_2->words.w1 = ((s32) this->unk_1DC << 0x18) | (((s32) this->unk_1E0 & 0xFF) << 0x10) | (((s32) this->unk_1E4 & 0xFF) << 8) | ((s32) (this->unk_1E8 * phi_f0) & 0xFF);
            if ((this->unk_262 & 4) != 0) {
                temp_v0_3->words.w0 = 0xE200001C;
                temp_v0_3->words.w1 = 0xC184340;
                phi_v0 = temp_v0_3 + 8;
            } else {
                temp_v0_3->words.w0 = 0xE200001C;
                temp_v0_3->words.w1 = 0xC184B50;
                phi_v0 = temp_v0_3 + 8;
            }
            phi_v0->words.w0 = 0xDF000000;
            phi_v0->words.w1 = 0;
            temp_v1_3 = sp58->polyXlu.p;
            sp58->polyXlu.p = temp_v1_3 + 8;
            temp_v1_3->words.w0 = 0xFB000000;
            temp_v1_3->words.w1 = ((s32) this->unk_1EC << 0x18) | (((s32) this->unk_1F0 & 0xFF) << 0x10) | (((s32) this->unk_1F4 & 0xFF) << 8) | ((s32) ((f32) phi_a0 * phi_f0) & 0xFF);
            temp_t3 = sp58->polyXlu.p;
            sp58 = sp58;
            sp58->polyXlu.p = SkelAnime_Draw2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_80890494, NULL, (Actor *) this, temp_t3);
        }
    }
}

void func_808908D0(f32 *arg0, GlobalContext *arg1, u32 arg2) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    void *temp_v0;

    temp_v0 = (arg1 + (arg2 * 4))->unk_1F4C;
    temp_f2 = (f32) temp_v0->unk_C;
    sp18 = (f32) temp_v0->unk_18;
    temp_f12 = (f32) temp_v0->unk_10;
    temp_f14 = (f32) temp_v0->unk_14;
    sp1C = (f32) temp_v0->unk_1C;
    sp20 = (f32) temp_v0->unk_20;
    sp2C = temp_f14;
    sp28 = temp_f12;
    sp24 = temp_f2;
    temp_f0 = func_800F5A8C(temp_f12, temp_f14, temp_v0->unk_4, temp_v0->unk_2, arg1->csCtx.frames, arg1);
    arg0->unk_0 = ((sp18 - temp_f2) * temp_f0) + temp_f2;
    arg0->unk_4 = (f32) (((sp1C - temp_f12) * temp_f0) + temp_f12);
    arg0->unk_8 = (f32) (((sp20 - temp_f14) * temp_f0) + temp_f14);
}
