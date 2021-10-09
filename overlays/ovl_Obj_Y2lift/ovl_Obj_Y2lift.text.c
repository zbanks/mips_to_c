typedef struct ObjY2lift {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x15];                 /* maybe part of unk_144[6]? */
    /* 0x15D */ s8 unk_15D;                         /* inferred */
    /* 0x15E */ u8 unk_15E;                         /* inferred */
    /* 0x15F */ s8 unk_15F;                         /* inferred */
} ObjY2lift;                                        /* size = 0x160 */

struct _mips2c_stack_ObjY2lift_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjY2lift_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjY2lift_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjY2lift_Update {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

extern Gfx D_06001680;
extern CollisionHeader D_060019B0;
static InitChainEntry D_80B9A940[4];                /* unable to generate initializer */

void ObjY2lift_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjY2lift *this = (ObjY2lift *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_80B9A940);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060019B0);
}

void ObjY2lift_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjY2lift *this = (ObjY2lift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void ObjY2lift_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp20;
    f32 sp1C;
    s32 sp18;
    ObjY2lift *temp_a0;
    ObjY2lift *temp_a0_2;
    ObjY2lift *temp_a3;
    f32 temp_f0;
    f32 temp_f18;
    s32 temp_v0;
    s32 temp_v0_4;
    u8 temp_t1;
    u8 temp_t5;
    u8 temp_v0_2;
    u8 temp_v0_3;
    s32 phi_v1;
    ObjY2lift *phi_a3;
    s32 phi_a0;
    s32 phi_v1_2;
    f32 phi_f0;
    s32 phi_a0_2;
    s32 phi_v0;
    u8 phi_v1_3;
    f32 phi_f18;
    ObjY2lift *this = (ObjY2lift *) thisx;

    temp_a3 = this;
    temp_f0 = temp_a3->actor.world.pos.y;
    this = temp_a3;
    sp20 = temp_f0;
    sp1C = 0.0f;
    temp_v0 = func_800CAF70((DynaPolyActor *) temp_a3);
    phi_v1 = temp_v0;
    if ((temp_v0 != 0) || (temp_a0 = this, sp18 = temp_v0, this = this, sp20 = temp_f0, phi_v1 = sp18, phi_a3 = this, phi_v1_2 = sp18, phi_f0 = temp_f0, (func_800CAF4C((DynaPolyActor *) temp_a0) != 0))) {
        phi_a3 = this;
        phi_v1_2 = phi_v1;
        phi_f0 = temp_f0;
        if (this->unk_15D == 0) {
            this->unk_15D = 1;
            this->unk_15F = 0xC;
        } else if ((this->unk_15F == 0) && (phi_v1 != 0)) {
            this->unk_15C = 0x10;
        }
    } else {
        this->unk_15D = 0;
    }
    temp_v0_2 = phi_a3->unk_15C;
    temp_t1 = temp_v0_2 - 1;
    if (temp_v0_2 == 0) {
        phi_a0 = 0;
    } else {
        phi_a3->unk_15C = temp_t1;
        phi_a0 = temp_t1 & 0xFF;
    }
    if (phi_a0 != 0) {
        sp1C = 2.0f;
        phi_f0 = phi_a3->actor.home.pos.y + 180.0f;
    } else if ((phi_v1_2 == 0) && (phi_a3->actor.velocity.y <= 0.0f)) {
        sp1C = -2.0f;
        phi_f0 = phi_a3->actor.home.pos.y;
    }
    this = phi_a3;
    sp20 = phi_f0;
    Math_StepToF(phi_a3 + 0x68, sp1C, 0.1f);
    temp_a0_2 = this;
    this->actor.world.pos.y += this->actor.velocity.y;
    if (((this->actor.world.pos.y - phi_f0) * sp1C) >= 0.0f) {
        this->actor.world.pos.y = phi_f0;
        this->actor.velocity.y = 0.0f;
        if (this->unk_15E == 0) {
            this->unk_15E = 1;
            this->unk_15F = 0xC;
        }
    } else {
        this->unk_15E = 0;
        this = this;
        func_800B9010((Actor *) temp_a0_2, 0x2103U);
    }
    temp_v0_3 = this->unk_15F;
    phi_v0 = (s32) temp_v0_3;
    phi_v1_3 = temp_v0_3;
    if (temp_v0_3 == 0) {
        phi_a0_2 = 0;
    } else {
        temp_t5 = temp_v0_3 - 1;
        temp_v0_4 = temp_t5 & 0xFF;
        this->unk_15F = temp_t5;
        phi_a0_2 = temp_v0_4;
        phi_v0 = temp_v0_4;
        phi_v1_3 = (u8) temp_v0_4;
    }
    if (phi_a0_2 != 0) {
        temp_f18 = (f32) phi_v0;
        phi_f18 = temp_f18;
        if (phi_v0 < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        this->actor.shape.yOffset = 2.0f * (f32) (phi_v1_3 & 1) * phi_f18;
    }
}

void ObjY2lift_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjY2lift *this = (ObjY2lift *) thisx;
    func_800BDFC0(globalCtx, &D_06001680);
}
