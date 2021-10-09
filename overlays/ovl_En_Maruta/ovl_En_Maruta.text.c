typedef struct EnMaruta {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnMaruta *, GlobalContext *);
    /* 0x148 */ ColliderCylinder unk_148;           /* inferred */
    /* 0x194 */ f32 unk_194;                        /* inferred */
    /* 0x198 */ f32 unk_198;                        /* inferred */
    /* 0x19C */ f32 unk_19C;                        /* inferred */
    /* 0x1A0 */ s32 unk_1A0;                        /* inferred */
    /* 0x1A4 */ Vec3f unk_1A4;                      /* inferred */
    /* 0x1B0 */ ? unk_1B0;                          /* inferred */
    /* 0x1B0 */ char pad_1B0[0xC];
    /* 0x1BC */ ? unk_1BC;                          /* inferred */
    /* 0x1BC */ char pad_1BC[0xC];
    /* 0x1C8 */ ? unk_1C8;                          /* inferred */
    /* 0x1C8 */ char pad_1C8[0x3C];
    /* 0x204 */ Vec3f unk_204;                      /* inferred */
    /* 0x210 */ s32 unk_210;                        /* inferred */
    /* 0x214 */ s32 unk_214;                        /* inferred */
    /* 0x218 */ s16 unk_218;                        /* inferred */
    /* 0x21A */ s16 unk_21A;                        /* inferred */
    /* 0x21C */ s16 unk_21C;                        /* inferred */
    /* 0x21E */ s16 unk_21E;                        /* inferred */
    /* 0x220 */ s16 unk_220;                        /* inferred */
    /* 0x222 */ char pad_222[0x2];
} EnMaruta;                                         /* size = 0x224 */

struct _mips2c_stack_EnMaruta_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMaruta_Draw {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EnMaruta_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnMaruta_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B372B8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B372CC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B37364 {};              /* size 0x0 */

struct _mips2c_stack_func_80B3738C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B373F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B37428 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B374B8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B374FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B37590 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0xE];
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B37950 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B37998 {};              /* size 0x0 */

struct _mips2c_stack_func_80B379C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B37A14 {};              /* size 0x0 */

struct _mips2c_stack_func_80B37A64 {};              /* size 0x0 */

struct _mips2c_stack_func_80B37A8C {};              /* size 0x0 */

struct _mips2c_stack_func_80B37AA0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B37B78 {};              /* size 0x0 */

struct _mips2c_stack_func_80B37C04 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B37C60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B37CA0 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ CollisionCheckContext *sp40;         /* inferred */
    /* 0x44 */ ColliderCylinder *sp44;              /* inferred */
    /* 0x48 */ void (*sp48)(EnMaruta *, GlobalContext *); /* inferred */
    /* 0x4C */ char pad_4C[0x8];                    /* maybe part of sp48[3]? */
    /* 0x54 */ void *sp54;                          /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B37EC0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B38028 {};              /* size 0x0 */

struct _mips2c_stack_func_80B38060 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B3828C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B382E4 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
};                                                  /* size = 0x90 */

void func_80B372B8(EnMaruta *arg0);                 /* static */
void func_80B37364(EnMaruta *arg0);                 /* static */
void func_80B373F4(void *arg0);                     /* static */
void func_80B374B8(Actor *arg0);                    /* static */
void func_80B37590(EnMaruta *arg0, GlobalContext *arg1); /* static */
void func_80B37998(Actor *arg0);                    /* static */
void func_80B37A14(EnMaruta *arg0, EnMaruta *);     /* static */
void func_80B37A8C(void *arg0);                     /* static */
s32 func_80B37B78(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B37C04(s16 *arg0, EnMaruta *);          /* static */
void func_80B37C60(EnMaruta *arg0);                 /* static */
void func_80B37CA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B37EC0(Actor *arg0, s32 arg1);          /* static */
f32 func_80B38028(? *arg0, void *arg1, ? *arg2);    /* static */
void func_80B38060(Actor *arg0, ? *arg1);           /* static */
void func_80B3828C(? *arg0, ? *arg1, s16 arg2, s16 arg3, s32 arg4); /* static */
void func_80B382E4(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32, s32); /* static */
extern ? D_06002EC0;
static ? D_80B386A0;                                /* unable to generate initializer */
static ? D_80B386C0;                                /* unable to generate initializer */
static ? D_80B386CC;                                /* unable to generate initializer */
static ? D_80B38754;                                /* unable to generate initializer */
static ? D_80B3876C;                                /* unable to generate initializer */
static ? D_80B38778;                                /* unable to generate initializer */
static ? D_80B38784;                                /* unable to generate initializer */
static ? D_80B38790;                                /* unable to generate initializer */
static ? D_80B3879C;                                /* unable to generate initializer */
static ? D_80B387A8;                                /* unable to generate initializer */
static ? D_80B387B4;                                /* unable to generate initializer */
static ? D_80B387C0;                                /* unable to generate initializer */
static ? D_80B387CC;                                /* unable to generate initializer */
static ? D_80B387E4;                                /* unable to generate initializer */
static ? D_80B38850;                                /* unable to generate initializer */
static ? D_80B388BC;                                /* unable to generate initializer */
static ? D_80B3891C;                                /* unable to generate initializer */
static ? D_80B3897C;                                /* unable to generate initializer */
static ? D_80B389DC;                                /* unable to generate initializer */
static ? D_80B38A3C;                                /* unable to generate initializer */
static ? D_80B38A9C;                                /* unable to generate initializer */
static ColliderCylinderInit D_80B38AFC = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
    {0xC, 0x41, 0, {0, 0, 0}},
};
static DamageTable D_80B38B28 = {
    {
        0,
        0xF0,
        0,
        0,
        0,
        0,
        0xF2,
        0x10,
        0xF2,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0x10,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static CollisionCheckInfoInit2 D_80B38B48 = {8, 0, 0, 0, 0xFE};
static ? D_80B38B54;                                /* unable to generate initializer */
static s32 D_80B38B60 = 0xAA825AFF;
static s32 D_80B38B64 = 0x643C14FF;

void EnMaruta_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ? *temp_a1;
    ? *temp_a2;
    ? *temp_a3;
    ColliderCylinder *temp_a1_2;
    Vec3f *temp_a0;
    s32 temp_v1;
    Vec3f *phi_a0;
    ? *phi_a1;
    ? *phi_a2;
    ? *phi_a3;
    s32 phi_v1;
    EnMaruta *this = (EnMaruta *) thisx;

    Actor_SetScale((Actor *) this, 0.1f);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.targetMode = 6;
    this->actor.focus.pos.y += 50.0f;
    this->actor.colChkInfo.health = 1;
    this->actor.world.pos.y -= 4.0f;
    this->actor.home.pos.y -= 4.0f;
    this->unk_210 = (s32) (this->actor.params & 0xFF00) >> 8;
    this->unk_218 = 0;
    this->unk_21A = 0;
    this->unk_1A0 = 0;
    this->unk_21C = 0;
    this->unk_194 = 0.0f;
    this->unk_198 = 0.0f;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->unk_19C = 1.0f;
    phi_a0 = &this->unk_1A4;
    phi_a1 = &this->unk_1B0;
    phi_a2 = &this->unk_1BC;
    phi_a3 = &this->unk_1C8;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 4;
        temp_a0 = phi_a0 + 0x30;
        temp_a0->unk_-30 = (s32) D_80B38B54.unk_0;
        temp_a1 = phi_a1 + 0x30;
        temp_a2 = phi_a2 + 0x30;
        temp_a0->unk_-2C = (s32) D_80B38B54.unk_4;
        temp_a3 = phi_a3 + 0x30;
        temp_a0->unk_-28 = (s32) D_80B38B54.unk_8;
        temp_a1->unk_-30 = (s32) D_80B38B54.unk_0;
        temp_a1->unk_-2C = (s32) D_80B38B54.unk_4;
        temp_a1->unk_-28 = (s32) D_80B38B54.unk_8;
        temp_a2->unk_-30 = (s32) D_80B38B54.unk_0;
        temp_a2->unk_-2C = (s32) D_80B38B54.unk_4;
        temp_a2->unk_-28 = (s32) D_80B38B54.unk_8;
        temp_a3->unk_-30 = (s32) D_80B38B54.unk_0;
        temp_a3->unk_-2C = (s32) D_80B38B54.unk_4;
        temp_a3->unk_-28 = (s32) D_80B38B54.unk_8;
        phi_a0 = temp_a0;
        phi_a1 = temp_a1;
        phi_a2 = temp_a2;
        phi_a3 = temp_a3;
        phi_v1 = temp_v1;
    } while (temp_v1 != 8);
    this->unk_214 = -1;
    this->unk_220 = 0;
    if (this->unk_210 == 0) {
        temp_a1_2 = &this->unk_148;
        sp20 = temp_a1_2;
        Collider_InitCylinder(globalCtx, temp_a1_2);
        Collider_SetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_80B38AFC);
        CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B38B28, &D_80B38B48);
    }
    if (this->unk_210 == 0) {
        if ((this->actor.params & 0xFF) == 0xFF) {
            func_80B372B8(this);
            return;
        }
        func_80B37364(this);
        return;
    }
    func_80B37590(this, globalCtx);
}

void EnMaruta_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMaruta *this = (EnMaruta *) thisx;
    if (this->unk_210 == 0) {
        Collider_DestroyCylinder(globalCtx, &this->unk_148);
    }
}

void func_80B372B8(EnMaruta *arg0) {
    arg0->actionFunc = func_80B372CC;
}

void func_80B372CC(EnMaruta *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v1;
    void *temp_v0_2;

    temp_v0 = this->actor.shape.rot.y;
    temp_v1 = this->actor.yawTowardsPlayer - temp_v0;
    if ((s32) temp_v1 >= 0x1556) {
        this->actor.shape.rot.y = temp_v0 + 0x2AAA;
    } else if ((s32) temp_v1 < -0x1555) {
        this->actor.shape.rot.y = temp_v0 - 0x2AAA;
    }
    if (this->unk_220 == 1) {
        func_80B373F4();
    }
    temp_v0_2 = this->actor.parent;
    if ((temp_v0_2 != 0) && (temp_v0_2->id == 0x1EF)) {
        temp_v0_2->unk_292 = (u8) this->actor.isTargeted;
    }
}

void func_80B37364(EnMaruta *arg0) {
    arg0->actionFunc = func_80B3738C;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y - 630.0f;
}

void func_80B3738C(EnMaruta *this, GlobalContext *globalCtx) {
    if (Math_SmoothStepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.4f, 100.0f, 10.0f) == 0.0f) {
        func_80B372B8(this);
    }
}

void func_80B373F4(void *arg0) {
    arg0->unk_159 = (u8) (arg0->unk_159 | 2);
    arg0->unk_144 = func_80B37428;
    arg0->unk_68 = 0.0f;
    arg0->unk_74 = -2.0f;
}

void func_80B37428(EnMaruta *this, GlobalContext *globalCtx) {
    Actor *temp_v1;
    f32 temp_f0;

    temp_f0 = this->actor.world.pos.y;
    if ((this->actor.floorHeight - 630.0f) < temp_f0) {
        this->actor.velocity.y += this->actor.gravity;
        this->actor.world.pos.y = temp_f0 + this->actor.velocity.y;
        return;
    }
    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->id == 0x1EF)) {
        temp_v1->unk_28C = (s16) (temp_v1->unk_28C - 1);
    }
    Actor_MarkForDeath((Actor *) this);
}

void func_80B374B8(Actor *arg0) {
    arg0->flags &= -2;
    if (func_80B37428 != arg0->unk_144) {
        arg0->unk_21E = 0;
        arg0->unk_144 = func_80B374FC;
        arg0->gravity = -2.0f;
    }
}

void func_80B374FC(EnMaruta *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;

    temp_v0 = this->unk_21E;
    if (temp_v0 == 0x28) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_f0 = this->actor.world.pos.y;
    if (((this->actor.floorHeight - 630.0f) < temp_f0) && ((s32) temp_v0 >= 0x1F)) {
        this->actor.velocity.y += this->actor.gravity;
        this->actor.world.pos.y = temp_f0 + this->actor.velocity.y;
    }
    this->unk_21E += 1;
}

void func_80B37590(EnMaruta *arg0, GlobalContext *arg1) {
    f32 sp48;
    s16 sp46;
    ? sp38;
    f32 sp34;
    s32 sp2C;
    s16 temp_a0;
    s32 temp_t6;
    void *temp_t6_2;
    void *temp_v0;

    temp_t6 = arg0->unk_210;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    arg0->unk_21E = 0;
    arg0->unk_21C = 0;
    arg0->actor.gravity = -2.0f;
    switch (temp_t6) {
    case 2:
        sp48.unk_0 = D_80B38754.unk_0;
        sp48.unk_4 = (s32) D_80B38754.unk_4;
        sp48.unk_8 = (s32) D_80B38754.unk_8;
        arg0->unk_1A0 = &D_80B388BC;
        break;
    case 4:
        if (temp_v0->unk_ADA == 8) {
            sp48.unk_0 = D_80B3876C.unk_0;
            sp48.unk_4 = (s32) D_80B3876C.unk_4;
            sp48.unk_8 = (s32) D_80B3876C.unk_8;
        } else {
            sp48.unk_0 = D_80B38778.unk_0;
            sp48.unk_4 = (s32) D_80B38778.unk_4;
            sp48.unk_8 = (s32) D_80B38778.unk_8;
        }
        arg0->unk_1A0 = &D_80B3891C;
        break;
    case 5:
        if (temp_v0->unk_ADA == 0) {
            sp48.unk_0 = D_80B38784.unk_0;
            sp48.unk_4 = (s32) D_80B38784.unk_4;
            sp48.unk_8 = (s32) D_80B38784.unk_8;
        } else {
            sp48.unk_0 = D_80B38790.unk_0;
            sp48.unk_4 = (s32) D_80B38790.unk_4;
            sp48.unk_8 = (s32) D_80B38790.unk_8;
        }
        arg0->unk_1A0 = &D_80B3897C;
        break;
    case 6:
        if (temp_v0->unk_ADA == 0) {
            sp48.unk_0 = D_80B3879C.unk_0;
            sp48.unk_4 = (s32) D_80B3879C.unk_4;
            sp48.unk_8 = (s32) D_80B3879C.unk_8;
        } else {
            sp48.unk_0 = D_80B387A8.unk_0;
            sp48.unk_4 = (s32) D_80B387A8.unk_4;
            sp48.unk_8 = (s32) D_80B387A8.unk_8;
        }
        arg0->unk_1A0 = &D_80B389DC;
        break;
    case 8:
        if (temp_v0->unk_ADA == 4) {
            sp48.unk_0 = D_80B387B4.unk_0;
            sp48.unk_4 = (s32) D_80B387B4.unk_4;
            sp48.unk_8 = (s32) D_80B387B4.unk_8;
        } else {
            sp48.unk_0 = D_80B387C0.unk_0;
            sp48.unk_4 = (s32) D_80B387C0.unk_4;
            sp48.unk_8 = (s32) D_80B387C0.unk_8;
        }
        arg0->unk_1A0 = &D_80B38A3C;
        break;
    case 7:
        sp48.unk_0 = D_80B387CC.unk_0;
        sp48.unk_4 = (s32) D_80B387CC.unk_4;
        sp48.unk_8 = (s32) D_80B387CC.unk_8;
        arg0->unk_1A0 = &D_80B38A9C;
        break;
    default:
        sp48.unk_0 = D_80B38B54.unk_0;
        sp48.unk_4 = (s32) D_80B38B54.unk_4;
        sp48.unk_8 = (s32) D_80B38B54.unk_8;
        break;
    }
    temp_a0 = arg0->actor.shape.rot.y;
    sp46 = temp_a0;
    sp34 = Math_CosS(temp_a0);
    arg0->actor.velocity.x = (Math_SinS(temp_a0) * sp50) + (sp48 * sp34);
    arg0->actor.velocity.y = sp4C;
    sp34 = Math_SinS(temp_a0);
    temp_t6_2 = (arg0->unk_210 * 0xC) + &D_80B38850;
    arg0->actor.velocity.z = (Math_CosS(temp_a0) * sp50) + (-sp48 * sp34);
    sp38.unk_0 = (s32) temp_t6_2->unk_0;
    sp38.unk_4 = (s32) temp_t6_2->unk_4;
    sp38.unk_8 = (s32) temp_t6_2->unk_8;
    sp2C = Rand_Next();
    func_80B3828C(&sp38, arg0 + 0x194, (s16) (sp2C & 0xFFF), (s16) (Rand_Next() & 0xFFF), 0);
    arg0->unk_21A = Rand_Next() & 0x7FF;
    if (arg0->unk_210 == 7) {
        arg0->unk_21A |= 0x3F;
    } else {
        arg0->unk_21A |= 0xFF;
    }
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_80B37950;
}

void func_80B37950(EnMaruta *this, GlobalContext *globalCtx) {
    this->unk_218 += this->unk_21A;
    this->actor.velocity.y += this->actor.gravity;
    func_80B37EC0();
    Actor_ApplyMovement((Actor *) this);
}

void func_80B37998(Actor *arg0) {
    arg0->unk_21E = 0;
    arg0->gravity = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->unk_21A = 0;
    arg0->unk_144 = func_80B379C0;
}

void func_80B379C0(EnMaruta *this, GlobalContext *globalCtx) {
    EnMaruta *temp_a0;
    EnMaruta *temp_a1;
    s16 temp_v0;
    EnMaruta *phi_a1;

    temp_a1 = this;
    temp_v0 = temp_a1->unk_21E;
    temp_a0 = temp_a1;
    phi_a1 = temp_a1;
    if (temp_v0 == 0x28) {
        this = temp_a1;
        func_80B37A14(temp_a0, temp_a1);
        phi_a1 = this;
    } else {
        temp_a1->unk_21E = temp_v0 + 1;
    }
    func_80B37C04(phi_a1 + 0x218, phi_a1);
}

void func_80B37A14(EnMaruta *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk_210;
    if (((temp_v1 == 5) || (temp_v1 == 6)) && ((s16) (arg0->unk_218 & 0x7FFF) == 0)) {
        arg0->unk_21E = 0x64;
    } else {
        arg0->unk_21E = 0;
    }
    arg0->actionFunc = func_80B37A64;
}

void func_80B37A64(EnMaruta *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_21E;
    if ((s32) temp_v0 >= 0x65) {
        this->actor.colChkInfo.health = 0;
        return;
    }
    this->unk_21E = temp_v0 + 1;
}

void func_80B37A8C(void *arg0) {
    arg0->unk_144 = func_80B37AA0;
}

void func_80B37AA0(EnMaruta *this, GlobalContext *globalCtx) {
    if (this->actor.scale.y == 0.0f) {
        if (this->actor.scale.x == 0.0f) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        Math_SmoothStepToF((f32 *) &this->actor.scale, 0.0f, 0.2f, 0.01f, 0.001f);
        Math_SmoothStepToF(&this->actor.scale.z, 0.0f, 0.2f, 0.01f, 0.001f);
        return;
    }
    Math_SmoothStepToF(&this->actor.scale.y, 0.0f, 0.2f, 0.003f, 0.001f);
}

s32 func_80B37B78(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s8 temp_v1_2;
    void *temp_v0;
    s32 phi_a0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v1 = (s16) (arg0->yawTowardsPlayer - 0x8000) - temp_v0->shape.rot.y;
    phi_a0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_a0 = -(s32) temp_v1;
    }
    if ((phi_a0 < 0x1555) || ((temp_v0->unk_ADB != 0) && ((temp_v1_2 = temp_v0->unk_ADA, (temp_v1_2 == 4)) || (temp_v1_2 == 6) || (temp_v1_2 == 0x1E) || (temp_v1_2 == 0x20)))) {
        return 1;
    }
    return 0;
}

void func_80B37C04(s16 *arg0) {
    s16 temp_a1;
    s16 temp_v0;
    s16 phi_a1;

    temp_v0 = *arg0;
    temp_a1 = temp_v0 & 0xC000;
    phi_a1 = temp_a1;
    if ((s32) (s16) (temp_v0 & 0x3FFF) >= 0x2001) {
        phi_a1 = (s16) (temp_a1 + 0x4000);
    }
    Math_SmoothStepToS(arg0, phi_a1, 1, 0xAAA, (s16) 0xB6);
}

void func_80B37C60(EnMaruta *arg0) {
    if ((func_80B37AA0 != arg0->actionFunc) && (arg0->actor.colChkInfo.health == 0)) {
        func_80B37A8C();
    }
}

void func_80B37CA0(Actor *arg0, GlobalContext *arg1) {
    void *sp54;
    void (*sp48)(EnMaruta *, GlobalContext *);
    ColliderCylinder *sp44;
    CollisionCheckContext *sp40;
    Actor *temp_v1_4;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 temp_v1;
    void *temp_t0;

    temp_t0 = arg1->actorCtx.actorList[2].first;
    sp48 = func_80B372CC;
    temp_v0 = arg0->unk_144;
    if ((func_80B372CC == temp_v0) || (func_80B3738C == temp_v0) || (func_80B374FC == temp_v0) || (func_80B37AA0 == temp_v0) || ((func_80B37428 == temp_v0) && !(arg0->world.pos.y < (arg0->floorHeight - 20.0f)))) {
        temp_v1 = arg0->unk_159;
        if (((temp_v1 & 2) != 0) && (sp48 == temp_v0) && (arg0->unk_159 = (u8) (temp_v1 & 0xFFFD), sp54 = temp_t0, Audio_PlayActorSound2(arg0, 0x1811U), temp_v1_2 = *(&D_80B386CC + (temp_t0->unk_ADA * 4)), (temp_v1_2 != 0))) {
            arg0->unk_210 = temp_v1_2;
            sp54 = temp_t0;
            Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x1F8, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) (s32) arg0->shape.rot.y, (s16) 0, ((temp_v1_2 + 1) << 8) & 0xFF00);
            temp_v1_3 = arg0->unk_210;
            arg0->world.rot.y = arg0->shape.rot.y;
            if ((temp_v1_3 == 5) || ((temp_v1_3 == 7) && (temp_t0->unk_ADA == 0xC))) {
                func_80B37590((EnMaruta *) arg0, arg1);
            } else {
                func_80B374B8(arg0);
            }
            temp_v1_4 = arg0->parent;
            if ((temp_v1_4 != 0) && (temp_v1_4->id == 0x1EF)) {
                temp_v1_4->unk_28E = 1;
                temp_v1_4->unk_28C = (s16) (temp_v1_4->unk_28C - 1);
                return;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        }
        temp_a1 = arg0 + 0x148;
        sp44 = temp_a1;
        Collider_UpdateCylinder(arg0, temp_a1);
        temp_a1_2 = &arg1->colChkCtx;
        sp40 = temp_a1_2;
        CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp44);
        if ((func_80B37B78(arg0, arg1) != 0) && (sp48 == arg0->unk_144)) {
            CollisionCheck_SetAC(arg1, sp40, (Collider *) sp44);
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

void func_80B37EC0(Actor *arg0, s32 arg1) {
    ? sp34;
    f32 temp_f0;
    f32 temp_f12;
    s32 temp_v0;
    Actor *phi_v1;
    s32 phi_a2;
    s32 phi_v0;

    sp34.unk_0 = (s32) arg0->unk_204;
    sp34.unk_4 = (f32) arg0->unk_208;
    sp34.unk_8 = (s32) arg0->unk_20C;
    phi_v1 = arg0;
    phi_v0 = 0;
    phi_a2 = -1;
    do {
        if (phi_v1->unk_1A8 < sp38) {
            sp34.unk_0 = (s32) phi_v1->unk_1A4;
            sp34.unk_4 = (f32) phi_v1->unk_1A8;
            sp34.unk_8 = (s32) phi_v1->unk_1AC;
            phi_a2 = phi_v0;
        }
        temp_v0 = phi_v0 + 1;
        arg0->unk_214 = phi_a2;
        phi_v1 += 0xC;
        phi_v0 = temp_v0;
    } while (temp_v0 != 8);
    temp_f12 = arg0->floorHeight;
    if (sp38 < temp_f12) {
        temp_f0 = arg0->gravity;
        arg0->unk_218 = (s16) (arg0->unk_218 - arg0->unk_21A);
        arg0->velocity.y -= temp_f0;
        arg0->velocity.x *= 0.6f;
        arg0->velocity.z *= 0.6f;
        arg0->world.pos.y += temp_f12 - sp38;
        if (arg0->velocity.y < -temp_f0) {
            func_80B382E4(temp_f12, 0.6f, arg1, subroutine_arg1, sp34.unk_4, sp34.unk_8);
            Audio_PlayActorSound2(arg0, 0x2957U);
            arg0->velocity.y *= -0.6f;
            func_80B38060(arg0, &sp34);
        }
    }
}

f32 func_80B38028(? *arg0, void *arg1, ? *arg2) {
    return (arg0->unk_8 * (arg2->unk_0 - arg1->unk_0)) - (arg0->unk_0 * (arg2->unk_8 - arg1->unk_8));
}

void func_80B38060(Actor *arg0, ? *arg1) {
    ? sp44;
    f32 temp_f0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v0;
    s32 temp_v1;
    f32 phi_f2;
    f32 phi_f2_2;
    s32 phi_v1;
    s32 phi_v1_2;

    func_80B3828C(arg0 + 0x194, &sp44, 0, arg0->shape.rot.y, 0);
    temp_f0 = func_80B38028(&sp44, arg0 + 0x204, arg1);
    temp_v0 = arg0->unk_210;
    if ((temp_v0 == 5) || (temp_v0 == 6)) {
        phi_f2 = 8.0f;
    } else if (temp_v0 == 4) {
        phi_f2 = 5.0f;
    } else {
        phi_f2 = 2.0f;
    }
    if ((temp_f0 < phi_f2) && (-phi_f2 < temp_f0)) {
        phi_f2_2 = 3.0f;
    } else {
        phi_f2_2 = 1.2f;
    }
    if (temp_f0 > 0.0f) {
        temp_v0_2 = arg0->unk_21A;
        if ((s32) temp_v0_2 > 0) {
            arg0->unk_21A = (s16) (s32) ((f32) temp_v0_2 * phi_f2_2);
        } else {
            arg0->unk_21A = (s16) (s32) ((f32) temp_v0_2 * -0.8f);
        }
    } else {
        temp_v0_3 = arg0->unk_21A;
        if ((s32) temp_v0_3 > 0) {
            arg0->unk_21A = (s16) (s32) ((f32) temp_v0_3 * -0.8f);
        } else {
            arg0->unk_21A = (s16) (s32) ((f32) temp_v0_3 * phi_f2_2);
        }
    }
    temp_v0_4 = arg0->unk_21A;
    phi_v1 = (s32) temp_v0_4;
    if ((s32) temp_v0_4 < 0) {
        phi_v1 = -(s32) temp_v0_4;
    }
    if ((phi_v1 < 0x38E) && ((temp_v1 = arg0->unk_218 & 0x3FFF, ((temp_v1 < 0x71C) != 0)) || (temp_v1 >= 0x38E4))) {
        arg0->unk_21C = (s16) (arg0->unk_21C + 1);
        arg0->gravity *= 0.8f;
        if (arg0->unk_21C == 2) {
            func_80B37998(arg0);
            return;
        }
        /* Duplicate return node #30. Try simplifying control flow for better match */
        return;
    }
    phi_v1_2 = (s32) temp_v0_4;
    if ((s32) temp_v0_4 < 0) {
        phi_v1_2 = -(s32) temp_v0_4;
    }
    if (phi_v1_2 >= 0x38F) {
        if ((s32) temp_v0_4 < 0) {
            arg0->unk_21A = -0x38E;
            return;
        }
        arg0->unk_21A = 0x38E;
        /* Duplicate return node #30. Try simplifying control flow for better match */
    }
}

void func_80B3828C(Vec3f *arg0, Vec3f *arg1, s16 arg2, s16 arg3, s16 arg4) {
    SysMatrix_StatePush();
    SysMatrix_InsertRotation(arg2, arg3, arg4, 0);
    SysMatrix_MultiplyVector3fByState(arg0, arg1);
    SysMatrix_StatePop();
}

void func_80B382E4(GlobalContext *arg0, f32 arg1, s32 arg2, s32 arg3) {
    f32 sp88;
    ? sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s32 sp68;
    s32 sp64;
    f32 *temp_s1;
    f32 *temp_s2;
    f32 temp_f2;
    f32 temp_f8;
    s32 temp_s0;
    s32 phi_s0;

    sp84.unk_0 = (s32) arg1.unk_0;
    sp84.unk_4 = (s32) arg1.unk_4;
    sp84.unk_8 = (s32) arg1.unk_8;
    sp68 = D_80B38B60;
    sp64 = D_80B38B64;
    temp_s2 = &sp6C;
    temp_s1 = &sp78;
    sp88 += 15.0f;
    sp70 = 0.0f;
    phi_s0 = 0;
    do {
        sp78 = Rand_Centered() * 10.0f;
        sp7C = 2.0f * Rand_ZeroOne();
        temp_f2 = Rand_Centered() * 10.0f;
        temp_f8 = -0.2f * temp_f2;
        sp80 = temp_f2;
        sp6C = -0.2f * sp78;
        sp74 = temp_f8;
        func_800B0EB0(arg0, (Vec3f *) &sp84, (Vec3f *) temp_s1, (Vec3f *) temp_s2, (Color_RGBA8 *) &sp68, (Color_RGBA8 *) &sp64, (s16) 0x3C, (s16) 0x14, (s16) 0xA);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xA);
}

void EnMaruta_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMaruta *this = (EnMaruta *) thisx;
    this->actionFunc(this, globalCtx);
    func_80B37CA0((Actor *) this, globalCtx);
    func_80B37C60(this);
}

void EnMaruta_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp50;
    Gfx *temp_s1;
    Gfx *temp_s1_2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_a0_2;
    s32 temp_s0_2;
    s32 temp_v0;
    void *temp_t3;
    s32 phi_a0;
    s32 phi_s0;
    Vec3f *phi_s1;
    EnMaruta *this = (EnMaruta *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = this->unk_210;
    if (temp_v0 == 0) {
        temp_s1 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_s1 + 8;
        temp_s1->words.w0 = 0xDA380003;
        temp_s1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w1 = (u32) &D_06002EC0;
        temp_v1->words.w0 = 0xDE000000;
        return;
    }
    temp_t3 = (temp_v0 * 0xC) + &D_80B387E4;
    sp50.unk_0 = temp_t3->unk_0;
    sp50.unk_4 = (s32) temp_t3->unk_4;
    sp50.unk_8 = (s32) temp_t3->unk_8;
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(sp50, sp54, sp58, 1);
    SysMatrix_InsertRotationAroundUnitVector_s(this->unk_218, (Vec3f *) &this->unk_194, 1);
    SysMatrix_InsertTranslation(-sp50, -sp54, -sp58, 1);
    temp_s1_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_s1_2 + 8;
    temp_s1_2->words.w0 = 0xDA380003;
    temp_s1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    phi_a0 = 0;
    do {
        if ((*(&D_80B386C0 + this->unk_210) & (1 << phi_a0)) != 0) {
            temp_v1_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_2 + 8;
            temp_v1_2->words.w0 = 0xDE000000;
            temp_v1_2->words.w1 = *((phi_a0 * 4) + &D_80B386A0);
        }
        temp_a0_2 = phi_a0 + 1;
        phi_a0 = temp_a0_2;
    } while (temp_a0_2 < 8);
    phi_s0 = 0;
    phi_s1 = &this->unk_1A4;
    if (this->unk_1A0 != 0) {
        do {
            SysMatrix_MultiplyVector3fByState(this->unk_1A0 + phi_s0, phi_s1);
            temp_s0_2 = phi_s0 + 0xC;
            phi_s0 = temp_s0_2;
            phi_s1 += 0xC;
        } while (temp_s0_2 != 0x60);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp50, &this->unk_204);
    }
    SysMatrix_StatePop();
}
