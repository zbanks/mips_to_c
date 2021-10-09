void func_80C258A0(Actor *arg0, GlobalContext *arg1); /* static */
static ColliderCylinderInit D_80C25B50 = {
    {0xA, 0, 0, 0xD, 0x20, 1},
    {4, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xA, 0x1E, 0, {0, 0, 0}},
};

typedef struct EnInvisibleRuppe {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0156 */ u8 unk156;                         /* overlap; inferred */
    /* 0x0157 */ char pad157[0x39];                 /* maybe part of unk156[58]? */
    /* 0x0190 */ s16 unk190;                        /* inferred */
    /* 0x0192 */ char pad192[0x2];                  /* maybe part of unk190[2]? */
    /* 0x0194 */ void (*actionFunc)(EnInvisibleRuppe *, GlobalContext *);
} EnInvisibleRuppe;                                 /* size 0x198 */

void func_80C258A0(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x144;
    sp24 = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
    Actor_UpdateBgCheckInfo(arg1, arg0, 32.0f, 30.0f, 0.0f, 4U);
}

void func_80C2590C(EnInvisibleRuppe *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    s32 temp_v0;

    if ((this->unk156 & 2) != 0) {
        temp_v0 = this->actor.params & 3;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {

                } else {
                    play_sound(0x4803U);
                    Item_DropCollectible(globalCtx, &this->actor.world.pos, 0x8002U);
                }
            } else {
                play_sound(0x4803U);
                Item_DropCollectible(globalCtx, &this->actor.world.pos, 0x8001U);
            }
        } else {
            play_sound(0x4803U);
            Item_DropCollectible(globalCtx, &this->actor.world.pos, 0x8000U);
        }
        temp_a1 = this->unk190;
        if ((s32) temp_a1 >= 0) {
            Actor_SetSwitchFlag(globalCtx, (s32) temp_a1);
        }
        this->actionFunc = func_80C259E8;
    }
}

void func_80C259E8(EnInvisibleRuppe *this, GlobalContext *globalCtx) {
    Actor_MarkForDeath(&this->actor);
}

void EnInvisibleRuppe_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnInvisibleRuppe *this = (EnInvisibleRuppe *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    this->unk190 = (s16) ((s32) (this->actor.params & 0x1FC) >> 2);
    if (this->unk190 == 0x7F) {
        this->unk190 = -1;
    }
    if (((s32) this->unk190 >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->unk190) != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_a1 = &this->unk144;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_InitAndSetCylinder(globalCtx, temp_a1, &this->actor, &D_80C25B50);
    this->actionFunc = func_80C2590C;
}

void EnInvisibleRuppe_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnInvisibleRuppe *this = (EnInvisibleRuppe *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void EnInvisibleRuppe_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnInvisibleRuppe *this = (EnInvisibleRuppe *) thisx;
    this->actionFunc(this, globalCtx);
    func_80C258A0(&this->actor, globalCtx);
}

