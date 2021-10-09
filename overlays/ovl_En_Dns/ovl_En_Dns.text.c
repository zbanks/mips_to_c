void func_8092C5C0(Actor *arg0);                    /* static */
s32 func_8092C63C(Actor *arg0, s32 arg1);           /* static */
void func_8092C6FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092C740(void *arg0, void *arg1);         /* static */
void func_8092C86C(EnDns *arg0, GlobalContext *);   /* static */
void func_8092C934(EnDns *arg0);                    /* static */
? *func_8092C9BC(Actor *arg0, GlobalContext *arg1); /* static */
u16 func_8092CA74(EnDns *arg0);                     /* static */
s32 func_8092CAD0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8092CB98(EnDns *arg0, GlobalContext *arg1); /* static */
s32 func_8092CC68(GlobalContext *arg0);             /* static */
? func_8092CCEC(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_8092CE38(Actor *arg0, Actor *);            /* static */
s32 func_8092D068(EnDns *arg0);                     /* static */
void func_8092D108(EnDns *arg0, GraphicsContext **arg1); /* static */
void func_8092D1B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092D320(EnDns *this, GlobalContext *globalCtx); /* static */
void func_8092D5E8(Actor *arg0, GlobalContext *arg1); /* static */
? func_8092D954(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5); /* static */
s32 func_8092DA68(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_8092DA94(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern ? D_06002C48;
extern SkeletonHeader D_06002DD8;
static ? D_8092DCB0;                                /* unable to generate initializer */
static ? D_8092DCC0;                                /* unable to generate initializer */
static ? D_8092DCD0;                                /* unable to generate initializer */
static ? D_8092DCE0;                                /* unable to generate initializer */
static ? D_8092DCF0;                                /* unable to generate initializer */
static ? D_8092DD00;                                /* unable to generate initializer */
static ColliderCylinderInit D_8092DD28 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x2E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_8092DD54 = {1, 0, 0, 0, 0xFF};
static ? D_8092DE00;                                /* unable to generate initializer */
static ? D_8092DE0C;                                /* unable to generate initializer */
static ? D_8092DE1C;                                /* unable to generate initializer */
static ActorAnimationEntryS sAnimations = {
    {(AnimationHeader *)0x6003310, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003310, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60034EC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60034EC, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60008F4, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6000BD8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6000D58, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6000FEC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60002A8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6000734, 1.0f, 0, 0xFFFF, 2, 0},
};



void func_8092C5C0(Actor *arg0) {
    SkelAnime *sp18;
    SkelAnime *temp_a0;
    s32 temp_v0;

    temp_v0 = arg0->unk2F8;
    temp_a0 = arg0 + 0x144;
    if (((temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 6) || (temp_v0 == 7)) && ((sp18 = temp_a0, arg0 = arg0, (func_801378B8(temp_a0, 0.0f) != 0)) || (func_801378B8(temp_a0, 3.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x387FU);
    }
}

s32 func_8092C63C(Actor *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;
    s32 phi_t0;

    phi_v1 = 0;
    phi_t0 = 0;
    if ((arg1 != 0) && (arg1 != 1)) {
        if ((arg1 != 2) && (arg1 != 3)) {
            if (arg1 != arg0->unk2F8) {
                goto block_12;
            }
        } else {
            temp_v0 = arg0->unk2F8;
            if ((temp_v0 != 2) && (temp_v0 != 3)) {
                goto block_12;
            }
        }
    } else {
        temp_v0_2 = arg0->unk2F8;
        if ((temp_v0_2 != 0) && (temp_v0_2 != 1)) {
block_12:
            phi_v1 = 1;
        }
    }
    if (phi_v1 != 0) {
        arg0->unk2F8 = arg1;
        phi_t0 = func_8013BC6C(arg0 + 0x144, &sAnimations, arg1);
    }
    return phi_t0;
}

void func_8092C6FC(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x18C;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
}

void func_8092C740(void *arg0, void *arg1) {
    void *sp44;
    Vec3f sp34;
    Vec3f sp28;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    sp44 = arg1->unk1CCC;
    Math_ApproachS(arg0 + 0x2CE, (s16) (arg0->unk92 - arg0->unkBE), 4, 0x2AA8);
    temp_v0 = arg0->unk2CE;
    if ((s32) temp_v0 < -0x3FFC) {
        arg0->unk2CE = -0x3FFC;
    } else {
        phi_v1 = temp_v0;
        if ((s32) temp_v0 >= 0x3FFD) {
            phi_v1 = 0x3FFC;
        }
        arg0->unk2CE = phi_v1;
    }
    Math_Vec3f_Copy(&sp28, sp44 + 0x24);
    sp28.y = sp44->unkC44 + 3.0f;
    Math_Vec3f_Copy(&sp34, arg0 + 0x24);
    sp34.y += 10.0f;
    Math_ApproachS(arg0 + 0x2CC, Math_Vec3f_Pitch(&sp34, &sp28), 4, 0x2AA8);
    temp_v0_2 = arg0->unk2CC;
    if ((s32) temp_v0_2 < -0x16C0) {
        arg0->unk2CC = -0x16C0;
        return;
    }
    phi_v1_2 = temp_v0_2;
    if ((s32) temp_v0_2 >= 0xE39) {
        phi_v1_2 = 0xE38;
    }
    arg0->unk2CC = phi_v1_2;
}

void func_8092C86C(EnDns *arg0) {
    s16 temp_v0;
    s16 temp_v0_3;
    u16 temp_t1;
    u16 temp_t2;
    u16 temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    if ((arg0->unk_2C6 & 8) != 0) {
        temp_v0 = arg0->unk_2DC;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_2DC = temp_v0 - 1;
            phi_v1 = arg0->unk_2DC;
        }
        if (phi_v1 == 0) {
            func_8092C740();
            temp_t1 = arg0->unk_2C6 & 0xFFEF;
            temp_t2 = temp_t1 | 0x20;
            arg0->unk_2C6 = temp_t1;
            arg0->unk_2C6 = temp_t2;
            return;
        }
        goto block_6;
    }
block_6:
    temp_v0_2 = arg0->unk_2C6;
    if ((temp_v0_2 & 0x20) != 0) {
        arg0->unk_2C6 = temp_v0_2 & 0xFFDF;
        arg0->unk_2CC = 0;
        arg0->unk_2CE = 0;
        arg0->unk_2DC = 0x14;
        return;
    }
    temp_v0_3 = arg0->unk_2DC;
    if (temp_v0_3 == 0) {
        phi_v1_2 = 0;
    } else {
        arg0->unk_2DC = temp_v0_3 - 1;
        phi_v1_2 = arg0->unk_2DC;
    }
    if (phi_v1_2 == 0) {
        arg0->unk_2C6 |= 0x10;
    }
}

void func_8092C934(EnDns *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    if ((arg0->unk_2C6 & 0x40) != 0) {
        temp_v0 = arg0->unk_2DE;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_2DE = temp_v0 - 1;
            phi_v1 = arg0->unk_2DE;
        }
        if (phi_v1 == 0) {
            arg0->unk_2E0 += 1;
            if ((s32) arg0->unk_2E0 >= 4) {
                arg0 = arg0;
                arg0->unk_2DE = Rand_S16Offset(0x1E, 0x1E);
                arg0->unk_2E0 = 0;
            }
        }
    }
}

? *func_8092C9BC(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    if ((gSaveContext.weekEventReg[23] & 0x20) == 0) {
        if (arg1->actorCtx.actorList[2].first->unk14B != 3) {
            return &D_8092DCF0;
        }
        if (arg0->unk2FC != 0) {
            return &D_8092DD00;
        }
        goto block_5;
    }
block_5:
    temp_v0 = arg0->params & 7;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    return NULL;
                }
                return &D_8092DCE0;
            }
            return &D_8092DCD0;
        }
        return &D_8092DCC0;
    }
    return &D_8092DCB0;
}

s16 func_8092CA74(EnDns *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->actor.params & 7;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    return 0;
                }
                return 0x1D4;
            }
            return 0x1D3;
        }
        return 0x1D2;
    }
    return 0x1D1;
}

s32 func_8092CAD0(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0->unk2C6 & 7) != 0) {
        sp24 = 0;
        phi_v1 = sp24;
        if (func_800B84D0(arg0, arg1) != 0) {
            func_8013AED4(arg0 + 0x2C6, 0U, 7U);
            arg0->unk2C6 = (u16) (arg0->unk2C6 & 0xFFEF);
            if ((arg0->params & 0x4000) != 0) {
                arg0->unk2F0 = 0.0f;
                if (arg0->unk2D2 != 0) {
                    arg0->unk2F0 = (f32) arg0->unk15C;
                    func_8092C63C(arg0, 2);
                }
                arg0->unk2DA = (s16) arg0->world.rot.y;
            }
            arg0->unk1E0 = func_8092C9BC(arg0, arg1);
            arg0->unk188 = func_8092D4D8;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

s32 func_8092CB98(EnDns *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 phi_v1;

    phi_v1 = 0;
    if (arg1->csCtx.state != 0) {
        if ((arg0->unk_2C6 & 0x80) == 0) {
            arg0->unk_2C8 = func_8092CA74(arg0);
            arg0->actor.flags &= -2;
            func_8013AED4(arg0 + 0x2C6, 0U, 7U);
            arg0->unk_1D8 = 0xFF;
            arg0->unk_2C6 |= 0x80;
        }
        phi_v1 = 1;
    } else if ((arg0->unk_2C6 & 0x80) != 0) {
        arg0->actor.flags |= 1;
        sp24 = 0;
        func_8013AED4(arg0 + 0x2C6, 3U, 7U);
        arg0->unk_2C6 &= 0xFF7F;
    }
    return phi_v1;
}

s32 func_8092CC68(GlobalContext *arg0) {
    void *sp24;
    s32 sp18;
    GlobalContext *temp_a3;
    void *temp_v1;

    temp_a3 = arg0;
    temp_v1 = temp_a3->actorCtx.actorList[2].first;
    sp18 = 0;
    arg0 = temp_a3;
    sp24 = temp_v1;
    if ((func_801690CC(temp_a3) == 0) && ((temp_v1->bgCheckFlags & 1) != 0) && (temp_v1->unk14B != 3) && (func_800C99AC(&arg0->colCtx, temp_v1->floorPoly, (s32) temp_v1->floorBgId) != 4)) {
        sp18 = 1;
    }
    return sp18;
}

? func_8092CCEC(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp3C;
    Vec3f sp30;
    s16 sp2E;
    Vec3f *sp28;
    Vec3f *temp_a1;
    Vec3f *temp_a2;

    temp_a1 = arg0 + 0x24;
    temp_a2 = arg1->actorCtx.actorList[2].first + 0x24;
    sp3C.x = temp_a2->x;
    sp3C.y = temp_a2->y;
    sp3C.z = temp_a2->z;
    sp30.x = temp_a1->x;
    sp30.y = temp_a1->y;
    sp30.z = temp_a1->z;
    sp28 = temp_a2;
    Math_Vec3f_Copy(&sp30, temp_a1);
    Math_Vec3f_Copy(&sp3C, sp28);
    arg0->unk2D6 = Math_Vec3f_Yaw(&D_801D15B0, &sp3C);
    arg0->unk2D4 = Math_Vec3f_Yaw(&D_801D15B0, &sp30);
    arg0->unk2EC = Math_Vec3f_DistXZ(&sp30, &D_801D15B0);
    sp2E = Math_Vec3f_Yaw(&D_801D15B0, &sp3C);
    sp2E -= Math_Vec3f_Yaw(&D_801D15B0, &sp30);
    arg0->unk2D8 = (s16) (s32) ((Rand_ZeroOne() * 182.0f) + 182.0f);
    if ((s32) sp2E > 0) {
        arg0->unk2D8 = (s16) arg0->unk2D8;
    } else {
        arg0->unk2D8 = (s16) -(s32) arg0->unk2D8;
    }
    arg0->unk2D0 = 0x28;
    arg0->shape.shadowDraw = func_800B3FC0;
    return 1;
}

s32 func_8092CE38(Actor *arg0) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 sp28;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f0;

    sp28 = 0;
    temp_a0 = arg0 + 0x144;
    if (((arg0->unk2C6 & 0x200) != 0) || (sp24 = temp_a0, (func_801378B8(temp_a0, arg0->unk154) != 0))) {
        func_8092C63C(arg0, *(&D_8092DE00 + (arg0->unk2D2 * 4)));
        arg0->unk2C6 = (u16) (arg0->unk2C6 & 0xFDFF);
        arg0->unk15C = 0.0f;
        if (arg0->unk2D2 == 2) {
            Audio_PlayActorSound2(arg0, 0x398DU);
        }
        arg0->unk2D2 = (s16) (arg0->unk2D2 + 1);
        if ((s32) arg0->unk2D2 >= 3) {
            arg0->unk2D2 = 0;
        }
        sp28 = 1;
    } else {
        if (arg0->unk2D2 == 0) {
            if (func_801378B8(sp24, 13.0f) != 0) {
                arg0->world.rot.y += 0x8000;
                arg0->unk2E4 = 0.0f;
                arg0->shape.rot.y = arg0->world.rot.y;
                Audio_PlayActorSound2(arg0, 0x398DU);
            } else {
                temp_f0 = arg0->unk15C;
                if (temp_f0 < 13.0f) {
                    arg0->shape.rot.y = arg0->world.rot.y;
                    arg0->shape.rot.y += (s16) ((s16) (s32) temp_f0 * 0x9D8);
                    arg0->unk2E4 = (f32) (arg0->unk2E4 - -3.0769231f);
                }
            }
        } else {
            if ((func_801378B8(sp24, 0.0f) != 0) || (func_801378B8(sp24, 6.0f) != 0) || (func_801378B8(sp24, 13.0f) != 0)) {
                Audio_PlayActorSound2(arg0, 0x387FU);
            }
            if (arg0->unk15C > 7.0f) {
                arg0->unk2E4 = (f32) (arg0->unk2E4 + -1.5384616f);
            }
        }
        sp2C = arg0->unk2E4;
        sp30 = 0.0f;
        sp34 = 0.0f;
        Lib_Vec3f_TranslateAndRotateY(&arg0->home.pos, arg0->world.rot.y, (Vec3f *) &sp2C, &arg0->world.pos);
    }
    return sp28;
}

s32 func_8092D068(EnDns *arg0) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->actor.params;
    phi_v1 = 0;
    if ((temp_v0 & 0x8000) != 0) {
        if ((gSaveContext.weekEventReg[23] & 0x20) != 0) {
            goto block_9;
        }
    } else if ((temp_v0 & 0x4000) != 0) {
        if (((gSaveContext.weekEventReg[9] & 0x80) != 0) && ((gSaveContext.weekEventReg[23] & 0x20) == 0)) {
            goto block_9;
        }
    } else if (((gSaveContext.weekEventReg[9] & 0x80) == 0) && ((gSaveContext.weekEventReg[23] & 0x20) == 0)) {
block_9:
        phi_v1 = 1;
    }
    return phi_v1;
}

void func_8092D108(EnDns *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = *arg1;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_SetStateRotationAndTranslation(arg0->actor.home.pos.x, arg0->actor.home.pos.y, arg0->actor.home.pos.z, arg0 + 0x14);
    Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_06002C48;
}

void func_8092D1B8(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s16 sp22;
    s32 temp_v1;
    void *temp_a3;
    s32 phi_v1;

    temp_a3 = arg1->actorCtx.actorList[2].first;
    sp22 = arg0->world.rot.y;
    temp_v1 = arg0->params & 0x4000;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
        sp24 = temp_a3;
        func_8092CE38(arg0, temp_a3);
        phi_v1 = arg0->params & 0x4000;
    }
    if ((phi_v1 == 0) || (arg0->unk2D2 != 0)) {
        if (((gSaveContext.weekEventReg[23] & 0x20) == 0) && ((gSaveContext.eventInf[1] & 0x20) == 0) && (sp24 = arg1->actorCtx.actorList[2].first, (func_8092CC68(arg1) != 0))) {
            arg1->actorCtx.actorList[2].first->unkA6C = (s32) (arg1->actorCtx.actorList[2].first->unkA6C | 0x20);
            arg0->unk2C6 = (u16) (arg0->unk2C6 | 0x100);
            func_8013AED4(arg0 + 0x2C6, 4U, 7U);
            play_sound(0x482CU);
            gSaveContext.eventInf[1] |= 0x20;
            arg0->unk2F4 = func_8092CCEC;
            func_8092C63C(arg0, 2);
            arg0->unk188 = func_8092D320;
        } else if ((gSaveContext.eventInf[1] & 0x40) != 0) {
            func_8092CCEC(arg0, arg1);
            func_8092C63C(arg0, 2);
            arg0->unk188 = func_8092D330;
        }
        Math_ApproachS(&arg0->shape.rot.y, sp22, 3, 0x2AA8);
    }
}

void func_8092D320(EnDns *this, GlobalContext *globalCtx) {

}

void func_8092D330(EnDns *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp30;
    f32 temp_f10;
    s16 temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;
    s16 phi_v1_2;

    sp30.unk0 = D_801D15B0.x;
    sp30.unk4 = (f32) D_801D15B0.y;
    sp30.unk8 = (f32) D_801D15B0.z;
    temp_a2 = this->unk_2D4;
    temp_v0 = this->unk_2D6 - temp_a2;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 < 0xC16) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x2AA8);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    } else {
        this->actor.world.pos.x = Math_SinS(temp_a2) * this->unk_2EC;
        temp_f10 = Math_CosS(this->unk_2D4) * this->unk_2EC;
        this->unk_2D4 += this->unk_2D8;
        this->actor.world.pos.z = temp_f10;
        sp30 = Math_SinS(this->unk_2D4) * this->unk_2EC;
        sp38 = Math_CosS(this->unk_2D4) * this->unk_2EC;
        Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw(&this->actor.world.pos, (Vec3f *) &sp30), 3, 0x2AA8);
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    if ((this->unk_2C6 & 0x100) != 0) {
        temp_v0_2 = this->unk_2D0;
        if (temp_v0_2 == 0) {
            phi_v1_2 = 0;
        } else {
            this->unk_2D0 = temp_v0_2 - 1;
            phi_v1_2 = this->unk_2D0;
        }
        if (phi_v1_2 == 0) {
            this->unk_2C6 &= 0xFEFF;
            globalCtx->nextEntranceIndex = 0x5010;
            gSaveContext.nextCutsceneIndex = 0;
            globalCtx->sceneLoadFlag = 0x14;
            globalCtx->unk_1887F = 3;
            gSaveContext.nextTransition = 3;
        }
    }
}

void func_8092D4D8(EnDns *this, GlobalContext *globalCtx) {
    s16 sp2E;

    sp2E = this->actor.yawTowardsPlayer;
    if (((this->actor.params & 0x4000) != 0) && (this->unk_2D2 == 0)) {
        if (func_8092CE38(&this->actor) != 0) {
            func_8092C63C(&this->actor, 2);
            return;
        }
        // Duplicate return node #11. Try simplifying control flow for better match
        return;
    }
    if (func_8010BF58(&this->actor, globalCtx, this->unk_1E0, (void *) this->unk_2F4, &this->unk_1DC) != 0) {
        func_8013AED4(&this->unk_2C6, 3U, 7U);
        this->unk_2F4 = NULL;
        if ((this->actor.params & 0x4000) != 0) {
            if ((gSaveContext.eventInf[1] & 0x20) == 0) {
                this->skelAnime.animCurrentFrame = this->unk_2F0;
                this->actor.world.rot.y = this->unk_2DA;
                func_8092C63C(&this->actor, 8);
            }
            this->unk_2CC = 0;
            this->unk_2CE = 0;
            this->unk_2C6 |= 0x10;
        }
        this->actionFunc = (void (*)(EnDns *, GlobalContext *)) func_8092D1B8;
        return;
    }
    Math_ApproachS(&this->actor.shape.rot.y, sp2E, 3, 0x2AA8);
}

void func_8092D5E8(Actor *arg0, GlobalContext *arg1) {
    u32 sp24;
    s32 sp20;
    s32 temp_t7;
    s32 temp_v0_2;
    u16 temp_v1;
    u32 temp_v0;

    if (func_800EE29C(arg1, (u32) arg0->unk2C8) != 0) {
        temp_v0 = func_800EE200(arg1, (u32) arg0->unk2C8);
        temp_t7 = temp_v0 * 4;
        sp24 = temp_v0;
        temp_v1 = *(arg1 + temp_t7)->unk1F4C;
        if ((temp_v1 & 0xFF) != arg0->unk1D8) {
            sp20 = (s32) temp_v1;
            func_8092C63C(arg0, *(&D_8092DE0C + (temp_v1 * 4)));
            arg0->unk1D8 = (u8) temp_v1;
        }
        temp_v0_2 = arg0->unk2F8;
        if (((temp_v0_2 == 4) || (temp_v0_2 == 6)) && (func_801378B8((SkelAnime *) (arg0 + 0x144), arg0->unk154) != 0)) {
            func_8092C63C(arg0, arg0->unk2F8 + 1);
        }
        func_800EDF24(arg0, arg1, sp24);
    }
}

void EnDns_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDns *this = (EnDns *) thisx;
    u16 temp_t2;
    u8 temp_t0;

    if (func_8092D068(this) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 18.0f);
    SkelAnime_Init(globalCtx, &this->skelAnime, &D_06002DD8, NULL, this->jointTable, this->morphTable, 0xD);
    this->unk_2F8 = -1;
    func_8092C63C(&this->actor, 2);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, &D_8092DD28);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_8092DD54);
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.targetMode = 0;
    this->unk_2D2 = 0;
    this->unk_2C6 = 0;
    this->actor.gravity = -0.8f;
    func_8013AED4(&this->unk_2C6, 3U, 7U);
    temp_t2 = this->unk_2C6 | 0x50;
    this->unk_2C6 = temp_t2;
    this->unk_2C6 = temp_t2 | 0x200;
    if ((gSaveContext.weekEventReg[9] & 0x80) != 0) {
        this->unk_2FC = 1;
    } else {
        this->unk_2FC = 0;
    }
    this->actionFunc = (void (*)(EnDns *, GlobalContext *)) func_8092D1B8;
    temp_t0 = gSaveContext.eventInf[1] & 0xDF;
    gSaveContext.eventInf[1] = temp_t0;
    gSaveContext.eventInf[1] = temp_t0 & 0xBF;
}

void EnDns_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDns *this = (EnDns *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnDns_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDns *this = (EnDns *) thisx;
    if ((func_8092CAD0(&this->actor, globalCtx) == 0) && (func_8092CB98(this, globalCtx) != 0)) {
        func_8092D5E8(&this->actor, globalCtx);
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        func_8092C5C0(&this->actor);
        return;
    }
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    func_8092C934(this);
    func_8092C86C(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 12.0f, 0.0f, 4U);
    func_8013C964(&this->actor, globalCtx, 80.0f, 40.0f, 0, (s16) (this->unk_2C6 & 7));
    Actor_SetHeight(&this->actor, 34.0f);
    func_8092C6FC(&this->actor, globalCtx);
    func_8092C5C0(&this->actor);
}

? func_8092D954(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5) {
    Vec3f sp74;
    Vec3s sp6C;
    MtxF sp2C;

    SysMatrix_MultiplyVector3fByState(&D_801D15B0, &sp74);
    SysMatrix_CopyCurrentState(&sp2C);
    func_8018219C(&sp2C, &sp6C, 0);
    arg2->unk0 = (f32) sp74.x;
    arg2->unk4 = (f32) sp74.y;
    arg2->unk8 = (f32) sp74.z;
    if (arg4 == 0) {
        if (arg5 != 0) {
            sp6C.z = arg0;
            sp6C.y = arg1;
        }
        Math_SmoothStepToS(arg3, sp6C.x, 3, 0x2AA8, (s16) 0xB6);
        Math_SmoothStepToS(arg3 + 2, sp6C.y, 3, 0x2AA8, (s16) 0xB6);
        Math_SmoothStepToS(arg3 + 4, sp6C.z, 3, 0x2AA8, (s16) 0xB6);
    } else {
        arg3->unk0 = sp6C.x;
        arg3->unk2 = sp6C.y;
        arg3->unk4 = sp6C.z;
    }
    return 1;
}

s32 func_8092DA68(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    (arg5 + (arg1 * 4))->unk1E4 = (Gfx *) *arg2;
    *arg2 = NULL;
    return 0;
}

void func_8092DA94(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp34;
    Gfx *sp2C;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a1;
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg4->unk2C6;
    if ((temp_v0 & 0x10) != 0) {
        phi_v1 = 1;
        goto block_4;
    }
    phi_v1 = 0;
    phi_v1 = 0;
    if ((temp_v0 & 0x20) != 0) {
        phi_v0 = 1;
    } else {
block_4:
        phi_v0 = 0;
    }
    if (arg1 == 2) {
        func_8092D954(arg4->unk2CC, (s16) (arg4->unk2CE + arg4->shape.rot.y), arg4 + 0x218, arg4 + 0x224, phi_v1, phi_v0);
        SysMatrix_InsertTranslation(arg4->unk218, arg4->unk21C, arg4->unk220, 0);
        Matrix_Scale(arg4->scale.x, arg4->scale.y, arg4->scale.z, 1);
        Matrix_RotateY(arg4->unk226, 1U);
        SysMatrix_InsertXRotation_s(arg4->unk228, 1);
        SysMatrix_InsertZRotation_s(arg4->unk224, 1);
    }
    temp_a1 = *arg0;
    temp_v0_2 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp34 = temp_a1;
    sp2C = temp_v0_2;
    sp2C->words.w1 = Matrix_NewMtx(*arg0);
    temp_v0_3 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (arg4 + (arg1 * 4))->unk1E4;
}

void EnDns_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDns *this = (EnDns *) thisx;
    GraphicsContext *sp30;
    Gfx *sp28;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp30 = sp30;
    sp28 = temp_v0;
    sp28->words.w1 = Lib_SegmentedToVirtual(*(&D_8092DE1C + (this->unk_2E0 * 4)));
    temp_v0_2 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xE7000000;
    SkelAnime_Draw(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, func_8092DA68, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_8092DA94, &this->actor);
    func_8092D108(this, &globalCtx->state.gfxCtx);
}

