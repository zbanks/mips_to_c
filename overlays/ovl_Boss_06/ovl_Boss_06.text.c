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

typedef struct Boss06 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ u8 unk144;                         /* inferred */
    /* 0x0145 */ char pad145[0x1];                  /* maybe part of unk144[2]? */
    /* 0x0146 */ s16 unk146;                        /* inferred */
    /* 0x0148 */ s16 unk148;                        /* inferred */
    /* 0x014A */ char pad14A[0x2];                  /* maybe part of unk148[2]? */
    /* 0x014C */ ColliderCylinder unk14C;           /* inferred */
    /* 0x0198 */ void (*actionFunc)(Boss06 *, GlobalContext *);
    /* 0x019C */ f32 unk19C;                        /* inferred */
    /* 0x01A0 */ f32 unk1A0;                        /* inferred */
    /* 0x01A4 */ f32 unk1A4;                        /* inferred */
    /* 0x01A8 */ f32 unk1A8;                        /* inferred */
    /* 0x01AC */ f32 unk1AC;                        /* inferred */
    /* 0x01B0 */ f32 unk1B0;                        /* inferred */
    /* 0x01B4 */ f32 unk1B4;                        /* inferred */
    /* 0x01B8 */ char pad1B8[0x4];                  /* maybe part of unk1B4[2]? */
    /* 0x01BC */ f32 unk1BC;                        /* inferred */
    /* 0x01C0 */ f32 unk1C0;                        /* inferred */
    /* 0x01C4 */ char pad1C4[0x4];                  /* maybe part of unk1C0[2]? */
    /* 0x01C8 */ u8 unk1C8;                         /* inferred */
    /* 0x01C9 */ u8 unk1C9;                         /* inferred */
    /* 0x01CA */ s16 unk1CA;                        /* inferred */
    /* 0x01CC */ f32 unk1CC;                        /* inferred */
    /* 0x01D0 */ f32 unk1D0;                        /* inferred */
    /* 0x01D4 */ f32 unk1D4;                        /* inferred */
    /* 0x01D8 */ f32 unk1D8;                        /* inferred */
    /* 0x01DC */ f32 unk1DC;                        /* inferred */
    /* 0x01E0 */ f32 unk1E0;                        /* inferred */
    /* 0x01E4 */ f32 unk1E4;                        /* inferred */
    /* 0x01E8 */ char pad1E8[0x15];
    /* 0x01FD */ u8 unk1FD;                         /* inferred */
    /* 0x01FE */ u8 unk1FE;                         /* inferred */
    /* 0x01FF */ u8 unk1FF;                         /* inferred */
    /* 0x0200 */ void unk200;                       /* inferred */
    /* 0x0201 */ char pad201[0x7FF];
    /* 0x0A00 */ s16 unkA00;                        /* inferred */
    /* 0x0A02 */ char padA02[0x2];                  /* maybe part of unkA00[2]? */
    /* 0x0A04 */ f32 unkA04;                        /* inferred */
    /* 0x0A08 */ f32 unkA08;                        /* inferred */
    /* 0x0A0C */ f32 unkA0C;                        /* inferred */
    /* 0x0A10 */ f32 unkA10;                        /* inferred */
    /* 0x0A14 */ f32 unkA14;                        /* inferred */
    /* 0x0A18 */ f32 unkA18;                        /* inferred */
    /* 0x0A1C */ f32 unkA1C;                        /* inferred */
    /* 0x0A20 */ f32 unkA20;                        /* inferred */
    /* 0x0A24 */ f32 unkA24;                        /* inferred */
    /* 0x0A28 */ f32 unkA28;                        /* inferred */
    /* 0x0A2C */ f32 unkA2C;                        /* inferred */
} Boss06;                                           /* size 0xA30 */

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
    Boss06 *this = (Boss06 *) thisx;
    Boss06 *temp_v1;
    s32 temp_a0;
    u8 *temp_v0;
    u8 *phi_v0;
    Boss06 *phi_v1;
    s32 phi_a0;

    D_809F4970 = this->actor.parent;
    this->actor.colChkInfo.damageTable = &D_809F4080;
    if ((gGameInfo->data[1312] != 0) || ((gSaveContext.eventInf[5] & 0x80) != 0)) {
        this->actionFunc = func_809F2E14;
    } else {
        this->actionFunc = func_809F2B64;
    }
    Actor_SetScale(&this->actor, 0.1f);
    Math_Vec3f_Copy(&this->actor.world.pos, (this->actor.params * 0xC) + &D_809F40EC);
    this->actor.shape.rot.y = -0x8000;
    Collider_InitAndSetCylinder(globalCtx, &this->unk14C, &this->actor, &D_809F40C0);
    phi_v0 = gSegments[(u32) ((s32) &D_06019490 * 0x10) >> 0x1C] + ((s32) &D_06019490 & 0xFFFFFF) + 0x80000000;
    phi_v1 = this;
    phi_a0 = 0;
    do {
        temp_a0 = phi_a0 + 4;
        temp_v0 = phi_v0 + 4;
        phi_v1->unk200 = *phi_v0;
        temp_v1 = phi_v1 + 4;
        temp_v1->unk1FD = temp_v0->unk-3;
        temp_v1->unk1FE = temp_v0->unk-2;
        temp_v1->unk1FF = temp_v0->unk-1;
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
    temp_v0 = temp_a1->unk14C.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        temp_a1->unk14C.base.acFlags = temp_v0 & 0xFFFD;
        if ((temp_a1->unk1C9 == 0) && (D_809F4970->unk68A == 0)) {
            temp_a0 = temp_a1;
            if (temp_a1->actor.colChkInfo.damageEffect == 2) {
                arg0 = temp_a1;
                func_809F24A8(temp_a0, temp_a1);
                play_sound(0x4807U);
                temp_f0 = -(arg0->actor.world.pos.x - (f32) arg0->unk14C.info.bumper.hitPos.x);
                arg0->unk1B0 = temp_f0;
                arg0->unk1BC = temp_f0 * 0.35f;
                temp_f2 = -((arg0->actor.world.pos.y + 80.0f) - (f32) arg0->unk14C.info.bumper.hitPos.y);
                arg0->unk1B4 = temp_f2;
                arg0->unk1C0 = temp_f2 * -0.35f;
            }
        }
    }
}

void func_809F24A8(Boss06 *arg0) {
    arg0->actionFunc = func_809F24C8;
    arg0->unkA28 = 0.0f;
    arg0->unk1AC = 0.0f;
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
    temp_v0 = this->unk1C9;
    this->unk1CA += 1;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                temp_s0 = this->actor.child;
                if (this->unk1CA == 1) {
                    this->unkA1C = fabsf(this->unkA10 - temp_s0->world.pos.x);
                    this->unkA20 = fabsf(this->unkA14 - temp_s0->world.pos.y);
                    this->unkA24 = fabsf(this->unkA18 - temp_s0->world.pos.z);
                }
                Math_ApproachF(&this->unkA10, temp_s0->world.pos.x, 0.15f, this->unkA1C * this->unkA28);
                Math_ApproachF(&this->unkA14, temp_s0->world.pos.y, 0.15f, this->unkA20 * this->unkA28);
                Math_ApproachF(&this->unkA18, temp_s0->world.pos.z, 0.15f, this->unkA24 * this->unkA28);
                Math_ApproachF(&this->unkA28, 1.0f, 1.0f, 0.001f);
                if ((s32) this->unk1CA >= 0x51) {
                    func_809F2ED0(this, globalCtx);
                    func_80169AFC(globalCtx, this->unkA00, 0);
                    this->unkA00 = 0;
                    func_800EA0EC(globalCtx, &globalCtx->csCtx);
                    func_800B7298(globalCtx, &this->actor, 6U);
                    D_809F4970->unk151 = 0;
                }
            }
        } else {
            goto block_9;
        }
    } else if (ActorCutscene_GetCurrentIndex() == -1) {
        func_800EA0D4(globalCtx, &globalCtx->csCtx);
        func_800B7298(globalCtx, &this->actor, 7U);
        this->unkA00 = func_801694DC(globalCtx);
        func_80169590(globalCtx, 0, 1);
        func_80169590(globalCtx, this->unkA00, 7);
        D_809F4970->unk151 = 1;
        this->unk1C9 = 1;
        this->unk1C8 = 1;
        this->unk1E0 = 255.0f;
        this->unk1DC = 0.0f;
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
        if ((s32) this->unk1CA >= 0xA) {
            Math_ApproachF(&this->unk1E4, 30.0f, 0.2f, 1.0f);
            globalCtx->envCtx.unk_E5 = 1;
            globalCtx->envCtx.unk_E6[2] = 0;
            globalCtx->envCtx.unk_E6[1] = 0;
            globalCtx->envCtx.unk_E6[0] = 0;
            globalCtx->envCtx.unk_E6[3] = (u8) (u32) this->unkA2C;
            Math_ApproachF(&this->unkA2C, 75.0f, 1.0f, 3.0f);
        }
        phi_a1 = (s32) this->unk1CA;
        if ((s32) this->unk1CA >= 0x1E) {
            play_sound(0x2846U);
            phi_a1 = (s32) this->unk1CA;
        }
        if (phi_a1 >= 0x3C) {
            globalCtx->envCtx.unk_E5 = 0;
            this->unk1C8 = 0;
            this->unk1DC = 0.0f;
            this->unk1D8 = 0.0f;
            if (this->unk1CA == 0x3C) {
                temp_v1 = D_809F4970;
                temp_v1->unk154 = (u8) (temp_v1->unk154 + 1);
                func_800B7298(globalCtx, &this->actor, 0x84U);
                sp48->shape.rot.y = 0;
                sp48->world.rot.y = sp48->shape.rot.y;
            }
            this->unkA04 = sp48->world.pos.x + 20.0f;
            this->unkA08 = sp48->world.pos.y + 20.0f;
            this->unkA0C = sp48->world.pos.z + 30.0f;
            this->unkA10 = sp48->world.pos.x;
            this->unkA14 = sp48->world.pos.y + 26.0f;
            this->unkA18 = sp48->world.pos.z;
            phi_a1_2 = (s32) this->unk1CA;
            phi_a1_2 = (s32) this->unk1CA;
            if ((s32) this->unk1CA >= 0x4B) {
                temp_v0_2 = globalCtx->actorCtx.actorList[9].first;
                phi_v0 = temp_v0_2;
                if (temp_v0_2 != 0) {
loop_18:
                    if ((phi_v0->id == 0x115) && (temp_v1_2 = D_809F4970, (phi_v0 == temp_v1_2)) && (temp_v1_2->unk680 != 0)) {
                        this->unkA04 = 1307.0f;
                        this->unkA08 = 142.0f;
                        this->unkA0C = 2897.0f;
                        this->unkA10 = 1376.0f;
                        this->unkA14 = 132.0f;
                        this->unkA18 = 2860.0f;
                        if ((s32) this->unk1CA == 0x4B) {
                            D_809F4970->unk148 = 1;
                            phi_a1_2 = (s32) this->unk1CA;
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
                this->unk1C9 = 2;
                this->unk1CA = 0;
                this->unk1B4 = 0.0f;
                this->unk1B0 = 0.0f;
                this->unk144 = 2;
                this->unk1A4 = 0.0f;
                this->unk1A0 = 0.0f;
                this->unk1DC = 18.0f;
                this->unk1E0 = 255.0f;
                this->unk19C = 1.0f;
                Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x1D0, this->actor.world.pos.x, this->actor.world.pos.y - 200.0f, this->actor.world.pos.z - 170.0f, (s16) 0xF, (s16) 0, (s16) 0, 1);
                if (this->actor.params == 0) {
                    this->unkA04 = this->actor.world.pos.x - 200.0f;
                } else {
                    this->unkA04 = this->actor.world.pos.x + 200.0f;
                }
                temp_f2 = this->actor.world.pos.y;
                temp_f12 = this->actor.world.pos.z;
                this->unkA10 = this->actor.world.pos.x;
                this->unkA18 = temp_f12;
                this->unkA08 = (temp_f2 - 200.0f) + 100.0f;
                this->unkA0C = temp_f12 - 200.0f;
                this->unkA14 = temp_f2 + 80.0f;
            }
        } else {
            temp_f2_2 = this->actor.world.pos.y;
            temp_f12_2 = this->actor.world.pos.z;
            temp_f0 = this->actor.world.pos.x;
            this->unkA18 = temp_f12_2;
            this->unkA08 = temp_f2_2 + 60.0f;
            this->unkA04 = temp_f0;
            this->unkA0C = temp_f12_2 - 210.0f;
            this->unkA10 = temp_f0;
            this->unkA14 = temp_f2_2 + 80.0f;
        }
    }
    if (this->unkA00 != 0) {
        temp_s0_4 = &this->unkA10;
        ShrinkWindow_SetLetterboxTarget(0x1B);
        Play_CameraSetAtEye(globalCtx, this->unkA00, (Vec3f *) temp_s0_4, (Vec3f *) &this->unkA04);
    }
}

void func_809F2B64(Boss06 *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    this->unk1A8 = 110.0f;
    this->actionFunc = func_809F2C44;
    this->unk144 = 3;
    this->unk1E0 = 200.0f;
    this->unk1DC = 15.0f;
    this->unk1E4 = 30.0f;
    this->unk1AC = 0.0f;
    this->unk19C = 1.0f;
    Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x1D0, this->actor.world.pos.x, this->actor.world.pos.y - 200.0f, this->actor.world.pos.z - 170.0f, (s16) 0xF, (s16) 0, (s16) 0, 1);
    temp_v0 = D_809F4970;
    temp_v0->unk154 = (u8) (temp_v0->unk154 + 1);
}

void func_809F2C44(Boss06 *this, GlobalContext *globalCtx) {
    if (D_809F4970->unk153 != 0) {
        this->unkA28 = 0.008f;
        Math_ApproachF(&this->unk1E4, 0.0f, 0.2f, 0.008f * 30.0f);
        Math_ApproachF(&this->unk1AC, -70.0f, 0.2f, this->unkA28 * 70.0f);
        Math_ApproachF(&this->unk1A8, 0.0f, 0.2f, this->unkA28 * 110.0f);
        Math_ApproachF(&this->unk1A0, -900.0f, 0.2f, this->unkA28 * 900.0f);
        Math_ApproachF(&this->unk1A4, 1350.0f, 0.2f, this->unkA28 * 1350.0f);
        Math_ApproachF(&this->unk1E0, 100.0f, 0.2f, this->unkA28 * 100.0f);
        if (this->unk1E4 < 5.0f) {
            Math_ApproachF(&this->unk19C, 0.0f, 1.0f, 0.03f);
        }
        if ((this->unk1E4 > 0.1f) && (this->actor.params == 0)) {
            play_sound(0x218DU);
        }
    }
    if (D_809F4970->unk153 == 2) {
        Actor_MarkForDeath(this->actor.child);
        this->actor.child = NULL;
        func_809F2E14(this, globalCtx);
    }
}

void func_809F2E14(Boss06 *this, GlobalContext *globalCtx) {
    this->actionFunc = func_809F2E34;
    this->unk144 = 1;
}

void func_809F2E34(Boss06 *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp1C;
    Boss06 *temp_a0;
    ColliderCylinder *temp_a2;

    this->unk1E0 = 200.0f;
    temp_a0 = this;
    this->unk1DC = 15.0f;
    this = this;
    func_809F23CC(temp_a0);
    temp_a2 = &this->unk14C;
    sp1C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    this->unk14C.dim.pos.z = (s16) (s32) ((this->actor.world.pos.z - 50.0f) + 100.0f);
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

void func_809F2ED0(Boss06 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809F2EE8;
}

void func_809F2EE8(Boss06 *this, GlobalContext *globalCtx) {
    this->unk1E0 = 100.0f;
    this->unk1DC = 13.0f;
}

void Boss06_Update(Actor *thisx, GlobalContext *globalCtx) {
    Boss06 *this = (Boss06 *) thisx;
    Vec3f sp7C;
    Vec3f *temp_s2;
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

    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk146;
    if (temp_v0 != 0) {
        this->unk146 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk148;
    if (temp_v0_2 != 0) {
        this->unk148 = temp_v0_2 - 1;
    }
    if (this->unk1E4 > 0.0f) {
        if (this->actor.params == 0) {
            D_801F4E32 = 1;
            D_801F4E38 = this->actor.world.pos.x + this->unk1B0;
            D_801F4E3C = this->actor.world.pos.y + 80.0f + this->unk1B4 + this->unk1AC;
            D_801F4E40 = this->actor.world.pos.z;
            D_801F4E44 = this->unk1E4;
            D_801F4E48 = 10.0f;
            D_801F4E4C = 0;
        } else {
            D_801F4E4E = 1;
            D_801F4E50 = this->actor.world.pos.x + this->unk1B0;
            D_801F4E54 = this->actor.world.pos.y + 80.0f + this->unk1B4 + this->unk1AC;
            D_801F4E58 = this->actor.world.pos.z;
            D_801F4E5C = this->unk1E4;
            D_801F4E60 = 10.0f;
            D_801F4E64 = 0;
        }
    } else if (this->actor.params == 0) {
        D_801F4E32 = 0;
    } else {
        D_801F4E4E = 0;
    }
    temp_v0_3 = this->unk1C8;
    if ((temp_v0_3 != 0) && (temp_v0_3 != 0)) {
        play_sound(0x2034U);
        this->unk1CC += 0.6f;
        this->unk1D0 += 0.1f;
        this->unk1D4 += 0.020000001f;
        this->unk1D8 += 0.00016f;
        this->unk1DC += 0.4f;
        Math_ApproachZeroF(&this->unk1B0, 1.0f, 0.7f);
        Math_ApproachZeroF(&this->unk1B4, 1.0f, 0.7f);
        temp_s2 = &sp7C;
        phi_f26 = 0.0f;
        phi_f24 = 0.0f;
        phi_s0 = 0;
        do {
            temp_f20 = __sinf(phi_f26);
            temp_f2 = this->unk1D0;
            temp_f22 = (((__sinf(phi_f24) * temp_f2) + temp_f2) * ((temp_f20 * this->unk1D4) + 1.0f)) + this->unk1CC;
            SysMatrix_InsertZRotation_f((f32) phi_s0 * 0.0061359233f, 0);
            SysMatrix_GetStateTranslationAndScaledY(temp_f22, temp_s2);
            sp7C.x += 32.0f + this->unk1BC;
            sp7C.y += 32.0f + this->unk1C0;
            phi_f26 += 0.030679617f;
            phi_f24 += 0.049087387f;
            if ((phi_s0 & 7) == 0) {
                Math_Vec3f_Copy(&D_809F4370 + ((phi_s0 / 8) * 0xC), temp_s2);
            }
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
            if ((sp7C.x >= 0.0f) && (sp7C.y >= 0.0f) && (sp7C.x < 64.0f) && (sp7C.y < 64.0f)) {
                temp_f18 = (s32) sp7C.x;
                temp_v1 = ((s32) sp7C.y << 5) + (temp_f18 / 2);
                if ((temp_f18 & 1) != 0) {
                    temp_v0_4 = this + temp_v1;
                    temp_v0_4->unk200 = (u8) (temp_v0_4->unk200 & 0xF0);
                } else {
                    temp_v0_5 = this + temp_v1;
                    temp_v0_5->unk200 = (u8) (temp_v0_5->unk200 & 0xF);
                }
            }
        } while (temp_s0 != 0x400);
    }
}

void Boss06_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Boss06 *this = (Boss06 *) thisx;
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
    temp_f0 = this->unk19C;
    spD3 = (u8) (u32) (((10.0f * temp_f2) + 105.0f) * temp_f0);
    spD2 = (u8) (u32) (((40.0f * temp_f2) + 55.0f) * temp_f0);
    sp68 = temp_f2;
    if ((this->unk144 & 2) != 0) {
        sp68 = temp_f2;
        temp_s0 = (s16) (s32) (Math_SinS(D_809F4970->unk144) * 1000.0f);
        temp_f0_2 = Math_CosS(D_809F4970->unk144);
        temp_v0_2 = gSegments[(u32) ((s32) &D_06018BD0 * 0x10) >> 0x1C] + ((s32) &D_06018BD0 & 0xFFFFFF) + 0x80000000;
        temp_v0_2->unk2 = (s16) ((s32) this->unk1A0 + 0xE92);
        temp_a1 = temp_s0 + 0x2A3;
        temp_a3 = temp_s0 - 0x2A3;
        temp_a0_2 = temp_s0 - 0x339;
        temp_v0_2->unk32 = (s16) ((s32) this->unk1A0 + 0xE92);
        temp_t0 = temp_s0 + 0x339;
        temp_v0_2->unk42 = (s16) ((s32) this->unk1A0 + 0xE92);
        temp_v0_2->unk50 = temp_a1;
        temp_f10 = (s32) ((temp_f0_2 * -2000.0f) - 2000.0f);
        temp_v0_2->unk72 = (s16) ((s32) this->unk1A0 + 0xE92);
        temp_v0_2->unk60 = temp_a3;
        temp_a2 = (s16) temp_f10 - 0x1C2;
        temp_t1 = (s16) temp_f10 - 0x79E;
        temp_v0_2->unk54 = (s16) (((s16) temp_f10 + (s32) this->unk1A4) - 0x708);
        temp_v0_2->unk90 = temp_a1;
        temp_v0_2->unk94 = temp_a2;
        temp_v0_2->unkB0 = temp_a3;
        temp_v0_2->unkB4 = temp_a2;
        temp_v0_2->unkC0 = temp_a1;
        temp_v0_2->unkC4 = temp_a2;
        temp_v0_2->unkE0 = temp_a0_2;
        temp_v0_2->unk64 = (s16) (((s16) temp_f10 + (s32) this->unk1A4) - 0x708);
        temp_v0_2->unkE4 = temp_t1;
        temp_v0_2->unkF0 = temp_a0_2;
        temp_v0_2->unkF4 = (s16) temp_f10;
        temp_v0_2->unk100 = temp_t0;
        temp_v0_2->unk104 = (s16) temp_f10;
        temp_v0_2->unk110 = temp_t0;
        temp_v0_2->unk114 = temp_t1;
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
        temp_s2->polyXlu.p = temp_s0_2 + 8;
        temp_s0_2->words.w0 = 0xDA380003;
        temp_s0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA00009B;
        temp_v0_3->words.w1 = 0xFFFF0000 | (((u32) ((140.0f * sp68) + 115.0f) & 0xFF) << 8) | spD3;
        temp_v1 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w1 = (u32) &D_06018CF0;
        temp_v1->words.w0 = 0xDE000000;
        temp_v0_4 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFA0000FF;
        temp_v0_4->words.w1 = 0xFFFF0000 | (((u32) ((100.0f * sp68) + 65.0f) & 0xFF) << 8) | spD2;
        temp_v1_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = (u32) &D_06018DE0;
        temp_v1_2->words.w0 = 0xDE000000;
    }
    if ((this->unk144 & 1) != 0) {
        temp_v0_5 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDB060020;
        sp68 = sp68;
        temp_v0_5->words.w1 = Lib_SegmentedToVirtual(&this->unk200);
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + this->unk1A8, this->actor.world.pos.z, 0);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, 0.0f, 1);
        Matrix_RotateY(this->actor.shape.rot.y, 1U);
        temp_v0_6 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        temp_v0_6->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_7->words.w1 = (u32) &D_060193B0;
        if (this->unk1D8 > 0.0f) {
            SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + 84.0f, this->actor.world.pos.z - 2.0f, 0);
            Matrix_RotateY(this->actor.shape.rot.y, 1U);
            func_809F2120(1, 0x71A5, 0x263A);
            temp_v1_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v1_3 + 8;
            temp_v1_3->words.w1 = 0xFF0A0000;
            temp_v1_3->words.w0 = 0xFB000000;
            temp_v1_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v1_4 + 8;
            temp_v1_4->words.w0 = 0xFA008080;
            temp_v1_4->words.w1 = 0xFFFF00E6;
            phi_s0 = &D_809F4370;
            phi_f2 = 30.0f;
            phi_s1 = 0;
            phi_f2 = 30.0f;
            do {
                if ((fabsf(phi_s0->unk0 - 32.0f) < phi_f2) && (fabsf(phi_s0->unk4 - 32.0f) < phi_f2)) {
                    sp60 = phi_s1 * 0xA;
                    sp5C = D_0407D590;
                    sp58 = globalCtx + 0x18000;
                    SysMatrix_StatePush();
                    temp_v1_5 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v1_5 + 8;
                    temp_v1_5->words.w0 = 0xDB060020;
                    sp90 = temp_v1_5;
                    sp90->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) (sp58->unk840 + sp60) * -0x14) & 0x1FF, 0x20, 0x80);
                    SysMatrix_InsertTranslation((phi_s0->unk0 - 32.0f) * -2.4f, (phi_s0->unk4 - 32.0f) * -2.4f, 0.0f, 1);
                    SysMatrix_InsertZRotation_f((f32) phi_s1 * 0.049087387f, 1);
                    if (func_809F2140() < 0.5f) {
                        SysMatrix_InsertYRotation_f(3.1415927f, 1);
                    }
                    Matrix_Scale(-0.0019999999f, -this->unk1D8, 1.0f, 1);
                    temp_v1_6 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v1_6 + 8;
                    temp_v1_6->words.w0 = 0xDA380003;
                    sp8C = temp_v1_6;
                    sp8C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                    temp_v1_7 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v1_7 + 8;
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
    if (this->unk1DC > 0.0f) {
        temp_s0_3 = (u32) ((this->unk1E0 - 50.0f) + (50.0f * sp68)) & 0xFF;
        sp58 = globalCtx + 0x18000;
        sp64 = ((u32) ((100.0f * sp68) + 65.0f) & 0xFF) << 8;
        SysMatrix_InsertTranslation(this->actor.world.pos.x + this->unk1B0, this->actor.world.pos.y + 84.0f + this->unk1B4, (this->actor.world.pos.z - 2.0f) + spE0, 0);
        temp_v1_8 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v1_8 + 8;
        temp_v1_8->words.w0 = 0xDE000000;
        temp_v1_8->words.w1 = (u32) &D_04023348;
        temp_v1_9 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v1_9 + 8;
        temp_v1_9->words.w0 = 0xFA000000;
        temp_v1_9->words.w1 = (((u32) ((140.0f * sp68) + 115.0f) & 0xFF) << 8) | 0xFFFF0000 | (temp_s0_3 & 0xFF);
        temp_v1_10 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v1_10 + 8;
        temp_v1_10->words.w0 = 0xFB000000;
        temp_v1_10->words.w1 = sp64 | 0xFFCD0000 | 0x80;
        temp_f12 = this->unk1DC;
        Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
        SysMatrix_InsertZRotation_s((s16) (sp58->unk840 << 6), 1);
        temp_s0_4 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_s0_4 + 8;
        temp_s0_4->words.w0 = 0xDA380003;
        temp_s0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_11 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v1_11 + 8;
        temp_v1_11->words.w0 = 0xDE000000;
        temp_v1_11->words.w1 = (u32) &D_04023428;
    }
}

