typedef struct EnTanron5 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk144;                         /* inferred */
    /* 0x146 */ char pad146[0x2];
    /* 0x148 */ ? *unk148;                          /* inferred */
    /* 0x14C */ ColliderCylinder unk14C;            /* inferred */
    /* 0x154 */ s16 *unk154;                        /* overlap; inferred */
    /* 0x158 */ char pad158[0x5];                   /* maybe part of unk154[2]? */
    /* 0x15D */ u8 unk15D;                          /* inferred */
    /* 0x15E */ char pad15E[0x2A];                  /* maybe part of unk15D[43]? */
    /* 0x188 */ s32 *unk188;                        /* inferred */
    /* 0x18C */ s16 unk18C;                         /* inferred */
    /* 0x18E */ s16 unk18E;                         /* inferred */
    /* 0x190 */ char pad190[0x8];                   /* maybe part of unk18E[5]? */
    /* 0x198 */ s16 unk198;                         /* inferred */
    /* 0x19A */ s16 unk19A;                         /* inferred */
    /* 0x19C */ f32 unk19C;                         /* inferred */
    /* 0x1A0 */ u8 unk1A0;                          /* inferred */
    /* 0x1A1 */ char pad1A1[0x3];                   /* maybe part of unk1A0[4]? */
} EnTanron5;                                        /* size = 0x1A4 */

struct _mips2c_stack_EnTanron5_Destroy {};          /* size 0x0 */

struct _mips2c_stack_EnTanron5_Draw {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTanron5_Init {
    /* 0x00 */ char pad0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnTanron5_Update {
    /* 0x00 */ char pad0[0x74];
    /* 0x74 */ ActorContext *sp74;                  /* inferred */
    /* 0x78 */ char pad78[0x18];                    /* maybe part of sp74[7]? */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char padB0[0x8];                     /* maybe part of spAC[3]? */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ s32 spC4;                            /* inferred */
    /* 0xC8 */ char padC8[0x8];                     /* maybe part of spC4[3]? */
    /* 0xD0 */ Actor *spD0;                         /* inferred */
    /* 0xD4 */ char padD4[0xC];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_80BE4930 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE4A2C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE5818 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad3C[0x20];                    /* maybe part of sp38[9]? */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad5C[0x4];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x8];                     /* maybe part of sp60[3]? */
    /* 0x6C */ f32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80BE5C10 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad2C[0xC];                     /* maybe part of sp28[4]? */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

? func_800BC848(EnTanron5 *, GlobalContext *, ?, ?); /* extern */
void func_80BE4930(void *arg0, ? *arg1, f32 arg2);  /* static */
void func_80BE4A2C(void *arg0, f32 *arg1, f32 arg2); /* static */
void func_80BE5818(Actor *this, GlobalContext *globalCtx); /* static */
void func_80BE5C10(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06006FD0;
extern ? D_06007A88;
extern ? D_06007D18;
static s32 D_80BE5D80 = 0;
static ColliderCylinderInit D_80BE5DA4 = {
    {0xA, 0x39, 0x39, 0x39, 0x10, 1},
    {2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0x46, 0x1C2, 0, {0, 0, 0}},
};
static f32 D_80BE5DD0 = 1.0f;
static ? D_80BE5DD4;                                /* unable to generate initializer */
static s32 D_80BE5E24[20] = {
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6007D18,
    0x6006FD0,
    0x6006FD0,
    0x6006FD0,
    0x6006FD0,
    0x6006FD0,
    0x6006FD0,
    0x6006FD0,
    0x6006FD0,
};
static f32 D_80BE5E74[23] = {
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.09f,
    0.0f,
    0.0f,
    0.0f,
};

void func_80BE4930(void *arg0, ? *arg1, f32 arg2) {
    f32 temp_f0;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk24 == 0) {
        phi_s0->unk24 = 1U;
        phi_s0->unk0 = (s32) arg1->unk0;
        phi_s0->unk4 = (s32) arg1->unk4;
        phi_s0->unk8 = (s32) arg1->unk8;
        phi_s0->unkC = randPlusMinusPoint5Scaled(10.0f);
        phi_s0->unk10 = (f32) (Rand_ZeroFloat(2.0f) + 3.0f);
        phi_s0->unk14 = randPlusMinusPoint5Scaled(10.0f);
        phi_s0->unk1C = -0.15f;
        phi_s0->unk18 = 0.0f;
        phi_s0->unk20 = 0.0f;
        temp_f0 = Rand_ZeroFloat(100.0f);
        phi_s0->unk26 = 0;
        phi_s0->unk34 = arg2;
        phi_s0->unk38 = (f32) (2.0f * arg2);
        phi_s0->unk2C = (s16) (s32) (temp_f0 + 200.0f);
        return;
    }
    phi_s0 += 0x3C;
    if ((s32) temp_v0 >= 0x96) {
        return;
    }
    goto loop_1;
}

void func_80BE4A2C(void *arg0, f32 *arg1, f32 arg2) {
    f32 temp_f0;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk24 == 0) {
        phi_s0->unk24 = 2U;
        phi_s0->unk0 = (s32) arg1->unk0;
        phi_s0->unk4 = (s32) arg1->unk4;
        phi_s0->unk8 = (s32) arg1->unk8;
        phi_s0->unkC = randPlusMinusPoint5Scaled(30.0f);
        phi_s0->unk10 = Rand_ZeroFloat(7.0f);
        phi_s0->unk14 = randPlusMinusPoint5Scaled(30.0f);
        phi_s0->unk1C = -0.3f;
        phi_s0->unk18 = 0.0f;
        phi_s0->unk20 = 0.0f;
        temp_f0 = Rand_ZeroFloat(70.0f);
        phi_s0->unk26 = 0;
        phi_s0->unk34 = arg2;
        phi_s0->unk38 = (f32) (2.0f * arg2);
        phi_s0->unk2C = (s16) (s32) (temp_f0 + 150.0f);
        return;
    }
    phi_s0 += 0x3C;
    if ((s32) temp_v0 >= 0x96) {
        return;
    }
    goto loop_1;
}

void EnTanron5_Init(EnTanron5 *this, GlobalContext *globalCtx) {
    Actor *temp_a0;
    Actor *temp_s0;
    Actor *temp_v0_3;
    ActorContext *temp_s7;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s4;
    s32 temp_t7;
    s32 temp_t7_2;
    ? *phi_s1;
    s32 phi_s0;
    f32 *phi_s2;
    s32 *phi_s3;
    EnTanron5 *this = (EnTanron5 *) thisx;

    temp_v0 = this->actor.params;
    if ((s32) temp_v0 >= 0x64) {
        temp_t7 = D_80BE5D80 + 1;
        D_80BE5D80 = temp_t7;
        if (temp_t7 >= 0x3D) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk198 = (s16) (s32) randPlusMinusPoint5Scaled(8192.0f);
        this->unk19A = (s16) (s32) randPlusMinusPoint5Scaled(8192.0f);
        if ((s32) this->actor.params < 0x6B) {
            Actor_SetScale((Actor *) this, (Rand_ZeroFloat(0.025f) + 0.085f) * D_80BE5DD0);
        } else {
            Actor_SetScale((Actor *) this, (Rand_ZeroFloat(0.015f) + 0.01f) * D_80BE5DD0);
        }
        this->actor.speedXZ = (Rand_ZeroFloat(10.0f) + 10.0f) * D_80BE5DD0;
        this->actor.velocity.y = (Rand_ZeroFloat(10.0f) + 15.0f) * D_80BE5DD0;
        this->actor.gravity = -2.5f * D_80BE5DD0;
        this->actor.update = func_80BE5818;
        this->actor.minVelocityY = -1000.0f * D_80BE5DD0;
        if ((s32) this->actor.params >= 0x6E) {
            this->actor.draw = func_80BE5C10;
            this->unk1A0 = (u8) (u32) Rand_ZeroFloat(1.999f);
            Actor_SetScale((Actor *) this, D_80BE5DD0 * 0.03f);
            this->actor.shape.rot.z = 0;
            temp_v0_2 = this->actor.shape.rot.z;
            this->unk144 = 0xFA;
            this->actor.shape.rot.y = temp_v0_2;
            this->actor.shape.rot.x = temp_v0_2;
            return;
        }
        this->unk148 = &D_06007A88;
        this->unk144 = 0x96;
        return;
    }
    if (temp_v0 == 0) {
        temp_s7 = &globalCtx->actorCtx;
        phi_s1 = &D_80BE5DD4;
        phi_s0 = 0;
        phi_s2 = D_80BE5E74;
        phi_s3 = D_80BE5E24;
        do {
            temp_s4 = phi_s0 + 1;
            temp_v0_3 = Actor_Spawn(temp_s7, globalCtx, 0x268, (f32) phi_s1->unk0, this->actor.world.pos.y, (f32) phi_s1->unk2, (s16) 0, (s16) (s32) Rand_ZeroFloat(65536.0f), (s16) 0, (s16) temp_s4);
            temp_s0 = temp_v0_3;
            temp_a0 = temp_v0_3;
            temp_v0_3->parent = this->actor.parent;
            temp_v0_3->unk19C = (f32) *phi_s2;
            Actor_SetScale(temp_a0, temp_v0_3->unk19C);
            temp_t7_2 = *phi_s3;
            temp_s0->unk148 = temp_t7_2;
            if (&D_06006FD0 == temp_t7_2) {
                temp_s0->shape.rot.y = 0;
            }
            Collider_InitAndSetCylinder(globalCtx, temp_s0 + 0x14C, temp_s0, &D_80BE5DA4);
            phi_s1 += 4;
            phi_s0 = temp_s4;
            phi_s2 += 4;
            phi_s3 += 4;
        } while (temp_s4 != 0x14);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 150.0f, 100.0f, 4U);
    this->actor.world.pos.y = this->actor.floorHeight + -20.0f;
}

void EnTanron5_Destroy(EnTanron5 *this, GlobalContext *globalCtx) {
    EnTanron5 *this = (EnTanron5 *) thisx;
    if ((s32) this->actor.params >= 0x64) {
        D_80BE5D80 += -1;
    }
}

void EnTanron5_Update(EnTanron5 *this, GlobalContext *globalCtx) {
    Actor *spD0;
    s32 spC4;
    f32 spBC;
    f32 spB8;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    ActorContext *sp74;
    Actor *temp_v1;
    ColliderCylinder *temp_s1_2;
    CollisionCheckContext *temp_s0_5;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    s16 *temp_s1;
    s16 temp_v0_2;
    s32 *temp_s0;
    s32 *temp_v0_5;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_6;
    u8 temp_v0_7;
    s32 phi_s0;
    s32 phi_s0_2;
    f32 phi_f26;
    f32 phi_f22;
    f32 phi_f26_2;
    s32 phi_s0_3;
    s32 phi_v0;
    f32 phi_f2;
    CollisionCheckContext *phi_s0_4;
    EnTanron5 *this = (EnTanron5 *) thisx;

    temp_v1 = this->actor.parent;
    spD0 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk1A0;
    if ((s32) temp_v0 >= 3) {
        this->unk1A0 = temp_v0 + 1;
        Actor_SetScale((Actor *) this, 0.0f);
        if ((s32) this->unk1A0 >= 0x28) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        /* Duplicate return node #73. Try simplifying control flow for better match */
        return;
    }
    temp_v0_2 = this->unk144;
    if (temp_v0_2 != 0) {
        this->unk144 = temp_v0_2 - 1;
    }
    if (temp_v1->update != 0) {
        D_80BE5DD0 = temp_v1->unk1AC;
    } else {
        D_80BE5DD0 = 1.0f;
    }
    Actor_SetScale((Actor *) this, this->unk19C * D_80BE5DD0);
    if (&D_06007D18 == this->unk148) {
        this->unk18C = (s16) (s32) (65.0f * D_80BE5DD0);
        this->unk18E = (s16) (s32) (380.0f * D_80BE5DD0);
    } else {
        temp_v0_3 = this->unk1A0;
        if (temp_v0_3 == 0) {
            this->unk18C = (s16) (s32) (85.0f * D_80BE5DD0);
            this->unk18E = (s16) (s32) (200.0f * D_80BE5DD0);
        } else if (temp_v0_3 == 1) {
            this->unk18C = (s16) (s32) (95.0f * D_80BE5DD0);
            this->unk18E = (s16) (s32) (100.0f * D_80BE5DD0);
        } else if (temp_v0_3 == 2) {
            this->unk18C = (s16) (s32) (95.0f * D_80BE5DD0);
            this->unk18E = (s16) (s32) (30.0f * D_80BE5DD0);
        }
    }
    if (this->unk144 == 0) {
        temp_v0_4 = this->unk15D;
        if ((temp_v0_4 & 2) != 0) {
            temp_s0 = this->unk188;
            temp_s1 = this->unk154;
            this->unk15D = temp_v0_4 & 0xFFFD;
            spC4 = 0xA;
            if (func_801690CC(globalCtx) != 0) {
                this->unk144 = 1;
            } else {
                this->unk144 = 5;
                spC4 = (s32) Rand_ZeroFloat(2.99f) + 0xA;
            }
            if ((gGameInfo->data[1267] != 0) || (((temp_s0->unk0 & 0x5000202) != 0) && (D_80BE5DD0 < 0.5f)) || (*temp_s1 == 0x12A)) {
                if (&D_06007D18 == this->unk148) {
                    Math_Vec3f_Copy((Vec3f *) &spB8, (Vec3f *) &this->actor.world);
                    spBC += D_80BE5DD0 * 300.0f;
                    phi_s0 = 3;
                    if (spC4 >= 4) {
                        sp74 = &globalCtx->actorCtx;
                        do {
                            temp_f20 = Rand_ZeroFloat(65536.0f);
                            Actor_Spawn(sp74, globalCtx, 0x268, spB8, spBC, spC0, (s16) (s32) temp_f20, (s16) (s32) Rand_ZeroFloat(65536.0f), (s16) 0, (s16) (phi_s0 + 0x64));
                            temp_s0_2 = phi_s0 + 1;
                            phi_s0 = temp_s0_2;
                        } while (temp_s0_2 != spC4);
                    }
                    phi_s0_2 = 0;
                    do {
                        func_80BE4A2C(globalCtx->specialEffects, &spB8, Rand_ZeroFloat(3.0f) + 6.0f);
                        temp_s0_3 = phi_s0_2 + 1;
                        phi_s0_2 = temp_s0_3;
                    } while (temp_s0_3 != 6);
                    this->actor.world.pos.y -= D_80BE5DD0 * 130.0f;
                } else {
                    temp_v0_6 = this->unk1A0;
                    if (temp_v0_6 == 0) {
                        this->unk19C *= 1.4f;
                        phi_f26 = 180.0f;
                        goto block_38;
                    }
                    if (temp_v0_6 == 1) {
                        this->unk19C *= 1.37f;
                        phi_f26 = 230.0f;
                        goto block_38;
                    }
                    if (temp_v0_6 == 2) {
                        this->unk19C *= 1.5f;
                        phi_f26 = 780.0f;
block_38:
                        spAC = phi_f26;
                    }
                    this->actor.world.pos.y -= D_80BE5DD0 * spAC;
                    Actor_SetScale((Actor *) this, this->unk19C * D_80BE5DD0);
                    Math_Vec3f_Copy((Vec3f *) &spB8, (Vec3f *) &this->actor.world);
                    phi_s0_3 = 0;
                    phi_f26_2 = spAC;
                    if (spC4 > 0) {
                        sp74 = &globalCtx->actorCtx;
                        phi_f22 = spA8;
                        do {
                            temp_v0_7 = this->unk1A0;
                            if (temp_v0_7 == 0) {
                                phi_f22 = 100.0f;
                                phi_f26_2 = 180.0f;
                            } else if (temp_v0_7 == 1) {
                                phi_f22 = 200.0f;
                                phi_f26_2 = 100.0f;
                            } else if (temp_v0_7 == 2) {
                                phi_f22 = 250.0f;
                                phi_f26_2 = 50.0f;
                            }
                            sp9C = (randPlusMinusPoint5Scaled(phi_f22) * D_80BE5DD0) + spB8;
                            temp_f2 = D_80BE5DD0;
                            spA4 = (randPlusMinusPoint5Scaled(phi_f22) * temp_f2) + spC0;
                            spA0 = this->actor.floorHeight + (phi_f26_2 * temp_f2);
                            temp_f20_2 = Rand_ZeroFloat(65536.0f);
                            Actor_Spawn(sp74, globalCtx, 0x268, sp9C, spA0, spA4, (s16) (s32) temp_f20_2, (s16) (s32) Rand_ZeroFloat(65536.0f), (s16) 0, (s16) (phi_s0_3 + 0x64));
                            if (phi_s0_3 < 8) {
                                func_80BE4A2C(globalCtx->specialEffects, &sp9C, Rand_ZeroFloat(3.0f) + 6.0f);
                            }
                            temp_s0_4 = phi_s0_3 + 1;
                            phi_s0_3 = temp_s0_4;
                        } while (temp_s0_4 != spC4);
                        spA8 = phi_f22;
                    }
                }
                if (Rand_ZeroOne() < 0.333f) {
                    phi_v0 = 0x4000;
                } else {
                    phi_v0 = -0x4000;
                    if (Rand_ZeroOne() < 0.5f) {
                        phi_v0 = -0x8000;
                    }
                }
                this->actor.shape.rot.y += phi_v0;
                Audio_PlayActorSound2((Actor *) this, 0x185CU);
                func_800BC848(this, globalCtx, 4, 4);
                this->unk1A0 += 1;
            } else {
                temp_v0_5 = this->unk188;
                sp90 = (f32) temp_v0_5->unkE;
                sp94 = (f32) temp_v0_5->unk10;
                sp98 = (f32) temp_v0_5->unk12;
                Audio_PlayActorSound2((Actor *) this, 0x1808U);
                CollisionCheck_SpawnShieldParticlesMetal(globalCtx, (Vec3f *) &sp90);
            }
        }
    }
    temp_s1_2 = &this->unk14C;
    Collider_UpdateCylinder((Actor *) this, temp_s1_2);
    if (&D_06006FD0 == this->unk148) {
        this->unk14C.dim.pos.y = (s16) (s32) this->actor.floorHeight;
    }
    if ((&D_06007D18 == this->unk148) || (D_80BE5DD0 < 0.5f)) {
        temp_s0_5 = &globalCtx->colChkCtx;
        CollisionCheck_SetOC(globalCtx, temp_s0_5, (Collider *) temp_s1_2);
        phi_s0_4 = temp_s0_5;
    } else {
        temp_f24 = this->actor.world.pos.x;
        temp_f22 = this->actor.world.pos.z;
        temp_f14 = spD0->world.pos.x - temp_f24;
        temp_f18 = fabsf(temp_f14);
        temp_f16 = spD0->world.pos.z - temp_f22;
        phi_s0_4 = &globalCtx->colChkCtx;
        if (temp_f18 < 120.0f) {
            temp_f20_3 = fabsf(temp_f16);
            if (temp_f20_3 < 120.0f) {
                if (temp_f20_3 < temp_f18) {
                    if (temp_f14 > 0.0f) {
                        temp_f2_2 = temp_f24 + 120.0f;
                        spD0->world.pos.x = temp_f2_2;
                        spD0->prevPos.x = temp_f2_2;
                    } else {
                        temp_f2_3 = temp_f24 - 120.0f;
                        spD0->world.pos.x = temp_f2_3;
                        spD0->prevPos.x = temp_f2_3;
                    }
                } else {
                    if (temp_f16 > 0.0f) {
                        temp_f2_4 = temp_f22 + 120.0f;
                        spD0->world.pos.z = temp_f2_4;
                        phi_f2 = temp_f2_4;
                    } else {
                        temp_f2_5 = temp_f22 - 120.0f;
                        spD0->world.pos.z = temp_f2_5;
                        phi_f2 = temp_f2_5;
                    }
                    spD0->prevPos.z = phi_f2;
                }
            }
        }
    }
    CollisionCheck_SetAC(globalCtx, phi_s0_4, (Collider *) temp_s1_2);
}

void func_80BE5818(Actor *this, GlobalContext *globalCtx) {
    f32 sp6C;
    f32 sp60;
    ? sp5C;
    void *sp38;
    Actor *temp_v0_3;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_s0;
    u8 temp_t7;
    u8 temp_v0;
    u8 temp_v0_2;
    s16 phi_v0;
    s32 phi_s0;

    if (((s32) this->params < 0x6E) && (temp_v0 = this->unk1A0, temp_t7 = temp_v0 + 1, (temp_v0 != 0))) {
        this->unk1A0 = temp_t7;
        this->world.pos.y -= 2.0f * D_80BE5DD0;
        if ((temp_t7 & 0xFF) == 0x28) {
            Actor_MarkForDeath(this);
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    temp_v1 = this->unk144;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk144 = (s16) (temp_v1 - 1);
        phi_v0 = this->unk144;
    }
    if (phi_v0 == 0) {
        Actor_MarkForDeath(this);
    }
    if (this->speedXZ > 0.02f) {
        Actor_SetVelocityAndMoveYRotationAndGravity(this);
        Actor_UpdateBgCheckInfo(globalCtx, this, 50.0f, 150.0f, 100.0f, 4U);
    }
    if ((s32) this->params < 0x6E) {
        this->shape.rot.x += this->unk198;
        this->shape.rot.y += this->unk19A;
        sp6C = 1225.0f;
        if ((this->bgCheckFlags & 1) != 0) {
            if ((s32) this->params < 0x6C) {
                Math_Vec3f_Copy((Vec3f *) &sp5C, (Vec3f *) &this->world);
                sp38 = globalCtx + 0x18000;
                sp60 = this->floorHeight;
                phi_s0 = 0;
                do {
                    func_80BE4930(sp38->unk870, &sp5C, Rand_ZeroFloat(1.0f) + 2.0f);
                    temp_s0 = phi_s0 + 1;
                    phi_s0 = temp_s0;
                } while (temp_s0 != 4);
                this->unk1A0 = (u8) (this->unk1A0 + 1);
            } else {
                Actor_MarkForDeath(this);
            }
        }
    } else {
        sp6C = 400.0f;
        this->unk198 = (s16) (this->unk198 + 0x2000);
        if ((this->bgCheckFlags & 1) != 0) {
            this->unk198 = 0;
            this->speedXZ = 0.0f;
        }
    }
    temp_v0_2 = this->unk1A1;
    if (temp_v0_2 == 0) {
        if ((D_80BE5DD0 > 0.5f) && ((temp_v1_2 = this->params, (((s32) temp_v1_2 < 0x6C) != 0)) || ((s32) temp_v1_2 >= 0x6E)) && (temp_v0_3 = globalCtx->actorCtx.actorList[2].first, temp_f0 = temp_v0_3->world.pos.x - this->world.pos.x, temp_f2 = (temp_v0_3->world.pos.y + 10.0f) - this->world.pos.y, temp_f12 = temp_v0_3->world.pos.z - this->world.pos.z, (((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < sp6C))) {
            if ((s32) temp_v1_2 >= 0x6E) {
                if (this->unk1A0 == 0) {
                    Item_Give(globalCtx, 0x93U);
                } else {
                    Item_Give(globalCtx, 0x7AU);
                }
                Actor_MarkForDeath(this);
                play_sound(0x4824U);
                return;
            }
            this->unk1A1 = 0x14U;
            func_800B8D50(globalCtx, NULL, 5.0f, this->world.rot.y, 0.0f, 8U);
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    this->unk1A1 = (u8) (temp_v0_2 - 1);
}

void EnTanron5_Draw(EnTanron5 *this, GlobalContext *globalCtx) {
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnTanron5 *this = (EnTanron5 *) thisx;

    if ((-500.0f * D_80BE5DD0) < this->actor.projectedPos.z) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp20 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = sp20->polyOpa.p;
        sp20->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp20 = sp20;
        sp18 = temp_v0;
        sp18->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = sp20->polyOpa.p;
        sp20->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = (u32) this->unk148;
    }
}

void func_80BE5C10(Actor *this, GlobalContext *globalCtx) {
    void *sp38;
    Gfx *sp28;
    Gfx *sp24;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_v0;
    s32 phi_v0;
    void *phi_a1;

    temp_v0 = this->unk144;
    if (((s32) temp_v0 >= 0x33) || (phi_v0 = 0, ((temp_v0 & 1) != 0))) {
        phi_v0 = 1;
    }
    if (((-500.0f * D_80BE5DD0) < this->projectedPos.z) && (phi_v0 != 0)) {
        temp_a0 = globalCtx->state.gfxCtx;
        this = this;
        temp_s0 = temp_a0;
        func_8012C28C(temp_a0);
        phi_a1 = (void *) &D_040617C0;
        if (this->unk1A0 == 0) {
            phi_a1 = (void *) &D_0405BEF0;
        }
        sp38 = phi_a1;
        temp_s0->polyOpa.p = func_8012C724(temp_s0->polyOpa.p);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060020;
        sp28 = temp_v0_2;
        sp28->words.w1 = Lib_SegmentedToVirtual(phi_a1);
        SysMatrix_InsertTranslation(0.0f, 200.0f, 0.0f, 1);
        SysMatrix_InsertZRotation_s(this->unk198, 1);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp24 = temp_v0_3;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) D_0405F6F0;
        temp_v0_4->words.w0 = 0xDE000000;
    }
}
