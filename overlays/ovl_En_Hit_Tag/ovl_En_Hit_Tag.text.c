static ColliderCylinderInit D_80BE21F0 = {
    {0xA, 0, 9, 9, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0x10, 0x20, 0, {0, 0, 0}},
};

typedef struct EnHitTag {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ void (*actionFunc)(EnHitTag *, GlobalContext *);
} EnHitTag;                                         /* size 0x194 */

void EnHitTag_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnHitTag *this = (EnHitTag *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    Actor_SetScale(&this->actor, 1.0f);
    this->actionFunc = func_80BE20E8;
    temp_a1 = &this->unk144;
    sp24 = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, &this->actor, &D_80BE21F0);
    Collider_UpdateCylinder(&this->actor, temp_a1);
    if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9) != 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnHitTag_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHitTag *this = (EnHitTag *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void func_80BE20E8(EnHitTag *this, GlobalContext *globalCtx) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 temp_s0;
    s32 phi_s0;

    if ((this->unk144.base.acFlags & 2) != 0) {
        play_sound(0x4803U);
        Actor_MarkForDeath(&this->actor);
        sp2C = this->actor.world.pos.x;
        sp30 = this->actor.world.pos.y;
        sp34 = this->actor.world.pos.z;
        phi_s0 = 0;
        do {
            Item_DropCollectible(globalCtx, (Vec3f *) &sp2C, 0U);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 3);
        return;
    }
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk144.base);
}

void EnHitTag_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHitTag *this = (EnHitTag *) thisx;
    this->actionFunc(this, globalCtx);
}

