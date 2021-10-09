typedef struct EnDoorEtc {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad144[0x5E];
    /* 0x1A2 */ s8 unk1A2;                          /* inferred */
    /* 0x1A3 */ u8 unk1A3;                          /* inferred */
    /* 0x1A4 */ s16 unk1A4;                         /* inferred */
    /* 0x1A6 */ char pad1A6[0x2];
    /* 0x1A8 */ ColliderCylinder unk1A8;            /* inferred */
    /* 0x1F4 */ u8 unk1F4;                          /* inferred */
    /* 0x1F5 */ char pad1F5[0x3];                   /* maybe part of unk1F4[4]? */
    /* 0x1F8 */ void (*actionFunc)(EnDoorEtc *, GlobalContext *);
} EnDoorEtc;                                        /* size = 0x1FC */

struct _mips2c_stack_EnDoorEtc_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDoorEtc_Init {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnDoorEtc_Update {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AC2044 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC20A8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC2118 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC2154 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC21A0 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AC2354 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AC24A8 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad24[0xC];
};                                                  /* size = 0x30 */

s32 func_80AC2044(void *arg0, PosRot *arg1, f32 arg2); /* static */
void func_80AC20A8(EnDoorEtc *, GlobalContext *);   /* static */
void func_80AC2118(void *arg0, ? arg1);             /* static */
void func_80AC2154(void *arg0, ? arg1);             /* static */
void func_80AC21A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC2354(EnDoorEtc *, GlobalContext *);   /* static */
void func_80AC24A8(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_04020D00;
static ColliderCylinderInit D_80AC25A0 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 1, 1},
    {0x64, 0x28, 0, {0, 0, 0}},
};
static s16 D_80AC25CC[52] = {
    0x1B,
    0x100,
    0x164,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0xD00,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};
static InitChainEntry D_80AC2634[7];                /* unable to generate initializer */

void EnDoorEtc_Init(EnDoorEtc *this, GlobalContext *globalCtx) {
    ColliderCylinder *temp_s0_2;
    s16 *temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s16 *phi_s0;
    s32 phi_v0;
    s32 phi_v0_2;
    s16 *phi_s0_2;
    s16 *phi_s0_3;
    EnDoorEtc *this = (EnDoorEtc *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80AC2634);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.shape.rot.x = -0x4000;
    this->unk1A4 = 0;
    phi_s0 = D_80AC25CC;
    phi_v0 = 0;
loop_1:
    phi_v0_2 = phi_v0;
    phi_s0_3 = phi_s0;
    if (*phi_s0 != globalCtx->sceneNum) {
        temp_v0 = phi_v0 + 1;
        temp_s0 = phi_s0 + 6;
        phi_s0 = temp_s0;
        phi_v0 = temp_v0;
        phi_v0_2 = temp_v0;
        phi_s0_3 = temp_s0;
        if (temp_v0 != 0xF) {
            goto loop_1;
        }
    }
    phi_s0_2 = phi_s0_3;
    if ((phi_v0_2 >= 0xF) && (Object_GetIndex(&globalCtx->objectCtx, 2) >= 0)) {
        phi_s0_2 = phi_s0_3 + 6;
    }
    temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, phi_s0_2->unk4);
    if (temp_v0_2 < 0) {
        Actor_MarkForDeath((Actor *) this);
    } else {
        this->unk1A2 = (s8) temp_v0_2;
        this->unk1A3 = phi_s0_2->unk2;
        if (this->unk1A2 == this->actor.objBankIndex) {
            func_80AC20A8(this, globalCtx);
        } else {
            this->actionFunc = func_80AC20A8;
        }
    }
    temp_s0_2 = &this->unk1A8;
    Collider_InitCylinder(globalCtx, temp_s0_2);
    Collider_SetCylinder(globalCtx, temp_s0_2, (Actor *) this, &D_80AC25A0);
    this->actor.colChkInfo.mass = 0xFF;
}

void EnDoorEtc_Destroy(EnDoorEtc *this, GlobalContext *globalCtx) {
    EnDoorEtc *this = (EnDoorEtc *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk1A8);
}

s32 func_80AC2044(void *arg0, PosRot *arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 phi_v0;

    temp_f0 = arg1->pos.x - arg0->unk0;
    temp_f2 = arg1->pos.y - arg0->unk4;
    temp_f12 = arg1->pos.z - arg0->unk8;
    phi_v0 = 0;
    if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < (arg2 * arg2)) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80AC20A8(EnDoorEtc *arg0, GlobalContext *arg1) {
    s8 temp_a1;

    temp_a1 = arg0->unk1A2;
    arg0 = arg0;
    if (Object_IsLoaded(&arg1->objectCtx, (s32) temp_a1) != 0) {
        arg0->actor.flags &= -0x11;
        arg0->actionFunc = func_80AC2354;
        arg0->actor.draw = func_80AC24A8;
        arg0->actor.objBankIndex = arg0->unk1A2;
    }
}

void func_80AC2118(void *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk1A4;
    if ((s32) temp_v0 < 0) {
        arg0->unk1A4 = (s16) (temp_v0 + 0x100);
        return;
    }
    arg0->unk1A4 = 0;
    arg0->unk1F8 = func_80AC21A0;
    arg0->unk1F4 = (u8) (arg0->unk1F4 & 0xFFFE);
}

void func_80AC2154(void *arg0, ? arg1) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk1A6;
    if ((s32) temp_v0 > 0) {
        arg0->unk1A6 = (s16) (temp_v0 - 1);
        return;
    }
    temp_v0_2 = arg0->unk1A4;
    if ((s32) temp_v0_2 >= -0x3FFF) {
        arg0->unk1A4 = (s16) (temp_v0_2 - 0x800);
        return;
    }
    arg0->unk1A4 = -0x4000;
    arg0->unk1F8 = func_80AC2118;
}

void func_80AC21A0(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp30;
    s16 temp_v0;
    void *temp_a3;
    s32 phi_v0;
    s32 phi_v1;

    temp_a3 = arg1->actorCtx.actorList[2].first;
    sp3C = temp_a3;
    Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp30, temp_a3 + 0x24);
    if (arg0->unk1A1 == 0) {
        sp3C = temp_a3;
        if ((func_801233E4(arg1) == 0) && (fabsf(sp34) < 20.0f) && (fabsf(sp30) < 20.0f) && (fabsf(sp38) < 50.0f)) {
            temp_v0 = temp_a3->shape.rot.y - arg0->shape.rot.y;
            phi_v0 = (s32) temp_v0;
            if (sp38 > 0.0f) {
                phi_v0 = (s32) (s16) (0x8000 - temp_v0);
            }
            phi_v1 = phi_v0;
            if (phi_v0 < 0) {
                phi_v1 = -phi_v0;
            }
            if (phi_v1 < 0x3000) {
                if (sp38 >= 0.0f) {
                    temp_a3->unk37D = (s8) (s32) 1.0f;
                } else {
                    temp_a3->unk37D = (s8) (s32) -1.0f;
                }
                temp_a3->unk380 = arg0;
                temp_a3->unk37C = -1;
            }
        }
    }
    if ((arg0->textId == 0x239B) && (Flags_GetSwitch(arg1, arg0->params & 0x7F) != 0)) {
        Actor_UnsetSwitchFlag(arg1, arg0->params & 0x7F);
        arg0->unk1F8 = func_80AC2154;
        arg0->textId = 0x1800;
        arg0->unk1F4 = (u8) (arg0->unk1F4 | 1);
        arg0->unk1A6 = 0x5A;
    }
}

void func_80AC2354(EnDoorEtc *arg0, GlobalContext *arg1) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *phi_s0;

    temp_s0 = arg1->actorCtx.actorList[10].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_2:
        if ((phi_s0->id != 5) || (func_80AC2044(phi_s0 + 0x24, &arg0->actor.world, 10.0f) == 0)) {
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
            if (temp_s0_2 == 0) {
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return;
            }
            goto loop_2;
        }
        arg0->actor.world.pos.x = phi_s0->world.pos.x;
        arg0->actor.world.pos.y = phi_s0->world.pos.y;
        arg0->actor.world.pos.z = phi_s0->world.pos.z;
        arg0->actor.shape.rot.y = phi_s0->shape.rot.y;
        arg0->actor.world.rot.y = phi_s0->world.rot.y;
        Actor_MarkForDeath(phi_s0);
        arg0->actionFunc = (void (*)(EnDoorEtc *, GlobalContext *)) func_80AC21A0;
        arg0->actor.textId = 0x239B;
        Actor_SetHeight((Actor *) arg0, 70.0f);
    }
}

void EnDoorEtc_Update(EnDoorEtc *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;
    EnDoorEtc *temp_a0;
    EnDoorEtc *temp_a3;
    EnDoorEtc *this = (EnDoorEtc *) thisx;

    temp_a3 = this;
    this = temp_a3;
    temp_a3->actionFunc(temp_a3, globalCtx);
    temp_a2 = &this->unk1A8;
    temp_a1 = temp_a2;
    temp_a0 = this;
    if ((this->unk1F4 & 1) != 0) {
        sp1C = temp_a2;
        this = this;
        Collider_UpdateCylinder((Actor *) temp_a0, temp_a1);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    }
}

void func_80AC24A8(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_InsertTranslation(-2900.0f, 0.0f, 0.0f, 1);
    SysMatrix_InsertZRotation_s(this->unk1A4, 1);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_04020BB8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_04020D00;
    temp_v0_3->words.w0 = 0xDE000000;
}
