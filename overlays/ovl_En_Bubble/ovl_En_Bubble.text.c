typedef struct EnBubble {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnBubble *, GlobalContext *);
    /* 0x148 */ ColliderJntSph unk_148;             /* inferred */
    /* 0x168 */ ColliderJntSphElement unk_168;      /* inferred */
    /* 0x1A8 */ char pad_1A8[0x5A];                 /* maybe part of unk_168[2]? */
    /* 0x202 */ s16 unk_202;                        /* inferred */
    /* 0x204 */ char pad_204[0x4];                  /* maybe part of unk_202[3]? */
    /* 0x208 */ f32 unk_208;                        /* inferred */
    /* 0x20C */ f32 unk_20C;                        /* inferred */
    /* 0x210 */ char pad_210[0x8];                  /* maybe part of unk_20C[3]? */
    /* 0x218 */ f32 unk_218;                        /* inferred */
    /* 0x21C */ f32 unk_21C;                        /* inferred */
    /* 0x220 */ char pad_220[0x4];
    /* 0x224 */ f32 unk_224;                        /* inferred */
    /* 0x228 */ f32 unk_228;                        /* inferred */
    /* 0x22C */ f32 unk_22C;                        /* inferred */
    /* 0x230 */ f32 unk_230;                        /* inferred */
    /* 0x234 */ f32 unk_234;                        /* inferred */
    /* 0x238 */ f32 unk_238;                        /* inferred */
    /* 0x23C */ char pad_23C[0x1C];                 /* maybe part of unk_238[8]? */
} EnBubble;                                         /* size = 0x258 */

struct _mips2c_stack_EnBubble_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBubble_Draw {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ void (*sp38)(void *, ?);             /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnBubble_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderJntSph *sp28;                /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnBubble_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8089F4E0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8089F59C {};              /* size 0x0 */

struct _mips2c_stack_func_8089F5D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8089F5F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8089F660 {
    /* 0x00 */ char pad_0[0x78];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad_90[0x10];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_8089F8BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8089F908 {};              /* size 0x0 */

struct _mips2c_stack_func_8089F95C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8089F9E4 {};              /* size 0x0 */

struct _mips2c_stack_func_8089FA54 {
    /* 0x00 */ char pad_0[0x4B];
    /* 0x4B */ u8 sp4B;                             /* inferred */
    /* 0x4C */ u32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ ?32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0x10];
    /* 0x94 */ CollisionPoly *sp94;                 /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_8089FF30 {};              /* size 0x0 */

struct _mips2c_stack_func_8089FFCC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A005C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808A029C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderJntSph *sp20;                /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808A0350 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A03A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A03E8 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderJntSph *sp18;                /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

? func_800B8E1C(s32, void *, f32, s16, f32);        /* extern */
void func_8089F4E0(Actor *arg0, f32 arg1);          /* static */
s16 func_8089F59C(EnBubble *arg0);                  /* static */
s32 func_8089F5D0();                                /* static */
void func_8089F5F4(void *arg0, s32 arg1);           /* static */
s16 func_8089F660(EnBubble *arg0, GlobalContext *arg1); /* static */
s32 func_8089F8BC(void *arg0);                      /* static */
s32 func_8089F908(EnBubble *arg0);                  /* static */
void func_8089F95C(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2); /* static */
void func_8089F9E4(f32 *arg0);                      /* static */
void func_8089FA54(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8089FF30(void *arg0);                      /* static */
s32 func_8089FFCC(EnBubble *arg0, GlobalContext *); /* static */
void func_808A005C(EnBubble *arg0);                 /* static */
void func_808A03A0(void *arg0, ? arg1);             /* static */
extern ? D_06001000;
static ColliderJntSphElementInit D_808A0700[2] = {
    {{0, {0, 0, 4}, {0xF7CFD757, 0, 0}, 0, 1, 1}, {0, {{0, 0, 0}, 0x10}, 0x64}},
    {{0, {0, 0, 0}, {0x2820, 0, 0}, 0, 0x79, 0}, {0, {{0, 0, 0}, 0x10}, 0x64}},
};
static ColliderJntSphInit D_808A0748 = {{6, 0x11, 9, 0x39, 0x10, 0}, 2, &D_808A0700};
static CollisionCheckInfoInit2 D_808A0758 = {1, 2, 0x19, 0x19, 0xFF};
static ? D_808A0764;                                /* unable to generate initializer */
static Color_RGBA8 D_808A0770 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_808A0774 = {0x96, 0x96, 0x96, 0};
static void (*D_808A0780)(Actor *, Lights *, GlobalContext *) = (void (*)(Actor *, Lights *, GlobalContext *))0x3DA3D70A; /* const */
static void (*D_808A0798)(Actor *, Lights *, GlobalContext *) = (void (*)(Actor *, Lights *, GlobalContext *))0x3EF5C28F; /* const */
static void (*D_808A07A0)(Actor *, Lights *, GlobalContext *) = (void (*)(Actor *, Lights *, GlobalContext *))0x3EF5C28F; /* const */

void func_8089F4E0(Actor *arg0, f32 arg1) {
    f32 sp24;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f2;

    arg0->flags |= 1;
    Actor_SetScale(arg0, 1.0f);
    arg0->shape.yOffset = 16.0f;
    arg0[1].shape.yOffset = 16.0f;
    arg0[1].shape.feetPos[0].x = arg1;
    arg0[1].shape.feetPos[0].y = arg1;
    arg0[1].shape.shadowDraw = (void (*)(Actor *, Lights *, GlobalContext *))0x3DA3D70A;
    sp24 = Rand_ZeroOne();
    sp20 = Rand_ZeroOne();
    temp_f0 = Rand_ZeroOne();
    arg0[1].shape.shadowScale = 1.0f;
    arg0->unk_214 = 1.0f;
    temp_f2 = (sp24 * sp24) + (sp20 * sp20) + (temp_f0 * temp_f0);
    arg0->unk_1FC = (f32) (temp_f0 / temp_f2);
    arg0->unk_1F4 = (f32) (sp24 / temp_f2);
    arg0->unk_1F8 = (f32) (sp20 / temp_f2);
}

s16 func_8089F59C(EnBubble *arg0) {
    void *temp_v1;

    temp_v1 = arg0->unk_148.elements;
    temp_v1->info.toucher.dmgFlags = 8;
    temp_v1->info.toucher.effect = 0;
    temp_v1->info.toucher.damage = 4;
    temp_v1->info.toucherFlags = 1;
    arg0->actor.velocity.y = 0.0f;
    return 6;
}

s32 func_8089F5D0(void) {
    func_8089F4E0((Actor *)0xBF800000);
    return 0xC;
}

void func_8089F5F4(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a2;
    void *temp_t9;

    temp_a2 = arg1;
    temp_t9 = temp_a2 + 0x20000;
    temp_a0 = temp_a2;
    arg1 = temp_a2;
    temp_t9->unk_-787C(temp_a0, -(s32) arg0->unk_164->unk_5, temp_a2);
    func_800B8E1C(arg1, arg0, 6.0f, arg0->unk_92, 6.0f);
}

s16 func_8089F660(EnBubble *arg0, GlobalContext *arg1) {
    ? sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 *temp_s2;
    s16 temp_v0;
    s32 temp_s0;
    s16 phi_v1;
    s32 phi_s0;

    sp90.unk_0 = (s32) D_808A0764.unk_0;
    sp90.unk_4 = (s32) D_808A0764.unk_4;
    sp90.unk_8 = (s32) D_808A0764.unk_8;
    Math_SmoothStepToF(arg0 + 0x218, 4.0f, 0.1f, 1000.0f, 0.0f);
    Math_SmoothStepToF(arg0 + 0x21C, 4.0f, 0.1f, 1000.0f, 0.0f);
    Math_SmoothStepToF(arg0 + 0x208, 54.0f, 0.1f, 1000.0f, 0.0f);
    Math_SmoothStepToF(arg0 + 0x20C, 0.2f, 0.1f, 1000.0f, 0.0f);
    temp_v0 = arg0->unk_202;
    arg0->actor.shape.yOffset = (arg0->unk_21C + 1.0f) * 16.0f;
    phi_s0 = 0;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_202 = temp_v0 - 1;
        phi_v1 = arg0->unk_202;
    }
    if (phi_v1 != 0) {
        return -1;
    }
    sp78 = arg0->actor.world.pos.x;
    sp7C = arg0->actor.world.pos.y + arg0->actor.shape.yOffset;
    temp_s2 = &sp84;
    sp80 = arg0->actor.world.pos.z;
    do {
        sp84 = (Rand_ZeroOne() - 0.5f) * 7.0f;
        sp88 = Rand_ZeroOne() * 7.0f;
        sp8C = (Rand_ZeroOne() - 0.5f) * 7.0f;
        EffectSsDtBubble_SpawnCustomColor(arg1, (Vec3f *) &sp78, (Vec3f *) temp_s2, (Vec3f *) &sp90, &D_808A0770, &D_808A0774, (s16) Rand_S16Offset(0x64, 0x32), (s16) 0x19, (s16) 0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x14);
    Item_DropCollectibleRandom(arg1, NULL, arg0 + 0x24, 0x50);
    arg0->actor.flags &= -2;
    return Rand_S16Offset(0x5A, 0x3C);
}

s32 func_8089F8BC(void *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_202;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_202 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk_202;
    }
    if (phi_v1 != 0) {
        return -1;
    }
    return func_8089F5D0();
}

s32 func_8089F908(EnBubble *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_202;
    arg0->unk_218 += 0.083333336f;
    arg0->unk_21C += 0.083333336f;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_202 = temp_v0 - 1;
        phi_v1 = arg0->unk_202;
    }
    if (phi_v1 != 0) {
        return 0;
    }
    return 1;
}

void func_8089F95C(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    func_80179F64(arg0, arg1, arg2);
    temp_f2 = arg2->x;
    temp_f12 = arg2->y;
    temp_f14 = arg2->z;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    if (temp_f0 != 0.0f) {
        arg2->x = temp_f2 / temp_f0;
        arg2->y = temp_f12 / temp_f0;
        arg2->z = temp_f14 / temp_f0;
        return;
    }
    arg2->z = 0.0f;
    arg2->y = 0.0f;
    arg2->x = 0.0f;
}

void func_8089F9E4(f32 *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = arg0->unk_0;
    temp_f12 = arg0[1];
    temp_f14 = arg0[2];
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    if (temp_f0 != 0.0f) {
        arg0->unk_0 = temp_f2 / temp_f0;
        arg0[1] = temp_f12 / temp_f0;
        arg0[2] = temp_f14 / temp_f0;
        return;
    }
    arg0[2] = 0.0f;
    arg0[1] = 0.0f;
    arg0->unk_0 = 0.0f;
}

void func_8089FA54(Actor *arg0, GlobalContext *arg1) {
    CollisionPoly *sp94;
    ? sp84;
    f32 sp80;
    f32 sp7C;
    ?32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    u32 sp4C;
    u8 sp4B;
    ?32 *temp_a1;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 *temp_a1_2;
    f32 *temp_a1_3;
    f32 *temp_a2;
    f32 temp_f0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_v0;
    f32 phi_f0;
    f32 phi_f0_2;

    if ((arg0->unk_164->unk_56 & 2) != 0) {
        temp_v0 = arg0[1].home.pos.y;
        temp_a0 = arg0 + 0x23C;
        temp_a0->unk_0 = temp_v0->unk_64;
        temp_a0[1] = temp_v0->unk_68;
        temp_a0[2] = temp_v0->unk_6C;
        func_8089F9E4(temp_a0);
        arg0[1].uncullZoneDownward += arg0[1].projectedW * 3.0f;
        arg0[1].prevPos.x += arg0[1].uncullZoneForward * 3.0f;
        arg0[1].prevPos.y += arg0[1].uncullZoneScale * 3.0f;
    }
    temp_f0 = arg0->minVelocityY;
    arg0[1].prevPos.z -= 0.1f;
    if (arg0[1].prevPos.z < temp_f0) {
        arg0[1].prevPos.z = temp_f0;
    }
    temp_a0_2 = &sp54;
    sp54 = arg0[1].projectedPos.x + arg0[1].uncullZoneDownward;
    sp58 = arg0[1].projectedPos.y + arg0[1].prevPos.x + arg0[1].prevPos.z;
    sp5C = arg0[1].projectedPos.z + arg0[1].prevPos.y;
    func_8089F9E4(temp_a0_2);
    temp_a1 = &sp78;
    temp_a2 = &sp6C;
    sp78 = arg0->world.pos.x;
    sp7C = arg0->world.pos.y + arg0->shape.yOffset;
    sp80 = arg0->world.pos.z;
    temp_a2->unk_0 = temp_a1->unk_0;
    temp_a2[1] = temp_a1[1];
    temp_a2[2] = temp_a1[2];
    sp6C += sp54 * 24.0f;
    sp70 += sp58 * 24.0f;
    sp74 += sp5C * 24.0f;
    if (func_800C55C4(arg1 + 0x830, (Vec3f *) temp_a1, (Vec3f *) temp_a2, (Vec3f *) &sp84, &sp94, 1U, 1U, 1U, 0U, &sp4C) != 0) {
        temp_a1_2 = &sp60;
        sp60 = (f32) sp94->normal.x * 0.00003051851f;
        sp64 = (f32) sp94->normal.y * 0.00003051851f;
        sp68 = (f32) sp94->normal.z * 0.00003051851f;
        func_8089F95C((Vec3f *) &sp54, (Vec3f *) temp_a1_2, (Vec3f *) &sp54);
        arg0[1].shape.feetPos[1].x = sp54.unk_0;
        temp_v0_2 = arg0->unk_220 + 1;
        arg0[1].shape.feetPos[1].y = (&sp54)[1];
        arg0->unk_220 = temp_v0_2;
        arg0[1].shape.feetPos[1].z = (&sp54)[2];
        sp4B = temp_v0_2;
        if ((s32) (s16) (s32) (Rand_ZeroOne() * 10.0f) < (s32) temp_v0_2) {
            arg0->unk_220 = 0U;
        }
        if (arg0->unk_220 == 0) {
            phi_f0 = 3.6000001f;
        } else {
            phi_f0 = 3.0f;
        }
        arg0[1].prevPos.y = 0.0f;
        arg0[1].projectedPos.x = arg0[1].shape.feetPos[1].x * phi_f0;
        arg0[1].prevPos.x = 0.0f;
        arg0[1].uncullZoneDownward = 0.0f;
        arg0[1].projectedPos.y = arg0[1].shape.feetPos[1].y * phi_f0;
        arg0[1].prevPos.z = 0.0f;
        arg0[1].projectedPos.z = arg0[1].shape.feetPos[1].z * phi_f0;
        Audio_PlayActorSound2(arg0, 0x3948U);
        arg0[1].shape.yOffset = 128.0f;
        arg0[1].shape.shadowDraw = (void (*)(Actor *, Lights *, GlobalContext *))0x3EF5C28F;
    } else if ((arg0->bgCheckFlags & 0x20) != 0) {
        temp_a1_3 = &sp60;
        if (sp58 < 0.0f) {
            sp68 = 0.0f;
            sp60 = 0.0f;
            sp64 = 1.0f;
            func_8089F95C((Vec3f *) &sp54, (Vec3f *) temp_a1_3, (Vec3f *) &sp54);
            arg0[1].shape.feetPos[1].x = sp54.unk_0;
            temp_v0_3 = arg0->unk_220 + 1;
            arg0[1].shape.feetPos[1].y = (&sp54)[1];
            arg0->unk_220 = temp_v0_3;
            arg0[1].shape.feetPos[1].z = (&sp54)[2];
            sp4B = temp_v0_3;
            if ((s32) (s16) (s32) (Rand_ZeroOne() * 10.0f) < (s32) temp_v0_3) {
                arg0->unk_220 = 0U;
            }
            if (arg0->unk_220 == 0) {
                phi_f0_2 = 3.6000001f;
            } else {
                phi_f0_2 = 3.0f;
            }
            arg0[1].prevPos.y = 0.0f;
            arg0[1].prevPos.x = 0.0f;
            arg0[1].uncullZoneDownward = 0.0f;
            arg0[1].prevPos.z = 0.0f;
            arg0[1].projectedPos.x = arg0[1].shape.feetPos[1].x * phi_f0_2;
            arg0[1].projectedPos.y = arg0[1].shape.feetPos[1].y * phi_f0_2;
            arg0[1].projectedPos.z = arg0[1].shape.feetPos[1].z * phi_f0_2;
            Audio_PlayActorSound2(arg0, 0x3948U);
            arg0[1].shape.yOffset = 128.0f;
            arg0[1].shape.shadowDraw = (void (*)(Actor *, Lights *, GlobalContext *))0x3EF5C28F;
        }
    }
    arg0->velocity.x = arg0[1].projectedPos.x + arg0[1].uncullZoneDownward;
    arg0->velocity.y = arg0[1].projectedPos.y + arg0[1].prevPos.x + arg0[1].prevPos.z;
    arg0->velocity.z = arg0[1].projectedPos.z + arg0[1].prevPos.y;
    Math_ApproachF(&arg0[1].uncullZoneDownward, 0.0f, 0.3f, 0.1f);
    Math_ApproachF((f32 *) &arg0[1].prevPos, 0.0f, 0.3f, 0.1f);
    Math_ApproachF(&arg0[1].prevPos.y, 0.0f, 0.3f, 0.1f);
}

s32 func_8089FF30(void *arg0) {
    u8 temp_v0;
    void *temp_v1;

    temp_v0 = arg0->unk_159;
    if ((temp_v0 & 2) == 0) {
        return 0;
    }
    arg0->unk_159 = (u8) (temp_v0 & 0xFFFD);
    if ((arg0->unk_164->unk_56 & 2) != 0) {
        temp_v1 = arg0->unk_150;
        arg0->unk_1E8 = (f32) (temp_v1->unk_64 / 10.0f);
        arg0->unk_1EC = (f32) (temp_v1->unk_68 / 10.0f);
        arg0->unk_208 = 128.0f;
        arg0->unk_1F0 = (f32) (temp_v1->unk_6C / 10.0f);
        arg0->unk_20C = 0.48f;
        return 0;
    }
    arg0->unk_200 = 8;
    return 1;
}

s32 func_8089FFCC(EnBubble *arg0) {
    s16 temp_v0;
    u8 temp_v0_2;
    s16 phi_v1;

    temp_v0 = arg0->unk_200;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_200 = temp_v0 - 1;
        phi_v1 = arg0->unk_200;
    }
    if ((phi_v1 != 0) || (func_808A0350 == arg0->actionFunc)) {
        return 0;
    }
    temp_v0_2 = arg0->unk_148.base.ocFlags2;
    if ((temp_v0_2 & 1) != 0) {
        arg0->unk_148.base.ocFlags2 = temp_v0_2 & 0xFFFE;
        func_8089F5F4();
        arg0->unk_200 = 8;
        return 1;
    }
    return func_8089FF30();
}

void func_808A005C(EnBubble *arg0) {
    void *sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp1C;
    f32 *temp_a0;
    void *temp_t8;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0->unk_148.elements;
    temp_a0 = &sp28;
    temp_v0_2 = temp_v0 + 0x28;
    sp28 = (f32) temp_v0->dim.modelSphere.center.x;
    sp2C = (f32) temp_v0_2->unk_2;
    arg0 = arg0;
    sp34 = temp_v0_2;
    sp30 = (f32) temp_v0_2->unk_4;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &sp1C);
    temp_v0_2->unk_8 = (s16) (s32) sp1C;
    temp_v0_2->unk_A = (s16) (s32) sp20;
    temp_v0_2->unk_C = (s16) (s32) sp24;
    temp_v0_2->unk_E = (s16) (s32) ((f32) temp_v0_2->unk_6 * (1.0f + arg0->unk_218));
    temp_t8 = arg0->unk_148.elements;
    temp_t8->unk_68 = (s32) temp_v0_2->unk_0;
    temp_t8->unk_6C = (s32) temp_v0_2->unk_4;
    temp_t8->unk_70 = (s32) temp_v0_2->unk_8;
    temp_t8->unk_74 = (s32) temp_v0_2->unk_C;
    temp_t8[1].dim.scale = temp_v0_2->unk_10;
    temp_t8->unk_7C = (s32) temp_v0_2->unk_14;
}

void EnBubble_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderJntSph *sp28;
    ColliderJntSph *temp_a1;
    EnBubble *this = (EnBubble *) thisx;

    ActorShape_Init(&this->actor.shape, 16.0f, func_800B3FC0, 0.2f);
    temp_a1 = &this->unk_148;
    sp28 = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_808A0748, &this->unk_168);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(9), &D_808A0758);
    this->actor.hintId = 0x16;
    this->unk_224 = Rand_ZeroOne();
    this->unk_228 = Rand_ZeroOne();
    this->unk_22C = Rand_ZeroOne();
    func_8089F9E4(&this->unk_224);
    this->unk_230 = this->unk_224 * 3.0f;
    this->unk_234 = this->unk_228 * 3.0f;
    this->unk_238 = this->unk_22C * 3.0f;
    func_8089F4E0((Actor *) this, 0.0f);
    this->actionFunc = func_808A029C;
}

void EnBubble_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBubble *this = (EnBubble *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_148);
}

void func_808A029C(EnBubble *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderJntSph *sp20;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;

    if (func_8089FFCC(this, globalCtx) != 0) {
        this->unk_202 = func_8089F59C(this);
        this->actionFunc = func_808A0350;
        return;
    }
    func_8089FA54((Actor *) this, globalCtx);
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->unk_148;
    this->actor.shape.yOffset = (this->unk_21C + 1.0f) * 16.0f;
    sp20 = temp_a2;
    sp24 = temp_a1;
    CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
    CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
}

void func_808A0350(EnBubble *this, GlobalContext *globalCtx) {
    if (func_8089F660(this, globalCtx) >= 0) {
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x3C, 0x3949U);
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_808A03A0(void *arg0, ? arg1) {
    s32 temp_v0;

    temp_v0 = func_8089F8BC();
    if (temp_v0 >= 0) {
        arg0->unk_C8 = func_800B3FC0;
        arg0->unk_202 = (s16) temp_v0;
        arg0->unk_144 = func_808A03E8;
    }
}

void func_808A03E8(EnBubble *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp1C;
    ColliderJntSph *sp18;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    EnBubble *temp_a0;

    temp_a0 = this;
    this = this;
    if (func_8089F908(temp_a0) != 0) {
        this->actionFunc = func_808A029C;
    }
    temp_a2 = &this->unk_148;
    temp_a1 = &globalCtx->colChkCtx;
    sp1C = temp_a1;
    sp18 = temp_a2;
    CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
    CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
}

void EnBubble_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBubble *this = (EnBubble *) thisx;
    Actor_ApplyMovement((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 16.0f, 16.0f, 0.0f, 7U);
    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, this->actor.shape.yOffset);
}

void EnBubble_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp44;
    void (*sp38)(void *, ?);
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a3;
    GraphicsContext *temp_s2;
    f32 temp_f18;
    f32 temp_f18_2;
    u32 temp_t7;
    u32 temp_t8;
    f32 phi_f18;
    f32 phi_f18_2;
    EnBubble *this = (EnBubble *) thisx;

    temp_a3 = globalCtx->state.gfxCtx;
    sp38 = func_808A03A0;
    temp_s2 = temp_a3;
    if (func_808A03A0 != this->actionFunc) {
        func_8012C2DC(temp_a3);
        Math_SmoothStepToF(&this->unk_208, 16.0f, 0.2f, 1000.0f, 0.0f);
        Math_SmoothStepToF(&this->unk_20C, 0.08f, 0.2f, 1000.0f, 0.0f);
        SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
        Matrix_Scale(this->unk_218 + 1.0f, this->unk_21C + 1.0f, 1.0f, 1);
        temp_t7 = globalCtx->state.frames;
        temp_f18 = (f32) temp_t7;
        phi_f18 = temp_f18;
        if ((s32) temp_t7 < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        SysMatrix_InsertZRotation_f(phi_f18 * 0.017453292f * this->unk_208, 1);
        Matrix_Scale(this->unk_20C + 1.0f, 1.0f, 1.0f, 1);
        temp_t8 = globalCtx->state.frames;
        temp_f18_2 = (f32) temp_t8;
        phi_f18_2 = temp_f18_2;
        if ((s32) temp_t8 < 0) {
            phi_f18_2 = temp_f18_2 + 4294967296.0f;
        }
        SysMatrix_InsertZRotation_f(-phi_f18_2 * 0.017453292f * this->unk_208, 1);
        temp_v0 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp44 = temp_v0;
        sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = (u32) &D_06001000;
        temp_v0_2->words.w0 = 0xDE000000;
    }
    if (sp38 != this->actionFunc) {
        this->actor.shape.shadowScale = (this->unk_218 + 1.0f) * 0.2f;
        func_808A005C(this);
    }
}
