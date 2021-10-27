struct _mips2c_stack_ObjMoonStone_Destroy {};       /* size 0x0 */

struct _mips2c_stack_ObjMoonStone_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjMoonStone_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjMoonStone_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0662C {};              /* size 0x0 */

struct _mips2c_stack_func_80C06640 {
    /* 0x00 */ char pad_0[0x1A];
    /* 0x1A */ s16 sp1A;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C066F8 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0670C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0673C {};              /* size 0x0 */

struct _mips2c_stack_func_80C06768 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C0685C {};              /* size 0x0 */

struct _mips2c_stack_func_80C06870 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern ? D_06000C80;
extern ? D_06000D78;
extern void D_06001C60;

void ObjMoonStone_Init(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_v0;
    ObjMoonStone *this = (ObjMoonStone *) thisx;

    Actor_SetScale((Actor *) this, 0.3f);
    this->unk194 = (s16) ((s32) (this->actor.params & 0xF000) >> 0xC);
    this->actor.targetMode = 0;
    this->actor.shape.yOffset = 25.0f;
    this->actor.focus.pos.y += 10.0f;
    if (this->unk194 == 0) {
        this->actor.colChkInfo.health = 0;
        this->actor.flags |= 9;
        func_80C0662C(this);
        return;
    }
    temp_v0 = gSaveContext.weekEventReg[74];
    if ((temp_v0 & 0x40) == 0) {
        if ((temp_v0 & 0x80) != 0) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 1, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) -1);
        }
        this->actor.flags &= -2;
        func_80C0673C(this);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void ObjMoonStone_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjMoonStone *this = (ObjMoonStone *) thisx;

}

void func_80C0662C(ObjMoonStone *this) {
    this->actionFunc = func_80C06640;
}

void func_80C06640(ObjMoonStone *this, GlobalContext *globalCtx) {
    s16 sp1A;
    ObjMoonStone *temp_a3;
    ObjMoonStone *temp_a3_2;
    s16 temp_v1;
    s32 phi_v0;

    temp_a3 = this;
    temp_v1 = (s16) (temp_a3->actor.yawTowardsPlayer - 0x8000) - globalCtx->actorCtx.actorList[2].first->shape.rot.y;
    sp1A = temp_v1;
    this = temp_a3;
    temp_a3_2 = this;
    if (func_800B84D0((Actor *) temp_a3, globalCtx) != 0) {
        temp_a3_2->actor.colChkInfo.health = 1;
        this = temp_a3_2;
        func_801518B0(globalCtx, 0x5E3U, (Actor *) temp_a3_2);
        func_80C066F8(this);
        return;
    }
    phi_v0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    }
    if (phi_v0 < 0x1555) {
        func_800B8614((Actor *) temp_a3_2, globalCtx, 80.0f);
    }
}

void func_80C066F8(ObjMoonStone *this) {
    this->actionFunc = func_80C0670C;
}

void func_80C0670C(ObjMoonStone *this, GlobalContext *globalCtx) {
    if (func_800B867C((Actor *) this, globalCtx) != 0) {
        this->actor.colChkInfo.health = 0;
        func_80C0662C(this);
    }
}

void func_80C0673C(ObjMoonStone *this) {
    if ((gSaveContext.weekEventReg[74] & 0x80) == 0) {
        this->actor.draw = NULL;
    }
    this->actionFunc = func_80C06768;
}

void func_80C06768(ObjMoonStone *this, GlobalContext *globalCtx) {
    if (((gSaveContext.weekEventReg[74] & 0x80) != 0) && (this->actor.draw == 0)) {
        this->actor.draw = ObjMoonStone_Draw;
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 1, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) -1);
    }
    if (this->actor.draw != 0) {
        if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
            this->actor.parent = NULL;
            this->actor.draw = NULL;
            func_80C0685C(this);
            return;
        }
        if (this->actor.xzDistToPlayer < 25.0f) {
            func_800B8A1C((Actor *) this, globalCtx, 0x96, 100.0f, 30.0f);
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80C0685C(ObjMoonStone *this) {
    this->actionFunc = func_80C06870;
}

void func_80C06870(ObjMoonStone *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
        gSaveContext.weekEventReg[74] |= 0x40;
        Actor_MarkForDeath((Actor *) this);
    }
}

void ObjMoonStone_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjMoonStone *this = (ObjMoonStone *) thisx;
    if ((globalCtx->actorCtx.actorList[2].first->unk_A6C & 0x10000282) == 0) {
        this->actionFunc(this, globalCtx);
    }
}

void ObjMoonStone_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    ObjMoonStone *this = (ObjMoonStone *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06001C60));
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp28 = temp_v0;
    sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_06000D78;
    temp_v0_2->words.w0 = 0xDE000000;
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp20 = temp_v0_3;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_06000C80;
    temp_v0_4->words.w0 = 0xDE000000;
}
