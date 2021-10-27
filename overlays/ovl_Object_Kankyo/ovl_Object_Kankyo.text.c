typedef struct GameAllocNode {
    /* 0x00 */ GameAllocNode *next;
    /* 0x04 */ GameAllocNode *prev;
    /* 0x08 */ u32 size;
    /* 0x0C */ MtxF unk_C;                          /* inferred */
} GameAllocNode;                                    /* size = 0x10 */

typedef struct ObjectKankyo {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ f32 unk_144;                       /* inferred */
    /* 0x0148 */ f32 unk_148;                       /* inferred */
    /* 0x014C */ f32 unk_14C;                       /* inferred */
    /* 0x0150 */ f32 unk_150;                       /* inferred */
    /* 0x0154 */ f32 unk_154;                       /* inferred */
    /* 0x0158 */ char pad_158[0x14];                /* maybe part of unk_154[6]? */
    /* 0x016C */ f32 unk_16C;                       /* inferred */
    /* 0x0170 */ char pad_170[0x4];
    /* 0x0174 */ f32 unk_174;                       /* inferred */
    /* 0x0178 */ char pad_178[0x14];                /* maybe part of unk_174[6]? */
    /* 0x018C */ f32 unk_18C;                       /* inferred */
    /* 0x0190 */ f32 unk_190;                       /* inferred */
    /* 0x0194 */ char pad_194[0xFB8];               /* maybe part of unk_190[1007]? */
    /* 0x114C */ u16 unk_114C;                      /* inferred */
    /* 0x114E */ char pad_114E[0x2];
    /* 0x1150 */ void (*actionFunc)(ObjectKankyo *, GlobalContext *);
} ObjectKankyo;                                     /* size = 0x1154 */

struct _mips2c_stack_ObjectKankyo_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjectKankyo_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjectKankyo_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjectKankyo_SetupAction {};   /* size 0x0 */

struct _mips2c_stack_ObjectKankyo_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DBE8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DBEB0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808DBFB0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DC038 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DC18C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x10];                   /* maybe part of sp1C[5]? */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x1C];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808DC454 {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x24];                   /* maybe part of sp60[10]? */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x28];                   /* maybe part of sp90[11]? */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ char pad_D4[0xC];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_808DCB7C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DCBF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DCDB4 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x24];                   /* maybe part of sp64[10]? */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0xC];                    /* maybe part of sp8C[4]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x10];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_808DD3C8 {
    /* 0x00 */ char pad_0[0x68];
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x48];                   /* maybe part of sp68[19]? */
    /* 0xB4 */ u8 spB4;                             /* inferred */
    /* 0xB5 */ char pad_B5[0x3];                    /* maybe part of spB4[4]? */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x4];
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ char pad_D0[0x8];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_808DD970 {
    /* 0x00 */ char pad_0[0x9C];
    /* 0x9C */ void *sp9C;                          /* inferred */
    /* 0xA0 */ char pad_A0[0x10];                   /* maybe part of sp9C[5]? */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char pad_B8[0x4];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ char pad_C8[0x8];
};                                                  /* size = 0xD0 */

struct _mips2c_stack_func_808DDE74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DDE9C {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ void *sp74;                          /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

f32 func_800E031C(s32, void *);                     /* extern */
void func_808DBE8C(ObjectKankyo *arg0);             /* static */
void func_808DBEB0(ObjectKankyo *arg0, void *arg1); /* static */
void func_808DBFB0(ObjectKankyo *arg0, ? arg1);     /* static */
void func_808DC038(ObjectKankyo *arg0, ? arg1);     /* static */
void func_808DC18C(ObjectKankyo *this, GlobalContext *globalCtx); /* static */
void func_808DC454(void *arg0, void *arg1);         /* static */
void func_808DCDB4(ObjectKankyo *this, GlobalContext *globalCtx); /* static */
void func_808DD3C8(void *arg0, GameState *arg1);    /* static */
void func_808DD970(void *arg0, GlobalContext *arg1); /* static */
f32 func_808DDE74();                                /* static */
void func_808DDE9C(void *arg0, void *arg1);         /* static */
extern ? D_01000000;
extern ? D_040706E0;
extern s8 D_801F4E30;
static u16 D_808DE340 = 0;
static f32 D_808DE5B0;

void ObjectKankyo_SetupAction(ObjectKankyo *this, void (*actionFunc)(ObjectKankyo *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void func_808DBE8C(ObjectKankyo *arg0) {
    ObjectKankyo_SetupAction(arg0, func_808DC18C);
}

void func_808DBEB0(ObjectKankyo *arg0, void *arg1) {
    ObjectKankyo *temp_s1;
    s32 temp_s0;
    ObjectKankyo *phi_s1;
    s32 phi_s0;

    D_808DE5B0 = 0.0f;
    arg0->unk_144 = Rand_ZeroOne() * 360.0f;
    arg0->unk_148 = Rand_ZeroOne() * 360.0f;
    if (arg1->unk_170F8 == 0x80) {
        D_808DE5B0 = 1.0f;
        arg0->unk_114E = 1;
        phi_s0 = 0;
        if ((s32) arg1->unk_170F8 > 0) {
            phi_s1 = arg0;
            do {
                temp_s0 = phi_s0 + 1;
                temp_s1 = phi_s1 + 0x20;
                temp_s1->actor.draw = Rand_ZeroOne() * -200.0f;
                phi_s1 = temp_s1;
                phi_s0 = temp_s0;
            } while (temp_s0 < (s32) arg1->unk_170F8);
        }
    } else {
        arg0->unk_114E = 0;
    }
    ObjectKankyo_SetupAction(arg0, func_808DCB7C);
}

void func_808DBFB0(ObjectKankyo *arg0, ? arg1) {
    D_808DE5B0 = 0.0f;
    arg0->unk_114E = 0;
    arg0->unk_144 = Rand_ZeroOne() * 360.0f;
    arg0->unk_148 = Rand_ZeroOne() * 360.0f;
    arg0->unk_114C = D_808DE340;
    D_808DE340 += 1;
    ObjectKankyo_SetupAction(arg0, func_808DCBF8);
}

void func_808DC038(ObjectKankyo *arg0, ? arg1) {
    f32 temp_f10;
    s16 temp_v0;
    s16 phi_v0;

    arg0->unk_144 = Rand_ZeroOne() * 360.0f;
    temp_f10 = Rand_ZeroOne() * 360.0f;
    arg0->unk_114C = 0;
    arg0->unk_148 = temp_f10;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        (arg0 + (phi_v0 << 5))->unk_168 = 0;
        phi_v0 = temp_v0;
    } while ((s32) temp_v0 < 0x80);
    ObjectKankyo_SetupAction(arg0, func_808DCDB4);
}

void ObjectKankyo_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_t9;
    s16 phi_v0;
    ObjectKankyo *this = (ObjectKankyo *) thisx;

    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        (this + (phi_v0 << 5))->unk_168 = 0;
        phi_v0 = temp_v0;
    } while ((s32) temp_v0 < 0x80);
    temp_t9 = (u16) this->actor.params;
    this->actor.room = -1;
    switch (temp_t9) {
    case 0:
        func_808DBE8C();
        return;
    case 2:
        globalCtx->envCtx.unk_F2[2] = 0x80;
        func_808DBFB0();
        return;
    case 1:
    case 3:
        func_808DBEB0();
        return;
    case 4:
        func_808DC038();
        /* fallthrough */
    default:
        return;
    }
}

void ObjectKankyo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjectKankyo *this = (ObjectKankyo *) thisx;
    Actor_MarkForDeath((Actor *) this);
}

void func_808DC18C(ObjectKankyo *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp1C;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f8;
    f32 phi_f0;
    f32 phi_f2;

    temp_f14 = globalCtx->view.eye.x;
    temp_f2 = globalCtx->view.at.x - temp_f14;
    temp_f12 = globalCtx->view.at.y - globalCtx->view.eye.y;
    temp_f16 = globalCtx->view.at.z - globalCtx->view.eye.z;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f16 * temp_f16));
    temp_f18 = temp_f2 / temp_f0;
    temp_f2_2 = temp_f16 / temp_f0;
    temp_f8 = (temp_f12 / temp_f0) * 120.0f;
    this->unk_14C = temp_f14 + (temp_f18 * 50.0f);
    sp1C = temp_f8;
    temp_f12_2 = this->unk_14C;
    this->unk_150 = globalCtx->view.eye.y + temp_f8;
    this->unk_154 = globalCtx->view.eye.z + (temp_f2_2 * 50.0f);
    this->unk_16C = globalCtx->view.eye.x + (temp_f18 * 220.0f);
    this->unk_114C = 0;
    this->unk_174 = globalCtx->view.eye.z + (temp_f2_2 * 220.0f);
    this->unk_144 = 100.0f;
    if ((temp_f12_2 < -252.0f) && (temp_f12_2 > -500.0f)) {
        temp_f0_2 = this->unk_154;
        if ((temp_f0_2 > 3820.0f) && (temp_f0_2 < 4150.0f)) {
            this->unk_114C = 1;
            this->unk_144 = 400.0f;
            if (temp_f2_2 < 0.0f) {
                this->unk_14C = -350.0f;
                this->unk_16C = -350.0f;
                this->unk_154 = 3680.0f;
                this->unk_174 = 3680.0f;
                this->unk_150 = globalCtx->view.eye.y + sp1C;
            } else {
                this->unk_14C = -350.0f;
                this->unk_16C = -350.0f;
                this->unk_154 = 4280.0f;
                this->unk_174 = 4280.0f;
                this->unk_150 = globalCtx->view.eye.y + sp1C;
            }
        }
    }
    temp_f0_3 = globalCtx->envCtx.windSpeed / 60.0f;
    if (temp_f0_3 < 0.0f) {
        phi_f0 = 0.0f;
    } else {
        if (temp_f0_3 > 1.0f) {
            phi_f2 = 1.0f;
        } else {
            phi_f2 = temp_f0_3;
        }
        phi_f0 = phi_f2;
    }
    temp_a1 = &sp30;
    sp30 = (f32) globalCtx->envCtx.windDir.x * phi_f0;
    sp34 = (f32) globalCtx->envCtx.windDir.y + 100.0f;
    this = this;
    sp38 = (f32) globalCtx->envCtx.windDir.z * phi_f0;
    this->unk_18C = (f32) (0x4000 - Math_Vec3f_Pitch(&D_801D15B0, (Vec3f *) temp_a1));
    this->unk_190 = (f32) (Math_Vec3f_Yaw(&D_801D15B0, (Vec3f *) &sp30) + 0x8000);
}

void func_808DC454(void *arg0, void *arg1) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp60;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f24;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f30;
    s16 temp_a0;
    s16 temp_s4;
    s16 temp_v0_2;
    s16 temp_v1_2;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_s0;
    s16 phi_s4;
    f32 phi_f2;
    f32 phi_f20;
    f32 phi_f2_2;
    f32 phi_f0;
    f32 phi_f20_2;
    f32 phi_f2_3;
    f32 phi_f0_2;
    f32 phi_f22;
    f32 phi_f22_2;
    s32 phi_v1;
    f32 phi_f0_3;
    f32 phi_f0_4;

    temp_f2 = arg1->unk_EC - arg1->unk_E0;
    temp_f12 = arg1->unk_F0 - arg1->unk_E4;
    temp_f14 = arg1->unk_F4 - arg1->unk_E8;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    temp_f18 = temp_f12 / temp_f0;
    spD0 = temp_f2 / temp_f0;
    spCC = temp_f18;
    spC8 = temp_f14 / temp_f0;
    temp_v1 = arg1->unk_170F8;
    phi_s4 = 0;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 > 0) {
        do {
            temp_s0 = arg0 + (phi_s4 << 5);
            temp_v0 = temp_s0->unk_168;
            if (temp_v0 != 0) {
                if (temp_v0 != 1) {

                } else {
                    temp_v0_2 = arg1->unk_170B0;
                    temp_v1_2 = arg1->unk_170B2;
                    temp_a0 = arg1->unk_170B4;
                    temp_f24 = arg1->unk_E0 + (spD0 * 120.0f);
                    temp_f28 = arg1->unk_E4 + (spCC * 120.0f);
                    temp_f30 = arg1->unk_E8 + (spC8 * 120.0f);
                    sp60 = -120.0f;
                    temp_f2_2 = sqrtf((f32) (temp_v0_2 * temp_v0_2) + (f32) (temp_v1_2 * temp_v1_2) + (f32) (temp_a0 * temp_a0));
                    phi_f2 = temp_f2_2;
                    if (temp_f2_2 == 0.0f) {
                        phi_f2 = 0.001f;
                    }
                    spC4 = (f32) -(s32) temp_v0_2 / phi_f2;
                    spC0 = (f32) -(s32) temp_v1_2 / phi_f2;
                    spBC = (f32) -(s32) temp_a0 / phi_f2;
                    if (phi_s4 == 0) {
                        arg0->unk_144 = (f32) (arg0->unk_144 + (0.049999997f * Rand_ZeroOne()));
                        arg0->unk_148 = (f32) (arg0->unk_148 + (0.049999997f * Rand_ZeroOne()));
                    }
                    temp_f20 = arg1->unk_170B8 / 120.0f;
                    if (temp_f20 < 0.0f) {
                        phi_f20 = 0.0f;
                    } else {
                        if (temp_f20 > 1.0f) {
                            phi_f0_3 = 1.0f;
                        } else {
                            phi_f0_3 = temp_f20;
                        }
                        phi_f20 = phi_f0_3;
                    }
                    temp_f22 = (f32) phi_s4 * 100.0f;
                    temp_s0->unk_158 = (f32) (temp_s0->unk_158 + (__sinf((arg0->unk_144 + temp_f22) * 0.01f) + (spC4 * 10.0f * phi_f20)));
                    temp_s0->unk_160 = (f32) (temp_s0->unk_160 + (__cosf((arg0->unk_148 + temp_f22) * 0.01f) + (spBC * 10.0f * phi_f20)));
                    temp_s0->unk_15C = (f32) (temp_s0->unk_15C - (temp_s0->unk_164 - (spC0 * 3.0f * (arg1->unk_170B8 / 100.0f))));
                    temp_f22_2 = ((f32) -func_800DFCB4((arg1 + (arg1->unk_810 * 4))->unk_800) * 0.012f) + 40.0f;
                    phi_f22 = temp_f22_2;
                    if (temp_f22_2 < -40.0f) {
                        phi_f22 = -40.0f;
                    }
                    temp_f0_2 = temp_s0->unk_158 + temp_s0->unk_14C;
                    temp_f2_3 = temp_f0_2 - temp_f24;
                    phi_f2_2 = temp_f2_3;
                    phi_f0 = temp_f0_2;
                    if (temp_f2_3 > 120.0f) {
                        temp_s0->unk_14C = (f32) (temp_f24 - 120.0f);
                        temp_f0_3 = temp_s0->unk_158 + temp_s0->unk_14C;
                        phi_f2_2 = temp_f0_3 - temp_f24;
                        phi_f0 = temp_f0_3;
                    }
                    if (phi_f2_2 < sp60) {
                        temp_s0->unk_14C = (f32) (temp_f24 + 120.0f);
                        phi_f0 = temp_s0->unk_158 + temp_s0->unk_14C;
                    }
                    sp88 = phi_f0;
                    sp8C = temp_s0->unk_15C + temp_s0->unk_150;
                    sp90 = temp_s0->unk_160 + temp_s0->unk_154;
                    temp_f2_4 = Math_Vec3f_DistXZ((Vec3f *) &sp88, arg1 + 0xE0) / 200.0f;
                    if (temp_f2_4 < 0.0f) {
                        phi_f20_2 = 0.0f;
                    } else {
                        if (temp_f2_4 > 1.0f) {
                            phi_f0_4 = 1.0f;
                        } else {
                            phi_f0_4 = temp_f2_4;
                        }
                        phi_f20_2 = phi_f0_4;
                    }
                    temp_f0_4 = 100.0f + phi_f20_2 + 60.0f;
                    temp_f2_5 = (temp_s0->unk_15C + temp_s0->unk_150) - temp_f28;
                    phi_f2_3 = temp_f2_5;
                    if (temp_f0_4 < temp_f2_5) {
                        temp_s0->unk_150 = (f32) (temp_f28 - temp_f0_4);
                        phi_f2_3 = (temp_s0->unk_15C + temp_s0->unk_150) - temp_f28;
                    }
                    if (phi_f2_3 < -temp_f0_4) {
                        temp_s0->unk_150 = (f32) (temp_f28 + temp_f0_4);
                    }
                    temp_f0_5 = (temp_s0->unk_160 + temp_s0->unk_154) - temp_f30;
                    phi_f0_2 = temp_f0_5;
                    if (temp_f0_5 > 120.0f) {
                        temp_s0->unk_154 = (f32) (temp_f30 - 120.0f);
                        phi_f0_2 = (temp_s0->unk_160 + temp_s0->unk_154) - temp_f30;
                    }
                    if (phi_f0_2 < sp60) {
                        temp_s0->unk_154 = (f32) (temp_f30 + 120.0f);
                    }
                    if ((temp_s0->unk_15C + temp_s0->unk_150) < ((arg1->unk_E4 - phi_f22) - 40.0f)) {
                        temp_s0->unk_168 = 0U;
                    }
                    goto block_47;
                }
            } else {
                temp_f20_2 = 2.0f * 120.0f;
                temp_s0->unk_14C = (f32) (arg1->unk_E0 + (spD0 * 120.0f));
                temp_s0->unk_150 = (f32) (arg1->unk_E4 + (spCC * 120.0f));
                temp_s0->unk_154 = (f32) (arg1->unk_E8 + (spC8 * 120.0f));
                temp_s0->unk_158 = (f32) ((Rand_ZeroOne() - 0.5f) * temp_f20_2);
                temp_f22_3 = ((f32) func_800DFCB4((arg1 + (arg1->unk_810 * 4))->unk_800) * 0.004f) + 60.0f;
                phi_f22_2 = temp_f22_3;
                if (temp_f22_3 < 20.0f) {
                    phi_f22_2 = 20.0f;
                }
                if (arg0->unk_114E == 0) {
                    temp_s0->unk_15C = phi_f22_2;
                } else {
                    temp_s0->unk_15C = (f32) (temp_s0->unk_15C + phi_f22_2);
                    if ((phi_s4 + 1) == arg1->unk_170F8) {
                        arg0->unk_114E = 0U;
                    }
                }
                temp_s0->unk_160 = (f32) ((Rand_ZeroOne() - 0.5f) * temp_f20_2);
                if (arg1->unk_170FA == 0) {
                    temp_s0->unk_164 = (f32) ((Rand_ZeroOne() * 3.0f) + 1.0f);
                } else {
                    temp_s0->unk_164 = (f32) ((Rand_ZeroOne() * 3.0f) + 8.0f);
                }
                temp_s0->unk_168 = (u8) (temp_s0->unk_168 + 1);
block_47:
                phi_v1 = (s32) arg1->unk_170F8;
            }
            temp_s4 = phi_s4 + 1;
            phi_s4 = temp_s4;
        } while ((s32) temp_s4 < phi_v1);
    }
}

void func_808DCB7C(ObjectKankyo *this, GlobalContext *globalCtx) {
    u8 temp_a2;
    u8 temp_v1;

    temp_v1 = globalCtx->envCtx.unk_F2[2];
    temp_a2 = globalCtx->envCtx.unk_F2[3];
    if ((s32) temp_v1 < (s32) temp_a2) {
        if ((globalCtx->state.frames & 0xF) == 0) {
            globalCtx->envCtx.unk_F2[2] = temp_v1 + 2;
        }
    } else if (((s32) temp_a2 < (s32) temp_v1) && ((globalCtx->state.frames & 0xF) == 0)) {
        globalCtx->envCtx.unk_F2[2] = temp_v1 - 2;
    }
    func_808DC454((void *) temp_a2);
}

void func_808DCBF8(ObjectKankyo *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f6;
    s8 temp_v1_2;
    u8 temp_t9;
    u8 temp_v1;
    s32 phi_v1;
    f32 phi_f6;
    f32 phi_f2;

    temp_v1 = globalCtx->envCtx.unk_F2[2];
    phi_v1 = (s32) temp_v1;
    if (((s32) temp_v1 > 0) && (this->unk_114C == 0)) {
        temp_t9 = temp_v1 - 9;
        if ((globalCtx->state.frames & 0xF) == 0) {
            temp_v1_2 = temp_t9 & 0xFF;
            globalCtx->envCtx.unk_F2[2] = temp_t9;
            phi_v1 = (s32) temp_v1_2;
            if ((s32) temp_v1_2 < 0) {
                globalCtx->envCtx.unk_F2[2] = 0;
                phi_v1 = 0 & 0xFF;
            }
        }
    }
    temp_f6 = (f32) phi_v1;
    phi_f6 = temp_f6;
    phi_f2 = 0.0f;
    if (phi_v1 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f0 = phi_f6 / 128.0f;
    if (temp_f0 < 0.0f) {

    } else if (temp_f0 > 1.0f) {
        phi_f2 = 1.0f;
    } else {
        phi_f2 = temp_f0;
    }
    if (phi_f2 > 0.01f) {
        D_801F4E30 = (s8) (u32) (155.0f * phi_f2);
        globalCtx->envCtx.unk_EA = 0xA;
    } else {
        D_801F4E30 = 0;
        globalCtx->envCtx.unk_EA = 0xA;
    }
    func_808DC454((void *) temp_v1);
}

void func_808DCDB4(ObjectKankyo *this, GlobalContext *globalCtx) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp8C;
    f32 sp64;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f8;
    s16 temp_a0;
    s16 temp_s4;
    s16 temp_v0_3;
    s16 temp_v1;
    u16 temp_t6;
    u16 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;
    s32 phi_v1;
    s16 phi_s4;
    f32 phi_f2;
    f32 phi_f20;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f0_3;
    s32 phi_v1_2;
    f32 phi_f0_4;

    temp_v0 = this->unk_114C;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0x80) {
        temp_t6 = temp_v0 + 1;
        this->unk_114C = temp_t6;
        phi_v1 = temp_t6 & 0xFFFF;
    }
    temp_f2 = globalCtx->view.at.x - globalCtx->view.eye.x;
    temp_f12 = globalCtx->view.at.y - globalCtx->view.eye.y;
    temp_f14 = globalCtx->view.at.z - globalCtx->view.eye.z;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    temp_f18 = temp_f12 / temp_f0;
    spAC = temp_f2 / temp_f0;
    spA8 = temp_f18;
    spA4 = temp_f14 / temp_f0;
    phi_s4 = 0;
    phi_v1_2 = phi_v1;
    if (phi_v1 > 0) {
        do {
            temp_s0 = this + (phi_s4 << 5);
            temp_v0_2 = temp_s0->unk_168;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 1) {

                } else {
                    temp_v1 = globalCtx->envCtx.windDir.x;
                    temp_v0_3 = globalCtx->envCtx.windDir.y;
                    temp_a0 = globalCtx->envCtx.windDir.z;
                    temp_f18_2 = globalCtx->view.eye.z;
                    temp_f26 = globalCtx->view.eye.x + (spAC * 120.0f);
                    temp_f28 = globalCtx->view.eye.y + (spA8 * 120.0f);
                    temp_f8 = spA4 * 120.0f;
                    sp64 = -80.0f;
                    temp_f2_2 = sqrtf((f32) (temp_v1 * temp_v1) + (f32) (temp_v0_3 * temp_v0_3) + (f32) (temp_a0 * temp_a0));
                    phi_f2 = temp_f2_2;
                    if (temp_f2_2 == 0.0f) {
                        phi_f2 = 0.001f;
                    }
                    spA0 = (f32) -(s32) temp_v1 / phi_f2;
                    sp9C = (f32) -(s32) temp_a0 / phi_f2;
                    if (phi_s4 == 0) {
                        sp8C = temp_f18_2 + temp_f8;
                        this->unk_144 += 0.049999997f * Rand_ZeroOne();
                        this->unk_148 += 0.049999997f * Rand_ZeroOne();
                    }
                    temp_f20 = globalCtx->envCtx.windSpeed / 120.0f;
                    temp_f22 = (f32) phi_s4;
                    if (temp_f20 < 0.0f) {
                        phi_f20 = 0.0f;
                    } else {
                        if (temp_f20 > 1.0f) {
                            phi_f0_4 = 1.0f;
                        } else {
                            phi_f0_4 = temp_f20;
                        }
                        phi_f20 = phi_f0_4;
                    }
                    sp8C = temp_f18_2 + temp_f8;
                    temp_s0->unk_158 = (f32) (temp_s0->unk_158 + (__sinf((this->unk_144 + temp_f22) * 0.01f) + (spA0 * 10.0f * phi_f20)));
                    temp_s0->unk_160 = (f32) (temp_s0->unk_160 + (__cosf((this->unk_148 + temp_f22) * 0.01f) + (sp9C * 10.0f * phi_f20)));
                    if ((phi_s4 & 1) == 0) {
                        temp_s0->unk_15C = (f32) (temp_s0->unk_15C + temp_s0->unk_164);
                        if ((globalCtx->view.eye.y + 100.0f) < (temp_s0->unk_15C + temp_s0->unk_150)) {
                            goto block_25;
                        }
                    } else {
                        temp_s0->unk_15C = (f32) (temp_s0->unk_15C - temp_s0->unk_164);
                        if ((temp_s0->unk_15C + temp_s0->unk_150) < (globalCtx->view.eye.y - 100.0f)) {
block_25:
                            temp_s0->unk_168 = 0U;
                        }
                    }
                    temp_f0_2 = (temp_s0->unk_158 + temp_s0->unk_14C) - temp_f26;
                    phi_f0 = temp_f0_2;
                    if (temp_f0_2 > 80.0f) {
                        temp_s0->unk_14C = (f32) (temp_f26 - 80.0f);
                        phi_f0 = (temp_s0->unk_158 + temp_s0->unk_14C) - temp_f26;
                    }
                    if (phi_f0 < sp64) {
                        temp_s0->unk_14C = (f32) (temp_f26 + 80.0f);
                    }
                    temp_f0_3 = (temp_s0->unk_15C + temp_s0->unk_150) - temp_f28;
                    phi_f0_2 = temp_f0_3;
                    if (temp_f0_3 > 80.0f) {
                        temp_s0->unk_150 = (f32) (temp_f28 - 80.0f);
                        phi_f0_2 = (temp_s0->unk_15C + temp_s0->unk_150) - temp_f28;
                    }
                    if (phi_f0_2 < sp64) {
                        temp_s0->unk_150 = (f32) (temp_f28 + 80.0f);
                    }
                    temp_f0_4 = (temp_s0->unk_160 + temp_s0->unk_154) - (temp_f18_2 + temp_f8);
                    phi_f0_3 = temp_f0_4;
                    if (temp_f0_4 > 80.0f) {
                        temp_s0->unk_154 = (f32) ((temp_f18_2 + temp_f8) - 80.0f);
                        phi_f0_3 = (temp_s0->unk_160 + temp_s0->unk_154) - (temp_f18_2 + temp_f8);
                    }
                    if (phi_f0_3 < sp64) {
                        temp_s0->unk_154 = (f32) (temp_f18_2 + temp_f8 + 80.0f);
                    }
                    goto block_38;
                }
            } else {
                temp_f20_2 = 2.0f * 120.0f;
                temp_s0->unk_14C = (f32) (globalCtx->view.eye.x + (spAC * 120.0f));
                temp_s0->unk_150 = (f32) (globalCtx->view.eye.y + (spA8 * 120.0f));
                temp_s0->unk_154 = (f32) (globalCtx->view.eye.z + (spA4 * 120.0f));
                temp_s0->unk_158 = (f32) ((Rand_ZeroOne() - 0.5f) * temp_f20_2);
                if ((phi_s4 & 1) == 0) {
                    temp_s0->unk_15C = -100.0f;
                } else {
                    temp_s0->unk_15C = 100.0f;
                }
                temp_s0->unk_160 = (f32) ((Rand_ZeroOne() - 0.5f) * temp_f20_2);
                temp_f10 = Rand_ZeroOne() + 0.2f;
                temp_s0->unk_168 = (u8) (temp_s0->unk_168 + 1);
                temp_s0->unk_164 = temp_f10;
block_38:
                phi_v1_2 = (s32) this->unk_114C;
            }
            temp_s4 = phi_s4 + 1;
            phi_s4 = temp_s4;
        } while ((s32) temp_s4 < phi_v1_2);
    }
}

void ObjectKankyo_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjectKankyo *this = (ObjectKankyo *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjectKankyo_Draw(Actor *thisx, GlobalContext *globalCtx) {
    u16 temp_t6;
    ObjectKankyo *this = (ObjectKankyo *) thisx;

    temp_t6 = (u16) this->actor.params;
    switch (temp_t6) {
    case 0:
        func_808DDE9C();
        return;
    case 1:
    case 2:
    case 3:
        func_808DD3C8();
        return;
    case 4:
        func_808DD970();
        /* fallthrough */
    default:
        return;
    }
}

void func_808DD3C8(void *arg0, GameState *arg1) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spB8;
    u8 spB4;
    s32 sp68;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1_2;
    GraphicsContext *temp_s1;
    MtxF *temp_s5;
    f32 *temp_a1;
    f32 *temp_s7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    s16 temp_s2;
    s32 temp_v0;
    u8 *temp_s4;
    u8 temp_v1;
    void *temp_v0_2;
    f32 phi_f0;
    f32 phi_f18;
    s32 phi_v0;
    s16 phi_s2;
    f32 phi_f20;
    f32 phi_f0_2;
    f32 phi_f2;
    f32 phi_f2_2;

    if (((arg1->unk_800->unk_14C & 0x100) == 0) && (arg1->unk_170E6 != 0)) {
        temp_s1 = arg1->gfxCtx;
        spB4 = 0;
        if (arg0->unk_1C == 3) {
            arg0 = arg0;
            temp_f0 = (f32) func_80173B48(arg1) / 1.4e7f;
            if (temp_f0 < 0.0f) {
                phi_f0 = 0.0f;
            } else {
                if (temp_f0 > 1.0f) {
                    phi_f2 = 1.0f;
                } else {
                    phi_f2 = temp_f0;
                }
                phi_f0 = phi_f2;
            }
            Math_SmoothStepToF(&D_808DE5B0, phi_f0, 0.2f, 0.1f, 0.001f);
            temp_v1 = arg1->unk_170F8;
            temp_f18 = (f32) temp_v1;
            phi_f18 = temp_f18;
            phi_f20 = 1.0f;
            if ((s32) temp_v1 < 0) {
                phi_f18 = temp_f18 + 4294967296.0f;
            }
            temp_v0 = (u32) (phi_f18 * D_808DE5B0) & 0xFF;
            phi_v0 = temp_v0;
            if (((s32) temp_v1 >= 0x20) && (temp_v0 < 0x20)) {
                phi_v0 = 0x20;
            }
            sp68 = phi_v0;
        } else {
            sp68 = (s32) arg1->unk_170F8;
            phi_f20 = 1.0f;
        }
        temp_s7 = &spC4;
        phi_s2 = 0;
        if (sp68 > 0) {
            arg0 = arg0;
            do {
                temp_v0_2 = arg0 + (phi_s2 << 5);
                temp_a1 = temp_s7;
                spC4 = temp_v0_2->unk_158 + temp_v0_2->unk_14C;
                spC8 = temp_v0_2->unk_15C + temp_v0_2->unk_150;
                spCC = temp_v0_2->unk_160 + temp_v0_2->unk_154;
                func_80169474((GlobalContext *) arg1, (Vec3f *) temp_a1, (Vec3f *) &spB8);
                if ((spB8 >= 0.0f) && (spB8 < 320.0f) && (spBC >= 0.0f) && (spBC < 240.0f)) {
                    temp_s5 = &arg1[611].alloc.base.unk_C;
                    temp_s4 = &arg1[1].input[1].press.errno;
                    if (spB4 == 0) {
                        spB4 = 1;
                        temp_v0_3 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = temp_v0_3 + 8;
                        temp_v0_3->words.w1 = 0;
                        temp_v0_3->words.w0 = 0xE7000000;
                        temp_v0_4 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = temp_v0_4 + 8;
                        temp_v0_4->words.w1 = -1;
                        temp_v0_4->words.w0 = 0xFB000000;
                        temp_v0_5 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = temp_v0_5 + 8;
                        temp_v0_5->words.w1 = 0;
                        temp_v0_5->words.w0 = 0xD9FDFFFF;
                        temp_s1->polyXlu.p = Gfx_CallSetupDL(temp_s1->polyXlu.p, 0U);
                        temp_v0_6 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = &temp_v0_6[1];
                        temp_v0_6->words.w0 = 0xE200001C;
                        temp_v0_6->words.w1 = 0xC8104B50;
                        temp_v0_7 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = &temp_v0_7[1];
                        temp_v0_7->words.w1 = 0x10000;
                        temp_v0_7->words.w0 = 0xD9FFFFFF;
                        temp_v0_8 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = &temp_v0_8[1];
                        temp_v0_8->words.w0 = 0xDB060020;
                        temp_v0_8->words.w1 = Lib_SegmentedToVirtual((void *) D_0408EBE0);
                    }
                    SysMatrix_InsertTranslation(spC4, spC8, spCC, 0);
                    temp_f12 = 0.05f + ((f32) (phi_s2 & 7) * 0.008f);
                    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                    temp_f2 = Math_Vec3f_DistXYZ((Vec3f *) temp_s7, (Vec3f *) temp_s4) / 300.0f;
                    if (phi_f20 < temp_f2) {
                        phi_f0_2 = 0.0f;
                    } else {
                        temp_f0_2 = phi_f20 - temp_f2;
                        if (phi_f20 < temp_f0_2) {
                            phi_f2_2 = phi_f20;
                        } else {
                            phi_f2_2 = temp_f0_2;
                        }
                        phi_f0_2 = phi_f2_2;
                    }
                    temp_v0_9 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = &temp_v0_9[1];
                    temp_v0_9->words.w1 = 0;
                    temp_v0_9->words.w0 = 0xE7000000;
                    temp_v1_2 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = &temp_v1_2[1];
                    temp_v1_2->words.w0 = 0xFA000000;
                    temp_v1_2->words.w1 = ((u32) (160.0f * phi_f0_2) & 0xFF) | ~0xFF;
                    SysMatrix_InsertMatrix(temp_s5, 1);
                    temp_v0_10 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = &temp_v0_10[1];
                    temp_v0_10->words.w0 = 0xDA380003;
                    temp_v0_10->words.w1 = Matrix_NewMtx(arg1->gfxCtx);
                    temp_v0_11 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = &temp_v0_11[1];
                    temp_v0_11->words.w1 = (u32) &D_04023130;
                    temp_v0_11->words.w0 = 0xDE000000;
                }
                temp_s2 = phi_s2 + 1;
                phi_s2 = temp_s2;
            } while ((s32) temp_s2 < sp68);
        }
    }
}

void func_808DD970(void *arg0, GlobalContext *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB0;
    void *sp9C;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    GraphicsContext *temp_s0;
    MtxF *temp_s3;
    Vec3f *temp_s1;
    f32 *temp_a1;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    s16 temp_s4;
    s32 temp_a0;
    s32 temp_t7;
    void *temp_a3;
    void *temp_v0;
    f32 phi_f26;
    f32 phi_f26_2;
    s16 phi_s4;
    f32 phi_f24;
    f32 phi_f26_3;
    f32 phi_f20;

    temp_a3 = arg0;
    sp9C = temp_a3;
    if (arg1->sceneNum == 0x69) {
        arg0 = temp_a3;
        phi_f24 = 0.0f;
        phi_f26_3 = 1.0f;
        goto block_9;
    }
    arg0 = temp_a3;
    temp_f0 = func_800E031C((arg1 + (arg1->activeCamera * 4))->unk_800, temp_a3);
    if (temp_f0 != -32000.0f) {
        phi_f26 = (temp_f0 - arg1->view.eye.y) / 4000.0f;
    } else {
        phi_f26 = 0.0f;
    }
    phi_f26_2 = phi_f26;
    phi_f24 = 0.0f;
    if (phi_f26 > 1.0f) {
        phi_f26_2 = 1.0f;
    }
    phi_f26_3 = phi_f26_2;
    if (((arg1->cameraPtrs[0]->unk_14C & 0x100) != 0) && (phi_f26_2 != 0.0f)) {
block_9:
        temp_s0 = arg1->state.gfxCtx;
        phi_s4 = 0;
        if ((s32) arg0->unk_114C > 0) {
            arg0 = arg0;
            temp_s6 = &spBC;
            do {
                temp_v0 = arg0 + (phi_s4 << 5);
                temp_a1 = temp_s6;
                spBC = temp_v0->unk_158 + temp_v0->unk_14C;
                spC0 = temp_v0->unk_15C + temp_v0->unk_150;
                spC4 = temp_v0->unk_160 + temp_v0->unk_154;
                func_80169474(arg1, (Vec3f *) temp_a1, (Vec3f *) &spB0);
                if ((phi_f24 <= spB0) && (spB0 < 320.0f) && (phi_f24 <= spB4)) {
                    temp_s1 = &arg1->view.eye;
                    if (spB4 < 240.0f) {
                        temp_t7 = (u32) (255.0f * phi_f26_3) & 0xFF;
                        temp_f20 = (f32) temp_t7;
                        phi_f20 = temp_f20;
                        if (temp_t7 < 0) {
                            phi_f20 = temp_f20 + 4294967296.0f;
                        }
                        temp_s3 = &arg1->mf_187FC;
                        SysMatrix_InsertTranslation(spBC, spC0, spC4, 0);
                        Matrix_Scale(0.03f, 0.03f, 0.03f, 1);
                        temp_f0_2 = Math_Vec3f_DistXYZ((Vec3f *) temp_s6, temp_s1);
                        temp_v0_2 = temp_s0->polyXlu.p;
                        temp_s0->polyXlu.p = temp_v0_2 + 8;
                        temp_v0_2->words.w1 = 0;
                        temp_v0_2->words.w0 = 0xE7000000;
                        temp_v1 = temp_s0->polyXlu.p;
                        temp_s0->polyXlu.p = temp_v1 + 8;
                        temp_v1->words.w0 = 0xFA000000;
                        temp_a0 = (u32) (phi_f20 * (1.0f - (temp_f0_2 / 300.0f))) & 0xFF;
                        temp_v1->words.w1 = temp_a0 | 0xFFFF3700;
                        temp_v0_3 = temp_s0->polyXlu.p;
                        temp_s0->polyXlu.p = temp_v0_3 + 8;
                        temp_v0_3->words.w1 = temp_a0 | 0x3732FF00;
                        temp_v0_3->words.w0 = 0xFB000000;
                        SysMatrix_InsertMatrix(temp_s3, 1);
                        temp_v0_4 = temp_s0->polyXlu.p;
                        temp_s0->polyXlu.p = temp_v0_4 + 8;
                        temp_v0_4->words.w0 = 0xDA380003;
                        temp_v0_4->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                        temp_v0_5 = temp_s0->polyXlu.p;
                        temp_s0->polyXlu.p = &temp_v0_5[1];
                        temp_v0_5->words.w0 = 0xDB060020;
                        temp_v0_5->words.w1 = Lib_SegmentedToVirtual((void *) D_0408EBE0);
                        temp_v0_6 = temp_s0->polyXlu.p;
                        temp_s0->polyXlu.p = &temp_v0_6[1];
                        temp_v0_6->words.w1 = 0;
                        temp_v0_6->words.w0 = 0xD9FDFFFF;
                        temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0U);
                        temp_v0_7 = temp_s0->polyXlu.p;
                        temp_s0->polyXlu.p = &temp_v0_7[1];
                        temp_v0_7->words.w0 = 0xE200001C;
                        temp_v0_7->words.w1 = 0xC8104B50;
                        temp_v0_8 = temp_s0->polyXlu.p;
                        temp_s0->polyXlu.p = &temp_v0_8[1];
                        temp_v0_8->words.w1 = 0x10000;
                        temp_v0_8->words.w0 = 0xD9FFFFFF;
                        temp_v0_9 = temp_s0->polyXlu.p;
                        temp_s0->polyXlu.p = &temp_v0_9[1];
                        temp_v0_9->words.w1 = (u32) &D_04023130;
                        temp_v0_9->words.w0 = 0xDE000000;
                    }
                }
                temp_s4 = phi_s4 + 1;
                phi_s4 = temp_s4;
            } while ((s32) temp_s4 < (s32) sp9C->unk_114C);
        }
    }
}

f32 func_808DDE74(void) {
    return Rand_ZeroOne() - 0.5f;
}

void func_808DDE9C(void *arg0, void *arg1) {
    void *sp74;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_s0_2;
    s32 temp_s4;
    s32 temp_s4_2;
    u8 temp_s0;
    s32 phi_s4;
    s32 phi_s5;
    s32 phi_s4_2;

    sp74 = arg1->unk_1CCC;
    temp_s0 = arg1->unk_170F7;
    temp_s1 = arg1->unk_0;
    if (temp_s0 != 0) {
        temp_v0 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0x96FFFF19;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_s1->polyXlu.p = Gfx_CallSetupDL(temp_s1->polyXlu.p, 0x14U);
    }
    phi_s4 = 0;
    phi_s4_2 = 0;
    if ((s32) temp_s0 > 0) {
        do {
            temp_f20 = ((Rand_ZeroOne() - 0.7f) * arg0->unk_144) + arg0->unk_14C;
            temp_f22 = ((Rand_ZeroOne() - 0.7f) * arg0->unk_144) + arg0->unk_150;
            temp_f2 = ((Rand_ZeroOne() - 0.7f) * arg0->unk_144) + arg0->unk_154;
            if (!(temp_f20 < -252.0f) || !(temp_f20 > -500.0f) || !(temp_f2 > 3820.0f) || !(temp_f2 < 4150.0f)) {
                SysMatrix_InsertTranslation(temp_f20, temp_f22, temp_f2, 0);
                temp_v0_3 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_3[1];
                temp_v0_3->words.w1 = (u32) &D_01000000;
                temp_v0_3->words.w0 = 0xDA380001;
                temp_s0_2 = (s32) (phi_s4 << 0x15) >> 0x10;
                Matrix_RotateY((s16) ((s32) arg0->unk_190 + temp_s0_2), 1U);
                SysMatrix_InsertXRotation_s((s16) ((s32) arg0->unk_18C + temp_s0_2), 1);
                if (arg0->unk_114C == 0) {
                    Matrix_Scale(0.5f, 1.0f, 0.5f, 1);
                } else {
                    Matrix_Scale(2.0f, 4.0f, 2.0f, 1);
                }
                temp_v0_4 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_4[1];
                temp_v0_4->words.w0 = 0xDA380003;
                temp_v0_4->words.w1 = Matrix_NewMtx(arg1->unk_0);
                temp_v0_5 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_5[1];
                temp_v0_5->words.w1 = (u32) &D_040706E0;
                temp_v0_5->words.w0 = 0xDE000000;
            }
            temp_s4 = phi_s4 + 1;
            phi_s4 = temp_s4;
        } while (temp_s4 != temp_s0);
    }
    phi_s5 = 0;
    if ((sp74->unk_88 < arg1->unk_E4) && ((s32) temp_s0 > 0)) {
        do {
            if (phi_s5 == 0) {
                func_8012C2DC(arg1->unk_0);
                temp_v0_6 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_6[1];
                temp_v0_6->words.w1 = -1;
                temp_v0_6->words.w0 = 0xFB000000;
                temp_v0_7 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_7[1];
                temp_v0_7->words.w1 = -0x9C;
                temp_v0_7->words.w0 = 0xFA000000;
                phi_s5 = (phi_s5 + 1) & 0xFF;
            }
            temp_f20_2 = (func_808DDE74() * 220.0f) + arg0->unk_16C;
            temp_f22_2 = sp74->unk_88 + 2.0f;
            temp_f2_2 = (func_808DDE74() * 220.0f) + arg0->unk_174;
            if (!(temp_f20_2 < -252.0f) || !(temp_f20_2 > -500.0f) || !(temp_f2_2 > 3820.0f) || !(temp_f2_2 < 4150.0f)) {
                SysMatrix_InsertTranslation(temp_f20_2, temp_f22_2, temp_f2_2, 0);
                temp_f12 = (Rand_ZeroOne() * 0.05f) + 0.05f;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                temp_v0_8 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_8[1];
                temp_v0_8->words.w0 = 0xDA380003;
                temp_v0_8->words.w1 = Matrix_NewMtx(arg1->unk_0);
                temp_v0_9 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_9[1];
                temp_v0_9->words.w1 = (u32) D_04030100;
                temp_v0_9->words.w0 = 0xDE000000;
            }
            temp_s4_2 = phi_s4_2 + 1;
            phi_s4_2 = temp_s4_2;
        } while (temp_s4_2 != temp_s0);
    }
}
