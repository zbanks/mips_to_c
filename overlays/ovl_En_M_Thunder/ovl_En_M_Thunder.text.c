? func_800FD2B4(GlobalContext *, GlobalContext *, ?, ?, f32); /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
s32 func_80115DB4(GlobalContext *, s16, ?);         /* extern */
? func_8019F900(f32, void *, ?);                    /* extern */
void func_808B53C0(EnMThunder *arg0, GlobalContext *arg1); /* static */
void func_808B5890(GlobalContext *arg1, u32);       /* static */
void func_808B58CC(Actor *arg0, GlobalContext *arg1); /* static */
void func_808B5984(EnMThunder *, GlobalContext *);  /* static */
void func_808B5EEC(EnMThunder *arg0, GlobalContext *arg1); /* static */
void func_808B5F68(EnMThunder *, GlobalContext *);  /* static */
void func_808B60D4(EnMThunder *, GlobalContext *);  /* static */
void func_808B6310(Actor *arg0, GlobalContext *arg1); /* static */
void func_808B65BC(Actor *arg0, GlobalContext *globalCtx); /* static */
extern ? D_04025970;
extern ? D_04025EF0;
extern ? D_040268F0;
extern ? D_04027CA0;
static ColliderCylinderInit D_808B7120 = {
    {0xA, 9, 0, 0, 0x10, 1},
    {2, {0x1000000, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
    {0xC8, 0xC8, 0, {0, 0, 0}},
};
static ? D_808B714C;                                /* unable to generate initializer */
static ? D_808B7150;                                /* unable to generate initializer */
static ? D_808B7154;                                /* unable to generate initializer */
static ? D_808B715C;                                /* unable to generate initializer */

typedef struct EnMThunder {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ LightNode *unk190;                 /* inferred */
    /* 0x0194 */ ColliderCylinder unk194;           /* inferred */
    /* 0x01A4 */ u32 unk1A4;                        /* overlap; inferred */
    /* 0x01A8 */ f32 unk1A8;                        /* inferred */
    /* 0x01AC */ char pad1AC[0x4];                  /* maybe part of unk1A8[2]? */
    /* 0x01B0 */ f32 unk1B0;                        /* inferred */
    /* 0x01B4 */ char pad1B4[0x4];                  /* maybe part of unk1B0[2]? */
    /* 0x01B8 */ void (*actionFunc)(EnMThunder *, GlobalContext *);
    /* 0x01BC */ char pad1BC[0x2];
    /* 0x01BE */ u8 unk1BE;                         /* inferred */
    /* 0x01BF */ u8 unk1BF;                         /* inferred */
    /* 0x01C0 */ char pad1C0[0x4];                  /* maybe part of unk1BF[5]? */
} EnMThunder;                                       /* size 0x1C4 */

void func_808B53C0(EnMThunder *arg0, GlobalContext *arg1) {
    arg0->actor.update = func_808B65BC;
    arg0->unk194.info.bumperFlags = 0;
    arg0->unk1BE = 1;
    arg0->unk194.info.toucherFlags = 2;
    arg0->actionFunc = func_808B6310;
    arg0->unk194.info.bumper.hitPos.y = 8;
    arg0->unk1A4 = 0x3F800000;
    func_801A5CFC(0x182EU, arg1->actorCtx.actorList[2].first + 0xEC, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
    arg0->actor.child = NULL;
}

void EnMThunder_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnMThunder *this = (EnMThunder *) thisx;
    Actor *sp34;
    ColliderCylinder *sp30;
    Actor *temp_t0;
    ColliderCylinder *temp_a0;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    GlobalContext *temp_a2;
    s32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_a2 = globalCtx;
    temp_t0 = temp_a2->actorCtx.actorList[2].first;
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    globalCtx = temp_a2;
    sp34 = temp_t0;
    Collider_InitCylinder(temp_a2, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_808B7120);
    temp_a0 = &this->unk194;
    this->unk1BF = (u8) this->actor.params;
    sp30 = temp_a0;
    Lights_PointNoGlowSetInfo((LightInfo *) temp_a0, (s16) (s32) this->actor.world.pos.x, (s16) (s32) this->actor.world.pos.y, (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0);
    this->unk190 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, (LightInfo *) sp30);
    if (this->unk1BF == 0x80) {
        func_808B53C0(this, globalCtx);
        return;
    }
    this->unk144.dim.radius = 0;
    this->unk144.dim.height = 0x28;
    this->unk144.dim.yShift = -0x14;
    this->unk194.info.bumper.hitPos.y = 8;
    this->unk194.info.toucher.dmgFlags = 0;
    this->actor.world.pos.x = temp_t0->unkBEC;
    this->actor.world.pos.y = temp_t0->unkBF0;
    this->unk1A4 = 0;
    this->unk194.info.bumper.dmgFlags = 0;
    this->actor.world.pos.z = temp_t0->unkBF4;
    this->actor.shape.rot.x = (s16) -(s32) this->actor.world.rot.x;
    this->actor.room = -1;
    this->actor.shape.rot.y = temp_t0->shape.rot.y + 0x8000;
    sp34 = temp_t0;
    Actor_SetScale(&this->actor, 0.1f);
    this->unk194.info.bumperFlags = 0;
    if (temp_t0->unkA70 & 0x20000) {
        if ((gSaveContext.magicAcquired == 0) || (gSaveContext.unk_3F28 != 0) || ((temp_v0 = (s32) (this->actor.params & 0xFF00) >> 8, (temp_v0 != 0)) && (sp34 = temp_t0, (func_80115DB4(globalCtx, (s16) temp_v0, 0) == 0)))) {
            temp_a1_2 = temp_t0 + 0xEC;
            sp30 = temp_a1_2;
            func_801A5CFC(0x1823U, (Vec3f *) temp_a1_2, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
            func_801A5CFC(0x1818U, (Vec3f *) temp_a1_2, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
            Actor_MarkForDeath(&this->actor);
            return;
        }
        temp_t0->unkA70 = (s32) (temp_t0->unkA70 & 0xFFFDFFFF);
        this->unk194.info.bumperFlags = 0;
        if ((gSaveContext.weekEventReg[23] & 2) != 0) {
            temp_t0->unkB08 = 1.0f;
            temp_v0_2 = this->unk1BF;
            this->unk1BE = 0;
            this->unk144.info.toucher.damage = *(&D_808B7150 + temp_v0_2);
            if (temp_v0_2 == 3) {
                this->unk194.info.toucherFlags = 6;
            } else if (temp_v0_2 == 2) {
                this->unk194.info.toucherFlags = 4;
            } else {
                this->unk194.info.toucherFlags = 3;
            }
        } else {
            temp_t0->unkB08 = 0.5f;
            temp_v0_3 = this->unk1BF;
            this->unk1BE = 1;
            this->unk144.info.toucher.damage = *(&D_808B714C + temp_v0_3);
            if (temp_v0_3 == 3) {
                this->unk194.info.toucherFlags = 4;
            } else if (temp_v0_3 == 2) {
                this->unk194.info.toucherFlags = 3;
            } else {
                this->unk194.info.toucherFlags = 2;
            }
        }
        if ((s32) temp_t0->unkADA < 0x1E) {
            this->unk1BE += 2;
            this->actionFunc = func_808B60D4;
            this->unk194.info.bumper.hitPos.y = 1;
            this->unk194.info.toucherFlags = 0xC;
            this->unk144.info.toucher.dmgFlags = 0x2000000;
            this->unk144.info.toucher.damage = 3;
        } else {
            this->actionFunc = func_808B5F68;
            this->unk194.info.bumper.hitPos.y = 8;
        }
        func_801A5CFC(0x182EU, temp_t0 + 0xEC, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
        this->unk1A4 = 0x3F800000;
        goto block_24;
    }
    this->actionFunc = func_808B5984;
block_24:
    this->actor.child = NULL;
}

void EnMThunder_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMThunder *this = (EnMThunder *) thisx;
    if (this->unk194.info.bumperFlags != 0) {
        func_80115D5C(globalCtx);
    }
    Collider_DestroyCylinder(globalCtx, &this->unk144);
    func_808B5890(globalCtx, 0U);
    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->unk190);
}

void func_808B5890(GlobalContext *arg1) {
    func_800FD2B4(arg1, arg1, 0x44548000, 0x3E4CCCCD, 0.0f);
}

void func_808B58CC(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp20;
    Vec3f *temp_a1;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (temp_v0->unkA70 & 0x20000) {
        if ((s32) temp_v0->unkADA >= 0x1E) {
            temp_a1 = temp_v0 + 0xEC;
            sp20 = temp_a1;
            func_801A5CFC(0x1823U, temp_a1, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
            func_801A5CFC(0x1818U, temp_a1, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((temp_v0->unkA6C & 0x1000) == 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_808B5984(EnMThunder *arg0, GlobalContext *arg1) {
    Actor *sp4C;
    Actor *sp48;
    Vec3f *sp44;
    Actor *temp_t0;
    Actor *temp_v0_4;
    Actor *temp_v1;
    Vec3f *temp_a1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_5;
    s32 temp_v0;
    u32 temp_f0_4;
    u8 temp_a1;
    u8 temp_v0_2;
    u8 temp_v0_3;
    Actor *phi_t0;
    Actor *phi_v1;
    Actor *phi_t0_2;
    f32 phi_f12;

    temp_t0 = arg1->actorCtx.actorList[2].first;
    temp_v1 = arg0->actor.child;
    arg0->unk1B0 = temp_t0->unkB08;
    arg0->actor.world.pos.x = temp_t0->unkBEC;
    arg0->actor.world.pos.y = temp_t0->unkBF0;
    arg0->actor.world.pos.z = temp_t0->unkBF4;
    arg0->actor.shape.rot.y = temp_t0->shape.rot.y + 0x8000;
    phi_t0 = temp_t0;
    phi_v1 = temp_v1;
    if ((arg0->unk194.info.bumperFlags == 0) && (temp_t0->unkB08 >= 0.1f)) {
        if ((gSaveContext.unk_3F28 != 0) || ((temp_v0 = (s32) (arg0->actor.params & 0xFF00) >> 8, (temp_v0 != 0)) && (sp48 = temp_v1, sp4C = temp_t0, (func_80115DB4(arg1, (s16) temp_v0, 4) == 0)))) {
            func_808B58CC(&arg0->actor, arg1);
            arg0->actionFunc = (void (*)(EnMThunder *, GlobalContext *)) func_808B58CC;
            arg0->unk194.info.elemType = 0;
            arg0->unk194.info.bumper.dmgFlags = 0;
            arg0->unk1A4 = 0;
            return;
        }
        arg0->unk194.info.bumperFlags = 1;
        phi_t0 = arg1->actorCtx.actorList[2].first;
        phi_v1 = arg0->actor.child;
        goto block_7;
    }
block_7:
    temp_f0 = phi_t0->unkB08;
    if (temp_f0 >= 0.1f) {
        sp48 = phi_v1;
        sp4C = phi_t0;
        temp_a1 = (s32) (temp_f0 * 150.0f) & 0xFF;
        func_8013ECE0(0.0f, temp_a1, 2U, temp_a1 & 0xFF);
    }
    phi_t0_2 = phi_t0;
    if (phi_t0->unkA70 & 0x20000) {
        if ((phi_v1 != 0) && (phi_v1->update != 0)) {
            phi_v1->parent = NULL;
        }
        temp_f0_2 = phi_t0->unkB08;
        if (temp_f0_2 <= 0.15f) {
            if ((temp_f0_2 >= 0.1f) && ((s32) phi_t0->unkADA >= 0x1E)) {
                temp_a1_2 = phi_t0 + 0xEC;
                sp44 = temp_a1_2;
                func_801A5CFC(0x1823U, temp_a1_2, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
                func_801A5CFC(0x1818U, temp_a1_2, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
            }
            Actor_MarkForDeath(&arg0->actor);
            return;
        }
        phi_t0->unkA70 = (s32) (phi_t0->unkA70 & 0xFFFDFFFF);
        if (((s32) (arg0->actor.params & 0xFF00) >> 8) != 0) {
            gSaveContext.unk_3F28 = 1;
        }
        if (phi_t0->unkB08 < 0.85f) {
            temp_v0_2 = arg0->unk1BF;
            arg0->unk1BE = 1;
            arg0->unk144.info.toucher.damage = *(&D_808B714C + temp_v0_2);
            if (temp_v0_2 == 3) {
                arg0->unk194.info.toucherFlags = 4;
            } else if (temp_v0_2 == 2) {
                arg0->unk194.info.toucherFlags = 3;
            } else {
                arg0->unk194.info.toucherFlags = 2;
            }
        } else {
            temp_v0_3 = arg0->unk1BF;
            arg0->unk1BE = 0;
            arg0->unk144.info.toucher.damage = *(&D_808B7150 + temp_v0_3);
            if (temp_v0_3 == 3) {
                arg0->unk194.info.toucherFlags = 6;
            } else if (temp_v0_3 == 2) {
                arg0->unk194.info.toucherFlags = 4;
            } else {
                arg0->unk194.info.toucherFlags = 3;
            }
        }
        if ((s32) phi_t0->unkADA < 0x1E) {
            arg0->unk1BE += 2;
            arg0->actionFunc = func_808B60D4;
            arg0->unk194.info.bumper.hitPos.y = 1;
        } else {
            arg0->actionFunc = func_808B5F68;
            arg0->unk194.info.bumper.hitPos.y = 8;
        }
        func_801A5CFC(*(&D_808B7154 + (arg0->unk1BE * 2)), phi_t0 + 0xEC, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
        arg0->unk1A4 = 0x3F800000;
        return;
    }
    if ((phi_t0->unkA6C & 0x1000) == 0) {
        temp_v0_4 = arg0->actor.child;
        if (temp_v0_4 != 0) {
            temp_v0_4->parent = NULL;
        }
        Actor_MarkForDeath(&arg0->actor);
        return;
    }
    temp_f0_3 = phi_t0->unkB08;
    phi_f12 = 0.15f;
    if (temp_f0_3 > 0.15f) {
        arg0->unk194.info.elemType = 0xFF;
        if (arg0->actor.child == 0) {
            sp4C = phi_t0;
            Actor_SpawnAsChild(&arg1->actorCtx, &arg0->actor, arg1, 0x7B, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, 2);
        }
        temp_f0_4 = arg0->unk194.info.bumper.dmgFlags;
        arg0->unk194.info.bumper.dmgFlags = (bitwise u32) ((bitwise f32) temp_f0_4 + ((((phi_t0->unkB08 - 0.15f) * 1.5f) - (bitwise f32) temp_f0_4) * 0.5f));
        phi_t0_2 = phi_t0;
        phi_f12 = 0.15f;
    } else if (temp_f0_3 > 0.1f) {
        arg0->unk194.info.elemType = (u8) (s32) ((temp_f0_3 - 0.1f) * 255.0f * 20.0f);
        arg0->unk1A4 = (bitwise u32) ((phi_t0->unkB08 - 0.1f) * 10.0f);
    } else {
        arg0->unk194.info.elemType = 0;
    }
    temp_f0_5 = phi_t0_2->unkB08;
    if (temp_f0_5 > 0.85f) {
        func_8019F900(phi_f12, phi_t0_2 + 0xEC, 2);
    } else if (phi_f12 < temp_f0_5) {
        func_8019F900(phi_f12, phi_t0_2 + 0xEC, 1);
    } else if (temp_f0_5 > 0.1f) {
        func_8019F900(phi_f12, phi_t0_2 + 0xEC, 0);
    }
    if (func_801690CC(arg1) != 0) {
        Actor_MarkForDeath(&arg0->actor);
    }
}

void func_808B5EEC(EnMThunder *arg0, GlobalContext *arg1) {
    f32 temp_f12;
    f32 temp_f2;
    u8 temp_v0;

    if ((s32) arg0->unk194.info.bumper.hitPos.y < 2) {
        temp_v0 = arg0->unk194.info.elemType;
        if ((s32) temp_v0 < 0x28) {
            arg0->unk194.info.elemType = 0;
        } else {
            arg0->unk194.info.elemType = temp_v0 - 0x28;
        }
    }
    temp_f2 = arg0->unk194.info.bumper.dmgFlags;
    temp_f12 = arg0->unk1A4;
    arg0->unk194.info.toucher.dmgFlags += 2.0f * arg0->unk1A8;
    if (temp_f2 < temp_f12) {
        arg0->unk194.info.bumper.dmgFlags = temp_f2 + ((temp_f12 - temp_f2) * 0.1f);
        return;
    }
    arg0->unk194.info.bumper.dmgFlags = temp_f12;
}

void func_808B5F68(EnMThunder *arg0, GlobalContext *arg1) {
    Actor *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    u16 temp_v0;
    u32 temp_f0;

    sp2C = arg1->actorCtx.actorList[2].first;
    if (Math_StepToF((f32 *) &arg0->unk194.base.atFlags, 0.0f, 0.0625f) != 0) {
        Actor_MarkForDeath(&arg0->actor);
    } else {
        Math_SmoothStepToF(&arg0->actor.scale.x, (f32) arg0->unk194.info.toucherFlags, 0.6f, 0.8f, 0.0f);
        Actor_SetScale(&arg0->actor, arg0->actor.scale.x);
        temp_a2 = &arg0->unk144;
        arg0->unk144.dim.radius = (s16) (s32) (arg0->actor.scale.x * 30.0f);
        sp28 = temp_a2;
        Collider_UpdateCylinder(&arg0->actor, temp_a2);
        CollisionCheck_SetAT(arg1, &arg1->colChkCtx, &temp_a2->base);
    }
    temp_v0 = (u16) arg0->unk194.info.bumper.hitPos.y;
    if ((s32) temp_v0 > 0) {
        arg0->actor.world.pos.x = sp2C->unkBEC;
        arg0->unk194.info.bumper.hitPos.y = temp_v0 - 1;
        arg0->actor.world.pos.z = sp2C->unkBF4;
    }
    temp_f0 = arg0->unk1A4;
    if ((bitwise f32) temp_f0 > 0.6f) {
        arg0->unk1A8 = 1.0f;
    } else {
        arg0->unk1A8 = (bitwise f32) temp_f0 * 1.6666666f;
    }
    func_808B5EEC(arg0, arg1);
    if (func_801690CC(arg1) != 0) {
        Actor_MarkForDeath(&arg0->actor);
    }
}

void func_808B60D4(EnMThunder *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 temp_f18;
    f32 temp_f6;
    s32 temp_f4;
    u16 temp_v0;
    u32 temp_f0;
    u8 temp_t6;
    f32 phi_f6;

    temp_f0 = arg0->unk1A4;
    if ((bitwise f32) temp_f0 > 0.9f) {
        arg0->unk1A8 = 1.0f;
    } else {
        arg0->unk1A8 = (bitwise f32) temp_f0 * 1.1111112f;
    }
    if (Math_StepToF((f32 *) &arg0->unk194.base.atFlags, 0.0f, 0.05f) != 0) {
        Actor_MarkForDeath(&arg0->actor);
    } else {
        temp_f18 = Math_CosS(arg0->actor.world.rot.x) * -80.0f;
        sp2C = temp_f18;
        arg0->actor.world.pos.x += sp2C * Math_SinS(arg0->actor.shape.rot.y);
        arg0->actor.world.pos.z += temp_f18 * Math_CosS(arg0->actor.shape.rot.y);
        temp_t6 = arg0->unk194.info.toucherFlags;
        temp_f6 = (f32) temp_t6;
        arg0->actor.world.pos.y += -80.0f * Math_SinS(arg0->actor.world.rot.x);
        phi_f6 = temp_f6;
        if ((s32) temp_t6 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        Math_SmoothStepToF(&arg0->actor.scale.x, phi_f6, 0.6f, 2.0f, 0.0f);
        Actor_SetScale(&arg0->actor, arg0->actor.scale.x);
        arg0->unk144.dim.pos.x = (s16) (s32) arg0->actor.world.pos.x;
        arg0->unk144.dim.radius = (s16) (s32) (arg0->actor.scale.x * 5.0f);
        arg0->unk144.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
        arg0->unk144.dim.pos.z = (s16) (s32) arg0->actor.world.pos.z;
        temp_f4 = (s32) ((Math_SinS(arg0->actor.shape.rot.y) * -5.0f * arg0->actor.scale.x) + arg0->actor.world.pos.x);
        arg0->unk144.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
        arg0->unk144.dim.pos.x = (s16) temp_f4;
        arg0->unk144.dim.pos.z = (s16) (s32) ((Math_CosS(arg0->actor.shape.rot.y) * -5.0f * arg0->actor.scale.z) + arg0->actor.world.pos.z);
        CollisionCheck_SetAT(arg1, &arg1->colChkCtx, &arg0->unk144.base);
    }
    temp_v0 = (u16) arg0->unk194.info.bumper.hitPos.y;
    if ((s32) temp_v0 > 0) {
        arg0->unk194.info.bumper.hitPos.y = temp_v0 - 1;
    }
    func_808B5EEC(arg0, arg1);
}

void func_808B6310(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (Math_StepToF(arg0 + 0x1A4, 0.0f, 0.0625f) != 0) {
        Actor_MarkForDeath(arg0);
    } else {
        Math_SmoothStepToF(&arg0->scale.x, (f32) arg0->unk1C1, 0.6f, 0.8f, 0.0f);
        Actor_SetScale(arg0, arg0->scale.x);
    }
    temp_f0 = arg0->unk1A4;
    if (temp_f0 > 0.6f) {
        arg0->unk1A8 = 1.0f;
    } else {
        arg0->unk1A8 = (f32) (temp_f0 * 1.6666666f);
    }
    func_808B5EEC((EnMThunder *) arg0, arg1);
}

void EnMThunder_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMThunder *this = (EnMThunder *) thisx;
    s32 temp_v0;
    u32 temp_f0;

    this->actionFunc(this, globalCtx);
    func_808B5890(globalCtx, this->unk194.info.bumper.dmgFlags);
    temp_f0 = this->unk1A4;
    temp_v0 = (u32) ((bitwise f32) temp_f0 * 255.0f) & 0xFF;
    Lights_PointNoGlowSetInfo((LightInfo *) &this->unk194, (s16) (s32) this->actor.world.pos.x, (s16) (s32) this->actor.world.pos.y, (s16) (s32) this->actor.world.pos.z, (u8) temp_v0, (u8) temp_v0, (u8) (u32) ((bitwise f32) temp_f0 * 100.0f), (s16) (s32) ((bitwise f32) temp_f0 * 800.0f));
}

void func_808B65BC(Actor *arg0) {
    f32 temp_f0;
    s32 temp_v0;

    arg0->unk1B8(arg0);
    temp_f0 = arg0->unk1A4;
    temp_v0 = (u32) (temp_f0 * 255.0f) & 0xFF;
    Lights_PointNoGlowSetInfo(arg0 + 0x194, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) temp_v0, (u8) temp_v0, (u8) (u32) (temp_f0 * 100.0f), (s16) (s32) (temp_f0 * 800.0f));
}

void EnMThunder_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMThunder *this = (EnMThunder *) thisx;
    Actor *spAC;
    s32 spA4;
    GraphicsContext *spA0;
    Gfx *sp98;
    Gfx *sp94;
    Gfx *sp90;
    Gfx *sp4C;
    Gfx *sp48;
    void *sp3C;
    Gfx *temp_v0;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    s32 temp_v1_5;
    u32 temp_f0;
    u8 temp_v0_2;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    u8 phi_v0;
    GraphicsContext *phi_t0;
    EnMThunder *phi_t2;
    s32 phi_t2_2;
    void *phi_t3;
    f32 phi_f14;

    spAC = globalCtx->actorCtx.actorList[2].first;
    temp_a0 = globalCtx->state.gfxCtx;
    spA0 = temp_a0;
    func_8012C2DC(temp_a0);
    Matrix_Scale(0.02f, 0.02f, 0.02f, 1);
    temp_v0 = spA0->polyXlu.p;
    spA0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    spA0 = spA0;
    sp98 = temp_v0;
    sp98->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = this->unk1BE;
    phi_v0 = temp_v0_2;
    phi_t0 = spA0;
    phi_t2 = this;
    if ((temp_v0_2 != 0) && (temp_v0_2 != 1)) {
        if ((temp_v0_2 != 2) && (temp_v0_2 != 3)) {

        } else {
            temp_v0_3 = spA0->polyXlu.p;
            spA0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDB060020;
            spA0 = spA0;
            sp90 = temp_v0_3;
            sp90->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x10, 0x40, 1, 0U, 0x1FF - ((s32) ((bitwise f32) this->unk194.info.toucher.dmgFlags * 10.0f) & 0x1FF), 0x20, 0x80);
            goto block_7;
        }
    } else {
        temp_v0_4 = spA0->polyXlu.p;
        spA0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDB060020;
        temp_f0 = this->unk194.info.toucher.dmgFlags;
        spA0 = spA0;
        sp94 = temp_v0_4;
        sp94->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0xFF - ((s32) ((bitwise f32) temp_f0 * 30.0f) & 0xFF), 0U, 0x40, 0x20, 1, 0xFF - ((s32) ((bitwise f32) temp_f0 * 20.0f) & 0xFF), 0U, 8, 8);
block_7:
        phi_v0 = this->unk1BE;
        phi_t0 = spA0;
        phi_t2 = this;
    }
    if (phi_v0 != 0) {
        if (phi_v0 != 1) {
            if (phi_v0 != 2) {
                if (phi_v0 != 3) {

                } else {
                    temp_v1 = phi_t0->polyXlu.p;
                    phi_t0->polyXlu.p = temp_v1 + 8;
                    temp_v1->words.w0 = 0xFA000080;
                    temp_v1->words.w1 = ((u32) (phi_t2->unk1A8 * 255.0f) & 0xFF) | 0xAAFFFF00;
                    temp_v0_5 = phi_t0->polyXlu.p;
                    phi_t0->polyXlu.p = temp_v0_5 + 8;
                    temp_v0_5->words.w1 = 0x64FF80;
                    temp_v0_5->words.w0 = 0xFB000000;
                    temp_v0_6 = phi_t0->polyXlu.p;
                    phi_t0->polyXlu.p = temp_v0_6 + 8;
                    temp_v0_6->words.w0 = 0xDE000000;
                    temp_v0_6->words.w1 = &D_04027CA0;
                }
            } else {
                temp_v1_2 = phi_t0->polyXlu.p;
                phi_t0->polyXlu.p = temp_v1_2 + 8;
                temp_v1_2->words.w0 = 0xFA000080;
                temp_v1_2->words.w1 = ((u32) (phi_t2->unk1A8 * 255.0f) & 0xFF) | 0xFFFF00;
                temp_v0_7 = phi_t0->polyXlu.p;
                phi_t0->polyXlu.p = temp_v0_7 + 8;
                temp_v0_7->words.w1 = 0xC8C8C880;
                temp_v0_7->words.w0 = 0xFB000000;
                temp_v0_8 = phi_t0->polyXlu.p;
                phi_t0->polyXlu.p = temp_v0_8 + 8;
                temp_v0_8->words.w0 = 0xDE000000;
                temp_v0_8->words.w1 = &D_04027CA0;
            }
        } else {
            temp_v1_3 = phi_t0->polyXlu.p;
            phi_t0->polyXlu.p = temp_v1_3 + 8;
            temp_v1_3->words.w0 = 0xFA000080;
            temp_v1_3->words.w1 = ((u32) (phi_t2->unk1A8 * 255.0f) & 0xFF) | 0xAAFFFF00;
            temp_v0_9 = phi_t0->polyXlu.p;
            phi_t0->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = &D_04025850;
            temp_v0_9->words.w0 = 0xDE000000;
            temp_v0_10 = phi_t0->polyXlu.p;
            phi_t0->polyXlu.p = temp_v0_10 + 8;
            temp_v0_10->words.w1 = &D_04025970;
            temp_v0_10->words.w0 = 0xDE000000;
        }
    } else {
        temp_v1_4 = phi_t0->polyXlu.p;
        phi_t0->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xFA000080;
        temp_v1_4->words.w1 = ((u32) (phi_t2->unk1A8 * 255.0f) & 0xFF) | ~0x55FF;
        temp_v0_11 = phi_t0->polyXlu.p;
        phi_t0->polyXlu.p = temp_v0_11 + 8;
        temp_v0_11->words.w1 = &D_04025DD0;
        temp_v0_11->words.w0 = 0xDE000000;
        temp_v0_12 = phi_t0->polyXlu.p;
        phi_t0->polyXlu.p = temp_v0_12 + 8;
        temp_v0_12->words.w0 = 0xDE000000;
        temp_v0_12->words.w1 = &D_04025EF0;
    }
    spA0 = phi_t0;
    SysMatrix_InsertMatrix(spAC + 0xCC4, 0);
    if (this->unk1BF == 2) {
        spA0 = phi_t0;
        SysMatrix_InsertTranslation(0.0f, 220.0f, 0.0f, 1);
        Matrix_Scale(-1.2f, -0.8f, -0.6f, 1);
        SysMatrix_InsertXRotation_s(0x4000, 1);
    } else {
        spA0 = phi_t0;
        SysMatrix_InsertTranslation(0.0f, 220.0f, 0.0f, 1);
        Matrix_Scale(-0.7f, -0.6f, -0.4f, 1);
        SysMatrix_InsertXRotation_s(0x4000, 1);
    }
    if (this->unk1B0 >= 0.85f) {
        temp_v0_13 = spA0->polyXlu.p;
        spA0->polyXlu.p = temp_v0_13 + 8;
        temp_v0_13->words.w0 = 0xFA000080;
        temp_v0_13->words.w1 = this->unk194.info.elemType | ~0x55FF;
        temp_v0_14 = spA0->polyXlu.p;
        spA0->polyXlu.p = temp_v0_14 + 8;
        temp_v0_14->words.w1 = 0xFF640080;
        temp_v0_14->words.w0 = 0xFB000000;
        phi_t2_2 = 0x28;
        phi_t3 = globalCtx + 0x18000;
        phi_f14 = (*(&D_808B715C + ((globalCtx->gameplayFrames & 7) * 4)) * 6.0f) + 1.0f;
    } else {
        temp_v0_15 = spA0->polyXlu.p;
        spA0->polyXlu.p = temp_v0_15 + 8;
        temp_v0_15->words.w0 = 0xFA000080;
        temp_v0_15->words.w1 = this->unk194.info.elemType | 0xAAFFFF00;
        temp_v0_16 = spA0->polyXlu.p;
        spA0->polyXlu.p = temp_v0_16 + 8;
        temp_v0_16->words.w1 = 0x64FF80;
        temp_v0_16->words.w0 = 0xFB000000;
        phi_t2_2 = 0x14;
        phi_t3 = globalCtx + 0x18000;
        phi_f14 = (2.0f * *(&D_808B715C + ((globalCtx->gameplayFrames & 7) * 4))) + 1.0f;
    }
    spA0 = spA0;
    spA4 = phi_t2_2;
    sp3C = phi_t3;
    Matrix_Scale(1.0f, phi_f14, phi_f14, 1);
    temp_v0_17 = spA0->polyXlu.p;
    spA0->polyXlu.p = temp_v0_17 + 8;
    temp_v0_17->words.w0 = 0xDA380003;
    sp3C = phi_t3;
    spA4 = phi_t2_2;
    spA0 = spA0;
    sp4C = temp_v0_17;
    sp4C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_18 = spA0->polyXlu.p;
    spA0->polyXlu.p = temp_v0_18 + 8;
    temp_v0_18->words.w0 = 0xDB060024;
    temp_v1_5 = phi_t3->unk840;
    spA0 = spA0;
    sp48 = temp_v0_18;
    sp48->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (temp_v1_5 * 5) & 0xFF, 0U, 0x20, 0x20, 1, (temp_v1_5 * 0x14) & 0xFF, (temp_v1_5 * phi_t2_2) & 0xFF, 8, 8);
    temp_v0_19 = spA0->polyXlu.p;
    spA0->polyXlu.p = temp_v0_19 + 8;
    temp_v0_19->words.w1 = (u32) &D_040268F0;
    temp_v0_19->words.w0 = 0xDE000000;
}

