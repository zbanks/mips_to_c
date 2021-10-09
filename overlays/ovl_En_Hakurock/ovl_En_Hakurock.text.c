void func_80B21BE0(Actor *arg0, Vec3f *arg1, s32 arg2); /* static */
void func_80B21EA4(EnHakurock *arg0, s32 arg1);     /* static */
void func_80B21FFC(EnHakurock *arg0);               /* static */
void func_80B220A8(Actor *arg0);                    /* static */
void func_80B222AC(Actor *arg0, void *arg1);        /* static */
void func_80B224C0(EnHakurock *arg0);               /* static */
void func_80B226AC(Actor *arg0);                    /* static */
void func_80B228F4(Actor *arg0, GraphicsContext **arg1); /* static */
void func_80B229A4(Actor *arg0, GraphicsContext **arg1); /* static */
extern ? D_06011100;
extern ? D_06011178;
static ColliderCylinderInit D_80B22A80 = {
    {0xC, 0x11, 0xD, 0x3D, 0x10, 1},
    {0, {0x20000000, 0, 0}, {0xF3CFBBFF, 0, 0}, 9, 1, 1},
    {0x3C, 0x3C, 0xFFE2, {0, 0, 0}},
};
static CollisionCheckInfoInit D_80B22AAC = {0, 0x3C, 0x3C, 0xFF};

typedef struct EnHakurock {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnHakurock *, GlobalContext *);
    /* 0x0148 */ s32 unk148;                        /* inferred */
    /* 0x014C */ ColliderCylinder unk14C;           /* inferred */
} EnHakurock;                                       /* size 0x198 */

void EnHakurock_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnHakurock *this = (EnHakurock *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 52.0f);
    Collider_InitAndSetCylinder(globalCtx, &this->unk14C, &this->actor, &D_80B22A80);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_80B22AAC);
    if (this->actor.params == 1) {
        this->actor.gravity = -1.5f;
    } else {
        this->unk14C.base.ocFlags1 &= 0xFFFB;
        this->actor.minVelocityY = -100.0f;
        this->actor.gravity = -7.0f;
    }
    func_80B21FFC(this);
}

void EnHakurock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHakurock *this = (EnHakurock *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk14C);
}

void func_80B21BE0(void *arg0, Vec3f *arg1, s32 arg2) {
    s16 sp2E;
    s16 sp2C;
    f32 sp28;
    f32 sp24;
    Vec3f *temp_s0;
    f32 temp_f18;
    f32 temp_f8;
    s32 temp_v1;
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0;
    phi_v1 = 0;
loop_1:
    temp_s0 = phi_v0 + 0x9F8;
    if ((s32) phi_v0->unkA10 < 0) {
        Math_Vec3f_Copy(temp_s0, arg1);
        sp2C = Rand_S16Offset(0x1000, 0x3000);
        sp2E = (s16) (Rand_Next() >> 0x10);
        sp28 = Rand_ZeroFloat(5.0f) + 10.0f;
        sp24 = Math_CosS(sp2C);
        temp_s0->unkC = (f32) (Math_SinS(sp2E) * (sp28 * sp24));
        temp_s0->unk10 = (f32) (Math_SinS(sp2C) * sp28);
        sp24 = Math_CosS(sp2C);
        temp_s0->unk14 = (f32) (Math_CosS(sp2E) * (sp28 * sp24));
        if ((arg2 == 1) || (arg2 == 3)) {
            temp_s0->unk24 = (f32) ((Rand_ZeroFloat(5.0f) + 25.0f) * 0.0012f);
            temp_s0->x = ((Rand_ZeroFloat(2.0f) + 9.0f) * temp_s0->unkC) + arg1->x;
            temp_s0->y = ((Rand_ZeroFloat(2.0f) + 3.0f) * temp_s0->unk10) + arg1->y;
            temp_f18 = Rand_ZeroFloat(2.0f) + 9.0f;
            temp_s0->unk1A = 1;
            temp_s0->z = (temp_f18 * temp_s0->unk14) + arg1->z;
        } else {
            temp_s0->unk24 = (f32) ((Rand_ZeroFloat(5.0f) + 18.0f) * 0.0001f);
            temp_s0->x = ((Rand_ZeroFloat(2.0f) + 3.0f) * temp_s0->unkC) + arg1->x;
            temp_s0->y = ((Rand_ZeroFloat(3.0f) + 1.0f) * temp_s0->unk10) + arg1->y;
            temp_f8 = Rand_ZeroFloat(2.0f) + 3.0f;
            temp_s0->unk1A = 0;
            temp_s0->z = (temp_f8 * temp_s0->unk14) + arg1->z;
        }
        temp_s0->unk1C = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk1E = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk20 = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk18 = 0x28;
        return;
    }
    temp_v1 = phi_v1 + 0x28;
    phi_v0 += 0x28;
    phi_v1 = temp_v1;
    if (temp_v1 == 0x1C20) {
        return;
    }
    goto loop_1;
}

void func_80B21EA4(EnHakurock *arg0, s32 arg1) {
    Vec3f sp4C;
    f32 temp_f20;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s5;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s0_3;
    s32 phi_s5;
    s32 phi_s0_4;

    if (arg1 == 0) {
        phi_s0 = 0;
        do {
            func_80B21BE0(arg0->actor.parent, arg0 + 0x24, arg1);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0x14);
        return;
    }
    if (arg1 == 2) {
        phi_s0_2 = 0;
        do {
            func_80B21BE0(arg0->actor.parent, arg0 + 0x24, arg1);
            temp_s0_2 = phi_s0_2 + 1;
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != 0xA);
        return;
    }
    Math_Vec3f_Copy(&sp4C, arg0 + 0x24);
    temp_f20 = arg0->actor.scale.x * 600.0f;
    phi_s0_3 = 1;
    if (arg1 == 1) {
        sp4C.y -= temp_f20;
        phi_s0_3 = 0;
    }
    if (phi_s0_3 < 3) {
        phi_s5 = (phi_s0_3 * 5) + 5;
        do {
            phi_s0_4 = 0;
            if (phi_s5 > 0) {
                do {
                    func_80B21BE0(arg0->actor.parent, &sp4C, arg1);
                    temp_s0_3 = phi_s0_4 + 1;
                    phi_s0_4 = temp_s0_3;
                } while (temp_s0_3 < phi_s5);
            }
            temp_s5 = phi_s5 + 5;
            sp4C.y += temp_f20;
            phi_s5 = temp_s5;
        } while (temp_s5 < 0x14);
    }
}

void func_80B21FFC(EnHakurock *arg0) {
    arg0->actor.bgCheckFlags &= 0xFFFE;
    arg0->unk14C.base.atFlags &= -3;
    arg0->unk14C.base.ocFlags1 &= -3;
    arg0->actor.draw = NULL;
    arg0->actor.params = 0;
    arg0->actionFunc = func_80B22040;
}

void func_80B22040(EnHakurock *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->actor.params;
    if (temp_v0 == 1) {
        func_80B220A8();
        return;
    }
    if (temp_v0 == 2) {
        func_80B222AC();
        return;
    }
    if (temp_v0 == 4) {
        func_80B226AC();
    }
}

void func_80B220A8(Actor *arg0) {
    s16 temp_v1;

    arg0->params = 1;
    arg0->draw = func_80B228F4;
    arg0->speedXZ = Rand_ZeroFloat(3.5f) + 2.5f;
    arg0->velocity.y = Rand_ZeroFloat(4.5f) + 18.0f;
    Actor_SetScale(arg0, (Rand_ZeroFloat(5.0f) + 15.0f) * 0.001f);
    arg0->world.rot.y = (Rand_Next() >> 0x12) + arg0->parent->shape.rot.y + 0x8000;
    arg0->shape.rot.x = (s16) (Rand_Next() >> 0x10);
    arg0->shape.rot.y = (s16) (Rand_Next() >> 0x10);
    arg0->shape.rot.z = (s16) (Rand_Next() >> 0x10);
    arg0->unk148 = 0xA;
    arg0->unk18C = (s16) (s32) (arg0->scale.x * 2500.0f);
    temp_v1 = arg0->unk18C;
    arg0->unk190 = (s16) -(s32) temp_v1;
    arg0->unk18E = (s16) (temp_v1 * 2);
    Math_Vec3f_Copy(&arg0->prevPos, &arg0->world.pos);
    arg0->unk144 = func_80B221E8;
}

void func_80B221E8(EnHakurock *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = this->unk148;
    if (temp_v0 > 0) {
        this->unk148 = temp_v0 - 1;
    }
    this->actor.shape.rot.x += 0x700;
    this->actor.shape.rot.y += 0x900;
    this->actor.shape.rot.z += 0xB00;
    if (((this->unk14C.base.atFlags & 2) != 0) || ((this->unk148 == 0) && ((this->unk14C.base.ocFlags1 & 2) != 0)) || (((this->actor.bgCheckFlags & 1) != 0) && (this->actor.velocity.y < 0.0f))) {
        Audio_PlayActorSound2(&this->actor, 0x2852U);
        func_80B21EA4(this, 0);
        func_80B21FFC(this);
    }
}

void func_80B222AC(Actor *arg0, void *arg1) {
    s16 sp22;
    f32 temp_f8;
    void *temp_s1;

    temp_s1 = arg1->unk1CCC;
    arg0->draw = func_80B229A4;
    sp22 = (Rand_Next() >> 0x13) + temp_s1->unkBE;
    arg0->shape.rot.y = (s16) (Rand_Next() >> 0x10);
    arg0->world.pos.x = (Math_SinS(sp22) * 600.0f) + temp_s1->unk24;
    arg0->world.pos.y = temp_s1->unk28 + 700.0f;
    temp_f8 = Math_CosS(sp22) * 600.0f;
    arg0->shape.shadowScale = 5.0f;
    arg0->velocity.y = -10.0f;
    arg0->world.pos.z = temp_f8 + temp_s1->unk2C;
    Actor_SetScale(arg0, (Rand_ZeroFloat(5.0f) + 17.0f) * 0.01f);
    arg0->scale.x *= 0.6f;
    arg0->scale.z *= 0.6f;
    arg0->unk18C = (s16) (s32) (arg0->scale.x * 150.0f);
    arg0->unk190 = (s16) (s32) (arg0->scale.y * -750.0f);
    arg0->unk18E = (s16) ((s32) arg0->unk190 * -2);
    Math_Vec3f_Copy(&arg0->prevPos, &arg0->world.pos);
    arg0->params = 2;
    arg0->unk144 = func_80B2242C;
}

void func_80B2242C(EnHakurock *this, GlobalContext *globalCtx) {
    if (((this->unk14C.base.ocFlags1 & 2) != 0) && (this->actor.parent == this->unk14C.base.oc)) {
        func_80B21EA4(this, 1);
        func_80B21FFC(this);
        return;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        func_80B21EA4(this, 2);
        Audio_PlayActorSound2(&this->actor, 0x2947U);
        func_80B224C0(this);
    }
}

void func_80B224C0(EnHakurock *arg0) {
    arg0->actor.params = 3;
    arg0->unk148 = 0xA;
    arg0->actor.world.pos.y += 4.0f;
    arg0->actionFunc = func_80B22500;
    arg0->actor.shape.shadowScale = 0.0f;
}

void func_80B22500(EnHakurock *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    s16 temp_v0_3;
    s32 temp_t6;
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = this->unk148;
    temp_t6 = temp_v0 - 1;
    if (temp_v0 > 0) {
        this->unk148 = temp_t6;
        if ((temp_t6 & 1) == 0) {
            sp1C = globalCtx->actorCtx.actorList[2].first;
            this->actor.world.pos.y = (sin_rad((f32) temp_t6 * 0.15707964f) * 4.0f) + this->actor.floorHeight;
        } else {
            this->actor.world.pos.y = this->actor.floorHeight;
        }
    }
    if ((this->unk14C.base.ocFlags1 & 2) != 0) {
        temp_v0_2 = this->unk14C.base.oc;
        if ((this->actor.parent == temp_v0_2) || ((temp_v0_2->id == 0x1EA) && (temp_v0_2->params == 2))) {
            this = this;
            func_80B21EA4(this, 3);
            func_80B21FFC(this);
            return;
        }
        if ((globalCtx->actorCtx.actorList[2].first == temp_v0_2) && ((globalCtx->actorCtx.actorList[2].first->unkA74 & 0x81000) != 0) && (globalCtx->actorCtx.actorList[2].first->unkAD0 > 8.0f)) {
            globalCtx->actorCtx.actorList[2].first->unkAD0 = -5.0f;
            globalCtx->actorCtx.actorList[2].first->unkB08 = -5.0f;
            temp_v0_3 = globalCtx->actorCtx.actorList[2].first->world.rot.y;
            globalCtx->actorCtx.actorList[2].first->unkB8C = 4;
            globalCtx->actorCtx.actorList[2].first->unkAD4 = temp_v0_3;
            globalCtx->actorCtx.actorList[2].first->home.rot.y = temp_v0_3;
            globalCtx->actorCtx.actorList[2].first->shape.rot.y = temp_v0_3;
            globalCtx->actorCtx.actorList[2].first->velocity.y = 5.0f;
            globalCtx->actorCtx.actorList[2].first->unkB0C = (f32) (globalCtx->actorCtx.actorList[2].first->unkB0C + (-5.0f * 0.05f));
            return;
        }
        // Duplicate return node #16. Try simplifying control flow for better match
        return;
    }
    if ((this->actor.xzDistToPlayer > 1000.0f) && (this->actor.projectedPos.z < 0.0f)) {
        func_80B21FFC(this);
    }
}

void func_80B226AC(Actor *arg0) {
    arg0->draw = func_80B229A4;
    Actor_SetScale(arg0, 0.35f);
    arg0->scale.y = 0.5f;
    arg0->unk18C = (s16) (s32) (arg0->scale.x * 270.0f);
    arg0->unk148 = 0;
    arg0->unk144 = func_80B22750;
    arg0->shape.shadowScale = 0.0f;
    arg0->unk190 = (s16) (s32) (0.5f * -750.0f);
    arg0->unk18E = (s16) ((s32) arg0->unk190 * -2);
}

void func_80B22750(EnHakurock *this, GlobalContext *globalCtx) {
    if (this->actor.params == 0) {
        func_80B21EA4((EnHakurock *)3);
        func_80B21FFC(this);
    }
}

void EnHakurock_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHakurock *this = (EnHakurock *) thisx;
    CollisionCheckContext *sp34;
    ColliderCylinder *temp_s0;
    ColliderCylinder *temp_s0_2;
    CollisionCheckContext *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->actor.params;
    if ((temp_v0 == 1) || (temp_v0 == 2)) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, (f32) this->unk14C.dim.radius, 0.0f, 0x85U);
        temp_s0_2 = &this->unk14C;
        if (this->actor.floorHeight == -32000.0f) {
            func_80B21FFC(this);
            return;
        }
        Collider_UpdateCylinder(&this->actor, temp_s0_2);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp34 = temp_a1_2;
        CollisionCheck_SetAT(globalCtx, temp_a1_2, &temp_s0_2->base);
        CollisionCheck_SetAC(globalCtx, temp_a1_2, &temp_s0_2->base);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, &temp_s0_2->base);
        return;
    }
    if ((temp_v0 == 3) || (temp_v0 == 4)) {
        temp_s0 = &this->unk14C;
        Collider_UpdateCylinder(&this->actor, temp_s0);
        temp_a1 = &globalCtx->colChkCtx;
        sp34 = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, &temp_s0->base);
        CollisionCheck_SetOC(globalCtx, temp_a1, &temp_s0->base);
    }
}

void func_80B228F4(Actor *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp24;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;

    temp_a0 = *arg1;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA000080;
    temp_v0->words.w1 = 0xFFB918FF;
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp18 = temp_v0_2;
    sp18->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_3 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_0406AB30;
    temp_v0_3->words.w0 = 0xDE000000;
}

void func_80B229A4(Actor *arg0, GraphicsContext **arg1) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_InsertTranslation(-100.0f, 0.0f, 0.0f, 1);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06011100;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_06011178;
    temp_v0_3->words.w0 = 0xDE000000;
}

