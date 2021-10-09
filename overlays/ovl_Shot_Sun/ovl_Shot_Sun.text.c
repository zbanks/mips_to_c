typedef struct ShotSun {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ void (*actionFunc)(ShotSun *, GlobalContext *);
    /* 0x194 */ ? unk_194;                          /* inferred */
    /* 0x194 */ char pad_194[0x4];
    /* 0x198 */ u16 unk_198;                        /* inferred */
    /* 0x19A */ s16 unk_19A;                        /* inferred */
    /* 0x19C */ s8 unk_19C;                         /* inferred */
    /* 0x19D */ char pad_19D[0x3];                  /* maybe part of unk_19C[4]? */
} ShotSun;                                          /* size = 0x1A0 */

struct _mips2c_stack_ShotSun_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ShotSun_Init {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ShotSun_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80973740 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80973804 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809738D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80973960 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ColliderCylinder *sp3C;              /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0xC];                    /* maybe part of sp48[4]? */
    /* 0x58 */ s16 sp58;                            /* inferred */
    /* 0x5A */ s16 sp5A;                            /* inferred */
    /* 0x5C */ s16 sp5C;                            /* inferred */
    /* 0x5E */ char pad_5E[0x2];
};                                                  /* size = 0x60 */

static ColliderCylinderInit D_80973BA0 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0x20, 0, 0}, 0, 1, 1},
    {0x1E, 0x3C, 0, {0, 0, 0}},
};

void ShotSun_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a1;
    s32 temp_v0;
    u32 temp_t7;
    u32 temp_t9;
    ShotSun *this = (ShotSun *) thisx;

    temp_v0 = this->actor.params & 0xFF;
    if ((temp_v0 == 0x40) || (temp_v0 == 0x41)) {
        this->unk_19C = 0;
        temp_t7 = this->actor.flags | 0x10;
        temp_t9 = temp_t7 | 0x2000000;
        this->actor.flags = temp_t7;
        this->actor.flags = temp_t9;
        this->actionFunc = func_809738D0;
        this->actor.flags = temp_t9 | 0x8000000;
        return;
    }
    temp_a1 = &this->unk_144;
    sp1C = temp_a1;
    this = this;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80973BA0);
    this->actionFunc = func_80973960;
    this->actor.flags &= -2;
}

void ShotSun_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;
    ShotSun *this = (ShotSun *) thisx;

    temp_v0 = this->actor.params & 0xFF;
    if ((temp_v0 != 0x40) && (temp_v0 != 0x41)) {
        Collider_DestroyCylinder(globalCtx, &this->unk_144);
    }
}

void func_80973740(ShotSun *this, GlobalContext *globalCtx) {
    s32 sp3C;
    s32 sp38;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_t0;

    temp_v1 = this->unk_19A;
    temp_v0 = this->actor.params & 0xFF;
    phi_t0 = 0;
    if ((s32) temp_v1 > 0) {
        this->unk_19A = temp_v1 - 1;
        return;
    }
    sp38 = 0;
    sp3C = temp_v0;
    ActorCutscene_Stop((s16) this->actor.cutscene);
    if (temp_v0 != 0x40) {
        if (temp_v0 != 0x41) {

        } else {
            goto block_6;
        }
    } else {
block_6:
        phi_t0 = 7;
    }
    Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x10, this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) phi_t0);
    Actor_MarkForDeath((Actor *) this);
}

void func_80973804(ShotSun *this, GlobalContext *globalCtx) {
    s8 temp_a2;

    temp_a2 = this->actor.cutscene;
    if (temp_a2 != -1) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a2) != 0) {
            goto block_3;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        return;
    }
block_3:
    if ((s16) this->actor.cutscene != -1) {
        ActorCutscene_Start((s16) this->actor.cutscene, (Actor *) this);
    }
    this->actionFunc = func_80973740;
    this->unk_19A = 0x32;
    Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x49, this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0x11);
    func_8019F1C0(&this->actor.projectedPos, 0x287BU);
}

void func_809738D0(ShotSun *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    u16 temp_a2;

    temp_v0 = this->actor.params & 0xFF;
    if (globalCtx->msgCtx.unk1202A == 3) {
        temp_a2 = globalCtx->msgCtx.unk1202E;
        if (temp_a2 != 0xA) {
            if (temp_a2 != 0xB) {
                return;
            }
            if (temp_v0 == 0x40) {
                this->actionFunc = func_80973804;
                globalCtx->msgCtx.unk1202A = 4;
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return;
        }
        if (temp_v0 == 0x41) {
            this->actionFunc = func_80973804;
            globalCtx->msgCtx.unk1202A = 4;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80973960(ShotSun *this, GlobalContext *globalCtx) {
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    ColliderCylinder *sp3C;
    Actor *temp_v1;
    ColliderCylinder *temp_a2;
    EnItem00 *temp_v0;
    f32 *temp_a1;
    s16 *temp_a1_2;
    u16 temp_v0_2;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if ((this->unk_144.base.acFlags & 2) != 0) {
        this = this;
        play_sound(0x4802U);
        temp_a1 = &sp40;
        if (gSaveContext.inventory.items[gItemSlots[2]] == 0xFF) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x80, 700.0f, -800.0f, 7261.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 7);
            gSaveContext.cutsceneTrigger = 1;
        } else {
            sp40 = 700.0f;
            sp44 = -800.0f;
            sp48 = 7261.0f;
            temp_v0 = Item_DropCollectible(globalCtx, (Vec3f *) temp_a1, 0xEU);
            if (temp_v0 != 0) {
                temp_v0->unk152 = 0x1770;
                temp_v0->actor.speedXZ = 0.0f;
            }
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (!(this->actor.xzDistToPlayer > 120.0f)) {
        temp_v0_2 = gSaveContext.time;
        if (((s32) temp_v0_2 >= 0x4555) && ((s32) temp_v0_2 < 0x5000)) {
            temp_a1_2 = &sp58;
            temp_a2 = &this->unk_144;
            sp58 = (s16) (s32) (temp_v1->unk_C40 + (globalCtx->envCtx.unk_4 * 0.16666667f));
            sp5A = (s16) (s32) ((temp_v1->unk_C44 - 30.0f) + (globalCtx->envCtx.unk_8 * 0.16666667f));
            sp5C = (s16) (s32) (temp_v1->unk_C48 + (globalCtx->envCtx.unk_C * 0.16666667f));
            this->unk_194 = (unaligned s32) temp_a1_2->unk_0;
            this->unk_198 = temp_a1_2->unk_4;
            sp3C = temp_a2;
            Collider_SetCylinderPosition(temp_a2, (Vec3s *) temp_a1_2);
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
        }
    }
}

void ShotSun_Update(Actor *thisx, GlobalContext *globalCtx) {
    ShotSun *this = (ShotSun *) thisx;
    this->actionFunc(this, globalCtx);
}
