typedef struct ObjDora {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderTris unk_144;               /* inferred */
    /* 0x164 */ ColliderTrisElement unk_164;        /* inferred */
    /* 0x1C0 */ char pad_1C0[0x1CC];                /* maybe part of unk_164[6]? */
    /* 0x38C */ void (*actionFunc)(ObjDora *, GlobalContext *);
    /* 0x390 */ f32 unk_390;                        /* inferred */
    /* 0x394 */ f32 unk_394;                        /* inferred */
    /* 0x398 */ f32 unk_398;                        /* inferred */
    /* 0x39C */ s16 unk_39C;                        /* inferred */
    /* 0x39E */ s16 unk_39E;                        /* inferred */
    /* 0x3A0 */ s16 unk_3A0;                        /* inferred */
    /* 0x3A2 */ s16 unk_3A2;                        /* inferred */
    /* 0x3A4 */ s16 unk_3A4;                        /* inferred */
    /* 0x3A6 */ s16 unk_3A6;                        /* inferred */
    /* 0x3A8 */ s16 unk_3A8;                        /* inferred */
    /* 0x3AA */ s16 unk_3AA;                        /* inferred */
} ObjDora;                                          /* size = 0x3AC */

struct _mips2c_stack_ObjDora_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDora_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_ObjDora_Init {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ColliderTris *sp48;                  /* inferred */
    /* 0x4C */ char pad_4C[0x14];                   /* maybe part of sp48[6]? */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0xC];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0xC];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0xC];
};                                                  /* size = 0x90 */

struct _mips2c_stack_ObjDora_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B60C9C {};              /* size 0x0 */

struct _mips2c_stack_func_80B60CB0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B60CC0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B60D34 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B60E54 {};              /* size 0x0 */

struct _mips2c_stack_func_80B60EE8 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ u16 sp22;                            /* inferred */
    /* 0x24 */ EnItem00 *sp24;                      /* inferred */
};                                                  /* size = 0x28 */

? func_800BC848(Actor *, GlobalContext *, ?, ?);    /* extern */
void func_80B60C9C(ObjDora *arg0);                  /* static */
void func_80B60CB0(s32 arg0, ? arg1);               /* static */
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

void ObjDora_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? sp84;
    ? sp78;
    ? sp6C;
    ? sp60;
    ColliderTris *sp48;
    ActorShape *temp_s0;
    ColliderTris *temp_a1;
    Vec3f *temp_s0_2;
    s32 temp_s3;
    Vec3f *phi_s1;
    Vec3f *phi_s0;
    s32 phi_s3;
    ColliderTrisElementInit *phi_s4;
    ObjDora *this = (ObjDora *) thisx;

    Actor_SetScale((Actor *) this, 0.1f);
    temp_s0 = &this->actor.shape;
    ActorShape_Init(temp_s0, 0.0f, func_800B3FC0, 36.0f);
    this->unk_3A2 = 0;
    this->unk_3A4 = 0;
    this->unk_39C = 0;
    this->unk_39E = 0;
    this->unk_3A0 = 0;
    this->unk_3A6 = 0;
    this->unk_3A8 = 0;
    this->unk_3AA = 0;
    temp_a1 = &this->unk_144;
    this->unk_390 = 0.0f;
    this->unk_394 = 0.0f;
    this->unk_398 = 0.0f;
    sp48 = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    Collider_SetTris(globalCtx, temp_a1, (Actor *) this, &D_80B61478, &this->unk_164);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B61488, &D_80B614A8);
    SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (Vec3s *) temp_s0);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    phi_s3 = 0;
    phi_s4 = &D_80B61310;
    do {
        phi_s1 = phi_s4 + 0x18;
        phi_s0 = (Vec3f *) &sp60;
loop_2:
        SysMatrix_MultiplyVector3fByState(phi_s1, phi_s0);
        temp_s0_2 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 != &sp84) {
            goto loop_2;
        }
        Collider_SetTrisVertices(sp48, phi_s3, (Vec3f *) &sp60, (Vec3f *) &sp6C, (Vec3f *) &sp78);
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
        phi_s4 += 0x3C;
    } while (temp_s3 != 6);
    func_80B60C9C(this);
}

void ObjDora_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjDora *this = (ObjDora *) thisx;
    Collider_DestroyTris(globalCtx, &this->unk_144);
}

void func_80B60C9C(ObjDora *arg0) {
    arg0->actionFunc = func_80B60CB0;
}

void func_80B60CB0(ObjDora *arg0, GlobalContext *arg1) {

}

void func_80B60CC0(Actor *arg0) {
    if (arg0->unk_3A0 == 1) {
        arg0->unk_390 = 2.0f;
        arg0->unk_394 = 5461.0f;
        arg0->unk_398 = 1820.0f;
    } else {
        arg0->unk_390 = 4.0f;
        arg0->unk_394 = 12743.0f;
        arg0->unk_398 = 5461.0f;
    }
    arg0->unk_39C = 0;
    arg0->unk_39E = 0;
    arg0->unk_38C = func_80B60D34;
}

void func_80B60D34(ObjDora *arg0, ? arg1) {
    if ((arg0->unk_394 < 182.0f) && (arg0->unk_398 < 182.0f)) {
        arg0->unk_3A0 = 1;
        func_80B60C9C(arg0);
    }
    Math_SmoothStepToF(&arg0->unk_390, 0.0f, 0.2f, 0.2f, 0.1f);
    Math_SmoothStepToF(&arg0->unk_394, 0.0f, 0.5f, 54.0f, 18.0f);
    Math_SmoothStepToF(&arg0->unk_398, 0.0f, 0.5f, 54.0f, 18.0f);
    arg0->unk_39C += 0x1555;
    arg0->unk_39E += 0x238E;
    arg0->unk_3A2 = (s16) (s32) (Math_SinS(arg0->unk_39C) * arg0->unk_394);
    arg0->unk_3A4 = (s16) (s32) (Math_SinS(arg0->unk_39E) * arg0->unk_398);
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

    temp_v0 = arg0->unk_155;
    if (((temp_v0 & 2) != 0) && ((sp22 = gSaveContext.time, temp_a0 = arg0->colChkInfo.damageEffect, arg0->unk_155 = (u8) (temp_v0 & 0xFFFD), arg0->unk_3A8 = 5, (temp_a0 == 0xE)) || (temp_a0 == 0xF))) {
        if (temp_a0 == 0xF) {
            Audio_PlayActorSound2(arg0, 0x295AU);
            arg0->unk_3A0 = 1;
        } else {
            Audio_PlayActorSound2(arg0, 0x2956U);
            arg0->unk_3A0 = 2;
        }
        func_800BC848(arg0, arg1, 5, 0xA);
        func_80B60CC0(arg0);
        if ((func_80B60E54(sp22) == 1) && (arg0->unk_3A6 == 0)) {
            Audio_PlayActorSound2(arg0, 0x4807U);
            temp_v0_2 = Item_DropCollectible(arg1, (Vec3f *) &arg0->world, 1U);
            temp_v0_2->actor.world.rot.y = arg0->world.rot.y;
            sp24 = temp_v0_2;
            temp_f10 = Rand_Centered() * 90.0f * 182.04445f;
            sp24->actor.velocity.y = 5.0f;
            sp24->actor.gravity = -1.0f;
            sp24->actor.world.rot.y += (s32) temp_f10;
            arg0->unk_3A6 = 0x28;
        }
    }
    temp_v0_3 = arg0->unk_3A6;
    if ((s32) temp_v0_3 > 0) {
        arg0->unk_3A6 = (s16) (temp_v0_3 - 1);
    }
    temp_v0_4 = arg0->unk_3A8;
    if ((s32) temp_v0_4 > 0) {
        arg0->unk_3A8 = (s16) (temp_v0_4 - 1);
        return;
    }
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) (arg0 + 0x144));
}

void ObjDora_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjDora *this = (ObjDora *) thisx;
    this->actionFunc(this, globalCtx);
    func_80B60EE8((Actor *) this, globalCtx);
}

void ObjDora_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    ObjDora *this = (ObjDora *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if (func_80B60D34 == this->actionFunc) {
        temp_f0 = this->unk_390;
        phi_f0 = temp_f0;
        if ((globalCtx->state.frames & 1) != 0) {
            phi_f0 = temp_f0 * -1.0f;
        }
        sp40 = phi_f0;
        SysMatrix_StatePush();
        SysMatrix_InsertXRotation_s(this->unk_3A2, 1);
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
        SysMatrix_InsertXRotation_s((s16) (this->unk_3A4 - this->unk_3A2), 1);
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
