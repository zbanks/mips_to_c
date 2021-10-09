typedef struct EnSyatekiOkuta {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ void (*actionFunc)(EnSyatekiOkuta *, GlobalContext *);
    /* 0x18C */ ColliderCylinder unk18C;            /* inferred */
    /* 0x1D8 */ char pad1D8[0xC];
    /* 0x1E4 */ Vec3s unk1E4;                       /* inferred */
    /* 0x1EA */ char pad1EA[0x5A];                  /* maybe part of unk1E4[16]? */
    /* 0x244 */ Vec3s unk244;                       /* inferred */
    /* 0x24A */ char pad24A[0x5A];                  /* maybe part of unk244[16]? */
    /* 0x2A4 */ s16 unk2A4;                         /* inferred */
    /* 0x2A6 */ s16 unk2A6;                         /* inferred */
    /* 0x2A8 */ char pad2A8[0x2];
    /* 0x2AA */ s16 unk2AA;                         /* inferred */
} EnSyatekiOkuta;                                   /* size = 0x2AC */

struct _mips2c_stack_EnSyatekiOkuta_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSyatekiOkuta_Draw {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad2C[0x1C];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnSyatekiOkuta_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ WaterBox *sp3C;                      /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnSyatekiOkuta_Update {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A36148 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A361B0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A361F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A36260 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A362A8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A362F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A36350 {};              /* size 0x0 */

struct _mips2c_stack_func_80A36360 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A363B4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A36444 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A36488 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A364C0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A36504 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A3657C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A365EC {
    /* 0x00 */ char pad0[0x78];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80A368E0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A36A90 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A36AF8 {
    /* 0x00 */ char pad0[0x1A];
    /* 0x1A */ s16 sp1A;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A36CB0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A370EC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A37294 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

void func_80A36148(Vec3f *arg0, Vec3f *arg1, s16 arg2, GlobalContext *arg3); /* static */
void func_80A361B0(EnSyatekiOkuta *arg0, GlobalContext *arg1); /* static */
s32 func_80A361F4(EnSyatekiOkuta *arg0, EnSyatekiOkuta *); /* static */
void func_80A36260(EnSyatekiOkuta *arg0);           /* static */
void func_80A362F8(Actor *arg0);                    /* static */
void func_80A36360(Actor *arg0);                    /* static */
void func_80A36444(EnSyatekiOkuta *arg0);           /* static */
void func_80A364C0(void *arg0);                     /* static */
void func_80A3657C(Actor *arg0);                    /* static */
void func_80A368E0(EnSyatekiOkuta *arg0, GlobalContext *arg1); /* static */
s32 func_80A36A90(EnSyatekiOkuta *arg0, GlobalContext *); /* static */
void func_80A36AF8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A36CB0(EnSyatekiOkuta *arg0);           /* static */
s32 func_80A370EC(Vec3s *arg0, f32 arg1, f32 *arg2); /* static */
s32 func_80A37294(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
extern SkeletonHeader D_060033D0;
extern AnimationHeader D_0600466C;
static ColliderCylinderInit D_80A37570 = {
    {3, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x28, 0xFFE2, {0, 0, 0}},
};
static ActorAnimationEntry D_80A3759C[6] = {
    {(AnimationHeader *)0x600044C, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6003958, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6003B24, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6003EE4, 1.0f, 0.0f, 0.0f, 0, -1.0f},
    {(AnimationHeader *)0x600466C, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6004204, 1.0f, 0.0f, 0.0f, 2, -1.0f},
};
static ? D_80A37630;                                /* unable to generate initializer */
static ? D_80A37A88;                                /* unable to generate initializer */
static ? D_80A37B08;                                /* unable to generate initializer */
static InitChainEntry D_80A37B88[2];                /* unable to generate initializer */
static Color_RGBA8 D_80A37B90 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80A37B94 = {0x96, 0x96, 0x96, 0xFF};
static Vec3f D_80A37B98 = {0.0f, -0.5f, 0.0f};
static Color_RGBA8 D_80A37BA4 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80A37BA8 = {0x96, 0x96, 0x96, 0};

void EnSyatekiOkuta_Init(EnSyatekiOkuta *this, GlobalContext *globalCtx) {
    WaterBox *sp3C;
    f32 sp38;
    s32 sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    CollisionContext *temp_a0;
    EnSyatekiOkuta *this = (EnSyatekiOkuta *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80A37B88);
    SkelAnime_Init(globalCtx, &this->unk144, &D_060033D0, &D_0600466C, &this->unk1E4, &this->unk244, 0x10);
    temp_a1 = &this->unk18C;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80A37570);
    temp_a0 = &globalCtx->colCtx;
    sp30 = (ColliderCylinder *) temp_a0;
    this->actor.floorHeight = func_800C411C(temp_a0, &this->actor.floorPoly, &sp34, (Actor *) this, (Vec3f *) &this->actor.world);
    if ((func_800CA1E8(globalCtx, (CollisionContext *) sp30, this->actor.world.pos.x, this->actor.world.pos.z, &sp38, &sp3C) == 0) || (sp38 <= this->actor.floorHeight)) {
        Actor_MarkForDeath((Actor *) this);
    } else {
        this->actor.home.pos.y = sp38;
        this->actor.world.pos.y = this->actor.home.pos.y;
    }
    this->unk2A4 = 0;
    this->unk2AA = 0;
    func_80A36260(this);
}

void EnSyatekiOkuta_Destroy(EnSyatekiOkuta *this, GlobalContext *globalCtx) {
    EnSyatekiOkuta *this = (EnSyatekiOkuta *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk18C);
}

void func_80A36148(Vec3f *arg0, Vec3f *arg1, s16 arg2, GlobalContext *arg3) {
    func_800B0DE0(arg3, arg0, arg1, &D_801D15B0, &D_80A37B90, &D_80A37B94, (s16) 0x190, (s16) (s32) arg2);
}

void func_80A361B0(EnSyatekiOkuta *arg0, GlobalContext *arg1) {
    EffectSsGSplash_Spawn(arg1, arg0 + 8, NULL, NULL, (s16) 0, (s16) 0x320);
}

s32 func_80A361F4(EnSyatekiOkuta *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;

    temp_v1 = arg0->actor.params & 0xF;
    if ((temp_v1 == 1) || (temp_v1 == 4)) {
        temp_a0 = arg0->actor.parent->unk190;
        temp_a1 = (temp_v1 * 2) + 6;
        if (((temp_a0 >> temp_a1) & 3) != 0) {
            return 1;
        }
        if ((temp_a1 == 8) && (((temp_a0 >> 0xE) & 3) != 0)) {
            return 1;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_80A36260(EnSyatekiOkuta *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimPlaybackStop(temp_a0, &D_0600466C, 0.0f);
    arg0->actor.draw = NULL;
    arg0->actionFunc = func_80A362A8;
}

void func_80A362A8(EnSyatekiOkuta *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    Actor *phi_v0;

    temp_v0 = globalCtx->actorCtx.actorList[4].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if (phi_v0->id == 0x11D) {
            this->actor.parent = phi_v0;
            func_80A362F8();
            return;
        }
        temp_v0_2 = phi_v0->next;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return;
        }
        goto loop_1;
    }
}

void func_80A362F8(Actor *arg0) {
    SkelAnime_ChangeAnimPlaybackStop(arg0 + 0x144, &D_0600466C, 0.0f);
    arg0->draw = NULL;
    Actor_SetScale(arg0, 0.01f);
    arg0->unk188 = func_80A36350;
}

void func_80A36350(EnSyatekiOkuta *this, GlobalContext *globalCtx) {

}

void func_80A36360(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->draw = EnSyatekiOkuta_Draw;
    temp_a3->unk2AA = 0;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x144, (ActorAnimationEntry []) D_80A3759C, 4);
    arg0->unk188 = func_80A363B4;
}

void func_80A363B4(EnSyatekiOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    sp24 = temp_a0;
    if ((func_801378B8(temp_a0, 2.0f) != 0) || (func_801378B8(temp_a0, 15.0f) != 0)) {
        if (func_80A361F4(this) == 0) {
            func_80A361B0(this, globalCtx);
            Audio_PlayActorSound2((Actor *) this, 0x38C2U);
            goto block_4;
        }
    } else {
block_4:
        if (func_801378B8(sp24, this->unk144.animFrameCount) != 0) {
            func_80A36444(this);
        }
    }
}

void func_80A36444(EnSyatekiOkuta *arg0) {
    func_800BDC5C(arg0 + 0x144, (ActorAnimationEntry []) D_80A3759C, 3);
    arg0->actionFunc = func_80A36488;
}

void func_80A36488(EnSyatekiOkuta *this, GlobalContext *globalCtx) {
    if ((s32) this->actor.parent->unk26C >= 0x46) {
        func_80A364C0();
    }
}

void func_80A364C0(void *arg0) {
    func_800BDC5C(arg0 + 0x144, (ActorAnimationEntry []) D_80A3759C, 2);
    arg0->unk188 = func_80A36504;
}

void func_80A36504(EnSyatekiOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    sp24 = temp_a0;
    if (func_801378B8(temp_a0, 4.0f) != 0) {
        func_80A361B0(this, globalCtx);
        Audio_PlayActorSound2((Actor *) this, 0x38C3U);
        return;
    }
    if (func_801378B8(temp_a0, this->unk144.animFrameCount) != 0) {
        func_80A362F8((Actor *) this);
    }
}

void func_80A3657C(Actor *arg0) {
    Actor *temp_a0;

    arg0->unk2A4 = 0;
    arg0->unk2AA = 0x12C;
    if (arg0->unk2A6 == 1) {
        temp_a0 = arg0;
        arg0 = arg0;
        Audio_PlayActorSound2(temp_a0, 0x38C6U);
    }
    arg0 = arg0;
    func_800BDC5C(arg0 + 0x144, (ActorAnimationEntry []) D_80A3759C, 1);
    arg0->unk188 = func_80A365EC;
}

void func_80A365EC(EnSyatekiOkuta *this, GlobalContext *globalCtx) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    PosRot *temp_s1;
    SkelAnime *temp_s0;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s0_2;
    s32 phi_s0;

    temp_v0 = this->unk2AA;
    temp_s0 = &this->unk144;
    if ((s32) temp_v0 > 0) {
        this->unk2AA = temp_v0 - 0xF;
    }
    if (func_801378B8(temp_s0, this->unk144.animFrameCount) != 0) {
        temp_a0 = &sp78;
        temp_a1 = &sp84;
        if (this->unk2A4 == 0) {
            sp78 = this->actor.world.pos.x;
            sp7C = this->actor.world.pos.y + 40.0f;
            sp84 = 0.0f;
            sp88 = -0.5f;
            sp8C = 0.0f;
            sp80 = this->actor.world.pos.z;
            func_80A36148((Vec3f *) temp_a0, (Vec3f *) temp_a1, -0x14, globalCtx);
            Audio_PlayActorSound2((Actor *) this, 0x38C7U);
        }
        this->unk2A4 += 1;
    }
    if (func_801378B8(temp_s0, 15.0f) != 0) {
        func_80A361B0(this, globalCtx);
    }
    temp_v0_2 = this->unk2A4;
    if ((s32) temp_v0_2 < 3) {
        Actor_SetScale((Actor *) this, (((f32) temp_v0_2 * 0.25f) + 1.0f) * 0.01f);
        return;
    }
    if ((s32) temp_v0_2 < 6) {
        Actor_SetScale((Actor *) this, (1.5f - ((f32) (temp_v0_2 - 2) * 0.2333f)) * 0.01f);
        return;
    }
    if ((s32) temp_v0_2 < 0xB) {
        Actor_SetScale((Actor *) this, (((f32) (temp_v0_2 - 5) * 0.04f) + 0.8f) * 0.01f);
        return;
    }
    if (Math_StepToF((f32 *) &this->actor.scale, 0.0f, 0.002f) != 0) {
        temp_s1 = &this->actor.world;
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) temp_s1, 0x1E, 0x38C5U);
        phi_s0 = 0;
        do {
            sp84 = (Rand_ZeroOne() - 0.5f) * 7.0f;
            sp88 = Rand_ZeroOne() * 7.0f;
            sp8C = (Rand_ZeroOne() - 0.5f) * 7.0f;
            EffectSsDtBubble_SpawnCustomColor(globalCtx, (Vec3f *) temp_s1, (Vec3f *) &sp84, &D_80A37B98, &D_80A37BA4, &D_80A37BA8, (s16) Rand_S16Offset(0x64, 0x32), (s16) 0x19, (s16) 0);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0xA);
        func_80A362F8((Actor *) this);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.y = temp_f0;
    this->actor.scale.z = temp_f0;
}

void func_80A368E0(EnSyatekiOkuta *arg0, GlobalContext *arg1) {
    EnSyatekiOkuta *temp_a0;
    EnSyatekiOkuta *temp_a3;
    EnSyatekiOkuta *phi_a3;
    EnSyatekiOkuta *phi_a3_2;

    temp_a3 = arg0;
    temp_a3->unk18C.dim.height = (s16) (s32) ((f32) (D_80A37570.dim.height - temp_a3->unk18C.dim.yShift) * temp_a3->unk1DC * temp_a3->actor.scale.y * 100.0f);
    temp_a3->unk18C.dim.radius = (s16) (s32) ((f32) D_80A37570.dim.radius * temp_a3->actor.scale.x * 100.0f);
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    if (func_80A363B4 == temp_a3->actionFunc) {
        temp_a0 = temp_a3;
        if ((temp_a3->unk2A6 != 2) || (arg0 = temp_a3, phi_a3 = arg0, (func_80A361F4(temp_a0, temp_a3) == 0))) {
            phi_a3_2 = phi_a3;
            if (phi_a3->unk144.animCurrentFrame < (phi_a3->unk144.animFrameCount - 5.0f)) {
                phi_a3->unk18C.dim.height = (s16) (s32) ((f32) phi_a3->unk18C.dim.height * 1.35f);
            }
            goto block_5;
        }
    } else {
block_5:
        if (phi_a3_2->unk2A6 == 1) {
            phi_a3_2->unk18C.dim.radius += 0xA;
            phi_a3_2->unk18C.dim.height += 0xF;
        }
        phi_a3_2->unk18C.dim.pos.x = (s16) (s32) phi_a3_2->actor.world.pos.x;
        phi_a3_2->unk18C.dim.pos.z = (s16) (s32) phi_a3_2->actor.world.pos.z;
        phi_a3_2->unk18C.dim.pos.y = (s16) (s32) (phi_a3_2->actor.world.pos.y + ((f32) phi_a3_2->unk144.limbDrawTbl->unk2 * phi_a3_2->actor.scale.y));
        CollisionCheck_SetAC(arg1, arg1 + 0x18884, phi_a3_2 + 0x18C);
    }
}

s32 func_80A36A90(EnSyatekiOkuta *arg0) {
    s32 temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->actionFunc;
    if ((func_80A365EC == temp_v0) || (func_80A36350 == temp_v0)) {
        goto block_6;
    }
    temp_v1 = arg0->unk18C.base.acFlags;
    if ((temp_v1 & 2) != 0) {
        arg0->unk18C.base.acFlags = temp_v1 & 0xFFFD;
        return 1;
    }
    func_80A368E0();
block_6:
    return 0;
}

void func_80A36AF8(Actor *arg0, GlobalContext *arg1) {
    s16 sp1A;
    s16 temp_v1_2;
    s32 temp_v1;
    void *temp_v0;

    temp_v1 = arg0->unk188;
    temp_v0 = arg0->parent;
    if ((func_80A36488 != temp_v1) && (func_80A363B4 != temp_v1) && (temp_v0->unk26A == 1) && (temp_v0->unk26C == 0)) {
        temp_v1_2 = ((s32) temp_v0->unk190 >> ((arg0->params & 0xF) * 2)) & 3;
        if ((s32) temp_v1_2 > 0) {
            sp1A = temp_v1_2;
            Actor_SetScale(arg0, 0.01f);
            arg0->unk2A6 = temp_v1_2;
            func_80A36360(arg0);
        }
    }
}

void EnSyatekiOkuta_Update(EnSyatekiOkuta *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_v0;
    EnSyatekiOkuta *this = (EnSyatekiOkuta *) thisx;

    this->actionFunc(this, globalCtx);
    if (func_80A36350 != this->actionFunc) {
        SkelAnime_FrameUpdateMatrix(&this->unk144);
    }
    func_80A36AF8((Actor *) this, globalCtx);
    if (func_80A36A90(this, globalCtx) != 0) {
        temp_v0 = this->actor.parent;
        if (this->unk2A6 == 1) {
            sp24 = temp_v0;
            Audio_PlayActorSound2((Actor *) this, 0x4807U);
            globalCtx->interfaceCtx.unk_25C += 1;
            temp_v0->unk26E = 1;
            temp_v0->unk280 = (s16) (temp_v0->unk280 + 1);
        } else {
            sp24 = temp_v0;
            Audio_PlayActorSound2((Actor *) this, 0x4806U);
            temp_v0->unk26E = 2;
        }
        func_80A3657C((Actor *) this);
    } else {
        this->unk18C.base.acFlags &= 0xFFFD;
    }
    func_80A36CB0(this);
}

void func_80A36CB0(EnSyatekiOkuta *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_v0;
    f32 phi_f14;

    temp_v0 = arg0->actionFunc;
    temp_f2 = arg0->unk144.animCurrentFrame;
    if (func_80A363B4 == temp_v0) {
        if (temp_f2 < 8.0f) {
            arg0->unk1E0 = 1.0f;
            arg0->unk1DC = 1.0f;
            phi_f14 = 1.0f;
            goto block_30;
        }
        if (temp_f2 < 10.0f) {
            arg0->unk1E0 = 1.0f;
            arg0->unk1D8 = 1.0f;
            arg0->unk1DC = ((temp_f2 - 7.0f) * 0.4f) + 1.0f;
            return;
        }
        if (temp_f2 < 14.0f) {
            temp_f0 = temp_f2 - 9.0f;
            temp_f12 = (temp_f0 * 0.075f) + 1.0f;
            arg0->unk1E0 = temp_f12;
            arg0->unk1D8 = temp_f12;
            arg0->unk1DC = 1.8f - (temp_f0 * 0.25f);
            return;
        }
        temp_f0_2 = temp_f2 - 13.0f;
        temp_f12_2 = 1.3f - (temp_f0_2 * 0.05f);
        arg0->unk1E0 = temp_f12_2;
        arg0->unk1D8 = temp_f12_2;
        arg0->unk1DC = (temp_f0_2 * 0.0333f) + 0.8f;
        return;
    }
    if (func_80A36488 == temp_v0) {
        arg0->unk1E0 = 1.0f;
        arg0->unk1D8 = 1.0f;
        arg0->unk1DC = (sin_rad(0.19634955f * temp_f2) * 0.2f) + 1.0f;
        return;
    }
    if (func_80A36504 == temp_v0) {
        if (temp_f2 < 3.0f) {
            arg0->unk1DC = 1.0f;
        } else if (temp_f2 < 4.0f) {
            arg0->unk1DC = (temp_f2 - 2.0f) + 1.0f;
        } else {
            arg0->unk1DC = 2.0f - ((temp_f2 - 3.0f) * 0.333f);
        }
        arg0->unk1E0 = 1.0f;
        phi_f14 = 1.0f;
        goto block_30;
    }
    if (func_80A365EC == temp_v0) {
        temp_f2_2 = temp_f2 + (f32) arg0->unk2A4;
        if (temp_f2_2 >= 35.0f) {
            arg0->unk1E0 = 1.0f;
            arg0->unk1DC = 1.0f;
            phi_f14 = 1.0f;
            goto block_30;
        }
        if (temp_f2_2 < 4.0f) {
            temp_f0_3 = 1.0f - (temp_f2_2 * 0.0666f);
            arg0->unk1E0 = temp_f0_3;
            arg0->unk1D8 = temp_f0_3;
            arg0->unk1DC = (temp_f2_2 * 0.1666f) + 1.0f;
            return;
        }
        if (temp_f2_2 < 25.0f) {
            temp_f0_4 = temp_f2_2 - 4.0f;
            temp_f12_3 = (temp_f0_4 * 0.01f) + 0.8f;
            arg0->unk1E0 = temp_f12_3;
            arg0->unk1D8 = temp_f12_3;
            arg0->unk1DC = 1.5f - (temp_f0_4 * 0.025f);
            return;
        }
        if (temp_f2_2 < 27.0f) {
            temp_f0_5 = ((temp_f2_2 - 24.0f) * 0.25f) + 1.0f;
            arg0->unk1E0 = temp_f0_5;
            arg0->unk1DC = temp_f0_5;
            arg0->unk1D8 = temp_f0_5;
            return;
        }
        if (temp_f2_2 < 30.0f) {
            temp_f0_6 = 1.5f - ((temp_f2_2 - 26.0f) * 0.233f);
            arg0->unk1E0 = temp_f0_6;
            arg0->unk1DC = temp_f0_6;
            arg0->unk1D8 = temp_f0_6;
            return;
        }
        temp_f0_7 = ((temp_f2_2 - 29.0f) * 0.04f) + 0.8f;
        arg0->unk1E0 = temp_f0_7;
        arg0->unk1DC = temp_f0_7;
        arg0->unk1D8 = temp_f0_7;
        return;
    }
    arg0->unk1E0 = 1.0f;
    arg0->unk1DC = 1.0f;
    phi_f14 = 1.0f;
block_30:
    arg0->unk1D8 = phi_f14;
}

s32 func_80A370EC(Vec3s *arg0, f32 arg1, f32 *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_v0;

    temp_v0 = arg0->unk188;
    if (func_80A363B4 == temp_v0) {
        arg2->unk4 = 1.0f;
        arg2->unk8 = 1.0f;
        arg2->unk0 = (sin_rad(0.19634955f * arg1) * 0.4f) + 1.0f;
        goto block_12;
    }
    if (func_80A365EC == temp_v0) {
        if ((arg1 >= 35.0f) || (arg1 < 25.0f)) {
            return 0;
        }
        if (arg1 < 27.0f) {
            arg2->unk8 = 1.0f;
            temp_f0 = ((arg1 - 24.0f) * 0.5f) + 1.0f;
            arg2->unk4 = temp_f0;
            arg2->unk0 = temp_f0;
        } else if (arg1 < 30.0f) {
            temp_f0_2 = (arg1 - 26.0f) * 0.333f;
            temp_f2 = 2.0f - temp_f0_2;
            arg2->unk4 = temp_f2;
            arg2->unk0 = temp_f2;
            arg2->unk8 = (f32) (temp_f0_2 + 1.0f);
        } else {
            arg2->unk0 = 1.0f;
            arg2->unk4 = 1.0f;
            arg2->unk8 = (f32) (2.0f - ((arg1 - 29.0f) * 0.2f));
        }
block_12:
        return 1;
    }
    return 0;
}

s32 func_80A37294(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 sp20;
    f32 temp_f0;
    f32 phi_f0;

    temp_f0 = arg5->unk15C;
    phi_f0 = temp_f0;
    if (func_80A365EC == arg5->unk188) {
        phi_f0 = temp_f0 + (f32) arg5->unk2A4;
    }
    if (arg1 == 0xE) {
        sp20.unk0 = arg5->unk1D8;
        sp20.unk4 = (s32) arg5->unk1DC;
        sp20.unk8 = (s32) arg5->unk1E0;
        Matrix_Scale(sp20, sp24, sp28, 1);
    } else if ((arg1 == 0xF) && (func_80A370EC(arg5, phi_f0, &sp20) != 0)) {
        Matrix_Scale(sp20, sp24, sp28, 1);
    }
    return 0;
}

void EnSyatekiOkuta_Draw(EnSyatekiOkuta *this, GlobalContext *globalCtx) {
    Gfx *sp28;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    EnSyatekiOkuta *this = (EnSyatekiOkuta *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if (this->unk2A6 == 1) {
        temp_v1 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xDB060020;
        temp_v1->words.w1 = (u32) D_801AEFA0;
    } else {
        temp_v1_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xDB060020;
        temp_v1_2->words.w1 = (u32) &D_80A37630;
    }
    SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, func_80A37294, NULL, (Actor *) this);
    func_8012C2DC(globalCtx->state.gfxCtx);
    if (func_80A365EC == this->actionFunc) {
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + 30.0f, this->actor.world.pos.z + 20.0f, 0);
        if ((s32) this->unk2AA >= 0x100) {
            temp_v0 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w1 = 0xD24020FF;
            temp_v0->words.w0 = 0xFA000000;
        } else {
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xFA000000;
            temp_v0_2->words.w1 = (this->unk2AA & 0xFF) | 0xD2402000;
        }
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp28 = temp_v0_3;
        sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        if (this->unk2A6 == 2) {
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) &D_80A37A88;
            temp_v0_4->words.w0 = 0xDE000000;
            return;
        }
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) &D_80A37B08;
        temp_v0_5->words.w0 = 0xDE000000;
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}
