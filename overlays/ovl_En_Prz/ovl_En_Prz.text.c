void func_80A75F18(EnPrz *arg0, s32 arg1, ?);       /* static */
? func_80A75FA4(EnPrz *arg0, GlobalContext *arg1);  /* static */
void func_80A76070(EnPrz *arg0, s16 arg1, GlobalContext *arg2); /* static */
s32 func_80A762C0(EnPrz *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80A76388(EnPrz *arg0, EnPrz *);           /* static */
void func_80A763E8(EnPrz *arg0, GlobalContext *arg1); /* static */
void func_80A76604(EnPrz *arg0, GlobalContext *arg1); /* static */
void func_80A76634(EnPrz *arg0, GlobalContext *arg1); /* static */
void func_80A76748(EnPrz *arg0);                    /* static */
void func_80A767A8(EnPrz *arg0, GlobalContext *arg1); /* static */
void func_80A76A1C(Actor *arg0);                    /* static */
void func_80A76B14(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A76F70(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80A76FCC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern FlexSkeletonHeader D_06004188;
extern AnimationHeader D_06004340;
static DamageTable D_80A771C0 = {
    {
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF2,
        0,
        0,
        0xF1,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ? D_80A771E0;                                /* unable to generate initializer */
static ColliderCylinderInit D_80A771F4 = {
    {0xA, 0x11, 9, 0, 0x10, 1},
    {4, {0x20000000, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
    {0xA, 0xA, 0, {0, 0, 0}},
};
static ? D_80A77240;                                /* unable to generate initializer */
static ? D_80A77248;                                /* unable to generate initializer */
static ? D_80A7724C;                                /* unable to generate initializer */

typedef struct EnPrz {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x18];                 /* maybe part of unk188[5]? */
    /* 0x01A6 */ Vec3s unk1A6;                      /* inferred */
    /* 0x01AC */ char pad1AC[0x18];                 /* maybe part of unk1A6[5]? */
    /* 0x01C4 */ void (*actionFunc)(EnPrz *, GlobalContext *);
    /* 0x01C8 */ u8 unk1C8;                         /* inferred */
    /* 0x01C9 */ char pad1C9[0x3];                  /* maybe part of unk1C8[4]? */
    /* 0x01CC */ Vec3f unk1CC;                      /* inferred */
    /* 0x01D8 */ Vec3f unk1D8;                      /* inferred */
    /* 0x01E4 */ s16 unk1E4;                        /* inferred */
    /* 0x01E6 */ s16 unk1E6;                        /* inferred */
    /* 0x01E8 */ s16 unk1E8;                        /* inferred */
    /* 0x01EA */ s16 unk1EA;                        /* inferred */
    /* 0x01EC */ s16 unk1EC;                        /* inferred */
    /* 0x01EE */ s16 unk1EE;                        /* inferred */
    /* 0x01F0 */ char pad1F0[0x2];                  /* maybe part of unk1EE[2]? */
    /* 0x01F2 */ s16 unk1F2;                        /* inferred */
    /* 0x01F4 */ char pad1F4[0xE];                  /* maybe part of unk1F2[8]? */
    /* 0x0202 */ s16 unk202;                        /* inferred */
    /* 0x0204 */ s32 unk204;                        /* inferred */
    /* 0x0208 */ f32 unk208;                        /* inferred */
    /* 0x020C */ f32 unk20C;                        /* inferred */
    /* 0x0210 */ f32 unk210;                        /* inferred */
    /* 0x0214 */ f32 unk214;                        /* inferred */
    /* 0x0218 */ f32 unk218;                        /* inferred */
    /* 0x021C */ char pad21C[0x4];                  /* maybe part of unk218[2]? */
    /* 0x0220 */ EnPrz *unk220;                     /* inferred */
    /* 0x0224 */ ColliderCylinder unk224;           /* inferred */
} EnPrz;                                            /* size 0x270 */

void EnPrz_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnPrz *this = (EnPrz *) thisx;
    u32 temp_t8;

    this->unk20C = 0.01f;
    this->unk1E4 = this->actor.world.rot.y;
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.targetMode = 3;
    this->unk1E8 = 0xFF;
    this->actor.hintId = 0x5B;
    this->actor.colChkInfo.damageTable = &D_80A771C0;
    this->actor.colChkInfo.health = 1;
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06004188, &D_06004340, &this->unk188, &this->unk1A6, 5);
    temp_t8 = this->actor.flags | 0x8000000;
    this->actor.flags = temp_t8;
    this->unk1E6 = this->actor.params & 0xFF;
    this->actor.flags = temp_t8 & ~1;
    this->actor.shape.yOffset = 500.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk224, &this->actor, &D_80A771F4);
    Math_Vec3f_Copy(&this->unk1D8, &this->actor.world.pos);
    this->unk220 = this;
    this->unk1EC = 0xFF;
    this->unk202 = (s16) (s32) randPlusMinusPoint5Scaled(((f32) this->unk1E6 * 100.0f) + 1000.0f);
    func_80A76388(this);
}

void EnPrz_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPrz *this = (EnPrz *) thisx;

}

void func_80A75F18(EnPrz *arg0, s32 arg1) {
    AnimationHeaderCommon **sp28;
    AnimationHeaderCommon **temp_v1;

    arg0->unk204 = arg1;
    temp_v1 = (arg1 * 4) + &D_80A77240;
    sp28 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) *(&D_80A77248 + arg1), -2.0f);
}

? func_80A75FA4(EnPrz *arg0, GlobalContext *arg1) {
    WaterBox *sp2C;
    f32 temp_f0;
    f32 temp_f0_2;

    if (func_800CA1AC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, arg0 + 0x210, &sp2C) != 0) {
        temp_f0 = (f32) gGameInfo->data[2410] + (arg0->unk210 - 10.0f);
        if (temp_f0 < arg0->actor.world.pos.y) {
            arg0->unk1D8.y = temp_f0;
            return 1;
        }
        goto block_5;
    }
    temp_f0_2 = arg0->actor.floorHeight + 35.0f;
    if (arg0->actor.world.pos.y < temp_f0_2) {
        arg0->unk1D8.y = temp_f0_2;
        return 2;
    }
block_5:
    return 0;
}

void func_80A76070(EnPrz *arg0, s16 arg1, GlobalContext *arg2) {
    f32 sp28;
    s16 temp_v0;
    s32 temp_f16;
    s32 temp_f16_2;
    s32 phi_s0;
    s32 phi_s0_2;
    s16 phi_s0_3;

    temp_v0 = arg0->actor.world.rot.y;
    temp_f16 = (s32) ((f32) (s16) (arg1 - temp_v0) * 0.01f);
    phi_s0 = (s32) (s16) temp_f16;
    if ((s32) (s16) temp_f16 >= 0x65) {
        phi_s0 = 0x64;
    }
    phi_s0_2 = phi_s0;
    if (phi_s0 < -0x64) {
        phi_s0_2 = -0x64;
    }
    sp28 = fabsf((f32) temp_v0 - (f32) arg1);
    arg1 = arg1;
    if (sp28 < (randPlusMinusPoint5Scaled(20.0f) + 100.0f)) {
        Math_ApproachZeroF(arg0 + 0x218, 0.5f, 20.0f);
    } else {
        Math_ApproachF(arg0 + 0x218, (f32) phi_s0_2, 0.5f, 5.0f);
    }
    temp_f16_2 = (s32) (fabsf(arg0->unk218) * 0.1f);
    phi_s0_3 = (s16) temp_f16_2;
    if ((s32) (s16) temp_f16_2 < 2) {
        phi_s0_3 = 2;
    }
    Math_SmoothStepToS(arg0 + 0x32, arg1, phi_s0_3, (s16) (arg0->unk202 + 0x1388), (s16) 0);
    func_80A75FA4(arg0, arg2);
    Math_ApproachF(arg0 + 0x28, arg0->unk1D8.y, 0.5f, 1.0f);
    if (fabsf(arg0->actor.world.pos.y - arg0->unk208) > 4.0f) {
        Math_SmoothStepToS(arg0 + 0x30, (s16) (s32) ((f32) Math_Vec3f_Pitch(arg0 + 0x24, arg0 + 0x1D8) * 0.5f), 1, (s16) (gGameInfo->data[2448] + 0x1F4), (s16) 0);
        return;
    }
    Math_SmoothStepToS(arg0 + 0x30, 0, 1, (s16) (gGameInfo->data[2452] + 0xBB8), (s16) 0);
}

s32 func_80A762C0(EnPrz *arg0, GlobalContext *arg1) {
    CollisionPoly *sp54;
    Vec3f sp48;
    u32 sp44;
    Vec3f sp38;
    Vec3f *sp30;
    Vec3f *temp_a1;

    temp_a1 = arg0 + 0x24;
    sp30 = temp_a1;
    Math_Vec3f_Copy(&sp38, temp_a1);
    sp38.x += Math_SinS(arg0->actor.world.rot.y) * 40.0f;
    sp38.z += Math_CosS(arg0->actor.world.rot.y) * 40.0f;
    if (func_800C55C4(arg1 + 0x830, temp_a1, &sp38, &sp48, &sp54, 1U, 0U, 0U, 1U, &sp44) != 0) {
        return 1;
    }
    return 0;
}

void func_80A76388(EnPrz *arg0) {
    arg0->actor.speedXZ = randPlusMinusPoint5Scaled(1.0f) + 4.0f;
    func_80A75F18(arg0, 0);
    arg0->unk1EA = 1;
    arg0->actionFunc = func_80A763E8;
}

void func_80A763E8(EnPrz *arg0, GlobalContext *arg1) {
    void *sp3C;
    Vec3f *sp24;
    Vec3f *temp_a1;
    f32 temp_f12;
    f32 temp_f2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v1 = arg0->actor.parent;
    if (arg0 != arg0->unk220) {
        if (((arg1->actorCtx.actorList[2].first->unkA6C * 0x10) < 0) && (arg0->unk1F2 == 0)) {
            func_80A76748(arg0);
            return;
        }
        sp3C = temp_v1;
        if (func_80A762C0(arg0) != 0) {
            func_80A76604(arg0, arg1);
            return;
        }
        temp_v0 = arg0->unk220;
        if ((temp_v0 != 0) && (temp_v0->update == 0)) {
            arg0->unk220 = arg0->actor.parent;
        }
        if ((arg0->unk1EE == 0) && (arg0->unk1F2 == 0)) {
            arg0->unk214 = randPlusMinusPoint5Scaled(40.0f);
            arg0->unk1D8.x += Math_SinS((s16) (arg0->unk220->world.rot.y + 0x8000)) * arg0->unk214;
            temp_v0_2 = arg0->unk220;
            arg0->unk1D8.y = randPlusMinusPoint5Scaled(40.0f) + (temp_v0_2->world.pos.y + 40.0f);
            arg0->unk1D8.z += Math_CosS((s16) (temp_v0_2->world.rot.y + 0x8000)) * arg0->unk214;
            arg0->unk1EE = Rand_S16Offset(0x14, 0x1E);
        } else {
            temp_f2 = arg0->actor.world.pos.x - temp_v1->world.pos.x;
            temp_f12 = arg0->actor.world.pos.z - temp_v1->world.pos.z;
            if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) > 100.0f) {
                Math_Vec3f_Copy(arg0 + 0x1D8, temp_v1 + 0x24);
            }
        }
        temp_a1 = arg0 + 0x1D8;
        sp24 = temp_a1;
        if ((Rand_ZeroOne() < 0.1f) && (arg0->unk1C8 == 0)) {
            arg0->unk1C8 = 1;
        }
        func_80A76070(arg0, Math_Vec3f_Yaw(arg0 + 0x24, temp_a1), arg1);
        // Duplicate return node #18. Try simplifying control flow for better match
    }
}

void func_80A76604(EnPrz *arg0, GlobalContext *arg1) {
    arg0->unk1EE = 0;
    arg0->unk1E4 = arg0->actor.world.rot.y + 0x4000;
    arg0->unk1EA = 2;
    arg0->actionFunc = func_80A76634;
}

void func_80A76634(EnPrz *arg0, GlobalContext *arg1) {
    void *sp24;
    GlobalContext *temp_a2;
    s16 temp_v0;
    s32 phi_v1;

    temp_a2 = arg1;
    sp24 = temp_a2->actorCtx.actorList[2].first;
    arg1 = temp_a2;
    func_80A76070(arg0, arg0->unk1E4, temp_a2);
    temp_v0 = arg0->actor.world.rot.y - arg0->unk1E4;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 < 0x100) {
        if (func_80A762C0(arg0, arg1, arg1) != 0) {
            arg0->unk1E4 += 0x1500;
            arg0->unk1E4 += (s32) Rand_ZeroFloat(5000.0f);
            return;
        }
        if (((sp24->unkA6C * 0x10) < 0) && (sp24->floorHeight < 30.0f)) {
            arg0->actionFunc = func_80A763E8;
            return;
        }
        arg0->unk1EE = 0xA;
        arg0->unk1EA = 1;
        arg0->actionFunc = func_80A763E8;
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_80A76748(EnPrz *arg0) {
    arg0->actor.speedXZ = randPlusMinusPoint5Scaled(1.0f) + 3.0f;
    arg0->unk1EE = 0;
    arg0->unk1EA = 3;
    arg0->actionFunc = func_80A767A8;
    arg0->unk144.animPlaybackSpeed = 2.0f;
}

void func_80A767A8(EnPrz *arg0, GlobalContext *arg1) {
    void *sp3C;
    Actor *sp38;
    u8 sp2B;
    Vec3f *sp24;
    Actor *temp_v0;
    f32 temp_f12;
    f32 temp_f2;

    sp3C = arg1->actorCtx.actorList[2].first;
    sp38 = arg0->actor.parent;
    if (func_80A762C0(arg0) != 0) {
        func_80A75F18(arg0, 0);
        arg0->actor.speedXZ = randPlusMinusPoint5Scaled(1.0f) + 4.0f;
        func_80A76604(arg0, arg1);
        return;
    }
    temp_v0 = arg0->actor.parent;
    temp_f2 = sp3C->world.pos.x - temp_v0->home.pos.x;
    temp_f12 = sp3C->world.pos.z - temp_v0->home.pos.z;
    if (((sp3C->unkA6C * 0x10) >= 0) || (sp38->unk2C8 < sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)))) {
        arg0->unk1F2 = 0x64;
        arg0->unk144.animPlaybackSpeed = 1.0f;
        func_80A76388((bitwise EnPrz *) temp_f12, arg0);
        return;
    }
    if ((arg0->actor.xzDistToPlayer < 200.0f) && (fabsf(sp3C->world.pos.y - arg0->actor.world.pos.y) < 80.0f)) {
        if (arg0->unk204 != 1) {
            func_80A75F18((bitwise EnPrz *) temp_f12, (s32) arg0, 1);
        }
        arg0->unk144.animPlaybackSpeed = 1.0f;
    } else {
        if (arg0->unk204 != 0) {
            func_80A75F18((bitwise EnPrz *) temp_f12, (s32) arg0, 0);
        }
        arg0->unk144.animPlaybackSpeed = 2.0f;
    }
    if (arg0->unk1EE == 0) {
        arg0->unk1EE = Rand_S16Offset(2, 3);
        Math_Vec3f_Copy(&arg0->unk1D8, sp3C + 0x24);
    }
    sp24 = &arg0->unk1D8;
    if ((Rand_ZeroOne() < 0.1f) && (arg0->unk1C8 == 0)) {
        arg0->unk1C8 = 1;
    }
    sp2B = gSaveContext.playerForm;
    arg0->unk1D8.y = randPlusMinusPoint5Scaled((2.0f * (f32) arg0->unk1E6) + 1.0f) + (sp3C->world.pos.y + *(&D_80A771E0 + (sp2B * 4)));
    func_80A76070(arg0, Math_Vec3f_Yaw(&arg0->actor.world.pos, sp24), arg1);
}

void func_80A76A1C(Actor *arg0) {
    s32 temp_t7;

    arg0->unk1E8 = 0;
    temp_t7 = arg0->flags | 0x8000000;
    arg0->flags = temp_t7;
    arg0->flags = temp_t7 & ~1;
    Audio_PlayActorSound2(arg0, 0x3978U);
    arg0->unk1EE = Rand_S16Offset(0x64, 0x1E);
    arg0->unk1FC = 0x4000;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->unk1FC = -0x4000;
    }
    arg0->unk1FE = (s16) arg0->world.rot.y;
    arg0->speedXZ = Rand_ZeroFloat(0.5f);
    arg0->world.rot.y = (s16) (s32) randPlusMinusPoint5Scaled(32768.0f);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x1E);
    arg0->unk1EE = 0x32;
    func_80A75F18((EnPrz *) arg0, 0);
    arg0->unk1EA = 7;
    arg0->unk1C4 = func_80A76B14;
}

void func_80A76B14(Actor *arg0, GlobalContext *arg1) {
    WaterBox *sp7C;
    Vec3f sp6C;
    Vec3f *temp_s1;
    f32 temp_f0;
    s32 temp_s0;
    s32 phi_s0;
    s32 phi_s0_2;

    Math_SmoothStepToS(arg0 + 0xBC, 0, 5, 0x2710, (s16) 0x3E8);
    Math_SmoothStepToS(arg0 + 0xC0, arg0->unk1FC, 5, 0x2710, (s16) 0x3E8);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->unk1FE, 5, 0x2710, (s16) 0x3E8);
    phi_s0 = 0;
    phi_s0_2 = 0;
    if (func_800CA1AC(arg1, arg1 + 0x830, arg0->world.pos.x, arg0->world.pos.z, arg0 + 0x210, &sp7C) != 0) {
        temp_f0 = arg0->unk210;
        if ((temp_f0 - 15.0f) <= arg0->world.pos.y) {
            phi_s0 = 1;
        } else {
            Math_ApproachF(arg0 + 0x28, temp_f0 - 14.0f, 0.3f, 1.0f);
        }
    }
    if ((arg0->unk1EE == 0) || (phi_s0 != 0)) {
        Math_SmoothStepToS(arg0 + 0x1EC, 0, 1, 0xF, (s16) 0x32);
        if ((s32) arg0->unk1EC < 2) {
            temp_s1 = &sp6C;
            do {
                Math_Vec3f_Copy(temp_s1, arg0 + 0x24);
                sp6C.x += randPlusMinusPoint5Scaled(20.0f);
                sp6C.y += randPlusMinusPoint5Scaled(5.0f);
                sp6C.z += randPlusMinusPoint5Scaled(20.0f);
                EffectSsBubble_Spawn(arg1, temp_s1, 0.0f, 5.0f, 5.0f, Rand_ZeroFloat(0.03f) + 0.07f);
                temp_s0 = phi_s0_2 + 1;
                phi_s0_2 = temp_s0;
            } while (temp_s0 != 0xA);
            Actor_MarkForDeath(arg0);
        }
    }
}

void EnPrz_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnPrz *this = (EnPrz *) thisx;
    s32 sp44;
    Vec3f sp38;
    CollisionCheckContext *sp30;
    ColliderCylinder *sp2C;
    Actor *temp_v0_3;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;

    sp44 = 0;
    if (this->unk1EA != 7) {
        SkelAnime_FrameUpdateMatrix(&this->unk144);
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk1EE;
    if (temp_v0 != 0) {
        this->unk1EE = temp_v0 - 1;
    }
    temp_v0_2 = this->unk1F2;
    if (temp_v0_2 != 0) {
        this->unk1F2 = temp_v0_2 - 1;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 10.0f, 10.0f, 0x1DU);
    if (this->unk1EA != 7) {
        Math_Vec3s_Copy(&this->actor.shape.rot, &this->actor.world.rot);
    }
    if (this->unk1EA != 7) {
        if ((this->unk224.base.acFlags & 2) != 0) {
            Actor_ApplyDamage(&this->actor);
            if ((s32) this->actor.colChkInfo.health <= 0) {
                sp44 = 1;
            }
        }
        if (((sp44 != 0) || (temp_v0_3 = this->actor.parent, (temp_v0_3 == 0)) || ((s32) temp_v0_3->colChkInfo.health <= 0)) && (this->unk224.base.acFlags &= 0xFFFD, (this->unk1EA != 7))) {
            func_80A76A1C(&this->actor);
            return;
        }
        temp_a1 = &this->unk224;
        sp2C = temp_a1;
        Collider_UpdateCylinder(&this->actor, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp30 = temp_a1_2;
        CollisionCheck_SetAT(globalCtx, temp_a1_2, &sp2C->base);
        CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp2C->base);
        if (this->unk1C8 != 0) {
            Math_Vec3f_Copy(&sp38, &this->unk1CC);
            this->unk1C8 = 0;
            sp38.x += randPlusMinusPoint5Scaled(20.0f);
            sp38.y += randPlusMinusPoint5Scaled(5.0f);
            sp38.z += randPlusMinusPoint5Scaled(20.0f);
            EffectSsBubble_Spawn(globalCtx, &sp38, 0.0f, 5.0f, 5.0f, Rand_ZeroFloat(0.03f) + 0.07f);
        }
        // Duplicate return node #19. Try simplifying control flow for better match
    }
}

s32 func_80A76F70(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 2) {
        arg4->y += (s32) arg5->unk218 * -0x64;
    }
    return 0;
}

void func_80A76FCC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp1C;

    sp1C.x = D_80A7724C.unk0;
    sp1C.y = D_80A7724C.unk4;
    sp1C.z = D_80A7724C.unk8;
    if (arg1 == 2) {
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        SysMatrix_MultiplyVector3fByState(&sp1C, arg4 + 0x1CC);
    }
}

void EnPrz_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnPrz *this = (EnPrz *) thisx;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s32 temp_v1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    if (this->unk1EC == 0xFF) {
        temp_v0 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v1 = this->unk1E8 & 0xFF;
        temp_v0_2->words.w1 = (temp_v1 << 0x18) | (temp_v1 << 0x10) | (temp_v1 << 8) | (this->unk1EC & 0xFF);
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = this->unk1EC & 0xFF;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80A76F70, func_80A76FCC, &this->actor);
        return;
    }
    temp_v1_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0;
    temp_v1_2->words.w0 = 0xE7000000;
    temp_v1_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1_3 + 8;
    temp_v1_3->words.w0 = 0xFB000000;
    temp_v1_3->words.w1 = this->unk1EC & 0xFF;
    Scene_SetRenderModeXlu(globalCtx, 1, 2U);
    temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, NULL, &this->actor, temp_s1->polyXlu.p);
}

