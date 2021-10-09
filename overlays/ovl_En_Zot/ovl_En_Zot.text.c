s32 func_800B8718(EnZot *, GlobalContext *);        /* extern */
? func_800B874C(EnZot *, GlobalContext *, ?, f32);  /* extern */
? func_8019B544(?);                                 /* extern */
? func_8019C300(?);                                 /* extern */
void func_80B965D0(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B96BEC(EnZot *arg0, s16 arg1, u8 arg2, GlobalContext *); /* static */
s32 func_80B96CE4(EnZot *arg0);                     /* static */
void func_80B96D4C(EnZot *arg0);                    /* static */
s32 func_80B96DF0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B96E5C(EnZot *arg0);                     /* static */
? func_80B96FB0(EnZot *arg0);                       /* static */
void func_80B97100(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B97110(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B97194(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B97240(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B972E8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B973BC(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B975F8(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B9765C(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B97708(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B9787C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B979DC(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B97A44(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B97B5C(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B97BF8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B97C40(void *arg0, GlobalContext *arg1); /* static */
void func_80B97CC8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B97D6C(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B97E0C(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B97E4C(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B97FD0(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B980FC(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B98178(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B98348(Actor *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
void func_80B9849C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B9854C(Actor *arg0, Actor *arg1);       /* static */
void func_80B985EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B98728(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B98998(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B98A4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B98AD0(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B98BF4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B98CA8(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B98E10(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B98F30(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B98F94(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B990A4(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B99160(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B991E4(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B992C0(EnZot *arg0, GlobalContext *arg1); /* static */
void func_80B99384(EnZot *arg0, GlobalContext *arg1); /* static */
Gfx *func_80B99580(GraphicsContext *arg0);          /* static */
s32 func_80B995A4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B99758(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06004248;
extern FlexSkeletonHeader D_0600D208;
extern AnimationHeader D_0600DE20;
static ColliderCylinderInit D_80B998E0 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static ? D_80B9990C;                                /* unable to generate initializer */
static Vec3f D_80B99934 = {400.0f, 0.0f, 0.0f};
static ? D_80B99940;                                /* unable to generate initializer */

typedef struct EnZot {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ ColliderCylinder unk188;           /* inferred */
    /* 0x01D4 */ Vec3s unk1D4;                      /* inferred */
    /* 0x01DA */ char pad1DA[0x72];                 /* maybe part of unk1D4[20]? */
    /* 0x024C */ Vec3s unk24C;                      /* inferred */
    /* 0x0252 */ char pad252[0x72];                 /* maybe part of unk24C[20]? */
    /* 0x02C4 */ Vec3s unk2C4;                      /* inferred */
    /* 0x02CA */ Vec3s unk2CA;                      /* inferred */
    /* 0x02D0 */ Path *unk2D0;                      /* inferred */
    /* 0x02D4 */ s32 unk2D4;                        /* inferred */
    /* 0x02D8 */ Actor *unk2D8;                     /* inferred */
    /* 0x02DC */ char pad2DC[0x10];                 /* maybe part of unk2D8[5]? */
    /* 0x02EC */ s16 unk2EC;                        /* inferred */
    /* 0x02EE */ s16 unk2EE;                        /* inferred */
    /* 0x02F0 */ s16 unk2F0;                        /* inferred */
    /* 0x02F2 */ u16 unk2F2;                        /* inferred */
    /* 0x02F4 */ s16 unk2F4;                        /* inferred */
    /* 0x02F6 */ char pad2F6[0x2];                  /* maybe part of unk2F4[2]? */
    /* 0x02F8 */ void (*actionFunc)(EnZot *, GlobalContext *);
} EnZot;                                            /* size 0x2FC */

void func_80B965D0(EnZot *arg0, GlobalContext *arg1) {
    s32 temp_s2;
    void *temp_v0;
    EnZot *phi_s1;
    void *phi_s0;
    s32 phi_s2;

    temp_v0 = arg0->unk2D0;
    if ((temp_v0 != 0) && ((s32) temp_v0->count >= 5)) {
        phi_s1 = arg0;
        phi_s0 = Lib_SegmentedToVirtual(temp_v0->points);
        phi_s2 = 0;
        do {
            if (phi_s1->unk2D8 == 0) {
                phi_s1->unk2D8 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x82, (f32) phi_s0->unk0, (f32) phi_s0->unk2, (f32) phi_s0->unk4, (s16) 0, (s16) 0, (s16) 0, (s16) 0x13F);
            }
            temp_s2 = phi_s2 + 4;
            phi_s1 += 4;
            phi_s0 += 6;
            phi_s2 = temp_s2;
        } while (temp_s2 != 0x14);
    }
}

void EnZot_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnZot *this = (EnZot *) thisx;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    u32 temp_v0;
    void *temp_v0_2;
    s32 phi_v0;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_80B97100;
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600D208, &D_06004248, &this->unk1D4, &this->unk24C, 0x14);
    SkelAnime_ChangeAnimDefaultRepeat(sp30, &D_0600DE20);
    this->unk2F0 = 0;
    Collider_InitAndSetCylinder(globalCtx, &this->unk188, &this->actor, &D_80B998E0);
    temp_v1 = this->actor.params;
    this->actor.shape.rot.z = 0;
    temp_v0 = temp_v1 & 0x1F;
    this->unk2F2 = 0;
    this->unk2F4 = 0;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 6;
    this->actor.minVelocityY = -4.0f;
    this->actor.gravity = -4.0f;
    this->actor.world.rot.z = this->actor.shape.rot.z;
    phi_v0 = (s32) temp_v0;
    switch (temp_v0) {
    case 0:
        this->actionFunc = func_80B97240;
        this->actor.textId = 0;
block_34:
        phi_v0 = this->actor.params & 0x1F;
        break;
    case 1:
        this->actionFunc = func_80B97708;
        this->unk2D8 = NULL;
        temp_v0_2 = this + (1 * 4);
        temp_v0_2->unk2DC = 0;
        temp_v0_2->unk2E0 = 0;
        temp_v0_2->unk2E4 = 0;
        temp_v0_2->unk2D8 = 0;
        temp_v0_3 = (s32) (this->actor.params & 0xFC00) >> 0xA;
        if (temp_v0_3 != 0x3F) {
            this->unk2D4 = 0;
            this->unk2D0 = &globalCtx->setupPathList[temp_v0_3];
            func_80B965D0(this, globalCtx);
        } else {
            this->unk2D0 = NULL;
        }
        goto block_34;
    case 2:
    case 3:
    case 4:
        temp_v0_4 = (s32) (temp_v1 & 0xFC00) >> 0xA;
        this->actionFunc = func_80B97B5C;
        if (temp_v0_4 != 0x3F) {
            this->unk2D0 = &globalCtx->setupPathList[temp_v0_4];
            phi_v0 = temp_v1 & 0x1F;
        } else {
            this->unk2D0 = NULL;
            phi_v0 = this->actor.params & 0x1F;
        }
        break;
    case 5:
        temp_v0_5 = (s32) (temp_v1 & 0xFC00) >> 0xA;
        this->unk2F2 |= 4;
        this->actionFunc = func_80B97FD0;
        if (temp_v0_5 != 0x3F) {
            this->unk2D0 = &globalCtx->setupPathList[temp_v0_5];
        } else {
            this->unk2D0 = NULL;
        }
        func_80B96BEC(this, 5, 0U, globalCtx);
        goto block_34;
    case 6:
        this->actionFunc = func_80B98998;
        func_80B96BEC(this, 2, 0U, globalCtx);
        this->actor.colChkInfo.cylRadius = 0;
        this->actor.shape.yOffset = -1400.0f;
        goto block_34;
    case 7:
        this->actionFunc = func_80B98998;
        func_80B96BEC(this, 0, 0U, globalCtx);
        goto block_34;
    case 8:
        this->actor.flags |= 0x2000000;
        this->actionFunc = func_80B98CA8;
        func_80B96BEC(this, 5, 0U, globalCtx);
        goto block_34;
    case 9:
        this->actionFunc = func_80B990A4;
        goto block_34;
    case 10:
        this->actionFunc = func_80B992C0;
        func_80B96BEC(this, 1, 0U, globalCtx);
        temp_v1_2 = this->actor.params;
        temp_v0_6 = (s32) (temp_v1_2 & 0xFC00) >> 0xA;
        if (temp_v0_6 != 0x3F) {
            this->unk2D0 = &globalCtx->setupPathList[temp_v0_6];
            phi_v0 = temp_v1_2 & 0x1F;
        } else {
            this->unk2D0 = NULL;
            phi_v0 = this->actor.params & 0x1F;
        }
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        this->actionFunc = func_80B98998;
        func_80B96BEC(this, 2, 0U, globalCtx);
        this->actor.colChkInfo.cylRadius = 0;
        this->actor.shape.yOffset = -1400.0f;
        if ((gSaveContext.weekEventReg[55] & 0x80) == 0) {
            Actor_MarkForDeath(&this->actor);
        }
        goto block_34;
    case 18:
        this->actionFunc = func_80B99384;
        if ((gSaveContext.weekEventReg[55] & 0x80) == 0) {
            Actor_MarkForDeath(&this->actor);
        }
        goto block_34;
    case 19:
        func_80B96BEC(this, 7, 0U, globalCtx);
        goto block_34;
    case 20:
        func_80B96BEC(this, 8, 2U, globalCtx);
        goto block_34;
    case 21:
        func_80B96BEC(this, 9, 2U, globalCtx);
        goto block_34;
    case 22:
        temp_v0_7 = (s32) (temp_v1 & 0xFC00) >> 0xA;
        this->actionFunc = func_80B980FC;
        if (temp_v0_7 != 0x3F) {
            this->unk2D0 = &globalCtx->setupPathList[temp_v0_7];
        } else {
            this->unk2D0 = NULL;
        }
        this->actor.home.rot.x = this->actor.home.rot.z;
        goto block_34;
    }
    if ((phi_v0 >= 2) && (phi_v0 < 0xB) && ((gSaveContext.weekEventReg[55] & 0x80) != 0)) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnZot_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnZot *this = (EnZot *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk188);
    if ((this->actor.params & 0x1F) == 8) {
        gSaveContext.weekEventReg[41] &= 0xDF;
    }
}

void func_80B96BEC(EnZot *arg0, s16 arg1, u8 arg2) {
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    f32 temp_f0;

    if (((s32) arg1 >= 0) && ((s32) arg1 < 0xA)) {
        if ((s32) arg1 >= 8) {
            temp_f0 = (f32) (arg1 - 8);
            SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80B9990C + (arg1 * 4)), 0.0f, temp_f0, temp_f0, (u8) (s32) arg2, 0.0f);
        } else {
            temp_v1 = (arg1 * 4) + &D_80B9990C;
            sp30 = temp_v1;
            SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, -5.0f);
        }
        arg0->unk2F0 = arg1;
    }
}

s32 func_80B96CE4(EnZot *arg0) {
    void *temp_a1;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;

    phi_v1_5 = 0;
    if (arg0->unk2D8 == 0) {
        phi_v1_5 = 1;
    }
    temp_a1 = arg0 + (1 * 4);
    phi_v1_4 = phi_v1_5;
    if (temp_a1->unk2D8 == 0) {
        phi_v1_4 = phi_v1_5 + 1;
    }
    phi_v1_3 = phi_v1_4;
    if (temp_a1->unk2DC == 0) {
        phi_v1_3 = phi_v1_4 + 1;
    }
    phi_v1_2 = phi_v1_3;
    if (temp_a1->unk2E0 == 0) {
        phi_v1_2 = phi_v1_3 + 1;
    }
    phi_v1 = phi_v1_2;
    if (temp_a1->unk2E4 == 0) {
        phi_v1 = phi_v1_2 + 1;
    }
    return phi_v1;
}

void func_80B96D4C(EnZot *arg0) {
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = arg0->unk2D8;
    if ((temp_v1 != 0) && (temp_v1->update == 0)) {
        arg0->unk2D8 = NULL;
    }
    temp_v1_2 = arg0 + (1 * 4);
    temp_a1 = temp_v1_2->unk2D8;
    if ((temp_a1 != 0) && (temp_a1->unk138 == 0)) {
        temp_v1_2->unk2D8 = NULL;
    }
    temp_v0 = temp_v1_2->unk2DC;
    if ((temp_v0 != 0) && (temp_v0->unk138 == 0)) {
        temp_v1_2->unk2DC = NULL;
    }
    temp_v0_2 = temp_v1_2->unk2E0;
    if ((temp_v0_2 != 0) && (temp_v0_2->unk138 == 0)) {
        temp_v1_2->unk2E0 = NULL;
    }
    temp_v0_3 = temp_v1_2->unk2E4;
    if ((temp_v0_3 != 0) && (temp_v0_3->unk138 == 0)) {
        temp_v1_2->unk2E4 = NULL;
    }
}

s32 func_80B96DF0(Actor *arg0, GlobalContext *arg1) {
    if ((Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x3000) != 0) && (arg0->xzDistToPlayer < 100.0f)) {
        return 1;
    }
    return 0;
}

s32 func_80B96E5C(EnZot *arg0) {
    u8 *sp34;
    void *sp30;
    f32 sp2C;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    s16 temp_t8;
    s16 temp_t9;
    s32 temp_a0;
    s32 temp_t1;
    u8 *temp_v0;
    void *temp_v1;
    f32 phi_f2;
    s32 phi_v0;

    temp_v0 = arg0->unk2D0;
    if (temp_v0 == 0) {
        return 1;
    }
    sp34 = temp_v0;
    temp_v1 = Lib_SegmentedToVirtual(temp_v0->unk4) + (arg0->unk2D4 * 6);
    temp_t8 = temp_v1->unk0;
    temp_t9 = temp_v1->unk4;
    sp30 = temp_v1;
    temp_f12 = (f32) temp_t8 - arg0->actor.world.pos.x;
    temp_f14 = (f32) temp_t9 - arg0->actor.world.pos.z;
    sp2C = temp_f12;
    sp28 = temp_f14;
    arg0->actor.world.rot.y = Math_Atan2S(temp_f12, temp_f14);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 2, 0x7D0, (s16) 0xC8);
    temp_f0 = arg0->actor.speedXZ;
    temp_a0 = arg0->unk2D4;
    temp_t1 = temp_a0 + 1;
    phi_f2 = temp_f0 * temp_f0 * 9.0f;
    phi_v0 = 0;
    if (temp_a0 == 0) {
        phi_f2 = 400.0f;
    }
    if (((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < phi_f2) {
        arg0->unk2D4 = temp_t1;
        if (temp_t1 >= (s32) *sp34) {
            arg0->actor.world.pos.x = (f32) temp_v1->unk0;
            arg0->actor.world.pos.z = (f32) temp_v1->unk4;
            phi_v0 = 1;
        }
    }
    return phi_v0;
}

? func_80B96FB0(EnZot *arg0) {
    u8 *sp34;
    f32 sp2C;
    f32 sp28;
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_t0;
    s32 temp_t4;
    u8 *temp_v0;
    u8 temp_v1_2;
    void *temp_v1;
    ? phi_v0;

    temp_v0 = arg0->unk2D0;
    if (temp_v0 == 0) {
        return 1;
    }
    sp34 = temp_v0;
    temp_v1 = Lib_SegmentedToVirtual(temp_v0->unk4) + (arg0->unk2D4 * 6);
    temp_f12 = (f32) temp_v1->unk0 - arg0->actor.world.pos.x;
    temp_f14 = (f32) temp_v1->unk4 - arg0->actor.world.pos.z;
    sp2C = temp_f12;
    sp28 = temp_f14;
    arg0->actor.world.rot.y = Math_Atan2S(temp_f12, temp_f14);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 2, 0x7D0, (s16) 0xC8);
    phi_v0 = 0;
    if (((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < 100.0f) {
        if ((arg0->unk2F2 & 0x20) != 0) {
            temp_t4 = arg0->unk2D4 - 1;
            arg0->unk2D4 = temp_t4;
            if (temp_t4 < 0) {
                arg0->unk2D4 = 1;
                arg0->unk2F2 &= 0xFFDF;
                return 1;
            }
            // Duplicate return node #8. Try simplifying control flow for better match
            return phi_v0;
        }
        temp_t0 = arg0->unk2D4 + 1;
        arg0->unk2D4 = temp_t0;
        temp_v1_2 = *sp34;
        if (temp_t0 >= (s32) temp_v1_2) {
            arg0->unk2D4 = temp_v1_2 - 1;
            arg0->unk2F2 |= 0x20;
            phi_v0 = 1;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return phi_v0;
    }
    return phi_v0;
}

void func_80B97100(EnZot *arg0, GlobalContext *arg1) {

}

void func_80B97110(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;
    u16 phi_a1;

    if (gSaveContext.playerForm == 2) {
        temp_v0 = gSaveContext.weekEventReg[28];
        phi_a1 = 0x125FU;
        if ((temp_v0 & 0x80) != 0) {
            phi_a1 = 0x1261U;
        } else {
            gSaveContext.weekEventReg[28] = temp_v0 | 0x80;
        }
    } else {
        temp_v0_2 = gSaveContext.weekEventReg[28];
        phi_a1 = 0x125CU;
        if ((temp_v0_2 & 0x40) != 0) {
            phi_a1 = 0x125EU;
        } else {
            gSaveContext.weekEventReg[28] = temp_v0_2 | 0x40;
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80B97194(EnZot *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0_2;
    MessageContext *temp_a0;
    u16 temp_v0;

    temp_a0 = arg1 + 0x4908;
    arg1 = arg1;
    if ((func_80152498(temp_a0) == 5) && (temp_a0_2 = arg1, arg1 = arg1, (func_80147624(temp_a0_2) != 0))) {
        temp_v0 = arg1->msgCtx.unk11F04;
        switch (temp_v0) {
        case 4700:
        case 4703:
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            return;
        case 4701:
        case 4702:
        case 4704:
        case 4705:
            func_801477B4(arg1);
            arg0->actionFunc = func_80B97240;
            // Duplicate return node #6. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void func_80B97240(EnZot *arg0, GlobalContext *arg1) {
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80B97194;
        func_80B97110(&arg0->actor, arg1);
        return;
    }
    if ((arg0->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(&arg0->actor, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(&arg0->actor, 0x3000) != 0)) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
}

void func_80B972E8(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u16 phi_a1;

    temp_v0 = gSaveContext.weekEventReg[29];
    if ((temp_v0 & 0x10) != 0) {
        if (gSaveContext.playerForm == 2) {
            phi_a1 = 0x126AU;
            if ((temp_v0 & 1) != 0) {
                phi_a1 = 0x126DU;
            } else {
                gSaveContext.weekEventReg[29] = temp_v0 | 1;
            }
        } else {
            phi_a1 = 0x1267U;
            if ((temp_v0 & 2) != 0) {
                phi_a1 = 0x1269U;
            } else {
                gSaveContext.weekEventReg[29] = temp_v0 | 2;
            }
        }
    } else if (gSaveContext.playerForm == 2) {
        phi_a1 = 0x1265U;
        if ((temp_v0 & 4) != 0) {
            phi_a1 = 0x1266U;
        } else {
            gSaveContext.weekEventReg[29] = temp_v0 | 4;
        }
    } else {
        phi_a1 = 0x1262U;
        if ((temp_v0 & 8) != 0) {
            phi_a1 = 0x1264U;
        } else {
            gSaveContext.weekEventReg[29] = temp_v0 | 8;
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80B973BC(EnZot *arg0, GlobalContext *arg1) {
    s8 temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;

    func_80B96D4C(arg0);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.yawTowardsPlayer, 2, 0x800, (s16) 0x100);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1->msgCtx.unk11F04;
        switch (temp_v0) {
        case 4718:
        case 4720:
        case 4723:
        case 4724:
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            break;
        case 4722:
            func_80151938(arg1, 0x126FU);
            break;
        case 4719:
            func_801159EC(0x5A);
            func_80151938(arg1, 0x1270U);
            break;
        case 4725:
            if ((s32) gSaveContext.rupees < 0xA) {
                func_80151938(arg1, 0x1277U);
            } else {
                func_80151938(arg1, 0x1278U);
                func_801159EC(-0xA);
            }
            break;
        case 4726:
            func_80151938(arg1, 0x1275U);
            break;
        case 4721:
        case 4727:
        case 4728:
        case 4729:
            func_801477B4(arg1);
            func_80B965D0(arg0, arg1);
            temp_a0 = arg0->actor.cutscene;
            arg0->actor.flags &= 0xFFFEFFFF;
            arg0->actor.textId = 0;
            arg0->actionFunc = func_80B97708;
            if ((temp_a0 != -1) && ((arg0->unk2F2 & 1) == 0)) {
                ActorCutscene_Stop((s16) temp_a0);
            }
            arg0->unk2F2 &= 0xFFFE;
            break;
        }
    }
    temp_v0_2 = arg0->unk2F2;
    if ((temp_v0_2 & 1) != 0) {
        if (arg0->actor.cutscene == -1) {
            arg0->unk2F2 = temp_v0_2 & 0xFFFE;
            return;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, &arg0->actor);
            arg0->unk2F2 &= 0xFFFE;
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
        // Duplicate return node #23. Try simplifying control flow for better match
    }
}

void func_80B975F8(EnZot *arg0, GlobalContext *arg1) {
    func_80B96D4C(arg0);
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80B973BC;
        return;
    }
    func_800B8500(&arg0->actor, arg1, 10000.0f, 1000.0f, 0);
}

void func_80B9765C(EnZot *arg0, GlobalContext *arg1) {
    u16 temp_v1;

    func_80B96D4C(arg0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v1 = arg1->msgCtx.unk11F04;
        if ((temp_v1 == 0x1262) || (temp_v1 == 0x1267) || (temp_v1 == 0x126A) || (temp_v1 == 0x126B)) {
            func_80151938(arg1, (temp_v1 + 1) & 0xFFFF);
            return;
        }
        func_801477B4(arg1);
        arg0->actionFunc = func_80B97708;
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_80B97708(EnZot *arg0, GlobalContext *arg1) {
    Actor *sp2C;
    s32 phi_v1;

    sp2C = arg1->actorCtx.actorList[2].first;
    func_80B96D4C(arg0);
    Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.home.rot.y, 2, 0x400, (s16) 0x100);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80B9765C;
        func_80B972E8(&arg0->actor, arg1);
        return;
    }
    phi_v1 = 0;
    if ((sp2C->unkA6C << 6) >= 0) {
        phi_v1 = func_80B96CE4(arg0);
    }
    if (phi_v1 != 0) {
        gSaveContext.weekEventReg[29] |= 0x10;
        arg0->actor.flags |= 0x10000;
        if (phi_v1 == 5) {
            if (gSaveContext.playerForm == 2) {
                arg0->actor.textId = 0x126E;
            } else {
                arg0->actor.textId = 0x1272;
            }
        } else if (gSaveContext.playerForm == 2) {
            arg0->actor.textId = 0x1273;
        } else {
            arg0->actor.textId = 0x1276;
        }
        arg0->unk2F2 |= 1;
        func_80B975F8(arg0, arg1);
        arg0->actionFunc = func_80B975F8;
        return;
    }
    if (func_80B96DF0(&arg0->actor, arg1) != 0) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
}

void func_80B9787C(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_5;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u16 phi_a1;

    if (arg0->textId == 0) {
        if (gSaveContext.playerForm == 2) {
            temp_v0 = arg0->params & 0x1F;
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    phi_a1 = 0x1288U;
                    temp_v0_2 = gSaveContext.weekEventReg[38];
                    if ((temp_v0_2 & 4) != 0) {
                        phi_a1 = 0x128AU;
                    } else {
                        gSaveContext.weekEventReg[38] = temp_v0_2 | 4;
                    }
                } else {
                    temp_v0_3 = gSaveContext.weekEventReg[38];
                    phi_a1 = 0x1282U;
                    if ((temp_v0_3 & 1) != 0) {
                        phi_a1 = 0x1284U;
                    } else {
                        gSaveContext.weekEventReg[38] = temp_v0_3 | 1;
                    }
                }
            } else {
                temp_v0_4 = gSaveContext.weekEventReg[37];
                phi_a1 = 0x127CU;
                if ((temp_v0_4 & 0x40) != 0) {
                    phi_a1 = 0x127EU;
                } else {
                    gSaveContext.weekEventReg[37] = temp_v0_4 | 0x40;
                }
            }
        } else {
            temp_v0_5 = arg0->params & 0x1F;
            if (temp_v0_5 != 2) {
                if (temp_v0_5 != 3) {
                    phi_a1 = 0x1285U;
                    temp_v0_6 = gSaveContext.weekEventReg[38];
                    if ((temp_v0_6 & 2) != 0) {
                        phi_a1 = 0x1287U;
                    } else {
                        gSaveContext.weekEventReg[38] = temp_v0_6 | 2;
                    }
                } else {
                    temp_v0_7 = gSaveContext.weekEventReg[37];
                    phi_a1 = 0x127FU;
                    if ((temp_v0_7 & 0x80) != 0) {
                        phi_a1 = 0x1281U;
                    } else {
                        gSaveContext.weekEventReg[37] = temp_v0_7 | 0x80;
                    }
                }
            } else {
                temp_v0_8 = gSaveContext.weekEventReg[37];
                phi_a1 = 0x1279U;
                if ((temp_v0_8 & 0x20) != 0) {
                    phi_a1 = 0x127BU;
                } else {
                    gSaveContext.weekEventReg[37] = temp_v0_8 | 0x20;
                }
            }
        }
        func_801518B0(arg1, phi_a1, arg0);
    }
}

void func_80B979DC(EnZot *arg0, GlobalContext *arg1) {
    EnZot *temp_a0;

    temp_a0 = arg0;
    if (func_80B96E5C() != 0) {
        temp_a0->actionFunc = func_80B97B5C;
        arg0 = temp_a0;
        func_80B96BEC(temp_a0, 0, 0U);
        arg0->actor.speedXZ = 0.0f;
        return;
    }
    temp_a0->actor.speedXZ = 1.5f;
}

void func_80B97A44(EnZot *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0_2;
    MessageContext *temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;

    temp_a0 = arg1 + 0x4908;
    arg1 = arg1;
    arg0 = arg0;
    if ((func_80152498(temp_a0) == 5) && (temp_a0_2 = arg1, arg1 = arg1, arg0 = arg0, (func_80147624(temp_a0_2) != 0))) {
        temp_v0 = arg1->msgCtx.unk11F04;
        switch (temp_v0) {
        case 4729:
        case 4732:
        case 4735:
        case 4738:
        case 4741:
        case 4744:
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            return;
        case 4733:
        case 4734:
        case 4739:
        case 4740:
        case 4745:
        case 4746:
            arg0 = arg0;
            func_801477B4(arg1);
            temp_v0_2 = arg0->unk2F2;
            if ((temp_v0_2 & 2) == 0) {
                arg0->unk2F2 = temp_v0_2 | 2;
                arg0->actionFunc = func_80B979DC;
                func_80B96BEC(arg0, 1, 0U, (GlobalContext *) arg0);
                return;
            }
            arg0->actionFunc = func_80B97B5C;
            return;
        default:
            arg0 = arg0;
            func_801477B4(arg1);
            arg0->actionFunc = func_80B97B5C;
            // Duplicate return node #9. Try simplifying control flow for better match
            return;
        }
    }
}

void func_80B97B5C(EnZot *arg0, GlobalContext *arg1) {
    Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.home.rot.y, 2, 0x400, (s16) 0x100);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80B97A44;
        func_80B9787C(&arg0->actor, arg1);
        return;
    }
    if (func_80B96DF0(&arg0->actor, arg1) != 0) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
}

void func_80B97BF8(Actor *arg0, GlobalContext *arg1) {
    u16 phi_a1;

    phi_a1 = 0x128BU;
    if (gSaveContext.playerForm == 2) {
        phi_a1 = 0x128CU;
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80B97C40(void *arg0, GlobalContext *arg1) {
    Math_SmoothStepToS(arg0 + 0xBE, arg0->unk92, 2, 0x800, (s16) 0x100);
    arg0->unk32 = (s16) arg0->unkBE;
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        func_801477B4(arg1);
        arg0->unk2F8 = func_80B97CC8;
    }
}

void func_80B97CC8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a0_2;

    temp_a0 = arg0;
    arg0 = arg0;
    if (func_800B84D0(temp_a0, arg1) != 0) {
        arg0->unk2F8 = func_80B97C40;
        func_801518B0(arg1, 0x128BU, arg0);
        return;
    }
    temp_a0_2 = arg0;
    arg0 = arg0;
    if ((Actor_IsLinkFacingActor(temp_a0_2, 0x3000, arg1) != 0) && (arg0->xzDistToPlayer < 100.0f)) {
        func_800B8614(arg0, arg1, 120.0f);
    }
}

void func_80B97D6C(EnZot *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    if (func_80B96E5C(arg0) != 0) {
        arg0->actionFunc = func_80B97CC8;
        arg0->actor.speedXZ = 0.0f;
        func_80B96BEC(arg0, 0, 0U);
    } else {
        arg0->actor.speedXZ = 8.0f;
    }
    temp_a0 = &arg0->unk144;
    sp24 = temp_a0;
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 5.0f) != 0)) {
        Audio_PlayActorSound2(&arg0->actor, 0x2970U);
    }
}

void func_80B97E0C(EnZot *arg0, GlobalContext *arg1) {
    if ((arg0->unk2F2 & 0x40) != 0) {
        arg0->actionFunc = func_80B97D6C;
        func_80B96BEC((EnZot *)3, 0);
    }
}

void func_80B97E4C(EnZot *arg0, GlobalContext *arg1) {
    void *sp2C;
    u16 temp_v1;

    if ((arg0->unk2F2 & 0x40) != 0) {
        func_80B96BEC(arg0, 0, 0U);
    }
    if ((arg0->unk2F2 & 4) == 0) {
        Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.yawTowardsPlayer, 2, 0x800, (s16) 0x100);
        arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    }
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v1 = arg1->msgCtx.unk11F04;
        switch (temp_v1) {
        case 4748:
            arg0->unk2F2 &= 0xFFFB;
            sp2C = arg1 + 0x10000;
            func_80B96BEC(arg0, 6, 2U, arg1);
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        case 4749:
        case 4750:
        case 4751:
            func_80151938(arg1, (temp_v1 + 1) & 0xFFFF);
            return;
        case 4752:
            func_801477B4(arg1);
            arg0->actionFunc = func_80B97D6C;
            arg0->unk2F2 |= 4;
            func_80B96BEC(arg0, 3, 0U);
            gSaveContext.weekEventReg[38] |= 8;
            return;
        case 4747:
            func_801477B4(arg1);
            arg0->actionFunc = func_80B97FD0;
            // Duplicate return node #12. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void func_80B97FD0(EnZot *arg0, GlobalContext *arg1) {
    Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.home.rot.y, 2, 0x800, (s16) 0x100);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80B97E4C;
        func_80B97BF8(&arg0->actor, arg1);
        return;
    }
    if ((gSaveContext.weekEventReg[38] & 8) != 0) {
        if ((arg0->actor.xzDistToPlayer < 120.0f) && (gSaveContext.playerForm == 2)) {
            arg0->actionFunc = func_80B97E0C;
            arg0->unk2F2 |= 4;
            func_80B96BEC(arg0, 6, 2U);
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    if ((Actor_IsLinkFacingActor(&arg0->actor, 0x3000, arg1) != 0) && (arg0->actor.xzDistToPlayer < 100.0f)) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
}

void func_80B980FC(EnZot *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->actor.home.rot.x;
    if ((s32) temp_v0 > 0) {
        arg0->actor.home.rot.x = temp_v0 - 1;
        return;
    }
    if (func_80B96E5C() != 0) {
        arg0->actionFunc = func_80B97100;
        arg0->actor.speedXZ = 0.0f;
        return;
    }
    arg0->actor.speedXZ = 8.0f;
    if (arg0->unk2F0 != 3) {
        func_80B96BEC(arg0, 3, 0U);
    }
}

void func_80B98178(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    s32 temp_a2;
    s32 temp_v0_5;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u16 phi_a1;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_a2 = arg0->params & 0x1F;
    switch (temp_a2) {
    case 6:
        if (gSaveContext.playerForm == 2) {
            if (((s32) gSaveContext.day % 5) == 3) {
                phi_a1 = 0x129DU;
            } else {
                temp_v0 = gSaveContext.weekEventReg[39];
                phi_a1 = 0x129BU;
                if ((temp_v0 & 1) != 0) {
                    phi_a1 = 0x129CU;
                } else {
                    gSaveContext.weekEventReg[39] = temp_v0 | 1;
                }
            }
        } else {
            temp_v0_2 = gSaveContext.weekEventReg[38];
            phi_a1 = 0x1291U;
            if ((temp_v0_2 & 0x80) != 0) {
                phi_a1 = 0x1293U;
            } else {
                gSaveContext.weekEventReg[38] = temp_v0_2 | 0x80;
            }
        }
        break;
    case 7:
        if (gSaveContext.playerForm == 2) {
            temp_v0_3 = gSaveContext.weekEventReg[39];
            phi_a1 = 0x12A6U;
            if ((temp_v0_3 & 4) != 0) {
                phi_a1 = 0x12AAU;
            } else {
                gSaveContext.weekEventReg[39] = temp_v0_3 | 4;
            }
        } else {
            temp_a1 = arg0->home.rot.z;
            arg0 = arg0;
            if (Flags_GetSwitch(arg1, temp_a1 & 0x7F) != 0) {
                phi_a1 = 0x12A0U;
            } else {
                temp_v0_4 = gSaveContext.weekEventReg[39];
                phi_a1 = 0x12A2U;
                if ((temp_v0_4 & 2) != 0) {
                    phi_a1 = 0x12A5U;
                } else {
                    gSaveContext.weekEventReg[39] = temp_v0_4 | 2;
                }
            }
        }
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        temp_v0_5 = (temp_a2 * 4) - 0x2C;
        phi_v0_2 = temp_v0_5;
        if ((gSaveContext.weekEventReg[79] & 1) != 0) {
            phi_v0_2 = temp_v0_5 + 2;
        }
        phi_v0 = phi_v0_2;
        if (gSaveContext.playerForm != 2) {
            phi_v0 = phi_v0_2 + 1;
        }
        phi_a1 = (phi_v0 + 0x1302) & 0xFFFF;
        break;
    default:
        phi_a1 = 0x1295U;
        if (gSaveContext.playerForm == 2) {
            phi_a1 = 0x129FU;
        }
        break;
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80B98348(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->params & 0x1F) == 7) {
        Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 2, 0x800, (s16) 0x100);
        arg0->world.rot.y = arg0->shape.rot.y;
        return;
    }
    if (Actor_IsActorFacingLink(arg0, 0x3000) != 0) {
        arg0->unk2F2 = (u16) (arg0->unk2F2 & 0xFFF7);
        return;
    }
    arg0->unk2F2 = (u16) (arg0->unk2F2 | 8);
    Math_SmoothStepToS(arg0 + 0x2C4, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(arg0 + 0x2CA, 0, 6, 0x1838, (s16) 0x64);
    if ((s32) (s16) (arg0->yawTowardsPlayer - arg0->shape.rot.y) > 0) {
        Math_SmoothStepToS(arg0 + 0x2C6, 0x3000, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(arg0 + 0x2CC, 0x1000, 6, 0x1838, (s16) 0x64);
        return;
    }
    Math_SmoothStepToS(arg0 + 0x2C6, -0x3000, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(arg0 + 0x2CC, -0x1000, 6, 0x1838, (s16) 0x64);
}

void func_80B9849C(Actor *arg0, GlobalContext *arg1) {
    func_80B98348(arg0, arg1);
    if (func_800B84D0(arg0, arg1) != 0) {
        if (arg0->unk2D4 == 2) {
            func_801518B0(arg1, 0x12ADU, arg0);
        } else {
            func_801518B0(arg1, 0x12B0U, arg0);
        }
        arg0->unk2F8 = func_80B98728;
        return;
    }
    func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
}

void func_80B9854C(Actor *arg0, Actor *arg1) {
    func_80B98348(arg1);
    if (Actor_HasParent(arg0, (GlobalContext *) arg1) != 0) {
        arg0->parent = NULL;
        arg0->unk2F8 = func_80B9849C;
        arg0->flags |= 0x10000;
        func_800B8500(arg0, (GlobalContext *) arg1, 1000.0f, 1000.0f, -1);
        return;
    }
    func_800B8A1C(arg0, (GlobalContext *) arg1, arg0->unk2D4, 10000.0f, 50.0f);
}

void func_80B985EC(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    void *sp18;
    s32 temp_v0;

    sp18 = arg1->actorCtx.actorList[2].first;
    func_80B98348(arg0);
    if (func_80152498(arg1 + 0x4908) == 0x10) {
        temp_v0 = func_80123810(arg1);
        if (temp_v0 > 0) {
            sp1C = temp_v0;
            func_801477B4(arg1);
            if ((temp_v0 == 0x13) && ((*(gBitFlags + 0x64) & gSaveContext.inventory.questItems) != 0) && (func_8013A4C4(4) != 0)) {
                if ((func_8013A4C4(5) != 0) && (func_8013A4C4(6) != 0)) {
                    sp18->textId = 0x12AE;
                } else {
                    sp18->textId = 0x12AC;
                }
                gSaveContext.inventory.questItems &= -1 - *(gBitFlags + 0x64);
            } else {
                sp18->textId = 0x12AB;
            }
            arg0->unk2F8 = func_80B98728;
            return;
        }
        if (temp_v0 < 0) {
            func_80151938(arg1, 0x12ABU);
            arg0->unk2F8 = func_80B98728;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
    }
}

void func_80B98728(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_3;
    GlobalContext *temp_a0_4;
    GlobalContext *temp_a0_5;
    GlobalContext *temp_a1;
    GlobalContext *temp_a3;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;

    temp_a2 = arg0;
    temp_a3 = arg1;
    temp_a0 = temp_a2;
    temp_a1 = temp_a3;
    arg0 = temp_a2;
    arg1 = temp_a3;
    func_80B98348(temp_a0, temp_a1, temp_a2, temp_a3);
    temp_v0 = func_80152498(&arg1->msgCtx);
    if (temp_v0 != 4) {
        temp_a0_2 = arg1;
        if (temp_v0 != 5) {
            return;
        }
        arg0 = arg0;
        arg1 = arg1;
        if (func_80147624(temp_a0_2) != 0) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 4753:
            case 4754:
            case 4758:
            case 4760:
            case 4761:
            case 4763:
            case 4765:
            case 4766:
            case 4768:
            case 4770:
            case 4771:
            case 4772:
            case 4774:
            case 4775:
            case 4776:
            case 4782:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                return;
            case 4777:
            case 4778:
                arg0 = arg0;
                func_80151938(arg1, 0xFFU);
                arg0->unk2F8 = func_80B985EC;
                return;
            case 4756:
                if (((s32) gSaveContext.day % 5) == 3) {
                    func_80151938(arg1, 0x1296U);
                    return;
                }
                func_80151938(arg1, 0x1295U);
                return;
            case 4779:
                arg0 = arg0;
                func_801477B4(arg1);
                arg0->unk2F8 = (void (*)(Actor *, GlobalContext *)) func_80B98998;
                return;
            case 4780:
                temp_a0_3 = arg1;
                arg0 = arg0;
                arg1 = arg1;
                func_801477B4(temp_a0_3);
                arg0->unk2D4 = 2;
                arg0->unk2F8 = (void (*)(Actor *, GlobalContext *)) func_80B9854C;
                func_80B9854C(arg0, (Actor *) arg1);
                return;
            case 4783:
                temp_a0_4 = arg1;
                arg0 = arg0;
                arg1 = arg1;
                func_801477B4(temp_a0_4);
                arg0->unk2D4 = 4;
                arg0->unk2F8 = (void (*)(Actor *, GlobalContext *)) func_80B9854C;
                func_80B9854C(arg0, (Actor *) arg1);
                return;
            default:
                arg0 = arg0;
                func_801477B4(arg1);
                arg0->unk2F8 = (void (*)(Actor *, GlobalContext *)) func_80B98998;
                arg0->flags &= 0xFFFEFFFF;
                // Duplicate return node #22. Try simplifying control flow for better match
                return;
            }
        } else {
            // Duplicate return node #22. Try simplifying control flow for better match
        }
    } else {
        temp_a0_5 = arg1;
        arg1 = arg1;
        if ((func_80147624(temp_a0_5) != 0) && (arg1->msgCtx.unk11F04 == 0x1293)) {
            temp_v0_3 = arg1->msgCtx.choiceIndex;
            if (temp_v0_3 != 0) {
                if (temp_v0_3 != 1) {
                    return;
                }
                arg1 = arg1;
                func_8019F230();
                func_80151938(arg1, 0x1298U);
                return;
            }
            arg1 = arg1;
            func_8019F208();
            func_80151938(arg1, 0x1294U);
        }
    }
}

void func_80B98998(EnZot *arg0, GlobalContext *arg1) {
    arg0->unk2F2 &= 0xFFF7;
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = (void (*)(EnZot *, GlobalContext *)) func_80B98728;
        func_80B98178(&arg0->actor, arg1);
        return;
    }
    if ((arg0->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(&arg0->actor, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(&arg0->actor, 0x7000) != 0)) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
}

void func_80B98A4C(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;
    u16 phi_a1;

    if (gSaveContext.playerForm == 2) {
        temp_v0 = gSaveContext.weekEventReg[39];
        phi_a1 = 0x12B4U;
        if ((temp_v0 & 0x80) != 0) {
            phi_a1 = 0x12B6U;
        } else {
            gSaveContext.weekEventReg[39] = temp_v0 | 0x80;
        }
    } else {
        temp_v0_2 = gSaveContext.weekEventReg[39];
        phi_a1 = 0x12B1U;
        if ((temp_v0_2 & 0x40) != 0) {
            phi_a1 = 0x12B3U;
        } else {
            gSaveContext.weekEventReg[39] = temp_v0_2 | 0x40;
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80B98AD0(EnZot *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0_2;
    MessageContext *temp_a0;
    u16 temp_v0;

    temp_a0 = arg1 + 0x4908;
    arg1 = arg1;
    if ((func_80152498(temp_a0) == 5) && (temp_a0_2 = arg1, arg1 = arg1, (func_80147624(temp_a0_2) != 0))) {
        temp_v0 = arg1->msgCtx.unk11F04;
        switch (temp_v0) {
        case 4785:
        case 4788:
        case 4791:
        case 4793:
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            return;
        case 4792:
            func_801477B4(arg1);
            arg0->actionFunc = func_80B98CA8;
            gSaveContext.weekEventReg[41] &= 0xDF;
            func_8019C300(0);
            return;
        case 4794:
            func_801477B4(arg1);
            arg0->actionFunc = func_80B98CA8;
            gSaveContext.weekEventReg[41] |= 0x20;
            func_8019C300(0);
            return;
        default:
            func_801477B4(arg1);
            arg0->actionFunc = func_80B98CA8;
            // Duplicate return node #8. Try simplifying control flow for better match
            return;
        }
    }
}

void func_80B98BF4(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a1;

    temp_a1 = arg1;
    arg1 = arg1;
    if (func_800B84D0(arg0, temp_a1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        if ((gSaveContext.weekEventReg[41] & 0x20) != 0) {
            func_801518B0(arg1, 0x12B7U, arg0);
            arg0->unk2F8 = func_80B98AD0;
            return;
        }
        func_801518B0(arg1, 0x12B9U, arg0);
        arg0->unk2F8 = func_80B98AD0;
        return;
    }
    func_800B8614(arg0, arg1, 120.0f);
}

void func_80B98CA8(EnZot *arg0, GlobalContext *arg1) {
    if (func_800B8718(arg0, arg1) != 0) {
        arg1->msgCtx.unk1202A = 4;
        func_8019B544(0xFFFF);
        arg0->actionFunc = (void (*)(EnZot *, GlobalContext *)) func_80B98BF4;
        arg0->actor.flags |= 0x10000;
        func_800B8614(&arg0->actor, arg1, 120.0f);
        goto block_10;
    }
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80B98AD0;
        func_80B98A4C(&arg0->actor, arg1);
        goto block_10;
    }
    if ((arg0->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(&arg0->actor, 0x3000, arg1) != 0)) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
    if ((gSaveContext.playerForm == 2) || (arg0->actor.xzDistToPlayer < 100.0f)) {
        func_800B874C(arg0, arg1, 0x42F00000, 100.0f);
block_10:
    }
    if (arg0->actor.xzDistToPlayer > 100.0f) {
        gSaveContext.weekEventReg[41] &= 0xDF;
    }
}

void func_80B98E10(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    s16 temp_a1_2;
    u16 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u16 phi_a1;

    if (gSaveContext.playerForm == 2) {
        temp_a1 = arg0->home.rot.z;
        arg0 = arg0;
        if (Flags_GetSwitch(arg1, temp_a1 & 0x7F) != 0) {
            temp_v0 = gSaveContext.weekEventReg[40];
            phi_a1 = 0x12C3U;
            if ((temp_v0 & 4) != 0) {
                phi_a1 = 0x12C5U;
            } else {
                gSaveContext.weekEventReg[40] = temp_v0 | 4;
            }
        } else {
            temp_v0_2 = gSaveContext.weekEventReg[40];
            phi_a1 = 0x12C0U;
            if ((temp_v0_2 & 2) != 0) {
                phi_a1 = 0x12C2U;
            } else {
                gSaveContext.weekEventReg[40] = temp_v0_2 | 2;
            }
        }
    } else {
        temp_a1_2 = arg0->home.rot.z;
        arg0 = arg0;
        if (Flags_GetSwitch(arg1, temp_a1_2 & 0x7F) != 0) {
            temp_v0_3 = arg0->unk2F2;
            phi_a1 = 0x12BEU;
            if ((temp_v0_3 & 0x10) != 0) {
                phi_a1 = 0x12BFU;
            } else {
                arg0->unk2F2 = (u16) (temp_v0_3 | 0x10);
            }
        } else {
            temp_v0_4 = gSaveContext.weekEventReg[40];
            if ((temp_v0_4 & 1) != 0) {
                phi_a1 = 0x12BCU;
            } else {
                gSaveContext.weekEventReg[40] = temp_v0_4 | 1;
                arg0->unk2F2 = (u16) (arg0->unk2F2 | 4);
                phi_a1 = 0x12BBU;
            }
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80B98F30(Actor *arg0, GlobalContext *arg1) {
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->unk2F8 = func_80B990A4;
        return;
    }
    func_800B8A1C(arg0, arg1, 2, 10000.0f, 50.0f);
}

void func_80B98F94(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    if ((arg0->unk2F2 & 4) == 0) {
        Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 2, 0x800, (s16) 0x100);
        arg0->world.rot.y = arg0->shape.rot.y;
    }
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1->msgCtx.unk11F04;
        switch (temp_v0) {
        case 4795:
            arg0->unk2F2 = (u16) (arg0->unk2F2 & 0xFFFB);
            // fallthrough
        case 4796:
        case 4800:
        case 4803:
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        case 4798:
            func_801477B4(arg1);
            arg0->unk2F8 = func_80B98F30;
            func_80B98F30(arg0, arg1);
            return;
        default:
            func_801477B4(arg1);
            arg0->unk2F8 = (void (*)(Actor *, GlobalContext *)) func_80B990A4;
            // Duplicate return node #10. Try simplifying control flow for better match
            return;
        }
    }
}

void func_80B990A4(EnZot *arg0, GlobalContext *arg1) {
    Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.home.rot.y, 2, 0x400, (s16) 0x100);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = (void (*)(EnZot *, GlobalContext *)) func_80B98F94;
        func_80B98E10(&arg0->actor, arg1);
        return;
    }
    if ((Actor_IsLinkFacingActor(&arg0->actor, 0x3000, arg1) != 0) && (arg0->actor.xzDistToPlayer < 100.0f)) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
}

void func_80B99160(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;
    u16 phi_a1;

    if (gSaveContext.playerForm == 2) {
        temp_v0 = gSaveContext.weekEventReg[40];
        phi_a1 = 0x12CAU;
        if ((temp_v0 & 0x10) != 0) {
            phi_a1 = 0x12CDU;
        } else {
            gSaveContext.weekEventReg[40] = temp_v0 | 0x10;
        }
    } else {
        temp_v0_2 = gSaveContext.weekEventReg[40];
        phi_a1 = 0x12C6U;
        if ((temp_v0_2 & 8) != 0) {
            phi_a1 = 0x12C9U;
        } else {
            gSaveContext.weekEventReg[40] = temp_v0_2 | 8;
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80B991E4(EnZot *arg0, GlobalContext *arg1) {
    u16 temp_v1;

    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.yawTowardsPlayer, 2, 0x800, (s16) 0x100);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v1 = arg1->msgCtx.unk11F04;
        if ((temp_v1 == 0x12C6) || (temp_v1 == 0x12C7) || (temp_v1 == 0x12CA) || (temp_v1 == 0x12CB)) {
            func_80151938(arg1, (temp_v1 + 1) & 0xFFFF);
            return;
        }
        func_801477B4(arg1);
        arg0->actionFunc = func_80B992C0;
        func_80B96BEC(arg0, 1, 0U);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_80B992C0(EnZot *arg0, GlobalContext *arg1) {
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80B991E4;
        func_80B99160(&arg0->actor, arg1);
        arg0->actor.speedXZ = 0.0f;
        func_80B96BEC(arg0, 0, 0U);
        return;
    }
    if ((Actor_IsLinkFacingActor(&arg0->actor, 0x3000, arg1) != 0) && (arg0->actor.xzDistToPlayer < 100.0f)) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
    arg0->actor.speedXZ = 1.5f;
    func_80B96FB0(arg0);
}

void func_80B99384(EnZot *arg0, GlobalContext *arg1) {

}

void EnZot_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnZot *this = (EnZot *) thisx;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a2;
    s16 temp_v1;
    u16 temp_v0;
    s16 phi_v0;
    s16 phi_v1;

    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    temp_a2 = &this->unk188;
    sp30 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 15.0f, 30.0f, 5U);
    this->unk2F2 &= 0xFFBF;
    if ((SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) && (this->unk2F0 != 0)) {
        this->unk2F2 |= 0x40;
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk2F2;
    if ((temp_v0 & 8) == 0) {
        if (((temp_v0 & 4) == 0) && (func_80B96DF0(&this->actor, globalCtx) != 0)) {
            func_800E9250(globalCtx, &this->actor, &this->unk2C4, &this->unk2CA, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        } else {
            Math_SmoothStepToS(&this->unk2C4.x, 0, 6, 0x1838, (s16) 0x64);
            Math_SmoothStepToS(&this->unk2C4.y, 0, 6, 0x1838, (s16) 0x64);
            Math_SmoothStepToS(&this->unk2CA.x, 0, 6, 0x1838, (s16) 0x64);
            Math_SmoothStepToS(&this->unk2CA.y, 0, 6, 0x1838, (s16) 0x64);
        }
    }
    temp_v1 = this->unk2EE;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk2EE = temp_v1 - 1;
        phi_v0 = this->unk2EE;
    }
    phi_v1 = this->unk2EE;
    if (phi_v0 == 0) {
        this->unk2EE = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk2EE;
    }
    this->unk2EC = phi_v1;
    if ((s32) this->unk2EC >= 3) {
        this->unk2EC = 0;
    }
}

void *func_80B99580(GraphicsContext *arg0) {
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w0 = 0xDF000000;
    temp_v1->words.w1 = 0;
    return temp_v1;
}

s32 func_80B995A4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 sp20;
    s16 temp_v0;
    s32 temp_v0_2;

    if (arg1 == 0xF) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk2C6, 1);
        SysMatrix_InsertZRotation_s(arg5->unk2C4, 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    }
    if (arg1 == 8) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk2CC * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2CA * -1), 1);
    }
    temp_v0 = arg5->unk2F0;
    if (((temp_v0 == 8) || (temp_v0 == 9)) && ((arg1 == 8) || (arg1 == 0xA) || (arg1 == 0xD))) {
        temp_v0_2 = arg1 * 0x32;
        sp20 = temp_v0_2;
        arg4->y += (s32) (Math_SinS((s16) (arg0->state.frames * (temp_v0_2 + 0x814))) * 200.0f);
        arg4->z += (s32) (Math_CosS((s16) (arg0->state.frames * (temp_v0_2 + 0x940))) * 200.0f);
    }
    return 0;
}

void func_80B99758(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_80B99934, arg4 + 0x3C);
    }
}

void EnZot_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnZot *this = (EnZot *) thisx;
    ? sp4C;
    GraphicsContext *sp44;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;

    sp4C.unk0 = (s32) D_80B99940.unk0;
    sp4C.unk4 = (s32) D_80B99940.unk4;
    sp4C.unk8 = (s32) D_80B99940.unk8;
    temp_a0 = globalCtx->state.gfxCtx;
    sp44 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0xFF;
    temp_v0->words.w0 = 0xFB000000;
    temp_v0_2 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp44 = sp44;
    sp38 = temp_v0_2;
    sp38->words.w1 = Lib_SegmentedToVirtual((sp + (this->unk2EC * 4))->unk4C);
    temp_v0_3 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060030;
    sp34 = temp_v0_3;
    sp34->words.w1 = func_80B99580(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80B995A4, func_80B99758, &this->actor);
}

