? func_800BC848(Actor *, GlobalContext *, ?, ?);    /* extern */
void func_80B60C9C(ObjDora *arg0);                  /* static */
void func_80B60CB0(ObjDora *arg0, GlobalContext *arg1); /* static */
void func_80B60CC0(Actor *arg0);                    /* static */
void func_80B60D34(ObjDora *arg0, ? arg1);          /* static */
s32 func_80B60E54(u16 arg0);                        /* static */
void func_80B60EE8(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06003FD0;
extern ? D_06004160;
static ? D_80B61310;                                /* unable to generate initializer */
static ColliderTrisInit D_80B61478 = {{0xA, 0, 0xD, 0x39, 0x10, 2}, 6, &D_80B61310};
static DamageTable D_80B61488 = {
    {
        0,
        0xF2,
        0,
        0,
        0xF0,
        0xF0,
        0xF2,
        0xF0,
        0xE2,
        0xF1,
        0xF1,
        0xF0,
        0xF0,
        0xF0,
        0xF1,
        0xF0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
        0xF0,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static CollisionCheckInfoInit2 D_80B614A8 = {8, 0, 0, 0, 0xFE};
static f32 D_80B614B4 = 0.0f;
static f32 D_80B614B8 = -61.5f;

typedef struct ObjDora {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderTris unk144;               /* inferred */
    /* 0x0164 */ ColliderTrisElement unk164;        /* inferred */
    /* 0x01C0 */ char pad1C0[0x1CC];                /* maybe part of unk164[6]? */
    /* 0x038C */ void (*actionFunc)(ObjDora *, GlobalContext *);
    /* 0x0390 */ f32 unk390;                        /* inferred */
    /* 0x0394 */ f32 unk394;                        /* inferred */
    /* 0x0398 */ f32 unk398;                        /* inferred */
    /* 0x039C */ s16 unk39C;                        /* inferred */
    /* 0x039E */ s16 unk39E;                        /* inferred */
    /* 0x03A0 */ s16 unk3A0;                        /* inferred */
    /* 0x03A2 */ s16 unk3A2;                        /* inferred */
    /* 0x03A4 */ s16 unk3A4;                        /* inferred */
    /* 0x03A6 */ s16 unk3A6;                        /* inferred */
    /* 0x03A8 */ s16 unk3A8;                        /* inferred */
    /* 0x03AA */ s16 unk3AA;                        /* inferred */
} ObjDora;                                          /* size 0x3AC */

void ObjDora_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjDora *this = (ObjDora *) thisx;
    ? sp84;
    Vec3f sp78;
    Vec3f sp6C;
    Vec3f sp60;
    ColliderTris *sp48;
    ActorShape *temp_s0;
    ColliderTris *temp_a1;
    Vec3f *temp_s0_2;
    s32 temp_s3;
    Vec3f *phi_s1;
    Vec3f *phi_s0;
    s32 phi_s3;
    ? *phi_s4;

    Actor_SetScale(&this->actor, 0.1f);
    temp_s0 = &this->actor.shape;
    ActorShape_Init(temp_s0, 0.0f, func_800B3FC0, 36.0f);
    this->unk3A2 = 0;
    this->unk3A4 = 0;
    this->unk39C = 0;
    this->unk39E = 0;
    this->unk3A0 = 0;
    this->unk3A6 = 0;
    this->unk3A8 = 0;
    this->unk3AA = 0;
    temp_a1 = &this->unk144;
    this->unk390 = 0.0f;
    this->unk394 = 0.0f;
    this->unk398 = 0.0f;
    sp48 = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    Collider_SetTris(globalCtx, temp_a1, &this->actor, &D_80B61478, &this->unk164);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B61488, &D_80B614A8);
    SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, &temp_s0->rot);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    phi_s3 = 0;
    phi_s4 = &D_80B61310;
    do {
        phi_s1 = phi_s4 + 0x18;
        phi_s0 = &sp60;
loop_2:
        SysMatrix_MultiplyVector3fByState(phi_s1, phi_s0);
        temp_s0_2 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 != &sp84) {
            goto loop_2;
        }
        Collider_SetTrisVertices(sp48, phi_s3, &sp60, &sp6C, &sp78);
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
        phi_s4 += 0x3C;
    } while (temp_s3 != 6);
    func_80B60C9C(this);
}

void ObjDora_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjDora *this = (ObjDora *) thisx;
    Collider_DestroyTris(globalCtx, &this->unk144);
}

void func_80B60C9C(ObjDora *arg0) {
    arg0->actionFunc = func_80B60CB0;
}

void func_80B60CB0(ObjDora *arg0, GlobalContext *arg1) {

}

void func_80B60CC0(Actor *arg0) {
    if (arg0->unk3A0 == 1) {
        arg0->unk390 = 2.0f;
        arg0->unk394 = 5461.0f;
        arg0->unk398 = 1820.0f;
    } else {
        arg0->unk390 = 4.0f;
        arg0->unk394 = 12743.0f;
        arg0->unk398 = 5461.0f;
    }
    arg0->unk39C = 0;
    arg0->unk39E = 0;
    arg0->unk38C = func_80B60D34;
}

void func_80B60D34(ObjDora *arg0, ? arg1) {
    if ((arg0->unk394 < 182.0f) && (arg0->unk398 < 182.0f)) {
        arg0->unk3A0 = 1;
        func_80B60C9C(arg0);
    }
    Math_SmoothStepToF(&arg0->unk390, 0.0f, 0.2f, 0.2f, 0.1f);
    Math_SmoothStepToF(&arg0->unk394, 0.0f, 0.5f, 54.0f, 18.0f);
    Math_SmoothStepToF(&arg0->unk398, 0.0f, 0.5f, 54.0f, 18.0f);
    arg0->unk39C += 0x1555;
    arg0->unk39E += 0x238E;
    arg0->unk3A2 = (s16) (s32) (Math_SinS(arg0->unk39C) * arg0->unk394);
    arg0->unk3A4 = (s16) (s32) (Math_SinS(arg0->unk39E) * arg0->unk398);
}

s32 func_80B60E54(u16 arg0) {
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_a0;
    f32 phi_f0;

    temp_a0 = arg0 & 0xFFFF;
    temp_f0 = (f32) temp_a0;
    phi_f0 = temp_f0;
    if (temp_a0 < 0) {
        phi_f0 = temp_f0 + 4294967296.0f;
    }
    temp_f2 = phi_f0 - (1365.3334f * (f32) (s32) (phi_f0 / 1365.3334f));
    if ((temp_f2 < 45.511112f) || (temp_f2 > 1319.8223f)) {
        return 1;
    }
    return 0;
}

void func_80B60EE8(Actor *arg0, GlobalContext *arg1) {
    EnItem00 *sp24;
    u16 sp22;
    EnItem00 *temp_v0_2;
    f32 temp_f10;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u8 temp_a0;
    u8 temp_v0;

    temp_v0 = arg0->unk155;
    if (((temp_v0 & 2) != 0) && ((sp22 = gSaveContext.time, temp_a0 = arg0->colChkInfo.damageEffect, arg0->unk155 = (u8) (temp_v0 & 0xFFFD), arg0->unk3A8 = 5, (temp_a0 == 0xE)) || (temp_a0 == 0xF))) {
        if (temp_a0 == 0xF) {
            Audio_PlayActorSound2(arg0, 0x295AU);
            arg0->unk3A0 = 1;
        } else {
            Audio_PlayActorSound2(arg0, 0x2956U);
            arg0->unk3A0 = 2;
        }
        func_800BC848(arg0, arg1, 5, 0xA);
        func_80B60CC0(arg0);
        if ((func_80B60E54(sp22) == 1) && (arg0->unk3A6 == 0)) {
            Audio_PlayActorSound2(arg0, 0x4807U);
            temp_v0_2 = Item_DropCollectible(arg1, &arg0->world.pos, 1U);
            temp_v0_2->actor.world.rot.y = arg0->world.rot.y;
            sp24 = temp_v0_2;
            temp_f10 = Rand_Centered() * 90.0f * 182.04445f;
            sp24->actor.velocity.y = 5.0f;
            sp24->actor.gravity = -1.0f;
            sp24->actor.world.rot.y += (s32) temp_f10;
            arg0->unk3A6 = 0x28;
        }
    }
    temp_v0_3 = arg0->unk3A6;
    if ((s32) temp_v0_3 > 0) {
        arg0->unk3A6 = (s16) (temp_v0_3 - 1);
    }
    temp_v0_4 = arg0->unk3A8;
    if ((s32) temp_v0_4 > 0) {
        arg0->unk3A8 = (s16) (temp_v0_4 - 1);
        return;
    }
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) (arg0 + 0x144));
}

void ObjDora_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjDora *this = (ObjDora *) thisx;
    this->actionFunc(this, globalCtx);
    func_80B60EE8(&this->actor, globalCtx);
}

void ObjDora_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjDora *this = (ObjDora *) thisx;
    f32 sp40;
    Gfx *sp34;
    Gfx *sp2C;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 phi_f0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if (func_80B60D34 == this->actionFunc) {
        temp_f0 = this->unk390;
        phi_f0 = temp_f0;
        if ((globalCtx->state.frames & 1) != 0) {
            phi_f0 = temp_f0 * -1.0f;
        }
        sp40 = phi_f0;
        SysMatrix_StatePush();
        SysMatrix_InsertXRotation_s(this->unk3A2, 1);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp40 = phi_f0;
        sp34 = temp_v0;
        sp34->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_06004160;
        temp_v0_2->words.w0 = 0xDE000000;
        SysMatrix_InsertTranslation(D_80B614B4, D_80B614B4 + phi_f0, D_80B614B4 + phi_f0, 1);
        SysMatrix_InsertXRotation_s((s16) (this->unk3A4 - this->unk3A2), 1);
        SysMatrix_InsertTranslation(-D_80B614B8, -D_80B614B8, -D_80B614B8, 1);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp2C = temp_v0_3;
        sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_06003FD0;
        temp_v0_4->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
        return;
    }
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDA380003;
    sp24 = temp_v0_5;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_6 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = (u32) &D_06003FD0;
    temp_v0_6->words.w0 = 0xDE000000;
    temp_v0_7 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) &D_06004160;
    temp_v0_7->words.w0 = 0xDE000000;
}

