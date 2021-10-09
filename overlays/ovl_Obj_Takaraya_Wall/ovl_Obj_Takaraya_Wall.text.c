? func_80AD9240(PosRot *arg0, s32 *arg1, s32 *arg2, GlobalContext *); /* static */
s32 func_80AD92FC(s32 arg0, s32 arg1, s32, s32);    /* static */
s32 func_80AD9358(s32 arg0, s32 arg1, s32 arg2, s32); /* static */
void func_80AD9488(s32 arg0, s32 arg1);             /* static */
extern ? D_06000B70;
extern ? D_06000D60;
static ColliderCylinderInit D_80ADA2A0 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x28, 0x78, 0, {0, 0, 0}},
};
static InitChainEntry D_80ADA2CC;                   /* unable to generate initializer */
static s32 D_80ADA450;
static ? D_80ADA458;
static s32 D_80ADA508;
static s32 D_80ADA50C;
static Vec3f D_80ADA510;
static ? D_80ADA930;
static f32 D_80ADA988;
static ? D_80ADA98C;
static ? D_80ADA9A4;
static f32 D_80ADAAC8;
static f32 D_80ADAACC;
static f32 D_80ADAAE0;
static ? D_80ADAAE8;

typedef struct ObjTakarayaWall {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(ObjTakarayaWall *, GlobalContext *);
    /* 0x0148 */ ColliderCylinder unk148;           /* inferred */
    /* 0x0194 */ ColliderCylinder unk194;           /* inferred */
} ObjTakarayaWall;                                  /* size 0x1E0 */

? func_80AD9240(PosRot *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_lo;
    s32 temp_v0;

    *arg1 = (s32) ((s32) arg0->pos.x + 0x690) / 0x78;
    temp_lo = (s32) arg0->pos.z / 0x78;
    *arg2 = temp_lo;
    temp_v0 = *arg1;
    if ((temp_v0 < 0) || (temp_v0 >= 0xB) || (temp_lo < 0) || (temp_lo >= 8)) {
        return 0;
    }
    return 1;
}

s32 func_80AD92FC(s32 arg0, s32 arg1) {
    if ((arg0 < 0) || (arg0 >= 0xB) || (arg1 < 0) || (arg1 >= 8) || (*(&D_80ADA988 + ((arg0 << 5) + (arg1 * 4))) == 0.0f)) {
        return 0;
    }
    return 1;
}

s32 func_80AD9358(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 phi_v1;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v1_2;
    s32 phi_a2;
    s32 phi_a3;

    phi_v1_2 = arg1;
    if ((arg2 == 2) || (arg2 == 0)) {
        phi_a3 = arg1 + 1;
        if (arg2 == 0) {
            sp1C = arg0 - 2;
            phi_v0 = arg0 - 1;
        } else {
            sp1C = arg0 + 2;
            phi_v0 = arg0 + 1;
        }
        sp18 = arg1;
        sp24 = phi_v0;
        sp20 = arg1 - 1;
        phi_v0_2 = phi_v0;
        phi_a2 = phi_v0;
    } else {
        phi_v0_2 = arg0;
        if (arg2 == 1) {
            sp18 = arg1 - 2;
            phi_v1 = arg1 - 1;
        } else {
            sp18 = arg1 + 2;
            phi_v1 = arg1 + 1;
        }
        sp1C = arg0;
        sp24 = arg0 - 1;
        sp20 = phi_v1;
        phi_v1_2 = phi_v1;
        phi_a2 = arg0 + 1;
        phi_a3 = phi_v1;
    }
    if ((phi_v0_2 < 0) || (phi_v0_2 >= 0xB) || (phi_v1_2 < 0) || (phi_v1_2 >= 8) || (*(&D_80ADA988 + ((phi_v0_2 << 5) + (phi_v1_2 * 4))) == -10.0f) || (func_80AD92FC(phi_a2, phi_a3, phi_a2, phi_a3) != 0) || (func_80AD92FC(sp24, sp20) != 0) || (func_80AD92FC(sp1C, sp18) != 0)) {
        return 0;
    }
    return 1;
}

void func_80AD9488(s32 arg0, s32 arg1) {
    s32 sp1C;
    s32 sp18;
    s32 temp_hi;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    void *temp_a0;
    void *temp_v1;
    s32 phi_v1;
    s32 phi_a3;
    s32 phi_v1_2;
    s32 phi_a3_2;
    s32 phi_v1_3;
    s32 phi_a3_3;
    s32 phi_a3_4;
    s32 phi_v1_4;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    s32 phi_v0_6;
    s32 phi_v0_7;
    s32 phi_v0_8;
    s32 phi_v0_9;

    sp1C = 0;
    sp18 = 0;
    phi_v1 = sp1C;
    phi_a3 = sp18;
    if (func_80AD9358(arg0, arg1, 0) != 0) {
        phi_v1 = 1;
        phi_a3 = 1;
    }
    sp1C = phi_v1;
    sp18 = phi_a3;
    phi_v1_2 = phi_v1;
    phi_a3_2 = phi_a3;
    if (func_80AD9358(arg0, arg1, 1, phi_a3) != 0) {
        phi_v1_2 = phi_v1 | 2;
        phi_a3_2 = phi_a3 + 1;
    }
    sp1C = phi_v1_2;
    sp18 = phi_a3_2;
    phi_v1_3 = phi_v1_2;
    phi_a3_3 = phi_a3_2;
    if (func_80AD9358(arg0, arg1, 2, phi_a3_2) != 0) {
        phi_v1_3 = phi_v1_2 | 4;
        phi_a3_3 = phi_a3_2 + 1;
    }
    sp1C = phi_v1_3;
    sp18 = phi_a3_3;
    phi_a3_4 = phi_a3_3;
    phi_v1_4 = phi_v1_3;
    if (func_80AD9358(arg0, arg1, 3, phi_a3_3) != 0) {
        phi_a3_4 = phi_a3_3 + 1;
        phi_v1_4 = phi_v1_3 | 8;
    }
    if (phi_a3_4 == 0) {
        D_80ADA450 += -1;
        if (D_80ADA50C == 0) {
            D_80ADA508 += -1;
            return;
        }
        // Duplicate return node #39. Try simplifying control flow for better match
        return;
    }
    sp1C = phi_v1_4;
    sp18 = phi_a3_4;
    temp_hi = (s32) Rand_ZeroFloat((f32) phi_a3_4) % phi_a3_4;
    if (temp_hi == 0) {
        phi_v0 = 0;
        phi_v0_9 = 0;
        if ((phi_v1_4 & 1) == 0) {
            do {
                temp_v0 = phi_v0 + 1;
                phi_v0 = temp_v0;
                phi_v0_9 = temp_v0;
            } while (((1 << temp_v0) & phi_v1_4) == 0);
        }
    } else if (temp_hi == 1) {
        phi_v0_2 = 3;
        phi_v0_9 = 3;
        if ((phi_v1_4 & 8) == 0) {
            do {
                temp_v0_2 = phi_v0_2 - 1;
                phi_v0_2 = temp_v0_2;
                phi_v0_9 = temp_v0_2;
            } while (((1 << temp_v0_2) & phi_v1_4) == 0);
        }
    } else if (temp_hi == 2) {
        phi_v0_3 = 0;
        phi_v0_4 = 0;
        if ((phi_v1_4 & 1) == 0) {
            do {
                temp_v0_3 = phi_v0_3 + 1;
                phi_v0_3 = temp_v0_3;
                phi_v0_4 = temp_v0_3;
            } while (((1 << temp_v0_3) & phi_v1_4) == 0);
        }
        temp_v0_4 = phi_v0_4 + 1;
        phi_v0_5 = temp_v0_4;
        phi_v0_9 = temp_v0_4;
        if (((1 << temp_v0_4) & phi_v1_4) == 0) {
            do {
                temp_v0_5 = phi_v0_5 + 1;
                phi_v0_5 = temp_v0_5;
                phi_v0_9 = temp_v0_5;
            } while (((1 << temp_v0_5) & phi_v1_4) == 0);
        }
    } else {
        phi_v0_6 = 3;
        phi_v0_7 = 3;
        if ((phi_v1_4 & 8) == 0) {
            do {
                temp_v0_6 = phi_v0_6 - 1;
                phi_v0_6 = temp_v0_6;
                phi_v0_7 = temp_v0_6;
            } while (((1 << temp_v0_6) & phi_v1_4) == 0);
        }
        temp_v0_7 = phi_v0_7 - 1;
        phi_v0_8 = temp_v0_7;
        phi_v0_9 = temp_v0_7;
        if (((1 << temp_v0_7) & phi_v1_4) == 0) {
            do {
                temp_v0_8 = phi_v0_8 - 1;
                phi_v0_8 = temp_v0_8;
                phi_v0_9 = temp_v0_8;
            } while (((1 << temp_v0_8) & phi_v1_4) == 0);
        }
    }
    if (phi_v0_9 == 0) {
        arg0 += -1;
    } else if (phi_v0_9 == 2) {
        arg0 += 1;
    } else if (phi_v0_9 == 1) {
        arg1 += -1;
    } else {
        arg1 += 1;
    }
    temp_a0 = (arg0 << 5) + &D_80ADA988;
    *(temp_a0 + (arg1 * 4)) = -10.0f;
    temp_v0_9 = D_80ADA450;
    temp_v1 = (temp_v0_9 * 2) + &D_80ADA458;
    D_80ADA450 = temp_v0_9 + 1;
    temp_v1->unk0 = (s8) arg0;
    temp_v1->unk1 = (s8) arg1;
    if (D_80ADA50C == 0) {
        D_80ADA508 += 1;
        if (temp_a0 == &D_80ADAAC8) {
            D_80ADA50C = 1;
        }
    }
}

void ObjTakarayaWall_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjTakarayaWall *this = (ObjTakarayaWall *) thisx;
    ? *temp_v0_5;
    Actor *temp_s0;
    f32 *temp_v0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 temp_v1;
    u32 temp_a1;
    void *temp_v0_3;
    void *temp_v0_4;
    f32 *phi_v0;
    s32 phi_v1;
    f32 *phi_a1;
    s32 phi_s0;
    ? *phi_v0_2;
    ? *phi_v0_3;

    Actor_ProcessInitChain(&this->actor, &D_80ADA2CC);
    phi_a1 = &D_80ADA988;
    do {
        phi_v0 = phi_a1;
        phi_v1 = 0;
loop_2:
        temp_v1 = phi_v1 + 4;
        phi_v0->unk4 = 0.0f;
        phi_v0->unk8 = 0.0f;
        phi_v0->unkC = 0.0f;
        temp_v0 = phi_v0 + 0x10;
        temp_v0->unk-10 = 0.0f;
        phi_v0 = temp_v0;
        phi_v1 = temp_v1;
        if (temp_v1 != 8) {
            goto loop_2;
        }
        temp_a1 = phi_a1 + 0x20;
        phi_a1 = (f32 *) temp_a1;
    } while (temp_a1 < (u32) &D_80ADAAE8);
    Collider_InitAndSetCylinder(globalCtx, &this->unk148, &this->actor, &D_80ADA2A0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk194, &this->actor, &D_80ADA2A0);
    this->actor.colChkInfo.mass = 0xFF;
    temp_v0_2 = (s32) Rand_ZeroFloat(8.0f) % 8;
    temp_s1 = temp_v0_2;
    temp_s0 = Actor_SpawnAsChildAndCutscene(&globalCtx->actorCtx, globalCtx, 6, -1635.0f, 0.0f, (f32) ((temp_v0_2 * 0x78) + 0x3C), (s16) 0, (s16) 0x4000, (s16) (s32) this->actor.shape.rot.z, (s32) this->actor.params, (u32) this->actor.cutscene, 0x3FF, NULL);
    Actor_SetSwitchFlag(globalCtx, (s32) this->actor.shape.rot.z);
    this->actor.shape.rot.z = 0;
    if (temp_s0 != 0) {
        temp_s0->uncullZoneForward = 2000.0f;
    }
    *(&D_80ADA988 + (temp_s1 * 4)) = -10.0f;
    temp_s0_2 = D_80ADA450;
    temp_v0_3 = &D_80ADA458 + (temp_s0_2 * 2);
    temp_t7 = temp_s0_2 + 1;
    temp_v0_3->unk0 = 0;
    temp_v0_3->unk1 = (s8) temp_s1;
    D_80ADA450 = temp_t7;
    D_80ADA508 += 1;
    phi_s0 = temp_t7;
    do {
        temp_v0_4 = &D_80ADA458 + (phi_s0 * 2);
        func_80AD9488((s32) temp_v0_4->unk-2, (s32) temp_v0_4->unk-1);
        temp_s0_3 = D_80ADA450;
        phi_s0 = temp_s0_3;
    } while (temp_s0_3 >= 2);
    phi_v0_2 = &D_80ADA98C;
loop_9:
    phi_v0_3 = phi_v0_2;
    if (phi_v0_2->unk140 != -10.0f) {
        temp_v0_5 = phi_v0_2 + 4;
        phi_v0_2 = temp_v0_5;
        phi_v0_3 = temp_v0_5;
        if (temp_v0_5 != &D_80ADA9A4) {
            goto loop_9;
        }
    }
    if (phi_v0_3 == &D_80ADA9A4) {
        if (D_80ADAAC8 == -10.0f) {
            D_80ADAACC = -10.0f;
        } else {
            D_80ADAAE0 = -10.0f;
        }
    }
    this->actionFunc = func_80AD9B04;
}

void ObjTakarayaWall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjTakarayaWall *this = (ObjTakarayaWall *) thisx;
    Vec3f *temp_s3;
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;
    Vec3f *phi_s3;

    Collider_DestroyCylinder(globalCtx, &this->unk148);
    Collider_DestroyCylinder(globalCtx, &this->unk194);
    phi_s3 = &D_80ADA510;
    do {
        phi_s1 = phi_s3;
        phi_s0 = 0;
loop_2:
        func_801A72CC(phi_s1);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
        if (temp_s0 != 0x60) {
            goto loop_2;
        }
        temp_s3 = phi_s3 + 0x60;
        phi_s3 = temp_s3;
    } while (temp_s3 != &D_80ADA930);
}

void func_80AD9B04(ObjTakarayaWall *this, GlobalContext *globalCtx) {
    Actor *spBC;
    s32 spB0;
    s32 spAC;
    s32 spA8;
    s32 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp90;
    s32 sp8C;
    f32 *sp84;
    Actor *temp_v0;
    ColliderCylinder *temp_v0_2;
    ColliderCylinder *temp_v0_3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t3;
    s8 *temp_s0;
    f32 *phi_s3;
    s32 phi_s1;
    s32 phi_v0;
    s32 phi_s2;
    s32 phi_s7;
    s32 phi_fp;
    s32 phi_v0_2;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    spA4 = 0;
    spA8 = 0;
    sp8C = -1;
    sp90 = -1;
    spBC = temp_v0;
    func_80AD9240(&temp_v0->world, &spB0, &spAC, globalCtx);
    temp_t3 = ((s32) ((s32) spBC->world.pos.x + 0x708) % 0x78) - 0x3C;
    spA0 = temp_t3;
    sp9C = ((s32) ((s32) spBC->world.pos.z + 0x78) % 0x78) - 0x3C;
    phi_s2 = 0;
    phi_s7 = -1;
    phi_fp = -1;
    if (temp_t3 >= 0x15) {
        phi_fp = spB0 + 1;
    } else if (spA0 < -0x14) {
        phi_s7 = spB0 - 1;
    }
    if (sp9C >= 0x15) {
        sp8C = spAC + 1;
    } else if (sp9C < -0x14) {
        sp90 = spAC - 1;
    }
    sp84 = &D_80ADA988;
    phi_v0 = spAC;
    do {
        phi_s3 = sp84;
        phi_s1 = 0;
loop_10:
        phi_v0_2 = phi_v0;
        if (*phi_s3 >= 0.0f) {
            if (((phi_s1 == phi_v0) && ((phi_s2 == phi_s7) || (phi_s2 == phi_fp))) || ((phi_s2 == spB0) && ((phi_s1 == sp90) || (phi_s1 == sp8C)))) {
                temp_s0 = (phi_s2 * 8) + phi_s1 + &D_80ADA930;
                if (Math_StepToF(phi_s3, 120.0f, 15.0f) != 0) {
                    *temp_s0 = 0;
                } else {
                    *temp_s0 = 1;
                }
                phi_v0_2 = spAC;
                if (phi_s1 == spAC) {
                    spA8 = 1;
                } else if (phi_s2 == spB0) {
                    spA4 = 1;
                }
            } else if ((phi_s2 != spB0) || (phi_s1 != phi_v0)) {
                Math_SmoothStepToF(phi_s3, 0.0f, 0.2f, 5.0f, 1.0f);
                *((phi_s2 * 8) + phi_s1 + &D_80ADA930) = 2;
                phi_v0_2 = spAC;
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s3 += 4;
        phi_s1 = temp_s1;
        phi_v0 = phi_v0_2;
        phi_v0 = phi_v0_2;
        if (temp_s1 != 8) {
            goto loop_10;
        }
        temp_s2 = phi_s2 + 1;
        sp84 += 0x20;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xB);
    this->unk148.dim.radius = 0xC8;
    if (spA8 == 0) {
        this->unk148.dim.pos.y = (s32) this->actor.world.pos.y - 0xF0;
    } else {
        temp_v0_2 = &this->unk148;
        temp_v0_2->dim.pos.y = (s16) (s32) this->actor.world.pos.y;
        temp_v0_2->dim.pos.z = (s16) (s32) spBC->world.pos.z;
        if (spA0 > 0) {
            temp_v0_2->dim.pos.x = (((s32) ((s32) spBC->world.pos.x + 0x690) / 0x78) * 0x78) - 0x564;
        } else {
            temp_v0_2->dim.pos.x = (((s32) ((s32) spBC->world.pos.x + 0x690) / 0x78) * 0x78) - 0x744;
        }
    }
    this->unk194.dim.radius = 0xC8;
    if (spA4 == 0) {
        this->unk194.dim.pos.y = (s32) this->actor.world.pos.y - 0xF0;
        return;
    }
    temp_v0_3 = &this->unk194;
    temp_v0_3->dim.pos.y = (s16) (s32) this->actor.world.pos.y;
    temp_v0_3->dim.pos.x = (s16) (s32) spBC->world.pos.x;
    if (sp9C > 0) {
        temp_v0_3->dim.pos.z = (((s32) spBC->world.pos.z / 0x78) * 0x78) + 0x12C;
        return;
    }
    temp_v0_3->dim.pos.z = (((s32) spBC->world.pos.z / 0x78) * 0x78) - 0xB4;
}

void ObjTakarayaWall_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjTakarayaWall *this = (ObjTakarayaWall *) thisx;
    CollisionCheckContext *sp1C;
    CollisionCheckContext *temp_a1;
    GlobalContext *temp_a3;

    temp_a3 = globalCtx;
    globalCtx = temp_a3;
    this->actionFunc(this, temp_a3);
    temp_a1 = &globalCtx->colChkCtx;
    sp1C = temp_a1;
    CollisionCheck_SetOC(globalCtx, temp_a1, &this->unk148.base);
    CollisionCheck_SetOC(globalCtx, temp_a1, &this->unk194.base);
}

void ObjTakarayaWall_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjTakarayaWall *this = (ObjTakarayaWall *) thisx;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    GraphicsContext *sp7C;
    f32 *sp60;
    Gfx *temp_s2;
    Gfx *temp_s2_2;
    MtxF *temp_s4;
    Vec3f *temp_s0;
    f32 *temp_a1;
    s32 temp_s1;
    s32 temp_s7;
    u8 *temp_s5;
    void *temp_s2_3;
    f32 *phi_s6;
    s32 phi_s7;
    s32 phi_s1;
    Gfx *phi_s2;
    Gfx *phi_s2_2;

    sp7C = globalCtx->state.gfxCtx;
    temp_s4 = SysMatrix_GetCurrentState();
    temp_s2 = sp7C->polyOpa.p;
    temp_s2->words.w1 = (u32) (sSetupDL + 0x4B0);
    temp_s2->words.w0 = 0xDE000000;
    temp_s2_2 = temp_s2 + 8;
    temp_s2_2->words.w1 = -1;
    temp_s2_2->words.w0 = 0xFA000000;
    sp60 = &D_80ADA988;
    phi_s7 = 0;
    phi_s2 = temp_s2_2 + 8;
    do {
        phi_s6 = sp60;
        phi_s1 = 0;
loop_2:
        phi_s2_2 = phi_s2;
        if (*phi_s6 > 0.0f) {
            temp_s5 = (phi_s7 * 8) + phi_s1 + &D_80ADA930;
            temp_s4->mf[3][0] = (f32) ((phi_s7 * 0x78) - 0x654);
            temp_s4->mf[3][2] = (f32) ((phi_s1 * 0x78) + 0x3C);
            temp_s4->mf[3][1] = *phi_s6 + (this->actor.world.pos.y - 120.0f);
            phi_s2->words.w0 = 0xDA380003;
            temp_s2_3 = phi_s2 + 8;
            phi_s2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            if (((phi_s7 + phi_s1) & 1) != 0) {
                temp_s2_3->unk0 = 0xDE000000;
                temp_s2_3->unk4 = &D_06000D60;
                phi_s2_2 = temp_s2_3 + 8;
            } else {
                temp_s2_3->unk0 = 0xDE000000;
                temp_s2_3->unk4 = &D_06000B70;
                phi_s2_2 = temp_s2_3 + 8;
            }
            temp_a1 = &sp94;
            if (*temp_s5 != 0) {
                sp94 = temp_s4->mf[3][0];
                sp98 = temp_s4->mf[3][1];
                temp_s0 = (phi_s7 * 0x60) + (phi_s1 * 0xC) + &D_80ADA510;
                sp9C = temp_s4->mf[3][2];
                SkinMatrix_Vec3fMtxFMultXYZ(&globalCtx->projectionMatrix, (Vec3f *) temp_a1, temp_s0);
                if (*temp_s5 == 1) {
                    func_8019F1C0(temp_s0, 0x2132U);
                } else {
                    func_8019F1C0(temp_s0, 0x2133U);
                }
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s6 += 4;
        phi_s1 = temp_s1;
        phi_s2 = phi_s2_2;
        phi_s2 = phi_s2_2;
        if (temp_s1 != 8) {
            goto loop_2;
        }
        temp_s7 = phi_s7 + 1;
        sp60 += 0x20;
        phi_s7 = temp_s7;
    } while (temp_s7 != 0xB);
    sp7C->polyOpa.p = phi_s2_2;
}

