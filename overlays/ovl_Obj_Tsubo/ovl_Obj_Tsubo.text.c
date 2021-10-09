s32 func_809275C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092762C(ObjTsubo *arg0, GlobalContext *arg1); /* static */
void func_80927690(ObjTsubo *arg0, GlobalContext *arg1); /* static */
void func_80927714(void *arg0, GlobalContext *arg1, ? arg2); /* static */
void func_8092776C(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
void func_80927818(ObjTsubo *arg0, GlobalContext *, ?); /* static */
s32 func_80927864(ObjTsubo *arg0, GlobalContext *arg1); /* static */
void func_8092788C(ObjTsubo *arg0, GlobalContext *arg1, s32); /* static */
void func_80927A78(void *arg0, GlobalContext *arg1); /* static */
void func_80927D2C(void *arg0, GlobalContext *arg1); /* static */
void func_80927FCC(void *arg0, GlobalContext *arg1); /* static */
void func_809282F0(void *arg0, GlobalContext *arg1); /* static */
void func_8092860C(void *arg0, GlobalContext *arg1); /* static */
void func_80928904(s32 arg0, ? arg1);               /* static */
void func_80928914(ObjTsubo *arg0);                 /* static */
void func_809289B4(ObjTsubo *arg0);                 /* static */
void func_80928D6C(ObjTsubo *arg0);                 /* static */
void func_80928E74(ObjTsubo *arg0);                 /* static */
void func_809291DC(ObjTsubo *arg0);                 /* static */
void func_809294B0(Actor *this, GlobalContext *globalCtx); /* static */
static s16 D_80929500 = 0;
static s16 D_80929504 = 0;
static s16 D_80929508 = 0;
static s16 D_8092950C = 0;
static ? D_80929530;                                /* unable to generate initializer */
static ? D_80929534;                                /* unable to generate initializer */
static ? D_80929538;                                /* unable to generate initializer */
static ? D_80929590;                                /* unable to generate initializer */
static ColliderCylinderInit D_809295B0 = {
    {0xC, 9, 9, 0x39, 0x20, 1},
    {0, {0x400000, 0, 2}, {0x5CBFFBE, 0, 0}, 1, 1, 1},
    {0xC, 0x1E, 0, {0, 0, 0}},
};
static InitChainEntry D_809295DC;                   /* unable to generate initializer */

typedef struct ObjTsubo {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(ObjTsubo *, GlobalContext *);
    /* 0x0148 */ ColliderCylinder unk148;           /* inferred */
    /* 0x0194 */ s8 unk194;                         /* inferred */
    /* 0x0195 */ s8 unk195;                         /* inferred */
    /* 0x0196 */ s8 unk196;                         /* inferred */
    /* 0x0197 */ s8 unk197;                         /* inferred */
    /* 0x0198 */ s8 unk198;                         /* inferred */
    /* 0x0199 */ s8 unk199;                         /* inferred */
    /* 0x019A */ s8 unk19A;                         /* inferred */
    /* 0x019B */ u8 unk19B;                         /* inferred */
} ObjTsubo;                                         /* size 0x19C */

s32 func_809275C0(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_a2;
    s32 phi_v0;

    temp_v0 = ((arg0->params & 0x1F) * 4) | 0xFF01;
    phi_a2 = -1;
    if ((temp_v0 & 3) != 0) {
        phi_a2 = ((s32) (temp_v0 & 0x3FC) >> 2) & 0xFF;
    }
    temp_v0_2 = (phi_a2 < 0) == 1;
    phi_v0 = temp_v0_2;
    if (temp_v0_2 == 0) {
        phi_v0 = Actor_GetChestFlag(arg1, (u32) phi_a2) == 0;
    }
    return phi_v0;
}

void func_8092762C(ObjTsubo *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->actor.params;
    if (((((s32) temp_v0 >> 4) & 1) == 0) && (arg0->actor.home.rot.z != 2)) {
        Item_DropCollectibleRandom(arg1, NULL, arg0 + 0x24, (s16) ((temp_v0 & 0xF) * 0x10));
    }
}

void func_80927690(ObjTsubo *arg0, GlobalContext *arg1) {
    ObjTsubo *temp_a3;
    s16 temp_a0;
    s16 temp_t8;
    s32 temp_v0;

    if ((arg0->unk197 == 0) && (arg0->actor.home.rot.z != 2)) {
        temp_a0 = arg0->actor.params;
        arg0 = arg0;
        temp_v0 = func_800A8150(temp_a0 & 0x3F);
        temp_a3 = arg0;
        if (temp_v0 >= 0) {
            temp_t8 = temp_a3->actor.params;
            arg0 = temp_a3;
            Item_DropCollectible(arg1, temp_a3 + 0x24, ((((s32) temp_t8 >> 9) & 0x7F) << 8) | temp_v0);
            arg0->unk197 = 1;
        }
    }
}

void func_80927714(void *arg0, GlobalContext *arg1, ? arg2) {
    Actor_Spawn(arg1 + 0x1CA0, arg1, 0x164, arg0->unk24, arg0->unk28, arg0->unk2C, (s16) 0, (s16) 0, (s16) 0, (s16) 2);
}

void func_8092776C(Actor *arg0, GlobalContext *arg1, ? arg2) {
    s32 sp38;
    Actor *temp_v0;

    if (func_809275C0(arg0, arg1) != 0) {
        sp38 = ((arg0->params & 0x1F) * 4) | 0xFF01;
        temp_v0 = Actor_Spawn(&arg1->actorCtx, arg1, 0x50, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) (Rand_Next() >> 0x10), (s16) 0, (s16) sp38);
        if (temp_v0 != 0) {
            temp_v0->parent = arg0;
            temp_v0->velocity.y = 0.0f;
            temp_v0->speedXZ = 0.0f;
        }
    }
}

void func_80927818(ObjTsubo *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->actor.home.rot.z;
    if (temp_v0 == 1) {
        func_80927714();
        return;
    }
    if (temp_v0 == 2) {
        func_8092776C();
    }
}

s32 func_80927864(ObjTsubo *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v0;

    temp_v1 = arg1->sceneNum;
    temp_v0 = temp_v1 != 0x44;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = temp_v1 != 0x36;
    }
    return phi_v0;
}

void func_8092788C(ObjTsubo *arg0, GlobalContext *arg1) {
    if ((arg0->unk197 == 0) && (arg0->unk196 != arg1->roomCtx.currRoom.num)) {
        arg0->unk197 = 1;
    }
}

void ObjTsubo_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjTsubo *this = (ObjTsubo *) thisx;
    s32 sp34;
    s32 sp2C;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    s16 temp_v0;
    void *temp_s1;

    sp34 = ((s32) this->actor.params >> 7) & 3;
    sp2C = (s32) this->actor.home.rot.z;
    Actor_ProcessInitChain(&this->actor, &D_809295DC);
    temp_s1 = (sp34 << 5) + &D_80929530;
    Actor_SetScale(&this->actor, temp_s1->unk4);
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.z = 0;
    temp_a1 = &this->unk148;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_809295B0);
    Collider_UpdateCylinder(&this->actor, temp_a1);
    this->unk148.dim.radius = temp_s1->unk10;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk148.dim.height = temp_s1->unk12;
    this->unk199 = Object_GetIndex(&globalCtx->objectCtx, temp_s1->unk0);
    if ((s32) this->unk199 < 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actor.shape.shadowScale = 1.8f;
    this->unk196 = this->actor.room;
    if ((temp_s1 != &D_80929590) && (sp2C != 2)) {
        temp_v0 = this->actor.params;
        if (func_800A81A4(globalCtx, temp_v0 & 0x3F, ((s32) temp_v0 >> 9) & 0x7F) != 0) {
            this->unk198 = 1;
        }
    }
    if ((temp_s1 == &D_80929590) || (sp2C != 2) || (func_809275C0(&this->actor, globalCtx) == 0)) {
        this->unk19A = -1;
    }
    func_80928914(this);
}

void ObjTsubo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjTsubo *this = (ObjTsubo *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk148);
}

void func_80927A78(void *arg0, GlobalContext *arg1) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    Vec3f *temp_s5;
    f32 *temp_s3;
    f32 *temp_s7;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f8;
    s32 temp_s2;
    void *temp_s4;
    s16 phi_s1;
    s32 phi_s0;
    s32 phi_s2;

    temp_s4 = ((((s32) arg0->unk1C >> 7) & 3) << 5) + &D_80929530;
    temp_s5 = arg0 + 0x24;
    temp_s7 = &spC0;
    temp_s3 = &spCC;
    phi_s1 = 0;
    phi_s2 = 0;
    do {
        temp_f20 = Math_SinS(phi_s1);
        temp_f22 = Math_CosS(phi_s1);
        spCC = temp_f20 * 8.0f;
        temp_f8 = (Rand_ZeroOne() * 12.0f) + 2.0f;
        spD4 = temp_f22 * 8.0f;
        spD0 = temp_f8;
        spC0 = spCC * 0.23f;
        temp_f10 = (Rand_ZeroOne() * 5.0f) + 2.5f;
        spC8 = spD4 * 0.23f;
        spC4 = temp_f10;
        Math_Vec3f_Sum((Vec3f *) temp_s3, temp_s5, (Vec3f *) temp_s3);
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.2f) {
            phi_s0 = 0x60;
        } else {
            phi_s0 = 0x20;
            if (temp_f0 < 0.6f) {
                phi_s0 = 0x40;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s3, (Vec3f *) temp_s7, temp_s5, (s16) -0x104, (s16) phi_s0, (s16) 0x14, (s16) 0, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 110.0f) + 15.0f), (s16) 0, (s16) 0, 0x32, (s16) -1, (s16) (s32) temp_s4->unk0, temp_s4->unkC);
        temp_s2 = phi_s2 + 1;
        phi_s1 = (s16) (phi_s1 + 0x4E20);
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x12);
    func_800BBFB0(arg1, temp_s5, 30.0f, 2, (s16) 0x14, (s16) 0x32, (u8) 1);
    func_800BBFB0(arg1, temp_s5, 30.0f, 2, (s16) 0xA, (s16) 0x50, (u8) 1);
}

void func_80927D2C(void *arg0, GlobalContext *arg1) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    Vec3f *temp_s5;
    f32 *temp_s3;
    f32 *temp_s7;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_s2;
    void *temp_s4;
    s16 phi_s1;
    s32 phi_s0;
    s32 phi_s2;

    temp_s4 = ((((s32) arg0->unk1C >> 7) & 3) << 5) + &D_80929530;
    temp_s5 = arg0 + 0x24;
    temp_s7 = &spC0;
    temp_s3 = &spCC;
    phi_s1 = 0;
    phi_s2 = 0;
    do {
        temp_f20 = Math_SinS(phi_s1);
        temp_f22 = Math_CosS(phi_s1);
        spCC = temp_f20 * 10.0f;
        temp_f8 = (Rand_ZeroOne() * 20.0f) + 2.0f;
        spD4 = temp_f22 * 10.0f;
        spD0 = temp_f8;
        spC0 = spCC * 0.3f;
        temp_f6 = (Rand_ZeroOne() * 10.0f) + 2.0f;
        spC8 = spD4 * 0.3f;
        spC4 = temp_f6;
        Math_Vec3f_Sum((Vec3f *) temp_s3, temp_s5, (Vec3f *) temp_s3);
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.2f) {
            phi_s0 = 0xE0;
        } else {
            phi_s0 = 0xA0;
            if (temp_f0 < 0.6f) {
                phi_s0 = 0xC0;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s3, (Vec3f *) temp_s7, temp_s5, (s16) -0x154, (s16) phi_s0, (s16) 0x14, (s16) 0, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 160.0f) + 15.0f), (s16) 0, (s16) 0, 0x32, (s16) -1, (s16) (s32) temp_s4->unk0, temp_s4->unkC);
        temp_s2 = phi_s2 + 1;
        phi_s1 = (s16) (phi_s1 + 0x4E20);
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x14);
    func_800BBFB0(arg1, temp_s5, 50.0f, 2, (s16) 0x28, (s16) 0x32, (u8) 1);
    func_800BBFB0(arg1, temp_s5, 50.0f, 2, (s16) 0x14, (s16) 0x50, (u8) 1);
}

void func_80927FCC(void *arg0, GlobalContext *arg1) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    Vec3f *temp_s4;
    f32 *temp_s3;
    f32 *temp_s7;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f4;
    s32 temp_s2;
    s32 temp_s2_2;
    void *temp_s6;
    s16 phi_s1;
    s32 phi_s2;
    s16 phi_s1_2;
    s32 phi_s0;
    s32 phi_s2_2;

    temp_s6 = ((((s32) arg0->unk1C >> 7) & 3) << 5) + &D_80929530;
    spD0 = arg0->unk28 + arg0->unk8C;
    temp_s4 = arg0 + 0x24;
    temp_s3 = &spCC;
    phi_s1 = 0;
    phi_s2 = 0;
    phi_s1_2 = 0;
    phi_s2_2 = 0;
    do {
        spCC = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 6000.0f) + phi_s1)) * 15.0f) + temp_s4->x;
        spD4 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 6000.0f) + phi_s1)) * 15.0f) + temp_s4->z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0x15E);
        temp_s2 = phi_s2 + 1;
        phi_s1 = (s16) (phi_s1 + 0x3333);
        phi_s2 = temp_s2;
    } while (temp_s2 < 5);
    spCC = temp_s4->x;
    spD4 = temp_s4->z;
    EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_s3, 0xC8, 0x258, (s16) 0);
    temp_s7 = &spC0;
    do {
        temp_f20 = Math_SinS(phi_s1_2);
        temp_f22 = Math_CosS(phi_s1_2);
        spCC = temp_f20 * 8.0f;
        temp_f4 = temp_f22 * 8.0f;
        temp_f18 = (Rand_ZeroOne() * 5.0f) + 2.0f;
        spD4 = temp_f4;
        spD0 = temp_f18;
        spC0 = spCC * 0.2f;
        temp_f18_2 = (Rand_ZeroOne() * 4.0f) + 2.0f;
        spC8 = temp_f4 * 0.2f;
        spC4 = temp_f18_2;
        Math_Vec3f_Sum((Vec3f *) temp_s3, temp_s4, (Vec3f *) temp_s3);
        phi_s0 = 0x20;
        if (Rand_ZeroOne() < 0.2f) {
            phi_s0 = 0x40;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s3, (Vec3f *) temp_s7, temp_s4, (s16) -0xAA, (s16) phi_s0, (s16) 0x32, (s16) 5, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 105.0f) + 10.0f), (s16) 0, (s16) 0, 0x46, (s16) -1, (s16) (s32) temp_s6->unk0, temp_s6->unkC);
        temp_s2_2 = phi_s2_2 + 1;
        phi_s1_2 = (s16) (phi_s1_2 + 0x4E20);
        phi_s2_2 = temp_s2_2;
    } while (temp_s2_2 != 0xD);
}

void func_809282F0(void *arg0, GlobalContext *arg1) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    Vec3f *temp_s4;
    f32 *temp_s3;
    f32 *temp_s7;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f4;
    s32 temp_s2;
    s32 temp_s2_2;
    void *temp_s6;
    s16 phi_s1;
    s32 phi_s2;
    s16 phi_s1_2;
    s32 phi_s0;
    s32 phi_s2_2;

    temp_s6 = ((((s32) arg0->unk1C >> 7) & 3) << 5) + &D_80929530;
    spD0 = arg0->unk28 + arg0->unk8C;
    temp_s4 = arg0 + 0x24;
    temp_s3 = &spCC;
    phi_s1 = 0;
    phi_s2 = 0;
    phi_s1_2 = 0;
    phi_s2_2 = 0;
    do {
        spCC = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 6000.0f) + phi_s1)) * 30.0f) + temp_s4->x;
        spD4 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 6000.0f) + phi_s1)) * 30.0f) + temp_s4->z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0x15E);
        temp_s2 = phi_s2 + 1;
        phi_s1 = (s16) (phi_s1 + 0x3333);
        phi_s2 = temp_s2;
    } while (temp_s2 < 5);
    spCC = temp_s4->x;
    spD4 = temp_s4->z;
    EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_s3, 0x12C, 0x2BC, (s16) 0);
    temp_s7 = &spC0;
    do {
        temp_f20 = Math_SinS(phi_s1_2);
        temp_f22 = Math_CosS(phi_s1_2);
        spCC = temp_f20 * 10.0f;
        temp_f4 = temp_f22 * 10.0f;
        temp_f18 = (Rand_ZeroOne() * 15.0f) + 2.0f;
        spD4 = temp_f4;
        spD0 = temp_f18;
        spC0 = spCC * 0.3f;
        temp_f18_2 = (Rand_ZeroOne() * 4.0f) + 2.0f;
        spC8 = temp_f4 * 0.3f;
        spC4 = temp_f18_2;
        Math_Vec3f_Sum((Vec3f *) temp_s3, temp_s4, (Vec3f *) temp_s3);
        phi_s0 = 0xA0;
        if (Rand_ZeroOne() < 0.2f) {
            phi_s0 = 0xC0;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s3, (Vec3f *) temp_s7, temp_s4, (s16) -0xAA, (s16) phi_s0, (s16) 0x32, (s16) 5, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 150.0f) + 10.0f), (s16) 0, (s16) 0, 0x46, (s16) -1, (s16) (s32) temp_s6->unk0, temp_s6->unkC);
        temp_s2_2 = phi_s2_2 + 1;
        phi_s1_2 = (s16) (phi_s1_2 + 0x4E20);
        phi_s2_2 = temp_s2_2;
    } while (temp_s2_2 != 0xF);
}

void func_8092860C(void *arg0, GlobalContext *arg1) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    Vec3f *temp_s4;
    f32 *temp_fp;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f4;
    s32 temp_s1;
    s32 temp_s1_2;
    void *temp_s6;
    s16 phi_s2;
    s32 phi_s0;
    s32 phi_s1;
    s32 phi_s1_2;

    temp_s6 = ((((s32) arg0->unk1C >> 7) & 3) << 5) + &D_80929530;
    temp_s4 = arg0 + 0x24;
    temp_fp = &spC0;
    temp_s3 = &spCC;
    phi_s2 = 0;
    phi_s1 = 0;
    phi_s1_2 = 0;
    do {
        temp_f0 = Rand_ZeroOne();
        temp_f20 = ((1.0f - (temp_f0 * temp_f0)) * 4.8f) + 3.2f;
        temp_f22 = Math_SinS(phi_s2);
        temp_f4 = temp_f22 * temp_f20;
        temp_f24 = Math_CosS(phi_s2);
        spCC = temp_f4;
        temp_f16 = (Rand_ZeroOne() * 15.0f) + 2.0f;
        spD4 = temp_f24 * temp_f20;
        spD0 = temp_f16;
        spC0 = temp_f4 * 0.4f;
        temp_f10 = (Rand_ZeroOne() * 4.0f) + 4.0f;
        spC8 = spD4 * 0.4f;
        spC4 = temp_f10;
        Math_Vec3f_Sum((Vec3f *) temp_s3, temp_s4, (Vec3f *) temp_s3);
        phi_s0 = 0x20;
        if (Rand_ZeroOne() < 0.2f) {
            phi_s0 = 0x40;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s3, (Vec3f *) temp_fp, temp_s4, (s16) -0xAA, (s16) phi_s0, (s16) 0x32, (s16) 3, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 105.0f) + 10.0f), (s16) 0, (s16) 0, 0x46, (s16) -1, (s16) (s32) temp_s6->unk0, temp_s6->unkC);
        temp_s1 = phi_s1 + 1;
        phi_s2 = (s16) (phi_s2 + 0x4E20);
        phi_s1 = temp_s1;
    } while (temp_s1 < 0xD);
    do {
        EffectSsBubble_Spawn(arg1, temp_s4, 20.0f, 30.0f, 40.0f, (Rand_ZeroOne() * 0.06f) + 0.09f);
        EffectSsBubble_Spawn(arg1, temp_s4, 10.0f, 10.0f, 10.0f, (Rand_ZeroOne() * 0.08f) + 0.09f);
        temp_s1_2 = phi_s1_2 + 1;
        phi_s1_2 = temp_s1_2;
    } while (temp_s1_2 != 7);
}

void func_80928904(s32 arg0, ? arg1) {

}

void func_80928914(ObjTsubo *arg0) {
    arg0->actionFunc = func_80928928;
}

void func_80928928(ObjTsubo *this, GlobalContext *globalCtx) {
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 15.0f, 15.0f, 0.0f, 0x44U);
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk199) != 0) {
        this->actor.objBankIndex = this->unk199;
        func_809289B4(this);
    }
}

void func_809289B4(ObjTsubo *arg0) {
    arg0->actor.draw = func_809294B0;
    arg0->actor.flags |= 0x10;
    arg0->unk195 = 0;
    arg0->actionFunc = func_809289E4;
}

void func_809289E4(ObjTsubo *this, GlobalContext *globalCtx) {
    s32 sp44;
    s32 sp3C;
    ColliderCylinder *sp30;
    CollisionCheckContext *sp2C;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_v0_4;
    ColliderCylinder *temp_v0_5;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0_3;
    s32 temp_a2;
    s32 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_v1;

    temp_v0 = this->unk148.base.acFlags;
    temp_v1 = (temp_v0 & 2) != 0;
    temp_a2 = ((s32) this->actor.params >> 7) & 3;
    if (temp_v1 != 0) {
        this->unk148.base.acFlags = temp_v0 & 0xFFFD;
    }
    temp_v0_2 = this->unk148.base.ocFlags1;
    if ((temp_v0_2 & 2) != 0) {
        this->unk148.base.ocFlags1 = temp_v0_2 & 0xFFFD;
    }
    sp3C = temp_v1;
    sp44 = temp_a2;
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        this->actor.room = -1;
        this->actor.flags |= 0x10;
        if ((temp_a2 != 3) && (func_800A817C(this->actor.params & 0x3F) != 0)) {
            func_80927690(this, globalCtx);
        }
        func_80927818(this, globalCtx, 0);
        func_800B8E58(&this->actor, 0x86FU);
        func_80928D6C(this);
        return;
    }
    if ((this->unk19B != 0) || ((temp_v1 != 0) && ((this->unk148.info.acHitInfo->toucher.dmgFlags & 0x58BFFBC) != 0))) {
        this->unk19B = 0;
        if (((this->actor.bgCheckFlags & 0x20) != 0) && (temp_v0_4 = (temp_a2 << 5) + &D_80929530, (this->actor.yDistToWater > 15.0f))) {
            sp30 = temp_v0_4;
            temp_v0_4->unk1C(this, globalCtx, temp_a2);
        } else {
            temp_v0_5 = (temp_a2 << 5) + &D_80929530;
            sp30 = temp_v0_5;
            temp_v0_5->unk14(this, globalCtx, temp_a2);
        }
        if (sp30 == &D_80929590) {
            func_8092762C(this, globalCtx);
        } else {
            func_80927690(this, globalCtx);
        }
        func_80927818(this, globalCtx, 1);
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x14, 0x2887U);
        if (func_80927864(this, globalCtx) != 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        func_809291DC(this);
        return;
    }
    if (this->unk195 == 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 15.0f, 15.0f, 0.0f, 0x44U);
        if (((this->actor.bgCheckFlags & 1) != 0) && (BgCheck_GetActorOfMesh(&globalCtx->colCtx, (s32) this->actor.floorBgId) == 0)) {
            this->unk195 = 1;
            this->actor.flags &= -0x11;
        }
    }
    temp_a1 = &this->unk148;
    if ((this->actor.xzDistToPlayer < 800.0f) || (gSaveContext.entranceIndex == 0xD010)) {
        sp30 = temp_a1;
        Collider_UpdateCylinder(&this->actor, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp2C = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp30->base);
        if (this->actor.xzDistToPlayer < 150.0f) {
            CollisionCheck_SetOC(globalCtx, temp_a1_2, &sp30->base);
            if (this->actor.xzDistToPlayer < 100.0f) {
                temp_v0_3 = this->actor.yawTowardsPlayer - globalCtx->actorCtx.actorList[2].first->world.rot.y;
                phi_v1 = (s32) temp_v0_3;
                if ((s32) temp_v0_3 < 0) {
                    phi_v1 = -(s32) temp_v0_3;
                }
                if (phi_v1 >= 0x5556) {
                    func_800B8A1C(&this->actor, globalCtx, 0, 36.0f, 30.0f);
                }
            }
        }
    }
}

void func_80928D6C(ObjTsubo *arg0) {
    arg0->actionFunc = func_80928D80;
}

void func_80928D80(ObjTsubo *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;

    func_8092788C(this, globalCtx);
    if (Actor_HasNoParent(&this->actor, globalCtx) != 0) {
        this->actor.room = globalCtx->roomCtx.currRoom.num;
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        this->actor.flags &= 0xFBFFFFFF;
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 15.0f, 15.0f, 0.0f, 0xC5U);
        func_80928E74(this);
        return;
    }
    sp30 = this->actor.world.pos.x;
    sp34 = this->actor.world.pos.y + 20.0f;
    sp38 = this->actor.world.pos.z;
    this->actor.floorHeight = func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp2C, &this->actor, (Vec3f *) &sp30);
}

void func_80928E74(ObjTsubo *arg0) {
    arg0->unk194 = 0x50;
    arg0->actor.colChkInfo.mass = 0xB4;
    D_80929500 = (s16) (s32) ((Rand_ZeroOne() - 0.78f) * 4500.0f);
    D_80929508 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 2000.0f);
    D_80929504 = 0;
    D_8092950C = 0;
    arg0->actionFunc = func_80928F18;
}

void func_80928F18(ObjTsubo *this, GlobalContext *globalCtx) {
    s32 sp34;
    s32 sp2C;
    PosRot *sp28;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_s0;
    PosRot *temp_a1;
    PosRot *temp_v0_4;
    PosRot *temp_v0_5;
    s32 temp_a2;
    s32 temp_v1;
    s8 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0;

    temp_v0 = this->unk148.base.atFlags;
    temp_v1 = (temp_v0 & 2) != 0;
    temp_a2 = ((s32) this->actor.params >> 7) & 3;
    if (temp_v1 != 0) {
        this->unk148.base.atFlags = temp_v0 & 0xFFFD;
    }
    sp2C = temp_v1;
    sp34 = temp_a2;
    func_8092788C(this, globalCtx, temp_a2);
    temp_v0_2 = this->unk194;
    if ((s32) temp_v0_2 > 0) {
        this->unk194 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->actor.bgCheckFlags;
    if (((temp_v0_3 & 0xB) != 0) || (temp_v1 != 0) || ((s32) this->unk194 <= 0)) {
        temp_v0_5 = (temp_a2 << 5) + &D_80929530;
        sp28 = temp_v0_5;
        temp_v0_5->unk14(this, globalCtx, temp_a2);
        if (temp_v0_5 == &D_80929590) {
            func_8092762C(this, globalCtx);
        } else {
            func_80927690(this, globalCtx);
        }
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x14, 0x2887U);
        if (func_80927864(this, globalCtx) != 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        func_809291DC(this);
        return;
    }
    if ((temp_v0_3 & 0x40) != 0) {
        temp_v0_4 = (temp_a2 << 5) + &D_80929530;
        sp28 = temp_v0_4;
        temp_v0_4->unk18(this, globalCtx, temp_a2);
        if (temp_v0_4 == &D_80929590) {
            func_8092762C(this, globalCtx);
        } else {
            func_80927690(this, globalCtx);
        }
        temp_a1 = &this->actor.world;
        sp28 = temp_a1;
        Audio_PlaySoundAtPosition(globalCtx, &temp_a1->pos, 0x14, 0x2887U);
        Audio_PlaySoundAtPosition(globalCtx, &temp_a1->pos, 0x28, 0x28C5U);
        if (func_80927864(this, globalCtx) != 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        func_809291DC(this);
        return;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Math_StepToS(&D_80929504, D_80929500, 0x96);
    Math_StepToS(&D_8092950C, D_80929508, 0x96);
    this->actor.shape.rot.x += D_80929504;
    this->actor.shape.rot.y += D_8092950C;
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 15.0f, 15.0f, 0.0f, 0xC5U);
    temp_a1_2 = &this->unk148;
    sp28 = (PosRot *) temp_a1_2;
    Collider_UpdateCylinder(&this->actor, temp_a1_2);
    temp_s0 = &globalCtx->colChkCtx;
    CollisionCheck_SetOC(globalCtx, temp_s0, (Collider *) sp28);
    CollisionCheck_SetAT(globalCtx, temp_s0, (Collider *) sp28);
}

void func_809291DC(Actor *arg0) {
    Actor *temp_a2;
    Vec3f *temp_a0;
    s16 temp_v0;
    s16 temp_v1;

    temp_a2 = arg0;
    temp_a2->draw = NULL;
    temp_a0 = temp_a2 + 0x24;
    temp_a2->flags |= 0x10;
    arg0 = temp_a2;
    Math_Vec3f_Copy(temp_a0, temp_a2 + 8);
    temp_v0 = arg0->home.rot.x;
    temp_v1 = arg0->home.rot.y;
    arg0->shape.rot.z = 0;
    arg0->world.rot.z = 0;
    arg0->unk197 = 0;
    arg0->shape.rot.x = temp_v0;
    arg0->world.rot.x = temp_v0;
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = 0.0f;
    arg0->shape.rot.y = temp_v1;
    arg0->world.rot.y = temp_v1;
    Actor_SetScale(arg0, 0.0f);
    arg0->unk194 = 0x7F;
    arg0->unk144 = func_8092926C;
}

void func_8092926C(ObjTsubo *this, GlobalContext *globalCtx) {
    ObjTsubo *temp_a0;
    ObjTsubo *temp_a3;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_t9;
    s8 temp_v0;

    temp_a3 = this;
    temp_v0 = temp_a3->unk194;
    if ((s32) temp_v0 > 0) {
        temp_a3->unk194 = temp_v0 - 1;
        if (temp_a3->unk194 == 0) {
            temp_a3->actor.draw = func_809294B0;
            return;
        }
        // Duplicate return node #6. Try simplifying control flow for better match
        return;
    }
    temp_t9 = temp_a3->actor.params;
    this = temp_a3;
    temp_f0 = *(&D_80929534 + ((((s32) temp_t9 >> 7) & 3) << 5));
    if (Math_StepToF(&temp_a3->actor.scale.x, temp_f0, temp_f0 * 0.1f) != 0) {
        temp_a0 = this;
        this->actor.flags |= 0x4000000;
        this = this;
        func_809289B4(temp_a0);
    }
    temp_f0_2 = this->actor.scale.x;
    this->actor.scale.y = temp_f0_2;
    this->actor.scale.z = temp_f0_2;
}

void ObjTsubo_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjTsubo *this = (ObjTsubo *) thisx;
    ObjTsubo *temp_a0;
    ObjTsubo *temp_a2;
    f32 temp_f0;
    s8 temp_v0;

    temp_a2 = this;
    this = temp_a2;
    temp_a2->actionFunc(temp_a2, globalCtx);
    if (this->actor.draw == 0) {
        goto block_8;
    }
    temp_f0 = this->actor.projectedPos.z;
    if (temp_f0 < 811.0f) {
        if (temp_f0 > 300.0f) {
            this->actor.shape.shadowDraw = func_800B3FC0;
            this->actor.shape.shadowAlpha = (u8) ((s32) (0x32B - (s32) temp_f0) >> 1);
        } else if (temp_f0 > -10.0f) {
            this->actor.shape.shadowAlpha = 0xFF;
            this->actor.shape.shadowDraw = func_800B3FC0;
        } else {
            goto block_8;
        }
    } else {
block_8:
        this->actor.shape.shadowDraw = NULL;
    }
    if (this->unk197 == 0) {
        if (this->unk198 != 0) {
            globalCtx->actorCtx.unk5 |= 8;
            this->actor.flags |= 0x10;
        }
        temp_v0 = this->unk19A;
        if ((s32) temp_v0 >= 0) {
            if (temp_v0 == 0) {
                temp_a0 = this;
                this = this;
                Audio_PlayActorSound2(&temp_a0->actor, 0x39DAU);
                if (Rand_ZeroOne() < 0.1f) {
                    this = this;
                    this->unk19A = Rand_S16Offset(0x28, 0x50);
                    return;
                }
                this->unk19A = 8;
                return;
            }
            this->unk19A = temp_v0 - 1;
            // Duplicate return node #18. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
    }
}

void func_809294B0(Actor *this, GlobalContext *globalCtx) {
    func_800BDFC0(globalCtx, *(&D_80929538 + ((((s32) this->params >> 7) & 3) << 5)));
}

