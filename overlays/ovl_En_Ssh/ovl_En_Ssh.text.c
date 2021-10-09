? EffectSsBlast_SpawnWhiteCustomScale(GlobalContext *, f32 *, ? *, ? *, s32, s32, s32); /* extern */
void func_80973EFC(EnSsh *arg0, GlobalContext *arg1); /* static */
s32 func_80973F84(GlobalContext *arg0);             /* static */
? func_80974080(EnSsh *arg0, GlobalContext *arg1);  /* static */
void func_80974118(Vec3s *arg0);                    /* static */
void func_80974220(Vec3s *arg0);                    /* static */
void func_8097424C(Actor *arg0, GlobalContext *arg1); /* static */
f32 func_80974374(Actor *arg0, s32 arg1);           /* static */
void func_809744A8(EnSsh *);                        /* static */
void func_809744C8(Actor *arg0);                    /* static */
void func_809744FC(EnSsh *arg0);                    /* static */
void func_80974540(EnSsh *arg0);                    /* static */
void func_80974590(Actor *arg0);                    /* static */
void func_809745BC(Actor *arg0, f32 arg1, f32 arg2); /* static */
? func_80974730(Actor *arg0);                       /* static */
void func_8097480C(void *arg0, ? arg1);             /* static */
void func_809748DC(void *arg0, ? arg1);             /* static */
void func_8097497C(EnSsh *arg0, GlobalContext *);   /* static */
void func_809749B8(EnSsh *arg0, GlobalContext *arg1); /* static */
s32 func_80974A24(EnSsh *arg0, GlobalContext *arg1); /* static */
s32 func_80974B0C(EnSsh *arg0);                     /* static */
s32 func_80974B44(EnSsh *arg0);                     /* static */
void func_80974B84(EnSsh *arg0);                    /* static */
void func_80974CC8(EnSsh *arg0, GlobalContext *arg1); /* static */
? func_80974D3C(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_80974E44(Actor *arg0);                     /* static */
s32 func_80974EA0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80974F78(Actor *arg0, GlobalContext *arg1); /* static */
void func_8097502C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80975070(Actor *arg0, GlobalContext *arg1); /* static */
? func_80975128(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80975300(Actor *arg0, GlobalContext *arg1); /* static */
void func_8097561C(EnSsh *this, GlobalContext *globalCtx); /* static */
void func_809756D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80975B6C(EnSsh *arg0);                    /* static */
s32 func_80975DBC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80975EB8(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern ? D_060000D8;
extern AnimationHeaderCommon D_06000304;
extern AnimationHeader D_06001494;
extern Gfx D_06005210;
extern Gfx D_06005850;
extern Gfx D_06005F78;
extern SkeletonHeader D_06006470;
static CollisionCheckInfoInit2 D_8097605C = {1, 0, 0, 0, 0xFF};
static ColliderJntSphElementInit D_80976094 = {
    {0, {0xF7CFFFFF, 0, 4}, {0, 0, 0}, 1, 0, 1},
    {1, {{0, 0xFF10, 0}, 0x1C}, 0x64},
};
static ColliderJntSphInit D_809760B8 = {{6, 0x11, 0, 0x39, 0x10, 0}, 1, &D_80976094};
static ? D_809760C8;                                /* unable to generate initializer */
static s32 D_809760D4 = 0xFFFFFF4B;
static s32 D_809760D8 = 0xFFFFFF4B;
static s32 D_809760DC = 0xFFFFFF00;
static s32 D_809760E0 = 0xFFFFFF00;
static ? D_809760E4;                                /* unable to generate initializer */
static ? D_809760F0;                                /* unable to generate initializer */
static ? D_809760FC;                                /* unable to generate initializer */
static ? D_80976114;                                /* unable to generate initializer */
static ? D_80976130;                                /* unable to generate initializer */
static ? D_8097614C;                                /* unable to generate initializer */
static s32 D_80976154 = {0x42200000, 0, 0, 0, 0, 0, 0xC2200000, 0, 0};
static ? D_80976178;                                /* unable to generate initializer */

typedef struct EnSsh {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0xAE];                 /* maybe part of unk188[30]? */
    /* 0x023C */ Vec3s unk23C;                      /* inferred */
    /* 0x0242 */ char pad242[0xAE];                 /* maybe part of unk23C[30]? */
    /* 0x02F0 */ void (*actionFunc)(EnSsh *, GlobalContext *);
    /* 0x02F4 */ ColliderCylinder unk2F4;           /* inferred */
    /* 0x0340 */ char pad340[0x20];
    /* 0x0360 */ s32 unk360;                        /* inferred */
    /* 0x0364 */ char pad364[0x48];                 /* maybe part of unk360[19]? */
    /* 0x03AC */ s32 unk3AC;                        /* inferred */
    /* 0x03B0 */ char pad3B0[0x10C];                /* maybe part of unk3AC[68]? */
    /* 0x04BC */ ColliderJntSph unk4BC;             /* inferred */
    /* 0x04DC */ char pad4DC[0x40];                 /* maybe part of unk4BC[3]? */
    /* 0x051C */ s16 unk51C;                        /* inferred */
    /* 0x051E */ char pad51E[0x2];                  /* maybe part of unk51C[2]? */
    /* 0x0520 */ s16 unk520;                        /* inferred */
    /* 0x0522 */ s16 unk522;                        /* inferred */
    /* 0x0524 */ char pad524[0x4];                  /* maybe part of unk522[3]? */
    /* 0x0528 */ s16 unk528;                        /* inferred */
    /* 0x052A */ s16 unk52A;                        /* inferred */
    /* 0x052C */ s16 unk52C;                        /* inferred */
    /* 0x052E */ s16 unk52E;                        /* inferred */
    /* 0x0530 */ s32 unk530;                        /* inferred */
    /* 0x0534 */ char pad534[0x4];                  /* maybe part of unk530[2]? */
    /* 0x0538 */ f32 unk538;                        /* inferred */
    /* 0x053C */ f32 unk53C;                        /* inferred */
    /* 0x0540 */ f32 unk540;                        /* inferred */
    /* 0x0544 */ f32 unk544;                        /* inferred */
    /* 0x0548 */ char pad548[0x78];                 /* maybe part of unk544[31]? */
    /* 0x05C0 */ s16 unk5C0;                        /* inferred */
    /* 0x05C2 */ u16 unk5C2;                        /* inferred */
    /* 0x05C4 */ s8 unk5C4;                         /* inferred */
    /* 0x05C5 */ char pad5C5[0x1];                  /* maybe part of unk5C4[2]? */
    /* 0x05C6 */ s16 unk5C6;                        /* inferred */
    /* 0x05C8 */ s16 unk5C8;                        /* inferred */
    /* 0x05CA */ char pad5CA[0x2];                  /* maybe part of unk5C8[2]? */
} EnSsh;                                            /* size 0x5CC */

void EnSsh_SetupAction(EnSsh *this, void (*actionFunc)(EnSsh *, GlobalContext *)) {
    EnSsh *self = (EnSsh *) this;
    self->actionFunc = actionFunc;
}

void func_80973EFC(EnSsh *arg0, GlobalContext *arg1) {
    ? sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a1;

    sp34.unk0 = (s32) D_809760C8.unk0;
    temp_a1 = &sp28;
    sp34.unk4 = (s32) D_809760C8.unk4;
    sp34.unk8 = (s32) D_809760C8.unk8;
    sp28 = arg0->actor.world.pos.x;
    sp2C = arg0->actor.floorHeight;
    sp30 = arg0->actor.world.pos.z;
    EffectSsBlast_SpawnWhiteCustomScale(arg1, temp_a1, &sp34, &sp34, 0x64, 0xDC, 8);
}

s32 func_80973F84(GlobalContext *arg0) {
    s32 sp1D4;
    s32 sp1D0;
    s32 sp1CC;
    u8 sp1CB;
    u8 sp1CA;
    u8 sp1C9;
    u8 sp1C8;
    u8 sp1C7;
    u8 sp1C6;
    u8 sp1C5;
    u8 sp1C4;
    u8 sp1C3;
    u8 sp1C2;
    u8 sp1C1;
    u8 sp1C0;
    u8 sp1BF;
    u8 sp1BE;
    u8 sp1BD;
    u8 sp1BC;
    void sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp20;

    sp34 = D_809760D4;
    sp30 = D_809760D8;
    sp2C = D_809760DC;
    sp28 = D_809760E0;
    sp1C1 = sp31;
    sp1BD = sp35;
    sp1BC = (u8) sp34;
    sp1C0 = (u8) sp30;
    sp1C4 = (u8) sp2C;
    sp1C8 = (u8) sp28;
    sp1C9 = sp29;
    sp1C5 = sp2D;
    sp1BE = sp36;
    sp1CC = 6;
    sp1D0 = 0;
    sp1D4 = 3;
    sp1C3 = sp33;
    sp1BF = sp37;
    sp1CA = sp2A;
    sp1C6 = sp2E;
    sp1C7 = sp2F;
    sp1CB = sp2B;
    sp1C2 = sp32;
    Effect_Add(arg0, &sp20, 1, 0U, (u8) 0, &sp38);
    return sp20;
}

? func_80974080(EnSsh *arg0, GlobalContext *arg1) {
    CollisionPoly *sp4C;
    u32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;

    sp3C = arg0->actor.world.pos.x;
    sp40 = arg0->actor.world.pos.y + 1000.0f;
    sp44 = arg0->actor.world.pos.z;
    if (func_800C55C4(arg1 + 0x830, arg0 + 0x24, (Vec3f *) &sp3C, arg0 + 0x53C, &sp4C, 0U, 0U, 1U, 1U, &sp48) == 0) {
        return 0;
    }
    return 1;
}

void func_80974118(Vec3s *arg0) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    Vec3f sp34;
    Vec3f sp28;

    sp4C.unk0 = D_809760E4.unk0;
    sp4C.unk4 = (s32) D_809760E4.unk4;
    sp4C.unk8 = (s32) D_809760E4.unk8;
    sp40.unk0 = D_809760F0.unk0;
    sp40.unk4 = (s32) D_809760F0.unk4;
    sp40.unk8 = (s32) D_809760F0.unk8;
    sp4C *= arg0->unk534;
    sp50 *= arg0->unk534;
    sp54 *= arg0->unk534;
    sp40 *= arg0->unk534;
    sp44 *= arg0->unk534;
    sp48 *= arg0->unk534;
    SysMatrix_StatePush();
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp4C, &sp34);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp40, &sp28);
    SysMatrix_StatePop();
    func_800A81F0(Effect_GetParams(arg0->unk530), &sp34, &sp28);
}

void func_80974220(Vec3s *arg0) {
    func_800A8514(Effect_GetParams(arg0->unk530));
}

void func_8097424C(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinderInit *sp50;
    ColliderCylinderInit **temp_s0;
    ColliderJntSph *temp_s0_2;
    ColliderCylinder *phi_s1;
    ColliderCylinderInit **phi_s0;

    sp50.unk0 = D_809760FC.unk0;
    sp50.unk4 = (s32) D_809760FC.unk4;
    sp50.unkC = (s32) D_809760FC.unkC;
    sp50.unk8 = (s32) D_809760FC.unk8;
    sp50.unk10 = (s32) D_809760FC.unk10;
    sp50.unk14 = (s32) D_809760FC.unk14;
    phi_s1 = arg0 + 0x2F4;
    phi_s0 = &sp50;
    do {
        Collider_InitAndSetCylinder(arg1, phi_s1, arg0, *phi_s0);
        temp_s0 = phi_s0 + 4;
        phi_s1 += 0x4C;
        phi_s0 = temp_s0;
    } while (temp_s0 != &arg0);
    arg0->unk314 = 0x38A9;
    arg0->unk360 = 0xF7CFC756;
    arg0->unk3A0 = 9;
    arg0->unk3BA = 0xD;
    arg0->unk3B8 = 2;
    arg0->unk3AC = 0xF7CFC756;
    CollisionCheck_SetInfo2(&arg0->colChkInfo, DamageTable_Get(2), &D_8097605C);
    temp_s0_2 = arg0 + 0x4BC;
    Collider_InitJntSph(arg1, temp_s0_2);
    Collider_SetJntSph(arg1, temp_s0_2, arg0, &D_809760B8, arg0 + 0x4DC);
}

f32 func_80974374(Actor *arg0, s32 arg1) {
    ? sp64;
    ? sp48;
    ? sp40;
    f32 sp3C;
    s32 sp34;
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_t0;
    f32 temp_f0;
    s32 temp_v1;

    sp64.unk0 = (s32) D_80976114.unk0;
    sp64.unk4 = (s32) D_80976114.unk4;
    sp64.unk8 = (s32) D_80976114.unk8;
    sp64.unkC = (s32) D_80976114.unkC;
    sp64.unk10 = (s32) D_80976114.unk10;
    sp64.unk14 = (s32) D_80976114.unk14;
    sp64.unk18 = (s32) D_80976114.unk18;
    sp48.unk0 = (s32) D_80976130.unk0;
    sp48.unk4 = (s32) D_80976130.unk4;
    sp48.unk8 = (s32) D_80976130.unk8;
    sp48.unkC = (s32) D_80976130.unkC;
    sp48.unk10 = (s32) D_80976130.unk10;
    sp48.unk14 = (s32) D_80976130.unk14;
    sp48.unk18 = (s32) D_80976130.unk18;
    sp40.unk0 = (s32) D_8097614C.unk0;
    sp40.unk4 = (first 3 bytes) D_8097614C.unk4;
    temp_v1 = arg1 * 4;
    temp_t0 = &sp64 + temp_v1;
    sp30 = temp_t0;
    sp34 = temp_v1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*temp_t0);
    sp3C = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_t0, (sp + temp_v1)->unk48, 0.0f, temp_f0, (u8) (s32) (sp + arg1)->unk40, -6.0f);
    return temp_f0;
}

void func_809744A8(void) {
    func_80974374((Actor *)2);
}

void func_809744C8(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x3869U);
    func_80974374(arg0, 1);
}

void func_809744FC(EnSsh *arg0) {
    arg0->actor.world.pos.y = arg0->unk538 + arg0->actor.floorHeight;
    arg0->unk52C = (s16) (s32) func_80974374((Actor *)3);
}

void func_80974540(EnSsh *arg0) {
    if (arg0->unk520 == 0) {
        arg0->unk52C = (s16) (s32) func_80974374((Actor *)4);
    }
    arg0->actor.velocity.y = -10.0f;
}

void func_80974590(Actor *arg0) {
    if (arg0->unk52A == 0) {
        arg0->unk52A = 0x78;
        arg0->colorFilterTimer = 0;
        arg0->unk5C2 = (u16) (arg0->unk5C2 | 8);
    }
}

void func_809745BC(Actor *arg0, f32 arg1, f32 arg2) {
    Actor *temp_a0;
    Actor *temp_v0;
    f32 temp_f16;
    f32 temp_f4;
    s16 temp_t9;
    s16 temp_t9_2;
    s32 temp_v1;
    void *temp_a1;
    void *temp_v0_2;
    s16 phi_t9;
    Actor *phi_v0;
    s32 phi_v1;
    s16 phi_t9_2;
    Actor *phi_v0_2;

    temp_a1 = arg0->unk4D8;
    temp_a1->unk2E = (s16) (s32) ((f32) temp_a1->unk2E * arg1);
    temp_f16 = arg1 * arg2;
    temp_t9 = arg0->unk338;
    phi_t9 = temp_t9;
    phi_v0 = arg0;
    phi_v1 = 0x4C;
    phi_t9_2 = temp_t9;
    phi_v0_2 = arg0;
    if (0x4C != 0x1C8) {
        do {
            temp_v1 = phi_v1 + 0x4C;
            temp_v0 = phi_v0 + 0x4C;
            temp_t9_2 = temp_v0->unk338;
            temp_v0->unk2EC = (s16) (s32) ((f32) phi_t9 * arg1);
            temp_v0->unk2E8 = (s16) (s32) ((f32) phi_v0->unk334 * temp_f16);
            temp_v0->unk2EA = (s16) (s32) ((f32) phi_v0->unk336 * arg1);
            phi_t9 = temp_t9_2;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
            phi_t9_2 = temp_t9_2;
            phi_v0_2 = temp_v0;
        } while (temp_v1 != 0x1C8);
    }
    temp_v0_2 = phi_v0_2 + 0x4C;
    temp_v0_2->unk2EC = (s16) (s32) ((f32) phi_t9_2 * arg1);
    temp_v0_2->unk2E8 = (s16) (s32) ((f32) phi_v0_2->unk334 * temp_f16);
    temp_v0_2->unk2EA = (s16) (s32) ((f32) phi_v0_2->unk336 * arg1);
    temp_a0 = arg0;
    arg0 = arg0;
    temp_f4 = 0.04f * arg1;
    arg1 = arg1;
    Actor_SetScale(temp_a0, temp_f4);
    arg0->unk538 = (f32) (60.0f * arg1);
    arg0->unk534 = (f32) (arg1 * 1.5f);
}

? func_80974730(Actor *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk52A;
    if ((temp_v0 == 0x78) && ((arg0->unk5C2 & 1) != 0)) {
        func_800BCB70(arg0, 0, 0xC8, 0, (s16) (s32) temp_v0);
    }
    if (arg0->unk52A == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk52A = (s16) (arg0->unk52A - 1);
        phi_v1 = arg0->unk52A;
    }
    if (phi_v1 != 0) {
        Math_SmoothStepToS(arg0 + 0x51E, 0x2710, 0xA, 0x3E8, (s16) 1);
        return 0;
    }
    arg0->unk52A = 0;
    arg0->unk5C2 = (u16) (arg0->unk5C2 & 0xFFFE);
    arg0->unk522 = 0;
    if (arg0->unk52E == 0) {
        arg0->unk522 = 0x1E;
    }
    Audio_PlayActorSound2(arg0, 0x3884U);
    Audio_PlayActorSound2(arg0, 0x6868U);
    return 1;
}

void func_8097480C(void *arg0, ? arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    temp_v0 = arg0->unk524;
    if (temp_v0 != 0) {
        arg0->unk524 = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = arg0->unk522;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk522 = (s16) (temp_v0_2 - 1);
        phi_v1 = arg0->unk522;
    }
    if (phi_v1 != 0) {
        arg0->unk32 = (s16) (arg0->unk32 + (s32) (10000.0f * ((f32) arg0->unk522 / 30.0f)));
    } else if ((arg0->unk52E == 0) && (arg0->unk52A == 0)) {
        Math_SmoothStepToS(arg0 + 0x32, arg0->unk92, 4, 0x2710, (s16) 1);
    }
    arg0->unkBE = (s16) arg0->unk32;
}

void func_809748DC(void *arg0, ? arg1) {
    s16 temp_v0;

    if ((arg0->unk52E == 0) && (arg0->unk52A == 0)) {
        Math_SmoothStepToS(arg0 + 0x32, (s16) (arg0->unk92 ^ 0x8000), 4, arg0->unk51E, (s16) 1);
    }
    temp_v0 = arg0->unk52A;
    arg0->unkBE = (s16) arg0->unk32;
    if ((s32) temp_v0 < 0x1E) {
        if ((temp_v0 & 1) != 0) {
            arg0->unkBE = (s16) (arg0->unkBE + 0x7D0);
            return;
        }
        arg0->unkBE = (s16) (arg0->unkBE - 0x7D0);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_8097497C(EnSsh *arg0) {
    if (arg0->unk52A != 0) {
        func_809748DC();
        return;
    }
    func_8097480C();
}

void func_809749B8(EnSsh *arg0, GlobalContext *arg1) {
    f32 phi_f0;

    phi_f0 = 0.5f;
    if ((arg1->state.frames & 8) != 0) {
        phi_f0 = 0.5f * -1.0f;
    }
    Math_SmoothStepToF(arg0 + 0x68, phi_f0, 0.4f, 1000.0f, 0.0f);
}

s32 func_80974A24(EnSsh *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f2;

    if ((arg0->unk5C2 & 4) != 0) {
        return 1;
    }
    if (arg0->unk520 != 0) {
        return 1;
    }
    if (arg0->unk52E != 0) {
        return 1;
    }
    if (arg0->unk52C != 0) {
        return 1;
    }
    if (arg0->actor.xzDistToPlayer > 160.0f) {
        return 0;
    }
    temp_f2 = arg1->actorCtx.actorList[2].first->unk28;
    temp_f0 = arg0->actor.world.pos.y - temp_f2;
    if ((temp_f0 < 0.0f) || (temp_f0 > 400.0f)) {
        return 0;
    }
    if (temp_f2 < arg0->actor.floorHeight) {
        return 0;
    }
    return 1;
}

s32 func_80974B0C(EnSsh *arg0) {
    if (arg0->actor.home.pos.y <= (arg0->actor.world.pos.y + (2.0f * arg0->actor.velocity.y))) {
        return 1;
    }
    return 0;
}

s32 func_80974B44(EnSsh *arg0) {
    if (((arg0->actor.world.pos.y + (2.0f * arg0->actor.velocity.y)) - arg0->actor.floorHeight) <= arg0->unk538) {
        return 1;
    }
    return 0;
}

void func_80974B84(EnSsh *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    Vec3f sp38;
    s16 sp32;
    f32 temp_f16;
    f32 temp_f20;
    s16 temp_a0;
    s16 temp_v0;

    temp_v0 = arg0->unk52E;
    if (temp_v0 != 0) {
        arg0->unk52E = temp_v0 - 1;
        arg0->unk5C0 += 0x640;
        if (arg0->unk52E == 0) {
            arg0->unk5C0 = 0;
        }
        temp_f20 = arg0->actor.world.pos.y - arg0->unk540;
        temp_a0 = (s16) (s32) (Math_SinS(arg0->unk5C0) * ((f32) arg0->unk52E * 0.16666667f * 182.04445f));
        sp32 = temp_a0;
        sp44 = Math_SinS(temp_a0) * temp_f20;
        temp_f16 = Math_CosS(temp_a0) * temp_f20;
        sp4C = 0.0f;
        sp48 = temp_f16;
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(arg0->unk53C, arg0->unk540, arg0->unk544, 0);
        SysMatrix_InsertYRotation_f((f32) arg0->actor.world.rot.y * 0.0000958738f, 1);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp44, &sp38);
        SysMatrix_StatePop();
        arg0->actor.shape.rot.z = (s16) -(s32) (sp32 * 2);
        arg0->actor.world.pos.x = sp38.x;
        arg0->actor.world.pos.z = sp38.z;
    }
}

void func_80974CC8(EnSsh *arg0, GlobalContext *arg1) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0 + 0x30C;
    if (arg1->actorCtx.actorList[2].first->unkB28 != 0) {
        temp_v0_2 = arg0 + 0x30C;
        temp_v0_2->unk8 = (s32) (temp_v0_2->unk8 | 2);
        arg0->unk360 &= -3;
        arg0->unk3AC &= -3;
        return;
    }
    temp_v0->unk8 = (s32) (temp_v0->unk8 & ~2);
    arg0->unk360 |= 2;
    arg0->unk3AC |= 2;
}

? func_80974D3C(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v1;
    u8 temp_a0;
    Actor *phi_v0;
    s32 phi_v1;
    s32 phi_a3;

    phi_v0 = arg0;
    phi_v1 = 0;
    phi_a3 = 0;
    if ((arg0->unk5C4 == 0) && (arg0->unk522 == 0)) {
        return 0;
    }
    do {
        temp_a0 = phi_v0->unk3EB;
        temp_v1 = phi_v1 + 0x4C;
        phi_v1 = temp_v1;
        if ((temp_a0 & 1) != 0) {
            phi_v0->unk3EB = (u8) (temp_a0 & ~1);
            phi_a3 = 1;
        }
        phi_v0 += 0x4C;
    } while (temp_v1 != 0xE4);
    if (phi_a3 == 0) {
        return 0;
    }
    arg0->unk524 = 0x1E;
    if (arg0->unk52E == 0) {
        arg0->unk522 = (s16) arg0->unk524;
    }
    Audio_PlayActorSound2(arg0, 0x3884U);
    Audio_PlayActorSound2(arg0, 0x6868U);
    arg1->damagePlayer(arg1, -8);
    func_800B8D98(arg1, arg0, 4.0f, arg0->yawTowardsPlayer, 6.0f);
    arg0->unk5C4 = (u8) (arg0->unk5C4 - 1);
    return 1;
}

s32 func_80974E44(Actor *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk39D;
    if ((temp_v0 & 2) == 0) {
        return 0;
    }
    arg0->unk39D = (u8) (temp_v0 & 0xFFFD);
    arg0->unk526 = 8;
    if ((arg0->unk52E == 0) && (arg0->unk524 == 0) && (arg0->unk52A == 0)) {
        arg0->unk52E = 0x3C;
    }
    return 1;
}

s32 func_80974EA0(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0_3;
    void *temp_v0;
    void *temp_v0_2;
    s32 phi_v1;

    temp_v0 = arg0 + 0x2F4;
    phi_v1 = 0;
    if ((arg0->unk305 & 2) != 0) {
        temp_v0->unk11 = (u8) (temp_v0->unk11 & 0xFFFD);
        phi_v1 = 1;
    }
    temp_v0_2 = arg0 + 0x340;
    if ((arg0->unk351 & 2) != 0) {
        temp_v0_2->unk11 = (u8) (temp_v0_2->unk11 & 0xFFFD);
        phi_v1 = 1;
    }
    if (phi_v1 == 0) {
        return 0;
    }
    temp_v0_3 = arg0->unk5C4;
    arg0->unk526 = 8;
    if ((s32) temp_v0_3 <= 0) {
        arg0->unk5C4 = (u8) (temp_v0_3 + 1);
    }
    if (arg0->unk52A == 0) {
        Audio_PlayActorSound2(arg0, 0x389EU);
        Audio_PlayActorSound2(arg0, 0x6867U);
    }
    func_80974590(arg0);
    arg0->unk5C2 = (u16) (arg0->unk5C2 | 1);
    return 0;
}

s32 func_80974F78(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk52A == 0) {
        func_80974D3C(arg0, arg1);
    }
    if (func_80974E44(arg0) != 0) {
        return 0;
    }
    if (arg1->actorCtx.unk2 != 0) {
        arg0->unk526 = 8;
        if (arg0->unk52A == 0) {
            Audio_PlayActorSound2(arg0, 0x389EU);
            Audio_PlayActorSound2(arg0, 0x6867U);
        }
        func_80974590(arg0);
        arg0->unk5C2 = (u16) (arg0->unk5C2 | 1);
        return 0;
    }
    return func_80974EA0(arg0, arg1);
}

void func_8097502C(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x2F4;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, &temp_a2->base);
}

void func_80975070(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a2;
    ColliderCylinder *temp_a2_2;
    s16 temp_v0;
    s32 phi_v1;

    temp_a2 = arg0 + 0x340;
    temp_v0 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    phi_v1 = temp_v0 << 0x10;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s32) temp_v0 * -0x10000;
    }
    if ((phi_v1 >> 0x10) < 0x3FFC) {
        temp_a2_2 = arg0 + 0x38C;
        sp18 = temp_a2_2;
        arg1 = arg1;
        Collider_UpdateCylinder(arg0, temp_a2_2);
        CollisionCheck_SetAC(arg1, arg1 + 0x18884, &temp_a2_2->base);
        return;
    }
    sp18 = temp_a2;
    arg1 = arg1;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, &temp_a2->base);
}

? func_80975128(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp7C;
    f32 sp70;
    Vec3f *temp_t6;
    s32 *temp_t7;
    s32 temp_s3;
    void *temp_s6;
    s32 *phi_t7;
    Vec3f *phi_t6;
    Vec3f *phi_s0;
    Actor *phi_s1;
    Collider *phi_s4;
    s32 phi_s3;

    phi_t7 = &D_80976154;
    phi_t6 = &sp7C;
    do {
        temp_t7 = phi_t7 + 0xC;
        temp_t6 = phi_t6 + 0xC;
        temp_t6->unk-C = (s32) *phi_t7;
        temp_t6->unk-8 = (s32) temp_t7->unk-8;
        temp_t6->unk-4 = (s32) temp_t7->unk-4;
        phi_t7 = temp_t7;
        phi_t6 = temp_t6;
    } while (temp_t7 != (&D_80976154 + 0x24));
    temp_s6 = arg0 + 0x24;
    phi_s0 = &sp7C;
    phi_s1 = arg0;
    phi_s4 = arg0 + 0x3D8;
    phi_s3 = 0;
    do {
        sp70.unk0 = temp_s6->unk0;
        sp70.unk4 = (s32) temp_s6->unk4;
        sp70.unk8 = (s32) temp_s6->unk8;
        phi_s0->x *= arg0->unk534;
        phi_s0->y *= arg0->unk534;
        phi_s0->z *= arg0->unk534;
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(sp70, sp74, sp78, 0);
        SysMatrix_InsertYRotation_f(((f32) arg0->unk51C / 32768.0f) * 3.1415927f, 1);
        SysMatrix_MultiplyVector3fByState(phi_s0, (Vec3f *) &sp70);
        SysMatrix_StatePop();
        phi_s1->unk41E = (s16) (s32) sp70;
        phi_s1->unk420 = (s16) (s32) sp74;
        phi_s1->unk422 = (s16) (s32) sp78;
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, phi_s4);
        temp_s3 = phi_s3 + 0x4C;
        phi_s0 += 0xC;
        phi_s1 += 0x4C;
        phi_s4 += 0x4C;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0xE4);
    return 1;
}

void func_80975300(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp28;
    Collider *sp24;
    Actor *temp_a0;
    Actor *temp_a3;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;
    Actor *phi_a3;
    s16 phi_v1;

    temp_a3 = arg0;
    phi_a3 = temp_a3;
    if (temp_a3->colChkInfo.health == 0) {
        temp_a1 = arg1 + 0x18884;
        temp_a2 = temp_a3 + 0x4BC;
        sp24 = temp_a2;
        sp28 = temp_a1;
        CollisionCheck_SetAT(arg1, temp_a1, temp_a2);
        CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
        return;
    }
    temp_a0 = temp_a3;
    if (temp_a3->unk524 == 0) {
        arg0 = temp_a3;
        func_80975128(temp_a0, arg1, temp_a3);
        phi_a3 = arg0;
    }
    temp_v0 = phi_a3->unk526;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        phi_a3->unk526 = (s16) (temp_v0 - 1);
        phi_v1 = phi_a3->unk526;
    }
    if (phi_v1 == 0) {
        arg0 = phi_a3;
        func_8097502C(phi_a3, arg1);
        func_80975070(arg0, arg1);
    }
}

void EnSsh_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSsh *this = (EnSsh *) thisx;
    f32 sp3C;
    SkelAnime *sp30;
    SkelAnime *temp_a1;

    sp3C = (f32) SkelAnime_GetFrameCount(&D_06000304);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_06006470, NULL, &this->unk188, &this->unk23C, 0x1E);
    SkelAnime_ChangeAnim(sp30, &D_06001494, 1.0f, 0.0f, sp3C, (u8) 1, 0.0f);
    this->unk530 = func_80973F84(globalCtx);
    func_8097424C(&this->actor, globalCtx);
    this->unk5C2 = 0;
    this->unk5C4 = 0;
    func_80974080(this, globalCtx);
    if ((this->actor.params & 0xF) == 0) {
        this->unk5C2 |= 0x20;
    }
    if ((this->unk5C2 & 0x20) == 0) {
        func_809745BC(&this->actor, 0.5f, 1.0f);
    } else {
        func_809745BC(&this->actor, 0.75f, 1.0f);
    }
    this->actor.gravity = 0.0f;
    this->unk51C = this->actor.world.rot.y;
    EnSsh_SetupAction(this, func_80975C14);
    if (func_8012F22C(globalCtx->sceneNum) >= 0x1E) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnSsh_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSsh *this = (EnSsh *) thisx;
    s32 temp_s0;
    ColliderCylinder *phi_s1;
    s32 phi_s0;

    Effect_Destroy(globalCtx, this->unk530);
    phi_s1 = &this->unk2F4;
    phi_s0 = 0;
    do {
        Collider_DestroyCylinder(globalCtx, phi_s1);
        temp_s0 = phi_s0 + 0x4C;
        phi_s1 += 0x4C;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x1C8);
    Collider_DestroyJntSph(globalCtx, &this->unk4BC);
}

void func_809755C0(EnSsh *this, GlobalContext *globalCtx) {
    if (func_80974A24(this, globalCtx) != 0) {
        func_80974540(this);
        EnSsh_SetupAction(this, func_80975998);
        return;
    }
    func_809749B8(this, globalCtx);
}

void func_8097561C(EnSsh *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    func_809749B8(arg0, arg1);
    if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1->msgCtx.unk11F04;
        switch (temp_v0) {
        case 2308:
        case 2309:
        case 2310:
        case 2312:
        case 2320:
        case 2321:
        case 2322:
        case 2324:
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            return;
        default:
            func_801477B4(arg1);
            arg0->actionFunc = func_80975720;
            // Duplicate return node #6. Try simplifying control flow for better match
            return;
        }
    }
}

void func_809756D0(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u16 phi_a1;

    temp_v0 = gSaveContext.weekEventReg[34];
    phi_a1 = 0x910U;
    if ((temp_v0 & 8) != 0) {
        phi_a1 = 0x914U;
    } else {
        gSaveContext.weekEventReg[34] = temp_v0 | 8;
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80975720(EnSsh *this, GlobalContext *globalCtx) {
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;

    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        this->actionFunc = func_8097561C;
        func_809756D0(&this->actor, globalCtx);
        return;
    }
    temp_v1 = this->unk520;
    if (temp_v1 != 0) {
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk520 = temp_v1 - 1;
            phi_v0 = this->unk520;
        }
        if (phi_v0 == 0) {
            func_80974374(&this->actor, 2);
        }
    }
    temp_v1_2 = this->unk52C;
    if (temp_v1_2 != 0) {
        if (temp_v1_2 == 0) {
            phi_v0_2 = 0;
        } else {
            this->unk52C = temp_v1_2 - 1;
            phi_v0_2 = this->unk52C;
        }
        if (phi_v0_2 == 0) {
            func_80974374(&this->actor, 2);
        }
    }
    if (func_80974A24(this, globalCtx) == 0) {
        func_809744C8(&this->actor);
        EnSsh_SetupAction(this, func_80975A98);
        return;
    }
    temp_v1_3 = this->unk528;
    if (temp_v1_3 == 0) {
        phi_v0_3 = 0;
    } else {
        this->unk528 = temp_v1_3 - 1;
        phi_v0_3 = this->unk528;
    }
    if (phi_v0_3 == 0) {
        Audio_PlayActorSound2(&this->actor, 0x386AU);
        this->unk528 = 0x40;
    }
    func_809749B8(this, globalCtx);
    if ((this->unk520 == 0) && (this->unk52C == 0) && (this->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(&this->actor, 0x3000, globalCtx) != 0)) {
        func_800B8614(&this->actor, globalCtx, 100.0f);
    }
}

void func_809758B0(EnSsh *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_v0 = this->unk520;
    if (temp_v0 != 0) {
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->unk520 = temp_v0 - 1;
            phi_v1 = this->unk520;
        }
        if (phi_v1 == 0) {
            func_80974374(&this->actor, 2);
        }
    }
    temp_v0_2 = this->unk52C;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 == 0) {
            phi_v1_2 = 0;
        } else {
            this->unk52C = temp_v0_2 - 1;
            phi_v1_2 = this->unk52C;
        }
        if (phi_v1_2 == 0) {
            func_80974374(&this->actor, 2);
        }
    }
    if ((this->actor.floorHeight + this->unk538) <= this->actor.world.pos.y) {
        EnSsh_SetupAction(this, func_80975720);
        return;
    }
    Math_SmoothStepToF(&this->actor.velocity.y, 2.0f, 0.6f, 1000.0f, 0.0f);
}

void func_80975998(EnSsh *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_v0 = this->unk520;
    if (temp_v0 != 0) {
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->unk520 = temp_v0 - 1;
            phi_v1 = this->unk520;
        }
        if (phi_v1 == 0) {
            func_80974374(&this->actor, 4);
        }
    }
    if (func_80974A24(this, globalCtx) == 0) {
        func_809744C8(&this->actor);
        EnSsh_SetupAction(this, func_80975A98);
        return;
    }
    if (func_80974B44(this) != 0) {
        func_80973EFC(this, globalCtx);
        func_809744FC(this);
        EnSsh_SetupAction(this, func_809758B0);
        return;
    }
    temp_v0_2 = this->unk528;
    if (temp_v0_2 == 0) {
        phi_v1_2 = 0;
    } else {
        this->unk528 = temp_v0_2 - 1;
        phi_v1_2 = this->unk528;
    }
    if (phi_v1_2 == 0) {
        Audio_PlayActorSound2(&this->actor, 0x3868U);
        this->unk528 = 3;
    }
}

void func_80975A98(EnSsh *this, GlobalContext *globalCtx) {
    f32 sp24;

    sp24 = this->unk144.animCurrentFrame / (this->unk144.totalFrames - 1.0f);
    if (sp24 == 1.0f) {
        func_809744C8(&this->actor);
    }
    if (func_80974A24(this, globalCtx) != 0) {
        func_80974540(this);
        EnSsh_SetupAction(this, func_80975998);
        return;
    }
    if (func_80974B0C(this) != 0) {
        func_809744A8(this);
        EnSsh_SetupAction(this, func_809755C0);
        return;
    }
    this->actor.velocity.y = 4.0f * sp24;
}

void func_80975B6C(EnSsh *arg0) {
    u16 temp_t3;
    u16 temp_t9;
    u16 temp_v0;

    temp_v0 = arg0->unk5C2;
    if ((temp_v0 & 0x10) != 0) {
        temp_t9 = temp_v0 & 0xFFEF;
        if (arg0->unk522 == 0) {
            arg0->unk5C2 = temp_t9;
            if ((temp_t9 & 0x20) == 0) {
                func_809745BC((Actor *)0x3F000000, 1.0f);
                return;
            }
            func_809745BC((Actor *)0x3F400000, 1.0f);
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    temp_t3 = temp_v0 | 0x10;
    if (arg0->unk522 != 0) {
        arg0->unk5C2 = temp_t3;
        if ((temp_t3 & 0x20) == 0) {
            func_809745BC((Actor *)0x3F000000, 2.0f);
            return;
        }
        func_809745BC((Actor *)0x3F400000, 2.0f);
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_80975C14(EnSsh *this, GlobalContext *globalCtx) {
    if (func_80974B44(this) == 0) {
        EnSsh_SetupAction(this, func_809755C0);
        func_809755C0(this, globalCtx);
        return;
    }
    func_809744FC(this);
    this->unk5C2 |= 4;
    EnSsh_SetupAction(this, func_809758B0);
    func_809758B0(this, globalCtx);
}

void EnSsh_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnSsh *this = (EnSsh *) thisx;
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;

    func_80975B6C(this);
    if (func_80974F78(&this->actor, globalCtx) == 0) {
        if (this->unk52A != 0) {
            func_80974730(&this->actor);
        } else {
            SkelAnime_FrameUpdateMatrix(&this->unk144);
            Actor_ApplyMovement(&this->actor);
            Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
            this->actionFunc(this, globalCtx);
        }
        func_8097497C(this, globalCtx);
        temp_v1 = this->unk5C8;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk5C8 = temp_v1 - 1;
            phi_v0 = this->unk5C8;
        }
        phi_v1 = this->unk5C8;
        if (phi_v0 == 0) {
            this->unk5C8 = Rand_S16Offset(0x3C, 0x3C);
            phi_v1 = this->unk5C8;
        }
        this->unk5C6 = phi_v1;
        if ((s32) this->unk5C6 >= 3) {
            this->unk5C6 = 0;
        }
        func_80975300(&this->actor, globalCtx);
        Actor_SetHeight(&this->actor, 0.0f);
    }
}

s32 func_80975DBC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    s16 temp_v0;

    if (arg1 != 1) {
        if (arg1 != 4) {
            if (arg1 != 5) {
                if (arg1 != 8) {

                } else if ((arg5->unk5C2 & 0x20) != 0) {
                    *arg2 = &D_06005F78;
                }
            } else if ((arg5->unk5C2 & 0x20) != 0) {
                *arg2 = &D_06005210;
            }
        } else if ((arg5->unk5C2 & 0x20) != 0) {
            *arg2 = &D_06005850;
        }
    } else {
        temp_v0 = arg5->unk522;
        if ((temp_v0 != 0) && (arg5->unk52E == 0)) {
            if ((s32) temp_v0 >= 2) {
                func_80974118(arg5);
            } else {
                func_80974220(arg5);
            }
        }
    }
    return 0;
}

void func_80975EB8(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a0;
    void *temp_v1;

    if ((arg1 == 5) && ((arg4->unk5C2 & 0x20) != 0)) {
        temp_a0 = *arg0;
        temp_v1 = temp_a0->unk2B0;
        temp_a0->unk2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk4 = &D_060000D8;
        temp_v1->unk0 = 0xDE000000;
    }
    Collider_UpdateSpheres(arg1, arg4 + 0x4BC);
}

void EnSsh_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnSsh *this = (EnSsh *) thisx;
    GraphicsContext *sp2C;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    s32 temp_a0_2;

    func_80974CC8(this, globalCtx);
    func_80974B84(this);
    temp_a0 = globalCtx->state.gfxCtx;
    sp2C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp2C->polyOpa.p;
    sp2C->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060020;
    temp_a0_2 = *(&D_80976178 + (this->unk5C6 * 4));
    temp_v1->words.w1 = (temp_a0_2 & 0xFFFFFF) + gSegments[(u32) (temp_a0_2 * 0x10) >> 0x1C] + 0x80000000;
    SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, func_80975DBC, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80975EB8, &this->actor);
}

