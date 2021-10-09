s32 func_800CB000(GlobalContext *, Actor *, ?, s16, s32); /* extern */
s32 func_809A33E0(Actor *arg0, GlobalContext *arg1, s16 arg2); /* static */
s32 func_809A3448(Actor *arg0);                     /* static */
s32 func_809A34E0(Actor *arg0, s32 arg1, s32, void *); /* static */
s32 func_809A35EC(Actor *arg0, s32 arg1);           /* static */
void func_809A376C(Actor *arg0, s16 arg1);          /* static */
void func_809A3A48(ObjPzlblock *arg0);              /* static */
void func_809A3A74(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A3BA4(Actor *arg0);                    /* static */
void func_809A3BC0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A3D1C(ObjPzlblock *arg0);              /* static */
void func_809A3D38(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A3E58(Actor *this, GlobalContext *globalCtx); /* static */
void func_809A3F0C(Actor *this, GlobalContext *globalCtx); /* static */
static ? D_809A4050;                                /* unable to generate initializer */
static ? D_809A4058;                                /* unable to generate initializer */
static ? D_809A4060;                                /* unable to generate initializer */
static InitChainEntry D_809A4078;                   /* unable to generate initializer */
static ? D_809A4088;                                /* unable to generate initializer */

typedef struct ObjPzlblock {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*unk15C)(Actor *, GlobalContext *); /* inferred */
    /* 0x0160 */ s32 unk160;                        /* inferred */
    /* 0x0164 */ char pad164[0xA];
    /* 0x016E */ s16 unk16E;                        /* inferred */
    /* 0x0170 */ s16 unk170;                        /* inferred */
    /* 0x0172 */ s16 unk172;                        /* inferred */
    /* 0x0174 */ s16 unk174;                        /* inferred */
    /* 0x0176 */ char pad176[0x4];                  /* maybe part of unk174[3]? */
    /* 0x017A */ s8 unk17A;                         /* inferred */
    /* 0x017B */ char pad17B[0x1];                  /* maybe part of unk17A[2]? */
} ObjPzlblock;                                      /* size 0x17C */

s32 func_809A33E0(Actor *arg0, GlobalContext *arg1, s16 arg2) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = func_800CB000(arg1, arg0, 0x1E, arg2, 1) == 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        phi_v0 = func_800CB000(arg1, arg0, 0x1E, arg2, 0x1C) == 0;
    }
    return phi_v0;
}

s32 func_809A3448(Actor *arg0) {
    f32 temp_f2;
    s16 temp_v0;
    s32 phi_v0;

    temp_f2 = arg0->unk148;
    if (fabsf(temp_f2) > 0.1f) {
        temp_v0 = arg0->unk150 + 0x2000;
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

s32 func_809A34E0(Actor *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 phi_v0;

    temp_v0 = arg0->home.rot.z & 7;
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
        // Duplicate return node #23. Try simplifying control flow for better match
        return phi_v0;
    }
    if (temp_v0 == 5) {
        temp_v0_3 = arg1 == 2;
        phi_v0 = temp_v0_3;
        if (temp_v0_3 == 0) {
            return arg1 == 3;
        }
        // Duplicate return node #23. Try simplifying control flow for better match
        return phi_v0;
    }
    if (temp_v0 == 6) {
        temp_v0_4 = arg1 == 0;
        phi_v0 = temp_v0_4;
        if (arg0->unk176 != 0) {
            if (temp_v0_4 == 0) {
                return arg1 == 1;
            }
            // Duplicate return node #23. Try simplifying control flow for better match
            return phi_v0;
        }
        temp_v0_5 = arg1 == 2;
        phi_v0 = temp_v0_5;
        if (arg0->unk178 != 0) {
            if (temp_v0_5 == 0) {
                return arg1 == 3;
            }
            // Duplicate return node #23. Try simplifying control flow for better match
            return phi_v0;
        }
        return 1;
    }
    phi_v0 = 0;
    return phi_v0;
}

s32 func_809A35EC(Actor *arg0, s32 arg1) {
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

    temp_v0 = arg0->home.rot.z & 7;
    temp_v1 = arg0->home.rot.x & 0xF;
    if (temp_v0 == 0) {
        return (s32) arg0->unk176 < temp_v1;
    }
    if (temp_v0 == 1) {
        return -temp_v1 < (s32) arg0->unk176;
    }
    if (temp_v0 == 2) {
        return (s32) arg0->unk178 < temp_v1;
    }
    if (temp_v0 == 3) {
        return -temp_v1 < (s32) arg0->unk178;
    }
    if (temp_v0 == 4) {
        temp_a1_4 = *(&D_809A4050 + (arg1 * 2)) + arg0->unk176;
        temp_v0_2 = (temp_v1 < temp_a1_4) ^ 1;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            return (temp_a1_4 < -temp_v1) ^ 1;
        }
        // Duplicate return node #22. Try simplifying control flow for better match
        return phi_v0;
    }
    if (temp_v0 == 5) {
        temp_a1_3 = *(&D_809A4058 + (arg1 * 2)) + arg0->unk178;
        temp_v0_3 = (temp_v1 < temp_a1_3) ^ 1;
        phi_v0 = temp_v0_3;
        if (temp_v0_3 != 0) {
            return (temp_a1_3 < -temp_v1) ^ 1;
        }
        // Duplicate return node #22. Try simplifying control flow for better match
        return phi_v0;
    }
    if (temp_v0 == 6) {
        if ((arg1 == 0) || (arg1 == 1)) {
            temp_a1_2 = *(&D_809A4050 + (arg1 * 2)) + arg0->unk176;
            temp_v0_5 = (temp_v1 < temp_a1_2) ^ 1;
            phi_v0 = temp_v0_5;
            if (temp_v0_5 != 0) {
                return (temp_a1_2 < -temp_v1) ^ 1;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return phi_v0;
        }
        temp_a1 = *(&D_809A4058 + (arg1 * 2)) + arg0->unk178;
        temp_v0_4 = (temp_v1 < temp_a1) ^ 1;
        phi_v0 = temp_v0_4;
        if (temp_v0_4 != 0) {
            return (temp_a1 < -temp_v1) ^ 1;
        }
        // Duplicate return node #22. Try simplifying control flow for better match
        return phi_v0;
    }
    phi_v0 = 0;
    return phi_v0;
}

void func_809A376C(Actor *arg0, s16 arg1) {
    s32 temp_v0;

    temp_v0 = arg1 * 2;
    arg0->unk176 = (s16) (arg0->unk176 + *(&D_809A4050 + temp_v0));
    arg0->unk178 = (s16) (arg0->unk178 + *(&D_809A4058 + temp_v0));
    if ((arg1 == 0) || (arg1 == 1)) {
        arg0->unk164 = (void *) (arg0 + 0x24);
        arg0->unk168 = (f32) (arg0->home.pos.x + (f32) (arg0->unk176 * 0x3C));
    } else {
        arg0->unk164 = (void *) (arg0 + 0x2C);
        arg0->unk168 = (f32) (arg0->home.pos.z + (f32) (arg0->unk178 * 0x3C));
    }
    arg0->unk16C = arg1;
}

void ObjPzlblock_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjPzlblock *this = (ObjPzlblock *) thisx;
    s32 sp2C;
    s32 sp28;
    s16 *sp24;

    sp2C = this->actor.home.rot.z & 7;
    sp28 = this->actor.home.rot.x & 0xF;
    sp24 = ((((s32) this->actor.params >> 0xC) & 1) * 0xC) + &D_809A4060;
    Actor_ProcessInitChain(&this->actor, &D_809A4078);
    Actor_SetScale(&this->actor, 0.1f);
    this->actor.home.rot.y = 0;
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    this->unk17A = Object_GetIndex(&globalCtx->objectCtx, *sp24);
    if (sp28 == 0) {
        func_809A3D1C(this);
        return;
    }
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        if (sp2C == 0) {
            this->actor.world.pos.x = this->actor.home.pos.x + (f32) (sp28 * 0x3C);
            func_809A3D1C(this);
            return;
        }
        if (sp2C == 1) {
            this->actor.world.pos.x = this->actor.home.pos.x - (f32) (sp28 * 0x3C);
            func_809A3D1C(this);
            return;
        }
        if (sp2C == 2) {
            this->actor.world.pos.z = this->actor.home.pos.z + (f32) (sp28 * 0x3C);
            func_809A3D1C(this);
            return;
        }
        if (sp2C == 3) {
            this->actor.world.pos.z = this->actor.home.pos.z - (f32) (sp28 * 0x3C);
            func_809A3D1C(this);
            return;
        }
        func_809A3A48(this);
        return;
    }
    func_809A3A48(this);
}

void ObjPzlblock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjPzlblock *this = (ObjPzlblock *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_809A3A48(ObjPzlblock *arg0) {
    arg0->unk15C = func_809A3A74;
    arg0->unk170 = 0;
    arg0->unk172 = 0;
    arg0->unk174 = 0;
    arg0->unk16E = 0;
    arg0->unk160 = 4;
}

void func_809A3A74(Actor *arg0, GlobalContext *arg1) {
    s32 sp20;
    s16 temp_a0;
    s32 temp_a1;
    s32 temp_t6;
    s32 temp_v0;
    void *temp_a3;
    void *temp_v0_2;
    Actor *phi_v1;
    s32 phi_a1;
    s16 phi_v0;

    temp_v0 = func_809A3448(arg0);
    temp_t6 = temp_v0 * 2;
    sp20 = temp_v0;
    temp_a3 = temp_t6 + arg0;
    phi_v1 = arg0;
    phi_a1 = 0;
    do {
        temp_a1 = phi_a1 + 2;
        phi_a1 = temp_a1;
        if (temp_a3 == phi_v1) {
            phi_v1->unk16E = (s16) (phi_v1->unk16E + 1);
        } else {
            temp_a0 = phi_v1->unk16E;
            if ((s32) temp_a0 > 0) {
                phi_v1->unk16E = (s16) (temp_a0 - 1);
            }
        }
        phi_v1 += 2;
    } while (temp_a1 != 8);
    if (temp_v0 != -1) {
        if (((s32) (arg0 + (temp_v0 * 2))->unk16E >= 0xB) && (func_809A34E0(arg0, sp20, 8, temp_a3) != 0) && (func_809A35EC(arg0, sp20) != 0)) {
            phi_v0 = 0x78;
            if (arg0->unk148 > 0.0f) {
                phi_v0 = 0x5A;
            }
            if (func_809A33E0(arg0, arg1, phi_v0) == 0) {
                func_809A376C(arg0, (s16) sp20);
                func_809A3BA4(arg0);
                return;
            }
            goto block_14;
        }
block_14:
        temp_v0_2 = arg1->actorCtx.actorList[2].first;
        temp_v0_2->unkA70 = (s32) (temp_v0_2->unkA70 & ~0x10);
        arg0->unk148 = 0.0f;
        // Duplicate return node #15. Try simplifying control flow for better match
    }
}

void func_809A3BA4(Actor *arg0) {
    arg0->unk15C = func_809A3BC0;
    arg0->unk160 = 5;
}

void func_809A3BC0(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s32 sp20;
    s32 temp_v0;

    if (Math_StepToF(arg0->unk164, arg0->unk168, 2.3f) != 0) {
        sp2C = arg1->actorCtx.actorList[2].first;
        sp20 = 0;
        temp_v0 = arg0->home.rot.z & 7;
        if ((temp_v0 == 4) || (temp_v0 == 5) || (temp_v0 == 6)) {
            if ((func_809A35EC(arg0, (s32) arg0->unk16C) == 0) || (func_809A33E0(arg0, arg1, 0x5A) != 0)) {
                Audio_PlayActorSound2(arg0, 0x2835U);
            }
        } else if (func_809A35EC(arg0, (s32) arg0->unk16C) != 0) {
            if (func_809A33E0(arg0, arg1, 0x5A) != 0) {
                Audio_PlayActorSound2(arg0, 0x2835U);
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x2835U);
            Actor_SetSwitchFlag(arg1, arg0->params & 0x7F);
            sp20 = 1;
        }
        sp2C->unkA70 = (s32) (sp2C->unkA70 & ~0x10);
        arg0->unk148 = 0.0f;
        if (sp20 == 0) {
            func_809A3A48((ObjPzlblock *) arg0);
            return;
        }
        func_809A3D1C((ObjPzlblock *) arg0);
        return;
    }
    func_800B9010(arg0, 0x200AU);
}

void func_809A3D1C(ObjPzlblock *arg0) {
    arg0->unk15C = func_809A3D38;
    arg0->unk160 = 4;
}

void func_809A3D38(Actor *arg0, GlobalContext *arg1) {
    void *temp_v0;

    if (fabsf(arg0->unk148) > 0.1f) {
        temp_v0 = arg1->actorCtx.actorList[2].first;
        temp_v0->unkA70 = (s32) (temp_v0->unkA70 & ~0x10);
        arg0->unk148 = 0.0f;
    }
}

void ObjPzlblock_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjPzlblock *this = (ObjPzlblock *) thisx;
    void *sp2C;

    this->actor.world.pos.y = this->actor.home.pos.y;
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 15.0f, 30.0f, 0.0f, 4U);
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk17A) != 0) {
        sp2C = ((((s32) this->actor.params >> 0xC) & 1) * 0xC) + &D_809A4060;
        this->actor.objBankIndex = this->unk17A;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, sp2C->unk4);
        this->actor.update = func_809A3E58;
        this->actor.draw = func_809A3F0C;
    }
}

void func_809A3E58(Actor *this, GlobalContext *globalCtx) {
    ? (*temp_v0_2)(Actor *, GlobalContext *);
    u32 temp_v0;

    this->unk15C(this, globalCtx);
    temp_v0 = this->unk160;
    this->world.pos.y = this->home.pos.y;
    if ((temp_v0 != 0) && ((Actor_UpdateBgCheckInfo(globalCtx, this, 15.0f, 30.0f, 0.0f, temp_v0), temp_v0_2 = this->unk15C, (func_809A3A74 == temp_v0_2)) || (func_809A3D38 == temp_v0_2)) && ((this->bgCheckFlags & 1) != 0) && (BgCheck_GetActorOfMesh(&globalCtx->colCtx, (s32) this->floorBgId) == 0)) {
        this->unk160 = 0U;
    }
}

void func_809A3F0C(Actor *this, GlobalContext *globalCtx) {
    void *sp2C;
    void *sp28;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    s16 temp_v0;
    void *temp_a3;

    temp_v0 = this->params;
    sp2C = ((((s32) temp_v0 >> 0xC) & 1) * 0xC) + &D_809A4060;
    temp_a3 = ((((s32) temp_v0 >> 8) & 7) * 3) + &D_809A4088;
    temp_a0 = globalCtx->state.gfxCtx;
    sp28 = temp_a3;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp28 = temp_a3;
    sp24 = sp24;
    sp1C = temp_v0_2;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFA000000;
    temp_v0_3->words.w1 = (temp_a3->unk0 << 0x18) | (temp_a3->unk1 << 0x10) | (temp_a3->unk2 << 8) | 0xFF;
    temp_v0_4 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = sp2C->unk8;
}

