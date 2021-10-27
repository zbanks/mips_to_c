typedef struct EnMnk {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*unk_144)(GlobalContext *, Actor *); /* inferred */
    /* 0x148 */ SkelAnime unk_148;                  /* inferred */
    /* 0x18C */ Vec3s unk_18C;                      /* inferred */
    /* 0x192 */ char pad_192[0x84];                 /* maybe part of unk_18C[23]? */
    /* 0x216 */ Vec3s unk_216;                      /* inferred */
    /* 0x21C */ char pad_21C[0x104];                /* maybe part of unk_216[44]? */
    /* 0x320 */ SkelAnime unk_320;                  /* inferred */
    /* 0x364 */ char pad_364[0x50];                 /* maybe part of unk_320[2]? */
    /* 0x3B4 */ s16 unk_3B4;                        /* inferred */
    /* 0x3B6 */ char pad_3B6[0x6];                  /* maybe part of unk_3B4[4]? */
    /* 0x3BC */ s16 unk_3BC;                        /* inferred */
    /* 0x3BE */ s16 unk_3BE;                        /* inferred */
    /* 0x3C0 */ s32 unk_3C0;                        /* inferred */
    /* 0x3C4 */ s32 unk_3C4;                        /* inferred */
    /* 0x3C8 */ s32 unk_3C8;                        /* inferred */
    /* 0x3CC */ s16 unk_3CC;                        /* inferred */
    /* 0x3CE */ s16 unk_3CE;                        /* inferred */
    /* 0x3D0 */ s16 unk_3D0;                        /* inferred */
    /* 0x3D2 */ char pad_3D2[0x2];
    /* 0x3D4 */ s32 unk_3D4;                        /* inferred */
    /* 0x3D8 */ f32 unk_3D8;                        /* inferred */
    /* 0x3DC */ s16 unk_3DC;                        /* inferred */
    /* 0x3DE */ s16 unk_3DE;                        /* inferred */
    /* 0x3E0 */ s32 unk_3E0;                        /* inferred */
    /* 0x3E4 */ u16 unk_3E4;                        /* inferred */
    /* 0x3E6 */ char pad_3E6[0x2];
    /* 0x3E8 */ void (*actionFunc)(EnMnk *, GlobalContext *);
} EnMnk;                                            /* size = 0x3EC */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ u8 unk_12;                           /* inferred */
    /* 0x13 */ char pad_13[0x1];
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnMnk_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMnk_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnMnk_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ void (*sp38)(EnMnk *, GlobalContext *); /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnMnk_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB4D10 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ AnimationHeaderCommon **sp30;        /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AB4E34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB4E58 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB4E88 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ AnimationHeaderCommon **sp2C;        /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AB4F68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB4F8C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ AnimationHeaderCommon **sp34;        /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AB50B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB50D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB5148 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB51C8 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AB52E8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB5A64 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB5B38 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB5B84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB5BCC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB5C14 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB5C74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB5CD8 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];                    /* maybe part of sp2A[3]? */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ u8 *sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AB5F6C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB60FC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB61E8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB6304 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB63CC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB64B8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB65F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB675C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB6870 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB6920 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB69C8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB6AF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB6B78 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB6BE4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB6E08 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB6EB0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB6F98 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB7108 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB7204 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB72BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB7354 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB740C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB7488 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB7504 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB75A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB7620 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB76B0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB794C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB7AC8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB7B20 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB7DCC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB7E50 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8040 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB80BC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB81D8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB8478 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB852C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB85C8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8644 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB86AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8750 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8878 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8968 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB89F8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8A74 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8B18 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8BD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB8C60 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB8CFC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8E4C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8EF4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB8FD8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB9084 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x6];                    /* maybe part of sp24[2]? */
    /* 0x2E */ u16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB92CC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x6];                    /* maybe part of sp24[2]? */
    /* 0x2E */ u16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB94E4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB96A0 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB96E8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB9708 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB973C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB977C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB97B4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80AB99D4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AB9BAC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AB9C4C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

s32 func_800B8718(Actor *, GlobalContext *);        /* extern */
? func_800B874C(Actor *, GlobalContext *, ?, ?);    /* extern */
void func_80AB4D10(EnMnk *arg0, s16 arg1, u8 arg2, f32 arg3); /* static */
void func_80AB4E34(Actor *, ?, GlobalContext *);    /* static */
void func_80AB4E58(Actor *arg0, s32 arg1);          /* static */
void func_80AB4E88(Actor *arg0, s32 arg1, u8 arg2, f32 arg3); /* static */
void func_80AB4F68(Actor *, ?, Actor *);            /* static */
void func_80AB4F8C(Actor *arg0, s16 arg1, u8 arg2, f32 arg3); /* static */
void func_80AB50B0(EnMnk *, ?, SaveContext *);      /* static */
void func_80AB50D4(EnMnk *arg0, GlobalContext *arg1, SaveContext *); /* static */
void func_80AB5148(Actor *arg0, GlobalContext *arg1, SaveContext *); /* static */
void func_80AB51C8(EnMnk *arg0, GlobalContext *arg1, SaveContext *); /* static */
void func_80AB52E8(Actor *arg0, GlobalContext *arg1, SaveContext *); /* static */
s32 func_80AB5A64(EnMnk *arg0, GlobalContext *arg1, SaveContext *); /* static */
void func_80AB5B38(GlobalContext *arg0, Actor *arg1); /* static */
void func_80AB5B84(Actor *arg0);                    /* static */
void func_80AB5BCC(Actor *arg0);                    /* static */
void func_80AB5C14(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB5C74(EnMnk *arg0, GlobalContext *arg1); /* static */
s32 func_80AB5CD8(Actor *arg0, u16 arg1);           /* static */
void func_80AB5F6C(Actor *arg0);                    /* static */
void func_80AB60FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB61E8(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB6304(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB63CC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB64B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB65F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB675C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB6870(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB6920(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB69C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB6AF8(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB6B78(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB6BE4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB6E08(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB6EB0(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB6F98(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB7108(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB7204(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB72BC(EnMnk *arg0, ? arg1);            /* static */
void func_80AB7354(void *arg0);                     /* static */
void func_80AB740C(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB7488(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB7504(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB75A4(EnMnk *arg0, GlobalContext *arg1); /* static */
s32 func_80AB7620(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB76B0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB794C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB7AC8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB7B20(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB7DCC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB7E50(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB8040(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB80BC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB81D8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB8478(void *arg0, GlobalContext *arg1); /* static */
void func_80AB852C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB85C8(Actor *arg0, ? arg1);            /* static */
void func_80AB8644(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB86AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB8750(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB8878(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB8968(Actor *arg0, ? arg1);            /* static */
void func_80AB89F8(Actor *arg0, ? arg1);            /* static */
void func_80AB8A74(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB8B18(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB8BD4(Actor *arg0, void *arg1);        /* static */
void func_80AB8C60(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB8CFC(EnMnk *arg0);                    /* static */
void func_80AB8E4C(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB8EF4(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB8FD8(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB9084(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB92CC(EnMnk *arg0, GlobalContext *arg1); /* static */
void func_80AB94E4(EnMnk *arg0, GlobalContext *arg1); /* static */
s32 func_80AB96A0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
s32 func_80AB96E8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
s32 func_80AB9708(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80AB973C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80AB977C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80AB97B4(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80AB99D4(EnMnk *arg0, GraphicsContext **arg1); /* static */
void func_80AB9BAC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AB9C4C(Actor *this, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_06003584;
extern FlexSkeletonHeader D_06005150;
extern AnimationHeader D_060082C8;
extern AnimationHeader D_06008814;
extern AnimationHeader D_06009CC0;
extern AnimationHeader D_060105DC;
extern FlexSkeletonHeader D_06019B88;
extern FlexSkeletonHeader D_0601D518;
static ColliderCylinderInit D_80AB9D10 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0x1000200, 0, 0}, 0, 1, 1},
    {0xF, 0x1E, 0, {0, 0, 0}},
};
static ? D_80AB9D3C;                                /* unable to generate initializer */
static ? D_80AB9D60;                                /* unable to generate initializer */
static ? D_80AB9D84;                                /* unable to generate initializer */
static ? D_80AB9D90;                                /* unable to generate initializer */
static ? D_80AB9D9C;                                /* unable to generate initializer */
static ? D_80AB9DD8;                                /* unable to generate initializer */
static Color_RGBA8 D_80AB9DF4 = {0xFF, 0xFF, 0x9B, 0xFF};
static Color_RGBA8 D_80AB9DF8 = {0xFF, 0x64, 0, 0xFF};
static Vec3f D_80AB9DFC = {300.0f, 400.0f, 0.0f};
static ? D_80AB9E08;                                /* unable to generate initializer */

void func_80AB4D10(EnMnk *arg0, s16 arg1, u8 arg2, f32 arg3) {
    s32 sp34;
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    AnimationHeaderCommon **temp_v1_2;
    s32 temp_v0;

    temp_v0 = arg1 * 4;
    temp_v1 = temp_v0 + &D_80AB9D3C;
    sp30 = temp_v1;
    sp34 = temp_v0;
    SkelAnime_ChangeAnim(arg0 + 0x148, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, arg3);
    temp_v1_2 = sp34 + &D_80AB9D60;
    sp30 = temp_v1_2;
    SkelAnime_ChangeAnim(arg0 + 0x2A0, (AnimationHeader *) *temp_v1_2, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1_2), (u8) (s32) arg2, arg3);
    if (arg1 != 0) {
        if (arg1 != 3) {
            if (arg1 != 6) {
                if (arg1 != 8) {
                    arg0->unk_3E0 = 0;
                } else {
                    goto block_7;
                }
            } else {
                arg0->unk_3E0 = 4;
            }
        } else {
block_7:
            arg0->unk_3E0 = 6;
        }
    } else {
        arg0->unk_3E0 = 5;
    }
    arg0->unk_3BE = arg1;
}

void func_80AB4E34(void) {
    func_80AB4D10(NULL, 0xC0A00000);
}

void func_80AB4E58(Actor *arg0, s32 arg1) {
    if (arg1 != arg0->unk_3BE) {
        func_80AB4D10(NULL, 0xC0A00000);
    }
}

void func_80AB4E88(Actor *arg0, s32 arg1, u8 arg2, f32 arg3) {
    s32 sp30;
    AnimationHeaderCommon **sp2C;
    AnimationHeaderCommon **temp_v1;
    AnimationHeaderCommon **temp_v1_2;
    s32 temp_v0;

    temp_v0 = arg1 * 4;
    temp_v1 = temp_v0 + &D_80AB9D84;
    sp2C = temp_v1;
    sp30 = temp_v0;
    SkelAnime_ChangeAnim(arg0 + 0x148, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, arg3);
    temp_v1_2 = sp30 + &D_80AB9D90;
    sp2C = temp_v1_2;
    SkelAnime_ChangeAnim(arg0 + 0x2A0, (AnimationHeader *) *temp_v1_2, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1_2), (u8) (s32) arg2, arg3);
    arg0->unk_3BE = (s16) arg1;
}

void func_80AB4F68(void) {
    func_80AB4E88(NULL, 0xC0A00000);
}

void func_80AB4F8C(Actor *arg0, s16 arg1, u8 arg2, f32 arg3) {
    AnimationHeaderCommon **sp34;
    AnimationHeaderCommon **temp_v1;
    AnimationHeaderCommon **temp_v1_2;
    s16 phi_s0;

    phi_s0 = arg1;
    if (arg1 == 0x64) {
        phi_s0 = (s32) Rand_ZeroFloat(3.99f) + 7;
    }
    if ((phi_s0 == 4) || (phi_s0 == 6)) {
        temp_v1_2 = (phi_s0 * 4) + &D_80AB9D9C;
        sp34 = temp_v1_2;
        SkelAnime_ChangeAnim(arg0 + 0x148, (AnimationHeader *) *temp_v1_2, -1.0f, (f32) SkelAnime_GetFrameCount(*temp_v1_2), 0.0f, (u8) (s32) arg2, arg3);
    } else {
        temp_v1 = (phi_s0 * 4) + &D_80AB9D9C;
        sp34 = temp_v1;
        SkelAnime_ChangeAnim(arg0 + 0x148, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, arg3);
    }
    arg0->unk_3E0 = 0;
    arg0->unk_3BE = phi_s0;
}

void func_80AB50B0(void) {
    func_80AB4F8C(NULL, 0xC0A00000);
}

void func_80AB50D4(EnMnk *arg0, GlobalContext *arg1) {
    EnMnk *temp_a2;
    u16 temp_t0;

    temp_a2 = arg0;
    temp_t0 = temp_a2->unk_3E4 | 3;
    temp_a2->unk_3E4 = temp_t0;
    temp_a2->actor.textId = 0x7D8;
    temp_a2->actionFunc = func_80AB675C;
    temp_a2->unk_3C0 = 0;
    temp_a2->unk_3E4 = temp_t0 & 0xFFBF;
    arg0 = temp_a2;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a2 + 0x148, &D_06008814);
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.minVelocityY = 0.0f;
    arg0->actor.gravity = 0.0f;
}

void func_80AB5148(Actor *arg0, GlobalContext *arg1) {
    s32 temp_a1;
    s32 temp_a3;
    u16 temp_t1;

    temp_t1 = arg0[3].home.rot.z | 8;
    arg0[3].home.rot.z = temp_t1;
    temp_a3 = arg0->params & 0x7F;
    arg0->draw = NULL;
    arg0->flags &= -2;
    arg0->unk_360 = 0x64;
    arg0[3].home.rot.z = temp_t1 | 0x20;
    if (temp_a3 != 0x7F) {
        temp_a1 = temp_a3;
        arg0 = arg0;
        if (Flags_GetSwitch(arg1, temp_a1) != 0) {
            Actor_MarkForDeath(arg0);
        }
    }
}

void func_80AB51C8(EnMnk *arg0, GlobalContext *arg1) {
    s32 temp_s2;
    s16 phi_s0;
    EnMnk *phi_s3;
    s32 phi_s2;

    arg0->actionFunc = func_80AB81D8;
    arg0->actor.flags |= 0x2000000;
    SkelAnime_InitSV(arg1, arg0 + 0x2A0, &D_06005150, &D_06003584, arg0 + 0x2E4, arg0 + 0x302, 5);
    arg0->unk_3D0 = 4;
    arg0->unk_3BE = -1;
    func_80AB4D10(arg0, 0, 2U, 0.0f);
    arg0->actor.draw = func_80AB9BAC;
    arg0->actor.shape.shadowDraw = NULL;
    arg0->unk_3E4 |= 0x223;
    phi_s0 = (s16) arg0->actor.cutscene;
    phi_s3 = arg0;
    phi_s2 = 0;
    do {
        phi_s3->unk_3B0 = phi_s0;
        if (phi_s0 != -1) {
            arg0->actor.cutscene = (s8) phi_s0;
            phi_s0 = ActorCutscene_GetAdditionalCutscene((s16) arg0->actor.cutscene);
        }
        temp_s2 = phi_s2 + 2;
        phi_s3 += 2;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xC);
    arg0->unk_3BC = -1;
    arg0->actor.cutscene = (s8) arg0->unk_3B0;
}

void func_80AB52E8(Actor *arg0, GlobalContext *arg1) {
    func_800BC154(arg1, arg1 + 0x1CA0, arg0, 6U);
    arg0->unk_3E8 = func_80AB8B18;
    arg0->textId = 0x8E8;
    SkelAnime_InitSV(arg1, (SkelAnime *) &arg0[2].home.rot.z, &D_0601D518, &D_060082C8, (Vec3s *) &arg0[2].scale.y, arg0 + 0x302, 4);
    func_80AB4E88(arg0, 2, 0U, 0.0f);
    arg0->unk_3E0 = 5;
    arg0->draw = func_80AB9C4C;
    arg0->shape.shadowDraw = NULL;
    arg0[3].home.rot.z = (u16) arg0[3].home.rot.z | 0x23;
    arg0[2].overlayEntry = (ActorOverlay *)0x3C;
    arg0[3].home.pos.y = -0.3f;
    arg1->envCtx.unk_C3 = 1;
    gSaveContext.weekEventReg[83] &= 0xF7;
}

void EnMnk_Init(Actor *thisx, GlobalContext *globalCtx) {
    void (*sp38)(EnMnk *, GlobalContext *);
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_t3;
    s32 temp_v1;
    u8 temp_t7;
    u32 phi_v1;
    EnMnk *this = (EnMnk *) thisx;

    Actor_SetScale((Actor *) this, 0.012f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 12.0f);
    this->actionFunc = func_80AB94E4;
    temp_a1 = &this->unk_148;
    sp34 = temp_a1;
    sp38 = func_80AB94E4;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06019B88, &D_060105DC, &this->unk_18C, &this->unk_216, 0x17);
    SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_060105DC);
    this->unk_3E4 = 0;
    this->unk_3D4 = 0;
    this->unk_3E0 = 0;
    this->unk_3CC = 0;
    this->unk_3CE = 0;
    this->unk_3D0 = 0;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.colChkInfo.cylRadius = 0x28;
    temp_a1_2 = &this->unk_320;
    this->actor.velocity.y = -9.0f;
    this->actor.minVelocityY = -9.0f;
    this->actor.gravity = -1.0f;
    sp34 = temp_a1_2;
    Collider_InitAndSetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, (Actor *) this, &D_80AB9D10);
    Collider_UpdateCylinder((Actor *) this, (ColliderCylinder *) temp_a1_2);
    temp_t3 = (s32) (this->actor.params & 0xF800) >> 0xB;
    this->unk_3C4 = temp_t3;
    this->unk_3D8 = 0.0f;
    if (temp_t3 == 0x1F) {
        this->unk_3C4 = -1;
    }
    temp_v0 = this->actor.params;
    temp_v1 = (s32) (temp_v0 & 0x780) >> 7;
    phi_v1 = (u32) temp_v1;
    switch (temp_v1) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        if ((Flags_GetSwitch(globalCtx, temp_v0 & 0x7F) == 0) || (Flags_GetSwitch(globalCtx, (this->actor.params & 0x7F) + 1) != 0) || ((gSaveContext.weekEventReg[9] & 0x80) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        phi_v1 = (u32) ((s32) (this->actor.params & 0x780) >> 7);
block_39:
        switch (phi_v1) {                           /* switch 2 */
        case 0:                                     /* switch 2 */
            func_80AB50D4(this, globalCtx, &gSaveContext);
            break;
        case 1:                                     /* switch 2 */
            this->actionFunc = func_80AB740C;
            temp_t7 = gSaveContext.eventInf[2] & 0xDF;
            gSaveContext.eventInf[2] = temp_t7;
            gSaveContext.eventInf[2] = temp_t7 & 0xBF;
            this->actor.textId = 0x7D0;
            func_80AB5148((Actor *) this, globalCtx, &gSaveContext);
            break;
        case 3:                                     /* switch 2 */
            this->actor.textId = 0x7D3;
            this->actionFunc = func_80AB7488;
            func_80AB5148((Actor *) this, globalCtx, &gSaveContext);
            this->unk_320.unk3E.y = 0x78;
            break;
        case 2:                                     /* switch 2 */
            func_80AB50B0(this, 0, &gSaveContext);
            this->actionFunc = func_80AB75A4;
            this->unk_3C8 = 0;
            this->unk_3E4 |= 2;
            this->actor.flags &= -2;
            this->actor.velocity.y = 0.0f;
            this->actor.minVelocityY = 0.0f;
            this->actor.gravity = 0.0f;
            break;
        case 4:                                     /* switch 2 */
            func_80AB50B0(this, 0, &gSaveContext);
            this->actionFunc = func_80AB75A4;
            this->unk_3C8 = 0;
            break;
        case 5:                                     /* switch 2 */
            func_80AB51C8(this, globalCtx, &gSaveContext);
            break;
        case 6:                                     /* switch 2 */
            func_80AB52E8((Actor *) this, globalCtx, &gSaveContext);
            break;
        case 7:                                     /* switch 2 */
            this->actor.room = -1;
            func_80AB50B0(this, 0, &gSaveContext);
            temp_v0_2 = this->actor.home.rot.x;
            this->actionFunc = func_80AB8E4C;
            this->unk_3C8 = 0;
            this->unk_3C0 = 0;
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    this->actor.textId = 0x7DC;
                } else {
                    this->actor.textId = 0x7DE;
                }
            } else {
                this->actor.textId = 0x7DD;
            }
            break;
        case 8:                                     /* switch 2 */
            this->actionFunc = func_80AB9084;
            this->unk_3D0 = 0;
            break;
        case 9:                                     /* switch 2 */
            func_80AB50B0(this, 0, &gSaveContext);
            this->unk_3C8 = 0;
            this->actionFunc = func_80AB8FD8;
            this->actor.textId = 0x8E5;
            break;
        case 10:                                    /* switch 2 */
            this->actionFunc = func_80AB92CC;
            this->unk_3D0 = 0;
            break;
        default:                                    /* switch 2 */
            this->actionFunc = sp38;
            break;
        }
        this->actor.world.rot.z = 0;
        this->actor.shape.rot.z = 0;
        this->unk_144 = func_80AB5B38;
        this->actor.world.rot.x = this->actor.world.rot.z;
        this->actor.shape.rot.x = this->actor.shape.rot.z;
        return;
    case 1:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
        if (Flags_GetSwitch(globalCtx, temp_v0 & 0x7F) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        phi_v1 = (u32) ((s32) (this->actor.params & 0x780) >> 7);
        goto block_39;
    case 3:                                         /* switch 1 */
        if ((Flags_GetSwitch(globalCtx, temp_v0 & 0x7F) != 0) || ((gSaveContext.weekEventReg[29] & 0x80) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        phi_v1 = (u32) ((s32) (this->actor.params & 0x780) >> 7);
        goto block_39;
    case 5:                                         /* switch 1 */
        if (((gSaveContext.weekEventReg[9] & 0x80) != 0) || ((gSaveContext.weekEventReg[23] & 0x20) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_39;
    case 6:                                         /* switch 1 */
        if (((gSaveContext.weekEventReg[9] & 0x80) == 0) || ((gSaveContext.weekEventReg[23] & 0x20) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_39;
    case 8:                                         /* switch 1 */
        if (((gSaveContext.weekEventReg[23] & 0x20) == 0) || ((gSaveContext.weekEventReg[29] & 0x80) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_39;
    case 9:                                         /* switch 1 */
        if ((gSaveContext.weekEventReg[29] & 0x80) == 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_39;
    case 2:                                         /* switch 1 */
        if (((gSaveContext.weekEventReg[79] & 2) != 0) || ((gSaveContext.weekEventReg[12] & 8) != 0) || (Flags_GetSwitch(globalCtx, temp_v0 & 0x7F) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        phi_v1 = (u32) ((s32) (this->actor.params & 0x780) >> 7);
        goto block_39;
    case 7:                                         /* switch 1 */
        if (((gSaveContext.weekEventReg[79] & 2) != 0) || ((gSaveContext.weekEventReg[12] & 8) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        if (func_80AB5A64(this, globalCtx, &gSaveContext) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        phi_v1 = (u32) ((s32) (this->actor.params & 0x780) >> 7);
        goto block_39;
    default:                                        /* switch 1 */
        goto block_39;
    }
}

void EnMnk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *temp_a1;
    EnMnk *this = (EnMnk *) thisx;

    temp_a1 = &this->unk_320;
    this = this;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) temp_a1);
    if ((((s32) (this->actor.params & 0x780) >> 7) == 5) && ((this->unk_3E4 & 0x2000) != 0)) {
        Item_Give(globalCtx, 0x61U);
        gSaveContext.eventInf[2] &= 0xEF;
    }
}

s32 func_80AB5A64(EnMnk *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;

    phi_s0 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 4, 0x19E);
    if ((temp_v0 != 0) && (temp_v0 != arg0)) {
        if ((temp_v0->home.pos.x == arg0->actor.home.pos.x) && (temp_v0->home.pos.y == arg0->actor.home.pos.y) && (temp_v0->home.pos.z == arg0->actor.home.pos.z)) {
            return 1;
        }
        phi_s0 = temp_v0->next;
        goto loop_1;
    }
    if ((temp_v0 != 0) && (temp_v1 = temp_v0->next, (temp_v1 != 0))) {
        phi_s0 = temp_v1;
        goto loop_1;
    }
    return 0;
}

void func_80AB5B38(GlobalContext *arg0, Actor *arg1) {
    func_8013A530(arg0, arg1, 2, arg1 + 0x3C, arg1 + 0xBC, 50.0f, 500.0f, (s16) -1);
}

void func_80AB5B84(Actor *arg0) {
    if (func_801378B8(arg0 + 0x148, 1.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x2900U);
        Audio_PlayActorSound2(arg0, 0x28EFU);
    }
}

void func_80AB5BCC(Actor *arg0) {
    if (func_801378B8(arg0 + 0x148, 1.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x2900U);
        Audio_PlayActorSound2(arg0, 0x2902U);
    }
}

void func_80AB5C14(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp20;
    Vec3f *temp_a1;

    temp_a1 = arg0 + 0x24;
    sp20 = temp_a1;
    EffectSsGRipple_Spawn(arg1, temp_a1, 0x96, 0x1F4, (s16) 0);
    EffectSsGSplash_Spawn(arg1, temp_a1, NULL, NULL, (s16) 0, (s16) 0xC8);
}

void func_80AB5C74(EnMnk *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    func_80AB50B0((EnMnk *)1);
    temp_v0 = arg0->unk_3C4;
    arg0->actor.speedXZ = 0.0f;
    if (temp_v0 != -1) {
        arg0->unk_3AC = arg1->setupPathList + (temp_v0 * 8);
        return;
    }
    arg0->unk_3AC = 0;
}

s32 func_80AB5CD8(Actor *arg0, u16 arg1) {
    u8 *sp3C;
    void *sp38;
    f32 sp34;
    f32 sp30;
    s16 sp2A;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    s16 temp_a1;
    s16 temp_t8;
    s16 temp_t9;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_t5;
    s32 temp_t6;
    u8 *temp_v0;
    void *temp_t0;
    s32 phi_v0;
    f32 phi_f8;

    temp_v0 = arg0[2].child;
    if (temp_v0 == 0) {
        return 1;
    }
    sp3C = temp_v0;
    temp_t0 = Lib_SegmentedToVirtual(temp_v0->unk_4) + (arg0[2].update * 6);
    temp_t8 = temp_t0->unk_0;
    temp_t9 = temp_t0->unk_4;
    sp38 = temp_t0;
    temp_f14 = (f32) temp_t8 - arg0->world.pos.x;
    temp_f12 = (f32) temp_t9 - arg0->world.pos.z;
    sp34 = temp_f14;
    sp30 = temp_f12;
    temp_v0_2 = Math_FAtan2F(temp_f12, temp_f14);
    temp_a1 = temp_v0_2;
    sp2A = temp_v0_2;
    Math_SmoothStepToS(arg0 + 0x32, temp_a1, 2, 0xBB8, (s16) 0xC8);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->world.rot.y, 2, 0xBB8, (s16) 0xC8);
    temp_v1 = sp2A - arg0->world.rot.y;
    phi_v0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    }
    if (phi_v0 < 0x3E8) {
        temp_f0 = arg0->speedXZ;
        if (temp_f0 < 7.5f) {
            phi_f8 = temp_f0 + 1.5f;
            goto block_11;
        }
    } else {
        temp_f0_2 = arg0->speedXZ;
        if (temp_f0_2 > 4.0f) {
            arg0->speedXZ = temp_f0_2 - 1.5f;
        } else if (temp_f0_2 < 2.0f) {
            phi_f8 = temp_f0_2 + 1.5f;
block_11:
            arg0->speedXZ = phi_f8;
        }
    }
    temp_f0_3 = (sp34 * sp34) + (sp30 * sp30);
    if (temp_f0_3 < 64.0f) {
        temp_t5 = arg0[2].update + 1;
        arg0[2].update = temp_t5;
        arg0->world.pos.x = (f32) temp_t0->unk_0;
        arg0->world.pos.z = (f32) temp_t0->unk_4;
        if (temp_t5 >= (s32) *sp3C) {
            return 2;
        }
        if ((arg1 & 1) != 0) {
            return 1;
        }
        goto block_23;
    }
    if (((arg1 & 2) != 0) && (temp_f0_3 < 400.0f)) {
        temp_t6 = arg0[2].update + 1;
        arg0[2].update = temp_t6;
        if (temp_t6 >= (s32) *sp3C) {
            return 4;
        }
        if ((arg1 & 1) != 0) {
            return 3;
        }
        goto block_23;
    }
block_23:
    return 0;
}

void func_80AB5F6C(Actor *arg0) {
    s32 sp28;
    s16 temp_v0;
    s32 *temp_t4;
    s32 temp_a1;
    s32 temp_v0_2;

    temp_v0 = arg0->yawTowardsPlayer;
    arg0->shape.rot.y = temp_v0;
    arg0->world.rot.y = temp_v0;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if ((s32) arg0->unk_160 == 0) {
        temp_v0_2 = arg0[2].overlayEntry;
        if (temp_v0_2 < 0) {
            func_80AB4F8C(arg0, 0x64, 0U, 0.0f);
            arg0[2].overlayEntry += 1;
            return;
        }
        if (temp_v0_2 > 0) {
            arg0[2].overlayEntry = temp_v0_2 - 1;
            return;
        }
        do {
            temp_t4 = &D_80AB9DD8 + ((s32) Rand_ZeroFloat(7.0f) * 4);
            temp_a1 = *temp_t4;
        } while (temp_a1 == arg0[3].home.pos.x);
        sp28 = temp_a1;
        func_80AB4F8C(arg0, (s16) temp_a1, 0U, 0.0f);
        if (temp_a1 != 2) {
            if (temp_a1 == 0x64) {
                sp28 = temp_a1;
                arg0[2].overlayEntry = -(s32) (Rand_ZeroFloat(6.0f) + 6.0f);
            } else {
                sp28 = temp_a1;
                arg0[2].overlayEntry = (s32) (Rand_ZeroFloat(2.0f) + 1.0f);
            }
        } else {
            sp28 = temp_a1;
            arg0[2].overlayEntry = (s32) (Rand_ZeroFloat(6.0f) + 6.0f);
        }
        arg0[3].home.pos.x = *temp_t4;
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_80AB60FC(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    u8 temp_t7;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if ((func_80AB5CD8(arg0, 0U) != 0) && (temp_t7 = arg0[2].child->unk_1, arg0[2].draw = (void (*)(Actor *, GlobalContext *)) temp_t7, (temp_t7 == 0xFF))) {
        Actor_SetSwitchFlag(arg1, (arg0->params & 0x7F) + 1);
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_f0 = arg0->yDistToWater;
    if (temp_f0 > 0.0f) {
        arg0->world.pos.y += temp_f0;
        if ((s32) arg0->unk_160 == 0) {
            func_80AB5C14(arg0, arg1);
        }
        func_80AB5BCC(arg0);
        return;
    }
    if ((arg0->bgCheckFlags & 1) != 0) {
        func_80AB5B84(arg0);
    }
}

void func_80AB61E8(EnMnk *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    arg0->actor.world.rot.y = arg0->actor.yawTowardsPlayer;
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 2, 0xBB8, (s16) 0xC8);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1->msgCtx.unk11F04;
        if (temp_v0 != 0x7D9) {
            if (temp_v0 != 0x7DA) {
                if (temp_v0 != 0x7DB) {

                } else {
                    func_801477B4(arg1);
                    func_80AB5C74(arg0, arg1);
                    arg0->unk_3C0 = 0;
                    arg0->actionFunc = func_80AB60FC;
                    arg0->actor.velocity.y = -20.0f;
                    arg0->actor.minVelocityY = -20.0f;
                }
            } else {
                func_80151938(arg1, 0x7DBU);
                func_80AB50B0(arg0, 2);
            }
        } else {
            func_80151938(arg1, 0x7DAU);
            func_80AB50B0(arg0, 3);
        }
    }
    SkelAnime_FrameUpdateMatrix(&arg0->unk_148);
}

void func_80AB6304(EnMnk *arg0, GlobalContext *arg1) {
    arg0->actor.world.rot.y = arg0->actor.yawTowardsPlayer;
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 2, 0xBB8, (s16) 0xC8);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        arg0->unk_3E4 |= 4;
    }
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if ((arg0->unk_3E4 & 4) != 0) {
        func_80151938(arg1, 0x7D9U);
        func_80AB50B0(arg0, 7);
        arg0->actionFunc = func_80AB61E8;
        arg0->unk_3E4 &= 0xFFFB;
    }
}

void func_80AB63CC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp28;
    SkelAnime *temp_a0;

    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        arg0[3].home.rot.z |= 4;
    }
    arg0->world.rot.y = arg0->yawTowardsPlayer;
    Math_SmoothStepToS(arg0 + 0xBE, arg0->world.rot.y, 2, 0xBB8, (s16) 0xC8);
    temp_a0 = arg0 + 0x148;
    sp28 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06008814);
        arg0->unk_3E8 = func_80AB6304;
    }
    if (arg0->velocity.y < 0.0f) {
        arg0[3].home.rot.z &= 0xFFFD;
    }
    if (func_801378B8(sp28, 5.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x2901U);
    }
}

void func_80AB64B8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_t5;

    if ((arg0[3].home.rot.z & 8) == 0) {
        SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
        arg0->world.rot.y = arg0->yawTowardsPlayer;
        Math_SmoothStepToS(arg0 + 0xBE, arg0->world.rot.y, 2, 0xBB8, (s16) 0xC8);
    }
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        arg0->unk_3E8 = func_80AB63CC;
        func_80AB4F8C(arg0, 9, 2U, -5.0f);
        arg0->velocity.y = 3.6f;
        arg0->minVelocityY = -9.0f;
        temp_t5 = (u16) arg0[3].home.rot.z & 0xFFFE;
        arg0[3].home.rot.z = temp_t5;
        arg0[3].home.rot.z = temp_t5 & 0xFFFB;
        arg0->gravity = -0.4f;
        return;
    }
    if (arg0->xzDistToPlayer < 100.0f) {
        arg0->flags |= 0x10000;
        func_800B8614(arg0, arg1, 120.0f);
        return;
    }
    arg0->flags &= 0xFFFEFFFF;
}

void func_80AB65F4(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u8 temp_v0_2;
    u8 phi_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    temp_v0 = func_80AB5CD8(arg0, 3U);
    if (temp_v0 != 0) {
        if ((temp_v0 == 2) || (temp_v0 == 4)) {
            temp_v0_2 = arg0[2].child->unk_1;
            arg0[2].draw = (void (*)(Actor *, GlobalContext *)) temp_v0_2;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 == 0xFF) {
                arg0[2].draw = (void (*)(Actor *, GlobalContext *))-1;
                phi_v0 = (u8) (void (*)(Actor *, GlobalContext *))-1;
            }
            arg0[2].update = NULL;
            arg0[2].child = arg1->setupPathList + (phi_v0 * 8);
            func_80AB50B0((EnMnk *) arg0, 0);
            arg0->unk_3E8 = func_80AB64B8;
            arg0->minVelocityY = -9.0f;
            arg0->velocity.y = 0.0f;
            arg0->speedXZ = 0.0f;
            arg0->gravity = -1.0f;
            goto block_8;
        }
        if (arg0->xzDistToPlayer > 160.0f) {
            arg0->unk_3E8 = func_80AB675C;
            arg0[3].home.rot.z = (u16) arg0[3].home.rot.z | 3;
            arg0->speedXZ = 0.0f;
            func_80AB50B0((EnMnk *) arg0, 9);
            return;
        }
        goto block_8;
    }
block_8:
    if (((u16) arg0[3].home.rot.z & 0x40) != 0) {
        func_80AB5B84(arg0);
        return;
    }
    if ((s32) arg0->unk_160 == 0) {
        func_80AB5C14(arg0, arg1);
    }
    func_80AB5BCC(arg0);
}

void func_80AB675C(EnMnk *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;
    u16 temp_t1;

    temp_v0 = arg0->actor.yawTowardsPlayer;
    temp_a0 = arg0 + 0x148;
    arg0->actor.shape.rot.y = temp_v0;
    arg0->actor.world.rot.y = temp_v0;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (arg0->actor.xzDistToPlayer < 160.0f) {
        arg0->unk_3E4 |= 0x80;
        func_80AB5C74(arg0, arg1);
        temp_t1 = arg0->unk_3E4 & 0xFFFE;
        arg0->unk_3E4 = temp_t1;
        arg0->actionFunc = (void (*)(EnMnk *, GlobalContext *)) func_80AB65F4;
        arg0->unk_3E4 = temp_t1 & 0xFFFD;
    }
    if (((arg0->unk_3E4 & 0x40) == 0) && (((s32) arg0->unk_148.animCurrentFrame == 0) || (func_801378B8(sp24, 14.0f) != 0))) {
        func_80AB5C14((Actor *) arg0, arg1);
    }
    if (func_801378B8(sp24, 5.0f) != 0) {
        if ((arg0->unk_3D4 & 3) != 0) {
            Audio_PlayActorSound2((Actor *) arg0, 0x2901U);
        }
        arg0->unk_3D4 += 1;
    }
}

void func_80AB6870(EnMnk *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        arg0->unk_3E4 |= 4;
        func_801477B4(arg1);
    }
    temp_a0 = arg0 + 0x148;
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if ((arg0->unk_3E4 & 4) != 0) {
            func_80AB50B0(arg0, 0);
            arg0->actionFunc = func_80AB6920;
            return;
        }
        SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06009CC0);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80AB6920(EnMnk *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_v0 = arg0->actor.yawTowardsPlayer;
    temp_a0 = &arg0->unk_148;
    arg0->actor.shape.rot.y = temp_v0;
    arg0->actor.world.rot.y = temp_v0;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        SkelAnime_ChangeAnimDefaultStop(sp24, &D_06009CC0);
        arg0->actionFunc = func_80AB6870;
        arg0->unk_3E4 &= 0xFFFB;
        return;
    }
    if (arg0->actor.xzDistToPlayer < 100.0f) {
        func_800B8614((Actor *) arg0, arg1, 120.0f);
    }
}

void func_80AB69C8(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_v1;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if (func_80AB5CD8(arg0, 2U) != 0) {
        func_80AB50B0((EnMnk *) arg0, 0);
        temp_v0 = arg0->params;
        arg0->velocity.y = -9.0f;
        arg0->minVelocityY = -9.0f;
        arg0->gravity = -1.0f;
        arg0->speedXZ = 0.0f;
        if (((s32) (temp_v0 & 0x780) >> 7) == 3) {
            temp_v1 = temp_v0 & 0x7F;
            if (temp_v1 != 0x7F) {
                Actor_SetSwitchFlag(arg1, temp_v1 + 1);
            }
            Actor_MarkForDeath(arg0);
        } else {
            arg0->textId = 0x7D2;
            arg0->unk_3E8 = func_80AB6920;
        }
    }
    temp_f0 = arg0->yDistToWater;
    if (temp_f0 > 0.0f) {
        arg0->world.pos.y += temp_f0;
        if ((s32) arg0->unk_160 == 0) {
            func_80AB5C14(arg0, arg1);
        }
        func_80AB5BCC(arg0);
        return;
    }
    if ((arg0->bgCheckFlags & 1) != 0) {
        func_80AB5B84(arg0);
    }
}

void func_80AB6AF8(EnMnk *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if ((gSaveContext.eventInf[2] & 0x20) != 0) {
        func_80AB5C74(arg0, arg1);
        arg0->unk_3C0 = 0;
        arg0->actionFunc = (void (*)(EnMnk *, GlobalContext *)) func_80AB69C8;
        arg0->unk_320.unk3E.y = 0xF;
        Collider_UpdateCylinder((Actor *) arg0, (ColliderCylinder *) &arg0->unk_320);
        arg0->unk_3E4 &= 0xFFF7;
    }
}

void func_80AB6B78(EnMnk *arg0, GlobalContext *arg1) {
    func_801477B4(arg1);
    func_80AB5C74(arg0, arg1);
    arg0->unk_3C0 = 0;
    arg0->actionFunc = (void (*)(EnMnk *, GlobalContext *)) func_80AB69C8;
    arg0->unk_320.unk3E.y = 0xF;
    Collider_UpdateCylinder((Actor *) arg0, (ColliderCylinder *) &arg0->unk_320);
    arg0->unk_3E0 = 0;
    arg0->unk_3E4 &= 0xFFF7;
}

void func_80AB6BE4(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    u16 temp_t7;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_a0 = arg0 + 0x148;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        func_80AB4F8C(arg0, 0x64, 2U, 0.0f);
        SkelAnime_FrameUpdateMatrix(sp20);
    }
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 != 4) {
        if (temp_v0 != 5) {
            return;
        }
        if (func_80147624(arg1) != 0) {
            temp_t7 = arg1->msgCtx.unk11F04;
            switch (temp_t7) {
            case 2000:
                func_80AB50B0((EnMnk *) arg0, 3);
                func_80151938(arg1, 0x7D1U);
                arg0->unk_3E0 = 5;
                return;
            case 2003:
            case 2006:
                func_80AB50B0((EnMnk *) arg0, 3);
                func_80151938(arg1, 0x7D4U);
                return;
            case 2001:
                func_80AB50B0((EnMnk *) arg0, 7);
                func_80151938(arg1, 0x7D2U);
                arg0->unk_3E0 = 4;
                return;
            case 2004:
                func_80AB50B0((EnMnk *) arg0, 5);
                func_80151938(arg1, 0x7D5U);
                arg0->unk_3E0 = 6;
                return;
            case 2002:
                gSaveContext.eventInf[2] |= 0x20;
                func_80AB6B78((EnMnk *) arg0, arg1);
                gSaveContext.weekEventReg[79] |= 2;
                return;
            case 2007:
                func_80AB6B78((EnMnk *) arg0, arg1);
                gSaveContext.weekEventReg[8] |= 2;
                /* Duplicate return node #19. Try simplifying control flow for better match */
                return;
            }
        } else {
            /* Duplicate return node #19. Try simplifying control flow for better match */
        }
    } else {
        if (func_80147624(arg1) != 0) {
            temp_v0_2 = arg1->msgCtx.choiceIndex;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 == 1) {
                    func_8019F208();
                    func_80AB4F8C(arg0, 0xA, 2U, -5.0f);
                    func_80151938(arg1, 0x7D7U);
                    return;
                }
                /* Duplicate return node #19. Try simplifying control flow for better match */
                return;
            }
            func_8019F230();
            func_80AB50B0((EnMnk *) arg0, 7);
            func_80151938(arg1, 0x7D6U);
            arg0->unk_3E0 = 6;
            return;
        }
    default:
    }
}

void func_80AB6E08(EnMnk *arg0, GlobalContext *arg1) {
    s16 sp22;
    s16 temp_a0;
    s16 temp_v0_2;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0_2 = Math_FAtan2F(temp_v0->world.pos.z - arg0->actor.home.pos.z, temp_v0->world.pos.x - arg0->actor.home.pos.x);
    temp_a0 = temp_v0_2;
    arg0->actor.shape.rot.y = temp_v0_2;
    if ((arg0->unk_3E4 & 0x10) != 0) {
        arg0->actor.shape.rot.y += 0x8000;
    }
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    sp22 = temp_a0;
    arg0->actor.world.pos.x = (Math_SinS(temp_a0) * arg0->unk_3D8) + arg0->actor.home.pos.x;
    arg0->actor.world.pos.z = (Math_CosS(temp_a0) * arg0->unk_3D8) + arg0->actor.home.pos.z;
}

void func_80AB6EB0(EnMnk *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_a1;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    arg0->unk_3D8 -= 5.0f;
    func_80AB6E08(arg0, arg1);
    if (arg0->unk_3D8 < 4.0f) {
        func_80AB50B0(arg0, 0);
        arg0->actionFunc = func_80AB7204;
        arg0->unk_3E4 &= 0xFFEF;
        arg0->unk_3D8 = 0.0f;
    }
    func_80AB5B84((Actor *) arg0);
    temp_v0 = arg0->actor.params;
    temp_a1 = temp_v0 & 0x7F;
    if ((((s32) (temp_v0 & 0x780) >> 7) == 1) && (temp_a1 != 0x7F) && (Flags_GetSwitch(arg1, temp_a1) != 0)) {
        func_80AB50B0(arg0, 2);
        arg0->actionFunc = func_80AB6AF8;
    }
}

void func_80AB6F98(EnMnk *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_a1_2;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    func_80AB6E08(arg0, arg1);
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        if (((s32) (arg0->actor.params & 0x780) >> 7) == 3) {
            func_80AB50B0(arg0, 2);
        } else {
            func_80AB50B0(arg0, 5);
        }
        temp_a1 = arg0->actor.params & 0x7F;
        arg0->unk_3E0 = 6;
        arg0->actionFunc = (void (*)(EnMnk *, GlobalContext *)) func_80AB6BE4;
        if (temp_a1 != 0x7F) {
            Actor_SetSwitchFlag(arg1, temp_a1);
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    temp_v0 = arg0->actor.params;
    temp_a1_2 = temp_v0 & 0x7F;
    if ((((s32) (temp_v0 & 0x780) >> 7) == 1) && (temp_a1_2 != 0x7F) && (Flags_GetSwitch(arg1, temp_a1_2) != 0)) {
        func_80AB50B0(arg0, 2);
        arg0->actionFunc = func_80AB6AF8;
        return;
    }
    temp_f0 = arg0->actor.xzDistToPlayer;
    if (temp_f0 > 150.0f) {
        func_80AB50B0(arg0, 1);
        arg0->unk_3E4 |= 0x10;
        arg0->actionFunc = func_80AB6EB0;
        return;
    }
    if (temp_f0 < 100.0f) {
        func_800B8614((Actor *) arg0, arg1, 120.0f);
    }
}

void func_80AB7108(EnMnk *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_a1;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    arg0->unk_3D8 += 5.0f;
    func_80AB6E08(arg0, arg1);
    if (arg0->unk_3D8 > 84.0f) {
        if (((s32) (arg0->actor.params & 0x780) >> 7) == 3) {
            func_80AB50B0(arg0, 7);
        } else {
            func_80AB50B0(arg0, 2);
        }
        arg0->actionFunc = func_80AB6F98;
    }
    func_80AB5B84((Actor *) arg0);
    temp_v0 = arg0->actor.params;
    temp_a1 = temp_v0 & 0x7F;
    if ((((s32) (temp_v0 & 0x780) >> 7) == 1) && (temp_a1 != 0x7F) && (Flags_GetSwitch(arg1, temp_a1) != 0)) {
        func_80AB50B0(arg0, 2);
        arg0->actionFunc = func_80AB6AF8;
    }
}

void func_80AB7204(EnMnk *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_a1;

    func_80AB6E08(arg0, arg1);
    SkelAnime_FrameUpdateMatrix(&arg0->unk_148);
    if (arg0->actor.xzDistToPlayer < 200.0f) {
        func_80AB50B0(arg0, 1);
        arg0->actionFunc = func_80AB7108;
    }
    temp_v0 = arg0->actor.params;
    temp_a1 = temp_v0 & 0x7F;
    if ((((s32) (temp_v0 & 0x780) >> 7) == 1) && (temp_a1 != 0x7F) && (Flags_GetSwitch(arg1, temp_a1) != 0)) {
        func_80AB50B0(arg0, 2);
        arg0->actionFunc = func_80AB6AF8;
    }
}

void func_80AB72BC(EnMnk *arg0, ? arg1) {
    EnMnk *temp_a0_2;
    EnMnk *temp_a2;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x148;
    if ((arg0->actor.world.pos.y - arg0->actor.home.pos.y) < 40.0f) {
        arg0 = arg0;
        temp_a2 = arg0;
        if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
            temp_a0_2 = temp_a2;
            arg0 = temp_a2;
            func_80AB50B0(temp_a0_2, 0, (SaveContext *) temp_a2);
            arg0->actionFunc = func_80AB7204;
            if (((s32) (arg0->actor.params & 0x780) >> 7) == 1) {
                Audio_PlayActorSound2((Actor *) arg0, 0x28EFU);
            }
        }
    }
}

void func_80AB7354(void *arg0) {
    arg0->unk_3E4 = (u16) (arg0->unk_3E4 & 0xFFDF);
    arg0->unk_28 = (f32) (arg0->unk_C + 200.0f);
    arg0->unk_3E8 = func_80AB72BC;
    arg0->unk_68 = -10.0f;
    arg0->unk_78 = -10.0f;
    arg0->unk_4 = (s32) (arg0->unk_4 | 1);
    arg0->unk_13C = EnMnk_Draw;
    SkelAnime_ChangeAnim(arg0 + 0x148, &D_06008814, 1.0f, 10.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06008814), (u8) 2, 0.0f);
}

void func_80AB740C(EnMnk *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->actor.yawTowardsPlayer;
    arg0->actor.shape.rot.y = temp_v0;
    arg0->actor.world.rot.y = temp_v0;
    if (((arg0->actor.xzDistToPlayer < 200.0f) && ((gSaveContext.weekEventReg[12] & 8) != 0)) || ((gSaveContext.eventInf[2] & 0x40) != 0)) {
        gSaveContext.eventInf[2] |= 0x40;
        func_80AB7354();
    }
}

void func_80AB7488(EnMnk *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->actor.yawTowardsPlayer;
    arg0->actor.shape.rot.y = temp_v0;
    arg0->actor.world.rot.y = temp_v0;
    if ((arg0->actor.xzDistToPlayer < 200.0f) && (((gSaveContext.weekEventReg[18] & 1) != 0) || ((gSaveContext.weekEventReg[88] & 1) != 0)) && (arg1->curSpawn != 0)) {
        func_80AB7354();
    }
}

void func_80AB7504(Actor *arg0, GlobalContext *arg1) {
    u8 temp_t7;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if (func_80AB5CD8(arg0, 2U) != 0) {
        temp_t7 = arg0[2].child->unk_1;
        arg0[2].draw = (void (*)(Actor *, GlobalContext *)) temp_t7;
        if (temp_t7 == 0xFF) {
            Actor_SetSwitchFlag(arg1, arg0->params & 0x7F);
            Actor_MarkForDeath(arg0);
            return;
        }
        func_80AB50B0((EnMnk *) arg0, 0);
        arg0->unk_3E8 = func_80AB75A4;
        arg0->speedXZ = 0.0f;
        goto block_4;
    }
block_4:
    func_80AB5B84(arg0);
}

void func_80AB75A4(EnMnk *arg0, GlobalContext *arg1) {
    if ((arg0->actor.yDistToPlayer > -10.0f) && (arg0->actor.xzDistToPlayer < 160.0f)) {
        func_80AB5C74();
        arg0->unk_3C0 = 0;
        arg0->actionFunc = (void (*)(EnMnk *, GlobalContext *)) func_80AB7504;
        return;
    }
    func_80AB5F6C();
}

s32 func_80AB7620(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s16 temp_v0;
    s32 phi_v1;

    temp_f0 = arg0->xzDistToPlayer;
    if ((temp_f0 < 100.0f) && (temp_f0 > 20.0f)) {
        temp_v0 = arg0->yawTowardsPlayer;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((phi_v1 >= 0x4001) && (Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0)) {
            return 1;
        }
        goto block_7;
    }
block_7:
    return 0;
}

void func_80AB76B0(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s16 temp_v1_3;
    s8 temp_a0;
    u16 temp_v1;
    u8 temp_v1_2;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    sp24 = arg1 + 0x10000;
    temp_v1 = arg1->msgCtx.unk11F04;
    if ((s32) temp_v1 >= 0x1B5D) {
        if (temp_v1 != 0x1B66) {

        } else {
            goto block_12;
        }
    } else if ((s32) temp_v1 >= 0x8E3) {
        if (temp_v1 != 0x1B5C) {

        } else {
            func_80AB4E58(arg0, 3);
        }
    } else {
        switch (temp_v1) {
        case 2265:
            func_80AB4E58(arg0, 8);
            break;
        case 2268:
        case 2271:
            func_80AB4E58(arg0, 0);
            break;
        case 2269:
            func_80AB4E58(arg0, 4);
            arg0->unk_3E0 = 5;
            break;
        case 2270:
            func_80AB4E58(arg0, 8);
            break;
        case 2272:
block_12:
            func_80AB4E58(arg0, 5);
            break;
        case 2273:
            func_80AB4E58(arg0, 1);
            break;
        case 2274:
            func_80AB4E58(arg0, 0);
            arg0->unk_3E0 = 0;
            break;
        }
    }
    if ((func_80152498(arg1 + 0x4908) == 4) && ((arg0[3].home.rot.z & 0x4000) == 0) && (func_80147624(arg1) != 0)) {
        temp_v1_2 = sp24->unk_6929;
        if (temp_v1_2 != 0) {
            if (temp_v1_2 == 1) {
                arg0->unk_3BC = 5;
                arg0->cutscene = (s8) arg0->unk_3BA;
                gSaveContext.weekEventReg[9] |= 0x80;
                arg0[3].home.rot.z |= 0x2000;
                func_8019F208();
            }
        } else {
            func_8019F230();
            arg0->unk_3BC = 4;
            arg0->cutscene = (s8) arg0->unk_3B8;
        }
        arg0[3].home.rot.z |= 0x4000;
    }
    temp_a0 = arg0->cutscene;
    if (temp_a0 != -1) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            arg0[3].home.rot.z &= 0xBFFF;
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
            temp_v1_3 = arg0->unk_3BC;
            if (temp_v1_3 != 2) {
                if (temp_v1_3 != 4) {
                    if (temp_v1_3 != 5) {
                        arg0->cutscene = -1;
                        return;
                    }
                    arg0->unk_3BC = 6;
                    goto block_31;
                }
                arg0->unk_3BC = 3;
                goto block_31;
            }
            arg0->unk_3BC = 3;
block_31:
            arg0->cutscene = (s8) (arg0 + (arg0->unk_3BC * 2))->unk_3B0;
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        /* Duplicate return node #36. Try simplifying control flow for better match */
    }
}

void func_80AB794C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s8 temp_a0_2;
    u16 temp_t6;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_t6 = arg1->msgCtx.unk11F04;
        switch (temp_t6) {
        case 2260:
        case 2266:
        case 2267:
            func_801477B4(arg1);
            arg0->unk_3E8 = func_80AB7E50;
            arg1->msgCtx.unk1202A = 4;
            func_80AB4E34(arg0, 7);
            temp_a0 = arg0->unk_3BC;
            if (temp_a0 != -1) {
                ActorCutscene_Stop(temp_a0);
                arg0->unk_3BC = -1;
                arg0->cutscene = (s8) arg0->unk_3B0;
                return;
            }
            goto block_8;
        case 2261:
            func_80151938(arg1, 0x8DAU);
            func_80AB4E34(arg0, 8);
            goto block_8;
        case 2262:
            func_80151938(arg1, 0x8DBU);
            func_80AB4E34(arg0, 8);
            goto block_8;
        }
    } else {
    default:
block_8:
        temp_a0_2 = arg0->cutscene;
        if (temp_a0_2 != -1) {
            if (ActorCutscene_GetCanPlayNext((s16) temp_a0_2) != 0) {
                ActorCutscene_Start((s16) arg0->cutscene, arg0);
                arg0->unk_3BC = (s16) arg0->cutscene;
                if (arg0->cutscene == arg0->unk_3B0) {
                    arg0->cutscene = (s8) arg0->unk_3B2;
                    return;
                }
                arg0->cutscene = -1;
                return;
            }
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
            /* Duplicate return node #14. Try simplifying control flow for better match */
        }
    }
}

void func_80AB7AC8(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if (func_800B867C(arg0, arg1) != 0) {
        arg0->unk_3E8 = func_80AB7DCC;
    }
}

void func_80AB7B20(Actor *arg0, GlobalContext *arg1) {
    s32 sp20;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a2;
    MessageContext *temp_a0;
    s32 temp_v1;
    u16 temp_t8;
    u8 temp_v0;

    arg1 = arg1;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    temp_v1 = arg1 + 0x10000;
    temp_a0 = arg1 + 0x4908;
    if (arg1->msgCtx.unk11F04 == 0x8CD) {
        if (arg0->unk_160 <= 17.0f) {
            arg0->unk_3E0 = 0;
        } else {
            arg0->unk_3E0 = 2;
        }
    }
    sp20 = temp_v1;
    arg1 = arg1;
    if ((func_80152498(temp_a0) == 5) && (temp_a0_2 = arg1, sp20 = temp_v1, arg1 = arg1, temp_a2 = arg1, (func_80147624(temp_a0_2) != 0))) {
        temp_t8 = arg1->msgCtx.unk11F04;
        switch (temp_t8) {
        case 2250:
            arg1 = temp_a2;
            func_80AB4E34(arg0, 6, temp_a2);
            if (arg1->curSpawn != 1) {
                func_80151938(arg1, 0x8CBU);
                gSaveContext.weekEventReg[88] |= 1;
                return;
            }
            func_80151938(arg1, 0x8EBU);
            arg0[3].home.rot.z = (u16) arg0[3].home.rot.z | 0x1000;
            return;
        case 2251:
        case 2283:
        case 2284:
            func_801477B4(temp_a2);
            arg0->unk_3E8 = func_80AB81D8;
            arg0->unk_3D0 = 4;
            func_80AB4D10((EnMnk *) arg0, 0, 2U, -5.0f);
            return;
        case 2252:
            arg1 = temp_a2;
            func_80AB4E34(arg0, 2, temp_a2);
            arg0->unk_3E0 = 2;
            func_80151938(arg1, 0x8CDU);
            return;
        case 2253:
            arg1 = temp_a2;
            func_80AB4E34(arg0, 6, temp_a2);
            func_80151938(arg1, 0x8CEU);
            return;
        case 2254:
            arg1 = temp_a2;
            func_80AB4E34(arg0, 1, temp_a2);
            func_80151938(arg1, 0x8CFU);
            return;
        case 2255:
        case 2256:
        case 2257:
            func_801477B4(temp_a2);
            arg0->unk_3E8 = func_80AB80BC;
            func_80AB4E34(arg0, 1);
            return;
        case 2259:
            temp_v0 = gSaveContext.playerForm;
            if ((temp_v0 == 0) || (temp_v0 == 4)) {
                func_801477B4(temp_a2);
                arg0->unk_3E8 = func_80AB7E50;
                func_80AB4E34(arg0, 7);
                return;
            }
            arg1 = temp_a2;
            func_80AB4E34(arg0, 8, temp_a2);
            func_80151938(arg1, 0x8D7U);
            return;
        case 2258:
        case 2263:
            func_801477B4(temp_a2);
            arg0->unk_3E8 = func_80AB7E50;
            func_80AB4E34(arg0, 7);
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_80AB7DCC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk_3E8 = func_80AB7AC8;
        arg0->unk_3E0 = 0;
        return;
    }
    if (func_80AB7620(arg0, arg1) != 0) {
        arg0->textId = 0x8E2;
        func_800B8614(arg0, arg1, 120.0f);
    }
}

void func_80AB7E50(Actor *arg0, GlobalContext *arg1) {
    u8 temp_t6;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if (func_800B8718(arg0, arg1) != 0) {
        temp_t6 = gSaveContext.playerForm;
        switch (temp_t6) {
        case 0:
        case 4:
            arg0->textId = 0x8D4;
            func_80AB4E34(arg0, 6);
block_8:
            arg0->unk_3E8 = func_80AB794C;
            arg0->cutscene = (s8) arg0->unk_3B0;
            func_801518B0(arg1, arg0->textId, NULL);
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
            return;
        case 1:
            arg0->textId = 0x8D5;
            func_80AB4E34(arg0, 6);
            goto block_8;
        case 2:
            arg0->textId = 0x8D6;
            func_80AB4E34(arg0, 6);
            goto block_8;
        case 3:
            arg0->textId = 0x8D8;
            func_80AB4E34(arg0, 1);
            arg0->unk_3E8 = func_80AB76B0;
            arg0->unk_3BC = 2;
            gSaveContext.eventInf[2] |= 0x10;
            arg0->cutscene = (s8) arg0->unk_3B4;
            arg1->msgCtx.unk1202A = 4;
            ActorCutscene_SetIntentToPlay(arg0->unk_3B4);
            return;
        default:
            arg0->textId = 0x8D4;
            func_80AB4E34(arg0, 6);
            goto block_8;
        }
    } else {
        if (func_800B84D0(arg0, arg1) != 0) {
            arg0->unk_3E8 = func_80AB7B20;
            func_80AB4E34(arg0, 0);
            return;
        }
        if (func_80AB7620(arg0, arg1) != 0) {
            arg0->textId = 0x8D3;
            func_800B8614(arg0, arg1, 100.0f);
            func_800B874C(arg0, arg1, 0x42C80000, 0x42C80000);
        }
    }
}

void func_80AB8040(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk_3E8 = func_80AB7B20;
        arg0->flags &= 0xFFFEFFFF;
        return;
    }
    func_800B8614(arg0, arg1, 150.0f);
}

void func_80AB80BC(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v0 = gSaveContext.playerForm;
        if ((temp_v0 == 0) || (temp_v0 == 4)) {
            func_80AB4E34(arg0, 2);
            arg0->unk_3E0 = 5;
        } else {
            func_80AB4E34(arg0, 8);
        }
        arg0->unk_3E8 = func_80AB7B20;
        return;
    }
    if ((arg0->unk_331 & 2) != 0) {
        arg0->unk_3E8 = func_80AB8040;
        arg0->textId = 0x8D2;
        func_80AB4E34(arg0, 6);
        arg0->flags |= 0x10000;
        return;
    }
    if (func_80AB7620(arg0, arg1) != 0) {
        temp_v0_2 = gSaveContext.playerForm;
        if ((temp_v0_2 != 0) && (temp_v0_2 != 4)) {
            arg0->textId = 0x8D1;
        } else {
            arg0->textId = 0x8D0;
        }
        func_800B8614(arg0, arg1, 100.0f);
    }
}

void func_80AB81D8(EnMnk *arg0, GlobalContext *arg1) {
    SkelAnime *sp28;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    s16 temp_v0;

    temp_a0 = arg0 + 0x148;
    sp28 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a0_2 = arg0 + 0x2A0;
    sp24 = temp_a0_2;
    if (SkelAnime_FrameUpdateMatrix(temp_a0_2) != 0) {
        arg0->unk_3D0 += -1;
        temp_v0 = arg0->unk_3D0;
        if ((s32) temp_v0 < 0) {
            arg0->unk_3D0 = 4;
            func_80AB4D10(arg0, 0, 2U, -5.0f);
        } else if (temp_v0 == 0) {
            func_80AB4D10(arg0, 6, 2U, -5.0f);
        } else {
            func_80AB4D10(arg0, 0, 2U, 0.0f);
            SkelAnime_FrameUpdateMatrix(sp28);
            SkelAnime_FrameUpdateMatrix(sp24);
        }
    }
    if (func_800B8718((Actor *) arg0, arg1) != 0) {
        arg0->actor.textId = 0x8D8;
        func_80AB4E34((Actor *) arg0, 1);
        arg0->actionFunc = (void (*)(EnMnk *, GlobalContext *)) func_80AB76B0;
        arg0->unk_3BC = 2;
        gSaveContext.eventInf[2] |= 0x10;
        arg0->actor.cutscene = (s8) arg0->unk_3B4;
        arg1->msgCtx.unk1202A = 4;
        ActorCutscene_SetIntentToPlay(arg0->unk_3B4);
        return;
    }
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        if (gSaveContext.playerForm == 3) {
            if (arg0->actor.textId == 0x8EC) {
                func_80AB4E34((Actor *) arg0, 6);
            } else {
                func_80AB4E34((Actor *) arg0, 0);
            }
        } else {
            func_80AB4E34((Actor *) arg0, 1);
        }
        arg0->actionFunc = (void (*)(EnMnk *, GlobalContext *)) func_80AB7B20;
        return;
    }
    if (func_80AB7620((Actor *) arg0, arg1) != 0) {
        if (gSaveContext.playerForm == 3) {
            if ((arg0->unk_3E4 & 0x1000) != 0) {
                arg0->actor.textId = 0x8EC;
            } else {
                arg0->actor.textId = 0x8CA;
            }
            func_800B874C((Actor *) arg0, arg1, 0x42C80000, 0x42C80000);
        } else {
            arg0->actor.textId = 0x8CC;
        }
        func_800B8614((Actor *) arg0, arg1, 120.0f);
        return;
    }
    if ((arg1->curSpawn != 1) && (arg0->actor.xzDistToPlayer < 140.0f) && (Actor_IsLinkFacingActor((Actor *) arg0, 0x3000, arg1) != 0)) {
        arg0->actor.textId = 0x8CA;
        func_800B8614((Actor *) arg0, arg1, 140.0f);
    }
}

void func_80AB8478(void *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg0->unk_3E4;
        if ((temp_v0 & 0x800) != 0) {
            arg0->unk_3E4 = (u16) (temp_v0 & 0xF7FF);
            ActorCutscene_Stop((s16) arg0->unk_38);
        }
        func_801477B4(arg1);
        arg0->unk_3E8 = func_80AB8878;
        func_800B7298(arg1, NULL, 6U);
        gSaveContext.weekEventReg[83] &= 0xF7;
    }
}

void func_80AB852C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    s32 temp_v0;

    temp_a0 = arg0 + 0x148;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    temp_v0 = arg0[2].overlayEntry;
    if (temp_v0 > 0) {
        arg0->unk_3D0 = (s16) (arg0->unk_3D0 - 0x320);
        arg0[2].overlayEntry = temp_v0 - 1;
        arg0[3].home.pos.y -= 0.01f;
        return;
    }
    arg0[2].overlayEntry = 0xF0;
    arg0->unk_3E8 = func_80AB8478;
    func_80AB4F68(arg0, 0, arg0);
    func_80151938(arg1, 0x8EAU);
}

void func_80AB85C8(Actor *arg0, ? arg1) {
    s32 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    temp_v0 = arg0[2].overlayEntry;
    if (temp_v0 > 0) {
        arg0[2].overlayEntry = temp_v0 - 1;
        return;
    }
    arg0[2].overlayEntry = 0x3C;
    arg0->unk_3E8 = func_80AB852C;
    func_80AB4E88(arg0, 1, 2U, -5.0f);
    arg0->unk_3E0 = 3;
}

void func_80AB8644(Actor *arg0, GlobalContext *arg1) {
    f32 sp28;
    ? sp24;

    Math_Vec3f_Copy((Vec3f *) &sp24, arg0 + 0x3C);
    sp28 += 20.0f;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) &sp24, &D_80AB9DF4, &D_80AB9DF8, (s16) 0, (s16) 0x12C);
}

void func_80AB86AC(Actor *arg0, GlobalContext *arg1) {
    s32 temp_t8;
    s32 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    temp_v0 = arg0[2].overlayEntry;
    if (temp_v0 > 0) {
        arg0->unk_3D0 = (s16) (arg0->unk_3D0 + 0x320);
        temp_t8 = temp_v0 - 1;
        arg0[2].overlayEntry = temp_t8;
        arg0[3].home.pos.y += 0.01f;
        if (temp_t8 == 0xA) {
            Audio_PlayActorSound2(arg0, 0x2817U);
            func_80AB8644(arg0, arg1);
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    arg0[2].overlayEntry = (ActorOverlay *)0x14;
    arg0->unk_3E8 = func_80AB85C8;
}

void func_80AB8750(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1->msgCtx.unk11F04;
        if (temp_v0 != 0x8E8) {
            if (temp_v0 != 0x8E9) {

            } else {
                arg0->unk_3E8 = func_80AB86AC;
                func_801477B4(arg1);
                func_800B7298(arg1, arg0, 7U);
                arg0[2].overlayEntry = (ActorOverlay *)0x3C;
            }
        } else {
            func_80151938(arg1, 0x8E9U);
        }
    }
    if (((u16) arg0[3].home.rot.z & 0x800) == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
            arg0[3].home.rot.z = (u16) arg0[3].home.rot.z | 0x800;
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_80AB8878(Actor *arg0, GlobalContext *arg1) {
    ActorOverlay *temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk_3E8 = func_80AB8750;
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        gSaveContext.weekEventReg[83] |= 8;
        func_80AB4F68(arg0, 2);
        arg0->unk_3E0 = 5;
        return;
    }
    temp_v0 = arg0[2].overlayEntry;
    if ((s32) temp_v0 > 0) {
        arg0[2].overlayEntry = temp_v0 - 1;
        if ((arg0->isTargeted != 0) && (arg0->cutscene != -1)) {
            func_800B8614(arg0, arg1, 1000.0f);
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    arg0[2].overlayEntry = (ActorOverlay *)0xF0;
    arg0->unk_3E8 = func_80AB8B18;
    func_80AB4F68(arg0, 2);
    arg0->unk_3E0 = 5;
}

void func_80AB8968(Actor *arg0, ? arg1) {
    SkelAnime *temp_a0;
    s32 temp_v0;

    temp_a0 = arg0 + 0x148;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    temp_v0 = arg0[2].overlayEntry;
    if (temp_v0 > 0) {
        arg0->unk_3D0 = (s16) (arg0->unk_3D0 - 0x320);
        arg0[2].overlayEntry = temp_v0 - 1;
        arg0[3].home.pos.y -= 0.01f;
        return;
    }
    arg0[2].overlayEntry = 0xF0;
    arg0->unk_3E8 = func_80AB8878;
    func_80AB4F68(arg0, 0, arg0);
}

void func_80AB89F8(Actor *arg0, ? arg1) {
    s32 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    temp_v0 = arg0[2].overlayEntry;
    if (temp_v0 > 0) {
        arg0[2].overlayEntry = temp_v0 - 1;
        return;
    }
    arg0[2].overlayEntry = 0x3C;
    arg0->unk_3E8 = func_80AB8968;
    func_80AB4E88(arg0, 1, 2U, -5.0f);
    arg0->unk_3E0 = 3;
}

void func_80AB8A74(Actor *arg0, GlobalContext *arg1) {
    s32 temp_t8;
    s32 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    temp_v0 = arg0[2].overlayEntry;
    if (temp_v0 > 0) {
        arg0->unk_3D0 = (s16) (arg0->unk_3D0 + 0x320);
        temp_t8 = temp_v0 - 1;
        arg0[2].overlayEntry = temp_t8;
        arg0[3].home.pos.y += 0.01f;
        if (temp_t8 == 0xA) {
            Audio_PlayActorSound2(arg0, 0x2817U);
            func_80AB8644(arg0, arg1);
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    arg0[2].overlayEntry = (ActorOverlay *)0x14;
    arg0->unk_3E8 = func_80AB89F8;
}

void func_80AB8B18(Actor *arg0, GlobalContext *arg1) {
    ActorOverlay *temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x2A0);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk_3E8 = func_80AB8750;
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        gSaveContext.weekEventReg[83] |= 8;
        return;
    }
    temp_v0 = arg0[2].overlayEntry;
    if ((s32) temp_v0 > 0) {
        arg0[2].overlayEntry = temp_v0 - 1;
        if (arg0->isTargeted != 0) {
            func_800B8614(arg0, arg1, 1000.0f);
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    arg0[2].overlayEntry = (ActorOverlay *)0x3C;
    arg0->unk_3E8 = func_80AB8A74;
}

void func_80AB8BD4(Actor *arg0, void *arg1) {
    SkelAnime *temp_a0;
    u8 temp_v0;

    temp_a0 = arg0 + 0x148;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_80AB5CD8(arg0, 0U) != 0) {
        temp_v0 = arg0[2].child->unk_1;
        arg0[2].draw = (void (*)(Actor *, GlobalContext *)) temp_v0;
        if (temp_v0 == 0xFF) {
            Actor_MarkForDeath(arg0);
            return;
        }
        arg0[2].update = NULL;
        arg0[2].child = arg1->unk_18864 + (temp_v0 * 8);
        goto block_4;
    }
block_4:
    func_80AB5B84(arg0);
}

void func_80AB8C60(Actor *arg0, GlobalContext *arg1) {
    Math_SmoothStepToS(arg0 + 0x32, arg0->yawTowardsPlayer, 2, 0xBB8, (s16) 0xC8);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->world.rot.y, 2, 0xBB8, (s16) 0xC8);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if (func_800B867C(arg0, arg1) != 0) {
        func_80AB5C74((EnMnk *) arg0, arg1);
        arg0->unk_3E8 = func_80AB8BD4;
        arg0[3].home.rot.z = (u16) arg0[3].home.rot.z | 0x8000;
    }
}

void func_80AB8CFC(EnMnk *arg0) {
    u32 temp_t7;

    temp_t7 = (u32) Rand_ZeroFloat(6.0f);
    switch (temp_t7) {
    case 0:
        func_80AB50B0(arg0, 3);
        break;
    case 1:
        func_80AB50B0(arg0, 4);
        break;
    case 2:
        func_80AB50B0(arg0, 5);
        break;
    case 3:
        func_80AB50B0(arg0, 6);
        break;
    case 4:
        func_80AB50B0(arg0, 2);
        break;
    default:
        func_80AB50B0(arg0, 7);
        break;
    }
    arg0->actionFunc = (void (*)(EnMnk *, GlobalContext *)) func_80AB8C60;
}

void func_80AB8E4C(EnMnk *arg0, GlobalContext *arg1) {
    func_80AB5F6C((Actor *) arg0);
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        func_80AB8CFC(arg0);
    } else if ((arg0->actor.isTargeted != 0) || (arg0->actor.xzDistToPlayer < 100.0f)) {
        func_800B8614((Actor *) arg0, arg1, 120.0f);
    }
    if ((gSaveContext.weekEventReg[12] & 8) != 0) {
        Actor_MarkForDeath((Actor *) arg0);
    }
}

void func_80AB8EF4(EnMnk *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1->msgCtx.unk11F04;
        if (temp_v0 != 0x8E5) {
            if (temp_v0 != 0x8E6) {
                if (temp_v0 != 0x8E7) {
                    return;
                }
                func_801477B4(arg1);
                arg0->actionFunc = func_80AB8FD8;
                func_80AB50B0(arg0, 0);
                /* Duplicate return node #9. Try simplifying control flow for better match */
                return;
            }
            func_80151938(arg1, 0x8E7U);
            func_80AB50B0(arg0, 5);
            return;
        }
        func_80151938(arg1, 0x8E6U);
        func_80AB50B0(arg0, 3);
    }
}

void func_80AB8FD8(EnMnk *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->actor.yawTowardsPlayer;
    arg0->actor.shape.rot.y = temp_v0;
    arg0->actor.world.rot.y = temp_v0;
    SkelAnime_FrameUpdateMatrix(&arg0->unk_148);
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        arg0->actionFunc = func_80AB8EF4;
        func_80AB50B0(arg0, 7);
        return;
    }
    if ((arg0->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor((Actor *) arg0, 0x3000, arg1) != 0)) {
        func_800B8614((Actor *) arg0, arg1, 110.0f);
    }
}

void func_80AB9084(EnMnk *arg0, GlobalContext *arg1) {
    u16 sp2E;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;

    temp_a0 = &arg0->unk_148;
    sp2E = 0;
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = arg0->unk_3D0;
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 != 4) {

                } else {
                    func_80AB50B0(arg0, 0);
                }
            } else {
                func_80AB50B0(arg0, 0);
            }
        } else {
            func_80AB50B0(arg0, 0xD);
        }
        SkelAnime_FrameUpdateMatrix(sp24);
        gSaveContext.weekEventReg[29] |= 0x80;
    }
    if (func_800EE29C(arg1, 0x6AU) != 0) {
        func_800EDF24((Actor *) arg0, arg1, func_800EE200(arg1, 0x6AU));
        sp2E = arg1->csCtx.npcActions[func_800EE200(arg1, 0x6AU)]->unk0;
    }
    if (((s16) sp2E == 0) && (arg0->unk_3BE != 0)) {
        func_80AB50B0(arg0, 0);
    } else if ((s16) sp2E != arg0->unk_3D0) {
        if ((s16) sp2E != 1) {
            if ((s16) sp2E != 2) {
                if ((s16) sp2E != 3) {
                    if ((s16) sp2E != 4) {

                    } else {
                        func_80AB4F8C((Actor *) arg0, 0xE, 2U, -5.0f);
                    }
                } else {
                    func_80AB4F8C((Actor *) arg0, 0xB, 2U, 0.0f);
                }
            } else {
                func_80AB4F8C((Actor *) arg0, 0xC, 2U, 0.0f);
                arg0->unk_3E0 = 6;
            }
        } else {
            func_80AB4F8C((Actor *) arg0, 0, 0U, 0.0f);
        }
        arg0->unk_3D0 = (s16) sp2E;
    }
    if (arg0->unk_3BE == 0xB) {
        temp_f0 = arg0->unk_148.animCurrentFrame;
        if ((temp_f0 >= 8.0f) && (temp_f0 < 14.0f)) {
            arg0->unk_3E0 = 2;
        } else {
            arg0->unk_3E0 = 0;
        }
        if (func_801378B8(sp24, 8.0f) != 0) {
            Audio_PlayActorSound2((Actor *) arg0, 0x2965U);
        }
    }
}

void func_80AB92CC(EnMnk *arg0, GlobalContext *arg1) {
    u16 sp2E;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;

    temp_a0 = &arg0->unk_148;
    sp2E = 0;
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = arg0->unk_3D0;
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 != 4) {

                } else {
                    func_80AB50B0(arg0, 0);
                }
            } else {
                func_80AB50B0(arg0, 0);
            }
        } else {
            func_80AB50B0(arg0, 0xD);
        }
        SkelAnime_FrameUpdateMatrix(sp24);
    }
    if (func_800EE29C(arg1, 0x6AU) != 0) {
        func_800EDF24((Actor *) arg0, arg1, func_800EE200(arg1, 0x6AU));
        sp2E = arg1->csCtx.npcActions[func_800EE200(arg1, 0x6AU)]->unk0;
    }
    if (((s16) sp2E == 0) && (arg0->unk_3BE != 0)) {
        func_80AB50B0(arg0, 0);
    } else if ((s16) sp2E != arg0->unk_3D0) {
        if ((s16) sp2E != 1) {
            if ((s16) sp2E != 2) {
                if ((s16) sp2E != 3) {
                    if ((s16) sp2E != 4) {

                    } else {
                        func_80AB4F8C((Actor *) arg0, 0xE, 2U, -5.0f);
                    }
                } else {
                    func_80AB4F8C((Actor *) arg0, 0xB, 2U, 0.0f);
                }
            } else {
                func_80AB4F8C((Actor *) arg0, 0xC, 2U, 0.0f);
                arg0->unk_3E0 = 6;
            }
        } else {
            func_80AB4F8C((Actor *) arg0, 0, 0U, 0.0f);
        }
        arg0->unk_3D0 = (s16) sp2E;
    }
    if (arg0->unk_3BE == 0xB) {
        temp_f0 = arg0->unk_148.animCurrentFrame;
        if ((temp_f0 >= 8.0f) && (temp_f0 < 14.0f)) {
            arg0->unk_3E0 = 2;
            return;
        }
        arg0->unk_3E0 = 0;
        /* Duplicate return node #30. Try simplifying control flow for better match */
    }
}

void func_80AB94E4(EnMnk *arg0, GlobalContext *arg1) {

}

void EnMnk_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v1_2;
    s8 temp_a0;
    u16 temp_v1;
    u16 temp_v1_3;
    s16 phi_v0;
    s16 phi_v1;
    EnMnk *this = (EnMnk *) thisx;

    if ((this->unk_3E4 & 1) == 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
    if ((this->unk_3E4 & 2) == 0) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 25.0f, 0.0f, 4U);
        if ((this->actor.bgCheckFlags & 1) != 0) {
            this->unk_3E4 |= 0x40;
        }
    }
    this->actionFunc(this, globalCtx);
    temp_v1 = this->unk_3E4;
    if ((temp_v1 & 0x20) == 0) {
        if ((temp_v1 & 8) == 0) {
            Collider_UpdateCylinder((Actor *) this, (ColliderCylinder *) &this->unk_320);
        }
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_320);
    }
    if ((this->unk_3E4 & 0x200) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_320);
    }
    temp_v1_2 = this->unk_3DE;
    if (temp_v1_2 == 0) {
        phi_v0 = 0;
    } else {
        this->unk_3DE = temp_v1_2 - 1;
        phi_v0 = this->unk_3DE;
    }
    phi_v1 = this->unk_3DE;
    if (phi_v0 == 0) {
        this->unk_3DE = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk_3DE;
    }
    this->unk_3DC = phi_v1;
    if ((s32) this->unk_3DC >= 3) {
        this->unk_3DC = 0;
    }
    temp_v1_3 = this->unk_3E4;
    if ((temp_v1_3 & 0x80) != 0) {
        temp_a0 = this->actor.cutscene;
        if (temp_a0 == -1) {
            this->unk_3E4 = temp_v1_3 & 0xFF7F;
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
            this->actor.cutscene = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        /* Duplicate return node #24. Try simplifying control flow for better match */
    }
}

s32 func_80AB96A0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 3) {
        arg4->x += arg5[3].id;
        arg4->z += arg5->unk_3CE;
    }
    return 0;
}

s32 func_80AB96E8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    if (arg1 == 1) {
        *arg2 = NULL;
    }
    return 0;
}

s32 func_80AB9708(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    if ((arg1 == 1) || (arg1 == 2) || (arg1 == 3)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80AB973C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 4) {
        SysMatrix_MultiplyVector3fByState(&D_80AB9DFC, arg4 + 0x3C);
    }
}

void func_80AB977C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 4) {
        SysMatrix_CopyCurrentState(arg4 + 0x36C);
    }
}

void func_80AB97B4(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp40;
    Gfx *sp38;
    GraphicsContext *sp30;
    Gfx *sp28;
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a1;
    GraphicsContext *temp_a1_2;

    if (arg1 != 1) {
        if (arg1 != 2) {
            if (arg1 != 3) {
                return;
            }
            if (*arg2 != 0) {
                temp_a1 = *arg0;
                sp20 = temp_a1;
                Matrix_Scale(1.0f, 1.0f / (arg4[3].home.pos.y + 1.0f), 1.0f, 1);
                temp_v0 = temp_a1->polyOpa.p;
                temp_a1->polyOpa.p = temp_v0 + 8;
                temp_v0->words.w0 = 0xDA380003;
                sp20 = temp_a1;
                sp18 = temp_v0;
                sp18->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_2 = temp_a1->polyOpa.p;
                temp_a1->polyOpa.p = &temp_v0_2[1];
                temp_v0_2->words.w0 = 0xDE000000;
                temp_v0_2->words.w1 = *arg2;
            }
            SysMatrix_CopyCurrentState(arg4 + 0x36C);
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        if (*arg2 != 0) {
            temp_a1_2 = *arg0;
            sp30 = temp_a1_2;
            Matrix_Scale(arg4[3].home.pos.y + 1.0f, 1.0f, 1.0f, 1);
            temp_v0_3 = temp_a1_2->polyOpa.p;
            temp_a1_2->polyOpa.p = &temp_v0_3[1];
            temp_v0_3->words.w0 = 0xDA380003;
            sp30 = temp_a1_2;
            sp28 = temp_v0_3;
            sp28->words.w1 = Matrix_NewMtx(*arg0);
            temp_v0_4 = temp_a1_2->polyOpa.p;
            temp_a1_2->polyOpa.p = &temp_v0_4[1];
            temp_v0_4->words.w0 = 0xDE000000;
            temp_v0_4->words.w1 = *arg2;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if (*arg2 != 0) {
        sp40 = *arg0;
        SysMatrix_StatePush();
        SysMatrix_InsertZRotation_s(arg4->unk_3D0, 1);
        temp_v0_5 = sp40->polyOpa.p;
        sp40->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDA380003;
        sp38 = temp_v0_5;
        sp38->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_6 = sp40->polyOpa.p;
        sp40->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = *arg2;
        SysMatrix_StatePop();
    }
}

void func_80AB99D4(EnMnk *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp30;
    Gfx *sp28;
    Gfx *sp24;
    Gfx *sp20;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    s32 temp_t6;

    temp_a0 = *arg1;
    arg0 = arg0;
    sp30 = temp_a0;
    func_8012C5B0(temp_a0);
    temp_t6 = arg0->unk_3E0;
    switch (temp_t6) {
    case 4:
    case 5:
    case 6:
        if (arg0->unk_3DC != 2) {
            temp_v0 = sp30->polyOpa.p;
            sp30->polyOpa.p = &temp_v0[1];
            temp_v0->words.w0 = 0xDB060020;
            sp28 = temp_v0;
            sp28->words.w1 = Lib_SegmentedToVirtual(*(&D_80AB9E08 + (arg0->unk_3E0 * 4)));
            return;
        }
        temp_v0_2 = sp30->polyOpa.p;
        sp30->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDB060020;
        sp24 = temp_v0_2;
        sp24->words.w1 = Lib_SegmentedToVirtual(*(&D_80AB9E08 + (arg0->unk_3DC * 4)));
        return;
    case 2:
    case 3:
        temp_v0_3 = sp30->polyOpa.p;
        sp30->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDB060020;
        sp20 = temp_v0_3;
        sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80AB9E08 + (arg0->unk_3E0 * 4)));
        return;
    default:
        temp_v0_4 = sp30->polyOpa.p;
        sp30->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDB060020;
        sp1C = temp_v0_4;
        sp1C->words.w1 = Lib_SegmentedToVirtual(*(&D_80AB9E08 + (arg0->unk_3DC * 4)));
        return;
    }
}

void EnMnk_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMnk *this = (EnMnk *) thisx;
    func_80AB99D4(this, (GraphicsContext **) globalCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_148.skeleton, this->unk_148.limbDrawTbl, (s32) this->unk_148.dListCount, func_80AB96A0, func_80AB973C, (Actor *) this);
}

void func_80AB9BAC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_DrawSV(arg1, arg0->unk_2A4, arg0->unk_2C0, (s32) arg0[2].home.unk_12, func_80AB96E8, func_80AB977C, arg0);
    func_80AB99D4((EnMnk *) arg0, (GraphicsContext **) arg1);
    SysMatrix_InsertMatrix((MtxF *) &arg0[2].shape.feetPos[1].y, 0);
    SkelAnime_DrawSV(arg1, (bitwise void **) arg0[1].home.pos.x, (bitwise Vec3s *) arg0[1].world.pos.x, (s32) arg0->unk_14A, func_80AB96A0, func_80AB973C, arg0);
}

void func_80AB9C4C(Actor *this, GlobalContext *globalCtx) {
    SkelAnime_DrawSV(globalCtx, this->unk_2A4, this->unk_2C0, (s32) this[2].home.unk_12, func_80AB9708, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80AB97B4, this);
    func_80AB99D4((EnMnk *) this, (GraphicsContext **) globalCtx);
    SysMatrix_InsertMatrix((MtxF *) &this[2].shape.feetPos[1].y, 0);
    SkelAnime_DrawSV(globalCtx, (bitwise void **) this[1].home.pos.x, (bitwise Vec3s *) this[1].world.pos.x, (s32) this->unk_14A, func_80AB96A0, func_80AB973C, this);
}
