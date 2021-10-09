typedef struct EnInvisibleRuppe {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x156 */ u8 unk_156;                         /* overlap; inferred */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ char pad_192[0x2];
    /* 0x194 */ void (*actionFunc)(EnInvisibleRuppe *, GlobalContext *);
} EnInvisibleRuppe;                                 /* size = 0x198 */

struct _mips2c_stack_EnInvisibleRuppe_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnInvisibleRuppe_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnInvisibleRuppe_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C258A0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C2590C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C259E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80C258A0(Actor *arg0, GlobalContext *arg1); /* static */
static ColliderCylinderInit D_80C25B50 = {
    {0xA, 0, 0, 0xD, 0x20, 1},
    {4, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xA, 0x1E, 0, {0, 0, 0}},
};

void func_80C258A0(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x144;
    sp24 = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
    Actor_UpdateBgCheckInfo(arg1, arg0, 32.0f, 30.0f, 0.0f, 4U);
}

void func_80C2590C(EnInvisibleRuppe *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    s32 temp_v0;

    if ((this->unk_156 & 2) != 0) {
        temp_v0 = this->actor.params & 3;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {

                } else {
                    play_sound(0x4803U);
                    Item_DropCollectible(globalCtx, (Vec3f *) &this->actor.world, 0x8002U);
                }
            } else {
                play_sound(0x4803U);
                Item_DropCollectible(globalCtx, (Vec3f *) &this->actor.world, 0x8001U);
            }
        } else {
            play_sound(0x4803U);
            Item_DropCollectible(globalCtx, (Vec3f *) &this->actor.world, 0x8000U);
        }
        temp_a1 = this->unk_190;
        if ((s32) temp_a1 >= 0) {
            Actor_SetSwitchFlag(globalCtx, (s32) temp_a1);
        }
        this->actionFunc = func_80C259E8;
    }
}

void func_80C259E8(EnInvisibleRuppe *this, GlobalContext *globalCtx) {
    Actor_MarkForDeath((Actor *) this);
}

void EnInvisibleRuppe_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    EnInvisibleRuppe *this = (EnInvisibleRuppe *) thisx;

    this->unk_190 = (s16) ((s32) (this->actor.params & 0x1FC) >> 2);
    if (this->unk_190 == 0x7F) {
        this->unk_190 = -1;
    }
    if (((s32) this->unk_190 >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->unk_190) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_a1 = &this->unk_144;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80C25B50);
    this->actionFunc = func_80C2590C;
}

void EnInvisibleRuppe_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnInvisibleRuppe *this = (EnInvisibleRuppe *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void EnInvisibleRuppe_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnInvisibleRuppe *this = (EnInvisibleRuppe *) thisx;
    this->actionFunc(this, globalCtx);
    func_80C258A0((Actor *) this, globalCtx);
}
