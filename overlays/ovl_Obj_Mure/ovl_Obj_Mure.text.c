typedef struct Actor {
    /* 0x000 */ s16 id;
    /* 0x002 */ u8 category;
    /* 0x003 */ s8 room;
    /* 0x004 */ u32 flags;
    /* 0x008 */ PosRot home;
    /* 0x01C */ s16 params;
    /* 0x01E */ s8 objBankIndex;
    /* 0x01F */ s8 targetMode;
    /* 0x020 */ s16 unk20;
    /* 0x022 */ char pad_22[0x2];
    /* 0x024 */ PosRot world;
    /* 0x038 */ s8 cutscene;
    /* 0x039 */ s8 unk39;
    /* 0x03A */ char pad_3A[0x2];                   /* maybe part of unk39[3]? */
    /* 0x03C */ PosRot focus;
    /* 0x050 */ u16 sfx;
    /* 0x052 */ char pad_52[0x1];
    /* 0x053 */ s8 unk_53;                          /* inferred */
    /* 0x054 */ f32 targetArrowOffset;
    /* 0x058 */ Vec3f scale;
    /* 0x064 */ Vec3f velocity;
    /* 0x070 */ f32 speedXZ;
    /* 0x074 */ f32 gravity;
    /* 0x078 */ f32 minVelocityY;
    /* 0x07C */ CollisionPoly *wallPoly;
    /* 0x080 */ CollisionPoly *floorPoly;
    /* 0x084 */ u8 wallBgId;
    /* 0x085 */ u8 floorBgId;
    /* 0x086 */ s16 wallYaw;
    /* 0x088 */ f32 floorHeight;
    /* 0x08C */ f32 yDistToWater;
    /* 0x090 */ u16 bgCheckFlags;
    /* 0x092 */ s16 yawTowardsPlayer;
    /* 0x094 */ f32 xyzDistToPlayerSq;
    /* 0x098 */ f32 xzDistToPlayer;
    /* 0x09C */ f32 yDistToPlayer;
    /* 0x0A0 */ CollisionCheckInfo colChkInfo;
    /* 0x0BC */ ActorShape shape;
    /* 0x0EC */ Vec3f projectedPos;
    /* 0x0F8 */ f32 projectedW;
    /* 0x0FC */ f32 uncullZoneForward;
    /* 0x100 */ f32 uncullZoneScale;
    /* 0x104 */ f32 uncullZoneDownward;
    /* 0x108 */ Vec3f prevPos;
    /* 0x114 */ u8 isTargeted;
    /* 0x115 */ u8 targetPriority;
    /* 0x116 */ u16 textId;
    /* 0x118 */ u16 freezeTimer;
    /* 0x11A */ u16 colorFilterParams;
    /* 0x11C */ u8 colorFilterTimer;
    /* 0x11D */ u8 isDrawn;
    /* 0x11E */ u8 dropFlag;
    /* 0x11F */ u8 hintId;
    /* 0x120 */ Actor *parent;
    /* 0x124 */ Actor *child;
    /* 0x128 */ Actor *prev;
    /* 0x12C */ Actor *next;
    /* 0x130 */ void (*init)(Actor *, GlobalContext *);
    /* 0x134 */ void (*destroy)(Actor *, GlobalContext *);
    /* 0x138 */ void (*update)(Actor *, GlobalContext *);
    /* 0x13C */ void (*draw)(Actor *, GlobalContext *);
    /* 0x140 */ ActorOverlay *overlayEntry;
} Actor;                                            /* size = 0x144 */

typedef struct ObjMure {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(ObjMure *, GlobalContext *);
    /* 0x148 */ s16 unk_148;                        /* inferred */
    /* 0x14A */ s16 unk_14A;                        /* inferred */
    /* 0x14C */ s16 unk_14C;                        /* inferred */
    /* 0x14E */ s16 unk_14E;                        /* inferred */
    /* 0x150 */ char pad_150[0x4C];                 /* maybe part of unk_14E[39]? */
    /* 0x19C */ s16 unk_19C;                        /* inferred */
    /* 0x19E */ char pad_19E[0x6];                  /* maybe part of unk_19C[4]? */
} ObjMure;                                          /* size = 0x1A4 */

struct _mips2c_stack_ObjMure_Destroy {};            /* size 0x0 */

struct _mips2c_stack_ObjMure_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjMure_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D78D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D7928 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D7A14 {};              /* size 0x0 */

struct _mips2c_stack_func_808D7A40 {};              /* size 0x0 */

struct _mips2c_stack_func_808D7A68 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ s32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0x8];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_808D7C64 {
    /* 0x00 */ char pad_0[0x8C];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ char pad_98[0x8];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_808D7DC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D7E14 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D7F0C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D7F2C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D7FFC {};              /* size 0x0 */

struct _mips2c_stack_func_808D8014 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D8074 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D814C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D82CC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D84F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D8678 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_808D78D0(Actor *arg0, ? arg1);             /* static */
s32 func_808D7928();                                /* static */
s32 func_808D7A14(void *arg0, void *);              /* static */
void func_808D7A40(f32 *arg0, void *arg1, s16 arg2, s32 arg3); /* static */
void func_808D7A68(void *arg0, GlobalContext *arg1); /* static */
void func_808D7C64(void *arg0, GlobalContext *arg1); /* static */
void func_808D7DC4(void *arg0);                     /* static */
void func_808D7E14(void *arg0, GlobalContext *arg1); /* static */
void func_808D7F0C(ObjMure *, GlobalContext *);     /* static */
void func_808D7F2C(void *arg0, ? arg1);             /* static */
void func_808D8074(void *arg0, f32 arg1);           /* static */
void func_808D814C(void *arg0, s32 arg1);           /* static */
void func_808D82CC(void *arg0, ? arg1);             /* static */
void func_808D84F4(void *arg0, ? arg1);             /* static */
static ? D_808D8780;                                /* unable to generate initializer */
static ? D_808D8794;                                /* unable to generate initializer */
static ? D_808D87A4;                                /* unable to generate initializer */
static ? D_808D87B0;                                /* unable to generate initializer */
static InitChainEntry D_808D87BC[3];                /* unable to generate initializer */
static ? D_808D87C8;                                /* unable to generate initializer */

s32 func_808D78D0(Actor *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_14E;
    if ((temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 4)) {
        Actor_ProcessInitChain(arg0, D_808D87BC);
        return 1;
    }
    return 0;
}

s32 func_808D7928(void) {
    if (func_808D78D0() == 0) {
        return 0;
    }
    return 1;
}

void ObjMure_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    ObjMure *this = (ObjMure *) thisx;

    temp_v0 = this->actor.params;
    this->unk_14A = ((s32) temp_v0 >> 8) & 7;
    this->unk_148 = ((s32) temp_v0 >> 0xC) & 0xF;
    this->unk_14C = ((s32) temp_v0 >> 5) & 3;
    this->unk_14E = temp_v0 & 0x1F;
    if ((s32) this->unk_14A >= 4) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((s32) this->unk_14E >= 5) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (func_808D7928() == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actionFunc = func_808D7FFC;
}

void ObjMure_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjMure *this = (ObjMure *) thisx;

}

s32 func_808D7A14(void *arg0) {
    s16 temp_v1;

    temp_v1 = arg0->unk_148;
    if (temp_v1 == 0) {
        return *(&D_808D8794 + (arg0->unk_14A * 4));
    }
    return (s32) temp_v1;
}

void func_808D7A40(f32 *arg0, void *arg1, s16 arg2, s32 arg3) {
    arg0->unk_0 = arg1->unk_0;
    arg0[1] = arg1->unk_4;
    arg0[2] = arg1->unk_8;
}

void func_808D7A68(void *arg0, GlobalContext *arg1) {
    f32 sp84;
    s32 sp7C;
    Actor *temp_v0_4;
    Actor *temp_v0_6;
    ActorContext *temp_s3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_5;
    u8 temp_v0_2;
    void *temp_a1;
    void *temp_s1;
    void *phi_s4;
    s32 phi_s2;

    temp_v0 = func_808D7A14(arg0);
    sp7C = temp_v0;
    phi_s2 = 0;
    if (temp_v0 > 0) {
        phi_s4 = arg0;
        do {
            temp_v0_2 = phi_s4->unk_18C;
            temp_s3 = arg1 + 0x1CA0;
            if (temp_v0_2 != 1) {
                temp_s1 = arg0 + (phi_s2 * 4);
                temp_a1 = arg0 + 0x24;
                if (temp_v0_2 == 2) {
                    func_808D7A40(&sp84, temp_a1, arg0->unk_14A, phi_s2);
                    temp_v0_3 = arg0->unk_14E * 2;
                    temp_v0_4 = Actor_SpawnAsChildAndCutscene(temp_s3, arg1, *(&D_808D87A4 + temp_v0_3), sp84, sp88, sp8C, (s16) (s32) arg0->unk_30, (s16) (s32) arg0->unk_32, (s16) (s32) arg0->unk_34, (s32) *(&D_808D87B0 + temp_v0_3), (u32) arg0->unk_38, (s32) arg0->unk_20, NULL);
                    temp_s1->unk_150 = temp_v0_4;
                    if (temp_v0_4 != 0) {
                        if (arg0->unk_14E == 0x90) {
                            temp_v0_4[1].unk_53 = 1;
                        }
                        temp_s1->unk_150->room = arg0->unk_3;
                    }
                } else {
                    func_808D7A40(&sp84, temp_a1, arg0->unk_14A, phi_s2);
                    temp_v0_5 = arg0->unk_14E * 2;
                    temp_v0_6 = Actor_SpawnAsChildAndCutscene(temp_s3, arg1, *(&D_808D87A4 + temp_v0_5), sp84, sp88, sp8C, (s16) (s32) arg0->unk_30, (s16) (s32) arg0->unk_32, (s16) (s32) arg0->unk_34, (s32) *(&D_808D87B0 + temp_v0_5), (u32) arg0->unk_38, (s32) arg0->unk_20, NULL);
                    temp_s1->unk_150 = temp_v0_6;
                    if (temp_v0_6 != 0) {
                        temp_v0_6->room = arg0->unk_3;
                    }
                }
            }
            temp_s2 = phi_s2 + 1;
            phi_s4 += 1;
            phi_s2 = temp_s2;
        } while (temp_s2 < sp7C);
    }
}

void func_808D7C64(void *arg0, GlobalContext *arg1) {
    f32 sp8C;
    Actor *temp_v0_3;
    s16 temp_v0_2;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_s1;
    s32 phi_v1;
    s32 phi_t0;
    void *phi_s2;
    void *phi_s3;

    temp_v0 = func_808D7A14(arg0);
    temp_s5 = temp_v0;
    phi_s1 = 0;
    if (temp_v0 > 0) {
        phi_s2 = arg0;
        phi_s3 = arg0;
        do {
            func_808D7A40(&sp8C, arg0 + 0x24, arg0->unk_14A, phi_s1);
            temp_v0_2 = arg0->unk_14E;
            temp_v1 = temp_v0_2 * 2;
            phi_v1 = temp_v1;
            if ((temp_v0_2 == 4) && (phi_t0 = 1, (phi_s1 == 0))) {
                phi_v1 = temp_v0_2 * 2;
            } else {
                phi_t0 = (s32) *(&D_808D87B0 + temp_v1);
            }
            temp_v0_3 = Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, *(&D_808D87A4 + phi_v1), sp8C, sp90, sp94, (s16) (s32) arg0->unk_30, (s16) (s32) arg0->unk_32, (s16) (s32) arg0->unk_34, phi_t0, (u32) arg0->unk_38, (s32) arg0->unk_20, NULL);
            phi_s2->unk_150 = temp_v0_3;
            if (temp_v0_3 != 0) {
                phi_s3->unk_18C = 0;
                phi_s2->unk_150->room = arg0->unk_3;
            } else {
                phi_s3->unk_18C = 1;
            }
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
            phi_s2 += 4;
            phi_s3 += 1;
        } while (temp_s1 < temp_s5);
    }
}

void func_808D7DC4(void *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk_14C;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return;
        }
        func_808D7C64();
        return;
    }
    func_808D7A68();
}

void func_808D7E14(void *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a0_2;
    s32 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;
    void *phi_s1;
    void *phi_s0;

    temp_v0 = func_808D7A14();
    if (temp_v0 > 0) {
        phi_s1 = arg0;
        phi_s0 = arg0;
        do {
            temp_v0_2 = phi_s1->unk_18C;
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    temp_a0 = phi_s0->unk_150;
                    if (temp_a0 != 0) {
                        if (Actor_HasParent(temp_a0, arg1) != 0) {

                        } else {
                            Actor_MarkForDeath(phi_s0->unk_150);
                        }
                        goto block_12;
                    }
                } else {
                    temp_a0_2 = phi_s0->unk_150;
                    if (temp_a0_2 != 0) {
                        Actor_MarkForDeath(temp_a0_2);
                        goto block_12;
                    }
                }
            } else {
block_12:
                phi_s0->unk_150 = NULL;
            }
            temp_s0 = phi_s0 + 4;
            phi_s1 += 1;
            phi_s0 = temp_s0;
        } while ((u32) temp_s0 < (u32) ((temp_v0 * 4) + arg0));
    }
}

void func_808D7F0C(void) {
    func_808D7E14();
}

void func_808D7F2C(void *arg0, ? arg1) {
    s32 temp_a2;
    s32 temp_v0;
    u8 temp_a0;
    void *temp_v0_2;
    void *temp_v1;
    void *phi_a1;
    s32 phi_a2;

    temp_v0 = func_808D7A14(arg0);
    phi_a2 = 0;
    if (temp_v0 > 0) {
        phi_a1 = arg0;
        do {
            temp_v0_2 = phi_a1->unk_150;
            temp_v1 = arg0 + phi_a2;
            if (temp_v0_2 != 0) {
                temp_a0 = temp_v1->unk_18C;
                if (temp_a0 == 0) {
                    if (temp_v0_2->unk_138 != 0) {
                        if ((arg0->unk_14E == 0x90) && (temp_v0_2->unk_197 != 0)) {
                            temp_v1->unk_18C = 2U;
                        }
                    } else {
                        temp_v1->unk_18C = 1U;
                        goto block_12;
                    }
                } else if ((temp_a0 == 2) && (temp_v0_2->unk_138 == 0)) {
                    temp_v1->unk_18C = 1U;
block_12:
                    phi_a1->unk_150 = NULL;
                }
            }
            temp_a2 = phi_a2 + 1;
            phi_a1 += 4;
            phi_a2 = temp_a2;
        } while (temp_a2 < temp_v0);
    }
}

void func_808D7FFC(ObjMure *this, GlobalContext *globalCtx) {
    this->actionFunc = func_808D8014;
}

void func_808D8014(ObjMure *this, GlobalContext *globalCtx) {
    if (fabsf(this->actor.projectedPos.z) < *(&D_808D8780 + (this->unk_14E * 4))) {
        this->actionFunc = func_808D8678;
        this->actor.flags |= 0x10;
        func_808D7DC4();
    }
}

void func_808D8074(void *arg0, f32 arg1) {
    s32 temp_f16;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_v0_2;
    void *phi_s1;
    s32 phi_s0;

    temp_v0 = func_808D7A14(arg0);
    temp_s2 = temp_v0;
    phi_s0 = 0;
    if (temp_v0 > 0) {
        phi_s1 = arg0;
        do {
            temp_v0_2 = phi_s1->unk_150;
            if (temp_v0_2 != 0) {
                temp_v0_2->unk_124 = 0;
                if (Rand_ZeroOne() <= arg1) {
                    temp_f16 = (s32) (Rand_ZeroOne() * ((f32) temp_s2 - 0.5f));
                    if (phi_s0 != temp_f16) {
                        phi_s1->unk_150->unk_124 = (s32) (arg0 + (temp_f16 * 4))->unk_150;
                    }
                }
            }
            temp_s0 = phi_s0 + 1;
            phi_s1 += 4;
            phi_s0 = temp_s0;
        } while (temp_s0 < temp_s2);
    }
}

void func_808D814C(void *arg0, s32 arg1) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v1_2;
    void *temp_a0;
    void *temp_a3;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *phi_a2;
    s32 phi_t2;
    s32 phi_a1;
    s32 phi_a0;
    s32 phi_a0_2;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    temp_v0 = func_808D7A14(temp_a0, temp_a3);
    temp_t1 = temp_v0;
    phi_t2 = 0;
    phi_a1 = 0;
    if (temp_v0 > 0) {
        phi_a2 = arg0;
        do {
            temp_v1 = phi_a2->unk_150;
            if (temp_v1 != 0) {
                phi_a0 = 0;
                phi_a0_2 = 0;
                if (phi_t2 < arg1) {
                    temp_v1->unk_124 = temp_v1;
                    phi_t2 += 1;
                    if (temp_v0 > 0) {
                        temp_v1_2 = temp_v0 & 3;
                        if (temp_v1_2 != 0) {
                            do {
                                if (phi_a1 != phi_a0) {
                                    temp_v1_3 = (arg0 + (phi_a0 * 4))->unk_150;
                                    if (temp_v1_3->unk_124 == phi_a2->unk_150) {
                                        temp_v1_3->unk_124 = 0;
                                    }
                                }
                                temp_a0_2 = phi_a0 + 1;
                                phi_a0 = temp_a0_2;
                                phi_a0_2 = temp_a0_2;
                            } while (temp_v1_2 != temp_a0_2);
                            if (temp_a0_2 != temp_v0) {
                                goto loop_11;
                            }
                        } else {
                            do {
loop_11:
                                if (phi_a1 != phi_a0_2) {
                                    temp_v1_4 = (arg0 + (phi_a0_2 * 4))->unk_150;
                                    if (temp_v1_4->unk_124 == phi_a2->unk_150) {
                                        temp_v1_4->unk_124 = 0;
                                    }
                                }
                                if (phi_a1 != (phi_a0_2 + 1)) {
                                    temp_v1_5 = (arg0 + (phi_a0_2 * 4))->unk_154;
                                    if (temp_v1_5->unk_124 == phi_a2->unk_150) {
                                        temp_v1_5->unk_124 = 0;
                                    }
                                }
                                if (phi_a1 != (phi_a0_2 + 2)) {
                                    temp_v1_6 = (arg0 + (phi_a0_2 * 4))->unk_158;
                                    if (temp_v1_6->unk_124 == phi_a2->unk_150) {
                                        temp_v1_6->unk_124 = 0;
                                    }
                                }
                                if (phi_a1 != (phi_a0_2 + 3)) {
                                    temp_v1_7 = (arg0 + (phi_a0_2 * 4))->unk_15C;
                                    if (temp_v1_7->unk_124 == phi_a2->unk_150) {
                                        temp_v1_7->unk_124 = 0;
                                    }
                                }
                                temp_a0_3 = phi_a0_2 + 4;
                                phi_a0_2 = temp_a0_3;
                            } while (temp_a0_3 != temp_t1);
                        }
                    }
                } else if (temp_v1->unk_124 == temp_v1) {
                    temp_v1->unk_124 = NULL;
                }
            }
            temp_a1 = phi_a1 + 1;
            phi_a2 += 4;
            phi_a1 = temp_a1;
        } while (temp_a1 < temp_t1);
    }
}

void func_808D82CC(void *arg0, ? arg1) {
    if ((s32) arg0->unk_19C <= 0) {
        if (arg0->unk_19E != 0) {
            arg0->unk_19E = 0;
            func_808D8074(arg0, (Rand_ZeroOne() * 0.5f) + 0.1f);
            if (arg0->unk_98 < 60.0f) {
                arg0->unk_19C = (s16) ((s32) (Rand_ZeroOne() * 5.5f) + 4);
            } else {
                arg0->unk_19C = (s16) ((s32) (Rand_ZeroOne() * 40.5f) + 4);
            }
        } else {
            arg0->unk_19E = 1;
            if (arg0->unk_98 < 60.0f) {
                arg0->unk_19C = (s16) ((s32) (Rand_ZeroOne() * 10.5f) + 4);
                func_808D8074(arg0, (Rand_ZeroOne() * 0.2f) + 0.8f);
            } else {
                arg0->unk_19C = (s16) ((s32) (Rand_ZeroOne() * 10.5f) + 4);
                func_808D8074(arg0, (Rand_ZeroOne() * 0.2f) + 0.6f);
            }
        }
    }
    if (arg0->unk_98 < 120.0f) {
        arg0->unk_1A0 = (s16) (arg0->unk_1A0 + 1);
    } else {
        arg0->unk_1A0 = 0;
    }
    if ((s32) arg0->unk_1A0 >= 0x50) {
        func_808D814C(arg0, 1);
        return;
    }
    func_808D814C(arg0, 0);
}

void func_808D84F4(void *arg0, ? arg1) {
    s32 temp_v0;
    void *temp_a0;
    void *temp_v0_2;
    void *temp_v1;
    void *phi_a0;

    if ((s32) arg0->unk_19C <= 0) {
        if (arg0->unk_19E != 0) {
            arg0->unk_19E = 0;
            func_808D8074(arg0, Rand_ZeroOne() * 0.2f);
            if (arg0->unk_98 < 60.0f) {
                arg0->unk_19C = (s16) ((s32) (Rand_ZeroOne() * 5.5f) + 4);
            } else {
                arg0->unk_19C = (s16) ((s32) (Rand_ZeroOne() * 40.5f) + 4);
            }
        } else {
            arg0->unk_19E = 1;
            func_808D8074(arg0, Rand_ZeroOne() * 0.7f);
            arg0->unk_19C = (s16) ((s32) (Rand_ZeroOne() * 10.5f) + 4);
        }
    }
    temp_v0 = func_808D7A14(arg0);
    phi_a0 = arg0;
    if (temp_v0 > 0) {
        do {
            temp_v0_2 = phi_a0->unk_150;
            temp_a0 = phi_a0 + 4;
            phi_a0 = temp_a0;
            if (temp_v0_2 != 0) {
                temp_v1 = temp_v0_2->unk_124;
                if ((temp_v1 != 0) && (temp_v1->unk_138 == 0)) {
                    temp_v0_2->unk_124 = NULL;
                }
            }
        } while ((u32) temp_a0 < (u32) ((temp_v0 * 4) + arg0));
    }
}

void func_808D8678(ObjMure *this, GlobalContext *globalCtx) {
    ? (*temp_v1)(ObjMure *, GlobalContext *);
    s32 temp_v0;

    func_808D7F2C();
    temp_v0 = this->unk_14E * 4;
    if ((*(&D_808D8780 + temp_v0) + 40.0f) <= fabsf(this->actor.projectedPos.z)) {
        this->actionFunc = func_808D8014;
        this->actor.flags &= -0x11;
        func_808D7F0C(this, globalCtx);
        return;
    }
    temp_v1 = *(&D_808D87C8 + temp_v0);
    if (temp_v1 != 0) {
        temp_v1(this, globalCtx);
    }
}

void ObjMure_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    ObjMure *this = (ObjMure *) thisx;

    temp_v0 = this->unk_19C;
    if ((s32) temp_v0 > 0) {
        this->unk_19C = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
}
