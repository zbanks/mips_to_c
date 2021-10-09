s32 func_800C9EBC(GlobalContext *, s32, f32, f32, f32 *, ? *, ? *); /* extern */
void func_809A0F20(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A0F78(ObjHamishi *arg0);               /* static */
void func_809A10F4(ObjHamishi *arg0, GlobalContext *arg1); /* static */
void func_809A13A0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_809A1408(ObjHamishi *arg0, GlobalContext *arg1); /* static */
static ColliderCylinderInit D_809A1AA0 = {
    {0xC, 0, 0xD, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0x81C37FB6, 0, 0}, 0, 1, 1},
    {0x32, 0x46, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_809A1ACC = {0, 0xC, 0x3C, 0xFF};
static s16 D_809A1AD4 = {0x91, 0x87, 0x73, 0x55, 0x4B, 0x35, 0x2D, 0x28, 0x23, 0};
static InitChainEntry D_809A1AE8;                   /* unable to generate initializer */

typedef struct ObjHamishi {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ f32 unk190;                        /* inferred */
    /* 0x0194 */ f32 unk194;                        /* inferred */
    /* 0x0198 */ s16 unk198;                        /* inferred */
    /* 0x019A */ s16 unk19A;                        /* inferred */
    /* 0x019C */ s16 unk19C;                        /* inferred */
    /* 0x019E */ s16 unk19E;                        /* inferred */
    /* 0x01A0 */ s8 unk1A0;                         /* inferred */
    /* 0x01A1 */ s8 unk1A1;                         /* inferred */
    /* 0x01A2 */ u8 unk1A2;                         /* inferred */
    /* 0x01A3 */ char pad1A3[0x1];                  /* maybe part of unk1A2[2]? */
} ObjHamishi;                                       /* size 0x1A4 */

void func_809A0F20(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a1;

    temp_a1 = arg0 + 0x144;
    sp18 = temp_a1;
    arg0 = arg0;
    Collider_InitCylinder(arg1, temp_a1);
    Collider_SetCylinder(arg1, temp_a1, arg0, &D_809A1AA0);
    Collider_UpdateCylinder(arg0, temp_a1);
}

void func_809A0F78(ObjHamishi *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk198;
    if ((s32) temp_v0 > 0) {
        arg0->unk198 = temp_v0 - 1;
        arg0->unk19A += 0x1388;
        arg0->unk19C += 0xE10;
        Math_StepToF(arg0 + 0x190, 0.0f, 0.15f);
        Math_StepToF(arg0 + 0x194, 0.0f, 40.0f);
        arg0->actor.world.pos.x = (Math_SinS((s16) (arg0->unk19A * 4)) * arg0->unk190) + arg0->actor.home.pos.x;
        arg0->actor.world.pos.z = (Math_CosS((s16) (arg0->unk19A * 7)) * arg0->unk190) + arg0->actor.home.pos.z;
        arg0->actor.shape.rot.x = (s32) (Math_SinS((s16) (arg0->unk19C * 4)) * arg0->unk194) + arg0->actor.home.rot.x;
        arg0->actor.shape.rot.z = (s32) (Math_CosS((s16) (arg0->unk19C * 7)) * arg0->unk194) + arg0->actor.home.rot.z;
        return;
    }
    Math_StepToF(arg0 + 0x24, arg0->actor.home.pos.x, 1.0f);
    Math_StepToF(arg0 + 0x2C, arg0->actor.home.pos.z, 1.0f);
    Math_ScaledStepToS(arg0 + 0xBC, arg0->actor.home.rot.x, 0xBB8);
    Math_ScaledStepToS(arg0 + 0xC0, arg0->actor.home.rot.z, 0xBB8);
}

void func_809A10F4(ObjHamishi *arg0, GlobalContext *arg1) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    Vec3f *temp_s4;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    s16 temp_s0;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;
    s32 phi_v1;
    s32 phi_v0;
    s16 *phi_s3;

    temp_s4 = arg0 + 0x24;
    temp_s7 = &spC8;
    temp_s6 = &spBC;
    phi_s0 = 0x3E8;
    phi_s1 = 0;
    phi_s3 = &D_809A1AD4;
    do {
        temp_s0 = phi_s0 + 0x4E20;
        temp_f20 = Rand_ZeroOne() * 10.0f;
        spBC = (Math_SinS(temp_s0) * temp_f20) + arg0->actor.world.pos.x;
        spC0 = (Rand_ZeroOne() * 40.0f) + arg0->actor.world.pos.y + 5.0f;
        spC4 = (Math_CosS(temp_s0) * temp_f20) + arg0->actor.world.pos.z;
        temp_f20_2 = (Rand_ZeroOne() * 10.0f) + 2.0f;
        spC8 = Math_SinS(temp_s0) * temp_f20_2;
        temp_f22 = Rand_ZeroOne();
        spCC = (Rand_ZeroOne() * (f32) phi_s1 * 2.5f) + (temp_f22 * 15.0f);
        spD0 = Math_CosS(temp_s0) * temp_f20_2;
        phi_s0 = temp_s0;
        if (phi_s1 == 0) {
            phi_v1 = -0x1C2;
            phi_v0 = 0x29;
        } else {
            phi_v0 = 0x45;
            if (phi_s1 < 4) {
                phi_v1 = -0x17C;
                phi_v0 = 0x25;
            } else {
                phi_v1 = -0x140;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s6, (Vec3f *) temp_s7, temp_s4, (s16) phi_v1, (s16) phi_v0, (s16) 0x1E, (s16) 5, (s16) 0, (s16) (s32) *phi_s3, (s16) 3, (s16) 0, 0x46, (s16) 1, (s16) 2, (Gfx *) &D_05006420);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        phi_s3 += 2;
    } while (temp_s1 != 9);
    func_800BBFB0(arg1, temp_s4, 140.0f, 6, (s16) 0xB4, (s16) 0x5A, (u8) 1);
    func_800BBFB0(arg1, temp_s4, 140.0f, 0xC, (s16) 0x50, (s16) 0x5A, (u8) 1);
}

void func_809A13A0(Actor *arg0, GlobalContext *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s32 sp24;
    Actor *temp_a3;
    CollisionPoly **temp_a1;
    f32 temp_f16;

    temp_a3 = arg0;
    sp28 = temp_a3->world.pos.x;
    temp_a1 = temp_a3 + 0x80;
    sp2C = temp_a3->world.pos.y + 30.0f;
    temp_f16 = temp_a3->world.pos.z;
    arg0 = temp_a3;
    sp30 = temp_f16;
    arg0->floorHeight = func_800C411C(arg1 + 0x830, temp_a1, &sp24, temp_a3, (Vec3f *) &sp28);
}

s32 func_809A1408(ObjHamishi *arg0, GlobalContext *arg1) {
    ? sp30;
    f32 sp2C;
    ? sp28;

    if ((func_800C9EBC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30, &sp28) != 0) && (arg0->actor.world.pos.y < sp2C)) {
        return 1;
    }
    return 0;
}

void ObjHamishi_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjHamishi *this = (ObjHamishi *) thisx;
    s16 temp_v1;

    Actor_ProcessInitChain(&this->actor, &D_809A1AE8);
    if (globalCtx->csCtx.state != 0) {
        this->actor.uncullZoneForward += 1000.0f;
    }
    if (this->actor.shape.rot.y == 0) {
        this->actor.shape.rot.y = (s16) (Rand_Next() >> 0x10);
        temp_v1 = this->actor.shape.rot.y;
        this->actor.world.rot.y = temp_v1;
        this->actor.home.rot.y = temp_v1;
    }
    func_809A0F20(&this->actor, globalCtx);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_809A1ACC);
    func_809A13A0(&this->actor, globalCtx);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 2.3f);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actor.shape.yOffset = 80.0f;
    if (func_809A1408(this, globalCtx) != 0) {
        this->unk1A2 |= 1;
    }
}

void ObjHamishi_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHamishi *this = (ObjHamishi *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void ObjHamishi_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjHamishi *this = (ObjHamishi *) thisx;
    s32 sp24;
    s32 temp_v0;
    s8 temp_v0_3;
    s8 temp_v0_4;
    u32 temp_v0_2;

    temp_v0 = (this->unk144.base.acFlags & 2) != 0;
    sp24 = temp_v0;
    func_809A0F78(this);
    if (temp_v0 != 0) {
        this->unk1A1 = 5;
        this->unk144.base.acFlags &= 0xFFFD;
    }
    if (temp_v0 != 0) {
        temp_v0_2 = this->unk144.info.acHitInfo->toucher.dmgFlags;
        if ((temp_v0_2 & 0x80000500) != 0) {
            if ((temp_v0_2 & 0x400) != 0) {
                this->unk1A0 = 0x1A;
            } else {
                this->unk1A0 = 0xB;
            }
            if (this->unk144.info.acHitInfo->toucher.dmgFlags & 0x80000000) {
                this->unk19E = 2;
            } else {
                this->unk19E += 1;
            }
            if ((s32) this->unk19E < 2) {
                this->unk198 = 0xF;
                this->unk190 = 2.0f;
                this->unk194 = 400.0f;
            } else {
                func_809A10F4(this, globalCtx);
                Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x28, 0x2810U);
                Actor_SetSwitchFlag(globalCtx, this->actor.params & 0x7F);
                Actor_MarkForDeath(&this->actor);
            }
        }
    }
    if (this->actor.update != 0) {
        temp_v0_3 = this->unk1A1;
        if ((s32) temp_v0_3 > 0) {
            this->unk1A1 = temp_v0_3 - 1;
            if (this->unk1A1 == 0) {
                this->unk144.base.colType = 0xC;
            } else {
                this->unk144.base.colType = 0xA;
            }
        }
        temp_v0_4 = this->unk1A0;
        if ((s32) temp_v0_4 > 0) {
            this->unk1A0 = temp_v0_4 - 1;
        } else if (((this->actor.flags & 0x40) != 0) && (this->actor.xzDistToPlayer < 1000.0f)) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk144.base);
        }
        if (this->actor.xzDistToPlayer < 600.0f) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk144.base);
        }
    }
}

void ObjHamishi_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjHamishi *this = (ObjHamishi *) thisx;
    GraphicsContext *sp38;
    Gfx *sp2C;
    f32 sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a2;
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = this->actor.projectedPos.z;
    temp_a2 = globalCtx->state.gfxCtx;
    if ((temp_f0 <= 2150.0f) || (((this->unk1A2 & 1) != 0) && (temp_f0 < 2250.0f))) {
        this->actor.shape.shadowAlpha = 0xA0;
        sp38 = temp_a2;
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDB060020;
        temp_v0_5->words.w1 = (u32) D_801AEFA0;
        temp_v0_6 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp38 = temp_a2;
        sp2C = temp_v0_6;
        sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = 0xFFAA82FF;
        temp_v0_7->words.w0 = 0xFA000000;
        temp_v0_8 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xDE000000;
        temp_v0_8->words.w1 = (u32) &D_050061E8;
        return;
    }
    if (temp_f0 < 2250.0f) {
        temp_f2 = (2250.0f - temp_f0) * 2.55f;
        this->actor.shape.shadowAlpha = (u8) (u32) (temp_f2 * 0.627451f);
        sp20 = temp_f2;
        sp38 = temp_a2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        temp_v0->words.w1 = (u32) D_801AEF88;
        temp_v0_2 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp38 = temp_a2;
        sp18 = temp_v0_2;
        sp18->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = ((s32) sp20 & 0xFF) | 0xFFAA8200;
        temp_v0_4 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_050061E8;
        temp_v0_4->words.w0 = 0xDE000000;
        return;
    }
    this->actor.shape.shadowAlpha = 0;
}

