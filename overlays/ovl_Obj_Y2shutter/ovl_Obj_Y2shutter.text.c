void func_80B9AA20(Actor *arg0, void *arg1, s32 arg2); /* static */
static ? D_80B9AE70;                                /* unable to generate initializer */
static ? D_80B9AE8C;                                /* unable to generate initializer */
static ? D_80B9AE8D;                                /* unable to generate initializer */
static s8 D_80B9AE8E = {
    0xA0,
    0,
    6,
    0,
    0x57,
    0x20,
    6,
    0,
    0x5E,
    0xC8,
    0x43,
    0x16,
    0,
    0,
    0x3F,
    0x80,
    0,
    0,
    0x3D,
    0x23,
    0xD7,
    0xA,
    0xBF,
    0x80,
    0,
    0,
    0x3D,
    0x23,
    0xD7,
    0xA,
    6,
    0xC,
};
static s8 D_80B9AEAE = 0xA0;
static InitChainEntry D_80B9AEB0;                   /* unable to generate initializer */

typedef struct ObjY2shutter {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ s16 unk15C;                        /* inferred */
    /* 0x015E */ u8 unk15E;                         /* inferred */
    /* 0x015F */ u8 unk15F;                         /* inferred */
} ObjY2shutter;                                     /* size 0x160 */

void ObjY2shutter_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjY2shutter *this = (ObjY2shutter *) thisx;
    void *sp1C;

    sp1C = ((((s32) this->actor.params >> 7) & 1) << 5) + &D_80B9AE70;
    Actor_ProcessInitChain(&this->actor, &D_80B9AEB0);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, sp1C->unk4);
}

void ObjY2shutter_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjY2shutter *this = (ObjY2shutter *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80B9AA20(Actor *arg0, void *arg1, s32 arg2) {
    arg0->unk15C = (s16) arg1->unk1E;
    arg0->unk15F = (u8) arg1->unk1C;
    if (arg2 == 0) {
        Audio_PlayActorSound2(arg0, 0x2859U);
    }
}

void ObjY2shutter_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjY2shutter *this = (ObjY2shutter *) thisx;
    s32 sp34;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s16 sp22;
    GameInfo *temp_v0;
    f32 temp_f6;
    s16 temp_v1;
    s32 temp_t8;
    s32 temp_v0_5;
    s8 temp_a0;
    u8 temp_t1;
    u8 temp_v0_4;
    void *temp_v0_2;
    void *temp_v0_3;
    s32 phi_a0;
    s32 phi_v0;
    u8 phi_v1;
    f32 phi_f6;

    temp_t8 = ((s32) this->actor.params >> 7) & 1;
    sp34 = temp_t8;
    temp_v0 = gGameInfo;
    sp28 = 0.0f;
    sp24 = 0.0f;
    sp2C = this->actor.world.pos.y;
    D_80B9AE8E = temp_v0->data[756] + 0xA0;
    D_80B9AEAE = temp_v0->data[757] + 0xA0;
    if (((temp_t8 == 0) && (temp_v0->data[758] != 0)) || ((sp34 != 0) && (temp_v0->data[759] != 0))) {
        if (sp34 == 0) {
            temp_v0->data[758] = 0;
        } else {
            temp_v0->data[759] = 0;
        }
        if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
            Actor_UnsetSwitchFlag(globalCtx, this->actor.params & 0x7F);
        } else {
            Actor_SetSwitchFlag(globalCtx, this->actor.params & 0x7F);
        }
    }
    if (this->unk15F == 0) {
        if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
            temp_v1 = this->unk15C;
            temp_a0 = this->actor.cutscene;
            if (temp_v1 == 0) {
                if (((s32) temp_a0 >= 0) && (sp22 = (s16) temp_a0, (ActorCutscene_GetCanPlayNext((s16) temp_a0) == 0))) {
                    ActorCutscene_SetIntentToPlay((s16) temp_a0);
                } else if ((s32) this->actor.cutscene >= 0) {
                    ActorCutscene_StartAndSetUnkLinkFields((s16) (s32) this->actor.cutscene, &this->actor);
                    this->unk15C = -1;
                } else {
                    func_80B9AA20(&this->actor, (sp34 << 5) + &D_80B9AE70, sp34);
                }
            } else if ((s32) temp_v1 < 0) {
                if (func_800F22C4((s16) temp_a0, &this->actor) != 0) {
                    func_80B9AA20(&this->actor, (sp34 << 5) + &D_80B9AE70, sp34);
                }
            } else {
                temp_v0_2 = (sp34 << 5) + &D_80B9AE70;
                sp2C = this->actor.home.pos.y + temp_v0_2->unk8;
                sp28 = temp_v0_2->unkC;
                sp24 = temp_v0_2->unk10;
                if ((s32) temp_v1 < 2) {
                    Actor_UnsetSwitchFlag(globalCtx, this->actor.params & 0x7F);
                } else {
                    this->unk15C = temp_v1 - 1;
                }
            }
        } else if (this->unk15C != 0) {
            this->unk15C = 0;
            this->unk15F = *(&D_80B9AE8C + (sp34 << 5));
            if (sp34 == 0) {
                Audio_PlayActorSound2(&this->actor, 0x285AU);
            }
        } else {
            temp_v0_3 = (sp34 << 5) + &D_80B9AE70;
            sp2C = this->actor.home.pos.y;
            sp28 = temp_v0_3->unk14;
            sp24 = temp_v0_3->unk18;
        }
    }
    Math_StepToF(&this->actor.velocity.y, sp28, sp24);
    this->actor.world.pos.y += this->actor.velocity.y;
    if (((this->actor.world.pos.y - sp2C) * sp28) >= 0.0f) {
        this->actor.world.pos.y = sp2C;
        this->actor.velocity.y = 0.0f;
        if (this->unk15E == 0) {
            this->unk15E = 1;
            this->unk15F = *(&D_80B9AE8D + (sp34 << 5));
            if (sp34 != 0) {
                Audio_PlayActorSound2(&this->actor, 0x2837U);
            }
        }
    } else {
        this->unk15E = 0;
        if (sp34 != 0) {
            func_800B9010(&this->actor, 0x2036U);
        }
    }
    temp_v0_4 = this->unk15F;
    phi_v0 = (s32) temp_v0_4;
    phi_v1 = temp_v0_4;
    if (temp_v0_4 == 0) {
        phi_a0 = 0;
    } else {
        temp_t1 = temp_v0_4 - 1;
        temp_v0_5 = temp_t1 & 0xFF;
        this->unk15F = temp_t1;
        phi_a0 = temp_v0_5;
        phi_v0 = temp_v0_5;
        phi_v1 = (u8) temp_v0_5;
    }
    if (phi_a0 != 0) {
        temp_f6 = (f32) phi_v0;
        phi_f6 = temp_f6;
        if (phi_v0 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        this->actor.shape.yOffset = 2.0f * (f32) (phi_v1 & 1) * phi_f6;
    }
}

void ObjY2shutter_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjY2shutter *this = (ObjY2shutter *) thisx;
    func_800BDFC0(globalCtx, *(((((s32) this->actor.params >> 7) & 1) << 5) + &D_80B9AE70));
}

