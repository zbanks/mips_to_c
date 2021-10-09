? func_800AEF44(void *);                            /* extern */
f32 func_800C4188(Color_RGBA8 *, void *, ? *, ? *, Actor *, f32 *); /* extern */
void func_8093E8A0(Actor *arg0);                    /* static */
void func_8093E91C(EnGoroiwa *arg0);                /* static */
void func_8093E938(Actor *arg0);                    /* static */
void func_8093E9B0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093EAB0(void *arg0, s32 arg1);           /* static */
s32 func_8093EAD4(Vec3f *arg0, Vec3f *arg1);        /* static */
void func_8093EB58(EnGoroiwa *arg0, GlobalContext *arg1); /* static */
f32 func_8093EB74(EnGoroiwa *arg0, GlobalContext *arg1); /* static */
void func_8093EC50(EnGoroiwa *arg0);                /* static */
void func_8093ECD4(void *arg0);                     /* static */
void func_8093ED80(void *arg0);                     /* static */
void func_8093EDB0(Actor *arg0);                    /* static */
void func_8093EDD8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093EE18(EnGoroiwa *arg0, GlobalContext *arg1); /* static */
void func_8093EE64(EnGoroiwa *arg0, s16 arg1);      /* static */
void func_8093EEBC(EnGoroiwa *arg0);                /* static */
s32 func_8093EEDC(Actor *arg0);                     /* static */
void func_8093EF54(GlobalContext *arg0, void *arg1, Color_RGBA8 *arg2, Color_RGBA8 *arg3, f32 arg4, void *, f32); /* static */
void func_8093F198(GlobalContext *arg0, Vec3f *arg1, f32 arg2); /* static */
? func_8093F34C(Actor *arg0);                       /* static */
? func_8093F498(void *arg0);                        /* static */
s32 func_8093F5EC(Actor *arg0);                     /* static */
s32 func_8093F6F8(Actor *arg0, Color_RGBA8 *arg1);  /* static */
void func_8093FAA4(EnGoroiwa *arg0, GlobalContext *arg1); /* static */
void func_8093FC00(EnGoroiwa *arg0);                /* static */
void func_8093FC6C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80940090(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_80940588(GlobalContext *arg0, Vec3f *arg1, void *arg2, Color_RGBA8 *arg3, Color_RGBA8 *arg4, f32 arg5); /* static */
void func_80940A1C(GlobalContext *arg0, Vec3f *arg1, void *arg2, Color_RGBA8 *arg3, Color_RGBA8 *arg4, f32 arg5); /* static */
void func_80940E38(EnGoroiwa *arg0, GlobalContext *arg1); /* static */
void func_80941060(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_80941274(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8094156C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809419D0(EnGoroiwa *arg0);                /* static */
void func_80941A10(Actor *arg0, GlobalContext *arg1); /* static */
void func_80941DB4(Actor *arg0);                    /* static */
void func_80941E28(Actor *arg0, ? arg1);            /* static */
void func_80941EB4(Actor *arg0);                    /* static */
void func_80941F10(EnGoroiwa *arg0);                /* static */
void func_80941F54(Actor *arg0);                    /* static */
void func_80941FA4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80942084(Actor *arg0);                    /* static */
void func_809420F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809421E0(Actor *arg0);                    /* static */
void func_8094220C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809425CC(Actor *arg0, s16);               /* static */
void func_80942604(Actor *arg0, ? arg1);            /* static */
void func_80942B1C(GlobalContext *arg0, GlobalContext *arg1); /* static */
extern Gfx D_060032E0;
extern Gfx D_060082D0;
static ColliderJntSphElementInit D_80942DC0 = {
    {0, {0x20000000, 0, 4}, {0x1C37BB6, 0, 0}, 0x19, 1, 1},
    {0, {{0, 0, 0}, 0x3A}, 0x64},
};
static ColliderJntSphInit D_80942DE4 = {{9, 0x11, 0xD, 0x39, 0x20, 0}, 1, &D_80942DC0};
static CollisionCheckInfoInit D_80942DF4 = {0, 0xC, 0x3C, 0xFE};
static ? D_80942DFC;                                /* unable to generate initializer */
static ? D_80942E0C;                                /* unable to generate initializer */
static ? D_80942E30;                                /* unable to generate initializer */
static Color_RGBA8 D_80942E38 = {0xFA, 0xFA, 0xFA, 0xFF};
static ? D_80942E3C;                                /* unable to generate initializer */
static Color_RGBA8 D_80942E44 = {0xB4, 0xB4, 0xB4, 0xFF};
static Vec3f D_80942E48 = {0.0f, 0.0f, 0.0f};
static Vec3f D_80942E54 = {0.0f, 0.3f, 0.0f};
static Vec3f D_80942E60 = {0.0f, 1.0f, 0.0f};
static Vec3f D_80942E6C = {0.0f, 0.0f, 1.0f};
static InitChainEntry D_80942E78;                   /* unable to generate initializer */
static void D_80942E8C;                             /* unable to generate initializer */
static ? D_80942E94;                                /* unable to generate initializer */
static ? D_80942E9C;                                /* unable to generate initializer */
static ? D_80942EAC;                                /* unable to generate initializer */
static ? D_80942EB4;                                /* unable to generate initializer */

typedef struct EnGoroiwa {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderJntSph unk144;             /* inferred */
    /* 0x0164 */ char pad164[0x40];                 /* maybe part of unk144[3]? */
    /* 0x01A4 */ void (*actionFunc)(EnGoroiwa *, GlobalContext *);
    /* 0x01A8 */ f32 unk1A8;                        /* inferred */
    /* 0x01AC */ char pad1AC[0x8];                  /* maybe part of unk1A8[3]? */
    /* 0x01B4 */ f32 unk1B4;                        /* inferred */
    /* 0x01B8 */ f32 unk1B8;                        /* inferred */
    /* 0x01BC */ f32 unk1BC;                        /* inferred */
    /* 0x01C0 */ f32 unk1C0;                        /* inferred */
    /* 0x01C4 */ f32 unk1C4;                        /* inferred */
    /* 0x01C8 */ s16 unk1C8;                        /* inferred */
    /* 0x01CA */ char pad1CA[0x2];                  /* maybe part of unk1C8[2]? */
    /* 0x01CC */ s16 unk1CC;                        /* inferred */
    /* 0x01CE */ s16 unk1CE;                        /* inferred */
    /* 0x01D0 */ void *unk1D0;                      /* inferred */
    /* 0x01D4 */ s16 unk1D4;                        /* inferred */
    /* 0x01D6 */ s16 unk1D6;                        /* inferred */
    /* 0x01D8 */ s16 unk1D8;                        /* inferred */
    /* 0x01DA */ s16 unk1DA;                        /* inferred */
    /* 0x01DC */ f32 unk1DC;                        /* inferred */
    /* 0x01E0 */ f32 unk1E0;                        /* inferred */
    /* 0x01E4 */ s8 unk1E4;                         /* inferred */
    /* 0x01E5 */ u8 unk1E5;                         /* inferred */
    /* 0x01E6 */ char pad1E6[0x62];                 /* maybe part of unk1E5[99]? */
    /* 0x0248 */ s32 unk248;                        /* inferred */
} EnGoroiwa;                                        /* size 0x24C */

void func_8093E8A0(Actor *arg0) {
    s32 temp_v0;
    f32 phi_f2;

    temp_v0 = ((s32) arg0->params >> 0xC) & 3;
    if (temp_v0 == 0) {
        phi_f2 = 0.1f;
    } else if (temp_v0 == 1) {
        phi_f2 = 0.05f;
    } else {
        phi_f2 = (Rand_ZeroOne() * 0.04f) + 0.04f;
    }
    Actor_SetScale(arg0, phi_f2);
}

void func_8093E91C(EnGoroiwa *arg0) {
    arg0->unk1DC = arg0->actor.scale.x * 595.0f;
}

void func_8093E938(Actor *arg0) {
    void *temp_v0;

    temp_v0 = arg0->unk160 + 0x30;
    temp_v0->unk0 = (s16) (s32) arg0->world.pos.x;
    temp_v0->unk2 = (s16) (s32) (arg0->world.pos.y + arg0->unk1DC);
    temp_v0->unk4 = (s16) (s32) arg0->world.pos.z;
    arg0->unk160->unk36 = (s16) (s32) (arg0->unk1DC - 1.0f);
}

void func_8093E9B0(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    ColliderJntSph *sp28;
    ColliderJntSph *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_a1 = arg0 + 0x144;
    sp28 = temp_a1;
    sp2C = ((s32) arg0->params >> 0xE) & 3;
    Collider_InitJntSph(arg1, temp_a1);
    Collider_SetJntSph(arg1, temp_a1, arg0, &D_80942DE4, arg0 + 0x164);
    func_8093E938(arg0);
    arg0->unk160->unk36 = (s16) (s32) (arg0->unk1DC - 1.0f);
    if ((sp2C == 1) || (sp2C == 2)) {
        temp_v0 = arg0->unk160;
        temp_v0->unk8 = (s32) (temp_v0->unk8 | 0x4500);
        if (sp2C == 1) {
            arg0->unk158 = 0xB;
            return;
        }
        temp_v0_2 = arg0->unk160;
        temp_v0_2->unk8 = (s32) (temp_v0_2->unk8 & 0xFFBFFDFD);
        temp_v0_3 = arg0->unk160;
        temp_v0_3->unk8 = (s32) (temp_v0_3->unk8 | 0x80000808);
        arg0->unk158 = 0xA;
        // Duplicate return node #5. Try simplifying control flow for better match
    }
}

void func_8093EAB0(void *arg0, s32 arg1) {
    u8 temp_t8;

    temp_t8 = arg0->unk1E5 & 0xFFF8;
    arg0->unk1E5 = temp_t8;
    arg0->unk1E5 = (u8) (temp_t8 | (arg1 & 0xFF));
}

s32 func_8093EAD4(Vec3f *arg0, Vec3f *arg1) {
    f32 temp_f0;
    f32 temp_f2;

    arg0 = arg0;
    temp_f0 = Math3D_Vec3fMagnitude(arg1);
    if (temp_f0 < 0.001f) {
        return 0;
    }
    temp_f2 = 1.0f / temp_f0;
    arg0->x = arg1->x * temp_f2;
    arg0->y = arg1->y * temp_f2;
    arg0->z = arg1->z * temp_f2;
    return 1;
}

void func_8093EB58(EnGoroiwa *arg0, GlobalContext *arg1) {
    arg0->unk1E4 = ((s32) arg0->actor.home.rot.x >> 1) & 3;
}

f32 func_8093EB74(EnGoroiwa *arg0, GlobalContext *arg1) {
    Vec3f sp54;
    Vec3f sp48;
    f32 temp_f20;
    s32 temp_s0;
    u8 temp_s4;
    s32 phi_s0;
    f32 phi_f20;
    f32 phi_f20_2;

    temp_s4 = *(arg1->setupPathList + ((arg0->actor.params & 0xFF) * 8));
    Math_Vec3s_ToVec3f(&sp48, arg0->unk1D0);
    phi_s0 = 6;
    phi_f20 = 0.0f;
    phi_f20_2 = 0.0f;
    if ((s32) temp_s4 >= 2) {
        do {
            Math_Vec3f_Copy(&sp54, &sp48);
            Math_Vec3s_ToVec3f(&sp48, arg0->unk1D0 + phi_s0);
            temp_s0 = phi_s0 + 6;
            temp_f20 = phi_f20_2 + Math3D_Distance(&sp54, &sp48);
            phi_s0 = temp_s0;
            phi_f20 = temp_f20;
            phi_f20_2 = temp_f20;
        } while (temp_s0 != (temp_s4 * 6));
    }
    return phi_f20;
}

void func_8093EC50(EnGoroiwa *arg0) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    Vec3f *temp_a0;
    f32 *temp_a1;
    void *temp_v0;

    temp_a0 = arg0 + 0x24;
    temp_v0 = arg0->unk1D0 + (arg0->unk1D8 * 6);
    temp_a1 = &sp18;
    sp18 = (f32) temp_v0->unk0;
    sp1C = (f32) temp_v0->unk2;
    arg0 = arg0;
    sp20 = (f32) temp_v0->unk4;
    arg0->actor.world.rot.y = Math_Vec3f_Yaw(temp_a0, (Vec3f *) temp_a1);
}

void func_8093ECD4(void *arg0) {
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v1;
    s32 temp_v0;

    temp_v1 = arg0->unk1D8;
    temp_v0 = ((s32) arg0->unk1C >> 8) & 3;
    if ((s32) temp_v1 < 0) {
        if ((temp_v0 == 0) || (temp_v0 == 1)) {
            temp_a1 = arg0->unk1D4;
            arg0->unk1DA = -1;
            arg0->unk1D8 = (s16) (temp_a1 - 1);
            arg0->unk1D6 = temp_a1;
            return;
        }
        if (temp_v0 == 3) {
            arg0->unk1D6 = 0;
            arg0->unk1D8 = 1;
            arg0->unk1DA = 1;
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
        return;
    }
    temp_a1_2 = arg0->unk1D4;
    if ((s32) temp_a1_2 < (s32) temp_v1) {
        if ((temp_v0 == 0) || (temp_v0 == 1)) {
            arg0->unk1D6 = 0;
            arg0->unk1D8 = 1;
            arg0->unk1DA = 1;
            return;
        }
        if (temp_v0 == 3) {
            arg0->unk1D6 = temp_a1_2;
            arg0->unk1D8 = (s16) (temp_a1_2 - 1);
            arg0->unk1DA = -1;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
    }
}

void func_8093ED80(void *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk1D8;
    arg0->unk1D6 = temp_v0;
    arg0->unk1D8 = (s16) (temp_v0 + arg0->unk1DA);
    func_8093ECD4();
}

void func_8093EDB0(Actor *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk1D8;
    arg0->unk1DA = (s16) -(s32) arg0->unk1DA;
    arg0->unk1D6 = temp_v0;
    arg0->unk1D8 = (s16) (temp_v0 + arg0->unk1DA);
}

void func_8093EDD8(Actor *arg0, GlobalContext *arg1) {
    arg0->unk1D6 = 0;
    arg0->unk1D8 = 1;
    arg0->unk1D4 = (s16) (*(arg1->setupPathList + ((arg0->params & 0xFF) * 8)) - 1);
    arg0->unk1DA = 1;
}

void func_8093EE18(EnGoroiwa *arg0, GlobalContext *arg1) {
    arg0->unk1D6 = arg0->actor.home.rot.y;
    arg0->unk1D4 = *(arg1->setupPathList + ((arg0->actor.params & 0xFF) * 8)) - 1;
    arg0->unk1D8 = arg0->unk1D6 + 1;
    arg0->unk1DA = 1;
}

void func_8093EE64(EnGoroiwa *arg0, s16 arg1) {
    void *temp_v0;

    temp_v0 = arg0->unk1D0 + (arg1 * 6);
    arg0->actor.world.pos.x = (f32) temp_v0->unk0;
    arg0->actor.world.pos.y = (f32) temp_v0->unk2;
    arg0->actor.world.pos.z = (f32) temp_v0->unk4;
}

void func_8093EEBC(EnGoroiwa *arg0) {
    arg0->unk1B4 = 1.0f;
    arg0->unk1C4 = 1.0f;
    arg0->unk1A8 = 1.0f;
}

s32 func_8093EEDC(Actor *arg0) {
    s32 temp_v1;
    void *temp_a1;
    void *temp_v0;

    temp_v1 = arg0->unk1D0;
    temp_v0 = temp_v1 + (arg0->unk1D8 * 6);
    temp_a1 = temp_v1 + (arg0->unk1D6 * 6);
    if ((temp_a1->unk0 == temp_v0->unk0) && (temp_a1->unk4 == temp_v0->unk4)) {
        if ((s32) temp_a1->unk2 < (s32) temp_v0->unk2) {
            return 1;
        }
        return -1;
    }
    return 0;
}

void func_8093EF54(GlobalContext *arg0, void *arg1, Color_RGBA8 *arg2, Color_RGBA8 *arg3, f32 arg4) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f24;
    f32 temp_f26;
    s32 temp_f16;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    temp_f0 = (arg4 + 0.1f) * 0.5f;
    temp_f16 = (s32) (temp_f0 * 165.0f);
    temp_f24 = 470.0f * arg4;
    phi_s0 = 0;
    phi_s1 = 0;
    if (temp_f16 > 0) {
        temp_f26 = 800.0f * temp_f0;
        temp_s5 = &spC4;
        do {
            temp_f20 = Rand_ZeroOne();
            spC4 = (Math_SinS(phi_s0) * (temp_f24 * ((temp_f20 * 0.5f) + 0.5f))) + arg1->unk0;
            spC8 = ((Rand_ZeroOne() - 0.5f) * (400.0f * arg4)) + arg1->unk4;
            temp_f20_2 = Rand_ZeroOne();
            spCC = (Math_CosS(phi_s0) * (temp_f24 * ((temp_f20_2 * 0.5f) + 0.5f))) + arg1->unk8;
            func_800B0E48(arg0, (Vec3f *) temp_s5, &D_80942E48, &D_80942E54, arg2, arg3, (s16) (s32) ((Rand_ZeroOne() * (600.0f * temp_f0)) + temp_f26), (s16) (s32) (s16) (s32) temp_f26);
            temp_s1 = phi_s1 + 1;
            phi_s0 = (s16) (phi_s0 + (s16) (0x10000 / temp_f16));
            phi_s1 = temp_s1;
        } while (temp_s1 < temp_f16);
    }
}

void func_8093F198(GlobalContext *arg0, Vec3f *arg1, f32 arg2) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 *temp_s5;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_f16;
    s32 temp_lo;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    temp_s5 = &sp74;
    sp78 = arg1->y;
    temp_f16 = (s32) ((arg2 + 0.1f) * 58.0f);
    phi_s0 = 0;
    phi_s1 = 0;
    if (temp_f16 > 0) {
        temp_lo = 0x10000 / temp_f16;
        temp_f20 = 550.0f * arg2;
        temp_f22 = (f32) (s16) temp_lo;
        do {
            sp74 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * temp_f22) + phi_s0)) * temp_f20) + arg1->x;
            sp7C = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * temp_f22) + phi_s0)) * temp_f20) + arg1->z;
            EffectSsGSplash_Spawn(arg0, (Vec3f *) temp_s5, NULL, NULL, (s16) 0, (s16) 0x15E);
            temp_s1 = phi_s1 + 1;
            phi_s0 = (s16) (phi_s0 + (s16) temp_lo);
            phi_s1 = temp_s1;
        } while (temp_s1 < temp_f16);
    }
    EffectSsGRipple_Spawn(arg0, arg1, 0x1F4, 0x384, (s16) 4);
}

? func_8093F34C(Actor *arg0) {
    f32 sp18;
    Actor *temp_a3;
    f32 temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    void *temp_v0;

    temp_a3 = arg0;
    temp_a1 = *(&D_80942DFC + (temp_a3->unk1E4 * 4));
    arg0 = temp_a3;
    Math_StepToF(temp_a3 + 0x70, temp_a1, 0.3f);
    Actor_SetVelocityYRotationAndGravity(arg0);
    temp_v0 = arg0->unk1D0 + (arg0->unk1D8 * 6);
    temp_f18 = arg0->world.pos.x;
    arg0->velocity.y *= 0.97f;
    sp18 = arg0->world.pos.z;
    temp_f14 = (f32) temp_v0->unk0;
    temp_f16 = (f32) temp_v0->unk4;
    temp_f12 = arg0->speedXZ + 1.0f;
    temp_f0 = temp_f14 - temp_f18;
    temp_f2 = temp_f16 - sp18;
    if ((temp_f12 * temp_f12) < ((temp_f0 * temp_f0) + (temp_f2 * temp_f2))) {
        arg0->world.pos.x = temp_f18 + arg0->velocity.x;
        arg0->world.pos.y += arg0->velocity.y;
        arg0->unk1E5 = (u8) (arg0->unk1E5 & 0xFFBF);
        arg0->world.pos.z = sp18 + arg0->velocity.z;
        return 0;
    }
    arg0->world.pos.x = temp_f14;
    arg0->world.pos.z = temp_f16;
    arg0->unk1E5 = (u8) (arg0->unk1E5 | 0x40);
    arg0->world.pos.y += arg0->velocity.y;
    return 1;
}

? func_8093F498(void *arg0) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Vec3f *sp24;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f2;
    void *temp_v0;

    temp_v0 = arg0->unk1D0 + (arg0->unk1D8 * 6);
    sp2C = (f32) temp_v0->unk0;
    sp30 = (f32) temp_v0->unk2;
    sp34 = (f32) temp_v0->unk4;
    Math_StepToF(arg0 + 0x70, *(&D_80942DFC + (arg0->unk1E4 * 4)), 0.3f);
    temp_a2 = arg0 + 0x64;
    sp24 = temp_a2;
    Math_Vec3f_Diff((Vec3f *) &sp2C, arg0 + 0x24, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp24);
    temp_f2 = arg0->unk70;
    if ((temp_f2 + 1.0f) < temp_f0) {
        Math_Vec3f_Scale(sp24, temp_f2 / temp_f0);
        arg0->unk24 = (f32) (arg0->unk24 + arg0->unk64);
        arg0->unk1E5 = (u8) (arg0->unk1E5 & 0xFFBF);
        arg0->unk28 = (f32) (arg0->unk28 + arg0->unk68);
        arg0->unk2C = (f32) (arg0->unk2C + arg0->unk6C);
        return 0;
    }
    arg0->unk24 = sp2C;
    arg0->unk28 = sp30;
    arg0->unk1E5 = (u8) (arg0->unk1E5 | 0x40);
    arg0->unk2C = sp34;
    return 1;
}

s32 func_8093F5EC(Actor *arg0) {
    void *sp18;
    Actor *temp_a3;
    f32 temp_a2;
    f32 temp_f6;
    void *temp_v1;

    temp_a3 = arg0;
    temp_v1 = temp_a3->unk1D0 + (temp_a3->unk1D8 * 6);
    if (temp_a3->velocity.y < 0.0f) {
        temp_a3->velocity.y = 0.0f;
    }
    temp_f6 = *(&D_80942DFC + (temp_a3->unk1E4 * 4));
    arg0 = temp_a3;
    sp18 = temp_v1;
    Math_StepToF(temp_a3 + 0x68, temp_f6 * 0.5f, 0.18f);
    temp_a2 = fabsf(arg0->velocity.y);
    arg0->world.pos.x = (f32) temp_v1->unk0;
    arg0->world.pos.z = (f32) temp_v1->unk4;
    if (Math_StepToF(arg0 + 0x28, (f32) temp_v1->unk2, temp_a2) != 0) {
        arg0->unk1E5 = (u8) (arg0->unk1E5 | 0x40);
        return 1;
    }
    arg0->unk1E5 = (u8) (arg0->unk1E5 & 0xFFBF);
    return 0;
}

s32 func_8093F6F8(Actor *arg0, Color_RGBA8 *arg1) {
    void *sp80;
    f32 sp7C;
    f32 sp78;
    s16 sp72;
    ? sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    ? sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    WaterBox *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_a0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v1 = arg0->unk1D0 + (arg0->unk1D8 * 6);
    sp80 = temp_v1;
    sp7C = (f32) temp_v1->unk2;
    Math_StepToF(arg0 + 0x68, -18.367346f, 1.0f);
    temp_f2 = arg0->world.pos.y;
    arg0->velocity.y *= 0.98f;
    arg0->world.pos.x = (f32) temp_v1->unk0;
    arg0->world.pos.z = (f32) temp_v1->unk4;
    sp78 = temp_f2;
    temp_f0 = arg0->velocity.y;
    arg0->world.pos.y = temp_f2 + temp_f0;
    if ((temp_f0 < 0.0f) && (arg0->world.pos.y <= sp7C)) {
        if (arg0->unk1CA == 0) {
            if (arg0->xzDistToPlayer < 400.0f) {
                temp_v0 = Quake_Add((arg1 + (arg1->unk810 * 4))->unk800, 3U);
                temp_a0 = temp_v0 << 0x10;
                sp72 = temp_v0;
                Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x4350);
                Quake_SetQuakeValues(sp72, 3, 0, 0, (s16) 0);
                Quake_SetCountdown(sp72, 7);
            }
            arg0->unk1C4 = 0.0f;
            if ((arg0->unk1E5 & 0x20) == 0) {
                sp60 = arg0->world.pos.x;
                sp64 = arg0->world.pos.y + 50.0f;
                sp68 = arg0->world.pos.z;
                temp_f0_2 = func_800C4188(arg1, arg1 + 0x830, &sp6C, &sp54, arg0, &sp60);
                temp_f14 = temp_f0_2;
                temp_f12 = fabsf(temp_f0_2 - arg0->world.pos.y);
                if (temp_f12 < (fabsf(arg0->velocity.y) + 0.01f)) {
                    if ((arg0->flags & 0x40) != 0) {
                        temp_f8 = temp_f14 + 10.0f;
                        sp48 = arg0->world.pos.x;
                        sp4C = temp_f8;
                        sp50 = arg0->world.pos.z;
                        temp_v0_2 = (((s32) arg0->params >> 0xE) & 3) * 4;
                        func_8093EF54((bitwise GlobalContext *) temp_f12, (bitwise void *) temp_f14, arg1, (Color_RGBA8 *) &sp48, (bitwise f32) (temp_v0_2 + &D_80942E30), temp_v0_2 + &D_80942E3C, arg0->scale.x);
                    }
                    Audio_PlayActorSound2(arg0, 0x28FFU);
                }
            }
        }
        temp_v0_3 = arg0->unk1CA;
        if ((s32) temp_v0_3 > 0) {
            arg0->unk1E5 = (u8) (arg0->unk1E5 | 0x40);
            return 1;
        }
        arg0->unk1CA = (s16) (temp_v0_3 + 1);
        arg0->velocity.y *= -0.3f;
        arg0->world.pos.y = sp7C - ((arg0->world.pos.y - sp7C) * 0.3f);
        goto block_13;
    }
block_13:
    if ((arg0->unk1CA == 0) && (func_800CA1E8((GlobalContext *) arg1, (CollisionContext *) (arg1 + 0x830), arg0->world.pos.x, arg0->world.pos.z, &sp40, &sp44) != 0)) {
        temp_f0_3 = arg0->unk1DC;
        if ((arg0->world.pos.y + temp_f0_3) <= sp40) {
            arg0->unk1E5 = (u8) (arg0->unk1E5 | 0x20);
            if (sp40 < (temp_f0_3 + sp78)) {
                if ((arg0->flags & 0x40) != 0) {
                    sp38 = sp40;
                    sp34 = arg0->world.pos.x;
                    sp3C = arg0->world.pos.z;
                    func_8093F198((GlobalContext *) arg1, (Vec3f *) &sp34, arg0->scale.x);
                }
                arg0->velocity.y *= 0.2f;
            }
            if (arg0->velocity.y < -8.0f) {
                arg0->velocity.y = -8.0f;
            }
        }
    }
    arg0->unk1E5 = (u8) (arg0->unk1E5 & 0xFFBF);
    return 0;
}

void func_8093FAA4(EnGoroiwa *arg0, GlobalContext *arg1) {
    f32 sp7C;
    Vec3f sp70;
    Vec3f sp64;
    MtxF sp24;
    Vec3f *sp20;
    Vec3f *temp_a1;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f6;
    s32 temp_v0;
    s32 phi_v0;
    f32 phi_f12;

    temp_v0 = arg0->unk1E5 & 0x10;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_f12 = arg0->unk1C0;
    } else {
        temp_f12 = Math3D_Distance(arg0 + 0x24, arg0 + 0x108) / arg0->unk1DC;
        arg0->unk1C0 = temp_f12;
        phi_v0 = arg0->unk1E5 & 0x10;
        phi_f12 = temp_f12;
    }
    temp_f6 = arg0->unk1C4;
    temp_a1 = arg0 + 0x64;
    temp_f12_2 = phi_f12 * temp_f6;
    if (phi_v0 == 0) {
        sp20 = temp_a1;
        sp7C = temp_f12_2;
        if (Math3D_LengthSquared(temp_a1) > 0.1f) {
            sp7C = temp_f12_2;
            Math_Vec3f_Copy(arg0 + 0x1A8, temp_a1);
        }
    }
    sp7C = phi_f12 * temp_f6;
    Math3D_CrossProduct(&D_80942E60, arg0 + 0x1A8, &sp70);
    if (func_8093EAD4(&sp64, &sp70) != 0) {
        arg0->unk1B4 = sp64.x;
        arg0->unk1B8 = sp64.y;
        arg0->unk1BC = sp64.z;
    } else {
        sp64.x = arg0->unk1B4;
        sp64.y = arg0->unk1B8;
        sp64.z = arg0->unk1BC;
    }
    SysMatrix_InsertRotationAroundUnitVector_f(phi_f12 * temp_f6, &sp64, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    SysMatrix_CopyCurrentState(&sp24);
    func_8018219C(&sp24, arg0 + 0xBC, 0);
}

void func_8093FC00(EnGoroiwa *arg0) {
    s32 sp1C;
    s16 temp_a1;
    s32 temp_v0;

    temp_v0 = ((s32) arg0->actor.params >> 8) & 3;
    sp1C = temp_v0;
    func_8093ED80();
    if (((temp_v0 == 0) || (temp_v0 == 1)) && ((temp_a1 = arg0->unk1D6, (temp_a1 == 0)) || (arg0->unk1D4 == temp_a1))) {
        func_8093EE64(arg0, temp_a1);
    }
}

void func_8093FC6C(Actor *arg0, GlobalContext *arg1) {
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    s32 sp80;
    f32 *temp_fp;
    f32 *temp_fp_2;
    f32 *temp_s7;
    f32 *temp_s7_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    s16 temp_s3;
    s32 temp_f18;
    s32 temp_s2;
    s32 temp_s2_2;
    u32 temp_v1;
    s16 phi_s0;
    s32 phi_s2;
    s32 phi_v0;
    s16 phi_s0_2;
    s32 phi_s2_2;

    temp_f0 = arg0->scale.x;
    temp_f24 = (temp_f0 + 0.1f) * 0.5f;
    temp_fp = &spB4;
    temp_s7 = &spC0;
    temp_f18 = (s32) (temp_f24 * 150.0f);
    temp_f28 = temp_f0 * 600.0f;
    phi_s0 = 0;
    phi_s2 = 0;
    phi_v0 = temp_f18;
    if (temp_f18 > 0) {
        sp80 = temp_f18;
        do {
            temp_v1 = Rand_Next() >> 0x10;
            temp_s3 = (s16) temp_v1;
            temp_f20 = Math_SinS((s16) temp_v1);
            temp_f22 = Math_CosS(temp_s3);
            spC0 = Math_SinS(phi_s0);
            spC8 = Math_CosS(phi_s0);
            temp_f6 = 2.0f * spC0;
            spB4 = temp_f6;
            temp_f2 = temp_f22 * temp_f28;
            temp_f6_2 = spC0 * temp_f2;
            temp_f10 = (2.0f * Rand_ZeroOne()) + 1.0f;
            spBC = 2.0f * spC8;
            temp_f18_2 = spC8 * temp_f2;
            spB8 = temp_f10;
            spC0 = temp_f6_2;
            spC4 = temp_f20 * temp_f28;
            spC8 = temp_f18_2;
            spC0 = temp_f6_2 + arg0->world.pos.x;
            spC4 += arg0->world.pos.y;
            spC8 = temp_f18_2 + arg0->world.pos.z;
            spA8 = temp_f6 * -0.02f;
            spAC = temp_f10 * -0.05f;
            spB0 = spBC * -0.02f;
            EffectSsIceSmoke_Spawn(arg1, (Vec3f *) temp_s7, (Vec3f *) temp_fp, (Vec3f *) &spA8, (s16) (s32) ((f32) ((s32) (Rand_ZeroOne() * 170.0f) + 0x96) * temp_f24 * 10.0f));
            temp_s2 = phi_s2 + 1;
            phi_s0 = (s16) (phi_s0 + (s16) (0x10000 / temp_f18));
            phi_s2 = temp_s2;
        } while (temp_s2 < temp_f18);
        phi_v0 = sp80;
    }
    temp_s7_2 = &spC0;
    temp_fp_2 = &spB4;
    phi_s0_2 = 0;
    phi_s2_2 = 0;
    if (phi_v0 > 0) {
        do {
            temp_f20_2 = (Rand_ZeroOne() * (450.0f * arg0->scale.x)) + 50.0f;
            spC0 = Math_SinS(phi_s0_2);
            temp_f0_2 = Math_CosS(phi_s0_2);
            spB8 = 0.0f;
            spC8 = temp_f0_2;
            spAC = 0.03f;
            temp_f18_3 = spC0 * 30.0f * temp_f24;
            spB4 = temp_f18_3;
            temp_f6_3 = temp_f0_2 * 30.0f * temp_f24;
            spBC = temp_f6_3;
            spA8 = temp_f18_3 * -0.02f;
            spB0 = temp_f6_3 * -0.02f;
            spC0 = (spC0 * temp_f20_2) + arg0->world.pos.x;
            spC4 = (Rand_ZeroOne() * 20.0f) + arg0->world.pos.y;
            spC8 = (spC8 * temp_f20_2) + arg0->world.pos.z;
            EffectSsIceSmoke_Spawn(arg1, (Vec3f *) temp_s7_2, (Vec3f *) temp_fp_2, (Vec3f *) &spA8, (s16) ((s32) (Rand_ZeroOne() * 1400.0f * temp_f24) + 0x64));
            temp_s2_2 = phi_s2_2 + 1;
            phi_s0_2 = (s16) (phi_s0_2 + (s16) (0x10000 / phi_v0));
            phi_s2_2 = temp_s2_2;
        } while (temp_s2_2 != temp_f18);
    }
}

void func_80940090(Actor *arg0, GlobalContext *arg1) {
    s32 sp120;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spEC;
    s32 spD8;
    s32 spA8;
    Gfx *temp_s1;
    Gfx *temp_s1_2;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f28;
    s32 temp_f18;
    s32 temp_lo;
    s32 temp_s6;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_fp;
    s32 phi_s6;
    s16 phi_s7;
    f32 phi_f22;
    s32 phi_s2;
    s32 phi_s0;
    s32 phi_s3;
    Gfx *phi_s1;

    temp_t8 = ((s32) arg0->params >> 0xE) & 3;
    sp120 = temp_t8;
    if ((arg0->flags & 0x40) != 0) {
        temp_f0 = (arg0->scale.x + 0.1f) * 0.5f;
        sp10C = arg0->world.pos.x;
        sp110 = arg0->world.pos.y + arg0->unk1DC;
        temp_f18 = (s32) (temp_f0 * 150.0f);
        temp_s5 = &sp100;
        sp114 = arg0->world.pos.z;
        spD8 = temp_f18;
        phi_s6 = 0;
        phi_s7 = 0;
        if (temp_f18 > 0) {
            temp_lo = 0x10000 / temp_f18;
            spA8 = (s32) (s16) temp_lo;
            temp_fp = (temp_t8 * 0xC) + &D_80942E0C;
            spEC = temp_f0;
            temp_f28 = (f32) (s16) temp_lo;
            do {
                temp_v0 = phi_s6 & 3;
                if (temp_v0 == 0) {
                    phi_f22 = 1.0f;
                    phi_s2 = -0x118;
                    phi_s0 = 0x40;
                    phi_s3 = 0;
                    phi_s1 = temp_fp->unk8;
                } else {
                    phi_s2 = -0x190;
                    if (temp_v0 == 1) {
                        temp_s1 = temp_fp->unk4;
                        phi_f22 = 0.9f;
                        phi_s2 = -0x154;
                        if (Rand_ZeroOne() < 0.4f) {
                            phi_s0 = 0x20;
                            phi_s3 = 0;
                            phi_s1 = temp_s1;
                        } else {
                            phi_s0 = 0x40;
                            phi_s3 = 0;
                            phi_s1 = temp_s1;
                        }
                    } else {
                        temp_s1_2 = temp_fp->unk0;
                        phi_f22 = 0.8f;
                        phi_s0 = 0x41;
                        phi_s3 = 1;
                        phi_s1 = temp_s1_2;
                        if (Rand_Next() > 0) {
                            phi_s0 = 0x21;
                            phi_s1 = temp_s1_2;
                        }
                    }
                }
                temp_f20 = (Rand_ZeroOne() * arg0->scale.x * 400.0f) + 20.0f;
                sp100 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * temp_f28) + phi_s7)) * temp_f20;
                sp104 = (Rand_ZeroOne() - 0.4f) * temp_f20 * 1.6666666f;
                sp108 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * temp_f28) + phi_s7)) * temp_f20;
                spF4 = sp100 * 0.16f * phi_f22;
                spF8 = (Rand_ZeroOne() * 16.0f) + 3.0f;
                spFC = sp108 * 0.16f * phi_f22;
                Math_Vec3f_Sum((Vec3f *) temp_s5, (Vec3f *) &sp10C, (Vec3f *) temp_s5);
                EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s5, (Vec3f *) &spF4, (Vec3f *) temp_s5, (s16) phi_s2, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) (((Rand_ZeroOne() * 150.0f) + 300.0f) * arg0->scale.x), (s16) phi_s3, (s16) 0, 0x32, (s16) -1, (s16) 0xEF, phi_s1);
                temp_v0_2 = sp120 * 4;
                if (arg0->unk1E6 == 0) {
                    sp100 += ((Rand_ZeroOne() * 1200.0f) - 600.0f) * arg0->scale.x;
                    sp104 += ((Rand_ZeroOne() * 1400.0f) - 600.0f) * arg0->scale.y;
                    sp108 += ((Rand_ZeroOne() * 1200.0f) - 600.0f) * arg0->scale.z;
                    temp_f20_2 = Rand_ZeroOne();
                    func_800B0E48(arg1, (Vec3f *) temp_s5, &D_80942E48, &D_80942E54, temp_v0_2 + &D_80942E30, temp_v0_2 + &D_80942E3C, (s16) (s32) ((temp_f20_2 * 50.0f) + (400.0f * spEC)), (s16) (s32) ((Rand_ZeroOne() * 60.0f) + (500.0f * spEC)));
                }
                temp_s6 = phi_s6 + 1;
                phi_s6 = temp_s6;
                phi_s7 = (s16) (phi_s7 + spA8);
            } while (temp_s6 < spD8);
        }
        if (arg0->unk1E6 != 0) {
            func_8093FC6C(arg0, arg1);
        }
    }
}

void func_80940588(GlobalContext *arg0, Vec3f *arg1, void *arg2, Color_RGBA8 *arg3, Color_RGBA8 *arg4, f32 arg5) {
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    s32 spD8;
    s32 spD0;
    s16 spCE;
    s16 spC8;
    f32 spB0;
    f32 spAC;
    s32 spA8;
    f32 spA4;
    Gfx *temp_s7;
    Gfx *temp_s7_2;
    f32 *temp_s2;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_fp;
    s32 phi_s0;
    Gfx *phi_s7;
    s32 phi_s0_2;

    spD8 = 0;
    spCE = 0;
    temp_v0 = (s32) (arg5 * 35.0f) + 6;
    spD0 = temp_v0;
    if (temp_v0 > 0) {
        temp_lo = 0x10000 / temp_v0;
        temp_f0 = (arg5 + 0.1f) * 0.5f;
        spA8 = (s32) (s16) temp_lo;
        temp_s2 = &spE8;
        spB0 = 550.0f * temp_f0;
        spAC = 500.0f * temp_f0;
        spA4 = (f32) (s16) temp_lo;
        do {
            temp_f20 = (Rand_ZeroOne() * arg5 * 500.0f) + 20.0f;
            sp100 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * spA4) + spCE)) * temp_f20;
            sp104 = (Rand_ZeroOne() - 0.4f) * temp_f20 * 1.6666666f;
            sp108 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * spA4) + spCE)) * temp_f20;
            spF4 = sp100 * 0.19f;
            spF8 = (Rand_ZeroOne() * 16.0f) + 3.0f;
            spFC = sp108 * 0.19f;
            Math_Vec3f_Sum((Vec3f *) &sp100, arg1, (Vec3f *) &sp100);
            temp_v0_2 = spD8 & 3;
            phi_fp = -0x190;
            if (temp_v0_2 == 0) {
                temp_s7 = arg2->unk0;
                spC8 = 1;
                if (Rand_Next() > 0) {
                    phi_s0 = 0x21;
                    phi_s7 = temp_s7;
                } else {
                    phi_s0 = 0x41;
                    phi_s7 = temp_s7;
                }
            } else {
                spC8 = 0;
                if (temp_v0_2 == 1) {
                    temp_s7_2 = arg2->unk4;
                    phi_fp = -0x154;
                    if (Rand_ZeroOne() < 0.4f) {
                        phi_s0 = 0x20;
                        phi_s7 = temp_s7_2;
                    } else {
                        phi_s0 = 0x40;
                        phi_s7 = temp_s7_2;
                    }
                } else {
                    phi_fp = -0x118;
                    phi_s0 = 0x40;
                    phi_s7 = arg2->unk8;
                }
            }
            EffectSsKakera_Spawn(arg0, (Vec3f *) &sp100, (Vec3f *) &spF4, (Vec3f *) &sp100, (s16) phi_fp, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) (((Rand_ZeroOne() * 100.0f) + 170.0f) * arg5), (s16) (s32) spC8, (s16) 0, 0x36, (s16) -1, (s16) 0xEF, phi_s7);
            phi_s0_2 = 0;
loop_12:
            spE8 = (((Rand_ZeroOne() * 1000.0f) - 500.0f) * arg5) + sp100;
            spEC = (((Rand_ZeroOne() * 1300.0f) - 500.0f) * arg5) + sp104;
            spF0 = (((Rand_ZeroOne() * 1000.0f) - 500.0f) * arg5) + sp108;
            temp_f20_2 = Rand_ZeroOne();
            func_800B0E48(arg0, (Vec3f *) temp_s2, &D_80942E48, &D_80942E54, arg3, arg4, (s16) (s32) ((temp_f20_2 * 80.0f) + spB0), (s16) (s32) ((Rand_ZeroOne() * 70.0f) + spAC));
            temp_s0 = phi_s0_2 + 1;
            phi_s0_2 = temp_s0;
            if (temp_s0 != 2) {
                goto loop_12;
            }
            temp_t1 = spD8 + 1;
            spCE += spA8;
            spD8 = temp_t1;
        } while (temp_t1 < spD0);
    }
}

void func_80940A1C(GlobalContext *arg0, Vec3f *arg1, void *arg2, Color_RGBA8 *arg3, Color_RGBA8 *arg4, f32 arg5) {
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    s32 spC8;
    f32 spAC;
    s32 spA8;
    f32 spA4;
    Gfx *temp_s1;
    Gfx *temp_s1_2;
    f32 *temp_s4;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f8;
    s32 temp_lo;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s16 phi_s6;
    s32 phi_s5;
    s32 phi_s2;
    s32 phi_s0;
    s32 phi_s3;
    Gfx *phi_s1;

    temp_v0 = (s32) (arg5 * 35.0f) + 5;
    spC8 = temp_v0;
    phi_s6 = 0;
    phi_s5 = 0;
    if (temp_v0 > 0) {
        temp_lo = 0x10000 / temp_v0;
        spA8 = (s32) (s16) temp_lo;
        temp_s4 = &spE8;
        spA4 = (f32) (s16) temp_lo;
        spAC = 600.0f * ((arg5 + 0.1f) * 0.5f);
        do {
            temp_f20 = (Rand_ZeroOne() * arg5 * 400.0f) + 20.0f;
            spE8 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * spA4) + phi_s6)) * temp_f20;
            spEC = (Rand_ZeroOne() - 0.2f) * temp_f20 * 0.8f;
            spF0 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * spA4) + phi_s6)) * temp_f20;
            spDC = spE8 * 0.17f;
            temp_f8 = (Rand_ZeroOne() * 14.0f) + 3.0f;
            spE4 = spF0 * 0.17f;
            spE0 = temp_f8;
            Math_Vec3f_Sum((Vec3f *) temp_s4, arg1, (Vec3f *) temp_s4);
            temp_v0_2 = phi_s5 & 3;
            if (temp_v0_2 == 0) {
                phi_s2 = -0x118;
                phi_s0 = 0x40;
                phi_s3 = 0;
                phi_s1 = arg2->unk8;
            } else {
                phi_s3 = 1;
                if (temp_v0_2 == 1) {
                    temp_s1 = arg2->unk4;
                    phi_s2 = -0x154;
                    if (Rand_Next() > 0) {
                        phi_s0 = 0x21;
                        phi_s1 = temp_s1;
                    } else {
                        phi_s0 = 0x41;
                        phi_s1 = temp_s1;
                    }
                } else {
                    temp_s1_2 = arg2->unk0;
                    phi_s2 = -0x190;
                    phi_s0 = 0x41;
                    phi_s1 = temp_s1_2;
                    if (Rand_Next() > 0) {
                        phi_s0 = 0x21;
                        phi_s1 = temp_s1_2;
                    }
                }
            }
            EffectSsKakera_Spawn(arg0, (Vec3f *) temp_s4, (Vec3f *) &spDC, (Vec3f *) temp_s4, (s16) phi_s2, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) (((Rand_ZeroOne() * 150.0f) + 250.0f) * arg5), (s16) phi_s3, (s16) 0, 0x36, (s16) -1, (s16) 0xEF, phi_s1);
            spE8 += ((Rand_ZeroOne() * 800.0f) - 400.0f) * arg5;
            spEC += ((Rand_ZeroOne() * 800.0f) - 250.0f) * arg5;
            spF0 += ((Rand_ZeroOne() * 800.0f) - 400.0f) * arg5;
            temp_f20_2 = Rand_ZeroOne();
            func_800B0E48(arg0, (Vec3f *) temp_s4, &D_80942E48, &D_80942E54, arg3, arg4, (s16) (s32) ((temp_f20_2 * 60.0f) + spAC), (s16) (s32) ((Rand_ZeroOne() * 30.0f) + spAC));
            temp_s5 = phi_s5 + 1;
            phi_s6 = (s16) (phi_s6 + spA8);
            phi_s5 = temp_s5;
        } while (temp_s5 < spC8);
    }
}

void func_80940E38(EnGoroiwa *arg0, GlobalContext *arg1) {
    f32 sp5C;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s16 sp46;
    f32 sp38;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_a1;
    s32 phi_v0;
    f32 phi_f2;

    if ((arg0->actor.flags & 0x40) != 0) {
        temp_f0 = arg0->actor.xzDistToPlayer;
        if (temp_f0 < 1000.0f) {
            sp5C = (1000.0f - temp_f0) * 0.0012f * (arg0->actor.speedXZ * 0.1f);
            if (Rand_ZeroOne() < sp5C) {
                arg0->unk1CE += 0x4E20;
                temp_a1 = (s32) Rand_ZeroFloat(20000.0f) + arg0->unk1CE;
                temp_a0 = temp_a1 - arg0->actor.world.rot.y;
                phi_v0 = -(s32) temp_a0;
                if ((s32) temp_a0 >= 0) {
                    phi_v0 = (s32) temp_a0;
                }
                if (phi_v0 < 0x4000) {
                    sp46 = temp_a1;
                    phi_f2 = Math_CosS(temp_a0) * 1.6f * arg0->unk1DC;
                } else {
                    phi_f2 = arg0->unk1DC;
                }
                sp46 = temp_a1;
                sp54 = phi_f2;
                sp48 = (Math_SinS(temp_a1) * phi_f2) + arg0->actor.world.pos.x;
                sp4C = arg0->actor.world.pos.y + 20.0f;
                sp50 = (Math_CosS(temp_a1) * phi_f2) + arg0->actor.world.pos.z;
                sp38 = Rand_ZeroOne();
                func_800B0E48(arg1, (Vec3f *) &sp48, &D_80942E48, &D_80942E54, &D_80942E38, &D_80942E44, (s16) (s32) ((sp38 * 600.0f) + (600.0f * (arg0->actor.scale.x + 0.1f) * 0.5f)), (s16) ((s32) (Rand_ZeroOne() * 50.0f) + 0x1E));
            }
        }
    }
}

void func_80941060(Actor *arg0, GlobalContext *arg1) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_s1;
    void *temp_s0;
    s32 phi_s1;

    temp_s4 = &spAC;
    temp_s3 = &spA0;
    temp_s2 = &sp94;
    temp_s0 = arg0->unk160 + 0xE;
    phi_s1 = 0;
    do {
        sp94 = ((Rand_ZeroOne() * 14.0f) - 7.0f) + (f32) temp_s0->unk0;
        sp98 = ((Rand_ZeroOne() * 14.0f) - 7.0f) + (f32) temp_s0->unk2;
        sp9C = ((Rand_ZeroOne() * 14.0f) - 7.0f) + (f32) temp_s0->unk4;
        temp_f16 = (Rand_ZeroOne() - 0.5f) * 1.6f;
        spA4 = -0.8f;
        spA0 = temp_f16;
        temp_f2 = (Rand_ZeroOne() - 0.5f) * 1.6f;
        spA8 = temp_f2;
        spAC = spA0 * -0.06f;
        spB0 = spA4 * -0.06f;
        spB4 = temp_f2 * -0.06f;
        temp_f20 = Rand_ZeroOne();
        func_800B0E48(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s3, (Vec3f *) temp_s4, &D_80942E38, &D_80942E44, (s16) ((s32) (temp_f20 * 30.0f) + 0xF), (s16) ((s32) (Rand_ZeroOne() * 40.0f) + 0x1E));
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
}

void func_80941274(Actor *arg0, GlobalContext *arg1) {
    Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x1E, 0x28F5U);
}

void EnGoroiwa_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGoroiwa *this = (EnGoroiwa *) thisx;
    Path *sp2C;
    s32 sp28;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v1;
    s32 temp_v0;
    u8 temp_v0_2;

    temp_v0 = this->actor.params & 0xFF;
    sp2C = &globalCtx->setupPathList[temp_v0];
    sp28 = temp_v0 * 8;
    Actor_ProcessInitChain(&this->actor, &D_80942E78);
    this->actor.world.rot.x = 0;
    this->actor.world.rot.z = 0;
    this->actor.world.rot.y = Rand_Next();
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.shape.rot.y = this->actor.world.rot.y;
    func_8093E8A0(&this->actor);
    func_8093E91C(this);
    func_8093E9B0(&this->actor, globalCtx);
    if (sp28 == 0x7F8) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v0_2 = sp2C->count;
    if ((s32) temp_v0_2 < 2) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v1 = this->actor.home.rot.y;
    if (((s32) temp_v1 >= (temp_v0_2 - 1)) && ((s32) temp_v1 < 0)) {
        this->actor.home.rot.y = 0;
    }
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_80942DF4);
    ActorShape_Init(&this->actor.shape, 595.0f, func_800B3FC0, 9.4f);
    this->actor.shape.shadowAlpha = 0xC8;
    func_8093EB58(this, globalCtx);
    this->unk1D0 = Lib_SegmentedToVirtual((void *) sp2C->points);
    func_8093EE18(this, globalCtx);
    func_8093EE64(this, this->actor.home.rot.y);
    func_8093EEBC(this);
    func_8093EC50(this);
    if ((((s32) this->actor.params >> 0xC) & 3) == 2) {
        temp_f0 = func_8093EB74(this, globalCtx);
        if (temp_f0 < 0.1f) {
            this->unk1E0 = 0.0f;
        } else {
            this->unk1E0 = (*(&D_80942DFC + (this->unk1E4 * 4)) * ((f32) globalCtx->state.framerateDivisor * 0.5f)) / temp_f0;
            this->unk1E0 *= 0.020000001f;
            temp_f2 = this->unk1E0;
            if (temp_f2 > 0.00037f) {
                this->unk1E0 = 0.00037f;
            } else if (temp_f2 < 0.00015f) {
                this->unk1E0 = 0.00015f;
            }
        }
    }
    Effect_Add(globalCtx, &this->unk248, 4, 0U, (u8) 0, &D_80942E8C);
    func_809419D0(this);
}

void EnGoroiwa_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGoroiwa *this = (EnGoroiwa *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk144);
    Effect_Destroy(globalCtx, this->unk248);
}

s32 func_8094156C(Actor *arg0, GlobalContext *arg1) {
    s32 sp98;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7E;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_s4;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 temp_v0_3;
    Actor *phi_s1;
    void *phi_s0;
    s32 phi_s4;
    s32 phi_s0_2;

    temp_t8 = ((s32) arg0->params >> 0xE) & 3;
    sp98 = temp_t8;
    phi_s0_2 = 0;
    if (((arg0->unk155 & 2) != 0) && ((temp_t8 == 1) || (temp_t8 == 2))) {
        temp_v0 = *arg0->unk160->unk24;
        if ((temp_v0 & 0x4000) != 0) {
            sp7E = arg0->yawTowardsPlayer - arg0->world.rot.y;
            arg0->unk1CC = 0x32;
            arg0->unk206 = (s16) (arg0->yawTowardsPlayer - 0x4000);
            temp_f6 = Rand_ZeroOne() * -600.0f;
            arg0->unk236 = (s16) (arg0->yawTowardsPlayer + 0x4000);
            arg0->unk20C = (s16) (s32) temp_f6;
            arg0->unk23C = (s16) (s32) (Rand_ZeroOne() * 600.0f);
            phi_s1 = arg0;
            phi_s0 = arg0 + 0x1E8;
            phi_s4 = 0;
            do {
                phi_s1->unk1E8 = (f32) arg0->world.pos.x;
                phi_s1->unk1EC = (f32) (arg0->world.pos.y + arg0->unk1DC);
                phi_s1->unk1F0 = (f32) arg0->world.pos.z;
                temp_f22 = Rand_ZeroOne();
                temp_f20 = Math_SinS(phi_s0->unk1E);
                phi_s0->unkC = (f32) (((1.0f / *(&D_80942DFC + (arg0->unk1E4 * 4))) * (Math_SinS(arg0->world.rot.y) * 14.0f * arg0->speedXZ)) + (temp_f20 * (temp_f22 + 5.0f)));
                phi_s0->unk10 = (f32) ((Rand_ZeroOne() * 11.0f) + 20.0f);
                temp_f22_2 = Rand_ZeroOne();
                temp_f20_2 = Math_CosS(phi_s0->unk1E);
                temp_f4 = Math_CosS(arg0->world.rot.y) * 14.0f;
                phi_s0->unk1C = 0;
                phi_s0->unk20 = 0;
                phi_s0->unk14 = (f32) (((1.0f / *(&D_80942DFC + (arg0->unk1E4 * 4))) * (temp_f4 * arg0->speedXZ)) + (temp_f20_2 * (temp_f22_2 + 5.0f)));
                phi_s0->unk22 = (s16) ((s32) (Rand_ZeroOne() * 400.0f) + 0x44C);
                temp_f20_3 = Rand_ZeroOne();
                temp_f0 = Math_CosS(sp7E);
                temp_s4 = phi_s4 + 0x30;
                phi_s0->unk2D = 0;
                phi_s0->unk2C = 0;
                phi_s0->unk26 = (s16) ((s32) (temp_f0 * 3000.0f) + (s32) (600.0f * (temp_f20_3 - 0.5f)));
                phi_s1 += 0x30;
                phi_s0 += 0x30;
                phi_s4 = temp_s4;
            } while (temp_s4 != 0x60);
            func_809421E0(arg0);
            sp80 = arg0->world.pos.x;
            temp_v0_2 = sp98 * 4;
            sp84 = arg0->world.pos.y + arg0->unk1DC;
            sp88 = arg0->world.pos.z;
            func_80940588(arg1, (Vec3f *) &sp80, (sp98 * 0xC) + &D_80942E0C, temp_v0_2 + &D_80942E30, temp_v0_2 + &D_80942E3C, arg0->scale.x);
            func_80941274(arg0, arg1);
            phi_s0_2 = 1;
        } else if (((sp98 == 1) && ((temp_v0 & 0x500) != 0)) || ((sp98 == 2) && ((temp_v0 & 0x80000D08) != 0))) {
            arg0->unk1CC = 0x32;
            if ((sp98 == 2) && ((*arg0->unk160->unk24 & 0x800) != 0)) {
                arg0->unk1E6 = 1;
            }
            func_80940090(arg0, arg1, 2);
            func_80941274(arg0, arg1);
            func_809425CC(arg0);
            phi_s0_2 = 1;
        } else if ((sp98 == 2) && ((s32) arg0->unk1E7 <= 0)) {
            func_80941060(arg0, arg1, 2);
            arg0->unk1E7 = 0xA;
        }
    }
    if (sp98 == 2) {
        temp_v0_3 = arg0->unk1E7;
        if ((s32) temp_v0_3 > 0) {
            arg0->unk1E7 = (s8) (temp_v0_3 - 1);
        }
        if (phi_s0_2 != 0) {
            Item_DropCollectibleRandom(arg1, NULL, arg0 + 0x24, 0x20);
        }
    }
    return phi_s0_2;
}

void func_809419D0(EnGoroiwa *arg0) {
    arg0->actionFunc = func_80941A10;
    func_8093EAB0((void *)7);
    arg0->unk1C4 = 1.0f;
}

void func_80941A10(Actor *arg0, GlobalContext *arg1) {
    Actor *sp48;
    s32 sp44;
    s32 sp40;
    s32 sp34;
    s32 sp30;
    s32 (**sp2C)(Actor *);
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s32 (**temp_v0_3)(Actor *);
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_v0_8;
    u8 temp_t1;

    sp48 = arg1->actorCtx.actorList[2].first;
    temp_v0 = arg0->params;
    sp44 = ((s32) temp_v0 >> 0xA) & 1;
    sp40 = ((s32) temp_v0 >> 0xC) & 3;
    if (func_8094156C(arg0) == 0) {
        if (((arg0->unk154 & 2) != 0) && ((sp48->unkA74 << 0xC) >= 0)) {
            temp_t7 = arg0->home.rot.z & 3;
            sp34 = temp_t7;
            if (temp_t7 == 2) {
                func_80940090(arg0, arg1);
                if (sp40 == 2) {
                    func_8093E8A0(arg0);
                    func_8093E91C((EnGoroiwa *) arg0);
                }
                func_80941274(arg0, arg1);
                func_8093EDD8(arg0, arg1);
                func_8093EE64((EnGoroiwa *) arg0, 0);
                func_8093EEBC((EnGoroiwa *) arg0);
            } else {
                temp_v0_2 = arg0->yawTowardsPlayer - arg0->world.rot.y;
                temp_t1 = arg0->unk1E5 & ~8;
                arg0->unk1E5 = temp_t1;
                if (((s32) temp_v0_2 >= -0x3FFF) && ((s32) temp_v0_2 < 0x4000) && ((arg0->unk1E5 = (u8) (temp_t1 | 8), (sp44 != 0)) || (sp34 != 1))) {
                    func_8093EDB0(arg0);
                }
            }
            func_800B8D50(arg1, arg0, 2.0f, arg0->yawTowardsPlayer, 0.0f, 0U);
            if (sp34 == 2) {
                func_80941EB4(arg0);
            } else if (sp44 == 0) {
                func_80941EB4(arg0);
            } else {
                func_80941DB4(arg0);
            }
            func_800B8E58(sp48, 0x83EU);
            if ((sp34 == 1) || (sp34 == 2)) {
                arg0->unk1CC = 0x32;
            }
        } else {
            temp_v0_3 = (sp44 * 4) + &D_80942E94;
            sp2C = temp_v0_3;
            if (*temp_v0_3(arg0) != 0) {
                temp_t7_2 = ((s32) arg0->params >> 8) & 3;
                sp30 = temp_t7_2;
                if ((temp_t7_2 == 1) && ((temp_v0_4 = arg0->unk1D8, (temp_v0_4 == 0)) || (arg0->unk1D4 == temp_v0_4))) {
                    func_80940090(arg0, arg1);
                    func_80941274(arg0, arg1);
                }
                if (((sp30 == 1) || (sp30 == 0)) && (sp40 == 2) && ((temp_v0_5 = arg0->unk1D8, (temp_v0_5 == 0)) || (arg0->unk1D4 == temp_v0_5))) {
                    func_8093E8A0(arg0);
                    func_8093E91C((EnGoroiwa *) arg0);
                }
                func_8093FC00((EnGoroiwa *) arg0);
                if ((sp30 == 3) && ((temp_v0_6 = arg0->unk1D6, (temp_v0_6 == 0)) || (arg0->unk1D4 == temp_v0_6))) {
                    func_80941EB4(arg0);
                } else if ((sp2C == &D_80942E94) && (temp_v0_7 = arg0->unk1D6, (temp_v0_7 != 0)) && (arg0->unk1D4 != temp_v0_7)) {
                    temp_v0_8 = func_8093EEDC(arg0);
                    if (temp_v0_8 > 0) {
                        func_80941F54(arg0);
                    } else if (temp_v0_8 < 0) {
                        func_80942084(arg0);
                    } else {
                        func_809419D0((EnGoroiwa *) arg0);
                    }
                } else {
                    func_809419D0((EnGoroiwa *) arg0);
                }
            }
        }
        if ((arg0->bgCheckFlags & 1) != 0) {
            Audio_PlayActorSound2(arg0, *(&D_80942E9C + ((arg0->unk1E4 * 4) + ((arg0->home.rot.x & 1) * 2))));
        }
    }
}

void func_80941DB4(Actor *arg0) {
    arg0->unk1A4 = func_80941E28;
    func_8093EAB0((void *)6);
    arg0->gravity = -0.86f;
    arg0->minVelocityY = -15.0f;
    arg0->velocity.y = 5.0f;
    arg0->unk1C4 = 1.0f;
    arg0->speedXZ *= 0.15f;
}

void func_80941E28(Actor *arg0, ? arg1) {
    Actor *temp_a0;
    Actor *phi_a0;

    func_8093F34C();
    temp_a0 = arg0;
    phi_a0 = temp_a0;
    if (((temp_a0->bgCheckFlags & 1) != 0) && (temp_a0->velocity.y < 0.0f)) {
        if (((temp_a0->unk1E5 & 8) != 0) && ((temp_a0->home.rot.z & 3) == 1)) {
            arg0 = temp_a0;
            func_8093EDB0(temp_a0);
            phi_a0 = arg0;
        }
        func_80941EB4(phi_a0);
    }
}

void func_80941EB4(Actor *arg0) {
    arg0->unk1A4 = func_80941F10;
    arg0->speedXZ = 0.0f;
    func_8093EAB0((void *)6);
    arg0->unk1C4 = 0.0f;
    arg0->unk1C8 = (s16) *(&D_80942EAC + ((arg0->home.rot.z & 3) * 2));
}

void func_80941F10(EnGoroiwa *arg0) {
    s16 temp_v0;

    if (func_8094156C() == 0) {
        temp_v0 = arg0->unk1C8;
        if ((s32) temp_v0 > 0) {
            arg0->unk1C8 = temp_v0 - 1;
            return;
        }
        func_809419D0(arg0);
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_80941F54(Actor *arg0) {
    arg0->unk1A4 = func_80941FA4;
    func_8093EAB0((void *)7);
    arg0->unk1C4 = 0.0f;
    arg0->velocity.y = fabsf(arg0->speedXZ) * 0.1f;
}

void func_80941FA4(Actor *arg0, GlobalContext *arg1) {
    Actor *sp2C;
    s32 temp_v0;

    sp2C = arg1->actorCtx.actorList[2].first;
    if (func_8094156C(arg0) == 0) {
        if (((arg0->unk154 & 2) != 0) && ((sp2C->unkA74 << 0xC) >= 0)) {
            func_800B8D50(arg1, arg0, 2.0f, arg0->yawTowardsPlayer, 0.0f, 0U);
            func_800B8E58(sp2C, 0x83EU);
            temp_v0 = arg0->home.rot.z & 3;
            if ((temp_v0 == 1) || (temp_v0 == 2)) {
                arg0->unk1CC = 0x32;
                return;
            }
            // Duplicate return node #8. Try simplifying control flow for better match
            return;
        }
        if (func_8093F5EC(arg0) != 0) {
            func_8093FC00((EnGoroiwa *) arg0);
            func_809419D0((EnGoroiwa *) arg0);
            arg0->speedXZ = 0.0f;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_80942084(Actor *arg0) {
    f32 temp_f8;
    u8 temp_t0;
    u8 temp_t9;

    arg0->unk1A4 = func_809420F0;
    func_8093EAB0((void *)7);
    arg0->unk1CA = 0;
    arg0->unk1C4 = 0.3f;
    temp_f8 = fabsf(arg0->speedXZ) * -0.3f;
    temp_t9 = arg0->unk1E5 | 0x10;
    temp_t0 = temp_t9 & 0xFFDF;
    arg0->unk1E5 = temp_t9;
    arg0->unk1E5 = temp_t0;
    arg0->velocity.y = temp_f8;
}

void func_809420F0(Actor *arg0, GlobalContext *arg1) {
    Actor *sp2C;
    s32 temp_v0;

    sp2C = arg1->actorCtx.actorList[2].first;
    if (func_8094156C(arg0) == 0) {
        if (((arg0->unk154 & 2) != 0) && ((sp2C->unkA74 << 0xC) >= 0)) {
            func_800B8D50(arg1, arg0, 2.0f, arg0->yawTowardsPlayer, 0.0f, 0U);
            func_800B8E58(sp2C, 0x83EU);
            temp_v0 = arg0->home.rot.z & 3;
            if ((temp_v0 == 1) || (temp_v0 == 2)) {
                arg0->unk1CC = 0x32;
                return;
            }
            // Duplicate return node #8. Try simplifying control flow for better match
            return;
        }
        if (func_8093F6F8(arg0, (Color_RGBA8 *) arg1) != 0) {
            func_8093FC00((EnGoroiwa *) arg0);
            func_809419D0((EnGoroiwa *) arg0);
            arg0->unk1E5 = (u8) (arg0->unk1E5 & 0xFFEF);
            arg0->speedXZ = 0.0f;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_809421E0(Actor *arg0) {
    arg0->unk1A4 = func_8094220C;
    func_8093EAB0(NULL);
}

void func_8094220C(Actor *arg0, GlobalContext *arg1) {
    s32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    Vec3f spB8;
    f32 spAC;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s16 sp9A;
    f32 *temp_a1;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f20;
    s16 *temp_a0;
    s16 *temp_a0_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;
    Actor *phi_s1;
    f32 phi_f12;
    f32 phi_f20;
    s32 phi_s3;
    Actor *phi_s1_2;
    void *phi_s0;
    s32 phi_s3_2;

    temp_s6 = &spC4;
    phi_s1 = arg0;
    phi_s3 = 0;
    phi_s3_2 = 0;
    do {
        temp_s0 = phi_s1 + 0x1E8;
        if ((phi_s1->unk215 & 1) == 0) {
            temp_s0->unk10 = (f32) (temp_s0->unk10 - 6.0f);
            if (temp_s0->unk10 < -20.0f) {
                temp_s0->unk10 = -20.0f;
            }
            temp_s0->unk0 = (f32) (temp_s0->unk0 + temp_s0->unkC);
            temp_s0->unk4 = (f32) (temp_s0->unk4 + temp_s0->unk10);
            temp_s0->unk8 = (f32) (temp_s0->unk8 + temp_s0->unk14);
            temp_s0->unk1C = (s16) (temp_s0->unk1C + temp_s0->unk22);
            temp_s0->unk1E = (s16) (temp_s0->unk1E + temp_s0->unk24);
            temp_s0->unk20 = (s16) (temp_s0->unk20 + temp_s0->unk26);
            spC4 = temp_s0->unk0;
            spC8 = temp_s0->unk4 + 25.0f;
            spCC = temp_s0->unk8;
            temp_s0->unk18 = func_800C411C(arg1 + 0x830, temp_s0 + 0x28, &spD0, arg0, (Vec3f *) temp_s6);
            if (temp_s0->unk10 <= 0.0f) {
                SysMatrix_InsertRotation(temp_s0->unk1C, temp_s0->unk1E, temp_s0->unk20, 0);
                SysMatrix_MultiplyVector3fByState(&D_80942E6C, &spB8);
                temp_f20 = arg0->unk1DC * 0.9f;
                phi_f20 = temp_f20;
                if (spB8.y > 0.0f) {
                    if (Math3D_AngleBetweenVectors(&D_80942E60, &spB8, &spAC) != 0) {
                        phi_f12 = 1.0f;
                    } else {
                        phi_f12 = 1.0f - (spAC * spAC);
                    }
                    if (phi_f12 <= 0.0f) {
                        phi_f20 = 0.0f;
                    } else {
                        phi_f20 = temp_f20 * sqrtf(phi_f12);
                    }
                }
                temp_f0 = temp_s0->unk18;
                temp_a1 = &sp9C;
                if (((temp_s0->unk4 + (arg0->unk1DC - phi_f20)) < temp_f0) || (temp_f0 < -31990.0f)) {
                    temp_s0->unk2D = (u8) (temp_s0->unk2D | 1);
                    sp9C = temp_s0->unk0;
                    temp_v0 = ((s32) arg0->params >> 0xE) & 3;
                    temp_v1 = temp_v0 * 4;
                    spA0 = (temp_s0->unk4 - temp_s0->unk10) + 10.0f;
                    spA4 = temp_s0->unk8;
                    func_80940A1C(arg1, (Vec3f *) temp_a1, &D_80942E0C + (temp_v0 * 0xC), temp_v1 + &D_80942E30, temp_v1 + &D_80942E3C, arg0->scale.x);
                }
            }
        }
        temp_s3 = phi_s3 + 0x30;
        phi_s1 += 0x30;
        phi_s3 = temp_s3;
    } while (temp_s3 < 0x60);
    temp_a0 = &sp9A;
    if (((arg0->unk215 & 1) != 0) && ((arg0->unk245 & 1) != 0)) {
        func_809425CC(arg0, 0);
        return;
    }
    sp9A = (s16) arg0->shape.shadowAlpha;
    Math_StepToS(temp_a0, 0, 0x28);
    arg0->shape.shadowAlpha = (u8) sp9A;
    phi_s1_2 = arg0;
    phi_s0 = arg0 + 0x1E8;
    do {
        temp_a0_2 = &sp9A;
        if ((phi_s1_2->unk215 & 1) != 0) {
            phi_s0->unk2C = 0U;
        } else {
            sp9A = (s16) phi_s0->unk2C;
            Math_StepToS(temp_a0_2, 0xA0, 0x18);
            phi_s0->unk2C = (u8) sp9A;
        }
        temp_s3_2 = phi_s3_2 + 0x30;
        phi_s1_2 += 0x30;
        phi_s0 += 0x30;
        phi_s3_2 = temp_s3_2;
    } while (temp_s3_2 != 0x60);
}

void func_809425CC(Actor *arg0) {
    arg0->unk1A4 = func_80942604;
    func_8093EAB0(NULL);
    arg0->unk1C8 = 0x64;
}

void func_80942604(Actor *arg0, ? arg1) {
    s16 sp22;
    s16 *temp_a0;
    s16 temp_v0;
    u8 temp_t6;

    temp_t6 = arg0->shape.shadowAlpha;
    arg0 = arg0;
    temp_a0 = &sp22;
    sp22 = (s16) temp_t6;
    Math_StepToS(temp_a0, 0, 0x28);
    temp_v0 = arg0->unk1C8;
    arg0->shape.shadowAlpha = (u8) sp22;
    if ((s32) temp_v0 > 0) {
        arg0->unk1C8 = (s16) (temp_v0 - 1);
        return;
    }
    Actor_MarkForDeath(arg0);
}

void EnGoroiwa_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGoroiwa *this = (EnGoroiwa *) thisx;
    Actor *sp64;
    s32 sp60;
    s32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    s32 sp48;
    s32 sp3C;
    CollisionContext *sp30;
    Actor *temp_t7;
    CollisionContext *temp_a0;
    CollisionPoly *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u32 temp_v0_2;
    f32 phi_f0;
    s32 phi_v1;

    temp_t7 = globalCtx->actorCtx.actorList[2].first;
    sp5C = 0;
    sp48 = 1;
    sp64 = temp_t7;
    if ((temp_t7->unkA6C & 0x300000C0) == 0) {
        temp_v0 = this->unk1CC;
        if ((s32) temp_v0 > 0) {
            this->unk1CC = temp_v0 - 1;
        }
        if (((((s32) this->actor.params >> 0xC) & 3) == 2) && ((this->actor.bgCheckFlags & 1) != 0) && (func_80941A10 == this->actionFunc) && (this->actor.speedXZ > 2.0f)) {
            if (this->actor.xzDistToPlayer < 400.0f) {
                phi_f0 = this->unk1E0 * 1.4f;
            } else {
                phi_f0 = this->unk1E0;
            }
            Math_StepToF(&this->actor.scale.x, 0.16f, phi_f0);
            temp_f0 = this->actor.scale.x;
            this->actor.scale.y = temp_f0;
            this->actor.scale.z = temp_f0;
            func_8093E91C(this);
            sp5C = 1;
            if ((this->actor.flags & 0x40) != 0) {
                temp_a1 = this->actor.floorPoly;
                temp_a0 = &globalCtx->colCtx;
                if ((temp_a1 != 0) && ((sp30 = temp_a0, temp_v0_2 = func_800C99D4(temp_a0, temp_a1, (s32) this->actor.floorBgId), (temp_v0_2 == 0xE)) || (temp_v0_2 == 0xF))) {
                    if ((this->unk1E5 & 0x40) == 0) {
                        sp50 = this->actor.world.pos.x;
                        sp54 = this->actor.floorHeight;
                        sp58 = this->actor.world.pos.z;
                        sp4C = (((Rand_ZeroOne() * 36.0f) + 250.0f) * this->actor.scale.x) + 10.0f;
                        func_800AE930(sp30, Effect_GetParams(this->unk248), &sp50, sp4C, (s16) (s32) this->actor.world.rot.y, this->actor.floorPoly, (s32) this->actor.floorBgId);
                    }
                    sp48 = 0;
                }
            }
        }
        if (sp48 != 0) {
            func_800AEF44(Effect_GetParams(this->unk248));
        }
        this->actionFunc(this, globalCtx);
        if (this->actor.update != 0) {
            func_8093EC50(this);
            if (sp5C != 0) {
                func_80940E38(this, globalCtx);
            }
            temp_v0_3 = ((s32) this->actor.params >> 0xA) & 1;
            if (temp_v0_3 != 0) {
                if (temp_v0_3 == 1) {
                    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 0x1CU);
                }
            } else {
                sp50 = this->actor.world.pos.x;
                sp54 = this->actor.world.pos.y + 50.0f;
                sp58 = this->actor.world.pos.z;
                temp_f0_2 = func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp60, &this->actor, (Vec3f *) &sp50);
                this->actor.floorHeight = temp_f0_2;
                if (temp_f0_2 > -32000.0f) {
                    this->actor.floorBgId = (u8) sp60;
                    if (this->actor.world.pos.y <= (this->actor.floorHeight + 2.0f)) {
                        this->actor.bgCheckFlags |= 1;
                    } else {
                        this->actor.bgCheckFlags &= 0xFFFE;
                    }
                } else {
                    this->actor.floorBgId = 0x32;
                    this->actor.bgCheckFlags &= 0xFFFE;
                }
            }
            func_8093FAA4(this, globalCtx);
            if ((this->actor.flags & 0x40) != 0) {
                temp_v0_4 = ((s32) this->actor.params >> 0xE) & 3;
                sp3C = temp_v0_4;
                func_8093E938(&this->actor);
                if (((this->unk1E5 & 1) != 0) && ((s32) this->unk1CC <= 0) && (!(sp64->unkA74 & 0x2000000) || (sp64->unk14B != 1) || ((temp_v0_4 != 1) && (temp_v0_4 != 2)))) {
                    CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->unk144.base);
                } else {
                    this->unk144.base.atFlags &= 0xFFFD;
                }
                phi_v1 = -3;
                if ((this->unk1E5 & 2) != 0) {
                    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk144.base);
                    phi_v1 = -3;
                } else {
                    this->unk144.base.acFlags &= -3;
                }
                if (((this->unk1E5 & 4) != 0) && ((s32) this->unk1CC <= 0)) {
                    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk144.base);
                    return;
                }
                this->unk144.base.ocFlags1 &= phi_v1;
                return;
            }
            this->unk144.base.atFlags &= 0xFFFD;
            this->unk144.base.ocFlags1 &= 0xFFFD;
            this->unk144.base.acFlags &= 0xFFFD;
            // Duplicate return node #47. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #47. Try simplifying control flow for better match
    }
}

void func_80942B1C(GlobalContext *arg0, GlobalContext *arg1) {
    MtxF sp88;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s16 *temp_a3;
    s32 temp_s5;
    void *temp_s0;
    GlobalContext *phi_s3;
    Gfx *phi_fp;
    s32 phi_s5;

    phi_s3 = arg0;
    phi_s5 = 0;
    if ((((s32) arg0->unk1C >> 0xE) & 3) == 1) {
        phi_fp = &D_060032E0;
    } else {
        phi_fp = &D_060082D0;
    }
    do {
        temp_s0 = phi_s3 + 0x1E8;
        if ((phi_s3->unk215 & 1) == 0) {
            temp_a3 = &sp80;
            sp80 = temp_s0->unk1C;
            sp82 = temp_s0->unk1E;
            sp84 = temp_s0->unk20;
            SysMatrix_SetStateRotationAndTranslation(temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, (Vec3s *) temp_a3);
            Matrix_Scale(arg0->unk58, arg0->unk5C, arg0->unk60, 1);
            func_800BDFC0(arg1, phi_fp);
            if ((temp_s0->unk28 != 0) && ((s32) temp_s0->unk2C > 0)) {
                temp_a0 = arg1->state.gfxCtx;
                temp_s1 = temp_a0;
                func_8012C448(temp_a0);
                temp_v0 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w0 = 0xFCFF97FF;
                temp_v0->words.w1 = 0xFFFDFE38;
                temp_v0_2 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w0 = 0xFA000000;
                temp_v0_2->words.w1 = (u32) temp_s0->unk2C;
                func_800C0094(temp_s0->unk28, temp_s0->unk0, temp_s0->unk18, temp_s0->unk8, &sp88);
                SysMatrix_SetCurrentState(&sp88);
                Matrix_Scale(arg0->unk58 * 7.5f, 1.0f, arg0->unk60 * 7.5f, 1);
                temp_v0_3 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                temp_v0_4 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = (u32) D_04076BC0;
                temp_v0_4->words.w0 = 0xDE000000;
            }
        }
        temp_s5 = phi_s5 + 0x30;
        phi_s3 += 0x30;
        phi_s5 = temp_s5;
    } while (temp_s5 != 0x60);
}

void EnGoroiwa_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnGoroiwa *this = (EnGoroiwa *) thisx;
    void (*temp_v0)(EnGoroiwa *, GlobalContext *);

    temp_v0 = this->actionFunc;
    if (func_8094220C == temp_v0) {
        func_80942B1C(globalCtx, globalCtx);
        return;
    }
    if (func_80942604 != temp_v0) {
        func_800BDFC0(globalCtx, *(&D_80942EB4 + ((((s32) this->actor.params >> 0xE) & 3) * 4)));
    }
}

