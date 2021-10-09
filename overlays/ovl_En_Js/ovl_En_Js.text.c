? func_801149A0(?, u8);                             /* extern */
? func_80114A9C(s16);                               /* extern */
? func_8016566C(?);                                 /* extern */
? func_80165690(u32);                               /* extern */
void func_80968A5C(EnJs *arg0, EnJs *);             /* static */
void func_80968B18(EnJs *arg0);                     /* static */
? func_80968B8C(EnJs *arg0, GlobalContext *arg1);   /* static */
? func_80968CB8(EnJs *arg0);                        /* static */
s32 func_80968DD0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80968E38(s32 arg0);                        /* static */
s32 func_80968F48();                                /* static */
void func_809691B8(s32 arg0, s32 arg1, s32);        /* static */
s32 func_809692A8(u32 arg0);                        /* static */
s32 func_8096933C(s32 arg0, u16, Actor *);          /* static */
void func_80969400(s32 arg0);                       /* static */
void func_80969494(EnJs *arg0, GlobalContext *arg1); /* static */
void func_809694E8(EnJs *arg0, GlobalContext *arg1); /* static */
void func_80969530(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_809695FC(EnJs *arg0, GlobalContext *arg1); /* static */
void func_80969688(Actor *arg0);                    /* static */
void func_809696EC(Actor *arg0, s16 arg1);          /* static */
void func_8096971C(EnJs *arg0, GlobalContext *arg1); /* static */
void func_80969748(EnJs *arg0, GlobalContext *arg1); /* static */
void func_80969898(EnJs *arg0, GlobalContext *arg1); /* static */
void func_80969AA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80969B5C(EnJs *arg0, GlobalContext *arg1); /* static */
void func_80969C54(EnJs *arg0, GlobalContext *arg1); /* static */
void func_80969DA4(EnJs *arg0, GlobalContext *arg1); /* static */
void func_8096A080(Actor *arg0, GlobalContext *arg1); /* static */
void func_8096A104(EnJs *arg0, GlobalContext *arg1); /* static */
void func_8096A184(Actor *arg0, GlobalContext *arg1); /* static */
void func_8096A1E8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8096A2C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8096A38C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8096A6F4(EnJs *arg0, GlobalContext *arg1); /* static */
void func_8096A9F4(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06010880;
extern AnimationHeader D_06010CD8;
extern FlexSkeletonHeader D_060164B8;
extern AnimationHeaderCommon D_06016F58;
extern AnimationHeader D_0601764C;
extern AnimationHeader D_06017E98;
static ColliderCylinderInit D_8096ABA0 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x28, 0, {0, 0, 0}},
};
static ? D_8096ABCC;                                /* unable to generate initializer */
static ? D_8096ABE0;                                /* unable to generate initializer */
static ? D_8096ABF4;                                /* unable to generate initializer */
static ? D_8096AC08;                                /* unable to generate initializer */
static ? D_8096AC1C;                                /* unable to generate initializer */
static Vec3f D_8096AC30 = {500.0f, -500.0f, 0.0f};

typedef struct EnJs {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ ColliderCylinder unk188;           /* inferred */
    /* 0x01D4 */ Vec3s unk1D4;                      /* inferred */
    /* 0x01DA */ char pad1DA[0x66];                 /* maybe part of unk1D4[18]? */
    /* 0x0240 */ Vec3s unk240;                      /* inferred */
    /* 0x0246 */ char pad246[0x66];                 /* maybe part of unk240[18]? */
    /* 0x02AC */ u8 *unk2AC;                        /* inferred */
    /* 0x02B0 */ s32 unk2B0;                        /* inferred */
    /* 0x02B4 */ f32 unk2B4;                        /* inferred */
    /* 0x02B8 */ u16 unk2B8;                        /* inferred */
    /* 0x02BA */ s16 unk2BA;                        /* inferred */
    /* 0x02BC */ s16 unk2BC;                        /* inferred */
    /* 0x02BE */ s16 unk2BE;                        /* inferred */
    /* 0x02C0 */ char pad2C0[0x2];                  /* maybe part of unk2BE[2]? */
    /* 0x02C2 */ s16 unk2C2;                        /* inferred */
    /* 0x02C4 */ void (*actionFunc)(EnJs *, GlobalContext *);
} EnJs;                                             /* size 0x2C8 */

void EnJs_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnJs *this = (EnJs *) thisx;
    SkelAnime *sp40;
    SkelAnime *temp_a1;
    s32 temp_s1;
    u32 temp_v0;
    s16 phi_s0;
    EnJs *phi_s2;
    s32 phi_s1;

    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    temp_a1 = &this->unk144;
    sp40 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_060164B8, &D_06017E98, &this->unk1D4, &this->unk240, 0x12);
    SkelAnime_ChangeAnimDefaultRepeat(sp40, &D_06017E98);
    Collider_InitAndSetCylinder(globalCtx, &this->unk188, &this->actor, &D_8096ABA0);
    this->actionFunc = func_8096971C;
    this->unk2BA = 0;
    this->actor.minVelocityY = -9.0f;
    this->actor.gravity = -1.0f;
    phi_s0 = (s16) this->actor.cutscene;
    phi_s2 = this;
    phi_s1 = 0;
    do {
        phi_s2->unk2BE = phi_s0;
        if (phi_s0 != -1) {
            this->actor.cutscene = (s8) phi_s0;
            phi_s0 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        }
        temp_s1 = phi_s1 + 2;
        phi_s2 += 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    this->unk2C2 = -1;
    temp_v0 = this->actor.params & 0xF;
    switch (temp_v0) {
    case 0:
        this->unk2BA = 0;
        this->actionFunc = func_8096A6F4;
        SkelAnime_ChangeAnimDefaultRepeat(sp40, &D_0601764C);
        func_8016566C(0x3C);
        if ((gSaveContext.weekEventReg[84] & 0x20) != 0) {
            func_801149A0(0x35, gItemSlots[0x35]);
            gSaveContext.weekEventReg[84] &= 0xDF;
            return;
        }
    default:
        return;
    case 1:
    case 2:
    case 3:
    case 4:
        this->unk2BA = (s16) temp_v0;
        func_80968B8C(this, globalCtx);
        this->actionFunc = func_80969B5C;
        func_80968A5C(this);
        if (func_809692A8((this->actor.params & 0xF) + 4) != 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        // Duplicate return node #11. Try simplifying control flow for better match
        return;
    case 5:
    case 6:
    case 7:
    case 8:
        this->unk2BA = temp_v0 - 4;
        this->actionFunc = func_8096A104;
        // Duplicate return node #11. Try simplifying control flow for better match
        return;
    }
}

void EnJs_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnJs *this = (EnJs *) thisx;
    u32 temp_a0;

    Collider_DestroyCylinder(globalCtx, &this->unk188);
    temp_a0 = this->actor.params & 0xF;
    switch (temp_a0) {
    case 0:
        func_80165690(temp_a0);
        return;
    case 5:
    case 6:
    case 7:
    case 8:
        if (func_809692A8(temp_a0) == 0) {
            func_80969400(this->actor.params & 0xF);
        }
        // fallthrough
    default:
        return;
    }
}

void func_80968A5C(EnJs *arg0) {
    if (Rand_ZeroOne() < 0.5f) {
        SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06010CD8, -10.0f);
        arg0->unk2B4 = 5.0f;
    } else {
        SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06010880, -10.0f);
        arg0->unk2B4 = 2.5f;
    }
    arg0->unk2B8 &= 0xFFFB;
    arg0->unk2BC = (s16) (s32) (Rand_ZeroFloat(40.0f) + 80.0f);
}

void func_80968B18(EnJs *arg0) {
    SkelAnime *temp_a0;
    s32 temp_f10;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06017E98, -10.0f);
    arg0->unk2B4 = 0.0f;
    temp_f10 = (s32) (Rand_ZeroFloat(20.0f) + 40.0f);
    arg0->unk2B8 |= 4;
    arg0->unk2BC = (s16) temp_f10;
}

? func_80968B8C(EnJs *arg0, GlobalContext *arg1) {
    u8 *sp2C;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v1;
    u8 *temp_t8;
    u8 temp_a1;
    s32 phi_v1;
    void *phi_a0;
    f32 phi_f12;
    s32 phi_a1;

    temp_v0 = (s32) (arg0->actor.params & 0xFC00) >> 0xA;
    phi_f12 = 0.0f;
    if (temp_v0 != 0x3F) {
        temp_t8 = arg1->setupPathList + (temp_v0 * 8);
        arg0->unk2AC = temp_t8;
        if (temp_t8 != 0) {
            sp18 = 0.0f;
            sp2C = temp_t8;
            arg0 = arg0;
            temp_a1 = *sp2C;
            phi_v1 = 0;
            phi_a0 = Lib_SegmentedToVirtual(temp_t8->unk4);
            phi_a1 = (s32) temp_a1;
            if ((s32) temp_a1 > 0) {
                do {
                    temp_f0 = (f32) phi_a0->unk0 - arg0->actor.world.pos.x;
                    temp_f2 = (f32) phi_a0->unk4 - arg0->actor.world.pos.z;
                    temp_f4 = temp_f0 * temp_f0;
                    temp_f6 = temp_f2 * temp_f2;
                    if (phi_v1 == 0) {
                        arg0->unk2B0 = 0;
                        goto block_7;
                    }
                    if ((temp_f4 + temp_f6) < phi_f12) {
                        arg0->unk2B0 = phi_v1;
block_7:
                        phi_a1 = (s32) *sp2C;
                        phi_f12 = temp_f4 + temp_f6;
                    }
                    temp_v1 = phi_v1 + 1;
                    phi_v1 = temp_v1;
                    phi_a0 += 6;
                } while (temp_v1 < phi_a1);
            }
            temp_t2 = arg0->unk2B0 + 1;
            arg0->unk2B0 = temp_t2;
            if (temp_t2 >= (s32) *sp2C) {
                goto block_12;
            }
        }
    } else {
        arg0->unk2AC = NULL;
block_12:
        arg0->unk2B0 = 0;
    }
    return 0;
}

? func_80968CB8(EnJs *arg0) {
    u8 *sp34;
    f32 sp2C;
    f32 sp28;
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_t2;
    u8 *temp_v0;
    void *temp_v1;

    temp_v0 = arg0->unk2AC;
    if (temp_v0 == 0) {
        return 1;
    }
    sp34 = temp_v0;
    temp_v1 = Lib_SegmentedToVirtual(temp_v0->unk4) + (arg0->unk2B0 * 6);
    temp_f12 = (f32) temp_v1->unk0 - arg0->actor.world.pos.x;
    temp_f14 = (f32) temp_v1->unk4 - arg0->actor.world.pos.z;
    sp2C = temp_f12;
    sp28 = temp_f14;
    arg0->actor.world.rot.y = Math_Atan2S(temp_f12, temp_f14);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 2, 0x7D0, (s16) 0xC8);
    if (((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < 100.0f) {
        temp_t2 = arg0->unk2B0 + 1;
        arg0->unk2B0 = temp_t2;
        if (temp_t2 >= (s32) *sp34) {
            arg0->unk2B0 = 0;
        }
        return 1;
    }
    Math_StepToF(arg0 + 0x70, arg0->unk2B4, 0.5f);
    return 0;
}

s32 func_80968DD0(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x3000) != 0)) {
        return 1;
    }
    return 0;
}

s32 func_80968E38(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    u8 temp_a3;
    s32 phi_v0;
    s32 phi_a1;
    s32 phi_v0_2;
    s32 phi_a1_2;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    s32 phi_v1_6;
    s32 phi_v1_7;
    s32 phi_v1_8;
    s32 phi_v1_9;

    if ((arg0 < 0) || (phi_v1_9 = 0, ((arg0 < 9) == 0))) {
        return 0;
    }
    temp_a0 = arg0 * 3;
    phi_v0 = 1;
    phi_a1 = 0;
    phi_v0_2 = 1;
    phi_a1_2 = 0;
    do {
        phi_v1_8 = phi_v1_9;
        if ((*(gSaveContext.maskMaskBit + temp_a0) & phi_v0) != 0) {
            phi_v1_8 = phi_v1_9 + 1;
        }
        temp_a1 = phi_a1 + 1;
        phi_v0 = (phi_v0 * 2) & 0xFF;
        phi_a1 = temp_a1;
        phi_v1_7 = phi_v1_8;
        phi_v1_9 = phi_v1_8;
    } while (temp_a1 < 8);
    temp_a0_2 = temp_a0 + 1;
    do {
        phi_v1_6 = phi_v1_7;
        if ((gSaveContext.maskMaskBit[temp_a0_2] & phi_v0_2) != 0) {
            phi_v1_6 = phi_v1_7 + 1;
        }
        temp_a1_2 = phi_a1_2 + 1;
        phi_v0_2 = (phi_v0_2 * 2) & 0xFF;
        phi_a1_2 = temp_a1_2;
        phi_v1_5 = phi_v1_6;
        phi_v1_7 = phi_v1_6;
    } while (temp_a1_2 < 8);
    temp_a3 = gSaveContext.maskMaskBit[temp_a0_2 + 1];
    if ((temp_a3 & 1) != 0) {
        phi_v1_5 = phi_v1_6 + 1;
    }
    phi_v1_4 = phi_v1_5;
    if (temp_a3 & 2) {
        phi_v1_4 = phi_v1_5 + 1;
    }
    temp_a2 = (2 * 2) & 0xFF;
    phi_v1_3 = phi_v1_4;
    if ((temp_a3 & temp_a2) != 0) {
        phi_v1_3 = phi_v1_4 + 1;
    }
    temp_a2_2 = (temp_a2 * 2) & 0xFF;
    phi_v1_2 = phi_v1_3;
    if ((temp_a3 & temp_a2_2) != 0) {
        phi_v1_2 = phi_v1_3 + 1;
    }
    phi_v1 = phi_v1_2;
    if ((temp_a3 & ((temp_a2_2 * 2) & 0xFF)) != 0) {
        phi_v1 = phi_v1_2 + 1;
    }
    return phi_v1;
}

s32 func_80968F48(void) {
    s32 sp1C;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    s32 phi_v1_6;
    s32 phi_v1_7;
    s32 phi_v1_8;
    s32 phi_v1_9;
    s32 phi_v1_10;
    s32 phi_v1_11;
    s32 phi_v1_12;
    s32 phi_v1_13;
    s32 phi_v1_14;
    s32 phi_v1_15;
    s32 phi_v1_16;
    s32 phi_v1_17;
    s32 phi_v1_18;
    s32 phi_v1_19;
    s32 phi_v1_20;

    phi_v1_20 = 0;
    if (gSaveContext.inventory.items[gItemSlots->unk36] == 0x36) {
        phi_v1_20 = 1;
    }
    phi_v1_19 = phi_v1_20;
    if (gSaveContext.inventory.items[gItemSlots->unk37] == 0x37) {
        phi_v1_19 = phi_v1_20 + 1;
    }
    phi_v1_18 = phi_v1_19;
    if (gSaveContext.inventory.items[gItemSlots->unk38] == 0x38) {
        phi_v1_18 = phi_v1_19 + 1;
    }
    phi_v1_17 = phi_v1_18;
    if (gSaveContext.inventory.items[gItemSlots->unk39] == 0x39) {
        phi_v1_17 = phi_v1_18 + 1;
    }
    phi_v1_16 = phi_v1_17;
    if (gSaveContext.inventory.items[gItemSlots->unk3A] == 0x3A) {
        phi_v1_16 = phi_v1_17 + 1;
    }
    phi_v1_15 = phi_v1_16;
    if (gSaveContext.inventory.items[gItemSlots->unk3B] == 0x3B) {
        phi_v1_15 = phi_v1_16 + 1;
    }
    phi_v1_14 = phi_v1_15;
    if (gSaveContext.inventory.items[gItemSlots->unk3C] == 0x3C) {
        phi_v1_14 = phi_v1_15 + 1;
    }
    phi_v1_13 = phi_v1_14;
    if (gSaveContext.inventory.items[gItemSlots->unk3D] == 0x3D) {
        phi_v1_13 = phi_v1_14 + 1;
    }
    phi_v1_12 = phi_v1_13;
    if (gSaveContext.inventory.items[gItemSlots->unk3E] == 0x3E) {
        phi_v1_12 = phi_v1_13 + 1;
    }
    phi_v1_11 = phi_v1_12;
    if (gSaveContext.inventory.items[gItemSlots->unk3F] == 0x3F) {
        phi_v1_11 = phi_v1_12 + 1;
    }
    phi_v1_10 = phi_v1_11;
    if (gSaveContext.inventory.items[gItemSlots->unk40] == 0x40) {
        phi_v1_10 = phi_v1_11 + 1;
    }
    phi_v1_9 = phi_v1_10;
    if (gSaveContext.inventory.items[gItemSlots->unk41] == 0x41) {
        phi_v1_9 = phi_v1_10 + 1;
    }
    phi_v1_8 = phi_v1_9;
    if (gSaveContext.inventory.items[gItemSlots->unk42] == 0x42) {
        phi_v1_8 = phi_v1_9 + 1;
    }
    phi_v1_7 = phi_v1_8;
    if (gSaveContext.inventory.items[gItemSlots->unk43] == 0x43) {
        phi_v1_7 = phi_v1_8 + 1;
    }
    phi_v1_6 = phi_v1_7;
    if (gSaveContext.inventory.items[gItemSlots->unk44] == 0x44) {
        phi_v1_6 = phi_v1_7 + 1;
    }
    phi_v1_5 = phi_v1_6;
    if (gSaveContext.inventory.items[gItemSlots->unk45] == 0x45) {
        phi_v1_5 = phi_v1_6 + 1;
    }
    phi_v1_4 = phi_v1_5;
    if (gSaveContext.inventory.items[gItemSlots->unk46] == 0x46) {
        phi_v1_4 = phi_v1_5 + 1;
    }
    phi_v1_3 = phi_v1_4;
    if (gSaveContext.inventory.items[gItemSlots->unk47] == 0x47) {
        phi_v1_3 = phi_v1_4 + 1;
    }
    phi_v1_2 = phi_v1_3;
    if (gSaveContext.inventory.items[gItemSlots->unk48] == 0x48) {
        phi_v1_2 = phi_v1_3 + 1;
    }
    phi_v1 = phi_v1_2;
    if (gSaveContext.inventory.items[gItemSlots->unk49] == 0x49) {
        phi_v1 = phi_v1_2 + 1;
    }
    sp1C = phi_v1;
    return phi_v1 - func_80968E38(0);
}

void func_809691B8(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_t0;
    u8 *temp_t0_2;

    if ((arg1 >= 0) && (temp_a0 = arg0 - 0x3A, ((arg1 < 9) != 0))) {
        temp_a1 = arg1 * 3;
        if (temp_a0 < 8) {
            temp_a2 = gSaveContext.maskMaskBit + temp_a1;
            temp_v1 = 1 << temp_a0;
            *temp_a2 |= temp_v1;
            gSaveContext.maskMaskBit[0] = gSaveContext.maskMaskBit[0] | temp_v1;
            return;
        }
        temp_a0_2 = temp_a0 - 8;
        temp_a1_2 = temp_a1 + 1;
        if (temp_a0_2 < 8) {
            temp_t0 = gSaveContext.maskMaskBit;
            temp_a2_2 = &temp_t0[temp_a1_2];
            temp_v1_2 = 1 << temp_a0_2;
            *temp_a2_2 |= temp_v1_2;
            temp_t0[1] |= temp_v1_2;
            return;
        }
        temp_a0_3 = temp_a0_2 - 8;
        if (temp_a0_3 < 6) {
            temp_t0_2 = gSaveContext.maskMaskBit;
            temp_a2_3 = &temp_t0_2[temp_a1_2 + 1];
            temp_v1_3 = 1 << temp_a0_3;
            *temp_a2_3 |= temp_v1_3;
            temp_t0_2[2] |= temp_v1_3;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

s32 func_809692A8(s32 arg0) {
    s32 phi_v0;

    phi_v0 = 0;
    switch (arg0) {
    case 1:
    case 2:
    case 3:
    case 4:
        if (func_80968E38() < arg0) {
            return 0;
        }
        return 1;
    case 5:
    case 6:
    case 7:
    case 8:
        if (func_80968E38() < (arg0 - 4)) {
            return 0;
        }
        phi_v0 = 1;
    default:
        return phi_v0;
    }
}

s32 func_8096933C(s32 arg0) {
    s32 sp1C;
    s32 phi_v0;

    phi_v0 = 0;
    switch (arg0) {
    case 1:
    case 2:
    case 3:
    case 4:
        sp1C = func_80968F48();
        if ((func_80968E38(arg0) + sp1C) < arg0) {
            return 0;
        }
        return 1;
    case 5:
    case 6:
    case 7:
    case 8:
        sp1C = func_80968F48();
        if ((func_80968E38(arg0) + sp1C) < (arg0 - 4)) {
            return 0;
        }
        phi_v0 = 1;
    default:
        return phi_v0;
    }
}

void func_80969400(s32 arg0) {
    u8 temp_t9;
    void *temp_v0;

    if ((arg0 >= 0) && (arg0 < 9)) {
        temp_v0 = (arg0 * 3) + 0x48CA + &gSaveContext;
        gSaveContext.maskMaskBit[0] = gSaveContext.maskMaskBit[0] & ~temp_v0->unk0;
        gSaveContext.maskMaskBit[1] = gSaveContext.maskMaskBit[1] & ~temp_v0->unk1;
        temp_t9 = temp_v0->unk2 & 0xF;
        temp_v0->unk2 = temp_t9;
        gSaveContext.maskMaskBit[2] = gSaveContext.maskMaskBit[2] & ~temp_t9;
        temp_v0->unk0 = 0U;
        temp_v0->unk1 = 0U;
        temp_v0->unk2 = 0U;
    }
}

void func_80969494(EnJs *arg0, GlobalContext *arg1) {
    EnJs *temp_a0;
    EnJs *temp_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_80968A5C(temp_a0, temp_a2);
    func_801477B4(arg1);
    arg0->actionFunc = func_80969B5C;
    arg0->actor.flags &= -0x101;
}

void func_809694E8(EnJs *arg0, GlobalContext *arg1) {
    arg0 = arg0;
    func_801477B4(arg1);
    arg0->actionFunc = func_8096A104;
    arg0->actor.flags &= -0x101;
}

void func_80969530(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t6;

    func_801477B4(arg1);
    arg0->flags &= -0x101;
    arg0->unk2C4 = func_8096A6F4;
    if ((arg0->shape.rot.y == arg0->home.rot.y) && ((arg0->unk2B8 & 0x10) != 0)) {
        SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06016F58, -1.0f, (f32) SkelAnime_GetFrameCount(&D_06016F58) - 1.0f, 0.0f, (u8) 2, -10.0f);
        temp_t6 = arg0->unk2B8 & 0xFFEF;
        arg0->unk2B8 = temp_t6;
        arg0->unk2B8 = (u16) (temp_t6 | 8);
    }
}

s32 func_809695FC(EnJs *arg0, GlobalContext *arg1) {
    if (((s32) (arg0->actor.params & 0x3F0) >> 4) == 0x3F) {
        return 0;
    }
    arg1->sceneLoadFlag = 0x14;
    arg1->nextEntranceIndex = *(arg1->setupExitList + (((s32) (arg0->actor.params & 0x3F0) >> 4) * 2));
    arg0->actionFunc = func_8096971C;
    arg1->msgCtx.unk11F10 = 0;
    gSaveContext.respawnFlag = -2;
    return 1;
}

void func_80969688(Actor *arg0) {
    s16 temp_a0;

    if (arg0->unk2C2 != -1) {
        arg0 = arg0;
        temp_a0 = (arg0 + (arg0->unk2C2 * 2))->unk2BE;
        if (ActorCutscene_GetCurrentIndex() == temp_a0) {
            arg0 = arg0;
            ActorCutscene_Stop(temp_a0);
        }
        arg0->unk2C2 = -1;
    }
}

void func_809696EC(Actor *arg0, s16 arg1) {
    func_80969688(arg0);
    arg0->unk2C2 = arg1;
}

void func_8096971C(EnJs *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
}

void func_80969748(void *arg0, GlobalContext *arg1) {
    s32 sp2C;
    void *sp28;
    s32 temp_ret;
    s32 temp_v0;

    sp28 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_SmoothStepToS(arg0 + 0x32, arg0->unk92, 6, 0x1838, (s16) 0x64);
    arg0->unkBE = (s16) arg0->unk32;
    if (func_80152498(arg1 + 0x4908) == 0x10) {
        temp_ret = func_80123810(arg1);
        temp_v0 = temp_ret;
        if (temp_v0 != 0) {
            arg0->unk2C4 = func_80969898;
        }
        if (temp_v0 > 0) {
            sp2C = temp_v0;
            func_801477B4(arg1);
            if ((temp_v0 >= 0x3A) && (temp_v0 < 0x4E)) {
                sp2C = temp_v0;
                func_809691B8(temp_v0, arg0->unk1C & 0xF, temp_v0);
                func_80114A9C((s16) (temp_v0 - 4));
                if (func_809692A8(arg0->unk1C & 0xF) == 0) {
                    sp28->textId = 0x2212;
                } else {
                    sp28->textId = 0x2213;
                }
            } else if ((temp_v0 >= 0x4E) && (temp_v0 < 0x52)) {
                sp28->textId = 0x2211;
            } else {
                sp28->textId = 0x2210;
            }
        }
        if (temp_ret < 0) {
            func_80151938(arg1, 0x2216U);
        }
    }
}

void func_80969898(EnJs *arg0, GlobalContext *arg1) {
    void *sp28;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;

    sp28 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_SmoothStepToS(arg0 + 0x32, arg0->actor.yawTowardsPlayer, 6, 0x1838, (s16) 0x64);
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 != 4) {
        if (temp_v0 != 5) {
            return;
        }
        if (func_80147624(arg1) != 0) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 8716:
                arg0->unk2B8 |= 1;
                if (func_8096933C(arg0->actor.params & 0xF) == 0) {
                    func_80151938(arg1, 0x220FU);
                    return;
                }
                func_80151938(arg1, 0x220DU);
                return;
            case 8717:
            case 8723:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                return;
            case 8718:
                func_80151938(arg1, 0xFFU);
                arg0->actionFunc = func_80969748;
                return;
            case 8720:
            case 8721:
            case 8722:
                sp28->unkA87 = 0;
                func_80151938(arg1, 0xFFU);
                arg0->actionFunc = func_80969748;
                return;
            case 8724:
            case 8727:
                if (func_809695FC(arg0, arg1) == 0) {
                    func_80969494(arg0, arg1);
                    return;
                }
                // Duplicate return node #22. Try simplifying control flow for better match
                return;
            default:
                func_80969494(arg0, arg1);
                // Duplicate return node #22. Try simplifying control flow for better match
                return;
            }
        } else {
            // Duplicate return node #22. Try simplifying control flow for better match
        }
    } else if ((func_80147624(arg1) != 0) && (arg1->msgCtx.unk11F04 == 0x2215)) {
        temp_v0_3 = arg1->msgCtx.choiceIndex;
        if (temp_v0_3 != 0) {
            if (temp_v0_3 != 1) {
                return;
            }
            func_8019F230();
            func_80151938(arg1, 0x2216U);
            return;
        }
        func_8019F208();
        func_80151938(arg1, 0x2217U);
    }
}

void func_80969AA0(Actor *arg0, GlobalContext *arg1) {
    u16 sp26;
    u16 phi_a3;

    if (gSaveContext.playerForm != 4) {
        phi_a3 = 0x220BU;
    } else {
        phi_a3 = 0x2215U;
        if (func_809692A8(arg0->params & 0xF) == 0) {
            if ((arg0->unk2B8 & 1) != 0) {
                if (func_8096933C(arg0->params & 0xF) == 0) {
                    phi_a3 = 0x220FU;
                } else {
                    phi_a3 = 0x220EU;
                }
            } else {
                phi_a3 = 0x220CU;
            }
        }
    }
    sp26 = phi_a3;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06017E98, -10.0f);
    func_801518B0(arg1, sp26, arg0);
}

void func_80969B5C(EnJs *arg0, GlobalContext *arg1) {
    s16 temp_v1;

    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    temp_v1 = arg0->unk2BC;
    if ((s32) temp_v1 > 0) {
        arg0->unk2BC = temp_v1 - 1;
        if (arg0->unk2BC == 0) {
            if ((arg0->unk2B8 & 4) != 0) {
                func_80968A5C(arg0);
            } else {
                func_80968B18(arg0);
            }
        }
    }
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80969898;
        arg0->actor.speedXZ = 0.0f;
        arg0->unk2B4 = 0.0f;
        func_80969AA0(&arg0->actor, arg1);
    } else if ((arg0->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(&arg0->actor, 0x3000, arg1) != 0)) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
    func_80968CB8(arg0);
}

void func_80969C54(EnJs *arg0, GlobalContext *arg1) {
    s32 sp2C;
    void *sp28;
    s32 temp_ret;
    s32 temp_v0;

    sp28 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_SmoothStepToS(arg0 + 0x32, arg0->actor.yawTowardsPlayer, 6, 0x1838, (s16) 0x64);
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    if (func_80152498(arg1 + 0x4908) == 0x10) {
        temp_ret = func_80123810(arg1);
        temp_v0 = temp_ret;
        if (temp_v0 != 0) {
            arg0->actionFunc = func_80969DA4;
        }
        if (temp_v0 > 0) {
            sp2C = temp_v0;
            func_801477B4(arg1);
            if ((temp_v0 >= 0x3A) && (temp_v0 < 0x4E)) {
                sp2C = temp_v0;
                func_809691B8(temp_v0, arg0->actor.params & 0xF, temp_v0);
                func_80114A9C((s16) (temp_v0 - 4));
                if (func_809692A8(arg0->actor.params & 0xF) == 0) {
                    sp28->textId = 0x2221;
                } else {
                    sp28->textId = 0x2222;
                }
            } else if ((temp_v0 >= 0x4E) && (temp_v0 < 0x52)) {
                sp28->textId = 0x2220;
            } else {
                sp28->textId = 0x221D;
            }
        }
        if (temp_ret < 0) {
            func_80151938(arg1, 0x221EU);
        }
    }
}

void func_80969DA4(EnJs *arg0, GlobalContext *arg1) {
    void *sp30;
    void *sp28;
    s32 temp_v0_3;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u8 temp_v0;
    u8 temp_v0_5;

    sp30 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_SmoothStepToS(arg0 + 0x32, arg0->actor.yawTowardsPlayer, 6, 0x1838, (s16) 0x64);
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 != 4) {
        if (temp_v0 != 5) {
            return;
        }
        if (func_80147624(arg1) != 0) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 8731:
                if (func_8096933C(arg0->actor.params & 0xF) == 0) {
                    func_80151938(arg1, 0x2219U);
                    return;
                }
                func_80151938(arg1, 0x221CU);
                return;
            case 8740:
            case 8742:
            case 8744:
            case 8746:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                return;
            case 8741:
            case 8743:
            case 8745:
            case 8747:
                if (func_809695FC(arg0, arg1) == 0) {
                    func_809694E8(arg0, arg1);
                    return;
                }
                // Duplicate return node #34. Try simplifying control flow for better match
                return;
            case 8738:
                sp30->unkA87 = 0;
                func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
                return;
            case 8739:
                temp_v0_3 = arg0->actor.params & 0xF;
                if (temp_v0_3 != 5) {
                    if (temp_v0_3 != 6) {
                        if (temp_v0_3 != 7) {
                            if (temp_v0_3 != 8) {
                                return;
                            }
                            func_80151938(arg1, 0x222AU);
                            return;
                        }
                        func_80151938(arg1, 0x2228U);
                        return;
                    }
                    func_80151938(arg1, 0x2226U);
                    return;
                }
                func_80151938(arg1, 0x2224U);
                return;
            case 8732:
                func_80151938(arg1, 0xFFU);
                arg0->actionFunc = func_80969C54;
                return;
            case 8733:
            case 8736:
            case 8737:
                sp30->unkA87 = 0;
                func_80151938(arg1, 0xFFU);
                arg0->actionFunc = func_80969C54;
                return;
            default:
                func_809694E8(arg0, arg1);
                // Duplicate return node #34. Try simplifying control flow for better match
                return;
            }
        } else {
            // Duplicate return node #34. Try simplifying control flow for better match
        }
    } else if ((func_80147624(arg1) != 0) && ((temp_v0_4 = arg1->msgCtx.unk11F04, (temp_v0_4 == 0x2219)) || (temp_v0_4 == 0x221E))) {
        temp_v0_5 = arg1->msgCtx.choiceIndex;
        if (temp_v0_5 != 0) {
            if (temp_v0_5 != 1) {
                return;
            }
            sp28 = arg1 + 0x10000;
            func_8019F230();
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        }
        func_8019F208();
        if (func_809695FC(arg0, arg1) == 0) {
            func_809694E8(arg0, arg1);
            return;
        }
        // Duplicate return node #34. Try simplifying control flow for better match
    }
}

void func_8096A080(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    s16 temp_a0;
    u16 temp_v0;
    u16 phi_a1;
    Actor *phi_a2;

    temp_a2 = arg0;
    phi_a2 = temp_a2;
    if (gSaveContext.playerForm != 4) {
        phi_a1 = 0x2218U;
    } else {
        temp_v0 = temp_a2->unk2B8;
        phi_a1 = 0x221BU;
        if ((temp_v0 & 1) != 0) {
            temp_a0 = temp_a2->params;
            arg0 = temp_a2;
            phi_a2 = arg0;
            if (func_8096933C(temp_a0 & 0xF, 0x221BU, temp_a2) == 0) {
                phi_a1 = 0x2219U;
            } else {
                phi_a1 = 0x221CU;
            }
        } else {
            temp_a2->unk2B8 = (s16) (temp_v0 | 1);
        }
    }
    func_801518B0(arg1, phi_a1, phi_a2);
}

void func_8096A104(EnJs *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = func_80969DA4;
        func_8096A080(&arg0->actor, arg1);
        return;
    }
    if (func_80968DD0(&arg0->actor, arg1) != 0) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
}

void func_8096A184(Actor *arg0, GlobalContext *arg1) {
    u16 phi_a1;

    if (gSaveContext.playerForm != 4) {
        phi_a1 = 0x220BU;
    } else {
        phi_a1 = 0x21FCU;
        if (func_80968E38(0) >= 0x14) {
            phi_a1 = 0x2202U;
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_8096A1E8(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp2C = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06017E98, 0.0f);
    }
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        arg0->unk2C4 = func_8096A38C;
        func_801518B0(arg1, 0x2208U, arg0);
        gSaveContext.weekEventReg[84] |= 0x20;
        func_809696EC(arg0, 0);
        return;
    }
    func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
}

void func_8096A2C0(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp2C = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06017E98, 0.0f);
    }
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->flags |= 0x10000;
        arg0->unk2C4 = func_8096A1E8;
        func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
        return;
    }
    func_800B8A1C(arg0, arg1, 0x7B, 10000.0f, 1000.0f);
}

void func_8096A38C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    void *sp1C;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_3;
    GlobalContext *temp_a0_4;
    GlobalContext *temp_a1;
    SkelAnime *temp_a0;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    void *temp_v1;

    arg1 = arg1;
    temp_a0 = arg0 + 0x144;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        arg1 = arg1;
        SkelAnime_ChangeAnimTransitionRepeat(sp20, &D_06017E98, 0.0f);
        arg0->unk2B8 = (u16) (arg0->unk2B8 | 2);
    }
    arg1 = arg1;
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 != 4) {
        temp_a0_2 = arg1;
        if (temp_v0 != 5) {
            return;
        }
        arg1 = arg1;
        if (func_80147624(temp_a0_2) != 0) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 8706:
            case 8709:
            case 8710:
            case 8713:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                return;
            case 8704:
            case 8712:
                sp1C = arg1 + 0x10000;
                arg1 = arg1;
                func_809696EC(arg0, 1);
                func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
                return;
            case 8711:
                temp_a0_3 = arg1;
                if (gSaveContext.inventory.items[gItemSlots[0x35]] == 0x35) {
                    func_80151938(arg1, 0x2208U);
                    func_809696EC(arg0, 0);
                    return;
                }
                arg1 = arg1;
                func_801477B4(temp_a0_3);
                arg0->unk2C4 = func_8096A2C0;
                func_8096A2C0(arg0, arg1);
                return;
            case 8705:
            case 8714:
                temp_a1 = arg1;
                arg1 = arg1;
                if (func_809695FC((EnJs *) arg0, temp_a1) == 0) {
                    func_80969530(arg0, arg1);
                    return;
                }
                // Duplicate return node #41. Try simplifying control flow for better match
                return;
            default:
                func_80969530(arg0, arg1);
                // Duplicate return node #41. Try simplifying control flow for better match
                return;
            }
        } else {
            // Duplicate return node #41. Try simplifying control flow for better match
        }
    } else {
        temp_a0_4 = arg1;
        arg1 = arg1;
        if (func_80147624(temp_a0_4) != 0) {
            temp_v1 = arg1 + 0x10000;
            temp_v0_3 = arg1->msgCtx.choiceIndex;
            if (temp_v0_3 != 0) {
                if (temp_v0_3 != 1) {

                } else {
                    sp1C = temp_v1;
                    arg1 = arg1;
                    func_8019F230();
                }
            } else {
                sp1C = temp_v1;
                arg1 = arg1;
                func_8019F208();
            }
            temp_v0_4 = (arg1 + 0x10000)->unk680C;
            if (temp_v0_4 != 0x21FC) {
                if (temp_v0_4 != 0x21FE) {
                    if (temp_v0_4 != 0x2203) {
                        return;
                    }
                    temp_v0_5 = (arg1 + 0x10000)->unk6929;
                    if (temp_v0_5 != 0) {
                        if (temp_v0_5 != 1) {
                            return;
                        }
                        func_80151938(arg1, 0x2204U);
                        return;
                    }
                    func_80151938(arg1, 0x2205U);
                    SkelAnime_ChangeAnimTransitionStop(sp20, (AnimationHeader *) &D_06016F58, -5.0f);
                    arg0->unk2B8 = (u16) (arg0->unk2B8 | 0x10);
                    return;
                }
                temp_v0_6 = (arg1 + 0x10000)->unk6929;
                if (temp_v0_6 != 0) {
                    if (temp_v0_6 != 1) {
                        return;
                    }
                    func_80151938(arg1, 0x21FFU);
                    return;
                }
                func_80151938(arg1, 0x2200U);
                func_809696EC(arg0, 0);
                return;
            }
            temp_v0_7 = (arg1 + 0x10000)->unk6929;
            if (temp_v0_7 != 0) {
                if (temp_v0_7 != 1) {
                    return;
                }
                func_80151938(arg1, 0x21FDU);
                return;
            }
            func_80151938(arg1, 0x21FEU);
            SkelAnime_ChangeAnimTransitionStop(sp20, (AnimationHeader *) &D_06016F58, -5.0f);
            arg0->unk2B8 = (u16) (arg0->unk2B8 | 0x10);
        }
    }
}

void func_8096A6F4(EnJs *arg0, GlobalContext *arg1) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    s16 temp_t6;
    u16 temp_t6_2;

    temp_t6 = arg0->actor.home.rot.y;
    sp34 = (SkelAnime *) temp_t6;
    if (arg0->actor.shape.rot.y != temp_t6) {
        Math_SmoothStepToS(&arg0->actor.shape.rot.y, sp36, 2, 0x400, (s16) 0x100);
        if ((arg0->actor.shape.rot.y == arg0->actor.home.rot.y) && ((arg0->unk2B8 & 0x10) != 0)) {
            SkelAnime_ChangeAnim(&arg0->unk144, (AnimationHeader *) &D_06016F58, -1.0f, (f32) SkelAnime_GetFrameCount(&D_06016F58) - 1.0f, 0.0f, (u8) 2, -10.0f);
            temp_t6_2 = arg0->unk2B8 & 0xFFEF;
            arg0->unk2B8 = temp_t6_2;
            arg0->unk2B8 = temp_t6_2 | 8;
        }
        arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    }
    temp_a0 = &arg0->unk144;
    sp34 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_0601764C, -10.0f);
        arg0->unk2B8 &= 0xFFF7;
    }
    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        arg0->actionFunc = (void (*)(EnJs *, GlobalContext *)) func_8096A38C;
        arg0->unk2B8 &= 0xFFFD;
        func_8096A184(&arg0->actor, arg1);
        return;
    }
    if (((arg0->unk2B8 & 8) == 0) && (arg0->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(&arg0->actor, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(&arg0->actor, 0x1000) != 0)) {
        func_800B8614(&arg0->actor, arg1, 120.0f);
    }
}

void EnJs_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnJs *this = (EnJs *) thisx;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;

    temp_a2 = &this->unk188;
    sp28 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 40.0f, 25.0f, 40.0f, 5U);
    this->actionFunc(this, globalCtx);
    if ((this->unk2C2 != -1) && (ActorCutscene_GetCurrentIndex() != (this + (this->unk2C2 * 2))->unk2BE)) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((this + (this->unk2C2 * 2))->unk2BE);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((this + (this->unk2C2 * 2))->unk2BE) != 0) {
            ActorCutscene_Start((this + (this->unk2C2 * 2))->unk2BE, &this->actor);
            return;
        }
        ActorCutscene_SetIntentToPlay((this + (this->unk2C2 * 2))->unk2BE);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_8096A9F4(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Gfx *sp24;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    s16 temp_v1;
    s32 temp_v0;

    if (arg1 == 0xA) {
        SysMatrix_MultiplyVector3fByState(&D_8096AC30, arg4 + 0x3C);
        temp_v1 = arg4->unk2BA;
        if (((s32) temp_v1 >= 0) && ((s32) temp_v1 < 5)) {
            temp_s1 = *arg0;
            if (temp_v1 != 0) {
                temp_f12 = *(&D_8096ABE0 + (temp_v1 * 4));
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                SysMatrix_InsertRotation(0, -0x4000, -0x36B0, 1);
            }
            temp_v0 = arg4->unk2BA * 4;
            SysMatrix_InsertTranslation(*(&D_8096ABF4 + temp_v0), *(&D_8096AC08 + temp_v0), *(&D_8096AC1C + temp_v0), 1);
            temp_v0_2 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDA380003;
            sp24 = temp_v0_2;
            sp24->words.w1 = Matrix_NewMtx(*arg0);
            temp_v0_3 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDE000000;
            temp_v0_3->words.w1 = *(&D_8096ABCC + (arg4->unk2BA * 4));
        }
    }
}

void EnJs_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnJs *this = (EnJs *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_8096A9F4, &this->actor);
}

