struct _mips2c_stack_ObjKinoko_Destroy {};          /* size 0x0 */

struct _mips2c_stack_ObjKinoko_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x20];                   /* maybe part of sp24[9]? */
    /* 0x48 */ GraphicsContext *sp48;               /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_ObjKinoko_Init {};             /* size 0x0 */

struct _mips2c_stack_ObjKinoko_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

void ObjKinoko_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjKinoko *this = (ObjKinoko *) thisx;
    this->actor.world.pos.y += 4.0f;
}

void ObjKinoko_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjKinoko *this = (ObjKinoko *) thisx;

}

void ObjKinoko_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 phi_f2;
    ObjKinoko *this = (ObjKinoko *) thisx;

    if (globalCtx->actorCtx.actorList[2].first->unk_153 != 0x13) {
        this->actor.draw = NULL;
        this->actor.hintId = 0xFF;
        this->actor.flags &= -2;
        return;
    }
    this->actor.draw = ObjKinoko_Draw;
    this->actor.hintId = 0x64;
    this->actor.flags |= 1;
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        Actor_SetCollectibleFlag(globalCtx, this->actor.params & 0x7F);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 0xBA, 20.0f, 10.0f);
    if (Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 0.04f, 2.0f, 0.5f) < 0.5f) {
        this->actor.scale.x = 0.0f;
        this->actor.speedXZ = 110.0f;
        this->actor.velocity.x = 0.2f;
    }
    if (this->actor.velocity.x == 0.0f) {
        phi_f2 = 0.0f;
    } else {
        phi_f2 = 0.05f;
    }
    if (Math_SmoothStepToF((f32 *) &this->actor.scale, this->actor.velocity.x, 0.04f, 0.004f, 0.001f) < phi_f2) {
        this->actor.velocity.x = 0.0f;
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.y = temp_f0;
    this->actor.scale.z = temp_f0;
    this->actor.shape.rot.y = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000;
}

void ObjKinoko_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp48;
    s32 *sp24;
    Gfx *temp_s0;
    GraphicsContext *temp_a0;
    f32 temp_f4;
    s32 temp_f6;
    s32 phi_t1;
    ObjKinoko *this = (ObjKinoko *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp48 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_s0 = sp48->polyXlu.p;
    temp_s0->words.w0 = 0xFA000000;
    temp_f4 = this->actor.speedXZ;
    temp_f6 = (s32) temp_f4;
    if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
        if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
            phi_t1 = (s32) (temp_f4 - 2.1474836e9f) | 0x80000000;
        } else {
            goto block_3;
        }
    } else {
        phi_t1 = temp_f6;
        if (temp_f6 < 0) {
block_3:
            phi_t1 = -1;
        }
    }
    temp_s0->words.w1 = (phi_t1 & 0xFF) | 0xA93FBA00;
    temp_s0[1].words.w0 = 0xFB000000;
    temp_s0[1].words.w1 = 0x6E2CC864;
    temp_s0[2].words.w0 = 0xE200001C;
    temp_s0[2].words.w1 = 0xC184B50;
    temp_s0[3].words.w0 = 0xDA380003;
    temp_s0[3].words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s0[4].words.w0 = 0xDE000000;
    temp_s0[4].words.w1 = (u32) &D_04029D20;
    sp24 = &D_04029D20;
    SysMatrix_InsertXRotation_s(-0x4000, 1);
    temp_s0[5].words.w0 = 0xDA380003;
    sp24 = &D_04029D20;
    temp_s0[5].words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s0[6].words.w0 = 0xDE000000;
    temp_s0[6].words.w1 = (u32) &D_04029D20;
    sp48->polyXlu.p = &temp_s0[7];
}
