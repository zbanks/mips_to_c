CRASHED

typedef struct ObjMine {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderJntSph unk_144;            /* inferred */
    /* 0x0164 */ ColliderJntSphElement unk_164;     /* inferred */
    /* 0x01A4 */ void (*actionFunc)(ObjMine *, GlobalContext *);
    /* 0x01A8 */ f32 unk_1A8;                       /* inferred */
    /* 0x01AC */ s32 unk_1AC;                       /* inferred */
    /* 0x01B0 */ s32 unk_1B0;                       /* inferred */
    /* 0x01B4 */ void *unk_1B4;                     /* inferred */
    /* 0x01B8 */ char pad_1B8[0x11FC];              /* maybe part of unk_1B4[1152]? */
} ObjMine;                                          /* size = 0x13B4 */

struct _mips2c_stack_ObjMine_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjMine_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjMine_Init {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderJntSph *sp2C;                /* inferred */
    /* 0x30 */ ActorShape *sp30;                    /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_ObjMine_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderJntSph *sp20;                /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A811D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A8120C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A81288 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A8131C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A81384 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A8140C {};              /* size 0x0 */

struct _mips2c_stack_func_80A8146C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x12];
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x18];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A81544 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A81640 {};              /* size 0x0 */

struct _mips2c_stack_func_80A8164C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A81684 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A81714 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A81818 {};              /* size 0x0 */

struct _mips2c_stack_func_80A81868 {};              /* size 0x0 */

struct _mips2c_stack_func_80A819A4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A81A00 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Vec3f *sp1C;                         /* inferred */
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A81AA4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A81B14 {};              /* size 0x0 */

struct _mips2c_stack_func_80A81B7C {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0xC];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80A81D70 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A81DEC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0x1C];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A81E7C {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ u32 sp44;                            /* inferred */
    /* 0x48 */ CollisionPoly *sp48;                 /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0xC];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x8];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80A828A8 {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ f32 *sp70;                           /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad_90[0xC];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x8];                    /* maybe part of sp9C[3]? */
    /* 0xA8 */ ? spA8;                              /* inferred */
    /* 0xA8 */ char pad_A8[0x1C];
    /* 0xC4 */ s32 spC4;                            /* inferred */
    /* 0xC8 */ ? spC8;                              /* inferred */
    /* 0xC8 */ char pad_C8[0xC];
    /* 0xD4 */ ? spD4;                              /* inferred */
    /* 0xD4 */ char pad_D4[0xC];
    /* 0xE0 */ ? spE0;                              /* inferred */
    /* 0xE0 */ char pad_E0[0x10];
};                                                  /* size = 0xF0 */

struct _mips2c_stack_func_80A82C28 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A82F84 {};              /* size 0x0 */

struct _mips2c_stack_func_80A82F98 {};              /* size 0x0 */

struct _mips2c_stack_func_80A82FA8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A82FC8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x8];                    /* maybe part of sp2C[3]? */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x40];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0xC];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0xC];
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x8];                    /* maybe part of sp90[3]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ ? spA0;                              /* inferred */
    /* 0xA0 */ char pad_A0[0x10];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80A83214 {};              /* size 0x0 */

struct _mips2c_stack_func_80A83258 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A832BC {};              /* size 0x0 */

struct _mips2c_stack_func_80A832D0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ f32 *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0xC];                    /* maybe part of sp34[4]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x10];                   /* maybe part of sp70[5]? */
    /* 0x84 */ s16 sp84;                            /* inferred */
    /* 0x86 */ s16 sp86;                            /* inferred */
    /* 0x88 */ char pad_88[0x8];                    /* maybe part of sp86[5]? */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ s32 sp94;                            /* inferred */
    /* 0x98 */ char pad_98[0x8];                    /* maybe part of sp94[3]? */
    /* 0xA0 */ s32 spA0;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x4];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80A83A74 {};              /* size 0x0 */

struct _mips2c_stack_func_80A83A88 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A83B14 {};              /* size 0x0 */

struct _mips2c_stack_func_80A83B28 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x6];                    /* maybe part of sp28[2]? */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A83CEC {};              /* size 0x0 */

struct _mips2c_stack_func_80A83D00 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A83E7C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A83FBC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x14];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A84088 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ f32 *sp4C;                           /* inferred */
    /* 0x50 */ char pad_50[0x30];                   /* maybe part of sp4C[13]? */
    /* 0x80 */ GraphicsContext *sp80;               /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x18];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A84338 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0x1C];
};                                                  /* size = 0x60 */

void func_80A811D0(ObjMine *arg0, s32 arg1);        /* static */
s32 func_80A8120C(Vec3f *arg0, Vec3f *arg1, Actor *); /* static */
s32 func_80A81288(Vec3f *arg0, f32 *arg1, f32 *arg2, f32 *arg3); /* static */
void func_80A8131C(ObjMine *arg0, GlobalContext *arg1); /* static */
void func_80A81384(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A8140C(Actor *arg0);                     /* static */
void func_80A8146C(Actor *arg0, s16 *arg1, s16 *arg2); /* static */
void func_80A81544(Actor *arg0, Vec3f *arg1, f32 *); /* static */
void func_80A81640(Actor *arg0);                    /* static */
void func_80A8164C(f32 *arg0);                      /* static */
void func_80A81684(f32 *arg0);                      /* static */
? func_80A81714(Vec3f *arg0, Vec3f *arg1, f32 arg2); /* static */
void func_80A81818(Actor *arg0);                    /* static */
void func_80A81868(ObjMine *arg0, s32 arg1);        /* static */
void func_80A819A4(ObjMine *arg0, s32 arg1);        /* static */
void func_80A81A00(Actor *arg0, f32, Actor *);      /* static */
void func_80A81AA4(Actor *arg0);                    /* static */
void func_80A81B14(Actor *arg0);                    /* static */
void func_80A81B7C(ObjMine *arg0, s32 arg1);        /* static */
void func_80A81D70(ObjMine *arg0, s32 arg1);        /* static */
void func_80A81DEC(Actor *arg0);                    /* static */
void func_80A81E7C(Actor *arg0, s32 arg1);          /* static */
? func_80A81FFC(Actor *);                           /* static */
void func_80A828A8(Actor *arg0);                    /* static */
void func_80A82C28(Actor *arg0, GlobalContext *);   /* static */
void func_80A82F84(ObjMine *arg0);                  /* static */
void func_80A82F98(s32 arg0, ? arg1);               /* static */
void func_80A82FA8(ObjMine *arg0);                  /* static */
void func_80A82FC8(ObjMine *arg0, s32 arg1);        /* static */
void func_80A83214(Actor *arg0);                    /* static */
void func_80A83258(Actor *arg0, ? arg1);            /* static */
void func_80A832BC(ObjMine *arg0);                  /* static */
void func_80A832D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A83A74(ObjMine *arg0);                  /* static */
void func_80A83A88(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A83B14(ObjMine *arg0);                  /* static */
void func_80A83B28(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A83CEC(ObjMine *arg0);                  /* static */
void func_80A83D00(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A83E7C(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A83FBC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A84088(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A84338(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06000030;
extern ? D_06002068;
extern ? D_06002188;
static ColliderJntSphElementInit D_80A84570 = {{2, {0, 0, 0}, {0x1CBFFBE, 0, 0}, 0, 1, 1}, {0, {{0, 0, 0}, 0x1E}, 0x64}};
static ColliderJntSphInit D_80A84594 = {{9, 0, 9, 0x19, 0x10, 0}, 1, &D_80A84570};
static ? D_80A845A4;                                /* unable to generate initializer */
static Vec3f D_80A845C4 = {1.0f, 0.0f, 0.0f};
static Vec3f D_80A845D0[2] = {{0.0f, 1.0f, 0.0f}, {0.0f, 0.0f, 1.0f}};
static InitChainEntry D_80A845E8[6];                /* unable to generate initializer */

void func_80A811D0(ObjMine *arg0, s32 arg1) {
    Math_Vec3s_ToVec3f(arg0 + 0x24, arg0->unk_1B4 + (arg1 * 6));
}

s32 func_80A8120C(Vec3f *arg0, Vec3f *arg1) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = Math3D_Vec3fMagnitude(arg0);
    if (temp_f0 < 0.001f) {
        return 0;
    }
    temp_f2 = 1.0f / temp_f0;
    arg1->x = arg0->x * temp_f2;
    arg1->y = arg0->y * temp_f2;
    arg1->z = arg0->z * temp_f2;
    return 1;
}

s32 func_80A81288(Vec3f *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = Math3D_Vec3fMagnitude(arg0);
    if (temp_f0 < 0.001f) {
        return 0;
    }
    temp_f2 = 1.0f / temp_f0;
    arg1->unk_0 = arg0->x * temp_f2;
    arg1[1] = arg0->y * temp_f2;
    arg1[2] = arg0->z * temp_f2;
    *arg2 = temp_f0;
    *arg3 = temp_f2;
    return 1;
}

void func_80A8131C(ObjMine *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 9, arg0->actor.world.pos.x, arg0->actor.world.pos.y - 15.0f, arg0->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    if (temp_v0 != 0) {
        temp_v0->unk_1F0 = 0;
    }
}

void func_80A81384(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0_2;
    void *temp_v0;

    temp_v0 = arg0->unk_160;
    temp_v0_2 = Actor_Spawn(arg1 + 0x1CA0, arg1, 9, (f32) temp_v0->unk_30, (f32) temp_v0->unk_32 - 15.0f, (f32) temp_v0->unk_34, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    if (temp_v0_2 != 0) {
        temp_v0_2->unk_1F0 = 0;
    }
}

s32 func_80A8140C(Actor *arg0) {
    void *temp_v0;

    if ((arg0->unk_157 & 1) != 0) {
        return 1;
    }
    if (((arg0->unk_156 & 2) != 0) && (temp_v0 = arg0[1].home.pos.y, (temp_v0->unk_0 == 0x185)) && (arg0->room == temp_v0->unk_3)) {
        return 1;
    }
    return 0;
}

void func_80A8146C(Actor *arg0, s16 *arg1, s16 *arg2) {
    ? sp40;
    s16 sp3E;
    ? sp2C;
    Vec3f *sp20;
    Actor *temp_s0;
    Vec3f *temp_a0;
    s16 temp_v0;
    void *temp_a1;
    void *temp_v1;

    temp_a1 = arg0->unk_160;
    temp_s0 = arg0[1].home.pos.x;
    arg0 = arg0;
    Math_Vec3s_ToVec3f((Vec3f *) &sp40, temp_a1 + 0x30);
    temp_a0 = temp_s0 + 0x24;
    sp20 = temp_a0;
    temp_v0 = Math_Vec3f_Yaw(temp_a0, (Vec3f *) &sp40);
    sp3E = temp_v0;
    temp_v1 = arg0->unk_160;
    if ((*temp_v1->unk_24 & 0x13820) != 0) {
        *arg1 = temp_s0->shape.rot.y;
        *arg2 = temp_s0->shape.rot.y - temp_v0;
        return;
    }
    Math_Vec3s_ToVec3f((Vec3f *) &sp2C, temp_v1 + 0xE);
    *arg1 = Actor_YawBetweenActors(temp_s0, arg0);
    *arg2 = Math_Vec3f_Yaw(sp20, (Vec3f *) &sp2C) - sp3E;
}

void func_80A81544(Actor *arg0, Vec3f *arg1) {
    void *sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    Actor *temp_a2;
    f32 *temp_a0;
    void *temp_v0;
    void *temp_v1;

    temp_a2 = arg0->unk_160;
    temp_v1 = arg0[1].home.pos.x;
    temp_v0 = temp_a2 + 0x30;
    if ((*temp_a2->world.pos.x & 0x13820) != 0) {
        sp2C = temp_v1;
        SysMatrix_StatePush();
        Matrix_RotateY(temp_v1->unk_BE, 0U);
        SysMatrix_InsertXRotation_s(temp_v1->unk_BC, 1);
        SysMatrix_GetStateTranslationAndScaledZ(1.0f, arg1);
        SysMatrix_StatePop();
        return;
    }
    temp_a0 = &sp20;
    sp20 = (f32) temp_v0->unk_0 - temp_v1->unk_24;
    sp24 = (f32) temp_v0->unk_2 - temp_v1->unk_28;
    sp28 = (f32) temp_v0->unk_4 - temp_v1->unk_2C;
    if (func_80A8120C((Vec3f *) temp_a0, arg1, temp_a2) == 0) {
        Math_Vec3f_Copy(arg1, D_80A845D0);
    }
}

void func_80A81640(Actor *arg0) {

}

void func_80A8164C(f32 *arg0) {
    MtxF *temp_v0;

    temp_v0 = SysMatrix_GetCurrentState();
    temp_v0->mf[3][0] = arg0->unk_0;
    temp_v0->mf[3][1] = arg0[1];
    temp_v0->mf[3][2] = arg0[2];
}

void func_80A81684(f32 *arg0) {
    MtxF *temp_v0;

    temp_v0 = SysMatrix_GetCurrentState();
    temp_v0->mf[0][0] = arg0->unk_0;
    temp_v0->mf[0][1] = arg0[1];
    temp_v0->mf[0][3] = 0.0f;
    temp_v0->mf[0][2] = arg0[2];
    temp_v0->mf[1][0] = arg0[3];
    temp_v0->mf[1][1] = arg0[4];
    temp_v0->mf[1][3] = 0.0f;
    temp_v0->mf[1][2] = arg0[5];
    temp_v0->mf[2][0] = arg0[6];
    temp_v0->mf[2][1] = arg0[7];
    temp_v0->mf[2][3] = 0.0f;
    temp_v0->mf[3][0] = 0.0f;
    temp_v0->mf[3][1] = 0.0f;
    temp_v0->mf[3][2] = 0.0f;
    temp_v0->mf[3][3] = 1.0f;
    temp_v0->mf[2][2] = arg0[8];
}

? func_80A81714(Vec3f *arg0, Vec3f *arg1, f32 arg2) {
    ? sp3C;
    ? sp30;
    ? sp24;
    f32 sp20;

    sp20 = (bitwise f32) Math3D_Parallel(arg0, arg1);
    if (cos_rad(arg2) <= sp20) {
        Math_Vec3f_Copy(arg0, arg1);
        return 1;
    }
    SysMatrix_StatePush();
    Math_Vec3f_Copy((Vec3f *) &sp30, arg0);
    Math3D_CrossProduct(arg0, arg1, (Vec3f *) &sp3C);
    if (func_80A8120C((Vec3f *) &sp3C, (Vec3f *) &sp24) != 0) {
        SysMatrix_InsertRotationAroundUnitVector_s((s16) (s32) (arg2 * 10430.378f), (Vec3f *) &sp24, 0);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp30, arg0);
    } else {
        SysMatrix_SetStateXRotation(arg2);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp30, arg0);
    }
    SysMatrix_StatePop();
    return 0;
}

void func_80A81818(Actor *arg0) {
    arg0->unk_160->unk_30 = (s16) (s32) arg0->world.pos.x;
    arg0->unk_160->unk_32 = (s16) (s32) arg0->world.pos.y;
    arg0->unk_160->unk_34 = (s16) (s32) arg0->world.pos.z;
}

void func_80A81868(ObjMine *arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 *temp_a2;
    s16 *temp_a2_2;
    s16 *temp_a2_3;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    s16 *phi_a2;
    s32 phi_v1;
    s16 *phi_a2_2;
    s32 phi_v1_2;

    arg0->unk_1B8 = 1.0f;
    arg0->unk_1C8 = 1.0f;
    arg0->unk_1D8 = 1.0f;
    arg0->unk_1E0 = 1.0f;
    temp_a3 = arg1 & 3;
    temp_f12 = (f32) arg0->actor.home.rot.z * 5.0f;
    phi_v1 = 0;
    phi_v1_2 = 0;
    if (arg1 > 0) {
        temp_f2 = (f32) arg1;
        temp_v0 = arg0 + 0x1B8;
        temp_v0->unk_40 = (f32) -sqrtf(0.001984f / temp_f2);
        temp_v0->unk_44 = (f32) ((0.00031746097f * temp_f2) + 0.95f);
    }
    temp_v0_2 = arg0 + 0x1B8;
    temp_a2 = temp_v0_2 + 0x60;
    temp_v0_2->unk_58 = 0.0002f;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if (arg1 > 0) {
        if (temp_a3 != 0) {
            do {
                temp_v1 = phi_v1 + 1;
                *phi_a2 = 0x4000;
                temp_a2_2 = phi_a2 + 4;
                phi_a2 = temp_a2_2;
                phi_v1 = temp_v1;
                phi_a2_2 = temp_a2_2;
                phi_v1_2 = temp_v1;
            } while (temp_a3 != temp_v1);
            if (temp_v1 != arg1) {
                goto block_7;
            }
        } else {
block_7:
            do {
                temp_v1_2 = phi_v1_2 + 4;
                phi_a2_2[2] = 0x4000;
                phi_a2_2[4] = 0x4000;
                phi_a2_2[6] = 0x4000;
                temp_a2_3 = phi_a2_2 + 0x10;
                temp_a2_3->unk_-10 = 0x4000;
                phi_a2_2 = temp_a2_3;
                phi_v1_2 = temp_v1_2;
            } while (temp_v1_2 != arg1);
        }
    }
    if (temp_f12 < 0.0f) {
        temp_v0_2->unk_5C = -1.0f;
        return;
    }
    if (temp_f12 <= 21.0f) {
        temp_v0_2->unk_5C = 0.0f;
        return;
    }
    temp_f0 = temp_f12 - 20.0f;
    temp_v0_2->unk_5C = (f32) (temp_f0 * temp_f0);
}

void func_80A819A4(ObjMine *arg0, s32 arg1) {
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
    Collider_UpdateSpheres(0, arg0 + 0x144);
}

void func_80A81A00(Actor *arg0) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *sp1C;
    Actor *temp_a3;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    Vec3f *temp_v0;
    f32 *temp_a0;
    f32 temp_f10;

    temp_a3 = arg0;
    temp_a0 = &sp28;
    sp28 = -temp_a3[1].colChkInfo.displacement.x;
    sp2C = 1.0f;
    temp_f10 = temp_a3[1].colChkInfo.displacement.y;
    arg0 = temp_a3;
    sp30 = -temp_f10;
    func_80A8120C((Vec3f *) temp_a0, temp_a3 + 0x1C4, temp_a3);
    temp_v0 = arg0 + 0x1B8;
    temp_a1 = temp_v0 + 0xC;
    sp20 = temp_a1;
    sp24 = temp_v0;
    Math3D_CrossProduct(&D_80A845C4, temp_a1, (Vec3f *) &sp28);
    temp_a1_2 = sp24 + 0x18;
    sp1C = temp_a1_2;
    func_80A8120C((Vec3f *) &sp28, temp_a1_2);
    Math3D_CrossProduct(sp20, temp_a1_2, (Vec3f *) &sp28);
    func_80A8120C((Vec3f *) &sp28, sp24);
}

void func_80A81AA4(Actor *arg0) {
    f32 temp_f0;

    temp_f0 = -(((f32) (arg0->params & 0x3F) * 12.0f) + 10.0f);
    arg0->world.pos.x = (arg0[1].floorPoly * temp_f0) + arg0->home.pos.x;
    arg0->world.pos.y = (arg0->unk_1C8 * temp_f0) + arg0->home.pos.y;
    arg0->world.pos.z = (arg0[1].floorHeight * temp_f0) + arg0->home.pos.z;
}

void func_80A81B14(Actor *arg0) {
    f32 temp_f0;

    temp_f0 = 1.0f / (((f32) (arg0->params & 0x3F) * 12.0f) + 10.0f);
    arg0[1].colChkInfo.displacement.x = (arg0->world.pos.x - arg0->home.pos.x) * temp_f0;
    arg0[1].colChkInfo.displacement.y = (arg0->world.pos.z - arg0->home.pos.z) * temp_f0;
}

void func_80A81B7C(ObjMine *arg0, s32 arg1) {
    f32 sp58;
    f32 temp_f0;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f26;
    s32 temp_s1;
    void *temp_s0;
    void *temp_s4;
    void *phi_s0;
    f32 phi_f24;
    s32 phi_s1;
    f32 phi_f24_2;

    sp58 = (f32) arg0->actor.home.rot.z * 5.0f;
    arg0->unk_1B8 = 0.9f;
    arg0->unk_1D4 = 0.003f;
    temp_s4 = arg0 + 0x1B8;
    temp_s4->unk_20 = (s16) (Rand_Next() >> 0x13);
    temp_s4->unk_24 = -0.0002f;
    temp_s4->unk_30 = -0.0002f;
    temp_f26 = temp_s4->unk_1C * 6.0f;
    temp_f24 = arg0->actor.home.pos.y;
    phi_s0 = temp_s4 + 0x44;
    phi_f24 = temp_f24;
    phi_s1 = 0;
    phi_f24_2 = temp_f24;
    if (arg1 > 0) {
        do {
            temp_f24_2 = phi_f24 + 12.0f;
            phi_s0->unk_0 = 1.0f;
            phi_s0->unk_10 = 1.0f;
            phi_s0->unk_20 = 1.0f;
            phi_s0->unk_28 = temp_f24_2;
            phi_s0->unk_24 = (f32) arg0->actor.home.pos.x;
            phi_s0->unk_2C = (f32) arg0->actor.home.pos.z;
            phi_s0->unk_30 = (f32) ((Rand_ZeroOne() - 0.5f) * temp_f26);
            phi_s0->unk_34 = (f32) ((Rand_ZeroOne() - 0.5f) * temp_f26);
            temp_s1 = phi_s1 + 1;
            temp_s0 = phi_s0 + 0x48;
            temp_s0->unk_-10 = (f32) ((Rand_ZeroOne() - 0.5f) * temp_f26);
            phi_s0 = temp_s0;
            phi_f24 = temp_f24_2;
            phi_s1 = temp_s1;
            phi_f24_2 = temp_f24_2;
        } while (temp_s1 != arg1);
    }
    temp_s4->unk_28 = phi_f24_2;
    temp_f24_3 = phi_f24_2 - 18.0f;
    temp_s4->unk_2C = (f32) (phi_f24_2 * 0.97f);
    if (temp_s4->unk_2C < temp_f24_3) {
        temp_s4->unk_2C = temp_f24_3;
    }
    if (sp58 < 0.0f) {
        temp_s4->unk_34 = -1.0f;
        return;
    }
    if (sp58 <= 37.0f) {
        temp_s4->unk_34 = 0.0f;
        return;
    }
    temp_f0 = sp58 - 36.0f;
    temp_s4->unk_34 = (f32) (temp_f0 * temp_f0);
}

void func_80A81D70(ObjMine *arg0, s32 arg1) {
    SysMatrix_InsertTranslation(arg0->actor.home.pos.x, arg0->actor.home.pos.y + ((f32) arg1 * 12.0f) + 10.0f, arg0->actor.home.pos.z, 0);
    Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
    Collider_UpdateSpheres(0, arg0 + 0x144);
}

void func_80A81DEC(Actor *arg0) {
    ? sp1C;
    void *sp18;
    Vec3f *temp_a0;
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = arg0->params & 0x3F;
    if (temp_v0 == 0) {
        arg0->world.pos.y = arg0->home.pos.y + 12.0f + 10.0f;
        return;
    }
    temp_v1 = arg0 + (temp_v0 * 0x48) + 0x1B8;
    temp_a0 = temp_v1 + 8;
    sp18 = temp_v1;
    arg0 = arg0;
    Math_Vec3f_ScaleAndStore(temp_a0, 10.0f, (Vec3f *) &sp1C);
    Math_Vec3f_Sum(temp_v1 + 0x20, (Vec3f *) &sp1C, arg0 + 0x24);
}

void func_80A81E7C(Actor *arg0, s32 arg1) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    ? sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp4C;
    CollisionPoly *sp48;
    u32 sp44;
    f32 sp40;
    f32 sp3C;
    void *sp38;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 *temp_a2;
    void *temp_v1;

    arg0->unk_1F8 = 0;
    if (arg0[1].colChkInfo.displacement.y > -0.000001f) {
        temp_v1 = arg0 + 0x1B8;
        if (temp_v1->unk_34 <= Math3D_XZDistanceSquared(arg0->home.pos.x, arg0->home.pos.z, arg0->world.pos.x, arg0->world.pos.z)) {
            temp_a0 = &sp58;
            sp5C = 0.0f;
            sp58 = arg0->world.pos.x - arg0->home.pos.x;
            sp38 = temp_v1;
            sp60 = arg0->world.pos.z - arg0->home.pos.z;
            if (func_80A81288((Vec3f *) temp_a0, &sp4C, &sp40, &sp3C) != 0) {
                temp_a1 = &sp7C;
                temp_a2 = &sp70;
                sp70 = arg0->world.pos.x + (sp4C * 36.0f);
                sp74 = arg0->world.pos.y;
                sp78 = arg0->world.pos.z + (sp54 * 36.0f);
                sp7C = arg0->home.pos.x;
                sp80 = arg0->world.pos.y;
                sp38 = temp_v1;
                sp84 = arg0->home.pos.z;
                if (func_800C55C4(arg1 + 0x830, (Vec3f *) temp_a1, (Vec3f *) temp_a2, (Vec3f *) &sp64, &sp48, 1U, 0U, 0U, 1U, &sp44) != 0) {
                    temp_v1->unk_40 = 1;
                    temp_v1->unk_38 = (f32) (sp4C * -0.2f);
                    temp_v1->unk_3C = (f32) (sp54 * -0.2f);
                }
            }
        }
    }
}

/*
Failed to decompile function func_80A81FFC:

Label L80A82598 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80A828A8(Actor *arg0) {
    ? spE0;
    ? spD4;
    ? spC8;
    s32 spC4;
    ? spA8;
    f32 sp9C;
    ? sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp7C;
    f32 sp78;
    f32 *sp70;
    Vec3f *temp_s0;
    Vec3f *temp_s0_2;
    Vec3f *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_s6;
    s32 temp_v1;
    Vec3f *phi_s0;
    Vec3f *phi_s3;
    Vec3f *phi_a0;
    s32 phi_s5;
    f32 phi_f2;
    s32 phi_s6;

    sp84 = arg0->home.pos.x;
    temp_v1 = arg0->params & 0x3F;
    temp_s0 = arg0 + 0x1FC;
    sp88 = arg0->home.pos.y + 6.0f;
    sp8C = arg0->home.pos.z;
    phi_s0 = temp_s0;
    phi_s3 = NULL;
    phi_s6 = 0;
    if (temp_v1 > 0) {
        sp70 = arg0 + 0x1B8;
        spC4 = temp_v1;
        arg0 = arg0;
        do {
            phi_s0[4].x += phi_s0[5].x;
            phi_s0[4].y += phi_s0[5].y;
            phi_s0[4].z += phi_s0[5].z;
            Math_Vec3f_Scale(phi_s0 + 0x30, *sp70);
            temp_s1 = phi_s0 + 0x24;
            Math_Vec3f_Copy((Vec3f *) &sp90, temp_s1);
            temp_f0 = phi_s0[4].y;
            phi_s0[3].x += phi_s0[4].x;
            phi_s0[3].y += temp_f0;
            phi_s0[3].z += phi_s0[4].z;
            phi_s5 = 0;
            if ((phi_s0[3].y <= arg0->home.pos.y) && (temp_f0 < 0.0f)) {
                phi_s0[4].y = temp_f0 * 0.1f;
            }
            Math_Vec3f_Diff(temp_s1, (Vec3f *) &sp84, (Vec3f *) &spA8);
            if ((func_80A81288((Vec3f *) &spA8, &sp9C, &sp7C, &sp78) != 0) && (sp7C > 4.0f)) {
                Math_Vec3f_Copy((Vec3f *) &spD4, phi_s0 + 0xC);
                func_80A81714((Vec3f *) &spD4, (Vec3f *) &sp9C, 0.10471976f);
                if (phi_s3 == 0) {
                    phi_a0 = &D_80A845C4;
                } else {
                    phi_a0 = phi_s3;
                }
                Math3D_CrossProduct(phi_a0, (Vec3f *) &spD4, (Vec3f *) &spA8);
                if (func_80A8120C((Vec3f *) &spA8, (Vec3f *) &spE0) != 0) {
                    Math3D_CrossProduct((Vec3f *) &spD4, (Vec3f *) &spE0, (Vec3f *) &spA8);
                    if (func_80A8120C((Vec3f *) &spA8, (Vec3f *) &spC8) != 0) {
                        phi_s5 = 1;
                    }
                }
            }
            if (phi_s5 != 0) {
                Math_Vec3f_Copy(phi_s0, (Vec3f *) &spC8);
                Math_Vec3f_Copy(phi_s0 + 0xC, (Vec3f *) &spD4);
                Math_Vec3f_Copy(&phi_s0[2], (Vec3f *) &spE0);
            } else {
                sp7C = 4.0f;
            }
            if (sp7C >= 6.0f) {
                temp_f2 = phi_s0[1].x * 6.0f;
                phi_s0[3].x = temp_f2 + sp84;
                phi_s0[3].y = (phi_s0[1].y * 6.0f) + sp88;
                phi_s0[3].z = (phi_s0[1].z * 6.0f) + sp8C;
                phi_f2 = temp_f2;
            } else {
                temp_f0_2 = phi_s0[1].x;
                phi_s0[3].x = (temp_f0_2 * sp7C) + sp84;
                phi_s0[3].y = (phi_s0[1].y * sp7C) + sp88;
                phi_s0[3].z = (phi_s0[1].z * sp7C) + sp8C;
                phi_f2 = temp_f0_2 * 6.0f;
            }
            temp_s6 = phi_s6 + 1;
            temp_s0_2 = &phi_s0[6];
            sp84 = phi_s0[3].x + phi_f2;
            sp88 = temp_s0_2->unk_-20 + (temp_s0_2->unk_-38 * 6.0f);
            sp8C = temp_s0_2->unk_-1C + (temp_s0_2->unk_-34 * 6.0f);
            phi_s0 = temp_s0_2;
            phi_s3 = phi_s0;
            phi_s6 = temp_s6;
        } while (temp_s6 != spC4);
    }
}

void func_80A82C28(Actor *arg0) {
    func_80A81E7C(arg0);
    func_80A81FFC(arg0);
    func_80A828A8(arg0);
}

void ObjMine_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp44;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    ActorShape *sp30;
    ColliderJntSph *sp2C;
    ActorShape *temp_a0;
    ColliderJntSph *temp_a1;
    Path *temp_v0_2;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_v0_3;
    ObjMine *this = (ObjMine *) thisx;

    temp_v0 = this->actor.params;
    sp44 = temp_v0 & 0xFF;
    sp38 = ((s32) temp_v0 >> 0xC) & 3;
    Actor_ProcessInitChain((Actor *) this, D_80A845E8);
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.z = 0;
    temp_a1 = &this->unk_144;
    sp2C = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_80A84594, &this->unk_164);
    temp_a0 = &this->actor.shape;
    if (sp38 == 0) {
        sp30 = temp_a0;
        ActorShape_Init(temp_a0, 0.0f, func_800B3FC0, 45.0f);
        this->actor.shape.shadowAlpha = 0x8C;
        this->unk_1A8 = *(&D_80A845A4 + ((((s32) this->actor.params >> 8) & 7) * 4));
        if (sp44 == 0xFF) {
            func_80A82F84(this);
        } else {
            this->unk_1B0 = 0;
            temp_v0_2 = &globalCtx->setupPathList[sp44];
            this->unk_1AC = temp_v0_2->count - 1;
            this->unk_1B4 = Lib_SegmentedToVirtual((void *) temp_v0_2->points);
            func_80A811D0(this, this->unk_1B0);
            func_80A82FA8(this);
        }
        SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (Vec3s *) sp30);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
        Collider_UpdateSpheres(0, sp2C);
        this->actor.floorHeight = func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp3C, (Actor *) this, (Vec3f *) &this->actor.world);
        return;
    }
    temp_v0_3 = this->actor.params & 0x3F;
    temp_f2 = (f32) temp_v0_3;
    this->actor.update = func_80A83E7C;
    temp_f0 = (temp_f2 * 21.0f) + 150.0f;
    this->actor.uncullZoneScale = temp_f0;
    this->actor.uncullZoneDownward = temp_f0;
    sp30 = (bitwise ActorShape *) temp_f2;
    sp34 = temp_v0_3;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 45.0f);
    this->actor.shape.shadowAlpha = 0x8C;
    if (sp38 == 1) {
        this->actor.draw = func_80A84088;
        func_80A81868(this, sp34);
        this->actor.world.pos.y = (-10.0f - ((bitwise f32) sp30 * 12.0f)) + this->actor.home.pos.y;
        func_80A819A4(this, sp34);
        func_800B4AEC(globalCtx, (Actor *) this, 0.0f);
        if (sp34 == 0) {
            func_80A83A74(this);
            return;
        }
        func_80A832BC(this);
        return;
    }
    this->actor.draw = func_80A84338;
    func_80A81B7C(this, sp34);
    this->actor.world.pos.y = ((bitwise f32) sp30 * 12.0f) + 10.0f + this->actor.home.pos.y;
    func_80A81D70(this, sp34);
    if (sp34 == 0) {
        func_80A83CEC(this);
        return;
    }
    func_80A83B14(this);
}

void ObjMine_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjMine *this = (ObjMine *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_144);
}

void func_80A82F84(ObjMine *arg0) {
    arg0->actionFunc = func_80A82F98;
}

void func_80A82F98(ObjMine *arg0, GlobalContext *arg1) {

}

void func_80A82FA8(ObjMine *arg0) {
    arg0->actor.flags |= 0x10;
    arg0->actionFunc = func_80A82FC8;
}

void func_80A82FC8(ObjMine *arg0, GlobalContext *arg1) {
    ? spA0;
    f32 sp9C;
    s32 sp90;
    ? sp84;
    ? sp78;
    ? sp38;
    Vec3f *sp2C;
    Vec3f *sp28;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_a1_2;
    s32 temp_at;
    f32 phi_f0;
    f32 phi_f12;
    s32 phi_a1;

    Math_Vec3s_ToVec3f((Vec3f *) &spA0, arg0->unk_1B4 + (arg0->unk_1B0 * 6) + 6);
    temp_a1 = arg0 + 0x24;
    temp_a2 = arg0 + 0x64;
    sp2C = temp_a2;
    sp28 = temp_a1;
    Math_Vec3f_Diff((Vec3f *) &spA0, temp_a1, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp2C);
    temp_f2 = arg0->unk_1A8;
    if ((temp_f0 < (temp_f2 * 8.0f)) && (temp_f2 > 2.0f)) {
        phi_f0 = ((temp_f2 - 2.0f) * 0.1f) + 2.0f;
        phi_f12 = temp_f2 * 0.03f;
    } else {
        phi_f0 = temp_f2;
        phi_f12 = temp_f2 * 0.16f;
    }
    sp9C = temp_f0;
    Math_StepToF(arg0 + 0x70, phi_f0, phi_f12);
    temp_f0_2 = arg0->actor.speedXZ;
    if ((temp_f0_2 + 0.05f) < temp_f0) {
        Math_Vec3f_Scale(sp2C, temp_f0_2 / temp_f0);
        arg0->actor.world.pos.x += arg0->actor.velocity.x;
        arg0->actor.world.pos.y += arg0->actor.velocity.y;
        arg0->actor.world.pos.z += arg0->actor.velocity.z;
    } else {
        temp_a1_2 = arg0->unk_1B0 + 1;
        temp_at = temp_a1_2 < arg0->unk_1AC;
        arg0->unk_1B0 = temp_a1_2;
        arg0->actor.speedXZ = temp_f0_2 * 0.4f;
        phi_a1 = temp_a1_2;
        if (temp_at == 0) {
            arg0->unk_1B0 = 0;
            phi_a1 = 0;
        }
        func_80A811D0(arg0, phi_a1);
    }
    arg0->actor.floorHeight = func_800C411C(arg1 + 0x830, &arg0->actor.floorPoly, &sp90, (Actor *) arg0, sp28);
    if ((arg0->actor.flags & 0x40) != 0) {
        Math3D_CrossProduct(D_80A845D0, sp2C, (Vec3f *) &sp78);
        if (func_80A8120C((Vec3f *) &sp78, (Vec3f *) &sp84) != 0) {
            SysMatrix_InsertRotationAroundUnitVector_f(arg0->actor.speedXZ * 0.03125f, (Vec3f *) &sp84, 0);
            Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
            SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
            SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
            SysMatrix_CopyCurrentState((MtxF *) &sp38);
            func_8018219C((MtxF *) &sp38, (Vec3s *) &arg0->actor.shape, 0);
        }
    }
}

void func_80A83214(Actor *arg0) {
    arg0->flags |= 0x10;
    arg0->draw = func_80A83FBC;
    arg0->shape.shadowDraw = NULL;
    arg0->scale.x = 0.02f;
    arg0->scale.y = 0.02f;
    arg0->scale.z = 0.02f;
    arg0[1].scale.z = func_80A83258;
}

void func_80A83258(Actor *arg0, ? arg1) {
    f32 temp_f0;

    arg0->scale.x *= 1.8f;
    temp_f0 = arg0->scale.x;
    if (temp_f0 > 0.17495999f) {
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->scale.y = temp_f0;
    arg0->scale.z = temp_f0;
}

void func_80A832BC(ObjMine *arg0) {
    arg0->actionFunc = func_80A832D0;
}

void func_80A832D0(Actor *arg0, GlobalContext *arg1) {
    s32 spA0;
    s32 sp94;
    f32 sp90;
    s16 sp86;
    s16 sp84;
    f32 sp70;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 *sp34;
    Actor *sp30;
    Actor *temp_a2;
    CollisionCheckContext *temp_s0_8;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 *temp_s0_6;
    f32 *temp_s0_7;
    f32 *temp_v1;
    f32 *temp_v1_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_v0_2;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *phi_s0;
    f32 phi_f2;
    s16 phi_v1;
    s32 phi_t0;
    void *phi_s0_2;
    f32 phi_f2_2;
    s16 phi_v1_2;
    s16 phi_v1_3;
    s16 phi_v1_4;
    s16 phi_v1_5;
    s32 phi_t0_2;
    s32 phi_t0_3;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f8;
    s32 phi_t0_4;
    f32 *phi_s0_3;

    spA0 = arg0->params & 0x3F;
    Math_Vec3f_Copy(arg0 + 0x1DC, arg0 + 0x1C4);
    if (func_80A8140C(arg0) != 0) {
        func_80A81384(arg0, arg1);
        func_80A81640(arg0);
        func_80A83214(arg0);
        return;
    }
    temp_v0 = arg0->unk_155;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_155 = (u8) (temp_v0 & 0xFFFD);
        temp_v1 = arg0 + 0x1B8;
        temp_v1[18] = 0.04f;
        sp34 = temp_v1;
        func_80A8146C(arg0, temp_v1 + 0x4C, &sp84);
        temp_f12 = Math_SinS(sp84) * 150.0f;
        temp_v0_2 = spA0 & 3;
        temp_s0 = temp_v1 + 0x60;
        phi_s0 = temp_s0;
        phi_f2 = temp_f12;
        phi_t0 = 0;
        phi_s0_2 = temp_s0;
        phi_f2_2 = temp_f12;
        phi_t0_2 = 0;
        if (spA0 > 0) {
            if (temp_v0_2 != 0) {
                do {
                    temp_t0 = phi_t0 + 1;
                    temp_f2 = phi_f2 - -(temp_f12 / (f32) spA0);
                    phi_s0->unk_2 = (s16) (phi_s0->unk_2 + (s32) phi_f2);
                    temp_v0_3 = phi_s0->unk_2;
                    phi_t0 = temp_t0;
                    phi_t0_2 = temp_t0;
                    if ((s32) temp_v0_3 < -0x320) {
                        phi_s0->unk_2 = -0x320;
                    } else {
                        phi_v1 = temp_v0_3;
                        if ((s32) temp_v0_3 >= 0x321) {
                            phi_v1 = 0x320;
                        }
                        phi_s0->unk_2 = phi_v1;
                    }
                    temp_s0_2 = phi_s0 + 4;
                    phi_s0 = temp_s0_2;
                    phi_f2 = temp_f2;
                    phi_s0_2 = temp_s0_2;
                } while (temp_v0_2 != temp_t0);
                phi_f2_2 = temp_f2;
                if (temp_t0 != spA0) {
                    goto block_13;
                }
            } else {
block_13:
                temp_f0 = -(temp_f12 / (f32) spA0);
                do {
                    temp_t0_2 = phi_t0_2 + 4;
                    temp_f2_2 = phi_f2_2 - temp_f0;
                    phi_s0_2->unk_2 = (s16) (phi_s0_2->unk_2 + (s32) phi_f2_2);
                    temp_v0_4 = phi_s0_2->unk_2;
                    temp_f2_3 = temp_f2_2 - temp_f0;
                    phi_t0_2 = temp_t0_2;
                    if ((s32) temp_v0_4 < -0x320) {
                        phi_s0_2->unk_2 = -0x320;
                    } else {
                        phi_v1_2 = temp_v0_4;
                        if ((s32) temp_v0_4 >= 0x321) {
                            phi_v1_2 = 0x320;
                        }
                        phi_s0_2->unk_2 = phi_v1_2;
                    }
                    temp_s0_3 = phi_s0_2 + 4;
                    temp_s0_3->unk_2 = (s16) (phi_s0_2->unk_6 + (s32) temp_f2_2);
                    temp_v0_5 = temp_s0_3->unk_2;
                    temp_f2_4 = temp_f2_3 - temp_f0;
                    if ((s32) temp_v0_5 < -0x320) {
                        temp_s0_3->unk_2 = -0x320;
                    } else {
                        phi_v1_3 = temp_v0_5;
                        if ((s32) temp_v0_5 >= 0x321) {
                            phi_v1_3 = 0x320;
                        }
                        temp_s0_3->unk_2 = phi_v1_3;
                    }
                    temp_s0_4 = temp_s0_3 + 4;
                    temp_s0_4->unk_2 = (s16) (temp_s0_3->unk_6 + (s32) temp_f2_3);
                    temp_v0_6 = temp_s0_4->unk_2;
                    phi_f2_2 = temp_f2_4 - temp_f0;
                    if ((s32) temp_v0_6 < -0x320) {
                        temp_s0_4->unk_2 = -0x320;
                    } else {
                        phi_v1_4 = temp_v0_6;
                        if ((s32) temp_v0_6 >= 0x321) {
                            phi_v1_4 = 0x320;
                        }
                        temp_s0_4->unk_2 = phi_v1_4;
                    }
                    temp_s0_5 = temp_s0_4 + 4;
                    temp_s0_5->unk_2 = (s16) (temp_s0_4->unk_6 + (s32) temp_f2_4);
                    temp_v0_7 = temp_s0_5->unk_2;
                    if ((s32) temp_v0_7 < -0x320) {
                        temp_s0_5->unk_2 = -0x320;
                    } else {
                        phi_v1_5 = temp_v0_7;
                        if ((s32) temp_v0_7 >= 0x321) {
                            phi_v1_5 = 0x320;
                        }
                        temp_s0_5->unk_2 = phi_v1_5;
                    }
                    phi_s0_2 = temp_s0_5 + 4;
                } while (temp_t0_2 != spA0);
            }
        }
    }
    temp_v1_2 = &arg0[1].gravity;
    temp_s0_6 = &temp_v1_2[24];
    phi_t0_3 = 0;
    phi_s0_3 = temp_s0_6;
    if (temp_v1_2[18] > 0.0001f) {
        sp94 = 0;
        sp34 = temp_v1_2;
        sp90 = Math_SinS(temp_v1_2->unk_4C) * temp_v1_2[18];
        temp_f18 = Math_CosS(temp_v1_2->unk_4C) * temp_v1_2[18];
        temp_v1_2[14] += sp90;
        temp_v1_2[15] += temp_f18;
        Math_StepToF(&temp_v1_2[18], 0.0f, 0.02f);
        phi_t0_3 = sp94;
    }
    sp34 = &arg0[1].gravity;
    sp94 = phi_t0_3;
    if ((Rand_Next() >> 0x1B) == 0) {
        sp34 = &arg0[1].gravity;
        sp94 = phi_t0_3;
        (&arg0[1].gravity)[20] = Rand_ZeroOne() * (&arg0[1].gravity)[22];
        arg0[1].gravity.unk_54 = (s16) (Rand_Next() >> 0x10);
    }
    sp94 = phi_t0_3;
    sp34 = &arg0[1].gravity;
    sp90 = Math_SinS(arg0[1].gravity.unk_54) * (&arg0[1].gravity)[20];
    temp_f2_5 = (&arg0[1].gravity)[12];
    temp_f18_2 = Math_CosS(arg0[1].gravity.unk_54) * (&arg0[1].gravity)[20];
    temp_f14 = (&arg0[1].gravity)[16];
    (&arg0[1].gravity)[14] += sp90;
    temp_f12_2 = (&arg0[1].gravity)[13];
    temp_f16 = (&arg0[1].gravity)[17];
    (&arg0[1].gravity)[15] += temp_f18_2;
    (&arg0[1].gravity)[14] += temp_f2_5 * temp_f14;
    (&arg0[1].gravity)[15] += temp_f12_2 * temp_f14;
    (&arg0[1].gravity)[14] *= temp_f16;
    (&arg0[1].gravity)[12] = temp_f2_5 + (&arg0[1].gravity)[14];
    temp_f2_6 = (&arg0[1].gravity)[12];
    (&arg0[1].gravity)[15] *= temp_f16;
    (&arg0[1].gravity)[13] = temp_f12_2 + (&arg0[1].gravity)[15];
    if (temp_f2_6 < -5.0f) {
        (&arg0[1].gravity)[12] = -5.0f;
    } else {
        if (temp_f2_6 > 5.0f) {
            phi_f0 = 5.0f;
        } else {
            phi_f0 = temp_f2_6;
        }
        (&arg0[1].gravity)[12] = phi_f0;
    }
    temp_f12_3 = (&arg0[1].gravity)[13];
    if (temp_f12_3 < -5.0f) {
        (&arg0[1].gravity)[13] = -5.0f;
    } else {
        if (temp_f12_3 > 5.0f) {
            phi_f0_2 = 5.0f;
        } else {
            phi_f0_2 = temp_f12_3;
        }
        (&arg0[1].gravity)[13] = phi_f0_2;
    }
    sp34 = &arg0[1].gravity;
    sp94 = phi_t0_3;
    func_80A81A00((bitwise Actor *) temp_f12_3, -5.0f, arg0);
    func_80A81AA4(arg0);
    phi_t0_4 = phi_t0_3;
    if ((&arg0[1].gravity)[23] > -0.000001f) {
        sp94 = phi_t0_3;
        sp34 = &arg0[1].gravity;
        phi_t0_4 = phi_t0_3;
        if ((&arg0[1].gravity)[23] <= Math3D_XZDistanceSquared(arg0->world.pos.x, arg0->world.pos.z, arg0->home.pos.x, arg0->home.pos.z)) {
            sp34 = &arg0[1].gravity;
            sp94 = phi_t0_3;
            Actor_UpdateBgCheckInfo(arg1, arg0, 0.0f, 20.0f, 0.0f, 1U);
            phi_t0_4 = phi_t0_3;
            if ((arg0->bgCheckFlags & 8) != 0) {
                temp_a0 = &sp4C;
                if (arg0->wallPoly != 0) {
                    sp4C = (&arg0[1].gravity)[14];
                    sp50 = 0.0f;
                    sp94 = phi_t0_3;
                    sp34 = &arg0[1].gravity;
                    sp54 = (&arg0[1].gravity)[15];
                    if (func_80A81288((Vec3f *) temp_a0, &sp70, &sp48, &sp44) != 0) {
                        temp_a1 = &sp58;
                        sp58 = (f32) arg0->wallPoly->normal.x * 0.00003051851f;
                        sp5C = (f32) arg0->wallPoly->normal.y * 0.00003051851f;
                        sp94 = phi_t0_3;
                        sp34 = &arg0[1].gravity;
                        sp60 = (f32) arg0->wallPoly->normal.z * 0.00003051851f;
                        func_80179F64((Vec3f *) &sp70, (Vec3f *) temp_a1, (Vec3f *) &sp64);
                        temp_f8 = sp48 * 0.5f;
                        temp_f4 = sp64 * temp_f8;
                        sp48 = temp_f8;
                        (&arg0[1].gravity)[14] = temp_f4;
                        phi_f8 = sp6C * sp48;
                    } else {
                        (&arg0[1].gravity)[14] *= -0.1f;
                        phi_f8 = (&arg0[1].gravity)[15] * -0.1f;
                    }
                    (&arg0[1].gravity)[15] = phi_f8;
                    sp94 = phi_t0_3;
                    func_80A81B14(arg0);
                    func_80A81A00(arg0);
                    func_80A81AA4(arg0);
                    phi_t0_4 = phi_t0_3;
                }
            }
        }
    }
    if (spA0 > 0) {
        do {
            sp94 = phi_t0_4;
            sp86 = phi_s0_3->unk_0 - 0x4000;
            temp_t0_3 = phi_t0_4 + 1;
            temp_s0_7 = phi_s0_3 + 4;
            temp_s0_7->unk_-2 = (s16) (s32) ((((Rand_ZeroOne() * 30.0f) - 15.0f) + ((f32) phi_s0_3->unk_2 + ((f32) sp86 * -0.05f))) * 0.995f);
            temp_s0_7->unk_-4 = (s16) (phi_s0_3->unk_0 + temp_s0_7->unk_-2);
            phi_t0_4 = temp_t0_3;
            phi_s0_3 = temp_s0_7;
        } while (temp_t0_3 != spA0);
    }
    func_800B4AEC(arg1, arg0, 0.0f);
    func_80A81818(arg0);
    temp_a2 = &arg0[1];
    temp_s0_8 = &arg1->colChkCtx;
    sp30 = temp_a2;
    CollisionCheck_SetOC(arg1, temp_s0_8, (Collider *) temp_a2);
    CollisionCheck_SetAC(arg1, temp_s0_8, (Collider *) temp_a2);
}

void func_80A83A74(ObjMine *arg0) {
    arg0->actionFunc = func_80A83A88;
}

void func_80A83A88(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp24;
    Actor *sp20;
    Actor *temp_a2;
    CollisionCheckContext *temp_a1;

    if (func_80A8140C(arg0) != 0) {
        func_80A81384(arg0, arg1);
        func_80A81640(arg0);
        func_80A83214(arg0);
        return;
    }
    temp_a1 = &arg1->colChkCtx;
    temp_a2 = &arg0[1];
    sp20 = temp_a2;
    sp24 = temp_a1;
    CollisionCheck_SetOC(arg1, temp_a1, (Collider *) temp_a2);
    CollisionCheck_SetAC(arg1, temp_a1, (Collider *) temp_a2);
}

void func_80A83B14(ObjMine *arg0) {
    arg0->actionFunc = func_80A83B28;
}

void func_80A83B28(Actor *arg0, GlobalContext *arg1) {
    s16 sp32;
    Actor *sp28;
    f32 *sp24;
    Actor *temp_a2_2;
    CollisionCheckContext *temp_s0_3;
    f32 *temp_a2;
    f32 *temp_s0;
    f32 *temp_s0_2;
    s32 temp_a0;
    u32 temp_v1;
    u8 temp_v0;

    if (func_80A8140C(arg0) != 0) {
        func_80A81384(arg0, arg1);
        func_80A81640(arg0);
        func_80A83214(arg0);
        return;
    }
    temp_v0 = arg0->unk_155;
    temp_s0 = &arg0[1].gravity;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_155 = (u8) (temp_v0 & 0xFFFD);
        temp_a2 = &temp_s0[1];
        sp24 = temp_a2;
        func_80A81544(arg0, (Vec3f *) temp_a2, temp_a2);
        temp_s0[4] = 7.0f;
        Math_Vec3f_Scale((Vec3f *) sp24, 7.0f);
    }
    temp_s0_2 = &arg0[1].gravity;
    if (temp_s0_2[4] > 0.0001f) {
        temp_s0_2[4] = Math_Vec3f_StepTo((Vec3f *) &temp_s0_2[1], &D_801D15B0, 2.8f);
    }
    temp_s0_2[9] = -0.0002f;
    temp_s0_2[12] = -0.0002f;
    temp_s0_2->unk_0 = 0.9f;
    temp_s0_2[7] = 0.003f;
    if ((Rand_Next() >> 0x1B) == 0) {
        temp_v1 = Rand_Next() >> 0x10;
        temp_a0 = temp_v1 << 0x10;
        sp32 = (s16) temp_v1;
        temp_s0_2[5] = Math_SinS((s16) (temp_a0 >> 0x10)) * 1.8f * temp_s0_2[7];
        temp_s0_2[6] = Math_CosS(sp32) * 0.2f * temp_s0_2[7];
        temp_s0_2->unk_20 = (s16) (Rand_Next() >> 0x13);
    }
    func_80A82C28(arg0, arg1);
    func_80A81DEC(arg0);
    func_80A81818(arg0);
    temp_a2_2 = &arg0[1];
    temp_s0_3 = &arg1->colChkCtx;
    sp28 = temp_a2_2;
    CollisionCheck_SetOC(arg1, temp_s0_3, (Collider *) temp_a2_2);
    CollisionCheck_SetAC(arg1, temp_s0_3, (Collider *) temp_a2_2);
}

void func_80A83CEC(ObjMine *arg0) {
    arg0->actionFunc = func_80A83D00;
}

void func_80A83D00(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp24;
    Actor *sp20;
    Actor *temp_a2;
    CollisionCheckContext *temp_a1;

    if (func_80A8140C(arg0) != 0) {
        func_80A81384(arg0, arg1);
        func_80A81640(arg0);
        func_80A83214(arg0);
        return;
    }
    temp_a1 = &arg1->colChkCtx;
    temp_a2 = &arg0[1];
    sp20 = temp_a2;
    sp24 = temp_a1;
    CollisionCheck_SetOC(arg1, temp_a1, (Collider *) temp_a2);
    CollisionCheck_SetAC(arg1, temp_a1, (Collider *) temp_a2);
}

void ObjMine_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderJntSph *sp20;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    ObjMine *this = (ObjMine *) thisx;

    if (((this->unk_144.base.ocFlags2 & 1) != 0) || ((this->unk_144.base.acFlags & 2) != 0)) {
        func_80A8131C(this, globalCtx);
        func_80A83214((Actor *) this);
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.update != 0) {
        this->unk_144.base.ocFlags1 &= 0xFFFD;
        this->unk_144.base.acFlags &= 0xFFFD;
        this->unk_144.base.ocFlags2 &= 0xFFFE;
        if (((this->actor.flags & 0x40) != 0) && (func_80A83258 != this->actionFunc)) {
            temp_a1 = &globalCtx->colChkCtx;
            temp_a2 = &this->unk_144;
            sp20 = temp_a2;
            sp24 = temp_a1;
            CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
            CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        }
    }
}

void func_80A83E7C(Actor *this, GlobalContext *globalCtx) {
    (bitwise ? (*)()) this[1].scale.z();
}

void ObjMine_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    ColliderJntSph *temp_a1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s0;
    ObjMine *this = (ObjMine *) thisx;

    temp_s0 = globalCtx->state.gfxCtx;
    if (func_80A82FC8 == this->actionFunc) {
        temp_a1 = &this->unk_144;
        this = this;
        Collider_UpdateSpheres(0, temp_a1);
    }
    func_800B8050((Actor *) this, globalCtx, 1);
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = 0xC192078;
    temp_v0_2->words.w0 = 0xE200001C;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = 0xFF;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_06002068;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_5[1];
    temp_v0_5->words.w1 = (u32) &D_06002188;
    temp_v0_5->words.w0 = 0xDE000000;
}

void func_80A83FBC(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;

    temp_s0 = arg1->state.gfxCtx;
    func_800B8118(arg0, arg1, 1);
    func_8012C2DC(arg1->state.gfxCtx);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xE200001C;
    temp_v0->words.w1 = 0xC1849D8;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = 0x4B;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp20 = temp_v0_3;
    sp20->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_06002068;
    temp_v0_4->words.w0 = 0xDE000000;
}

void func_80A84088(Actor *this, GlobalContext *globalCtx) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp88;
    GraphicsContext *sp80;
    f32 *sp4C;
    Gfx *temp_s0;
    Gfx *temp_s1;
    Gfx *temp_s1_2;
    Gfx *temp_s1_3;
    Gfx *temp_s1_4;
    Gfx *temp_s1_6;
    GraphicsContext *temp_v1;
    f32 *temp_a0;
    f32 *temp_s0_2;
    s32 temp_s2;
    s32 temp_s5;
    void *temp_s1_10;
    void *temp_s1_11;
    void *temp_s1_5;
    void *temp_s1_7;
    void *temp_s1_8;
    void *temp_s1_9;
    f32 *phi_s3;
    Gfx *phi_s1;
    s32 phi_s2;
    Gfx *phi_s1_2;

    temp_s5 = this->params & 0x3F;
    func_800B8050(this, globalCtx, 1);
    temp_v1 = globalCtx->state.gfxCtx;
    temp_s1 = temp_v1->polyOpa.p;
    temp_s1->words.w1 = (u32) &sSetupDL[150];
    temp_s1->words.w0 = 0xDE000000;
    temp_s1_2 = &temp_s1[1];
    temp_s0 = temp_s1_2;
    temp_s0->words.w0 = 0xDA380003;
    sp80 = temp_v1;
    temp_s1_3 = &temp_s1_2[1];
    temp_s0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s1_3->words.w1 = (u32) &D_06000030;
    temp_s1_3->words.w0 = 0xDE000000;
    temp_s1_4 = &temp_s1_3[1];
    temp_a0 = &this[1].gravity;
    sp4C = temp_a0;
    func_80A81684(temp_a0);
    Matrix_Scale(this->scale.x, this->scale.y, this->scale.z, 1);
    phi_s1_2 = temp_s1_4;
    if (temp_s5 != 0) {
        temp_s0_2 = &sp4C[3];
        Math_Vec3f_ScaleAndStore((Vec3f *) temp_s0_2, -6.0f, (Vec3f *) &sp88);
        sp94 = this->home.pos.x - sp88;
        sp98 = (this->home.pos.y - 6.0f) - sp8C;
        sp9C = this->home.pos.z - sp90;
        Math_Vec3f_ScaleAndStore((Vec3f *) temp_s0_2, -12.0f, (Vec3f *) &sp88);
        phi_s3 = &sp4C[24];
        phi_s1 = temp_s1_4;
        phi_s2 = 0;
        phi_s1_2 = temp_s1_4;
        if (temp_s5 > 0) {
            do {
                Matrix_RotateY(*phi_s3, 1U);
                sp94 += sp88;
                sp98 += sp8C;
                sp9C += sp90;
                func_80A8164C(&sp94);
                phi_s1->words.w0 = 0xDA380003;
                temp_s1_5 = phi_s1 + 8;
                phi_s1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_s1_5->unk_0 = 0xDE000000U;
                temp_s1_5->unk_4 = &D_06000030;
                temp_s1_6 = temp_s1_5 + 8;
                temp_s2 = phi_s2 + 1;
                phi_s3 += 4;
                phi_s1 = temp_s1_6;
                phi_s2 = temp_s2;
                phi_s1_2 = temp_s1_6;
            } while (temp_s2 != temp_s5);
        }
    }
    SysMatrix_InsertXRotation_s(0x2000, 1);
    func_80A8164C((f32 *) &this->world);
    phi_s1_2->words.w0 = 0xDA380003;
    temp_s1_7 = phi_s1_2 + 8;
    phi_s1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s1_7->unk_0 = 0xE7000000;
    temp_s1_7->unk_4 = 0;
    temp_s1_8 = temp_s1_7 + 8;
    temp_s1_8->unk_0 = 0xE200001C;
    temp_s1_8->unk_4 = 0xC192078;
    temp_s1_9 = temp_s1_8 + 8;
    temp_s1_9->unk_4 = 0xFF;
    temp_s1_9->unk_0 = 0xFB000000;
    temp_s1_10 = temp_s1_9 + 8;
    temp_s1_10->unk_4 = &D_06002068;
    temp_s1_10->unk_0 = 0xDE000000U;
    temp_s1_11 = temp_s1_10 + 8;
    temp_s1_11->unk_4 = &D_06002188;
    temp_s1_11->unk_0 = 0xDE000000U;
    sp80->polyOpa.p = temp_s1_11 + 8;
}

void func_80A84338(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *temp_s0;
    Gfx *temp_s3;
    Gfx *temp_s3_2;
    Gfx *temp_s3_3;
    Gfx *temp_s3_4;
    Gfx *temp_s3_6;
    GraphicsContext *temp_v1;
    s32 temp_s1;
    s32 temp_s7;
    void *temp_s3_10;
    void *temp_s3_11;
    void *temp_s3_5;
    void *temp_s3_7;
    void *temp_s3_8;
    void *temp_s3_9;
    f32 *phi_s2;
    s32 phi_s1;
    Gfx *phi_s3;
    Gfx *phi_s3_2;

    temp_s7 = this->params & 0x3F;
    func_800B8050(this, globalCtx, 1);
    temp_v1 = globalCtx->state.gfxCtx;
    temp_s3 = temp_v1->polyOpa.p;
    temp_s3->words.w1 = (u32) &sSetupDL[150];
    temp_s3->words.w0 = 0xDE000000;
    temp_s3_2 = &temp_s3[1];
    temp_s0 = temp_s3_2;
    temp_s0->words.w0 = 0xDA380003;
    sp40 = temp_v1;
    temp_s3_3 = &temp_s3_2[1];
    temp_s0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s3_3->words.w0 = 0xDE000000;
    temp_s3_3->words.w1 = (u32) &D_06000030;
    temp_s3_4 = &temp_s3_3[1];
    phi_s2 = (f32 *) &this[1].colChkInfo.damage;
    phi_s1 = 0;
    phi_s3 = temp_s3_4;
    phi_s3_2 = temp_s3_4;
    if (temp_s7 > 0) {
        do {
            func_80A81684(phi_s2);
            Matrix_Scale(this->scale.x, this->scale.y, this->scale.z, 1);
            if ((phi_s1 & 1) == 0) {
                Matrix_RotateY(0x4000, 1U);
            }
            func_80A8164C(&phi_s2[9]);
            phi_s3->words.w0 = 0xDA380003;
            temp_s3_5 = phi_s3 + 8;
            phi_s3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_s3_5->unk_0 = 0xDE000000;
            temp_s3_5->unk_4 = &D_06000030;
            temp_s3_6 = temp_s3_5 + 8;
            temp_s1 = phi_s1 + 1;
            phi_s2 = &phi_s2[18];
            phi_s1 = temp_s1;
            phi_s3 = temp_s3_6;
            phi_s3_2 = temp_s3_6;
        } while (temp_s1 != temp_s7);
    }
    SysMatrix_InsertXRotation_s(0x2000, 1);
    func_80A8164C((f32 *) &this->world);
    phi_s3_2->words.w0 = 0xDA380003;
    temp_s3_7 = phi_s3_2 + 8;
    phi_s3_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s3_7->unk_0 = 0xE7000000;
    temp_s3_7->unk_4 = 0;
    temp_s3_8 = temp_s3_7 + 8;
    temp_s3_8->unk_0 = 0xE200001C;
    temp_s3_8->unk_4 = 0xC192078;
    temp_s3_9 = temp_s3_8 + 8;
    temp_s3_9->unk_4 = 0xFF;
    temp_s3_9->unk_0 = 0xFB000000;
    temp_s3_10 = temp_s3_9 + 8;
    temp_s3_10->unk_0 = 0xDE000000;
    temp_s3_10->unk_4 = &D_06002068;
    temp_s3_11 = temp_s3_10 + 8;
    temp_s3_11->unk_0 = 0xDE000000;
    temp_s3_11->unk_4 = &D_06002188;
    sp40->polyOpa.p = temp_s3_11 + 8;
}
