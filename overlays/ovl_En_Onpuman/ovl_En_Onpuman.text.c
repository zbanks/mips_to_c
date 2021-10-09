s32 func_800B8718(EnOnpuman *, GlobalContext *);    /* extern */
? func_800B874C(EnOnpuman *, GlobalContext *, ?, ?); /* extern */
Actor *func_80B11F44(GlobalContext *arg0);          /* static */
void func_80B11F78(void *arg0, void *arg1);         /* static */
void func_80B1202C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B1217C(EnOnpuman *arg0, GlobalContext *arg1); /* static */
void func_80B121D8(EnOnpuman *arg0, GlobalContext *arg1); /* static */
static ColliderCylinderInit D_80B12390 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};

typedef struct EnOnpuman {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char pad144[0x110];
    /* 0x0254 */ ColliderCylinder unk254;           /* inferred */
    /* 0x02A0 */ Actor *unk2A0;                     /* inferred */
    /* 0x02A4 */ s16 unk2A4;                        /* inferred */
    /* 0x02A6 */ char pad2A6[0x2];                  /* maybe part of unk2A4[2]? */
    /* 0x02A8 */ void (*actionFunc)(EnOnpuman *, GlobalContext *);
} EnOnpuman;                                        /* size 0x2AC */

void EnOnpuman_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnOnpuman *this = (EnOnpuman *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    this->actor.flags |= 0x2000000;
    Collider_InitAndSetCylinder(globalCtx, &this->unk254, &this->actor, &D_80B12390);
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.targetMode = 6;
    this->unk2A4 = 0;
    this->unk2A0 = NULL;
    this->actionFunc = func_80B121D8;
    this->actor.velocity.y = -10.0f;
    this->actor.minVelocityY = -10.0f;
    this->actor.gravity = -5.0f;
}

void EnOnpuman_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnOnpuman *this = (EnOnpuman *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk254);
}

void *func_80B11F44(GlobalContext *arg0) {
    void *temp_v1;
    void *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[7].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
        if (temp_v1->id != 0x1D6) {
            phi_v1 = temp_v1->next;
        }
        return phi_v1;
    }
    return NULL;
}

void func_80B11F78(void *arg0, void *arg1) {
    s8 temp_a0;
    s8 temp_a0_2;
    u16 temp_v0;

    temp_v0 = arg1->unk16932;
    if (temp_v0 == 4) {
        temp_a0 = arg0->unk38;
        arg0->unk2A8 = func_80B121D8;
        if (temp_a0 != -1) {
            ActorCutscene_Stop((s16) temp_a0);
            return;
        }
        // Duplicate return node #7. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 3) {
        arg0 = arg0;
        play_sound(0x4802U);
        arg1->unk16932 = 4;
        temp_a0_2 = arg0->unk38;
        if (temp_a0_2 != -1) {
            arg0 = arg0;
            ActorCutscene_Stop((s16) temp_a0_2);
        }
        arg0->unk2A8 = func_80B121D8;
    }
}

void func_80B1202C(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0_2;
    MessageContext *temp_a0;
    s8 temp_a0_3;
    u16 temp_v0;
    u16 temp_v0_4;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_a0 = arg1 + 0x4908;
    arg1 = arg1;
    if (func_80152498(temp_a0) == 5) {
        temp_a0_2 = arg1;
        arg1 = arg1;
        if (func_80147624(temp_a0_2) != 0) {
            temp_v0 = arg1->msgCtx.unk11F04;
            if (temp_v0 != 0x8D4) {
                if (temp_v0 != 0x8D6) {
                    if (temp_v0 != 0x8DA) {

                    } else {
                        func_80151938(arg1, 0x8D6U);
                        temp_v0_2 = arg0->unk2A0;
                        if (temp_v0_2 != 0) {
                            temp_v0_2->unk14 = 0x50;
                        }
                    }
                } else {
                    arg0->unk2A8 = func_80B11F78;
                    func_80152434(arg1, 0x3AU);
                    temp_v0_3 = arg0->unk2A0;
                    if (temp_v0_3 != 0) {
                        temp_v0_3->unk14 = 0;
                    }
                }
            } else {
                arg0->unk2A4 = (u16) (arg0->unk2A4 | 1);
                func_80151938(arg1, 0x8DAU);
            }
        }
    }
    temp_v0_4 = arg0->unk2A4;
    if ((temp_v0_4 & 1) != 0) {
        temp_a0_3 = arg0->cutscene;
        if (temp_a0_3 == -1) {
            arg0->unk2A4 = (u16) (temp_v0_4 & 0xFFFE);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0_3) != 0) {
            arg0->unk2A4 = (u16) (arg0->unk2A4 & 0xFFFE);
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        // Duplicate return node #17. Try simplifying control flow for better match
    }
}

void func_80B1217C(EnOnpuman *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        arg0->actionFunc = func_80B121D8;
        func_801477B4(arg1);
    }
}

void func_80B121D8(EnOnpuman *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 phi_v1;

    if (func_800B8718(arg0, arg1) != 0) {
        arg0->actionFunc = (void (*)(EnOnpuman *, GlobalContext *)) func_80B1202C;
        func_801518B0(arg1, 0x8D4U, NULL);
        arg0->unk2A0 = func_80B11F44(arg1);
        return;
    }
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80B1217C;
        return;
    }
    temp_v0 = arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y;
    if (arg0->actor.xzDistToPlayer < 200.0f) {
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_v1 < 0x4301) {
            arg0->actor.textId = 0x8D3;
            func_800B8614(&arg0->actor, arg1, 100.0f);
            func_800B874C(arg0, arg1, 0x42C80000, 0x42C80000);
        }
    }
}

void EnOnpuman_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnOnpuman *this = (EnOnpuman *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;

    temp_a2 = &this->unk254;
    sp2C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    this->actionFunc(this, globalCtx);
}

