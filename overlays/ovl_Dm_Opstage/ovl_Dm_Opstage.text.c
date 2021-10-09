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

typedef struct DmOpstage {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x58];                 /* maybe part of unk144[23]? */
    /* 0x01A0 */ void (*actionFunc)(DmOpstage *, GlobalContext *);
    /* 0x01A4 */ f32 unk1A4;                        /* inferred */
    /* 0x01A8 */ f32 unk1A8;                        /* inferred */
    /* 0x01AC */ f32 unk1AC;                        /* inferred */
} DmOpstage;                                        /* size 0x1B0 */

void DmOpstage_SetupAction(DmOpstage *this, void (*actionFunc)(DmOpstage *, GlobalContext *)) {
    DmOpstage *self = (DmOpstage *) this;
    self->actionFunc = actionFunc;
}

void DmOpstage_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmOpstage *this = (DmOpstage *) thisx;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_v0;
    s32 phi_v0;

    Actor_ProcessInitChain(&this->actor, &D_80A9FD30);
    DmOpstage_SetupAction(this, func_80A9FA58);
    Actor_SetScale(&this->actor, 0.1f);
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
        this->unk1A4 = this->actor.world.pos.x;
        this->actor.world.pos.x = 0.0f;
        this->actor.world.pos.y = 0.0f;
        this->actor.world.pos.z = 0.0f;
        this->unk1A8 = temp_f6;
        this->unk1AC = temp_f8;
    }
}

void DmOpstage_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmOpstage *this = (DmOpstage *) thisx;
    if ((this->actor.params & 0xFF) == 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
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
            func_800EDF24(&this->actor, globalCtx, temp_v0_2);
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return;
    }
    if (func_800EE29C(globalCtx, ((((s32) temp_v0 >> 8) & 0xFF) + 0x74) & 0xFFFF) != 0) {
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, ((((s32) this->actor.params >> 8) & 0xFF) + 0x74) & 0xFFFF));
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
    DmOpstage *this = (DmOpstage *) thisx;
    s32 temp_v1;
    s32 phi_v1;

    temp_v1 = this->actor.params & 0xFF;
    phi_v1 = temp_v1;
    if (temp_v1 > 0) {
        SysMatrix_InsertTranslation(this->actor.world.pos.x + this->unk1A4, this->actor.world.pos.y + this->unk1A8, this->actor.world.pos.z + this->unk1AC, 0);
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

