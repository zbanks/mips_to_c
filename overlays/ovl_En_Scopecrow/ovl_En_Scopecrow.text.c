f32 func_800C3FA0(CollisionContext *, ? *, f32 *);  /* extern */
void func_80BCD000(EnScopecrow *arg0, GlobalContext *arg1); /* static */
s32 func_80BCD09C(s16 arg0, s16);                   /* static */
s32 func_80BCD1AC(s16 arg0);                        /* static */
void func_80BCD2BC(EnScopecrow *arg0, GlobalContext *arg1); /* static */
s32 func_80BCD334(EnScopecrow *arg0, u8 *arg1, s32 arg2); /* static */
f32 func_80BCD4D0(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3); /* static */
extern AnimationHeader D_060000F0;
extern FlexSkeletonHeader D_060010C0;
static ? D_80BCDB70;                                /* unable to generate initializer */
static ColliderJntSphInit D_80BCDB94;               /* type too large by 4; unable to generate initializer */
static ? *D_80BCDBA0 = &D_80BCDB70;

typedef struct EnScopecrow {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnScopecrow *, GlobalContext *);
    /* 0x018C */ Vec3s unk18C;                      /* inferred */
    /* 0x0192 */ char pad192[0x30];                 /* maybe part of unk18C[9]? */
    /* 0x01C2 */ Vec3s unk1C2;                      /* inferred */
    /* 0x01C8 */ char pad1C8[0x30];                 /* maybe part of unk1C2[9]? */
    /* 0x01F8 */ u8 *unk1F8;                        /* inferred */
    /* 0x01FC */ s32 unk1FC;                        /* inferred */
    /* 0x0200 */ ColliderJntSph unk200;             /* inferred */
    /* 0x0220 */ ColliderJntSphElement unk220;      /* inferred */
    /* 0x0260 */ s16 unk260;                        /* inferred */
    /* 0x0262 */ s16 unk262;                        /* inferred */
    /* 0x0264 */ s16 unk264;                        /* inferred */
    /* 0x0266 */ char pad266[0x2];                  /* maybe part of unk264[2]? */
} EnScopecrow;                                      /* size 0x268 */

void func_80BCD000(EnScopecrow *arg0, GlobalContext *arg1) {
    arg0->unk200.elements->unk30 = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk200.elements->dim.worldSphere.center.y = (s16) (s32) ((f32) D_80BCDBA0->unk1C + arg0->actor.world.pos.y);
    arg0->unk200.elements->dim.worldSphere.center.z = (s16) (s32) arg0->actor.world.pos.z;
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x200);
}

s32 func_80BCD09C(s16 arg0) {
    switch (arg0) {
    case 0:
        if ((gSaveContext.weekEventReg[53] & 4) != 0) {
            return 1;
        }
        return 0;
    case 1:
        if ((gSaveContext.weekEventReg[53] & 0x80) != 0) {
            return 1;
        }
        return 0;
    case 2:
        if ((gSaveContext.weekEventReg[54] & 1) != 0) {
            return 1;
        }
        return 0;
    case 3:
        if ((gSaveContext.weekEventReg[54] & 2) != 0) {
            return 1;
        }
        return 0;
    case 4:
        if ((gSaveContext.weekEventReg[54] & 4) != 0) {
            return 1;
        }
        return 0;
    case 5:
        if ((gSaveContext.weekEventReg[54] & 8) != 0) {
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}

s32 func_80BCD1AC(s16 arg0) {
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;

    switch (arg0) {
    case 0:
        temp_v1 = gSaveContext.weekEventReg[53];
        if ((temp_v1 & 4) == 0) {
            gSaveContext.weekEventReg[53] = temp_v1 | 4;
            return 1;
        }
    default:
        return 0;
    case 1:
        temp_v1_2 = gSaveContext.weekEventReg[53];
        if ((temp_v1_2 & 0x80) == 0) {
            gSaveContext.weekEventReg[53] = temp_v1_2 | 0x80;
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    case 2:
        temp_v1_3 = gSaveContext.weekEventReg[54];
        if ((temp_v1_3 & 1) == 0) {
            gSaveContext.weekEventReg[54] = temp_v1_3 | 1;
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    case 3:
        temp_v1_4 = gSaveContext.weekEventReg[54];
        if ((temp_v1_4 & 2) == 0) {
            gSaveContext.weekEventReg[54] = temp_v1_4 | 2;
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    case 4:
        temp_v1_5 = gSaveContext.weekEventReg[54];
        if ((temp_v1_5 & 4) == 0) {
            gSaveContext.weekEventReg[54] = temp_v1_5 | 4;
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    case 5:
        temp_v1_6 = gSaveContext.weekEventReg[54];
        if ((temp_v1_6 & 8) == 0) {
            gSaveContext.weekEventReg[54] = temp_v1_6 | 8;
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    }
}

void func_80BCD2BC(EnScopecrow *arg0, GlobalContext *arg1) {
    Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, 0x25A, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) (s32) arg0->actor.shape.rot.x, (s16) (s32) arg0->actor.shape.rot.y, (s16) (s32) arg0->actor.shape.rot.z, (s32) arg0->actor.params, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL);
}

s32 func_80BCD334(EnScopecrow *arg0, u8 *arg1, s32 arg2) {
    void *sp5C;
    s32 sp58;
    s32 sp50;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    Vec3f sp30;
    s32 sp28;
    s32 temp_a3;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk4);
    temp_a2 = arg1->unk0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f(&sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk6 - sp5C->unk0);
        phi_f14 = (f32) (sp5C->unkA - sp5C->unk4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk-6 - temp_v0_3->unk-C);
            phi_f14 = (f32) (temp_v0_3->unk-2 - temp_v0_3->unk-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk6 - temp_v0_2->unk-6);
            phi_f14 = (f32) (temp_v0_2->unkA - temp_v0_2->unk-2);
        }
    }
    func_8017B7F8(&sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->actor.world.pos.x * sp44) + (sp40 * arg0->actor.world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

f32 func_80BCD4D0(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 *temp_v1;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk4);
        sp20 = (f32) temp_v1->unk0;
        sp24 = (f32) temp_v1->unk2;
        sp28 = (f32) temp_v1->unk4;
    }
    arg3->unk2 = Math_Vec3f_Yaw(arg2, (Vec3f *) &sp20);
    arg3->unk0 = Math_Vec3f_Pitch(arg2, (Vec3f *) &sp20);
    return sp24 - arg2->y;
}

void func_80BCD590(EnScopecrow *this, GlobalContext *globalCtx) {
    Vec3f sp1C;

    func_80169474(globalCtx, &this->actor.world.pos, &sp1C);
    if ((sp1C.x >= 130.0f) && (sp1C.x < 190.0f) && (sp1C.y >= 90.0f) && (sp1C.y < 150.0f)) {
        this->actor.draw = EnScopecrow_Draw;
        this->actionFunc = func_80BCD640;
    }
}

void func_80BCD640(EnScopecrow *this, GlobalContext *globalCtx) {
    s16 sp32;
    s16 sp30;
    u8 *sp2C;
    s32 temp_v0;
    u8 *temp_t6;

    temp_t6 = this->unk1F8;
    sp2C = temp_t6;
    if (temp_t6 != 0) {
        func_80BCD4D0(temp_t6, this->unk1FC, &this->actor.world.pos, &sp30);
        if ((this->actor.bgCheckFlags & 8) != 0) {
            sp32 = this->actor.wallYaw;
        }
        Math_SmoothStepToS(&this->actor.world.rot.y, sp32, 4, 0x3E8, (s16) 1);
        this->actor.shape.rot.y = this->actor.world.rot.y;
        Math_SmoothStepToS(&this->actor.world.rot.x, (s16) ((s32) sp30 * -1), 4, 0x3E8, (s16) 1);
        if (func_80BCD334(this, this->unk1F8, this->unk1FC) != 0) {
            if ((this->unk262 == this->unk1FC) && (func_80BCD1AC(this->unk260) != 0)) {
                func_80BCD2BC(this, globalCtx);
            }
            temp_v0 = this->unk1FC;
            if (temp_v0 >= (*this->unk1F8 - 1)) {
                Actor_MarkForDeath(&this->actor);
            } else {
                this->unk1FC = temp_v0 + 1;
            }
        }
    }
    Math_ApproachF(&this->actor.speedXZ, 6.0f, 0.2f, 1.0f);
    Actor_SetVelocityAndMoveXYRotation(&this->actor);
    this->unk264 += 0x1000;
    this->actor.shape.yOffset = Math_SinS(this->unk264) * 500.0f;
}

void EnScopecrow_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnScopecrow *this = (EnScopecrow *) thisx;
    ? sp4C;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ColliderJntSph *sp38;
    ColliderJntSph *temp_a1;
    f32 *temp_a2_2;
    f32 temp_f0;
    s16 *temp_v1;
    s16 temp_a2;
    s16 temp_v0_2;
    s16 temp_v0_4;
    u8 *temp_v0;
    u8 *temp_v0_3;

    this->unk260 = this->actor.params & 0x1F;
    temp_a2 = this->unk260;
    if (((s32) temp_a2 < 0) || ((s32) temp_a2 >= 6)) {
        this->unk260 = 0;
    }
    if (func_80BCD09C(this->unk260, this->unk260) != 0) {
        temp_v0 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
        this->unk1F8 = temp_v0;
        this->unk262 = (s16) ((s32) (this->actor.params & 0x3E0) >> 5);
        if (temp_v0 != 0) {
            temp_v0_2 = this->unk262;
            if (((s32) temp_v0_2 <= 0) || ((*this->unk1F8 - 1) < (s32) temp_v0_2)) {
                this->unk262 = *this->unk1F8 - 1;
            }
            temp_a2_2 = &sp3C;
            temp_v1 = (this->unk262 * 6) + Lib_SegmentedToVirtual(this->unk1F8->unk4);
            sp3C = (f32) temp_v1->unk0;
            sp40 = (f32) temp_v1->unk2;
            sp44 = (f32) temp_v1->unk4;
            this->actor.world.pos.x = temp_a2_2->unk0;
            this->actor.world.pos.y = temp_a2_2->unk4;
            this->actor.world.pos.z = temp_a2_2->unk8;
            temp_f0 = func_800C3FA0(&globalCtx->colCtx, &sp4C, temp_a2_2);
            this->actor.world.pos.y = temp_f0;
            if (temp_f0 == -32000.0f) {
                Actor_MarkForDeath(&this->actor);
            }
            func_80BCD2BC(this, globalCtx);
            Actor_MarkForDeath(&this->actor);
            return;
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if ((globalCtx->actorCtx.unk5 & 2) != 0) {
        SkelAnime_InitSV(globalCtx, &this->unk144, &D_060010C0, &D_060000F0, &this->unk18C, &this->unk1C2, 9);
        ActorShape_Init(&this->actor.shape, 2000.0f, func_800B3FC0, 20.0f);
        temp_a1 = &this->unk200;
        sp38 = temp_a1;
        Collider_InitJntSph(globalCtx, temp_a1);
        Collider_InitAndSetJntSph(globalCtx, temp_a1, &this->actor, &D_80BCDB94, &this->unk220);
        this->unk200.elements->dim.worldSphere.radius = D_80BCDBA0->unk20;
        Actor_SetScale(&this->actor, 0.03f);
        temp_v0_3 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
        this->unk1F8 = temp_v0_3;
        this->unk262 = (s16) ((s32) (this->actor.params & 0x3E0) >> 5);
        if (temp_v0_3 != 0) {
            temp_v0_4 = this->unk262;
            if (((s32) temp_v0_4 <= 0) || ((*this->unk1F8 - 1) < (s32) temp_v0_4)) {
                this->unk262 = *this->unk1F8 - 1;
            }
            this->actor.draw = NULL;
            this->actor.gravity = 0.0f;
            this->actionFunc = func_80BCD590;
            return;
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void EnScopecrow_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnScopecrow *this = (EnScopecrow *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk200);
}

void EnScopecrow_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnScopecrow *this = (EnScopecrow *) thisx;
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_80BCD000(this, globalCtx);
}

void EnScopecrow_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnScopecrow *this = (EnScopecrow *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, NULL, &this->actor);
}

