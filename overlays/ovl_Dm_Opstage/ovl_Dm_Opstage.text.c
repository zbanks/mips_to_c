typedef struct DmOpstage {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x58];                 /* maybe part of unk_144[23]? */
    /* 0x1A0 */ void (*actionFunc)(DmOpstage *, GlobalContext *);
    /* 0x1A4 */ f32 unk_1A4;                        /* inferred */
    /* 0x1A8 */ f32 unk_1A8;                        /* inferred */
    /* 0x1AC */ f32 unk_1AC;                        /* inferred */
} DmOpstage;                                        /* size = 0x1B0 */

struct _mips2c_stack_DmOpstage_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DmOpstage_Draw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_DmOpstage_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_DmOpstage_SetupAction {};      /* size 0x0 */

struct _mips2c_stack_DmOpstage_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A9FA58 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

extern Gfx D_06000970;
extern Gfx D_06000978;
extern CollisionHeader D_06001C98;
extern Gfx D_06002870;
extern Gfx D_06002878;
extern Gfx D_06003060;
extern Gfx D_06003068;
extern Gfx D_06003720;
extern Gfx D_06003728;
static InitChainEntry D_80A9FD30;                   /* unable to generate initializer */

void DmOpstage_SetupAction(DmOpstage *this, void (*actionFunc)(DmOpstage *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void DmOpstage_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_v0;
    s32 phi_v0;
    DmOpstage *this = (DmOpstage *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_80A9FD30);
    DmOpstage_SetupAction(this, func_80A9FA58);
    Actor_SetScale((Actor *) this, 0.1f);
    temp_v0 = this->actor.params & 0xFF;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001C98);
        phi_v0 = this->actor.params & 0xFF;
    }
    if (phi_v0 > 0) {
        temp_f6 = this->actor.world.pos.y;
        temp_f8 = this->actor.world.pos.z;
        this->unk_1A4 = this->actor.world.pos.x;
        this->actor.world.pos.x = 0.0f;
        this->actor.world.pos.y = 0.0f;
        this->actor.world.pos.z = 0.0f;
        this->unk_1A8 = temp_f6;
        this->unk_1AC = temp_f8;
    }
}

void DmOpstage_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmOpstage *this = (DmOpstage *) thisx;
    if ((this->actor.params & 0xFF) == 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
    }
}

void func_80A9FA58(DmOpstage *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u32 temp_v0_2;

    temp_v0 = this->actor.params;
    if ((temp_v0 & 0xFF) == 0) {
        if (func_800EE29C(globalCtx, 0x73U) != 0) {
            temp_v0_2 = func_800EE200(globalCtx, 0x73U);
            if (globalCtx->csCtx.npcActions[temp_v0_2]->unk0 == 2) {
                this->actor.scale.x = 0.075f;
                this->actor.scale.z = 0.3f;
            } else {
                this->actor.scale.x = 0.1f;
                this->actor.scale.z = 0.1f;
            }
            func_800EDF24((Actor *) this, globalCtx, temp_v0_2);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if (func_800EE29C(globalCtx, ((((s32) temp_v0 >> 8) & 0xFF) + 0x74) & 0xFFFF) != 0) {
        func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, ((((s32) this->actor.params >> 8) & 0xFF) + 0x74) & 0xFFFF));
    }
}

void DmOpstage_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmOpstage *this = (DmOpstage *) thisx;
    this->actionFunc(this, globalCtx);
    if ((globalCtx->sceneNum == 8) && (gSaveContext.sceneSetupIndex == 0) && (globalCtx->csCtx.frames == 0x1E0)) {
        func_8019F128(0x2879U);
    }
}

void DmOpstage_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v1;
    s32 phi_v1;
    DmOpstage *this = (DmOpstage *) thisx;

    temp_v1 = this->actor.params & 0xFF;
    phi_v1 = temp_v1;
    if (temp_v1 > 0) {
        SysMatrix_InsertTranslation(this->actor.world.pos.x + this->unk_1A4, this->actor.world.pos.y + this->unk_1A8, this->actor.world.pos.z + this->unk_1AC, 0);
        Matrix_RotateY(this->actor.world.rot.y, 1U);
        Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
        phi_v1 = this->actor.params & 0xFF;
    }
    if (phi_v1 != 0) {
        if (phi_v1 != 1) {
            if (phi_v1 != 2) {
                if (phi_v1 != 3) {
                    return;
                }
                func_800BDFC0(globalCtx, &D_06003728);
                func_800BE03C(globalCtx, &D_06003720);
                return;
            }
            func_800BDFC0(globalCtx, &D_06003068);
            func_800BE03C(globalCtx, &D_06003060);
            return;
        }
        func_800BDFC0(globalCtx, &D_06002878);
        func_800BE03C(globalCtx, &D_06002870);
        return;
    }
    func_800BDFC0(globalCtx, &D_06000978);
    func_800BE03C(globalCtx, &D_06000970);
}
