static ColliderCylinderInit D_808B5360 = {
    {0xA, 9, 0, 0, 8, 1},
    {2, {1, 0, 1}, {0xF7CFFFFF, 0, 0}, 0x19, 0, 0},
    {0x64, 0x64, 0, {0, 0, 0}},
};



void EnMFire1_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnMFire1 *this = (EnMFire1 *) thisx;
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a1;

    temp_a1 = &this->collider;
    sp1C = temp_a1;
    this = this;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_808B5360);
    if (this->actor.params != 0) {
        this->collider.info.toucher.dmgFlags = 0x40000;
    }
}

void EnMFire1_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMFire1 *this = (EnMFire1 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnMFire1_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMFire1 *this = (EnMFire1 *) thisx;
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;
    EnMFire1 *temp_a0_2;
    f32 *temp_a0;

    temp_a0 = &this->timer;
    this = this;
    if (Math_StepToF(temp_a0, 1.0f, 0.2f) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_a2 = &this->collider;
    temp_a1 = temp_a2;
    sp1C = temp_a2;
    temp_a0_2 = this;
    this = this;
    Collider_UpdateCylinder(&temp_a0_2->actor, temp_a1);
    CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

