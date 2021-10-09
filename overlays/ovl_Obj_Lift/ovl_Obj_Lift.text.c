void func_8093D3C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093D760(ObjLift *arg0);                  /* static */
void func_8093D7A0(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093D88C(DynaPolyActor *arg0);            /* static */
void func_8093D8B4(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093D9C0(DynaPolyActor *arg0);            /* static */
void func_8093DA48(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093DB70(Actor *arg0);                    /* static */
void func_8093DB90(ObjLift *arg0, GlobalContext *arg1); /* static */
void func_8093DC90(Actor *arg0, GlobalContext *arg1); /* static */
extern Gfx D_06000D10;
extern CollisionHeader D_06000F00;
static ? D_8093DD50;                                /* unable to generate initializer */
static ? D_8093DD60;                                /* unable to generate initializer */
static InitChainEntry D_8093DD84;                   /* unable to generate initializer */
static ? D_8093DD98;                                /* unable to generate initializer */
static ? D_8093DDA0;                                /* unable to generate initializer */

typedef struct ObjLift {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(ObjLift *, GlobalContext *);
    /* 0x0160 */ s16 unk160;                        /* inferred */
    /* 0x0162 */ s16 unk162;                        /* inferred */
    /* 0x0164 */ s16 unk164;                        /* inferred */
    /* 0x0166 */ s16 unk166;                        /* inferred */
    /* 0x0168 */ char pad168[0x10];                 /* maybe part of unk166[9]? */
    /* 0x0178 */ s16 unk178;                        /* inferred */
    /* 0x017A */ char pad17A[0x2];                  /* maybe part of unk178[2]? */
} ObjLift;                                          /* size 0x17C */

void func_8093D3C0(Actor *arg0, GlobalContext *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    ? *temp_s0;
    Vec3f *temp_s3;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f0;
    s32 temp_v0;
    ? *phi_s0;
    s32 phi_s1;

    temp_s3 = arg0 + 0x24;
    temp_s5 = &spB0;
    temp_s4 = &spBC;
    phi_s0 = &D_8093DD60;
    do {
        temp_f0 = (f32) phi_s0->unk0;
        spBC = (temp_f0 * arg0->scale.x) + temp_s3->x;
        spC0 = temp_s3->y;
        spC4 = ((f32) phi_s0->unk2 * arg0->scale.z) + temp_s3->z;
        spB0 = temp_f0 * arg0->scale.x * 0.8f;
        spB4 = (Rand_ZeroOne() * 10.0f) + 6.0f;
        spB8 = (f32) phi_s0->unk2 * arg0->scale.z * 0.8f;
        phi_s1 = 0x20;
        if (Rand_Next() > 0) {
            phi_s1 = 0x40;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, temp_s3, (s16) -0x100, (s16) phi_s1, (s16) 0xF, (s16) 0xF, (s16) 0, (s16) (s32) (((Rand_ZeroOne() * 50.0f) + 50.0f) * arg0->scale.x), (s16) 0, (s16) 0x20, 0x32, (s16) -1, (s16) 0xED, &D_06000D10);
        temp_s0 = phi_s0 + 4;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_8093DD84);
    temp_v0 = arg0->params & 1;
    if (temp_v0 == 0) {
        func_800BBFB0(arg1, temp_s3, 120.0f, 0xC, (s16) 0x78, (s16) 0x64, (u8) 1);
        return;
    }
    if (temp_v0 == 1) {
        func_800BBFB0(arg1, temp_s3, 60.0f, 8, (s16) 0x3C, (s16) 0x64, (u8) 1);
    }
}

void ObjLift_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjLift *this = (ObjLift *) thisx;
    f32 temp_f0;
    s16 temp_v0;

    Actor_ProcessInitChain(&this->actor, &D_8093DD84);
    temp_f0 = *(&D_8093DD98 + ((this->actor.params & 1) * 4));
    this->actor.scale.z = temp_f0;
    this->actor.scale.x = temp_f0;
    this->actor.shape.rot.z = 0;
    temp_v0 = this->actor.shape.rot.z;
    this->unk178 = this->actor.home.rot.z;
    this->actor.scale.y = 0.055555556f;
    this->actor.world.rot.z = temp_v0;
    this->actor.home.rot.z = temp_v0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    if (((s32) this->unk178 <= 0) && (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 1) & 0x7F) != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000F00);
    this->unk160 = (s16) (Rand_Next() >> 0x10);
    this->unk162 = (s16) (Rand_Next() >> 0x10);
    this->unk164 = (s16) (Rand_Next() >> 0x10);
    func_8093D760(this);
}

void ObjLift_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjLift *this = (ObjLift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_8093D760(ObjLift *arg0) {
    arg0->actionFunc = func_8093D7A0;
    arg0->actor.draw = ObjLift_Draw;
    arg0->unk166 = *(&D_8093DD50 + ((((s32) arg0->actor.params >> 8) & 7) * 2));
}

void func_8093D7A0(DynaPolyActor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s16 temp_v0;
    s32 temp_a0;

    if (func_800CAF70(arg0) != 0) {
        if ((s32) arg0->unk166 <= 0) {
            if ((((s32) arg0->actor.params >> 8) & 7) == 7) {
                func_8093D9C0(arg0);
                return;
            }
            temp_v0 = Quake_Add((arg1 + (arg1->activeCamera * 4))->unk800, 1U);
            temp_a0 = temp_v0 << 0x10;
            sp2A = temp_v0;
            Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x2710);
            Quake_SetQuakeValues(sp2A, 2, 0, 0, (s16) 0);
            Quake_SetCountdown(sp2A, 0x14);
            func_8093D88C(arg0);
            return;
        }
        // Duplicate return node #6. Try simplifying control flow for better match
        return;
    }
    arg0->unk166 = (s16) *(&D_8093DD50 + ((((s32) arg0->actor.params >> 8) & 7) * 2));
}

void func_8093D88C(DynaPolyActor *arg0) {
    arg0->unk166 = 0x14;
    arg0->unk15C = func_8093D8B4;
    arg0->actor.draw = func_8093DC90;
}

void func_8093D8B4(DynaPolyActor *arg0, GlobalContext *arg1) {
    f32 temp_f16;

    if ((s32) arg0->unk166 <= 0) {
        func_8093D9C0(arg0);
    } else {
        arg0->unk160 = (s16) (arg0->unk160 + 0x2710);
        arg0->unk174 = (s16) (s32) (Math_SinS(arg0->unk160) * 300.0f);
        temp_f16 = Math_CosS(arg0->unk160) * 300.0f;
        arg0->unk162 = (s16) (arg0->unk162 + 0x4650);
        arg0->unk176 = (s16) (s32) temp_f16;
        arg0->unk16C = Math_SinS(arg0->unk162);
        arg0->unk164 = (s16) (arg0->unk164 + 0x4650);
        arg0->unk168 = (f32) (Math_SinS(arg0->unk164) * 3.0f);
        arg0->unk170 = (f32) (Math_CosS(arg0->unk164) * 3.0f);
    }
    if ((arg0->unk166 & 3) == 3) {
        Audio_PlaySoundAtPosition(arg1, &arg0->actor.world.pos, 0x10, 0x2838U);
    }
}

void func_8093D9C0(DynaPolyActor *arg0) {
    ? sp18;
    DynaPolyActor *temp_a2;

    temp_a2 = arg0;
    temp_a2->unk15C = func_8093DA48;
    arg0 = temp_a2;
    Math_Vec3f_Copy(temp_a2 + 0x24, temp_a2 + 8);
    sp18.unk0 = (s32) (unaligned s32) arg0->unk14;
    sp18.unk4 = (u16) arg0->actor.home.rot.z;
    arg0->unk30 = (unaligned s32) sp18.unk0;
    arg0->actor.world.rot.z = sp18.unk4;
    arg0->unkBC = (unaligned s32) sp18.unk0;
    arg0->actor.draw = ObjLift_Draw;
    arg0->actor.shape.rot.z = sp18.unk4;
}

void func_8093DA48(Actor *arg0, GlobalContext *arg1) {
    s32 sp38;
    Vec3f sp2C;
    f32 temp_f0;

    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    Math_Vec3f_Copy(&sp2C, &arg0->prevPos);
    sp2C.y += *(&D_8093DDA0 + ((arg0->params & 1) * 4));
    temp_f0 = func_800C411C(arg1 + 0x830, &arg0->floorPoly, &sp38, arg0, &sp2C);
    arg0->floorHeight = temp_f0;
    if ((*(&D_8093DDA0 + ((arg0->params & 1) * 4)) - 0.001f) <= (temp_f0 - arg0->world.pos.y)) {
        func_8093D3C0(arg0, arg1);
        Audio_PlaySoundAtPosition(arg1, &arg0->world.pos, 0x14, 0x2839U);
        if ((s32) arg0->unk178 > 0) {
            func_8093DB70(arg0);
            func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk144);
            return;
        }
        Actor_SetSwitchFlag(arg1, ((s32) arg0->params >> 1) & 0x7F);
        Actor_MarkForDeath(arg0);
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_8093DB70(Actor *arg0) {
    arg0->unk15C = func_8093DB90;
    arg0->draw = NULL;
    arg0->unk166 = (s16) arg0->unk178;
}

void func_8093DB90(ObjLift *arg0, GlobalContext *arg1) {
    ? sp18;
    Vec3f *temp_a0;
    Vec3f *temp_a1;

    temp_a0 = arg0 + 0x24;
    temp_a1 = arg0 + 8;
    if ((s32) arg0->unk166 <= 0) {
        arg0 = arg0;
        Math_Vec3f_Copy(temp_a0, temp_a1);
        sp18.unk0 = (s32) (unaligned s32) arg0->unk14;
        sp18.unk4 = (u16) arg0->actor.home.rot.z;
        arg0->unkBC = (unaligned s32) sp18.unk0;
        arg0->actor.shape.rot.z = sp18.unk4;
        arg0->unk30 = (unaligned s32) sp18.unk0;
        arg0->actor.world.rot.z = sp18.unk4;
        func_800C6314(arg1, arg1 + 0x880, arg0->unk144);
        func_8093D760(arg0);
    }
}

void ObjLift_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjLift *this = (ObjLift *) thisx;
    s16 temp_v0;

    temp_v0 = this->unk166;
    if ((s32) temp_v0 > 0) {
        this->unk166 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
}

void ObjLift_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjLift *this = (ObjLift *) thisx;
    func_800BDFC0(globalCtx, &D_06000D10);
}

void func_8093DC90(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp28;
    s16 sp24;
    s16 sp22;
    s16 sp20;

    Math_Vec3f_Sum(arg0 + 0x24, arg0 + 0x168, &sp28);
    sp20 = arg0->unk174 + arg0->home.rot.x;
    sp22 = arg0->home.rot.y;
    sp24 = arg0->unk176 + arg0->home.rot.z;
    SysMatrix_SetStateRotationAndTranslation(sp28.x, sp28.y, sp28.z, (Vec3s *) &sp20);
    Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
    func_800BDFC0(arg1, &D_06000D10);
}

