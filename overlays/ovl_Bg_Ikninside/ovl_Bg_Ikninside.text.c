void func_80C07220(s32 arg0, ? arg1);               /* static */
void func_80C07230(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C072D0(BgIkninside *, GlobalContext *); /* static */
extern ? D_0600CC78;
extern CollisionHeader D_0600DE48;
static ? D_80C076A0;                                /* unable to generate initializer */
static ColliderCylinderInit D_80C076A8 = {
    {0xA, 0, 9, 9, 0x10, 1},
    {0, {0, 0, 0}, {0x80000008, 0, 0}, 0, 1, 0},
    {0x20, 0x20, 0, {0, 0, 0}},
};
static Vec3f D_80C076D4 = {0.0f, -1.0f, 0.0f};

typedef struct BgIkninside {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ ColliderCylinder unk15C;           /* inferred */
    /* 0x01A8 */ char pad1A8[0x2];
    /* 0x01AA */ s16 unk1AA;                        /* inferred */
    /* 0x01AC */ void (*actionFunc)(BgIkninside *, GlobalContext *);
} BgIkninside;                                      /* size 0x1B0 */

void BgIkninside_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgIkninside *this = (BgIkninside *) thisx;
    CollisionHeader *sp28;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;

    sp28 = NULL;
    Actor_SetScale(&this->actor, 0.1f);
    this->actionFunc = func_80C072D0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_0600DE48, &sp28);
    this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp28);
    temp_a1 = &this->unk15C;
    sp20 = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, &this->actor, &D_80C076A8);
    Collider_UpdateCylinder(&this->actor, temp_a1);
    if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9) != 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void BgIkninside_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgIkninside *this = (BgIkninside *) thisx;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    Collider_DestroyCylinder(temp_a0, &this->unk15C);
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80C07220(s32 arg0, ? arg1) {

}

void func_80C07230(Actor *arg0, GlobalContext *arg1) {
    if (arg0->cutscene == -1) {
        arg0->unk1AC = func_80C07220;
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        return;
    }
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        arg0->unk1AC = func_80C07220;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80C072D0(BgIkninside *arg0, GlobalContext *arg1) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    ColliderInfo *temp_v0;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    s16 temp_s0;
    s16 temp_s1;
    s16 temp_v0_2;
    s32 temp_s2;
    s32 phi_s2;

    if ((arg0->unk15C.base.acFlags & 2) != 0) {
        temp_v0 = arg0->unk15C.info.acHitInfo;
        if ((temp_v0 != 0) && (phi_s2 = 0, (temp_v0->toucher.dmgFlags & 0x80000000))) {
            temp_s5 = &sp9C;
            temp_s4 = &spA8;
            do {
                temp_s0 = Rand_S16Offset(0x1800, 0x2800);
                temp_s1 = (s16) (Rand_Next() >> 0x10);
                temp_f22 = Rand_ZeroFloat(3.0f) + 8.0f;
                temp_f20 = Math_CosS(temp_s0);
                sp9C = Math_SinS(temp_s1) * (temp_f22 * temp_f20);
                temp_f20_2 = Math_SinS(temp_s0);
                spA0 = Rand_ZeroFloat(5.0f) + (temp_f22 * temp_f20_2);
                temp_f20_3 = Math_CosS(temp_s0);
                spA4 = Math_CosS(temp_s1) * (temp_f22 * temp_f20_3);
                spA8 = (Rand_ZeroFloat(10.0f) * sp9C) + arg0->actor.world.pos.x;
                spAC = (Rand_ZeroFloat(1.0f) * spA0) + arg0->actor.world.pos.y;
                spB0 = (Rand_ZeroFloat(10.0f) * spA4) + arg0->actor.world.pos.z;
                EffectSsHahen_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, &D_80C076D4, (s16) 0, (s16) 0x1E, (s16) 0x236, (s16) 0x19, *(&D_80C076A0 + ((phi_s2 & 1) * 4)));
                temp_s2 = phi_s2 + 1;
                phi_s2 = temp_s2;
            } while (temp_s2 != 0x14);
            Actor_SetSwitchFlag(arg1, (s32) (arg0->actor.params & 0xFE00) >> 9);
            arg0->actionFunc = (void (*)(BgIkninside *, GlobalContext *)) func_80C07230;
            arg0->actor.draw = NULL;
            func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk144);
        } else {
            arg0->unk1AA = 0x14;
        }
    }
    temp_v0_2 = arg0->unk1AA;
    if ((s32) temp_v0_2 > 0) {
        if ((temp_v0_2 & 1) != 0) {
            arg0->actor.world.pos.y = arg0->actor.home.pos.y - 1.0f;
        } else {
            arg0->actor.world.pos.y = arg0->actor.home.pos.y;
        }
        arg0->unk1AA += -1;
    } else {
        arg0->unk1AA = 0;
        arg0->actor.world.pos.y = arg0->actor.home.pos.y;
    }
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, &arg0->unk15C.base);
}

void BgIkninside_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgIkninside *this = (BgIkninside *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgIkninside_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgIkninside *this = (BgIkninside *) thisx;
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
    temp_v0_2->words.w1 = (u32) &D_0600CC78;
}

