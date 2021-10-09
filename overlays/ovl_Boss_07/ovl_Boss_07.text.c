typedef struct Boss07 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(Boss07 *, GlobalContext *);
    /* 0x0148 */ u8 unk_148;                        /* inferred */
    /* 0x0149 */ u8 unk_149;                        /* inferred */
    /* 0x014A */ s8 unk_14A;                        /* inferred */
    /* 0x014B */ char pad_14B[0x1];
    /* 0x014C */ s16 unk_14C;                       /* inferred */
    /* 0x014E */ u8 unk_14E;                        /* inferred */
    /* 0x014F */ u8 unk_14F;                        /* inferred */
    /* 0x0150 */ s16 unk_150;                       /* inferred */
    /* 0x0152 */ s16 unk_152;                       /* inferred */
    /* 0x0154 */ s16 unk_154;                       /* inferred */
    /* 0x0156 */ s16 unk_156;                       /* inferred */
    /* 0x0158 */ s16 unk_158;                       /* inferred */
    /* 0x015A */ s16 unk_15A;                       /* inferred */
    /* 0x015C */ s16 unk_15C;                       /* inferred */
    /* 0x015E */ s16 unk_15E;                       /* inferred */
    /* 0x0160 */ s16 unk_160;                       /* inferred */
    /* 0x0162 */ char pad_162[0x2];
    /* 0x0164 */ f32 unk_164;                       /* inferred */
    /* 0x0168 */ f32 unk_168;                       /* inferred */
    /* 0x016C */ f32 unk_16C;                       /* inferred */
    /* 0x0170 */ f32 unk_170;                       /* inferred */
    /* 0x0174 */ u8 unk_174;                        /* inferred */
    /* 0x0175 */ char pad_175[0x7];                 /* maybe part of unk_174[8]? */
    /* 0x017C */ f32 unk_17C;                       /* inferred */
    /* 0x0180 */ s16 unk_180;                       /* inferred */
    /* 0x0182 */ char pad_182[0x2];
    /* 0x0184 */ f32 unk_184;                       /* inferred */
    /* 0x0188 */ f32 unk_188;                       /* inferred */
    /* 0x018C */ f32 unk_18C;                       /* inferred */
    /* 0x0190 */ SkelAnime unk_190;                 /* inferred */
    /* 0x01D4 */ f32 unk_1D4;                       /* inferred */
    /* 0x01D8 */ s32 unk_1D8;                       /* inferred */
    /* 0x01DC */ Vec3s unk_1DC;                     /* inferred */
    /* 0x01E2 */ char pad_1E2[0xA2];                /* maybe part of unk_1DC[28]? */
    /* 0x0284 */ Vec3s unk_284;                     /* inferred */
    /* 0x028A */ char pad_28A[0xA2];                /* maybe part of unk_284[28]? */
    /* 0x032C */ f32 unk_32C;                       /* inferred */
    /* 0x0330 */ f32 unk_330;                       /* inferred */
    /* 0x0334 */ Vec3f unk_334;                     /* inferred */
    /* 0x0340 */ char pad_340[0xC];
    /* 0x034C */ f32 unk_34C;                       /* inferred */
    /* 0x0350 */ f32 unk_350;                       /* inferred */
    /* 0x0354 */ f32 unk_354;                       /* inferred */
    /* 0x0358 */ char pad_358[0x90];                /* maybe part of unk_354[37]? */
    /* 0x03E8 */ ColliderJntSph unk_3E8;            /* inferred */
    /* 0x0408 */ ColliderJntSphElement unk_408;     /* inferred */
    /* 0x0448 */ char pad_448[0x280];               /* maybe part of unk_408[11]? */
    /* 0x06C8 */ ColliderJntSph unk_6C8;            /* inferred */
    /* 0x06E8 */ ColliderJntSphElement unk_6E8;     /* inferred */
    /* 0x0728 */ ColliderCylinder unk_728;          /* inferred */
    /* 0x0774 */ u8 unk_774;                        /* inferred */
    /* 0x0775 */ char pad_775[0x3];                 /* maybe part of unk_774[4]? */
    /* 0x0778 */ s32 unk_778;                       /* inferred */
    /* 0x077C */ f32 unk_77C;                       /* inferred */
    /* 0x0780 */ s32 unk_780;                       /* inferred */
    /* 0x0784 */ s32 unk_784;                       /* inferred */
    /* 0x0788 */ ? unk_788;                         /* inferred */
    /* 0x0788 */ char pad_788[0x8];
    /* 0x0790 */ f32 unk_790;                       /* inferred */
    /* 0x0794 */ f32 unk_794;                       /* inferred */
    /* 0x0798 */ GlobalContext *unk_798;            /* inferred */
    /* 0x079C */ Boss07 *unk_79C;                   /* inferred */
    /* 0x07A0 */ ? unk_7A0;                         /* inferred */
    /* 0x07A0 */ char pad_7A0[0xC];
    /* 0x07AC */ ? unk_7AC;                         /* inferred */
    /* 0x07AC */ char pad_7AC[0x258];
    /* 0x0A04 */ ? unk_A04;                         /* inferred */
    /* 0x0A04 */ char pad_A04[0x258];
    /* 0x0C5C */ f32 unk_C5C;                       /* inferred */
    /* 0x0C60 */ char pad_C60[0x31C];               /* maybe part of unk_C5C[200]? */
    /* 0x0F7C */ s16 unk_F7C;                       /* inferred */
    /* 0x0F7E */ s16 unk_F7E;                       /* inferred */
    /* 0x0F80 */ f32 unk_F80;                       /* inferred */
    /* 0x0F84 */ f32 unk_F84;                       /* inferred */
    /* 0x0F88 */ f32 unk_F88;                       /* inferred */
    /* 0x0F8C */ char pad_F8C[0x8];                 /* maybe part of unk_F88[3]? */
    /* 0x0F94 */ ? unk_F94;                         /* inferred */
    /* 0x0F94 */ char pad_F94[0x8];
    /* 0x0F9C */ f32 unk_F9C;                       /* inferred */
    /* 0x0FA0 */ f32 unk_FA0;                       /* inferred */
    /* 0x0FA4 */ GlobalContext *unk_FA4;            /* inferred */
    /* 0x0FA8 */ Boss07 *unk_FA8;                   /* inferred */
    /* 0x0FAC */ ? unk_FAC;                         /* inferred */
    /* 0x0FAC */ char pad_FAC[0xC];
    /* 0x0FB8 */ ? unk_FB8;                         /* inferred */
    /* 0x0FB8 */ char pad_FB8[0x258];
    /* 0x1210 */ ? unk_1210;                        /* inferred */
    /* 0x1210 */ char pad_1210[0x258];
    /* 0x1468 */ f32 unk_1468;                      /* inferred */
    /* 0x146C */ char pad_146C[0x334];              /* maybe part of unk_1468[206]? */
    /* 0x17A0 */ f32 unk_17A0;                      /* inferred */
    /* 0x17A4 */ f32 unk_17A4;                      /* inferred */
    /* 0x17A8 */ f32 unk_17A8;                      /* inferred */
    /* 0x17AC */ f32 unk_17AC;                      /* inferred */
    /* 0x17B0 */ f32 unk_17B0;                      /* inferred */
    /* 0x17B4 */ f32 unk_17B4;                      /* inferred */
    /* 0x17B8 */ f32 unk_17B8;                      /* inferred */
    /* 0x17BC */ f32 unk_17BC;                      /* inferred */
    /* 0x17C0 */ f32 unk_17C0;                      /* inferred */
    /* 0x17C4 */ f32 unk_17C4;                      /* inferred */
    /* 0x17C8 */ f32 unk_17C8;                      /* inferred */
    /* 0x17CC */ f32 unk_17CC;                      /* inferred */
    /* 0x17D0 */ f32 unk_17D0;                      /* inferred */
    /* 0x17D4 */ f32 unk_17D4;                      /* inferred */
    /* 0x17D8 */ s16 unk_17D8;                      /* inferred */
    /* 0x17DA */ s16 unk_17DA;                      /* inferred */
    /* 0x17DC */ s16 unk_17DC;                      /* inferred */
    /* 0x17DE */ char pad_17DE[0x2];
    /* 0x17E0 */ f32 unk_17E0;                      /* inferred */
    /* 0x17E4 */ f32 unk_17E4;                      /* inferred */
    /* 0x17E8 */ f32 unk_17E8;                      /* inferred */
    /* 0x17EC */ f32 unk_17EC;                      /* inferred */
    /* 0x17F0 */ f32 unk_17F0;                      /* inferred */
    /* 0x17F4 */ f32 unk_17F4;                      /* inferred */
    /* 0x17F8 */ f32 unk_17F8;                      /* inferred */
    /* 0x17FC */ f32 unk_17FC;                      /* inferred */
    /* 0x1800 */ f32 unk_1800;                      /* inferred */
    /* 0x1804 */ u8 unk_1804;                       /* inferred */
    /* 0x1805 */ char pad_1805[0x3];                /* maybe part of unk_1804[4]? */
    /* 0x1808 */ s8 unk_1808;                       /* inferred */
    /* 0x1809 */ char pad_1809[0x3];                /* maybe part of unk_1808[4]? */
    /* 0x180C */ f32 unk_180C;                      /* inferred */
    /* 0x1810 */ f32 unk_1810;                      /* inferred */
    /* 0x1814 */ f32 unk_1814;                      /* inferred */
    /* 0x1818 */ f32 unk_1818;                      /* inferred */
    /* 0x181C */ s16 unk_181C;                      /* inferred */
    /* 0x181E */ char pad_181E[0x2];
    /* 0x1820 */ ColliderCylinder unk_1820;         /* inferred */
    /* 0x186C */ char pad_186C[0x4];
    /* 0x1870 */ f32 unk_1870;                      /* inferred */
    /* 0x1874 */ s8 unk_1874;                       /* inferred */
    /* 0x1875 */ char pad_1875[0xF];                /* maybe part of unk_1874[16]? */
    /* 0x1884 */ s32 unk_1884;                      /* inferred */
    /* 0x1888 */ u8 unk_1888;                       /* inferred */
    /* 0x1889 */ char pad_1889[0x3];                /* maybe part of unk_1888[4]? */
    /* 0x188C */ f32 unk_188C;                      /* inferred */
    /* 0x1890 */ f32 unk_1890;                      /* inferred */
    /* 0x1894 */ f32 unk_1894;                      /* inferred */
    /* 0x1898 */ f32 unk_1898;                      /* inferred */
    /* 0x189C */ f32 unk_189C;                      /* inferred */
    /* 0x18A0 */ f32 unk_18A0;                      /* inferred */
    /* 0x18A4 */ f32 unk_18A4;                      /* inferred */
    /* 0x18A8 */ Vec3f unk_18A8;                    /* inferred */
    /* 0x18B4 */ Vec3f unk_18B4;                    /* inferred */
    /* 0x18C0 */ f32 unk_18C0;                      /* inferred */
    /* 0x18C4 */ s16 unk_18C4;                      /* inferred */
    /* 0x18C6 */ s16 unk_18C6;                      /* inferred */
    /* 0x18C8 */ s16 unk_18C8;                      /* inferred */
    /* 0x18CA */ char pad_18CA[0x2];
    /* 0x18CC */ f32 unk_18CC;                      /* inferred */
    /* 0x18D0 */ f32 unk_18D0;                      /* inferred */
    /* 0x18D4 */ s16 unk_18D4;                      /* inferred */
    /* 0x18D6 */ s16 unk_18D6;                      /* inferred */
    /* 0x18D8 */ s16 unk_18D8;                      /* inferred */
    /* 0x18DA */ u8 unk_18DA;                       /* inferred */
    /* 0x18DB */ u8 unk_18DB;                       /* inferred */
    /* 0x18DC */ s32 unk_18DC;                      /* inferred */
    /* 0x18E0 */ f32 unk_18E0;                      /* inferred */
    /* 0x18E4 */ s32 unk_18E4;                      /* inferred */
    /* 0x18E8 */ f32 unk_18E8;                      /* inferred */
    /* 0x18EC */ s8 unk_18EC;                       /* inferred */
    /* 0x18ED */ char pad_18ED[0x3];                /* maybe part of unk_18EC[4]? */
    /* 0x18F0 */ ColliderQuad unk_18F0;             /* inferred */
    /* 0x1970 */ ColliderQuad unk_1970;             /* inferred */
    /* 0x19F0 */ char pad_19F0[0x9150];             /* maybe part of unk_1970[291]? */
    /* 0xAB40 */ s16 unk_AB40;                      /* inferred */
    /* 0xAB42 */ char pad_AB42[0x2];
    /* 0xAB44 */ f32 unk_AB44;                      /* inferred */
    /* 0xAB48 */ u8 unk_AB48;                       /* inferred */
    /* 0xAB49 */ char pad_AB49[0x3];                /* maybe part of unk_AB48[4]? */
    /* 0xAB4C */ f32 unk_AB4C;                      /* inferred */
    /* 0xAB50 */ f32 unk_AB50;                      /* inferred */
    /* 0xAB54 */ char pad_AB54[0x74];               /* maybe part of unk_AB50[30]? */
    /* 0xABC8 */ u32 unk_ABC8;                      /* inferred */
    /* 0xABCC */ s32 unk_ABCC;                      /* inferred */
    /* 0xABD0 */ s16 unk_ABD0;                      /* inferred */
    /* 0xABD2 */ s16 unk_ABD2;                      /* inferred */
    /* 0xABD4 */ Vec3f unk_ABD4;                    /* inferred */
    /* 0xABE0 */ Vec3f unk_ABE0;                    /* inferred */
    /* 0xABEC */ f32 unk_ABEC;                      /* inferred */
    /* 0xABF0 */ f32 unk_ABF0;                      /* inferred */
    /* 0xABF4 */ f32 unk_ABF4;                      /* inferred */
    /* 0xABF8 */ f32 unk_ABF8;                      /* inferred */
    /* 0xABFC */ f32 unk_ABFC;                      /* inferred */
    /* 0xAC00 */ f32 unk_AC00;                      /* inferred */
    /* 0xAC04 */ f32 unk_AC04;                      /* inferred */
    /* 0xAC08 */ f32 unk_AC08;                      /* inferred */
    /* 0xAC0C */ f32 unk_AC0C;                      /* inferred */
    /* 0xAC10 */ char pad_AC10[0x4];
    /* 0xAC14 */ f32 unk_AC14;                      /* inferred */
    /* 0xAC18 */ char pad_AC18[0x8];                /* maybe part of unk_AC14[3]? */
} Boss07;                                           /* size = 0xAC20 */

struct _mips2c_stack_Boss07_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Boss07_Draw {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ ? *sp4C;                             /* inferred */
    /* 0x50 */ ? *sp50;                             /* inferred */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ GraphicsContext *sp68;               /* inferred */
    /* 0x6C */ char pad_6C[0xC];
};                                                  /* size = 0x78 */

struct _mips2c_stack_Boss07_Init {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ActorContext *sp44;                  /* inferred */
    /* 0x48 */ s16 *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_Boss07_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ void (*sp2C)(Boss07 *, GlobalContext *); /* inferred */
    /* 0x30 */ char pad_30[0x14];                   /* maybe part of sp2C[6]? */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ s32 sp74;                            /* inferred */
    /* 0x78 */ Actor *sp78;                         /* inferred */
    /* 0x7C */ char pad_7C[0x4];
    /* 0x80 */ Boss07 *sp80;                        /* inferred */
    /* 0x84 */ char pad_84[0x4];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_809F4980 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F49A0 {};              /* size 0x0 */

struct _mips2c_stack_func_809F49C0 {};              /* size 0x0 */

struct _mips2c_stack_func_809F4AE8 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F4BB0 {};              /* size 0x0 */

struct _mips2c_stack_func_809F4C40 {};              /* size 0x0 */

struct _mips2c_stack_func_809F4CBC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F4D10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F4D54 {
    /* 0x00 */ char pad_0[0x98];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char pad_BC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_809F4FAC {};              /* size 0x0 */

struct _mips2c_stack_func_809F4FF8 {
    /* 0x00 */ char pad_0[0x98];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char pad_BC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_809F51E8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F52CC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F536C {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x14];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_809F5494 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809F5E14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F5E88 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ SkelAnime *sp40;                     /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ Camera *sp48;                        /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809F64F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F65F4 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ f32 *sp44;                           /* inferred */
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ char pad_4C[0x10];                   /* maybe part of sp48[5]? */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0xC];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0x10];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x4];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ s32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x4];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_809F7400 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F748C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F7688 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F76D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F77A8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F783C {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809F7968 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F7AB4 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809F7BC4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F7D2C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F805C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F8658 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F86B8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F87C8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809F8908 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809F8AB0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F8B1C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ SkelAnime *sp3C;                     /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809F8D04 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F8DEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F8E68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F8EC8 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809F91D4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F9280 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void (*sp24)(Actor *, GlobalContext *); /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F93DC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F94AC {
    /* 0x00 */ char pad_0[0x68];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x10];                   /* maybe part of sp68[5]? */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x10];                   /* maybe part of sp84[5]? */
    /* 0x98 */ u32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x4];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_809F99C4 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809F9CEC {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_809F9E94 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809FAA44 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ ? spB8;                              /* inferred */
    /* 0xB8 */ char pad_B8[0x8];
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x24];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_809FB114 {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ ? *sp74;                             /* inferred */
    /* 0x78 */ ? *sp78;                             /* inferred */
    /* 0x7C */ char pad_7C[0x14];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_809FB504 {};              /* size 0x0 */

struct _mips2c_stack_func_809FB55C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s8 *sp18;                            /* inferred */
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0x40];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xF];
    /* 0x6B */ s8 sp6B;                             /* inferred */
    /* 0x6C */ char pad_6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_809FB728 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FB7D4 {
    /* 0x00 */ char pad_0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809FBB9C {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ void *sp58;                          /* inferred */
    /* 0x5C */ char pad_5C[0x44];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_809FBF94 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad_28[0xC];                    /* maybe part of sp24[4]? */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x14];                   /* maybe part of sp34[6]? */
    /* 0x4C */ Player *sp4C;                        /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809FC4C0 {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ u8 *sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x10];                   /* maybe part of sp7C[5]? */
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x14];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_809FC8B0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809FC960 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x10];                   /* maybe part of sp1C[5]? */
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809FCBC8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809FCC70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FCCCC {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 *sp34;                           /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ f32 *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ SkelAnime *sp4C;                     /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ Camera *sp54;                        /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809FD5F8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809FD710 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809FD818 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FD89C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809FD984 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809FDAB0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809FDB2C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FDBA0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ u32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809FDEDC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FDF54 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ SkelAnime *sp3C;                     /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809FE068 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FE0E4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809FE2D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FE348 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809FE4B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FE524 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809FE6B0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809FE734 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ SkelAnime *sp40;                     /* inferred */
    /* 0x44 */ char pad_44[0x7];                    /* maybe part of sp40[2]? */
    /* 0x4B */ u8 sp4B;                             /* inferred */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809FEE70 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809FF0E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FF12C {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Collider *sp44;                      /* inferred */
    /* 0x48 */ CollisionCheckContext *sp48;         /* inferred */
    /* 0x4C */ char pad_4C[0x14];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809FF5CC {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Actor *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809FF678 {};              /* size 0x0 */

struct _mips2c_stack_func_809FF6B0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809FF810 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FF900 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809FFA04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FFA80 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809FFE64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809FFEAC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A0021C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A00274 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A00484 {};              /* size 0x0 */

struct _mips2c_stack_func_80A00554 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A006D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A006F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A00720 {
    /* 0x000 */ char pad_0[0x88];
    /* 0x088 */ f32 sp88;                           /* inferred */
    /* 0x08C */ Vec3f *sp8C;                        /* inferred */
    /* 0x090 */ CollisionContext *sp90;             /* inferred */
    /* 0x094 */ char pad_94[0x10];                  /* maybe part of sp90[5]? */
    /* 0x0A4 */ f32 spA4;                           /* inferred */
    /* 0x0A8 */ f32 spA8;                           /* inferred */
    /* 0x0AC */ f32 spAC;                           /* inferred */
    /* 0x0B0 */ f32 spB0;                           /* inferred */
    /* 0x0B4 */ f32 spB4;                           /* inferred */
    /* 0x0B8 */ f32 spB8;                           /* inferred */
    /* 0x0BC */ f32 spBC;                           /* inferred */
    /* 0x0C0 */ f32 spC0;                           /* inferred */
    /* 0x0C4 */ f32 spC4;                           /* inferred */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ f32 spCC;                           /* inferred */
    /* 0x0D0 */ f32 spD0;                           /* inferred */
    /* 0x0D4 */ f32 spD4;                           /* inferred */
    /* 0x0D8 */ f32 spD8;                           /* inferred */
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ f32 spE0;                           /* inferred */
    /* 0x0E4 */ f32 spE4;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ char pad_EC[0x4];
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ f32 spF8;                           /* inferred */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ f32 sp108;                          /* inferred */
    /* 0x10C */ f32 sp10C;                          /* inferred */
    /* 0x110 */ f32 sp110;                          /* inferred */
    /* 0x114 */ char pad_114[0x4];
    /* 0x118 */ s16 sp118;                          /* inferred */
    /* 0x11A */ s16 sp11A;                          /* inferred */
    /* 0x11C */ char pad_11C[0x4];                  /* maybe part of sp11A[3]? */
    /* 0x120 */ f32 sp120;                          /* inferred */
    /* 0x124 */ f32 sp124;                          /* inferred */
    /* 0x128 */ f32 sp128;                          /* inferred */
    /* 0x12C */ f32 sp12C;                          /* inferred */
    /* 0x130 */ f32 sp130;                          /* inferred */
    /* 0x134 */ f32 sp134;                          /* inferred */
    /* 0x138 */ f32 sp138;                          /* inferred */
    /* 0x13C */ f32 sp13C;                          /* inferred */
    /* 0x140 */ f32 sp140;                          /* inferred */
    /* 0x144 */ u32 sp144;                          /* inferred */
    /* 0x148 */ char pad_148[0x3];
    /* 0x14B */ u8 sp14B;                           /* inferred */
    /* 0x14C */ f32 sp14C;                          /* inferred */
    /* 0x150 */ f32 sp150;                          /* inferred */
    /* 0x154 */ f32 sp154;                          /* inferred */
    /* 0x158 */ CollisionPoly *sp158;               /* inferred */
    /* 0x15C */ char pad_15C[0x4];
    /* 0x160 */ f32 sp160;                          /* inferred */
    /* 0x164 */ f32 sp164;                          /* inferred */
    /* 0x168 */ f32 sp168;                          /* inferred */
    /* 0x16C */ f32 sp16C;                          /* inferred */
    /* 0x170 */ f32 sp170;                          /* inferred */
    /* 0x174 */ f32 sp174;                          /* inferred */
    /* 0x178 */ s16 sp178;                          /* inferred */
    /* 0x17A */ char pad_17A[0x6];                  /* maybe part of sp178[4]? */
    /* 0x180 */ f32 sp180;                          /* inferred */
    /* 0x184 */ char pad_184[0xC];
};                                                  /* size = 0x190 */

struct _mips2c_stack_func_80A016E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A01750 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Vec3f *sp40;                         /* inferred */
    /* 0x44 */ char pad_44[0xC];                    /* maybe part of sp40[4]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ Camera *sp5C;                        /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0xC];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0xC];
    /* 0x84 */ s32 sp84;                            /* inferred */
    /* 0x88 */ Actor *sp88;                         /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80A025AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A0264C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ f32 *sp40;                           /* inferred */
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ f32 *sp48;                           /* inferred */
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ Actor *sp6C;                         /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80A02B30 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x3];
    /* 0x27 */ u8 sp27;                             /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A02C54 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderQuad *sp2C;                  /* inferred */
    /* 0x30 */ ColliderQuad *sp30;                  /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0xC];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0xC];
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad_90[0xC];
    /* 0x9C */ ? sp9C;                              /* inferred */
    /* 0x9C */ char pad_9C[0xC];
    /* 0xA8 */ Actor *spA8;                         /* inferred */
    /* 0xAC */ char pad_AC[0xC];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A03238 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 *sp7C;                           /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x24];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80A036C4 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80A03868 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? *sp2C;                             /* inferred */
    /* 0x30 */ MtxF *sp30;                          /* inferred */
    /* 0x34 */ s32 *sp34;                           /* inferred */
    /* 0x38 */ ? *sp38;                             /* inferred */
    /* 0x3C */ char pad_3C[0x10];                   /* maybe part of sp38[5]? */
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ char pad_64[0x8];                    /* maybe part of sp60[3]? */
    /* 0x6C */ Gfx *sp6C;                           /* inferred */
    /* 0x70 */ char pad_70[0x8];                    /* maybe part of sp6C[3]? */
    /* 0x78 */ Gfx *sp78;                           /* inferred */
    /* 0x7C */ char pad_7C[0x8];                    /* maybe part of sp78[3]? */
    /* 0x84 */ Gfx *sp84;                           /* inferred */
    /* 0x88 */ char pad_88[0x4];
    /* 0x8C */ Gfx *sp8C;                           /* inferred */
    /* 0x90 */ char pad_90[0xC];                    /* maybe part of sp8C[4]? */
    /* 0x9C */ Gfx *sp9C;                           /* inferred */
    /* 0xA0 */ char pad_A0[0x18];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A03F18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A03F5C {
    /* 0x00 */ char pad_0[0x90];
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad_90[0xC];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0x24];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80A0434C {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ColliderCylinder *sp38;              /* inferred */
    /* 0x3C */ ActorContext *sp3C;                  /* inferred */
    /* 0x40 */ Actor *sp40;                         /* inferred */
    /* 0x44 */ char pad_44[0xC];                    /* maybe part of sp40[4]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A045A8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A04768 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A04878 {};              /* size 0x0 */

struct _mips2c_stack_func_80A04890 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3s *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A04DE0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A04E5C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ CollisionCheckContext *sp3C;         /* inferred */
    /* 0x40 */ ColliderCylinder *sp40;              /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x4];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ s16 sp7C;                            /* inferred */
    /* 0x7E */ s16 sp7E;                            /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80A055E0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A05608 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ CollisionCheckContext *sp20;         /* inferred */
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A05694 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A057A0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x1C];                   /* maybe part of sp30[8]? */
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ char pad_54[0xC];                    /* maybe part of sp50[4]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80A05AF8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A05B50 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A05C88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A05DDC {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
    /* 0x40 */ char pad_40[0x8];                    /* maybe part of sp3C[3]? */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A06500 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A06990 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ u32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A06C64 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A06E24 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A06F48 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ActorContext *sp28;                  /* inferred */
    /* 0x2C */ char pad_2C[0x1C];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A07604 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A07638 {};              /* size 0x0 */

struct _mips2c_stack_func_80A07740 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

? EffectSsKFire_Spawn(GlobalContext *, f32 *, Vec3f *, f32 *, s32, s32); /* extern */
? func_800AEF44(void *);                            /* extern */
s32 func_8012405C(GlobalContext *);                 /* extern */
? func_8016566C(s16, Boss07 *);                     /* extern */
? func_80165690();                                  /* extern */
? func_8019FE1C(Vec3f *, ?, ?);                     /* extern */
? func_8019FE74(? *, ?, ?);                         /* extern */
? func_801A479C(Vec3f *, ?, ?);                     /* extern */
void func_809F4980(Actor *arg0, s16, GlobalContext *); /* static */
void func_809F49A0(s32 arg0, s32 arg1, s32 arg2);   /* static */
f32 func_809F49C0();                                /* static */
void func_809F4AE8(GlobalContext *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4); /* static */
void func_809F4BB0(s8 arg0, void *arg1, ? *arg2, s8); /* static */
s32 func_809F4C40(Boss07 *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
void func_809F4CBC(Boss07 *arg0, f32 arg1);         /* static */
void func_809F4D10(Vec3f *arg0, f32 arg1, s16);     /* static */
void func_809F4D54(Boss07 *arg0, GlobalContext *arg1, s32 arg2, u8 arg3); /* static */
void func_809F4FAC(GlobalContext *arg0);            /* static */
void func_809F4FF8(GlobalContext *arg0, PosRot *arg1, s32 arg2, void *, ?); /* static */
void func_809F51E8(Boss07 *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_809F52CC(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809F536C(void *arg0, void *arg1, Vec3f *arg2); /* static */
void func_809F5494(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809F5E14(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809F64F4(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809F7400(Boss07 *arg0, GlobalContext *arg1, s16 arg2); /* static */
void func_809F7688(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809F783C(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809F7AB4(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809F7D2C(Boss07 *arg0, GlobalContext *arg1, GlobalContext *, GlobalContext *, GlobalContext *); /* static */
void func_809F8658(Boss07 *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_809F8AB0(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809F8DEC(Actor *arg0, GlobalContext *arg1, u8); /* static */
void func_809F8E68(Boss07 *arg0, GlobalContext *arg1, Boss07 *, GlobalContext *, GlobalContext *); /* static */
void func_809F9280(Actor *arg0, GlobalContext *arg1, u8 arg2, u8 arg3); /* static */
void func_809F93DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_809F94AC(? *arg0, f32 arg1, Actor *arg2, GlobalContext *arg3); /* static */
void func_809F99C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_809F9CEC(Actor *arg0, GlobalContext *arg1); /* static */
void func_809F9E94(Actor *arg0, GlobalContext *);   /* static */
void func_809FAA44(Boss07 *arg0, GlobalContext *arg1, ? *arg2, ? *arg3, ? *arg4, f32 *arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, ? *argA, s16 argB, f32 argC, s32 argD); /* static */
void func_809FB114(Boss07 *arg0, GraphicsContext **arg1, ? *arg2, ? *arg3, f32 arg4, s32 arg5); /* static */
s32 func_809FB504(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809FB55C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809FB728(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_809FB7D4(Boss07 *arg0, GraphicsContext **arg1); /* static */
void func_809FBB9C(Boss07 *arg0, GraphicsContext **arg1, f32 *arg2); /* static */
void func_809FBF94(Actor *arg0, GlobalContext *arg1); /* static */
void func_809FC4C0(Boss07 *arg0, Gfx *arg1, f32 arg2); /* static */
void func_809FC8B0(Gfx *arg0, Boss07 *arg1, GlobalContext *arg2); /* static */
void func_809FC960(Gfx *arg0, Boss07 *arg1, GlobalContext *arg2); /* static */
void func_809FCBC8(Boss07 *arg0);                   /* static */
void func_809FCC70(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809FD5F8(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809FD818(Actor *arg0, GlobalContext *arg1, s16 arg2); /* static */
void func_809FD984(Actor *arg0, GlobalContext *arg1, u8 arg2, u8 arg3); /* static */
void func_809FDB2C(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809FDBA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809FDEDC(Actor *arg0, GlobalContext *arg1); /* static */
void func_809FE068(Actor *arg0, GlobalContext *arg1); /* static */
void func_809FE2D4(Actor *arg0, GlobalContext *arg1); /* static */
void func_809FE4B0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809FE6B0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809FEE70(Actor *arg0, GlobalContext *arg1); /* static */
void func_809FF0E4(Actor *this, GlobalContext *globalCtx); /* static */
void func_809FF12C(Actor *this, GlobalContext *globalCtx); /* static */
void func_809FF5CC(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_809FF678(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809FF6B0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809FF810(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_809FF900(Actor *this, GlobalContext *globalCtx); /* static */
void func_809FFA04(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_809FFE64(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_80A0021C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A00484(Boss07 *arg0, GlobalContext *arg1, u8 arg2, void *arg3); /* static */
void func_80A006D0(Boss07 *arg0);                   /* static */
void func_80A006F4(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_80A016E4(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_80A025AC(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_80A02B30(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A02C54(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A03238(Actor *arg0, GlobalContext *arg1, void *arg2, void *arg3, void *arg4, f32 *arg5, ? *arg6, f32 arg7, u8 arg8, f32 arg9); /* static */
void func_80A036C4(Actor *arg0, GraphicsContext **arg1, void *arg2, void *arg3, f32 arg4, f32 arg5); /* static */
void func_80A03868(Actor *arg0, GraphicsContext **arg1); /* static */
void func_80A03F18(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80A03F5C(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A0434C(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A045A8(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A04768(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A04878(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_80A04DE0(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_80A055E0(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80A05694(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A057A0(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A05AF8(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_80A05C88(Boss07 *arg0, GlobalContext *arg1); /* static */
void func_80A06500(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A06990(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A06C64(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A06E24(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A06F48(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A07604(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A07638(GlobalContext *arg0);            /* static */
void func_80A07740(GlobalContext *arg0);            /* static */
extern ? D_040233B8;
extern ? D_04023428;
extern AnimationHeader D_06000194;
extern AnimationHeader D_06000428;
extern AnimationHeader D_06000D0C;
extern AnimationHeader D_06002C40;
extern AnimationHeader D_06002D84;
extern AnimationHeader D_060031E4;
extern AnimationHeader D_06003854;
extern AnimationHeader D_06003A64;
extern FlexSkeletonHeader D_060099A0;
extern AnimationHeader D_06009C7C;
extern AnimationHeader D_06009EA8;
extern AnimationHeader D_0600A194;
extern AnimationHeader D_0600A400;
extern AnimationHeader D_0600A6AC;
extern AnimationHeader D_0600AE40;
extern ? D_0600AFB0;
extern ? D_0600B020;
extern ? D_0600C7D8;
extern ? D_0600CEE8;
extern ? D_060149A0;
extern ? D_06016090;
extern ? D_06017DE0;
extern ? D_06019328;
extern SkeletonHeader D_06019C58;
extern AnimationHeader D_06019E48;
extern AnimationHeader D_0601DEB4;
extern AnimationHeader D_06022BB4;
extern AnimationHeader D_06023DAC;
extern AnimationHeader D_06025018;
extern AnimationHeader D_06025878;
extern AnimationHeader D_06026204;
extern AnimationHeader D_060269EC;
extern AnimationHeader D_06026EA0;
extern AnimationHeader D_06027270;
extern ? D_0602EE50;
extern ? D_0602EEC8;
extern ? D_0602EEF8;
extern ? D_0602EF68;
extern ? D_0602EF88;
extern ? D_0602EFE8;
extern ? D_0602F640;
extern void D_0602F840;
extern void D_06030C40;
extern void D_06032040;
extern FlexSkeletonHeader D_060335F0;
extern AnimationHeader D_06033F80;
extern AnimationHeader D_06034E64;
extern AnimationHeader D_060358C4;
extern AnimationHeader D_06036A7C;
extern AnimationHeader D_06037ADC;
extern AnimationHeader D_0603918C;
extern AnimationHeader D_0603B330;
extern AnimationHeader D_0603C4E0;
extern AnimationHeader D_0603CBD0;
extern AnimationHeader D_0603D224;
extern AnimationHeader D_0603D7F0;
extern AnimationHeader D_0603DD1C;
extern ? D_0603DD30;
extern ? D_0603ED30;
extern ? D_0603F130;
extern ? D_06040130;
extern ? D_06040930;
extern ? D_06040B30;
extern ? D_06041B30;
extern ? D_06042330;
extern ? D_06043330;
extern ? D_801D6654;
extern s8 D_801F4E32;
extern ? D_801F4E38;
extern f32 D_801F4E44;
extern f32 D_801F4E48;
extern s16 D_801F4E4C;
static s16 D_80A07950 = 0xFF;
static s16 D_80A07952 = 0xFF;
static s16 D_80A07954[10] = {0x64, 0xFF, 0x64, 0x64, 0x64, 0xFF, 0x64, 0x64, 0x64, 0xFF};
static ? D_80A07968;                                /* unable to generate initializer */
static DamageTable D_80A07980 = {
    {
        0,
        0xF1,
        0,
        0xF2,
        0xF1,
        0xF1,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0x22,
        0x32,
        0x42,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF2,
        0x92,
        0,
        0,
        0,
        0,
        0,
        0xF2,
    },
};
static DamageTable D_80A079A0 = {
    {
        0,
        0xF1,
        0,
        0xC1,
        0xF1,
        0xF1,
        0,
        0,
        0xE1,
        0xE1,
        0xF1,
        0x22,
        0x32,
        0x42,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xA0,
        0,
        0,
        0xF1,
        0xF1,
        0xD1,
        0x92,
        0,
        0,
        0,
        0,
        0,
        0xC4,
    },
};
static DamageTable D_80A079C0 = {
    {
        0,
        0xE1,
        0,
        0xC1,
        0xF1,
        0xF1,
        0,
        0,
        0xE1,
        0xE1,
        0xF1,
        0x22,
        0x32,
        0x42,
        0xE1,
        0xE1,
        0xF1,
        0xE1,
        0,
        0xA0,
        0,
        0,
        0xF1,
        0xE1,
        0xD1,
        0x92,
        0,
        0,
        0,
        0,
        0,
        0xC2,
    },
};
static DamageTable D_80A079E0 = {
    {
        0,
        0xF1,
        0,
        0xE2,
        0xF1,
        0xF1,
        0,
        0,
        0xE1,
        0xE1,
        0xF1,
        0x22,
        0x32,
        0x42,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xD1,
        0x92,
        0,
        0,
        0,
        0,
        0,
        0xE2,
    },
};
static DamageTable D_80A07A00 = {
    {
        0,
        0xD1,
        0xE1,
        0xB1,
        0xF1,
        0xF1,
        0,
        0xE1,
        0xE1,
        0xD1,
        0,
        0xE1,
        0xE1,
        0xE1,
        0xC1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0xD1,
        0xD1,
        0xE1,
        0xE1,
        0xA1,
        0xA1,
        0,
        0,
        0,
        0,
        0,
        0xB2,
    },
};
static ColliderJntSphElementInit D_80A07A40[2] = {
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {0, {{0, 0, 0}, 0x14}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0x1E}, 0x64},
    },
}; /* extra bytes: 1 */
static ? D_80A07A8C;                                /* unable to generate initializer */
static ? D_80A07A90;                                /* unable to generate initializer */
static ColliderJntSphInit D_80A07BCC = {{3, 0x11, 9, 9, 0x10, 0}, 0xB, &D_80A07A40};
static ColliderCylinderInit D_80A07BDC = {
    {9, 0x11, 9, 0x39, 0x10, 1},
    {2, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
    {0x50, 0xC8, 0, {0, 0, 0}},
};
static ColliderJntSphElementInit D_80A07C08 = {
    {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CEFFFE, 0, 0}, 9, 1, 1},
    {0, {{0, 0, 0}, 0x24}, 0xC8},
};
static ColliderJntSphInit D_80A07C2C = {{3, 0x11, 9, 9, 0x10, 0}, 1, &D_80A07C08};
static ColliderQuadInit D_80A07C3C = {
    {9, 0x11, 0xD, 0x39, 0x10, 3},
    {2, {0xF7CFFFFF, 4, 0}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static ColliderQuadInit D_80A07C8C = {
    {3, 0x11, 9, 0x39, 0x10, 3},
    {2, {0xF7CFFFFF, 4, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static ColliderJntSphElementInit D_80A07CDC[11] = {
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {0, {{0, 0, 0}, 0x19}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0x28}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0}, 0},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x96},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x96},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x96},
    },
    {
        {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CEFFFE, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x96},
    },
};
static ColliderJntSphInit D_80A07E68 = {{3, 0x11, 9, 9, 0x10, 0}, 0xB, &D_80A07CDC};
static ColliderCylinderInit D_80A07E78 = {
    {0xA, 0x11, 9, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 4, 0x10}, {0x300000, 0, 0}, 1, 1, 1},
    {0xF, 0x1E, 0xFFF1, {0, 0, 0}},
};
static ColliderCylinderInit D_80A07EA4 = {
    {9, 0x11, 9, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 5, 1},
    {0x32, 0x64, 0xFFCE, {0, 0, 0}},
};
static ColliderCylinderInit D_80A07ED0 = {
    {9, 0x11, 0xD, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 4, 0x10}, {0xF7FFFFFF, 0, 0}, 1, 5, 1},
    {0x28, 0x14, 0xF, {0, 0, 0}},
};
static Color_RGBA8 D_80A07EFC = {0x3C, 0x32, 0x14, 0xFF};
static Color_RGBA8 D_80A07F00 = {0x28, 0x1E, 0x1E, 0xFF};
static Color_RGBA8 D_80A07F04 = {0x3C, 0x32, 0x14, 0xFF};
static Color_RGBA8 D_80A07F08 = {0x28, 0x1E, 0x1E, 0xFF};
static ? D_80A07F0C;                                /* unable to generate initializer */
static ? D_80A07F3C;                                /* unable to generate initializer */
static s16 D_80A07F54[4] = {0xC8, 0xC9, 0xCA, 0xCB};
static void D_80A07F5C;                             /* unable to generate initializer */
static void D_80A07F64;                             /* unable to generate initializer */
static ? D_80A07F6C;                                /* unable to generate initializer */
static ? D_80A07FA8;                                /* unable to generate initializer */
static ? D_80A07FB4;                                /* unable to generate initializer */
static ? D_80A07FC0;                                /* unable to generate initializer */
static Color_RGBA8 D_80A07FCC = {0xAA, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80A07FD0 = {0xC8, 0xC8, 0xFF, 0xFF};
static Vec3f D_80A07FD4 = {0.0f, -1.0f, 0.0f};
static ? D_80A07FE0;                                /* unable to generate initializer */
static ? D_80A07FEC;                                /* unable to generate initializer */
static ? D_80A07FF8;                                /* unable to generate initializer */
static ? D_80A07FFD;                                /* unable to generate initializer */
static ? D_80A07FFF;                                /* unable to generate initializer */
static ? D_80A08002;                                /* unable to generate initializer */
static ? D_80A08004;                                /* unable to generate initializer */
static ? D_80A08006;                                /* unable to generate initializer */
static ? D_80A0800C;                                /* unable to generate initializer */
static ? D_80A08090;                                /* unable to generate initializer */
static Vec3f D_80A080B0 = {1000.0f, 100.0f, 0.0f};
static s32 D_80A080BC[6] = {1, 2, 3, 3, 2, 1};
static s32 D_80A080D4[7] = {2, 3, 4, 4, 4, 3, 2};
static s32 D_80A080F0[8] = {2, 3, 4, 4, 4, 4, 3, 2};
static s32 D_80A08110[12] = {2, 4, 5, 5, 6, 6, 6, 6, 5, 5, 4, 2};
static ? D_80A08140;                                /* unable to generate initializer */
static ? D_80A0817C;                                /* unable to generate initializer */
static ? D_80A0818C;                                /* unable to generate initializer */
static ? D_80A08198;                                /* unable to generate initializer */
static ? D_80A081A0;                                /* unable to generate initializer */
static ? D_80A081A8;                                /* unable to generate initializer */
static ? D_80A081C8;                                /* unable to generate initializer */
static ? D_80A081E8;                                /* unable to generate initializer */
static ? D_80A0826C;                                /* unable to generate initializer */
static ? D_80A0828C;                                /* unable to generate initializer */
static ? D_80A082A4;                                /* unable to generate initializer */
static ? D_80A082BC;                                /* unable to generate initializer */
static ? D_80A082C8;                                /* unable to generate initializer */
static ? D_80A082D4;                                /* unable to generate initializer */
static ? D_80A082E0;                                /* unable to generate initializer */
static Vec3f D_80A09A40;
static u8 D_80A09A4C;
static s32 D_80A09A50;
static Boss07 *D_80A09A54;
static Boss07 *D_80A09A58;
static Boss07 *D_80A09A5C;
static Actor *D_80A09A60;
static void *D_80A09A64;
static void *D_80A09A68;
static void *D_80A09A6C;
static u8 D_80A09A70;
static u8 D_80A09A71;
static void D_80A09A78;
static s32 D_80A0A888;
static s32 D_80A0A88C;
static s32 D_80A0A890;
static f32 D_80A084D8[3] = {3.1415927f, 0.2f, 0.2f}; /* const */
static f32 D_80A08634[2] = {0.2f, 0.85f};           /* const */

void func_809F4980(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x3A0CU);
}

void func_809F49A0(s32 arg0, s32 arg1, s32 arg2) {
    D_80A0A888 = arg0;
    D_80A0A88C = arg1;
    D_80A0A890 = arg2;
}

f32 func_809F49C0(void) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s32 temp_f16;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_t7;
    f32 phi_f2;
    f32 phi_f2_2;

    temp_hi = (s32) (D_80A0A888 * 0xAB) % 0x763D;
    temp_hi_2 = (s32) (D_80A0A88C * 0xAC) % 0x7663;
    temp_f16 = temp_hi_2;
    temp_t7 = (s32) (D_80A0A890 * 0xAA) % 0x7673;
    temp_f6 = (f32) temp_hi;
    D_80A0A888 = temp_hi;
    D_80A0A88C = temp_hi_2;
    D_80A0A890 = temp_t7;
    temp_f2 = (temp_f6 / 30269.0f) + ((f32) temp_f16 / 30307.0f) + ((f32) temp_t7 / 30323.0f);
    phi_f2 = temp_f2;
    phi_f2_2 = temp_f2;
    if (temp_f2 >= 1.0f) {
        do {
            temp_f2_2 = phi_f2 - 1.0f;
            phi_f2 = temp_f2_2;
            phi_f2_2 = temp_f2_2;
        } while (temp_f2_2 >= 1.0f);
    }
    return fabsf(phi_f2_2);
}

void func_809F4AE8(GlobalContext *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4) {
    void *sp18;
    s32 temp_v1;
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0->specialEffects;
    phi_v1 = 0;
loop_1:
    temp_v1 = phi_v1 + 1;
    phi_v1 = temp_v1;
    if (phi_v0->unk_0 == 0) {
        phi_v0->unk_0 = 1U;
        phi_v0->unk_4 = (s32) arg1->unk_0;
        phi_v0->unk_8 = (s32) arg1->unk_4;
        phi_v0->unk_C = (s32) arg1->unk_8;
        phi_v0->unk_10 = (s32) arg2->unk_0;
        phi_v0->unk_14 = (s32) arg2->unk_4;
        phi_v0->unk_18 = (s32) arg2->unk_8;
        phi_v0->unk_1C = (s32) arg3->unk_0;
        phi_v0->unk_20 = (s32) arg3->unk_4;
        phi_v0->unk_24 = (s32) arg3->unk_8;
        phi_v0->unk_30 = 0;
        phi_v0->unk_2C = 0;
        phi_v0->unk_34 = (f32) (arg4 / 1000.0f);
        sp18 = phi_v0;
        phi_v0->unk_2 = (s16) (s32) Rand_ZeroFloat(1000.0f);
        return;
    }
    phi_v0 += 0x48;
    if (temp_v1 == 0x32) {
        return;
    }
    goto loop_1;
}

void func_809F4BB0(s8 arg0, void *arg1, ? *arg2) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = arg0 << 6;
    (arg1->unk_1C + temp_v0)->unk_30 = (s16) (s32) arg2->unk_0;
    (arg1->unk_1C + temp_v0)->unk_32 = (s16) (s32) arg2->unk_4;
    (arg1->unk_1C + temp_v0)->unk_34 = (s16) (s32) arg2->unk_8;
    temp_v1 = arg1->unk_1C + temp_v0;
    temp_v1->unk_36 = (s16) (s32) (temp_v1->unk_38 * (f32) temp_v1->unk_2E);
}

s32 func_809F4C40(Boss07 *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_v1;
    s32 phi_a0;
    s32 phi_v0;

    temp_v1 = arg0->actor.yawTowardsPlayer;
    temp_a2 = temp_v1 - arg0->actor.shape.rot.y;
    phi_a0 = (s32) temp_a2;
    if ((s32) temp_a2 < 0) {
        phi_a0 = -(s32) temp_a2;
    }
    if (phi_a0 < 0x3000) {
        temp_a0 = temp_v1 - (arg1->actorCtx.actorList[2].first->unk_BE + 0x8000);
        phi_v0 = (s32) temp_a0;
        if ((s32) temp_a0 < 0) {
            phi_v0 = -(s32) temp_a0;
        }
        if (phi_v0 < 0x3000) {
            return 1;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_809F4CBC(Boss07 *arg0, f32 arg1) {
    f32 *temp_a0;

    temp_a0 = arg0 + 0x70;
    arg0 = arg0;
    Math_ApproachZeroF(temp_a0, 1.0f, arg1);
    if ((arg0->actor.bgCheckFlags & 0x18) != 0) {
        arg0->actor.speedXZ = 0.0f;
    }
}

void func_809F4D10(Vec3f *arg0, f32 arg1) {
    SysMatrix_InsertYRotation_f(Rand_ZeroFloat(6.2831855f), 0);
    SysMatrix_GetStateTranslationAndScaledZ(arg1, arg0);
}

void func_809F4D54(Boss07 *arg0, GlobalContext *arg1, s32 arg2, u8 arg3) {
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f20;
    s32 temp_a2;
    s32 temp_s1;
    void *temp_s0;
    s32 phi_s1;

    temp_a2 = arg2 & 0xFF;
    if (((arg0->unk_14C & temp_a2) == 0) && ((temp_a2 == 0) || (arg0->actor.speedXZ > 1.0f))) {
        temp_s5 = &sp98;
        temp_s4 = &spA4;
        phi_s1 = 0;
        do {
            spA4 = randPlusMinusPoint5Scaled(5.0f);
            spA8 = Rand_ZeroFloat(2.0f) + 1.0f;
            spAC = randPlusMinusPoint5Scaled(5.0f);
            spA0 = 0.0f;
            sp98 = 0.0f;
            sp9C = -0.1f;
            spB4 = Rand_ZeroFloat(10.0f) + 3.0f;
            if (arg3 != 0) {
                spB0 = randPlusMinusPoint5Scaled(150.0f) + arg0->actor.focus.pos.x;
                spB8 = randPlusMinusPoint5Scaled(150.0f) + arg0->actor.focus.pos.z;
            } else {
                temp_s0 = arg0 + (phi_s1 * 0xC);
                spB8 = randPlusMinusPoint5Scaled(20.0f) + temp_s0->unk_1790;
                spB0 = randPlusMinusPoint5Scaled(20.0f) + temp_s0->unk_1788;
            }
            temp_f20 = Rand_ZeroFloat(150.0f);
            func_800B0EB0(arg1, (Vec3f *) &spB0, (Vec3f *) temp_s4, (Vec3f *) temp_s5, &D_80A07EFC, &D_80A07F00, (s16) (s32) (temp_f20 + 350.0f), (s16) 0xA, (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
            temp_s1 = (phi_s1 + 1) & 0xFF;
            phi_s1 = temp_s1;
        } while (temp_s1 < 2);
    }
}

void func_809F4FAC(GlobalContext *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    void *temp_v0;

    temp_v0 = arg0->actorCtx.actorList[2].first;
    temp_f0 = temp_v0->world.pos.x;
    temp_f2 = temp_v0->world.pos.z;
    if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < 6400.0f) {
        temp_v0->world.pos.z = 90.0f;
    }
}

void func_809F4FF8(GlobalContext *arg0, PosRot *arg1, s32 arg2) {
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f20;
    s32 temp_a2;
    s32 temp_s0;
    s32 phi_s0;

    temp_a2 = arg2 & 0xFF;
    phi_s0 = 0;
    if (temp_a2 > 0) {
        temp_s6 = &sp98;
        temp_s5 = &spA4;
        temp_s4 = &spB0;
        do {
            spA4 = randPlusMinusPoint5Scaled(3.0f);
            spA8 = Rand_ZeroFloat(2.0f) + 1.0f;
            spAC = randPlusMinusPoint5Scaled(3.0f);
            spA0 = 0.0f;
            sp98 = 0.0f;
            sp9C = -0.1f;
            spB0 = randPlusMinusPoint5Scaled(30.0f) + arg1->pos.x;
            spB4 = randPlusMinusPoint5Scaled(30.0f) + (arg1->pos.y + 15.0f);
            spB8 = randPlusMinusPoint5Scaled(30.0f) + arg1->pos.z;
            temp_f20 = Rand_ZeroFloat(50.0f);
            func_800B0EB0(arg0, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) temp_s6, &D_80A07F04, &D_80A07F08, (s16) (s32) (temp_f20 + 100.0f), (s16) 0xA, (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
            temp_s0 = (phi_s0 + 1) & 0xFF;
            phi_s0 = temp_s0;
        } while (temp_s0 < temp_a2);
    }
}

void func_809F51E8(Boss07 *arg0, GlobalContext *arg1, s32 arg2) {
    void *sp24;
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk_15C == 0) && (((temp_v0 = arg0->actionFunc, (func_809F7968 != temp_v0)) && (func_809F76D0 != temp_v0) && (func_809F77A8 != temp_v0)) || ((arg2 & 0xFF) != 0))) {
        sp24 = temp_v1;
        if (Rand_ZeroOne() < 0.5f) {
            sp24 = temp_v1;
            func_809F783C(arg0, arg1);
        } else {
            sp24 = temp_v1;
            func_809F7688(arg0, arg1);
        }
        arg0->unk_158 = 0xA;
        arg0->unk_F7E = 0;
        if (arg0 == sp24->parent) {
            sp24->unk_AE8 = 0x65;
            sp24->parent = NULL;
            sp24->unk_394 = 0;
        }
    }
}

void func_809F52CC(Boss07 *arg0, GlobalContext *arg1) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg1->actorCtx.actorList[3].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_2:
        temp_f2 = phi_v0->world.pos.x - arg0->actor.world.pos.x;
        temp_f12 = phi_v0->world.pos.y - arg0->actor.world.pos.y;
        temp_f14 = phi_v0->world.pos.z - arg0->actor.world.pos.z;
        if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < 200.0f) {
            func_809F51E8((bitwise Boss07 *) temp_f12, (bitwise GlobalContext *) temp_f14, 0);
            return;
        }
        temp_v0_2 = phi_v0->next;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return;
        }
        goto loop_2;
    }
}

void func_809F536C(void *arg0, void *arg1, Vec3f *arg2) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    s32 temp_s1;
    s32 temp_v0;
    void *phi_s0;
    f32 phi_f16;
    Vec3f *phi_s3;
    s32 phi_s1;
    s32 phi_v0;

    temp_v0 = D_80A09A50;
    sp50 = 0.0f;
    phi_s0 = arg1;
    phi_s3 = arg2;
    phi_s1 = 0;
    phi_v0 = temp_v0;
    if (temp_v0 > 0) {
        do {
            temp_f14 = phi_s0->unk_0 - arg0->unk_0;
            temp_f2 = phi_s0->unk_4 - arg0->unk_4;
            temp_f12 = phi_s0->unk_8 - arg0->unk_8;
            temp_f18 = sqrtf((temp_f14 * temp_f14) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12));
            if (temp_f18 < 300.0f) {
                temp_f16 = 300.0f - temp_f18;
                phi_f16 = temp_f16;
                if (temp_f16 > 200.0f) {
                    phi_f16 = 200.0f;
                }
                sp54 = phi_f16;
                sp58 = phi_f16;
                SysMatrix_InsertYRotation_f(Math_Acot2F(temp_f12, temp_f14), 0);
                SysMatrix_MultiplyVector3fByState((Vec3f *) &sp50, phi_s3);
                phi_v0 = D_80A09A50;
            }
            temp_s1 = phi_s1 + 1;
            phi_s0 += 0xC;
            phi_s3 += 0xC;
            phi_s1 = temp_s1;
        } while (temp_s1 < phi_v0);
    }
}

void func_809F5494(Boss07 *arg0, GlobalContext *arg1) {
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *phi_s0;

    temp_s0 = arg1->actorCtx.actorList[3].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            temp_s1 = phi_s0 + 0x24;
            if (phi_s0->params == 1) {
                func_809F536C(temp_s1, arg0 + 0x7AC, arg0 + 0xC5C);
                func_809F536C(temp_s1, arg0 + 0xFB8, arg0 + 0x1468);
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void Boss07_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 *sp48;
    ActorContext *sp44;
    s16 *temp_v0_5;
    s16 temp_t2;
    s16 temp_v0;
    s16 temp_v0_3;
    u32 temp_v0_2;
    void *temp_v0_4;
    void *phi_v0;
    s16 *phi_v0_2;
    Boss07 *this = (Boss07 *) thisx;

    temp_v0 = this->actor.params;
    if (temp_v0 == 0x96) {
        this->actor.update = func_80A06F48;
        this->actor.draw = func_80A07604;
        this->actor.flags &= -2;
        D_80A09A58 = this;
        D_80A09A70 = 0;
        globalCtx->envCtx.unk_C3 = 0;
        globalCtx->envCtx.unk_E0 = 2;
        return;
    }
    if (temp_v0 == 0) {
        this->actor.params = 0xA;
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x12F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0x96);
        globalCtx->specialEffects = &D_80A09A78;
        phi_v0 = &D_80A09A78;
        do {
            temp_v0_2 = phi_v0 + 0x48;
            temp_v0_2->unk_-48 = 0;
            phi_v0 = (void *) temp_v0_2;
        } while (temp_v0_2 < (u32) &D_80A0A888);
        D_80A09A60 = NULL;
        D_80A09A60 = NULL;
        D_80A09A6C = NULL;
        D_80A09A6C = NULL;
    }
    temp_v0_3 = this->actor.params;
    this->actor.targetMode = 5;
    this->actor.colChkInfo.mass = 0xFE;
    this->actor.gravity = -2.5f;
    if ((s32) temp_v0_3 >= 0xC8) {
        this->actor.update = func_80A05694;
        this->actor.draw = func_80A057A0;
        *(&D_80A09A60 - 0x320 + (this->actor.params * 4)) = this;
        if ((gSaveContext.eventInf[6] & 2) != 0) {
            Actor_SetScale((Actor *) this, 0.03f);
            temp_v0_4 = (this->actor.params * 6) + &D_80A07F3C;
            this->actor.world.pos.y = 370.0f;
            this->actor.world.pos.x = (f32) temp_v0_4->unk_-4B0;
            this->actor.world.pos.z = (f32) temp_v0_4->unk_-4AC;
            this->actor.shape.rot.y = temp_v0_4->unk_-4AE;
            func_80A04DE0(this, globalCtx);
        } else {
            func_80A04878(this, globalCtx);
        }
        this->actor.flags &= -2;
        this->actor.colChkInfo.damageTable = &D_80A079E0;
        return;
    }
    if (temp_v0_3 == 0xB4) {
        this->actor.update = func_80A06C64;
        this->actor.draw = func_80A06E24;
        func_80A05AF8(this, globalCtx);
        this->actor.colChkInfo.damageTable = &D_80A07A00;
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, (f32) gGameInfo->data[1303] + 9.0f);
        this->actor.shape.shadowAlpha = 0xB4;
        Collider_InitAndSetCylinder(globalCtx, &this->unk_1820, (Actor *) this, &D_80A07ED0);
        Effect_Add(globalCtx, &this->unk_18DC, 4, 0U, (u8) 0, &D_80A07F5C);
        this->actor.flags &= -2;
        return;
    }
    if ((temp_v0_3 == 0x64) || (temp_v0_3 == 0x65)) {
        this->actor.update = func_80A0434C;
        this->actor.draw = func_80A045A8;
        this->actor.flags &= -2;
        sp44 = &globalCtx->actorCtx;
        Collider_InitAndSetCylinder(globalCtx, &this->unk_1820, (Actor *) this, &D_80A07E78);
        func_800BC154(globalCtx, sp44, (Actor *) this, 5U);
        this->unk_181C = (s16) (s32) Rand_ZeroFloat(3.99f);
        return;
    }
    if ((temp_v0_3 == 0xA) || (temp_v0_3 == 0xB)) {
        this->actor.colChkInfo.damageTable = &D_80A07980;
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 15.0f);
        SkelAnime_Init(globalCtx, &this->unk_190, &D_06019C58, &D_06019E48, &this->unk_1DC, &this->unk_284, 0x13);
        if (this->actor.params == 0xA) {
            this->actor.update = func_80A02C54;
            this->actor.draw = func_80A03F5C;
            sp44 = &globalCtx->actorCtx;
            Effect_Add(globalCtx, &this->unk_18DC, 4, 0U, (u8) 0, &D_80A07F64);
            D_80A09A5C = this;
            if ((gSaveContext.eventInf[6] & 2) != 0) {
                this->actor.world.pos.x = 0.0f;
                this->actor.world.pos.y = (f32) gGameInfo->data[1553] + 277.0f;
                this->actor.world.pos.z = -922.5f;
                func_809FFA04(this, globalCtx);
                this->unk_164 = 0.0f;
                this->unk_16C = 0.0f;
                this->unk_170 = 0.0f;
                this->unk_150 = 0x32;
                this->unk_154 = 0xC8;
                this->unk_1888 = 0x32;
                this->actor.flags |= 1;
                this->unk_168 = 200.0f;
                D_80A09A71 = 0x14;
            } else {
                func_80A016E4(this, globalCtx);
            }
            Collider_InitAndSetQuad(globalCtx, &this->unk_18F0, (Actor *) this, &D_80A07C3C);
            Collider_InitAndSetQuad(globalCtx, &this->unk_1970, (Actor *) this, &D_80A07C8C);
            this->actor.colChkInfo.health = 0xE;
            phi_v0_2 = D_80A07F54;
            do {
                sp48 = phi_v0_2;
                Actor_Spawn(sp44, globalCtx, 0x12F, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) (s32) *phi_v0_2);
                temp_v0_5 = phi_v0_2 + 2;
                phi_v0_2 = temp_v0_5;
            } while (temp_v0_5 != &D_80A07F5C);
            return;
        }
        /* Duplicate return node #37. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0_3 == 0x14) || (temp_v0_3 == 0x15)) {
        Actor_SetScale((Actor *) this, 0.015000001f);
        SkelAnime_InitSV(globalCtx, &this->unk_190, &D_060099A0, &D_0600A6AC, &this->unk_1DC, &this->unk_284, 0x19);
        if (this->actor.params == 0x15) {
            temp_t2 = this->actor.world.rot.z;
            this->actor.world.rot.z = 0;
            this->actor.update = func_809FF0E4;
            this->actor.draw = func_809FF5CC;
            this->actor.flags &= -2;
            this->unk_150 = temp_t2;
            return;
        }
        this->actor.colChkInfo.damageTable = &D_80A079A0;
        this->actor.colChkInfo.health = 0x1E;
        this->actor.update = func_809FF12C;
        this->actor.draw = func_809FF900;
        Collider_InitAndSetJntSph(globalCtx, &this->unk_3E8, (Actor *) this, &D_80A07E68, &this->unk_408);
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 80.0f);
        this->unk_ABD2 = this->actor.shape.rot.z;
        if (this->unk_ABD2 != 0) {
            func_809FCC70(this, globalCtx);
        } else {
            func_809FD5F8(this, globalCtx);
            this->unk_14A = 1;
            this->unk_17BC = 1.0f;
            this->unk_17C0 = 1.0f;
            this->unk_17C4 = 1.0f;
            this->unk_17B8 = 1.0f;
            globalCtx->envCtx.unk_DC = 0.0f;
        }
        this->unk_17E0 = 1.0f;
        this->unk_17E4 = 1.0f;
        this->unk_17F0 = 1.0f;
        this->unk_17F4 = 1.0f;
        return;
    }
    D_80A09A54 = this;
    this->actor.colChkInfo.health = 0x28;
    this->actor.colChkInfo.damageTable = &D_80A079C0;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_ABD2 = this->actor.shape.rot.z;
    if (this->unk_ABD2 != 0) {
        func_809F5E14(this, globalCtx);
    } else {
        func_809F7400(this, globalCtx, 0x32);
        this->unk_77C = 1.0f;
        func_801A89A8(0x8069);
    }
    SkelAnime_InitSV(globalCtx, &this->unk_190, &D_060335F0, &D_0603CBD0, &this->unk_1DC, &this->unk_284, 0x1C);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_3E8, (Actor *) this, &D_80A07BCC, &this->unk_408);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_6C8, (Actor *) this, &D_80A07C2C, &this->unk_6E8);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_728, (Actor *) this, &D_80A07BDC);
    this->unk_794 = 0.7f;
    this->unk_FA0 = 0.7f;
    this->unk_798 = (GlobalContext *)0x40000000;
    this->unk_FA4 = (GlobalContext *)0x40000000;
    this->unk_790 = -15.0f;
    this->unk_F9C = -15.0f;
    this->unk_79C = NULL;
    this->unk_FA8 = NULL;
    D_80A09A50 = 0x2C;
    this->unk_17E0 = 1.0f;
}

void Boss07_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    Boss07 *this = (Boss07 *) thisx;

    temp_v0 = this->actor.params;
    if (temp_v0 != 0x1E) {
        if (temp_v0 != 0xB4) {
            return;
        }
        goto block_4;
    }
    Collider_DestroyQuad(globalCtx, &this->unk_18F0);
    Collider_DestroyQuad(globalCtx, &this->unk_1970);
block_4:
    Effect_Destroy(globalCtx, this->unk_18DC);
}

void func_809F5E14(Boss07 *arg0, GlobalContext *arg1) {
    Boss07 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809F5E88;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x190, &D_06023DAC, 0.0f);
    arg0->unk_17D8 = 0x7F00;
    arg0->actor.flags &= -2;
    arg0->unk_15C = 0x14;
    arg0->unk_17E8 = 5120.0f;
}

void func_809F5E88(Boss07 *this, GlobalContext *globalCtx) {
    Camera *sp48;
    SkelAnime *sp40;
    Vec3f *sp38;
    Actor **temp_s0_3;
    Camera *temp_v0_4;
    SkelAnime *temp_a0;
    Vec3f *temp_s0_2;
    Vec3f *temp_t9;
    s16 temp_v0;
    u32 temp_v0_2;
    u8 temp_v0_3;
    void *temp_s0;
    u32 phi_v0;
    s32 phi_v1;
    u32 phi_v0_2;
    u32 phi_v0_3;
    u32 phi_v0_4;
    u32 phi_v0_5;
    Actor **phi_s0;

    this->unk_15C = 0x14;
    temp_a0 = &this->unk_190;
    sp40 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    this->unk_ABC8 += 1;
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    temp_v0 = this->unk_ABD0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            sp38 = &this->unk_ABE0;
        } else {
            goto block_4;
        }
    } else {
        this->unk_ABC8 = 0;
        this->unk_ABD0 = 1;
        this->unk_AC00 = 0.0f;
        this->unk_ABEC = 0.0f;
        this->unk_ABF0 = (((f32) gGameInfo->data[1265] + 100.0f) - 30.0f) + 80.0f;
        this->unk_ABF4 = ((((f32) gGameInfo->data[1266] + 270.0f) - 150.0f) + 30.0f) - 50.0f;
        this->unk_ABF8 = 0.0f;
        this->unk_ABFC = 180.0f;
block_4:
        if ((u32) this->unk_ABC8 < 0x28U) {
            D_80A09A4C = 3;
        }
        phi_v0 = this->unk_ABC8;
        if (this->unk_ABC8 >= 0x15U) {
            if (this->unk_ABC8 == 0x15) {
                Audio_PlayActorSound2((Actor *) this, 0x39BBU);
            }
            Math_ApproachS(&this->unk_17D8, 0, 5, 0x1000);
            this->unk_17DA = (s16) (s32) (Math_SinS((s16) (this->unk_ABC8 << 0xC)) * this->unk_17E8);
            this->unk_17DC = (s16) (s32) (Math_SinS((s16) (this->unk_ABC8 * 0xB00)) * this->unk_17E8 * 0.5f);
            temp_v0_2 = this->unk_ABC8;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 >= 0x29U) {
                Math_ApproachZeroF(&this->unk_17E8, 1.0f, 200.0f);
                phi_v0 = this->unk_ABC8;
            }
        }
        if (phi_v0 >= 0x3DU) {
            temp_v0_3 = globalCtx->actorCtx.actorList[2].first->unk_14B;
            phi_v1 = 0;
            if (temp_v0_3 == 1) {
                phi_v1 = 1;
            } else if (temp_v0_3 == 0) {
                phi_v1 = 2;
            } else if (temp_v0_3 == 2) {
                phi_v1 = 3;
            } else if (temp_v0_3 == 3) {
                phi_v1 = 4;
            }
            temp_s0 = (phi_v1 * 0xC) + &D_80A07F6C;
            Math_ApproachF(&this->unk_ABF0, temp_s0->unk_0, 0.075f, this->unk_AC0C * 7.0f);
            Math_ApproachF(&this->unk_ABF4, temp_s0->unk_4, 0.075f, this->unk_AC0C * 17.0f);
            Math_ApproachF(&this->unk_ABFC, temp_s0->unk_8, 0.075f, this->unk_AC0C * 7.0f);
            Math_ApproachF(&this->unk_AC0C, 1.0f, 1.0f, 0.01f);
            if (this->unk_ABC8 == 0x46) {
                SkelAnime_ChangeAnimTransitionStop(sp40, &D_06025018, -15.0f);
                this->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06025018);
                func_8019FE1C(&this->actor.projectedPos, 0x290D, 0x3F800000);
                Audio_PlayActorSound2((Actor *) this, 0x39B9U);
            }
            phi_v0_2 = this->unk_ABC8;
            if (this->unk_ABC8 >= 0x6EU) {
                Math_ApproachF(&this->unk_77C, 1.0f, 1.0f, 0.05f);
                this->unk_794 = 0.79999995f;
                this->unk_FA0 = 0.79999995f;
                this->unk_798 = (GlobalContext *)0x3F800000;
                this->unk_FA4 = (GlobalContext *)0x3F800000;
                phi_v0_2 = this->unk_ABC8;
            }
            phi_v0_3 = phi_v0_2;
            if (phi_v0_2 == 0x7F) {
                this->unk_77C = 1.0f;
                phi_v0_3 = this->unk_ABC8;
            }
            phi_v0_4 = phi_v0_3;
            if (phi_v0_3 == 0x78) {
                Audio_PlayActorSound2((Actor *) this, 0x39CEU);
                func_8019F1C0(&D_80A09A40, 0x3A53U);
                func_8019FE74(&D_801D6654, 0, 0x3C);
                phi_v0_4 = this->unk_ABC8;
            }
            phi_v0_5 = phi_v0_4;
            if (phi_v0_4 == 0x70) {
                func_801A89A8(0x8069);
                phi_v0_5 = this->unk_ABC8;
            }
            if (phi_v0_5 == 0x89) {
                Actor_TitleCardCreate(globalCtx, &globalCtx->actorCtx.titleCtxt, Lib_SegmentedToVirtual(&D_06032040), 0xA0, (s16) 0xB4, (u8) 0x80, (u8) 0x28);
            }
            if (func_801378B8(sp40, this->unk_1D4) != 0) {
                temp_v0_4 = Play_GetCamera(globalCtx, 0);
                this->unk_ABD0 = 0;
                sp48 = temp_v0_4;
                func_809F7400(this, globalCtx, 0x32);
                temp_s0_2 = &this->unk_ABD4;
                temp_t9 = &this->unk_ABE0;
                sp48->eye.x = temp_s0_2->x;
                sp48->eye.y = temp_s0_2->y;
                sp48->eye.z = temp_s0_2->z;
                sp48->eyeNext.x = temp_s0_2->x;
                sp48->eyeNext.y = temp_s0_2->y;
                sp48->eyeNext.z = temp_s0_2->z;
                sp48->at.x = temp_t9->x;
                sp48->at.y = temp_t9->y;
                sp48->at.z = temp_t9->z;
                func_80169AFC(globalCtx, this->unk_ABD2, 0);
                this->unk_ABD2 = 0;
                func_800EA0EC(globalCtx, &globalCtx->csCtx);
                func_800B7298(globalCtx, (Actor *) this, 6U);
                this->actor.flags |= 1;
                func_80165690();
                if (D_80A09A60 != 0) {
                    sp40 = (SkelAnime *) &globalCtx->actorCtx;
                    phi_s0 = &D_80A09A60;
                    do {
                        func_800BC154(globalCtx, (ActorContext *) sp40, *phi_s0, 9U);
                        temp_s0_3 = phi_s0 + 4;
                        phi_s0 = temp_s0_3;
                    } while (temp_s0_3 != &D_80A09A70);
                }
            }
        }
        sp38 = &this->unk_ABE0;
    }
    SysMatrix_MultiplyVector3fByState((Vec3f *) &this->unk_ABEC, &this->unk_ABD4);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &this->unk_ABF8, sp38);
    if (this->unk_ABD2 != 0) {
        ShrinkWindow_SetLetterboxTarget(0x1B);
        Play_CameraSetAtEye(globalCtx, this->unk_ABD2, sp38, &this->unk_ABD4);
    }
}

void func_809F64F4(Boss07 *arg0, GlobalContext *arg1) {
    func_801A89A8(0x100100FF);
    func_809F4FAC(arg1);
    arg0->actionFunc = func_809F65F4;
    arg0->unk_794 = 0.7f;
    arg0->unk_FA0 = 0.7f;
    arg0->unk_798 = (GlobalContext *)0x40000000;
    arg0->unk_FA4 = (GlobalContext *)0x40000000;
    arg0->unk_79C = 0.0f;
    arg0->unk_FA8 = 0.0f;
    arg0->unk_790 = -15.0f;
    arg0->unk_F9C = -15.0f;
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_06022BB4, 0.0f);
    arg0->actor.flags &= -2;
    arg0->unk_ABD0 = 0;
    arg0->unk_ABC8 = 0;
    if (D_80A09A60 != 0) {
        D_80A09A60->unk_14E = 2;
        D_80A09A64->unk_14E = 2;
        D_80A09A68->unk_14E = 2;
        D_80A09A6C->unk_14E = 2;
    }
    arg0->unk_15C = 0x3E8;
}

void func_809F65F4(Boss07 *this, GlobalContext *globalCtx) {
    s32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp98;
    f32 sp94;
    ? sp84;
    ? sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    void *sp48;
    f32 *sp44;
    Boss07 *temp_t8;
    Camera *temp_s0;
    GameInfo *temp_v1;
    GameInfo *temp_v1_2;
    GameInfo *temp_v1_3;
    Vec3f *temp_s0_4;
    f32 *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s16 temp_a0;
    s16 temp_v0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u32 temp_v0_6;
    void *temp_v0_2;
    void *temp_v0_7;
    void *phi_v0;
    s32 phi_s0;
    u32 phi_v0_2;
    u32 phi_v0_3;
    u8 phi_a0;
    u32 phi_v0_4;
    void *phi_v0_5;
    f32 *phi_a0_2;
    f32 phi_f16;
    s32 phi_s0_2;
    GameInfo *phi_v1;

    spC0 = 0;
    spA8.unk_0 = D_80A07FA8.unk_0;
    spA8.unk_4 = (s32) D_80A07FA8.unk_4;
    spA8.unk_8 = (s32) D_80A07FA8.unk_8;
    spA0 = 0.1f;
    spA4 = 0.0f;
    temp_s0 = Play_GetCamera(globalCtx, 0);
    this->unk_15C = 0x3E8;
    func_809F4CBC(this, 1.0f);
    temp_v0 = this->unk_ABD0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 4) {

                } else {
                    goto block_36;
                }
            } else {
                goto block_10;
            }
        } else {
            goto block_7;
        }
    } else if (ActorCutscene_GetCurrentIndex() == -1) {
        func_800EA0D4(globalCtx, &globalCtx->csCtx);
        func_800B7298(globalCtx, (Actor *) this, 1U);
        this->unk_ABD2 = func_801694DC(globalCtx);
        func_80169590(globalCtx, 0, 1);
        func_80169590(globalCtx, this->unk_ABD2, 7);
        Audio_PlayActorSound2((Actor *) this, 0x39B8U);
block_7:
        this->unk_ABC8 = 0;
        this->unk_ABD0 = 2;
        this->unk_ABD4.x = temp_s0->eye.x;
        this->unk_ABD4.y = temp_s0->eye.y;
        this->unk_ABD4.z = temp_s0->eye.z;
        this->unk_ABE0.x = temp_s0->at.x;
        this->unk_ABE0.y = temp_s0->at.y;
        this->unk_ABE0.z = temp_s0->at.z;
        this->unk_AC04 = ((f32) this->actor.shape.rot.y * 3.1415927f) / 32768.0f;
        D_80A09A58->unk_180C = 0.0f;
        temp_f0 = D_80A09A58->unk_180C;
        this->unk_AC0C = temp_f0;
        this->unk_AC08 = temp_f0;
        func_809F49A0(1, 0x71AC, 0x263A);
        phi_v0 = this + 0x8000;
        phi_s0 = 0;
        do {
            sp48 = phi_v0;
            temp_s0_2 = phi_s0 + 1;
            temp_v0_2 = phi_v0 + 4;
            temp_v0_2->unk_2B4C = (f32) (func_809F49C0() - 1.0f);
            phi_v0 = temp_v0_2;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0x1E);
        func_8016566C(0x96);
block_10:
        if (this->unk_ABC8 == 0x14) {
            func_8019F1C0(&D_80A09A40, 0x39E3U);
        }
        phi_v0_2 = this->unk_ABC8;
        if (this->unk_ABC8 == 0x28) {
            func_8019F1C0(&D_80A09A40, 0x39E3U);
            phi_v0_2 = this->unk_ABC8;
        }
        phi_v0_3 = phi_v0_2;
        if (phi_v0_2 == 0x3C) {
            func_8019F1C0(&D_80A09A40, 0x39E3U);
            phi_v0_3 = this->unk_ABC8;
        }
        if (phi_v0_3 == 0x50) {
            func_8019F1C0(&D_80A09A40, 0x39E3U);
        }
        spB8 = -90.0f;
        spB4 = 0.0f;
        spBC = 350.0f;
        this->unk_ABF8 = this->actor.focus.pos.x;
        this->unk_ABFC = this->actor.focus.pos.y - 40.0f;
        this->unk_AC00 = this->actor.focus.pos.z;
        temp_v0_3 = this->unk_ABC8;
        if ((temp_v0_3 >= 0x32U) && (temp_v0_3 < 0x50U)) {
            if (temp_v0_3 == 0x32) {
                func_8019F1C0(&D_80A09A40, 0x39AFU);
            }
            spB4 = 30.0f;
            spBC = 120.0f;
            this->unk_ABFC = (this->actor.focus.pos.y - 40.0f) + 30.0f;
            spA4 = 200.0f;
            spA0 = 1.0f;
            goto block_33;
        }
        if ((temp_v0_3 >= 0x50U) && (temp_v0_3 < 0x6EU)) {
            if (temp_v0_3 == 0x50) {
                this->unk_190.animCurrentFrame -= 30.0f;
                func_8019F1C0(&D_80A09A40, 0x39B4U);
            }
            spB4 = -10.0f;
            spBC = 150.0f;
            this->unk_ABFC = (this->actor.focus.pos.y - 40.0f) - 60.0f;
            spA4 = 200.0f;
            spA0 = 1.0f;
            goto block_33;
        }
        if ((temp_v0_3 >= 0x6EU) && (temp_v0_3 < 0x8CU)) {
            if (temp_v0_3 == 0x6E) {
                func_8019F1C0(&D_80A09A40, 0x39B5U);
            }
            spB4 = -70.0f;
            spBC = 110.0f;
            this->unk_ABFC = (this->actor.focus.pos.y - 40.0f) + 30.0f;
            spA4 = 200.0f;
            spA0 = 1.0f;
block_33:
        }
        if (this->unk_ABC8 >= (u32) (gGameInfo->data[1551] + 0x8C)) {
            this->unk_ABD0 = 4;
            this->unk_AC14 = (f32) gGameInfo->data[1552] + 270.0f + 50.0f;
            func_8019F1C0(&D_80A09A40, 0x39BFU);
block_36:
            temp_v1 = gGameInfo;
            temp_v0_4 = this->unk_ABC8;
            if ((temp_v0_4 >= (u32) (temp_v1->data[1626] + 0x104)) && (temp_v0_4 < (u32) (temp_v1->data[1627] + 0x172))) {
                spC0 = temp_v1->data[1262] + 1;
                this->unk_AC04 = ((f32) this->actor.shape.rot.y * 3.1415927f) / 32768.0f;
                spB4 = 0.0f;
                spB8 = this->unk_AC14 + -190.0f;
                spBC = ((f32) gGameInfo->data[1553] + 390.0f) - 380.0f;
                this->unk_ABF8 = this->actor.focus.pos.x;
                this->unk_ABFC = (f32) gGameInfo->data[1554] + ((this->actor.focus.pos.y - 40.0f) - 60.0f) + 130.0f;
                this->unk_AC00 = this->actor.focus.pos.z;
                temp_v1_2 = gGameInfo;
                spA0 = 1.0f;
                Math_ApproachF(&this->unk_AC14, (f32) temp_v1_2->data[1555] + 240.0f, 0.05f, ((f32) temp_v1_2->data[1556] * 0.1f) + 1.0f);
                spA4 = 2000.0f;
                this->unk_1D8 = gGameInfo->data[1329] + 0xA;
                this->unk_AB48 = 1;
                func_8019F1C0(&D_80A09A40, 0x205BU);
            } else {
                spB8 = -190.0f;
                spB4 = 0.0f;
                spBC = 390.0f;
                this->unk_ABF8 = this->actor.focus.pos.x;
                this->unk_ABFC = (this->actor.focus.pos.y - 40.0f) - 60.0f;
                this->unk_AC00 = this->actor.focus.pos.z;
                this->unk_1D8 = 0;
                if ((u32) this->unk_ABC8 >= 0x14BU) {
                    spA4 = 2000.0f;
                    spA0 = 1.0f;
                }
                Math_ApproachZeroF((f32 *) &this->actor.world, 0.1f, this->unk_AC0C);
                Math_ApproachZeroF(&this->actor.world.pos.z, 0.1f, this->unk_AC0C);
                Math_ApproachF(&this->unk_AC0C, 5.0f, 1.0f, 0.1f);
            }
            temp_v0_5 = this->unk_ABC8;
            if (temp_v0_5 >= 0x104U) {
                if (temp_v0_5 == 0x104) {
                    func_801A479C(&D_80A09A40, 0x39B6, 0x3C);
                }
                globalCtx->envCtx.unk_E5 = 1;
                globalCtx->envCtx.unk_E6[2] = 0xFF;
                globalCtx->envCtx.unk_E6[1] = 0xFF;
                globalCtx->envCtx.unk_E6[0] = 0xFF;
                temp_v0_6 = this->unk_ABC8;
                if (temp_v0_6 < 0x15EU) {
                    sp98 = 0.5f;
                    sp94 = 0.02f;
                    globalCtx->envCtx.unk_E6[3] = 0;
                    goto block_53;
                }
                temp_a0 = (temp_v0_6 * 2) - 0x2BC;
                sp98 = 5.0f;
                sp94 = 0.1f;
                phi_a0 = (u8) temp_a0;
                if ((s32) temp_a0 >= 0xFB) {
                    phi_a0 = 0xFAU;
                }
                globalCtx->envCtx.unk_E6[3] = phi_a0;
                if (this->unk_ABC8 == 0x190) {
                    func_8019FE74(&D_801D6654, 0, 0x5A);
                }
                phi_v0_4 = this->unk_ABC8;
                if (this->unk_ABC8 == (gGameInfo->data[1342] + 0x1B8)) {
                    globalCtx->nextEntranceIndex = 0x5400;
                    gSaveContext.nextCutsceneIndex = 0xFFF7;
                    globalCtx->sceneLoadFlag = 0x14;
block_53:
                    phi_v0_4 = this->unk_ABC8;
                }
                if (phi_v0_4 >= 0x12DU) {
                    D_80A09A58->unk_1808 = 1;
                    Math_ApproachF(&D_80A09A58->unk_180C, 30.0f, 0.1f, 1.5f);
                    temp_t8 = D_80A09A58;
                    temp_t8->unk_1810 = this->unk_34C;
                    temp_t8->unk_1814 = this->unk_350;
                    temp_t8->unk_1818 = this->unk_354;
                    Math_ApproachF(&this->unk_AB4C, 1.0f, 0.1f, 0.05f);
                    phi_v0_5 = NULL;
                    phi_a0_2 = &this->unk_AB50;
                    do {
                        sp48 = phi_v0_5;
                        sp44 = phi_a0_2;
                        Math_ApproachF(phi_a0_2, sp98, 1.0f, sp94);
                        temp_v0_7 = phi_v0_5 + 4;
                        phi_v0_5 = temp_v0_7;
                        phi_a0_2 += 4;
                    } while (temp_v0_7 != 0x78);
                    Math_ApproachF(&globalCtx->envCtx.unk_DC, 1.0f, 1.0f, 0.1f);
                }
            }
            this->unk_AC04 += this->unk_AC08;
            this->unk_AC08 += 0.0004f;
            if (this->unk_AC08 > 0.02f) {
                this->unk_AC08 = 0.02f;
            }
            temp_v1_3 = gGameInfo;
            phi_v1 = temp_v1_3;
            if ((u32) this->unk_ABC8 >= (u32) (temp_v1_3->data[1629] + 0xB4)) {
                sp84.unk_0 = (s32) D_80A07FB4.unk_0;
                sp84.unk_4 = (s32) D_80A07FB4.unk_4;
                sp84.unk_8 = (s32) D_80A07FB4.unk_8;
                sp78.unk_0 = (s32) D_80A07FC0.unk_0;
                sp78.unk_4 = (s32) D_80A07FC0.unk_4;
                sp78.unk_8 = (s32) D_80A07FC0.unk_8;
                play_sound(0x2159U);
                if (spC0 == 0) {
                    phi_f16 = 2.0f;
                } else {
                    phi_f16 = ((f32) gGameInfo->data[1301] * 0.01f) + 0.2f;
                }
                sp68 = phi_f16;
                spA8 = Math_SinS((s16) (this->unk_ABC8 * 0x7000)) * sp68;
                spAC = Math_SinS((s16) (this->unk_ABC8 * 0x5000)) * sp68 * 2.5f;
                spB0 = Math_CosS((s16) (this->unk_ABC8 << 0xF)) * sp68;
                phi_s0_2 = 0;
                do {
                    sp6C = randPlusMinusPoint5Scaled(500.0f) + this->actor.world.pos.x;
                    sp70 = Rand_ZeroFloat(50.0f) + this->actor.world.pos.y + 200.0f;
                    sp74 = randPlusMinusPoint5Scaled(500.0f) + this->actor.world.pos.z;
                    EffectSsHahen_Spawn(globalCtx, (Vec3f *) &sp6C, (Vec3f *) &sp84, (Vec3f *) &sp78, (s16) 0, (s16) (s32) (Rand_ZeroFloat(5.0f) + 20.0f), (s16) -1, (s16) 0xA, NULL);
                    temp_s0_3 = phi_s0_2 + 1;
                    phi_s0_2 = temp_s0_3;
                } while (temp_s0_3 != 2);
                phi_v1 = gGameInfo;
            }
            if (this->unk_ABC8 >= (u32) (phi_v1->data[1630] + 0x122)) {
                this->unk_1D8 = phi_v1->data[1334] + 0x19;
                Math_ApproachZeroF(&this->unk_77C, 1.0f, 0.015f);
            }
        }
    }
    SysMatrix_InsertYRotation_f(this->unk_AC04, 0);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &spB4, (Vec3f *) &this->unk_ABEC);
    this->unk_ABEC += this->actor.focus.pos.x;
    this->unk_ABF0 += this->actor.focus.pos.y;
    this->unk_ABF4 += this->actor.focus.pos.z;
    temp_s0_4 = &this->unk_ABD4;
    temp_f0_2 = 40.0f + spA4;
    sp44 = (bitwise f32 *) temp_f0_2;
    Math_ApproachF((f32 *) temp_s0_4, this->unk_ABEC, spA0, temp_f0_2);
    Math_ApproachF(&this->unk_ABD4.y, this->unk_ABF0, spA0, (bitwise f32) sp44);
    Math_ApproachF(&this->unk_ABD4.z, this->unk_ABF4, spA0, (bitwise f32) sp44);
    temp_f0_3 = 70.0f + spA4;
    sp44 = (bitwise f32 *) temp_f0_3;
    Math_ApproachF((f32 *) &this->unk_ABE0, this->unk_ABF8, spA0, temp_f0_3);
    Math_ApproachF(&this->unk_ABE0.y, this->unk_ABFC, spA0, (bitwise f32) sp44);
    Math_ApproachF(&this->unk_ABE0.z, this->unk_AC00, spA0, (bitwise f32) sp44);
    if (this->unk_ABD2 != 0) {
        temp_a2 = &sp5C;
        sp5C = this->unk_ABE0.x + spA8;
        sp60 = this->unk_ABE0.y + spAC;
        sp64 = this->unk_ABE0.z + spB0;
        Play_CameraSetAtEye(globalCtx, this->unk_ABD2, (Vec3f *) temp_a2, temp_s0_4);
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    this->unk_ABC8 += 1;
}

void func_809F7400(Boss07 *arg0, GlobalContext *arg1, s16 arg2) {
    Boss07 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809F748C;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x190, &D_0603CBD0, -10.0f);
    if (arg2 != 0) {
        arg0->unk_150 = arg2;
    } else {
        arg0 = arg0;
        arg0->unk_150 = (s16) (s32) Rand_ZeroFloat(30.0f);
    }
    arg0->actor.flags |= 1;
}

void func_809F748C(Boss07 *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_t6;
    s8 temp_v0;

    temp_t6 = globalCtx->actorCtx.actorList[2].first;
    globalCtx = globalCtx;
    sp24 = temp_t6;
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    func_809F4CBC(this, 2.0f);
    this->unk_794 = 0.7f;
    this->unk_FA0 = 0.7f;
    this->unk_790 = -15.0f;
    this->unk_F9C = -15.0f;
    this->unk_798 = (GlobalContext *)0x40000000;
    this->unk_FA4 = (GlobalContext *)0x40000000;
    this->unk_79C = NULL;
    this->unk_FA8 = NULL;
    if ((this->actor.xzDistToPlayer <= 200.0f) && (sp24->world.pos.y < 10.0f)) {
        globalCtx = globalCtx;
        if (Rand_ZeroOne() < 0.3f) {
            this->actor.xzDistToPlayer = 250.0f;
        }
        func_809F7D2C(this, globalCtx, globalCtx);
    } else if (this->unk_150 == 0) {
        if (gGameInfo->data[1326] == 1) {
            func_809F8E68(NULL, (GlobalContext *)0x40000000, this, globalCtx, globalCtx);
        } else {
            temp_v0 = (s8) this->actor.colChkInfo.health;
            if ((s32) temp_v0 >= 0x1C) {
                func_809F7D2C(NULL, (GlobalContext *)0x40000000, (GlobalContext *) this, globalCtx, globalCtx);
            } else if (((s32) temp_v0 < 0xD) && (globalCtx = globalCtx, (Rand_ZeroOne() < 0.65f))) {
                func_809F8E68(this, globalCtx, (Boss07 *) globalCtx);
            } else {
                globalCtx = globalCtx;
                if (Rand_ZeroOne() < 0.3f) {
                    func_809F8658(this, globalCtx, globalCtx);
                } else {
                    func_809F7D2C(this, globalCtx, globalCtx);
                }
            }
        }
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
    this->unk_174 = 1;
}

void func_809F7688(Boss07 *arg0, GlobalContext *arg1) {
    Boss07 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809F76D0;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x190, &D_06025878, -5.0f);
    arg0->unk_14C = 0;
}

void func_809F76D0(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f8;

    temp_a0 = &this->unk_190;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    this->unk_794 = 0.7f;
    this->unk_FA0 = 0.7f;
    this->unk_798 = (GlobalContext *)0x40000000;
    this->unk_FA4 = (GlobalContext *)0x40000000;
    this->unk_790 = -15.0f;
    this->unk_F9C = -15.0f;
    this->unk_79C = NULL;
    this->unk_FA8 = NULL;
    if (this->unk_14C == 1) {
        temp_f12 = this->actor.world.pos.z;
        temp_f14 = this->actor.world.pos.x;
        this->actor.velocity.y = 35.0f;
        this = this;
        temp_f8 = Math_Acot2F(-temp_f12, -temp_f14) * 10430.378f;
        this->actionFunc = func_809F77A8;
        this->actor.speedXZ = 20.0f;
        this->actor.world.rot.y = (s16) (s32) temp_f8;
    }
}

void func_809F77A8(Boss07 *this, GlobalContext *globalCtx) {
    Audio_PlayActorSound2((Actor *) this, 0x3014U);
    if (this->unk_14C == 0xD) {
        func_8019F1C0(&D_80A09A40, 0x3A57U);
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        func_809F7400(this, globalCtx, 1);
        this->unk_156 = 5;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x4000);
}

void func_809F783C(Boss07 *arg0, GlobalContext *arg1) {
    f32 sp30;
    f32 temp_f18;
    f32 phi_f20;

    arg0->actionFunc = func_809F7968;
    arg0->actor.velocity.y = 25.0f;
    if ((s32) (s16) (arg0->actor.yawTowardsPlayer - (s32) (Math_Acot2F(0.0f - arg0->actor.world.pos.z, 0.0f - arg0->actor.world.pos.x) * 10430.378f)) < 0) {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_0603D224, -5.0f);
        phi_f20 = 200.0f;
    } else {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_0603D7F0, -5.0f);
        phi_f20 = -200.0f;
    }
    Matrix_RotateY(arg0->actor.yawTowardsPlayer, 0U);
    SysMatrix_GetStateTranslationAndScaledX(phi_f20, (Vec3f *) &sp30);
    temp_f18 = Math_Acot2F(sp38 - arg0->actor.world.pos.z, sp30 - arg0->actor.world.pos.x) * 10430.378f;
    arg0->unk_14C = 0;
    arg0->actor.speedXZ = 17.0f;
    arg0->actor.world.rot.y = (s16) (s32) temp_f18;
}

void func_809F7968(Boss07 *this, GlobalContext *globalCtx) {
    Audio_PlayActorSound2((Actor *) this, 0x3014U);
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    this->unk_794 = 0.7f;
    this->unk_FA0 = 0.7f;
    this->unk_798 = (GlobalContext *)0x40000000;
    this->unk_FA4 = (GlobalContext *)0x40000000;
    this->unk_790 = -15.0f;
    this->unk_F9C = -15.0f;
    this->unk_79C = NULL;
    this->unk_FA8 = NULL;
    if ((this->unk_14C == 0xA) && (Rand_ZeroOne() < 0.5f)) {
        func_8019F1C0(&D_80A09A40, 0x3A57U);
    }
    if ((this->actor.velocity.y < 0.0f) && ((this->actor.bgCheckFlags & 1) != 0)) {
        if (Rand_ZeroOne() < 0.3f) {
            func_809F51E8(this, globalCtx, 1);
        } else {
            func_809F7400(this, globalCtx, 1);
            this->actor.speedXZ = 5.0f;
        }
        this->unk_156 = 5;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x4000);
}

void func_809F7AB4(Boss07 *arg0, GlobalContext *arg1) {
    s16 sp22;
    f32 phi_f14;

    arg0->actionFunc = func_809F7BC4;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, &D_0603DD1C, -5.0f);
    sp22 = arg0->actor.yawTowardsPlayer - (s32) (Math_Acot2F(-arg0->actor.world.pos.z, -arg0->actor.world.pos.x) * 10430.378f);
    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    if ((s32) sp22 < 0) {
        arg0->unk_190.animPlaybackSpeed = 1.0f;
        phi_f14 = 300.0f;
    } else {
        arg0->unk_190.animPlaybackSpeed = -1.0f;
        phi_f14 = -300.0f;
    }
    SysMatrix_GetStateTranslationAndScaledX(phi_f14, arg0 + 0x164);
    arg0->unk_164 += arg0->actor.world.pos.x;
    arg0->unk_152 = 0x15;
    arg0->unk_16C += arg0->actor.world.pos.z;
    arg0->unk_158 = 0xA;
    arg0->unk_170 = 0.0f;
    arg0->unk_ABCC = 0;
}

void func_809F7BC4(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    if (this->unk_14C == 0x14) {
        Audio_PlayActorSound2((Actor *) this, 0x3A53U);
    }
    this->unk_ABCC += 1;
    if ((this->unk_ABCC & 0xF) == 0) {
        func_8019F1C0(&D_80A09A40, 0x39E3U);
    }
    this->unk_794 = 0.7f;
    this->unk_FA0 = 0.7f;
    this->unk_798 = (GlobalContext *)0x40000000;
    this->unk_FA4 = (GlobalContext *)0x40000000;
    this->unk_790 = -15.0f;
    this->unk_F9C = -15.0f;
    this->unk_79C = NULL;
    this->unk_FA8 = NULL;
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
    Math_ApproachF((f32 *) &this->actor.world, this->unk_164, 0.8f, this->unk_170);
    Math_ApproachF(&this->actor.world.pos.z, this->unk_16C, 0.8f, this->unk_170);
    Math_ApproachF(&this->unk_170, 20.0f, 1.0f, 10.0f);
    if (this->unk_152 == 0) {
        if (Rand_ZeroOne() < 0.3f) {
            func_809F7AB4(this, globalCtx);
            return;
        }
        func_809F7400(this, globalCtx, 1);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_809F7D2C(Boss07 *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s32 temp_v0;
    u32 temp_t3;
    u8 temp_t5;

    arg0->actionFunc = func_809F805C;
    arg0->unk_152 = 0;
    if ((arg1->actorCtx.actorList[2].first->unk_A74 & 0x100) != 0) {
        arg0->unk_14E = 4;
    } else {
        temp_f0 = arg0->actor.xzDistToPlayer;
        if (temp_f0 <= 300.0f) {
            if (temp_f0 <= 200.0f) {
                arg0->unk_14E = 7;
            } else {
                arg0->unk_14E = 4;
            }
        } else {
            temp_t3 = (u32) Rand_ZeroFloat(6.99f);
            arg0->unk_14E = (u8) temp_t3;
            temp_v0 = temp_t3 & 0xFF;
            if (((s32) arg0->actor.colChkInfo.health >= 0x1C) && ((temp_v0 == 1) || (temp_v0 == 2))) {
                arg0->unk_14E = 0;
            }
        }
    }
    temp_t5 = arg0->unk_14E;
    switch (temp_t5) {
    case 0:
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_06033F80, -5.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06033F80);
        break;
    case 1:
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_06034E64, -5.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06034E64);
        break;
    case 2:
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_060358C4, -5.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060358C4);
        break;
    case 3:
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_06036A7C, -5.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06036A7C);
        break;
    case 4:
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_0603C4E0, -5.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0603C4E0);
        func_809F4D10(arg0 + 0x164, 650.0f);
        arg0->unk_170 = 0.0f;
        break;
    case 5:
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_06037ADC, -5.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06037ADC);
        break;
    case 6:
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_0603918C, -5.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0603918C);
        break;
    case 7:
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_06026204, -5.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06026204);
        break;
    }
    arg0->unk_14C = 0;
}

void func_809F805C(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;
    u8 temp_t8;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    s32 phi_v0_6;
    s32 phi_v0_7;
    s32 phi_v0_8;
    s32 phi_v0_9;
    s16 phi_v0_10;

    temp_a0 = &this->unk_190;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_809F4CBC(this, 2.0f);
    this->unk_794 = 0.79999995f;
    this->unk_FA0 = 0.79999995f;
    this->unk_790 = -5.0f;
    this->unk_F9C = -5.0f;
    this->unk_79C = NULL;
    this->unk_FA8 = NULL;
    this->unk_798 = (GlobalContext *)0x3F800000;
    this->unk_FA4 = (GlobalContext *)0x3F800000;
    if ((s32) this->unk_14C >= 0x15) {
        this->unk_174 = 1;
    }
    temp_t8 = this->unk_14E;
    switch (temp_t8) {
    case 0:
        if (this->unk_14C == (s16) (gGameInfo->data[1340] + 1)) {
            func_8019F1C0(&D_80A09A40, 0x3A55U);
        }
        phi_v0 = (s32) this->unk_14C;
        if (((s32) this->unk_14C >= 0xF) && ((s32) this->unk_14C < 0x12)) {
            this->unk_79C = (Boss07 *)0x43FA0000;
            phi_v0 = (s32) this->unk_14C;
        }
        phi_v0_2 = phi_v0;
        if (phi_v0 == 9) {
            this->unk_14F = 0xB;
            phi_v0_2 = (s32) this->unk_14C;
        }
        phi_v0_3 = phi_v0_2;
        if (phi_v0_2 == 1) {
            Audio_PlayActorSound2((Actor *) this, 0x39CDU);
            phi_v0_3 = (s32) this->unk_14C;
        }
        if (phi_v0_3 == 0xA) {
            Audio_PlayActorSound2((Actor *) this, 0x39CAU);
        }
        break;
    case 1:
        if (this->unk_14C == (s16) (gGameInfo->data[1339] + 3)) {
            func_8019F1C0(&D_80A09A40, 0x3A56U);
        }
        if (((s32) this->unk_14C >= 8) && ((s32) this->unk_14C < 0x38)) {
            this->unk_79C = (Boss07 *)0x43960000;
            this->unk_FA8 = (Boss07 *)0x43960000;
            if (((((s32) this->unk_14C + 2) & 3) == 0) && (Rand_ZeroOne() < 0.5f)) {
                play_sound(0x39CBU);
            }
            if ((this->unk_14C & 3) == 0) {
                Audio_PlayActorSound2((Actor *) this, 0x39CAU);
            }
            Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
        }
        break;
    case 2:
        if (this->unk_14C == (s16) (gGameInfo->data[1332] + 5)) {
            func_8019F1C0(&D_80A09A40, 0x3A55U);
        }
        phi_v0_4 = (s32) this->unk_14C;
        if (((s32) this->unk_14C >= 0x20) && ((s32) this->unk_14C < 0x27)) {
            this->unk_79C = (Boss07 *)0x43960000;
            this->unk_FA8 = (Boss07 *)0x43960000;
            phi_v0_4 = (s32) this->unk_14C;
        }
        phi_v0_5 = phi_v0_4;
        if (phi_v0_4 == 0x1C) {
            this->unk_14F = 0xB;
            phi_v0_5 = (s32) this->unk_14C;
        }
        phi_v0_6 = phi_v0_5;
        if (phi_v0_5 == 0xA) {
            Audio_PlayActorSound2((Actor *) this, 0x39CDU);
            phi_v0_6 = (s32) this->unk_14C;
        }
        if (phi_v0_6 == 0x20) {
            Audio_PlayActorSound2((Actor *) this, 0x39CAU);
        }
        break;
    case 3:
        if (this->unk_14C == (s16) (gGameInfo->data[1332] + 5)) {
            func_8019F1C0(&D_80A09A40, 0x3A55U);
        }
        phi_v0_7 = (s32) this->unk_14C;
        if (((s32) this->unk_14C >= 0x1F) && ((s32) this->unk_14C < 0x24)) {
            this->unk_79C = (Boss07 *)0x44960000;
            phi_v0_7 = (s32) this->unk_14C;
        }
        if (phi_v0_7 == 0x17) {
            this->unk_14F = 0xB;
        }
        Math_ApproachF(&this->unk_184, -0.1f, 0.5f, 0.1f);
        Math_ApproachF(&this->unk_188, 0.3f, 0.5f, 0.1f);
        if (this->unk_14C == 5) {
            Audio_PlayActorSound2((Actor *) this, 0x39CDU);
        }
        if (this->unk_14C == 0x1E) {
            Audio_PlayActorSound2((Actor *) this, 0x39CAU);
        }
        break;
    case 4:
        temp_v0 = this->unk_14C;
        if (((s32) temp_v0 >= 0x11) && ((s32) temp_v0 < 0x29)) {
            this->unk_79C = (Boss07 *)0x43480000;
            this->unk_FA8 = (Boss07 *)0x43480000;
            if ((temp_v0 & 7) == 0) {
                func_8019F1C0(&D_80A09A40, 0x3A54U);
            }
            Audio_PlayActorSound2((Actor *) this, 0x31CCU);
            Math_ApproachF((f32 *) &this->actor.world, this->unk_164, 0.1f, this->unk_170);
            Math_ApproachF(&this->actor.world.pos.z, this->unk_16C, 0.1f, this->unk_170);
            Math_ApproachF(&this->unk_170, 20.0f, 1.0f, 4.0f);
            Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, 0x2000);
            this->unk_174 = 0;
        }
        break;
    case 7:
        this->unk_174 = 0;
        if (this->unk_14C == 3) {
            Audio_PlayActorSound2((Actor *) this, 0x3A53U);
        }
        break;
    case 5:
        this->unk_FA0 = 0.7f;
        this->unk_794 = 0.7f;
        this->unk_790 = -15.0f;
        this->unk_F9C = -15.0f;
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
        this->unk_174 = 1;
        break;
    case 6:
        if (this->unk_14C == (s16) (gGameInfo->data[1333] + 5)) {
            func_8019F1C0(&D_80A09A40, 0x3A55U);
        }
        phi_v0_8 = (s32) this->unk_14C;
        if (((s32) this->unk_14C >= 0xE) && ((s32) this->unk_14C < 0x13)) {
            this->unk_79C = (Boss07 *)0x43160000;
            phi_v0_8 = (s32) this->unk_14C;
        }
        phi_v0_9 = phi_v0_8;
        if ((phi_v0_8 >= 0x17) && (phi_v0_8 < 0x1D)) {
            this->unk_FA8 = (Boss07 *)0x43480000;
            phi_v0_9 = (s32) this->unk_14C;
        }
        if ((phi_v0_9 >= 0x2B) && (phi_v0_9 < 0x31)) {
            this->unk_79C = (Boss07 *)0x43480000;
        }
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
        if (this->unk_14C == 0x14) {
            Audio_PlayActorSound2((Actor *) this, 0x39CDU);
            func_8019F1C0(&D_80A09A40, 0x3A55U);
        }
        phi_v0_10 = this->unk_14C;
        if (this->unk_14C == 5) {
            Audio_PlayActorSound2((Actor *) this, 0x39CEU);
            phi_v0_10 = this->unk_14C;
        }
        if (phi_v0_10 == 0x29) {
            Audio_PlayActorSound2((Actor *) this, 0x39CAU);
            func_8019F1C0(&D_80A09A40, 0x3A55U);
        }
        break;
    }
    if ((func_801378B8(sp24, this->unk_1D4) != 0) || (this->unk_152 == 1)) {
        func_809F7400(this, globalCtx, 0);
    }
}

void func_809F8658(Boss07 *arg0, GlobalContext *arg1) {
    Boss07 *temp_a3;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809F86B8;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x190, &D_06026EA0, -5.0f);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06026EA0);
    arg0->unk_14C = 0;
    arg0->unk_1D4 = temp_f6;
}

void func_809F86B8(Boss07 *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    Math_ApproachS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer - 0x800), 3, 0x2000);
    func_809F4CBC(this, 2.0f);
    temp_v0 = this->unk_14C;
    this->unk_794 = 0.79999995f;
    this->unk_FA0 = 0.79999995f;
    this->unk_798 = (GlobalContext *)0x3F800000;
    this->unk_FA4 = (GlobalContext *)0x3F800000;
    this->unk_790 = -5.0f;
    this->unk_79C = NULL;
    this->unk_FA8 = NULL;
    this->unk_F9C = -15.0f;
    if (((s32) temp_v0 >= 0xE) && ((s32) temp_v0 < 0x13)) {
        this->unk_79C = (Boss07 *)0x43FA0000;
    }
    if ((s32) this->unk_14C >= 0x12) {
        func_809F7400(this, globalCtx, (s16) (s32) (Rand_ZeroFloat(20.0f) + 20.0f));
        play_sound(0x39EDU);
    }
}

void func_809F87C8(Boss07 *this, GlobalContext *globalCtx) {
    u32 sp2C;
    Actor *sp28;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_f4;

    temp_a0 = &this->unk_190;
    sp24 = temp_a0;
    sp28 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_809F4CBC(this, 2.0f);
    sp28->world.pos.x = this->unk_F80;
    sp28->world.pos.y = this->unk_F84;
    sp28->world.pos.z = this->unk_F88;
    this->actor.flags &= -2;
    this->unk_15A = 0x14;
    this->unk_F7C += 1;
    if ((s32) (s16) (0x2E - this->unk_F7E) < (s32) this->unk_14C) {
        func_8019F1C0(&D_80A09A40, 0x3A56U);
        play_sound(0x39F1U);
        this->actionFunc = func_809F8908;
        SkelAnime_ChangeAnimTransitionStop(sp24, &D_06027270, -5.0f);
        temp_f4 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06027270);
        this->unk_14C = 0;
        this->unk_1D4 = (f32) temp_f4;
    }
    if ((func_800B64FC(globalCtx, 1000.0f, (Vec3f *) &this->actor.world, &sp2C) >= 0.0f) && (sp2C == 1)) {
        func_809F8AB0(this, globalCtx);
    }
}

void func_809F8908(Boss07 *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    u32 sp30;
    SkelAnime *sp2C;
    Actor *temp_v1;
    SkelAnime *temp_a0;
    u8 temp_v0;
    f32 phi_f0;
    f32 phi_f2;

    temp_a0 = &this->unk_190;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    sp2C = temp_a0;
    sp3C = temp_v1;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    this->unk_15A = 0x14;
    if (this->unk_14C == 6) {
        this->unk_F7E = 0;
        if (this == temp_v1->parent) {
            temp_v0 = temp_v1->unk_14B;
            temp_v1->unk_AE8 = 0x65;
            temp_v1->parent = NULL;
            temp_v1->unk_394 = 0;
            if (temp_v0 == 3) {
                phi_f0 = 23.0f;
                phi_f2 = 20.0f;
            } else if (temp_v0 == 1) {
                phi_f0 = 15.0f;
                phi_f2 = 10.0f;
            } else if (temp_v0 == 0) {
                phi_f0 = 10.0f;
                phi_f2 = 3.0f;
            } else {
                phi_f0 = 20.0f;
                phi_f2 = 15.0f;
            }
            sp3C = temp_v1;
            func_800B8D50(globalCtx, NULL, phi_f0, (s16) (this->actor.yawTowardsPlayer + 0x9000), phi_f2, 0x10U);
        }
    }
    if ((s32) this->unk_14C < 7) {
        globalCtx->actorCtx.actorList[2].first->world.pos.x = this->unk_F80;
        globalCtx->actorCtx.actorList[2].first->world.pos.y = this->unk_F84;
        globalCtx->actorCtx.actorList[2].first->world.pos.z = this->unk_F88;
        if ((func_800B64FC(globalCtx, 1000.0f, (Vec3f *) &this->actor.world, &sp30) >= 0.0f) && (sp30 == 1)) {
            func_809F8AB0(this, globalCtx);
        }
    }
    if (func_801378B8(sp2C, this->unk_1D4) != 0) {
        func_809F7400(this, globalCtx, 0);
    }
}

void func_809F8AB0(Boss07 *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = arg0->unk_F7E + 0xA;
    arg0->actionFunc = func_809F8B1C;
    arg0->unk_784 = temp_v0;
    arg0->unk_780 = temp_v0;
    temp_v1 = D_80A09A50 - 1;
    if (temp_v1 < temp_v0) {
        arg0->unk_784 = temp_v1;
        arg0->unk_780 = temp_v1;
    }
    arg0->unk_14C = 0;
    play_sound(0x28E1U);
}

void func_809F8B1C(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime *sp3C;
    Actor *temp_s1;
    SkelAnime *temp_a0;
    s16 temp_f10;
    s32 temp_t0;
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_v0;
    s32 phi_v1_2;

    temp_a0 = &this->unk_190;
    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    sp3C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_809F4CBC(this, 2.0f);
    temp_s1->world.pos.x = this->unk_F80;
    temp_s1->world.pos.y = this->unk_F84;
    temp_s1->world.pos.z = this->unk_F88;
    this->actor.flags &= -2;
    this->unk_15A = 0x14;
    phi_v0 = 0;
    if ((s32) (s16) (0x2E - this->unk_F7E) >= (s32) this->unk_14C) {
        this->unk_F7C += 1;
    }
    phi_v1 = this->unk_784;
    do {
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        phi_v1_2 = phi_v1;
        if (phi_v1 != 0) {
            temp_t0 = phi_v1 - 1;
            this->unk_784 = temp_t0;
            phi_v1_2 = temp_t0;
        }
        phi_v1 = phi_v1_2;
    } while (temp_v0 != 4);
    if (phi_v1_2 == 0) {
        Math_ApproachF(&globalCtx->envCtx.unk_DC, 1.0f, 1.0f, 0.3f);
        Math_ApproachF(&this->unk_32C, 5.0f, 0.5f, 3.0f);
        play_sound(0x309AU);
    } else {
        this->unk_32C = 0.01f;
    }
    if (this->unk_32C > 4.0f) {
        this->actionFunc = func_809F8D04;
        SkelAnime_ChangeAnimTransitionStop(sp3C, &D_0603B330, -10.0f);
        temp_f10 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0603B330);
        this->unk_F7E = 0;
        this->unk_1D4 = (f32) temp_f10;
        if (this == temp_s1->parent) {
            temp_s1->unk_AE8 = 0x65;
            temp_s1->parent = NULL;
            temp_s1->unk_394 = 0;
        }
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, this->actor.focus.pos.x, this->actor.focus.pos.y - 10.0f, this->actor.focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        this->unk_14C = 0;
    }
}

void func_809F8D04(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v1;

    temp_a0 = &this->unk_190;
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    this->unk_15A = 0x14;
    phi_v1 = 0;
    do {
        temp_v0 = this->unk_780;
        temp_v1 = phi_v1 + 1;
        phi_v1 = temp_v1;
        if (temp_v0 != 0) {
            this->unk_780 = temp_v0 - 1;
        }
    } while (temp_v1 != 2);
    if ((s32) this->unk_14C < 0x46) {
        Math_ApproachF(&this->unk_32C, 5.0f, 0.5f, 3.0f);
        Math_ApproachF(&this->unk_330, 2.5f, 0.5f, 2.0f);
        play_sound(0x309AU);
        Math_ApproachF(&globalCtx->envCtx.unk_DC, 1.0f, 1.0f, 0.3f);
    }
    if (func_801378B8(sp20, this->unk_1D4) != 0) {
        func_809F51E8(this, globalCtx, 1);
    }
}

void func_809F8DEC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    if (func_809F91D4 != arg0->unk_144) {
        arg0->unk_144 = func_809F91D4;
        arg0 = arg0;
        SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_0603B330, -10.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0603B330);
    }
    arg0->unk_158 = 0xA;
    Audio_PlayActorSound2(arg0, 0x3A58U);
}

void func_809F8E68(Boss07 *arg0, GlobalContext *arg1) {
    Boss07 *temp_a3;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809F8EC8;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x190, &D_060269EC, -5.0f);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060269EC);
    arg0->unk_14C = 0;
    arg0->unk_1D4 = temp_f6;
}

void func_809F8EC8(Boss07 *this, GlobalContext *globalCtx) {
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    GameInfo *temp_v0_4;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v1;
    s32 temp_t4;
    s32 temp_t8;
    s16 phi_v1;
    s32 phi_v1_2;
    s16 phi_a0;
    GameInfo *phi_v0;
    s32 phi_v1_3;
    s32 phi_a1;
    GameInfo *phi_v0_2;
    GameInfo *phi_v0_3;

    this->unk_15A = 0x14;
    if ((s32) this->unk_14C < (s32) (s16) (gGameInfo->data[1288] + 0xE)) {
        temp_t4 = this->unk_778 + 6;
        this->unk_778 = temp_t4;
        if (temp_t4 >= 0x2D) {
            this->unk_778 = 0x2C;
        }
    }
    if (this->unk_14C == 8) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x12F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0xB4);
    }
    phi_v1 = this->unk_14C;
    if (this->unk_14C == 0xA) {
        Audio_PlayActorSound2((Actor *) this, 0x39CAU);
        phi_v1 = this->unk_14C;
    }
    temp_v0 = gGameInfo;
    temp_a0 = temp_v0->data[1288];
    phi_v1_2 = (s32) phi_v1;
    phi_a0 = temp_a0;
    phi_v0 = temp_v0;
    if (phi_v1 == (s16) (temp_a0 + 0x12)) {
        Audio_PlayActorSound2((Actor *) this, 0x3A54U);
        temp_v0_2 = gGameInfo;
        phi_v1_2 = (s32) this->unk_14C;
        phi_a0 = temp_v0_2->data[1288];
        phi_v0 = temp_v0_2;
    }
    temp_a1 = phi_a0 + 0xE;
    phi_v1_3 = phi_v1_2;
    phi_a1 = (s32) temp_a1;
    phi_v0_2 = phi_v0;
    if ((phi_v1_2 < (s32) temp_a1) || ((s32) (s16) (phi_v0->data[1289] + 0x11) < phi_v1_2)) {
        SkelAnime_FrameUpdateMatrix(&this->unk_190);
        temp_v0_3 = gGameInfo;
        phi_v1_3 = (s32) this->unk_14C;
        phi_a1 = (s32) (s16) (temp_v0_3->data[1288] + 0xE);
        phi_v0_2 = temp_v0_3;
    }
    if ((phi_v1_3 >= phi_a1) && (((s32) (s16) (phi_v0_2->data[1289] + 0x11) >= phi_v1_3) || (phi_v1_3 >= (s32) (s16) (phi_v0_2->data[1290] + 0x15)))) {
        temp_t8 = (this->unk_778 - phi_v0_2->data[1287]) - 5;
        this->unk_778 = temp_t8;
        if (temp_t8 < 0) {
            this->unk_778 = 0;
        }
    }
    Math_ApproachS(&this->actor.shape.rot.y, (s16) ((gGameInfo->data[1256] << 8) + this->actor.yawTowardsPlayer + 0xF00), 3, 0x2000);
    func_809F4CBC(this, 2.0f);
    this->unk_794 = 0.79999995f;
    this->unk_FA0 = 0.79999995f;
    this->unk_798 = (GlobalContext *)0x3F800000;
    this->unk_FA4 = (GlobalContext *)0x3F800000;
    this->unk_790 = -5.0f;
    this->unk_79C = NULL;
    this->unk_FA8 = NULL;
    this->unk_F9C = -15.0f;
    temp_v0_4 = gGameInfo;
    temp_v1 = this->unk_14C;
    phi_v0_3 = temp_v0_4;
    if (((s32) temp_v1 >= (s32) (s16) (temp_v0_4->data[1291] + 0xC)) && ((s32) (s16) (temp_v0_4->data[1292] + 0x11) >= (s32) temp_v1)) {
        this->unk_79C = (bitwise Boss07 *) ((f32) temp_v0_4->data[1254] + 500.0f);
        phi_v0_3 = gGameInfo;
    }
    if ((s32) this->unk_14C >= (s32) (s16) (phi_v0_3->data[1293] + 0x24)) {
        func_809F7400(this, globalCtx, (s16) (s32) (Rand_ZeroFloat(20.0f) + 20.0f));
    }
}

void func_809F91D4(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_190;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_8019F1C0(&D_80A09A40, 0x301BU);
    func_809F4CBC(this, 2.0f);
    this->unk_794 = 0.7f;
    this->unk_FA0 = 0.7f;
    this->unk_790 = -15.0f;
    this->unk_F9C = -15.0f;
    this->unk_798 = (GlobalContext *)0x40000000;
    this->unk_FA4 = (GlobalContext *)0x40000000;
    this->unk_79C = NULL;
    this->unk_FA8 = NULL;
    if (func_801378B8(temp_a0, this->unk_1D4) != 0) {
        func_809F51E8(this, globalCtx, 1);
    }
}

void func_809F9280(Actor *arg0, GlobalContext *arg1, u8 arg2, u8 arg3) {
    void (*sp24)(Actor *, GlobalContext *);
    u8 temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->colChkInfo.health;
    phi_v0 = (s32) (s8) temp_v1;
    if ((s32) (s8) temp_v1 >= 0) {
        arg0->colChkInfo.health = temp_v1 - (arg2 & 0xFF);
        phi_v0 = (s32) (s8) arg0->colChkInfo.health;
    }
    if (phi_v0 <= 0) {
        if (gGameInfo->data[1267] != 0) {
            func_8019F1C0(&D_80A09A40, 0x3A5AU);
        } else {
            Audio_PlayActorSound2(arg0, 0x3A5AU);
        }
        arg0->unk_148 = 1;
        Enemy_StartFinishingBlow(arg1, arg0);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x3A59U);
    if (func_809F93DC != arg0->unk_144) {
        sp24 = func_809F93DC;
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_0601DEB4, -10.0f);
        arg0->unk_144 = func_809F93DC;
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0601DEB4);
        arg0->unk_ABCC = 0;
        return;
    }
    if (arg3 == 0xE) {
        if (arg0->unk_1A8 <= (arg0->unk_1D4 - 5.0f)) {
            arg0->unk_158 = 0x1E;
            return;
        }
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_0601DEB4, -5.0f);
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_809F93DC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    arg0->unk_ABCC = (s32) (arg0->unk_ABCC + 1);
    if ((arg0->unk_ABCC & 0xF) == 0) {
        Audio_PlayActorSound2(arg0, 0x39E3U);
    }
    func_809F4CBC((Boss07 *) arg0, 2.0f);
    arg0->unk_794 = 0.7f;
    arg0->unk_FA0 = 0.7f;
    arg0->unk_790 = -15.0f;
    arg0->unk_F9C = -15.0f;
    arg0->unk_798 = 2.0f;
    arg0->unk_FA4 = 2.0f;
    arg0->unk_79C = 0.0f;
    arg0->unk_FA8 = 0.0f;
    if (func_801378B8(sp24, arg0->unk_1D4) != 0) {
        func_809F51E8((Boss07 *) arg0, arg1, 1);
    }
}

void func_809F94AC(? *arg0, f32 arg1, Actor *arg2, GlobalContext *arg3) {
    u32 sp98;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp68;
    Player *temp_s7;
    PosRot *temp_s0;
    f32 *temp_s1_3;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *phi_s1;
    void *phi_s0;
    s32 phi_s2;
    s32 phi_v0;
    void *phi_s0_2;
    s32 phi_s2_2;

    sp98 = -1;
    temp_s7 = arg3->actorCtx.actorList[2].first;
    if ((arg1 >= 50.0f) && (arg2->unk_15A == 0)) {
        temp_s1 = arg3->actorCtx.actorList[6].first;
        phi_s1 = temp_s1;
        if (temp_s1 != 0) {
            do {
                if (phi_s1->id == 0x82) {
                    temp_v0 = D_80A09A50;
                    phi_s0 = arg0 + 0x78;
                    phi_s2 = 0xA;
                    phi_v0 = temp_v0;
                    if (temp_v0 >= 0xB) {
                        do {
                            temp_f12 = phi_s1->world.pos.x - phi_s0->unk_0;
                            temp_f2 = (phi_s1->world.pos.y + 10.0f) - phi_s0->unk_4;
                            temp_f14 = phi_s1->world.pos.z - phi_s0->unk_8;
                            if (sqrtf((temp_f12 * temp_f12) + (temp_f2 * temp_f2) + (temp_f14 * temp_f14)) < ((f32) gGameInfo->data[1286] + 60.0f)) {
                                phi_s1->unk_19B = 1;
                                func_809F4FF8((bitwise GlobalContext *) temp_f12, (bitwise PosRot *) temp_f14, (s32) arg3, phi_s1 + 0x24, 0xA);
                                phi_v0 = D_80A09A50;
                            }
                            temp_s2 = phi_s2 + 3;
                            phi_s0 += 0x24;
                            phi_s2 = temp_s2;
                        } while (temp_s2 < phi_v0);
                    }
                }
                temp_s1_2 = phi_s1->next;
                phi_s1 = temp_s1_2;
            } while (temp_s1_2 != 0);
        }
    }
    if ((arg1 >= 50.0f) && (arg2->unk_15A == 0) && (((temp_s7->stateFlags3 & 0x100) == 0) || (arg2->unk_14E == 4))) {
        phi_s2_2 = 0xA;
        if ((func_800B64FC(arg3, 1000.0f, arg2 + 0x24, &sp98) >= 0.0f) && (sp98 != 1)) {
            sp98 = -1;
        }
        temp_v0_2 = D_80A09A50;
        phi_s0_2 = arg0 + 0x78;
        if (temp_v0_2 >= 0xB) {
loop_19:
            temp_f12_2 = temp_s7->actor.world.pos.x - phi_s0_2->unk_0;
            temp_f2_2 = ((temp_s7->actor.world.pos.y + 30.0f) - phi_s0_2->unk_4) * 1.75f;
            temp_f14_2 = temp_s7->actor.world.pos.z - phi_s0_2->unk_8;
            temp_s2_2 = phi_s2_2 + 3;
            phi_s2_2 = temp_s2_2;
            if (sqrtf((temp_f12_2 * temp_f12_2) + (temp_f2_2 * temp_f2_2) + (temp_f14_2 * temp_f14_2)) < 140.0f) {
                if ((func_809F86B8 == arg2->unk_144) && (sp98 != 1) && ((temp_s7->stateFlags3 & 0x1000) == 0) && (temp_f0 = arg2->xzDistToPlayer, (temp_f0 >= 520.0f)) && (temp_f0 <= 900.0f)) {
                    if (arg3->grabPlayer(arg3, temp_s7) != 0) {
                        temp_s7->actor.parent = arg2;
                        func_801A5CFC(0x6805U, &temp_s7->actor.projectedPos, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
                        arg2->unk_F7C = 0;
                        arg2->unk_F7E = (s16) (s32) (((arg2->xzDistToPlayer - 300.0f) / 22.0f) + 10.0f);
                        temp_f14_3 = temp_s7->actor.world.pos.x - arg2->unk_7A0;
                        temp_f20 = (temp_s7->actor.world.pos.y - arg2->unk_7A4) + 50.0f;
                        temp_f12_3 = temp_s7->actor.world.pos.z - arg2->unk_7A8;
                        sp68 = sqrtf((temp_f14_3 * temp_f14_3) + (temp_f12_3 * temp_f12_3));
                        arg2->unk_F8C = Math_Acot2F(temp_f12_3, temp_f14_3);
                        arg2->unk_F90 = (f32) -Math_Acot2F(sp68, temp_f20);
                        arg2->unk_144 = func_809F87C8;
                        arg2->unk_14C = 0;
                        arg2->unk_79C = 0.0f;
                        play_sound(0x39E7U);
                    }
                } else if ((temp_s7->stateFlags1 & 0x400000) && (func_809F4C40((bitwise Boss07 *) temp_f12_2, (bitwise GlobalContext *) temp_f14_2, arg2, arg3) != 0)) {
                    temp_s7->unk_B80 = 10.0f;
                    temp_s7->unk_B84 = arg2->yawTowardsPlayer;
                    play_sound(0x1806U);
                    arg2->unk_15A = 4;
                } else {
                    func_800B8D50(arg3, NULL, 5.0f, arg2->shape.rot.y, 0.0f, 8U);
                    arg2->unk_15A = 0x14;
                }
                temp_s0 = &temp_s7->actor.world;
                temp_s1_3 = &sp7C;
                temp_s1_3->unk_0 = temp_s0->pos.x;
                temp_s1_3->unk_4 = (f32) temp_s0->pos.y;
                temp_s1_3->unk_8 = (f32) temp_s0->pos.z;
                sp7C += randPlusMinusPoint5Scaled(30.0f);
                sp80 += randPlusMinusPoint5Scaled(30.0f) + 20.0f;
                sp84 += randPlusMinusPoint5Scaled(30.0f);
                EffectSsHitMark_SpawnFixedScale(arg3, 0, (Vec3f *) temp_s1_3);
                func_809F4FF8(arg3, temp_s0, 7);
                return;
            }
            phi_s0_2 += 0x24;
            if (temp_s2_2 >= temp_v0_2) {
                /* Duplicate return node #33. Try simplifying control flow for better match */
                return;
            }
            goto loop_19;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
    }
}

void func_809F99C4(Actor *arg0, GlobalContext *arg1) {
    void *sp38;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 temp_a2;
    u8 temp_t5;
    u8 temp_v0_9;
    u8 temp_v1;
    void *temp_a1;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *phi_v1;
    s32 phi_v1_2;
    void *phi_t0;
    s32 phi_v0;

    temp_t0 = arg1->actorCtx.actorList[2].first;
    if (arg0->unk_15C == 0) {
        temp_v0 = arg0->unk_6E4;
        temp_v1 = temp_v0->unk_15;
        if ((temp_v1 & 2) != 0) {
            temp_v0->unk_15 = (u8) (temp_v1 & 0xFFFD);
            temp_t0->unk_B84 = (s16) arg0->yawTowardsPlayer;
            temp_t0->unk_B80 = 20.0f;
            sp38 = temp_t0;
            func_809F4FF8(arg1, temp_t0 + 0x24, 0xC);
            play_sound(0x1829U);
        }
        temp_a1 = arg0->unk_404;
        phi_v1 = temp_a1;
        phi_t0 = arg1->actorCtx.actorList[2].first;
        phi_v0 = 0;
loop_4:
        temp_v0_2 = phi_v0 + 0x40;
        phi_v0 = temp_v0_2;
        if ((phi_v1->unk_16 & 2) != 0) {
            temp_a1->unk_16 = (u8) (temp_a1->unk_16 & ~2);
            temp_v0_3 = arg0->unk_404;
            temp_v0_3->unk_56 = (u8) (temp_v0_3->unk_56 & ~2);
            temp_v0_4 = arg0->unk_404;
            temp_v0_4->unk_96 = (u8) (temp_v0_4->unk_96 & ~2);
            phi_v1_2 = 0xC0;
            do {
                temp_v0_5 = arg0->unk_404 + phi_v1_2;
                temp_v0_5->unk_16 = (u8) (temp_v0_5->unk_16 & ~2);
                temp_v0_6 = arg0->unk_404 + phi_v1_2;
                temp_v0_6->unk_56 = (u8) (temp_v0_6->unk_56 & ~2);
                temp_v0_7 = arg0->unk_404 + phi_v1_2;
                temp_v0_7->unk_96 = (u8) (temp_v0_7->unk_96 & ~2);
                temp_v0_8 = arg0->unk_404 + phi_v1_2;
                temp_v1_2 = phi_v1_2 + 0x100;
                temp_v0_8->unk_D6 = (u8) (temp_v0_8->unk_D6 & ~2);
                phi_v1_2 = temp_v1_2;
            } while (temp_v1_2 != 0x2C0);
            if (arg0->unk_1804 == 0xA) {
                arg0->unk_1806 = 0;
            }
            temp_t5 = arg0->colChkInfo.damageEffect;
            switch (temp_t5) {
            case 3:
                arg0->unk_1805 = 0xA;
                break;
            case 2:
                arg0->unk_1805 = 1;
                break;
            case 4:
                arg0->unk_1805 = 0x14;
                sp38 = arg1->actorCtx.actorList[2].first;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
block_16:
                phi_t0 = sp38;
                break;
            case 10:
                arg0->unk_1805 = 0x28;
                sp38 = arg1->actorCtx.actorList[2].first;
                Audio_PlayActorSound2(arg0, 0x389EU);
                goto block_16;
            case 9:
                arg0->unk_1805 = 0x1E;
                sp38 = arg1->actorCtx.actorList[2].first;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 3, (s16) 4);
                goto block_16;
            }
            temp_v1_3 = arg0->unk_144;
            temp_a2 = arg0->colChkInfo.damage;
            if ((func_809F91D4 == temp_v1_3) || (func_809F93DC == temp_v1_3)) {
                temp_v0_9 = arg0->colChkInfo.damageEffect;
                if ((func_809F91D4 == temp_v1_3) && (temp_v0_9 != 0xE) && (temp_v0_9 != 0xD) && (temp_v0_9 != 9) && (temp_v0_9 != 0xC)) {
                    func_809F8DEC(arg0, arg1, temp_a2);
                    arg0->unk_15C = 6;
                    return;
                }
                arg0->unk_15E = 0xF;
                if (temp_v0_9 == 0xC) {
                    arg0->unk_15C = 0xF;
                } else {
                    arg0->unk_15C = 5;
                }
                func_809F9280(arg0, arg1, temp_a2, arg0->colChkInfo.damageEffect);
                return;
            }
            arg0->unk_15C = 0xF;
            sp38 = phi_t0;
            func_809F8DEC(arg0, arg1, temp_a2);
            arg0->unk_F7E = 0;
            if (arg0 == phi_t0->parent) {
                phi_t0->unk_AE8 = 0x65;
                phi_t0->parent = NULL;
                phi_t0->unk_394 = 0;
                return;
            }
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return;
        }
        phi_v1 += 0x40;
        if (temp_v0_2 == 0x2C0) {
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return;
        }
        goto loop_4;
    }
}

void func_809F9CEC(Actor *arg0, GlobalContext *arg1) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 *temp_s4;
    f32 *temp_s5;
    s32 temp_s0;
    void *temp_v0;
    s32 phi_s0;

    Audio_PlaySoundAtPosition(arg1, arg0 + 0x334, 0x1E, 0x28CBU);
    temp_s5 = &sp80;
    temp_s4 = &sp8C;
    phi_s0 = 0;
    do {
        sp80 = randPlusMinusPoint5Scaled(7.0f);
        sp88 = randPlusMinusPoint5Scaled(7.0f);
        sp84 = Rand_ZeroFloat(6.0f) + 4.0f;
        temp_v0 = arg0 + ((phi_s0 / 2) * 0xC);
        sp8C = temp_v0->unk_334 + sp80;
        sp90 = temp_v0->unk_338 + sp84;
        sp94 = temp_v0->unk_33C + sp88;
        EffectSsEnIce_Spawn(arg1, (Vec3f *) temp_s4, Rand_ZeroFloat(1.0f) + 1.5f, (Vec3f *) temp_s5, &D_80A07FD4, &D_80A07FCC, &D_80A07FD0, 0x1E);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x1E);
}

void func_809F9E94(Actor *arg0) {
    s16 temp_v0;
    s16 temp_v0_3;
    u8 temp_v0_2;

    temp_v0 = arg0->unk_1806;
    if (temp_v0 != 0) {
        arg0->unk_1806 = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = arg0->unk_1805;
    switch (temp_v0_2) {
    case 0:
        arg0->unk_1804 = 0;
        arg0->unk_1806 = 0;
        arg0->unk_1800 = 0.0f;
        return;
    case 1:
        arg0->unk_1804 = 0;
        arg0->unk_1806 = 0x28;
        arg0->unk_1805 = (u8) (temp_v0_2 + 1);
        arg0->unk_1800 = 1.0f;
        arg0->unk_17F8 = 0.0f;
        func_800BCB70(arg0, 0x4000, 0x78, 0, (s16) 0x3C);
        /* fallthrough */
    case 2:
        if (arg0->unk_1806 == 0) {
            Math_ApproachZeroF(arg0 + 0x1800, 1.0f, 0.02f);
            if (arg0->unk_1800 == 0.0f) {
                arg0->unk_1805 = 0U;
                return;
            }
        default:
            return;
        }
        Math_ApproachF(arg0 + 0x17F8, 1.0f, 0.1f, 0.5f);
        return;
    case 10:
        arg0->unk_1804 = 0xB;
        arg0->unk_1806 = 0x28;
        arg0->unk_1805 = (u8) (temp_v0_2 + 1);
        arg0->unk_1800 = 1.0f;
        arg0->unk_17FC = 1.0f;
        arg0->unk_17F8 = 0.0f;
        /* fallthrough */
    case 11:
        temp_v0_3 = arg0->unk_1806;
        if (temp_v0_3 == 0) {
            func_809F9CEC(arg0);
            arg0->unk_1805 = 0U;
            return;
        }
        if (temp_v0_3 == 0x32) {
            arg0->unk_1804 = 0xA;
        }
        Math_ApproachF(arg0 + 0x17F8, 1.0f, 1.0f, 0.08f);
        Math_ApproachF(arg0 + 0x17FC, 1.0f, 0.05f, 0.05f);
        return;
    case 20:
        arg0->unk_1804 = 0x14;
        arg0->unk_1806 = 0x28;
        arg0->unk_17F8 = 1.0f;
block_18:
        arg0->unk_1800 = 1.0f;
        arg0->unk_1805 = 0x15U;
    case 21:
        if (arg0->unk_1806 == 0) {
            Math_ApproachZeroF(arg0 + 0x17F8, 1.0f, 0.03f);
            if (arg0->unk_17F8 == 0.0f) {
                arg0->unk_1805 = 0U;
block_27:
                arg0->unk_1800 = 0.0f;
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return;
        }
        Math_ApproachF(arg0 + 0x17F8, 1.5f, 0.5f, 0.5f);
        return;
    case 30:
        arg0->unk_1804 = 0x15;
        arg0->unk_1806 = 0x28;
        arg0->unk_17F8 = 3.0f;
        goto block_18;
    case 40:
        arg0->unk_1804 = 0x1E;
        arg0->unk_1806 = 0x32;
        arg0->unk_1800 = 1.0f;
        arg0->unk_1805 = (u8) (temp_v0_2 + 1);
        arg0->unk_17F8 = (f32) (((f32) gGameInfo->data[1266] * 0.1f) + 1.0f);
        /* fallthrough */
    case 41:
        if (arg0->unk_1806 == 0) {
            Math_ApproachZeroF(arg0 + 0x17F8, 1.0f, 0.05f);
            if (arg0->unk_17F8 == 0.0f) {
                arg0->unk_1805 = 0U;
                goto block_27;
            }
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
        return;
    }
}

void Boss07_Update(Actor *thisx, GlobalContext *globalCtx) {
    Boss07 *sp80;
    Actor *sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    void (*sp2C)(Boss07 *, GlobalContext *);
    CollisionCheckContext *sp28;
    ColliderJntSph *temp_s0;
    ColliderJntSphElement *temp_v0_7;
    ColliderJntSphElement *temp_v0_8;
    ColliderJntSphElement *temp_v0_9;
    CollisionCheckContext *temp_a1;
    GameInfo *temp_v0_16;
    f32 *temp_a0;
    f32 temp_f2;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 temp_v0_17;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s32 temp_a1_2;
    s32 temp_ra;
    s32 temp_s0_2;
    s32 temp_v0_15;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 temp_t6;
    u8 temp_v0_6;
    void (*temp_v0_14)(Boss07 *, GlobalContext *);
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    Boss07 *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_s0;
    Boss07 *this = (Boss07 *) thisx;

    sp80 = this;
    sp78 = globalCtx->actorCtx.actorList[2].first;
    globalCtx->envCtx.unk_C1 = 2;
    globalCtx->envCtx.unk_C2 = 0;
    this->actor.hintId = 0x34;
    temp_a0 = &globalCtx->envCtx.unk_DC;
    globalCtx = globalCtx;
    Math_ApproachF(temp_a0, 0.0f, 1.0f, 0.03f);
    this->unk_149 = 1;
    Math_Vec3f_Copy(&D_80A09A40, &this->actor.projectedPos);
    if (gGameInfo->data[1311] == 0) {
        this->unk_174 = 0;
        this->unk_14C += 1;
        Actor_SetScale((Actor *) this, 0.015f);
        Math_ApproachZeroF(&this->unk_184, 1.0f, 0.02f);
        Math_ApproachZeroF(&this->unk_188, 1.0f, 0.02f);
        phi_v0 = this;
        phi_v1 = 0;
        do {
            temp_a0_2 = phi_v0->unk_150;
            temp_v1 = phi_v1 + 2;
            phi_v1 = temp_v1;
            if (temp_a0_2 != 0) {
                phi_v0->unk_150 = temp_a0_2 - 1;
            }
            phi_v0 += 2;
        } while (temp_v1 != 6);
        temp_v0 = this->unk_15A;
        if (temp_v0 != 0) {
            this->unk_15A = temp_v0 - 1;
        }
        temp_v0_2 = this->unk_158;
        if (temp_v0_2 != 0) {
            this->unk_158 = temp_v0_2 - 1;
        }
        temp_v0_3 = this->unk_15C;
        if (temp_v0_3 != 0) {
            this->unk_15C = temp_v0_3 - 1;
        }
        temp_v0_4 = this->unk_15E;
        if (temp_v0_4 != 0) {
            this->unk_15E = temp_v0_4 - 1;
        }
        temp_v0_5 = this->unk_156;
        if (temp_v0_5 != 0) {
            this->unk_156 = temp_v0_5 - 1;
        }
        Math_ApproachZeroF(&this->unk_32C, 1.0f, 0.2f);
        Math_ApproachZeroF(&this->unk_330, 1.0f, 0.04f);
        this->actionFunc(this, globalCtx);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 100.0f, 100.0f, 5U);
        temp_v0_6 = this->unk_14F;
        temp_t6 = temp_v0_6 - 1;
        if (temp_v0_6 != 0) {
            this->unk_14F = temp_t6;
            if ((func_809F805C == this->actionFunc) && ((temp_t6 & 0xFF) == 0)) {
                play_sound(0x39CBU);
            }
        }
        sp2C = func_809F805C;
    } else {
        D_80A09A50 = 0x2D;
        sp2C = func_809F805C;
    }
    func_809F94AC(&this->unk_7AC, (bitwise f32) this->unk_79C, (Actor *) this, globalCtx);
    func_809F94AC(&this->unk_FB8, (bitwise f32) this->unk_FA8, (Actor *) this, globalCtx);
    if (this->unk_158 != 0) {
        temp_v0_7 = this->unk_3E8.elements;
        temp_v0_7->info.bumperFlags &= 0xFFFD;
        temp_v0_8 = this->unk_3E8.elements;
        temp_v0_8->unk_56 = (u8) (temp_v0_8->unk_56 & 0xFFFD);
        temp_v0_9 = this->unk_3E8.elements;
        temp_v0_9->unk_96 = (u8) (temp_v0_9->unk_96 & 0xFFFD);
        phi_v1_2 = 0xC0;
        do {
            temp_v0_10 = this->unk_3E8.elements + phi_v1_2;
            temp_v0_10->unk_16 = (u8) (temp_v0_10->unk_16 & ~2);
            temp_v0_11 = this->unk_3E8.elements + phi_v1_2;
            temp_v0_11->unk_56 = (u8) (temp_v0_11->unk_56 & ~2);
            temp_v0_12 = this->unk_3E8.elements + phi_v1_2;
            temp_v0_12->unk_96 = (u8) (temp_v0_12->unk_96 & ~2);
            temp_v0_13 = this->unk_3E8.elements + phi_v1_2;
            temp_v1_2 = phi_v1_2 + 0x100;
            temp_v0_13->unk_D6 = (u8) (temp_v0_13->unk_D6 & ~2);
            phi_v1_2 = temp_v1_2;
        } while (temp_v1_2 != 0x2C0);
    }
    func_809F99C4((Actor *) this, globalCtx);
    if (this->unk_15C != 0) {
        this->unk_778 = 0;
    }
    temp_s0 = &this->unk_3E8;
    temp_a1 = &globalCtx->colChkCtx;
    sp28 = temp_a1;
    CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_s0);
    CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_s0);
    if ((sp2C == this->actionFunc) && (this->unk_14E == 7) && ((s32) this->unk_14C >= 6)) {
        CollisionCheck_SetAT(globalCtx, sp28, (Collider *) &this->unk_6C8);
    } else {
        if ((this->unk_174 != 0) && (func_809F4C40(this, globalCtx) != 0)) {
            if ((sp78->unk_D57 == 4) && (sp78->unk_147 != 0xC)) {
                if ((this->actor.xzDistToPlayer >= 400.0f) && (Rand_ZeroOne() < 0.5f)) {
                    func_809F7AB4(this, globalCtx);
                } else {
                    func_809F51E8(this, globalCtx, 0);
                }
            }
            if ((sp78->unk_ADC != 0) && (this->actor.xzDistToPlayer <= 150.0f)) {
                func_809F51E8(this, globalCtx, 0);
            }
        }
        temp_v0_14 = this->actionFunc;
        if ((func_809F91D4 != temp_v0_14) && (func_809F93DC != temp_v0_14)) {
            temp_v0_15 = sp78->unk_A74;
            if (((temp_v0_15 & 0x1000) != 0) && ((temp_v0_15 << 0xC) >= 0) && (this->actor.xzDistToPlayer <= 250.0f)) {
                func_809F51E8(this, globalCtx, 0);
            }
        }
    }
    if (this->unk_174 != 0) {
        func_809F52CC(this, globalCtx);
    }
    func_809F5494(this, globalCtx);
    temp_v0_16 = gGameInfo;
    if ((temp_v0_16->data[1336] != 0) || (this->unk_148 != 0)) {
        temp_v0_16->data[1336] = 0;
        this->unk_148 = 0;
        func_809F64F4(this, globalCtx);
    }
    temp_ra = this->unk_1D8;
    if (temp_ra != 0) {
        sp74 = gSegments[(u32) ((s32) &D_06040930 * 0x10) >> 0x1C] + ((s32) &D_06040930 & 0xFFFFFF) + 0x80000000;
        sp70 = gSegments[(u32) ((s32) &D_0603ED30 * 0x10) >> 0x1C] + ((s32) &D_0603ED30 & 0xFFFFFF) + 0x80000000;
        sp6C = gSegments[(u32) ((s32) &D_06040130 * 0x10) >> 0x1C] + ((s32) &D_06040130 & 0xFFFFFF) + 0x80000000;
        sp68 = gSegments[(u32) ((s32) &D_06041B30 * 0x10) >> 0x1C] + ((s32) &D_06041B30 & 0xFFFFFF) + 0x80000000;
        sp64 = gSegments[(u32) ((s32) &D_0603F130 * 0x10) >> 0x1C] + ((s32) &D_0603F130 & 0xFFFFFF) + 0x80000000;
        sp60 = gSegments[(u32) ((s32) &D_06042330 * 0x10) >> 0x1C] + ((s32) &D_06042330 & 0xFFFFFF) + 0x80000000;
        sp5C = gSegments[(u32) ((s32) &D_06040B30 * 0x10) >> 0x1C] + ((s32) &D_06040B30 & 0xFFFFFF) + 0x80000000;
        sp58 = gSegments[(u32) ((s32) &D_06043330 * 0x10) >> 0x1C] + ((s32) &D_06043330 & 0xFFFFFF) + 0x80000000;
        sp54 = gSegments[(u32) ((s32) &D_0603DD30 * 0x10) >> 0x1C] + ((s32) &D_0603DD30 & 0xFFFFFF) + 0x80000000;
        phi_s0 = 0;
        if (temp_ra > 0) {
            do {
                sp44 = (s32) Rand_ZeroFloat(255.99f);
                sp4C = (s32) Rand_ZeroFloat(511.99f);
                sp48 = (s32) Rand_ZeroFloat(1023.99f);
                temp_v1_3 = (s32) Rand_ZeroFloat(2047.99f) * 2;
                *(sp54 + temp_v1_3) = 0;
                *(sp58 + temp_v1_3) = 0;
                *(sp5C + temp_v1_3) = 0;
                *(sp60 + temp_v1_3) = 0;
                *(sp64 + temp_v1_3) = 0;
                temp_a1_2 = sp48 * 2;
                *(sp68 + temp_a1_2) = 0;
                *(sp6C + temp_a1_2) = 0;
                *(sp70 + (sp4C * 2)) = 0;
                *(sp74 + (sp44 * 2)) = 0;
                temp_s0_2 = phi_s0 + 1;
                phi_s0 = temp_s0_2;
            } while (temp_s0_2 < sp80->unk_1D8);
        }
    }
    func_809F9E94((Actor *) this, globalCtx);
    temp_v0_17 = this->unk_156;
    if ((temp_v0_17 == 1) || (temp_v0_17 == 4)) {
        Audio_PlayActorSound2((Actor *) this, 0x39E3U);
    }
    if (sp78->world.pos.y > 100.0f) {
        temp_f2 = (f32) gGameInfo->data[1330] + -850.0f;
        if (sp78->world.pos.z < temp_f2) {
            sp78->world.pos.z = temp_f2;
        }
    }
    if (sp78->world.pos.y < -300.0f) {
        sp78->world.pos.z = 0.0f;
        sp78->world.pos.y = 0.0f;
        sp78->world.pos.x = 0.0f;
    }
}

void func_809FAA44(Boss07 *arg0, GlobalContext *arg1, ? *arg2, ? *arg3, ? *arg4, f32 *arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, ? *argA, s16 argB, f32 argC, s32 argD) {
    f32 spC0;
    ? spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA0;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp7C;
    GameInfo *temp_v0;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 phi_s2;
    f32 *phi_s0;
    s32 phi_s2_2;
    s32 phi_s6;
    void *phi_s1;
    void *phi_s0_2;
    f32 phi_f0;
    void *phi_s4;

    spB8.unk_0 = (s32) D_80A07FE0.unk_0;
    spB8.unk_4 = (s32) D_80A07FE0.unk_4;
    spB8.unk_8 = (s32) D_80A07FE0.unk_8;
    spC0 = 22.0f * argC;
    phi_s2 = 0;
    phi_s0 = arg5;
    if ((s32) D_80A09A50.unk_2 > 0) {
        do {
            if (phi_s2 == 0) {
                arg3->unk_0 = (s32) arg2->unk_0;
                arg3->unk_4 = (s32) arg2->unk_4;
                arg3->unk_8 = (s32) arg2->unk_8;
            } else {
                Math_ApproachF(phi_s0, 0.0f, 1.0f, arg8);
                Math_ApproachF(phi_s0 + 4, 0.0f, 1.0f, arg8);
                Math_ApproachF(phi_s0 + 8, 0.0f, 1.0f, arg8);
            }
            temp_s2 = phi_s2 + 1;
            phi_s2 = temp_s2;
            phi_s0 += 0xC;
        } while (temp_s2 < (s32) D_80A09A50.unk_2);
    }
    spB4 = 20.0f;
    Matrix_RotateY(argA->unk_2, 0U);
    SysMatrix_InsertXRotation_s(argA->unk_0, 1);
    SysMatrix_InsertZRotation_s(argA->unk_4, 1);
    Matrix_RotateY(0x4000, 1U);
    SysMatrix_GetStateTranslationAndScaledZ(spB4, (Vec3f *) &sp94);
    if (argB != 0) {
        spB4 = 200.0f;
        SysMatrix_InsertYRotation_f(arg0->unk_F8C, 0);
        SysMatrix_RotateStateAroundXAxis(arg0->unk_F90);
    } else {
        spB4 = arg9;
    }
    SysMatrix_GetStateTranslationAndScaledZ(spB4, (Vec3f *) &sp7C);
    phi_s2_2 = 1;
    phi_s6 = 0;
    phi_s1 = arg3 + 0xC;
    phi_s0_2 = arg5 + 0xC;
    phi_s4 = arg4 + 0xC;
    if ((s32) D_80A09A50.unk_2 >= 2) {
        do {
            if (phi_s2_2 < 6) {
                temp_f0 = (f32) (6 - phi_s2_2);
                sp88 = temp_f0 * sp94 * 0.2f;
                sp8C = temp_f0 * sp98 * 0.2f;
                sp90 = temp_f0 * sp9C * 0.2f;
            } else if (argB != 0) {
                if ((phi_s2_2 >= (s32) argB) && (phi_s2_2 < (s32) (s16) (argB + arg0->unk_F7C))) {
                    sp8C = 0.0f;
                    temp_f20 = (f32) phi_s6 * 1.4f;
                    sp88 = __sinf((((f32) arg0->actor.yawTowardsPlayer * 3.1415927f) / 32768.0f) + temp_f20) * 100.0f;
                    sp90 = __cosf((((f32) arg0->actor.yawTowardsPlayer * 3.1415927f) / 32768.0f) + temp_f20) * 100.0f;
                    sp7C.unk_0 = D_801D15B0.x;
                    sp7C.unk_4 = (f32) D_801D15B0.y;
                    sp7C.unk_8 = (f32) D_801D15B0.z;
                    phi_s6 += 1;
                }
            } else {
                sp88.unk_0 = D_801D15B0.x;
                sp88.unk_4 = (f32) D_801D15B0.y;
                sp88.unk_8 = (f32) D_801D15B0.z;
            }
            temp_f24 = ((phi_s1->unk_0 + phi_s0_2->unk_0) - phi_s1->unk_-C) + sp88 + sp7C;
            temp_f0_2 = phi_s1->unk_4 + phi_s0_2->unk_4 + arg6 + sp8C + sp80;
            phi_f0 = temp_f0_2;
            if (temp_f0_2 < 2.0f) {
                phi_f0 = 2.0f;
            }
            temp_f26 = phi_f0 - phi_s1->unk_-8;
            temp_f20_2 = ((phi_s1->unk_8 + phi_s0_2->unk_8) - phi_s1->unk_-4) + sp90 + sp84;
            temp_f22 = Math_Acot2F(temp_f20_2, temp_f24);
            temp_f20_3 = -Math_Acot2F(sqrtf((temp_f24 * temp_f24) + (temp_f20_2 * temp_f20_2)), temp_f26);
            phi_s4->unk_-8 = temp_f22;
            phi_s4->unk_-C = temp_f20_3;
            SysMatrix_InsertYRotation_f(temp_f22, 0);
            SysMatrix_RotateStateAroundXAxis(temp_f20_3);
            SysMatrix_GetStateTranslationAndScaledZ(spC0, (Vec3f *) &spA0);
            temp_f24_2 = phi_s1->unk_0;
            temp_f26_2 = phi_s1->unk_4;
            temp_f20_4 = phi_s1->unk_8;
            phi_s1->unk_0 = (f32) (phi_s1->unk_-C + spA0);
            phi_s1->unk_4 = (f32) (phi_s1->unk_-8 + spA4);
            phi_s1->unk_8 = (f32) (phi_s1->unk_-4 + spA8);
            if ((phi_s2_2 != 0) && (argB == phi_s2_2)) {
                temp_a0 = &spAC;
                spAC = 15.0f;
                spB0 = -30.0f;
                spB4 = -12.0f;
                SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &spA0);
                arg0->unk_F80 = phi_s1->unk_0 + spA0;
                arg0->unk_F84 = phi_s1->unk_4 + spA4;
                arg0->unk_F88 = phi_s1->unk_8 + spA8;
            } else if ((argD == 0) && (func_809F8EC8 == arg0->actionFunc)) {
                temp_v0 = gGameInfo;
                if (phi_s2_2 == (((temp_v0->data[1338] + D_80A09A50.unk_0) - arg0->unk_778) + 1)) {
                    temp_a0_2 = &spAC;
                    spAC = (f32) temp_v0->data[1308];
                    spB0 = (f32) temp_v0->data[1309];
                    spB4 = (f32) temp_v0->data[1310];
                    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_2, (Vec3f *) &spA0);
                    arg0->unk_F80 = phi_s1->unk_0 + spA0;
                    arg0->unk_F84 = phi_s1->unk_4 + spA4;
                    arg0->unk_F88 = phi_s1->unk_8 + spA8;
                }
            }
            temp_s2_2 = phi_s2_2 + 1;
            phi_s0_2->unk_0 = (f32) ((phi_s1->unk_0 - temp_f24_2) * arg7);
            phi_s0_2->unk_4 = (f32) ((phi_s1->unk_4 - temp_f26_2) * arg7);
            phi_s0_2->unk_8 = (f32) ((phi_s1->unk_8 - temp_f20_4) * arg7);
            phi_s2_2 = temp_s2_2;
            if (phi_s0_2->unk_0 > 200.0f) {
                phi_s0_2->unk_0 = 200.0f;
            }
            if (phi_s0_2->unk_0 < -200.0f) {
                phi_s0_2->unk_0 = -200.0f;
            }
            if (phi_s0_2->unk_4 > 200.0f) {
                phi_s0_2->unk_4 = 200.0f;
            }
            if (phi_s0_2->unk_4 < -200.0f) {
                phi_s0_2->unk_4 = -200.0f;
            }
            if (phi_s0_2->unk_8 > 200.0f) {
                phi_s0_2->unk_8 = 200.0f;
            }
            if (phi_s0_2->unk_8 < -200.0f) {
                phi_s0_2->unk_8 = -200.0f;
            }
            phi_s1 += 0xC;
            phi_s0_2 += 0xC;
            phi_s4 += 0xC;
        } while (temp_s2_2 < (s32) D_80A09A50.unk_2);
    }
}

void func_809FB114(Boss07 *arg0, GraphicsContext **arg1, ? *arg2, ? *arg3, f32 arg4, s32 arg5) {
    ? *sp78;
    ? *sp74;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 phi_s6;
    ? *phi_s2;
    ? *phi_s4;
    s32 phi_s1;
    f32 phi_f12;
    ? *phi_s2_2;
    ? *phi_s4_2;
    s32 phi_s1_2;
    f32 phi_f12_2;

    sp78 = arg2;
    sp74 = arg3;
    temp_a0 = *arg1;
    temp_s3 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0->words.w1 = (u32) &D_0602EEC8;
    temp_v0_2 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_v0_2->words.w1 = ((gGameInfo->data[1584] + 0x2D) << 0x18) | 0x230000 | 0x4BFF;
    phi_s6 = 0;
    phi_s2 = arg2;
    phi_s4 = arg3;
    if (arg5 == 0) {
        phi_s6 = arg0->unk_778;
    }
    phi_s1 = 0;
    if (((D_80A09A50 - phi_s6) - 1) > 0) {
        do {
            SysMatrix_InsertTranslation(phi_s2->unk_0, 0.0f, phi_s2->unk_8, 0);
            Matrix_Scale(1.0f, 0.0f, 1.0f, 1);
            SysMatrix_InsertYRotation_f(phi_s4->unk_4, 1);
            SysMatrix_RotateStateAroundXAxis(phi_s4->unk_0);
            if (phi_s1 >= 0x19) {
                phi_f12 = 0.025f;
            } else {
                phi_f12 = ((f32) (0x18 - phi_s1) * 1.0f * 0.001f) + 0.025f;
            }
            Matrix_Scale(phi_f12, phi_f12, ((2.0f * arg4) + 0.5f) * 0.01f, 1);
            temp_v0_3 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDA380003;
            temp_v0_3->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_4 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) &D_0602EEF8;
            temp_v0_4->words.w0 = 0xDE000000;
            temp_s1 = phi_s1 + 1;
            phi_s2 += 0xC;
            phi_s4 += 0xC;
            phi_s1 = temp_s1;
        } while (temp_s1 < ((D_80A09A50 - phi_s6) - 1));
    }
    temp_v0_5 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) &D_0602EE50;
    temp_v0_6 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xFA000000;
    temp_v0_6->words.w1 = 0x9B9B50FF;
    phi_s2_2 = sp78;
    phi_s4_2 = sp74;
    phi_s1_2 = 0;
    if (((D_80A09A50 - phi_s6) - 1) > 0) {
        do {
            SysMatrix_InsertTranslation(phi_s2_2->unk_0, phi_s2_2->unk_4, phi_s2_2->unk_8, 0);
            SysMatrix_InsertYRotation_f(phi_s4_2->unk_4, 1);
            SysMatrix_RotateStateAroundXAxis(phi_s4_2->unk_0);
            if (phi_s1_2 >= 0x19) {
                phi_f12_2 = 0.025f;
            } else {
                phi_f12_2 = ((f32) (0x18 - phi_s1_2) * 1.0f * 0.001f) + 0.025f;
            }
            Matrix_Scale(phi_f12_2, phi_f12_2, ((2.0f * arg4) + 0.5f) * 0.01f, 1);
            temp_v0_7 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDA380003;
            temp_v0_7->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_8 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_8 + 8;
            temp_v0_8->words.w1 = (u32) &D_0602EEF8;
            temp_v0_8->words.w0 = 0xDE000000;
            temp_s1_2 = phi_s1_2 + 1;
            phi_s2_2 += 0xC;
            phi_s4_2 += 0xC;
            phi_s1_2 = temp_s1_2;
        } while (temp_s1_2 < ((D_80A09A50 - phi_s6) - 1));
    }
}

s32 func_809FB504(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x1A) {
        arg4->x += arg5->unk_17DA;
        arg4->y += arg5->unk_17D8;
        arg4->z += arg5->unk_17DC;
    }
    return 0;
}

void func_809FB55C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s8 sp6B;
    ? sp5C;
    ? sp1C;
    s8 *sp18;
    s8 *temp_t9;
    s8 temp_a3;
    s8 temp_a3_2;

    temp_a3 = *(&D_80A08090 + arg1);
    if ((s32) temp_a3 >= 0) {
        SysMatrix_GetStateTranslation(arg4 + (temp_a3 * 0xC) + 0x334);
    }
    temp_t9 = arg1 + &D_80A07FEC;
    sp18 = temp_t9;
    temp_a3_2 = *temp_t9;
    if ((s32) temp_a3_2 >= 0) {
        if (arg4->unk_158 != 0) {
            sp6B = temp_a3_2;
            SysMatrix_GetStateTranslationAndScaledZ(100000.0f, (Vec3f *) &sp5C);
        } else {
            sp6B = temp_a3_2;
            SysMatrix_MultiplyVector3fByState((temp_a3_2 * 0xC) + &D_80A0800C, (Vec3f *) &sp5C);
        }
        func_809F4BB0(sp6B, arg4 + 0x3E8, &sp5C, sp6B);
    }
    if (sp18 == &D_80A08006) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
    }
    if (sp18 == &D_80A07FFF) {
        SysMatrix_MultiplyVector3fByState(&D_80A080B0, arg4 + 0x7A0);
    }
    if (sp18 == &D_80A07FFD) {
        SysMatrix_CopyCurrentState((MtxF *) &sp1C);
        func_8018219C((MtxF *) &sp1C, arg4 + 0x788, 0);
    }
    if (sp18 == &D_80A08004) {
        SysMatrix_MultiplyVector3fByState(&D_80A080B0, arg4 + 0xFAC);
    }
    if (sp18 == &D_80A08002) {
        SysMatrix_CopyCurrentState((MtxF *) &sp1C);
        func_8018219C((MtxF *) &sp1C, arg4 + 0xF94, 0);
    }
    if (sp18 == &D_80A07FF8) {
        SysMatrix_GetStateTranslation((Vec3f *) &sp5C);
        func_809F4BB0(0, arg4 + 0x6C8, &sp5C);
    }
}

void func_809FB728(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    f32 temp_f14;

    if ((arg1 == 2) || (arg1 == 4) || (arg1 == 6) || (arg1 == 7) || (arg1 == 9) || (arg1 == 0xB) || (arg1 == 0xC) || (arg1 == 0x10) || (arg1 == 0x12) || (arg1 == 0x13) || (arg1 == 0x15) || (arg1 == 0x17) || (arg1 == 0x18) || (arg1 == 0x1A)) {
        temp_f14 = arg2->unk_17E0;
        Matrix_Scale(1.0f, temp_f14, temp_f14, 1);
    }
}

void func_809FB7D4(Boss07 *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s2;
    MtxF *temp_s7;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s4;
    void *temp_v0_9;
    Boss07 *phi_s1;
    s32 phi_s4;
    void *phi_s1_2;
    s32 phi_s3;
    s32 phi_s3_2;

    temp_a2 = *arg1;
    temp_s2 = temp_a2;
    if ((arg0->unk_32C > 0.0f) || (arg0->unk_330 > 0.0f)) {
        func_8012C2DC(temp_a2);
        temp_v0 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = -1;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0xFFFF0000;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_s7 = arg1 + 0x187FC;
        phi_s1 = arg0;
        phi_s4 = 0;
        if (arg0->unk_32C > 0.0f) {
            temp_v0_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = (u32) &D_04023348;
            temp_v0_3->words.w0 = 0xDE000000;
            do {
                SysMatrix_InsertTranslation(phi_s1->unk_334.x, phi_s1->unk_334.y, phi_s1->unk_334.z, 0);
                SysMatrix_NormalizeXYZ(temp_s7);
                temp_f12 = arg0->unk_32C;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                SysMatrix_InsertZRotation_f(Rand_ZeroFloat(6.2831855f), 1);
                temp_v0_4 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xDA380003;
                temp_v0_4->words.w1 = Matrix_NewMtx(temp_s2);
                temp_v0_5 = temp_s2->polyXlu.p;
                temp_s4 = phi_s4 + 0xC;
                temp_s2->polyXlu.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = (u32) &D_04023428;
                temp_v0_5->words.w0 = 0xDE000000;
                phi_s1 += 0xC;
                phi_s4 = temp_s4;
            } while (temp_s4 < 0xB4);
            temp_s3 = arg0->unk_780;
            phi_s3 = temp_s3;
            if (temp_s3 >= arg0->unk_784) {
                phi_s1_2 = arg0 + (temp_s3 * 0xC);
                do {
                    SysMatrix_InsertTranslation(phi_s1_2->unk_7AC, phi_s1_2->unk_7B0, phi_s1_2->unk_7B4, 0);
                    SysMatrix_NormalizeXYZ(temp_s7);
                    Matrix_Scale(1.5f, 1.5f, 1.5f, 1);
                    SysMatrix_InsertZRotation_f(Rand_ZeroFloat(6.2831855f), 1);
                    temp_v0_6 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_6 + 8;
                    temp_v0_6->words.w0 = 0xDA380003;
                    temp_v0_6->words.w1 = Matrix_NewMtx(temp_s2);
                    temp_v0_7 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_7 + 8;
                    temp_v0_7->words.w1 = (u32) &D_04023428;
                    temp_v0_7->words.w0 = 0xDE000000;
                    temp_s3_2 = phi_s3 - 1;
                    phi_s1_2 += -0xC;
                    phi_s3 = temp_s3_2;
                } while (temp_s3_2 >= arg0->unk_784);
            }
        }
        if (arg0->unk_330 > 0.0f) {
            temp_v0_8 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xDE000000;
            temp_v0_8->words.w1 = (u32) &D_040233B8;
            phi_s3_2 = 0;
            do {
                temp_f20 = randPlusMinusPoint5Scaled(30.0f);
                temp_f22 = randPlusMinusPoint5Scaled(30.0f);
                temp_v0_9 = arg0 + ((phi_s3_2 / 2) * 0xC);
                SysMatrix_InsertTranslation(temp_f20 + temp_v0_9->unk_334, temp_f22 + temp_v0_9->unk_338, randPlusMinusPoint5Scaled(30.0f) + temp_v0_9->unk_33C, 0);
                temp_f12_2 = arg0->unk_330;
                Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
                SysMatrix_RotateStateAroundXAxis(Rand_ZeroFloat(6.2831855f));
                SysMatrix_InsertZRotation_f(Rand_ZeroFloat(6.2831855f), 1);
                temp_v0_10 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_10 + 8;
                temp_v0_10->words.w0 = 0xDA380003;
                temp_v0_10->words.w1 = Matrix_NewMtx(temp_s2);
                temp_v0_11 = temp_s2->polyXlu.p;
                temp_s3_3 = phi_s3_2 + 1;
                temp_s2->polyXlu.p = temp_v0_11 + 8;
                temp_v0_11->words.w1 = (u32) &D_04023428;
                temp_v0_11->words.w0 = 0xDE000000;
                phi_s3_2 = temp_s3_3;
            } while (temp_s3_3 != 0x1E);
        }
    }
}

void func_809FBB9C(Boss07 *arg0, GraphicsContext **arg1, f32 *arg2) {
    void *sp58;
    GameInfo *temp_a0;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f20;
    s32 temp_s3;
    void *phi_s4;
    s32 phi_s3;

    temp_s1 = arg1->unk_0;
    if (arg0->unk_AB4C > 0.0f) {
        sp58 = arg0 + 0x8000;
        func_809F49A0(1, 0x71B8, 0x263A);
        temp_s1->polyXlu.p = Gfx_CallSetupDL(temp_s1->polyXlu.p, 0x14U);
        temp_v0 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFCFFFFFF;
        temp_v0->words.w1 = 0xFFFDF6FB;
        phi_s4 = arg0 + 0x8000;
        phi_s3 = 0;
        do {
            temp_v0_2 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xFA000000;
            temp_v0_2->words.w1 = ((*D_80A07954 & 0xFF) << 8) | (D_80A07950 << 0x18) | ((D_80A07952 & 0xFF) << 0x10) | 0x28;
            temp_f20 = (func_809F49C0() * 40.0f) - 30.0f;
            SysMatrix_InsertTranslation(arg0->unk_34C, (arg0->unk_350 - 30.0f) + 50.0f + temp_f20 + 25.0f, arg0->unk_354, 0);
            SysMatrix_InsertTranslation(arg2->unk_0, arg2->unk_4 + temp_f20, arg2->unk_8, 0);
            SysMatrix_InsertYRotation_f(2.0f * (func_809F49C0() * 3.1415927f), 1);
            SysMatrix_RotateStateAroundXAxis(-0.024999999f * temp_f20);
            SysMatrix_InsertZRotation_f(2.0f * (func_809F49C0() * 3.1415927f), 1);
            temp_f12 = phi_s4->unk_2B50;
            if (temp_f12 > 0.0f) {
                Matrix_Scale(temp_f12, 1.0f, 12.0f, 1);
                temp_v0_3 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(temp_s1);
                temp_v0_4 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = (u32) &D_0602EFE8;
                temp_v0_4->words.w0 = 0xDE000000;
            }
            temp_s3 = phi_s3 + 4;
            phi_s4 += 4;
            phi_s3 = temp_s3;
        } while (temp_s3 != 0x78);
        func_8012C2DC(arg1->unk_0);
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = (u32) &D_04023348;
        temp_v0_6 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xFA000000;
        temp_a0 = gGameInfo;
        temp_v0_6->words.w1 = ((temp_a0->data[1552] + 0xAA) & 0xFF) | 0xFFFF0000 | (((temp_a0->data[1554] + 0xDC) & 0xFF) << 8);
        temp_v0_7 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xFB000000;
        temp_v0_7->words.w1 = (((gGameInfo->data[1558] + 0x64) & 0xFF) << 8) | 0xFFFF0000 | 0x80;
        SysMatrix_InsertTranslation(arg0->unk_34C, arg0->unk_350, arg0->unk_354, 0);
        SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
        SysMatrix_InsertZRotation_s((s16) (arg1->unk_18840 << 7), 1);
        temp_f12_2 = (f32) (gGameInfo->data[1553] + 0x320) * 0.01f * sp58->unk_2B4C;
        Matrix_Scale(temp_f12_2, temp_f12_2, 1.0f, 1);
        temp_v0_8 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xDA380003;
        temp_v0_8->words.w1 = Matrix_NewMtx(arg1->unk_0);
        temp_v0_9 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDE000000;
        temp_v0_9->words.w1 = (u32) &D_04023428;
    }
}

void func_809FBF94(Actor *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp50;
    Player *sp4C;
    Gfx *sp34;
    void *sp24;
    GameInfo *temp_v0_5;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    u8 temp_v0_4;
    f32 phi_f2;
    f32 phi_f16;
    f32 phi_f2_2;

    temp_a2 = arg1->state.gfxCtx;
    sp4C = arg1->actorCtx.actorList[2].first;
    temp_s0 = temp_a2;
    if (arg0->unk_AB44 > 0.0f) {
        sp24 = arg0 + 0x8000;
        func_8012C2DC(temp_a2);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = ((gGameInfo->data[1588] + 0xFF) & 0xFF) | ~0xFF;
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0xFFFF0000;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_04023348;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_4 = sp4C->transformation;
        if (temp_v0_4 == 1) {
            phi_f16 = -20.0f;
            phi_f2_2 = -10.0f;
        } else {
            phi_f16 = 0.0f;
            phi_f2_2 = 0.0f;
        }
        phi_f2 = phi_f2_2;
        if (temp_v0_4 == 0) {
            phi_f2 = phi_f2_2 - 43.0f;
        }
        sp54 = phi_f2;
        sp50 = phi_f16;
        temp_v0_5 = gGameInfo;
        SysMatrix_InsertTranslation(sp4C->actor.world.pos.x, (f32) temp_v0_5->data[1596] + (((sp4C->actor.world.pos.y + func_800B6FC8(sp4C)) - 20.0f) + phi_f2), (((f32) temp_v0_5->data[1597] + sp4C->actor.world.pos.z) - 15.0f) + phi_f16, 0);
        SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
        temp_f12 = sp24->unk_2B44;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        SysMatrix_InsertZRotation_s((s16) (arg1->gameplayFrames << 6), 1);
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp34 = temp_v0_6;
        sp34->words.w1 = Matrix_NewMtx(temp_s0);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_04023428;
        temp_v0_7->words.w0 = 0xDE000000;
    }
}

void Boss07_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp68;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Gfx *sp54;
    ? *sp50;
    ? *sp4C;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    s16 temp_v1;
    Boss07 *this = (Boss07 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_a0->polyOpa.d - 0x1000;
    temp_a0->polyOpa.d = temp_v0;
    temp_a0_2 = globalCtx->state.gfxCtx;
    sp54 = temp_v0;
    sp68 = temp_a0_2;
    func_8012C28C(temp_a0_2);
    func_8012C2DC(globalCtx->state.gfxCtx);
    if ((this->unk_15E & 1) != 0) {
        sp68->polyOpa.p = Gfx_SetFog(sp68->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    SysMatrix_InsertYRotation_f(this->unk_184, 1);
    SysMatrix_RotateStateAroundXAxis(this->unk_188);
    func_801343C0(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_809FB504, func_809FB55C, func_809FB728, (Actor *) this);
    sp68->polyOpa.p = func_801660B8(globalCtx, sp68->polyOpa.p);
    temp_v1 = gGameInfo->data[1311];
    if (((temp_v1 == 0) || (temp_v1 == 2)) && (this->unk_149 != 0)) {
        func_809FAA44(this, globalCtx, &this->unk_7A0, &this->unk_7AC, &this->unk_A04, &this->unk_C5C, this->unk_790, this->unk_794, (bitwise f32) this->unk_798, (bitwise f32) this->unk_79C, &this->unk_788, (s16) (s32) this->unk_F7E, this->unk_77C, 0);
        func_809FAA44(this, globalCtx, &this->unk_FAC, &this->unk_FB8, &this->unk_1210, &this->unk_1468, this->unk_F9C, this->unk_FA0, (bitwise f32) this->unk_FA4, (bitwise f32) this->unk_FA8, &this->unk_F94, (s16) 0, this->unk_77C, 1);
    }
    sp4C = &this->unk_1210;
    sp50 = &this->unk_FB8;
    func_809FB114(this, (GraphicsContext **) globalCtx, &this->unk_7AC, &this->unk_A04, this->unk_77C, 0);
    func_809FB114(this, (GraphicsContext **) globalCtx, sp50, sp4C, this->unk_77C, 1);
    if (this->unk_AB48 == 0) {
        func_809FC8B0(sp54, this, globalCtx);
        func_809FC960(sp54, this, globalCtx);
    }
    func_809FB7D4(this, (GraphicsContext **) globalCtx);
    sp58 = this->unk_34C;
    sp5C = (this->unk_350 - 30.0f) + 50.0f;
    sp60 = this->unk_354;
    func_809FBB9C(this, (GraphicsContext **) globalCtx, &sp58);
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_334, 0xF, this->unk_17F8, this->unk_17FC, this->unk_1800, (u8) (s32) this->unk_1804);
    this->unk_149 = 0;
}

void func_809FC4C0(Boss07 *arg0, Gfx *arg1, f32 arg2) {
    s32 sp90;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp6C;
    f32 sp68;
    u8 *sp60;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_f8;
    s32 temp_s2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t1_4;
    s32 temp_t1_5;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    u8 *temp_t0;
    u8 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    s32 phi_s2;
    s32 phi_t1;
    s32 phi_t4;
    Gfx *phi_a2;
    s32 *phi_a1;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_a0;
    s32 phi_t1_2;
    s32 *phi_a1_2;
    s32 phi_v0_2;
    s32 phi_v1_2;
    s32 phi_a0_2;
    s32 phi_t1_3;
    s32 *phi_a1_3;
    s32 phi_v0_3;
    s32 phi_v1_3;
    s32 phi_a0_3;
    s32 phi_t1_4;
    s32 *phi_a1_4;
    s32 phi_v0_4;
    s32 phi_v1_4;
    s32 phi_a0_4;
    s32 phi_t1_5;
    s32 phi_t0;
    s32 phi_t0_2;
    s32 phi_t0_3;
    s32 phi_t0_4;

    phi_s2 = 0;
    phi_t4 = 0xC;
    phi_a2 = arg1;
    phi_t1 = 0;
    phi_t4 = 0xC;
    do {
        if ((arg2 == 0.0f) || (temp_t1 = *(&D_80A08140 + (phi_s2 * 4)), phi_t1 = temp_t1, phi_t1 = temp_t1, (temp_t1 >= 0))) {
            temp_t0 = phi_s2 + &D_80A0817C;
            temp_v1 = arg0 + (phi_s2 * 0xC);
            if (arg2 > 0.0f) {
                temp_f0 = temp_v1->unk_334;
                temp_f2 = temp_v1->unk_338;
                temp_f12 = temp_v1->unk_33C;
                temp_v0 = arg0 + (phi_t1 * phi_t4);
                sp74 = (((temp_v0->unk_334 - temp_f0) * arg2) + temp_f0) - arg0->actor.world.pos.x;
                sp78 = ((((temp_v0->unk_338 - temp_f2) * arg2) + temp_f2) - arg0->actor.world.pos.y) + 76.0f + 30.0f + 30.0f + 100.0f;
                sp7C = (((temp_v0->unk_33C - temp_f12) * arg2) + temp_f12) - arg0->actor.world.pos.z;
            } else {
                sp74 = temp_v1->unk_334 - arg0->actor.world.pos.x;
                sp78 = (temp_v1->unk_338 - arg0->actor.world.pos.y) + 76.0f + 30.0f + 30.0f + 100.0f;
                sp7C = temp_v1->unk_33C - arg0->actor.world.pos.z;
            }
            arg1 = phi_a2;
            sp60 = temp_t0;
            sp90 = 0;
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp74, (Vec3f *) &sp68);
            temp_f0_2 = sp68 * 0.2f;
            temp_f2_2 = sp6C * 0.2f;
            temp_v0_2 = *temp_t0;
            temp_f8 = (s32) (temp_f0_2 + 32.0f);
            temp_t3 = (s32) temp_f2_2;
            sp6C = temp_f2_2;
            sp68 = temp_f0_2;
            temp_t3_2 = (temp_t3 << 6) & 0xFFFF;
            temp_t2 = temp_f8 & 0xFFFF;
            phi_t1_2 = 0;
            phi_t1_3 = 0;
            phi_t1_4 = 0;
            phi_t1_5 = 0;
            phi_a2 = arg1;
            if (temp_v0_2 == 2) {
                phi_a1 = D_80A08110;
                phi_t0 = -0x180;
                do {
                    temp_a0 = *phi_a1;
                    temp_t1_2 = phi_t1_2 + 1;
                    temp_v1_2 = -temp_a0;
                    phi_v1 = temp_v1_2;
                    phi_t1_2 = temp_t1_2;
                    phi_a0 = temp_a0;
                    phi_t1 = temp_t1_2;
                    if (temp_v1_2 < temp_a0) {
                        phi_v0 = temp_t2 + temp_v1_2 + temp_t3_2 + phi_t0;
                        do {
                            temp_v1_3 = phi_v1 + 1;
                            phi_v1 = temp_v1_3;
                            if ((phi_v0 >= 0) && (phi_v0 < 0x1000)) {
                                *(arg1 + phi_v0) = 0xFF;
                                phi_a0 = *phi_a1;
                            }
                            phi_v0 += 1;
                        } while (temp_v1_3 < phi_a0);
                    }
                    phi_a1 += 4;
                    phi_t0 += 0x40;
                } while (temp_t1_2 != 0xC);
            } else {
                phi_t0_2 = -0x100;
                if (temp_v0_2 == 1) {
                    phi_a1_2 = D_80A080F0;
                    do {
                        temp_a0_2 = *phi_a1_2;
                        temp_t1_3 = phi_t1_3 + 1;
                        temp_v1_4 = -temp_a0_2;
                        phi_v1_2 = temp_v1_4;
                        phi_t1_3 = temp_t1_3;
                        phi_a0_2 = temp_a0_2;
                        phi_t1 = temp_t1_3;
                        if (temp_v1_4 < temp_a0_2) {
                            phi_v0_2 = temp_t2 + temp_v1_4 + temp_t3_2 + phi_t0_2;
                            do {
                                temp_v1_5 = phi_v1_2 + 1;
                                phi_v1_2 = temp_v1_5;
                                if ((phi_v0_2 >= 0) && (phi_v0_2 < 0x1000)) {
                                    *(arg1 + phi_v0_2) = 0xFF;
                                    phi_a0_2 = *phi_a1_2;
                                }
                                phi_v0_2 += 1;
                            } while (temp_v1_5 < phi_a0_2);
                        }
                        phi_a1_2 += 4;
                        phi_t0_2 += 0x40;
                    } while (temp_t1_3 != 8);
                } else {
                    phi_t0_4 = -0x80;
                    if (temp_v0_2 == 0) {
                        phi_a1_3 = D_80A080D4;
                        phi_t0_3 = -0xC0;
                        do {
                            temp_v0_3 = *phi_a1_3;
                            temp_t1_4 = phi_t1_4 + 1;
                            temp_v1_6 = -temp_v0_3;
                            temp_a0_3 = temp_v0_3 - 1;
                            phi_v1_3 = temp_v1_6;
                            phi_t1_4 = temp_t1_4;
                            phi_a0_3 = temp_a0_3;
                            phi_t1 = temp_t1_4;
                            if (temp_v1_6 < temp_a0_3) {
                                phi_v0_3 = temp_t2 + temp_v1_6 + temp_t3_2 + phi_t0_3;
                                do {
                                    temp_v1_7 = phi_v1_3 + 1;
                                    phi_v1_3 = temp_v1_7;
                                    if ((phi_v0_3 >= 0) && (phi_v0_3 < 0x1000)) {
                                        *(arg1 + phi_v0_3) = 0xFF;
                                        phi_a0_3 = *phi_a1_3 - 1;
                                    }
                                    phi_v0_3 += 1;
                                } while (temp_v1_7 < phi_a0_3);
                            }
                            phi_a1_3 += 4;
                            phi_t0_3 += 0x40;
                        } while (temp_t1_4 != 7);
                    } else {
                        phi_a1_4 = D_80A080BC;
                        do {
                            temp_v0_4 = *phi_a1_4;
                            temp_t1_5 = phi_t1_5 + 1;
                            temp_v1_8 = -temp_v0_4;
                            temp_a0_4 = temp_v0_4 - 1;
                            phi_v1_4 = temp_v1_8;
                            phi_t1_5 = temp_t1_5;
                            phi_a0_4 = temp_a0_4;
                            phi_t1 = temp_t1_5;
                            if (temp_v1_8 < temp_a0_4) {
                                phi_v0_4 = temp_t2 + temp_v1_8 + temp_t3_2 + phi_t0_4;
                                do {
                                    temp_v1_9 = phi_v1_4 + 1;
                                    phi_v1_4 = temp_v1_9;
                                    if ((phi_v0_4 >= 0) && (phi_v0_4 < 0x1000)) {
                                        *(arg1 + phi_v0_4) = 0xFF;
                                        phi_a0_4 = *phi_a1_4 - 1;
                                    }
                                    phi_v0_4 += 1;
                                } while (temp_v1_9 < phi_a0_4);
                            }
                            phi_a1_4 += 4;
                            phi_t0_4 += 0x40;
                        } while (temp_t1_5 != 6);
                    }
                }
            }
        }
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xF);
}

void func_809FC8B0(Gfx *arg0, Boss07 *arg1, GlobalContext *arg2) {
    Gfx *temp_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    Gfx *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;

    phi_v0 = arg0;
    phi_s0 = 0;
    phi_s0_2 = 0;
    do {
        temp_s0 = phi_s0 + 1;
        temp_v0 = phi_v0 + 4;
        temp_v0->unk_-4 = 0;
        phi_v0 = temp_v0;
        phi_s0 = temp_s0;
    } while (temp_s0 < 0x400);
    SysMatrix_SetStateXRotation(1.0f);
    do {
        func_809FC4C0(arg1, arg0, (f32) phi_s0_2 / 5.0f);
        temp_s0_2 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_2;
    } while (temp_s0_2 != 6);
}

void func_809FC960(u32 arg0, Boss07 *arg1, GlobalContext *arg2) {
    GraphicsContext *sp30;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    f32 temp_f0;
    f32 phi_f0;
    f32 phi_f0_2;

    temp_a0 = arg2->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_f0 = (400.0f - arg1->actor.world.pos.y) * 0.0025f;
    phi_f0 = temp_f0;
    if (temp_f0 < 0.0f) {
        phi_f0 = 0.0f;
    }
    phi_f0_2 = phi_f0;
    if (phi_f0 > 1.0f) {
        phi_f0_2 = 1.0f;
    }
    temp_v0 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA000000;
    temp_v0->words.w1 = (s32) (phi_f0_2 * 80.0f) & 0xFF;
    temp_v0_2 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xFB000000;
    sp30 = temp_a0;
    SysMatrix_InsertTranslation(arg1->actor.world.pos.x, arg1->actor.floorHeight, arg1->actor.world.pos.z - 20.0f, 0);
    Matrix_Scale(1.75f, 1.0f, 1.75f, 1);
    temp_v0_3 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp30 = temp_a0;
    sp1C = temp_v0_3;
    sp1C->words.w1 = Matrix_NewMtx(arg2->state.gfxCtx);
    temp_v0_4 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_0602EF68;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFD900000;
    temp_v0_5->words.w1 = arg0;
    temp_v0_6 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0x7098260;
    temp_v0_6->words.w0 = 0xF5900000;
    temp_v0_7 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0;
    temp_v0_7->words.w0 = 0xE6000000;
    temp_v0_8 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0x77FF100;
    temp_v0_8->words.w0 = 0xF3000000;
    temp_v0_9 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xE7000000;
    temp_v0_10 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_10 + 8;
    temp_v0_10->words.w1 = 0x98260;
    temp_v0_10->words.w0 = 0xF5881000;
    temp_v0_11 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_11 + 8;
    temp_v0_11->words.w0 = 0xF2000000;
    temp_v0_11->words.w1 = 0xFC0FC;
    temp_v0_12 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_12 + 8;
    temp_v0_12->words.w1 = (u32) &D_0602EF88;
    temp_v0_12->words.w0 = 0xDE000000;
}

void func_809FCBC8(Boss07 *arg0) {
    s32 phi_v0;

    phi_v0 = -0x4000;
    if (Rand_ZeroOne() < 0.5f) {
        phi_v0 = 0x4000;
    }
    Matrix_RotateY((s16) (arg0->actor.yawTowardsPlayer + phi_v0), 0U);
    SysMatrix_GetStateTranslationAndScaledZ(200.0f, arg0 + 0x164);
    arg0->unk_152 = 0x1E;
    arg0->unk_164 += arg0->actor.world.pos.x;
    arg0->unk_16C += arg0->actor.world.pos.z;
    arg0->unk_170 = 20000.0f;
}

void func_809FCC70(Boss07 *arg0, GlobalContext *arg1) {
    Boss07 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809FCCCC;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x190, &D_06002D84, 0.0f);
    arg0->unk_17D8 = 0x6E00;
    arg0->actor.flags &= -2;
}

void func_809FCCCC(Boss07 *this, GlobalContext *globalCtx) {
    f32 sp58;
    Camera *sp54;
    SkelAnime *sp4C;
    f32 *sp44;
    s32 sp40;
    Vec3f *sp3C;
    Vec3f *sp38;
    f32 *sp34;
    Camera *temp_v0_2;
    GameInfo *temp_v0;
    SkelAnime *temp_a0;
    Vec3f *temp_t2;
    Vec3f *temp_t5;
    s32 temp_v0_3;
    u16 temp_t8;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 temp_v1_4;
    f32 phi_f0;
    u32 phi_v1;
    f32 phi_f0_2;
    f32 phi_f0_3;
    u32 phi_v1_2;
    f32 phi_f0_4;
    GameInfo *phi_v0;
    u32 phi_v1_3;
    GameInfo *phi_v0_2;
    u32 phi_v1_4;
    u32 phi_v1_5;
    s32 phi_v0_3;
    f32 *phi_a0;

    temp_a0 = &this->unk_190;
    sp4C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    this->unk_ABC8 += 1;
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    sp58 = Math_SinS((s16) (this->unk_14C * 0x4500)) * 0.3f;
    temp_t8 = (u16) this->unk_ABD0;
    switch (temp_t8) {
    case 0:
        this->unk_ABC8 = 0;
        this->unk_ABD0 = 1;
        this->unk_AC00 = 0.0f;
        /* fallthrough */
    case 1:
        this->unk_ABD0 = 2;
        this->unk_ABC8 = 0;
        this->unk_ABEC = 70.0f;
        this->unk_ABF0 = 70.0f;
        this->unk_ABF4 = 150.0f;
        this->unk_ABF8 = 20.0f;
        this->unk_ABFC = 80.0f;
        break;
    case 2:
        temp_v1 = this->unk_ABC8;
        if (temp_v1 >= 0x14U) {
            if (temp_v1 == 0x14) {
                this->unk_17D4 = 1.0f;
                Audio_PlayActorSound2((Actor *) this, 0x393CU);
            }
            Math_ApproachF(&this->unk_17C4, (this->unk_17D4 * sp58) + 1.0f, 1.0f, 0.5f);
        }
        if (this->unk_ABC8 >= 0x29U) {
            this->unk_ABD0 = 3;
            this->unk_ABC8 = 0;
        }
        break;
    case 3:
        Math_ApproachF(&this->unk_ABEC, 0.0f, 0.05f, this->unk_AC0C * 40.0f);
        Math_ApproachF(&this->unk_ABF0, 100.0f, 0.05f, this->unk_AC0C * 30.0f);
        Math_ApproachF(&this->unk_ABF4, 270.0f, 0.05f, this->unk_AC0C * 150.0f);
        Math_ApproachF(&this->unk_ABF8, 0.0f, 0.05f, this->unk_AC0C * 20.0f);
        Math_ApproachF(&this->unk_ABFC, 100.0f, 0.05f, this->unk_AC0C * 20.0f);
        Math_ApproachF(&this->unk_AC0C, 0.05f, 1.0f, 0.002f);
        temp_v1_2 = this->unk_ABC8;
        phi_f0 = 1.0f;
        phi_f0_2 = 1.0f;
        phi_f0_3 = 1.0f;
        phi_f0_4 = 1.0f;
        if (temp_v1_2 >= 0x14U) {
            if (temp_v1_2 == 0x14) {
                this->unk_17D0 = 1.0f;
                Audio_PlayActorSound2((Actor *) this, 0x393CU);
            }
            Math_ApproachF(&this->unk_17C0, (this->unk_17D0 * sp58) + 1.0f, 1.0f, 0.5f);
        }
        phi_f0 = 1.0f;
        phi_v1 = this->unk_ABC8;
        phi_f0_2 = 1.0f;
        if (this->unk_ABC8 >= 0x32U) {
            if (this->unk_ABC8 == 0x32) {
                this->unk_17CC = 1.0f;
                Audio_PlayActorSound2((Actor *) this, 0x393CU);
            }
            Math_ApproachF(&this->unk_17BC, (this->unk_17CC * sp58) + phi_f0, phi_f0, 0.5f);
            phi_v1 = this->unk_ABC8;
        }
        phi_f0_3 = phi_f0_2;
        phi_v1_2 = phi_v1;
        phi_f0_4 = phi_f0_2;
        if (phi_v1 >= 0x3CU) {
            if (phi_v1 == 0x3C) {
                this->unk_17C8 = phi_f0_2;
                Audio_PlayActorSound2((Actor *) this, 0x393CU);
            }
            Math_ApproachF(&this->unk_17B8, (this->unk_17C8 * sp58) + phi_f0_3, phi_f0_3, 0.5f);
            phi_v1_2 = this->unk_ABC8;
        }
        if (phi_v1_2 == 0x50) {
            this->unk_ABD0 = 4;
            this->unk_ABC8 = 0;
            this->unk_17C4 = phi_f0_4;
            this->unk_17C0 = phi_f0_4;
            this->unk_17BC = phi_f0_4;
            this->unk_17B8 = phi_f0_4;
        }
        break;
    case 4:
        this->unk_ABEC = 0.0f;
        this->unk_ABF0 = 120.0f;
        this->unk_ABF4 = 140.0f;
        this->unk_ABFC = 170.0f;
        temp_v1_3 = this->unk_ABC8;
        if (temp_v1_3 >= 0xAU) {
            if (temp_v1_3 == 0xA) {
                this->unk_17D4 = 1.0f;
                Audio_PlayActorSound2((Actor *) this, 0x3888U);
            }
            Math_ApproachS(&this->unk_17D8, (s16) (s32) (this->unk_17D4 * sp58 * 24576.0f), 1, 0x4000);
        }
        if (this->unk_ABC8 == 0x1E) {
            this->unk_ABD0 = 5;
            this->unk_ABC8 = 0;
            this->unk_AC0C = 0.0f;
            this->unk_1D4 = 1000.0f;
            func_80165690();
        }
        break;
    case 5:
        if (this->unk_ABC8 == 0x14) {
            SkelAnime_ChangeAnimTransitionStop(sp4C, &D_06002C40, 0.0f);
            this->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06002C40);
        }
        phi_v1_4 = this->unk_ABC8;
        if (this->unk_ABC8 >= 0x14U) {
            gGameInfo->data[1564] = (s16) this->unk_ABC8;
            temp_v0 = gGameInfo;
            temp_v1_4 = this->unk_ABC8;
            phi_v0 = temp_v0;
            if ((temp_v1_4 == (temp_v0->data[1264] + 0x1C)) || (temp_v1_4 == (temp_v0->data[1265] + 0x3C))) {
                Audio_PlayActorSound2((Actor *) this, 0x3A6AU);
                phi_v0 = gGameInfo;
            }
            phi_v1_3 = this->unk_ABC8;
            phi_v0_2 = phi_v0;
            if ((this->unk_ABC8 == (phi_v0->data[1266] + 0x26)) || (this->unk_ABC8 == (phi_v0->data[1267] + 0x30)) || (this->unk_ABC8 == (phi_v0->data[1268] + 0x44)) || (this->unk_ABC8 == (phi_v0->data[1269] + 0x4E))) {
                Audio_PlayActorSound2((Actor *) this, 0x3A70U);
                phi_v1_3 = this->unk_ABC8;
                phi_v0_2 = gGameInfo;
            }
            phi_v1_4 = phi_v1_3;
            if (phi_v1_3 == (phi_v0_2->data[1286] + 0x5D)) {
                Audio_PlayActorSound2((Actor *) this, 0x3A6FU);
                phi_v1_4 = this->unk_ABC8;
            }
        }
        phi_v1_5 = phi_v1_4;
        if (phi_v1_4 == 0x2D) {
            Actor_TitleCardCreate(globalCtx, &globalCtx->actorCtx.titleCtxt, Lib_SegmentedToVirtual(&D_06030C40), 0xA0, (s16) 0xB4, (u8) 0x80, (u8) 0x28);
            phi_v1_5 = this->unk_ABC8;
        }
        if (phi_v1_5 == 0x14) {
            func_801A89A8(0x806A);
            this->unk_14A = 1;
            globalCtx->envCtx.unk_DC = 0.0f;
        }
        Math_ApproachF(&this->unk_ABEC, -80.0f, 0.05f, this->unk_AC0C * 80.0f);
        Math_ApproachF(&this->unk_ABF0, 20.0f, 0.05f, this->unk_AC0C * 60.0f);
        Math_ApproachF(&this->unk_ABF4, 220.0f, 0.05f, this->unk_AC0C * 180.0f);
        Math_ApproachF(&this->unk_ABFC, 110.0f, 0.05f, this->unk_AC0C * 80.0f);
        Math_ApproachF(&this->unk_AC0C, 0.1f, 1.0f, 0.005f);
        if (func_801378B8(sp4C, this->unk_1D4) != 0) {
            temp_v0_2 = Play_GetCamera(globalCtx, 0);
            this->unk_ABD0 = 0;
            sp54 = temp_v0_2;
            func_809FD5F8(this, globalCtx);
            temp_t5 = &this->unk_ABD4;
            sp4C = (SkelAnime *) temp_t5;
            temp_t2 = &this->unk_ABE0;
            sp54->eye.x = temp_t5->x;
            sp54->eye.y = temp_t5->y;
            sp54->eye.z = temp_t5->z;
            sp54->eyeNext.x = sp4C->unk_0;
            sp54->eyeNext.y = (bitwise f32) sp4C->skeleton;
            sp54->eyeNext.z = (bitwise f32) sp4C->animCurrentSeg;
            sp54->at.x = temp_t2->x;
            sp54->at.y = temp_t2->y;
            sp54->at.z = temp_t2->z;
            func_80169AFC(globalCtx, this->unk_ABD2, 0);
            this->unk_ABD2 = 0;
            func_800EA0EC(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 6U);
            this->actor.flags |= 1;
        }
        break;
    }
    sp38 = &this->unk_ABE0;
    sp3C = &this->unk_ABD4;
    sp44 = &this->unk_ABF8;
    sp4C = (SkelAnime *) &this->unk_ABEC;
    phi_v0_3 = 0;
    phi_a0 = &this->unk_17C8;
    do {
        sp40 = phi_v0_3;
        sp34 = phi_a0;
        Math_ApproachZeroF(phi_a0, 0.5f, 0.1f);
        temp_v0_3 = phi_v0_3 + 4;
        phi_v0_3 = temp_v0_3;
        phi_a0 += 4;
    } while (temp_v0_3 != 0x10);
    SysMatrix_MultiplyVector3fByState((Vec3f *) sp4C, sp3C);
    SysMatrix_MultiplyVector3fByState((Vec3f *) sp44, sp38);
    if (this->unk_ABD2 != 0) {
        ShrinkWindow_SetLetterboxTarget(0x1B);
        Play_CameraSetAtEye(globalCtx, this->unk_ABD2, sp38, sp3C);
    }
}

void func_809FD5F8(Boss07 *arg0, GlobalContext *arg1) {
    s32 temp_t0;
    u32 temp_t8;

    arg0->actionFunc = func_809FD710;
    temp_t8 = (u32) Rand_ZeroFloat(2.999f);
    temp_t0 = (temp_t8 & 0xFF) * 4;
    arg0->unk_14E = (u8) temp_t8;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, *(&D_80A0818C + temp_t0), -10.0f);
    arg0->actor.flags |= 1;
    arg0->unk_150 = (s16) (s32) (Rand_ZeroFloat(50.0f) + 50.0f);
}

void func_809FD710(Boss07 *this, GlobalContext *globalCtx) {
    Actor *sp24;
    u8 temp_v0;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk_14E;
    if ((s32) temp_v0 < 2) {
        Audio_PlayActorSound2((Actor *) this, 0x31DCU);
    } else if ((temp_v0 == 2) && (func_801378B8(&this->unk_190, 5.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x39DDU);
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    func_809F4CBC(this, 2.0f);
    Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 5, 0x2000);
    if ((this->unk_150 == 0) || (sp24->unk_D57 == 4) || (this->actor.xzDistToPlayer <= 300.0f)) {
        func_809FDB2C(this, globalCtx);
        Audio_PlayActorSound2((Actor *) this, 0x3A6BU);
    }
    func_809F4D54(this, globalCtx, 1, 0U);
}

void func_809FD818(Actor *arg0, GlobalContext *arg1, s16 arg2) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    if (func_809FD89C != arg0->unk_144) {
        arg0->unk_144 = func_809FD89C;
        arg0 = arg0;
        SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06009C7C, -10.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06009C7C);
    }
    arg0->unk_158 = 0xA;
    arg0->unk_152 = 0xC;
    arg0->unk_150 = arg2;
}

void func_809FD89C(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    this->actor.shape.shadowAlpha = 0;
    temp_a0 = &this->unk_190;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_809F4CBC(this, 1.0f);
    if (this->unk_152 == 1) {
        Audio_PlayActorSound2((Actor *) this, 0x38DDU);
    }
    if (func_801378B8(sp24, this->unk_1D4) != 0) {
        SkelAnime_ChangeAnimTransitionRepeat(sp24, &D_06009EA8, -5.0f);
        this->unk_1D4 = 1000.0f;
    }
    if (this->unk_1D4 == 1000.0f) {
        Audio_PlayActorSound2((Actor *) this, 0x31DEU);
    }
    if (this->unk_150 == 0) {
        func_809FD5F8(this, globalCtx);
    }
    func_809F4D54(this, globalCtx, 1, 1U);
}

void func_809FD984(Actor *arg0, GlobalContext *arg1, u8 arg2, u8 arg3) {
    u8 temp_v0;

    if (func_809FDAB0 != arg0->unk_144) {
        arg0->unk_144 = func_809FDAB0;
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_06000D0C, -2.0f);
        arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06000D0C);
    } else if ((arg3 & 0xFF) == 0xE) {
        if (arg0->unk_1A8 <= (arg0->unk_1D4 - 5.0f)) {
            arg0->unk_158 = 0x1E;
            arg0->unk_15C = 0x1E;
        } else {
            SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_06000D0C, -2.0f);
        }
    }
    temp_v0 = arg0->colChkInfo.health;
    if ((temp_v0 != 0) && (arg0->colChkInfo.health = temp_v0 - arg2, ((s32) (s8) arg0->colChkInfo.health <= 0))) {
        Audio_PlayActorSound2(arg0, 0x3A6EU);
        arg0->unk_148 = 1;
        arg0->unk_15C = 0x64;
        arg0->unk_158 = 0x64;
        Enemy_StartFinishingBlow(arg1, arg0);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x3A6DU);
}

void func_809FDAB0(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    Audio_PlayActorSound2((Actor *) this, 0x31DFU);
    temp_a0 = &this->unk_190;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_809F4CBC(this, 2.0f);
    if (func_801378B8(temp_a0, this->unk_1D4) != 0) {
        func_809FDB2C(this, globalCtx);
    }
    func_809F4D54(this, globalCtx, 1, 0U);
}

void func_809FDB2C(Boss07 *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x190, &D_0600A400, -2.0f);
    arg0->actionFunc = func_809FDBA0;
    arg0->unk_150 = (s16) (s32) (Rand_ZeroFloat(100.0f) + 150.0f);
    func_809FCBC8(arg0);
}

void func_809FDBA0(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    u32 sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 phi_f12;
    f32 phi_f14;

    Audio_PlayActorSound2(arg0, 0x31DBU);
    arg0->unk_AB40 = (s16) (arg0->unk_AB40 + 1);
    if ((s32) arg0->unk_AB40 >= 2) {
        Audio_PlayActorSound2(arg0, 0x39E3U);
        arg0->unk_AB40 = 0;
    }
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if ((func_800B64FC(arg1, 5.0f, (Vec3f *) &arg0->world, &sp2C) >= 0.0f) && (sp2C == 0)) {
        func_809FD818(arg0, arg1, 0x32);
        Audio_PlayActorSound2(arg0, 0x3A6CU);
        return;
    }
    temp_f12 = arg0->unk_164 - arg0->world.pos.x;
    temp_f14 = arg0->unk_16C - arg0->world.pos.z;
    phi_f12 = temp_f12;
    phi_f14 = temp_f14;
    if ((arg0->unk_152 == 0) || (((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < 30000.0f)) {
        sp34 = temp_f12;
        sp30 = temp_f14;
        if (Rand_ZeroOne() < 0.3f) {
            temp_f0 = Rand_ZeroOne();
            if (temp_f0 < 0.25f) {
                func_809FDEDC(arg0, arg1);
            } else if (temp_f0 < 0.5f) {
                func_809FE068(arg0, arg1);
            } else if (temp_f0 < 0.75f) {
                func_809FE2D4(arg0, arg1);
            } else if (temp_f0 < 1.0f) {
                func_809FE4B0(arg0, arg1);
            }
            phi_f12 = sp34;
            phi_f14 = sp30;
        } else if (Rand_ZeroOne() < 0.01f) {
            func_809FD818(arg0, arg1, 0x32);
            phi_f12 = sp34;
            phi_f14 = sp30;
        } else {
            func_809F4D10(arg0 + 0x164, 500.0f, 0x32);
            temp_f16 = Rand_ZeroFloat(50.0f) + 20.0f;
            arg0->unk_170 = 0.0f;
            arg0->unk_152 = (s16) (s32) temp_f16;
            phi_f12 = sp34;
            phi_f14 = sp30;
        }
    }
    Math_ApproachS(&arg0->world.rot.y, Math_Atan2S(phi_f12, phi_f14), 5, (s16) (s32) arg0->unk_170);
    Math_ApproachF(arg0 + 0x170, 4000.0f, 1.0f, 500.0f);
    Math_ApproachF(&arg0->speedXZ, 25.0f, 1.0f, 20.0f);
    if (arg0->unk_150 == 0) {
        func_809FD5F8((Boss07 *) arg0, arg1);
    }
    if ((arg0->xzDistToPlayer < 200.0f) && (arg0->unk_154 == 0)) {
        func_809FCBC8((Boss07 *) arg0);
        arg0->unk_150 = 0x32;
        arg0->unk_154 = 0x32;
    }
    func_809F4D54((Boss07 *) arg0, arg1, 3, 0U);
    arg0->unk_18D6 = 5;
}

void func_809FDEDC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a3->unk_144 = func_809FDF54;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x190, &D_06000428, -5.0f);
    temp_f6 = Rand_ZeroFloat(50.0f) + 30.0f;
    arg0->unk_188C = 0.0f;
    arg0->unk_150 = (s16) (s32) temp_f6;
}

void func_809FDF54(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime *sp3C;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_190;
    sp3C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_809F4CBC(this, 3.0f);
    Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 3, 0x3000);
    if (func_801378B8(temp_a0, 4.0f) != 0) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x12F, this->unk_17A0, this->unk_17A4, this->unk_17A8, (s16) 0, (s16) 0, (s16) 0, (s16) 0x65);
    }
    if (func_801378B8(sp3C, 9.0f) != 0) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x12F, this->unk_17AC, this->unk_17B0, this->unk_17B4, (s16) 0, (s16) 0, (s16) 0, (s16) 0x65);
    }
    if (this->unk_150 == 0) {
        func_809FDB2C(this, globalCtx);
    }
    func_809F4D54(this, globalCtx, 1, 0U);
}

void func_809FE068(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a3->unk_144 = func_809FE0E4;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x190, &D_06003A64, -5.0f);
    temp_f6 = Rand_ZeroFloat(100.0f) + 100.0f;
    arg0->unk_152 = 0;
    arg0->unk_150 = (s16) (s32) temp_f6;
    arg0->unk_ABC8 = 0;
}

void func_809FE0E4(Boss07 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_190;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 5.0f) != 0) {
        sp24 = this + 0x8000;
        if ((this->unk_ABC8 & 1) == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x3A69U);
        } else {
            Audio_PlayActorSound2((Actor *) this, 0x3A6AU);
        }
        func_8019F1C0(&D_80A09A40, 0x39DDU);
        this->unk_ABC8 = sp24->unk_2BC8 + 1;
    }
    Math_ApproachF(&this->actor.speedXZ, (f32) gGameInfo->data[1315] + 10.0f, 1.0f, 3.0f);
    if (this->unk_152 == 0) {
        if ((this->unk_14C == 0) && (Rand_ZeroOne() < 0.7f)) {
            if (Rand_ZeroOne() < 0.75f) {
                this->unk_180 = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
            } else {
                this->unk_180 = this->actor.yawTowardsPlayer;
            }
        }
        if ((this->actor.bgCheckFlags & 8) != 0) {
            this->unk_152 = 0x14;
            this->unk_180 = this->actor.yawTowardsPlayer;
        }
    }
    Math_ApproachS(&this->actor.world.rot.y, this->unk_180, 0xA, 0x1800);
    if ((this->unk_150 == 0) || (this->actor.xzDistToPlayer <= 200.0f)) {
        func_809FDB2C(this, globalCtx);
        if (this->unk_150 != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x3A6BU);
        }
    }
    func_809F4D54(this, globalCtx, 7, 0U);
}

void func_809FE2D4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a3->unk_144 = func_809FE348;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x190, &D_0600A194, -10.0f);
    temp_f6 = Rand_ZeroFloat(50.0f) + 70.0f;
    arg0->unk_152 = 0;
    arg0->unk_150 = (s16) (s32) temp_f6;
}

void func_809FE348(Boss07 *this, GlobalContext *globalCtx) {
    Audio_PlayActorSound2((Actor *) this, 0x325FU);
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    Math_ApproachF(&this->actor.speedXZ, (f32) gGameInfo->data[1317] + -10.0f, 1.0f, 3.0f);
    if (this->unk_152 == 0) {
        if ((this->unk_14C == 0) && (Rand_ZeroOne() < 0.5f)) {
            if (Rand_ZeroOne() < 0.75f) {
                this->unk_180 = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
            } else {
                this->unk_180 = this->actor.yawTowardsPlayer + 0x8000;
            }
        }
        if ((this->actor.bgCheckFlags & 8) != 0) {
            this->unk_152 = 0x14;
            this->unk_180 = this->actor.yawTowardsPlayer + 0x8000;
        }
    }
    Math_ApproachS(&this->actor.world.rot.y, this->unk_180, 0xA, 0x1000);
    if (this->unk_150 == 0) {
        func_809FDB2C(this, globalCtx);
    }
    func_809F4D54(this, globalCtx, 7, 0U);
}

void func_809FE4B0(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a3->unk_144 = func_809FE524;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x190, &D_06000194, -10.0f);
    temp_f6 = Rand_ZeroFloat(70.0f) + 70.0f;
    arg0->unk_152 = 0;
    arg0->unk_150 = (s16) (s32) temp_f6;
}

void func_809FE524(Boss07 *this, GlobalContext *globalCtx) {
    Audio_PlayActorSound2((Actor *) this, 0x325EU);
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    Math_ApproachF(&this->actor.speedXZ, (f32) gGameInfo->data[1317] + 10.0f, 1.0f, 1.0f);
    if (this->unk_152 == 0) {
        if (((this->unk_14C & 0x3F) == 0) && (Rand_ZeroOne() < 0.5f)) {
            if (Rand_ZeroOne() < 0.75f) {
                this->unk_180 = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
            } else {
                this->unk_180 = this->actor.yawTowardsPlayer;
            }
        }
        if ((this->actor.bgCheckFlags & 8) != 0) {
            this->unk_152 = 0x14;
            this->unk_180 = this->actor.yawTowardsPlayer;
        }
    }
    Math_ApproachS(&this->actor.world.rot.y, this->unk_180, 0xA, 0x1000);
    if ((this->unk_150 == 0) || (this->actor.xzDistToPlayer <= 200.0f)) {
        func_809FDB2C(this, globalCtx);
        if (this->unk_150 != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x3A6BU);
        }
    }
    this->actor.shape.rot.y += 0x2000;
}

void func_809FE6B0(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_144 = func_809FE734;
    func_809F4FAC(arg1);
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x190, &D_06000D0C, -2.0f);
    arg0->unk_1D4 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06000D0C);
    arg0->unk_ABD0 = 0;
    arg0->unk_ABC8 = 0;
    arg0->unk_15C = 0x14;
    arg0->flags &= -2;
}

void func_809FE734(Boss07 *this, GlobalContext *globalCtx) {
    Actor *sp4C;
    u8 sp4B;
    SkelAnime *sp40;
    Vec3f *sp3C;
    SkelAnime *temp_a0;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    u16 temp_t1;

    sp4B = 0;
    sp4C = globalCtx->actorCtx.actorList[2].first;
    this->unk_15C = 0x14;
    temp_a0 = &this->unk_190;
    this->unk_ABC8 += 1;
    sp40 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_809F4CBC(this, 3.0f);
    temp_t1 = (u16) this->unk_ABD0;
    switch (temp_t1) {
    case 0:
        if (ActorCutscene_GetCurrentIndex() == -1) {
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            this->unk_ABD2 = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, this->unk_ABD2, 7);
            this->unk_ABC8 = 0;
            this->unk_ABD0 = 0xA;
            func_8016566C(0x96);
        case 10:
            D_80A09A4C = 5;
            this->unk_ABEC = 0.0f;
            this->unk_ABF0 = 30.0f;
            this->unk_ABF4 = 210.0f;
            this->unk_ABF8 = 0.0f;
            this->unk_ABFC = 150.0f;
            this->unk_AC00 = 0.0f;
            Math_ApproachF((f32 *) &this->actor.world, 0.0f, 0.1f, 5.0f);
            Math_ApproachF(&this->actor.world.pos.z, 0.0f, 0.1f, 5.0f);
            if (func_801378B8(sp40, this->unk_1D4) != 0) {
                this->unk_ABC8 = 0;
                this->unk_ABD0 = 1;
                SkelAnime_ChangeAnimTransitionRepeat(sp40, &D_06003854, -5.0f);
            }
        }
        break;
    case 1:
        D_80A09A4C = 5;
        this->unk_ABFC = (Math_SinS((s16) (this->unk_ABC8 * 0x700)) * 15.0f) + 150.0f;
        if (this->unk_ABC8 == 0x28) {
            this->unk_ABC8 = 0;
            this->unk_ABD0 = 2;
            this->unk_ABEC = -30.0f;
            this->unk_ABF0 = 120.0f;
            this->unk_ABF4 = 110.0f;
            this->unk_ABF8 = -70.0f;
            this->unk_ABFC = 150.0f;
            this->unk_AC00 = -20.0f;
            this->unk_17E8 = 1.0f;
            this->unk_17EC = 0.4f;
            SkelAnime_ChangeAnimTransitionRepeat(sp40, &D_060031E4, -5.0f);
            this->actor.shape.rot.y = 0;
            this->actor.world.rot.y = this->actor.shape.rot.y;
            Math_ApproachF((f32 *) &this->actor.world, 0.0f, 1.0f, 200.0f);
            Math_ApproachF(&this->actor.world.pos.z, 0.0f, 1.0f, 200.0f);
            sp4C->world.pos.x = this->actor.world.pos.x;
            sp4C->shape.rot.y = -0x8000;
            sp4C->world.pos.z = this->actor.world.pos.z + 300.0f;
            sp4C->world.rot.y = sp4C->shape.rot.y;
            Audio_PlayActorSound2((Actor *) this, 0x39BAU);
        }
        break;
    case 2:
        D_80A09A4C = 5;
        sp4B = 1;
        if (this->unk_ABC8 == 0x28) {
            this->unk_ABC8 = 0;
            this->unk_ABD0 = 3;
            this->unk_ABEC = 30.0f;
            this->unk_ABF0 = 120.0f;
            this->unk_ABF4 = 110.0f;
            this->unk_ABF8 = 50.0f;
            this->unk_ABFC = 150.0f;
            this->unk_AC00 = -20.0f;
            this->unk_17E8 = 1.0f;
            this->unk_17EC = 0.4f;
            Audio_PlayActorSound2((Actor *) this, 0x39BAU);
        }
        break;
    case 3:
        D_80A09A4C = 5;
        sp4B = 1;
        if (this->unk_ABC8 == 0x28) {
            this->unk_ABC8 = 0;
            this->unk_ABD0 = 4;
            this->unk_ABEC = 0.0f;
            this->unk_ABF0 = 90.0f;
            this->unk_ABF4 = 110.0f;
            this->unk_ABF8 = 0.0f;
            this->unk_ABFC = 90.0f;
            this->unk_AC00 = 0.0f;
            this->unk_17E8 = 1.0f;
            this->unk_17EC = 0.4f;
            Audio_PlayActorSound2((Actor *) this, 0x39BAU);
        }
        break;
    case 4:
        D_80A09A4C = 5;
        sp4B = 2;
        if (this->unk_ABC8 == 0xA) {
            Audio_PlayActorSound2((Actor *) this, 0x39BAU);
        }
        if (this->unk_ABC8 == 0x28) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x12F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) (s32) this->unk_ABD2, (s16) 0x1E);
            Actor_MarkForDeath((Actor *) this);
        }
        break;
    }
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    temp_a1 = &this->unk_ABD4;
    sp40 = (SkelAnime *) temp_a1;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &this->unk_ABEC, temp_a1);
    temp_a1_2 = &this->unk_ABE0;
    sp3C = temp_a1_2;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &this->unk_ABF8, temp_a1_2);
    if (sp4B == 1) {
        this->unk_17E0 = (Math_SinS((s16) (this->unk_ABC8 * 0x3000)) * this->unk_17EC) + this->unk_17E8;
        Math_ApproachF(&this->unk_17E8, 2.0f, 1.0f, 0.05f);
        Math_ApproachZeroF(&this->unk_17EC, 1.0f, 0.01f);
    } else if (sp4B == 2) {
        this->unk_17E4 = (Math_SinS((s16) (this->unk_ABC8 * 0x3000)) * this->unk_17EC) + this->unk_17E8;
        Math_ApproachF(&this->unk_17E8, 2.0f, 1.0f, 0.05f);
        Math_ApproachZeroF(&this->unk_17EC, 1.0f, 0.01f);
    }
    this->unk_17F0 = (Math_SinS((s16) (this->unk_ABC8 << 0xD)) * 0.1f) + 1.0f;
    this->unk_17F4 = (Math_CosS((s16) (this->unk_ABC8 << 0xD)) * 0.1f) + 1.0f;
    if (this->unk_ABD2 != 0) {
        ShrinkWindow_SetLetterboxTarget(0x1B);
        Play_CameraSetAtEye(globalCtx, this->unk_ABD2, sp3C, (Vec3f *) sp40);
    }
}

void func_809FEE70(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_8;
    s32 temp_v1;
    u8 temp_t8;
    void *temp_a1;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *phi_v1;
    s32 phi_v1_2;
    s32 phi_v0;

    if (arg0->unk_15C == 0) {
        temp_a1 = arg0->unk_404;
        phi_v1 = temp_a1;
        phi_v0 = 0;
loop_2:
        temp_v0 = phi_v0 + 0x40;
        phi_v0 = temp_v0;
        if ((phi_v1->unk_16 & 2) != 0) {
            temp_a1->unk_16 = (u8) (temp_a1->unk_16 & 0xFFFD);
            temp_v0_2 = arg0->unk_404;
            temp_v0_2->unk_56 = (u8) (temp_v0_2->unk_56 & 0xFFFD);
            temp_v0_3 = arg0->unk_404;
            temp_v0_3->unk_96 = (u8) (temp_v0_3->unk_96 & 0xFFFD);
            phi_v1_2 = 0xC0;
            do {
                temp_v0_4 = arg0->unk_404 + phi_v1_2;
                temp_v0_4->unk_16 = (u8) (temp_v0_4->unk_16 & ~2);
                temp_v0_5 = arg0->unk_404 + phi_v1_2;
                temp_v0_5->unk_56 = (u8) (temp_v0_5->unk_56 & ~2);
                temp_v0_6 = arg0->unk_404 + phi_v1_2;
                temp_v0_6->unk_96 = (u8) (temp_v0_6->unk_96 & ~2);
                temp_v0_7 = arg0->unk_404 + phi_v1_2;
                temp_v1 = phi_v1_2 + 0x100;
                temp_v0_7->unk_D6 = (u8) (temp_v0_7->unk_D6 & ~2);
                phi_v1_2 = temp_v1;
            } while (temp_v1 != 0x2C0);
            if (arg0->unk_1804 == 0xA) {
                arg0->unk_1806 = 0;
            }
            temp_t8 = arg0->colChkInfo.damageEffect;
            switch (temp_t8) {
            case 3:
                arg0->unk_1805 = 0xA;
                break;
            case 2:
                arg0->unk_1805 = 1;
                break;
            case 4:
                arg0->unk_1805 = 0x14;
                Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                break;
            case 10:
                arg0->unk_1805 = 0x28;
                Audio_PlayActorSound2(arg0, 0x389EU);
                break;
            case 9:
                arg0->unk_1805 = 0x1E;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 3, (s16) 4);
                break;
            }
            temp_v0_8 = arg0->unk_144;
            if ((func_809FD89C == temp_v0_8) || (func_809FDAB0 == temp_v0_8)) {
                if (arg0->colChkInfo.damageEffect == 0xC) {
                    arg0->unk_15C = 0xF;
                } else {
                    arg0->unk_15C = 5;
                }
                func_809FD984(arg0, arg1, arg0->colChkInfo.damage, arg0->colChkInfo.damageEffect);
                arg0->unk_15E = 0xF;
                return;
            }
            arg0->unk_15C = 0xF;
            func_809FD818(arg0, arg1, 0x96);
            Audio_PlayActorSound2(arg0, 0x3A6CU);
            return;
        }
        phi_v1 += 0x40;
        if (temp_v0 == 0x2C0) {
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
        goto loop_2;
    }
}

void func_809FF0E4(Actor *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = this->unk_150;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_150 = (s16) (temp_v0 - 1);
        phi_v1 = this->unk_150;
    }
    if (phi_v1 == 0) {
        Actor_MarkForDeath(this);
    }
}

void func_809FF12C(Actor *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp48;
    Collider *sp44;
    Actor *temp_v0_12;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 temp_t1;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t4;
    void *temp_t5;
    void *temp_t5_2;
    void *temp_t7;
    void *temp_t8;
    void *temp_t9;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    Actor *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;

    this->hintId = 0x33;
    this->unk_14C = (s16) (this->unk_14C + 1);
    Math_Vec3f_Copy(&D_80A09A40, &this->projectedPos);
    if (this->unk_14A == 1) {
        Math_ApproachF(&globalCtx->envCtx.unk_DC, 1.0f, 1.0f, 0.1f);
        if (globalCtx->envCtx.unk_DC == 1.0f) {
            globalCtx->envCtx.unk_DC = 0.0f;
            temp_t1 = this->unk_14B + 1;
            this->unk_14B = temp_t1;
            if ((temp_t1 & 0xFF) >= 8) {
                this->unk_14B = 0U;
            }
        }
        globalCtx->envCtx.unk_C2 = *(&D_80A08198 + this->unk_14B);
        globalCtx->envCtx.unk_C1 = *(&D_80A081A0 + this->unk_14B);
    }
    Math_ApproachF(&globalCtx->envCtx.unk_DC, 0.0f, 1.0f, 0.03f);
    phi_v0 = this;
    phi_v1 = 0;
    if (gGameInfo->data[1311] == 0) {
        this->unk_174 = 0;
        this->shape.shadowAlpha = 0x82;
        do {
            temp_a0 = phi_v0->unk_150;
            temp_v1 = phi_v1 + 2;
            phi_v1 = temp_v1;
            if (temp_a0 != 0) {
                phi_v0->unk_150 = (s16) (temp_a0 - 1);
            }
            phi_v0 += 2;
        } while (temp_v1 != 6);
        temp_v0 = this->unk_15C;
        if (temp_v0 != 0) {
            this->unk_15C = (s16) (temp_v0 - 1);
        }
        temp_v0_2 = this->unk_15E;
        if (temp_v0_2 != 0) {
            this->unk_15E = (s16) (temp_v0_2 - 1);
        }
        temp_v0_3 = this->unk_158;
        if (temp_v0_3 != 0) {
            this->unk_158 = (s16) (temp_v0_3 - 1);
        }
        temp_v0_4 = this->unk_18D6;
        if (temp_v0_4 != 0) {
            this->unk_18D6 = (s16) (temp_v0_4 - 1);
        }
        Math_ApproachZeroF(this + 0x330, 1.0f, 0.04f);
        this->unk_144(this, globalCtx);
        Actor_SetVelocityAndMoveYRotationAndGravity(this);
        Actor_UpdateBgCheckInfo(globalCtx, this, 50.0f, 200.0f, 100.0f, 5U);
        if ((this->unk_148 != 0) || (gGameInfo->data[1336] != 0)) {
            gGameInfo->data[1336] = 0;
            this->unk_148 = 0U;
            func_801A89A8(0x100100FF);
            func_809FE6B0(this, globalCtx);
        }
    }
    if (this->unk_158 != 0) {
        temp_v0_5 = this->unk_404;
        temp_v0_5->unk_16 = (u8) (temp_v0_5->unk_16 & 0xFFFD);
        temp_v0_6 = this->unk_404;
        temp_v0_6->unk_56 = (u8) (temp_v0_6->unk_56 & 0xFFFD);
        temp_v0_7 = this->unk_404;
        temp_v0_7->unk_96 = (u8) (temp_v0_7->unk_96 & 0xFFFD);
        phi_v1_2 = 0xC0;
        do {
            temp_v0_8 = this->unk_404 + phi_v1_2;
            temp_v0_8->unk_16 = (u8) (temp_v0_8->unk_16 & ~2);
            temp_v0_9 = this->unk_404 + phi_v1_2;
            temp_v0_9->unk_56 = (u8) (temp_v0_9->unk_56 & ~2);
            temp_v0_10 = this->unk_404 + phi_v1_2;
            temp_v0_10->unk_96 = (u8) (temp_v0_10->unk_96 & ~2);
            temp_v0_11 = this->unk_404 + phi_v1_2;
            temp_v1_2 = phi_v1_2 + 0x100;
            temp_v0_11->unk_D6 = (u8) (temp_v0_11->unk_D6 & ~2);
            phi_v1_2 = temp_v1_2;
        } while (temp_v1_2 != 0x2C0);
    }
    func_809FEE70(this, globalCtx);
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = this + 0x3E8;
    sp44 = temp_a2;
    sp48 = temp_a1;
    CollisionCheck_SetOC(globalCtx, temp_a1, temp_a2);
    CollisionCheck_SetAC(globalCtx, temp_a1, temp_a2);
    if (func_809FE524 != this->unk_144) {
        Math_ApproachS(&this->shape.rot.y, this->world.rot.y, 1, 0x1000);
    }
    if ((this->unk_18D6 != 0) && ((this->unk_14C & 1) == 0)) {
        temp_v0_12 = Actor_SpawnAsChild(&globalCtx->actorCtx, this, globalCtx, 0x12F, this->world.pos.x, this->world.pos.y, this->world.pos.z, (s16) (s32) this->world.rot.x, (s16) (s32) this->world.rot.y, (s16) 7, 0x15);
        if (temp_v0_12 != 0) {
            temp_t0 = this->unk_1B0;
            temp_t8 = temp_v0_12->unk_1B0;
            temp_t8->unk_0 = (unaligned s32) temp_t0->unk_0;
            temp_t8->unk_4 = (u16) temp_t0->unk_4;
            phi_v1_3 = 6;
            do {
                temp_t5 = this->unk_1B0 + phi_v1_3;
                temp_t4 = temp_v0_12->unk_1B0 + phi_v1_3;
                temp_t4->unk_0 = (unaligned s32) temp_t5->unk_0;
                temp_t4->unk_4 = (u16) temp_t5->unk_4;
                temp_t2 = this->unk_1B0 + phi_v1_3;
                temp_t0_2 = temp_v0_12->unk_1B0 + phi_v1_3;
                temp_t0_2->unk_6 = (unaligned s32) temp_t2->unk_6;
                temp_t0_2->unk_A = (u16) temp_t2->unk_A;
                temp_t7 = this->unk_1B0 + phi_v1_3;
                temp_t5_2 = temp_v0_12->unk_1B0 + phi_v1_3;
                temp_t5_2->unk_C = (unaligned s32) temp_t7->unk_C;
                temp_t5_2->unk_10 = (u16) temp_t7->unk_10;
                temp_t9 = this->unk_1B0 + phi_v1_3;
                temp_t2_2 = temp_v0_12->unk_1B0 + phi_v1_3;
                temp_v1_3 = phi_v1_3 + 0x18;
                temp_t2_2->unk_12 = (unaligned s32) temp_t9->unk_12;
                temp_t2_2->unk_16 = (u16) temp_t9->unk_16;
                phi_v1_3 = temp_v1_3;
            } while (temp_v1_3 != 0x96);
        }
    }
    func_809F9E94(this, globalCtx);
}

void func_809FF5CC(Actor *this, GlobalContext *globalCtx) {
    Actor *sp34;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    sp34 = this->parent;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_s0->polyOpa.p = Gfx_SetFog(temp_s0->polyOpa.p, 0, 0, 0x64, 0x9B, 0x384, 0x44B);
    SkelAnime_DrawSV(globalCtx, sp34->unk_194, this->unk_1B0, (s32) sp34->unk_192, NULL, NULL, this);
    temp_s0->polyOpa.p = func_801660B8(globalCtx, temp_s0->polyOpa.p);
}

s32 func_809FF678(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x18) {
        arg4->y += arg5->unk_17D8;
    }
    return 0;
}

void func_809FF6B0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp28;
    f32 temp_f12;
    s8 temp_s0;
    s8 temp_s0_2;
    s8 temp_s0_3;

    if (arg1 == 0x18) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
    }
    temp_s0 = *(&D_80A0826C + arg1);
    if ((s32) temp_s0 >= 0) {
        SysMatrix_GetStateTranslation(arg4 + (temp_s0 * 0xC) + 0x334);
    }
    temp_s0_2 = *(&D_80A081A8 + arg1);
    if ((s32) temp_s0_2 >= 0) {
        if (arg4->unk_158 != 0) {
            SysMatrix_GetStateTranslationAndScaledZ(100000.0f, (Vec3f *) &sp28);
        } else {
            SysMatrix_MultiplyVector3fByState((temp_s0_2 * 0xC) + &D_80A081E8, (Vec3f *) &sp28);
        }
        func_809F4BB0(temp_s0_2, arg4 + 0x3E8, &sp28);
    }
    if (arg1 == 8) {
        SysMatrix_GetStateTranslation(arg4 + 0x1788);
    }
    if (arg1 == 0x17) {
        SysMatrix_GetStateTranslation(arg4 + 0x1794);
    }
    if (arg1 == 0xD) {
        SysMatrix_GetStateTranslation(arg4 + 0x17AC);
    }
    if (arg1 == 0x12) {
        SysMatrix_GetStateTranslation(arg4 + 0x17A0);
    }
    temp_s0_3 = *(&D_80A081C8 + arg1);
    if ((s32) temp_s0_3 >= 0) {
        temp_f12 = (arg4 + (temp_s0_3 * 4))->unk_17B8;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
    }
}

void func_809FF810(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    f32 temp_f14;
    f32 temp_f14_2;
    s32 phi_a1;

    if (arg1 == 3) {
        Matrix_Scale(arg2->unk_17F4, arg2->unk_17F0, 1.0f, 1);
    }
    phi_a1 = arg1;
    if ((arg1 == 0xA) || (arg1 == 0xC) || (arg1 == 0xD) || (arg1 == 0xF) || (arg1 == 0x11) || (arg1 == 0x12)) {
        temp_f14 = arg2->unk_17E0;
        arg1 = arg1;
        Matrix_Scale(1.0f, temp_f14, temp_f14, 1);
        phi_a1 = arg1;
    }
    if ((phi_a1 == 5) || (phi_a1 == 7) || (phi_a1 == 8) || (phi_a1 == 0x14) || (phi_a1 == 0x16) || (phi_a1 == 0x17)) {
        temp_f14_2 = arg2->unk_17E4;
        Matrix_Scale(1.0f, temp_f14_2, temp_f14_2, 1);
    }
}

void func_809FF900(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    if ((this->unk_15E & 1) != 0) {
        temp_s2->polyOpa.p = Gfx_SetFog(temp_s2->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    func_801343C0(globalCtx, this->unk_194, this->unk_1B0, (s32) this->unk_192, func_809FF678, func_809FF6B0, func_809FF810, this);
    temp_s2->polyOpa.p = func_801660B8(globalCtx, temp_s2->polyOpa.p);
    func_800BE680(globalCtx, this, (Vec3f []) (this + 0x334), 0xF, this->unk_17F8, this->unk_17FC, this->unk_1800, (u8) (s32) this->unk_1804);
}

void func_809FFA04(Boss07 *arg0, GlobalContext *arg1) {
    Boss07 *temp_a3;
    s32 temp_f8;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809FFA80;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x190, &D_06019E48, -20.0f);
    temp_f8 = (s32) (Rand_ZeroFloat(150.0f) + 60.0f);
    arg0->unk_1870 = 1.0f;
    arg0->unk_154 = (s16) temp_f8;
}

void func_809FFA80(Boss07 *this, GlobalContext *globalCtx) {
    s16 sp36;
    s16 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Actor *sp20;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;

    sp20 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    Audio_PlayActorSound2((Actor *) this, 0x31E4U);
    if (this->unk_150 == 0) {
        if (this->unk_154 == 0) {
            if (((s32) (s8) this->actor.colChkInfo.health < 9) && (sp20->unk_14B != 0) && (Rand_ZeroOne() < 0.75f)) {
                func_80A006F4(this, globalCtx);
            } else {
                func_809FFE64(this, globalCtx);
            }
        } else if (Rand_ZeroOne() < 0.15f) {
            this->unk_18C = 2.0f;
            this->unk_150 = (s16) (s32) (Rand_ZeroFloat(50.0f) + 30.0f);
        } else {
            func_809F4D10((Vec3f *) &this->unk_164, 500.0f);
            this->unk_168 = Rand_ZeroFloat(350.0f) + 100.0f;
            temp_f18 = Rand_ZeroFloat(50.0f) + 20.0f;
            this->unk_170 = 0.0f;
            this->unk_150 = (s16) (s32) temp_f18;
            this->unk_18C = Rand_ZeroFloat(12.0f) + 3.0f;
        }
    }
    temp_f12 = this->unk_164 - this->actor.world.pos.x;
    sp2C = this->unk_168 - this->actor.world.pos.y;
    sp30 = temp_f12;
    temp_f14 = this->unk_16C - this->actor.world.pos.z;
    sp28 = temp_f14;
    sp34 = Math_Atan2S(temp_f12, temp_f14);
    sp36 = Math_Atan2S(sp2C, sqrtf((sp30 * sp30) + (sp28 * sp28)));
    sp36 += (s32) (Math_SinS((s16) (this->unk_14C * 0x1388)) * 4000.0f);
    Math_ApproachS(&this->actor.world.rot.y, sp34, 0xA, (s16) (s32) this->unk_170);
    Math_ApproachS((s16 *) &this->actor.world.rot, sp36, 5, (s16) (s32) this->unk_170);
    Math_ApproachF(&this->unk_170, 2000.0f, 1.0f, 100.0f);
    Math_ApproachF(&this->actor.speedXZ, this->unk_18C, 1.0f, 1.0f);
    if (this->unk_152 != 0) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x3000);
    } else if (this->unk_18C < 7.0f) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x2000);
    } else {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 5, 0x2000);
    }
    if ((sp20->unk_D57 == 4) && (Rand_ZeroOne() < 0.8f)) {
        this->unk_152 = 0x14;
    }
    Math_ApproachS((s16 *) &this->actor.shape, 0, 0xA, 0x200);
    Math_ApproachS(&this->actor.shape.rot.z, 0, 0xA, 0x400);
    if ((this->unk_148 != 0) || (gGameInfo->data[1336] != 0)) {
        gGameInfo->data[1336] = 0;
        this->unk_148 = 0;
        func_801A89A8(0x100100FF);
        func_80A025AC(this, globalCtx);
    }
}

void func_809FFE64(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_144 = func_809FFEAC;
    arg0->unk_14E = 0;
    arg0->unk_ABD0 = 0;
    arg0->unk_150 = 0x1E;
    arg0->unk_18D4 = 0;
    Audio_PlayActorSound2(arg0, 0x39D4U);
}

void func_809FFEAC(Boss07 *this, GlobalContext *globalCtx) {
    s16 sp36;
    s16 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Actor *sp20;
    Actor *temp_v1;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    u8 temp_v0;

    temp_v0 = this->unk_14E;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    this->actor.shape.rot.z -= this->unk_18D4;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                return;
            }
            Math_ApproachS(&this->unk_18D4, 0, 1, 0x100);
            Math_ApproachS((s16 *) &this->actor.world.rot, 0x2000, 0xA, 0x7D0);
            func_809F4CBC(this, 0.5f);
            if (this->unk_150 == 0) {
                func_809FFA04(this, globalCtx);
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        }
        sp20 = temp_v1;
        Math_ApproachS((s16 *) &this->actor.shape, -0x4000, 0xA, 0x400);
        Math_ApproachS(&this->unk_18D4, 0x2000, 1, 0x200);
        if (this->unk_152 != 0) {
            this->unk_164 = temp_v1->world.pos.x;
            this->unk_168 = temp_v1->world.pos.y + 10.0f;
            this->unk_16C = temp_v1->world.pos.z;
        } else {
            Audio_PlayActorSound2((Actor *) this, 0x31E6U);
        }
        temp_f12 = this->unk_164 - this->actor.world.pos.x;
        sp2C = this->unk_168 - this->actor.world.pos.y;
        sp30 = temp_f12;
        temp_f14 = this->unk_16C - this->actor.world.pos.z;
        sp28 = temp_f14;
        sp34 = Math_Atan2S(temp_f12, temp_f14);
        temp_f14_2 = sqrtf((sp30 * sp30) + (sp28 * sp28));
        sp24 = temp_f14_2;
        sp36 = Math_Atan2S(sp2C, temp_f14_2);
        Math_ApproachS(&this->actor.world.rot.y, sp34, 0xA, (s16) (s32) this->unk_170);
        Math_ApproachS((s16 *) &this->actor.world.rot, sp36, 0xA, (s16) (s32) this->unk_170);
        Math_ApproachF(&this->unk_170, 3000.0f, 1.0f, 100.0f);
        Math_ApproachF(&this->actor.speedXZ, 20.0f, 1.0f, 2.0f);
        if (((this->unk_ABD0 == 0) && (sp24 < 100.0f)) || (this->unk_150 == 0)) {
            if (Rand_ZeroOne() < 0.25f) {
                this->unk_14E = 2;
                this->unk_150 = 0x1E;
                return;
            }
            func_809F4D10((Vec3f *) &this->unk_164, 500.0f);
            this->unk_168 = Rand_ZeroFloat(100.0f) + 100.0f;
            if (Rand_ZeroOne() < 0.3f) {
                this->unk_152 = 0x14;
                Audio_PlayActorSound2((Actor *) this, 0x39E5U);
                this->unk_ABD0 = 1;
            } else {
                this->unk_152 = 0;
                this->unk_ABD0 = 0;
            }
            this->unk_150 = 0x32;
            this->unk_170 = 0.0f;
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
    func_809F4CBC(this, 1.0f);
    Math_ApproachS((s16 *) &this->actor.shape, -0x4000, 0xA, 0x100);
    Math_ApproachS(&this->unk_18D4, 0x2000, 1, 0x100);
    if (this->unk_150 == 0) {
        this->unk_14E = 1;
        this->actor.world.rot.x = 0;
        this->unk_150 = 0x64;
        this->unk_152 = 0x14;
        this->actor.world.rot.y = this->actor.yawTowardsPlayer;
        this->unk_170 = 0.0f;
    }
}

void func_80A0021C(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_144 = func_80A00274;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x190, &D_0600AE40, -10.0f);
    arg0->unk_150 = 0x64;
    arg0->unk_170 = 0.0f;
}

void func_80A00274(Boss07 *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    func_8019F1C0(&D_80A09A40, 0x301BU);
    func_809F4CBC(this, 0.5f);
    Math_ApproachS((s16 *) &this->actor.shape, (s16) (s32) ((Math_SinS((s16) (this->unk_14C * 0xBB8)) * 1200.0f) + -4096.0f), 5, 0x800);
    Math_ApproachS(&this->actor.shape.rot.z, (s16) (s32) ((Math_SinS((s16) (this->unk_14C * 0x9C4)) * 1000.0f) + -4096.0f), 5, 0x800);
    if (this->actor.world.pos.y > 51.0f) {
        Audio_PlayActorSound2((Actor *) this, 0x31D7U);
    }
    Math_ApproachF(&this->actor.world.pos.y, (Math_SinS((s16) (this->unk_14C * 0x5DC)) * 10.0f) + 50.0f, 0.1f, this->unk_170);
    Math_ApproachF(&this->unk_170, 15.0f, 1.0f, 1.0f);
    temp_v0 = this->unk_150;
    if (((s32) temp_v0 >= 0x1F) || ((temp_v0 & 2) != 0)) {
        this->unk_1884 = 1;
    }
    if (this->unk_150 == 0) {
        func_809FFA04(this, globalCtx);
        this->unk_154 = 0x64;
    }
}

void func_80A00484(Boss07 *arg0, GlobalContext *arg1, u8 arg2, void *arg3) {
    s32 temp_a2;

    temp_a2 = arg2 & 0xFF;
    arg0->actionFunc = func_80A00554;
    arg0->unk_150 = 0x28;
    if (temp_a2 != 0) {
        arg0->actor.world.rot.y = arg0->actor.yawTowardsPlayer + 0x8000;
        arg0->unk_18D4 = 0x1500;
        arg0->actor.speedXZ = 30.0f;
    } else {
        if ((arg1->actorCtx.actorList[2].first->unk_A74 & 0x200) != 0) {
            arg0->actor.speedXZ = 20.0f;
            arg0->actor.velocity.y = 20.0f;
        } else {
            arg0->actor.speedXZ = 13.0f;
            arg0->actor.velocity.y = 10.0f;
            if (arg3 != 0) {
                arg0->actor.world.rot.y = arg3->unk_32;
            }
        }
        arg0->unk_18D4 = 0x1000;
    }
    arg0->actor.colChkInfo.health -= temp_a2;
    if ((s32) (s8) arg0->actor.colChkInfo.health <= 0) {
        arg0->unk_150 = 0x1E;
    }
    arg0->unk_152 = 0x1E;
}

void func_80A00554(Boss07 *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v0;

    this->unk_15C = 0x14;
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        func_809F4CBC(this, 1.0f);
        Math_ApproachS((s16 *) &this->actor.shape, -0x4000, 1, 0x1000);
        Math_ApproachS(&this->unk_18D4, 0, 1, 0x100);
    } else {
        this->actor.shape.rot.x += 0x2000;
    }
    temp_v0 = this->unk_150;
    this->actor.shape.rot.z += this->unk_18D4;
    if (((s32) temp_v0 >= 0x1F) || ((temp_v0 & 2) != 0)) {
        this->unk_1884 = 1;
    }
    phi_v0 = this->unk_150;
    if ((this->unk_150 == 0xF) && ((s32) (s8) this->actor.colChkInfo.health < 0xA)) {
        this->unk_774 = 1;
        phi_v0 = this->unk_150;
    }
    if (phi_v0 == 0) {
        func_809FFA04(this, globalCtx);
        if ((s32) (s8) this->actor.colChkInfo.health <= 0) {
            this->unk_148 = 1;
            Enemy_StartFinishingBlow(globalCtx, (Actor *) this);
            func_801A72CC(&this->actor.projectedPos);
            Audio_PlayActorSound2((Actor *) this, 0x3A02U);
            return;
        }
        this->actor.world.rot.x = 0x3000;
        this->unk_150 = 0x32;
        this->unk_154 = 0x64;
        this->unk_168 = 200.0f;
        this->unk_164 = this->actor.world.pos.x;
        this->unk_16C = this->actor.world.pos.z;
        this->unk_18C = 6.0f;
        this->unk_170 = 0.0f;
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_80A006D0(Boss07 *arg0) {
    arg0->unk_188C = 0.0f;
    arg0->unk_1890 = 0.0f;
    arg0->unk_1894 = 0.0f;
    arg0->unk_1898 = 0.0f;
    arg0->unk_18C0 = 0.0f;
}

void func_80A006F4(Boss07 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A00720;
    arg0->unk_14E = 0;
    arg0->unk_150 = 0x1E;
    arg0->unk_170 = 0.0f;
}

void func_80A00720(Boss07 *this, GlobalContext *globalCtx) {
    f32 sp180;
    s16 sp178;
    f32 sp174;
    f32 sp170;
    f32 sp16C;
    f32 sp160;
    CollisionPoly *sp158;
    f32 sp14C;
    u8 sp14B;
    u32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    s16 sp11A;
    s16 sp118;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    CollisionContext *sp90;
    Vec3f *sp8C;
    f32 sp88;
    Actor **temp_s1_2;
    Actor *temp_s1_3;
    Actor *temp_s3;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    Boss07 *temp_t7;
    CollisionContext *temp_a0;
    Vec3f *temp_a2;
    f32 *temp_a0_2;
    f32 *temp_s1;
    f32 *temp_s2;
    f32 *temp_s2_2;
    f32 *temp_s3_2;
    f32 *temp_s3_3;
    f32 *temp_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0;
    u8 temp_t2;
    void *temp_s0_4;
    s32 phi_v0;
    s16 phi_s0;
    f32 phi_f24;
    s32 phi_s0_2;
    s16 phi_v1;
    s32 phi_s0_3;
    s16 phi_v1_2;
    Actor *phi_s1;
    s32 phi_s0_4;

    temp_s3 = globalCtx->actorCtx.actorList[2].first;
    sp14B = 0;
    this->unk_15C = 0x14;
    func_809F4CBC(this, 0.5f);
    Math_ApproachF(&this->actor.world.pos.y, 300.0f, 0.05f, 1.0f);
    Math_ApproachS(&this->actor.shape.rot.z, 0, 0xA, 0x400);
    phi_s0 = 0xA;
    if ((temp_s3->unk_730 != 0) && (temp_v0 = temp_s3->unk_A6C & 0x400000, phi_v0 = temp_v0, (temp_v0 != 0))) {
        if (temp_s3->unk_14B == 4) {
            phi_f24 = 20.0f;
        } else {
            phi_f24 = 30.0f;
        }
    } else {
        phi_v0 = temp_s3->unk_A6C & 0x400000;
        if (temp_s3->unk_14B == 4) {
            phi_f24 = 8.0f;
        } else {
            phi_f24 = 15.0f;
        }
    }
    if (phi_v0 != 0) {
        phi_s0 = 1;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, phi_s0, (s16) (s32) this->unk_170);
    temp_f20 = temp_s3->world.pos.x - this->actor.world.pos.x;
    temp_f22 = temp_s3->world.pos.z - this->actor.world.pos.z;
    Math_ApproachS((s16 *) &this->actor.shape, (s16) (Math_Atan2S((temp_s3->world.pos.y - this->actor.world.pos.y) + phi_f24, sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22))) * -1), phi_s0, (s16) (s32) this->unk_170);
    Math_ApproachF(&this->unk_170, 4000.0f, 1.0f, 200.0f);
    temp_t2 = this->unk_14E;
    this->unk_1874 = 1;
    switch (temp_t2) {
    case 0:
        if (this->unk_150 == 0x19) {
            func_8019F1C0(&D_80A09A40, 0x39D2U);
        }
        if (this->unk_150 == 0) {
            this->unk_14E = 1;
            this->unk_150 = 6;
            this->unk_1898 = 1.0f;
            return;
        }
    default:
        return;
    case 1:
        Math_ApproachF(&this->unk_188C, 1.0f, 1.0f, 0.2f);
        if (this->unk_150 == 0) {
            this->unk_14E = 2;
            this->unk_150 = 8;
            return;
        }
        /* Duplicate return node #77. Try simplifying control flow for better match */
        return;
    case 2:
        play_sound(0x31D3U);
        Math_ApproachF(&this->unk_1890, 1.0f, 0.2f, 0.2f);
        if (this->unk_150 == 0) {
            this->unk_14E = 3;
            this->unk_150 = 0x64;
            return;
        }
        /* Duplicate return node #77. Try simplifying control flow for better match */
        return;
    case 3:
    case 4:
        play_sound(0x31D3U);
        /* fallthrough */
    case 5:
        Math_ApproachF(&this->unk_1890, 1.0f, 0.2f, 0.2f);
        temp_f20_2 = temp_s3->world.pos.x - this->unk_189C;
        temp_f12 = (temp_s3->world.pos.y - this->unk_18A0) + 20.0f;
        temp_f22_2 = temp_s3->world.pos.z - this->unk_18A4;
        temp_f0 = sqrtf((temp_f20_2 * temp_f20_2) + (temp_f12 * temp_f12) + (temp_f22_2 * temp_f22_2));
        temp_f8 = temp_f0 * 0.2f;
        sp180 = temp_f0;
        Math_ApproachF(&this->unk_1894, temp_f8, 1.0f, 7.0f);
        temp_a0 = &globalCtx->colCtx;
        temp_a2 = &this->unk_18A8;
        sp8C = temp_a2;
        sp90 = temp_a0;
        if ((func_800C55C4(temp_a0, (Vec3f *) &this->unk_189C, temp_a2, (Vec3f *) &sp14C, &sp158, 1U, 1U, 1U, 1U, &sp144) != 0) && (this->unk_14E != 5)) {
            sp138 = randPlusMinusPoint5Scaled(20.0f) + sp14C;
            sp13C = randPlusMinusPoint5Scaled(20.0f) + sp150;
            temp_f8_2 = randPlusMinusPoint5Scaled(20.0f) + sp154;
            sp130 = 6.0f;
            sp140 = temp_f8_2;
            sp12C = 0.0f;
            sp124 = 6.0f * -0.05f;
            sp134 = 0.0f;
            sp120 = 0.0f;
            sp128 = 0.0f;
            func_809F4AE8(globalCtx, &sp138, &sp12C, &sp120, Rand_ZeroFloat(10.0f) + 25.0f);
            sp14B = 1;
        }
        sp16C = temp_s3->world.pos.x - this->unk_189C;
        sp170 = (temp_s3->world.pos.y - this->unk_18A0) + 10.0f;
        sp174 = temp_s3->world.pos.z - this->unk_18A4;
        SysMatrix_InsertXRotation_s((s16) ((s32) this->actor.shape.rot.x * -1), 0);
        Matrix_RotateY((s16) ((s32) this->actor.shape.rot.y * -1), 1U);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp16C, (Vec3f *) &sp160);
        if ((fabsf(sp160) < 20.0f) && (fabsf(sp164) < 50.0f) && (sp168 > 40.0f) && (sp168 <= (this->unk_1894 * 20.0f))) {
            if ((func_8012405C(globalCtx) != 0) && (temp_s3->unk_14B == 4) && (temp_s3->unk_A6C & 0x400000) && (temp_v0_2 = (temp_s3->shape.rot.y - this->actor.shape.rot.y) + 0x8000, (((s32) temp_v0_2 < 0x2000) != 0)) && ((s32) temp_v0_2 >= -0x1FFF)) {
                this->unk_1894 = sp180 * 0.05f;
                Math_ApproachF(&this->unk_18C0, sp180 * 0.2f, 1.0f, 7.0f);
                func_8018219C(temp_s3 + 0xD04, (Vec3s *) &sp118, 0);
                sp11A += 0x8000;
                sp118 = (s16) -(s32) sp118;
                if (this->unk_14E == 3) {
                    this->unk_14E = 4;
                    this->unk_18C4 = sp118;
                    this->unk_18C6 = sp11A;
                } else {
                    temp_s3->unk_B84 = (s16) this->actor.yawTowardsPlayer;
                    temp_s3->unk_B80 = (f32) (this->unk_1898 * 0.5f);
                    D_80A09A58->unk_1808 = 1;
                    D_80A09A58->unk_180C = this->unk_1898 * 30.0f;
                    temp_t7 = D_80A09A58;
                    temp_t7->unk_1810 = sp8C->x;
                    temp_t7->unk_1814 = sp8C->y;
                    temp_t7->unk_1818 = sp8C->z;
                    Math_ApproachS(&this->unk_18C4, sp118, 2, 0x2000);
                    Math_ApproachS(&this->unk_18C6, sp11A, 2, 0x2000);
                    sp16C = this->actor.world.pos.x - this->unk_18A8.x;
                    temp_f4 = this->actor.world.pos.y - this->unk_18A8.y;
                    sp170 = temp_f4;
                    temp_f8_3 = this->actor.world.pos.z - this->unk_18A8.z;
                    sp174 = temp_f8_3;
                    sp180 = sqrtf((sp16C * sp16C) + (temp_f4 * temp_f4) + (temp_f8_3 * temp_f8_3));
                    SysMatrix_InsertXRotation_s((s16) ((s32) this->unk_18C4 * -1), 0);
                    Matrix_RotateY((s16) ((s32) this->unk_18C6 * -1), 1U);
                    SysMatrix_StatePush();
                    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp16C, (Vec3f *) &sp160);
                    if ((fabsf(sp160) < 60.0f) && (fabsf(sp164) < 60.0f) && (sp168 > 40.0f) && (sp168 <= (this->unk_18C0 * 16.666668f)) && (this->unk_14E != 5)) {
                        this->unk_18D8 += 2;
                        this->unk_18C0 = sp180 * 0.062f;
                        if ((s32) this->unk_18D8 < 0xA) {
                            sp88 = 6.0f * -0.05f;
                            sp108 = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.x;
                            sp10C = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.y;
                            temp_f16 = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.z;
                            spFC = 0.0f;
                            sp104 = 0.0f;
                            sp110 = temp_f16;
                            spF0 = 0.0f;
                            spF8 = 0.0f;
                            sp100 = 6.0f;
                            spF4 = sp88;
                            func_809F4AE8(globalCtx, &sp108, &spFC, &spF0, Rand_ZeroFloat(10.0f) + 25.0f);
                            this->unk_15E |= 0xA;
                        } else {
                            this->unk_15C = 0x32;
                            this->unk_15E = 0xF;
                            func_801A72CC(&this->actor.projectedPos);
                            Audio_PlayActorSound2((Actor *) this, 0x39D6U);
                            func_80A00484(this, globalCtx, 2U, NULL);
                            func_80A006D0(this);
                            temp_s3_2 = &spF0;
                            temp_s2 = &spFC;
                            temp_s1 = &sp108;
                            phi_s0_2 = 0;
                            do {
                                sp108 = randPlusMinusPoint5Scaled(50.0f) + this->actor.world.pos.x;
                                sp10C = randPlusMinusPoint5Scaled(50.0f) + this->actor.world.pos.y;
                                sp110 = randPlusMinusPoint5Scaled(50.0f) + this->actor.world.pos.z;
                                spFC = randPlusMinusPoint5Scaled(20.0f);
                                sp100 = randPlusMinusPoint5Scaled(20.0f);
                                temp_f0_2 = randPlusMinusPoint5Scaled(20.0f);
                                sp104 = temp_f0_2;
                                spF0 = spFC * -0.05f;
                                spF4 = sp100 * -0.05f;
                                spF8 = temp_f0_2 * -0.05f;
                                func_809F4AE8(globalCtx, temp_s1, temp_s2, temp_s3_2, Rand_ZeroFloat(10.0f) + 25.0f);
                                temp_s0 = phi_s0_2 + 1;
                                phi_s0_2 = temp_s0;
                            } while (temp_s0 != 0x14);
                            if ((s32) (s8) this->actor.colChkInfo.health <= 0) {
                                this->unk_18D6 = 0xC8;
                            } else {
                                this->unk_18D6 = 0x3C;
                            }
                        }
                    }
                    SysMatrix_StatePop();
                    temp_s4 = &spC8;
                    temp_s3_3 = &spD4;
                    temp_s2_2 = &spE0;
                    phi_v1 = 0;
                    do {
                        temp_s1_2 = &(&D_80A09A60)[phi_v1];
                        temp_v0_3 = *temp_s1_2;
                        phi_v1_2 = phi_v1;
                        if ((s32) temp_v0_3->unk_14E < 2) {
                            temp_a0_2 = &sp16C;
                            sp16C = temp_v0_3->world.pos.x - this->unk_18A8.x;
                            temp_f4_2 = temp_v0_3->world.pos.y - this->unk_18A8.y;
                            sp170 = temp_f4_2;
                            temp_f16_2 = temp_v0_3->world.pos.z - this->unk_18A8.z;
                            sp178 = phi_v1;
                            sp174 = temp_f16_2;
                            sp180 = sqrtf((sp16C * sp16C) + (temp_f4_2 * temp_f4_2) + (temp_f16_2 * temp_f16_2));
                            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_2, (Vec3f *) &sp160);
                            if ((fabsf(sp160) < 60.0f) && (fabsf(sp164) < 60.0f) && (sp168 > 40.0f) && (sp168 <= (this->unk_18C0 * 16.666668f)) && (this->unk_14E != 5)) {
                                this->unk_18D8 += 2;
                                this->unk_18C0 = sp180 * 0.062f;
                                if ((s32) this->unk_18D8 < 5) {
                                    sp88 = 6.0f * -0.05f;
                                    spE0 = randPlusMinusPoint5Scaled(40.0f) + (*temp_s1_2)->world.pos.x;
                                    spE4 = randPlusMinusPoint5Scaled(40.0f) + (*temp_s1_2)->world.pos.y;
                                    temp_f0_3 = randPlusMinusPoint5Scaled(40.0f);
                                    spD4 = 0.0f;
                                    spDC = 0.0f;
                                    spC8 = 0.0f;
                                    spD0 = 0.0f;
                                    spE8 = temp_f0_3 + (*temp_s1_2)->world.pos.z;
                                    spD8 = 6.0f;
                                    spCC = sp88;
                                    func_809F4AE8(globalCtx, temp_s2_2, temp_s3_3, temp_s4, Rand_ZeroFloat(10.0f) + 25.0f);
                                    temp_v0_4 = *temp_s1_2;
                                    temp_v0_4->unk_15E = (s16) (temp_v0_4->unk_15E | 0xA);
                                } else {
                                    (*temp_s1_2)->unk_14E = 2U;
                                    (*temp_s1_2)->unk_18D6 = 0x3C;
                                    Audio_PlayActorSound2((Actor *) this, 0x3A0DU);
                                    phi_s0_3 = 0;
                                    do {
                                        spE0 = randPlusMinusPoint5Scaled(50.0f) + (*temp_s1_2)->world.pos.x;
                                        spE4 = randPlusMinusPoint5Scaled(50.0f) + (*temp_s1_2)->world.pos.y;
                                        spE8 = randPlusMinusPoint5Scaled(50.0f) + (*temp_s1_2)->world.pos.z;
                                        spD4 = randPlusMinusPoint5Scaled(20.0f);
                                        spD8 = randPlusMinusPoint5Scaled(20.0f);
                                        temp_f0_4 = randPlusMinusPoint5Scaled(20.0f);
                                        spDC = temp_f0_4;
                                        spC8 = spD4 * -0.05f;
                                        spCC = spD8 * -0.05f;
                                        spD0 = temp_f0_4 * -0.05f;
                                        func_809F4AE8(globalCtx, temp_s2_2, temp_s3_3, temp_s4, Rand_ZeroFloat(10.0f) + 25.0f);
                                        temp_s0_2 = phi_s0_3 + 1;
                                        phi_s0_3 = temp_s0_2;
                                    } while (temp_s0_2 != 0x14);
                                }
                            }
                            phi_v1_2 = sp178;
                        }
                        temp_v1 = phi_v1_2 + 1;
                        phi_v1 = temp_v1;
                    } while ((s32) temp_v1 < 4);
                    if ((func_800C55C4(sp90, sp8C, &this->unk_18B4, (Vec3f *) &sp14C, &sp158, 1U, 1U, 1U, 1U, &sp144) != 0) && (this->unk_14E != 5)) {
                        sp14B = 1;
                        sp88 = 6.0f * -0.05f;
                        spBC = randPlusMinusPoint5Scaled(20.0f) + sp14C;
                        spC0 = randPlusMinusPoint5Scaled(20.0f) + sp150;
                        temp_f4_3 = randPlusMinusPoint5Scaled(20.0f) + sp154;
                        spB0 = 0.0f;
                        spB8 = 0.0f;
                        spC4 = temp_f4_3;
                        spA4 = 0.0f;
                        spAC = 0.0f;
                        spB4 = 6.0f;
                        spA8 = sp88;
                        func_809F4AE8(globalCtx, &spBC, &spB0, &spA4, Rand_ZeroFloat(10.0f) + 25.0f);
                    }
                }
            } else if ((temp_s3->unk_D44 == 0) && (this->unk_14E != 5)) {
                func_800B8D50(globalCtx, (Actor *) this, 5.0f, this->actor.shape.rot.y, 0.0f, 0x10U);
                phi_s1 = temp_s3;
                phi_s0_4 = 0;
                do {
                    temp_s0_3 = phi_s0_4 + 1;
                    temp_s1_3 = phi_s1 + 1;
                    temp_s1_3->unk_D44 = Rand_S16Offset(0, 0xC8);
                    phi_s1 = temp_s1_3;
                    phi_s0_4 = temp_s0_3;
                } while (temp_s0_3 != 0x12);
                temp_s3->unk_D44 = 1U;
                func_800B8E58(temp_s3, (temp_s3->unk_A68->unk_92 + 0x681E) & 0xFFFF);
            }
        }
        if (sp14B != 0) {
            if (sp150 == 0.0f) {
                temp_f20_3 = this->unk_18E0 - sp14C;
                temp_f22_3 = this->unk_18E8 - sp154;
                temp_s0_4 = Effect_GetParams(this->unk_18DC);
                func_800AE930(sp90, (s32) temp_s0_4, &sp14C, 15.0f, (s16) Math_Atan2S(temp_f20_3, temp_f22_3), sp158, (s32) sp144);
                this->unk_18EC = 1;
            }
            this->unk_18E0 = sp14C.unk_0;
            this->unk_18E4 = sp14C.unk_4;
            this->unk_18E8 = sp14C.unk_8;
        }
        if (this->unk_14E != 5) {
            if (this->unk_150 == 0) {
                this->unk_14E = 5;
                this->unk_150 = 0x14;
                return;
            }
            /* Duplicate return node #77. Try simplifying control flow for better match */
            return;
        }
        Math_ApproachZeroF(&this->unk_1898, 1.0f, 0.05f);
        if (this->unk_150 == 0) {
            func_809FFA04(this, globalCtx);
            this->unk_154 = 0x64;
            func_80A006D0(this);
        }
        /* Duplicate return node #77. Try simplifying control flow for better match */
        return;
    }
}

void func_80A016E4(Boss07 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A01750;
    arg0->actor.world.pos.x = 0.0f;
    arg0->actor.world.pos.y = 300.0f;
    arg0->actor.world.pos.z = -922.5f;
    arg0->unk_160 = gGameInfo->data[1323] + 0x96;
    func_8016566C(arg0->unk_160, arg0);
}

void func_80A01750(Boss07 *this, GlobalContext *globalCtx) {
    f32 sp8C;
    Actor *sp88;
    s32 sp84;
    ? sp78;
    ? sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    Camera *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Vec3f *sp40;
    Camera *temp_v0_5;
    GameInfo *temp_v0;
    GameInfo *temp_v0_4;
    Vec3f *temp_t8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_t4;
    u32 temp_v1;
    u32 phi_v1;
    u32 phi_v1_2;
    u32 phi_v1_3;
    u32 phi_v1_4;
    Actor **phi_t0;
    u32 phi_v1_5;
    u32 phi_v1_6;
    u32 phi_v1_7;
    f32 phi_f0;
    u32 phi_v1_8;
    u32 phi_v1_9;
    u32 phi_v1_10;

    sp8C = 0.0f;
    sp88 = globalCtx->actorCtx.actorList[2].first;
    this->unk_ABC8 += 1;
    gGameInfo->data[186] = this->unk_160;
    this->unk_1884 = 1;
    temp_t4 = (u16) this->unk_ABD0;
    switch (temp_t4) {
    case 0:
        this->actor.world.pos.x = 0.0f;
        this->actor.world.pos.y = 277.0f;
        this->actor.world.pos.z = -922.5f;
        if ((sp88->world.pos.z < 700.0f) && (ActorCutscene_GetCurrentIndex() == -1)) {
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            this->unk_ABD2 = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, this->unk_ABD2, 7);
            this->unk_ABC8 = 0;
            this->unk_ABD0 = 1;
            this->unk_160 = gGameInfo->data[1324] + 0x96;
        case 1:
            if ((u32) this->unk_ABC8 >= 0x14U) {
                func_8019F128(0x2047U);
                temp_v0 = gGameInfo;
                Math_ApproachF(&D_80A09A58->unk_AB44, (f32) temp_v0->data[1586] + 1.0f, 0.05f, (f32) temp_v0->data[1587] + 0.05f);
            }
            if (this->unk_ABC8 == 0x23) {
                func_800B7298(globalCtx, (Actor *) this, 0xFU);
            }
            sp88->world.pos.x = 0.0f;
            sp88->world.pos.z = 700.0f;
            sp88->shape.rot.y = -0x8000;
            sp88->world.rot.y = sp88->shape.rot.y;
            this->unk_ABD4.x = 0.0f;
            this->unk_ABD4.y = (func_800B6FC8((Player *) sp88) + sp88->world.pos.y) - 24.0f;
            this->unk_ABD4.z = sp88->world.pos.z - 60.0f;
            this->unk_ABE0.x = sp88->world.pos.x;
            this->unk_ABE0.y = (func_800B6FC8((Player *) sp88) + sp88->world.pos.y) - 20.0f;
            this->unk_ABE0.z = sp88->world.pos.z;
            if (sp88->unk_14B == 0) {
                this->unk_ABE0.y -= 30.0f;
            }
            if (this->unk_ABC8 == 0x4B) {
                this->unk_ABC8 = 0;
                this->unk_ABD0 = 2;
                this->unk_ABD4.x = sp88->world.pos.x;
                this->unk_ABD4.y = sp88->world.pos.y + 20.0f;
                this->unk_ABD4.z = (sp88->world.pos.z - 60.0f) + 120.0f;
                this->unk_ABE0.x = sp88->world.pos.x;
                this->unk_ABE0.y = sp88->world.pos.y + 24.0f + 5.0f;
                this->unk_ABE0.z = sp88->world.pos.z;
            }
        }
        break;
    case 2:
        this->unk_160 = gGameInfo->data[1325] + 0x96;
        if ((u32) this->unk_ABC8 >= 0x14U) {
            Math_ApproachZeroF(&D_80A09A58->unk_AB44, 1.0f, 0.05f);
        }
        phi_v1 = this->unk_ABC8;
        if (this->unk_ABC8 == 0x14) {
            D_80A09A60.unk_0->unk_14E = 1;
            D_80A09A60.unk_4->unk_14E = 1;
            D_80A09A60.unk_8->unk_14E = 1;
            D_80A09A60.unk_C->unk_14E = 1;
            phi_v1 = this->unk_ABC8;
        }
        phi_v1_2 = phi_v1;
        if (phi_v1 == 0) {
            func_800B7298(globalCtx, (Actor *) this, 7U);
            phi_v1_2 = this->unk_ABC8;
        }
        phi_v1_3 = phi_v1_2;
        phi_t0 = &D_80A09A60;
        if (phi_v1_2 == 0x78) {
            func_800B7298(globalCtx, (Actor *) this, 0x15U);
            phi_v1_3 = this->unk_ABC8;
            phi_t0 = &D_80A09A60;
        }
        phi_v1_4 = phi_v1_3;
        if (phi_v1_3 >= 0x1FU) {
            Math_ApproachF(&this->unk_ABE0.y, sp88->world.pos.y + 24.0f + 20.0f, 0.05f, this->unk_AC0C);
            Math_ApproachF(&this->unk_AC0C, 1.0f, 1.0f, 0.01f);
            phi_v1_4 = this->unk_ABC8;
            phi_t0 = &D_80A09A60;
        }
        phi_v1_5 = phi_v1_4;
        if (phi_v1_4 >= 0xA0U) {
            if (phi_v1_4 == 0xA0) {
                phi_t0->unk_0->unk_14E = 2;
                phi_t0->unk_4->unk_14E = 2U;
                phi_t0->unk_8->unk_14E = 2U;
                phi_t0->unk_C->unk_14E = 2U;
                phi_v1_5 = this->unk_ABC8;
            }
            phi_v1_6 = phi_v1_5;
            if (phi_v1_5 == 0xA1) {
                phi_t0->unk_0->unk_14E = 3;
                phi_v1_6 = this->unk_ABC8;
            }
            if ((phi_v1_6 == 0xB4) || (phi_v1_6 == 0xC8) || (phi_v1_6 == 0xDC)) {
                this->unk_ABCC += 1;
                (*(phi_t0 + (this->unk_ABCC * 4)))->unk_14E = 3;
            }
            this->unk_ABD4.x = (f32) *(&D_80A0828C + (this->unk_ABCC * 6));
            this->unk_ABD4.y = (f32) (&D_80A0828C + (this->unk_ABCC * 6))->unk_2;
            this->unk_ABD4.z = (f32) (&D_80A0828C + (this->unk_ABCC * 6))->unk_4;
            this->unk_ABE0.x = (f32) *(&D_80A082A4 + (this->unk_ABCC * 6));
            this->unk_ABE0.y = (f32) (&D_80A082A4 + (this->unk_ABCC * 6))->unk_2;
            this->unk_ABE0.z = (f32) (&D_80A082A4 + (this->unk_ABCC * 6))->unk_4;
            if (this->unk_ABC8 == 0xFA) {
                this->unk_ABD0 = 3;
                this->unk_ABC8 = 0;
                temp_f0 = this->actor.world.pos.x;
                this->unk_ABD4.x = temp_f0;
                temp_f2 = this->actor.world.pos.y;
                this->unk_ABD4.y = temp_f2;
                this->unk_ABD4.z = 300.0f;
                this->unk_ABE0.x = temp_f0;
                this->unk_ABE0.y = temp_f2;
                this->unk_ABE0.z = this->actor.world.pos.z;
                func_80A04DE0(phi_t0->unk_0, globalCtx);
                func_80A04DE0(D_80A09A60.unk_4, globalCtx);
                func_80A04DE0(D_80A09A60.unk_8, globalCtx);
                func_80A04DE0(D_80A09A60.unk_C, globalCtx);
                this->unk_AC0C = 0.0f;
                D_80A09A58->unk_AB44 = 0.0f;
                func_801A89A8(0x100A00FF);
            }
        }
        break;
    case 3:
        this->unk_160 = gGameInfo->data[1326] + 0x96;
        if ((u32) this->unk_ABC8 >= 0xFU) {
            Math_ApproachF(&this->unk_ABD4.z, -700.0f, 0.4f, 100.0f);
        }
        phi_v1_7 = this->unk_ABC8;
        if (this->unk_ABC8 >= 0x37U) {
            if (this->unk_ABC8 == 0x37) {
                Audio_PlayActorSound2((Actor *) this, 0x393FU);
            }
            this->unk_1884 = 0;
            phi_v1_7 = this->unk_ABC8;
        }
        phi_v1_8 = phi_v1_7;
        if (phi_v1_7 >= 0x4BU) {
            sp78.unk_0 = (s32) D_80A082BC.unk_0;
            sp78.unk_4 = (s32) D_80A082BC.unk_4;
            sp78.unk_8 = (s32) D_80A082BC.unk_8;
            sp6C.unk_0 = (s32) D_80A082C8.unk_0;
            sp6C.unk_4 = (s32) D_80A082C8.unk_4;
            sp6C.unk_8 = (s32) D_80A082C8.unk_8;
            if (this->unk_ABC8 == 0x4B) {
                Audio_PlayActorSound2((Actor *) this, 0x393EU);
            }
            temp_v0_2 = this->unk_ABC8 & 1;
            temp_f0_2 = (f32) temp_v0_2;
            phi_f0 = temp_f0_2;
            if (temp_v0_2 < 0) {
                phi_f0 = temp_f0_2 + 4294967296.0f;
            }
            sp8C = 2.0f * phi_f0;
            if (temp_v0_2 != 0) {
                this->actor.world.pos.x += 2.0f;
            } else {
                this->actor.world.pos.x -= 2.0f;
            }
            sp84 = 0;
            do {
                sp60 = randPlusMinusPoint5Scaled(110.0f) + this->actor.world.pos.x;
                sp64 = randPlusMinusPoint5Scaled(110.0f) + this->actor.world.pos.y;
                sp68 = this->actor.world.pos.z + 10.0f;
                EffectSsHahen_Spawn(globalCtx, (Vec3f *) &sp60, (Vec3f *) &sp78, (Vec3f *) &sp6C, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 5.0f) + 10.0f), (s16) -1, (s16) 0xA, NULL);
                temp_v0_3 = sp84 + 1;
                sp84 = temp_v0_3;
            } while (temp_v0_3 != 3);
            phi_v1_8 = this->unk_ABC8;
        }
        if (phi_v1_8 == 0x6E) {
            this->unk_ABD0 = 4;
            this->unk_ABC8 = 0;
            this->unk_ABD4.x = this->actor.world.pos.x + 200.0f;
            this->unk_ABD4.y = this->actor.world.pos.y;
            this->unk_ABD4.z = this->actor.world.pos.z + 400.0f;
            sp88->world.pos.z = 0.0f;
            func_800B7298(globalCtx, (Actor *) this, 1U);
            this->unk_160 = gGameInfo->data[1322] + 0xC8;
        }
        break;
    case 4:
        this->unk_1884 = 0;
        temp_v1 = this->unk_ABC8;
        if (temp_v1 >= 0xAU) {
            temp_v0_4 = gGameInfo;
            Math_ApproachS(&this->unk_160, temp_v0_4->data[1320], 1, (s16) (temp_v0_4->data[1321] + 2));
            if (this->unk_ABC8 == 0xA) {
                Audio_PlayActorSound2((Actor *) this, 0x393DU);
            }
            SkelAnime_FrameUpdateMatrix(&this->unk_190);
            Audio_PlayActorSound2((Actor *) this, 0x31E4U);
            Math_ApproachF(&this->unk_1870, 1.0f, 1.0f, 0.02f);
            Math_ApproachF(&this->actor.world.pos.z, -642.5f, 0.05f, 30.0f);
            Math_ApproachF(&this->actor.world.pos.y, 350.0f, 0.03f, 2.0f);
            if (this->unk_ABC8 == 0x37) {
                Actor_TitleCardCreate(globalCtx, &globalCtx->actorCtx.titleCtxt, Lib_SegmentedToVirtual(&D_0602F840), 0xA0, (s16) 0xB4, (u8) 0x80, (u8) 0x28);
            }
            phi_v1_9 = this->unk_ABC8;
            if (this->unk_ABC8 == 0x1E) {
                func_801A89A8(0x806B);
                phi_v1_9 = this->unk_ABC8;
            }
            phi_v1_10 = phi_v1_9;
            if (phi_v1_9 >= 0x65U) {
                Math_ApproachF((f32 *) &this->unk_ABD4, sp88->world.pos.x + 40.0f, 0.1f, this->unk_AC0C * 20.0f);
                Math_ApproachF(&this->unk_ABD4.y, sp88->world.pos.y + 10.0f, 0.1f, this->unk_AC0C * 20.0f);
                Math_ApproachF(&this->unk_ABD4.z, sp88->world.pos.z + 90.0f, 0.1f, this->unk_AC0C * 60.0f);
                Math_ApproachF(&this->unk_AC0C, 1.0f, 1.0f, 0.03f);
                phi_v1_10 = this->unk_ABC8;
            }
            if (phi_v1_10 == 0xAF) {
                sp40 = &this->unk_ABD4;
                temp_v0_5 = Play_GetCamera(globalCtx, 0);
                this->unk_ABD0 = 0;
                sp5C = temp_v0_5;
                func_809FFA04(this, globalCtx);
                this->unk_150 = 0x32;
                this->unk_154 = 0xC8;
                this->unk_1888 = 0x32;
                this->unk_164 = 0.0f;
                this->unk_168 = 200.0f;
                this->unk_16C = 0.0f;
                this->unk_170 = 0.0f;
                temp_t8 = &this->unk_ABE0;
                sp5C->eye.x = sp40->x;
                sp5C->eye.y = sp40->y;
                sp5C->eye.z = sp40->z;
                sp5C->eyeNext.x = sp40->x;
                sp5C->eyeNext.y = sp40->y;
                sp5C->eyeNext.z = sp40->z;
                sp5C->at.x = temp_t8->x;
                sp5C->at.y = temp_t8->y;
                sp5C->at.z = temp_t8->z;
                func_80169AFC(globalCtx, this->unk_ABD2, 0);
                this->unk_ABD2 = 0;
                func_800EA0EC(globalCtx, &globalCtx->csCtx);
                func_800B7298(globalCtx, (Actor *) this, 6U);
                this->actor.flags |= 1;
                gSaveContext.eventInf[6] |= 2;
                func_80165690();
            }
        } else if ((temp_v1 & 1) != 0) {
            this->actor.world.pos.x += 2.0f;
        } else {
            this->actor.world.pos.x -= 2.0f;
        }
        Math_ApproachF((f32 *) &this->unk_ABE0, this->actor.world.pos.x, 0.05f, 10.0f);
        Math_ApproachF(&this->unk_ABE0.y, this->actor.world.pos.y, 0.05f, 10.0f);
        Math_ApproachF(&this->unk_ABE0.z, this->actor.world.pos.z, 0.05f, 10.0f);
        break;
    }
    if (this->unk_ABD2 != 0) {
        sp40 = &this->unk_ABD4;
        ShrinkWindow_SetLetterboxTarget(0x1B);
        sp50 = this->unk_ABE0.x;
        sp54 = this->unk_ABE0.y + sp8C;
        sp58 = this->unk_ABE0.z;
        Play_CameraSetAtEye(globalCtx, this->unk_ABD2, (Vec3f *) &sp50, sp40);
    }
}

void func_80A025AC(Boss07 *arg0, GlobalContext *arg1) {
    Boss07 *temp_a3;
    s32 temp_v0;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_80A0264C;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x190, &D_0600AE40, -10.0f);
    temp_v0 = (s32) (Math_Acot2F(-arg0->actor.world.pos.z, -arg0->actor.world.pos.x) * 10430.378f);
    arg0->actor.shape.rot.y = (s16) temp_v0;
    arg0->actor.world.rot.y = (s16) temp_v0;
    arg0->unk_ABD0 = 0;
    arg0->unk_ABC8 = 0;
    arg0->unk_15C = 0x14;
    arg0->actor.flags &= -2;
}

void func_80A0264C(Boss07 *this, GlobalContext *globalCtx) {
    Actor *sp6C;
    f32 sp60;
    f32 sp58;
    ? sp54;
    void *sp4C;
    f32 *sp48;
    Vec3f *sp44;
    f32 *sp40;
    Vec3f *sp3C;
    s16 temp_v0;

    sp6C = globalCtx->actorCtx.actorList[2].first;
    this->unk_ABC8 += 1;
    this->unk_15C = 0x14;
    this->unk_1884 = 1;
    sp4C = this + 0x8000;
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    func_809F4CBC(this, 0.5f);
    Math_ApproachF((f32 *) &this->actor.world, 0.0f, 0.05f, 5.0f);
    Math_ApproachF(&this->actor.world.pos.z, 0.0f, 0.05f, 5.0f);
    Math_ApproachF(&this->actor.world.pos.y, 130.0f, 0.05f, 3.0f);
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    temp_v0 = sp4C->unk_2BD0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                sp3C = &this->unk_ABE0;
                sp40 = &this->unk_ABF8;
                sp44 = &this->unk_ABD4;
                sp48 = &this->unk_ABEC;
            } else {
                goto block_13;
            }
        } else {
            goto block_7;
        }
    } else if (ActorCutscene_GetCurrentIndex() == -1) {
        func_800EA0D4(globalCtx, &globalCtx->csCtx);
        func_800B7298(globalCtx, (Actor *) this, 1U);
        this->unk_ABD2 = func_801694DC(globalCtx);
        func_80169590(globalCtx, 0, 1);
        func_80169590(globalCtx, sp4C->unk_2BD2, 7);
        this->unk_ABC8 = 0;
        this->unk_ABD0 = 1;
        this->unk_AC00 = 0.0f;
        this->unk_18D6 = 0x78;
        func_8016566C(0x96);
        this->unk_ABEC = 0.0f;
        this->unk_ABF0 = -30.0f;
        this->unk_ABF4 = 270.0f;
        this->unk_ABF8 = 0.0f;
        this->unk_ABFC = -30.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &this->unk_ABEC, &this->unk_ABD4);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &this->unk_ABF8, &this->unk_ABE0);
block_7:
        sp6C->world.pos.x = 0.0f;
        sp6C->shape.rot.y = -0x8000;
        sp6C->world.rot.y = sp6C->shape.rot.y;
        sp6C->world.pos.z = (f32) gGameInfo->data[2487] + 250.0f;
        this->unk_1874 = 2;
        if ((u32) sp4C->unk_2BC8 >= 0x3DU) {
            Math_ApproachS((s16 *) &this->actor.shape, 0, 0xA, 0x200);
            Math_ApproachS(&this->actor.shape.rot.z, 0, 0xA, 0x200);
            Math_ApproachZeroF(&this->unk_1870, 1.0f, 0.01f);
        } else {
            this->actor.shape.rot.x += 0x1000;
            this->actor.shape.rot.z += 0x1200;
            Math_ApproachZeroF(&this->unk_1870, 1.0f, 0.005f);
        }
        if ((u32) sp4C->unk_2BC8 >= 0x83U) {
            this->unk_ABD0 = 2;
block_13:
            sp3C = &this->unk_ABE0;
            sp40 = &this->unk_ABF8;
            sp44 = &this->unk_ABD4;
            sp48 = &this->unk_ABEC;
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x12F, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) sp4C->unk_2BD2, (s16) 0x14);
            Actor_MarkForDeath((Actor *) this);
        } else {
            sp3C = &this->unk_ABE0;
            sp40 = &this->unk_ABF8;
            sp44 = &this->unk_ABD4;
            sp48 = &this->unk_ABEC;
        }
    } else {
        sp3C = &this->unk_ABE0;
        sp40 = &this->unk_ABF8;
        sp44 = &this->unk_ABD4;
        sp48 = &this->unk_ABEC;
    }
    SysMatrix_MultiplyVector3fByState((Vec3f *) sp48, sp44);
    SysMatrix_MultiplyVector3fByState((Vec3f *) sp40, (Vec3f *) &sp60);
    Math_ApproachF((f32 *) sp3C, sp60, 0.1f, 10.0f);
    Math_ApproachF(&this->unk_ABE0.y, sp64, 0.1f, 10.0f);
    Math_ApproachF(&this->unk_ABE0.z, sp68, 0.1f, 10.0f);
    if (sp4C->unk_2BD2 != 0) {
        ShrinkWindow_SetLetterboxTarget(0x1B);
        sp54.unk_0 = (f32) sp44->x;
        sp54.unk_4 = (f32) sp44->y;
        sp54.unk_8 = (f32) sp44->z;
        if (sp58 < 30.0f) {
            sp58 = 30.0f;
        }
        Play_CameraSetAtEye(globalCtx, sp4C->unk_2BD2, sp3C, (Vec3f *) &sp54);
    }
}

void func_80A02B30(Actor *arg0, GlobalContext *arg1) {
    u8 sp27;
    void *sp20;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 phi_a2;

    if (arg0->unk_15C == 0) {
        temp_v0 = arg0->unk_1901;
        if ((temp_v0 & 2) != 0) {
            arg0->unk_1901 = (u8) (temp_v0 & 0xFFFD);
            arg0->unk_186C = 7;
        }
        temp_v0_2 = arg0->unk_1981;
        if ((temp_v0_2 & 2) != 0) {
            arg0->unk_1981 = (u8) (temp_v0_2 & 0xFFFD);
            arg0->unk_186C = 0xF;
            if ((func_80A00274 == arg0->unk_144) || ((arg1->actorCtx.actorList[2].first->unk_A74 & 0x200) != 0)) {
                sp20 = arg0->unk_1978;
                phi_a2 = 0U;
                if ((*arg0->unk_19AC & 0xF7CFFFFF) != 0) {
                    phi_a2 = arg0->colChkInfo.damage;
                }
                arg0->unk_15C = 0x32;
                arg0->unk_15E = 0xF;
                sp27 = phi_a2;
                func_801A72CC(&arg0->projectedPos);
                Audio_PlayActorSound2(arg0, 0x39D6U);
                func_80A00484((Boss07 *) arg0, arg1, phi_a2, sp20);
                return;
            }
            arg0->unk_15C = 0xF;
            func_801A72CC(arg0 + 0xEC);
            Audio_PlayActorSound2(arg0, 0x39D5U);
            func_80A0021C(arg0, arg1);
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_80A02C54(Actor *this, GlobalContext *globalCtx) {
    Actor *spA8;
    ? sp9C;
    ? sp90;
    ? sp84;
    ? sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp34;
    ColliderQuad *sp30;
    ColliderQuad *sp2C;
    ? (*temp_v0_10)(Actor *, GlobalContext *);
    ? (*temp_v0_8)(Actor *, GlobalContext *);
    Boss07 *temp_v0_2;
    ColliderQuad *temp_a0_11;
    ColliderQuad *temp_a0_6;
    CollisionCheckContext *temp_a1;
    f32 *temp_a0_10;
    f32 *temp_a0_2;
    f32 *temp_a0_3;
    f32 *temp_a0_4;
    f32 *temp_a0_5;
    f32 *temp_a0_7;
    f32 *temp_a0_8;
    f32 *temp_a0_9;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s32 temp_v1;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v0_9;
    Actor *phi_v0;
    s32 phi_v1;
    f32 phi_f0;
    f32 phi_f12;

    spA8 = globalCtx->actorCtx.actorList[2].first;
    this->hintId = 0x32;
    temp_v0 = D_80A09A71;
    temp_t9 = temp_v0 - 1;
    if (temp_v0 != 0) {
        D_80A09A71 = temp_t9;
        if ((temp_t9 & 0xFF) == 0) {
            func_801A89A8(0x806B);
        }
    }
    Math_Vec3f_Copy(&D_80A09A40, &this->projectedPos);
    temp_v0_2 = D_80A09A58;
    if ((temp_v0_2 == 0) || (temp_v0_2->unk_ABD2 == 0)) {
        this->unk_149 = 1;
        globalCtx->envCtx.unk_C1 = 2;
        globalCtx->envCtx.unk_C2 = 0;
        Math_ApproachF(&globalCtx->envCtx.unk_DC, this->unk_1898, 1.0f, 0.1f);
        this->unk_14C = (s16) (this->unk_14C + 1);
        if (gGameInfo->data[1311] == 0) {
            this->unk_174 = 0;
            this->unk_1884 = 0;
            this->unk_1874 = 0;
            Actor_SetScale(this, 0.1f);
            this->focus.pos.x = this->world.pos.x;
            this->focus.pos.y = this->world.pos.y;
            this->focus.pos.z = this->world.pos.z;
            phi_v0 = this;
            phi_v1 = 0;
            do {
                temp_a0 = phi_v0->unk_150;
                temp_v1 = phi_v1 + 2;
                phi_v1 = temp_v1;
                if (temp_a0 != 0) {
                    phi_v0->unk_150 = (s16) (temp_a0 - 1);
                }
                phi_v0 += 2;
            } while (temp_v1 != 6);
            temp_v0_3 = this->unk_186C;
            if (temp_v0_3 != 0) {
                this->unk_186C = (s16) (temp_v0_3 - 1);
            }
            temp_v0_4 = this->unk_15C;
            if (temp_v0_4 != 0) {
                this->unk_15C = (s16) (temp_v0_4 - 1);
            }
            temp_v0_5 = this->unk_15E;
            if (temp_v0_5 != 0) {
                this->unk_15E = (s16) (temp_v0_5 - 1);
            }
            temp_v0_6 = this->unk_18D6;
            if (temp_v0_6 != 0) {
                this->unk_18D6 = (s16) (temp_v0_6 - 1);
            }
            temp_v0_7 = this->unk_18D8;
            if (temp_v0_7 != 0) {
                this->unk_18D8 = (s16) (temp_v0_7 - 1);
            }
            this->unk_18EC = 0U;
            this->unk_144(this, globalCtx);
            if ((this->unk_18EC == 0) && (this->unk_18ED != 0)) {
                func_800AEF44(Effect_GetParams(this->unk_18DC));
            }
            temp_v0_8 = this->unk_144;
            this->unk_18ED = this->unk_18EC;
            if (func_80A01750 != temp_v0_8) {
                if (func_80A00554 != temp_v0_8) {
                    Actor_SetVelocityXYRotation(this);
                    Actor_ApplyMovement(this);
                } else {
                    if ((this->bgCheckFlags & 1) != 0) {
                        this->velocity.y = 0.0f;
                    }
                    Actor_SetVelocityAndMoveYRotationAndGravity(this);
                }
                temp_v0_9 = this->unk_1888;
                if (temp_v0_9 == 0) {
                    Actor_UpdateBgCheckInfo(globalCtx, this, 50.0f, 60.0f, 100.0f, 5U);
                } else {
                    this->unk_1888 = (u8) (temp_v0_9 - 1);
                }
            }
        } else {
            this->colChkInfo.health = 0;
        }
        func_80A02B30(this, globalCtx);
        SysMatrix_InsertTranslation(this->world.pos.x, this->world.pos.y, this->world.pos.z, 0);
        Matrix_RotateY(this->shape.rot.y, 1U);
        SysMatrix_InsertXRotation_s(this->shape.rot.x, 1);
        SysMatrix_InsertZRotation_s(this->shape.rot.z, 1);
        temp_a0_2 = &sp6C;
        sp6C = -55.0f;
        sp70 = 55.0f;
        sp74 = 10.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_2, (Vec3f *) &sp9C);
        temp_a0_3 = &sp6C;
        sp6C = -55.0f;
        sp70 = -55.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_3, (Vec3f *) &sp90);
        temp_a0_4 = &sp6C;
        sp6C = 55.0f;
        sp70 = 55.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_4, (Vec3f *) &sp84);
        temp_a0_5 = &sp6C;
        sp6C = 55.0f;
        sp70 = -55.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_5, (Vec3f *) &sp78);
        temp_a0_6 = this + 0x18F0;
        sp2C = temp_a0_6;
        Collider_SetQuadVertices(temp_a0_6, (Vec3f *) &sp9C, (Vec3f *) &sp90, (Vec3f *) &sp84, (Vec3f *) &sp78);
        temp_a0_7 = &sp6C;
        if ((spA8->unk_A74 & 0x200) != 0) {
            phi_f0 = 70.0f;
        } else {
            phi_f0 = 40.0f;
        }
        temp_f2 = -phi_f0;
        sp70 = phi_f0;
        sp6C = temp_f2;
        sp34 = temp_f2;
        sp68 = phi_f0;
        sp74 = -10.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_7, (Vec3f *) &sp9C);
        temp_a0_8 = &sp6C;
        sp6C = temp_f2;
        sp70 = temp_f2;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_8, (Vec3f *) &sp90);
        temp_a0_9 = &sp6C;
        sp6C = phi_f0;
        sp70 = phi_f0;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_9, (Vec3f *) &sp84);
        temp_a0_10 = &sp6C;
        sp6C = phi_f0;
        sp70 = sp34;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_10, (Vec3f *) &sp78);
        temp_a0_11 = this + 0x1970;
        sp30 = temp_a0_11;
        Collider_SetQuadVertices(temp_a0_11, (Vec3f *) &sp9C, (Vec3f *) &sp90, (Vec3f *) &sp84, (Vec3f *) &sp78);
        if ((spA8->unk_A74 & 0x200) != 0) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp30);
        } else {
            temp_v0_10 = this->unk_144;
            if ((func_80A00274 != temp_v0_10) && (func_80A00554 != temp_v0_10)) {
                CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp2C);
            }
            temp_a1 = &globalCtx->colChkCtx;
            sp34 = (bitwise f32) temp_a1;
            CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) sp30);
            if (func_809FFEAC == this->unk_144) {
                CollisionCheck_SetAT(globalCtx, (bitwise CollisionCheckContext *) sp34, (Collider *) sp2C);
                CollisionCheck_SetAT(globalCtx, (bitwise CollisionCheckContext *) sp34, (Collider *) sp30);
            }
        }
        if (this->unk_18D6 != 0) {
            if (func_80A0264C == this->unk_144) {
                phi_f12 = 130.0f;
            } else {
                phi_f12 = 80.0f;
            }
            sp40 = phi_f12;
            sp5C = randPlusMinusPoint5Scaled(phi_f12) + this->world.pos.x;
            sp60 = randPlusMinusPoint5Scaled(phi_f12) + this->world.pos.y;
            sp64 = randPlusMinusPoint5Scaled(phi_f12) + this->world.pos.z;
            sp48 = 5.0f * -0.05f;
            sp54 = 5.0f;
            sp50 = 0.0f;
            sp58 = 0.0f;
            sp44 = 0.0f;
            sp4C = 0.0f;
            func_809F4AE8(globalCtx, &sp5C, &sp50, &sp44, Rand_ZeroFloat(10.0f) + 25.0f);
            func_8019F1C0(&D_80A09A40, 0x205BU);
        }
    }
}

void func_80A03238(Actor *arg0, GlobalContext *arg1, void *arg2, void *arg3, void *arg4, f32 *arg5, ? *arg6, f32 arg7, u8 arg8, f32 arg9) {
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 *sp7C;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f4;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s5;
    void *temp_s1;
    void *temp_s2;
    s32 phi_s4;
    void *phi_s0;
    s32 phi_s5;
    s32 phi_s3;
    f32 *phi_s2;
    s32 phi_s3_2;
    void *phi_s1;
    void *phi_s2_2;
    f32 phi_f0;
    f32 phi_f2;
    void *phi_s0_2;

    sp98.unk_0 = D_80A082D4.unk_0;
    sp98.unk_4 = (s32) D_80A082D4.unk_4;
    sp98.unk_8 = (s32) D_80A082D4.unk_8;
    sp7C = arg5;
    phi_s4 = 0;
    phi_s0 = arg3;
    phi_s5 = 0;
    phi_s2 = arg5;
    if (arg0->unk_1874 != 0) {
        do {
            SysMatrix_StatePush();
            SysMatrix_InsertZRotation_f(arg9, 1);
            temp_f4 = Math_SinS((s16) ((phi_s4 + arg0->unk_14C) * 0x1600)) * 10.0f;
            sp9C = 10.0f;
            spA0 = 0.0f;
            temp_a0 = &sp98;
            sp98 = temp_f4;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &sp8C);
            phi_s0->unk_0 = (f32) (phi_s0->unk_0 + sp8C);
            phi_s0->unk_4 = (f32) (phi_s0->unk_4 + sp90);
            phi_s0->unk_8 = (f32) (phi_s0->unk_8 + sp94);
            SysMatrix_StatePop();
            temp_s5 = phi_s5 + 0xC;
            phi_s4 += 2;
            phi_s0 += 0xC;
            phi_s5 = temp_s5;
        } while (temp_s5 != 0x78);
    }
    phi_s3 = 0;
    do {
        if (phi_s3 == 0) {
            arg3->unk_0 = (s32) arg2->unk_0;
            arg3->unk_4 = (s32) arg2->unk_4;
            arg3->unk_8 = (s32) arg2->unk_8;
        } else {
            Math_ApproachF(phi_s2, 0.0f, 1.0f, 1.0f);
            Math_ApproachF(phi_s2 + 4, 0.0f, 1.0f, 1.0f);
            Math_ApproachF(phi_s2 + 8, 0.0f, 1.0f, 1.0f);
        }
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
        phi_s2 += 0xC;
    } while (temp_s3 < 0xA);
    sp9C = 0.0f;
    sp98 = 0.0f;
    spA0 = arg7 * 23.0f;
    phi_s3_2 = 1;
    phi_s1 = arg3 + 0xC;
    phi_s2_2 = sp7C + 0xC;
    phi_s0_2 = arg4 + 0xC;
    do {
        if (phi_s3_2 < 5) {
            temp_f0 = (f32) (5 - phi_s3_2);
            sp80 = arg6->unk_0 * temp_f0 * 0.2f;
            sp84 = arg6->unk_4 * temp_f0 * 0.2f;
            sp88 = arg6->unk_8 * temp_f0 * 0.2f;
        } else {
            sp80.unk_0 = D_801D15B0.x;
            sp80.unk_4 = (f32) D_801D15B0.y;
            sp80.unk_8 = (f32) D_801D15B0.z;
        }
        temp_f24 = ((phi_s1->unk_0 + phi_s2_2->unk_0) - phi_s1->unk_-C) + sp80;
        if (arg0->unk_1874 != 0) {
            phi_f0 = 0.0f;
        } else if ((arg8 != 0) && ((arg0->world.pos.y - 30.0f) < phi_s1->unk_-8)) {
            phi_f0 = -30.0f;
        } else {
            phi_f0 = -3.0f - ((f32) (phi_s3_2 & 7) * 0.05f);
        }
        temp_f2 = phi_s1->unk_4 + phi_s2_2->unk_4 + phi_f0 + sp84;
        phi_f2 = temp_f2;
        if (temp_f2 < 2.0f) {
            phi_f2 = 2.0f;
        }
        temp_f20 = ((phi_s1->unk_8 + phi_s2_2->unk_8) - phi_s1->unk_-4) + sp80;
        temp_f26 = Math_Acot2F(temp_f20, temp_f24);
        temp_f20_2 = -Math_Acot2F(sqrtf((temp_f24 * temp_f24) + (temp_f20 * temp_f20)), phi_f2 - phi_s1->unk_-8);
        phi_s0_2->unk_-8 = temp_f26;
        phi_s0_2->unk_-C = temp_f20_2;
        SysMatrix_InsertYRotation_f(temp_f26, 0);
        SysMatrix_RotateStateAroundXAxis(temp_f20_2);
        SysMatrix_GetStateTranslationAndScaledZ(spA0, (Vec3f *) &sp8C);
        temp_f24_2 = phi_s1->unk_0;
        temp_f22 = phi_s1->unk_4;
        phi_s1->unk_0 = (f32) (phi_s1->unk_-C + sp8C);
        temp_s3_2 = phi_s3_2 + 1;
        temp_s2 = phi_s2_2 + 0xC;
        phi_s1->unk_4 = (f32) (phi_s1->unk_-8 + sp90);
        temp_s1 = phi_s1 + 0xC;
        temp_s1->unk_-4 = (f32) (phi_s1->unk_-4 + sp94);
        temp_s2->unk_-C = (f32) ((phi_s1->unk_0 - temp_f24_2) * 0.85f);
        temp_s2->unk_-8 = (f32) ((temp_s1->unk_-8 - temp_f22) * 0.85f);
        temp_s2->unk_-4 = (f32) ((temp_s1->unk_-4 - phi_s1->unk_8) * 0.85f);
        phi_s3_2 = temp_s3_2;
        phi_s1 = temp_s1;
        phi_s2_2 = temp_s2;
        phi_s0_2 += 0xC;
    } while (temp_s3_2 != 0xA);
}

void func_80A036C4(Actor *arg0, GraphicsContext **arg1, void *arg2, void *arg3, f32 arg4, f32 arg5) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_s3;
    s32 temp_s1;
    void *phi_s2;
    void *phi_s4;
    s32 phi_s1;
    f32 phi_f12;

    temp_s3 = *arg1;
    phi_s2 = arg2;
    phi_s4 = arg3;
    phi_s1 = 0;
    do {
        SysMatrix_InsertTranslation(phi_s2->unk_0, phi_s2->unk_4, phi_s2->unk_8, 0);
        SysMatrix_InsertYRotation_f(phi_s4->unk_4, 1);
        SysMatrix_RotateStateAroundXAxis(phi_s4->unk_0);
        SysMatrix_InsertZRotation_f(arg5, 1);
        if (phi_s1 < 5) {
            phi_f12 = 0.035f;
        } else {
            phi_f12 = 0.035f - ((f32) (phi_s1 - 4) * 60.0f * 0.0001f);
        }
        Matrix_Scale(phi_f12, phi_f12, arg4 * 0.01f * 2.3f, 1);
        temp_v0 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_2 = temp_s3->polyOpa.p;
        temp_s1 = phi_s1 + 1;
        temp_s3->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_0600B020;
        temp_v0_2->words.w0 = 0xDE000000;
        phi_s2 += 0xC;
        phi_s4 += 0xC;
        phi_s1 = temp_s1;
    } while (temp_s1 != 9);
}

void func_80A03868(Actor *arg0, GraphicsContext **arg1) {
    Gfx *sp9C;
    Gfx *sp8C;
    Gfx *sp84;
    Gfx *sp78;
    Gfx *sp6C;
    Gfx *sp60;
    f32 sp50;
    Gfx *sp4C;
    ? *sp38;
    s32 *sp34;
    MtxF *sp30;
    ? *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s0;
    MtxF *temp_a0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;

    temp_s0 = *arg1;
    if (func_80A00720 == arg0->unk_144) {
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060030;
        sp9C = temp_v0;
        sp9C->words.w1 = Gfx_TexScroll(*arg1, 0U, ((s32) arg0->unk_14C * -0xF) & 0xFF, 0x20, 0x40);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0;
        temp_v0_2->words.w0 = 0xE7000000;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0xFFFF3CC8;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0xFF000080;
        temp_v0_4->words.w0 = 0xFB000000;
        SysMatrix_InsertTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, 0);
        Matrix_RotateY(arg0->shape.rot.y, 1U);
        SysMatrix_InsertXRotation_s(arg0->shape.rot.x, 1);
        Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
        SysMatrix_StatePush();
        SysMatrix_StatePush();
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(250.0f, 0.0f, 200.0f, 1);
        Matrix_RotateY(-0xA00, 1U);
        temp_f12 = arg0->unk_1898 * 0.05f;
        Matrix_Scale(temp_f12, temp_f12, arg0->unk_188C * 0.05f, 1);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        sp8C = temp_v0_5;
        sp8C->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = (u32) &D_0600C7D8;
        temp_v0_6->words.w0 = 0xDE000000;
        sp38 = &D_0600C7D8;
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(-250.0f, 0.0f, 200.0f, 1);
        Matrix_RotateY(0xA00, 1U);
        temp_f12_2 = arg0->unk_1898 * 0.05f;
        Matrix_Scale(temp_f12_2, temp_f12_2, arg0->unk_188C * 0.05f, 1);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDA380003;
        sp84 = temp_v0_7;
        sp84->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xDE000000;
        temp_v0_8->words.w1 = (u32) sp38;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = (u32) &D_04023348;
        temp_v0_9->words.w0 = 0xDE000000;
        sp34 = &D_04023348;
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(0.0f, 0.0f, 1200.0f, 1);
        temp_a0 = arg1 + 0x187FC;
        sp30 = temp_a0;
        SysMatrix_NormalizeXYZ(temp_a0);
        temp_f12_3 = arg0->unk_1890 * 40.0f * arg0->unk_1898;
        Matrix_Scale(temp_f12_3, temp_f12_3, 0.0f, 1);
        SysMatrix_InsertZRotation_s((s16) (arg0->unk_14C << 8), 1);
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xDA380003;
        sp78 = temp_v0_10;
        sp78->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_11 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_11 + 8;
        temp_v0_11->words.w1 = (u32) &D_04023428;
        temp_v0_11->words.w0 = 0xDE000000;
        temp_v0_12 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_12 + 8;
        temp_v0_12->words.w0 = 0xFA000000;
        temp_v0_12->words.w1 = ((gGameInfo->data[1625] + 0x50) & 0xFF) | 0xFFFF3C00;
        sp2C = &D_04023428;
        Matrix_Scale(6.0f, 6.0f, 0.0f, 1);
        SysMatrix_InsertZRotation_s(0x4000, 1);
        temp_v0_13 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_13 + 8;
        temp_v0_13->words.w0 = 0xDA380003;
        sp6C = temp_v0_13;
        sp6C->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_14 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_14 + 8;
        temp_v0_14->words.w0 = 0xDE000000;
        temp_v0_14->words.w1 = (u32) sp2C;
        temp_v0_15 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_15 + 8;
        temp_v0_15->words.w1 = 0xFFFF3CC8;
        temp_v0_15->words.w0 = 0xFA000000;
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(0.0f, 0.0f, 1150.0f, 1);
        SysMatrix_GetStateTranslation(arg0 + 0x189C);
        temp_f12_4 = arg0->unk_1898 * 0.05f;
        Matrix_Scale(temp_f12_4, temp_f12_4, (arg0->unk_1894 * 0.01f) - 0.01f, 1);
        temp_v0_16 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_16 + 8;
        temp_v0_16->words.w0 = 0xDA380003;
        sp60 = temp_v0_16;
        sp60->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_17 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_17 + 8;
        temp_v0_17->words.w0 = 0xDE000000;
        temp_v0_17->words.w1 = (u32) sp38;
        SysMatrix_GetStateTranslationAndScaledZ(20100.0f, arg0 + 0x18A8);
        if (arg0->unk_18C0 > 0.0f) {
            SysMatrix_GetStateTranslationAndScaledZ(20000.0f, (Vec3f *) &sp50);
            SysMatrix_InsertTranslation(arg0->unk_18A8, arg0->unk_18AC, arg0->unk_18B0, 0);
            Matrix_RotateY(arg0->unk_18C6, 1U);
            SysMatrix_InsertXRotation_s(arg0->unk_18C4, 1);
            Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
            temp_f12_5 = arg0->unk_1898 * 0.05f;
            Matrix_Scale(temp_f12_5, temp_f12_5, arg0->unk_18C0 * 0.01f, 1);
            temp_v0_18 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_18 + 8;
            temp_v0_18->words.w0 = 0xDA380003;
            sp4C = temp_v0_18;
            sp4C->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_19 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_19 + 8;
            temp_v0_19->words.w0 = 0xDE000000;
            temp_v0_19->words.w1 = (u32) sp38;
            SysMatrix_GetStateTranslationAndScaledZ(20100.0f, arg0 + 0x18B4);
            SysMatrix_InsertTranslation(sp50, sp54, sp58, 0);
            SysMatrix_NormalizeXYZ(sp30);
            temp_f12_6 = arg0->unk_1898 * 5.0f;
            Matrix_Scale(temp_f12_6, temp_f12_6, 0.0f, 1);
            SysMatrix_InsertZRotation_s((s16) (arg0->unk_14C << 8), 1);
            temp_v0_20 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_20 + 8;
            temp_v0_20->words.w0 = 0xDA380003;
            temp_v0_20->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_21 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_21 + 8;
            temp_v0_21->words.w0 = 0xDE000000;
            temp_v0_21->words.w1 = (u32) sp34;
            temp_v0_22 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_22 + 8;
            temp_v0_22->words.w0 = 0xDE000000;
            temp_v0_22->words.w1 = (u32) sp2C;
        }
    }
}

void func_80A03F18(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 2) {
        SysMatrix_GetStateTranslationAndScaledX(500.0f, arg4 + 0x1878);
    }
}

void func_80A03F5C(Actor *this, GlobalContext *globalCtx) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 sp9C;
    ? sp90;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    s16 temp_v0;
    s16 temp_v0_5;
    s32 temp_s1;
    s32 phi_v1;
    f32 phi_f24;
    Actor *phi_s0;
    s32 phi_s1;
    void *phi_s2;
    void *phi_s3;
    s32 phi_s6;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = this->unk_186C;
    temp_f20 = (f32) temp_v0 * 0.7853982f * 0.06666667f;
    temp_f22 = Math_SinS((s16) (temp_v0 * 0x3500)) * temp_f20 * 0.5f;
    SysMatrix_InsertYRotation_f(Math_SinS((s16) (this->unk_186C * 0x4500)) * temp_f20, 1);
    SysMatrix_RotateStateAroundXAxis(temp_f22);
    if ((this->unk_15E & 1) != 0) {
        temp_s0->polyOpa.p = Gfx_SetFog(temp_s0->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    temp_v0_2->words.w1 = Lib_SegmentedToVirtual(*(&D_80A082E0 + (this->unk_1884 * 4)));
    SkelAnime_Draw(globalCtx, this->unk_194, this->unk_1B0, NULL, func_80A03F18, this);
    temp_s0->polyOpa.p = func_801660B8(globalCtx, temp_s0->polyOpa.p);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_0600AFB0;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFA000000;
    temp_v0_4->words.w1 = 0x9B9B50FF;
    phi_s6 = 0;
    if (func_809FFA80 == this->unk_144) {
        temp_v0_5 = this->world.rot.y - this->shape.rot.y;
        phi_v1 = (s32) temp_v0_5;
        if ((s32) temp_v0_5 < 0) {
            phi_v1 = -(s32) temp_v0_5;
        }
        if (phi_v1 >= 0x4001) {
            phi_s6 = 1;
        } else {
            goto block_7;
        }
    } else {
block_7:
    }
    Matrix_RotateY(this->shape.rot.y, 0U);
    SysMatrix_InsertXRotation_s(this->shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(this->shape.rot.z, 1);
    SysMatrix_GetStateTranslationAndScaledZ(-3.0f, (Vec3f *) &sp90);
    spAC = 20.0f;
    spA8 = 0.0f;
    spB0 = -2.0f;
    phi_f24 = 0.0f;
    phi_s0 = this;
    phi_s1 = 0;
    phi_s2 = this + 0x19FC;
    phi_s3 = this + 0x1A74;
    do {
        SysMatrix_StatePush();
        SysMatrix_StatePush();
        SysMatrix_InsertZRotation_f(phi_f24, 1);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &spA8, (Vec3f *) &sp9C);
        phi_s0->unk_19F0 = (f32) (this->unk_1878 + sp9C);
        phi_s0->unk_19F4 = (f32) (this->unk_187C + spA0);
        temp_f22_2 = (f32) phi_s1;
        phi_s0->unk_19F8 = (f32) (this->unk_1880 + spA4);
        temp_f20_2 = (1.0f - (temp_f22_2 * 0.008f)) * this->unk_1870;
        SysMatrix_StatePop();
        if (this->unk_149 != 0) {
            func_80A03238(this, globalCtx, phi_s0 + 0x19F0, phi_s2, phi_s3, phi_s0 + 0x1AEC, &sp90, temp_f20_2, (u8) phi_s6, phi_f24);
        }
        func_80A036C4(this, (GraphicsContext **) globalCtx, phi_s2, phi_s3, temp_f20_2, temp_f22_2 * 0.9f);
        spAC += 1.0f;
        SysMatrix_StatePop();
        temp_s1 = phi_s1 + 1;
        phi_f24 += 0.5f;
        phi_s0 += 0x174;
        phi_s1 = temp_s1;
        phi_s2 += 0x174;
        phi_s3 += 0x174;
    } while (temp_s1 != 0x19);
    func_80A03868(this, (GraphicsContext **) globalCtx);
    this->unk_149 = 0U;
}

void func_80A0434C(Actor *this, GlobalContext *globalCtx) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Actor *sp40;
    ActorContext *sp3C;
    ColliderCylinder *sp38;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f12;
    f32 temp_f14;
    s16 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    Actor *phi_v0;
    s32 phi_v1;

    this->unk_14C = (s16) (this->unk_14C + 1);
    if (this->params == 0x64) {
        sp40 = globalCtx->actorCtx.actorList[2].first;
        Audio_PlayActorSound2(this, 0x320BU);
    }
    if (gGameInfo->data[1311] == 0) {
        sp40 = globalCtx->actorCtx.actorList[2].first;
        Actor_SetScale(this, 3.5f);
        if (this->unk_14E == 0) {
            temp_f12 = globalCtx->actorCtx.actorList[2].first->world.pos.x - this->world.pos.x;
            sp54 = (globalCtx->actorCtx.actorList[2].first->world.pos.y - this->world.pos.y) + 20.0f;
            sp58 = temp_f12;
            temp_f14 = globalCtx->actorCtx.actorList[2].first->world.pos.z - this->world.pos.z;
            sp50 = temp_f14;
            this->world.rot.y = Math_Atan2S(temp_f12, temp_f14);
            this->world.rot.x = Math_Atan2S(sp54, sqrtf((sp58 * sp58) + (sp50 * sp50)));
            this->unk_14E = 1U;
            this->speedXZ = 30.0f;
            func_800BC154(globalCtx, &globalCtx->actorCtx, this, 5U);
            if (this->params == 0x65) {
                Audio_PlayActorSound2(this, 0x39D9U);
            }
        }
        phi_v0 = this;
        phi_v1 = 0;
        do {
            temp_a0 = phi_v0->unk_150;
            temp_v1 = phi_v1 + 2;
            phi_v1 = temp_v1;
            if (temp_a0 != 0) {
                phi_v0->unk_150 = (s16) (temp_a0 - 1);
            }
            phi_v0 += 2;
        } while (temp_v1 != 6);
        Actor_SetVelocityXYRotation(this);
        Actor_ApplyMovement(this);
        Actor_UpdateBgCheckInfo(globalCtx, this, 50.0f, 31.0f, 100.0f, 7U);
        this->shape.rot.z += 0x1200;
        if (((this->bgCheckFlags & 0x19) != 0) || (temp_v0 = this->unk_1830 & 2, (temp_v0 != 0)) || (temp_v0 != 0) || (D_80A09A70 != 0)) {
            sp3C = &globalCtx->actorCtx;
            Actor_MarkForDeath(this);
            Actor_Spawn(sp3C, globalCtx, 0xA2, this->world.pos.x, this->world.pos.y, this->world.pos.z, (s16) 0, (s16) 0, (s16) (s32) this->unk_181C, (s16) 3);
        }
        temp_a1 = this + 0x1820;
        sp38 = temp_a1;
        Collider_UpdateCylinder(this, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp3C = (ActorContext *) temp_a1_2;
        CollisionCheck_SetAT(globalCtx, temp_a1_2, (Collider *) sp38);
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp38);
    }
}

void func_80A045A8(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    void *temp_v1;
    void *temp_v1_2;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_v1 = (this->unk_181C * 6) + &D_80A07968;
    temp_v0_2->words.w1 = ((temp_v1->unk_4 & 0xFF) << 8) | (temp_v1->unk_0 << 0x18) | ((temp_v1->unk_2 & 0xFF) << 0x10) | 0xFF;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v1_2 = (this->unk_181C * 6) + &D_80A07950;
    temp_v0_3->words.w1 = ((temp_v1_2->unk_4 & 0xFF) << 8) | (temp_v1_2->unk_0 << 0x18) | ((temp_v1_2->unk_2 & 0xFF) << 0x10) | 0x80;
    SysMatrix_InsertTranslation(this->world.pos.x, this->world.pos.y, this->world.pos.z, 0);
    Matrix_Scale(this->scale.x, this->scale.y, 0.0f, 1);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    SysMatrix_InsertZRotation_s(this->shape.rot.z, 1);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    temp_v0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_04023348;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = (u32) &D_04023428;
    temp_v0_6->words.w0 = 0xDE000000;
}

void func_80A04768(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    u8 temp_v1;

    if ((arg0->unk_15C == 0) && (temp_v1 = arg0->unk_1831, ((temp_v1 & 2) != 0))) {
        arg0->unk_1831 = (u8) (temp_v1 & 0xFFFD);
        arg0->unk_15C = 0xF;
        if ((*arg0->unk_185C & 0x80) != 0) {
            func_80A055E0(arg0, arg1, arg1);
            return;
        }
        arg0->colChkInfo.health -= arg0->colChkInfo.damage;
        arg0->unk_15E = 0xF;
        arg0->unk_144 = func_80A04E5C;
        if ((s32) (s8) arg0->colChkInfo.health <= 0) {
            arg0->unk_14E = 2;
            arg0->unk_18DA = 1;
            Enemy_StartFinishingBlow(arg1, arg0);
            Audio_PlayActorSound2(arg0, 0x3A0DU);
        } else {
            arg0->unk_14E = 0xA;
            arg0->unk_150 = 0xF;
            func_809F4980(arg0, 0xF, arg1);
        }
        Matrix_RotateY(arg0->yawTowardsPlayer, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(-20.0f, (Vec3f *) &sp2C);
        arg0->unk_18CC = sp2C;
        arg0->unk_18D0 = sp34;
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80A04878(Boss07 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A04890;
}

void func_80A04890(Boss07 *this, GlobalContext *globalCtx) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s16 sp32;
    s16 sp30;
    Actor *sp2C;
    Vec3s *sp20;
    Actor *temp_v0;
    Vec3s *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    u8 temp_v1;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1_2;
    f32 phi_f18;
    f32 phi_f2;

    temp_v1 = this->unk_14E;
    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {
                    return;
                }
                this->unk_ABCC += 1;
                if (this->unk_ABCC == 0xA) {
                    Audio_PlayActorSound2((Actor *) this, 0x3A67U);
                }
                Actor_SetScale((Actor *) this, 0.03f);
                Math_ApproachF((f32 *) &this->actor.world, (f32) *(&D_80A07A8C + (this->actor.params * 6)), 0.5f, 40.0f);
                Math_ApproachF(&this->actor.world.pos.z, (f32) *(&D_80A07A90 + (this->actor.params * 6)), 0.5f, 22.0f);
                return;
            }
            Actor_SetScale((Actor *) this, 0.0f);
            temp_v0_2 = (this->actor.params * 6) + &D_80A07F3C;
            this->unk_188C = 0.0f;
            this->actor.speedXZ = 0.0f;
            this->actor.world.pos.y = 370.0f;
            this->actor.world.pos.x = (f32) temp_v0_2->unk_-4B0 * 0.6f;
            this->actor.world.pos.z = (f32) temp_v0_2->unk_-4AC * 0.6f;
            this->actor.shape.rot.y = temp_v0_2->unk_-4AE;
            this->unk_ABCC = 0;
            return;
        }
        this->unk_ABC8 += 1;
        this->unk_AB40 += 1;
        this->unk_18C8 += 0x200;
        sp20 = this + 0x8000;
        Math_ApproachF(&this->unk_188C, 1.2f, 1.0f, 0.1f);
        Math_ApproachF((f32 *) &this->actor.scale, 0.004f, 0.5f, 0.0002f);
        temp_f0 = this->actor.scale.x;
        this->actor.scale.y = temp_f0;
        this->actor.scale.z = temp_f0;
        if ((u32) this->unk_ABC8 >= 0x5BU) {
            temp_v0_3 = (this->actor.params * 6) + &D_80A07F3C;
            this->unk_168 = 370.0f;
            this->unk_164 = (f32) temp_v0_3->unk_-4B0;
            this->unk_16C = (f32) temp_v0_3->unk_-4AC;
            sp38 = 20.0f;
            sp34 = 0.5f;
            sp40 = 4096.0f;
            phi_f18 = 400.0f;
            phi_f2 = 0.0f;
        } else {
            temp_f2 = Math_SinS((s16) (this->unk_AB40 * 0x300)) * 20.0f;
            sp38 = 1.0f;
            sp34 = 0.1f;
            sp40 = 1500.0f;
            phi_f18 = 100.0f;
            phi_f2 = temp_f2;
        }
        sp3C = phi_f18;
        temp_f12 = this->unk_164 - this->actor.world.pos.x;
        sp50 = (this->unk_168 - this->actor.world.pos.y) + phi_f2;
        sp54 = temp_f12;
        temp_f14 = this->unk_16C - this->actor.world.pos.z;
        sp4C = temp_f14;
        sp30 = Math_Atan2S(temp_f12, temp_f14);
        sp32 = Math_Atan2S(sp50, sqrtf((sp54 * sp54) + (sp4C * sp4C)));
        Math_ApproachS(&this->actor.world.rot.y, sp30, 5, (s16) (s32) this->unk_170);
        temp_a0 = &this->actor.world.rot;
        sp20 = temp_a0;
        Math_ApproachS((s16 *) temp_a0, sp32, 5, (s16) (s32) this->unk_170);
        Math_ApproachF(&this->unk_170, sp40, 1.0f, sp3C);
        Math_ApproachF(&this->actor.speedXZ, sp38, 1.0f, sp34);
        Actor_SetVelocityXYRotation((Actor *) this);
        Actor_ApplyMovement((Actor *) this);
        this->unk_BC = (unaligned s32) sp20->unk_0;
        this->actor.shape.rot.z = (s16) (u16) sp20->z;
        return;
    }
    sp2C = temp_v0;
    Actor_SetScale((Actor *) this, 0.0f);
    this->actor.world.pos.x = temp_v0->world.pos.x;
    this->actor.world.pos.y = temp_v0->world.pos.y + 30.0f;
    this->actor.world.pos.z = temp_v0->world.pos.z;
    if (temp_v0->unk_14B == 0) {
        this->actor.world.pos.y += 30.0f + (f32) gGameInfo->data[1296];
    }
    temp_v1_2 = (this->actor.params * 0xC) + &D_80A07F0C;
    this->unk_164 = temp_v1_2->unk_-960 + temp_v0->world.pos.x;
    this->unk_168 = temp_v1_2->unk_-95C + temp_v0->world.pos.y;
    temp_f12_2 = this->unk_164 - this->actor.world.pos.x;
    this->unk_16C = temp_v1_2->unk_-958 + temp_v0->world.pos.z;
    sp50 = this->unk_168 - this->actor.world.pos.y;
    sp54 = temp_f12_2;
    temp_f14_2 = this->unk_16C - this->actor.world.pos.z;
    sp4C = temp_f14_2;
    this->actor.world.rot.y = Math_Atan2S(temp_f12_2, temp_f14_2);
    this->actor.world.rot.x = Math_Atan2S(sp50, sqrtf((sp54 * sp54) + (sp4C * sp4C)));
    this->unk_AB40 = (s16) (s32) Rand_ZeroFloat(100.0f);
}

void func_80A04DE0(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_144 = func_80A04E5C;
    arg0->gravity = -0.75f;
    ActorShape_Init(arg0 + 0xBC, 0.0f, func_800B3FC0, 40.0f);
    Collider_InitAndSetCylinder(arg1, arg0 + 0x1820, arg0, &D_80A07EA4);
    arg0->colChkInfo.health = 5;
    arg0->unk_14E = 0;
}

void func_80A04E5C(Boss07 *this, GlobalContext *globalCtx) {
    s16 sp7E;
    s16 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ColliderCylinder *sp40;
    CollisionCheckContext *sp3C;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f6;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = this->unk_14E;
    switch (temp_v0) {
    case 20:
        Audio_PlayActorSound2((Actor *) this, 0x2175U);
        this->unk_150 = 0x50;
        temp_f6 = Rand_ZeroFloat(100.0f) + 100.0f;
        this->unk_18C = 5.0f;
        this->actor.speedXZ = 5.0f;
        this->unk_154 = (s16) (s32) temp_f6;
        this->unk_164 = D_801D15B0.x;
        this->unk_168 = D_801D15B0.y;
        this->unk_16C = D_801D15B0.z;
        this->actor.world.rot.y = Math_Atan2S(-this->actor.world.pos.x, -this->actor.world.pos.z);
        this->unk_14E = 1;
        this->unk_1888 = 0x64;
        this->unk_1820.base.colType = 3;
        this->actor.flags |= 0x201;
        Audio_PlayActorSound2((Actor *) this, 0x393DU);
block_27:
        break;
    case 1:
        Audio_PlayActorSound2((Actor *) this, 0x2175U);
        if (this->unk_154 == 0) {
            this->unk_18DB = 1;
            this->unk_154 = (s16) (s32) (Rand_ZeroFloat(200.0f) + 100.0f);
        }
        if (this->unk_150 == 0) {
            if (Rand_ZeroOne() < 0.35f) {
                this->unk_18C = 1.0f;
                this->unk_150 = (s16) (s32) (Rand_ZeroFloat(50.0f) + 30.0f);
            } else {
                func_809F4D10((Vec3f *) &this->unk_164, 500.0f);
                this->unk_168 = Rand_ZeroFloat(350.0f) + 100.0f;
                temp_f18 = Rand_ZeroFloat(50.0f) + 20.0f;
                this->unk_170 = 0.0f;
                this->unk_150 = (s16) (s32) temp_f18;
                this->unk_18C = Rand_ZeroFloat(5.0f) + 5.0f;
            }
        }
        temp_f12 = this->unk_164 - this->actor.world.pos.x;
        sp74 = this->unk_168 - this->actor.world.pos.y;
        sp78 = temp_f12;
        temp_f14 = this->unk_16C - this->actor.world.pos.z;
        sp70 = temp_f14;
        sp7C = Math_Atan2S(temp_f12, temp_f14);
        sp7E = Math_Atan2S(sp74, sqrtf((sp78 * sp78) + (sp70 * sp70)));
        sp7E += (s32) (Math_SinS((s16) (this->unk_14C * 0x1388)) * 4000.0f);
        Math_ApproachS(&this->actor.world.rot.y, sp7C, 0xA, (s16) (s32) this->unk_170);
        Math_ApproachS((s16 *) &this->actor.world.rot, sp7E, 5, (s16) (s32) this->unk_170);
        Math_ApproachF(&this->unk_170, 2000.0f, 1.0f, 100.0f);
        Math_ApproachF(&this->actor.speedXZ, this->unk_18C, 1.0f, 1.0f);
        if ((this->unk_18C < 8.0f) && (func_801690CC(globalCtx) == 0)) {
            Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
        } else {
            Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 0xA, 0x1000);
        }
        Actor_SetVelocityXYRotation((Actor *) this);
        Actor_ApplyMovement((Actor *) this);
        temp_v0_2 = this->unk_1888;
        if (temp_v0_2 == 0) {
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 100.0f, 100.0f, 5U);
        } else {
            this->unk_1888 = temp_v0_2 - 1;
        }
        func_80A04768((Actor *) this, globalCtx);
        goto block_27;
    case 2:
        Math_ApproachS((s16 *) &this->actor.shape, -0x4000, 1, 0x500);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 100.0f, 100.0f, 5U);
        if ((this->actor.bgCheckFlags & 1) != 0) {
            if (this->unk_18DA != 0) {
                this->unk_18D6 |= 4;
            }
            Math_ApproachF(&this->actor.scale.z, 0.0f, 1.0f, 0.001f);
            if (this->actor.scale.z == 0.0f) {
                this->unk_14E = 3;
                this->actor.draw = NULL;
                this->actor.flags &= -2;
            }
            func_809F4CBC(this, 2.0f);
        } else {
            this->actor.shape.rot.z += 0x200;
        }
        goto block_27;
    case 10:
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        this->actor.world.pos.y -= 50.0f;
        this->actor.prevPos.y -= 50.0f;
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 60.0f, 60.0f, 5U);
        this->actor.world.pos.y += 50.0f;
        this->actor.prevPos.y += 50.0f;
        if (this->unk_150 == 0) {
            this->unk_14E = 1;
        }
        goto block_27;
    }
    if ((s32) this->unk_14E < 2) {
        temp_a1 = &this->unk_1820;
        sp40 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp3C = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp40);
        CollisionCheck_SetAT(globalCtx, temp_a1_2, (Collider *) sp40);
    }
    if (this->unk_18DB != 0) {
        this->unk_18DB = 0;
        if ((func_809F4C40(this, globalCtx) != 0) && (func_80A00720 != D_80A09A5C->actionFunc)) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x12F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0x64);
        }
    }
    if (this->unk_18D6 != 0) {
        sp60 = randPlusMinusPoint5Scaled(80.0f) + this->actor.world.pos.x;
        sp68 = randPlusMinusPoint5Scaled(80.0f) + this->actor.world.pos.z;
        if (this->unk_18DA != 0) {
            sp50 = 0.0f;
            sp48 = 0.0f;
            sp4C = 0.03f;
            sp64 = Rand_ZeroFloat(10.0f) + this->actor.world.pos.y;
            EffectSsKFire_Spawn(globalCtx, &sp60, &D_801D15B0, &sp48, (s32) (Rand_ZeroFloat(30.0f) + 30.0f), 0);
            Audio_PlayActorSound2((Actor *) this, 0x321FU);
            return;
        }
        sp64 = (Rand_ZeroFloat(30.0f) + this->actor.world.pos.y) - 15.0f;
        sp58 = 5.0f;
        sp54 = 0.0f;
        sp5C = 0.0f;
        sp48 = 0.0f;
        sp4C = 5.0f * -0.05f;
        sp50 = 0.0f;
        func_809F4AE8(globalCtx, &sp60, &sp54, &sp48, Rand_ZeroFloat(10.0f) + 25.0f);
        Audio_PlayActorSound2((Actor *) this, 0x205BU);
        /* Duplicate return node #38. Try simplifying control flow for better match */
    }
}

void func_80A055E0(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_144 = func_80A05608;
    arg0->unk_150 = 0x32;
    arg0->speedXZ = 0.0f;
}

void func_80A05608(Boss07 *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    CollisionCheckContext *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    func_80A04768((Actor *) this, globalCtx);
    temp_a1 = &this->unk_1820;
    sp24 = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp20 = temp_a1_2;
    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp24);
    CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp24);
    if (this->unk_150 == 0) {
        this->actionFunc = func_80A04E5C;
        this->unk_14E = 1;
    }
}

void func_80A05694(Actor *this, GlobalContext *globalCtx) {
    Actor *temp_a3;
    f32 temp_t3;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v1;
    Actor *phi_v0;
    s32 phi_v1;

    temp_a3 = this;
    temp_a3->unk_14C = (s16) (temp_a3->unk_14C + 1);
    phi_v0 = temp_a3;
    phi_v1 = 0;
    do {
        temp_a0 = phi_v0->unk_150;
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (temp_a0 != 0) {
            phi_v0->unk_150 = (s16) (temp_a0 - 1);
        }
        phi_v0 += 2;
    } while (temp_v1 != 6);
    temp_v0 = temp_a3->unk_18D6;
    if (temp_v0 != 0) {
        temp_a3->unk_18D6 = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = temp_a3->unk_15C;
    if (temp_v0_2 != 0) {
        temp_a3->unk_15C = (s16) (temp_v0_2 - 1);
    }
    temp_v0_3 = temp_a3->unk_15E;
    if (temp_v0_3 != 0) {
        temp_a3->unk_15E = (s16) (temp_v0_3 - 1);
    }
    this = temp_a3;
    temp_a3->unk_144(temp_a3, globalCtx);
    this->focus.pos.x = this->world.pos.x;
    temp_t3 = this->world.pos.z;
    this->world.pos.x += this->unk_18CC;
    this->world.pos.z += this->unk_18D0;
    this->focus.pos.z = temp_t3;
    this->focus.pos.y = this->world.pos.y;
    Math_ApproachZeroF(this + 0x18CC, 1.0f, 1.0f);
    Math_ApproachZeroF(this + 0x18D0, 1.0f, 1.0f);
}

void func_80A057A0(Actor *this, GlobalContext *globalCtx) {
    f32 sp64;
    f32 sp60;
    Gfx *sp50;
    Gfx *sp30;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_2;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_v0;
    s16 temp_v0_3;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if ((this->unk_15E & 1) != 0) {
        temp_s0->polyOpa.p = Gfx_SetFog(temp_s0->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    temp_v0 = this->unk_15C;
    sp64 = (f32) temp_v0 * 0.7853982f * 0.06666667f;
    sp60 = Math_SinS((s16) (temp_v0 * 0x3500)) * sp64 * 0.5f;
    SysMatrix_InsertYRotation_f(Math_SinS((s16) (this->unk_15C * 0x4500)) * sp64, 1);
    SysMatrix_RotateStateAroundXAxis(sp60);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp50 = temp_v0_2;
    sp50->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = this->params;
    if (temp_v0_3 != 0xC8) {
        if (temp_v0_3 != 0xC9) {
            if (temp_v0_3 != 0xCA) {
                if (temp_v0_3 != 0xCB) {

                } else {
                    temp_v0_4 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = temp_v0_4 + 8;
                    temp_v0_4->words.w1 = (u32) &D_06019328;
                    temp_v0_4->words.w0 = 0xDE000000;
                }
            } else {
                temp_v0_5 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = (u32) &D_06017DE0;
                temp_v0_5->words.w0 = 0xDE000000;
            }
        } else {
            temp_v0_6 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_06016090;
            temp_v0_6->words.w0 = 0xDE000000;
        }
    } else {
        temp_v0_7 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_060149A0;
        temp_v0_7->words.w0 = 0xDE000000;
    }
    temp_s0->polyOpa.p = func_801660B8(globalCtx, temp_s0->polyOpa.p);
    if (func_80A04890 == this->unk_144) {
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0;
        temp_v0_8->words.w0 = 0xE7000000;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = -0x3738;
        temp_v0_9->words.w0 = 0xFA000000;
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = 0xFFFF6480;
        temp_v0_10->words.w0 = 0xFB000000;
        SysMatrix_InsertTranslation(this->world.pos.x, this->world.pos.y, this->world.pos.z, 0);
        temp_f12 = this->unk_188C;
        Matrix_Scale(temp_f12, temp_f12, 0.0f, 1);
        SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
        SysMatrix_InsertZRotation_s(this->unk_18C8, 1);
        temp_v0_11 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xDA380003;
        sp30 = temp_v0_11;
        sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_12 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_12 + 8;
        temp_v0_12->words.w1 = (u32) &D_04023348;
        temp_v0_12->words.w0 = 0xDE000000;
        temp_v0_13 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_13 + 8;
        temp_v0_13->words.w1 = (u32) &D_04023428;
        temp_v0_13->words.w0 = 0xDE000000;
    }
}

void func_80A05AF8(Boss07 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A05B50;
    arg0->actor.gravity = 0.0f;
    arg0->unk_150 = 0xC8;
    arg0->unk_17C = ((f32) gGameInfo->data[1578] * 0.01f) + 0.9f;
}

void func_80A05B50(Boss07 *this, GlobalContext *globalCtx) {
    Boss07 *temp_v0;
    Boss07 *temp_v0_2;

    temp_v0 = D_80A09A54;
    if (func_809F8EC8 == temp_v0->actionFunc) {
        Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &temp_v0->unk_F80);
        this->actor.world.pos.y -= 25.0f + (f32) gGameInfo->data[1614];
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 40.0f, 50.0f, 80.0f, 1U);
    temp_v0_2 = D_80A09A54;
    if (((s32) temp_v0_2->unk_14C >= (s32) (s16) (gGameInfo->data[1298] + 0x15)) || (temp_v0_2->unk_15C != 0)) {
        func_80A05C88(this, globalCtx);
        return;
    }
    if ((this->actor.bgCheckFlags & 8) != 0) {
        func_80A05C88(this, globalCtx);
        this->actor.speedXZ = -15.0f;
        CollisionCheck_SpawnShieldParticles(globalCtx, (Vec3f *) &this->actor.focus);
        Audio_PlayActorSound2((Actor *) this, 0x1808U);
    }
}

void func_80A05C88(Boss07 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A05DDC;
    arg0->actor.gravity = -2.0f;
    if (D_80A09A54->unk_15C != 0) {
        arg0->unk_150 = gGameInfo->data[1583] + 0x50;
        arg0->unk_152 = gGameInfo->data[1613] + 0x96;
    } else {
        arg0->unk_150 = gGameInfo->data[1583] + 0x12C;
        arg0->unk_152 = gGameInfo->data[1613] + 0x172;
        arg0->actor.velocity.y = ((f32) gGameInfo->data[1579] * 0.1f) + 15.0f;
        arg0->actor.speedXZ = ((f32) gGameInfo->data[1580] * 0.1f) + -3.0f;
    }
    arg0->actor.world.rot.y = (gGameInfo->data[1581] << 0xC) + D_80A09A54->actor.shape.rot.y;
    arg0->actor.shape.rot.z = (s16) (s32) Rand_ZeroFloat((f32) (gGameInfo->data[1565] + 0xA) * 256.0f);
}

void func_80A05DDC(Boss07 *this, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp48;
    void *sp3C;
    PosRot *sp38;
    Actor *temp_v0_9;
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    GameInfo *temp_v0_4;
    GameInfo *temp_v0_5;
    GameInfo *temp_v0_6;
    GameInfo *temp_v0_7;
    PosRot *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0_8;
    s16 temp_v1;

    func_8019FAD8(&this->actor.projectedPos, 0x322CU, this->unk_17C * 1.1111112f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    this->actor.world.pos.x += this->unk_18CC;
    this->actor.world.pos.z += this->unk_18D0;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 40.0f, 40.0f, 80.0f, 5U);
    if ((this->unk_158 == 0) && ((this->actor.bgCheckFlags & 8) != 0)) {
        temp_f0 = this->unk_17C;
        this->unk_158 = 0xA;
        if (temp_f0 > 0.01f) {
            if (temp_f0 < 0.45f) {
                this->actor.speedXZ *= -1.0f;
            } else {
                this->actor.speedXZ = -10.0f;
            }
            CollisionCheck_SpawnShieldParticles(globalCtx, (Vec3f *) &this->actor.focus);
            Audio_PlayActorSound2((Actor *) this, 0x1808U);
        }
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        temp_v0 = gGameInfo;
        temp_v1 = this->unk_150;
        if ((s32) temp_v1 < (s32) (s16) (temp_v0->data[1560] + 0x46)) {
            if ((s32) temp_v1 >= (s32) (s16) (temp_v0->data[1561] + 0x23)) {
                Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, ((f32) temp_v0->data[1553] * 0.01f) + 0.1f);
                temp_v0_2 = gGameInfo;
                Math_ApproachS(&this->actor.shape.rot.z, (s16) ((temp_v0_2->data[1555] << 0xB) + 0x2000), 1, (s16) (temp_v0_2->data[1554] + 0x1A0));
                Math_ApproachZeroF(&this->unk_17C, 1.0f, ((f32) gGameInfo->data[1552] * 0.0001f) + 0.005f);
                temp_v0_3 = gGameInfo;
                Math_ApproachS(&this->unk_180, (s16) ((temp_v0_3->data[1556] << 0xB) + 0x2000), 1, (s16) ((temp_v0_3->data[1557] * 0x10) + 0xC0));
            } else if (temp_v1 == 0) {
                Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, ((f32) temp_v0->data[1562] * 0.01f) + 0.5f);
                Math_ApproachS(&this->actor.shape.rot.z, (s16) ((gGameInfo->data[1555] << 0xB) + 0x2000), 1, 0x800);
                Math_ApproachZeroF(&this->unk_17C, 1.0f, ((f32) gGameInfo->data[1563] * 0.001f) + 0.024f);
                Math_ApproachS(&this->unk_180, 0, 2, (s16) (gGameInfo->data[1564] + 0x6A));
            } else {
                Math_ApproachF(&this->actor.speedXZ, (f32) temp_v0->data[1558] + 10.0f, 1.0f, ((f32) temp_v0->data[1559] * 0.01f) + 0.6f);
                temp_v0_4 = gGameInfo;
                Math_ApproachS(&this->actor.shape.rot.z, (s16) ((temp_v0_4->data[1555] << 0xB) + 0x2000), 1, (s16) (temp_v0_4->data[1554] + 0x410));
                Math_ApproachZeroF(&this->unk_17C, 1.0f, ((f32) gGameInfo->data[1552] * 0.0001f) + 0.005f);
                temp_v0_5 = gGameInfo;
                Math_ApproachS(&this->unk_180, (s16) ((temp_v0_5->data[1565] << 0xB) - 0x800), 1, (s16) ((temp_v0_5->data[1566] * 0x10) + 0x340));
            }
            this->actor.world.rot.y += this->unk_180;
        } else {
            Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x300);
            temp_v0_6 = gGameInfo;
            Math_ApproachF(&this->actor.speedXZ, ((f32) temp_v0_6->data[1584] * 0.1f) + 2.0f + 8.0f, 1.0f, ((f32) temp_v0_6->data[1582] * 0.01f) + 0.100000024f + 0.2f);
        }
        Math_ApproachZeroF(&this->unk_18CC, 1.0f, 1.0f);
        Math_ApproachZeroF(&this->unk_18D0, 1.0f, 1.0f);
        temp_v0_7 = gGameInfo;
        temp_f0_2 = this->actor.velocity.y;
        if (temp_f0_2 < ((f32) temp_v0_7->data[1576] + -2.0f)) {
            this->actor.velocity.y = temp_f0_2 * -(0.5f + ((f32) temp_v0_7->data[1577] * 0.01f));
            Audio_PlayActorSound2((Actor *) this, 0x1808U);
            temp_a1 = &this->actor.world;
            sp38 = temp_a1;
            CollisionCheck_SpawnShieldParticles(globalCtx, (Vec3f *) temp_a1);
            this->actor.speedXZ *= 0.5f + ((f32) gGameInfo->data[1593] * 0.01f);
        } else {
            this->actor.velocity.y = -0.5f;
            sp38 = &this->actor.world;
        }
        sp4C = this->actor.prevPos.x - this->actor.world.pos.x;
        sp48 = this->actor.prevPos.z - this->actor.world.pos.z;
        sp3C = Effect_GetParams(this->unk_18DC);
        func_800AE930(&globalCtx->colCtx, (s32) sp3C, (f32 *) sp38, 3.0f, (s16) Math_Atan2S(sp4C, sp48), this->actor.floorPoly, (s32) this->actor.floorBgId);
        this->unk_14E = 1;
    } else if (this->unk_14E != 0) {
        this->unk_14E = 0;
        func_800AEF44(Effect_GetParams(this->unk_18DC));
    }
    temp_v0_8 = this->unk_152;
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if (temp_v0_8 == 0) {
        temp_v0_9 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 9, this->actor.world.pos.x, this->actor.world.pos.y + 25.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        if (temp_v0_9 != 0) {
            temp_v0_9->unk_1F0 = 0;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (temp_v0_8 == 0x19) {
        this->unk_15E = 0x19;
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 3U);
    }
}

void func_80A06500(Actor *arg0, GlobalContext *arg1) {
    void *sp18;
    Vec3f *temp_a1;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1;
    s16 temp_v1_10;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s16 temp_v1_8;
    s16 temp_v1_9;
    void *temp_a2;
    void *temp_a2_2;
    void *phi_a2;
    Actor *phi_a3;

    if ((arg0->unk_158 == 0) && (temp_a2 = arg1->actorCtx.actorList[9].first, phi_a2 = temp_a2, (temp_a2 != 0))) {
loop_3:
        if ((arg0 != phi_a2) && (phi_a2->params == 0xB4) && (phi_a2->unk_158 == 0) && (temp_f12 = phi_a2->world.pos.x - arg0->world.pos.x, temp_f2 = phi_a2->world.pos.y - arg0->world.pos.y, temp_f14 = phi_a2->world.pos.z - arg0->world.pos.z, (sqrtf((temp_f12 * temp_f12) + (temp_f2 * temp_f2) + (temp_f14 * temp_f14)) < ((f32) gGameInfo->data[1564] + 50.0f)))) {
            arg0->unk_158 = 0xA;
            phi_a2->unk_158 = (s16) arg0->unk_158;
            arg0 = arg0;
            sp18 = phi_a2;
            arg0->world.rot.y = Math_Atan2S(temp_f12, temp_f14);
            phi_a2->world.rot.y = arg0->world.rot.y + 0x7FFF;
            temp_a1 = arg0 + 0x3C;
            if ((s32) arg0->unk_150 > 0) {
                arg0->speedXZ = -10.0f;
            } else {
                arg0->speedXZ = -5.0f;
                arg0->unk_180 = 0x800;
                arg0->unk_17C = (f32) (((f32) gGameInfo->data[1625] * 0.01f) + 0.2f);
            }
            if ((s32) phi_a2->unk_150 > 0) {
                phi_a2->speedXZ = -10.0f;
            } else {
                phi_a2->speedXZ = -5.0f;
                phi_a2->unk_180 = 0x800;
                phi_a2->unk_17C = (f32) (((f32) gGameInfo->data[1625] * 0.01f) + 0.2f);
            }
            sp18 = phi_a2;
            arg0 = arg0;
            CollisionCheck_SpawnShieldParticles(arg1, temp_a1);
            CollisionCheck_SpawnShieldParticles(arg1, phi_a2 + 0x3C);
            if ((s32) arg0->unk_150 >= 0x51) {
                arg0 = arg0;
                sp18 = phi_a2;
                temp_v1 = arg0->unk_150;
                arg0->shape.rot.z = (s16) (s32) randPlusMinusPoint5Scaled((f32) (gGameInfo->data[1565] + 0x14) * 256.0f);
                if (temp_v1 != 0) {
                    arg0->unk_150 = (s16) (temp_v1 - 1);
                }
                temp_v0 = arg0->unk_152;
                if (temp_v0 == 0) {

                } else {
                    arg0->unk_152 = (s16) (temp_v0 - 1);
                }
                temp_v1_2 = arg0->unk_150;
                if (temp_v1_2 == 0) {

                } else {
                    arg0->unk_150 = (s16) (temp_v1_2 - 1);
                }
                temp_v0_2 = arg0->unk_152;
                if (temp_v0_2 == 0) {

                } else {
                    arg0->unk_152 = (s16) (temp_v0_2 - 1);
                }
                temp_v1_3 = arg0->unk_150;
                if (temp_v1_3 == 0) {

                } else {
                    arg0->unk_150 = (s16) (temp_v1_3 - 1);
                }
                temp_v0_3 = arg0->unk_152;
                if (temp_v0_3 == 0) {

                } else {
                    arg0->unk_152 = (s16) (temp_v0_3 - 1);
                }
                temp_v1_4 = arg0->unk_150;
                if (temp_v1_4 == 0) {

                } else {
                    arg0->unk_150 = (s16) (temp_v1_4 - 1);
                }
                temp_v0_4 = arg0->unk_152;
                if (temp_v0_4 == 0) {

                } else {
                    arg0->unk_152 = (s16) (temp_v0_4 - 1);
                }
                temp_v1_5 = arg0->unk_150;
                if (temp_v1_5 == 0) {

                } else {
                    arg0->unk_150 = (s16) (temp_v1_5 - 1);
                }
                temp_v0_5 = arg0->unk_152;
                if (temp_v0_5 != 0) {
                    arg0->unk_152 = (s16) (temp_v0_5 - 1);
                }
            }
            phi_a3 = arg0;
            if ((s32) phi_a2->unk_150 >= 0x51) {
                arg0 = arg0;
                sp18 = phi_a2;
                temp_v1_6 = phi_a2->unk_150;
                phi_a2->shape.rot.z = (s16) (s32) randPlusMinusPoint5Scaled((f32) (gGameInfo->data[1565] + 0x14) * 256.0f);
                phi_a3 = arg0;
                if (temp_v1_6 != 0) {
                    phi_a2->unk_150 = (s16) (temp_v1_6 - 1);
                }
                temp_v0_6 = phi_a2->unk_152;
                if (temp_v0_6 == 0) {

                } else {
                    phi_a2->unk_152 = (s16) (temp_v0_6 - 1);
                }
                temp_v1_7 = phi_a2->unk_150;
                if (temp_v1_7 == 0) {

                } else {
                    phi_a2->unk_150 = (s16) (temp_v1_7 - 1);
                }
                temp_v0_7 = phi_a2->unk_152;
                if (temp_v0_7 == 0) {

                } else {
                    phi_a2->unk_152 = (s16) (temp_v0_7 - 1);
                }
                temp_v1_8 = phi_a2->unk_150;
                if (temp_v1_8 == 0) {

                } else {
                    phi_a2->unk_150 = (s16) (temp_v1_8 - 1);
                }
                temp_v0_8 = phi_a2->unk_152;
                if (temp_v0_8 == 0) {

                } else {
                    phi_a2->unk_152 = (s16) (temp_v0_8 - 1);
                }
                temp_v1_9 = phi_a2->unk_150;
                if (temp_v1_9 == 0) {

                } else {
                    phi_a2->unk_150 = (s16) (temp_v1_9 - 1);
                }
                temp_v0_9 = phi_a2->unk_152;
                if (temp_v0_9 == 0) {

                } else {
                    phi_a2->unk_152 = (s16) (temp_v0_9 - 1);
                }
                temp_v1_10 = phi_a2->unk_150;
                if (temp_v1_10 == 0) {

                } else {
                    phi_a2->unk_150 = (s16) (temp_v1_10 - 1);
                }
                temp_v0_10 = phi_a2->unk_152;
                if (temp_v0_10 != 0) {
                    phi_a2->unk_152 = (s16) (temp_v0_10 - 1);
                }
            }
            Audio_PlayActorSound2(phi_a3, 0x1808U);
            return;
        }
        temp_a2_2 = phi_a2->next;
        phi_a2 = temp_a2_2;
        if (temp_a2_2 == 0) {
            /* Duplicate return node #73. Try simplifying control flow for better match */
            return;
        }
        goto loop_3;
    }
}

void func_80A06990(Actor *arg0, GlobalContext *arg1) {
    u32 sp3C;
    s32 sp38;
    s16 temp_v0_4;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    s32 phi_t0;
    s32 phi_t0_2;

    temp_v0 = arg0->unk_1831;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    phi_t0 = 0;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_1831 = (u8) (temp_v0 & 0xFFFD);
        if (arg0->unk_15C == 0) {
            temp_v0_2 = arg0->colChkInfo.damageEffect;
            arg0->unk_15C = 5;
            if ((temp_v0_2 == 0xD) || (temp_v0_2 == 0xA)) {
                if (temp_v0_2 == 0xD) {
                    temp_v1->unk_B84 = (s16) arg0->yawTowardsPlayer;
                    temp_v1->unk_B80 = 20.0f;
                }
                if ((s32) arg0->unk_150 >= 0x29) {
                    arg0->world.rot.y = arg0->yawTowardsPlayer;
                    if (temp_v1->unk_14B == 0) {
                        arg0->speedXZ = -30.0f;
                        arg0->velocity.y = 10.0f;
                        temp_v0_4 = gGameInfo->data[1583] + 0x64;
                        if ((s32) temp_v0_4 < (s32) arg0->unk_150) {
                            arg0->unk_150 = temp_v0_4;
                            arg0->unk_152 = (s16) (gGameInfo->data[1613] + 0xAA);
                        }
                    } else if (arg0->colChkInfo.damageEffect == 0xA) {
                        arg0->speedXZ = -15.0f;
                    } else {
                        arg0->speedXZ = -7.0f;
                    }
                }
            } else if (temp_v0_2 == 0xC) {
                arg0->world.rot.y = arg0->yawTowardsPlayer;
                arg0->speedXZ = 2.0f * -temp_v1->speedXZ;
                phi_t0 = 1;
            } else if (temp_v0_2 == 0xB) {
                temp_v0_3 = arg0->unk_1828;
                arg0->world.rot.y = Math_Atan2S(temp_v0_3->unk_24 - arg0->world.pos.x, temp_v0_3->unk_2C - arg0->world.pos.z);
                arg0->speedXZ = -20.0f;
                arg0->velocity.y = (f32) gGameInfo->data[1591] + 15.0f;
                phi_t0 = 1;
            }
        }
    }
    phi_t0_2 = phi_t0;
    if ((arg0->bgCheckFlags & 1) != 0) {
        sp38 = phi_t0;
        phi_t0_2 = phi_t0;
        if ((func_800B64FC(arg1, 5.0f, arg0 + 0x24, &sp3C) >= 0.0f) && (sp3C == 0)) {
            arg0->world.rot.y = arg0->yawTowardsPlayer;
            arg0->velocity.y = (f32) gGameInfo->data[1591] + 25.0f;
            phi_t0_2 = 1;
        }
    }
    if ((phi_t0_2 != 0) && ((s32) arg0->unk_150 >= 0x5B)) {
        arg0->shape.rot.z = (s16) (s32) randPlusMinusPoint5Scaled((f32) (gGameInfo->data[1565] + 0x1E) * 256.0f);
        arg0->unk_150 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 70.0f);
        arg0->unk_152 = (s16) (arg0->unk_150 + 0x46);
    }
}

void func_80A06C64(Actor *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;

    temp_v0 = this->unk_150;
    this->unk_14C = (s16) (this->unk_14C + 1);
    if (temp_v0 != 0) {
        this->unk_150 = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = this->unk_152;
    if (temp_v0_2 != 0) {
        this->unk_152 = (s16) (temp_v0_2 - 1);
    }
    temp_v0_3 = this->unk_15E;
    if (temp_v0_3 != 0) {
        this->unk_15E = (s16) (temp_v0_3 - 1);
    }
    temp_v0_4 = this->unk_15C;
    if (temp_v0_4 != 0) {
        this->unk_15C = (s16) (temp_v0_4 - 1);
    }
    temp_v0_5 = this->unk_158;
    if (temp_v0_5 != 0) {
        this->unk_158 = (s16) (temp_v0_5 - 1);
    }
    this->unk_144(this, globalCtx);
    Math_Vec3f_Copy((Vec3f *) &this->focus, (Vec3f *) &this->world);
    this->focus.pos.y += 25.0f;
    func_80A06990(this, globalCtx);
    temp_a1 = this + 0x1820;
    sp20 = temp_a1;
    Collider_UpdateCylinder(this, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp24 = temp_a1_2;
    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp20);
    CollisionCheck_SetAT(globalCtx, temp_a1_2, (Collider *) sp20);
    func_80A06500(this, globalCtx);
    this->unk_178 = (f32) (this->unk_178 - this->unk_17C);
    temp_f0 = this->unk_178;
    if (temp_f0 < -6.2831855f) {
        this->unk_178 = (f32) (temp_f0 + 6.2831855f);
    }
    if (func_809F65F4 == D_80A09A54->actionFunc) {
        Actor_MarkForDeath(this);
    }
    Math_ApproachF((f32 *) &this->scale, ((f32) gGameInfo->data[1613] * 0.001f) + 0.06f, 1.0f, 0.012f);
    Actor_SetScale(this, this->scale.x);
}

void func_80A06E24(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    if ((this->unk_15E & 1) != 0) {
        temp_s1->polyOpa.p = Gfx_SetFog(temp_s1->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x30C, 0x44B);
    }
    SysMatrix_InsertTranslation(this->world.pos.x, this->world.pos.y, this->world.pos.z, 0);
    Matrix_RotateY(this->shape.rot.y, 1U);
    SysMatrix_InsertZRotation_s(this->shape.rot.z, 1);
    SysMatrix_InsertYRotation_f(this->unk_178, 1);
    Matrix_Scale(this->scale.x, this->scale.y, this->scale.z, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_0602F640;
    temp_s1->polyOpa.p = func_801660B8(globalCtx, temp_s1->polyOpa.p);
}

void func_80A06F48(Actor *this, GlobalContext *globalCtx) {
    ActorContext *sp28;
    Actor **temp_s0_2;
    Actor **temp_v1;
    ActorContext *temp_a3_2;
    Boss07 *temp_v0_2;
    Camera *temp_v0_3;
    CutsceneContext *temp_s0;
    u16 temp_t4;
    u8 temp_v0;
    void *temp_a3;
    void *temp_t2;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    Actor **phi_s0;
    Actor **phi_v1;

    func_80A07638(globalCtx);
    temp_v0 = D_80A09A4C;
    if (temp_v0 != 0) {
        D_80A09A4C = temp_v0 - 1;
        play_sound(0x31BCU);
    }
    if (this->unk_1808 != 0) {
        D_801F4E32 = 1;
        D_801F4E38.unk_0 = (s32) this->unk_1810;
        D_801F4E38.unk_4 = (s32) this->unk_1814;
        D_801F4E38.unk_8 = (s32) this->unk_1818;
        D_801F4E44 = this->unk_180C;
        D_801F4E48 = 10.0f;
        D_801F4E4C = 0;
        this->unk_1808 = 0U;
    } else {
        D_801F4E32 = 0;
    }
    this->unk_ABC8 = (s32) (this->unk_ABC8 + 1);
    temp_t4 = this->unk_ABD0;
    switch (temp_t4) {
    case 0:
        temp_v0_2 = D_80A09A5C;
        if ((temp_v0_2 != 0) && (temp_v0_2->unk_774 != 0)) {
            this->unk_ABD0 = 1;
            this->unk_ABC8 = 0;
        }
        break;
    case 1:
        if (ActorCutscene_GetCurrentIndex() == -1) {
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, this, 7U);
            this->unk_ABD2 = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, this->unk_ABD2, 7);
            this->unk_ABC8 = 0;
            this->unk_ABD0 = 2;
            func_8016566C(0x96);
            this->unk_ABD4 = (f32) (D_80A09A60.unk_0->world.pos.x * 0.7f);
            this->unk_ABD8 = (f32) (D_80A09A60.unk_0->world.pos.y * 0.7f);
            this->unk_ABDC = (f32) (D_80A09A60.unk_0->world.pos.z * 0.7f);
        case 2:
            if (this->unk_ABC8 == 0x14) {
                D_80A09A60.unk_0->unk_14E = 0x14;
            }
            this->unk_ABE0 = (f32) D_80A09A60.unk_0->world.pos.x;
            this->unk_ABE4 = (f32) D_80A09A60.unk_0->world.pos.y;
            this->unk_ABE8 = (f32) D_80A09A60.unk_0->world.pos.z;
            if (this->unk_ABC8 == 0x28) {
                this->unk_ABD0 = 3;
                this->unk_ABC8 = 0;
                this->unk_ABD4 = (f32) (D_80A09A60.unk_4->unk_24 * 0.7f);
                this->unk_ABD8 = (f32) (D_80A09A60.unk_4->unk_28 * 0.7f);
                this->unk_ABDC = (f32) (D_80A09A60.unk_4->unk_2C * 0.7f);
            case 3:
                if (this->unk_ABC8 == 0x14) {
                    D_80A09A60.unk_4->unk_14E = 0x14;
                }
                this->unk_ABE0 = (f32) D_80A09A60.unk_4->unk_24;
                this->unk_ABE4 = (f32) D_80A09A60.unk_4->unk_28;
                this->unk_ABE8 = (f32) D_80A09A60.unk_4->unk_2C;
                if (this->unk_ABC8 == 0x28) {
                    this->unk_ABD0 = 4;
                    this->unk_ABC8 = 0;
                    this->unk_ABD4 = (f32) (D_80A09A60.unk_8->unk_24 * 0.7f);
                    this->unk_ABD8 = (f32) (D_80A09A60.unk_8->unk_28 * 0.7f);
                    this->unk_ABDC = (f32) (D_80A09A60.unk_8->unk_2C * 0.7f);
                case 4:
                    if (this->unk_ABC8 == 0x14) {
                        D_80A09A60.unk_8->unk_14E = 0x14;
                    }
                    this->unk_ABE0 = (f32) D_80A09A60.unk_8->unk_24;
                    this->unk_ABE4 = (f32) D_80A09A60.unk_8->unk_28;
                    this->unk_ABE8 = (f32) D_80A09A60.unk_8->unk_2C;
                    if (this->unk_ABC8 == 0x28) {
                        this->unk_ABD0 = 5;
                        this->unk_ABC8 = 0;
                        this->unk_ABD4 = (f32) (D_80A09A60.unk_C->unk_24 * 0.7f);
                        this->unk_ABD8 = (f32) (D_80A09A60.unk_C->unk_28 * 0.7f);
                        this->unk_ABDC = (f32) (D_80A09A60.unk_C->unk_2C * 0.7f);
                    case 5:
                        if (this->unk_ABC8 == 0x14) {
                            D_80A09A60.unk_C->unk_14E = 0x14;
                        }
                        this->unk_ABE0 = (f32) D_80A09A60.unk_C->unk_24;
                        this->unk_ABE4 = (f32) D_80A09A60.unk_C->unk_28;
                        this->unk_ABE8 = (f32) D_80A09A60.unk_C->unk_2C;
                        if (this->unk_ABC8 == 0x28) {
                            temp_s0 = &globalCtx->csCtx;
                            temp_v0_3 = Play_GetCamera(globalCtx, 0);
                            this->unk_ABD0 = 6;
                            this->unk_ABC8 = 0;
                            temp_a3 = this + 0xABD4;
                            temp_t2 = this + 0xABE0;
                            temp_v0_3->eye.x = temp_a3->unk_0;
                            temp_v0_3->eye.y = temp_a3->unk_4;
                            temp_v0_3->eye.z = temp_a3->unk_8;
                            temp_v0_3->eyeNext.x = temp_a3->unk_0;
                            temp_v0_3->eyeNext.y = temp_a3->unk_4;
                            temp_v0_3->eyeNext.z = temp_a3->unk_8;
                            temp_v0_3->at.x = temp_t2->unk_0;
                            temp_v0_3->at.y = temp_t2->unk_4;
                            temp_v0_3->at.z = temp_t2->unk_8;
                            func_80169AFC(globalCtx, this->unk_ABD2, 0);
                            this->unk_ABD2 = 0;
                            func_800EA0EC(globalCtx, temp_s0);
                            func_800B7298(globalCtx, this, 6U);
                            func_80165690();
                            sp28 = &globalCtx->actorCtx;
                            phi_s0 = &D_80A09A60;
                            do {
                                func_800BC154(globalCtx, sp28, *phi_s0, 5U);
                                temp_s0_2 = phi_s0 + 4;
                                phi_s0 = temp_s0_2;
                            } while (temp_s0_2 != &D_80A09A70);
                        }
                    }
                }
            }
        }
        break;
    }
    temp_a3_2 = this + 0xABD4;
    if (this->unk_ABD2 != 0) {
        if ((u32) this->unk_ABC8 < 0x14U) {
            phi_v1 = &D_80A09A60;
            do {
                if ((this->unk_ABC8 & 1) != 0) {
                    temp_v0_4 = phi_v1->unk_0;
                    temp_v0_4->world.pos.x += 2.0f;
                    temp_v0_5 = phi_v1->unk_0;
                    temp_v0_5->world.pos.z += 2.0f;
                } else {
                    temp_v0_6 = phi_v1->unk_0;
                    temp_v0_6->world.pos.x -= 2.0f;
                    temp_v0_7 = phi_v1->unk_0;
                    temp_v0_7->world.pos.z -= 2.0f;
                }
                if ((this->unk_ABC8 & 1) != 0) {
                    temp_v0_8 = phi_v1->unk_4;
                    temp_v0_8->unk_24 = (f32) (temp_v0_8->unk_24 + 2.0f);
                    temp_v0_9 = phi_v1->unk_4;
                    temp_v0_9->unk_2C = (f32) (temp_v0_9->unk_2C + 2.0f);
                } else {
                    temp_v0_10 = phi_v1->unk_4;
                    temp_v0_10->unk_24 = (f32) (temp_v0_10->unk_24 - 2.0f);
                    temp_v0_11 = phi_v1->unk_4;
                    temp_v0_11->unk_2C = (f32) (temp_v0_11->unk_2C - 2.0f);
                }
                temp_v1 = phi_v1 + 8;
                phi_v1 = temp_v1;
            } while (temp_v1 != &D_80A09A70);
        }
        sp28 = temp_a3_2;
        ShrinkWindow_SetLetterboxTarget(0x1B);
        Play_CameraSetAtEye(globalCtx, this->unk_ABD2, this + 0xABE0, (Vec3f *) temp_a3_2);
    }
}

void func_80A07604(Actor *this, GlobalContext *globalCtx) {
    func_80A07740(globalCtx);
    func_809FBF94(this, globalCtx);
}

void func_80A07638(GlobalContext *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_v1;
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0->specialEffects;
    phi_v1 = 0;
    do {
        if (phi_v0->unk_0 != 0) {
            temp_f0 = phi_v0->unk_10;
            temp_f2 = phi_v0->unk_14;
            temp_f12 = phi_v0->unk_18;
            phi_v0->unk_4 = (f32) (phi_v0->unk_4 + temp_f0);
            phi_v0->unk_8 = (f32) (phi_v0->unk_8 + temp_f2);
            phi_v0->unk_C = (f32) (phi_v0->unk_C + temp_f12);
            phi_v0->unk_2 = (s16) (phi_v0->unk_2 + 1);
            phi_v0->unk_10 = (f32) (temp_f0 + phi_v0->unk_1C);
            phi_v0->unk_14 = (f32) (temp_f2 + phi_v0->unk_20);
            phi_v0->unk_18 = (f32) (temp_f12 + phi_v0->unk_24);
            if (phi_v0->unk_0 == 1) {
                if (phi_v0->unk_30 != 0) {
                    phi_v0->unk_2C = (s16) ((phi_v0->unk_2C - (phi_v1 & 7)) - 0xD);
                    if ((s32) phi_v0->unk_2C <= 0) {
                        phi_v0->unk_2C = 0;
                        phi_v0->unk_0 = 0U;
                    }
                } else {
                    phi_v0->unk_2C = (s16) (phi_v0->unk_2C + 0x12C);
                    if ((s32) phi_v0->unk_2C >= 0xFF) {
                        phi_v0->unk_2C = 0xFF;
                        phi_v0->unk_30 = (s16) (phi_v0->unk_30 + 1);
                    }
                }
            }
        }
        temp_v1 = phi_v1 + 1;
        phi_v0 += 0x48;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x32);
}

void func_80A07740(GlobalContext *arg0) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_v1;
    s32 temp_s3;
    void *temp_s1;
    void *phi_s1;
    s32 phi_s3;

    temp_a0 = arg0->state.gfxCtx;
    temp_s1 = arg0->specialEffects;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s1 = temp_s1;
    phi_s3 = 0;
    do {
        if ((s32) phi_s1->unk_0 > 0) {
            temp_v0 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xFA000000;
            temp_v0->words.w1 = (phi_s1->unk_2C & 0xFF) | 0xC8140000;
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = 0;
            temp_v0_2->words.w0 = 0xE7000000;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0xFFD7FF80;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDB060020;
            temp_v1 = phi_s1->unk_2;
            temp_v0_4->words.w1 = Gfx_TwoTexScroll(arg0->state.gfxCtx, 0, (temp_v1 * 3) & 0x7F, ((s32) temp_v1 * -0xF) & 0xFF, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s1->unk_4, phi_s1->unk_8, phi_s1->unk_C, 0);
            SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
            temp_f12 = phi_s1->unk_34;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_0600CEE8;
            temp_v0_6->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s1 += 0x48;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x32);
}
