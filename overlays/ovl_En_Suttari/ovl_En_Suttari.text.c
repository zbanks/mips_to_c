struct _mips2c_stack_EnSuttari_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSuttari_Draw {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0x8];                     /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad5C[0x14];
};                                                  /* size = 0x70 */

struct _mips2c_stack_EnSuttari_GetActorById {};     /* size 0x0 */

struct _mips2c_stack_EnSuttari_GetPaths {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSuttari_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSuttari_OverrideLimbDraw {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSuttari_PostLimbDraw {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ MtxF *sp44;                          /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnSuttari_SetNextEntrance {};  /* size 0x0 */

struct _mips2c_stack_EnSuttari_UnkDraw {};          /* size 0x0 */

struct _mips2c_stack_EnSuttari_Update {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSuttari_UpdateCollider {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Collider *sp28;                      /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSuttari_UpdateTime {};       /* size 0x0 */

struct _mips2c_stack_func_80BAA904 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BAA9B4 {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAAA94 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BAAB78 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAAF1C {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAAFDC {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0xC];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad54[0x8];
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BAB1A0 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0xC];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad54[0x8];
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BAB374 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BAB434 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BAB4F0 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BAB698 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BAB758 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];                     /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BAB8F4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];                     /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BABA90 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ u8 *sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BABB90 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ u8 *sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BABC48 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x3];
    /* 0x23 */ s8 sp23;                             /* inferred */
    /* 0x24 */ char pad24[0x2];                     /* maybe part of sp23[3]? */
    /* 0x26 */ u16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BABDD8 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0xC];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0xC];
    /* 0x44 */ u16 sp44;                            /* inferred */
    /* 0x46 */ char pad46[0x1];
    /* 0x47 */ u8 sp47;                             /* inferred */
    /* 0x48 */ Actor *sp48;                         /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BABF64 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BABFD4 {
    /* 0x000 */ char pad0[0x40];
    /* 0x040 */ s32 *sp40;                          /* inferred */
    /* 0x044 */ s32 *sp44;                          /* inferred */
    /* 0x048 */ void *sp48;                         /* inferred */
    /* 0x04C */ char pad4C[0x4];
    /* 0x050 */ s32 sp50;                           /* inferred */
    /* 0x054 */ s32 sp54;                           /* inferred */
    /* 0x058 */ f32 sp58;                           /* inferred */
    /* 0x05C */ f32 sp5C;                           /* inferred */
    /* 0x060 */ f32 sp60;                           /* inferred */
    /* 0x064 */ ? sp64;                             /* inferred */
    /* 0x064 */ char pad64[0xC];
    /* 0x070 */ ? sp70;                             /* inferred */
    /* 0x070 */ char pad70[0xC];
    /* 0x07C */ ? sp7C;                             /* inferred */
    /* 0x07C */ char pad7C[0x424];
};                                                  /* size = 0x4A0 */

struct _mips2c_stack_func_80BAC220 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x8];                     /* maybe part of sp24[3]? */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BAC2FC {
    /* 0x00 */ char pad0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BAC6E8 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BACA14 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BACBB0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BACD2C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BACE4C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BACEE0 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ char pad21[0xF];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BAD004 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ char pad21[0xF];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BAD130 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BAD230 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAD2B4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAD380 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ Actor *sp38;                         /* inferred */
    /* 0x3C */ char pad3C[0x3];
    /* 0x3F */ u8 sp3F;                             /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BAD5F8 {
    /* 0x00 */ char pad0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ u8 sp28;                             /* inferred */
    /* 0x29 */ char pad29[0xF];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BAD7F8 {
    /* 0x00 */ char pad0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ u8 sp28;                             /* inferred */
    /* 0x29 */ char pad29[0xF];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BADA08 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BADA9C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ char pad2E[0x1];
    /* 0x2F */ u8 sp2F;                             /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BADD0C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BADDB4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BADE14 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BADE8C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BADF3C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

EnFsn *EnSuttari_GetActorById(GlobalContext *arg0, s16 arg1); /* static */
void EnSuttari_GetPaths(EnSuttari *arg0, GlobalContext *arg1); /* static */
s32 EnSuttari_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void EnSuttari_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void EnSuttari_SetNextEntrance(GlobalContext *arg0, s32 arg1); /* static */
void EnSuttari_UnkDraw(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void EnSuttari_UpdateCollider(Actor *arg0, GlobalContext *arg1); /* static */
void EnSuttari_UpdateTime();                        /* static */
s32 func_80BAA904(EnSuttari *arg0, GlobalContext *arg1); /* static */
void func_80BAA9B4(EnSuttari *arg0);                /* static */
void func_80BAAA94(EnSuttari *arg0);                /* static */
void func_80BAAB78(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BAAF1C(EnSuttari *arg0);                /* static */
void func_80BAAFDC(EnSuttari *arg0, GlobalContext *arg1); /* static */
void func_80BAB1A0(EnSuttari *arg0, GlobalContext *arg1); /* static */
void func_80BAB374(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BAB434(EnSuttari *arg0);                /* static */
void func_80BAB4F0(Actor *arg0, GlobalContext *arg1); /* static */
s16 func_80BAB698(u8 *arg0, s32 arg1, void *arg2, f32 *arg3); /* static */
s32 func_80BAB758(EnSuttari *arg0, u8 *arg1, s32 arg2); /* static */
s32 func_80BAB8F4(EnSuttari *arg0, u8 *arg1, s32 arg2); /* static */
void func_80BABA90(EnSuttari *arg0, s32 arg1, u8 arg2, u8); /* static */
void func_80BABB90(EnSuttari *arg0, s32 arg1);      /* static */
s32 func_80BABC48(void *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80BABDD8(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80BABF64(u8 *arg2, GlobalContext *, u8 *); /* static */
? func_80BABFD4(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80BAC220(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80BAC2FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BAC6E8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BAD230(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_0600071C;
extern Gfx D_0600AF90;
extern FlexSkeletonHeader D_0600C240;
extern ? D_06013380;
static s16 D_80BAE800[16] = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static void D_80BAE820;                             /* unable to generate initializer */
static ? D_80BAE8F8;                                /* unable to generate initializer */
static ? D_80BAE938;                                /* unable to generate initializer */
static ? D_80BAE944;                                /* unable to generate initializer */
static Vec3f D_80BAE950 = {0.0f, 0.0f, 0.0f};
static Vec3f D_80BAE95C = {2000.0f, -1000.0f, 0.0f};
static ActorAnimationEntry sAnimations[9] = {
    {(AnimationHeader *)0x600071C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60128F4, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6011F84, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6012E84, 1.0f, 0.0f, 0.0f, 0, -6.0f},
    {(AnimationHeader *)0x601139C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600071C, 2.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6011F84, 2.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6011C38, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x6010BDC, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static CollisionCheckInfoInit2 sColChkInfoInit2 = {0, 0x12, 0x40, 0, 0xFF};
static ColliderCylinderInit sCylinderInit = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static DamageTable sDamageTable = {
    {
        1,
        1,
        1,
        0xE1,
        0xE1,
        0xE1,
        1,
        0xE1,
        0xF1,
        0xF1,
        1,
        0xE1,
        0xE1,
        0xE1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        0xF1,
        0xF1,
        0xE1,
        1,
        1,
        1,
        1,
        1,
        0xE1,
    },
};

void EnSuttari_UpdateCollider(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp2C;
    Collider *sp28;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    u16 temp_t2;
    u16 temp_t8;
    u8 temp_v0;
    u8 temp_v1;

    arg0->unk1DE = (s16) (s32) arg0->world.pos.x;
    arg0->unk1E0 = (s16) (s32) arg0->world.pos.y;
    arg0->unk1E2 = (s16) (s32) arg0->world.pos.z;
    if ((arg0->unk1E4 & 0x40) != 0) {
        temp_v0 = arg0->unk1A9;
        if ((temp_v0 & 2) != 0) {
            temp_v1 = arg0->colChkInfo.damageEffect;
            arg0->unk1A9 = (u8) (temp_v0 & 0xFFFD);
            if (temp_v1 == 0xF) {
                temp_t8 = arg0->unk1E4 | 0x100;
                arg0->unk1E4 = temp_t8;
                arg0->unk1E4 = (u16) (temp_t8 & 0xFFBF);
                Enemy_StartFinishingBlow(arg1, arg0);
            } else if (temp_v1 == 0xE) {
                temp_t2 = arg0->unk1E4 | 0x200;
                arg0->unk1E4 = temp_t2;
                arg0->unk1E4 = (u16) (temp_t2 & 0xFFBF);
            }
        }
    }
    temp_a1 = &arg1->colChkCtx;
    temp_a2 = arg0 + 0x198;
    sp28 = temp_a2;
    sp2C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
    if (((arg0->unk1E4 & 1) != 0) && (func_80BADE14 != arg0->unk148)) {
        Actor_UpdateBgCheckInfo(arg1, arg0, 35.0f, 30.0f, 30.0f, 5U);
        return;
    }
    Actor_UpdateBgCheckInfo(arg1, arg0, 35.0f, 30.0f, 30.0f, 4U);
}

EnFsn *EnSuttari_GetActorById(GlobalContext *arg0, s16 arg1) {
    EnFsn *temp_v1;
    EnFsn *temp_v1_2;
    EnFsn *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[4].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if (arg1 == phi_v1->actor.id) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->actor.next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void EnSuttari_SetNextEntrance(GlobalContext *arg0, s32 arg1) {
    arg0->nextEntranceIndex = arg1 & 0xFFFF;
    arg0->unk_1887F = 0x40;
    gSaveContext.nextTransition = 0x40;
    arg0->sceneLoadFlag = 0x14;
}

void EnSuttari_UpdateTime(void) {
    u16 temp_t8;

    temp_t8 = (u16) gGameInfo->data[15] + gSaveContext.time;
    gSaveContext.time = temp_t8;
    gSaveContext.time = gSaveContext.unk16 + temp_t8;
}

s32 func_80BAA904(EnSuttari *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 sp24;
    s32 phi_v0;

    sp2C = (Math_SinS(arg0->actor.world.rot.y) * 50.0f) + arg0->actor.world.pos.x;
    sp30 = arg0->actor.world.pos.y + 100.0f;
    sp34 = (Math_CosS(arg0->actor.world.rot.y) * 50.0f) + arg0->actor.world.pos.z;
    phi_v0 = 1;
    if (func_800C4000(arg1, arg1 + 0x830, &sp24, (Vec3f *) &sp2C) > -500.0f) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void func_80BAA9B4(EnSuttari *arg0) {
    s16 sp1E;
    AnimationHeaderCommon *temp_a0;
    s16 temp_v0;
    s32 temp_f6;
    u16 temp_t9;

    temp_f6 = (s32) arg0->skelAnime.animCurrentFrame;
    temp_a0 = *(sAnimations + (arg0->animationIdx * 0x18));
    sp1E = (s16) temp_f6;
    arg0 = arg0;
    temp_v0 = SkelAnime_GetFrameCount(temp_a0);
    temp_t9 = arg0->textId;
    switch (temp_t9) {
        if ((arg0->animationIdx != 8) && ((s16) temp_f6 == temp_v0)) {
            arg0->animationIdx = 8;
            func_800BDC5C(arg0 + 0x150, (ActorAnimationEntry []) sAnimations, 8);
            return;
        }
        return;
    default:
        if ((arg0->animationIdx != 1) && ((s16) temp_f6 == temp_v0)) {
            arg0->animationIdx = 1;
            func_800BDC5C(arg0 + 0x150, (ActorAnimationEntry []) sAnimations, 1);
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
}

void func_80BAAA94(EnSuttari *arg0) {
    u16 temp_t6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_t6 = arg0->textId;
    switch (temp_t6) {
    case 10725:
        arg0->animationIdx = 1;
        func_800BDC5C(arg0 + 0x150, (ActorAnimationEntry []) sAnimations, 1);
        return;
    case 10729:
        temp_v0 = arg0->enFsn;
        temp_v0->flags |= 0x100;
        return;
    case 10730:
        temp_v0_2 = arg0->enFsn;
        temp_v0_2->flags |= 0x200;
        return;
    case 10731:
        temp_v0_3 = arg0->enFsn;
        temp_v0_3->flags |= 0x40;
        return;
    case 10732:
        arg0->animationIdx = 7;
        func_800BDC5C(arg0 + 0x150, (ActorAnimationEntry []) sAnimations, 7);
        return;
    case 10733:
        arg0->animationIdx = 1;
        func_800BDC5C(arg0 + 0x150, (ActorAnimationEntry []) sAnimations, 1);
        /* fallthrough */
    default:
        return;
    }
}

void func_80BAAB78(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;
    void *temp_v0_3;
    void *temp_v0_4;
    u16 phi_t2;

    temp_v1 = arg0->unk1E4;
    if ((temp_v1 & 4) != 0) {
        temp_v0 = arg0->unk1E8;
        if ((s32) temp_v0 > 0) {
            switch (temp_v0) {                      /* switch 1 */
            case 10725:                             /* switch 1 */
                ActorCutscene_Stop((arg0 + (arg0->unk45A * 2))->unk456);
                arg0->unk45A = 1;
                arg0->unk1E8 = 0x29E6U;
                break;
            case 10726:                             /* switch 1 */
                ActorCutscene_Stop((arg0 + (arg0->unk45A * 2))->unk456);
                arg0->unk45A = 0;
                arg0->unk1E8 = 0x29E7U;
                break;
            case 10727:                             /* switch 1 */
                ActorCutscene_Stop((arg0 + (arg0->unk45A * 2))->unk456);
                arg0->unk45A = 1;
                arg0->unk1E8 = 0x29E8U;
                break;
            case 10728:                             /* switch 1 */
                ActorCutscene_Stop((arg0 + (arg0->unk45A * 2))->unk456);
                arg0->unk45A = 0;
                arg0->unk1E8 = 0x29E9U;
                break;
            case 10729:                             /* switch 1 */
                ActorCutscene_Stop((arg0 + (arg0->unk45A * 2))->unk456);
                arg0->unk45A = 1;
                phi_t2 = 0x29EAU;
block_15:
                arg0->unk1E8 = phi_t2;
                break;
            case 10730:                             /* switch 1 */
                ActorCutscene_Stop((arg0 + (arg0->unk45A * 2))->unk456);
                arg0->unk45A = 0;
                arg0->unk1E8 = 0x29EBU;
                break;
            case 10731:                             /* switch 1 */
                ActorCutscene_Stop((arg0 + (arg0->unk45A * 2))->unk456);
                arg0->unk45A = 1;
                arg0->unk1E8 = 0x29ECU;
                break;
            case 10732:                             /* switch 1 */
                ActorCutscene_Stop((arg0 + (arg0->unk45A * 2))->unk456);
                arg0->unk45A = 0;
                arg0->unk1E8 = 0x29EDU;
                break;
            case 10733:                             /* switch 1 */
                ActorCutscene_Stop((arg0 + (arg0->unk45A * 2))->unk456);
                arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x400);
                arg0->unk45A = 1;
                phi_t2 = 0x29EEU;
                goto block_15;
            }
        } else if (temp_v0 == 0) {
            arg0->unk1E4 = (u16) (temp_v1 | 0x20);
            arg0->unk45A = 0;
            arg0->unk1E8 = 0x29E5U;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        ActorCutscene_SetIntentToPlay((arg0 + (arg0->unk45A * 2))->unk456);
        arg0->unk148 = func_80BADD0C;
    } else if ((temp_v1 & 1) != 0) {
        temp_v0_2 = arg0->unk1E8;
        if ((s32) temp_v0_2 > 0) {
            switch (temp_v0_2) {                    /* switch 2 */
            case 5200:                              /* switch 2 */
                arg0->unk1E8 = 0x1451U;
                break;
            case 5201:                              /* switch 2 */
                if ((temp_v1 & 0x800) != 0) {
                    arg0->unk1E4 = (u16) (temp_v1 & 0xF7FF);
                    arg0->unk1E8 = 0x1453U;
                } else {
                    arg0->unk1E4 = (u16) (temp_v1 | 0x400);
                    arg0->unk1E8 = 0x1452U;
                    gSaveContext.weekEventReg[81] |= 1;
                }
                break;
            case 5203:                              /* switch 2 */
                arg0->unk1E4 = (u16) (temp_v1 | 0x400);
                gSaveContext.weekEventReg[81] |= 1;
                temp_v0_3 = arg1->actorCtx.actorList[2].first->unkA80;
                temp_v0_3->unk264 = (u16) (temp_v0_3->unk264 | 8);
                arg0->unk1E8 = 0x1454U;
                arg0->unk1E6 = (u16) (arg0->unk1E6 | 1);
                break;
            case 5205:                              /* switch 2 */
                arg0->unk1E8 = 0x1456U;
                break;
            case 5206:                              /* switch 2 */
                arg0->unk1E8 = 0x1457U;
                break;
            case 5207:                              /* switch 2 */
                arg0->unk1E8 = 0x1458U;
                break;
            case 5208:                              /* switch 2 */
                arg0->unk1E8 = 0x1459U;
                break;
            case 5209:                              /* switch 2 */
                arg0->unk1E8 = 0x145AU;
                break;
            case 5210:                              /* switch 2 */
                arg0->unk1E4 = (u16) (temp_v1 | 0x400);
                arg0->unk1E8 = 0x145BU;
                break;
            }
        } else if (temp_v0_2 == 0) {
            if ((gSaveContext.weekEventReg[81] & 1) != 0) {
                arg0->unk1E8 = 0x1455U;
                temp_v0_4 = arg1->actorCtx.actorList[2].first->unkA80;
                temp_v0_4->unk264 = (u16) (temp_v0_4->unk264 | 8);
                arg0->unk1E6 = (u16) (arg0->unk1E6 | 1);
            } else {
                arg0->unk1E8 = 0x1450U;
            }
        }
    }
    func_801518B0(arg1, arg0->unk1E8, arg0);
}

void func_80BAAF1C(EnSuttari *arg0) {
    s16 sp1E;
    EnSuttari *temp_a3;
    s32 temp_t8;
    s32 temp_v1;

    sp1E = (s16) (s32) arg0->skelAnime.animCurrentFrame;
    temp_t8 = arg0->animationIdx;
    arg0 = arg0;
    temp_a3 = arg0;
    temp_v1 = temp_a3->animationIdx;
    if (temp_v1 == 5) {
        temp_a3->animationIdx = 3;
        func_800BDC5C(temp_a3 + 0x150, (ActorAnimationEntry []) sAnimations, 3);
        return;
    }
    if ((temp_v1 == 3) && (sp1E == SkelAnime_GetFrameCount((AnimationHeaderCommon *) sAnimations[temp_t8].animation))) {
        temp_a3->animationIdx = 6;
        arg0 = temp_a3;
        func_800BDC5C(temp_a3 + 0x150, (ActorAnimationEntry []) sAnimations, 6);
        arg0->flags1 &= 0xFEFF;
    }
}

void func_80BAAFDC(EnSuttari *arg0, GlobalContext *arg1) {
    f32 sp5C;
    ? sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ? sp3C;
    f32 temp_f6;
    s32 temp_v0;

    if ((arg0->actor.xzDistToPlayer < 500.0f) && (arg0->actor.yDistToPlayer < 100.0f)) {
        sp54.unk0 = (s32) D_80BAE938.unk0;
        sp54.unk4 = (s32) D_80BAE938.unk4;
        sp54.unk8 = (s32) D_80BAE938.unk8;
        Math_Vec3f_Copy((Vec3f *) &sp48, arg0 + 0x24);
        temp_f6 = sp48 + (Math_SinS((s16) (arg0->actor.world.rot.y + arg0->unk3F4)) * 10.0f);
        sp4C += 60.0f;
        sp48 = temp_f6;
        sp50 += Math_CosS((s16) (arg0->actor.world.rot.y + arg0->unk3F4)) * 10.0f;
        SysMatrix_StatePush();
        Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
        sp5C = 20.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp54, (Vec3f *) &sp3C);
        SysMatrix_StatePop();
        if (arg0->unk3F0 == 0) {
            EffectSsSolderSrchBall_Spawn(arg1, (Vec3f *) &sp48, (Vec3f *) &sp3C, &D_801D15B0, (s16) 0x32, arg0 + 0x3F0, (s16) 1);
        }
        if (arg0->unk3F0 == 1) {
            play_sound(0x482CU);
            temp_v0 = arg0->unk1F4[0];
            arg0->unk3F0 = 0;
            arg0->actor.speedXZ = 0.0f;
            if (temp_v0 != 0) {
                arg0->unk1F4[0] = temp_v0 - 1;
            }
            gSaveContext.weekEventReg[61] |= 8;
            arg0->unk3F6 = 0x14;
            arg0->actionFunc = func_80BADE8C;
        }
    }
}

void func_80BAB1A0(EnSuttari *arg0, GlobalContext *arg1) {
    f32 sp5C;
    ? sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ? sp3C;
    f32 temp_f6;
    s32 temp_v0;

    if ((arg0->actor.xzDistToPlayer < 500.0f) && (arg0->actor.yDistToPlayer < 100.0f)) {
        sp54.unk0 = (s32) D_80BAE944.unk0;
        sp54.unk4 = (s32) D_80BAE944.unk4;
        sp54.unk8 = (s32) D_80BAE944.unk8;
        Math_Vec3f_Copy((Vec3f *) &sp48, arg0 + 0x24);
        temp_f6 = sp48 + (Math_SinS((s16) (arg0->actor.world.rot.y + arg0->unk3F4)) * 350.0f);
        sp4C += 60.0f;
        sp48 = temp_f6;
        sp50 += Math_CosS((s16) (arg0->actor.world.rot.y + arg0->unk3F4)) * 350.0f;
        SysMatrix_StatePush();
        Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
        sp5C = 20.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp54, (Vec3f *) &sp3C);
        SysMatrix_StatePop();
        if (arg0->unk3F0 == 0) {
            EffectSsSolderSrchBall_Spawn(arg1, (Vec3f *) &sp48, (Vec3f *) &sp3C, &D_801D15B0, (s16) 0x32, arg0 + 0x3F0, (s16) 1);
        }
        if (arg0->unk3F0 == 1) {
            play_sound(0x482CU);
            temp_v0 = arg0->unk1F4[0];
            arg0->unk3F0 = 0;
            arg0->actor.speedXZ = 0.0f;
            if (temp_v0 != 0) {
                arg0->unk1F4[0] = temp_v0 - 1;
            }
            gSaveContext.weekEventReg[61] |= 8;
            arg0->unk3F6 = 0x14;
            arg0->actionFunc = func_80BADE8C;
            return;
        }
        func_80BAAFDC(arg0, arg1);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80BAB374(Actor *arg0, GlobalContext *arg1) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;

    if (((s32) (s16) (s32) arg0->unk168 % 3) == 0) {
        sp38 = randPlusMinusPoint5Scaled(15.0f) + arg0->world.pos.x;
        sp3C = arg0->world.pos.y;
        sp40 = randPlusMinusPoint5Scaled(15.0f) + arg0->world.pos.z;
        func_800BBDAC(arg1, arg0, (Vec3f *) &sp38, 10.0f, 0, 2.0f, (s16) 0, (s16) 0, (u8) 0);
    }
}

void func_80BAB434(EnSuttari *arg0) {
    f32 temp_f10;
    s16 temp_a0;

    temp_a0 = arg0->unk3F4;
    arg0 = arg0;
    temp_f10 = Math_SinS(temp_a0) * 60.0f * 182.04445f;
    arg0->unk3F4 += 0x400;
    arg0->unk3F2 = (s16) (s32) temp_f10;
}

void EnSuttari_GetPaths(EnSuttari *arg0, GlobalContext *arg1) {
    Path *temp_v0;

    temp_v0 = func_8013D648(arg1, (s16) ((s32) (arg0->actor.params & 0x7E00) >> 9), 0x3F);
    arg0->paths[0] = temp_v0;
    arg0->paths[1] = func_8013D648(arg1, (s16) temp_v0->unk1, 0x3F);
}

void func_80BAB4F0(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;

    sp3C = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk1E4 & 0x80) != 0) {
        EnSuttari_UpdateCollider(arg0, arg1);
    }
    SkelAnime_FrameUpdateMatrix(arg0 + 0x150);
    if (((arg0->unk1E4 & 4) == 0) && (Player_GetMask(arg1) != 0x10)) {
        if (func_8013D5E8(arg0->shape.rot.y, 0x36B0, arg0->yawTowardsPlayer) != 0) {
            sp30 = sp3C->world.pos.x;
            sp34 = sp3C->unkC44 + 3.0f;
            sp38 = sp3C->world.pos.z;
            func_8013D2E0((Vec3f *) &sp30, &arg0->focus, &arg0->shape, arg0 + 0x2D6, arg0 + 0x2DC, arg0 + 0x2E2, D_80BAE800);
        } else {
            Math_SmoothStepToS(arg0 + 0x2D6, 0, 4, 0x3E8, (s16) 1);
            Math_SmoothStepToS(arg0 + 0x2D8, 0, 4, 0x3E8, (s16) 1);
            Math_SmoothStepToS(arg0 + 0x2DC, 0, 4, 0x3E8, (s16) 1);
            Math_SmoothStepToS(arg0 + 0x2DE, 0, 4, 0x3E8, (s16) 1);
            Math_SmoothStepToS(arg0 + 0x2E2, 0, 4, 0x3E8, (s16) 1);
            Math_SmoothStepToS(arg0 + 0x2E4, 0, 4, 0x3E8, (s16) 1);
        }
    }
    func_8013D9C8(arg1, arg0 + 0x2FA, arg0 + 0x31A, 0x10);
}

s16 func_80BAB698(u8 *arg0, s32 arg1, void *arg2, f32 *arg3) {
    void *temp_v1;
    f32 phi_f14;
    f32 phi_f12;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk4);
        phi_f14 = (f32) temp_v1->unk0 - arg2->unk0;
        phi_f12 = (f32) temp_v1->unk4 - arg2->unk8;
    } else {
        phi_f14 = 0.0f;
        phi_f12 = 0.0f;
    }
    *arg3 = (phi_f14 * phi_f14) + (phi_f12 * phi_f12);
    return (s16) (s32) (Math_Acot2F(phi_f12, phi_f14) * 10430.378f);
}

s32 func_80BAB758(EnSuttari *arg0, u8 *arg1, s32 arg2) {
    void *sp5C;
    s32 sp58;
    s32 sp50;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp30;
    s32 sp28;
    s32 temp_a3;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk4);
    temp_a2 = arg1->unk0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk6 - sp5C->unk0);
        phi_f14 = (f32) (sp5C->unkA - sp5C->unk4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk-6 - temp_v0_3->unk-C);
            phi_f14 = (f32) (temp_v0_3->unk-2 - temp_v0_3->unk-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk6 - temp_v0_2->unk-6);
            phi_f14 = (f32) (temp_v0_2->unkA - temp_v0_2->unk-2);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->actor.world.pos.x * sp44) + (sp40 * arg0->actor.world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

s32 func_80BAB8F4(EnSuttari *arg0, u8 *arg1, s32 arg2) {
    void *sp5C;
    s32 sp58;
    s32 sp50;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp30;
    s32 sp28;
    s32 temp_a3;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk4);
    temp_a2 = arg1->unk0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk0 - sp5C->unk6);
        phi_f14 = (f32) (sp5C->unk4 - sp5C->unkA);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk-C - temp_v0_3->unk-6);
            phi_f14 = (f32) (temp_v0_3->unk-8 - temp_v0_3->unk-2);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk-6 - temp_v0_2->unk6);
            phi_f14 = (f32) (temp_v0_2->unk-2 - temp_v0_2->unkA);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->actor.world.pos.x * sp44) + (sp40 * arg0->actor.world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

void func_80BABA90(EnSuttari *arg0, s32 arg1, u8 arg2) {
    f32 sp30;
    u8 *sp28;
    s16 temp_a1;
    s32 temp_v0;
    u8 *temp_t7;
    void *temp_s1;
    s16 phi_a1;

    temp_s1 = arg0 + (arg1 * 4);
    temp_t7 = temp_s1->unk1EC;
    sp28 = temp_t7;
    if (temp_t7 != 0) {
        temp_a1 = func_80BAB698(temp_t7, temp_s1->unk1F4, arg0 + 0x24, &sp30);
        phi_a1 = temp_a1;
        if ((arg0->actor.bgCheckFlags & 8) != 0) {
            if (arg2 == 2) {
                temp_s1->unk1F4 = -0x63;
            } else {
                phi_a1 = arg0->actor.wallYaw;
            }
        }
        Math_SmoothStepToS(arg0 + 0x32, phi_a1, 4, 0x3E8, (s16) 1);
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
        if (func_80BAB758(arg0, temp_s1->unk1EC, temp_s1->unk1F4) != 0) {
            temp_v0 = temp_s1->unk1F4;
            if (temp_v0 >= (*temp_s1->unk1EC - 1)) {
                if (arg2 == 0) {
                    temp_s1->unk1F4 = 0;
                    return;
                }
                temp_s1->unk1F4 = -0x63;
                return;
            }
            temp_s1->unk1F4 = (s32) (temp_v0 + 1);
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void func_80BABB90(EnSuttari *arg0, s32 arg1) {
    f32 sp30;
    u8 *sp28;
    s32 temp_v0;
    u8 *temp_t7;
    void *temp_s1;
    s16 phi_a1;

    temp_s1 = arg0 + (arg1 * 4);
    temp_t7 = temp_s1->unk1EC;
    sp28 = temp_t7;
    if (temp_t7 != 0) {
        phi_a1 = func_80BAB698(temp_t7, temp_s1->unk1F4, arg0 + 0x24, &sp30);
        if ((arg0->actor.bgCheckFlags & 8) != 0) {
            phi_a1 = arg0->actor.wallYaw;
        }
        Math_SmoothStepToS(arg0 + 0x32, phi_a1, 1, 0xBB8, (s16) 0);
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
        if (func_80BAB8F4(arg0, temp_s1->unk1EC, temp_s1->unk1F4) != 0) {
            temp_v0 = temp_s1->unk1F4;
            if (temp_v0 <= 0) {
                temp_s1->unk1F4 = -0x63;
                return;
            }
            temp_s1->unk1F4 = (s32) (temp_v0 - 1);
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

s32 func_80BABC48(void *arg0, GlobalContext *arg1, void *arg2) {
    u16 sp26;
    s8 sp23;
    s32 sp1C;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_t8;
    s32 temp_v0_2;
    u8 temp_a1;
    u8 temp_v0;
    s32 phi_a0;

    temp_t8 = (s32) (arg0->unk1C & 0x7E00) >> 9;
    sp23 = (s8) temp_t8;
    temp_t3 = *(&D_80BAE8F8 + (arg2->unk0 * 4));
    temp_t0 = gSaveContext.time - 0x3FFC;
    sp1C = temp_t3;
    if (temp_t3 >= 0) {
        temp_a1 = temp_t8 & 0xFF;
        arg0 = arg0;
        sp26 = temp_t0 & 0xFFFF;
        arg0->unk404 = func_8013BB34(arg1, temp_a1, temp_t3);
    }
    if (arg0->unk404 == 0) {
        return 0;
    }
    temp_v0 = arg0->unk428;
    if ((temp_v0 != 0) && ((s32) temp_v0 < 0xC) && ((s32) arg0->unk42A >= 0)) {
        phi_a0 = temp_t0 & 0xFFFF & 0xFFFF;
    } else {
        phi_a0 = (s32) arg2->unk6;
    }
    temp_v0_2 = arg2->unk8;
    if (temp_v0_2 < phi_a0) {
        arg0->unk418 = (s32) ((phi_a0 - temp_v0_2) + 0xFFFF);
    } else {
        arg0->unk418 = (s32) (temp_v0_2 - phi_a0);
    }
    arg0->unk424 = (s32) ((temp_t0 & 0xFFFF) - phi_a0);
    arg0->unk42C = 0;
    temp_lo = (s32) arg0->unk418 / (s32) ((*arg0->unk404 - 2) & 0xFFFF);
    arg0->unk41C = temp_lo;
    arg0->unk420 = (s32) (((s32) arg0->unk424 / temp_lo) + 2);
    arg0->unk430 = 0;
    return 1;
}

s32 func_80BABDD8(Actor *arg0, GlobalContext *arg1, void *arg2) {
    Actor *sp48;
    u8 sp47;
    u16 sp44;
    ? sp38;
    ? sp2C;
    void *sp28;
    Actor *temp_v0_2;
    Path *temp_v0_3;
    s32 temp_a2;
    u8 temp_v0;
    u8 temp_v0_5;
    void *temp_v0_4;

    sp47 = (u8) ((s32) (arg0->params & 0x7E00) >> 9);
    sp44 = gSaveContext.time - 0x3FFC;
    temp_v0 = arg0->unk428;
    if ((temp_v0 == 0xA) || (temp_v0 == 0xB) || (temp_v0 == 2)) {
        return 0;
    }
    temp_v0_2 = func_8013BB7C(arg0, arg1, 0xA, 5);
    sp48 = temp_v0_2;
    temp_a2 = *(&D_80BAE8F8 + (arg2->unk0 * 4));
    if ((temp_v0_2 != 0) && (temp_a2 >= 0)) {
        arg0->unk404 = func_8013BB34(arg1, sp47, temp_a2);
    }
    if ((sp48 == 0) || (temp_v0_3 = arg0->unk404, (temp_v0_3 == 0))) {
        return 0;
    }
    temp_v0_4 = Lib_SegmentedToVirtual((void *) temp_v0_3->points);
    sp28 = temp_v0_4;
    Math_Vec3s_ToVec3f((Vec3f *) &sp38, (Vec3s *) temp_v0_4);
    Math_Vec3s_ToVec3f((Vec3f *) &sp2C, sp28 + 6);
    arg0->unk434 = (s16) (sp44 - arg2->unk4);
    arg0->unk436 = (s16) (arg2->unk8 - arg2->unk4);
    temp_v0_5 = arg2->unk0;
    if ((temp_v0_5 != 0xA) && (temp_v0_5 != 0xB)) {
        sp48->unk1A7 = 0x4B;
    }
    Math_Vec3f_Copy(arg0 + 0x438, (Vec3f *) &sp38);
    Math_Vec3f_Copy(arg0 + 0x444, (Vec3f *) &sp2C);
    arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp38, (Vec3f *) &sp2C);
    arg0->world.pos.x = sp38.unk0;
    arg0->world.pos.y = sp38.unk4;
    arg0->world.pos.z = sp38.unk8;
    return 1;
}

s32 func_80BABF64(u8 *arg2) {
    u8 temp_t6;
    s32 phi_v1;

    temp_t6 = *arg2;
    phi_v1 = 0;
    switch (temp_t6) {
    case 12:
    case 13:
    case 14:
    case 15:
        phi_v1 = func_80BABC48();
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        phi_v1 = func_80BABDD8();
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        phi_v1 = 1;
        break;
    }
    return phi_v1;
}

? func_80BABFD4(Actor *arg0, GlobalContext *arg1) {
    ? sp7C;
    ? sp70;
    ? sp64;
    f32 sp58;
    s32 sp54;
    s32 sp50;
    void *sp48;
    s32 *sp44;
    s32 *sp40;
    Vec3f *temp_s1;
    s32 *temp_a2;
    s32 *temp_v0;
    void *temp_a1;
    Vec3f *phi_s1;

    sp54 = 0;
    sp50 = 0;
    func_8013AF00((void *) &sp7C, 3, arg0->unk404->count + 3);
    temp_s1 = arg0 + 0x408;
    phi_s1 = temp_s1;
    if (arg0->unk42C == 0) {
        temp_v0 = arg0 + 0x420;
        sp58.unk0 = D_801D15B0.x;
        temp_a1 = arg0 + 0x414;
        sp58.unk4 = (f32) D_801D15B0.y;
        temp_a2 = arg0 + 0x424;
        sp58.unk8 = (f32) D_801D15B0.z;
        sp44 = temp_a2;
        sp48 = temp_a1;
        sp40 = temp_v0;
        func_8013B6B0(arg0->unk404, temp_a1, temp_a2, arg0->unk41C, arg0->unk418, temp_v0, (void *) &sp7C, (Vec3f *) &sp58, (s16) (s32) arg0->unk42A);
        func_8013B878(arg1, arg0->unk404, arg0->unk420, (Vec3f *) &sp58);
        arg0->unk42C = 1;
        arg0->world.pos.y = sp5C;
        phi_s1 = arg0 + 0x408;
    } else {
        sp58.unk0 = temp_s1->x;
        sp58.unk4 = (f32) temp_s1->y;
        sp58.unk8 = (f32) temp_s1->z;
        sp40 = arg0 + 0x420;
        sp44 = arg0 + 0x424;
        sp48 = arg0 + 0x414;
    }
    arg0->world.pos.x = sp58;
    arg0->world.pos.z = sp60;
    if (func_8013AD6C(arg1) != 0) {
        sp54 = arg0->unk424;
        sp50 = arg0->unk420;
        sp58.unk0 = arg0->world.pos.x;
        sp58.unk4 = (f32) arg0->world.pos.y;
        sp58.unk8 = (f32) arg0->world.pos.z;
    }
    phi_s1->x = D_801D15B0.x;
    phi_s1->y = D_801D15B0.y;
    phi_s1->z = D_801D15B0.z;
    if (func_8013B6B0(arg0->unk404, sp48, sp44, arg0->unk41C, arg0->unk418, sp40, (void *) &sp7C, phi_s1, (s16) (s32) arg0->unk42A) != 0) {
        arg0->unk430 = 1;
    } else {
        sp70.unk0 = (f32) arg0->world.pos.x;
        sp70.unk4 = (f32) arg0->world.pos.y;
        sp70.unk8 = (f32) arg0->world.pos.z;
        sp64.unk0 = (f32) phi_s1->x;
        sp64.unk4 = (f32) phi_s1->y;
        sp64.unk8 = (f32) phi_s1->z;
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp70, (Vec3f *) &sp64);
    }
    if (func_8013AD6C(arg1) != 0) {
        arg0->unk424 = sp54;
        arg0->unk420 = sp50;
        phi_s1->x = sp58.unk0;
        phi_s1->y = sp58.unk4;
        phi_s1->z = sp58.unk8;
    }
    return 0;
}

? func_80BAC220(Actor *arg0, GlobalContext *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp30;
    Vec3f *sp24;
    Vec3f *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v1;
    s16 phi_a0;

    temp_v0 = arg0->unk434;
    if ((s32) temp_v0 < 0) {
        arg0->unk434 = 0;
    } else {
        temp_v1 = arg0->unk436;
        phi_a0 = temp_v0;
        if ((s32) temp_v1 < (s32) temp_v0) {
            phi_a0 = temp_v1;
        }
        arg0->unk434 = phi_a0;
    }
    temp_a0 = arg0 + 0x438;
    sp24 = temp_a0;
    temp_f0 = Math_Vec3f_DistXZ(temp_a0, arg0 + 0x444);
    sp40 = 0.0f;
    sp3C = 0.0f;
    sp44 = (f32) arg0->unk434 * (temp_f0 / (f32) arg0->unk436);
    Lib_Vec3f_TranslateAndRotateY(temp_a0, arg0->world.rot.y, (Vec3f *) &sp3C, (Vec3f *) &sp30);
    arg0->world.pos.x = sp30.unk0;
    arg0->world.pos.y = sp30.unk4;
    arg0->unk434 = (s16) (arg0->unk434 + arg0->unk42A);
    arg0->world.pos.z = sp30.unk8;
    return 0;
}

void func_80BAC2FC(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s16 sp22;
    s32 temp_v0_3;
    u16 temp_t2;
    u16 temp_t7;
    u16 temp_t9;
    u16 temp_v0_4;
    u8 temp_t1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    GlobalContext *phi_a3;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp22 = (s16) (s32) arg0->unk168;
    arg1 = arg1;
    sp24 = temp_v1;
    temp_t1 = arg0->unk428;
    switch (temp_t1) {
    case 12:
    case 13:
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x80);
        func_80BABFD4(arg0, arg1);
        break;
    case 15:
        if ((arg0->unk450 == 1) && (sp22 == SkelAnime_GetFrameCount((AnimationHeaderCommon *) sAnimations[arg0->unk450].animation))) {
            arg0->unk450 = 2;
            arg1 = arg1;
            sp24 = temp_v1;
            func_800BDC5C(arg0 + 0x150, (ActorAnimationEntry []) sAnimations, 2);
        }
        phi_a3 = arg1;
        if (((gSaveContext.weekEventReg[83] & 4) == 0) && ((arg0->unk1E4 & 0x1000) == 0)) {
            arg1 = arg1;
            sp24 = temp_v1;
            if (ActorCutscene_GetCanPlayNext(arg0->unk456) != 0) {
                arg1 = arg1;
                sp24 = temp_v1;
                ActorCutscene_Start(arg0->unk456, arg0);
                phi_a3 = arg1;
                if ((temp_v1->unkA6C * 8) >= 0) {
                    arg0->unk1E6 = (u16) (arg0->unk1E6 | 0x10);
                    temp_v1->unkA6C = (s32) (temp_v1->unkA6C | 0x10000000);
                }
                arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x1000);
                arg0->unk1E6 = (u16) (arg0->unk1E6 | 2);
            } else {
                arg1 = arg1;
                ActorCutscene_SetIntentToPlay(arg0->unk456);
                phi_a3 = arg1;
            }
        }
        func_80BABFD4(arg0, phi_a3);
        break;
    case 6:
    case 8:
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x80);
        func_80BAC220(arg0, arg1);
        break;
    case 10:
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x80);
        func_80BAC220(arg0, arg1);
        break;
    case 9:
    case 11:
        temp_v0 = arg0->unk144;
        temp_t9 = arg0->unk1E4 | 0x80;
        arg0->unk1E4 = temp_t9;
        arg0->unk1E4 = (u16) (temp_t9 | 0x20);
        temp_v0->unk44E = (u16) (temp_v0->unk44E & 0xFF7F);
        if (arg0->unk450 != 2) {
            arg0->unk450 = 2;
            arg1 = arg1;
            func_800BDC5C(arg0 + 0x150, (ActorAnimationEntry []) sAnimations, 2);
        }
        func_80BAC220(arg0, arg1);
        break;
    case 7:
        temp_t7 = arg0->unk1E4 | 0x20;
        arg0->unk1E4 = temp_t7;
        arg0->unk1E4 = (u16) (temp_t7 | 0x80);
        func_80BAC220(arg0, arg1);
        break;
    case 14:
        temp_t2 = arg0->unk1E4 | 0x20;
        arg0->unk1E4 = temp_t2;
        arg0->unk1E4 = (u16) (temp_t2 | 0x80);
        func_80BABFD4(arg0, arg1);
        break;
    case 1:
        Actor_MarkForDeath(arg0);
        break;
    case 2:
        if ((gSaveContext.weekEventReg[81] & 4) == 0) {
            temp_v0_2 = arg0->unk144;
            arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x80);
            arg0->world.pos.x = -16.0f;
            arg0->world.pos.z = -16.0f;
            arg0->world.pos.y = 12.0f;
            temp_v0_2->unk44E = (u16) (temp_v0_2->unk44E | 0x80);
            arg0->unk148 = func_80BADA08;
        }
        break;
    case 4:
        if ((gSaveContext.weekEventReg[33] & 8) == 0) {
            temp_v0_3 = arg0->unk450;
            if ((temp_v0_3 == 2) || (temp_v0_3 == 1)) {
                arg0->unk450 = 5;
                arg1 = arg1;
                sp24 = temp_v1;
                func_800BDC5C(arg0 + 0x150, (ActorAnimationEntry []) sAnimations, 5);
            }
            temp_v0_4 = arg0->unk1E6;
            arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x10);
            if ((temp_v0_4 & 2) != 0) {
                arg0->unk1E6 = (u16) (temp_v0_4 & 0xFFFD);
            }
            if ((temp_v1->unkA6C * 8) >= 0) {
                arg0->unk1E6 = (u16) (arg0->unk1E6 | 0x10);
                temp_v1->unkA6C = (s32) (temp_v1->unkA6C | 0x10000000);
            }
            arg0->unk1E8 = 0x2A30;
            func_801518B0(arg1, 0x2A30 & 0xFFFF, arg0);
            arg0->unk148 = func_80BAD2B4;
        }
        break;
    }
    Math_ApproachS(&arg0->shape.rot.y, arg0->world.rot.y, 4, 0x1554);
}

void func_80BAC6E8(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    s16 temp_v0;
    s16 temp_v0_4;
    s32 temp_v0_2;
    u16 temp_t4;
    u16 temp_t5;
    u16 temp_v0_3;

    ActorShape_Init(arg0 + 0xBC, 0.0f, NULL, 0.0f);
    temp_a1 = arg0 + 0x150;
    sp34 = temp_a1;
    SkelAnime_InitSV(arg1, temp_a1, &D_0600C240, &D_0600071C, arg0 + 0x216, arg0 + 0x276, 0x10);
    arg0->draw = EnSuttari_Draw;
    arg0->flags |= 1;
    temp_v0 = arg1->sceneNum;
    if (temp_v0 == 0x13) {
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 1);
        temp_v0_2 = gSaveContext.day;
        if ((temp_v0_2 == 1) || (temp_v0_2 == 2)) {
            arg0->unk450 = 2;
            func_800BDC5C(sp34, (ActorAnimationEntry []) sAnimations, 2);
            arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x80);
            arg0->unk148 = func_80BACA14;
            return;
        }
        if ((temp_v0_2 == 3) && ((s32) gSaveContext.time < 0xCAAB) && ((gSaveContext.weekEventReg[61] & 8) == 0) && ((gSaveContext.weekEventReg[33] & 8) == 0) && ((gSaveContext.weekEventReg[51] & 8) != 0)) {
            arg0->unk450 = 2;
            func_800BDC5C(sp34, (ActorAnimationEntry []) sAnimations, 2);
            arg0->unk148 = func_80BACEE0;
            return;
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    if (temp_v0 == 0x6E) {
        temp_v0_3 = gSaveContext.time;
        if (((s32) temp_v0_3 >= 0x38E) && ((s32) temp_v0_3 < 0x4000)) {
            Actor_MarkForDeath(arg0);
        }
        if ((gSaveContext.entranceIndex == 0xD670) || ((gSaveContext.weekEventReg[58] & 0x40) != 0)) {
            Actor_MarkForDeath(arg0);
        }
        arg0->unk456 = (s16) arg0->cutscene;
        temp_v0_4 = ActorCutscene_GetAdditionalCutscene(arg0->unk456);
        temp_t5 = arg0->unk1E4 | 0x80;
        arg0->unk1E4 = temp_t5;
        arg0->unk458 = temp_v0_4;
        arg0->unk1E4 = (u16) (temp_t5 | 8);
        arg0->unk450 = 1;
        func_800BDC5C(sp34, (ActorAnimationEntry []) sAnimations, 1);
        arg0->unk148 = func_80BAD004;
        return;
    }
    if (temp_v0 == 0x6D) {
        if ((gSaveContext.weekEventReg[33] & 8) != 0) {
            Actor_MarkForDeath(arg0);
            return;
        }
        arg0->unk450 = 0;
        func_800BDC5C(sp34, (ActorAnimationEntry []) sAnimations, 0);
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 2);
        arg0->unk148 = func_80BAD5F8;
        return;
    }
    if (temp_v0 == 0xD) {
        if ((gSaveContext.weekEventReg[33] & 8) != 0) {
            Actor_MarkForDeath(arg0);
            return;
        }
        arg0->unk450 = 0;
        func_800BDC5C(sp34, (ActorAnimationEntry []) sAnimations, 0);
        arg0->unk456 = (s16) arg0->cutscene;
        arg0->unk458 = ActorCutscene_GetAdditionalCutscene(arg0->unk456);
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 4);
        arg0->unk148 = func_80BAD7F8;
        return;
    }
    arg0->unk148 = func_80BACA14;
    temp_t4 = arg0->unk1E4 | 8;
    arg0->unk1E4 = temp_t4;
    arg0->unk1E4 = (u16) (temp_t4 | 0x10);
}

void func_80BACA14(EnSuttari *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s32 temp_v0;
    u8 temp_v0_2;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->animationIdx;
    if ((temp_v0 == 1) || (temp_v0 == 8)) {
        this->animationIdx = 2;
        func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) sAnimations, 2);
    }
    func_80BABA90(this, 0, 0U);
    func_80BAB434(this);
    temp_v0_2 = sp24->unk14B;
    if ((temp_v0_2 == 1) || (temp_v0_2 == 2)) {
        if ((this->actor.yDistToPlayer < 60.0f) && (this->actor.xzDistToPlayer < 500.0f)) {
            this->actionFunc = func_80BACBB0;
            this->unk3F2 = this->unk2DE;
        }
    } else if ((temp_v0_2 == 4) && (((s32) (gSaveContext.equips.equipment & *gEquipMasks) >> *gEquipShifts) != 0)) {
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            this->unk3F2 = this->unk2DE;
            func_80BAAB78((Actor *) this, globalCtx);
            this->actionFunc = func_80BADA9C;
        } else if (this->actor.xzDistToPlayer < 200.0f) {
            func_800B8614((Actor *) this, globalCtx, 200.0f);
        }
    }
    Math_ApproachF(&this->actor.speedXZ, 5.0f, 0.2f, 0.1f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BACBB0(EnSuttari *this, GlobalContext *globalCtx) {
    u8 temp_v1;
    s16 phi_a1;
    s32 phi_a1_2;

    this->unk3F2 = this->unk2DE;
    temp_v1 = globalCtx->actorCtx.actorList[2].first->unk14B;
    if ((temp_v1 == 4) || (temp_v1 == 3)) {
        this->actionFunc = func_80BACA14;
    }
    if ((this->actor.yDistToPlayer < 60.0f) && (this->actor.xzDistToPlayer < 500.0f)) {
        if ((this->actor.bgCheckFlags & 8) != 0) {
            phi_a1 = this->actor.wallYaw;
        } else {
            if (func_80BAA904(this) != 0) {
                phi_a1_2 = (s32) this->actor.world.rot.y * -0x10000;
            } else {
                phi_a1_2 = (s32) this->actor.yawTowardsPlayer * -0x10000;
            }
            phi_a1 = (s16) (phi_a1_2 >> 0x10);
        }
        Math_SmoothStepToS(&this->actor.world.rot.y, phi_a1, 4, 0x3E8, (s16) 1);
        this->actor.shape.rot.y = this->actor.world.rot.y;
        Math_ApproachF(&this->actor.speedXZ, 5.0f, 0.2f, 0.1f);
    } else {
        this->actionFunc = func_80BACD2C;
        this->actor.speedXZ = 0.0f;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if ((this->actor.bgCheckFlags & 1) == 0) {
        this->actor.world.pos.x = this->actor.prevPos.x;
        this->actor.world.rot.y = (s16) -(s32) this->actor.world.rot.y;
        this->actionFunc = func_80BACE4C;
        this->actor.world.pos.y = this->actor.prevPos.y;
        this->actor.world.pos.z = this->actor.prevPos.z;
    }
}

void func_80BACD2C(EnSuttari *this, GlobalContext *globalCtx) {
    u8 temp_v1;

    this->unk3F2 = this->unk2DE;
    temp_v1 = globalCtx->actorCtx.actorList[2].first->unk14B;
    if ((temp_v1 == 4) || (temp_v1 == 3)) {
        this->actionFunc = func_80BACA14;
    }
    if ((this->actor.yDistToPlayer < 60.0f) && (this->actor.xzDistToPlayer < 500.0f)) {
        this->actionFunc = func_80BACBB0;
        Math_ApproachF(&this->actor.speedXZ, 5.0f, 0.2f, 0.1f);
    } else {
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 4, 0x3E8, (s16) 1);
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if ((this->actor.bgCheckFlags & 1) == 0) {
        this->actor.world.pos.x = this->actor.prevPos.x;
        this->actor.world.rot.y = (s16) -(s32) this->actor.world.rot.y;
        this->actionFunc = func_80BACE4C;
        this->actor.world.pos.y = this->actor.prevPos.y;
        this->actor.world.pos.z = this->actor.prevPos.z;
    }
}

void func_80BACE4C(EnSuttari *this, GlobalContext *globalCtx) {
    if (this->actor.xzDistToPlayer > 100.0f) {
        this->actionFunc = func_80BACBB0;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (this->actor.floorHeight != this->actor.world.pos.y) {
        this->actor.world.rot.y = (s16) -(s32) this->actor.world.rot.y;
        this->actor.world.pos.x = this->actor.prevPos.x;
        this->actor.world.pos.y = this->actor.prevPos.y;
        this->actor.world.pos.z = this->actor.prevPos.z;
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
}

void func_80BACEE0(EnSuttari *this, GlobalContext *globalCtx) {
    u8 sp20;

    this->unk42A = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((func_80133038(globalCtx, &D_80BAE820, (struct_80133038_arg2 *) &sp20) == 0) || ((sp20 != this->unk428) && (func_80BABF64((u8 *) this, globalCtx, &sp20) == 0))) {
        this->actor.flags &= -2;
        sp20 = 0;
    } else {
        this->actor.flags |= 1;
    }
    this->unk428 = sp20;
    func_80BAC2FC((Actor *) this, globalCtx);
    func_80BAB434(this);
    if (this->unk428 == 5) {
        gSaveContext.weekEventReg[58] |= 0x80;
        this->actionFunc = func_80BADDB4;
        this->actor.speedXZ = 0.0f;
    } else if (Player_GetMask(globalCtx) != 0x10) {
        func_80BAB1A0(this, globalCtx);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BAD004(EnSuttari *this, GlobalContext *globalCtx) {
    u8 sp20;

    this->unk42A = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((func_80133038(globalCtx, &D_80BAE820, (struct_80133038_arg2 *) &sp20) == 0) || ((sp20 != this->unk428) && (func_80BABF64((u8 *) this, globalCtx, &sp20) == 0))) {
        this->actor.flags &= -2;
        sp20 = 0;
    } else {
        this->actor.flags |= 1;
    }
    this->unk428 = sp20;
    func_80BAC2FC((Actor *) this, globalCtx);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        func_801518B0(globalCtx, 0x2A3AU, (Actor *) this);
        this->actionFunc = func_80BAD130;
    } else if ((this->actor.xzDistToPlayer < 200.0f) || (this->actor.isTargeted != 0)) {
        func_800B863C((Actor *) this, globalCtx);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BAD130(EnSuttari *this, GlobalContext *globalCtx) {
    u16 temp_v0_2;
    u8 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (((temp_v0 == 5) || (temp_v0 == 6)) && (func_80147624(globalCtx) != 0)) {
        globalCtx->msgCtx.unk11F22 = 0x43;
        globalCtx->msgCtx.unk12023 = 4;
        temp_v0_2 = this->flags1;
        if ((temp_v0_2 & 8) != 0) {
            this->actionFunc = func_80BAD004;
        } else if ((temp_v0_2 & 4) != 0) {
            this->actionFunc = func_80BAD7F8;
        } else if ((temp_v0_2 & 2) != 0) {
            this->actionFunc = func_80BAD5F8;
        } else if ((temp_v0_2 & 1) != 0) {
            this->unk3F6 = 0x14;
            this->actionFunc = func_80BADF3C;
        }
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
}

void func_80BAD230(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext(arg0->unk458) != 0) {
        ActorCutscene_Start(arg0->unk458, arg0);
        arg0->unk1E8 = 0x2A31;
        func_801518B0(arg1, 0x2A31 & 0xFFFF, arg0);
        arg0->unk1E4 = (u16) (arg0->unk1E4 | 0x4000);
        func_801A89A8(0x8003);
        arg0->unk148 = func_80BAD380;
        return;
    }
    ActorCutscene_SetIntentToPlay(arg0->unk458);
}

void func_80BAD2B4(EnSuttari *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        if (this->textId == 0x2A30) {
            ActorCutscene_Stop(this->cutscenes[0]);
            ActorCutscene_SetIntentToPlay(this->cutscenes[1]);
            this->actionFunc = (void (*)(EnSuttari *, GlobalContext *)) func_80BAD230;
        } else {
            ActorCutscene_Stop(this->cutscenes[1]);
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->flags1 |= 0x40;
            this->actionFunc = func_80BAD380;
        }
    }
    func_80BAB374((Actor *) this, globalCtx);
}

void func_80BAD380(EnSuttari *this, GlobalContext *globalCtx) {
    u8 sp3F;
    Actor *sp38;
    Actor *temp_v1;
    u16 temp_v0;
    u8 temp_a3;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_a3 = func_80152498(&globalCtx->msgCtx) & 0xFF;
    if (((temp_v1->unkA6C & 0x40) != 0) && (globalCtx->msgCtx.unk11F04 != 0x2A31)) {
        this->flags1 |= 0x8000;
        this->actor.speedXZ = 0.0f;
        return;
    }
    this->flags1 &= 0xFFFF7FFF;
    sp3F = temp_a3;
    sp38 = temp_v1;
    func_80BABA90(this, 1, 1U, temp_a3);
    if (((this->flags1 & 0x4000) != 0) && (temp_a3 == 5)) {
        sp38 = temp_v1;
        if (func_80147624(globalCtx) != 0) {
            this->flags2 &= 0xFFEF;
            temp_v1->unkA6C = (s32) (temp_v1->unkA6C & 0xEFFFFFFF);
            this->flags1 &= 0xBFFF;
            ActorCutscene_Stop(this->cutscenes[1]);
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->flags1 |= 0x40;
        }
    }
    temp_v0 = this->flags1;
    if ((temp_v0 & 0x100) != 0) {
        this->flags2 |= 8;
        func_80BAAF1C(this);
        goto block_11;
    }
    if ((temp_v0 & 0x200) != 0) {
        gSaveContext.weekEventReg[79] |= 0x40;
        this->flags2 |= 4;
        this->actor.speedXZ = 0.0f;
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x1E, 0x180EU);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
block_11:
    if (this->unk1F4[1] == -0x63) {
        if ((this->flags2 & 8) != 0) {
            gSaveContext.weekEventReg[33] |= 8;
        }
        this->actor.speedXZ = 0.0f;
        func_801A89A8(0x101400FF);
        this->flags2 |= 4;
        EnSuttari_SetNextEntrance(globalCtx, 0xD670);
        return;
    }
    this->unk3F2 = this->unk2DE;
    Math_ApproachF(&this->actor.speedXZ, 4.0f, 0.2f, 0.5f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    func_80BAB374((Actor *) this, globalCtx);
}

void func_80BAD5F8(EnSuttari *this, GlobalContext *globalCtx) {
    u8 sp28;
    s16 sp26;

    sp26 = (s16) (s32) this->skelAnime.animCurrentFrame;
    if ((sp26 == SkelAnime_GetFrameCount((AnimationHeaderCommon *) sAnimations[this->animationIdx].animation)) && (this->animationIdx == 0) && ((this->flags1 & 0x20) != 0)) {
        this->animationIdx = 2;
        func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) sAnimations, 2);
    }
    this->unk42A = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((func_80133038(globalCtx, &D_80BAE820, (struct_80133038_arg2 *) &sp28) == 0) || ((sp28 != this->unk428) && (func_80BABF64((u8 *) this, globalCtx, &sp28) == 0))) {
        this->actor.flags &= -2;
        sp28 = 0;
    } else {
        this->actor.flags |= 1;
    }
    this->unk428 = sp28;
    func_80BAC2FC((Actor *) this, globalCtx);
    if ((this->unk430 == 1) && (this->unk404->unk1 == 0xFF)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_80BAB434(this);
    if (((this->flags1 & 0x20) != 0) && (this->unk430 == 0) && (sp28 != 7)) {
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            func_801518B0(globalCtx, 0x2A02U, (Actor *) this);
            this->actionFunc = func_80BAD130;
        } else if ((this->actor.xzDistToPlayer < 100.0f) || (this->actor.isTargeted != 0)) {
            func_800B863C((Actor *) this, globalCtx);
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BAD7F8(EnSuttari *this, GlobalContext *globalCtx) {
    u8 sp28;
    s16 sp26;

    sp26 = (s16) (s32) this->skelAnime.animCurrentFrame;
    if (this->enFsn == 0) {
        this->enFsn = EnSuttari_GetActorById(globalCtx, 0x1C4);
        return;
    }
    if (((this->flags1 & 0x2000) != 0) && (this->animationIdx == 1) && (sp26 == SkelAnime_GetFrameCount((AnimationHeaderCommon *) sAnimations[this->animationIdx].animation))) {
        this->animationIdx = 2;
        func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) sAnimations, 2);
    }
    this->unk42A = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((func_80133038(globalCtx, &D_80BAE820, (struct_80133038_arg2 *) &sp28) == 0) || ((sp28 != this->unk428) && (func_80BABF64((u8 *) this, globalCtx, &sp28) == 0))) {
        this->actor.flags &= -2;
        sp28 = 0;
    } else {
        this->actor.flags |= 1;
    }
    this->unk428 = sp28;
    func_80BAC2FC((Actor *) this, globalCtx);
    if ((this->unk430 == 1) && (this->unk404->unk1 == 0xFF)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (((this->flags1 & 0x20) != 0) && (sp28 != 9)) {
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            func_801518B0(globalCtx, 0x2A02U, (Actor *) this);
            this->actionFunc = func_80BAD130;
        } else if ((this->actor.xzDistToPlayer < 100.0f) || (this->actor.isTargeted != 0)) {
            func_800B863C((Actor *) this, globalCtx);
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BADA08(EnSuttari *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actor.flags &= 0xFFFEFFFF;
        func_80BAAB78((Actor *) this, globalCtx);
        gSaveContext.weekEventReg[81] |= 4;
        return;
    }
    if (this->actor.xzDistToPlayer < 500.0f) {
        this->actor.flags |= 0x10000;
        func_800B8614((Actor *) this, globalCtx, 500.0f);
    }
}

void func_80BADA9C(EnSuttari *this, GlobalContext *globalCtx) {
    u8 sp2F;
    s16 sp2C;
    u8 temp_v0_2;
    void *temp_v0;

    sp2F = func_80152498(&globalCtx->msgCtx);
    sp2C = (s16) (s32) this->skelAnime.animCurrentFrame;
    if ((this->flags1 & 1) != 0) {
        this->unk3F2 = this->unk2DE;
        func_80BAA9B4(this);
    } else if ((this->animationIdx == 7) && (sp2C == SkelAnime_GetFrameCount((AnimationHeaderCommon *) sAnimations[this->animationIdx].animation))) {
        this->animationIdx = 1;
        func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) sAnimations, 1);
    }
    if (sp2F == 5) {
        if (func_80147624(globalCtx) != 0) {
            if ((this->flags1 & 0x400) != 0) {
                if (this->textId == 0x29EE) {
                    ActorCutscene_Stop(this->cutscenes[this->cutsceneIdx]);
                }
                this->flags1 &= 0xFBFF;
                if ((this->flags2 & 1) != 0) {
                    temp_v0 = globalCtx->actorCtx.actorList[2].first->unkA80;
                    temp_v0->unk264 = (u16) (temp_v0->unk264 | 0x10);
                    this->flags2 &= 0xFFFE;
                }
                globalCtx->msgCtx.unk11F22 = 0x43;
                globalCtx->msgCtx.unk12023 = 4;
                this->textId = 0;
                if ((this->flags1 & 1) != 0) {
                    this->actionFunc = func_80BACA14;
                    return;
                }
                this->actionFunc = func_80BAD7F8;
                return;
            }
            func_80BAAB78((Actor *) this, globalCtx);
            goto block_23;
        }
        goto block_23;
    }
    if ((sp2F == 4) && (func_80147624(globalCtx) != 0)) {
        temp_v0_2 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {

            } else {
                func_8019F230();
                func_80BAAB78((Actor *) this, globalCtx);
            }
        } else {
            func_8019F208();
            this->flags1 |= 0x800;
            func_80BAAB78((Actor *) this, globalCtx);
        }
    }
block_23:
    if ((this->flags1 & 4) == 0) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
}

void func_80BADD0C(EnSuttari *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    if (ActorCutscene_GetCanPlayNext(this->cutscenes[this->cutsceneIdx]) != 0) {
        temp_v0 = this->cutsceneIdx;
        if (temp_v0 == 0) {
            ActorCutscene_Start(this->cutscenes[temp_v0], (Actor *) this->enFsn);
        } else {
            ActorCutscene_Start(this->cutscenes[temp_v0], (Actor *) this);
        }
        func_80BAAA94(this);
        this->actionFunc = func_80BADA9C;
        return;
    }
    ActorCutscene_SetIntentToPlay(this->cutscenes[this->cutsceneIdx]);
}

void func_80BADDB4(EnSuttari *this, GlobalContext *globalCtx) {
    func_80BABA90(this, 1, 1U);
    func_80BAB434(this);
    if ((gSaveContext.weekEventReg[51] & 0x10) != 0) {
        this->actionFunc = func_80BADE14;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BADE14(EnSuttari *this, GlobalContext *globalCtx) {
    func_80BABA90(this, 1, 2U);
    if (this->unk1F4[1] == -0x63) {
        this->actor.speedXZ = 0.0f;
    } else {
        this->unk3F2 = this->unk2DE;
        Math_ApproachF(&this->actor.speedXZ, 6.0f, 0.2f, 0.5f);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BADE8C(EnSuttari *this, GlobalContext *globalCtx) {
    this->unk3F2 = this->unk2DE;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xBB8, (s16) 0);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actor.flags &= 0xFFFEFFFF;
        func_801518B0(globalCtx, 0x2A3AU, (Actor *) this);
        this->actionFunc = func_80BAD130;
        return;
    }
    this->actor.flags |= 0x10000;
    func_800B8614((Actor *) this, globalCtx, 500.0f);
}

void func_80BADF3C(EnSuttari *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;

    func_80BABB90(this, 0);
    if (this->unk1F4[0] == -0x63) {
        Actor_MarkForDeath((Actor *) this);
    }
    temp_v0 = this->unk3F6;
    this->unk3F2 = this->unk2DE;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk3F6 = temp_v0 - 1;
        phi_v1 = this->unk3F6;
    }
    if (phi_v1 == 0) {
        Math_ApproachF(&this->actor.speedXZ, 6.0f, 0.2f, 0.5f);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void EnSuttari_Init(EnSuttari *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    EnSuttari *this = (EnSuttari *) thisx;

    temp_a1 = &this->collider;
    if ((gSaveContext.weekEventReg[79] & 0x40) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &sDamageTable, &sColChkInfoInit2);
    this->actor.flags &= -2;
    EnSuttari_GetPaths(this, globalCtx);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = (void (*)(EnSuttari *, GlobalContext *)) func_80BAC6E8;
    this->actor.gravity = -4.0f;
}

void EnSuttari_Destroy(EnSuttari *this, GlobalContext *globalCtx) {
    EnSuttari *this = (EnSuttari *) thisx;
    if ((globalCtx->sceneNum == 0x6E) && ((this->flags2 & 4) == 0)) {
        this = this;
        globalCtx = globalCtx;
        func_801A89A8(0x101400FF);
    }
    Collider_DestroyCylinder(globalCtx, this + 0x198);
}

void EnSuttari_Update(EnSuttari *this, GlobalContext *globalCtx) {
    Actor *sp24;
    SkelAnime *sp20;
    Actor *temp_v1;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    s32 temp_v0;
    EnSuttari *this = (EnSuttari *) thisx;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    sp24 = temp_v1;
    this->actionFunc(this, globalCtx);
    if (((this->flags1 & 8) != 0) && ((this->flags2 & 0x10) != 0) && ((temp_v1->unkA6C * 8) < 0)) {
        temp_v1->freezeTimer = 3;
    }
    if ((this->flags1 & 0x8000) == 0) {
        func_80BAB4F0((Actor *) this, globalCtx);
    }
    if ((this->flags2 & 2) != 0) {
        EnSuttari_UpdateTime();
    }
    if (this->unk428 != 0) {
        temp_v0 = this->animationIdx;
        temp_a0 = &this->skelAnime;
        if ((temp_v0 == 2) || (temp_v0 == 6)) {
            sp20 = temp_a0;
            if ((func_801378B8(temp_a0, 8.0f) != 0) || (func_801378B8(temp_a0, 16.0f) != 0)) {
                Audio_PlayActorSound2((Actor *) this, 0x298BU);
                return;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return;
        }
        if (((temp_v0 == 0) || (temp_v0 == 5)) && ((temp_a0_2 = &this->skelAnime, sp20 = temp_a0_2, (func_801378B8(temp_a0_2, 8.0f) != 0)) || (func_801378B8(temp_a0_2, 17.0f) != 0))) {
            Audio_PlayActorSound2((Actor *) this, 0x298BU);
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

s32 EnSuttari_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp24;
    void *temp_v1;

    if (arg1 == 0xF) {
        *arg2 = &D_0600AF90;
        if ((arg5->unk1E4 & 4) == 0) {
            SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
            SysMatrix_InsertXRotation_s(arg5->unk3F2, 1);
            SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2DC * -1), 1);
            SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
        }
    }
    if (arg1 == 8) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk2E4 * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2E2 * -1), 1);
    }
    if ((arg1 == 8) || (arg1 == 9) || (arg1 == 0xC)) {
        temp_v1 = arg5 + (arg1 * 2);
        sp24 = temp_v1;
        arg4->y += (s32) (Math_SinS(temp_v1->unk2FA) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1->unk31A) * 200.0f);
    }
    return 0;
}

void EnSuttari_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    MtxF *sp44;
    Actor *temp_v0_2;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    u16 temp_v0;

    temp_v0 = arg4->unk1E4;
    if (((((temp_v0 & 8) != 0) && ((temp_v0 & 0x10) != 0)) || (((temp_v0 & 2) != 0) && ((temp_v0 & 0x20) == 0)) || (((temp_v0 & 4) != 0) && ((temp_v0 & 0x20) == 0))) && (arg1 == 8)) {
        sp44 = SysMatrix_GetCurrentState();
        SysMatrix_MultiplyVector3fByState(&D_80BAE95C, arg4 + 0x3F8);
        if (arg4->child == 0) {
            if ((arg4->unk1E4 & 0x100) != 0) {
                temp_v0_2 = Actor_SpawnAsChild(arg0 + 0x1CA0, arg4, arg0, 0x264, sp44->mf[3][0], sp44->mf[3][1], sp44->mf[3][2], (s16) 0, (s16) 0, (s16) 0, -1);
                if (temp_v0_2 != 0) {
                    func_8018219C(sp44, (Vec3s *) &temp_v0_2->shape, 0);
                }
            } else {
                func_8012C28C(arg0->state.gfxCtx);
                temp_a0 = arg0->state.gfxCtx;
                temp_v1 = temp_a0->polyOpa.p;
                temp_a0->polyOpa.p = temp_v1 + 8;
                temp_v1->words.w1 = (u32) &D_06013380;
                temp_v1->words.w0 = 0xDE000000;
            }
        }
    }
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_80BAE950, (Vec3f *) &arg4->focus);
    }
}

void EnSuttari_UnkDraw(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void EnSuttari_Draw(EnSuttari *this, GlobalContext *globalCtx) {
    ? sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Gfx *sp44;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 *temp_a1;
    EnSuttari *this = (EnSuttari *) thisx;

    if ((this->flags1 & 0x80) != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s0 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp44 = temp_v0;
        sp44->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0xFF, 0xFF, 0xFF, 0);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060024;
        sp40 = temp_v0_2;
        sp40->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0x37, 0x37, 0xFF, 0);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0;
        temp_v0_3->words.w0 = 0xE7000000;
        func_801343C0(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnSuttari_OverrideLimbDraw, EnSuttari_PostLimbDraw, EnSuttari_UnkDraw, (Actor *) this);
        if ((this->flags1 & 0x80) != 0) {
            func_8012C2DC(globalCtx->state.gfxCtx);
            sp5C.unk0 = (f32) this->actor.world.pos.x;
            temp_a1 = &sp50;
            sp5C.unk4 = (f32) this->actor.world.pos.y;
            sp5C.unk8 = (f32) this->actor.world.pos.z;
            sp50 = 0.2f;
            sp54 = 0.2f;
            sp58 = 0.2f;
            func_800BC620((Vec3f *) &sp5C, (Vec3f *) temp_a1, 0xFF, globalCtx);
        }
    }
}
