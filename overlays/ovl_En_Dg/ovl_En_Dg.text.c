void func_80989140(SkelAnime *arg0, ? *arg1, s32 arg2, Actor *); /* static */
void func_80989204(Actor *arg0, GlobalContext *arg1); /* static */
void func_8098933C(EnDg *arg0, f32 *arg1);          /* static */
s32 func_80989418(Actor *arg0, u8 *arg1, s32 arg2); /* static */
s16 func_809895B4(u8 *arg0, s32 arg1, void *arg2, f32 *arg3); /* static */
void func_80989674(Actor *arg0, void *arg1);        /* static */
void func_80989864(Actor *arg0, GlobalContext *arg1); /* static */
void func_80989974(Actor *arg0);                    /* static */
void func_809899C8(Actor *arg0, f32 arg1);          /* static */
void func_80989A08(Actor *arg0, f32 arg1);          /* static */
void func_80989A48(Actor *arg0);                    /* static */
void func_80989A9C(Actor *arg0, f32 arg1);          /* static */
void func_80989ADC(Actor *arg0, Actor *arg1, s16, Actor *); /* static */
void func_80989BF8(Actor *arg0);                    /* static */
void func_80989D38(EnDg *arg0, GlobalContext *arg1); /* static */
void func_80989E18(Actor *arg0, GlobalContext *arg1); /* static */
? func_80989FC8(GlobalContext *arg0, Actor *);      /* static */
void func_8098A064(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8098A1B4(EnDg *arg0, GlobalContext *arg1); /* static */
void func_8098A234(Actor *arg0, Actor *arg1);       /* static */
void func_8098AAAC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8098AE58(Actor *arg0, GlobalContext *arg1); /* static */
void func_8098B464(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8098BFB8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_8098BFD4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern FlexSkeletonHeader D_060080F0;
static u8 D_8098C2A0 = 0;
static s16 D_8098C2A4 = 0x63;
static ? D_8098C2A8;                                /* unable to generate initializer */
static ? D_8098C2AC;                                /* unable to generate initializer */
static ? D_8098C2FC;                                /* unable to generate initializer */
static s16 D_8098C2FE = {0xFFFF, 0x353E, 0};
static ColliderCylinderInit D_8098C304 = {
    {0xA, 0x11, 9, 0x39, 0x10, 1},
    {1, {0xF7CFFFFF, 4, 0}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0xD, 0x13, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_8098C330 = {0, 0, 0, 0, 1};
static DamageTable D_8098C33C = {
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static ? D_8098C35C;                                /* unable to generate initializer */
static f32 D_8098C410 = {
    -1.5f,
    nanf,
    9.1827e-41f,
    2.4089828e-35f,
    1.0f,
    9.1834e-41f,
    9.403955e-38f,
    2.4093605e-35f,
    1.2f,
    9.1834e-41f,
    9.403955e-38f,
    2.4091573e-35f,
};
static f32 D_8098C440 = {1.2f, 9.1834e-41f, 9.403955e-38f, 2.4098943e-35f, 0.5f, 9.1834e-41f, 0.0f};
static InitChainEntry D_8098C45C;                   /* unable to generate initializer */
static ? D_8098C460;                                /* unable to generate initializer */
static ? D_8098C46C;                                /* unable to generate initializer */
static ?32 D_8098C498 = 0x459C4000;                 /* const */



void func_80989140(SkelAnime *arg0, ? *arg1, s32 arg2) {
    s16 temp_v0;
    void *temp_s0;
    f32 phi_f0;

    temp_s0 = arg1 + (arg2 * 0x10);
    temp_v0 = temp_s0->unkA;
    if ((s32) temp_v0 < 0) {
        phi_f0 = (f32) SkelAnime_GetFrameCount(temp_s0->unk0);
    } else {
        phi_f0 = (f32) temp_v0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk0, ((f32) gGameInfo->data[2488] * 0.1f) + temp_s0->unk4, (f32) temp_s0->unk8, phi_f0, (u8) (s32) temp_s0->unkC, (f32) temp_s0->unkE);
}

void func_80989204(Actor *arg0, GlobalContext *arg1) {
    void *sp34;
    ColliderCylinder *temp_s2;

    temp_s2 = arg0 + 0x190;
    sp34 = arg1->actorCtx.actorList[2].first;
    arg0->unk1D6 = (s16) (s32) arg0->world.pos.x;
    arg0->unk1D8 = (s16) (s32) arg0->world.pos.y;
    arg0->unk1DA = (s16) (s32) arg0->world.pos.z;
    Collider_UpdateCylinder(arg0, temp_s2);
    if ((sp34->unk14B == 3) && (func_8098AC34 == arg0->unk144)) {
        CollisionCheck_SetAT(arg1, arg1 + 0x18884, &temp_s2->base);
    } else {
        Collider_ResetCylinderAT(arg1, &temp_s2->base);
    }
    if ((arg0->unk290 != 1) && ((arg0->unk280 & 2) == 0)) {
        CollisionCheck_SetOC(arg1, &arg1->colChkCtx, &temp_s2->base);
    } else {
        Collider_ResetCylinderOC(arg1, &temp_s2->base);
    }
    Actor_UpdateBgCheckInfo(arg1, arg0, 26.0f, 10.0f, 0.0f, 5U);
}

void func_8098933C(EnDg *arg0, f32 *arg1) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 temp_f18;
    void *temp_v0;

    temp_v0 = arg0->actor.floorPoly;
    if (temp_v0 != 0) {
        sp24 = (f32) temp_v0->normal.x * 0.00003051851f;
        temp_f18 = (f32) temp_v0->normal.y * 0.00003051851f;
        sp20 = temp_f18;
        sp1C = (f32) temp_v0->normal.z * 0.00003051851f;
        __sinf(0.0f);
        __cosf(0.0f);
        arg1->unk0 = -Math_Acot2F(1.0f, -sp1C * temp_f18);
        arg1->unk8 = Math_Acot2F(1.0f, -sp24 * sp20);
    }
}

s32 func_80989418(Actor *arg0, u8 *arg1, s32 arg2) {
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
    if (((arg0->world.pos.x * sp44) + (sp40 * arg0->world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

s16 func_809895B4(u8 *arg0, s32 arg1, void *arg2, f32 *arg3) {
    void *temp_v1;
    f32 phi_f14;
    f32 phi_f12;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk4);
        phi_f14 = (f32) temp_v1->unk0 - arg2->unk0;
        phi_f12 = (f32) temp_v1->unk4 - arg2->unk8;
    } else {
        phi_f14 = 0.0f;
        phi_f12 = 0.0f;
    }
    *arg3 = (phi_f14 * phi_f14) + (phi_f12 * phi_f12);
    return (s16) (s32) (Math_Acot2F(phi_f12, phi_f14) * 10430.378f);
}

void func_80989674(Actor *arg0, void *arg1) {
    f32 sp30;
    u8 *sp2C;
    s16 temp_v0_2;
    s32 temp_v0;
    u8 *temp_t6;
    s16 phi_a1;

    temp_t6 = arg0->unk1DC;
    sp2C = temp_t6;
    if (temp_t6 != 0) {
        phi_a1 = func_809895B4(temp_t6, arg0->unk1E0, arg0 + 0x24, &sp30);
        if ((arg0->bgCheckFlags & 8) != 0) {
            phi_a1 = arg0->wallYaw;
        }
        Math_SmoothStepToS(arg0 + 0x32, phi_a1, 4, 0x3E8, (s16) 1);
        arg0->shape.rot.y = arg0->world.rot.y;
        if (func_80989418(arg0, arg0->unk1DC, arg0->unk1E0) != 0) {
            temp_v0 = arg0->unk1E0;
            if (temp_v0 >= (*arg0->unk1DC - 1)) {
                arg0->unk1E0 = 0;
            } else {
                arg0->unk1E0 = (s32) (temp_v0 + 1);
            }
        }
        temp_v0_2 = arg0->unk286;
        if ((temp_v0_2 == 0x15) || ((temp_v0_2 == 0x14) && (arg1->unkA4 == 0x10))) {
            Math_ApproachF(arg0 + 0x70, 1.0f, 0.2f, 1.0f);
            return;
        }
        if (temp_v0_2 == 0x14) {
            Math_ApproachF(arg0 + 0x70, 3.5f, 0.2f, 1.0f);
            return;
        }
        if (arg1->unkA4 == 0x6F) {
            Math_ApproachF(arg0 + 0x70, 3.5f, 0.2f, 1.0f);
            return;
        }
        if ((*(&D_8098C2AC + (temp_v0_2 * 6)) & 0x11) != 0) {
            Math_ApproachF(arg0 + 0x70, 1.0f, 0.2f, 1.0f);
            return;
        }
        Math_ApproachF(arg0 + 0x70, 3.5f, 0.2f, 1.0f);
        return;
    }
    Actor_MarkForDeath(arg0);
}

void func_80989864(Actor *arg0, GlobalContext *arg1) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 phi_v0;

    phi_v0 = 3;
    if (arg0->speedXZ > 6.0f) {
        phi_v0 = 2;
    }
    if (((s32) (arg0->unk286 + (s16) (s32) arg0->unk164) % phi_v0) == 0) {
        sp38 = randPlusMinusPoint5Scaled(15.0f) + arg0->world.pos.x;
        sp3C = arg0->world.pos.y;
        sp40 = randPlusMinusPoint5Scaled(15.0f) + arg0->world.pos.z;
        func_800BBDAC(arg1, arg0, (Vec3f *) &sp38, 10.0f, 0, 2.0f, (s16) 0x12C, (s16) 0, (u8) 1);
    }
}

void func_80989974(Actor *arg0) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x14C;
    sp1C = temp_a0;
    if ((func_801378B8(temp_a0, 1.0f) != 0) || (func_801378B8(temp_a0, 7.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x28EFU);
    }
}

void func_809899C8(Actor *arg0, f32 arg1) {
    if (func_801378B8(arg0 + 0x14C, arg1) != 0) {
        Audio_PlayActorSound2(arg0, 0x28D8U);
    }
}

void func_80989A08(Actor *arg0, f32 arg1) {
    if (func_801378B8(arg0 + 0x14C, arg1) != 0) {
        Audio_PlayActorSound2(arg0, 0x2910U);
    }
}

void func_80989A48(Actor *arg0) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x14C;
    sp1C = temp_a0;
    if ((func_801378B8(temp_a0, 23.0f) != 0) || (func_801378B8(temp_a0, 28.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x2913U);
    }
}

void func_80989A9C(Actor *arg0, f32 arg1) {
    if (func_801378B8(arg0 + 0x14C, arg1) != 0) {
        Audio_PlayActorSound2(arg0, 0x290BU);
    }
}

void func_80989ADC(Actor *arg0, Actor *arg1) {
    s16 temp_v0;

    if ((arg0->bgCheckFlags & 0x20) == 0) {
        temp_v0 = arg0->unk286;
        if ((temp_v0 == 0x15) || ((temp_v0 == 0x14) && (arg1->unkA4 == 0x10))) {
            func_80989140(arg0 + 0x14C, &D_8098C35C, 1);
        } else if (temp_v0 == 0x14) {
            func_80989140(arg0 + 0x14C, &D_8098C35C, 2);
        } else if (arg1->unkA4 == 0x6F) {
            func_80989140(arg0 + 0x14C, &D_8098C35C, 2);
        } else if ((*(&D_8098C2AC + (temp_v0 * 6)) & 0x11) != 0) {
            func_80989140(arg0 + 0x14C, &D_8098C35C, 1);
        } else {
            func_80989140(arg0 + 0x14C, &D_8098C35C, 2);
        }
        arg0->unk144 = func_8098A468;
    }
}

void func_80989BF8(Actor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    s16 phi_v0;
    void *phi_v1;

    temp_v0 = arg0->unk286;
    if ((s32) temp_v0 < 0xE) {
        if (((s32) temp_v0 % 2) != 0) {
            *(&D_8098C2AC + (temp_v0 * 6)) = ((s32) ((&gSaveContext.weekEventReg[42])[(s32) temp_v0 / 2] & 0xF0) >> 4) + 0x3538;
        } else {
            *(&D_8098C2AC + (temp_v0 * 6)) = ((&gSaveContext.weekEventReg[42])[(s32) temp_v0 / 2] & 0xF) + 0x3538;
        }
    } else {
        Actor_MarkForDeath(arg0);
    }
    temp_v1 = (arg0->unk286 * 6) + &D_8098C2A8;
    temp_v0_2 = temp_v1->unk4;
    phi_v0 = temp_v0_2;
    phi_v1 = temp_v1;
    if (((s32) temp_v0_2 >= 0x3547) || ((s32) temp_v0_2 < 0x3538)) {
        temp_v1->unk4 = 0x353E;
        temp_v1_2 = (arg0->unk286 * 6) + &D_8098C2A8;
        phi_v0 = temp_v1_2->unk4;
        phi_v1 = temp_v1_2;
    }
    if (phi_v0 == 0x353D) {
        phi_v1->unk4 = 0x3538;
    }
}

void func_80989D38(EnDg *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_286;
    if (temp_v0 == 0x15) {
        if (((s32) gSaveContext.day % 5) == 1) {
            func_801518B0(arg1, 0x91CU, NULL);
            return;
        }
        func_801518B0(arg1, 0x91EU, NULL);
        return;
    }
    if (((s32) temp_v0 >= 0) && ((s32) temp_v0 < 0xE)) {
        func_801518B0(arg1, *(&D_8098C2AC + (temp_v0 * 6)), NULL);
        return;
    }
    if (temp_v0 == 0x14) {
        func_801518B0(arg1, 0x353DU, NULL);
        return;
    }
    func_801518B0(arg1, 0x627U, NULL);
}

void func_80989E18(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;
    void *temp_t9;

    temp_v1 = D_8098C2A0;
    if ((temp_v1 != 0) && (temp_v0 = arg0->unk280, ((temp_v0 & 1) == 0))) {
        arg0->unk280 = (u16) (temp_v0 | 1);
        arg0->flags |= 0x8000000;
    } else if (temp_v1 == 0) {
        temp_v0_2 = arg0->unk280;
        if ((temp_v0_2 & 1) != 0) {
            arg0->unk280 = (u16) (temp_v0_2 & 0xFFFE);
            arg0->flags &= 0xF7FFFFFF;
        }
    }
    if (Actor_HasParent(arg0, arg1) != 0) {
        Audio_PlayActorSound2(arg0, 0x28D8U);
        arg0->unk290 = 1;
        temp_t9 = (arg0->unk286 * 6) + &D_8098C2A8;
        D_8098C2FC.unk0 = (s32) (unaligned s32) temp_t9->unk0;
        D_8098C2FC.unk4 = (u16) temp_t9->unk4;
        if (D_8098C2A0 == 0) {
            arg0->flags |= 0x8000000;
            D_8098C2A0 = 1;
            arg0->unk280 = (u16) (arg0->unk280 | 1);
        }
        func_80989140(arg0 + 0x14C, &D_8098C35C, 5);
        arg0->flags &= -2;
        arg0->speedXZ = 0.0f;
        if (Player_GetMask(arg1) == 1) {
            arg0->flags |= 0x10000;
            func_800B8614(arg0, arg1, 100.0f);
            arg0->unk144 = func_8098BBEC;
            return;
        }
        arg0->unk144 = func_8098BA64;
        return;
    }
    func_800B8BB0(arg0, arg1);
}

? func_80989FC8(GlobalContext *arg0) {
    f32 temp_f2;
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;
    f32 phi_f0;

    temp_v1 = arg0->actorCtx.actorList[5].first;
    phi_v1 = temp_v1;
    phi_f0 = 9999.0f;
    if (temp_v1 != 0) {
loop_2:
        if (phi_v1->id == 0xE2) {
            if (phi_v1->isTargeted != 0) {
                D_8098C2A4 = phi_v1->unk286;
                return 1;
            }
            temp_f2 = phi_v1->xzDistToPlayer;
            if (temp_f2 < phi_f0) {
                D_8098C2A4 = phi_v1->unk286;
                phi_f0 = temp_f2;
            }
            goto block_7;
        }
block_7:
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            goto block_8;
        }
        goto loop_2;
    }
block_8:
    if (D_8098C2A4 != 0x63) {
        return 1;
    }
    return 0;
}

void func_8098A064(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    s16 temp_v0;
    s16 temp_v0_4;
    s32 temp_v0_3;
    u16 temp_v0_2;
    s16 phi_v0;
    Actor *phi_a3;
    s16 phi_v1;
    void (*phi_t1)(EnDg *, GlobalContext *);

    temp_a3 = arg0;
    phi_a3 = temp_a3;
    if ((arg1->actorCtx.actorList[2].first->unkA74 * 4) < 0) {
        temp_v0 = D_8098C2A4;
        phi_v0 = temp_v0;
        if (temp_v0 == 0x63) {
            arg0 = temp_a3;
            func_80989FC8(arg1, temp_a3);
            phi_v0 = D_8098C2A4;
            phi_a3 = arg0;
        }
        if (phi_v0 == phi_a3->unk286) {
            temp_v0_2 = phi_a3->unk280;
            if ((temp_v0_2 & 0x20) == 0) {
                phi_a3->unk280 = (u16) (temp_v0_2 | 0x20);
                arg0 = phi_a3;
                func_80989140(phi_a3 + 0x14C, &D_8098C35C, 1, phi_a3);
                phi_t1 = func_8098AF44;
                goto block_15;
            }
            temp_v0_3 = phi_a3->unk144;
            if ((func_8098B004 == temp_v0_3) || (func_8098AB48 == temp_v0_3)) {
                temp_v0_4 = phi_a3->unk292;
                if (temp_v0_4 == 0) {
                    phi_v1 = 0;
                } else {
                    phi_a3->unk292 = (s16) (temp_v0_4 - 1);
                    phi_v1 = phi_a3->unk292;
                }
                if (phi_v1 == 0) {
                    phi_a3->unk292 = 0xA;
                    Audio_PlayActorSound2(phi_a3, 0x28D8U);
                    return;
                }
                // Duplicate return node #16. Try simplifying control flow for better match
                return;
            }
            // Duplicate return node #16. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #16. Try simplifying control flow for better match
        return;
    }
    if (D_8098C2A4 == temp_a3->unk286) {
        temp_a3->unk280 = (u16) (temp_a3->unk280 & 0xFFDF);
        D_8098C2A4 = 0x63;
        arg0 = temp_a3;
        func_80989ADC(temp_a3, temp_a3);
        phi_t1 = func_8098A468;
block_15:
        arg0->unk144 = phi_t1;
    }
}

s32 func_8098A1B4(EnDg *arg0, GlobalContext *arg1) {
    u8 temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first->unk14B;
    if ((temp_v1 != 1) && (temp_v1 != 2)) {
        if (temp_v1 != 3) {
            // Duplicate return node #8. Try simplifying control flow for better match
            return 0;
        }
        goto block_6;
    }
    if (arg0->actor.xzDistToPlayer < 300.0f) {
        return 1;
    }
block_6:
    if (arg0->actor.xzDistToPlayer < 250.0f) {
        return 1;
    }
    return 0;
}

void func_8098A234(Actor *arg0, Actor *arg1) {
    Actor *temp_a3;
    SkelAnime *temp_a0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u8 temp_v0;
    void *temp_v1;
    s16 phi_v0;
    Actor *phi_a3;
    s16 phi_v0_2;
    Actor *phi_a3_2;
    s16 phi_v0_3;
    Actor *phi_a3_3;

    temp_a3 = arg0;
    temp_v1 = arg1->unk1CCC;
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    phi_a3_3 = temp_a3;
    if ((temp_a3->bgCheckFlags & 0x20) == 0) {
        temp_v0 = temp_v1->unk14B;
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    if ((temp_v0 == 4) && (temp_a3->unk28C != 1)) {
                        temp_a3->unk28C = 1;
                        temp_a3->unk280 = (u16) (temp_a3->unk280 & 0xFFFD);
                        func_80989ADC(temp_a3, arg1, 1, temp_a3);
                        return;
                    }
                    // Duplicate return node #25. Try simplifying control flow for better match
                    return;
                }
                temp_v0_2 = temp_a3->unk28C;
                temp_a3->unk280 = (u16) (temp_a3->unk280 & 0xFFFD);
                phi_v0 = temp_v0_2;
                if (temp_v0_2 != 6) {
                    temp_a0 = temp_a3 + 0x14C;
                    if (temp_v1->unk70 > 1.0f) {
                        temp_a3->unk28C = 6;
                        arg0 = temp_a3;
                        func_80989140(temp_a0, &D_8098C35C, 2, temp_a3);
                        arg0->unk144 = func_8098A938;
                        phi_v0 = arg0->unk28C;
                        phi_a3 = arg0;
                    }
                }
                if ((phi_v0 != 7) && (phi_v0 != 6)) {
                    phi_a3->unk28C = 7;
                    func_80989ADC(phi_a3, arg1);
                }
                // Duplicate return node #25. Try simplifying control flow for better match
                return;
            }
            temp_v0_3 = temp_a3->unk28C;
            temp_a3->unk280 = (u16) (temp_a3->unk280 & 0xFFFD);
            phi_v0_2 = temp_v0_3;
            if ((temp_v0_3 != 4) && (temp_v1->unk70 > 1.0f)) {
                temp_a3->unk28C = 4;
                arg0 = temp_a3;
                func_80989140(temp_a3 + 0x14C, &D_8098C35C, 2, temp_a3);
                arg0->unk144 = func_8098B004;
                phi_v0_2 = arg0->unk28C;
                phi_a3_2 = arg0;
            }
            if ((phi_v0_2 != 5) && (phi_v0_2 != 4)) {
                phi_a3_2->unk28C = 5;
                func_80989ADC(phi_a3_2, arg1);
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        }
        temp_v0_4 = temp_a3->unk28C;
        temp_a3->unk280 = (u16) (temp_a3->unk280 & 0xFFFD);
        phi_v0_3 = temp_v0_4;
        if ((temp_v0_4 != 2) && (temp_v1->unk70 > 1.0f)) {
            temp_a3->unk28C = 2;
            arg0 = temp_a3;
            func_80989140(temp_a3 + 0x14C, &D_8098C35C, 0xB, temp_a3);
            arg0->unk282 = 0x32;
            arg0->unk144 = func_8098A618;
            phi_v0_3 = arg0->unk28C;
            phi_a3_3 = arg0;
        }
        if ((phi_v0_3 != 3) && (phi_v0_3 != 2)) {
            phi_a3_3->unk28C = 3;
            func_80989ADC(phi_a3_3, arg1);
            return;
        }
        // Duplicate return node #25. Try simplifying control flow for better match
    }
}

void func_8098A468(EnDg *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s16 temp_v0;
    s16 phi_v1;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    this->actor.velocity.y = 0.0f;
    this->actor.gravity = -3.0f;
    func_80989674(&this->actor);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if (sp24->unk14B == 4) {
        func_80989E18(&this->actor, globalCtx);
    }
    func_8098A064(&this->actor, globalCtx);
    func_80989974(&this->actor);
    if ((this->actor.bgCheckFlags & 1) == 0) {
        this->actionFunc = func_8098AF98;
    }
    temp_v0 = this->unk_282;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_282 = temp_v0 - 1;
        phi_v1 = this->unk_282;
    }
    if (phi_v1 == 0) {
        this->unk_282 = Rand_S16Offset(0x14, 0x14);
        func_80989140(&this->skelAnime, &D_8098C35C, 3);
        this->actionFunc = func_8098A55C;
    }
}

void func_8098A55C(EnDg *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;

    if (globalCtx->actorCtx.actorList[2].first->unk14B == 4) {
        func_80989E18(&this->actor, globalCtx);
    }
    func_809899C8(&this->actor, 13.0f);
    func_809899C8(&this->actor, 19.0f);
    if ((this->actor.bgCheckFlags & 1) == 0) {
        this->actionFunc = func_8098AF98;
    }
    temp_v0 = this->unk_282;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_282 = temp_v0 - 1;
        phi_v1 = this->unk_282;
    }
    if (phi_v1 == 0) {
        this->unk_282 = Rand_S16Offset(0x3C, 0x3C);
        func_80989ADC(&this->actor, (Actor *) globalCtx);
    }
}

void func_8098A618(EnDg *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = this->unk_282;
    this->actor.velocity.y = 0.0f;
    this->actor.gravity = -3.0f;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_282 = temp_v0 - 1;
        phi_v1 = this->unk_282;
    }
    if (phi_v1 == 0) {
        this->unk_282 = 0x32;
        func_80989140(&this->skelAnime, &D_8098C35C, 2);
        this->actionFunc = func_8098A70C;
    } else {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0x3E8, (s16) 1);
        if ((this->actor.bgCheckFlags & 8) != 0) {
            this->actor.shape.rot.y = this->actor.wallYaw;
        }
        this->actor.world.rot.y = this->actor.shape.rot.y;
        Math_ApproachF(&this->actor.speedXZ, -1.5f, 0.2f, 1.0f);
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    func_80989974(&this->actor);
    func_80989A9C(&this->actor, 0.0f);
}

void func_8098A70C(EnDg *this, GlobalContext *globalCtx) {
    Actor *sp34;
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 phi_a1;

    sp34 = globalCtx->actorCtx.actorList[2].first;
    temp_a0 = &this->skelAnime;
    if (this->actor.xzDistToPlayer < 250.0f) {
        Math_ApproachS(&this->actor.shape.rot.y, (s16) ((s32) this->actor.yawTowardsPlayer * -1), 4, 0xC00);
        if ((this->actor.bgCheckFlags & 8) != 0) {
            phi_a1 = this->actor.wallYaw;
        } else {
            phi_a1 = 0;
        }
        Math_SmoothStepToS(&this->actor.world.rot.y, phi_a1, 4, 0x3E8, (s16) 1);
        this->actor.world.rot.y = this->actor.shape.rot.y;
        temp_f0 = sp34->speedXZ;
        if (temp_f0 != 0.0f) {
            Math_ApproachF(&this->actor.speedXZ, temp_f0, 0.2f, 1.0f);
        } else {
            Math_ApproachF(&this->actor.speedXZ, 3.5f, 0.2f, 1.0f);
        }
        sp2C = &this->skelAnime;
    } else {
        sp2C = temp_a0;
        func_80989140(temp_a0, &D_8098C35C, 3, (Actor *) 0xC00);
        this->actionFunc = func_8098A89C;
    }
    if (this->actor.speedXZ > 7.0f) {
        this->actor.speedXZ = 7.0f;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_80989974(&this->actor);
    if (func_801378B8(sp2C, 3.0f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x290AU);
        return;
    }
    if (func_801378B8(sp2C, 6.0f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x28EFU);
    }
}

void func_8098A89C(EnDg *this, GlobalContext *globalCtx) {
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0xC00);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (this->actor.xzDistToPlayer < 250.0f) {
        func_80989140(&this->skelAnime, &D_8098C35C, 0xB);
        this->unk_282 = 0x32;
        this->actionFunc = func_8098A618;
    }
    func_80989A08(&this->actor, 13.0f);
    func_80989A08(&this->actor, 19.0f);
}

void func_8098A938(EnDg *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s32 temp_v0;
    s32 phi_v1;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    this->actor.velocity.y = 0.0f;
    this->actor.gravity = -3.0f;
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->actor.shape.rot.y = this->actor.wallYaw;
    }
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (this->actor.xzDistToPlayer < 70.0f) {
        Math_ApproachZeroF(&this->actor.speedXZ, 0.2f, 1.0f);
        temp_a0 = &this->skelAnime;
        sp24 = temp_a0;
        if (func_801378B8(temp_a0, 7.0f) != 0) {
            temp_v0 = sp2C->shape.rot.y - this->actor.shape.rot.y;
            phi_v1 = temp_v0 << 0x10;
            if (temp_v0 < 0) {
                phi_v1 = temp_v0 * -0x10000;
            }
            this->unk_28E = 0x14;
            if ((phi_v1 >> 0x10) < 0x4000) {
                func_80989140(temp_a0, &D_8098C35C, 0xE);
                this->actionFunc = func_8098AC34;
            } else {
                func_80989140(temp_a0, &D_8098C35C, 0xB);
                D_8098C410 = -1.0f;
                this->actionFunc = func_8098B198;
            }
        }
    } else {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0xC00);
        Math_ApproachF(&this->actor.speedXZ, 5.0f, 0.2f, 1.0f);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_80989974(&this->actor);
    func_80989A08(&this->actor, 5.0f);
}

void func_8098AAAC(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 phi_v1;

    arg0->unk280 = (u16) (arg0->unk280 & 0xFFF7);
    Math_ApproachF(arg0 + 0x70, 3.5f, 0.1f, 0.5f);
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    temp_v0 = arg0->unk28E;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk28E = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk28E;
    }
    if (phi_v1 == 0) {
        arg0->unk28E = 0x14;
        arg0->unk144 = func_8098A938;
    }
    func_80989974(arg0);
    func_80989A08(arg0, 3.0f);
}

void func_8098AB48(EnDg *this, GlobalContext *globalCtx) {
    if ((this->actor.bgCheckFlags & 1) == 0) {
        this->actionFunc = func_8098AF98;
    }
    if (this->actor.xzDistToPlayer < 50.0f) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0xC00);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    } else {
        if ((globalCtx->actorCtx.actorList[2].first->unkA74 * 4) < 0) {
            func_80989140(&this->skelAnime, &D_8098C35C, 1, (Actor *) 0xC00);
        } else {
            func_80989140(&this->skelAnime, &D_8098C35C, 2, (Actor *) 0xC00);
        }
        this->actionFunc = func_8098B004;
    }
    func_8098A064(&this->actor, globalCtx);
    if ((this->unk_280 & 0x20) == 0) {
        func_80989A48(&this->actor);
    }
}

void func_8098AC34(EnDg *this, GlobalContext *globalCtx) {
    s16 sp26;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f16;
    s16 temp_v0_2;
    u16 temp_t2;
    u8 temp_v0;
    s16 phi_v1;

    sp26 = (s16) (s32) this->skelAnime.animCurrentFrame;
    if ((this->actor.xyzDistToPlayerSq < 800.0f) && (temp_v0 = this->collider.base.atFlags, ((temp_v0 & 4) != 0))) {
        temp_t2 = this->unk_280 & 0xFFFD;
        this->unk_280 = temp_t2;
        this->unk_28E = 0x3C;
        this->unk_280 = temp_t2 | 8;
        this->collider.base.atFlags = temp_v0 & 0xFFFB;
        this->actor.speedXZ *= -1.0f;
        func_80989140(&this->skelAnime, &D_8098C35C, 2);
        this->actionFunc = (void (*)(EnDg *, GlobalContext *)) func_8098AAAC;
        return;
    }
    temp_v0_2 = this->unk_28E;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_28E = temp_v0_2 - 1;
        phi_v1 = this->unk_28E;
    }
    if (phi_v1 == 0) {
        this->unk_28E = 0x3C;
        this->unk_280 &= 0xFFFD;
        func_80989140(&this->skelAnime, &D_8098C35C, 2);
        this->actionFunc = (void (*)(EnDg *, GlobalContext *)) func_8098AAAC;
    }
    temp_a0 = &this->skelAnime;
    if ((s32) sp26 < 9) {
        if (func_801378B8(temp_a0, 0.0f) != 0) {
            D_8098C440 = randPlusMinusPoint5Scaled(1.0f) + 3.0f;
        }
        func_80989864(&this->actor, globalCtx);
    } else {
        this->unk_280 |= 2;
        if (func_801378B8(temp_a0, 9.0f) != 0) {
            temp_f0 = randPlusMinusPoint5Scaled(1.5f);
            temp_f16 = 2.0f * temp_f0;
            D_8098C440 = 1.2f;
            this->actor.velocity.y = temp_f16 + 3.0f;
            this->actor.speedXZ = 8.0f + temp_f0;
        } else if ((s32) sp26 >= 0x15) {
            Math_ApproachF(&this->actor.speedXZ, 2.5f, 0.2f, 1.0f);
        }
        if ((s32) sp26 >= 0x18) {
            func_80989864(&this->actor, globalCtx);
        }
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    func_80989A9C(&this->actor, 10.0f);
}

void func_8098AE58(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    temp_f0 = arg0->xzDistToPlayer;
    if (temp_f0 < 150.0f) {
        func_80989140(arg0 + 0x14C, &D_8098C35C, 0xB);
        arg0->unk144 = func_8098B28C;
    } else if (temp_f0 < 200.0f) {
        func_80989140(arg0 + 0x14C, &D_8098C35C, 3, (Actor *)0xC00);
        arg0->unk144 = func_8098B390;
    } else {
        Math_ApproachS(arg0 + 0xBE, arg0->yawTowardsPlayer, 4, (s16) (Actor *)0xC00);
        arg0->world.rot.y = arg0->shape.rot.y;
        Math_ApproachF(arg0 + 0x70, 2.0f, 0.2f, 1.0f);
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    }
    func_80989974(arg0);
    func_809899C8(arg0, 5.0f);
}

void func_8098AF44(EnDg *this, GlobalContext *globalCtx) {
    if (func_801A46F8() == 1) {
        this->unk_292 = 0xA;
        Audio_PlayActorSound2(&this->actor, 0x28D8U);
        this->actionFunc = func_8098B004;
    }
}

void func_8098AF98(EnDg *this, GlobalContext *globalCtx) {
    EnDg *temp_a3;
    SkelAnime *temp_a0;
    EnDg *phi_a3;

    temp_a3 = this;
    temp_a0 = &temp_a3->skelAnime;
    phi_a3 = temp_a3;
    if ((temp_a3->actor.bgCheckFlags & 1) != 0) {
        this = temp_a3;
        func_80989140(temp_a0, &D_8098C35C, 2, &temp_a3->actor);
        this->actionFunc = func_8098A468;
        phi_a3 = this;
    }
    this = phi_a3;
    Actor_SetVelocityAndMoveYRotationAndGravity(&phi_a3->actor);
    func_809899C8(&this->actor, 3.0f);
}

void func_8098B004(EnDg *this, GlobalContext *globalCtx) {
    Actor *sp24;
    f32 temp_f0;

    this->actor.gravity = -3.0f;
    this->actor.velocity.y = 0.0f;
    if ((this->actor.xzDistToPlayer < 60.0f) && ((this->collider.base.ocFlags1 & 2) != 0)) {
        this->actor.shape.rot.y += 0x71C;
    } else {
        sp24 = globalCtx->actorCtx.actorList[2].first;
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0xC00);
    }
    temp_f0 = this->actor.xzDistToPlayer;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (temp_f0 < 40.0f) {
        func_80989140(&this->skelAnime, &D_8098C35C, 5);
        this->actionFunc = func_8098AB48;
    } else if ((globalCtx->actorCtx.actorList[2].first->unkA74 * 4) < 0) {
        if ((temp_f0 > 40.0f) && (globalCtx->actorCtx.actorList[2].first->unkAD0 == 0.0f)) {
            Math_ApproachF(&this->actor.speedXZ, 1.5f, 0.2f, 1.0f);
        } else {
            Math_ApproachF(&this->actor.speedXZ, globalCtx->actorCtx.actorList[2].first->speedXZ, 0.2f, 1.0f);
        }
    } else {
        Math_ApproachF(&this->actor.speedXZ, 3.5f, 0.2f, 1.0f);
    }
    func_8098A064(&this->actor, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_80989974(&this->actor);
    if ((this->unk_280 & 0x20) == 0) {
        func_809899C8(&this->actor, 3.0f);
    }
}

void func_8098B198(EnDg *this, GlobalContext *globalCtx) {
    void (*sp2C)(EnDg *, GlobalContext *);

    if (this->actor.xzDistToPlayer > 72.0f) {
        func_80989140(&this->skelAnime, &D_8098C35C, 0xE);
        this->actionFunc = func_8098AC34;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0x3E8, (s16) 1);
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->actor.shape.rot.y = this->actor.wallYaw;
        sp2C = func_8098AC34;
        func_80989140(&this->skelAnime, &D_8098C35C, 0xE);
        this->actionFunc = sp2C;
    }
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Math_ApproachF(&this->actor.speedXZ, -1.0f, 0.2f, 1.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_80989974(&this->actor);
    func_80989A9C(&this->actor, 4.0f);
}

void func_8098B28C(EnDg *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    temp_f0 = this->actor.xzDistToPlayer;
    if (temp_f0 > 200.0f) {
        func_80989140(&this->skelAnime, &D_8098C35C, 1);
        this->actionFunc = (void (*)(EnDg *, GlobalContext *)) func_8098AE58;
    } else if (temp_f0 > 150.0f) {
        func_80989140(&this->skelAnime, &D_8098C35C, 3, (Actor *)0x3E8);
        this->actionFunc = func_8098B390;
    } else {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, (s16) (Actor *)0x3E8, (s16) 1);
        if ((this->actor.bgCheckFlags & 8) != 0) {
            this->actor.shape.rot.y = this->actor.wallYaw;
        }
        this->actor.world.rot.y = this->actor.shape.rot.y;
        Math_ApproachF(&this->actor.speedXZ, -2.0f, 0.2f, 1.0f);
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    func_80989974(&this->actor);
    Audio_PlayActorSound2(&this->actor, 0x290BU);
}

void func_8098B390(EnDg *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    temp_f0 = this->actor.xzDistToPlayer;
    if (temp_f0 < 150.0f) {
        func_80989140(&this->skelAnime, &D_8098C35C, 0xB);
        this->actionFunc = func_8098B28C;
    } else if (temp_f0 > 200.0f) {
        func_80989140(&this->skelAnime, &D_8098C35C, 1);
        this->actionFunc = (void (*)(EnDg *, GlobalContext *)) func_8098AE58;
    }
    func_80989A9C(&this->actor, 0.0f);
    func_80989A9C(&this->actor, 1.0f);
    func_80989A9C(&this->actor, 2.0f);
    func_80989A9C(&this->actor, 3.0f);
    func_809899C8(&this->actor, 5.0f);
}

void func_8098B464(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    sp2C = arg0->world.pos.x;
    sp30 = arg0->world.pos.y + arg0->yDistToWater;
    sp34 = arg0->world.pos.z + 20.0f;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) &sp2C, NULL, NULL, (s16) 0, (s16) 0x320);
    EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp2C, 0x64, 0x1F4, (s16) 0x1E);
    if (arg0->yDistToWater > 0.0f) {
        arg0->gravity = 0.0f;
        arg0->unk284 = 0xA;
        arg0->velocity.y = -3.0f;
        Audio_PlayActorSound2(arg0, 0x2817U);
        arg0->unk144 = func_8098B560;
    }
    Math_ApproachF(&arg0->speedXZ, 1.0f, 0.2f, 1.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void func_8098B560(EnDg *this, GlobalContext *globalCtx) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s16 sp46;
    WaterBox *sp40;
    f32 sp3C;
    s32 sp38;
    f32 sp34;
    CollisionContext *sp2C;
    CollisionContext *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    s16 phi_v1;

    sp46 = 0;
    sp54 = this->actor.world.pos.x;
    sp58 = this->actor.world.pos.y + this->actor.yDistToWater;
    sp5C = this->actor.world.pos.z + 20.0f;
    sp48 = (Math_SinS(this->actor.world.rot.y) * 50.0f) + this->actor.world.pos.x;
    sp4C = this->actor.home.pos.y + 100.0f;
    sp50 = (Math_CosS(this->actor.world.rot.y) * 50.0f) + this->actor.world.pos.z;
    temp_v0 = this->unk_284;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_284 = temp_v0 - 1;
        phi_v1 = this->unk_284;
    }
    if (phi_v1 == 0) {
        temp_v0_2 = this->unk_280;
        if ((temp_v0_2 & 4) == 0) {
            this->unk_280 = temp_v0_2 | 4;
            Audio_PlayActorSound2(&this->actor, 0x2808U);
        }
        this->unk_284 = 5;
        EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp54, 0x64, 0x1F4, (s16) 0x1E);
    }
    temp_f0 = this->actor.yDistToWater;
    if (temp_f0 > 15.0f) {
        this->actor.velocity.y = 0.5f;
    } else if (temp_f0 < 10.0f) {
        this->actor.velocity.y = -0.5f;
    }
    temp_a1 = &globalCtx->colCtx;
    sp2C = temp_a1;
    temp_f0_2 = func_800C4000(globalCtx, temp_a1, &sp38, (Vec3f *) &sp48);
    temp_v0_3 = this->actor.bgCheckFlags;
    if ((temp_v0_3 & 8) != 0) {
        sp34 = temp_f0_2;
        if (func_800CA1AC(globalCtx, temp_a1, sp48, sp50, &sp3C, &sp40) == 0) {
            if (temp_f0_2 > -100.0f) {
                this->actionFunc = func_8098B88C;
                this->unk_280 &= 0xFFFB;
            } else {
                sp46 = this->actor.wallYaw;
            }
        } else if (temp_f0_2 > -100.0f) {
            if (sp3C < temp_f0_2) {
                this->actionFunc = func_8098B88C;
                this->unk_280 &= 0xFFFB;
            } else {
                sp46 = this->actor.wallYaw;
            }
        } else {
            sp46 = this->actor.wallYaw;
        }
    } else if (((temp_v0_3 & 1) != 0) && ((temp_v0_3 & 0x20) == 0)) {
        this->unk_280 &= 0xFFFB;
        this->unk_28C = 8;
        this->actor.gravity = -3.0f;
        this->unk_282 = Rand_S16Offset(0x3C, 0x3C);
        Audio_PlayActorSound2(&this->actor, 0x2808U);
        func_80989140(&this->skelAnime, &D_8098C35C, 2);
        Math_ApproachF(&this->actor.speedXZ, 3.5f, 0.2f, 1.0f);
        this->actionFunc = func_8098A468;
    }
    sp2C = (CollisionContext *) &this->actor.speedXZ;
    Math_SmoothStepToS(&this->actor.world.rot.y, sp46, 4, 0x3E8, (s16) 1);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Math_ApproachF((f32 *) sp2C, 0.5f, 0.2f, 1.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
}

void func_8098B88C(EnDg *this, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 temp_f0;
    s16 temp_v0;
    s16 phi_v1;

    sp34 = this->actor.world.pos.x;
    sp38 = this->actor.world.pos.y + this->actor.yDistToWater;
    sp3C = this->actor.world.pos.z + 20.0f;
    temp_v0 = this->unk_284;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_284 = temp_v0 - 1;
        phi_v1 = this->unk_284;
    }
    if (phi_v1 == 0) {
        this->unk_284 = 5;
        EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp34, 0x64, 0x1F4, (s16) 0x1E);
    }
    temp_f0 = this->actor.yDistToWater;
    if (temp_f0 > 15.0f) {
        this->actor.velocity.y = 1.0f;
    } else if (temp_f0 < 10.0f) {
        this->actor.velocity.y = -1.0f;
    }
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->actor.world.pos.y = sp38;
        this->actor.velocity.y = 10.0f;
        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp34, NULL, NULL, (s16) 0, (s16) 0x320);
    }
    if ((this->actor.bgCheckFlags & 0x20) == 0) {
        this->unk_28C = 8;
        this->actor.velocity.y = 10.0f;
        this->actor.gravity = -3.0f;
        this->unk_282 = Rand_S16Offset(0x3C, 0x3C);
        Audio_PlayActorSound2(&this->actor, 0x2808U);
        func_80989140(&this->skelAnime, &D_8098C35C, 2);
        this->actionFunc = func_8098A468;
        Math_ApproachF(&this->actor.speedXZ, 3.5f, 0.2f, 1.0f);
    } else {
        Math_ApproachF(&this->actor.speedXZ, 0.5f, 0.2f, 1.0f);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
}

void func_8098BA64(EnDg *this, GlobalContext *globalCtx) {
    EnDg *temp_a0;
    u32 temp_t8;

    temp_a0 = this;
    if (Actor_HasNoParent(&this->actor, globalCtx) != 0) {
        temp_t8 = temp_a0->actor.flags | 1;
        temp_a0->unk_290 = 2;
        temp_a0->actor.flags = temp_t8;
        if (D_8098C2A0 != 0) {
            temp_a0->actor.flags = temp_t8 & 0xF7FFFFFF;
            D_8098C2A0 = 0;
            temp_a0->unk_280 &= 0xFFFE;
        }
        temp_a0->unk_288 = -1;
        D_8098C2FE = temp_a0->unk_288;
        temp_a0->unk_28A = 0x64;
        this = temp_a0;
        Actor_SetVelocityAndMoveYRotationAndGravity(&temp_a0->actor);
        this->actionFunc = func_8098BB10;
        this->unk_280 |= 0x10;
    }
}

void func_8098BB10(EnDg *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s16 temp_v0_2;
    u16 temp_v0;
    s16 phi_v1;

    if ((this->actor.bgCheckFlags & 1) != 0) {
        temp_v0 = this->unk_280;
        if ((temp_v0 & 0x10) != 0) {
            this->unk_280 = temp_v0 & 0xFFEF;
            sp24 = globalCtx->actorCtx.actorList[2].first;
            Audio_PlayActorSound2(&this->actor, 0x28EFU);
        }
        this->actor.speedXZ = 0.0f;
        this->actor.gravity = -3.0f;
        if (globalCtx->actorCtx.actorList[2].first->unk14B == 4) {
            func_80989E18(&this->actor, globalCtx);
        }
    }
    temp_v0_2 = this->unk_28A;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_28A = temp_v0_2 - 1;
        phi_v1 = this->unk_28A;
    }
    if (phi_v1 == 0) {
        this->unk_290 = 0;
        func_80989ADC(&this->actor, (Actor *) globalCtx);
        this->actionFunc = func_8098A468;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
}

void func_8098BBEC(EnDg *this, GlobalContext *globalCtx) {
    EnDg *temp_a0;

    temp_a0 = this;
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        temp_a0->actor.flags &= 0xFFFEFFFF;
        this = temp_a0;
        func_80989D38(temp_a0, globalCtx);
        this->actionFunc = func_8098BC54;
        return;
    }
    func_800B8614(&temp_a0->actor, globalCtx, 100.0f);
}

void func_8098BC54(EnDg *this, GlobalContext *globalCtx) {
    if (func_80152498(&globalCtx->msgCtx) == 2) {
        func_80989140(&this->skelAnime, &D_8098C35C, 0);
        this->actionFunc = func_8098BA64;
    }
}

void EnDg_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDg *this = (EnDg *) thisx;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_060080F0, NULL, this->jointTable, this->morphTable, 0xD);
    temp_a1 = &this->collider;
    sp34 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_8098C304);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_8098C33C, &D_8098C330);
    Actor_ProcessInitChain(&this->actor, &D_8098C45C);
    this->unk_1DC = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
    Actor_SetScale(&this->actor, 0.0075f);
    this->actor.targetMode = 1;
    this->actor.gravity = -3.0f;
    this->unk_282 = Rand_S16Offset(0x3C, 0x3C);
    this->unk_280 = 0;
    this->unk_28E = 0x14;
    this->unk_284 = 0xA;
    this->unk_286 = (s16) ((s32) (this->actor.params & 0x3E0) >> 5);
    this->unk_28C = 0;
    this->unk_290 = 0;
    if (globalCtx->sceneNum == 0x41) {
        this->unk_28A = 0x64;
        func_80989BF8(&this->actor);
    }
    func_80989ADC(&this->actor, (Actor *) globalCtx);
}

void EnDg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDg *this = (EnDg *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnDg_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDg *this = (EnDg *) thisx;
    f32 sp28;
    SkelAnime *sp24;

    sp28.unk0 = D_8098C460.unk0;
    sp28.unk8 = (s32) D_8098C460.unk8;
    sp28.unk4 = (s32) D_8098C460.unk4;
    this->unk_288 = D_8098C2FE;
    if (((globalCtx->actorCtx.actorList[2].first->unkA6C & 0x20) == 0) || (globalCtx->sceneNum != 0x6F)) {
        if (func_8098A1B4(this, globalCtx) != 0) {
            func_8098A234(&this->actor, (Actor *) globalCtx);
        } else if (this->unk_28C != 8) {
            this->unk_28C = 8;
            func_80989ADC(&this->actor, (Actor *) globalCtx);
        }
        if (((this->actor.bgCheckFlags & 0x40) != 0) && (Actor_HasNoParent(&this->actor, globalCtx) != 0)) {
            func_80989140(&this->skelAnime, &D_8098C35C, 0xF);
            this->actionFunc = (void (*)(EnDg *, GlobalContext *)) func_8098B464;
        }
        sp24 = &this->skelAnime;
        this->actionFunc(this, globalCtx);
        func_80989204(&this->actor, globalCtx);
        func_8098933C(this, &sp28);
        Math_ApproachF(&this->unk_294.x, sp28, 0.2f, 0.1f);
        Math_ApproachF(&this->unk_294.z, sp30, 0.2f, 0.1f);
        SkelAnime_FrameUpdateMatrix(sp24);
    }
}

s32 func_8098BFB8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_8098BFD4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp20;
    f32 *temp_a0;
    s32 temp_v1;

    temp_a0 = &sp20;
    temp_a0->unk0 = D_8098C46C.unk0;
    temp_a0->unk4 = (s32) D_8098C46C.unk4;
    temp_a0->unk8 = (s32) D_8098C46C.unk8;
    if (arg1 == 5) {
        temp_v1 = arg4->unk144;
        if (func_8098BBEC == temp_v1) {
            sp20 = 0x459C4000;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, arg4 + 0x3C);
            return;
        }
        if (func_8098BC54 != temp_v1) {
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, arg4 + 0x3C);
        }
        // Duplicate return node #5. Try simplifying control flow for better match
    }
}

void EnDg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDg *this = (EnDg *) thisx;
    GraphicsContext *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    s16 temp_t1;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_t1 = *(&D_8098C2A8 + (this->unk_286 * 6));
    switch (temp_t1) {
    case 3:
        temp_v0_2 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = -0x3800;
        temp_v0_2->words.w0 = 0xFB000000;
        break;
    case 1:
        temp_v0_3 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = -0x100;
        temp_v0_3->words.w0 = 0xFB000000;
        break;
    case 5:
        temp_v0_4 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_4->words.w1 = 0x4F4F8F00;
        break;
    case 6:
        temp_v0_5 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_5->words.w1 = 0xFFCF2F00;
        break;
    case 4:
        temp_v0_6 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xFB000000;
        temp_v0_6->words.w1 = 0x8F4F2F00;
        break;
    case 2:
        temp_v0_7 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xFB000000;
        temp_v0_7->words.w1 = 0x8F8F8F00;
        break;
    default:
        temp_v0_8 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = -0x3800;
        temp_v0_8->words.w0 = 0xFB000000;
        break;
    }
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    SysMatrix_RotateStateAroundXAxis(this->unk_294.x);
    SysMatrix_InsertZRotation_f(this->unk_294.z, 1);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, func_8098BFB8, func_8098BFD4, &this->actor);
}

