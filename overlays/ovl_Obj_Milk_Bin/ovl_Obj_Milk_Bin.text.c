struct _mips2c_stack_ObjMilkBin_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjMilkBin_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjMilkBin_Init {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderCylinder *sp18;              /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjMilkBin_Update {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderCylinder *sp18;              /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

extern Gfx D_060004B0;
static ColliderCylinderInit D_80C09050 = {
    {0xC, 0, 9, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0xC, 0x1E, 0, {0, 0, 0}},
};

void ObjMilkBin_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a1;
    ObjMilkBin *temp_a2;
    s16 temp_t6;
    ObjMilkBin *this = (ObjMilkBin *) thisx;

    temp_a2 = this;
    temp_a1 = &temp_a2->collider;
    sp18 = temp_a1;
    this = temp_a2;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) temp_a2, &D_80C09050);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_t6 = this->actor.params;
    this->disableDraw = 0;
    this->actor.shape.yOffset = 1100.0f;
    this->type = (s32) temp_t6;
    if ((temp_t6 == 2) && ((gSaveContext.weekEventReg[52] & 1) == 0)) {
        this->disableDraw = 1;
    }
}

void ObjMilkBin_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjMilkBin *this = (ObjMilkBin *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void ObjMilkBin_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp1C;
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    ObjMilkBin *this = (ObjMilkBin *) thisx;

    temp_v0 = this->type;
    if (temp_v0 == 1) {
        if (((gSaveContext.weekEventReg[22] & 1) != 0) && (((temp_v0_2 = gSaveContext.day, (temp_v0_2 == 2)) && (gSaveContext.isNight == 1)) || (temp_v0_2 >= 3))) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_10;
    }
    if (temp_v0 == 2) {
        if ((gSaveContext.weekEventReg[52] & 1) != 0) {
            this->disableDraw &= -2;
        } else {
            this->disableDraw |= 1;
        }
    }
block_10:
    if ((this->disableDraw & 1) == 0) {
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->collider;
        sp18 = temp_a2;
        sp1C = temp_a1;
        this = this;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
    }
}

void ObjMilkBin_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjMilkBin *this = (ObjMilkBin *) thisx;
    if ((this->disableDraw & 1) == 0) {
        func_800BDFC0(globalCtx, &D_060004B0);
    }
}
