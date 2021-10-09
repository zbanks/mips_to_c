extern ? D_0600ACB8;
extern CollisionHeader D_0600BF40;

typedef struct BgHakuginElvpole {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ s16 unk15C;                        /* inferred */
    /* 0x015E */ s16 unk15E;                        /* inferred */
    /* 0x0160 */ u16 unk160;                        /* inferred */
    /* 0x0162 */ char pad162[0x2];                  /* maybe part of unk160[2]? */
    /* 0x0164 */ void (*actionFunc)(BgHakuginElvpole *, GlobalContext *);
} BgHakuginElvpole;                                 /* size 0x168 */

void BgHakuginElvpole_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginElvpole *this = (BgHakuginElvpole *) thisx;
    CollisionHeader *sp28;
    s32 temp_a1;

    sp28 = NULL;
    Actor_SetScale(&this->actor, 0.1f);
    this->actionFunc = func_80ABD92C;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_0600BF40, &sp28);
    this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp28);
    temp_a1 = this->actor.params & 0x7F;
    this->unk15C = 0;
    this->unk160 = 0;
    if ((temp_a1 != 0x7F) && (Flags_GetSwitch(globalCtx, temp_a1) != 0)) {
        this->unk15E = 0x64;
        return;
    }
    this->unk15E = -1;
    this->actor.world.pos.y = this->actor.home.pos.y - 320.0f;
}

void BgHakuginElvpole_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginElvpole *this = (BgHakuginElvpole *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
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
    temp_v0 = this->unk15E;
    if ((s32) temp_v0 > 0) {
        temp_f0 = this->actor.world.pos.y;
        if ((temp_f0 - this->actor.home.pos.y) < -120.0f) {
            this->actor.world.pos.y = temp_f0 + 4.0f;
            sp28 = 1;
        } else if ((s32) temp_v0 > 0) {
            if (temp_v0 == 0x64) {
                Audio_PlayActorSound2(&this->actor, 0x2893U);
            }
            this->unk15E += -1;
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
            this->unk15E = -1;
            Audio_PlayActorSound2(&this->actor, 0x2893U);
        }
    } else {
        temp_a1 = this->actor.params & 0x7F;
        if ((temp_a1 != 0x7F) && (Flags_GetSwitch(globalCtx, temp_a1) != 0)) {
            this->unk15E = 0x64;
            this->unk160 = 1;
        }
    }
    if ((sp28 != 0) || ((this->unk15C & 7) != 0)) {
        temp_v0_2 = this->unk15C;
        if ((temp_v0_2 & 1) != 0) {
            phi_f2 = 1.0f;
        } else {
            phi_f2 = -1.0f;
        }
        this->unk15C = temp_v0_2 + 1;
        sp24 = phi_f2;
        this->actor.world.pos.x = (Math_SinS((s16) (this->unk15C << 0xD)) * phi_f2) + this->actor.home.pos.x;
        this->actor.world.pos.z = (Math_CosS((s16) (this->unk15C << 0xD)) * phi_f2) + this->actor.home.pos.z;
        func_800B9010(&this->actor, 0x2103U);
    } else {
        this->unk15C = 0;
    }
    if (this->unk160 != 0) {
        temp_a0 = this->actor.cutscene;
        if (temp_a0 == -1) {
            this->unk160 = 0;
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, &this->actor);
            this->unk160 = 0;
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        // Duplicate return node #27. Try simplifying control flow for better match
    }
}

void BgHakuginElvpole_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginElvpole *this = (BgHakuginElvpole *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgHakuginElvpole_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginElvpole *this = (BgHakuginElvpole *) thisx;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a2;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_v0 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_a2;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    sp24 = temp_a2;
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_0600ACB8;
}

