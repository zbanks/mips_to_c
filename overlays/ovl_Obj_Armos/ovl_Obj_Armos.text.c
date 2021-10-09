typedef struct ObjArmos {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ f32 unk_148;                        /* inferred */
    /* 0x14C */ char pad_14C[0x10];                 /* maybe part of unk_148[5]? */
    /* 0x15C */ SkelAnime unk_15C;                  /* inferred */
    /* 0x1A0 */ Vec3s unk_1A0;                      /* inferred */
    /* 0x1A6 */ char pad_1A6[0x4E];                 /* maybe part of unk_1A0[14]? */
    /* 0x1F4 */ Vec3s unk_1F4;                      /* inferred */
    /* 0x1FA */ char pad_1FA[0x4E];                 /* maybe part of unk_1F4[14]? */
    /* 0x248 */ void (*actionFunc)(ObjArmos *, GlobalContext *);
    /* 0x24C */ u32 unk_24C;                        /* inferred */
    /* 0x250 */ f32 unk_250;                        /* inferred */
    /* 0x254 */ f32 unk_254;                        /* inferred */
    /* 0x258 */ f32 unk_258;                        /* inferred */
    /* 0x25C */ f32 *unk_25C;                       /* inferred */
    /* 0x260 */ f32 unk_260;                        /* inferred */
    /* 0x264 */ s16 unk_264;                        /* inferred */
    /* 0x266 */ char pad_266[0xE];                  /* maybe part of unk_264[8]? */
} ObjArmos;                                         /* size = 0x274 */

struct _mips2c_stack_ObjArmos_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjArmos_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjArmos_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_ObjArmos_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ CollisionContext *sp28;              /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809A4E00 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809A4E68 {};              /* size 0x0 */

struct _mips2c_stack_func_809A4F00 {};              /* size 0x0 */

struct _mips2c_stack_func_809A500C {};              /* size 0x0 */

struct _mips2c_stack_func_809A518C {};              /* size 0x0 */

struct _mips2c_stack_func_809A54B4 {};              /* size 0x0 */

struct _mips2c_stack_func_809A54E0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809A5610 {};              /* size 0x0 */

struct _mips2c_stack_func_809A562C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809A57D8 {};              /* size 0x0 */

struct _mips2c_stack_func_809A57F4 {};              /* size 0x0 */

struct _mips2c_stack_func_809A5960 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0xC];                    /* maybe part of sp28[4]? */
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809A5A3C {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x48];
};                                                  /* size = 0x90 */

s32 func_800CB000(GlobalContext *, ObjArmos *, ?, s16, s32); /* extern */
s32 func_809A4E00(ObjArmos *arg0, GlobalContext *arg1, s16 arg2); /* static */
s32 func_809A4E68(ObjArmos *arg0);                  /* static */
s32 func_809A4F00(ObjArmos *arg0, s32 arg1, s32, void *); /* static */
s32 func_809A500C(ObjArmos *arg0, s32 arg1);        /* static */
void func_809A518C(ObjArmos *arg0, s16 arg1);       /* static */
void func_809A54B4(ObjArmos *arg0);                 /* static */
void func_809A5610(ObjArmos *arg0);                 /* static */
void func_809A57D8(ObjArmos *arg0);                 /* static */
void func_809A5960(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A5A3C(ObjArmos *arg0, GraphicsContext **arg1); /* static */
extern AnimationHeaderCommon D_0600033C;
extern SkeletonHeader D_06005948;
extern CollisionHeader D_06005CF8;
static ? D_809A5BB0;                                /* unable to generate initializer */
static ? D_809A5BB8;                                /* unable to generate initializer */
static InitChainEntry D_809A5BC0[8];                /* unable to generate initializer */

s32 func_809A4E00(ObjArmos *arg0, GlobalContext *arg1, s16 arg2) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = func_800CB000(arg1, arg0, 0x1E, arg2, 1) == 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        phi_v0 = func_800CB000(arg1, arg0, 0x1E, arg2, 0x1C) == 0;
    }
    return phi_v0;
}

s32 func_809A4E68(ObjArmos *arg0) {
    f32 temp_f2;
    s16 temp_v0;
    s32 phi_v0;

    temp_f2 = arg0->unk_148;
    if (fabsf(temp_f2) > 0.1f) {
        temp_v0 = arg0->unk_150 + 0x2000;
        phi_v0 = (s32) temp_v0;
        if (temp_f2 < 0.0f) {
            phi_v0 = (s32) (s16) (temp_v0 + 0x8000);
        }
        if (phi_v0 < -0x4000) {
            return 3;
        }
        if (phi_v0 < 0) {
            return 1;
        }
        if (phi_v0 < 0x4000) {
            return 2;
        }
        return 0;
    }
    return -1;
}

s32 func_809A4F00(ObjArmos *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 phi_v0;

    temp_v0 = arg0->actor.home.rot.z & 7;
    if (temp_v0 == 0) {
        return arg1 == 0;
    }
    if (temp_v0 == 1) {
        return arg1 == 1;
    }
    if (temp_v0 == 2) {
        return arg1 == 2;
    }
    if (temp_v0 == 3) {
        return arg1 == 3;
    }
    if (temp_v0 == 4) {
        temp_v0_2 = arg1 == 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            return arg1 == 1;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return phi_v0;
    }
    if (temp_v0 == 5) {
        temp_v0_3 = arg1 == 2;
        phi_v0 = temp_v0_3;
        if (temp_v0_3 == 0) {
            return arg1 == 3;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return phi_v0;
    }
    if (temp_v0 == 6) {
        temp_v0_4 = arg1 == 0;
        phi_v0 = temp_v0_4;
        if (arg0->unk_26E != 0) {
            if (temp_v0_4 == 0) {
                return arg1 == 1;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return phi_v0;
        }
        temp_v0_5 = arg1 == 2;
        phi_v0 = temp_v0_5;
        if (arg0->unk_270 != 0) {
            if (temp_v0_5 == 0) {
                return arg1 == 3;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return phi_v0;
        }
        return 1;
    }
    phi_v0 = 0;
    return phi_v0;
}

s32 func_809A500C(ObjArmos *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 phi_v0;

    temp_v0 = arg0->actor.home.rot.z & 7;
    temp_v1 = arg0->actor.home.rot.x & 0xF;
    if (temp_v0 == 0) {
        return (s32) arg0->unk_26E < temp_v1;
    }
    if (temp_v0 == 1) {
        return -temp_v1 < (s32) arg0->unk_26E;
    }
    if (temp_v0 == 2) {
        return (s32) arg0->unk_270 < temp_v1;
    }
    if (temp_v0 == 3) {
        return -temp_v1 < (s32) arg0->unk_270;
    }
    if (temp_v0 == 4) {
        temp_a1_4 = *(&D_809A5BB0 + (arg1 * 2)) + arg0->unk_26E;
        temp_v0_2 = (temp_v1 < temp_a1_4) ^ 1;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            return (temp_a1_4 < -temp_v1) ^ 1;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return phi_v0;
    }
    if (temp_v0 == 5) {
        temp_a1_3 = *(&D_809A5BB8 + (arg1 * 2)) + arg0->unk_270;
        temp_v0_3 = (temp_v1 < temp_a1_3) ^ 1;
        phi_v0 = temp_v0_3;
        if (temp_v0_3 != 0) {
            return (temp_a1_3 < -temp_v1) ^ 1;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return phi_v0;
    }
    if (temp_v0 == 6) {
        if ((arg1 == 0) || (arg1 == 1)) {
            temp_a1_2 = *(&D_809A5BB0 + (arg1 * 2)) + arg0->unk_26E;
            temp_v0_5 = (temp_v1 < temp_a1_2) ^ 1;
            phi_v0 = temp_v0_5;
            if (temp_v0_5 != 0) {
                return (temp_a1_2 < -temp_v1) ^ 1;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return phi_v0;
        }
        temp_a1 = *(&D_809A5BB8 + (arg1 * 2)) + arg0->unk_270;
        temp_v0_4 = (temp_v1 < temp_a1) ^ 1;
        phi_v0 = temp_v0_4;
        if (temp_v0_4 != 0) {
            return (temp_a1 < -temp_v1) ^ 1;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return phi_v0;
    }
    phi_v0 = 0;
    return phi_v0;
}

void func_809A518C(ObjArmos *arg0, s16 arg1) {
    s32 temp_v0;

    temp_v0 = arg1 * 2;
    arg0->unk_26E += *(&D_809A5BB0 + temp_v0);
    arg0->unk_270 += *(&D_809A5BB8 + temp_v0);
    if ((arg1 == 0) || (arg1 == 1)) {
        arg0->unk_25C = arg0 + 0x24;
        arg0->unk_260 = arg0->actor.home.pos.x + (f32) (arg0->unk_26E * 0x3C);
    } else {
        arg0->unk_25C = arg0 + 0x2C;
        arg0->unk_260 = arg0->actor.home.pos.z + (f32) (arg0->unk_270 * 0x3C);
    }
    arg0->unk_264 = arg1;
}

void ObjArmos_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp44;
    s32 sp40;
    f32 sp3C;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    s16 temp_v0;
    ObjArmos *this = (ObjArmos *) thisx;

    sp44 = this->actor.home.rot.z & 7;
    sp40 = this->actor.home.rot.x & 0xF;
    sp3C = (f32) SkelAnime_GetFrameCount(&D_0600033C);
    Actor_ProcessInitChain((Actor *) this, D_809A5BC0);
    this->actor.shape.rot.z = 0;
    temp_v0 = this->actor.shape.rot.z;
    this->actor.shape.rot.x = temp_v0;
    this->actor.world.rot.z = temp_v0;
    this->actor.world.rot.y = temp_v0;
    this->actor.world.rot.x = temp_v0;
    this->actor.home.rot.y = temp_v0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06005CF8);
    temp_a1 = &this->unk_15C;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_06005948, (AnimationHeader *) &D_0600033C, &this->unk_1A0, &this->unk_1F4, 0xE);
    SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_0600033C, 0.0f, sp3C, sp3C, (u8) 2, 0.0f);
    if (sp40 == 0) {
        func_809A57D8(this);
        return;
    }
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        if (sp44 == 0) {
            this->actor.world.pos.x = this->actor.home.pos.x + (f32) (sp40 * 0x3C);
            func_809A57D8(this);
            return;
        }
        if (sp44 == 1) {
            this->actor.world.pos.x = this->actor.home.pos.x - (f32) (sp40 * 0x3C);
            func_809A57D8(this);
            return;
        }
        if (sp44 == 2) {
            this->actor.world.pos.z = this->actor.home.pos.z + (f32) (sp40 * 0x3C);
            func_809A57D8(this);
            return;
        }
        if (sp44 == 3) {
            this->actor.world.pos.z = this->actor.home.pos.z - (f32) (sp40 * 0x3C);
            func_809A57D8(this);
            return;
        }
        func_809A54B4(this);
        return;
    }
    func_809A54B4(this);
}

void ObjArmos_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjArmos *this = (ObjArmos *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_809A54B4(ObjArmos *arg0) {
    arg0->actionFunc = func_809A54E0;
    arg0->unk_24C = 4;
    arg0->unk_268 = 0;
    arg0->unk_26A = 0;
    arg0->unk_26C = 0;
    arg0->unk_266 = 0;
}

void func_809A54E0(ObjArmos *this, GlobalContext *globalCtx) {
    s32 sp20;
    Actor *temp_v0_2;
    s16 temp_a0;
    s32 temp_a1;
    s32 temp_t6;
    s32 temp_v0;
    void *temp_a3;
    ObjArmos *phi_v1;
    s32 phi_a1;
    s16 phi_v0;

    temp_v0 = func_809A4E68(this);
    temp_t6 = temp_v0 * 2;
    sp20 = temp_v0;
    temp_a3 = temp_t6 + this;
    phi_v1 = this;
    phi_a1 = 0;
    do {
        temp_a1 = phi_a1 + 2;
        phi_a1 = temp_a1;
        if (temp_a3 == phi_v1) {
            phi_v1->unk_266 += 1;
        } else {
            temp_a0 = phi_v1->unk_266;
            if ((s32) temp_a0 > 0) {
                phi_v1->unk_266 = temp_a0 - 1;
            }
        }
        phi_v1 += 2;
    } while (temp_a1 != 8);
    if (temp_v0 != -1) {
        if (((s32) (this + (temp_v0 * 2))->unk_266 >= 9) && (func_809A4F00(this, sp20, 8, temp_a3) != 0) && (func_809A500C(this, sp20) != 0)) {
            phi_v0 = 0x78;
            if (this->unk_148 > 0.0f) {
                phi_v0 = 0x5A;
            }
            if (func_809A4E00(this, globalCtx, phi_v0) == 0) {
                func_809A518C(this, (s16) sp20);
                func_809A5610(this);
                return;
            }
            goto block_14;
        }
block_14:
        temp_v0_2 = globalCtx->actorCtx.actorList[2].first;
        temp_v0_2->unk_A70 = (s32) (temp_v0_2->unk_A70 & ~0x10);
        this->unk_148 = 0.0f;
        /* Duplicate return node #15. Try simplifying control flow for better match */
    }
}

void func_809A5610(ObjArmos *arg0) {
    arg0->actionFunc = func_809A562C;
    arg0->unk_24C = 5;
}

void func_809A562C(ObjArmos *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    s32 sp20;
    s32 temp_v0;

    if (Math_StepToF(this->unk_25C, this->unk_260, (Math_SinS((s16) (s32) (fabsf(this->unk_260 - *this->unk_25C) * 546.13336f)) * 1.6f) + 1.0f) != 0) {
        sp2C = globalCtx->actorCtx.actorList[2].first;
        sp20 = 0;
        temp_v0 = this->actor.home.rot.z & 7;
        if ((temp_v0 == 4) || (temp_v0 == 5) || (temp_v0 == 6)) {
            if ((func_809A500C(this, (s32) this->unk_264) == 0) || (func_809A4E00(this, globalCtx, 0x5A) != 0)) {
                Audio_PlayActorSound2((Actor *) this, 0x2835U);
            }
        } else if (func_809A500C(this, (s32) this->unk_264) != 0) {
            if (func_809A4E00(this, globalCtx, 0x5A) != 0) {
                Audio_PlayActorSound2((Actor *) this, 0x2835U);
            }
        } else {
            Audio_PlayActorSound2((Actor *) this, 0x2835U);
            Actor_SetSwitchFlag(globalCtx, this->actor.params & 0x7F);
            sp20 = 1;
        }
        sp2C->unk_A70 = (s32) (sp2C->unk_A70 & ~0x10);
        this->unk_148 = 0.0f;
        if (sp20 == 0) {
            func_809A54B4(this);
            return;
        }
        func_809A57D8(this);
        return;
    }
    func_800B9010((Actor *) this, 0x200AU);
}

void func_809A57D8(ObjArmos *arg0) {
    arg0->actionFunc = func_809A57F4;
    arg0->unk_24C = 4;
}

void func_809A57F4(ObjArmos *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    if (fabsf(this->unk_148) > 0.1f) {
        temp_v0 = globalCtx->actorCtx.actorList[2].first;
        temp_v0->unk_A70 = (s32) (temp_v0->unk_A70 & ~0x10);
        this->unk_148 = 0.0f;
    }
}

void ObjArmos_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp2C;
    CollisionContext *sp28;
    f32 temp_f18;
    u32 temp_v0;
    ObjArmos *this = (ObjArmos *) thisx;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk_24C;
    this->actor.world.pos.y = this->actor.home.pos.y;
    if (temp_v0 != 0) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 30.0f, 0.0f, temp_v0);
        if ((func_809A54E0 == this->actionFunc) && ((this->actor.bgCheckFlags & 1) != 0) && (BgCheck_GetActorOfMesh(&globalCtx->colCtx, (s32) this->actor.floorBgId) == 0)) {
            this->unk_24C = 0;
        }
        sp28 = &globalCtx->colCtx;
        temp_f18 = (Math_SinS(this->actor.shape.rot.y) * -9.0f) + this->actor.world.pos.x;
        this->unk_254 = this->actor.world.pos.y + 20.0f;
        this->unk_250 = temp_f18;
        this->unk_258 = (Math_CosS(this->actor.shape.rot.y) * -9.0f) + this->actor.world.pos.z;
        this->actor.floorHeight = func_800C411C(sp28, &this->actor.floorPoly, &sp2C, (Actor *) this, (Vec3f *) &this->unk_250);
    }
}

void func_809A5960(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp38;
    f32 sp28;
    Gfx *temp_v1;

    sp38 = arg1->state.gfxCtx;
    sp28 = Math_SinS(arg0->shape.rot.y);
    SysMatrix_SetStateRotationAndTranslation((sp28 * -9.0f) + arg0->world.pos.x, arg0->world.pos.y, (Math_CosS(arg0->shape.rot.y) * -9.0f) + arg0->world.pos.z, arg0 + 0xBC);
    Matrix_Scale(0.014f, 0.014f, 0.014f, 1);
    func_8012C28C(arg1->state.gfxCtx);
    temp_v1 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xFB000000;
    SkelAnime_Draw(arg1, arg0->unk_160, arg0->unk_17C, NULL, NULL, arg0);
}

void func_809A5A3C(ObjArmos *arg0, GraphicsContext **arg1) {
    ? sp48;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    if (arg0->actor.floorPoly != 0) {
        temp_a0 = *arg1;
        temp_s0 = temp_a0;
        func_8012C448(temp_a0);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFCFF97FF;
        temp_v0->words.w1 = 0xFFFDFE38;
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0xFF;
        temp_v0_2->words.w0 = 0xFA000000;
        func_800C0094(arg0->actor.floorPoly, arg0->unk_250, arg0->actor.floorHeight, arg0->unk_258, (MtxF *) &sp48);
        SysMatrix_SetCurrentState((MtxF *) &sp48);
        Matrix_Scale(0.6f, 1.0f, 0.6f, 1);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        temp_v0_3->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = (u32) D_04076BC0;
    }
}

void ObjArmos_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjArmos *this = (ObjArmos *) thisx;
    func_809A5960((Actor *) this, globalCtx);
    func_809A5A3C(this, (GraphicsContext **) globalCtx);
}
