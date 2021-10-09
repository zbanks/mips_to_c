struct _mips2c_stack_EnAObj_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAObj_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAObj_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnAObj_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAObj_Update1 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAObj_Update2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

ColliderCylinderInit enAObjCylinderInit = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x19, 0x3C, 0, {0, 0, 0}},
};
Gfx *enAObjDisplayLists[2] = {(Gfx *)0x405AED0, (Gfx *)0x405B430};
InitChainEntry enAObjInitVar;                       /* unable to generate initializer */

void EnAObj_Init(ActorEnAObj *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    s16 temp_v0;

    temp_v0 = this->base.params;
    this->base.textId = (((s32) temp_v0 >> 8) & 0xFF) | 0x300;
    this->base.params = (temp_v0 & 0xFF) - 9;
    Actor_ProcessInitChain((Actor *) this, &enAObjInitVar);
    ActorShape_Init(&this->base.shape, 0.0f, func_800B3FC0, 12.0f);
    temp_a1 = &this->collision;
    sp20 = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &enAObjCylinderInit);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    this->base.colChkInfo.mass = 0xFF;
    this->update = (void (*)(Actor *, GlobalContext *)) EnAObj_Update1;
}

void EnAObj_Destroy(ActorEnAObj *this, GlobalContext *globalCtx) {
    Collider_DestroyCylinder(globalCtx, &this->collision);
}

void EnAObj_Update1(ActorEnAObj *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 phi_v1;

    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->update = (void (*)(Actor *, GlobalContext *)) EnAObj_Update2;
        return;
    }
    temp_v0 = this->base.yawTowardsPlayer - this->base.shape.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if ((phi_v1 < 0x2800) || ((this->base.params == 1) && (phi_v1 >= 0x5801))) {
        func_800B863C((Actor *) this, globalCtx);
    }
}

void EnAObj_Update2(ActorEnAObj *this, GlobalContext *globalCtx) {
    if (func_800B867C((Actor *) this, globalCtx) != 0) {
        this->update = (void (*)(Actor *, GlobalContext *)) EnAObj_Update1;
    }
}

void EnAObj_Update(ActorEnAObj *this, GlobalContext *globalCtx) {
    this->update((Actor *) this, globalCtx);
    Actor_SetHeight((Actor *) this, 45.0f);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->collision);
}

void EnAObj_Draw(ActorEnAObj *this, GlobalContext *globalCtx) {
    func_800BDFC0(globalCtx, enAObjDisplayLists[this->base.params]);
}
