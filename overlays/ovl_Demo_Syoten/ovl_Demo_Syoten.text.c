typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ u16 startFrame;
    /* 0x04 */ u16 endFrame;
    /* 0x06 */ char pad_6[0x4];                     /* maybe part of endFrame[3]? */
    /* 0x0A */ u16 unk_A;                           /* inferred */
    /* 0x0C */ char pad_C[0x24];                    /* maybe part of unk_A[19]? */
} CsCmdActorAction;                                 /* size = 0x30 */

typedef struct DemoSyoten {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ? unk_144;                          /* inferred */
    /* 0x144 */ char pad_144[0x30];
    /* 0x174 */ ? unk_174;                          /* inferred */
    /* 0x174 */ char pad_174[0x132];
    /* 0x2A6 */ ? unk_2A6;                          /* inferred */
    /* 0x2A6 */ char pad_2A6[0x132];
    /* 0x3D8 */ f32 unk_3D8;                        /* inferred */
    /* 0x3DC */ ? *unk_3DC;                         /* inferred */
    /* 0x3E0 */ void *unk_3E0;                      /* inferred */
    /* 0x3E4 */ u16 unk_3E4;                        /* inferred */
    /* 0x3E6 */ s16 unk_3E6;                        /* inferred */
    /* 0x3E8 */ u8 *unk_3E8;                        /* inferred */
    /* 0x3EC */ s32 unk_3EC;                        /* inferred */
    /* 0x3F0 */ u16 unk_3F0;                        /* inferred */
    /* 0x3F2 */ u16 unk_3F2;                        /* inferred */
    /* 0x3F4 */ void (*actionFunc)(DemoSyoten *, GlobalContext *);
} DemoSyoten;                                       /* size = 0x3F8 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_DemoSyoten_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DemoSyoten_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_DemoSyoten_Init {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ? *sp44;                             /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_DemoSyoten_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C16760 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C16818 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x18];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C168D0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80C16974 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ s8 sp21;                             /* inferred */
    /* 0x22 */ s8 sp22;                             /* inferred */
    /* 0x23 */ char pad_23[0x5];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C16A64 {};              /* size 0x0 */

struct _mips2c_stack_func_80C16A74 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C16BD4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C16DD4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C16EAC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C17008 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C170F8 {};              /* size 0x0 */

struct _mips2c_stack_func_80C173B4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C17468 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ u8 sp28;                             /* inferred */
    /* 0x29 */ u8 sp29;                             /* inferred */
    /* 0x2A */ u8 sp2A;                             /* inferred */
    /* 0x2B */ char pad_2B[0x1];
    /* 0x2C */ u8 sp2C;                             /* inferred */
    /* 0x2D */ u8 sp2D;                             /* inferred */
    /* 0x2E */ u8 sp2E;                             /* inferred */
    /* 0x2F */ char pad_2F[0x1];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C17690 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

? func_800FE7A8(? *, u8 *, void *, void **);        /* extern */
? func_80183430(? *, ? *, ? *, ? *, ? *, s32);      /* extern */
? func_8018349C(? *, DemoSyoten *);                 /* extern */
? func_801835EC(? *, ? *);                          /* extern */
? func_80183DE0(? *);                               /* extern */
? func_8018450C(GlobalContext *, Actor *, Gfx *, ? (*)(void **, ?, s32, ?, void *), s32, Actor *); /* extern */
void func_80C16760(DemoSyoten *arg0, GlobalContext *arg1, GlobalContext *); /* static */
s32 func_80C16818(Actor *arg0);                     /* static */
void func_80C168D0(DemoSyoten *arg0, GlobalContext *arg1); /* static */
void func_80C16974(f32 arg0);                       /* static */
void func_80C16A64(DemoSyoten *, GlobalContext *);  /* static */
void func_80C16A74(DemoSyoten *, GlobalContext *);  /* static */
void func_80C16BD4(DemoSyoten *, GlobalContext *);  /* static */
void func_80C16DD4(DemoSyoten *, GlobalContext *);  /* static */
void func_80C16EAC(DemoSyoten *, GlobalContext *);  /* static */
void func_80C17008(DemoSyoten *, GlobalContext *);  /* static */
? func_80C170F8(void **arg0, ? arg1, s32 arg2, ? arg3, void *arg5); /* static */
void func_80C173B4(Actor *thisx, GlobalContext *globalCtx); /* static */
void func_80C17468(void **arg0);                    /* static */
void func_80C17690(Actor *thisx, GlobalContext *globalCtx); /* static */
extern ? D_0600023C;
extern void D_06001298;
extern ? D_06001328;
extern ? D_06001370;
extern void D_06001448;
extern ? D_06001730;
extern void D_060018B8;
extern void D_060018C0;
extern ? D_06001DD0;
extern ? D_06002880;
extern ? D_06002A20;
extern void D_06002B88;
extern void D_06002B98;
static u8 D_80C177D0 = 0;
static u8 D_80C177D1[79] = {
    1,
    1,
    0,
    2,
    2,
    2,
    2,
    0,
    0,
    1,
    0,
    2,
    2,
    0,
    1,
    0,
    2,
    2,
    0,
    1,
    0,
    2,
    2,
    0,
    1,
    0,
    2,
    2,
    0,
    1,
    0,
    1,
    2,
    2,
    1,
    2,
    2,
    0,
    0,
    0,
    1,
    1,
    0,
    2,
    2,
    2,
    2,
    0,
    0,
    1,
    0,
    2,
    2,
    0,
    1,
    0,
    2,
    2,
    0,
    1,
    0,
    2,
    2,
    2,
    0,
    0,
    2,
    0,
    1,
    1,
    0,
    2,
    2,
    2,
    0,
    1,
    0,
    2,
    2,
};
static ? D_80C17821;                                /* unable to generate initializer */
static ? D_80C17824;                                /* unable to generate initializer */
static ? D_80C17834;                                /* unable to generate initializer */

void DemoSyoten_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? *sp44;
    ? *temp_a0;
    u16 temp_t3;
    u16 temp_t5;
    u32 temp_t8;
    void *temp_v0;
    DemoSyoten *this = (DemoSyoten *) thisx;

    Actor_SetScale((Actor *) this, 0.3f);
    temp_t8 = this->actor.params & 0xF;
    this->actionFunc = func_80C16A64;
    this->unk_3E4 = 0;
    this->unk_3E6 = 0;
    this->unk_3DC = NULL;
    this->unk_3E0 = NULL;
    this->unk_3F2 = 0;
    this->unk_3D8 = 1.0f;
    switch (temp_t8) {
    case 0:
        temp_a0 = &this->unk_144;
        sp44 = temp_a0;
        func_80183430(temp_a0, &D_06001328, &D_0600023C, &this->unk_174, &this->unk_2A6, 0);
        func_801835EC(temp_a0, &D_0600023C);
        this->actor.draw = NULL;
        this->actionFunc = func_80C16A74;
        this->actor.child = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x7B, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, 0);
        this->unk_3F0 = 0x215;
        Actor_SetScale((Actor *) this, 0.05f);
        return;
    case 1:
        Actor_SetScale((Actor *) this, 0.1f);
        this->unk_3DC = &D_06001370;
        this->unk_3E0 = Lib_SegmentedToVirtual(&D_06001448);
        this->unk_3E4 |= 1;
        this->actionFunc = func_80C16BD4;
        this->unk_3F0 = 0x215;
        Actor_SetScale((Actor *) this, 0.05f);
        return;
    case 2:
        this->unk_3DC = &D_06001730;
        this->unk_3E0 = Lib_SegmentedToVirtual(&D_060018B8);
        this->unk_3F0 = 0x216;
        this->actionFunc = func_80C16DD4;
        this->unk_3E4 |= 2;
        Actor_SetScale((Actor *) this, 4.0f);
        return;
    case 3:
        this->unk_3DC = &D_06001DD0;
        this->unk_3E0 = Lib_SegmentedToVirtual(&D_06002B98);
        this->unk_3F0 = 0x218;
        this->unk_3E4 |= 8;
        this->actionFunc = func_80C16EAC;
        Actor_SetScale((Actor *) this, 0.5f);
        return;
    case 4:
        this->unk_3DC = &D_06002880;
        temp_v0 = Lib_SegmentedToVirtual(&D_06002B88);
        temp_t3 = this->unk_3E4 | 2;
        temp_t5 = temp_t3 | 1;
        this->unk_3E4 = temp_t3;
        this->unk_3E4 = temp_t5;
        this->unk_3E0 = temp_v0;
        this->actionFunc = func_80C17008;
        this->unk_3F0 = 0x217;
        this->unk_3E4 = temp_t5 | 8;
        this->actor.draw = func_80C17690;
        Actor_SetScale((Actor *) this, 5.0f);
        /* fallthrough */
    default:
        return;
    }
}

void DemoSyoten_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DemoSyoten *this = (DemoSyoten *) thisx;
    if ((this->actor.params & 0xF) == 0) {
        func_8018349C(&this->unk_144, this);
    }
}

void func_80C16760(DemoSyoten *arg0, GlobalContext *arg1) {
    void *sp38;
    ? sp2C;
    Vec3f *sp28;
    Vec3f *temp_a0;
    s32 temp_v0;
    void *temp_t8;
    void *temp_v0_2;

    arg0->unk_3EC = 0;
    temp_v0 = (s32) (arg0->actor.params & 0x7E00) >> 9;
    if (temp_v0 != 0x3F) {
        temp_t8 = arg1->setupPathList + (temp_v0 * 8);
        arg0->unk_3E8 = temp_t8;
        if (temp_t8 != 0) {
            temp_v0_2 = Lib_SegmentedToVirtual(temp_t8->unk_4);
            temp_a0 = arg0 + 0x24;
            sp28 = temp_a0;
            sp38 = temp_v0_2;
            Math_Vec3s_ToVec3f(temp_a0, (Vec3s *) temp_v0_2);
            arg0->unk_3EC += 1;
            Math_Vec3s_ToVec3f((Vec3f *) &sp2C, sp38 + 6);
            arg0->actor.world.rot.y = Math_Vec3f_Yaw(temp_a0, (Vec3f *) &sp2C);
            arg0->actor.world.rot.x = Math_Vec3f_Pitch(temp_a0, (Vec3f *) &sp2C);
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    arg0->unk_3E8 = NULL;
}

s32 func_80C16818(Actor *arg0) {
    ? sp28;
    Vec3f *sp24;
    Vec3f *temp_a0;
    void *temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->unk_3E8;
    if (temp_v1 == 0) {
        return 1;
    }
    Math_Vec3s_ToVec3f((Vec3f *) &sp28, Lib_SegmentedToVirtual(temp_v1->unk_4) + (arg0->unk_3EC * 6));
    temp_a0 = arg0 + 0x24;
    sp24 = temp_a0;
    arg0->world.rot.y = Math_Vec3f_Yaw(temp_a0, (Vec3f *) &sp28);
    arg0->world.rot.x = Math_Vec3f_Pitch(temp_a0, (Vec3f *) &sp28);
    Actor_SetVelocityAndMoveXYRotationReverse(arg0);
    phi_v0 = 0;
    if (Math_Vec3f_DistXYZ(temp_a0, (Vec3f *) &sp28) < 2.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80C168D0(DemoSyoten *arg0, GlobalContext *arg1) {
    f32 sp38;
    ? sp30;
    f32 sp2C;
    ? sp24;
    f32 sp20;
    void *temp_v1;

    temp_v1 = arg0->unk_3E8;
    if (temp_v1 != 0) {
        Math_Vec3s_ToVec3f((Vec3f *) &sp30, Lib_SegmentedToVirtual(temp_v1->unk_4) + (arg0->unk_3EC * 6));
        func_800B4EDC(arg1, (Vec3f *) &sp30, (Vec3f *) &sp24, &sp20);
        Math_Vec3f_Copy((Vec3f *) &sp30, arg0 + 0xEC);
        sp38 = sp34;
        sp2C = sp28;
        arg0->actor.shape.rot.z = (s16) -Math_Vec3f_Yaw((Vec3f *) &sp24, (Vec3f *) &sp30);
    }
}

void func_80C16974(f32 arg0) {
    s8 sp22;
    s8 sp21;
    u8 sp20;
    u8 *temp_a0;
    u8 *temp_a1;
    void *temp_v0;
    void *temp_v1;
    f32 phi_f12;
    u8 *phi_a0;
    void *phi_v1;

    temp_v0 = Lib_SegmentedToVirtual(&D_060018C0);
    phi_f12 = arg0;
    if (arg0 > 1.0f) {
        phi_f12 = 1.0f;
    }
    temp_a1 = &sp20;
    sp20 = 0;
    sp21 = (s8) (s32) (152.0f * phi_f12);
    sp22 = (s8) (s32) (255.0f * phi_f12);
    temp_v0->unk_F = (u8) temp_a1[D_80C177D0];
    phi_a0 = D_80C177D1;
    phi_v1 = temp_v0 + 0x10;
    do {
        temp_a0 = phi_a0 + 4;
        temp_v1 = phi_v1 + 0x40;
        temp_v1->unk_-31 = (u8) temp_a1[*phi_a0];
        temp_v1->unk_-21 = (u8) temp_a1[temp_a0->unk_-3];
        temp_v1->unk_-11 = (u8) temp_a1[temp_a0->unk_-2];
        temp_v1->unk_-1 = (u8) temp_a1[temp_a0->unk_-1];
        phi_a0 = temp_a0;
        phi_v1 = temp_v1;
    } while (temp_a0 != &D_80C17821);
}

void func_80C16A64(DemoSyoten *arg0, GlobalContext *arg1) {

}

void func_80C16A74(DemoSyoten *arg0, GlobalContext *arg1) {
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    f32 temp_f0;
    u16 temp_a0;
    u16 temp_v0;

    func_80183DE0(&arg0->unk_144);
    if (func_800EE29C(arg1, (u32) arg0->unk_3F0) != 0) {
        temp_v0 = arg1->csCtx.frames;
        if (((s32) temp_v0 >= 0xA0) && ((s32) temp_v0 < 0x142)) {
            func_800B9010((Actor *) arg0, 0x21BAU);
        } else if (temp_v0 == 0x142) {
            Audio_PlayActorSound2((Actor *) arg0, 0x29BEU);
        }
        temp_a0 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_3F0)]->unk0;
        if (temp_a0 != arg0->unk_3F2) {
            arg0->unk_3F2 = temp_a0;
            if (temp_a0 != 1) {
                if (temp_a0 != 2) {
                    if (temp_a0 != 3) {
                        if (temp_a0 != 4) {

                        } else {
                            goto block_14;
                        }
                    }
                } else {
                    arg0->actor.draw = func_80C173B4;
                    arg0->unk_3D8 = 1.0f;
                }
            } else {
block_14:
                arg0->actor.draw = NULL;
            }
        }
        if (temp_a0 == 3) {
            temp_f0 = arg0->unk_3D8;
            if (temp_f0 > 0.0125f) {
                temp_v0_2 = arg0->actor.child;
                arg0->unk_3D8 = temp_f0 - 0.0125f;
                if (temp_v0_2 != 0) {
                    temp_v0_2->home.rot.z = 0x14;
                    return;
                }
                /* Duplicate return node #22. Try simplifying control flow for better match */
                return;
            }
            temp_v0_3 = arg0->actor.child;
            arg0->actor.draw = NULL;
            if (temp_v0_3 != 0) {
                temp_v0_3->home.rot.z = 0;
                return;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    arg0->actor.draw = NULL;
}

void func_80C16BD4(DemoSyoten *arg0, GlobalContext *arg1) {
    s32 sp20;
    CsCmdActorAction *temp_t8;
    f32 temp_f0;
    f32 temp_f16;
    u16 temp_a0;
    u16 temp_t3;
    u16 temp_t4;
    u16 temp_t8_2;
    u16 phi_v1;
    f32 phi_f16;

    if (func_800EE29C(arg1, (u32) arg0->unk_3F0) != 0) {
        temp_t8 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_3F0)];
        temp_a0 = temp_t8->unk0;
        phi_v1 = temp_a0;
        if (temp_a0 != arg0->unk_3F2) {
            arg0->unk_3F2 = temp_a0;
            if ((temp_a0 != 1) && (temp_a0 != 2)) {
                if (temp_a0 != 3) {
                    if (temp_a0 != 4) {
                        arg0->actor.draw = NULL;
                    } else {
                        arg0->actor.draw = DemoSyoten_Draw;
                        sp20 = (s32) temp_a0;
                        func_80C16760(arg0, arg1, arg1);
                        temp_t8_2 = arg0->unk_3E4 | 4;
                        arg0->unk_3E4 = temp_t8_2;
                        arg0->unk_3E4 = temp_t8_2 & 0xFFFE;
                        goto block_10;
                    }
                } else {
                    arg0->actor.draw = DemoSyoten_Draw;
                    temp_t3 = arg0->unk_3E4 & 0xFFFB;
                    arg0->unk_3E4 = temp_t3;
                    arg0->unk_3E4 = temp_t3 | 1;
                    arg0->actor.shape.rot.z = 0;
                }
            } else {
                arg0->actor.draw = NULL;
                sp20 = (s32) temp_a0;
                Actor_SetScale((Actor *) arg0, 0.0f);
block_10:
                phi_v1 = temp_t8->unk0;
            }
        }
        if (phi_v1 != 3) {
            if (phi_v1 != 4) {
                return;
            }
            temp_t4 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_3F0)]->unk_A;
            temp_f16 = (f32) temp_t4;
            phi_f16 = temp_f16;
            if ((s32) temp_t4 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            arg0->actor.speedXZ = phi_f16 * 0.005493164f;
            if (arg0->unk_3EC < (s32) *arg0->unk_3E8) {
                if (func_80C16818((Actor *) arg0) != 0) {
                    arg0->unk_3EC += 1;
                }
                func_80C168D0(arg0, arg1);
                return;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
        temp_f0 = arg0->actor.scale.x;
        if (temp_f0 < 0.05f) {
            arg0->actor.scale.x = temp_f0 + 0.000625f;
        }
        Actor_SetScale((Actor *) arg0, arg0->actor.scale.x);
        return;
    }
    arg0->actor.draw = NULL;
}

void func_80C16DD4(DemoSyoten *arg0, GlobalContext *arg1) {
    s32 sp20;
    CsCmdActorAction *temp_t9;
    s16 temp_v0;
    u16 temp_a0;

    if (func_800EE29C(arg1, (u32) arg0->unk_3F0) != 0) {
        temp_t9 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_3F0)];
        temp_a0 = temp_t9->unk0;
        if (temp_a0 != arg0->unk_3F2) {
            arg0->unk_3F2 = temp_a0;
            if (temp_a0 != 1) {
                if (temp_a0 != 2) {

                } else {
                    arg0->actor.draw = DemoSyoten_Draw;
                    arg0->unk_3E6 = -6;
                    sp20 = (s32) temp_a0;
                    Audio_PlayActorSound2((Actor *) arg0, 0x1841U);
                }
            } else {
                arg0->actor.draw = NULL;
            }
        }
        if ((temp_t9->unk0 == 2) && (temp_v0 = arg0->unk_3E6, (((s32) temp_v0 < 0x28) != 0))) {
            arg0->unk_3E6 = temp_v0 + 1;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    arg0->actor.draw = NULL;
}

void func_80C16EAC(DemoSyoten *arg0, GlobalContext *arg1) {
    s32 sp20;
    CsCmdActorAction *temp_t9;
    f32 temp_f0;
    f32 temp_f0_2;
    u16 temp_a0;

    if (func_800EE29C(arg1, (u32) arg0->unk_3F0) != 0) {
        temp_t9 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_3F0)];
        temp_a0 = temp_t9->unk0;
        if (temp_a0 != arg0->unk_3F2) {
            arg0->unk_3F2 = temp_a0;
            if (temp_a0 != 1) {
                if (temp_a0 != 2) {

                } else {
                    arg0->actor.draw = DemoSyoten_Draw;
                }
            } else {
                arg0->actor.draw = NULL;
                arg0->unk_3D8 = 0.0f;
                sp20 = (s32) temp_a0;
                Actor_SetScale((Actor *) arg0, 0.5f);
            }
        }
        if (temp_t9->unk0 == 2) {
            temp_f0 = arg0->actor.scale.x;
            if (temp_f0 < 8.0f) {
                arg0->actor.scale.x = temp_f0 + 0.1875f;
            }
            Actor_SetScale((Actor *) arg0, arg0->actor.scale.x);
            temp_f0_2 = arg0->unk_3D8;
            if (temp_f0_2 < 1.0f) {
                arg0->unk_3D8 = temp_f0_2 + 0.025f;
            }
            if (arg0->unk_3D8 > 1.0f) {
                arg0->unk_3D8 = 1.0f;
            }
            func_800B9010((Actor *) arg0, 0x21BBU);
        }
    } else {
        arg0->actor.draw = NULL;
    }
    func_80C16974(arg0->unk_3D8);
}

void func_80C17008(DemoSyoten *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_a1_2;

    temp_a1 = arg0->unk_3F0;
    arg0 = arg0;
    if (func_800EE29C(arg1, (u32) temp_a1) != 0) {
        temp_a1_2 = arg0->unk_3F0;
        arg0 = arg0;
        temp_a0 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) temp_a1_2)]->unk0;
        if (temp_a0 != arg0->unk_3F2) {
            arg0->unk_3F2 = temp_a0;
            if (temp_a0 != 1) {
                if (temp_a0 != 2) {

                } else {
                    arg0->actor.draw = func_80C17690;
                    arg0->unk_3E6 = -0xA;
                }
            } else {
                arg0->actor.draw = NULL;
            }
        }
        if ((temp_a0 == 2) && (temp_v0 = arg0->unk_3E6, (((s32) temp_v0 < 0xF) != 0))) {
            arg0->unk_3E6 = temp_v0 + 1;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    arg0->actor.draw = NULL;
}

void DemoSyoten_Update(Actor *thisx, GlobalContext *globalCtx) {
    DemoSyoten *this = (DemoSyoten *) thisx;
    this->actionFunc(this, globalCtx);
}

? func_80C170F8(void **arg0, ? arg1, s32 arg2, ? arg3, void *arg5) {
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;

    temp_v1 = *arg0;
    switch (arg2) {
    case 2:
        temp_v0 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0 + 8);
        temp_v0->unk_4 = 0;
        temp_v0->unk_0 = 0xE7000000;
        temp_v0_2 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_2 + 8);
        temp_v0_2->unk_0 = 0xFA000080;
        temp_v0_2->unk_4 = (s32) (((s32) (arg5->unk_3D8 * 150.0f) & 0xFF) | 0xFFF08C00);
        break;
    case 4:
    case 12:
        temp_v0_3 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_3 + 8);
        temp_v0_3->unk_4 = 0;
        temp_v0_3->unk_0 = 0xE7000000;
        temp_v0_4 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_4 + 8);
        temp_v0_4->unk_0 = 0xFA000080;
        temp_v0_4->unk_4 = (s32) (((s32) (arg5->unk_3D8 * 200.0f) & 0xFF) | 0xFFF0BE00);
        break;
    case 6:
        temp_v0_5 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_5 + 8);
        temp_v0_5->unk_4 = 0;
        temp_v0_5->unk_0 = 0xE7000000;
        temp_v0_6 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_6 + 8);
        temp_v0_6->unk_0 = 0xFA000080;
        temp_v0_6->unk_4 = (s32) (((s32) (arg5->unk_3D8 * 150.0f) & 0xFF) | 0xFFF09600);
        break;
    case 8:
        temp_v0_7 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_7 + 8);
        temp_v0_7->unk_4 = 0;
        temp_v0_7->unk_0 = 0xE7000000;
        temp_v0_8 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_8 + 8);
        temp_v0_8->unk_0 = 0xFA000080;
        temp_v0_8->unk_4 = (s32) (((s32) (arg5->unk_3D8 * 200.0f) & 0xFF) | 0xFFF0B400);
        break;
    case 10:
    case 14:
        temp_v0_9 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_9 + 8);
        temp_v0_9->unk_4 = 0;
        temp_v0_9->unk_0 = 0xE7000000;
        temp_v0_10 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_10 + 8);
        temp_v0_10->unk_0 = 0xFA000080;
        temp_v0_10->unk_4 = (s32) (((s32) (arg5->unk_3D8 * 150.0f) & 0xFF) | 0xFFF0AA00);
        break;
    case 16:
        temp_v0_11 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_11 + 8);
        temp_v0_11->unk_4 = 0;
        temp_v0_11->unk_0 = 0xE7000000;
        temp_v0_12 = temp_v1->unk_2C0;
        temp_v1->unk_2C0 = (void *) (temp_v0_12 + 8);
        temp_v0_12->unk_0 = 0xFA000080;
        temp_v0_12->unk_4 = (s32) (((s32) (arg5->unk_3D8 * 200.0f) & 0xFF) | 0xFFF0A000);
        break;
    }
    return 1;
}

void func_80C173B4(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp28;
    Gfx *temp_a2;
    GraphicsContext *temp_v0;

    AnimatedMat_DrawXlu(globalCtx, Lib_SegmentedToVirtual(&D_06001298));
    temp_v0 = globalCtx->state.gfxCtx;
    temp_a2 = temp_v0->polyOpa.d - (((thisx->unk_15C->unk_1 << 6) + 0xF) & ~0xF);
    temp_v0->polyOpa.d = temp_a2;
    if (temp_a2 != 0) {
        sp28 = temp_a2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        func_8018450C(globalCtx, &thisx[1], temp_a2, func_80C170F8, 0, thisx);
    }
}

void func_80C17468(void **arg0) {
    u8 sp2C;
    u8 sp28;
    void *sp24;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;

    temp_a2 = *arg0;
    sp24 = temp_a2;
    func_800FE7A8(&D_80C17824, &sp2C, temp_a2, arg0);
    func_800FE7A8(&D_80C17834, &sp28);
    temp_v1 = temp_a2->unk_2C0;
    temp_a2->unk_2C0 = (void *) (temp_v1 + 8);
    temp_v1->unk_0 = 0xFA000080;
    temp_v1->unk_4 = (s32) ((sp2C << 0x18) | (sp2D << 0x10) | (sp2E << 8) | 0xFF);
    temp_v1_2 = temp_a2->unk_2C0;
    temp_a2->unk_2C0 = (void *) (temp_v1_2 + 8);
    temp_v1_2->unk_0 = 0xFB000000;
    temp_v1_2->unk_4 = (s32) ((sp28 << 0x18) | (sp29 << 0x10) | (sp2A << 8) | 0xFF);
}

void DemoSyoten_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp2C;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    void *temp_a1;
    u16 phi_v0;
    DemoSyoten *this = (DemoSyoten *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp2C = temp_a0;
    func_8012C2DC(temp_a0);
    if ((this->unk_3E4 & 4) != 0) {
        SysMatrix_InsertZRotation_s((s16) ((s32) this->actor.shape.rot.z * -1), 1);
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        SysMatrix_InsertZRotation_s(this->actor.shape.rot.z, 1);
        Matrix_Scale(1.0f, 5.0f, 1.0f, 1);
    }
    phi_v0 = this->unk_3E4;
    if ((this->unk_3E4 & 1) != 0) {
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        phi_v0 = this->unk_3E4;
    }
    if ((phi_v0 & 8) != 0) {
        func_80C17468((void **) globalCtx);
    }
    temp_a1 = this->unk_3E0;
    if (temp_a1 != 0) {
        if ((this->unk_3E4 & 2) != 0) {
            AnimatedMat_DrawStepXlu(globalCtx, (AnimatedMaterial *) temp_a1, (u32) this->unk_3E6);
        } else {
            AnimatedMat_DrawXlu(globalCtx, (AnimatedMaterial *) temp_a1);
        }
    }
    if (this->unk_3DC != 0) {
        temp_v0 = sp2C->polyXlu.p;
        sp2C->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp24 = temp_v0;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = sp2C->polyXlu.p;
        sp2C->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = (u32) this->unk_3DC;
    }
}

void func_80C17690(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 1U);
    if (((u16) thisx[3].home.rot.z & 8) != 0) {
        func_80C17468((void **) globalCtx);
    }
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp2C = temp_v0;
    sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    AnimatedMat_DrawStepXlu(globalCtx, thisx->unk_3E0, (u32) thisx[3].home.unk_12);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_06002880;
    AnimatedMat_DrawStepXlu(globalCtx, thisx->unk_3E0, thisx[3].home.unk_12 + 5);
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_06002A20;
}
