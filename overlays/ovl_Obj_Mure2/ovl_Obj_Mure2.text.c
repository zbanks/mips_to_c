typedef struct ObjMure2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(ObjMure2 *, GlobalContext *);
    /* 0x148 */ char pad_148[0x34];                 /* maybe part of actionFunc[14]? */
    /* 0x17C */ f32 unk_17C;                        /* inferred */
} ObjMure2;                                         /* size = 0x180 */

struct _mips2c_stack_ObjMure2_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjMure2_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80960CF0 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80960E0C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80960F0C {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80961018 {};              /* size 0x0 */

struct _mips2c_stack_func_8096104C {
    /* 0x000 */ char pad_0[0x7E];
    /* 0x07E */ s16 sp7E;                           /* inferred */
    /* 0x080 */ ? sp80;                             /* inferred */
    /* 0x080 */ char pad_80[0x98];
};                                                  /* size = 0x118 */

struct _mips2c_stack_func_809611BC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809612BC {};              /* size 0x0 */

struct _mips2c_stack_func_809613B0 {};              /* size 0x0 */

struct _mips2c_stack_func_809613C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809613E8 {};              /* size 0x0 */

struct _mips2c_stack_func_809613FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8096147C {};              /* size 0x0 */

struct _mips2c_stack_func_80961490 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void func_80960CF0(Vec3f *arg0, void *arg1);        /* static */
void func_80960E0C(Vec3f *arg0, void *arg1);        /* static */
void func_80960F0C(Vec3f *arg0, void *arg1);        /* static */
void func_80961018(s16 *arg0, ObjMure2 *arg1);      /* static */
void func_8096104C(ObjMure2 *arg0, GlobalContext *arg1); /* static */
void func_809611BC(ObjMure2 *arg0, GlobalContext *arg1); /* static */
void func_809612BC(ObjMure2 *arg0);                 /* static */
void func_809613B0(ObjMure2 *arg0);                 /* static */
void func_809613E8(ObjMure2 *arg0);                 /* static */
void func_8096147C(ObjMure2 *arg0);                 /* static */
static ? D_80961590;                                /* unable to generate initializer */
static ? D_8096159C;                                /* unable to generate initializer */
static ? D_809615A8;                                /* unable to generate initializer */
static ? D_809615B0;                                /* unable to generate initializer */
static ? D_809615B8;                                /* unable to generate initializer */
static ? D_809615E8;                                /* unable to generate initializer */
static InitChainEntry D_809615F4[3];                /* unable to generate initializer */

void func_80960CF0(Vec3f *arg0, void *arg1) {
    Vec3f *temp_s0;
    Vec3f *temp_s5;
    s32 temp_s3;
    Vec3f *phi_s0;
    s16 phi_s1;
    s32 phi_s3;

    temp_s5 = arg1 + 0x24;
    Math_Vec3f_Copy(arg0, temp_s5);
    phi_s0 = arg0 + 0xC;
    phi_s3 = 1;
    if ((s32) *(&D_809615A8 + ((arg1->unk_1C & 3) * 2)) >= 2) {
        phi_s1 = 0;
        do {
            Math_Vec3f_Copy(phi_s0, temp_s5);
            phi_s0->x += 80.0f * Math_SinS(phi_s1);
            temp_s3 = phi_s3 + 1;
            temp_s0 = phi_s0 + 0xC;
            temp_s0->unk_-4 = (f32) (phi_s0->z + (80.0f * Math_CosS(phi_s1)));
            phi_s0 = temp_s0;
            phi_s1 += 0x2000;
            phi_s3 = temp_s3;
        } while (temp_s3 < (s32) *(&D_809615A8 + ((arg1->unk_1C & 3) * 2)));
    }
}

void func_80960E0C(Vec3f *arg0, void *arg1) {
    Vec3f *temp_s0;
    s32 temp_s2;
    Vec3f *phi_s0;
    ? *phi_s1;
    s32 phi_s2;

    phi_s0 = arg0;
    phi_s1 = &D_809615B8;
    phi_s2 = 0;
    if ((s32) *(&D_809615A8 + ((arg1->unk_1C & 3) * 2)) > 0) {
        do {
            Math_Vec3f_Copy(phi_s0, arg1 + 0x24);
            phi_s0->x += (f32) phi_s1->unk_0 * Math_CosS(phi_s1->unk_2);
            temp_s2 = phi_s2 + 1;
            temp_s0 = phi_s0 + 0xC;
            temp_s0->unk_-4 = (f32) (phi_s0->z - ((f32) phi_s1->unk_0 * Math_SinS(phi_s1->unk_2)));
            phi_s0 = temp_s0;
            phi_s1 += 4;
            phi_s2 = temp_s2;
        } while (temp_s2 < (s32) *(&D_809615A8 + ((arg1->unk_1C & 3) * 2)));
    }
}

void func_80960F0C(Vec3f *arg0, void *arg1) {
    Vec3f *temp_s0;
    s32 temp_s3;
    Vec3f *phi_s0;
    s16 phi_s1;
    s32 phi_s3;

    phi_s0 = arg0;
    phi_s3 = 0;
    if ((s32) *(&D_809615A8 + ((arg1->unk_1C & 3) * 2)) > 0) {
        phi_s1 = 0;
        do {
            Math_Vec3f_Copy(phi_s0, arg1 + 0x24);
            phi_s0->x += 80.0f * Math_SinS(phi_s1);
            temp_s3 = phi_s3 + 1;
            temp_s0 = phi_s0 + 0xC;
            temp_s0->unk_-4 = (f32) (phi_s0->z + (80.0f * Math_CosS(phi_s1)));
            phi_s0 = temp_s0;
            phi_s1 += 0x2000;
            phi_s3 = temp_s3;
        } while (temp_s3 < (s32) *(&D_809615A8 + ((arg1->unk_1C & 3) * 2)));
    }
}

void func_80961018(s16 *arg0, ObjMure2 *arg1) {
    s16 temp_v1;
    s32 temp_a2;

    temp_v1 = arg1->actor.params;
    temp_a2 = ((s32) temp_v1 >> 8) & 0x1F;
    if ((temp_v1 & 3) == 2) {
        *arg0 = temp_a2 * 0x10;
        return;
    }
    *arg0 = temp_a2 << 8;
}

void func_8096104C(ObjMure2 *arg0, GlobalContext *arg1) {
    ? sp80;
    s16 sp7E;
    Actor *temp_v0_3;
    s16 *temp_s7;
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s6;
    void *temp_v0_2;
    ObjMure2 *phi_s0;
    s32 phi_s2;
    s32 phi_v0;

    temp_s0 = arg0->actor.params & 3;
    *(&D_809615E8 + (temp_s0 * 4))(&sp80, arg0);
    func_80961018(&sp7E, arg0);
    temp_s6 = temp_s0 * 2;
    temp_s7 = temp_s6 + &D_809615A8;
    temp_v0 = *temp_s7;
    phi_s0 = arg0;
    phi_s2 = 0;
    phi_v0 = (s32) temp_v0;
    if ((s32) temp_v0 > 0) {
        do {
            if (phi_s0->unk_148 == 0) {
                if ((((s32) arg0->unk_178 >> phi_s2) & 1) == 0) {
                    temp_v0_2 = &sp80 + (phi_s2 * 0xC);
                    temp_v0_3 = Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, *(&D_809615B0 + temp_s6), temp_v0_2->unk_0, temp_v0_2->unk_4, temp_v0_2->unk_8, (s16) (s32) arg0->actor.world.rot.x, (s16) 0, (s16) (s32) arg0->actor.world.rot.z, (s32) sp7E, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL);
                    phi_s0->unk_148 = temp_v0_3;
                    if (temp_v0_3 != 0) {
                        temp_v0_3->room = arg0->actor.room;
                    }
                }
                phi_v0 = (s32) *temp_s7;
            }
            temp_s2 = phi_s2 + 1;
            phi_s0 += 4;
            phi_s2 = temp_s2;
        } while (temp_s2 < phi_v0);
    }
}

void func_809611BC(ObjMure2 *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s16 temp_v0;
    s32 temp_s2;
    s32 phi_s2;
    ObjMure2 *phi_s0;
    s32 phi_v0;
    s16 *phi_v0_2;

    temp_v0 = *(&D_809615A8 + ((arg0->actor.params & 3) * 2));
    phi_s2 = 0;
    phi_s0 = arg0;
    phi_v0 = (s32) temp_v0;
    if ((s32) temp_v0 > 0) {
        do {
            if ((((s32) arg0->unk_178 >> phi_s2) & 1) == 0) {
                temp_a0 = phi_s0->unk_148;
                if (temp_a0 != 0) {
                    if (Actor_HasParent(temp_a0, arg1) != 0) {
                        arg0->unk_178 |= 1 << phi_s2;
                    } else {
                        Actor_MarkForDeath(phi_s0->unk_148);
                    }
                    phi_s0->unk_148 = NULL;
                    phi_v0_2 = &D_809615A8 + ((arg0->actor.params & 3) * 2);
                    goto block_8;
                }
            } else {
                phi_s0->unk_148 = NULL;
                phi_v0_2 = &D_809615A8 + ((arg0->actor.params & 3) * 2);
block_8:
                phi_v0 = (s32) *phi_v0_2;
            }
            temp_s2 = phi_s2 + 1;
            phi_s2 = temp_s2;
            phi_s0 += 4;
        } while (temp_s2 < phi_v0);
    }
}

void func_809612BC(ObjMure2 *arg0) {
    s16 temp_v1;
    s32 temp_v0;
    u16 temp_a3;
    void *temp_a2;
    ObjMure2 *phi_a1;
    s32 phi_v0;
    s32 phi_v1;

    temp_v1 = *(&D_809615A8 + ((arg0->actor.params & 3) * 2));
    phi_a1 = arg0;
    phi_v0 = 0;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 > 0) {
        do {
            temp_a2 = phi_a1->unk_148;
            if (temp_a2 != 0) {
                temp_a3 = arg0->unk_178;
                if (((((s32) temp_a3 >> phi_v0) & 1) == 0) && (temp_a2->update == 0)) {
                    arg0->unk_178 = temp_a3 | (1 << phi_v0);
                    phi_a1->unk_148 = NULL;
                    phi_v1 = (s32) *(&D_809615A8 + ((arg0->actor.params & 3) * 2));
                }
            }
            temp_v0 = phi_v0 + 1;
            phi_a1 += 4;
            phi_v0 = temp_v0;
        } while (temp_v0 < phi_v1);
    }
}

void ObjMure2_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjMure2 *this = (ObjMure2 *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_809615F4);
    if (globalCtx->csCtx.state != 0) {
        this->actor.uncullZoneForward += 1200.0f;
    }
    func_809613B0(this);
}

void func_809613B0(ObjMure2 *arg0) {
    arg0->actionFunc = func_809613C4;
}

void func_809613C4(ObjMure2 *this, GlobalContext *globalCtx) {
    func_809613E8();
}

void func_809613E8(ObjMure2 *arg0) {
    arg0->actionFunc = func_809613FC;
}

void func_809613FC(ObjMure2 *this, GlobalContext *globalCtx) {
    ObjMure2 *temp_a0;

    temp_a0 = this;
    if (Math3D_XZLengthSquared(this->actor.projectedPos.x, this->actor.projectedPos.z) < (*(&D_80961590 + ((temp_a0->actor.params & 3) * 4)) * temp_a0->unk_17C)) {
        temp_a0->actor.flags |= 0x10;
        this = temp_a0;
        func_8096104C(temp_a0, globalCtx);
        func_8096147C(this);
    }
}

void func_8096147C(ObjMure2 *arg0) {
    arg0->actionFunc = func_80961490;
}

void func_80961490(ObjMure2 *this, GlobalContext *globalCtx) {
    func_809612BC(this);
    if ((*(&D_8096159C + ((this->actor.params & 3) * 4)) * this->unk_17C) <= Math3D_XZLengthSquared(this->actor.projectedPos.x, this->actor.projectedPos.z)) {
        this->actor.flags &= -0x11;
        func_809611BC(this, globalCtx);
        func_809613E8(this);
    }
}

void ObjMure2_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjMure2 *this = (ObjMure2 *) thisx;
    if (globalCtx->csCtx.state == 0) {
        this->unk_17C = 1.0f;
        this->actionFunc(this, globalCtx);
        return;
    }
    this->unk_17C = 4.0f;
    this->actionFunc(this, globalCtx);
}
