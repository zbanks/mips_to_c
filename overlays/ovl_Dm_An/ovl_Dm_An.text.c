? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
s32 func_80C1C410(DmAn *arg0, GlobalContext *arg1); /* static */
s32 func_80C1C4D8(DmAn *arg0, GlobalContext *arg1, s32 arg2, DmAn *); /* static */
void func_80C1C5B4(DmAn *arg0);                     /* static */
? func_80C1C62C(void *arg0, ? arg1);                /* static */
? func_80C1C83C(DmAn *arg0, GlobalContext *);       /* static */
Actor *func_80C1C8E8(GlobalContext *arg0);          /* static */
void func_80C1CD80(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80C1CEFC(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80C1D0B0(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06000E70;
extern FlexSkeletonHeader D_06012618;
static ActorAnimationEntryS D_80C1D1C0 = {
    {(AnimationHeader *)0x6007E08, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60071E8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6006CC0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6013E1C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6007E3C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x60088C0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60013C8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6002550, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600353C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6004498, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60060B4, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600041C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6004A78, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600506C, 1.0f, 0, 0xFFFF, 0, 0},
};
static s32 D_80C1D2A0 = {0, 0, 0xC, 2, 4, 6, 8, 0xA, 0xB, 3};
static Vec3f D_80C1D2C8 = {450.0f, 700.0f, -760.0f};
static Vec3s D_80C1D2D4 = {0x238C, 0, 0xC004};
static Vec3f D_80C1D2DC = {1000.0f, 0.0f, 0.0f};
static void *D_80C1D2E8 = {(void *)0x600E6E0, (void *)0x600F7A0, (void *)0x60101A0};
static ? D_80C1D2F4;                                /* unable to generate initializer */

typedef struct DmAn {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(DmAn *, GlobalContext *);
    /* 0x018C */ char pad18C[0x24];                 /* maybe part of actionFunc[10]? */
    /* 0x01B0 */ Vec3s unk1B0;                      /* inferred */
    /* 0x01B6 */ char pad1B6[0x78];                 /* maybe part of unk1B0[21]? */
    /* 0x022E */ Vec3s unk22E;                      /* inferred */
    /* 0x0234 */ char pad234[0x78];                 /* maybe part of unk22E[21]? */
    /* 0x02AC */ s8 unk2AC;                         /* inferred */
    /* 0x02AD */ s8 unk2AD;                         /* inferred */
    /* 0x02AE */ u16 unk2AE;                        /* inferred */
    /* 0x02B0 */ u8 unk2B0;                         /* inferred */
    /* 0x02B1 */ char pad2B1[0x3];                  /* maybe part of unk2B0[4]? */
    /* 0x02B4 */ Actor *unk2B4;                     /* inferred */
    /* 0x02B8 */ s16 unk2B8;                        /* inferred */
    /* 0x02BA */ s16 unk2BA;                        /* inferred */
    /* 0x02BC */ s16 unk2BC;                        /* inferred */
    /* 0x02BE */ s16 unk2BE;                        /* inferred */
    /* 0x02C0 */ s16 unk2C0;                        /* inferred */
    /* 0x02C2 */ s16 unk2C2;                        /* inferred */
    /* 0x02C4 */ s16 unk2C4;                        /* inferred */
    /* 0x02C6 */ char pad2C6[0x2];                  /* maybe part of unk2C4[2]? */
    /* 0x02C8 */ s32 unk2C8;                        /* inferred */
    /* 0x02CC */ s32 unk2CC;                        /* inferred */
    /* 0x02D0 */ s32 unk2D0;                        /* inferred */
    /* 0x02D4 */ s32 unk2D4;                        /* inferred */
} DmAn;                                             /* size 0x2D8 */

s32 func_80C1C410(DmAn *arg0, GlobalContext *arg1) {
    s8 sp1F;
    s32 temp_a3;
    s8 temp_v1;
    s32 phi_v0;
    s32 phi_a3;

    temp_v1 = arg0->actor.objBankIndex;
    phi_a3 = 0;
    if (arg0->unk2C8 < 2) {
        phi_v0 = (s32) temp_v1;
    } else {
        phi_v0 = (s32) arg0->unk2AC;
    }
    if (phi_v0 >= 0) {
        sp1F = temp_v1;
        *(gSegments + 0x18) = (arg1 + (phi_v0 * 0x44))->unk17D98 + 0x80000000;
        temp_a3 = SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
        *(gSegments + 0x18) = (arg1 + (temp_v1 * 0x44))->unk17D98 + 0x80000000;
        phi_a3 = temp_a3;
    }
    return phi_a3;
}

s32 func_80C1C4D8(DmAn *arg0, GlobalContext *arg1, s32 arg2) {
    s8 sp1F;
    s32 temp_t0;
    s8 temp_v1;
    s32 phi_v0;
    s32 phi_t0;

    temp_v1 = arg0->actor.objBankIndex;
    phi_t0 = 0;
    if (arg2 < 2) {
        phi_v0 = (s32) temp_v1;
    } else {
        phi_v0 = (s32) arg0->unk2AC;
    }
    if ((phi_v0 >= 0) && (arg2 != arg0->unk2C8)) {
        *(gSegments + 0x18) = (arg1 + (phi_v0 * 0x44))->unk17D98 + 0x80000000;
        arg0->unk2C8 = arg2;
        sp1F = temp_v1;
        temp_t0 = func_8013BC6C(arg0 + 0x144, &D_80C1D1C0, arg2);
        *(gSegments + 0x18) = (arg1 + (temp_v1 * 0x44))->unk17D98 + 0x80000000;
        phi_t0 = temp_t0;
    }
    return phi_t0;
}

void func_80C1C5B4(DmAn *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk2BA;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk2BA = temp_v0 - 1;
        phi_v1 = arg0->unk2BA;
    }
    if (phi_v1 == 0) {
        arg0->unk2B8 += 1;
        if ((s32) arg0->unk2B8 >= 4) {
            arg0 = arg0;
            arg0->unk2BA = Rand_S16Offset(0x1E, 0x1E);
            arg0->unk2B8 = 0;
        }
    }
}

? func_80C1C62C(void *arg0, ? arg1) {
    Vec3f sp40;
    Vec3f sp34;
    s16 sp32;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    void *temp_v0_2;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    Math_Vec3f_Copy(&sp40, arg0->unk2B4 + 0x24);
    Math_Vec3f_Copy(&sp34, arg0 + 0x24);
    temp_v0 = Math_Vec3f_Yaw(&sp34, &sp40);
    sp32 = temp_v0;
    Math_ApproachS(arg0 + 0x2C0, (s16) ((temp_v0 - arg0->unk2C4) - arg0->unkBE), 4, 0x2AA8);
    temp_v1 = arg0->unk2C0;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk2C0 = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk2C0 = phi_v0;
    }
    Math_ApproachS(arg0 + 0x2C4, (s16) ((sp32 - arg0->unk2C0) - arg0->unkBE), 4, 0x2AA8);
    temp_v1_2 = arg0->unk2C4;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk2C4 = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk2C4 = phi_v0_2;
    }
    temp_v0_2 = arg0->unk2B4;
    if (temp_v0_2->unk0 == 0) {
        sp40.y = temp_v0_2->unkC44 + 3.0f;
    } else {
        Math_Vec3f_Copy(&sp40, temp_v0_2 + 0x3C);
    }
    Math_Vec3f_Copy(&sp34, arg0 + 0x3C);
    Math_ApproachS(arg0 + 0x2BE, (s16) (Math_Vec3f_Pitch(&sp34, &sp40) - arg0->unk2C2), 4, 0x2AA8);
    temp_v1_3 = arg0->unk2BE;
    if ((s32) temp_v1_3 < -0x1C70) {
        arg0->unk2BE = -0x1C70;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1C71) {
            phi_v0_3 = 0x1C70;
        }
        arg0->unk2BE = phi_v0_3;
    }
    Math_ApproachS(arg0 + 0x2C2, (s16) (Math_Vec3f_Pitch(&sp34, &sp40) - arg0->unk2BE), 4, 0x2AA8);
    temp_v1_4 = arg0->unk2C2;
    if ((s32) temp_v1_4 < -0x1C70) {
        arg0->unk2C2 = -0x1C70;
    } else {
        phi_v0_4 = temp_v1_4;
        if ((s32) temp_v1_4 >= 0x1C71) {
            phi_v0_4 = 0x1C70;
        }
        arg0->unk2C2 = phi_v0_4;
    }
    return 1;
}

? func_80C1C83C(DmAn *arg0) {
    s16 temp_v0_2;
    u16 temp_t0;
    u16 temp_t9;
    u16 temp_v0;
    s16 phi_v1;

    if (arg0->unk2B4 != 0) {
        func_80C1C62C();
        temp_t9 = arg0->unk2AE & 0xFFFE;
        temp_t0 = temp_t9 | 2;
        arg0->unk2AE = temp_t9;
        arg0->unk2AE = temp_t0;
    } else {
        temp_v0 = arg0->unk2AE;
        if ((temp_v0 & 2) != 0) {
            arg0->unk2AE = temp_v0 & 0xFFFD;
            arg0->unk2BE = 0;
            arg0->unk2C0 = 0;
            arg0->unk2C2 = 0;
            arg0->unk2C4 = 0;
            arg0->unk2BC = 0x14;
        } else {
            temp_v0_2 = arg0->unk2BC;
            if (temp_v0_2 == 0) {
                phi_v1 = 0;
            } else {
                arg0->unk2BC = temp_v0_2 - 1;
                phi_v1 = arg0->unk2BC;
            }
            if (phi_v1 == 0) {
                arg0->unk2AE |= 1;
            }
        }
    }
    return 1;
}

Actor *func_80C1C8E8(GlobalContext *arg0) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg0, phi_s0, 4, 0x29F);
    phi_s0_2 = temp_v0;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        temp_v1 = temp_v0->next;
        if (temp_v1 != 0) {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_s0_2;
}

void func_80C1C958(DmAn *this, GlobalContext *globalCtx) {
    s8 temp_a0;
    s8 temp_a2;

    temp_a2 = this->unk2AC;
    if (((s32) temp_a2 >= 0) && (func_8013D8DC(temp_a2, globalCtx) != 0) && (temp_a0 = this->unk2AD, ((s32) temp_a0 >= 0)) && (func_8013D8DC(temp_a0, globalCtx) != 0)) {
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 14.0f);
        SkelAnime_InitSV(globalCtx, &this->unk144, &D_06012618, NULL, &this->unk1B0, &this->unk22E, 0x15);
        this->unk2C8 = -1;
        func_80C1C4D8(this, globalCtx, 0);
        this->actor.flags &= -2;
        Actor_SetScale(&this->actor, 0.01f);
        this->unk2AE |= 1;
        this->actor.draw = func_80C1D0B0;
        if ((globalCtx->sceneNum == 0x61) && (globalCtx->curSpawn == 4)) {
            this->unk2B4 = func_80C1C8E8(globalCtx);
            func_80C1C4D8(this, globalCtx, 1);
            this->actionFunc = func_80C1CC80;
            return;
        }
        this->actionFunc = func_80C1CAB0;
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_80C1CAB0(DmAn *this, GlobalContext *globalCtx) {
    ? sp28;
    u32 sp20;
    ? *temp_t6;
    DmAn *temp_a3;
    DmAn *temp_a3_2;
    s32 *temp_t7;
    s32 temp_a2;
    s32 temp_t6_2;
    s32 temp_v0_2;
    u16 temp_v1;
    u32 temp_v0;
    u8 temp_a0;
    s32 *phi_t7;
    ? *phi_t6;
    u8 phi_a0;
    DmAn *phi_a3;
    Actor *phi_a3_2;

    phi_t7 = &D_80C1D2A0;
    phi_t6 = &sp28;
    do {
        temp_t7 = phi_t7 + 0xC;
        temp_t6 = phi_t6 + 0xC;
        temp_t6->unk-C = (s32) *phi_t7;
        temp_t6->unk-8 = (s32) temp_t7->unk-8;
        temp_t6->unk-4 = (s32) temp_t7->unk-4;
        phi_t7 = temp_t7;
        phi_t6 = temp_t6;
    } while (temp_t7 != (&D_80C1D2A0 + 0x24));
    temp_t6->unk0 = (s32) temp_t7->unk0;
    if (globalCtx->csCtx.state != 0) {
        if (this->unk2D0 == 0) {
            this->unk2B0 = 0xFF;
            this->unk2D0 = 1;
            this->unk2D4 = 0;
            this->unk2CC = this->unk2C8;
        }
        this = this;
        if (func_800EE29C(globalCtx, 0x22DU) != 0) {
            this = this;
            temp_v0 = func_800EE200(globalCtx, 0x22DU);
            temp_t6_2 = temp_v0 * 4;
            sp20 = temp_v0;
            temp_a3 = this;
            temp_v1 = *(globalCtx + temp_t6_2)->unk1F4C;
            temp_a0 = temp_a3->unk2B0;
            phi_a0 = temp_a0;
            phi_a3 = temp_a3;
            if ((temp_v1 & 0xFF) != temp_a0) {
                temp_a3->unk2B0 = (u8) temp_v1;
                temp_a3->unk2D4 = 1;
                this = temp_a3;
                func_80C1C4D8(temp_a3, globalCtx, (sp + (temp_v1 * 4))->unk28, temp_a3);
                phi_a0 = this->unk2B0;
                phi_a3 = this;
            }
            phi_a3_2 = &phi_a3->actor;
            switch (phi_a0) {
            case 2:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                temp_v0_2 = phi_a3->unk2C8;
                if ((temp_v0_2 == 0xC) || (temp_v0_2 == 4) || (temp_v0_2 == 6) || (temp_v0_2 == 8)) {
                    this = phi_a3;
                    temp_a3_2 = this;
                    phi_a3_2 = &temp_a3_2->actor;
                    if (func_801378B8(phi_a3 + 0x144, phi_a3->unk144.animFrameCount) != 0) {
                        temp_a2 = temp_a3_2->unk2C8;
                        this = temp_a3_2;
                        func_80C1C4D8(temp_a3_2, globalCtx, temp_a2 + 1, temp_a3_2);
                        phi_a3_2 = &this->actor;
                    }
                }
                break;
            }
            func_800EDF24(phi_a3_2, globalCtx, sp20);
            return;
        }
        // Duplicate return node #19. Try simplifying control flow for better match
        return;
    }
    if (this->unk2D0 != 0) {
        this->unk2D0 = 0;
        this->unk2D4 = 0;
        func_80C1C4D8(this, globalCtx, this->unk2CC, this);
    }
}

void func_80C1CC80(DmAn *this, GlobalContext *globalCtx) {

}

void DmAn_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmAn *this = (DmAn *) thisx;
    this->unk2AC = func_8013D924(0x1A, globalCtx);
    this->unk2AD = func_8013D924(0x16, globalCtx);
    this->actionFunc = func_80C1C958;
}

void DmAn_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmAn *this = (DmAn *) thisx;

}

void DmAn_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmAn *this = (DmAn *) thisx;
    this->actionFunc(this, globalCtx);
    func_80C1C83C(this, globalCtx);
    if (this->actor.draw != 0) {
        func_80C1C410(this, globalCtx);
        func_80C1C5B4(this);
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 12.0f, 0.0f, 4U);
}

void func_80C1CD80(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s8 sp2B;
    s8 sp2A;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a2;

    sp2B = arg4->objBankIndex;
    sp2A = arg4->unk2AD;
    if ((arg1 == 5) && (arg4->unk2D4 != 0)) {
        temp_a2 = *arg0;
        sp24 = temp_a2;
        SysMatrix_StatePush();
        SysMatrix_RotateAndTranslateState(&D_80C1D2C8, &D_80C1D2D4);
        temp_v0 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp24 = temp_a2;
        sp1C = temp_v0;
        sp1C->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_2 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060018;
        temp_v0_2->words.w1 = (arg0 + (sp2A * 0x44))->unk17D98;
        temp_v0_3 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_06000E70;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_4 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDB060018;
        temp_v0_4->words.w1 = (arg0 + (sp2B * 0x44))->unk17D98;
        SysMatrix_StatePop();
    }
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_80C1D2DC, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
    }
}

void func_80C1CEFC(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg2->unk2AE;
    phi_v1 = 0;
    if ((temp_v0 & 1) == 0) {
        if ((temp_v0 & 2) != 0) {
            phi_v1 = 1;
            phi_v0 = 1;
        } else {
            phi_v1 = 1;
            phi_v0 = 0;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 9) {
        func_8013AD9C((s16) (arg2->unk2BE + arg2->unk2C2 + 0x4000), (s16) (arg2->unk2C0 + arg2->unk2C4 + arg2->shape.rot.y + 0x4000), arg2 + 0x18C, arg2 + 0x1A4, phi_v1, phi_v0);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk18C, arg2->unk190, arg2->unk194, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk1A6, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk1A4, 1);
        SysMatrix_InsertZRotation_s(arg2->unk1A8, 1);
        SysMatrix_StatePush();
        return;
    }
    if (arg1 == 2) {
        func_8013AD9C((s16) (arg2->unk2C2 + 0x4000), (s16) (arg2->unk2C4 + arg2->shape.rot.y + 0x4000), arg2 + 0x198, arg2 + 0x1AA, phi_v1, phi_v0);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk198, arg2->unk19C, arg2->unk1A0, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk1AC, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk1AA, 1);
        SysMatrix_InsertZRotation_s(arg2->unk1AE, 1);
        SysMatrix_StatePush();
    }
}

void func_80C1D0B0(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp40 = sp40;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80C1D2F4 + (this->unk2B8 * 4)));
    temp_v0_2 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(D_80C1D2E8);
    func_801343C0(globalCtx, this->unk148, this->unk164, (s32) this->unk146, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80C1CD80, func_80C1CEFC, this);
}

