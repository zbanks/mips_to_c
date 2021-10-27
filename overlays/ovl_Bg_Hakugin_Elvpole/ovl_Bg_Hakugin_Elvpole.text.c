typedef struct BgHakuginElvpole {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ s16 unk_15C;                        /* inferred */
    /* 0x15E */ s16 unk_15E;                        /* inferred */
    /* 0x160 */ u16 unk_160;                        /* inferred */
    /* 0x162 */ char pad_162[0x2];
    /* 0x164 */ void (*actionFunc)(BgHakuginElvpole *, GlobalContext *);
} BgHakuginElvpole;                                 /* size = 0x168 */

struct _mips2c_stack_BgHakuginElvpole_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgHakuginElvpole_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgHakuginElvpole_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ CollisionHeader *sp28;               /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgHakuginElvpole_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ABD92C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

extern ? D_0600ACB8;
extern CollisionHeader D_0600BF40;

void BgHakuginElvpole_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp28;
    s32 temp_a1;
    BgHakuginElvpole *this = (BgHakuginElvpole *) thisx;

    sp28 = NULL;
    Actor_SetScale((Actor *) this, 0.1f);
    this->actionFunc = func_80ABD92C;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_0600BF40, &sp28);
    this->unk_144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp28);
    temp_a1 = this->actor.params & 0x7F;
    this->unk_15C = 0;
    this->unk_160 = 0;
    if ((temp_a1 != 0x7F) && (Flags_GetSwitch(globalCtx, temp_a1) != 0)) {
        this->unk_15E = 0x64;
        return;
    }
    this->unk_15E = -1;
    this->actor.world.pos.y = this->actor.home.pos.y - 320.0f;
}

void BgHakuginElvpole_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginElvpole *this = (BgHakuginElvpole *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80ABD92C(BgHakuginElvpole *this, GlobalContext *globalCtx) {
    s32 sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a1;
    s8 temp_a0;
    f32 phi_f2;

    sp28 = 0;
    temp_v0 = this->unk_15E;
    if ((s32) temp_v0 > 0) {
        temp_f0 = this->actor.world.pos.y;
        if ((temp_f0 - this->actor.home.pos.y) < -120.0f) {
            this->actor.world.pos.y = temp_f0 + 4.0f;
            sp28 = 1;
        } else if ((s32) temp_v0 > 0) {
            if (temp_v0 == 0x64) {
                Audio_PlayActorSound2((Actor *) this, 0x2893U);
            }
            this->unk_15E += -1;
            this->actor.world.pos.y = this->actor.home.pos.y - 120.0f;
        }
    } else if (temp_v0 == 0) {
        temp_f0_2 = this->actor.world.pos.y;
        temp_f2 = this->actor.home.pos.y;
        if ((temp_f0_2 - temp_f2) > -320.0f) {
            this->actor.world.pos.y = temp_f0_2 - 4.0f;
            sp28 = 1;
        } else {
            this->actor.world.pos.y = temp_f2 - 320.0f;
            Actor_UnsetSwitchFlag(globalCtx, this->actor.params & 0x7F);
            this->unk_15E = -1;
            Audio_PlayActorSound2((Actor *) this, 0x2893U);
        }
    } else {
        temp_a1 = this->actor.params & 0x7F;
        if ((temp_a1 != 0x7F) && (Flags_GetSwitch(globalCtx, temp_a1) != 0)) {
            this->unk_15E = 0x64;
            this->unk_160 = 1;
        }
    }
    if ((sp28 != 0) || ((this->unk_15C & 7) != 0)) {
        temp_v0_2 = this->unk_15C;
        if ((temp_v0_2 & 1) != 0) {
            phi_f2 = 1.0f;
        } else {
            phi_f2 = -1.0f;
        }
        this->unk_15C = temp_v0_2 + 1;
        sp24 = phi_f2;
        this->actor.world.pos.x = (Math_SinS((s16) (this->unk_15C << 0xD)) * phi_f2) + this->actor.home.pos.x;
        this->actor.world.pos.z = (Math_CosS((s16) (this->unk_15C << 0xD)) * phi_f2) + this->actor.home.pos.z;
        func_800B9010((Actor *) this, 0x2103U);
    } else {
        this->unk_15C = 0;
    }
    if (this->unk_160 != 0) {
        temp_a0 = this->actor.cutscene;
        if (temp_a0 == -1) {
            this->unk_160 = 0;
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
            this->unk_160 = 0;
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        /* Duplicate return node #27. Try simplifying control flow for better match */
    }
}

void BgHakuginElvpole_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginElvpole *this = (BgHakuginElvpole *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgHakuginElvpole_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a2;
    BgHakuginElvpole *this = (BgHakuginElvpole *) thisx;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_v0 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_a2;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    sp24 = temp_a2;
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_0600ACB8;
}
