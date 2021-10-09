s32 func_80A35510(ObjBell *arg0, s32 arg1);         /* static */
void func_80A358FC(ObjBell *arg0, GlobalContext *arg1); /* static */
void func_80A359B4(ObjBell *arg0, GraphicsContext **arg1); /* static */
void func_80A35B18(ObjBell *arg0, GraphicsContext **arg1); /* static */
void func_80A35BD4(ObjBell *arg0, GraphicsContext **arg1); /* static */
extern ? D_06000570;
extern ? D_06000698;
extern ? D_060007A8;
extern ? D_06000840;
extern ? D_060008D0;
extern ? D_06000960;
extern CollisionHeader D_06001BA8;
static ColliderSphereInit D_80A35E90 = {
    {9, 0x11, 0, 0x39, 0x10, 4},
    {2, {0x20000000, 0, 4}, {0, 0, 0}, 1, 0, 1},
    {0, {{0, 0x3C0, 0}, 0x46}, 0x64},
};
static ColliderSphereInit D_80A35EBC = {
    {9, 0, 9, 0, 0x10, 4},
    {2, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0, {{0, 0x44C, 0}, 0x4A}, 0x64},
};
static CollisionCheckInfoInit2 D_80A35EE8 = {0, 0, 0, 0, 0xFF};
static DamageTable D_80A35EF4 = {
    {
        1,
        1,
        1,
        0xE1,
        1,
        1,
        1,
        1,
        0xF1,
        1,
        1,
        1,
        1,
        1,
        0xF1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        0xE1,
    },
};



s32 func_80A35510(ObjBell *arg0, s32 arg1) {
    Vec3f sp34;
    Vec3f sp28;
    s32 sp24;
    Vec3s *temp_a1;
    f32 temp_f2;
    s16 temp_v1;
    f32 phi_f2;
    f32 phi_f0;
    f32 phi_f12;
    f32 phi_f0_2;
    f32 phi_f2_2;
    f32 phi_f0_3;
    s32 phi_a3;

    phi_a3 = 0;
    if (((arg1 == 0) && (arg0->unk_21C < 1000.0f)) || ((temp_f2 = arg0->unk_21C, phi_f2 = temp_f2, phi_f12 = 1000.0f, (arg1 == 1)) && (temp_f2 < 4000.0f)) || (arg1 == 2)) {
        phi_f2 = arg0->unk_21C;
        phi_f12 = 1000.0f;
        phi_a3 = 1;
    }
    phi_f2_2 = phi_f2;
    if (arg1 != 0) {
        if (arg1 != 1) {
            if (arg1 != 2) {

            } else {
                arg0->unk_21C = phi_f2 + 9000.0f;
                goto block_19;
            }
        } else {
            if (phi_f2 > 3000.0f) {
                phi_f0 = 750.0f;
            } else {
                phi_f0 = 3000.0f;
            }
            arg0->unk_21C = phi_f2 + phi_f0;
            goto block_19;
        }
    } else {
        if (phi_f12 < phi_f2) {
            phi_f0_2 = 250.0f;
        } else {
            phi_f0_2 = phi_f12;
        }
        arg0->unk_21C = phi_f2 + phi_f0_2;
block_19:
        phi_f2_2 = arg0->unk_21C;
    }
    temp_a1 = arg0 + 0x1DA;
    phi_f0_3 = 0.0f;
    if (phi_f2_2 < 0.0f) {

    } else if (phi_f2_2 > 18000.0f) {
        phi_f0_3 = 18000.0f;
    } else {
        phi_f0_3 = phi_f2_2;
    }
    arg0->unk_21C = phi_f0_3;
    if (phi_a3 == 1) {
        arg0 = arg0;
        sp24 = phi_a3;
        Math_Vec3s_ToVec3f(&sp34, temp_a1);
        Math_Vec3f_Copy(&sp28, arg0 + 0x24);
        temp_v1 = arg0->unk_20C;
        arg0->dyna.actor.world.rot.y = Math_Vec3f_Yaw(&sp34, &sp28);
        if (((s32) temp_v1 < 0x4001) && ((s32) temp_v1 >= -0x4000)) {
            arg0->unk_20C = temp_v1 - 0x4000;
        } else {
            arg0->unk_20C = temp_v1 + 0x4000;
        }
    }
    return phi_a3;
}

s32 func_80A356D8(ObjBell *this) {
    f32 temp_f2;
    s16 temp_a1;

    temp_a1 = this->unk_20C;
    this->unk_212 = this->dyna.actor.world.rot.y;
    if (((s32) temp_a1 >= 0x4000) || ((s32) temp_a1 < -0x3FFF)) {
        this->unk_212 += -0x8000;
    }
    temp_f2 = Math_SinS(this->unk_20C) * this->unk_21C;
    this->dyna.actor.world.rot.x = this->dyna.actor.home.rot.x;
    this->unk_220 = temp_f2;
    this->dyna.actor.world.rot.x += (s32) temp_f2;
    Math_ApproachF(&this->unk_21C, 0.0f, 0.03f, 70.0f);
    if (this->unk_21C > 0.0f) {
        this->unk_20C += -0x800;
    }
    return 0;
}

s32 func_80A357A8(ObjBell *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_a3;
    s16 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1_2;
    s32 phi_v0;

    temp_v0 = this->collider1.base.ocFlags1;
    if ((temp_v0 & 2) != 0) {
        temp_a3 = this->dyna.actor.yawTowardsPlayer;
        this->collider1.base.ocFlags1 = temp_v0 & 0xFFFD;
        temp_v1 = temp_a3 - this->unk_212;
        temp_f0 = this->unk_21C / 18000.0f;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        } else {
            phi_v0 = (s32) temp_v1;
        }
        if ((phi_v0 < 0x3FFC) && (this->unk_214 == 0) && (temp_f0 > 0.18f)) {
            func_800B8D98(globalCtx, &this->dyna.actor, 8.0f * temp_f0, temp_a3, 11.0f * temp_f0);
            this->unk_214 = 0x1E;
        }
    }
    temp_v1_2 = this->collider2.base.acFlags;
    if ((temp_v1_2 & 2) != 0) {
        temp_v0_2 = this->dyna.actor.colChkInfo.damageEffect;
        this->collider2.base.acFlags = temp_v1_2 & 0xFFFD;
        this->unk_20E = 0xA;
        if (temp_v0_2 != 0xE) {
            if (temp_v0_2 == 0xF) {
                Audio_PlayActorSound2(&this->dyna.actor, 0x28F3U);
                func_80A35510(this, 1);
            } else {
                func_80A35510(this, 0);
            }
        } else {
            Audio_PlayActorSound2(&this->dyna.actor, 0x28F3U);
            func_80A35510(this, 2);
        }
    }
    return 0;
}

void func_80A358FC(ObjBell *arg0, GlobalContext *arg1) {
    Collider *temp_a2;
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_20E;
    temp_a2 = arg0 + 0x1B4;
    arg0->collider1.dim.worldSphere.radius = (s16) (s32) ((f32) arg0->collider1.dim.modelSphere.radius * arg0->collider1.dim.scale);
    arg0->collider2.dim.worldSphere.radius = (s16) (s32) ((f32) arg0->collider2.dim.modelSphere.radius * arg0->collider2.dim.scale);
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_20E = temp_v0 - 1;
        phi_v1 = arg0->unk_20E;
    }
    if (phi_v1 == 0) {
        arg0 = arg0;
        CollisionCheck_SetAC(arg1, arg1 + 0x18884, temp_a2);
    }
    CollisionCheck_SetOC(arg1, &arg1->colChkCtx, arg0 + 0x15C);
}

void func_80A359B4(ObjBell *arg0, GraphicsContext **arg1) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    SysMatrix_InsertTranslation(arg0->dyna.actor.world.pos.x, arg0->dyna.actor.world.pos.y, arg0->dyna.actor.world.pos.z, 0);
    Matrix_Scale(arg0->dyna.actor.scale.x, arg0->dyna.actor.scale.y, arg0->dyna.actor.scale.z, 1);
    SysMatrix_InsertTranslation(0.0f, 2600.0f, 0.0f, 1);
    Matrix_RotateY(arg0->dyna.actor.world.rot.y, 1U);
    SysMatrix_InsertXRotation_s(arg0->dyna.actor.world.rot.x, 1);
    Matrix_RotateY((s16) ((s32) arg0->dyna.actor.world.rot.y * -1), 1U);
    SysMatrix_InsertTranslation(0.0f, -2600.0f, 0.0f, 1);
    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000698;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_060008D0;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_06000960;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_060007A8;
    temp_v0_5->words.w0 = 0xDE000000;
}

void func_80A35B18(ObjBell *arg0, GraphicsContext **arg1) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    SysMatrix_InsertTranslation(arg0->dyna.actor.world.pos.x, arg0->dyna.actor.world.pos.y, arg0->dyna.actor.world.pos.z, 0);
    Matrix_Scale(arg0->dyna.actor.scale.x, arg0->dyna.actor.scale.y, arg0->dyna.actor.scale.z, 1);
    Matrix_RotateY(arg0->dyna.actor.shape.rot.y, 1U);
    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000570;
    temp_v0_2->words.w0 = 0xDE000000;
}

void func_80A35BD4(ObjBell *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    SysMatrix_InsertTranslation(arg0->dyna.actor.world.pos.x, arg0->dyna.actor.world.pos.y - 4.0f, arg0->dyna.actor.world.pos.z, 0);
    Matrix_Scale(arg0->dyna.actor.scale.x, arg0->dyna.actor.scale.y, arg0->dyna.actor.scale.z, 1);
    temp_a0 = *arg1;
    sp24 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000840;
    temp_v0_2->words.w0 = 0xDE000000;
}

void ObjBell_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjBell *this = (ObjBell *) thisx;
    BcCheck3_BgActorInit(&this->dyna, 0);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06001BA8);
    Actor_SetScale(&this->dyna.actor, 0.08f);
    Collider_InitAndSetSphere(globalCtx, &this->collider1, &this->dyna.actor, &D_80A35E90);
    Collider_InitAndSetSphere(globalCtx, &this->collider2, &this->dyna.actor, &D_80A35EBC);
    CollisionCheck_SetInfo2(&this->dyna.actor.colChkInfo, &D_80A35EF4, &D_80A35EE8);
}

void ObjBell_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjBell *this = (ObjBell *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->dyna.bgId);
    Collider_DestroySphere(globalCtx, &this->collider1);
    Collider_DestroySphere(globalCtx, &this->collider2);
}

void ObjBell_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjBell *this = (ObjBell *) thisx;
    s16 temp_v0;

    temp_v0 = this->unk_214;
    if (temp_v0 != 0) {
        this->unk_214 = temp_v0 - 1;
    }
    func_80A357A8(this, globalCtx);
    func_80A356D8(this);
    func_80A358FC(this, globalCtx);
}

void ObjBell_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjBell *this = (ObjBell *) thisx;
    Vec3f sp30;
    Vec3f sp24;

    func_80A35B18(this, &globalCtx->state.gfxCtx);
    func_80A35BD4(this, &globalCtx->state.gfxCtx);
    func_80A359B4(this, &globalCtx->state.gfxCtx);
    Math_Vec3s_ToVec3f(&sp30, &this->collider1.dim.modelSphere.center);
    SysMatrix_MultiplyVector3fByState(&sp30, &sp24);
    Math_Vec3f_ToVec3s(&this->collider1.dim.worldSphere.center, &sp24);
    Math_Vec3s_ToVec3f(&sp30, &this->collider2.dim.modelSphere.center);
    SysMatrix_MultiplyVector3fByState(&sp30, &sp24);
    Math_Vec3f_ToVec3s(&this->collider2.dim.worldSphere.center, &sp24);
}

