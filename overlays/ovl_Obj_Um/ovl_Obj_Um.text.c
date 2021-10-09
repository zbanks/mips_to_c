typedef struct ObjUm {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjUm *, GlobalContext *);
    /* 0x160 */ SkelAnime unk160;                   /* inferred */
    /* 0x1A4 */ Vec3s unk1A4;                       /* inferred */
    /* 0x1AA */ char pad1AA[0x7E];                  /* maybe part of unk1A4[22]? */
    /* 0x228 */ Vec3s unk228;                       /* inferred */
    /* 0x22E */ char pad22E[0x7E];                  /* maybe part of unk228[22]? */
    /* 0x2AC */ s16 unk2AC;                         /* inferred */
    /* 0x2AE */ s16 unk2AE;                         /* inferred */
    /* 0x2B0 */ s16 unk2B0;                         /* inferred */
    /* 0x2B2 */ char pad2B2[0x2];
    /* 0x2B4 */ s32 unk2B4;                         /* inferred */
    /* 0x2B8 */ Actor *unk2B8;                      /* inferred */
    /* 0x2BC */ s32 unk2BC;                         /* inferred */
    /* 0x2C0 */ char pad2C0[0x4];
    /* 0x2C4 */ f32 unk2C4;                         /* inferred */
    /* 0x2C8 */ f32 unk2C8;                         /* inferred */
    /* 0x2CC */ f32 unk2CC;                         /* inferred */
    /* 0x2D0 */ char pad2D0[0xC];                   /* maybe part of unk2CC[4]? */
    /* 0x2DC */ f32 unk2DC;                         /* inferred */
    /* 0x2E0 */ f32 unk2E0;                         /* inferred */
    /* 0x2E4 */ f32 unk2E4;                         /* inferred */
    /* 0x2E8 */ char pad2E8[0xC];                   /* maybe part of unk2E4[4]? */
    /* 0x2F4 */ s32 unk2F4;                         /* inferred */
    /* 0x2F8 */ ? unk2F8;                           /* inferred */
    /* 0x2F8 */ char pad2F8[0x4];
    /* 0x2FC */ u16 unk2FC;                         /* inferred */
    /* 0x2FE */ ? unk2FE;                           /* inferred */
    /* 0x2FE */ char pad2FE[0x4];
    /* 0x302 */ u16 unk302;                         /* inferred */
    /* 0x304 */ char pad304[0x4];                   /* maybe part of unk302[3]? */
    /* 0x308 */ f32 unk308;                         /* inferred */
    /* 0x30C */ f32 unk30C;                         /* inferred */
    /* 0x310 */ f32 unk310;                         /* inferred */
    /* 0x314 */ char pad314[0x18];                  /* maybe part of unk310[7]? */
    /* 0x32C */ f32 unk32C;                         /* inferred */
    /* 0x330 */ char pad330[0x20];                  /* maybe part of unk32C[9]? */
    /* 0x350 */ s32 unk350;                         /* inferred */
    /* 0x354 */ s32 unk354;                         /* inferred */
    /* 0x358 */ char pad358[0xC8];                  /* maybe part of unk354[51]? */
    /* 0x420 */ s32 unk420;                         /* inferred */
    /* 0x424 */ ColliderCylinder unk424;            /* inferred */
    /* 0x470 */ ColliderCylinder unk470;            /* inferred */
    /* 0x4BC */ f32 unk4BC;                         /* inferred */
    /* 0x4C0 */ f32 unk4C0;                         /* inferred */
    /* 0x4C4 */ f32 unk4C4;                         /* inferred */
    /* 0x4C8 */ u16 unk4C8;                         /* inferred */
    /* 0x4CA */ char pad4CA[0x2];
    /* 0x4CC */ u32 unk4CC;                         /* inferred */
    /* 0x4D0 */ s32 unk4D0;                         /* inferred */
    /* 0x4D4 */ u32 unk4D4;                         /* inferred */
    /* 0x4D8 */ s32 unk4D8;                         /* inferred */
    /* 0x4DC */ s32 unk4DC;                         /* inferred */
    /* 0x4E0 */ s32 unk4E0;                         /* inferred */
} ObjUm;                                            /* size = 0x4E4 */

struct _mips2c_stack_ObjUm_Destroy {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjUm_Draw {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_ObjUm_Init {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ SkelAnime *sp44;                     /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad48[0xC];
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_ObjUm_SetupAction {};          /* size 0x0 */

struct _mips2c_stack_ObjUm_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B77770 {
    /* 0x000 */ char pad0[0x20];
    /* 0x020 */ s32 sp20;                           /* inferred */
    /* 0x024 */ s32 sp24;                           /* inferred */
    /* 0x028 */ Vec3f *sp28;                        /* inferred */
    /* 0x02C */ Vec3f *sp2C;                        /* inferred */
    /* 0x030 */ Vec3f *sp30;                        /* inferred */
    /* 0x034 */ void *sp34;                         /* inferred */
    /* 0x038 */ Vec3f *sp38;                        /* inferred */
    /* 0x03C */ Vec3f *sp3C;                        /* inferred */
    /* 0x040 */ Vec3f *sp40;                        /* inferred */
    /* 0x044 */ Vec3f *sp44;                        /* inferred */
    /* 0x048 */ Vec3f *sp48;                        /* inferred */
    /* 0x04C */ void *sp4C;                         /* inferred */
    /* 0x050 */ void *sp50;                         /* inferred */
    /* 0x054 */ void *sp54;                         /* inferred */
    /* 0x058 */ void *sp58;                         /* inferred */
    /* 0x05C */ char pad5C[0x4];
    /* 0x060 */ ? sp60;                             /* inferred */
    /* 0x060 */ char pad60[0xC];
    /* 0x06C */ ? sp6C;                             /* inferred */
    /* 0x06C */ char pad6C[0xC];
    /* 0x078 */ ? sp78;                             /* inferred */
    /* 0x078 */ char pad78[0xC];
    /* 0x084 */ ? sp84;                             /* inferred */
    /* 0x084 */ char pad84[0xC];
    /* 0x090 */ ? sp90;                             /* inferred */
    /* 0x090 */ char pad90[0xC];
    /* 0x09C */ ? sp9C;                             /* inferred */
    /* 0x09C */ char pad9C[0xC];
    /* 0x0A8 */ ? spA8;                             /* inferred */
    /* 0x0A8 */ char padA8[0xC];
    /* 0x0B4 */ ? spB4;                             /* inferred */
    /* 0x0B4 */ char padB4[0xC];
    /* 0x0C0 */ ? spC0;                             /* inferred */
    /* 0x0C0 */ char padC0[0xC];
    /* 0x0CC */ ? spCC;                             /* inferred */
    /* 0x0CC */ char padCC[0xC];
    /* 0x0D8 */ ? spD8;                             /* inferred */
    /* 0x0D8 */ char padD8[0xC];
    /* 0x0E4 */ ? spE4;                             /* inferred */
    /* 0x0E4 */ char padE4[0xC];
    /* 0x0F0 */ ? spF0;                             /* inferred */
    /* 0x0F0 */ char padF0[0xC];
    /* 0x0FC */ ? spFC;                             /* inferred */
    /* 0x0FC */ char padFC[0xC];
    /* 0x108 */ ? sp108;                            /* inferred */
    /* 0x108 */ char pad108[0x10];
};                                                  /* size = 0x118 */

struct _mips2c_stack_func_80B77FA4 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ ActorContext *sp38;                  /* inferred */
    /* 0x3C */ char pad3C[0x8];                     /* maybe part of sp38[3]? */
    /* 0x44 */ void *sp44;                          /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B781DC {
    /* 0x00 */ char pad0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B783E0 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad34[0x8];                     /* maybe part of sp30[3]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad50[0x14];
    /* 0x64 */ void *sp64;                          /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ u8 *sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B78764 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B78A54 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ char pad34[0x2];
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B78C18 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B78D08 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ CollisionCheckContext *sp18;         /* inferred */
    /* 0x1C */ char pad1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B78DF0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B78E38 {};              /* size 0x0 */

struct _mips2c_stack_func_80B78E88 {};              /* size 0x0 */

struct _mips2c_stack_func_80B78EBC {};              /* size 0x0 */

struct _mips2c_stack_func_80B78EFC {};              /* size 0x0 */

struct _mips2c_stack_func_80B79524 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B79560 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B795A0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B79734 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ MessageContext *sp18;                /* inferred */
    /* 0x1C */ char pad1C[0x4];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B797EC {};              /* size 0x0 */

struct _mips2c_stack_func_80B7984C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B79A24 {};              /* size 0x0 */

struct _mips2c_stack_func_80B79A50 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B79BA0 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad50[0x14];
    /* 0x64 */ void *sp64;                          /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ void *sp6C;                          /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B79F10 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B79FFC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7A070 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7A0E0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7A144 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7A1B4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7A240 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7A2AC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7A394 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7A400 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B7A494 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7A614 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B7A7AC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7A860 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7AB78 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7ABE4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7AC94 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7AD34 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7AE58 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7AEFC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7AF30 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x8];                     /* maybe part of sp38[3]? */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B7B154 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7B18C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad28[0xC];                     /* maybe part of sp24[4]? */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B7B598 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x2];
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ s32 *sp40;                           /* inferred */
    /* 0x44 */ s32 *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad50[0xC];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad5C[0x14];
    /* 0x70 */ void *sp70;                          /* inferred */
    /* 0x74 */ char pad74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80B7B93C {
    /* 0x00 */ char pad0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0x4];
    /* 0x80 */ ? sp80;                              /* inferred */
    /* 0x80 */ char pad80[0xC];
    /* 0x8C */ ? sp8C;                              /* inferred */
    /* 0x8C */ char pad8C[0xC];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80B7BABC {
    /* 0x000 */ char pad0[0x4C];
    /* 0x04C */ MtxF *sp4C;                         /* inferred */
    /* 0x050 */ char pad50[0x20];                   /* maybe part of sp4C[9]? */
    /* 0x070 */ f32 sp70;                           /* inferred */
    /* 0x074 */ char pad74[0xC];                    /* maybe part of sp70[4]? */
    /* 0x080 */ s16 sp80;                           /* inferred */
    /* 0x082 */ s16 sp82;                           /* inferred */
    /* 0x084 */ s16 sp84;                           /* inferred */
    /* 0x086 */ char pad86[0x2];
    /* 0x088 */ f32 sp88;                           /* inferred */
    /* 0x08C */ f32 sp8C;                           /* inferred */
    /* 0x090 */ f32 sp90;                           /* inferred */
    /* 0x094 */ char pad94[0x4];
    /* 0x098 */ ? sp98;                             /* inferred */
    /* 0x098 */ char pad98[0xC];
    /* 0x0A4 */ ? spA4;                             /* inferred */
    /* 0x0A4 */ char padA4[0xC];
    /* 0x0B0 */ f32 spB0;                           /* inferred */
    /* 0x0B4 */ ? spB4;                             /* inferred */
    /* 0x0B4 */ char padB4[0xC];
    /* 0x0C0 */ ? spC0;                             /* inferred */
    /* 0x0C0 */ char padC0[0x4];
    /* 0x0C4 */ f32 spC4;                           /* inferred */
    /* 0x0C8 */ char padC8[0x4];
    /* 0x0CC */ ? spCC;                             /* inferred */
    /* 0x0CC */ char padCC[0x18];
    /* 0x0E4 */ ? spE4;                             /* inferred */
    /* 0x0E4 */ char padE4[0x18];
    /* 0x0FC */ ? spFC;                             /* inferred */
    /* 0x0FC */ char padFC[0x24];
};                                                  /* size = 0x120 */

struct _mips2c_stack_func_80B7BEA4 {
    /* 0x000 */ char pad0[0x40];
    /* 0x040 */ ? sp40;                             /* inferred */
    /* 0x040 */ char pad40[0x40];
    /* 0x080 */ ? sp80;                             /* inferred */
    /* 0x080 */ char pad80[0x40];
    /* 0x0C0 */ ? spC0;                             /* inferred */
    /* 0x0C0 */ char padC0[0x40];
    /* 0x100 */ Mtx *sp100;                         /* inferred */
    /* 0x104 */ s32 sp104;                          /* inferred */
    /* 0x108 */ f32 sp108;                          /* inferred */
    /* 0x10C */ f32 sp10C;                          /* inferred */
    /* 0x110 */ f32 sp110;                          /* inferred */
    /* 0x114 */ char pad114[0x4];
};                                                  /* size = 0x118 */

f32 func_800C3FA0(s32, ? *, void *, void *);        /* extern */
? func_800F415C(void *, ? *, ?);                    /* extern */
? func_801A3F54(?);                                 /* extern */
void func_80B77770(ObjUm *arg0, GlobalContext *arg1); /* static */
? func_80B77FA4(ObjUm *arg0, GlobalContext *arg1);  /* static */
? func_80B781DC(ObjUm *arg0, void *arg1, void *arg2, GlobalContext *arg3); /* static */
? func_80B783E0(ObjUm *arg0, GlobalContext *arg1, s32 arg2, void *arg3); /* static */
? func_80B78764(ObjUm *arg0, GlobalContext *arg1, void *arg2, void *arg3); /* static */
? func_80B78A54(ObjUm *arg0, GlobalContext *arg1, s32 arg2, void *arg3, void *arg4); /* static */
? func_80B78C18(ObjUm *arg0, GlobalContext *arg1);  /* static */
? func_80B78D08(ObjUm *arg0, GlobalContext *arg1);  /* static */
? func_80B78DF0(ObjUm *arg0, GlobalContext *arg1);  /* static */
void func_80B78E38(ObjUm *arg0, GlobalContext *arg1); /* static */
void func_80B78E88(ObjUm *arg0, GlobalContext *arg1, s16 arg2); /* static */
void func_80B78EBC(ObjUm *arg0, GlobalContext *arg1); /* static */
void func_80B78EFC(ObjUm *arg0, GlobalContext *arg1, s16 arg2); /* static */
void func_80B79524(Actor *arg0);                    /* static */
void func_80B79560(GlobalContext *arg0, ObjUm *arg1, s32 arg2, u16 arg3); /* static */
s32 func_80B795A0(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
s32 func_80B79734(GlobalContext *arg0, Actor *arg1, s32 arg2, s32 *); /* static */
u16 func_80B797EC(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
? func_80B7984C(GlobalContext *arg0, Actor *arg1, s32 arg2, s32 *arg3); /* static */
s32 func_80B79A24(s32 arg0);                        /* static */
s32 func_80B79BA0(ObjUm *arg0, GlobalContext *arg1); /* static */
void func_80B79FFC(ObjUm *this, GlobalContext *globalCtx); /* static */
void func_80B7A1B4(ObjUm *arg0, ObjUm *arg1);       /* static */
void func_80B7A240(ObjUm *arg0, ObjUm *arg1);       /* static */
void func_80B7A860(ObjUm *arg0, GlobalContext *arg1); /* static */
void func_80B7AB78(ObjUm *arg0, ObjUm *arg1);       /* static */
void func_80B7AEFC(ObjUm *this, GlobalContext *globalCtx); /* static */
void func_80B7AF30(ObjUm *arg0, GlobalContext *arg1); /* static */
void func_80B7B154(ObjUm *arg0, GlobalContext *arg1); /* static */
void func_80B7B18C(ObjUm *arg0, GlobalContext *arg1, s32 arg2, ObjUm *); /* static */
s32 func_80B7B598(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B7B93C(GlobalContext *arg0, Vec3f *arg1); /* static */
void func_80B7BABC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B7BEA4(f32 *arg0, s16 arg1, f32 *arg2, u8 arg3, GlobalContext *arg4); /* static */
extern CollisionHeader D_06007E20;
extern CollisionHeader D_06007F50;
extern FlexSkeletonHeader D_06011DF8;
extern AnimationHeader D_06012CC0;
static ? D_80B7C110;                                /* unable to generate initializer */
static ? D_80B7C128;                                /* unable to generate initializer */
static ColliderCylinderInit D_80B7C138 = {
    {3, 0, 9, 0, 0x10, 1},
    {1, {0, 0, 0}, {0x20, 0, 0}, 0, 1, 0},
    {0x28, 0x40, 0, {0, 0, 0}},
};
static ? D_80B7C164;                                /* unable to generate initializer */
static InitChainEntry D_80B7C254[2];                /* unable to generate initializer */
static ? D_80B7C25C;                                /* unable to generate initializer */
static ? D_80B7C260;                                /* unable to generate initializer */
static ? D_80B7C274;                                /* unable to generate initializer */
static ? D_80B7C284;                                /* unable to generate initializer */
static ? D_80B7C290;                                /* unable to generate initializer */
static ? D_80B7C29C;                                /* unable to generate initializer */
static ? D_80B7C2A8;                                /* unable to generate initializer */
static ? D_80B7C2B4;                                /* unable to generate initializer */
static ? D_80B7C2CC;                                /* unable to generate initializer */
static ? D_80B7C2E4;                                /* unable to generate initializer */
static ? D_80B7C2FC;                                /* unable to generate initializer */
static ? D_80B7C308;                                /* unable to generate initializer */
static ? D_80B7C314;                                /* unable to generate initializer */

void func_80B77770(ObjUm *arg0, GlobalContext *arg1) {
    ? sp108;
    ? spFC;
    ? spF0;
    ? spE4;
    ? spD8;
    ? spCC;
    ? spC0;
    ? spB4;
    ? spA8;
    ? sp9C;
    ? sp90;
    ? sp84;
    ? sp78;
    ? sp6C;
    ? sp60;
    void *sp58;
    void *sp54;
    void *sp50;
    void *sp4C;
    Vec3f *sp48;
    Vec3f *sp44;
    Vec3f *sp40;
    Vec3f *sp3C;
    Vec3f *sp38;
    void *sp34;
    Vec3f *sp30;
    Vec3f *sp2C;
    Vec3f *sp28;
    s32 sp24;
    s32 sp20;
    Vec3f *temp_t6_3;
    Vec3f *temp_t6_4;
    Vec3f *temp_t6_5;
    Vec3f *temp_t7;
    Vec3f *temp_t8_3;
    Vec3f *temp_t8_4;
    Vec3f *temp_t8_5;
    Vec3f *temp_t9;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_s1;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_t8;
    void *temp_t8_2;
    void *temp_t8_6;

    temp_s1 = arg0->actor.shape.rot.y;
    sp60.unk0 = (f32) arg0->actor.world.pos.x;
    temp_a0 = temp_s1 + 0x4000;
    sp60.unk4 = (f32) arg0->actor.world.pos.y;
    sp60.unk8 = (f32) arg0->actor.world.pos.z;
    arg0->unk414 = sp60.unk0;
    arg0->unk418 = sp60.unk4;
    temp_t8 = arg0 + 0x408;
    arg0->unk41C = sp60.unk8;
    sp6C.unk0 = (f32) sp60.unk0;
    sp6C.unk4 = (f32) sp60.unk4;
    sp6C.unk8 = (f32) sp60.unk8;
    sp58 = temp_t8;
    temp_t8->unk0 = (f32) sp6C.unk0;
    temp_t8->unk4 = (f32) sp6C.unk4;
    temp_t6 = arg0 + 0x3FC;
    temp_t8->unk8 = (f32) sp6C.unk8;
    sp78.unk0 = (f32) sp6C.unk0;
    sp78.unk4 = (f32) sp6C.unk4;
    sp78.unk8 = (f32) sp6C.unk8;
    sp54 = temp_t6;
    temp_t6->unk0 = (f32) sp78.unk0;
    temp_t6->unk4 = (f32) sp78.unk4;
    temp_t8_2 = arg0 + 0x3F0;
    temp_t6->unk8 = (f32) sp78.unk8;
    sp84.unk0 = (f32) sp78.unk0;
    sp84.unk4 = (f32) sp78.unk4;
    sp84.unk8 = (f32) sp78.unk8;
    sp50 = temp_t8_2;
    temp_t8_2->unk0 = (f32) sp84.unk0;
    temp_t8_2->unk4 = (f32) sp84.unk4;
    temp_t6_2 = arg0 + 0x3E4;
    temp_t8_2->unk8 = (f32) sp84.unk8;
    sp90.unk0 = (f32) sp84.unk0;
    sp90.unk4 = (f32) sp84.unk4;
    sp90.unk8 = (f32) sp84.unk8;
    sp4C = temp_t6_2;
    temp_t6_2->unk0 = (f32) sp90.unk0;
    temp_t6_2->unk4 = (f32) sp90.unk4;
    temp_t8_3 = arg0 + 0x3D8;
    temp_t6_2->unk8 = (f32) sp90.unk8;
    sp9C.unk0 = (f32) sp90.unk0;
    sp9C.unk4 = (f32) sp90.unk4;
    sp9C.unk8 = (f32) sp90.unk8;
    sp48 = temp_t8_3;
    temp_t8_3->x = sp9C.unk0;
    temp_t8_3->y = sp9C.unk4;
    temp_t8_3->z = sp9C.unk8;
    spA8.unk0 = (f32) sp9C.unk0;
    spA8.unk4 = (f32) sp9C.unk4;
    spA8.unk8 = (f32) sp9C.unk8;
    arg0->unk3CC = spA8.unk0;
    arg0->unk3D0 = spA8.unk4;
    temp_t6_3 = arg0 + 0x3C0;
    arg0->unk3D4 = spA8.unk8;
    spB4.unk0 = (f32) spA8.unk0;
    spB4.unk4 = (f32) spA8.unk4;
    spB4.unk8 = (f32) spA8.unk8;
    sp44 = temp_t6_3;
    temp_t6_3->x = spB4.unk0;
    temp_t6_3->y = spB4.unk4;
    temp_t8_4 = arg0 + 0x3B4;
    temp_t6_3->z = spB4.unk8;
    spC0.unk0 = (f32) spB4.unk0;
    spC0.unk4 = (f32) spB4.unk4;
    spC0.unk8 = (f32) spB4.unk8;
    sp40 = temp_t8_4;
    temp_t8_4->x = spC0.unk0;
    temp_t8_4->y = spC0.unk4;
    temp_t8_4->z = spC0.unk8;
    spCC.unk0 = (f32) spC0.unk0;
    spCC.unk4 = (f32) spC0.unk4;
    spCC.unk8 = (f32) spC0.unk8;
    arg0->unk3A8 = spCC.unk0;
    arg0->unk3AC = spCC.unk4;
    temp_t6_4 = arg0 + 0x39C;
    arg0->unk3B0 = spCC.unk8;
    spD8.unk0 = (f32) spCC.unk0;
    spD8.unk4 = (f32) spCC.unk4;
    spD8.unk8 = (f32) spCC.unk8;
    sp3C = temp_t6_4;
    temp_t6_4->x = spD8.unk0;
    temp_t6_4->y = spD8.unk4;
    temp_t8_5 = arg0 + 0x390;
    temp_t6_4->z = spD8.unk8;
    spE4.unk0 = (f32) spD8.unk0;
    spE4.unk4 = (f32) spD8.unk4;
    spE4.unk8 = (f32) spD8.unk8;
    sp38 = temp_t8_5;
    temp_t8_5->x = spE4.unk0;
    temp_t8_5->y = spE4.unk4;
    temp_t8_5->z = spE4.unk8;
    spF0.unk0 = (f32) spE4.unk0;
    spF0.unk4 = (f32) spE4.unk4;
    spF0.unk8 = (f32) spE4.unk8;
    temp_t8_6 = arg0 + 0x384;
    sp34 = temp_t8_6;
    temp_t8_6->unk0 = (f32) spF0.unk0;
    temp_t8_6->unk4 = (f32) spF0.unk4;
    temp_t8_6->unk8 = (f32) spF0.unk8;
    spFC.unk0 = (f32) spF0.unk0;
    spFC.unk4 = (f32) spF0.unk4;
    temp_t9 = arg0 + 0x378;
    spFC.unk8 = (f32) spF0.unk8;
    sp30 = temp_t9;
    temp_t9->x = spFC.unk0;
    temp_t9->y = spFC.unk4;
    temp_t9->z = spFC.unk8;
    sp108.unk0 = (f32) spFC.unk0;
    sp108.unk4 = (f32) spFC.unk4;
    temp_t6_5 = arg0 + 0x36C;
    sp108.unk8 = (f32) spFC.unk8;
    sp2C = temp_t6_5;
    temp_t6_5->x = sp108.unk0;
    temp_t6_5->y = sp108.unk4;
    temp_t7 = arg0 + 0x360;
    temp_t6_5->z = sp108.unk8;
    sp28 = temp_t7;
    temp_t7->x = sp108.unk0;
    temp_t7->y = sp108.unk4;
    temp_t7->z = sp108.unk8;
    sp24 = (s32) temp_a0;
    arg0->unk360 += 110.0f * Math_SinS(temp_a0);
    temp_a0_2 = temp_s1 - 0x4000;
    arg0->unk368 += 110.0f * Math_CosS(unksp26);
    sp20 = (s32) temp_a0_2;
    arg0->unk36C += 110.0f * Math_SinS(temp_a0_2);
    arg0->unk374 += 110.0f * Math_CosS(unksp22);
    Math_Vec3f_Copy(sp30, sp28);
    arg0->unk378 -= 200.0f * Math_SinS(temp_s1);
    arg0->unk380 -= 200.0f * Math_CosS(temp_s1);
    Math_Vec3f_Copy(sp38, sp2C);
    arg0->unk390 -= 200.0f * Math_SinS(temp_s1);
    arg0->unk398 -= 200.0f * Math_CosS(temp_s1);
    arg0->unk384 -= 220.0f * Math_SinS(temp_s1);
    arg0->unk38C -= 220.0f * Math_CosS(temp_s1);
    Math_Vec3f_Copy(sp3C, sp28);
    arg0->unk39C -= 500.0f * Math_SinS(temp_s1);
    arg0->unk3A4 -= 500.0f * Math_CosS(temp_s1);
    Math_Vec3f_Copy(sp40, sp2C);
    arg0->unk3B4 -= 500.0f * Math_SinS(temp_s1);
    arg0->unk3BC -= 500.0f * Math_CosS(temp_s1);
    arg0->unk3A8 -= 500.0f * Math_SinS(temp_s1);
    arg0->unk3B0 -= 500.0f * Math_CosS(temp_s1);
    Math_Vec3f_Copy(sp44, sp28);
    arg0->unk3C0 -= 700.0f * Math_SinS(temp_s1);
    arg0->unk3C8 -= 700.0f * Math_CosS(temp_s1);
    Math_Vec3f_Copy(sp48, sp2C);
    arg0->unk3D8 -= 700.0f * Math_SinS(temp_s1);
    arg0->unk3E0 -= 700.0f * Math_CosS(temp_s1);
    arg0->unk3CC -= 700.0f * Math_SinS(temp_s1);
    arg0->unk3D4 -= 700.0f * Math_CosS(temp_s1);
    sp4C->unk0 = (f32) temp_t8_6->unk0;
    sp4C->unk4 = (f32) temp_t8_6->unk4;
    sp4C->unk8 = (f32) temp_t8_6->unk8;
    arg0->unk3E4 += 40.0f * Math_SinS(unksp26);
    arg0->unk3EC += 40.0f * Math_CosS(unksp26);
    sp50->unk0 = (f32) temp_t8_6->unk0;
    sp50->unk4 = (f32) temp_t8_6->unk4;
    sp50->unk8 = (f32) temp_t8_6->unk8;
    arg0->unk3F0 += 40.0f * Math_SinS(unksp22);
    arg0->unk3F8 += 40.0f * Math_CosS(unksp22);
    sp54->unk0 = (f32) sp30->x;
    sp54->unk4 = (f32) sp30->y;
    sp54->unk8 = (f32) sp30->z;
    sp58->unk0 = (f32) temp_t8_5->x;
    sp58->unk4 = (f32) temp_t8_5->y;
    sp58->unk8 = (f32) temp_t8_5->z;
}

? func_80B77FA4(ObjUm *arg0, GlobalContext *arg1) {
    void *sp44;
    ActorContext *sp38;
    Actor *temp_v0;
    Actor *temp_v0_2;
    ActorContext *temp_a0;

    sp44 = Lib_SegmentedToVirtual((arg1->setupPathList + (arg0->unk2BC * 8))->unk4);
    func_801A89A8(0x8003);
    temp_a0 = arg1 + 0x1CA0;
    sp38 = temp_a0;
    temp_v0 = Actor_Spawn(temp_a0, arg1, 0xD, (f32) sp44->unk0, (f32) sp44->unk2, (f32) sp44->unk4, (s16) 0, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, (s16) 0x2013);
    arg0->unk358 = temp_v0;
    temp_v0->unk540 = (f32) temp_v0->world.pos.x;
    temp_v0->unk54C = 0xF;
    temp_v0->unk550 = 0xA;
    temp_v0->unk544 = (f32) temp_v0->world.pos.y;
    temp_v0->unk548 = (f32) temp_v0->world.pos.z;
    temp_v0->unk558 = 0;
    temp_v0->unk55C = 0x28;
    temp_v0->unk560 = 0x28;
    temp_v0->unk554 = (s32) arg0->unk2BC;
    temp_v0->unk568 = 0.0f;
    temp_v0->unk56C = 0.0f;
    temp_v0->unk570 = (f32) D_801D15B0.x;
    temp_v0->unk574 = (f32) D_801D15B0.y;
    temp_v0->unk578 = (f32) D_801D15B0.z;
    temp_v0->unk57C = (f32) D_801D15B0.x;
    temp_v0->unk580 = (f32) D_801D15B0.y;
    temp_v0->unk584 = (f32) D_801D15B0.z;
    temp_v0->unk200 = 1;
    temp_v0->unk588 = (s16) arg0->actor.shape.rot.y;
    temp_v0_2 = Actor_Spawn(temp_a0, arg1, 0xD, (f32) sp44->unk6, (f32) sp44->unk8, (f32) sp44->unkA, (s16) 0, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, (s16) 0x2014);
    arg0->unk35C = temp_v0_2;
    temp_v0_2->unk540 = (f32) temp_v0_2->world.pos.x;
    temp_v0_2->unk54C = 0xF;
    temp_v0_2->unk550 = 8;
    temp_v0_2->unk544 = (f32) temp_v0_2->world.pos.y;
    temp_v0_2->unk548 = (f32) temp_v0_2->world.pos.z;
    temp_v0_2->unk55C = 0x28;
    temp_v0_2->unk560 = 0x28;
    temp_v0_2->unk554 = (s32) arg0->unk2BC;
    temp_v0_2->unk568 = 0.0f;
    temp_v0_2->unk56C = 0.0f;
    temp_v0_2->unk57C = (f32) D_801D15B0.x;
    temp_v0_2->unk580 = (f32) D_801D15B0.y;
    temp_v0_2->unk584 = (f32) D_801D15B0.z;
    temp_v0_2->unk200 = 2;
    temp_v0_2->unk588 = (s16) arg0->actor.shape.rot.y;
    arg0->unk314 = 4;
    arg0->unk318 = 4;
    arg0->unk31C = 4;
    return 0;
}

? func_80B781DC(ObjUm *arg0, void *arg1, void *arg2, GlobalContext *arg3) {
    ? *temp_s0;
    f32 temp_f20;
    s32 temp_s4;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    ? *phi_s0;
    s32 phi_s3;
    s32 phi_s2;
    s32 phi_s4;
    f32 phi_f20;

    phi_s0 = &D_80B7C164;
    phi_s3 = -1;
    phi_s2 = 0;
    phi_s4 = 0;
    phi_f20 = 0.0f;
    do {
        temp_v1 = phi_s0->unk0;
        if (arg1->unk550 == temp_v1) {
            temp_v0 = phi_s0->unk4;
            if (arg2->unk550 != temp_v0) {
                if (temp_v1 != 3) {
                    if (temp_v0 == 3) {
                        if (Player_GetMask(arg3) != 8) {
                            goto block_7;
                        }
                    } else {
block_7:
                        phi_s3 = phi_s0->unk4;
                        phi_s4 = phi_s0->unk8;
                        phi_f20 = phi_s0->unkC;
                        goto block_14;
                    }
                } else {
                    temp_v1_2 = arg1->unk54C;
                    if (((temp_v1_2 != 5) || (temp_v0 != 2)) && ((temp_v1_2 != 7) || (temp_v0 != 4))) {
                        temp_s4 = phi_s0->unk8;
                        temp_f20 = phi_s0->unkC;
                        phi_s3 = temp_v0;
                        phi_s4 = temp_s4;
                        phi_f20 = temp_f20;
                        if ((2.0f * Rand_ZeroOne()) < 1.0f) {
                            phi_s4 = temp_s4;
                            phi_f20 = temp_f20 * -1.0f;
                        }
block_14:
                        phi_s2 = phi_s0->unk10;
                    }
                }
            }
        }
        temp_s0 = phi_s0 + 0x14;
        phi_s0 = temp_s0;
    } while (temp_s0 != D_80B7C254);
    if (phi_s3 == -1) {

    } else {
        temp_t1 = arg1->unk550;
        arg1->unk540 = (s32) arg1->unk24;
        arg1->unk550 = phi_s3;
        arg1->unk55C = phi_s2;
        arg1->unk560 = phi_s2;
        arg1->unk564 = phi_s4;
        arg1->unk568 = phi_f20;
        arg1->unk544 = (s32) arg1->unk28;
        arg1->unk54C = temp_t1;
        arg1->unk548 = (s32) arg1->unk2C;
        if (phi_s3 == 3) {
            arg1->unk558 = (s32) (Rand_ZeroOne() * 3.0f);
        } else {
            arg1->unk558 = 0;
        }
    }
    return 0;
}

? func_80B783E0(ObjUm *arg0, GlobalContext *arg1, s32 arg2, void *arg3) {
    u8 *sp6C;
    s32 sp68;
    void *sp64;
    ? sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp3C;
    Vec3f *sp30;
    Vec3f *temp_a0;
    f32 temp_f2;
    s16 temp_a0_3;
    s16 temp_v1_3;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 *temp_v0;
    u8 temp_a0_2;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;
    s32 phi_v1;
    s16 phi_v1_2;

    temp_v0 = arg1->setupPathList + (arg0->unk2BC * 8);
    sp68 = (s32) temp_v0->unk0;
    sp6C = temp_v0;
    temp_t0 = Lib_SegmentedToVirtual(temp_v0->unk4);
    temp_a0 = arg3 + 0x24;
    if (sp68 == 0) {
        return 0;
    }
    sp30 = temp_a0;
    sp64 = temp_t0;
    if (Math3D_Distance(temp_a0, arg0 + 0x24) < 800.0f) {
        if (arg2 == 0) {
            arg0->unk2F4 |= 0x200;
        } else {
            arg0->unk2F4 |= 0x400;
        }
        arg3->unk540 = (f32) sp30->x;
        arg3->unk544 = (f32) sp30->y;
        arg3->unk55C = 0x32;
        arg3->unk560 = 0x32;
        arg3->unk564 = 1;
        arg3->unk548 = (f32) sp30->z;
    }
    sp64 = temp_t0;
    Math_Vec3s_ToVec3f((Vec3f *) &sp50, (arg3->unk200 * 6) + temp_t0);
    temp_v1 = arg3->unk200;
    if (temp_v1 == 0) {
        phi_f12 = (f32) (temp_t0->unk6 - temp_t0->unk0);
        phi_f14 = (f32) (temp_t0->unkA - temp_t0->unk4);
    } else {
        temp_a0_2 = *sp6C;
        if (temp_a0_2 == (temp_v1 + 1)) {
            temp_v0_2 = temp_t0 + (temp_a0_2 * 6);
            phi_f12 = (f32) (temp_v0_2->unk-6 - temp_v0_2->unk-C);
            phi_f14 = (f32) (temp_v0_2->unk-2 - temp_v0_2->unk-8);
        } else {
            temp_v0_3 = temp_t0 + (temp_v1 * 6);
            phi_f12 = (f32) (temp_v0_3->unk6 - temp_v0_3->unk-6);
            phi_f14 = (f32) (temp_v0_3->unkA - temp_v0_3->unk-2);
        }
    }
    sp64 = temp_t0;
    func_8017B7F8((Vec3f *) &sp50, Math_Atan2S(phi_f12, phi_f14), &sp4C, &sp48, &sp44);
    if (((arg3->unk24 * sp4C) + (sp48 * arg3->unk2C) + sp44) > 0.0f) {
        temp_v1_2 = arg3->unk200 + 1;
        arg3->unk200 = temp_v1_2;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 >= sp68) {
            arg3->unk200 = 0;
            phi_v1 = 0;
        }
        Math_Vec3s_ToVec3f((Vec3f *) &sp50, (phi_v1 * 6) + temp_t0);
    }
    arg3->unk32 = Math_Vec3f_Yaw(sp30, (Vec3f *) &sp50);
    arg3->unk70 = 45.0f;
    sp3C = Math_CosS(arg3->unk30) * arg3->unk70;
    arg3->unk64 = (f32) (Math_SinS(arg3->unk32) * sp3C);
    arg3->unk68 = (f32) (Math_SinS(arg3->unk30) * arg3->unk70);
    temp_f2 = Math_CosS(arg3->unk32) * sp3C;
    temp_a0_3 = arg3->unkBE;
    arg3->unk6C = temp_f2;
    temp_v1_3 = arg3->unk32 - temp_a0_3;
    arg3->unk570 = (f32) (arg3->unk24 + (arg3->unk64 * 0.5f) + arg3->unkA4);
    arg3->unk574 = (f32) (arg3->unk28 + (arg3->unk68 * 0.5f) + arg3->unkA8);
    arg3->unk578 = (f32) (arg3->unk2C + (temp_f2 * 0.5f) + arg3->unkAC);
    phi_v1_2 = temp_v1_3;
    if ((s32) temp_v1_3 >= 0x191) {
        phi_v1_2 = 0x190;
    } else if ((s32) temp_v1_3 < -0x190) {
        phi_v1_2 = -0x190;
    }
    arg3->unkBE = (s16) (temp_a0_3 + phi_v1_2);
    return 0;
}

? func_80B78764(ObjUm *arg0, GlobalContext *arg1, void *arg2, void *arg3) {
    ? sp30;
    s32 sp28;
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0_2;
    Vec3f *temp_a1;
    Vec3f *temp_v0;
    s16 temp_v0_3;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_t4;
    s32 temp_t8;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 phi_v1;
    s32 phi_a2;
    s32 phi_v1_2;
    s32 phi_a2_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s16 phi_v1_5;

    temp_v1 = arg2->unk55C - 1;
    arg2->unk55C = temp_v1;
    phi_v1_4 = temp_v1;
    if (temp_v1 <= 0) {
        arg2->unk55C = 0;
        if (arg2->unk550 == 3) {
            phi_a2 = 1;
            phi_a2_2 = 1;
            phi_a2_2 = 1;
            if ((arg0->unk2F4 & 0x2000) == 0) {
                phi_v1 = -1;
                if (arg0->unk314 != 1) {
                    phi_v1 = 0;
                }
                phi_v1_2 = phi_v1;
                if ((arg0->unk318 != 1) && ((phi_v1 == -1) || ((phi_v1 == 0) && (sp28 = phi_v1, phi_v1_2 = phi_v1, (Rand_ZeroOne() < 0.3f))))) {
                    phi_a2 = 1;
                    phi_v1_2 = 1;
                }
                phi_a2_2 = phi_a2;
                phi_v1_3 = phi_v1_2;
                phi_a2_2 = phi_a2;
                if ((phi_a2 != arg0->unk31C) && ((phi_v1_2 == -1) || ((phi_v1_2 != -1) && (sp28 = phi_v1_2, phi_v1_3 = phi_v1_2, (Rand_ZeroOne() < 0.3f))))) {
                    phi_v1_3 = 2;
                }
                temp_t8 = phi_v1_3 * 4;
                temp_v0 = arg0 + temp_t8;
                temp_a0 = temp_v0->unk314;
                if (phi_a2_2 != temp_a0) {
                    temp_v0->unk320 = phi_a2_2;
                    if (temp_a0 == 2) {
                        sp24 = temp_v0;
                        func_8019F1C0(arg0 + (phi_v1_3 * 0xC) + 0x32C, 0x2891U);
                    } else {
                        sp24 = temp_v0;
                        func_8019F1C0(arg0 + (phi_v1_3 * 0xC) + 0x32C, 0x297EU);
                    }
                    temp_t4 = (arg0 + temp_t8)->unk314 - 1;
                    (arg0 + temp_t8)->unk314 = temp_t4;
                    if (temp_t4 <= 0) {
                        (arg0 + temp_t8)->unk314 = 1;
                    }
                }
            }
        }
        func_80B781DC(arg0, arg2, arg3, arg1);
        phi_v1_4 = arg2->unk55C;
    }
    Math3D_Lerp(arg2 + 0x540, arg0 + (arg2->unk550 * 0xC) + 0x360, 1.0f - ((f32) phi_v1_4 / (f32) arg2->unk560), (Vec3f *) &sp30);
    temp_v0_2 = arg2->unk550;
    arg2->unk570 = (s32) sp30.unk0;
    arg2->unk574 = (s32) sp30.unk4;
    arg2->unk578 = (s32) sp30.unk8;
    arg2->unk588 = (s16) arg0->actor.shape.rot.y;
    if ((temp_v0_2 == 0xA) || (temp_a0_2 = arg2 + 0x108, (temp_v0_2 == 8))) {
        phi_v1_5 = arg2->unk588;
    } else {
        temp_a1 = arg2 + 0x24;
        sp20 = temp_a1;
        sp24 = temp_a0_2;
        if (Math3D_Distance(temp_a0_2, temp_a1) < 10.0f) {
            phi_v1_5 = arg2->unk588;
        } else {
            phi_v1_5 = Math_Vec3f_Yaw(temp_a0_2, temp_a1);
        }
    }
    temp_v0_3 = arg2->unkBE;
    temp_v1_2 = phi_v1_5 - temp_v0_3;
    if ((s32) temp_v1_2 >= 0x191) {
        arg2->unkBE = (s16) (temp_v0_3 + 0x190);
    } else if ((s32) temp_v1_2 < -0x190) {
        arg2->unkBE = (s16) (temp_v0_3 - 0x190);
    } else {
        arg2->unkBE = (s16) (temp_v0_3 + temp_v1_2);
    }
    return 0;
}

? func_80B78A54(ObjUm *arg0, GlobalContext *arg1, s32 arg2, void *arg3, void *arg4) {
    s16 sp36;
    void *sp30;
    Vec3f *sp2C;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Vec3f *temp_a1;
    void *temp_v1;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v1 = arg0 + (arg2 * 0x4C);
    if ((temp_v1->unk435 & 2) != 0) {
        temp_a1 = arg3 + 0x24;
        if (arg3->unk550 == 3) {
            sp30 = temp_v1;
            sp2C = temp_a1;
            sp36 = Math_Vec3f_Yaw(arg0 + 0x24, temp_a1) - arg0->actor.shape.rot.y;
            temp_v1->unk435 = (u8) (temp_v1->unk435 & 0xFFFD);
            func_8019F1C0(arg3 + 0xEC, 0x393BU);
            arg3->unk54C = 0xF;
            if (Math_SinS(sp36) > 0.0f) {
                phi_v0 = 0xA;
                if (arg4->unk550 != 0xA) {

                } else {
                    phi_v0 = 8;
                }
                arg3->unk550 = phi_v0;
                arg3->unk568 = -1.0f;
            } else {
                phi_v0_2 = 8;
                if (arg4->unk550 != 8) {

                } else {
                    phi_v0_2 = 0xA;
                }
                arg3->unk550 = phi_v0_2;
                arg3->unk568 = 1.0f;
            }
            temp_v0 = arg3->unk38C;
            arg3->unk540 = (f32) sp2C->x;
            arg3->unk544 = (f32) sp2C->y;
            arg3->unk55C = 0x28;
            arg3->unk560 = 0x28;
            arg3->unk564 = 1;
            arg3->unk548 = (f32) sp2C->z;
            if (temp_v0 != 0) {
                temp_v0->colorFilterTimer = 0x14;
                func_800BCB70(arg3->unk38C, 0x4000, 0xFF, 0, (s16) 0x28);
            }
        } else {
            temp_v0_2 = arg3->unk38C;
            if (temp_v0_2 != 0) {
                temp_v0_2->colorFilterTimer = 0x14;
                func_800BCB70(arg3->unk38C, 0x4000, 0xFF, 0, (s16) 0x28);
            }
            func_8019F1C0(arg3 + 0xEC, 0x393BU);
        }
    }
    return 0;
}

? func_80B78C18(ObjUm *arg0, GlobalContext *arg1) {
    void *temp_s1;
    void *temp_s2;

    temp_s1 = arg0->unk358;
    temp_s2 = arg0->unk35C;
    if ((arg0->unk2F4 & 0x200) == 0) {
        func_80B783E0(arg0, arg1, 0, temp_s1);
    } else {
        func_80B78764(arg0, arg1, temp_s1, temp_s2);
    }
    if ((arg0->unk2F4 & 0x400) == 0) {
        func_80B783E0(arg0, arg1, 1, temp_s2);
    } else {
        func_80B78764(arg0, arg1, temp_s2, temp_s1);
    }
    func_80B78A54(arg0, arg1, 0, temp_s1, temp_s2);
    func_80B78A54(arg0, arg1, 1, temp_s2, temp_s1);
    return 0;
}

? func_80B78D08(ObjUm *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = arg0->unk358;
    temp_v1 = arg0->unk35C;
    temp_a2 = arg0 + 0x424;
    arg0->unk424.dim.pos.x = (s16) (s32) temp_v0->world.pos.x;
    arg0->unk424.dim.pos.y = (s16) (s32) (temp_v0->world.pos.y + 70.0f);
    arg0->unk424.dim.pos.z = (s16) (s32) temp_v0->world.pos.z;
    arg0->unk470.dim.pos.x = (s16) (s32) temp_v1->world.pos.x;
    arg0->unk470.dim.pos.y = (s16) (s32) (temp_v1->world.pos.y + 70.0f);
    arg0->unk470.dim.pos.z = (s16) (s32) temp_v1->world.pos.z;
    arg0 = arg0;
    temp_a1 = arg1 + 0x18884;
    sp18 = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetAC(arg1, temp_a1, arg0 + 0x470);
    return 0;
}

? func_80B78DF0(ObjUm *arg0, GlobalContext *arg1) {
    func_80B78C18(arg0, arg1);
    func_80B78D08(arg0, arg1);
    return 0;
}

void ObjUm_SetupAction(ObjUm *this, void (*actionFunc)(ObjUm *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void func_80B78E38(ObjUm *arg0, GlobalContext *arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v1 = arg0 + 0x308;
    if ((arg0->unk2F4 & 0x20) != 0) {
        temp_v0->world.pos.x = temp_v1->unk0;
        temp_v0->world.pos.y = temp_v1->unk4;
        temp_v0->world.pos.z = temp_v1->unk8;
        temp_v0->prevPos.x = temp_v1->unk0;
        temp_v0->prevPos.y = temp_v1->unk4;
        temp_v0->prevPos.z = temp_v1->unk8;
    }
}

void func_80B78E88(ObjUm *arg0, GlobalContext *arg1, s16 arg2) {
    s16 temp_v1;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v1 = arg0->actor.shape.rot.y + arg2;
    temp_v0->unkAD4 = temp_v1;
    temp_v0->world.rot.y = temp_v1;
    temp_v0->shape.rot.y = temp_v1;
}

void func_80B78EBC(ObjUm *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0->focus.rot.x = 0;
    temp_v0->focus.rot.z = 0;
    temp_v0->focus.rot.y = temp_v0->shape.rot.y;
    temp_v0->unkAAC = 0;
    temp_v0->unkAAE = 0;
    temp_v0->unkAB0 = 0;
    temp_v0->unkAB2 = 0;
    temp_v0->unkAB4 = 0;
    temp_v0->unkAB6 = 0;
    temp_v0->unkAD4 = (s16) temp_v0->focus.rot.y;
}

void func_80B78EFC(ObjUm *arg0, GlobalContext *arg1, s16 arg2) {
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0->focus.rot.y += arg2;
}

void ObjUm_Init(ObjUm *this, GlobalContext *globalCtx) {
    s32 sp54;
    ? sp48;
    SkelAnime *sp44;
    Actor *temp_v0_5;
    PosRot *temp_a3;
    SkelAnime *temp_a1;
    f32 *temp_a0;
    s16 temp_v0;
    s32 temp_a2;
    s32 temp_v1;
    u16 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    ObjUm *phi_v0;
    f32 *phi_a0;
    s32 phi_v1;
    ObjUm *this = (ObjUm *) thisx;

    sp54 = 1;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    this->unk350 = 0;
    temp_a3 = &this->actor.world;
    this->unk2C4 = temp_a3->pos.x;
    this->unk2C8 = temp_a3->pos.y;
    this->unk2CC = temp_a3->pos.z;
    this->unk2DC = temp_a3->pos.x;
    this->unk2E0 = temp_a3->pos.y;
    this->unk2E4 = temp_a3->pos.z;
    this->unk308 = temp_a3->pos.x;
    this->unk30C = temp_a3->pos.y;
    this->unk310 = temp_a3->pos.z;
    phi_v0 = this;
    phi_a0 = &this->unk32C;
    phi_v1 = 0;
    do {
        phi_v0->unk314 = 5;
        phi_v0->unk320 = 0;
        temp_v1 = phi_v1 + 1;
        *phi_a0 = D_801D15B0.x;
        temp_a0 = phi_a0 + 0xC;
        temp_a0->unk-8 = (f32) D_801D15B0.y;
        temp_a0->unk-4 = (f32) D_801D15B0.z;
        phi_v0 += 4;
        phi_a0 = temp_a0;
        phi_v1 = temp_v1;
    } while (temp_v1 != 3);
    this->unk2B8 = NULL;
    this->unk354 = 0;
    this->unk420 = 0;
    this->unk4BC = temp_a3->pos.x;
    this->unk4C0 = temp_a3->pos.y;
    this->unk4CC = 0;
    this->unk4D4 = 0;
    this->unk2F4 = 0;
    this->actor.gravity = -3.5f;
    this->unk4C4 = temp_a3->pos.z;
    Actor_ProcessInitChain((Actor *) this, D_80B7C254);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 50.0f);
    temp_a1 = &this->unk160;
    sp44 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06011DF8, NULL, &this->unk1A4, &this->unk228, 0x16);
    SkelAnime_ChangeAnimDefaultRepeat(sp44, &D_06012CC0);
    this->unk2AC = 0;
    func_80B7B154(this, globalCtx);
    this->unk2AE = (s16) ((s32) (this->actor.params & 0xFF00) >> 8);
    this->unk2B0 = this->actor.params & 0xFF;
    if ((gSaveContext.weekEventReg[22] & 1) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0 = this->unk2AE;
    if (temp_v0 == 0) {
        ObjUm_SetupAction(this, func_80B7AEFC);
        goto block_32;
    }
    if (temp_v0 == 1) {
        this->unk2BC = (s32) this->unk2B0;
        if ((gSaveContext.weekEventReg[31] & 0x80) != 0) {
            sp54 = 0;
            this->unk2F4 |= 0x100;
            ObjUm_SetupAction(this, func_80B7A144);
            func_800FE484();
            goto block_32;
        }
        if (((gSaveContext.weekEventReg[34] & 0x80) != 0) || (temp_v0_2 = gSaveContext.time, (((s32) temp_v0_2 < 0xCAAA) == 0)) || ((s32) temp_v0_2 < 0x4001) || (temp_v0_3 = gSaveContext.weekEventReg[52], ((temp_v0_3 & 1) != 0)) || ((temp_v0_3 & 2) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->actor.targetMode = 6;
        this->unk2B4 = 0;
        ObjUm_SetupAction(this, func_80B79A50);
        goto block_32;
    }
    if (temp_v0 == 2) {
        if (((gSaveContext.weekEventReg[31] & 0x80) == 0) || (temp_v0_4 = gSaveContext.weekEventReg[52], ((temp_v0_4 & 1) != 0))) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        if ((temp_v0_4 & 2) == 0) {
            this->unk2BC = (s32) this->unk2B0;
            sp54 = 0;
            func_800FE484();
            ObjUm_SetupAction(this, func_80B7A400);
            this->unk354 = 0;
            func_80B78E88(this, globalCtx, 0);
        }
        goto block_32;
    }
    if (temp_v0 == 3) {
        if ((gSaveContext.weekEventReg[31] & 0x80) == 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk2BC = (s32) this->unk2B0;
        sp54 = 0;
        func_800FE484();
        ObjUm_SetupAction(this, func_80B7AC94);
        this->unk354 = 0;
        func_80B78E88(this, globalCtx, 0);
        goto block_32;
    }
    if (temp_v0 == 4) {
        if (((gSaveContext.weekEventReg[52] & 1) == 0) || ((gSaveContext.weekEventReg[59] & 2) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk2BC = (s32) this->unk2B0;
        sp54 = 0;
        func_800FE484();
        ObjUm_SetupAction(this, func_80B7AE58);
        this->unk354 = 0;
        func_80B78E88(this, globalCtx, 0);
        func_801A3098(0x19U);
        goto block_32;
    }
    this->unk2AE = 0;
    ObjUm_SetupAction(this, func_80B7AEFC);
block_32:
    sp48.unk0 = (s32) D_801D15BC.unk0;
    sp48.unk4 = (u16) D_801D15BC.z;
    this->unk2FE = (unaligned s32) sp48.unk0;
    this->unk302 = sp48.unk4;
    this->unk2F8 = (unaligned s32) sp48.unk0;
    this->unk2FC = sp48.unk4;
    if (sp54 != 0) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06007E20);
    } else {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06007F50);
    }
    temp_a2 = this->unk144;
    if (temp_a2 == 0x32) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_800C636C(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
    temp_v0_5 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xD, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, (s16) 0x8012);
    this->unk2B8 = temp_v0_5;
    if (temp_v0_5 == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Collider_InitAndSetCylinder(globalCtx, &this->unk424, (Actor *) this, &D_80B7C138);
    Collider_InitAndSetCylinder(globalCtx, &this->unk470, (Actor *) this, &D_80B7C138);
}

void ObjUm_Destroy(ObjUm *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a3;
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;
    ObjUm *this = (ObjUm *) thisx;

    temp_a3 = globalCtx;
    globalCtx = temp_a3;
    BgCheck_RemoveActorMesh(temp_a3, &temp_a3->colCtx.dyna, this->unk144);
    phi_s1 = (Vec3f *) &this->unk32C;
    phi_s0 = 0;
    do {
        func_801A72CC(phi_s1);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x24);
    Collider_DestroyCylinder(globalCtx, &this->unk424);
    Collider_DestroyCylinder(globalCtx, &this->unk470);
}

void func_80B79524(Actor *arg0) {
    Actor *temp_a0;

    Actor_MarkForDeath(arg0);
    temp_a0 = arg0->unk2B8;
    if (temp_a0 != 0) {
        Actor_MarkForDeath(temp_a0);
    }
}

void func_80B79560(GlobalContext *arg0, ObjUm *arg1, s32 arg2, u16 arg3) {
    if ((arg3 & 0xFFFF) == 0x33BF) {
        ObjUm_SetupAction(arg1, func_80B7AC94);
    }
}

s32 func_80B795A0(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    s32 sp24;
    void *sp1C;
    u16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg1->textId;
    phi_v1 = 1;
    switch (temp_v0) {
    case 13236:
    case 13263:
        gSaveContext.weekEventReg[31] |= 0x40;
        if (arg0->msgCtx.choiceIndex == 0) {
            sp24 = 1;
            sp1C = arg0->actorCtx.actorList[2].first;
            func_8019F208();
            gSaveContext.weekEventReg[31] |= 0x80;
            arg0->nextEntranceIndex = 0x64B0;
            if (sp1C->unkA6C & 0x800000) {
                D_801BDAA0 = 1;
            }
            arg0->unk_1887F = 0x40;
            gSaveContext.nextTransition = 3;
            arg0->sceneLoadFlag = 0x14;
        } else {
            func_800E8EA0(arg0, arg1, 0x33B5U);
            func_8019F230();
            func_80151BB4(arg0, 6U);
block_13:
            phi_v1 = 0;
        }
        break;
    case 13243:
        func_800E8EA0(arg0, arg1, 0x33BCU);
        goto block_13;
    case 13244:
        func_800E8EA0(arg0, arg1, 0x33BDU);
        goto block_13;
    case 13245:
        if (arg0->msgCtx.choiceIndex == 0) {
            func_800E8EA0(arg0, arg1, 0x33BEU);
            func_8019F230();
        } else {
            func_800E8EA0(arg0, arg1, 0x33BFU);
            func_8019F208();
        }
        goto block_13;
    case 13246:
        func_800E8EA0(arg0, arg1, 0x33BCU);
        goto block_13;
    }
    return phi_v1;
}

s32 func_80B79734(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    s32 sp20;
    MessageContext *sp18;
    MessageContext *temp_a0;
    u8 temp_v0;

    sp20 = 0;
    temp_a0 = arg0 + 0x4908;
    sp18 = temp_a0;
    temp_v0 = func_80152498(temp_a0);
    if (temp_v0 != 2) {
        if ((temp_v0 != 4) && (temp_v0 != 5)) {

        } else if ((func_80147624(arg0) != 0) && (func_80B795A0(arg0, arg1, arg2) != 0)) {
            sp18->unk11F22 = 0x43;
            sp20 = 1;
        }
        return sp20;
    }
    func_80B79560(arg0, (ObjUm *) arg1, arg2, arg1->textId);
    return 1;
}

u16 func_80B797EC(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    u16 phi_v1;
    u16 phi_v1_2;

    phi_v1 = 0x33B7U;
    if (gSaveContext.playerForm == 4) {
        if ((gSaveContext.weekEventReg[31] & 0x40) != 0) {
            phi_v1 = 0x33CFU;
        } else {
            phi_v1 = 0x33B4U;
        }
    }
    phi_v1_2 = phi_v1;
    if (phi_v1 == 0) {
        phi_v1_2 = 1U;
    }
    return phi_v1_2;
}

? func_80B7984C(GlobalContext *arg0, Actor *arg1, s32 arg2, s32 *arg3) {
    f32 temp_f0;
    s16 temp_v0_2;
    s32 *temp_a3;
    s32 temp_v0;
    s32 phi_v1;
    u16 phi_v0;

    temp_v0 = *arg3;
    if (temp_v0 == 4) {
        goto block_25;
    }
    if (temp_v0 == 2) {
        func_801518B0(arg0, arg1->textId, arg1);
        *arg3 = 1;
        return 0;
    }
    if (temp_v0 == 3) {
        func_80151938(arg0, arg1->textId);
        *arg3 = 1;
        return 0;
    }
    temp_a3 = arg3;
    if (func_800B84D0(arg1, arg0) != 0) {
        *temp_a3 = 1;
        return 1;
    }
    if (*temp_a3 == 1) {
        arg3 = temp_a3;
        if (func_80B79734(arg0, arg1, arg2, temp_a3) != 0) {
            *arg3 = 0;
        }
    } else {
        temp_v0_2 = arg1->yawTowardsPlayer - arg1->shape.rot.y;
        phi_v1 = temp_v0_2 << 0x10;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = (s32) temp_v0_2 * -0x10000;
        }
        if ((phi_v1 >> 0x10) >= 0x4E20) {

        } else {
            temp_f0 = arg1->xyzDistToPlayerSq;
            if ((temp_f0 > 10000.0f) && (arg1->isTargeted == 0)) {

            } else if (temp_f0 <= 2500.0f) {
                if (func_800B8614(arg1, arg0, 50.0f) != 0) {
                    phi_v0 = func_80B797EC(arg0, arg1, arg2);
                    goto block_24;
                }
            } else if (func_800B863C(arg1, arg0) != 0) {
                phi_v0 = func_80B797EC(arg0, arg1, arg2);
block_24:
                arg1->textId = phi_v0;
            }
        }
    }
block_25:
    return 0;
}

s32 func_80B79A24(s32 arg0) {
    if ((arg0 == 1) || (arg0 == 2) || (arg0 == 3)) {
        return 1;
    }
    return 0;
}

void func_80B79A50(ObjUm *this, GlobalContext *globalCtx) {
    Actor *sp24;
    u16 temp_v0;
    u16 temp_v0_2;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    this->actor.flags |= 1;
    SkelAnime_FrameUpdateMatrix(&this->unk160);
    func_80B7B18C(this, globalCtx, 2);
    this->unk2F4 |= 8;
    temp_v0 = gSaveContext.time;
    if (((s32) temp_v0 >= 0xC001) && ((s32) temp_v0 < 0xCAAB)) {
        if ((sp24->unkA6C << 8) >= 0) {
            func_80B7984C(globalCtx, (Actor *) this, 0, &this->unk2B4);
        }
    } else if ((func_80B79A24(this->unk2B4) == 0) && ((s32) gSaveContext.time >= 0xCAAB)) {
        gSaveContext.weekEventReg[34] |= 0x80;
        ObjUm_SetupAction(this, func_80B79F10);
    }
    temp_v0_2 = globalCtx->msgCtx.unk11F04;
    if (temp_v0_2 != 0x33B4) {
        if (temp_v0_2 != 0x33B5) {
            if (temp_v0_2 != 0x33B7) {
                this->unk4CC = 0;
                this->unk4D4 = 0;
                return;
            }
            goto block_11;
        }
        this->unk4CC = 3;
        this->unk4D4 = 1;
        return;
    }
block_11:
    this->unk4CC = 0;
    this->unk4D4 = 1;
}

s32 func_80B79BA0(ObjUm *arg0, GlobalContext *arg1) {
    void *sp6C;
    s32 sp68;
    void *sp64;
    ? sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 sp3C;
    f32 temp_f2;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_v0_3;
    s16 temp_v1_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_a0;
    u8 temp_t1;
    void *temp_a2;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_2;
    f32 phi_f12;
    f32 phi_f14;
    s32 phi_v0;
    s32 phi_v1;
    s16 phi_a2;

    temp_a2 = arg1->setupPathList + (arg0->unk2BC * 8);
    temp_t1 = temp_a2->unk0;
    sp6C = temp_a2;
    sp68 = (s32) temp_t1;
    temp_t0 = Lib_SegmentedToVirtual(temp_a2->unk4);
    sp3C = 0;
    if (temp_t1 == 0) {
        return 0;
    }
    sp68 = (s32) temp_t1;
    sp64 = temp_t0;
    sp6C = temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp50, (arg0->unk2C0 * 6) + temp_t0);
    temp_v1 = arg0->unk2C0;
    if (temp_v1 == 0) {
        phi_f12 = (f32) (temp_t0->unk6 - temp_t0->unk0);
        phi_f14 = (f32) (temp_t0->unkA - temp_t0->unk4);
    } else {
        temp_a0 = temp_a2->unk0;
        if (temp_a0 == (temp_v1 + 1)) {
            temp_v0 = temp_t0 + (temp_a0 * 6);
            phi_f12 = (f32) (temp_v0->unk-6 - temp_v0->unk-C);
            phi_f14 = (f32) (temp_v0->unk-2 - temp_v0->unk-8);
        } else {
            temp_v0_2 = temp_t0 + (temp_v1 * 6);
            phi_f12 = (f32) (temp_v0_2->unk6 - temp_v0_2->unk-6);
            phi_f14 = (f32) (temp_v0_2->unkA - temp_v0_2->unk-2);
        }
    }
    sp64 = temp_t0;
    sp68 = (s32) temp_t1;
    func_8017B7F8((Vec3f *) &sp50, Math_Atan2S(phi_f12, phi_f14), &sp4C, &sp48, &sp44);
    if (((arg0->actor.world.pos.x * sp4C) + (sp48 * arg0->actor.world.pos.z) + sp44) > 0.0f) {
        temp_v1_2 = arg0->unk2C0 + 1;
        arg0->unk2C0 = temp_v1_2;
        if (temp_v1_2 >= (temp_t1 - 7)) {
            sp3C = 3;
        }
        phi_v0 = sp3C;
        if (temp_v1_2 >= (temp_t1 - 3)) {
            phi_v0 = 1;
        }
        if (temp_v1_2 >= (temp_t1 - 2)) {
            phi_v0 = 4;
        }
        phi_v1 = temp_v1_2;
        if (temp_v1_2 >= (s32) temp_t1) {
            arg0->unk2C0 = 0;
            phi_v0 = 2;
            phi_v1 = 0;
        }
        sp3C = phi_v0;
        Math_Vec3s_ToVec3f((Vec3f *) &sp50, (phi_v1 * 6) + temp_t0);
    }
    if (arg0->unk2B8 != 0) {
        arg0->actor.world.rot.y = Math_Vec3f_Yaw(arg0 + 0x24, (Vec3f *) &sp50);
        func_800F415C(arg0->unk2B8, &sp50, 0x190);
        temp_v1_3 = arg0->actor.shape.rot.y;
        temp_v0_3 = arg0->unk2B8->shape.rot.y;
        temp_a2_2 = temp_v0_3 - temp_v1_3;
        temp_a2_3 = temp_a2_2;
        temp_f2 = fabsf((f32) temp_a2_3);
        phi_a2 = temp_a2_3;
        if (temp_f2 < 2730.0f) {
            if (temp_f2 < 100.0f) {
                arg0->actor.shape.rot.y = temp_v0_3;
            } else if ((s32) temp_a2_3 > 0) {
                arg0->actor.shape.rot.y = temp_v1_3 + 0x64;
                phi_a2 = 0x64;
            } else if ((s32) temp_a2_3 < 0) {
                arg0->actor.shape.rot.y = temp_v1_3 - 0x64;
                phi_a2 = -0x64;
            }
        } else if ((s32) temp_a2_3 > 0) {
            arg0->actor.shape.rot.y = temp_v1_3 + 0x190;
            phi_a2 = 0x190;
        } else if ((s32) temp_a2_3 < 0) {
            arg0->actor.shape.rot.y = temp_v1_3 - 0x190;
            phi_a2 = -0x190;
        }
        if ((arg0->unk2F4 & 0x14) != 0) {
            func_80B78EFC(arg0, arg1, phi_a2);
        }
    }
    temp_v0_4 = arg0->unk304;
    if (temp_v0_4 == 0) {
        arg0->actor.speedXZ = 4.0f;
    } else if (temp_v0_4 == 1) {
        arg0->actor.speedXZ = 8.0f;
    }
    return sp3C;
}

void func_80B79F10(ObjUm *this, GlobalContext *globalCtx) {
    ObjUm *temp_a3;
    s32 temp_v0;

    temp_a3 = this;
    temp_a3->unk2AC += 0x3E8;
    temp_a3->unk2F4 &= -9;
    this = temp_a3;
    func_80B7B18C(temp_a3, globalCtx, 0, temp_a3);
    temp_v0 = func_80B79BA0(this, globalCtx);
    if ((temp_v0 == 1) || (temp_v0 == 2)) {
        if ((gSaveContext.weekEventReg[31] & 0x80) != 0) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
            globalCtx->nextEntranceIndex = 0x3E50;
            globalCtx->unk_1887F = 0x40;
            gSaveContext.nextTransition = 3;
            globalCtx->sceneLoadFlag = 0x14;
            return;
        }
        func_80B79524((Actor *) this);
        return;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80B79FFC(ObjUm *arg0) {
    func_80B7B18C(arg0, (GlobalContext *)2);
    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, (Actor *) arg0);
        arg0->unk4C8 = gSaveContext.time;
        ObjUm_SetupAction(arg0, func_80B7A0E0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
}

void func_80B7A070(ObjUm *this, GlobalContext *globalCtx) {
    func_80B79F10(this, globalCtx);
    func_80B78E88(this, globalCtx, 0);
    if (globalCtx->msgCtx.unk11F04 == 0x33B6) {
        this->unk4CC = 1;
        this->unk4D4 = 1;
        return;
    }
    this->unk4CC = 0;
    this->unk4D4 = 0;
}

void func_80B7A0E0(ObjUm *this, GlobalContext *globalCtx) {
    func_80B7B18C(this, globalCtx, 2);
    if (this->unk4C8 != gSaveContext.time) {
        func_80B7B18C(this, globalCtx, 0);
        ObjUm_SetupAction(this, func_80B7A070);
    }
}

void func_80B7A144(ObjUm *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v0;
    s32 temp_t7;
    s32 temp_t9;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp1C = temp_v0;
    func_80B78E38();
    temp_t7 = this->unk2F4 | 0x100;
    temp_t9 = temp_t7 | 4;
    this->unk2F4 = temp_t7;
    this->unk2F4 = temp_t9;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
    func_80B7B18C(this, globalCtx, 2);
    ObjUm_SetupAction(this, func_80B79FFC);
}

void func_80B7A1B4(ObjUm *arg0, ObjUm *arg1) {
    s32 temp_t7;
    u16 temp_v0;

    func_80B78E38(arg1);
    temp_t7 = arg0->unk2F4 | 4;
    arg0->unk2F4 = temp_t7;
    temp_v0 = arg1->unk1680C;
    if (temp_v0 != 0x33B8) {
        if (temp_v0 != 0x33B9) {
            arg0->unk2F4 = temp_t7 & ~0x800;
            arg0->unk4CC = 0;
        } else {
            arg0->unk4CC = 2;
        }
        arg0->unk4D4 = 0;
        return;
    }
    arg0->unk4CC = 0;
    arg0->unk4D4 = 3;
}

void func_80B7A240(ObjUm *arg0, ObjUm *arg1) {
    ObjUm *temp_a0;
    u16 temp_v0;
    u16 phi_v0;
    ObjUm *phi_a0;

    func_80B7B18C(arg1, (GlobalContext *)2);
    temp_a0 = arg0;
    temp_v0 = gSaveContext.time;
    phi_v0 = temp_v0;
    phi_a0 = temp_a0;
    if (temp_a0->unk4C8 != temp_v0) {
        arg0 = temp_a0;
        ObjUm_SetupAction(temp_a0, func_80B7A2AC);
        phi_v0 = gSaveContext.time;
        phi_a0 = arg0;
    }
    phi_a0->unk4C8 = phi_v0;
    func_80B7A1B4(phi_a0, arg1);
}

void func_80B7A2AC(ObjUm *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    u16 temp_v0_2;
    u16 phi_v0;

    this->unk2AC += 0x3E8;
    func_80B7B18C(this, globalCtx, 0);
    temp_v0 = func_80B79BA0(this, globalCtx);
    if ((temp_v0 == 1) || (temp_v0 == 2)) {
        globalCtx->nextEntranceIndex = 0xCE40;
        globalCtx->unk_1887F = 0x40;
        gSaveContext.nextTransition = 3;
        globalCtx->sceneLoadFlag = 0x14;
        return;
    }
    temp_v0_2 = gSaveContext.time;
    phi_v0 = temp_v0_2;
    if (this->unk4C8 == temp_v0_2) {
        ObjUm_SetupAction(this, (void (*)(ObjUm *, GlobalContext *)) func_80B7A240);
        phi_v0 = gSaveContext.time;
    }
    this->unk4C8 = phi_v0;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    func_80B7A1B4(this, (ObjUm *) globalCtx);
}

void func_80B7A394(ObjUm *this, GlobalContext *globalCtx) {
    ObjUm *temp_a0;

    func_80B78E38((ObjUm *) globalCtx);
    temp_a0 = this;
    temp_a0->unk2F4 |= 4;
    if (temp_a0->unk4C8 != gSaveContext.time) {
        this = temp_a0;
        func_80B7B18C(temp_a0, globalCtx, 0);
        ObjUm_SetupAction(this, func_80B7A2AC);
    }
}

void func_80B7A400(ObjUm *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp24 = temp_v0;
    func_80B78E38(this);
    this->unk2F4 |= 4;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        this->unk4C8 = gSaveContext.time;
        ObjUm_SetupAction(this, func_80B7A394);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_80B7A494(ObjUm *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    u8 temp_t1;
    u8 temp_t9;
    u8 temp_v1;

    func_80B78E38(this, globalCtx);
    func_80B78E88(this, globalCtx, 0x7FFF);
    this->unk2AC += 0x7D0;
    this->unk2F4 |= 0x10;
    func_80B7B18C(this, globalCtx, 1);
    temp_v0 = func_80B79BA0(this, globalCtx);
    if ((temp_v0 == 1) || (temp_v0 == 2)) {
        temp_v1 = gSaveContext.weekEventReg[52];
        gSaveContext.seqIndex = 0xFF;
        gSaveContext.weekEventReg[31] &= 0x7F;
        gSaveContext.nightSeqIndex = 0xFF;
        if (((temp_v1 & 1) == 0) && ((temp_v1 & 2) == 0)) {
            if (this->unk4E0 == 0) {
                globalCtx->nextEntranceIndex = 0x3E60;
                globalCtx->unk_1887F = 0x40;
                gSaveContext.nextTransition = 3;
                globalCtx->sceneLoadFlag = 0x14;
                temp_t1 = gSaveContext.weekEventReg[52] | 1;
                gSaveContext.weekEventReg[52] = temp_t1;
                gSaveContext.weekEventReg[52] = temp_t1 & 0xFD;
                return;
            }
            globalCtx->nextEntranceIndex = 0x6480;
            globalCtx->unk_1887F = 0x40;
            gSaveContext.nextTransition = 3;
            globalCtx->sceneLoadFlag = 0x14;
            temp_t9 = gSaveContext.weekEventReg[52] | 2;
            gSaveContext.weekEventReg[52] = temp_t9;
            gSaveContext.weekEventReg[52] = temp_t9 & 0xFE;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    func_80B78DF0(this, globalCtx);
}

void func_80B7A614(ObjUm *this, GlobalContext *globalCtx) {
    s32 sp20;
    s16 temp_v0_3;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    ObjUm *phi_v1;
    s32 phi_v0;
    s16 phi_v1_2;

    func_80B78E38(this, globalCtx);
    func_80B78E88(this, globalCtx, 0x7FFF);
    temp_t9 = this->unk2F4 | 0x10;
    this->unk2F4 = temp_t9;
    this->unk2AC += 0x7D0;
    this->unk2F4 = temp_t9 | 0x80;
    func_80B7B18C(this, globalCtx, 1);
    if ((func_80B79BA0(this, globalCtx) == 3) && (this->unk4DC == 0)) {
        this->unk4DC = 1;
    } else {
        temp_v0 = this->unk4DC;
        if (temp_v0 > 0) {
            phi_v1 = this;
            if (temp_v0 == 1) {
                this->unk4E0 = 1;
                phi_v0 = 0;
loop_6:
                temp_v0_2 = phi_v0 + 4;
                phi_v0 = temp_v0_2;
                if (phi_v1->unk314 != 1) {
                    this->unk4E0 = 0;
                } else {
                    phi_v1 += 4;
                    if (temp_v0_2 != 0xC) {
                        goto loop_6;
                    }
                }
                this->unk2F4 |= 0x2000;
            }
            this->unk4DC += 1;
        }
    }
    if ((this->unk2F4 & 0x2000) != 0) {
        temp_v0_3 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        phi_v1_2 = temp_v0_3;
        if (this->unk4E0 != 0) {
            phi_v1_2 = ActorCutscene_GetAdditionalCutscene(temp_v0_3);
        }
        sp20 = (s32) phi_v1_2;
        if (ActorCutscene_GetCanPlayNext(phi_v1_2) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(phi_v1_2, (Actor *) this);
            ObjUm_SetupAction(this, func_80B7A494);
            this->unk2F4 &= -0x81;
        } else {
            ActorCutscene_SetIntentToPlay(phi_v1_2);
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    func_80B78DF0(this, globalCtx);
}

void func_80B7A7AC(ObjUm *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    this->unk4DC = 0;
    this->unk4E0 = 0;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C & ~0x20);
    func_80B78E38(this, globalCtx);
    func_80B78E88(this, globalCtx, 0x7FFF);
    func_80B78EBC(this, globalCtx);
    this->unk2F4 |= 0x10;
    func_80B78DF0(this, globalCtx);
    this->unk2F4 |= 4;
    func_80B7B18C(this, globalCtx, 1);
    ObjUm_SetupAction(this, func_80B7A614);
}

void func_80B7A860(ObjUm *arg0, GlobalContext *arg1) {
    s32 temp_cond;
    s32 temp_t4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u16 temp_t9;
    u16 temp_v0;
    GlobalContext *phi_a1;

    func_80B78E38(arg0, arg1);
    func_80B78E88(arg0, arg1, 0);
    arg0->unk2F4 |= 4;
    temp_v0 = arg1->csCtx.frames;
    if (temp_v0 == 0x1C1) {
        func_80B77FA4(arg0, arg1);
        goto block_4;
    }
    if ((s32) temp_v0 >= 0x1C2) {
        func_80B78DF0(arg0, arg1);
block_4:
    }
    phi_a1 = arg1;
    if (arg1->csCtx.state == 0) {
        ActorCutscene_Stop((s16) arg0->actor.cutscene);
        ObjUm_SetupAction(arg0, func_80B7A7AC);
        phi_a1 = arg1;
    }
    temp_t9 = phi_a1->msgCtx.unk11F04;
    switch (temp_t9) {
    case 13242:
        arg0->unk4CC = 2;
        arg0->unk4D4 = 3;
        return;
    case 13243:
        if ((fabsf(arg0->unk160.animCurrentFrame) < 0.008f) && (temp_v0_2 = arg0->unk2F4, ((temp_v0_2 & 0x1000) == 0))) {
            arg0->unk2F4 = temp_v0_2 | 0x1000;
            arg0->unk4CC = 4;
            goto block_16;
        }
        if (fabsf(arg0->unk160.transCurrentFrame) < 0.008f) {
            arg0->unk4CC = 2;
            arg0->unk4D4 = 2;
        } else {
            arg0->unk4CC = 5;
block_16:
            arg0->unk4D4 = 0;
        }
        arg0->unk2F4 |= 0x800;
        return;
    case 13244:
        if ((fabsf(arg0->unk160.animCurrentFrame) < 0.008f) && (temp_v0_3 = arg0->unk2F4, ((temp_v0_3 & 0x1000) == 0))) {
            arg0->unk2F4 = temp_v0_3 | 0x1000;
            arg0->unk4CC = 4;
            goto block_24;
        }
        if (fabsf(arg0->unk160.transCurrentFrame) < 0.008f) {
            arg0->unk4CC = 2;
            arg0->unk4D4 = 2;
        } else {
            arg0->unk4CC = 5;
block_24:
            arg0->unk4D4 = 0;
        }
        arg0->unk2F4 |= 0x800;
        return;
    case 13245:
        if ((fabsf(arg0->unk160.animCurrentFrame) < 0.008f) && (temp_v0_4 = arg0->unk2F4, ((temp_v0_4 & 0x1000) == 0))) {
            arg0->unk2F4 = temp_v0_4 | 0x1000;
            arg0->unk4CC = 4;
        } else if (fabsf(arg0->unk160.transCurrentFrame) < 0.008f) {
            arg0->unk4CC = 2;
        } else {
            arg0->unk4CC = 5;
        }
        arg0->unk4D4 = 0;
        arg0->unk4D8 = 0;
        arg0->unk2F4 |= 0x800;
        return;
    case 13246:
        arg0->unk2F4 |= 0x800;
        arg0->unk4CC = 2;
        arg0->unk4D4 = 3;
        return;
    case 13247:
        temp_t4 = arg0->unk4D8 + 1;
        temp_cond = fabsf(arg0->unk160.transCurrentFrame) < 0.008f;
        arg0->unk4D8 = temp_t4;
        if (temp_cond && (temp_t4 >= 6)) {
            arg0->unk4CC = 0;
            arg0->unk4D4 = 0;
        } else {
            arg0->unk4CC = 2;
            arg0->unk4D4 = 2;
        }
        arg0->unk2F4 &= -0x801;
        return;
    default:
        arg0->unk4CC = 0;
        arg0->unk4D4 = 0;
        return;
    }
}

void func_80B7AB78(ObjUm *arg0, ObjUm *arg1) {
    ObjUm *temp_a0;
    u16 temp_v0;
    u16 phi_v0;
    ObjUm *phi_a0;

    func_80B7B18C(arg1, (GlobalContext *)2);
    temp_a0 = arg0;
    temp_v0 = gSaveContext.time;
    phi_v0 = temp_v0;
    phi_a0 = temp_a0;
    if (temp_a0->unk4C8 != temp_v0) {
        arg0 = temp_a0;
        ObjUm_SetupAction(temp_a0, func_80B7ABE4);
        phi_v0 = gSaveContext.time;
        phi_a0 = arg0;
    }
    phi_a0->unk4C8 = phi_v0;
    func_80B7A860(phi_a0, (GlobalContext *) arg1);
}

void func_80B7ABE4(ObjUm *this, GlobalContext *globalCtx) {
    u16 temp_v0;
    u16 phi_v0;

    this->unk2AC += 0x3E8;
    func_80B7B18C(this, globalCtx, 0);
    if (func_80B79BA0(this, globalCtx) == 2) {
        func_80B79524((Actor *) this);
        return;
    }
    temp_v0 = gSaveContext.time;
    phi_v0 = temp_v0;
    if (this->unk4C8 == temp_v0) {
        ObjUm_SetupAction(this, (void (*)(ObjUm *, GlobalContext *)) func_80B7AB78);
        phi_v0 = gSaveContext.time;
    }
    this->unk4C8 = phi_v0;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    func_80B7A860(this, globalCtx);
}

void func_80B7AC94(ObjUm *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
    func_80B78E38(this);
    func_80B78E88(this, globalCtx, 0);
    this->unk2F4 |= 4;
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        this->unk4C8 = gSaveContext.time;
        ObjUm_SetupAction(this, func_80B7ABE4);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_80B7AD34(ObjUm *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
    func_80B78E38(this, globalCtx);
    func_80B78E88(this, globalCtx, 0);
    this->unk2F4 |= 4;
    this->unk2AC += 0x3E8;
    func_80B7B18C(this, globalCtx, 0);
    if ((func_80B79BA0(this, globalCtx) == 4) && ((gSaveContext.weekEventReg[59] & 2) == 0)) {
        ActorCutscene_Stop((s16) this->actor.cutscene);
        func_801A3F54(0);
        gSaveContext.weekEventReg[59] |= 2;
        gSaveContext.nextCutsceneIndex = 0xFFF3;
        globalCtx->nextEntranceIndex = 0x5400;
        globalCtx->unk_1887F = 0x40;
        gSaveContext.nextTransition = 3;
        globalCtx->sceneLoadFlag = 0x14;
        gSaveContext.time += 0xAAC;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80B7AE58(ObjUm *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
    func_80B78E38(this);
    func_80B78E88(this, globalCtx, 0);
    this->unk2F4 |= 4;
    func_80B7B18C(this, globalCtx, 2);
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        ObjUm_SetupAction(this, func_80B7AD34);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_80B7AEFC(ObjUm *this, GlobalContext *globalCtx) {
    func_80B7B18C(this, (GlobalContext *)2);
    SkelAnime_FrameUpdateMatrix(&this->unk160);
}

void func_80B7AF30(ObjUm *arg0, GlobalContext *arg1) {
    ? sp44;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp28;
    s32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f8;
    s32 temp_a0;
    s32 temp_cond;
    s32 temp_v0;
    void *temp_a2;
    void *temp_a3;

    temp_v0 = arg0->unk2F4;
    temp_a2 = arg0 + 0x2C4;
    if ((temp_v0 & 1) == 0) {
        arg0->actor.shape.rot.x = 0;
        arg0->actor.shape.rot.z = 0;
        return;
    }
    arg0->unk2F4 = temp_v0 & ~1;
    temp_a3 = arg0 + 0x2DC;
    arg0->unk2D0 = temp_a2->unk0;
    arg0->unk2D4 = temp_a2->unk4;
    arg0->unk2D8 = temp_a2->unk8;
    arg0->unk2E8 = temp_a3->unk0;
    arg0->unk2EC = temp_a3->unk4;
    arg0->unk2F0 = temp_a3->unk8;
    sp28 = temp_a3;
    temp_a0 = arg1 + 0x830;
    sp24 = temp_a0;
    temp_f0 = func_800C3FA0(temp_a0, &sp44, temp_a2, temp_a3);
    temp_cond = temp_f0 == -32000.0f;
    arg0->unk2D4 = temp_f0;
    if (temp_cond) {
        arg0->unk2D4 = arg0->actor.floorHeight;
    }
    temp_f0_2 = func_800C3FA0(temp_a0, &sp44, temp_a3, temp_a3);
    arg0->unk2EC = temp_f0_2;
    if (temp_f0_2 == -32000.0f) {
        arg0->unk2EC = arg0->actor.floorHeight;
    }
    temp_f10 = (arg0->unk2D0 + arg0->unk2E8) * 0.5f;
    sp30 = temp_f10;
    temp_f4 = (arg0->unk2D4 + arg0->unk2EC) * 0.5f;
    sp34 = temp_f4;
    temp_f8 = (arg0->unk2D8 + arg0->unk2F0) * 0.5f;
    sp38 = temp_f8;
    temp_f2 = temp_f10 - arg0->actor.world.pos.x;
    temp_f16 = temp_f8 - arg0->actor.world.pos.z;
    arg0->actor.shape.rot.x = Math_Atan2S(temp_f4 - arg0->actor.world.pos.y, sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16)));
    temp_f2_2 = sp30 - arg0->unk2D0;
    temp_f16_2 = sp38 - arg0->unk2D8;
    arg0->actor.shape.rot.z = (s16) -Math_Atan2S(temp_f4 - arg0->unk2D4, sqrtf((temp_f2_2 * temp_f2_2) + (temp_f16_2 * temp_f16_2)));
    if ((arg0->unk2F4 & 2) != 0) {
        arg0->actor.shape.rot.x += (s32) ((Rand_ZeroOne() * 100.0f) - 50.0f);
        arg0->actor.shape.rot.z += (s32) ((Rand_ZeroOne() * 100.0f) - 50.0f);
    }
}

void func_80B7B154(ObjUm *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x160, &D_06012CC0);
    arg0->unk304 = 0;
}

void func_80B7B18C(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    s32 sp3C;
    s32 sp34;
    SkelAnime *sp24;
    AnimationHeader **temp_v0;
    SkelAnime *temp_a0;
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_v1;
    void *temp_v0_2;
    void *temp_v1_2;
    f32 phi_f0;
    s32 phi_a3;

    temp_v1 = arg2;
    temp_a0 = arg0 + 0x160;
    phi_f0 = 0.0f;
    phi_a3 = arg2;
    if (*(&D_80B7C260 + (arg2 * 8)) != 0) {
        arg0->unk2F4 = (s32) (arg0->unk2F4 | 2);
    } else {
        arg0->unk2F4 = (s32) (arg0->unk2F4 & ~2);
    }
    if (arg2 == 0) {
        phi_f0 = arg0->speedXZ * 0.25f;
    } else if (arg2 == 1) {
        phi_f0 = arg0->speedXZ * 0.2f;
    } else if (arg2 == 2) {
        phi_f0 = 1.0f;
    }
    arg0->unk17C = phi_f0;
    if ((arg0->unk2F4 & 0x800) != 0) {
        arg0->unk17C = 1.0f;
        phi_a3 = -1;
    }
    arg2 = phi_a3;
    sp24 = temp_a0;
    temp_a1 = phi_a3 != arg0->unk304;
    sp3C = temp_a1;
    sp34 = temp_v1;
    if ((SkelAnime_FrameUpdateMatrix(temp_a0) != 0) || (temp_a1 != 0)) {
        arg0->unk304 = arg2;
        if (arg2 != -1) {
            temp_v1_2 = arg0->unk2B8;
            temp_v0 = (arg2 * 8) + &D_80B7C25C;
            if (temp_v1_2 != 0) {
                temp_v1_2->unk538 = arg2;
            }
            if (temp_a1 != 0) {
                SkelAnime_ChangeAnimTransitionStop(temp_a0, *temp_v0, -3.0f);
            } else {
                SkelAnime_ChangeAnimDefaultStop(temp_a0, *temp_v0);
            }
        } else {
            temp_v0_2 = arg0->unk2B8;
            if (temp_v0_2 != 0) {
                temp_v0_2->unk538 = temp_v1;
            }
            if (temp_a1 != 0) {
                SkelAnime_ChangeAnimTransitionStop(temp_a0, *(&D_80B7C274 + (arg2 * -8)), -10.0f);
            } else {
                SkelAnime_ChangeAnimDefaultStop(temp_a0, *(&D_80B7C274 + (arg2 * -8)));
            }
        }
    }
    temp_lo = (s32) arg0->unk2AC / 0x199A;
    if (arg0->unk420 != temp_lo) {
        arg0->unk420 = temp_lo;
        Audio_PlayActorSound2(arg0, 0x2958U);
    }
}

void ObjUm_Update(ObjUm *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u32 temp_t0;
    s32 phi_v0;
    s32 phi_v0_2;
    ObjUm *this = (ObjUm *) thisx;

    this->actionFunc(this, globalCtx);
    this->unk350 += 1;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 0x1CU);
    temp_v0 = this->unk2B8;
    if (temp_v0 != 0) {
        temp_v0->world.pos.x = this->actor.world.pos.x;
        this->unk2B8->world.pos.y = this->actor.floorHeight;
        this->unk2B8->world.pos.z = this->actor.world.pos.z;
    }
    temp_v0_2 = this->unk2F4;
    phi_v0_2 = temp_v0_2;
    if ((temp_v0_2 & 0x10) != 0) {
        func_80123F2C(globalCtx, 0x63);
        phi_v0 = this->unk2F4 & ~0x10;
        goto block_6;
    }
    if ((temp_v0_2 & 4) != 0) {
        func_80123F2C(globalCtx, -3);
        phi_v0 = this->unk2F4 & ~4;
block_6:
        this->unk2F4 = phi_v0;
        phi_v0_2 = phi_v0;
    }
    if ((phi_v0_2 & 0x100) != 0) {
        this->unk2F4 = phi_v0_2 & ~0x100;
        func_80B78E88(this, globalCtx, 0);
        func_80B78EBC(this, globalCtx);
    }
    func_80B7AF30(this, globalCtx);
    temp_t0 = this->unk4CC;
    switch (temp_t0) {
    case 0:
        temp_v0_3 = this->unk4D0;
        if (temp_v0_3 != 0) {
            if (temp_v0_3 != 1) {
                if (temp_v0_3 != 2) {
                    goto block_27;
                }
                if (Rand_ZeroOne() < 0.6f) {
block_27:
                    this->unk4D0 = 0;
                }
                /* Duplicate return node #28. Try simplifying control flow for better match */
                return;
            }
            if (Rand_ZeroOne() < 0.6f) {
                this->unk4D0 = 2;
                return;
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return;
        }
        if (Rand_ZeroOne() < 0.025f) {
            this->unk4D0 = 1;
            return;
        }
        return;
    case 1:
        this->unk4D0 = 3;
        return;
    case 2:
        this->unk4D0 = 4;
        return;
    case 3:
        this->unk4D0 = 5;
        return;
    case 4:
        this->unk4D0 = 2;
        return;
    case 5:
        goto block_27;
    default:
        this->unk4CC = 0;
        goto block_27;
    }
}

s32 func_80B7B598(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp70;
    ? sp5C;
    ? sp50;
    void *sp4C;
    s32 *sp44;
    s32 *sp40;
    s16 sp3E;
    f32 sp34;
    f32 sp30;
    f32 temp_f16;
    s16 temp_v0_3;
    s32 *temp_v0;
    s32 *temp_v0_2;
    void *temp_v1;

    sp70 = arg0->actorCtx.actorList[2].first;
    sp5C.unk0 = (s32) D_80B7C284.unk0;
    sp5C.unk4 = (s32) D_80B7C284.unk4;
    sp5C.unk8 = (s32) D_80B7C284.unk8;
    sp50.unk0 = (s32) D_80B7C290.unk0;
    sp50.unk4 = (s32) D_80B7C290.unk4;
    sp50.unk8 = (s32) D_80B7C290.unk8;
    if ((arg1 >= 0xB) && (arg5->unk2AE == 0)) {
        *arg2 = NULL;
        return 0;
    }
    if (arg1 == 0xD) {
        temp_v1 = arg0->state.gfxCtx;
        temp_v0 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0 + 8;
        *temp_v0 = 0xDB060020;
        arg1 = arg1;
        sp4C = temp_v1;
        sp44 = temp_v0;
        sp44->unk4 = Lib_SegmentedToVirtual(*(&D_80B7C110 + (arg5->unk4D0 * 4)));
        temp_v0_2 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0_2 + 8;
        *temp_v0_2 = 0xDB060024;
        arg1 = arg1;
        sp40 = temp_v0_2;
        sp40->unk4 = Lib_SegmentedToVirtual(*(&D_80B7C128 + (arg5->unk4D4 * 4)));
    }
    if (arg1 == 3) {
        if ((arg5->unk2F4 & 2) != 0) {
            arg4->x = (s16) -(s32) arg5->unk2AC;
        }
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp5C, arg5 + 0x2C4);
    } else if (arg1 == 4) {
        if ((arg5->unk2F4 & 2) != 0) {
            arg4->x = arg5->unk2AC;
        }
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp50, arg5 + 0x2DC);
    } else if ((arg1 == 0xD) && ((arg5->unk2F4 & 8) != 0)) {
        if ((func_8013D5E8(arg5->shape.rot.y, 0x4E20, arg5->yawTowardsPlayer) != 0) && (arg5->xzDistToPlayer < 500.0f)) {
            sp30.unk0 = sp70->world.pos.x;
            sp30.unk4 = (s32) sp70->world.pos.y;
            sp30.unk8 = (s32) sp70->world.pos.z;
            temp_f16 = sp70->unkC44 + 3.0f;
            sp34 = temp_f16;
            sp3E = Math_Vec3f_Yaw(arg5 + 0x3C, (Vec3f *) &sp30) - arg5->shape.rot.y;
            temp_v0_3 = Math_Atan2S(arg5->focus.pos.y - temp_f16, Math3D_XZLength(sp30 - arg5->focus.pos.x, sp38 - arg5->focus.pos.z));
            arg5->unk2FE = (s16) (arg4->x + sp3E);
            arg5->unk300 = (s16) arg4->y;
            arg5->unk302 = (s16) (arg4->z + temp_v0_3);
            Math_SmoothStepToS(arg5 + 0x2F8, arg5->unk2FE, 4, 0x3E8, (s16) 1);
            Math_SmoothStepToS(arg5 + 0x2FC, arg5->unk302, 4, 0x3E8, (s16) 1);
            arg5->unk2FA = (s16) arg4->y;
            arg4->x = arg5->unk2F8;
            arg4->z = arg5->unk2FC;
        } else {
            arg5->unk2FE = (s16) arg4->x;
            arg5->unk300 = (s16) arg4->y;
            arg5->unk302 = (s16) arg4->z;
            Math_SmoothStepToS(arg5 + 0x2F8, arg5->unk2FE, 4, 0x3E8, (s16) 1);
            Math_SmoothStepToS(arg5 + 0x2FC, arg5->unk302, 4, 0x3E8, (s16) 1);
            arg5->unk2FA = (s16) arg4->y;
            arg4->x = arg5->unk2F8;
            arg4->z = arg5->unk2FC;
        }
    } else if ((arg1 == 7) && ((arg5->unk2F4 & 0x80) != 0)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80B7B93C(GlobalContext *arg0, Vec3f *arg1) {
    ? sp8C;
    ? sp80;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 *temp_s5;
    s32 temp_s0;
    s32 phi_s0;

    sp8C.unk0 = (s32) D_80B7C29C.unk0;
    sp8C.unk4 = (s32) D_80B7C29C.unk4;
    sp8C.unk8 = (s32) D_80B7C29C.unk8;
    sp80.unk0 = (s32) D_80B7C2A8.unk0;
    sp80.unk4 = (s32) D_80B7C2A8.unk4;
    sp80.unk8 = (s32) D_80B7C2A8.unk8;
    EffectSsHitMark_SpawnFixedScale(arg0, 0, arg1);
    temp_s5 = &sp70;
    phi_s0 = 0;
    do {
        sp70 = (Rand_ZeroOne() * 20.0f) - 10.0f;
        sp74 = -((Rand_ZeroOne() * 20.0f) - 10.0f);
        sp78 = (Rand_ZeroOne() * 20.0f) - 10.0f;
        EffectSsHahen_Spawn(arg0, arg1, (Vec3f *) temp_s5, (Vec3f *) &sp8C, (s16) 1, (s16) 0x64, (s16) 0x1FC, (s16) 0xA, *(&sp80 + ((s32) (Rand_ZeroOne() * 3.0f) * 4)));
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x14);
}

void func_80B7BABC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? spFC;
    ? spE4;
    ? spCC;
    f32 spC4;
    ? spC0;
    ? spB4;
    f32 spB0;
    ? spA4;
    ? sp98;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    f32 sp70;
    MtxF *sp4C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s2;
    Mtx *temp_s3;
    s32 temp_s6;
    s32 phi_v0;
    f32 *phi_s5;
    Actor *phi_s0;
    Vec3f *phi_s7;
    s32 phi_s6;

    temp_s2 = arg0->state.gfxCtx;
    spFC.unk0 = (s32) D_80B7C2B4.unk0;
    spFC.unk4 = (s32) D_80B7C2B4.unk4;
    spFC.unkC = (s32) D_80B7C2B4.unkC;
    spFC.unk8 = (s32) D_80B7C2B4.unk8;
    spFC.unk10 = (s32) D_80B7C2B4.unk10;
    spFC.unk14 = (s32) D_80B7C2B4.unk14;
    spE4.unk4 = (s32) D_80B7C2CC.unk4;
    spE4.unk0 = (s32) D_80B7C2CC.unk0;
    spE4.unk8 = (s32) D_80B7C2CC.unk8;
    spE4.unkC = (s32) D_80B7C2CC.unkC;
    spE4.unk14 = (s32) D_80B7C2CC.unk14;
    spE4.unk10 = (s32) D_80B7C2CC.unk10;
    spCC.unk0 = (s32) D_80B7C2E4.unk0;
    spCC.unk4 = (s32) D_80B7C2E4.unk4;
    spCC.unk8 = (s32) D_80B7C2E4.unk8;
    spCC.unkC = (s32) D_80B7C2E4.unkC;
    spCC.unk10 = (s32) D_80B7C2E4.unk10;
    spCC.unk14 = (s32) D_80B7C2E4.unk14;
    spC0.unk0 = (f32) D_801D15B0.x;
    spC0.unk4 = (f32) D_801D15B0.y;
    spC0.unk8 = (f32) D_801D15B0.z;
    spC4 += 1700.0f;
    phi_v0 = 5;
    if (arg1 == 5) {
        spA4.unk0 = (s32) D_80B7C2FC.unk0;
        spA4.unk4 = (s32) D_80B7C2FC.unk4;
        spA4.unk8 = (s32) D_80B7C2FC.unk8;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &spA4, arg4 + 0x308);
        arg4->unk2F4 = (s32) (arg4->unk2F4 | 0x20);
    }
    phi_v0 = 5;
    if (arg1 == 5) {
        sp98.unk0 = (s32) D_80B7C308.unk0;
        sp98.unk4 = (s32) D_80B7C308.unk4;
        sp98.unk8 = (s32) D_80B7C308.unk8;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp98, arg4 + 0x4BC);
    }
    phi_s5 = &sp70;
    if (arg1 == phi_v0) {
        sp70.unk0 = D_80B7C314.unk0;
        sp70.unk4 = (s32) D_80B7C314.unk4;
        sp70.unk8 = (s32) D_80B7C314.unk8;
        sp80 = 0;
        sp84 = 0;
        sp88 = 6800.0f;
        sp4C = arg0 + 0x187B0;
        phi_s0 = arg4;
        phi_s7 = arg4 + 0x32C;
        phi_s6 = 0;
loop_6:
        sp90 = *phi_s5;
        sp8C = *(&spCC + (phi_s0->unk314 * 4));
        if (phi_s0->unk314 == 5) {
            sp82 = 0x4000;
        } else {
            sp82 = -0x4000;
        }
        SysMatrix_StatePush();
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp88, (Vec3s *) &sp80);
        temp_s3 = Matrix_NewMtx(temp_s2);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &spC0, (Vec3f *) &spB4);
        SkinMatrix_Vec3fMtxFMultXYZW(sp4C, (Vec3f *) &spB4, phi_s7, &spB0);
        if (phi_s0->unk320 != 0) {
            phi_s0->unk320 = 0;
            if (phi_s0->unk314 == 1) {
                func_80B7B93C(arg0, (Vec3f *) &spB4);
            } else {
                EffectSsHitMark_SpawnFixedScale(arg0, 0, (Vec3f *) &spB4);
            }
        }
        SysMatrix_StatePop();
        phi_s5 += 4;
        if (temp_s3 != 0) {
            temp_v0 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w1 = (u32) temp_s3;
            temp_v0->words.w0 = 0xDA380003;
            temp_s6 = phi_s6 + 0xC;
            phi_s7 += 0xC;
            phi_s6 = temp_s6;
            if (*(&spFC + (phi_s0->unk314 * 4)) != 0) {
                temp_v0_2 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0_2 + 8;
                temp_v0_2->words.w0 = 0xDE000000;
                temp_v0_2->words.w1 = *(&spFC + (phi_s0->unk314 * 4));
                if ((sp + (phi_s0->unk314 * 4))->unkE4 != 0) {
                    temp_v0_3 = temp_s2->polyOpa.p;
                    temp_s2->polyOpa.p = temp_v0_3 + 8;
                    temp_v0_3->words.w0 = 0xDE000000;
                    temp_v0_3->words.w1 = (sp + (phi_s0->unk314 * 4))->unkE4;
                }
            }
            phi_s0 += 4;
            if (temp_s6 == 0x24) {
                goto block_18;
            }
            goto loop_6;
        }
    } else {
block_18:
        if (arg1 == 0xD) {
            SysMatrix_GetStateTranslation(arg4 + 0x3C);
        }
    }
}

void func_80B7BEA4(f32 *arg0, s16 arg1, f32 *arg2, u8 arg3, GlobalContext *arg4) {
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    s32 sp104;
    Mtx *sp100;
    ? spC0;
    ? sp80;
    ? sp40;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s0;
    Mtx *temp_a2;
    Mtx *temp_v0;

    sp108 = arg0->unk0;
    sp10C = arg0->unk4 + 1.0f;
    sp110 = arg0->unk8;
    if (sp104 != 0) {
        func_800C0094((CollisionPoly *) sp104, arg0->unk0, func_800C4000(arg4, arg4 + 0x830, &sp104, (Vec3f *) &sp108), arg0->unk8, (MtxF *) &spC0);
    } else {
        SkinMatrix_SetTranslate((MtxF *) &spC0, arg0->unk0, arg0->unk4, arg0->unk8);
    }
    SkinMatrix_MulYRotation((MtxF *) &spC0, arg1);
    SkinMatrix_SetScale((MtxF *) &sp80, arg2->unk0, 1.0f, arg2->unk8);
    SkinMatrix_MtxFMtxFMult((MtxF *) &spC0, (MtxF *) &sp80, (MtxF *) &sp40);
    temp_v0 = SkinMatrix_MtxFToNewMtx(arg4->state.gfxCtx, (MtxF *) &sp40);
    temp_a2 = temp_v0;
    if (temp_v0 != 0) {
        temp_s0 = arg4->state.gfxCtx;
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_801D1DE0;
        temp_v0_2->words.w0 = 0xDA380003;
        sp100 = temp_a2;
        temp_s0->polyOpa.p = Gfx_CallSetupDL(temp_s0->polyOpa.p, 0x2CU);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = (u32) arg3;
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) temp_a2;
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_5 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) D_04075A40;
        temp_v0_5->words.w0 = 0xDE000000;
    }
}

void ObjUm_Draw(ObjUm *this, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    ObjUm *this = (ObjUm *) thisx;

    this->unk2F4 |= 1;
    SkelAnime_DrawSV(globalCtx, this->unk160.skeleton, this->unk160.limbDrawTbl, (s32) this->unk160.dListCount, func_80B7B598, func_80B7BABC, (Actor *) this);
    sp34 = 0.45f;
    sp38 = 0.0f;
    sp3C = 0.7f;
    func_80B7BEA4(&this->unk4BC, this->actor.shape.rot.y, &sp34, 0xB4U, globalCtx);
    func_80B77770(this, globalCtx);
}
