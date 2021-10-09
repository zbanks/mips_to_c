typedef struct EnKakasi {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*unk144)(GlobalContext *, Actor *); /* inferred */
    /* 0x148 */ void (*actionFunc)(EnKakasi *, GlobalContext *);
    /* 0x14C */ SkelAnime unk14C;                   /* inferred */
    /* 0x190 */ s16 unk190;                         /* inferred */
    /* 0x192 */ s16 unk192;                         /* inferred */
    /* 0x194 */ s16 unk194;                         /* inferred */
    /* 0x196 */ s16 unk196;                         /* inferred */
    /* 0x198 */ char pad198[0x8];                   /* maybe part of unk196[5]? */
    /* 0x1A0 */ s32 unk1A0;                         /* inferred */
    /* 0x1A4 */ s32 unk1A4;                         /* inferred */
    /* 0x1A8 */ s32 unk1A8;                         /* inferred */
    /* 0x1AC */ s16 unk1AC;                         /* inferred */
    /* 0x1AE */ s16 unk1AE;                         /* inferred */
    /* 0x1B0 */ char pad1B0[0x4];                   /* maybe part of unk1AE[3]? */
    /* 0x1B4 */ f32 unk1B4;                         /* inferred */
    /* 0x1B8 */ f32 unk1B8;                         /* inferred */
    /* 0x1BC */ f32 unk1BC;                         /* inferred */
    /* 0x1C0 */ char pad1C0[0x4];
    /* 0x1C4 */ f32 unk1C4;                         /* inferred */
    /* 0x1C8 */ char pad1C8[0x3C];                  /* maybe part of unk1C4[16]? */
    /* 0x204 */ s16 unk204;                         /* inferred */
    /* 0x206 */ char pad206[0x2];
    /* 0x208 */ s16 unk208;                         /* inferred */
    /* 0x20A */ char pad20A[0x2];
    /* 0x20C */ f32 unk20C;                         /* inferred */
    /* 0x210 */ f32 unk210;                         /* inferred */
    /* 0x214 */ Vec3f unk214;                       /* inferred */
    /* 0x220 */ Vec3f unk220;                       /* inferred */
    /* 0x22C */ Vec3f unk22C;                       /* inferred */
    /* 0x238 */ Vec3f unk238;                       /* inferred */
    /* 0x23C */ f32 unk23C;                         /* overlap; inferred */
    /* 0x240 */ f32 unk240;                         /* inferred */
    /* 0x244 */ PosRot unk244;                      /* inferred */
    /* 0x250 */ f32 unk250;                         /* overlap; inferred */
    /* 0x254 */ ColliderCylinder unk254;            /* inferred */
} EnKakasi;                                         /* size = 0x2A0 */

struct _mips2c_stack_EnKakasi_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnKakasi_Draw {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnKakasi_Init {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnKakasi_Update {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s16 *sp28;                           /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8096F800 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8096F88C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8096F8D8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8096FA18 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8096FAAC {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ f32 *sp34;                           /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8096FBB8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8096FC8C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8096FCC4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8096FDE8 {};              /* size 0x0 */

struct _mips2c_stack_func_8096FE00 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s16 sp20;                            /* inferred */
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80970008 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8097006C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809705E4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80970658 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80970740 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80970978 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80970A10 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80970A9C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0xC];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ Actor *sp44;                         /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80970F20 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80970FF8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80971064 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ s16 *sp3C;                           /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ Actor *sp44;                         /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad48[0xC];
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80971430 {};              /* size 0x0 */

struct _mips2c_stack_func_80971440 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809714BC {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80971794 {};              /* size 0x0 */

struct _mips2c_stack_func_809717D0 {};              /* size 0x0 */

struct _mips2c_stack_func_8097185C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8097193C {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80971A38 {};              /* size 0x0 */

struct _mips2c_stack_func_80971A64 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80971AD4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80971CE0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 func_800B8718(EnKakasi *, GlobalContext *);     /* extern */
? func_800B874C(EnKakasi *, GlobalContext *, ?, ?); /* extern */
? func_8016566C(?);                                 /* extern */
? func_80165690();                                  /* extern */
? func_80169940(GlobalContext *, s16, s32);         /* extern */
void func_8096F800(EnKakasi *arg0, s32 arg1, u8);   /* static */
void func_8096F88C(GlobalContext *arg0, Actor *arg1); /* static */
void func_8096F8D8(Actor *arg0);                    /* static */
void func_8096FA18(EnKakasi *arg0, GlobalContext *arg1); /* static */
void func_8096FAAC(EnKakasi *arg0, GlobalContext *arg1); /* static */
void func_8096FBB8(EnKakasi *arg0, GlobalContext *arg1); /* static */
void func_8096FC8C(EnKakasi *arg0);                 /* static */
void func_8096FDE8(EnKakasi *arg0);                 /* static */
void func_80970008(EnKakasi *arg0);                 /* static */
void func_809705E4(EnKakasi *arg0, GlobalContext *arg1); /* static */
void func_80970A10(EnKakasi *arg0, GlobalContext *arg1); /* static */
void func_80970FF8(EnKakasi *arg0);                 /* static */
void func_80971440(EnKakasi *arg0, u16, u8);        /* static */
void func_80971794(EnKakasi *arg0);                 /* static */
void func_80971A38(EnKakasi *arg0);                 /* static */
void func_80971CE0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000214;
extern FlexSkeletonHeader D_060065B0;
static ColliderCylinderInit D_80971D80 = {
    {0xA, 0, 9, 0x39, 0x20, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
    {0x14, 0x46, 0, {0, 0, 0}},
};
static ? D_80971DCC;                                /* unable to generate initializer */
static ? D_80971E38;                                /* unable to generate initializer */
static ? D_80971EEC;                                /* unable to generate initializer */
static ? D_80971FA0;                                /* unable to generate initializer */
static ? D_80971FE8;                                /* unable to generate initializer */
static ? D_80972030;                                /* unable to generate initializer */
static ? D_8097203C;                                /* unable to generate initializer */
static ? D_80972048;                                /* unable to generate initializer */
static ? D_8097206C;                                /* unable to generate initializer */

void EnKakasi_Destroy(EnKakasi *this, GlobalContext *globalCtx) {
    EnKakasi *this = (EnKakasi *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk254);
}

void EnKakasi_Init(EnKakasi *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_f8;
    s16 temp_v0;
    s16 temp_v0_2;
    s8 temp_s0;
    s16 phi_s0;
    EnKakasi *phi_s1;
    EnKakasi *this = (EnKakasi *) thisx;

    Collider_InitAndSetCylinder(globalCtx, &this->unk254, (Actor *) this, &D_80971D80);
    SkelAnime_InitSV(globalCtx, &this->unk14C, &D_060065B0, &D_06000214, NULL, NULL, 0);
    temp_f0 = (f32) (((s32) this->actor.params >> 8) & 0xFF) * 20.0f;
    this->unk250 = temp_f0;
    if (temp_f0 < 40.0f) {
        this->unk250 = 40.0f;
    }
    temp_f8 = this->actor.world.rot.z;
    temp_v0 = this->actor.world.rot.x;
    this->actor.world.rot.z = 0;
    this->actor.targetMode = 0;
    this->unk1B8 = ((f32) temp_f8 * 20.0f) + 60.0f;
    if (((s32) temp_v0 > 0) && ((s32) temp_v0 < 8)) {
        this->actor.targetMode = temp_v0 - 1;
    }
    this->unk194 = this->actor.params & 1;
    this->actor.world.rot.x = 0;
    this->actor.flags |= 0x400;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Actor_SetScale((Actor *) this, 0.01f);
    temp_s0 = this->actor.cutscene;
    phi_s0 = (s16) temp_s0;
    phi_s1 = this;
    if (temp_s0 != -1) {
        do {
            phi_s1->unk1AE = phi_s0;
            temp_v0_2 = ActorCutscene_GetAdditionalCutscene(phi_s0);
            phi_s0 = temp_v0_2;
            phi_s1 += 2;
        } while (temp_v0_2 != -1);
    }
    if (this->unk194 != 0) {
        if ((gSaveContext.weekEventReg[79] & 8) != 0) {
            this->unk194 = 2;
            this->unk250 = 80.0f;
            func_80971794(this);
            return;
        }
        Actor_SetHeight((Actor *) this, 60.0f);
        this->unk144 = func_8096F88C;
        if ((gSaveContext.weekEventReg[83] & 1) != 0) {
            func_8096FC8C(this);
            return;
        }
        func_8096FDE8(this);
        return;
    }
    func_80971794(this);
}

void func_8096F800(EnKakasi *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->unk1A0 = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80972048 + (arg1 * 4)));
    temp_v1 = arg0->unk1A0;
    arg0->unk1B4 = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x14C, *(&D_80972048 + (temp_v1 * 4)), 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_8097206C + temp_v1), -4.0f);
}

void func_8096F88C(GlobalContext *arg0, Actor *arg1) {
    func_8013A530(arg0, arg1, 7, arg1 + 0x3C, arg1 + 0xBC, 280.0f, 1800.0f, (s16) -1);
}

void func_8096F8D8(Actor *arg0) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = arg0->unk1A0;
    temp_a0 = arg0 + 0x14C;
    if (((temp_v0 == 1) || (temp_v0 == 5)) && ((sp24 = temp_a0, (func_801378B8(temp_a0, 1.0f) != 0)) || (func_801378B8(temp_a0, 8.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x286AU);
    }
    temp_v0_2 = arg0->unk1A0;
    temp_a0_2 = arg0 + 0x14C;
    if ((temp_v0_2 == 2) || (temp_v0_2 == 7)) {
        sp24 = temp_a0_2;
        if ((func_801378B8(temp_a0_2, 4.0f) != 0) || (func_801378B8(temp_a0_2, 8.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x286AU);
        }
        if ((func_801378B8(sp24, 1.0f) != 0) || (func_801378B8(sp24, 9.0f) != 0) || (func_801378B8(sp24, 16.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x1847U);
        }
        if (func_801378B8(sp24, 18.0f) != 0) {
            Audio_PlayActorSound2(arg0, 0x286BU);
        }
    }
    temp_v0_3 = arg0->unk1A0;
    if (((temp_v0_3 == 3) || (temp_v0_3 == 4)) && (func_801378B8(arg0 + 0x14C, 1.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x286EU);
    }
}

void func_8096FA18(EnKakasi *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    void *temp_v0;

    temp_v1 = arg1->sceneNum;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (temp_v1 == 0x34) {
        temp_v0->world.pos.x = -50.0f;
        temp_v0->world.pos.z = 155.0f;
    } else if (temp_v1 == 0x29) {
        temp_v0->world.pos.x = 60.0f;
        temp_v0->world.pos.z = -190.0f;
    }
    Math_SmoothStepToS(temp_v0 + 0xBE, (s16) (arg0->actor.yawTowardsPlayer + 0x8000), 5, 0x3E8, (s16) 0);
}

void func_8096FAAC(EnKakasi *arg0, GlobalContext *arg1) {
    f32 *sp34;
    f32 *sp30;
    f32 *temp_a0;
    f32 *temp_a0_2;

    temp_a0 = arg0 + 0x214;
    if (arg0->unk208 != 0) {
        sp34 = temp_a0;
        Math_ApproachF(temp_a0, arg0->unk238.x, 0.4f, 4.0f);
        Math_ApproachF(arg0 + 0x218, arg0->unk238.y, 0.4f, 4.0f);
        Math_ApproachF(arg0 + 0x21C, arg0->unk238.z, 0.4f, 4.0f);
        temp_a0_2 = arg0 + 0x220;
        sp30 = temp_a0_2;
        Math_ApproachF(temp_a0_2, arg0->unk244.pos.x, 0.4f, 4.0f);
        Math_ApproachF(arg0 + 0x224, arg0->unk244.pos.y, 0.4f, 4.0f);
        Math_ApproachF(arg0 + 0x228, arg0->unk244.pos.z, 0.4f, 4.0f);
        Math_ApproachF(arg0 + 0x20C, arg0->unk210, 0.3f, 10.0f);
        Play_CameraSetAtEye(arg1, arg0->unk208, (Vec3f *) sp30, (Vec3f *) sp34);
        func_80169940(arg1, arg0->unk208, arg0->unk20C);
    }
}

void func_8096FBB8(EnKakasi *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    s32 phi_v0;

    temp_v0 = arg1->msgCtx.unk12048;
    if ((temp_v0 == 0) || (temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 4)) {
        arg0->unk190 += 1;
    }
    if ((arg0->unk190 != 0) && (arg0->unk1A0 != 1)) {
        func_8096F800(arg0, 1);
    }
    phi_v0 = (s32) arg0->unk190;
    if ((s32) arg0->unk190 >= 9) {
        arg0->unk190 = 8;
        phi_v0 = (s32) arg0->unk190;
    }
    if (phi_v0 != 0) {
        Math_ApproachF(arg0 + 0x168, 1.0f, 0.1f, 0.2f);
        arg0->actor.shape.rot.y += 0x800;
    }
}

void func_8096FC8C(EnKakasi *arg0) {
    func_8096F800(arg0, 7);
    arg0->actionFunc = func_8096FCC4;
}

void func_8096FCC4(EnKakasi *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_a2;
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0 = gSaveContext.respawnFlag;
    temp_a2 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_v0 != -4) && (temp_v0 != -8) && (temp_v0_2 = gSaveContext.time, (temp_v0_2 != 0x4000)) && (temp_v0_2 != 0xC000) && ((gSaveContext.eventInf[1] & 0x80) == 0)) {
        if (this->actor.textId == 0) {
            this->actor.textId = 0x1653;
            gSaveContext.weekEventReg[83] &= 0xFE;
            this->unk1AC = 5;
            temp_a2->unkA6C = (s32) (temp_a2->unkA6C | 0x20);
            this->actor.flags |= 0x10000;
        }
        sp24 = temp_a2;
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            temp_a2->unkA6C = (s32) (temp_a2->unkA6C & ~0x20);
            this->unk196 = 2;
            this->actor.flags &= 0xFFFEFFFF;
            this->actionFunc = func_8097006C;
            return;
        }
        func_800B8500((Actor *) this, globalCtx, 9999.9f, 9999.9f, -1);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_8096FDE8(EnKakasi *arg0) {
    arg0->unk196 = 0;
    arg0->actionFunc = func_8096FE00;
}

void func_8096FE00(EnKakasi *this, GlobalContext *globalCtx) {
    s32 sp24;
    s16 sp22;
    s16 sp20;

    sp24 = gSaveContext.day;
    this->actor.textId = 0x1644;
    if (func_800B8718(this, globalCtx) != 0) {
        this->unk14C.animPlaybackSpeed = 1.0f;
        func_809705E4(this, globalCtx);
        return;
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk14C.animPlaybackSpeed = 1.0f;
        func_80970008(this);
        return;
    }
    if ((globalCtx->actorCtx.unk5 & 4) != 0) {
        func_800B8898(globalCtx, (Actor *) this, &sp22, &sp20);
        if ((this->actor.projectedPos.z > -20.0f) && ((s32) sp22 > 0) && ((s32) sp22 < 0x140) && ((s32) sp20 > 0) && ((s32) sp20 < 0xF0) && (this->unk1A0 != 1)) {
            func_8096F800(this, 1);
            this->unk14C.animPlaybackSpeed = 2.0f;
        }
    } else if (Player_GetMask(globalCtx) == 0xE) {
        if (this->unk1A0 != 1) {
            func_8096F800(this, 1);
            this->unk14C.animPlaybackSpeed = 2.0f;
        }
    } else if ((sp24 == 3) && (gSaveContext.isNight != 0)) {
        this->unk14C.animPlaybackSpeed = 1.0f;
        if (this->unk1A0 != 1) {
            func_8096F800(this, 1);
        }
    } else if (this->unk1A0 != 8) {
        func_8096F800(this, 8);
    }
    if (this->actor.xzDistToPlayer < 120.0f) {
        func_800B8614((Actor *) this, globalCtx, 100.0f);
        func_800B874C(this, globalCtx, 0x42C80000, 0x42A00000);
    }
}

void func_80970008(EnKakasi *arg0) {
    if (arg0->unk1A0 != 1) {
        func_8096F800((EnKakasi *)1);
    }
    arg0->unk1AC = 5;
    arg0->unk196 = 1;
    arg0 = arg0;
    func_8096F800(arg0, 3);
    arg0->actionFunc = func_8097006C;
}

void func_8097006C(EnKakasi *this, GlobalContext *globalCtx) {
    s32 sp34;
    f32 sp30;
    s32 sp2C;
    s32 temp_t0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;

    sp34 = gSaveContext.day;
    sp30 = this->unk14C.animCurrentFrame;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, 0x7D0, (s16) 0);
    if ((this->actor.textId != 0x1644) && (this->unk1B4 <= sp30) && (this->unk1A0 == 7)) {
        func_8096F800(this, 3);
        this->unk1A4 = 0;
    }
    if (((this->actor.textId == 0x1651) || (this->actor.textId == 0x1659)) && (this->unk1B4 <= sp30) && (this->unk1A0 != 3)) {
        temp_t0 = this->unk1A4 + 1;
        this->unk1A4 = temp_t0;
        if (temp_t0 >= 2) {
            this->unk1A4 = 0;
            func_8096F800(this, 3);
        }
    }
    if ((this->unk1A8 == 2) && (this->unk196 == 2)) {
        func_800B7298(globalCtx, (Actor *) this, 0x49U);
        this->unk1A8 = 0;
    }
    if ((this->unk1AC == func_80152498(&globalCtx->msgCtx)) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        if (this->unk1AC == 5) {
            if ((this->unk196 == 2) && (this->actor.textId == 0x1647)) {
                func_800B7298(globalCtx, (Actor *) this, 6U);
            }
            temp_v1 = this->actor.textId;
            if (temp_v1 == 0x1653) {
                if (this->unk1A0 != 1) {
                    sp2C = gSaveContext.day;
                    func_8096F800(this, 1);
                }
                if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
                    this->actor.textId = 0x164F;
                } else if (gSaveContext.isNight != 0) {
                    this->actor.textId = 0x164E;
                } else {
                    this->actor.textId = 0x1645;
                }
                func_80151938(globalCtx, this->actor.textId);
                return;
            }
            if ((temp_v1 == 0x165D) || (temp_v1 == 0x165F) || (temp_v1 == 0x1660) || (temp_v1 == 0x1652)) {
                func_800B7298(globalCtx, (Actor *) this, 4U);
                if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                    ActorCutscene_Stop(0x7C);
                    ActorCutscene_SetIntentToPlay(this->unk1AE);
                    this->actionFunc = func_80970F20;
                    return;
                }
                if (ActorCutscene_GetCanPlayNext(this->unk1AE) == 0) {
                    ActorCutscene_SetIntentToPlay(this->unk1AE);
                    this->actionFunc = func_80970F20;
                    return;
                }
                ActorCutscene_StartAndSetUnkLinkFields(this->unk1AE, (Actor *) this);
                this->unk208 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
                this->actionFunc = func_80970F20;
                return;
            }
            if ((temp_v1 == 0x1645) || (temp_v1 == 0x164E)) {
                this->actor.textId = 0x1650;
                if (this->unk1A0 != 1) {
                    func_8096F800(this, 1);
                }
                this->unk1AC = 4;
                goto block_87;
            }
            if (temp_v1 == 0x1644) {
                if (this->unk1A0 != 1) {
                    func_8096F800(this, 1);
                }
                if (gSaveContext.isNight != 0) {
                    this->actor.textId = 0x164E;
                } else {
                    this->actor.textId = 0x1645;
                }
                goto block_87;
            }
            if (temp_v1 == 0x164F) {
                if (this->unk1A0 != 1) {
                    func_8096F800(this, 1);
                }
                this->actor.textId = 0x165A;
                goto block_87;
            }
            if (temp_v1 == 0x1651) {
                if (this->unk1A0 != 1) {
                    func_8096F800(this, 1);
                }
                this->actor.textId = 0x1654;
                goto block_87;
            }
            if (temp_v1 == 0x1654) {
                this->actor.textId = 0x1655;
                goto block_87;
            }
            if (temp_v1 == 0x1655) {
                this->actor.textId = 0x1656;
                this->unk1AC = 4;
                goto block_87;
            }
            if (temp_v1 == 0x1658) {
                this->actor.textId = 0x1659;
                goto block_87;
            }
            if (temp_v1 == 0x165A) {
                this->actor.textId = 0x165B;
                goto block_87;
            }
            if (temp_v1 == 0x165B) {
                this->actor.textId = 0x165C;
                this->unk1AC = 4;
                goto block_87;
            }
            if (temp_v1 == 0x165E) {
                this->actor.textId = 0x165F;
                goto block_87;
            }
            func_8096FDE8(this);
            return;
        }
        this->unk1AC = 5;
        if (globalCtx->msgCtx.choiceIndex == 1) {
            func_8019F208();
            temp_v1_2 = this->actor.textId;
            if (temp_v1_2 == 0x1656) {
                this->actor.textId = 0x1658;
            } else if (temp_v1_2 == 0x165C) {
                this->actor.textId = 0x165E;
            } else if ((sp34 == 3) && (gSaveContext.isNight != 0)) {
                this->actor.textId = 0x164F;
            } else {
                this->actor.textId = 0x1652;
            }
            func_8096F800(this, 2);
        } else {
            func_8019F230();
            temp_v1_3 = this->actor.textId;
            if (temp_v1_3 == 0x1656) {
                this->actor.textId = 0x1657;
            } else if (temp_v1_3 == 0x165C) {
                this->actor.textId = 0x165D;
            } else {
                this->actor.textId = 0x1651;
            }
            this->unk1A4 = 0;
            if (this->unk1A0 != 0) {
                func_8096F800(this, 0);
            }
        }
block_87:
        func_80151938(globalCtx, this->actor.textId);
        /* Duplicate return node #88. Try simplifying control flow for better match */
    }
}

void func_809705E4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a2->textId = 0x1646;
    arg0 = temp_a2;
    func_801518B0(arg1, 0x1646U & 0xFFFF, temp_a2);
    arg0->unk208 = 0;
    arg0->unk20C = 0.0f;
    arg0->unk210 = 60.0f;
    func_8096F800((EnKakasi *) arg0, 4);
    arg0->unk196 = 2;
    arg0->unk148 = func_80970658;
}

void func_80970658(EnKakasi *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_80152434(globalCtx, 0x35U);
        this->unk1A8 = 0;
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(this->unk1AE);
            this->actionFunc = func_80970740;
            return;
        }
        if (ActorCutscene_GetCanPlayNext(this->unk1AE) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk1AE);
            this->actionFunc = func_80970740;
            return;
        }
        this->unk1A8 = 1;
        ActorCutscene_StartAndSetUnkLinkFields(this->unk1AE, (Actor *) this);
        this->unk208 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
        Math_Vec3f_Copy(&this->unk22C, (Vec3f *) &this->actor.home);
        this->actionFunc = func_80970740;
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80970740(EnKakasi *this, GlobalContext *globalCtx) {
    ? sp3C;
    Vec3f *sp38;
    PosRot *sp34;
    Vec3f *sp30;
    PosRot *temp_a0;
    Vec3f *temp_a1;
    s32 temp_v1;
    u16 temp_v0_2;
    void *temp_v0;
    s32 phi_v1;

    func_8096FA18(this, globalCtx);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.home.rot.y, 1, 0xBB8, (s16) 0);
    temp_v1 = this->unk1A8;
    phi_v1 = temp_v1;
    if (temp_v1 == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(this->unk1AE);
            return;
        }
        if (ActorCutscene_GetCanPlayNext(this->unk1AE) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk1AE);
            return;
        }
        ActorCutscene_StartAndSetUnkLinkFields(this->unk1AE, (Actor *) this);
        this->unk208 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
        Math_Vec3f_Copy(&this->unk22C, (Vec3f *) &this->actor.home);
        this->unk1A8 = 1;
        phi_v1 = 1;
        goto block_6;
    }
block_6:
    if (phi_v1 == 1) {
        this->unk22C.y = this->actor.home.pos.y + 50.0f;
        temp_v0 = (this->unk190 * 0xC) + &D_80971DCC;
        temp_a1 = &this->unk238;
        this->unk238.x = temp_v0->unk0;
        this->unk23C = temp_v0->unk4;
        this->unk240 = temp_v0->unk8;
        sp30 = temp_a1;
        sp34 = &this->actor.home;
        sp38 = &this->unk22C;
        Math_Vec3f_Copy((Vec3f *) &sp3C, temp_a1);
        OLib_DbCameraVec3fSum(sp34, (Vec3f *) &sp3C, sp30, 1);
        temp_a0 = &this->unk244;
        sp34 = temp_a0;
        Math_Vec3f_Copy((Vec3f *) temp_a0, sp38);
        Math_Vec3f_Copy(&this->unk214, temp_a1);
        Math_Vec3f_Copy(&this->unk220, (Vec3f *) sp34);
        func_8096FAAC(this, globalCtx);
        func_8096FBB8(this, globalCtx);
        temp_v0_2 = globalCtx->msgCtx.unk1202A;
        if (temp_v0_2 == 4) {
            this->unk190 = 0;
            this->unk1A4 = 0;
            ActorCutscene_Stop(this->unk1AE);
            Audio_PlayActorSound2((Actor *) this, 0x3A3FU);
            this->unk196 = 2;
            this->unk208 = 0;
            this->actor.textId = 0x1647;
            this->unk1A8 = (s32) 2;
            this->unk1AC = 5;
            func_8096F800(this, 0);
            this->actionFunc = func_8097006C;
            return;
        }
        if (temp_v0_2 == 3) {
            this->unk192 = 0x1E;
            this->unk14C.animPlaybackSpeed = 2.0f;
            func_8096F800(this, 2);
            this->actionFunc = func_80970978;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void func_80970978(EnKakasi *this, GlobalContext *globalCtx) {
    f32 sp1C;
    s16 temp_v0;
    s16 phi_v0;

    temp_v0 = this->unk192;
    phi_v0 = temp_v0;
    if ((temp_v0 == 0) && (this->unk1A0 != 4)) {
        sp1C = this->unk14C.animCurrentFrame;
        func_8096F800((EnKakasi *)4);
        this->unk14C.animPlaybackSpeed = 2.0f;
        phi_v0 = this->unk192;
    }
    if ((phi_v0 == 0) && (this->unk1A0 == 4) && (this->unk1B4 <= this->unk14C.animCurrentFrame)) {
        func_80970A10(this, globalCtx);
    }
}

void func_80970A10(EnKakasi *arg0, GlobalContext *arg1) {
    s16 temp_a0;

    temp_a0 = arg0->unk1AE;
    arg0 = arg0;
    ActorCutscene_Stop(temp_a0);
    arg1->msgCtx.unk1202A = 4;
    arg0->unk190 = 0;
    arg0->unk1A4 = 0;
    func_8096F800(arg0, 2);
    arg0->unk208 = 0;
    arg0->unk1AC = 5;
    arg0->unk1A8 = 1;
    arg0->actionFunc = func_80970A9C;
    arg0->unk20C = 0;
    arg0->unk210 = 60.0f;
}

void func_80970A9C(EnKakasi *this, GlobalContext *globalCtx) {
    Actor *sp44;
    f32 sp40;
    ? sp34;
    PosRot *sp30;
    Vec3f *sp2C;
    Vec3f *temp_a1;
    s32 temp_t4;
    s32 temp_t9;
    u16 temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;
    u16 phi_a1;

    sp44 = globalCtx->actorCtx.actorList[2].first;
    sp40 = this->unk14C.animCurrentFrame;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.home.rot.y, 1, 0xBB8, (s16) 0);
    Math_SmoothStepToS(&sp44->shape.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 5, 0x3E8, (s16) 0);
    if (this->unk190 == 0) {
        func_801477B4(globalCtx);
        func_800B7298(globalCtx, (Actor *) this, 0x56U);
        this->actor.textId = 0x1648;
        func_801518B0(globalCtx, 0x1648U & 0xFFFF, (Actor *) this);
        this->unk1A8 = 0;
        this->unk190 = 1;
    }
    if ((this->actor.textId == 0x1648) && (this->unk1A0 == 2) && (this->unk1B4 <= sp40)) {
        temp_t4 = this->unk1A4 + 1;
        this->unk1A4 = temp_t4;
        if (temp_t4 >= 2) {
            func_8096F800(this, 0);
        }
    }
    if ((this->actor.textId == 0x164B) && (this->unk1A0 == 0) && (this->unk1B4 <= sp40)) {
        temp_t9 = this->unk1A4 + 1;
        this->unk1A4 = temp_t9;
        if (temp_t9 >= 2) {
            func_8096F800(this, 3);
        }
    }
    if (this->unk1A8 == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(this->unk1AE);
            return;
        }
        if (ActorCutscene_GetCanPlayNext(this->unk1AE) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk1AE);
            return;
        }
        Math_Vec3f_Copy(&this->unk22C, (Vec3f *) &this->actor.home);
        ActorCutscene_StartAndSetUnkLinkFields(this->unk1AE, (Actor *) this);
        this->unk208 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
        func_800B7298(globalCtx, (Actor *) this, 0x56U);
        this->unk1A8 = 1;
        goto block_18;
    }
block_18:
    if (this->unk208 != 0) {
        this->unk22C.y = this->actor.home.pos.y + 50.0f;
        sp30 = &this->actor.home;
        func_8096FA18(this, globalCtx);
        temp_v0 = (this->unk190 * 0xC) + &D_80971FA0;
        temp_a1 = &this->unk238;
        this->unk238.x = temp_v0->unk0;
        this->unk238.y = temp_v0->unk4;
        this->unk238.z = temp_v0->unk8;
        sp2C = temp_a1;
        Math_Vec3f_Copy((Vec3f *) &sp34, temp_a1);
        OLib_DbCameraVec3fSum(sp30, (Vec3f *) &sp34, sp2C, 1);
        temp_v0_2 = (this->unk190 * 0xC) + &D_80971FE8;
        this->unk244.pos.x = temp_v0_2->unk0 + this->unk22C.x;
        this->unk244.pos.y = temp_v0_2->unk4 + this->unk22C.y;
        this->unk244.pos.z = temp_v0_2->unk8 + this->unk22C.z;
        Math_Vec3f_Copy(&this->unk214, temp_a1);
        Math_Vec3f_Copy(&this->unk220, (Vec3f *) &this->unk244);
    }
    func_8096FAAC(this, globalCtx);
    if ((this->unk1A8 != 0) && (this->unk1AC == func_80152498(&globalCtx->msgCtx)) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        if (this->unk1AC == 5) {
            this->unk190 += 1;
            if ((s32) this->unk190 >= 6) {
                this->unk190 = 5;
            }
            temp_a1_2 = this->actor.textId;
            phi_a1 = temp_a1_2;
            if (temp_a1_2 == 0x1648) {
                func_800B7298(globalCtx, (Actor *) this, 7U);
                this->actor.textId = 0x1649;
                if (this->unk1A0 != 0) {
                    func_8096F800(this, 0);
                }
                phi_a1 = this->actor.textId;
                goto block_42;
            }
            if (temp_a1_2 == 0x1649) {
                this->actor.textId = 0x1660;
                this->unk1AC = 4;
                phi_a1 = 0x1660U & 0xFFFF;
                goto block_42;
            }
            if (temp_a1_2 == 0x164A) {
                this->actor.textId = 0x164B;
                phi_a1 = 0x164BU & 0xFFFF;
                goto block_42;
            }
            if (temp_a1_2 == 0x164B) {
                this->actor.textId = 0x164C;
                func_8096F800(this, 4, 7U);
                phi_a1 = this->actor.textId;
                goto block_42;
            }
            if ((temp_a1_2 == 0x164C) || (temp_a1_2 == 0x1661)) {
                func_80971440(this, temp_a1_2, 7U);
                return;
            }
            goto block_42;
        }
        this->unk1AC = 5;
        if (globalCtx->msgCtx.choiceIndex == 1) {
            func_8019F208();
            this->actor.textId = 0x164A;
            phi_a1 = 0x164AU & 0xFFFF;
        } else {
            func_8019F230();
            this->actor.textId = 0x1661;
            phi_a1 = 0x1661U & 0xFFFF;
        }
block_42:
        func_80151938(globalCtx, phi_a1);
        /* Duplicate return node #43. Try simplifying control flow for better match */
    }
}

void func_80970F20(EnKakasi *this, GlobalContext *globalCtx) {
    s32 sp24;

    sp24 = gSaveContext.day;
    this->unk196 = 3;
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(this->unk1AE);
        return;
    }
    if (ActorCutscene_GetCanPlayNext(this->unk1AE) == 0) {
        ActorCutscene_SetIntentToPlay(this->unk1AE);
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields(this->unk1AE, (Actor *) this);
    this->unk208 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
    if ((sp24 == 3) && (gSaveContext.isNight != 0)) {
        func_80971440(this);
        return;
    }
    func_801A2BB8(0x3E);
    func_80970FF8(this);
}

void func_80970FF8(EnKakasi *arg0) {
    arg0->unk190 = 0;
    arg0->unk1A4 = 0;
    arg0->unk20C = 0;
    arg0->unk210 = 60.0f;
    func_8096F800(arg0, 4);
    Math_Vec3f_Copy(&arg0->unk22C, (Vec3f *) &arg0->actor.home);
    func_8016566C(0xB4);
    arg0->actionFunc = func_80971064;
}

void func_80971064(EnKakasi *this, GlobalContext *globalCtx) {
    f32 sp54;
    ? sp48;
    Actor *sp44;
    s16 *sp3C;
    Vec3f *sp34;
    Actor *temp_v1_4;
    Vec3f *temp_a1;
    s16 *temp_a0;
    s16 temp_v1_2;
    s16 temp_v1_3;
    u16 temp_v1_5;
    void *temp_v0;
    void *temp_v1;

    sp54 = this->unk14C.animCurrentFrame;
    func_8096FA18(this, globalCtx);
    temp_a0 = &this->actor.shape.rot.y;
    sp3C = temp_a0;
    Math_SmoothStepToS(temp_a0, this->actor.home.rot.y, 1, 0xBB8, (s16) 0);
    this->unk22C.y = this->actor.home.pos.y + 50.0f;
    temp_v1 = (this->unk190 * 0xC) + &D_80971E38;
    temp_a1 = &this->unk238;
    this->unk238.x = temp_v1->unk0;
    this->unk238.y = temp_v1->unk4;
    this->unk238.z = temp_v1->unk8;
    sp34 = temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp48, temp_a1);
    OLib_DbCameraVec3fSum(&this->actor.home, (Vec3f *) &sp48, sp34, 1);
    temp_v1_2 = this->unk190;
    temp_v0 = (temp_v1_2 * 0xC) + &D_80971EEC;
    this->unk244.pos.x = temp_v0->unk0 + this->unk22C.x;
    this->unk244.pos.y = temp_v0->unk4 + this->unk22C.y;
    this->unk244.pos.z = temp_v0->unk8 + this->unk22C.z;
    if ((temp_v1_2 != 6) && (temp_v1_2 != 7)) {
        Math_Vec3f_Copy(&this->unk214, sp34);
        Math_Vec3f_Copy(&this->unk220, (Vec3f *) &this->unk244);
    }
    if (((s32) this->unk190 >= 7) && ((s32) this->unk190 != 0xE)) {
        this->actor.shape.rot.y += 0x800;
    }
    func_8096FAAC(this, globalCtx);
    temp_v1_3 = this->unk190;
    switch (temp_v1_3) {
    case 0:
        this->unk204 = 0x28;
        this->unk190 = temp_v1_3 + 1;
        return;
    case 1:
        if ((this->unk204 == 0) && (this->unk1B4 <= sp54)) {
            this->unk204 = 0x14;
            this->unk190 = temp_v1_3 + 1;
            func_8096F800(this, 1);
            return;
        }
    default:
        return;
    case 2:
        if (this->unk204 == 0) {
            this->unk204 = 0x14;
            this->unk190 = temp_v1_3 + 1;
            return;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return;
    case 3:
        if (this->unk204 == 0) {
            this->unk204 = 0x14;
            this->unk190 = temp_v1_3 + 1;
            return;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return;
    case 4:
        if (this->unk204 == 0) {
            this->unk204 = 0x14;
            this->unk190 = temp_v1_3 + 1;
            return;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return;
    case 5:
        if (this->unk204 == 0) {
            this->unk204 = 0xF;
            this->unk190 = temp_v1_3 + 1;
            return;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return;
    case 6:
        if (this->unk204 == 0) {
            this->unk204 = 0xF;
            this->unk190 = temp_v1_3 + 1;
            return;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return;
    case 7:
        if (this->unk204 == 0) {
            this->unk204 = 0xA;
            this->unk190 = temp_v1_3 + 1;
            return;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        if ((this->unk204 == 0) && (this->unk190 = temp_v1_3 + 1, this->unk204 = 0xA, (this->unk190 == 0xE))) {
            func_800B7298(globalCtx, (Actor *) this, 0x49U);
            func_80165690();
            this->unk204 = 0x14;
            return;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return;
    case 14:
        Math_SmoothStepToS(sp3C, this->actor.yawTowardsPlayer, 5, 0x3E8, (s16) 0);
        if (this->unk204 == 0) {
            temp_v1_4 = globalCtx->actorCtx.actorList[2].first;
            sp44 = temp_v1_4;
            func_80169DCC(globalCtx, 0, Entrance_CreateIndexFromSpawn(0) & 0xFFFF, (s32) temp_v1_4->unk3CE, 0xBFF, temp_v1_4 + 0x3C0, (s16) (s32) temp_v1_4->unk3CC);
            func_80169EFC(globalCtx);
            temp_v1_5 = gSaveContext.time;
            if (((s32) temp_v1_5 >= 0xC001) || ((s32) temp_v1_5 < 0x4000)) {
                gSaveContext.time = 0x4000;
                gSaveContext.respawnFlag = -4;
                gSaveContext.eventInf[2] |= 0x80;
            } else {
                gSaveContext.time = 0xC000;
                gSaveContext.respawnFlag = -8;
            }
            gSaveContext.weekEventReg[83] |= 1;
            this->unk190 = 0;
            this->actionFunc = func_80971430;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return;
    }
}

void func_80971430(EnKakasi *this, GlobalContext *globalCtx) {

}

void func_80971440(EnKakasi *arg0) {
    EnKakasi *temp_a0;
    EnKakasi *temp_a2;
    EnKakasi *phi_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    phi_a2 = temp_a2;
    if (temp_a2->unk1A0 != 1) {
        arg0 = temp_a2;
        func_8096F800(temp_a0, 1, (u8) temp_a2);
        phi_a2 = arg0;
    }
    phi_a2->unk190 = 0;
    phi_a2->unk1A4 = 0;
    phi_a2->unk210 = 60.0f;
    phi_a2->unk20C = 60.0f;
    arg0 = phi_a2;
    Math_Vec3f_Copy(&phi_a2->unk22C, (Vec3f *) &phi_a2->actor.home);
    arg0->unk196 = 4;
    arg0->actionFunc = func_809714BC;
}

void func_809714BC(EnKakasi *this, GlobalContext *globalCtx) {
    ? sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    Vec3f *sp38;
    PosRot *temp_a1_2;
    Vec3f *temp_a1;
    s32 temp_v0;

    if (this->unk208 != 0) {
        temp_a1 = &this->unk238;
        this->unk22C.y = this->actor.home.pos.y + 50.0f;
        this->unk238.x = D_80972030.unk0;
        this->unk238.y = D_80972030.unk4;
        this->unk238.z = D_80972030.unk8;
        sp38 = temp_a1;
        Math_Vec3f_Copy((Vec3f *) &sp4C, temp_a1);
        OLib_DbCameraVec3fSum(&this->actor.home, (Vec3f *) &sp4C, sp38, 1);
        this->unk244.pos.x = D_8097203C.unk0 + this->unk22C.x;
        this->unk244.pos.y = D_8097203C.unk4 + this->unk22C.y;
        this->unk244.pos.z = D_8097203C.unk8 + this->unk22C.z;
        Math_Vec3f_Copy(&this->unk214, temp_a1);
        Math_Vec3f_Copy(&this->unk220, (Vec3f *) &this->unk244);
        func_8096FAAC(this, globalCtx);
    }
    temp_v0 = this->unk1A4;
    if (temp_v0 < 0xF) {
        this->unk1A4 = temp_v0 + 1;
        return;
    }
    this->actor.shape.rot.y += 0x3000;
    Math_SmoothStepToS(&this->unk190, 0x1F4, 5, 0x32, (s16) 0);
    temp_a1_2 = &this->actor.world;
    if ((globalCtx->gameplayFrames & 3) == 0) {
        sp38 = (Vec3f *) temp_a1_2;
        Math_Vec3f_Copy((Vec3f *) &sp40, (Vec3f *) temp_a1_2);
        sp44 = this->actor.floorHeight;
        sp40 += randPlusMinusPoint5Scaled(2.0f);
        sp48 += randPlusMinusPoint5Scaled(2.0f);
        if (globalCtx->sceneNum == 0x34) {
            EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp40, NULL, NULL, (s16) 0, (s16) (s32) (randPlusMinusPoint5Scaled(100.0f) + 200.0f));
            Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &sp40, 0x32, 0x2817U);
        } else {
            func_800BBDAC(globalCtx, (Actor *) this, sp38, this->actor.shape.shadowScale - 20.0f, 5, 4.0f, (s16) 0xC8, (s16) 0xA, (u8) 1);
            Audio_PlayActorSound2((Actor *) this, 0x3987U);
        }
    }
    Math_ApproachF(&this->actor.shape.yOffset, -6000.0f, 0.5f, 200.0f);
    if (fabsf(this->actor.shape.yOffset + 6000.0f) < 10.0f) {
        gSaveContext.weekEventReg[79] |= 8;
        func_800B7298(globalCtx, (Actor *) this, 6U);
        ActorCutscene_Stop(this->unk1AE);
        this->unk194 = 2;
        this->unk250 = 80.0f;
        func_80971794(this);
    }
}

void func_80971794(EnKakasi *arg0) {
    arg0->actor.draw = NULL;
    arg0->actor.flags |= 0x8000000;
    arg0->unk196 = 5;
    arg0->actionFunc = func_809717D0;
    arg0->actor.shape.yOffset = -7000.0f;
}

void func_809717D0(EnKakasi *this, GlobalContext *globalCtx) {
    if (((gSaveContext.weekEventReg[79] & 8) != 0) && (this->actor.xzDistToPlayer < this->unk250) && ((gGameInfo->data[2401] != 0) || (globalCtx->msgCtx.unk1202A == 0xD))) {
        this->actor.flags &= 0xF7FFFFFF;
        globalCtx->msgCtx.unk1202A = 4;
        this->actionFunc = func_8097185C;
    }
}

void func_8097185C(EnKakasi *this, GlobalContext *globalCtx) {
    s32 sp24;
    void *sp20;
    void *temp_v1;
    s32 phi_a1;

    phi_a1 = 0;
    if (this->unk194 == 2) {
        phi_a1 = 1;
    }
    sp24 = phi_a1;
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        sp24 = phi_a1;
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay((this + (phi_a1 * 2))->unk1AE);
        return;
    }
    temp_v1 = this + (phi_a1 * 2);
    sp20 = temp_v1;
    if (ActorCutscene_GetCanPlayNext(temp_v1->unk1AE) == 0) {
        ActorCutscene_SetIntentToPlay(temp_v1->unk1AE);
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields(temp_v1->unk1AE, (Actor *) this);
    Audio_PlayActorSound2((Actor *) this, 0x3987U);
    this->actor.draw = EnKakasi_Draw;
    this->unk196 = 6;
    this->actionFunc = func_8097193C;
}

void func_8097193C(EnKakasi *this, GlobalContext *globalCtx) {
    this->actor.shape.rot.y += 0x3000;
    if (this->unk1A0 != 1) {
        func_8096F800(this, 1);
    }
    if (this->actor.shape.yOffset < -10.0f) {
        if ((globalCtx->gameplayFrames & 7) == 0) {
            func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale - 20.0f, 0xA, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
            Audio_PlayActorSound2((Actor *) this, 0x3987U);
        }
        Math_ApproachF(&this->actor.shape.yOffset, 0.0f, 0.5f, 200.0f);
        return;
    }
    func_80971A38(this);
}

void func_80971A38(EnKakasi *arg0) {
    arg0->actor.textId = 0x164D;
    arg0->unk196 = 7;
    arg0->actionFunc = func_80971A64;
    arg0->actor.shape.yOffset = 0.0f;
}

void func_80971A64(EnKakasi *this, GlobalContext *globalCtx) {
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, 0x3E8, (s16) 0);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80971AD4;
        return;
    }
    func_800B8614((Actor *) this, globalCtx, 70.0f);
}

void func_80971AD4(EnKakasi *this, GlobalContext *globalCtx) {
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, 0x3E8, (s16) 0);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        func_80971A38(this);
    }
}

void EnKakasi_Update(EnKakasi *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    s16 *sp28;
    CollisionCheckContext *temp_a1_2;
    s16 *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    EnKakasi *this = (EnKakasi *) thisx;

    SkelAnime_FrameUpdateMatrix(&this->unk14C);
    if (this->actor.draw != 0) {
        func_8096F8D8((Actor *) this);
    }
    temp_v0 = this->unk192;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (temp_v0 != 0) {
        this->unk192 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk204;
    if (temp_v0_2 != 0) {
        this->unk204 = temp_v0_2 - 1;
    }
    if (this->unk196 != 5) {
        if ((this->unk1BC != 0.0f) || (this->unk1C4 != 0.0f)) {
            Math_Vec3f_Copy((Vec3f *) &this->actor.focus, (Vec3f *) &this->unk1BC);
            this->actor.focus.pos.y += 10.0f;
            if (this->unk208 == 0) {
                Math_Vec3s_Copy(&this->actor.focus.rot, &this->actor.world.rot);
            } else {
                Math_Vec3s_Copy(&this->actor.focus.rot, &this->actor.home.rot);
            }
        }
    } else {
        Actor_SetHeight((Actor *) this, this->unk1B8);
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 50.0f, 100.0f, 0x1CU);
    temp_a1 = &this->unk244.rot.z;
    if (this->actor.draw != 0) {
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, (ColliderCylinder *) temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp2C = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp28);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp28);
    }
}

void func_80971CE0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 4) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x1BC);
    }
}

void EnKakasi_Draw(EnKakasi *this, GlobalContext *globalCtx) {
    EnKakasi *this = (EnKakasi *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk14C.skeleton, this->unk14C.limbDrawTbl, (s32) this->unk14C.dListCount, NULL, func_80971CE0, (Actor *) this);
}
