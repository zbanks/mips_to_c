typedef struct ObjSwitch {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjSwitch *, GlobalContext *);
    /* 0x160 */ s16 unk_160;                        /* inferred */
    /* 0x162 */ s16 unk_162;                        /* inferred */
    /* 0x164 */ char pad_164[0x1];
    /* 0x165 */ s8 unk_165;                         /* inferred */
    /* 0x166 */ char pad_166[0x6];                  /* maybe part of unk_165[7]? */
    /* 0x16C */ u8 unk_16C;                         /* inferred */
    /* 0x16D */ u8 unk_16D;                         /* inferred */
    /* 0x16E */ u8 unk_16E;                         /* inferred */
    /* 0x16F */ u8 unk_16F;                         /* inferred */
    /* 0x170 */ s8 unk_170;                         /* inferred */
    /* 0x171 */ char pad_171[0x7];                  /* maybe part of unk_170[8]? */
    /* 0x178 */ Collider unk_178;                   /* inferred */
    /* 0x189 */ u8 unk_189;                         /* overlap; inferred */
    /* 0x18C */ u8 unk_18C;                         /* overlap; inferred */
    /* 0x190 */ char pad_190[0xC0];                 /* maybe part of unk_18C[193]? */
    /* 0x250 */ f32 unk_250;                        /* inferred */
    /* 0x254 */ f32 unk_254;                        /* inferred */
} ObjSwitch;                                        /* size = 0x258 */

struct _mips2c_stack_ObjSwitch_Destroy {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjSwitch_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjSwitch_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x18];                   /* maybe part of sp30[7]? */
    /* 0x4C */ u32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_ObjSwitch_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Collider *sp20;                      /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8093ABD0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderJntSph *sp28;                /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8093AC6C {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ ColliderTris *sp54;                  /* inferred */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0xC];
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0xC];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_8093ADA8 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8093AE1C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093AE74 {};              /* size 0x0 */

struct _mips2c_stack_func_8093AE88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093AEC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093AEF0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093AF1C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093AF54 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8093B648 {};              /* size 0x0 */

struct _mips2c_stack_func_8093B668 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093B6F4 {};              /* size 0x0 */

struct _mips2c_stack_func_8093B710 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8093B92C {};              /* size 0x0 */

struct _mips2c_stack_func_8093B940 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093B9C0 {};              /* size 0x0 */

struct _mips2c_stack_func_8093B9E4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8093BB5C {};              /* size 0x0 */

struct _mips2c_stack_func_8093BB70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093BBD0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x10];
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8093BCC8 {};              /* size 0x0 */

struct _mips2c_stack_func_8093BCDC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093BD34 {};              /* size 0x0 */

struct _mips2c_stack_func_8093BD4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093BDAC {};              /* size 0x0 */

struct _mips2c_stack_func_8093BDC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093BE10 {};              /* size 0x0 */

struct _mips2c_stack_func_8093BE2C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093BEF0 {};              /* size 0x0 */

struct _mips2c_stack_func_8093BF04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093BF50 {};              /* size 0x0 */

struct _mips2c_stack_func_8093BF70 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093C0A4 {};              /* size 0x0 */

struct _mips2c_stack_func_8093C0B8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8093C138 {};              /* size 0x0 */

struct _mips2c_stack_func_8093C15C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093C23C {};              /* size 0x0 */

struct _mips2c_stack_func_8093C250 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093C2B4 {};              /* size 0x0 */

struct _mips2c_stack_func_8093C2D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093C3C8 {};              /* size 0x0 */

struct _mips2c_stack_func_8093C3DC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093C460 {};              /* size 0x0 */

struct _mips2c_stack_func_8093C488 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093C584 {};              /* size 0x0 */

struct _mips2c_stack_func_8093C598 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093C778 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x8];                    /* maybe part of sp1C[3]? */
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8093C888 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093C8B8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8093C99C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8093CA80 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093CAC4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

void func_8093ABD0(Actor *arg0, GlobalContext *arg1, ColliderJntSphInit *arg2); /* static */
void func_8093AC6C(Actor *arg0, GlobalContext *arg1, ColliderTrisInit *arg2); /* static */
void func_8093ADA8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093AE1C(Actor *arg0, GlobalContext *arg1, s8 arg2); /* static */
void func_8093AE74(DynaPolyActor *arg0);            /* static */
void func_8093AE88(Actor *arg0);                    /* static */
void func_8093AEC4(Actor *arg0);                    /* static */
void func_8093AEF0(Actor *arg0);                    /* static */
void func_8093AF1C(DynaPolyActor *arg0, s32 arg1);  /* static */
void func_8093AF54(ObjSwitch *arg0, GlobalContext *arg1); /* static */
void func_8093B648(DynaPolyActor *arg0, GlobalContext *arg1, void (*arg2)(DynaPolyActor *, GlobalContext *, u32), s8 arg3); /* static */
void func_8093B668(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093B6F4(ObjSwitch *arg0);                /* static */
void func_8093B710(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093B92C(DynaPolyActor *arg0, GlobalContext *, u32); /* static */
void func_8093B940(Actor *arg0, ? arg1);            /* static */
void func_8093B9C0(ObjSwitch *arg0);                /* static */
void func_8093B9E4(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093BB5C(DynaPolyActor *arg0, GlobalContext *, u32); /* static */
void func_8093BB70(Actor *arg0, ? arg1);            /* static */
s32 func_8093BBD0(DynaPolyActor *arg0, s32);        /* static */
void func_8093BCC8(ObjSwitch *arg0);                /* static */
void func_8093BCDC(ObjSwitch *arg0, GlobalContext *arg1); /* static */
void func_8093BD34(ObjSwitch *arg0);                /* static */
void func_8093BD4C(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093BDAC(DynaPolyActor *arg0, GlobalContext *, u32); /* static */
void func_8093BDC0(Actor *arg0, ? arg1);            /* static */
void func_8093BE10(ObjSwitch *arg0);                /* static */
void func_8093BE2C(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093BEF0(DynaPolyActor *arg0, GlobalContext *, u32); /* static */
void func_8093BF04(Actor *arg0, ? arg1);            /* static */
void func_8093BF50(ObjSwitch *arg0);                /* static */
void func_8093BF70(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093C0A4(DynaPolyActor *arg0, GlobalContext *, u32); /* static */
void func_8093C0B8(Actor *arg0, ? arg1);            /* static */
void func_8093C138(ObjSwitch *arg0);                /* static */
void func_8093C15C(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093C23C(DynaPolyActor *arg0, GlobalContext *, u32); /* static */
void func_8093C250(Actor *arg0, ? arg1);            /* static */
void func_8093C2B4(ObjSwitch *arg0);                /* static */
void func_8093C2D4(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093C3C8(DynaPolyActor *arg0, GlobalContext *, u32); /* static */
void func_8093C3DC(Actor *arg0, ? arg1);            /* static */
void func_8093C460(ObjSwitch *arg0);                /* static */
void func_8093C488(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093C584(DynaPolyActor *arg0, GlobalContext *, u32); /* static */
void func_8093C598(Actor *arg0, ? arg1);            /* static */
void func_8093C778(void *arg0, GlobalContext *arg1); /* static */
void func_8093C888(s32 arg0, GlobalContext *arg1);  /* static */
void func_8093C8B8(void *arg0, GraphicsContext **arg1); /* static */
void func_8093C99C(void *arg0, GraphicsContext **arg1); /* static */
void func_8093CA80(void *arg0);                     /* static */
void func_8093CAC4(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_0501BEE0;
extern ? D_0501BFB8;
extern void D_0501C118;
static void *D_8093CC60[8] = {
    (void *)0x500AEC0,
    (void *)0x5009EC0,
    (void *)0x500A6C0,
    (void *)0x50096C0,
    (void *)0x500B6C0,
    (void *)0x500BEC0,
    (void *)0x500C6C0,
    (void *)0x500C6C0,
};
static s32 D_8093CC80 = 0;
static ? D_8093CCA4;                                /* unable to generate initializer */
static ? D_8093CCA8;                                /* unable to generate initializer */
static ? D_8093CCAC;                                /* unable to generate initializer */
static ? D_8093CCB0;                                /* unable to generate initializer */
static ? D_8093CCB4;                                /* unable to generate initializer */
static ? D_8093CCB8;                                /* unable to generate initializer */
static ? D_8093CCBC;                                /* unable to generate initializer */
static ? D_8093CCC0;                                /* unable to generate initializer */
static ? D_8093CCD0;                                /* unable to generate initializer */
static ColliderTrisElementInit D_8093CCD4[2] = {
    {
        {0, {0, 0, 0}, {0x400, 0, 0}, 0, 1, 0},
        {{{-20.0f, 19.0f, -20.0f}, {-20.0f, 19.0f, 20.0f}, {20.0f, 19.0f, 20.0f}}},
    },
    {
        {0, {0, 0, 0}, {0x400, 0, 0}, 0, 1, 0},
        {{{20.0f, 19.0f, 20.0f}, {20.0f, 19.0f, -20.0f}, {-20.0f, 19.0f, -20.0f}}},
    },
};
static ColliderTrisInit D_8093CD4C = {{0xA, 0, 9, 0, 0, 2}, 2, &D_8093CCD4};
static ColliderTrisElementInit D_8093CD5C[2] = {
    {
        {4, {0, 0, 0}, {0x3820, 0, 0}, 0, 1, 0},
        {{{0.0f, 23.0f, 8.5f}, {-23.0f, 0.0f, 8.5f}, {0.0f, -23.0f, 8.5f}}},
    },
    {
        {4, {0, 0, 0}, {0x3820, 0, 0}, 0, 1, 0},
        {{{0.0f, 23.0f, 8.5f}, {0.0f, -23.0f, 8.5f}, {23.0f, 0.0f, 8.5f}}},
    },
};
static ColliderTrisInit D_8093CDD4 = {{0xA, 0, 9, 0, 0, 2}, 2, &D_8093CD5C};
static ColliderJntSphElementInit D_8093CDE4 = {{0, {0, 0, 0}, {0x1CBFFBE, 0, 0}, 0, 1, 1}, {0, {{0, 0x12C, 0}, 0x14}, 0x64}};
static ColliderJntSphInit D_8093CE08 = {{9, 0, 9, 0x39, 0x20, 0}, 1, &D_8093CDE4};
static InitChainEntry D_8093CE18[3];                /* unable to generate initializer */
static ? D_8093CE24;                                /* unable to generate initializer */
static ? D_8093CE2C;                                /* unable to generate initializer */
static ? D_8093CE40;                                /* unable to generate initializer */
static ? D_8093CE48;                                /* unable to generate initializer */
static void *D_8093D3B0;

void func_8093ABD0(Actor *arg0, GlobalContext *arg1, ColliderJntSphInit *arg2) {
    ColliderJntSph *sp28;
    ColliderJntSph *temp_a1;

    temp_a1 = arg0 + 0x178;
    sp28 = temp_a1;
    Collider_InitJntSph(arg1, temp_a1);
    Collider_SetJntSph(arg1, temp_a1, arg0, arg2, arg0 + 0x198);
    SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y + (arg0->shape.yOffset * arg0->scale.y), arg0->world.pos.z, (Vec3s *) &arg0->shape);
    Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
    Collider_UpdateSpheres(0, temp_a1);
}

void func_8093AC6C(Actor *arg0, GlobalContext *arg1, ColliderTrisInit *arg2) {
    ? sp7C;
    ? sp70;
    ? sp64;
    ? sp58;
    ColliderTris *sp54;
    ColliderTris *temp_a1;
    Vec3f *temp_s0;
    s32 temp_s2;
    s32 phi_s2;
    s32 phi_s1;
    Vec3f *phi_s0;

    temp_a1 = arg0 + 0x178;
    sp54 = temp_a1;
    Collider_InitTris(arg1, temp_a1);
    Collider_SetTris(arg1, temp_a1, arg0, arg2, arg0 + 0x198);
    SysMatrix_StatePush();
    SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y + (arg0->shape.yOffset * arg0->scale.y), arg0->world.pos.z, (Vec3s *) &arg0->shape);
    phi_s2 = 0;
    do {
        phi_s1 = 0;
        phi_s0 = (Vec3f *) &sp58;
loop_2:
        SysMatrix_MultiplyVector3fByState(&arg2->elements[phi_s2] + phi_s1 + 0x18, phi_s0);
        temp_s0 = &phi_s0[1];
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
        if (temp_s0 != &sp7C) {
            goto loop_2;
        }
        Collider_SetTrisVertices(sp54, phi_s2, (Vec3f *) &sp58, (Vec3f *) &sp64, (Vec3f *) &sp70);
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 2);
    SysMatrix_StatePop();
}

void func_8093ADA8(Actor *arg0, GlobalContext *arg1) {
    Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x8E, arg0->world.pos.x, arg0->world.pos.y - 25.0f, arg0->world.pos.z, (s16) (s32) arg0->world.rot.x, (s16) (s32) arg0->world.rot.y, (s16) (s32) arg0->world.rot.z, 0xFF32);
}

void func_8093AE1C(Actor *arg0, GlobalContext *arg1, s8 arg2) {
    if (arg2 != 0) {
        Actor_SetSwitchFlag(arg1, ((s32) arg0->params >> 8) & 0x7F);
        return;
    }
    Actor_UnsetSwitchFlag(arg1, ((s32) arg0->params >> 8) & 0x7F);
}

void func_8093AE74(DynaPolyActor *arg0) {
    arg0[1].actor.home.pos.y += 1;
}

void func_8093AE88(Actor *arg0) {
    s8 temp_a0;

    if (arg0->unk_172 != 0) {
        temp_a0 = arg0->cutscene;
        arg0 = arg0;
        ActorCutscene_Stop((s16) temp_a0);
        arg0->unk_172 = 0;
    }
}

void func_8093AEC4(Actor *arg0) {
    if ((s32) arg0->unk_165 <= 0) {
        Audio_PlayActorSound2(arg0, 0x2815U);
    }
}

void func_8093AEF0(Actor *arg0) {
    if ((s32) arg0->unk_165 <= 0) {
        Audio_PlayActorSound2(arg0, 0x28BAU);
    }
}

void func_8093AF1C(DynaPolyActor *arg0, s32 arg1) {
    if (func_800CAF70(arg0) != 0) {
        arg0->unk_170 = (s8) arg1;
    }
}

void func_8093AF54(ObjSwitch *arg0, GlobalContext *arg1) {
    void *sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f2;
    f32 phi_f2;

    if ((arg1->actorCtx.unk5 & 0x80) != 0) {
        sp28 = arg1->actorCtx.actorList[2].first;
        if ((arg0->actor.params & 7) == 0) {
            phi_f2 = 24.0f;
        } else {
            phi_f2 = 48.0f;
        }
        sp24 = phi_f2;
        temp_f0 = Math_CosS((s16) ((s16) ((s16) ((s16) (arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y) + 0x2000) & 0x3FFF) - 0x2000));
        if (fabsf(temp_f0) > 0.01f) {
            temp_f2 = phi_f2 / temp_f0;
            if (temp_f2 < arg0->actor.xzDistToPlayer) {
                sp24 = temp_f2;
                sp28->world.pos.x = (Math_SinS(arg0->actor.yawTowardsPlayer) * temp_f2) + arg0->actor.world.pos.x;
                sp28->world.pos.z = (Math_CosS(arg0->actor.yawTowardsPlayer) * temp_f2) + arg0->actor.world.pos.z;
            }
            sp28->unk_AD0 = 0.0f;
        }
    }
}

void ObjSwitch_Init(Actor *thisx, GlobalContext *globalCtx) {
    u32 sp4C;
    f32 *sp30;
    f32 *temp_s0;
    f32 *temp_v0_2;
    s16 temp_v0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    void **temp_s0_2;
    void **temp_s3;
    void *temp_v0;
    f32 *phi_v1;
    void **phi_s0;
    s32 phi_s1;
    void **phi_s3;
    f32 *phi_v1_2;
    f32 *phi_v1_3;
    ObjSwitch *this = (ObjSwitch *) thisx;

    sp4C = Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 8) & 0x7F);
    temp_s1 = this->actor.params & 7;
    Actor_ProcessInitChain((Actor *) this, D_8093CE18);
    temp_s2 = temp_s1 * 4;
    temp_s0 = temp_s2 + &D_8093CCBC;
    Actor_SetScale((Actor *) this, *temp_s0);
    if ((temp_s0 == &D_8093CCBC) || (temp_s0 == &D_8093CCC0) || (temp_s0 == &D_8093CCD0)) {
        if (temp_s0 == &D_8093CCD0) {
            this->actor.world.pos.y = this->actor.home.pos.y + 1.9f;
        } else {
            this->actor.world.pos.y = this->actor.home.pos.y + 1.0f;
        }
        BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, (CollisionHeader *) &D_05008018);
    }
    if (temp_s0 == &D_8093CCBC) {
        if (globalCtx->sceneNum == 0x4F) {
            this->unk_250 = 0.055000003f;
            this->unk_254 = 0.0055f;
        } else {
            this->unk_250 = 0.165f;
            this->unk_254 = 0.0165f;
        }
    }
    if ((temp_s0 == &D_8093CCBC) || (temp_s0 == &D_8093CCD0)) {
        if (globalCtx->sceneNum == 0x4F) {
            temp_v0 = ((this->actor.home.rot.z & 1) * 3) + &D_8093CE24;
            this->unk_16C = temp_v0->unk_0;
            this->unk_16D = temp_v0->unk_1;
            this->actor.shape.rot.z = 0;
            this->actor.world.rot.z = 0;
            this->unk_16E = temp_v0->unk_2;
        } else {
            this->unk_16C = 0xFF;
            this->unk_16D = 0xFF;
            this->unk_16E = 0xFF;
        }
    }
    temp_v0_2 = temp_s2 + &D_8093CCA4;
    sp30 = temp_v0_2;
    Actor_SetHeight((Actor *) this, *temp_v0_2);
    if (sp30 == &D_8093CCA8) {
        func_8093AC6C((Actor *) this, globalCtx, &D_8093CD4C);
        goto block_23;
    }
    if (sp30 == &D_8093CCAC) {
        func_8093AC6C((Actor *) this, globalCtx, &D_8093CDD4);
        goto block_23;
    }
    if ((sp30 == &D_8093CCB0) || (sp30 == &D_8093CCB4)) {
        func_8093ABD0((Actor *) this, globalCtx, &D_8093CE08);
block_23:
    }
    phi_v1 = sp30;
    if (sp30 == &D_8093CCB4) {
        this->actor.targetMode = 4;
        this->actor.flags |= 1;
    }
    this->actor.colChkInfo.mass = 0xFF;
    if ((((s32) this->actor.params >> 7) & 1) != 0) {
        if (func_8093ADA8((Actor *) this, globalCtx) == 0) {
            this->actor.params &= 0xFF7F;
        }
        this->unk_165 = 0;
        phi_v1 = sp30;
    } else {
        this->unk_165 = 0xA;
    }
    phi_v1_2 = phi_v1;
    if ((((s32) this->actor.params >> 3) & 1) != 0) {
        this->actor.flags |= 0x80;
    }
    if (phi_v1 == &D_8093CCAC) {
        phi_s3 = D_8093CC60;
        if (D_8093CC80 == 0) {
            D_8093CC80 = 1;
            do {
                phi_s0 = phi_s3;
                phi_s1 = 0;
loop_37:
                temp_s1_2 = phi_s1 + 1;
                temp_s0_2 = phi_s0 + 4;
                temp_s0_2->unk_-4 = Lib_SegmentedToVirtual(*phi_s0);
                phi_s0 = temp_s0_2;
                phi_s1 = temp_s1_2;
                if (temp_s1_2 != 4) {
                    goto loop_37;
                }
                temp_s3 = phi_s3 + 0x10;
                phi_s3 = temp_s3;
            } while (temp_s3 != &D_8093CC80);
            phi_v1_2 = sp30;
        }
    }
    phi_v1_3 = phi_v1_2;
    if (phi_v1_2 == &D_8093CCB0) {
        D_8093D3B0 = Lib_SegmentedToVirtual(&D_0501C118);
        phi_v1_3 = sp30;
    }
    temp_v0_3 = this->actor.params;
    if ((((s32) temp_v0_3 >> 7) & 1) != 0) {
        func_8093BCC8(this);
        return;
    }
    if ((phi_v1_3 == &D_8093CCA4) || (phi_v1_3 == &D_8093CCA8)) {
        if ((((s32) temp_v0_3 >> 4) & 7) == 3) {
            if (sp4C != 0) {
                func_8093B6F4(this);
                return;
            }
            func_8093B9C0(this);
            return;
        }
        if (sp4C != 0) {
            func_8093B9C0(this);
            return;
        }
        func_8093B6F4(this);
        return;
    }
    if (phi_v1_3 == &D_8093CCAC) {
        if (sp4C != 0) {
            func_8093BE10(this);
            return;
        }
        func_8093BD34(this);
        return;
    }
    if ((phi_v1_3 == &D_8093CCB0) || (phi_v1_3 == &D_8093CCB4)) {
        if (sp4C != 0) {
            func_8093C138(this);
            return;
        }
        func_8093BF50(this);
        return;
    }
    if (phi_v1_3 == &D_8093CCB8) {
        if ((((s32) temp_v0_3 >> 4) & 7) == 3) {
            if (sp4C != 0) {
                func_8093C2B4(this);
                return;
            }
            func_8093C460(this);
            return;
        }
        if (sp4C != 0) {
            func_8093C460(this);
            return;
        }
        func_8093C2B4(this);
        /* Duplicate return node #70. Try simplifying control flow for better match */
    }
}

void ObjSwitch_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp1C;
    s16 temp_v0;
    s32 temp_a2;
    s32 temp_v0_2;
    ObjSwitch *this = (ObjSwitch *) thisx;

    temp_v0 = this->actor.params;
    temp_v0_2 = temp_v0 & 7;
    if ((temp_v0_2 == 0) || (temp_v0_2 == 1) || (temp_v0_2 == 5)) {
        temp_a2 = this->unk_144;
        this = this;
        sp1C = temp_v0_2;
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
    }
    if (((temp_v0 & 7) != 1) && ((temp_v0 & 7) != 2)) {
        if (((temp_v0 & 7) != 3) && ((temp_v0 & 7) != 4)) {
            return;
        }
        Collider_DestroyJntSph(globalCtx, this + 0x178);
        return;
    }
    Collider_DestroyTris(globalCtx, this + 0x178);
}

void func_8093B648(DynaPolyActor *arg0, GlobalContext *arg1, void (*arg2)(DynaPolyActor *, GlobalContext *, u32), s8 arg3) {
    arg0->unk_174 = arg2;
    arg0->unk_171 = arg3;
    arg0->unk_15C = func_8093B668;
}

void func_8093B668(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        func_8093AE1C(arg0, arg1, arg0->unk_171);
        if (arg0->unk_170 == 1) {
            arg0->unk_170 = 2;
        }
        arg0->unk_172 = 1;
        arg0->unk_174(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_8093B6F4(ObjSwitch *arg0) {
    arg0->actionFunc = func_8093B710;
    arg0->actor.scale.y = arg0->unk_250;
}

void func_8093B710(DynaPolyActor *arg0, GlobalContext *arg1) {
    s32 sp20;
    s16 temp_v0;
    u32 temp_t1;
    u8 temp_v0_2;
    s32 phi_a3;

    temp_v0 = arg0->actor.params;
    if ((temp_v0 & 7) == 1) {
        temp_v0_2 = arg0->unk_189;
        if ((temp_v0_2 & 2) != 0) {
            arg0->unk_189 = (u8) (temp_v0_2 & 0xFFFD);
            func_8093B648(arg0, arg1, func_8093B92C, 1);
            return;
        }
        CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x178);
        return;
    }
    temp_t1 = ((s32) temp_v0 >> 4) & 7;
    switch (temp_t1) {
    case 0:
        if (func_800CAFB8(arg0) != 0) {
            func_8093AF1C(arg0, 1);
            func_8093B648(arg0, arg1, func_8093B92C, 1);
            return;
        }
    default:
        return;
    case 4:
        if (func_800CAFB8(arg0) != 0) {
            func_8093AF1C(arg0, 1);
            func_8093B648(arg0, arg1, func_8093B92C, 1);
            return;
        }
        if (Flags_GetSwitch(arg1, ((s32) arg0->actor.params >> 8) & 0x7F) != 0) {
            func_8093B92C(arg0);
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    case 1:
        if (func_800CAFB8(arg0) != 0) {
            if (Flags_GetSwitch(arg1, ((s32) arg0->actor.params >> 8) & 0x7F) != 0) {
                phi_a3 = 0;
            } else {
                phi_a3 = 1;
            }
            sp20 = phi_a3;
            func_8093AF1C(arg0, 1);
            func_8093B648(arg0, arg1, func_8093B92C, (s8) phi_a3);
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    case 2:
        if (func_800CAFB8(arg0) != 0) {
            func_8093AF1C(arg0, 1);
            func_8093B648(arg0, arg1, func_8093B92C, 1);
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    case 3:
        if (func_800CAFB8(arg0) != 0) {
            func_8093AF1C(arg0, 2);
            func_8093AE1C((Actor *) arg0, arg1, 0);
            func_8093B92C(arg0);
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    }
}

void func_8093B92C(DynaPolyActor *arg0) {
    arg0->unk_15C = func_8093B940;
}

void func_8093B940(Actor *arg0, ? arg1) {
    arg0->scale.y -= 0.0495f;
    if (arg0->scale.y <= arg0[1].prevPos.z) {
        func_8093AEC4(arg0);
        func_8013ECE0(arg0->xyzDistToPlayerSq, 0x78U, 0x14U, 0xAU);
        func_8093AE88(arg0);
        func_8093B9C0((ObjSwitch *) arg0);
    }
}

void func_8093B9C0(ObjSwitch *arg0) {
    arg0->unk_160 = 6;
    arg0->actionFunc = func_8093B9E4;
    arg0->actor.scale.y = arg0->unk_254;
}

void func_8093B9E4(DynaPolyActor *arg0, GlobalContext *arg1) {
    u32 sp20;
    s16 temp_v1;
    u32 temp_v0;

    temp_v1 = arg0->actor.params;
    temp_v0 = ((s32) temp_v1 >> 4) & 7;
    switch (temp_v0) {
    case 0:
    case 4:
        if (Flags_GetSwitch(arg1, ((s32) temp_v1 >> 8) & 0x7F) == 0) {
            if ((arg1->sceneNum == 0x4F) && (func_800CAFB8(arg0) != 0)) {
                func_8093AE1C((Actor *) arg0, arg1, 1);
                return;
            }
            func_8093BB5C(arg0, arg1);
            return;
        }
    default:
        return;
    case 1:
    case 2:
    case 3:
        sp20 = temp_v0;
        if ((func_800CAFB8(arg0) == 0) && ((sp20 = temp_v0, (func_801233E4(arg1) == 0)) || (arg1->sceneNum == 0x4F))) {
            if ((s32) arg0->unk_160 <= 0) {
                if (temp_v0 == 2) {
                    func_8093AE1C((Actor *) arg0, arg1, 0);
                    func_8093BB5C(arg0);
                    return;
                }
                if (temp_v0 == 3) {
                    func_8093B648(arg0, arg1, func_8093BB5C, 1);
                    return;
                }
                func_8093BB5C(arg0, arg1, temp_v0);
                return;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return;
        }
        if (arg1->sceneNum == 0x4F) {
            arg0->unk_160 = 2;
            return;
        }
        arg0->unk_160 = 6;
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
}

void func_8093BB5C(DynaPolyActor *arg0) {
    arg0->unk_15C = func_8093BB70;
}

void func_8093BB70(Actor *arg0, ? arg1) {
    arg0->scale.y += 0.0495f;
    if (arg0[1].prevPos.y <= arg0->scale.y) {
        func_8093AEC4();
        func_8093AE88(arg0);
        func_8093B6F4((ObjSwitch *) arg0);
    }
}

s32 func_8093BBD0(DynaPolyActor *arg0) {
    void *sp3C;
    ? sp2C;
    ? sp20;
    void *temp_v0;

    if (((arg0->unk_189 & 2) != 0) && ((arg0->unk_16F & 2) == 0) && (temp_v0 = arg0[1].actor.world.pos.x, (temp_v0 != 0)) && (sp3C = temp_v0, SysMatrix_StatePush(), Matrix_RotateY(temp_v0->unk_32, 0U), SysMatrix_InsertXRotation_s(temp_v0->unk_30, 1), SysMatrix_GetStateTranslationAndScaledZ(1.0f, (Vec3f *) &sp2C), Matrix_RotateY(arg0->actor.shape.rot.y, 0U), SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1), SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1), SysMatrix_GetStateTranslationAndScaledZ(1.0f, (Vec3f *) &sp20), SysMatrix_StatePop(), ((bitwise f32) Math3D_Parallel((Vec3f *) &sp2C, (Vec3f *) &sp20) < -0.38268343f))) {
        return 1;
    }
    return 0;
}

void func_8093BCC8(ObjSwitch *arg0) {
    arg0->actionFunc = func_8093BCDC;
}

void func_8093BCDC(ObjSwitch *arg0, GlobalContext *arg1) {
    s16 temp_a1;

    temp_a1 = arg0->actor.params;
    arg0 = arg0;
    if (Flags_GetSwitch(arg1, ((s32) temp_a1 >> 8) & 0x7F) != 0) {
        func_8093BE10(arg0);
        return;
    }
    func_8093BD34(arg0);
}

void func_8093BD34(ObjSwitch *arg0) {
    arg0->actionFunc = func_8093BD4C;
    arg0->unk_164 = 0;
}

void func_8093BD4C(DynaPolyActor *arg0, GlobalContext *arg1) {
    if ((func_8093BBD0() != 0) || ((((s32) arg0->actor.params >> 7) & 1) != 0)) {
        arg0->actor.params &= 0xFF7F;
        func_8093B648(arg0, arg1, func_8093BDAC, 1);
    }
}

void func_8093BDAC(DynaPolyActor *arg0) {
    arg0->unk_15C = func_8093BDC0;
}

void func_8093BDC0(Actor *arg0, ? arg1) {
    arg0->unk_164 = (s8) (arg0->unk_164 + 1);
    if ((s32) arg0->unk_164 >= 3) {
        func_8093AE88();
        func_8093AEC4(arg0);
        func_8093BE10((ObjSwitch *) arg0);
    }
}

void func_8093BE10(ObjSwitch *arg0) {
    arg0->actionFunc = func_8093BE2C;
    arg0->unk_164 = 3;
}

void func_8093BE2C(DynaPolyActor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_v0;

    temp_v1 = arg0->actor.params;
    temp_v0 = ((s32) temp_v1 >> 4) & 7;
    temp_a1 = (s32) temp_v1 >> 8;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return;
        }
        if ((func_8093BBD0(arg0, temp_a1) != 0) || ((((s32) arg0->actor.params >> 7) & 1) != 0)) {
            arg0->actor.params &= 0xFF7F;
            func_8093B648(arg0, arg1, func_8093BEF0, 0);
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if (Flags_GetSwitch(arg1, temp_a1 & 0x7F) == 0) {
        arg0->actor.params &= 0xFF7F;
        func_8093BEF0(arg0);
    }
}

void func_8093BEF0(DynaPolyActor *arg0) {
    arg0->unk_15C = func_8093BF04;
}

void func_8093BF04(Actor *arg0, ? arg1) {
    arg0->unk_164 = (s8) (arg0->unk_164 - 1);
    if ((s32) arg0->unk_164 <= 0) {
        func_8093AE88();
        func_8093AEC4(arg0);
        func_8093BD34((ObjSwitch *) arg0);
    }
}

void func_8093BF50(ObjSwitch *arg0) {
    arg0->unk_16C = 0;
    arg0->unk_16D = 0;
    arg0->unk_16E = 0;
    arg0->actionFunc = func_8093BF70;
}

void func_8093BF70(DynaPolyActor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_a2 = ((arg0->unk_189 & 2) != 0) != 0;
    phi_v0 = temp_a2;
    if (temp_a2 != 0) {
        temp_v0 = (arg0->unk_16F & 2) == 0;
        phi_v0 = temp_v0;
        if (temp_v0 != 0) {
            phi_v0 = (s32) arg0->unk_162 < 1;
        }
    }
    if (temp_a2 != 0) {
        arg0->unk_162 = 0xA;
    }
    temp_v1 = arg0->actor.params;
    temp_v0_2 = ((s32) temp_v1 >> 4) & 7;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 != 1) {
            if (temp_v0_2 != 4) {
                return;
            }
            if (phi_v0 != 0) {
                func_8093B648(arg0, arg1, func_8093C0A4, 1);
                return;
            }
            if (Flags_GetSwitch(arg1, ((s32) temp_v1 >> 8) & 0x7F) != 0) {
                arg0->unk_162 = 0xA;
                func_8093C0A4(arg0);
                return;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        if (phi_v0 != 0) {
            func_8093B648(arg0, arg1, func_8093C0A4, 1);
        }
        func_8093AE74(arg0);
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return;
    }
    if (phi_v0 != 0) {
        func_8093B648(arg0, arg1, func_8093C0A4, 1);
    }
}

void func_8093C0A4(DynaPolyActor *arg0) {
    arg0->unk_15C = func_8093C0B8;
}

void func_8093C0B8(Actor *arg0, ? arg1) {
    s32 sp20;
    s32 temp_v1;

    temp_v1 = ((s32) arg0->params >> 4) & 7;
    if ((arg0->unk_189 & 2) != 0) {
        arg0->unk_162 = 0xA;
    }
    sp20 = temp_v1;
    func_8093AE88(arg0);
    if (temp_v1 == 1) {
        func_8093AE74((DynaPolyActor *) arg0);
    }
    func_8093AEF0(arg0);
    func_8093C138((ObjSwitch *) arg0);
}

void func_8093C138(ObjSwitch *arg0) {
    arg0->unk_16C = 0xFF;
    arg0->unk_16D = 0xFF;
    arg0->unk_16E = 0xFF;
    arg0->actionFunc = func_8093C15C;
}

void func_8093C15C(DynaPolyActor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_a2 = ((arg0->unk_189 & 2) != 0) != 0;
    phi_v0 = temp_a2;
    if (temp_a2 != 0) {
        temp_v0 = (arg0->unk_16F & 2) == 0;
        phi_v0 = temp_v0;
        if (temp_v0 != 0) {
            phi_v0 = (s32) arg0->unk_162 < 1;
        }
    }
    if (temp_a2 != 0) {
        arg0->unk_162 = 0xA;
    }
    temp_v1 = arg0->actor.params;
    temp_v0_2 = ((s32) temp_v1 >> 4) & 7;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 != 1) {
            if (temp_v0_2 == 4) {
                goto block_8;
            }
        } else if (phi_v0 != 0) {
            func_8093B648(arg0, arg1, func_8093C23C, 0);
        }
    } else {
block_8:
        if (Flags_GetSwitch(arg1, ((s32) temp_v1 >> 8) & 0x7F) == 0) {
            arg0->unk_162 = 0xA;
            func_8093C23C(arg0);
        }
    }
    func_8093AE74(arg0);
}

void func_8093C23C(DynaPolyActor *arg0) {
    arg0->unk_15C = func_8093C250;
}

void func_8093C250(Actor *arg0, ? arg1) {
    if ((arg0->unk_189 & 2) != 0) {
        arg0->unk_162 = 0xA;
    }
    func_8093AE88(arg0);
    func_8093AE74((DynaPolyActor *) arg0);
    func_8093AEF0(arg0);
    func_8093BF50((ObjSwitch *) arg0);
}

void func_8093C2B4(ObjSwitch *arg0) {
    arg0->actionFunc = func_8093C2D4;
    arg0->actor.scale.y = 0.2475f;
}

void func_8093C2D4(DynaPolyActor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = ((s32) arg0->actor.params >> 4) & 7;
    if (temp_v0 == 0) {
        if (func_800CAFDC(arg0) != 0) {
            func_8093AF1C(arg0, 1);
            func_8093B648(arg0, arg1, func_8093C3C8, 1);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 2) {
        if (func_800CAFDC(arg0) != 0) {
            func_8093AF1C(arg0, 1);
            func_8093B648(arg0, arg1, func_8093C3C8, 1);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 3) && (func_800CAFDC(arg0) != 0)) {
        func_8093AF1C(arg0, 2);
        func_8093AE1C((Actor *) arg0, arg1, 0);
        func_8093C3C8(arg0);
    }
}

void func_8093C3C8(DynaPolyActor *arg0) {
    arg0->unk_15C = func_8093C3DC;
}

void func_8093C3DC(Actor *arg0, ? arg1) {
    arg0->scale.y -= 0.074250005f;
    if (arg0->scale.y <= 0.0165f) {
        func_8093AEC4(arg0);
        func_8013ECE0(arg0->xyzDistToPlayerSq, 0x78U, 0x14U, 0xAU);
        func_8093AE88(arg0);
        func_8093C460((ObjSwitch *) arg0);
    }
}

void func_8093C460(ObjSwitch *arg0) {
    arg0->unk_160 = 6;
    arg0->actionFunc = func_8093C488;
    arg0->actor.scale.y = 0.0165f;
}

void func_8093C488(DynaPolyActor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_v0;

    temp_v1 = arg0->actor.params;
    temp_v0 = ((s32) temp_v1 >> 4) & 7;
    if (temp_v0 == 0) {
        if (Flags_GetSwitch(arg1, ((s32) temp_v1 >> 8) & 0x7F) == 0) {
            func_8093C584(arg0);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 2) || (temp_v0 == 3)) {
        if ((func_800CAFDC(arg0) == 0) && (func_801233E4(arg1) == 0)) {
            if ((s32) arg0->unk_160 <= 0) {
                if ((((s32) arg0->actor.params >> 4) & 7) == 2) {
                    func_8093AE1C((Actor *) arg0, arg1, 0);
                    func_8093C584(arg0);
                    return;
                }
                func_8093B648(arg0, arg1, func_8093C584, 1);
                return;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return;
        }
        arg0->unk_160 = 6;
        /* Duplicate return node #12. Try simplifying control flow for better match */
    }
}

void func_8093C584(DynaPolyActor *arg0) {
    arg0->unk_15C = func_8093C598;
}

void func_8093C598(Actor *arg0, ? arg1) {
    arg0->scale.y += 0.074250005f;
    if (arg0->scale.y >= 0.2475f) {
        func_8093AEC4();
        func_8093AE88(arg0);
        func_8093C2B4((ObjSwitch *) arg0);
    }
}

void ObjSwitch_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    Collider *sp20;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    ObjSwitch *temp_a0;
    ObjSwitch *temp_a3;
    s16 temp_v0;
    s16 temp_v0_4;
    s8 temp_v0_2;
    u32 temp_t2;
    u8 temp_v0_3;
    ObjSwitch *this = (ObjSwitch *) thisx;

    temp_a3 = this;
    temp_v0 = temp_a3->unk_160;
    if ((s32) temp_v0 > 0) {
        temp_a3->unk_160 = temp_v0 - 1;
    }
    temp_v0_2 = temp_a3->unk_165;
    if ((s32) temp_v0_2 > 0) {
        temp_a3->unk_165 = temp_v0_2 - 1;
    }
    this = temp_a3;
    temp_a3->actionFunc(temp_a3, globalCtx);
    if (this->unk_170 != 0) {
        temp_a0 = this;
        this = this;
        func_8093AF54(temp_a0, globalCtx);
        if (this->unk_170 == 2) {
            this->unk_170 = 0;
        }
    }
    temp_t2 = this->actor.params & 7;
    switch (temp_t2) {
    case 0:
    case 1:
    case 5:
        this->unk_16F = this->unk_158;
        return;
    case 2:
        temp_v0_3 = this->unk_178.acFlags;
        this->unk_178.acFlags = temp_v0_3 & 0xFFFD;
        this->unk_16F = temp_v0_3;
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, this + 0x178);
        return;
    case 3:
    case 4:
        this = this;
        if (func_801233E4(globalCtx) == 0) {
            temp_v0_4 = this->unk_162;
            if ((s32) temp_v0_4 > 0) {
                this->unk_162 = temp_v0_4 - 1;
            }
        }
        if (this->unk_162 == 0) {
            this->unk_18C = D_8093CE08.base.colType;
        } else {
            this->unk_18C = 0xA;
        }
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->unk_178;
        this->unk_16F = this->unk_189;
        this = this;
        sp20 = temp_a2;
        sp24 = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, temp_a2);
        CollisionCheck_SetOC(globalCtx, temp_a1, temp_a2);
        /* fallthrough */
    default:
        return;
    }
}

void func_8093C778(void *arg0, GlobalContext *arg1) {
    void *sp2C;
    GraphicsContext *sp28;
    void *sp1C;
    Gfx *temp_v1;
    GraphicsContext *temp_t0;
    s32 temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_v0 = ((s32) arg0->unk_1C >> 4) & 7;
    if (temp_v0 == 0) {
        temp_t0 = arg1->state.gfxCtx;
        temp_v1 = temp_t0->polyOpa.p;
        temp_v1->words.w1 = &sSetupDL[150];
        temp_v1->words.w0 = 0xDE000000;
        temp_v1_2 = temp_v1 + 8;
        temp_v1_2->unk_0 = 0xDA380003;
        temp_v1_3 = temp_v1_2 + 8;
        sp2C = temp_v1_3;
        sp28 = temp_t0;
        arg0 = arg0;
        sp1C = temp_v1_2;
        temp_v1_2->unk_4 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v1_3->unk_0 = 0xFA000080;
        temp_v1_3->unk_4 = (s32) ((arg0->unk_16C << 0x18) | (arg0->unk_16D << 0x10) | (arg0->unk_16E << 8) | 0xFF);
        temp_v1_4 = temp_v1_3 + 8;
        temp_v1_4->unk_0 = 0xDE000000;
        temp_v1_4->unk_4 = &D_0501B508;
        temp_t0->polyOpa.p = temp_v1_4 + 8;
        return;
    }
    func_800BDFC0(arg1, *(&D_8093CE2C + (temp_v0 * 4)));
}

void func_8093C888(s32 arg0, GlobalContext *arg1) {
    func_800BDFC0(arg1, (Gfx *) &D_05007E00);
}

void func_8093C8B8(void *arg0, GraphicsContext **arg1) {
    s32 sp28;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;

    sp28 = ((s32) arg0->unk_1C >> 4) & 7;
    temp_a0 = *arg1;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060020;
    temp_v0_2->words.w1 = *(D_8093CC60 + ((sp28 * 0x10) + (arg0->unk_164 * 4)));
    temp_v0_3 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = *(&D_8093CE40 + (sp28 * 4));
}

void func_8093C99C(void *arg0, GraphicsContext **arg1) {
    s32 sp28;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;

    sp28 = ((s32) arg0->unk_1C >> 4) & 7;
    temp_a0 = *arg1;
    sp24 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp24->polyXlu.p;
    sp24->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = sp24->polyXlu.p;
    sp24->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060020;
    temp_v0_2->words.w1 = *(D_8093CC60 + ((sp28 * 0x10) + (arg0->unk_164 * 4)));
    temp_v0_3 = sp24->polyXlu.p;
    sp24->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = *(&D_8093CE40 + (sp28 * 4));
}

void func_8093CA80(void *arg0) {
    if ((((s32) arg0->unk_1C >> 3) & 1) != 0) {
        func_8093C99C();
        return;
    }
    func_8093C8B8();
}

void func_8093CAC4(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp3C;
    Gfx *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_s0;

    temp_s0 = arg1->state.gfxCtx;
    func_800B8118(arg0, arg1, 0);
    AnimatedMat_DrawStep(arg1, (AnimatedMaterial *) D_8093D3B0, (bitwise u32) arg0[1].world.pos.x);
    func_8012C28C(arg1->state.gfxCtx);
    func_8012C2DC(arg1->state.gfxCtx);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp3C = temp_v0;
    sp3C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_0501C058;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xFA000080;
    temp_v0_3->words.w1 = (arg0->unk_16C << 0x18) | (arg0->unk_16D << 0x10) | (arg0->unk_16E << 8) | 0xFF;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_0501BEE0;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xDA380003;
    sp2C = temp_v0_5;
    sp2C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_6[1];
    temp_v0_6->words.w1 = (u32) &D_0501BFB8;
    temp_v0_6->words.w0 = 0xDE000000;
}

void ObjSwitch_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjSwitch *this = (ObjSwitch *) thisx;
    *(&D_8093CE48 + ((this->actor.params & 7) * 4))();
}
