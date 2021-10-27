typedef struct Boss06 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ u8 unk_144;                         /* inferred */
    /* 0x145 */ char pad_145[0x1];
    /* 0x146 */ s16 unk_146;                        /* inferred */
    /* 0x148 */ s16 unk_148;                        /* inferred */
    /* 0x14A */ char pad_14A[0x2];
    /* 0x14C */ ColliderCylinder unk_14C;           /* inferred */
    /* 0x198 */ void (*actionFunc)(Boss06 *, GlobalContext *);
    /* 0x19C */ f32 unk_19C;                        /* inferred */
    /* 0x1A0 */ f32 unk_1A0;                        /* inferred */
    /* 0x1A4 */ f32 unk_1A4;                        /* inferred */
    /* 0x1A8 */ f32 unk_1A8;                        /* inferred */
    /* 0x1AC */ f32 unk_1AC;                        /* inferred */
    /* 0x1B0 */ f32 unk_1B0;                        /* inferred */
    /* 0x1B4 */ f32 unk_1B4;                        /* inferred */
    /* 0x1B8 */ char pad_1B8[0x4];
    /* 0x1BC */ f32 unk_1BC;                        /* inferred */
    /* 0x1C0 */ f32 unk_1C0;                        /* inferred */
    /* 0x1C4 */ char pad_1C4[0x4];
    /* 0x1C8 */ u8 unk_1C8;                         /* inferred */
    /* 0x1C9 */ u8 unk_1C9;                         /* inferred */
    /* 0x1CA */ s16 unk_1CA;                        /* inferred */
    /* 0x1CC */ f32 unk_1CC;                        /* inferred */
    /* 0x1D0 */ f32 unk_1D0;                        /* inferred */
    /* 0x1D4 */ f32 unk_1D4;                        /* inferred */
    /* 0x1D8 */ f32 unk_1D8;                        /* inferred */
    /* 0x1DC */ f32 unk_1DC;                        /* inferred */
    /* 0x1E0 */ f32 unk_1E0;                        /* inferred */
    /* 0x1E4 */ f32 unk_1E4;                        /* inferred */
    /* 0x1E8 */ char pad_1E8[0x18];                 /* maybe part of unk_1E4[7]? */
    /* 0x200 */ ? unk_200;                          /* inferred */
    /* 0x200 */ char pad_200[0x800];
    /* 0xA00 */ s16 unk_A00;                        /* inferred */
    /* 0xA02 */ char pad_A02[0x2];
    /* 0xA04 */ f32 unk_A04;                        /* inferred */
    /* 0xA08 */ f32 unk_A08;                        /* inferred */
    /* 0xA0C */ f32 unk_A0C;                        /* inferred */
    /* 0xA10 */ f32 unk_A10;                        /* inferred */
    /* 0xA14 */ f32 unk_A14;                        /* inferred */
    /* 0xA18 */ f32 unk_A18;                        /* inferred */
    /* 0xA1C */ f32 unk_A1C;                        /* inferred */
    /* 0xA20 */ f32 unk_A20;                        /* inferred */
    /* 0xA24 */ f32 unk_A24;                        /* inferred */
    /* 0xA28 */ f32 unk_A28;                        /* inferred */
    /* 0xA2C */ f32 unk_A2C;                        /* inferred */
} Boss06;                                           /* size = 0xA30 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_Boss06_Destroy {};             /* size 0x0 */

struct _mips2c_stack_Boss06_Draw {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ void *sp58;                          /* inferred */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x20];                   /* maybe part of sp68[9]? */
    /* 0x8C */ Gfx *sp8C;                           /* inferred */
    /* 0x90 */ Gfx *sp90;                           /* inferred */
    /* 0x94 */ char pad_94[0x3E];                   /* maybe part of sp90[16]? */
    /* 0xD2 */ u8 spD2;                             /* inferred */
    /* 0xD3 */ u8 spD3;                             /* inferred */
    /* 0xD4 */ char pad_D4[0xC];                    /* maybe part of spD3[13]? */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ char pad_E4[0xC];
};                                                  /* size = 0xF0 */

struct _mips2c_stack_Boss06_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Boss06_Update {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0xC];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_809F2120 {};              /* size 0x0 */

struct _mips2c_stack_func_809F2140 {};              /* size 0x0 */

struct _mips2c_stack_func_809F23CC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F24A8 {};              /* size 0x0 */

struct _mips2c_stack_func_809F24C8 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ Actor *sp48;                         /* inferred */
    /* 0x4C */ char pad_4C[0x2];
    /* 0x4E */ s16 sp4E;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809F2B64 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809F2C44 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F2E14 {};              /* size 0x0 */

struct _mips2c_stack_func_809F2E34 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F2ED0 {};              /* size 0x0 */

struct _mips2c_stack_func_809F2EE8 {};              /* size 0x0 */

void func_809F2120(s32 arg0, s32 arg1, s32 arg2);   /* static */
f32 func_809F2140();                                /* static */
void func_809F23CC(Boss06 *arg0);                   /* static */
void func_809F24A8(Boss06 *arg0, Boss06 *);         /* static */
void func_809F2E14(Boss06 *this, GlobalContext *globalCtx); /* static */
void func_809F2ED0(Boss06 *arg0, GlobalContext *arg1); /* static */
extern ? D_04023428;
extern ? D_06018BD0;
extern ? D_06018CF0;
extern ? D_06018DE0;
extern void D_06019360;
extern ? D_060193B0;
extern ? D_06019490;
extern s8 D_801F4E32;
extern f32 D_801F4E38;
extern f32 D_801F4E3C;
extern f32 D_801F4E40;
extern f32 D_801F4E44;
extern f32 D_801F4E48;
extern s16 D_801F4E4C;
extern s8 D_801F4E4E;
extern f32 D_801F4E50;
extern f32 D_801F4E54;
extern f32 D_801F4E58;
extern f32 D_801F4E5C;
extern f32 D_801F4E60;
extern s16 D_801F4E64;
static DamageTable D_809F4080 = {
    {
        0xF0,
        0xF0,
        0,
        0xF1,
        0xF0,
        0xF0,
        0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0x21,
        0x30,
        0x40,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0,
        0xF0,
        0,
        0,
        0,
        0,
        0xF0,
    },
};
static ColliderCylinderInit D_809F40C0 = {
    {3, 0x11, 9, 0x39, 0x10, 1},
    {3, {0xF7CFFFFF, 0, 4}, {0xF7FFFFFF, 0, 0}, 1, 5, 1},
    {0x5A, 0x8C, 0xA, {0, 0, 0}},
};
static ? D_809F40EC;                                /* unable to generate initializer */
static ? D_809F4370;
static Actor *D_809F4970;
static s32 D_809F4974;
static s32 D_809F4978;
static s32 D_809F497C;

void func_809F2120(s32 arg0, s32 arg1, s32 arg2) {
    D_809F4974 = arg0;
    D_809F4978 = arg1;
    D_809F497C = arg2;
}

f32 func_809F2140(void) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s32 temp_f16;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_t7;
    f32 phi_f2;
    f32 phi_f2_2;

    temp_hi = (s32) (D_809F4974 * 0xAB) % 0x763D;
    temp_hi_2 = (s32) (D_809F4978 * 0xAC) % 0x7663;
    temp_f16 = temp_hi_2;
    temp_t7 = (s32) (D_809F497C * 0xAA) % 0x7673;
    temp_f6 = (f32) temp_hi;
    D_809F4974 = temp_hi;
    D_809F4978 = temp_hi_2;
    D_809F497C = temp_t7;
    temp_f2 = (temp_f6 / 30269.0f) + ((f32) temp_f16 / 30307.0f) + ((f32) temp_t7 / 30323.0f);
    phi_f2 = temp_f2;
    phi_f2_2 = temp_f2;
    if (temp_f2 >= 1.0f) {
        do {
            temp_f2_2 = phi_f2 - 1.0f;
            phi_f2 = temp_f2_2;
            phi_f2_2 = temp_f2_2;
        } while (temp_f2_2 >= 1.0f);
    }
    return fabsf(phi_f2_2);
}

void Boss06_Init(Actor *thisx, GlobalContext *globalCtx) {
    Boss06 *temp_v1;
    s32 temp_a0;
    u8 *temp_v0;
    u8 *phi_v0;
    Boss06 *phi_v1;
    s32 phi_a0;
    Boss06 *this = (Boss06 *) thisx;

    D_809F4970 = this->actor.parent;
    this->actor.colChkInfo.damageTable = &D_809F4080;
    if ((gGameInfo->data[1312] != 0) || ((gSaveContext.eventInf[5] & 0x80) != 0)) {
        this->actionFunc = func_809F2E14;
    } else {
        this->actionFunc = func_809F2B64;
    }
    Actor_SetScale((Actor *) this, 0.1f);
    Math_Vec3f_Copy((Vec3f *) &this->actor.world, (this->actor.params * 0xC) + &D_809F40EC);
    this->actor.shape.rot.y = -0x8000;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_14C, (Actor *) this, &D_809F40C0);
    phi_v0 = gSegments[(u32) ((s32) &D_06019490 * 0x10) >> 0x1C] + ((s32) &D_06019490 & 0xFFFFFF) + 0x80000000;
    phi_v1 = this;
    phi_a0 = 0;
    do {
        temp_a0 = phi_a0 + 4;
        temp_v0 = phi_v0 + 4;
        phi_v1->unk_200 = (u8) *phi_v0;
        temp_v1 = phi_v1 + 4;
        temp_v1->unk_1FD = temp_v0->unk_-3;
        temp_v1->unk_1FE = temp_v0->unk_-2;
        temp_v1->unk_1FF = temp_v0->unk_-1;
        phi_v0 = temp_v0;
        phi_v1 = temp_v1;
        phi_a0 = temp_a0;
    } while (temp_a0 != 0x800);
    this->actor.flags &= -2;
}

void Boss06_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Boss06 *this = (Boss06 *) thisx;

}

void func_809F23CC(Boss06 *arg0) {
    Boss06 *temp_a0;
    Boss06 *temp_a1;
    f32 temp_f0;
    f32 temp_f2;
    u8 temp_v0;

    temp_a1 = arg0;
    temp_v0 = temp_a1->unk_14C.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        temp_a1->unk_14C.base.acFlags = temp_v0 & 0xFFFD;
        if ((temp_a1->unk_1C9 == 0) && (D_809F4970[5].world.unk_12 == 0)) {
            temp_a0 = temp_a1;
            if (temp_a1->actor.colChkInfo.damageEffect == 2) {
                arg0 = temp_a1;
                func_809F24A8(temp_a0, temp_a1);
                play_sound(0x4807U);
                temp_f0 = -(arg0->actor.world.pos.x - (f32) arg0->unk_14C.info.bumper.hitPos.x);
                arg0->unk_1B0 = temp_f0;
                arg0->unk_1BC = temp_f0 * 0.35f;
                temp_f2 = -((arg0->actor.world.pos.y + 80.0f) - (f32) arg0->unk_14C.info.bumper.hitPos.y);
                arg0->unk_1B4 = temp_f2;
                arg0->unk_1C0 = temp_f2 * -0.35f;
            }
        }
    }
}

void func_809F24A8(Boss06 *arg0) {
    arg0->actionFunc = func_809F24C8;
    arg0->unk_A28 = 0.0f;
    arg0->unk_1AC = 0.0f;
}

void func_809F24C8(Boss06 *this, GlobalContext *globalCtx) {
    s16 sp4E;
    Actor *sp48;
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *temp_s0_3;
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    Actor *temp_v1;
    Actor *temp_v1_2;
    f32 *temp_s0_4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    u8 temp_v0;
    Actor *phi_s0;
    s32 phi_a1;
    Actor *phi_v0;
    s32 phi_a1_2;

    sp4E = 0;
    sp48 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk_1C9;
    this->unk_1CA += 1;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                temp_s0 = this->actor.child;
                if (this->unk_1CA == 1) {
                    this->unk_A1C = fabsf(this->unk_A10 - temp_s0->world.pos.x);
                    this->unk_A20 = fabsf(this->unk_A14 - temp_s0->world.pos.y);
                    this->unk_A24 = fabsf(this->unk_A18 - temp_s0->world.pos.z);
                }
                Math_ApproachF(&this->unk_A10, temp_s0->world.pos.x, 0.15f, this->unk_A1C * this->unk_A28);
                Math_ApproachF(&this->unk_A14, temp_s0->world.pos.y, 0.15f, this->unk_A20 * this->unk_A28);
                Math_ApproachF(&this->unk_A18, temp_s0->world.pos.z, 0.15f, this->unk_A24 * this->unk_A28);
                Math_ApproachF(&this->unk_A28, 1.0f, 1.0f, 0.001f);
                if ((s32) this->unk_1CA >= 0x51) {
                    func_809F2ED0(this, globalCtx);
                    func_80169AFC(globalCtx, this->unk_A00, 0);
                    this->unk_A00 = 0;
                    func_800EA0EC(globalCtx, &globalCtx->csCtx);
                    func_800B7298(globalCtx, (Actor *) this, 6U);
                    D_809F4970->unk_151 = 0;
                }
            }
        } else {
            goto block_9;
        }
    } else if (ActorCutscene_GetCurrentIndex() == -1) {
        func_800EA0D4(globalCtx, &globalCtx->csCtx);
        func_800B7298(globalCtx, (Actor *) this, 7U);
        this->unk_A00 = func_801694DC(globalCtx);
        func_80169590(globalCtx, 0, 1);
        func_80169590(globalCtx, this->unk_A00, 7);
        D_809F4970->unk_151 = 1;
        this->unk_1C9 = 1;
        this->unk_1C8 = 1;
        this->unk_1E0 = 255.0f;
        this->unk_1DC = 0.0f;
        temp_s0_2 = globalCtx->actorCtx.actorList[7].first;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 != 0) {
            do {
                if (phi_s0->id == 0xF) {
                    Actor_MarkForDeath(phi_s0);
                }
                temp_s0_3 = phi_s0->next;
                phi_s0 = temp_s0_3;
            } while (temp_s0_3 != 0);
        }
block_9:
        if ((s32) this->unk_1CA >= 0xA) {
            Math_ApproachF(&this->unk_1E4, 30.0f, 0.2f, 1.0f);
            globalCtx->envCtx.unk_E5 = 1;
            globalCtx->envCtx.unk_E6[2] = 0;
            globalCtx->envCtx.unk_E6[1] = 0;
            globalCtx->envCtx.unk_E6[0] = 0;
            globalCtx->envCtx.unk_E6[3] = (u8) (u32) this->unk_A2C;
            Math_ApproachF(&this->unk_A2C, 75.0f, 1.0f, 3.0f);
        }
        phi_a1 = (s32) this->unk_1CA;
        if ((s32) this->unk_1CA >= 0x1E) {
            play_sound(0x2846U);
            phi_a1 = (s32) this->unk_1CA;
        }
        if (phi_a1 >= 0x3C) {
            globalCtx->envCtx.unk_E5 = 0;
            this->unk_1C8 = 0;
            this->unk_1DC = 0.0f;
            this->unk_1D8 = 0.0f;
            if (this->unk_1CA == 0x3C) {
                temp_v1 = D_809F4970;
                temp_v1->unk_154 = (u8) (temp_v1->unk_154 + 1);
                func_800B7298(globalCtx, (Actor *) this, 0x84U);
                sp48->shape.rot.y = 0;
                sp48->world.rot.y = sp48->shape.rot.y;
            }
            this->unk_A04 = sp48->world.pos.x + 20.0f;
            this->unk_A08 = sp48->world.pos.y + 20.0f;
            this->unk_A0C = sp48->world.pos.z + 30.0f;
            this->unk_A10 = sp48->world.pos.x;
            this->unk_A14 = sp48->world.pos.y + 26.0f;
            this->unk_A18 = sp48->world.pos.z;
            phi_a1_2 = (s32) this->unk_1CA;
            phi_a1_2 = (s32) this->unk_1CA;
            if ((s32) this->unk_1CA >= 0x4B) {
                temp_v0_2 = globalCtx->actorCtx.actorList[9].first;
                phi_v0 = temp_v0_2;
                if (temp_v0_2 != 0) {
loop_18:
                    if ((phi_v0->id == 0x115) && (temp_v1_2 = D_809F4970, (phi_v0 == temp_v1_2)) && (temp_v1_2->unk_680 != 0)) {
                        this->unk_A04 = 1307.0f;
                        this->unk_A08 = 142.0f;
                        this->unk_A0C = 2897.0f;
                        this->unk_A10 = 1376.0f;
                        this->unk_A14 = 132.0f;
                        this->unk_A18 = 2860.0f;
                        if ((s32) this->unk_1CA == 0x4B) {
                            D_809F4970->unk_148 = 1;
                            phi_a1_2 = (s32) this->unk_1CA;
                        }
                        sp4E = 0x11;
                    } else {
                        temp_v0_3 = phi_v0->next;
                        phi_v0 = temp_v0_3;
                        if (temp_v0_3 != 0) {
                            goto loop_18;
                        }
                    }
                }
            }
            if ((s32) (s16) (sp4E + 0x50) < phi_a1_2) {
                this->unk_1C9 = 2;
                this->unk_1CA = 0;
                this->unk_1B4 = 0.0f;
                this->unk_1B0 = 0.0f;
                this->unk_144 = 2;
                this->unk_1A4 = 0.0f;
                this->unk_1A0 = 0.0f;
                this->unk_1DC = 18.0f;
                this->unk_1E0 = 255.0f;
                this->unk_19C = 1.0f;
                Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x1D0, this->actor.world.pos.x, this->actor.world.pos.y - 200.0f, this->actor.world.pos.z - 170.0f, (s16) 0xF, (s16) 0, (s16) 0, 1);
                if (this->actor.params == 0) {
                    this->unk_A04 = this->actor.world.pos.x - 200.0f;
                } else {
                    this->unk_A04 = this->actor.world.pos.x + 200.0f;
                }
                temp_f2 = this->actor.world.pos.y;
                temp_f12 = this->actor.world.pos.z;
                this->unk_A10 = this->actor.world.pos.x;
                this->unk_A18 = temp_f12;
                this->unk_A08 = (temp_f2 - 200.0f) + 100.0f;
                this->unk_A0C = temp_f12 - 200.0f;
                this->unk_A14 = temp_f2 + 80.0f;
            }
        } else {
            temp_f2_2 = this->actor.world.pos.y;
            temp_f12_2 = this->actor.world.pos.z;
            temp_f0 = this->actor.world.pos.x;
            this->unk_A18 = temp_f12_2;
            this->unk_A08 = temp_f2_2 + 60.0f;
            this->unk_A04 = temp_f0;
            this->unk_A0C = temp_f12_2 - 210.0f;
            this->unk_A10 = temp_f0;
            this->unk_A14 = temp_f2_2 + 80.0f;
        }
    }
    if (this->unk_A00 != 0) {
        temp_s0_4 = &this->unk_A10;
        ShrinkWindow_SetLetterboxTarget(0x1B);
        Play_CameraSetAtEye(globalCtx, this->unk_A00, (Vec3f *) temp_s0_4, (Vec3f *) &this->unk_A04);
    }
}

void func_809F2B64(Boss06 *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    this->unk_1A8 = 110.0f;
    this->actionFunc = func_809F2C44;
    this->unk_144 = 3;
    this->unk_1E0 = 200.0f;
    this->unk_1DC = 15.0f;
    this->unk_1E4 = 30.0f;
    this->unk_1AC = 0.0f;
    this->unk_19C = 1.0f;
    Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x1D0, this->actor.world.pos.x, this->actor.world.pos.y - 200.0f, this->actor.world.pos.z - 170.0f, (s16) 0xF, (s16) 0, (s16) 0, 1);
    temp_v0 = D_809F4970;
    temp_v0->unk_154 = (u8) (temp_v0->unk_154 + 1);
}

void func_809F2C44(Boss06 *this, GlobalContext *globalCtx) {
    if (D_809F4970->unk_153 != 0) {
        this->unk_A28 = 0.008f;
        Math_ApproachF(&this->unk_1E4, 0.0f, 0.2f, 0.008f * 30.0f);
        Math_ApproachF(&this->unk_1AC, -70.0f, 0.2f, this->unk_A28 * 70.0f);
        Math_ApproachF(&this->unk_1A8, 0.0f, 0.2f, this->unk_A28 * 110.0f);
        Math_ApproachF(&this->unk_1A0, -900.0f, 0.2f, this->unk_A28 * 900.0f);
        Math_ApproachF(&this->unk_1A4, 1350.0f, 0.2f, this->unk_A28 * 1350.0f);
        Math_ApproachF(&this->unk_1E0, 100.0f, 0.2f, this->unk_A28 * 100.0f);
        if (this->unk_1E4 < 5.0f) {
            Math_ApproachF(&this->unk_19C, 0.0f, 1.0f, 0.03f);
        }
        if ((this->unk_1E4 > 0.1f) && (this->actor.params == 0)) {
            play_sound(0x218DU);
        }
    }
    if (D_809F4970->unk_153 == 2) {
        Actor_MarkForDeath(this->actor.child);
        this->actor.child = NULL;
        func_809F2E14(this, globalCtx);
    }
}

void func_809F2E14(Boss06 *this, GlobalContext *globalCtx) {
    this->actionFunc = func_809F2E34;
    this->unk_144 = 1;
}

void func_809F2E34(Boss06 *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp1C;
    Boss06 *temp_a0;
    ColliderCylinder *temp_a2;

    this->unk_1E0 = 200.0f;
    temp_a0 = this;
    this->unk_1DC = 15.0f;
    this = this;
    func_809F23CC(temp_a0);
    temp_a2 = &this->unk_14C;
    sp1C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    this->unk_14C.dim.pos.z = (s16) (s32) ((this->actor.world.pos.z - 50.0f) + 100.0f);
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

void func_809F2ED0(Boss06 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809F2EE8;
}

void func_809F2EE8(Boss06 *this, GlobalContext *globalCtx) {
    this->unk_1E0 = 100.0f;
    this->unk_1DC = 13.0f;
}

void Boss06_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp80;
    f32 sp7C;
    f32 *temp_s2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_f18;
    s32 temp_s0;
    s32 temp_v1;
    u8 temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    f32 phi_f26;
    f32 phi_f24;
    s32 phi_s0;
    Boss06 *this = (Boss06 *) thisx;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk_146;
    if (temp_v0 != 0) {
        this->unk_146 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_148;
    if (temp_v0_2 != 0) {
        this->unk_148 = temp_v0_2 - 1;
    }
    if (this->unk_1E4 > 0.0f) {
        if (this->actor.params == 0) {
            D_801F4E32 = 1;
            D_801F4E38 = this->actor.world.pos.x + this->unk_1B0;
            D_801F4E3C = this->actor.world.pos.y + 80.0f + this->unk_1B4 + this->unk_1AC;
            D_801F4E40 = this->actor.world.pos.z;
            D_801F4E44 = this->unk_1E4;
            D_801F4E48 = 10.0f;
            D_801F4E4C = 0;
        } else {
            D_801F4E4E = 1;
            D_801F4E50 = this->actor.world.pos.x + this->unk_1B0;
            D_801F4E54 = this->actor.world.pos.y + 80.0f + this->unk_1B4 + this->unk_1AC;
            D_801F4E58 = this->actor.world.pos.z;
            D_801F4E5C = this->unk_1E4;
            D_801F4E60 = 10.0f;
            D_801F4E64 = 0;
        }
    } else if (this->actor.params == 0) {
        D_801F4E32 = 0;
    } else {
        D_801F4E4E = 0;
    }
    temp_v0_3 = this->unk_1C8;
    if ((temp_v0_3 != 0) && (temp_v0_3 != 0)) {
        play_sound(0x2034U);
        this->unk_1CC += 0.6f;
        this->unk_1D0 += 0.1f;
        this->unk_1D4 += 0.020000001f;
        this->unk_1D8 += 0.00016f;
        this->unk_1DC += 0.4f;
        Math_ApproachZeroF(&this->unk_1B0, 1.0f, 0.7f);
        Math_ApproachZeroF(&this->unk_1B4, 1.0f, 0.7f);
        temp_s2 = &sp7C;
        phi_f26 = 0.0f;
        phi_f24 = 0.0f;
        phi_s0 = 0;
        do {
            temp_f20 = __sinf(phi_f26);
            temp_f2 = this->unk_1D0;
            temp_f22 = (((__sinf(phi_f24) * temp_f2) + temp_f2) * ((temp_f20 * this->unk_1D4) + 1.0f)) + this->unk_1CC;
            SysMatrix_InsertZRotation_f((f32) phi_s0 * 0.0061359233f, 0);
            SysMatrix_GetStateTranslationAndScaledY(temp_f22, (Vec3f *) temp_s2);
            sp7C += 32.0f + this->unk_1BC;
            sp80 += 32.0f + this->unk_1C0;
            phi_f26 += 0.030679617f;
            phi_f24 += 0.049087387f;
            if ((phi_s0 & 7) == 0) {
                Math_Vec3f_Copy(&D_809F4370 + ((phi_s0 / 8) * 0xC), (Vec3f *) temp_s2);
            }
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
            if ((sp7C >= 0.0f) && (sp80 >= 0.0f) && (sp7C < 64.0f) && (sp80 < 64.0f)) {
                temp_f18 = (s32) sp7C;
                temp_v1 = ((s32) sp80 << 5) + (temp_f18 / 2);
                if ((temp_f18 & 1) != 0) {
                    temp_v0_4 = this + temp_v1;
                    temp_v0_4->unk_200 = (u8) (temp_v0_4->unk_200 & 0xF0);
                } else {
                    temp_v0_5 = this + temp_v1;
                    temp_v0_5->unk_200 = (u8) (temp_v0_5->unk_200 & 0xF);
                }
            }
        } while (temp_s0 != 0x400);
    }
}

void Boss06_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 spE0;
    u8 spD3;
    u8 spD2;
    Gfx *sp90;
    Gfx *sp8C;
    f32 sp68;
    s32 sp64;
    s32 sp60;
    Gfx *sp5C;
    void *sp58;
    Actor *temp_a0_3;
    Gfx *temp_s0_2;
    Gfx *temp_s0_4;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_a0_2;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_s0;
    s16 temp_t0;
    s16 temp_t1;
    s32 temp_f10;
    s32 temp_s0_3;
    s32 temp_s1;
    u16 temp_v0;
    void *temp_v0_2;
    s32 phi_v0;
    f32 phi_f8;
    ? *phi_s0;
    f32 phi_f2;
    s32 phi_s1;
    Boss06 *this = (Boss06 *) thisx;

    spE0 = 0.0f;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C2DC(temp_a0);
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0 = gSaveContext.time;
    phi_v0 = (s32) temp_v0;
    if ((s32) temp_v0 >= 0x8001) {
        phi_v0 = (0xFFFF - temp_v0) & 0xFFFF;
    }
    temp_f8 = (f32) phi_v0;
    phi_f8 = temp_f8;
    if (phi_v0 < 0) {
        phi_f8 = temp_f8 + 4294967296.0f;
    }
    temp_f2 = phi_f8 / 32768.0f;
    temp_f0 = this->unk_19C;
    spD3 = (u8) (u32) (((10.0f * temp_f2) + 105.0f) * temp_f0);
    spD2 = (u8) (u32) (((40.0f * temp_f2) + 55.0f) * temp_f0);
    sp68 = temp_f2;
    if ((this->unk_144 & 2) != 0) {
        sp68 = temp_f2;
        temp_s0 = (s16) (s32) (Math_SinS(D_809F4970[1].id) * 1000.0f);
        temp_f0_2 = Math_CosS(D_809F4970[1].id);
        temp_v0_2 = gSegments[(u32) ((s32) &D_06018BD0 * 0x10) >> 0x1C] + ((s32) &D_06018BD0 & 0xFFFFFF) + 0x80000000;
        temp_v0_2->unk_2 = (s16) ((s32) this->unk_1A0 + 0xE92);
        temp_a1 = temp_s0 + 0x2A3;
        temp_a3 = temp_s0 - 0x2A3;
        temp_a0_2 = temp_s0 - 0x339;
        temp_v0_2->unk_32 = (s16) ((s32) this->unk_1A0 + 0xE92);
        temp_t0 = temp_s0 + 0x339;
        temp_v0_2->unk_42 = (s16) ((s32) this->unk_1A0 + 0xE92);
        temp_v0_2->unk_50 = temp_a1;
        temp_f10 = (s32) ((temp_f0_2 * -2000.0f) - 2000.0f);
        temp_v0_2->unk_72 = (s16) ((s32) this->unk_1A0 + 0xE92);
        temp_v0_2->unk_60 = temp_a3;
        temp_a2 = (s16) temp_f10 - 0x1C2;
        temp_t1 = (s16) temp_f10 - 0x79E;
        temp_v0_2->unk_54 = (s16) (((s16) temp_f10 + (s32) this->unk_1A4) - 0x708);
        temp_v0_2->unk_90 = temp_a1;
        temp_v0_2->unk_94 = temp_a2;
        temp_v0_2->unk_B0 = temp_a3;
        temp_v0_2->unk_B4 = temp_a2;
        temp_v0_2->unk_C0 = temp_a1;
        temp_v0_2->unk_C4 = temp_a2;
        temp_v0_2->unk_E0 = temp_a0_2;
        temp_v0_2->unk_64 = (s16) (((s16) temp_f10 + (s32) this->unk_1A4) - 0x708);
        temp_v0_2->unk_E4 = temp_t1;
        temp_v0_2->unk_F0 = temp_a0_2;
        temp_v0_2->unk_F4 = (s16) temp_f10;
        temp_v0_2->unk_100 = temp_t0;
        temp_v0_2->unk_104 = (s16) temp_f10;
        temp_v0_2->unk_110 = temp_t0;
        temp_v0_2->unk_114 = temp_t1;
        temp_a0_3 = this->actor.child;
        if (temp_a0_3 != 0) {
            temp_a0_3->world.pos.x = this->actor.world.pos.x + ((f32) temp_s0 * 0.1f);
            temp_a0_3->world.pos.z = (this->actor.world.pos.z - 170.0f) + ((f32) (s16) temp_f10 * 0.1f);
        }
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06019360));
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y - 234.0f, this->actor.world.pos.z + 30.0f, 0);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
        SysMatrix_InsertTranslation(0.0f, 0.0f, -1112.0f, 1);
        temp_s0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_s0_2[1];
        temp_s0_2->words.w0 = 0xDA380003;
        temp_s0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFA00009B;
        temp_v0_3->words.w1 = 0xFFFF0000 | (((u32) ((140.0f * sp68) + 115.0f) & 0xFF) << 8) | spD3;
        temp_v1 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v1[1];
        temp_v1->words.w1 = (u32) &D_06018CF0;
        temp_v1->words.w0 = 0xDE000000;
        temp_v0_4 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xFA0000FF;
        temp_v0_4->words.w1 = 0xFFFF0000 | (((u32) ((100.0f * sp68) + 65.0f) & 0xFF) << 8) | spD2;
        temp_v1_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v1_2[1];
        temp_v1_2->words.w1 = (u32) &D_06018DE0;
        temp_v1_2->words.w0 = 0xDE000000;
    }
    if ((this->unk_144 & 1) != 0) {
        temp_v0_5 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDB060020;
        sp68 = sp68;
        temp_v0_5->words.w1 = Lib_SegmentedToVirtual((void *) &this->unk_200);
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + this->unk_1A8, this->actor.world.pos.z, 0);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, 0.0f, 1);
        Matrix_RotateY(this->actor.shape.rot.y, 1U);
        temp_v0_6 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDA380003;
        temp_v0_6->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_7->words.w1 = (u32) &D_060193B0;
        if (this->unk_1D8 > 0.0f) {
            SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + 84.0f, this->actor.world.pos.z - 2.0f, 0);
            Matrix_RotateY(this->actor.shape.rot.y, 1U);
            func_809F2120(1, 0x71A5, 0x263A);
            temp_v1_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = &temp_v1_3[1];
            temp_v1_3->words.w1 = 0xFF0A0000;
            temp_v1_3->words.w0 = 0xFB000000;
            temp_v1_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = &temp_v1_4[1];
            temp_v1_4->words.w0 = 0xFA008080;
            temp_v1_4->words.w1 = 0xFFFF00E6;
            phi_s0 = &D_809F4370;
            phi_f2 = 30.0f;
            phi_s1 = 0;
            phi_f2 = 30.0f;
            do {
                if ((fabsf(phi_s0->unk_0 - 32.0f) < phi_f2) && (fabsf(phi_s0->unk_4 - 32.0f) < phi_f2)) {
                    sp60 = phi_s1 * 0xA;
                    sp5C = D_0407D590;
                    sp58 = globalCtx + 0x18000;
                    SysMatrix_StatePush();
                    temp_v1_5 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = &temp_v1_5[1];
                    temp_v1_5->words.w0 = 0xDB060020;
                    sp90 = temp_v1_5;
                    sp90->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) (sp58->unk_840 + sp60) * -0x14) & 0x1FF, 0x20, 0x80);
                    SysMatrix_InsertTranslation((phi_s0->unk_0 - 32.0f) * -2.4f, (phi_s0->unk_4 - 32.0f) * -2.4f, 0.0f, 1);
                    SysMatrix_InsertZRotation_f((f32) phi_s1 * 0.049087387f, 1);
                    if (func_809F2140() < 0.5f) {
                        SysMatrix_InsertYRotation_f(3.1415927f, 1);
                    }
                    Matrix_Scale(-0.0019999999f, -this->unk_1D8, 1.0f, 1);
                    temp_v1_6 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = &temp_v1_6[1];
                    temp_v1_6->words.w0 = 0xDA380003;
                    sp8C = temp_v1_6;
                    sp8C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                    temp_v1_7 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = &temp_v1_7[1];
                    temp_v1_7->words.w0 = 0xDE000000;
                    temp_v1_7->words.w1 = (u32) sp5C;
                    SysMatrix_StatePop();
                }
                temp_s1 = phi_s1 + 1;
                phi_s0 += 0xC;
                phi_s1 = temp_s1;
            } while (temp_s1 != 0x80);
        } else {
            spE0 = 7.0f;
        }
    }
    if (this->unk_1DC > 0.0f) {
        temp_s0_3 = (u32) ((this->unk_1E0 - 50.0f) + (50.0f * sp68)) & 0xFF;
        sp58 = globalCtx + 0x18000;
        sp64 = ((u32) ((100.0f * sp68) + 65.0f) & 0xFF) << 8;
        SysMatrix_InsertTranslation(this->actor.world.pos.x + this->unk_1B0, this->actor.world.pos.y + 84.0f + this->unk_1B4, (this->actor.world.pos.z - 2.0f) + spE0, 0);
        temp_v1_8 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v1_8[1];
        temp_v1_8->words.w0 = 0xDE000000;
        temp_v1_8->words.w1 = (u32) &D_04023348;
        temp_v1_9 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v1_9[1];
        temp_v1_9->words.w0 = 0xFA000000;
        temp_v1_9->words.w1 = (((u32) ((140.0f * sp68) + 115.0f) & 0xFF) << 8) | 0xFFFF0000 | (temp_s0_3 & 0xFF);
        temp_v1_10 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v1_10[1];
        temp_v1_10->words.w0 = 0xFB000000;
        temp_v1_10->words.w1 = sp64 | 0xFFCD0000 | 0x80;
        temp_f12 = this->unk_1DC;
        Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
        SysMatrix_InsertZRotation_s((s16) (sp58->unk_840 << 6), 1);
        temp_s0_4 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_s0_4[1];
        temp_s0_4->words.w0 = 0xDA380003;
        temp_s0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_11 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v1_11[1];
        temp_v1_11->words.w0 = 0xDE000000;
        temp_v1_11->words.w1 = (u32) &D_04023428;
    }
}
