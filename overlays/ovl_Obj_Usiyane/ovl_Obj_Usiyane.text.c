s32 func_80C07C80(s32 arg0);                        /* static */
s32 func_80C07CD0();                                /* static */
void func_80C07DC4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C07DFC(void *arg0, ? *arg1, void *arg2, ? *arg3, s32 arg4, s32 arg5, Vec3f *arg6, void *arg7); /* static */
void func_80C07F30(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C081C8(Actor *arg0, ? arg1);            /* static */
void func_80C082CC(ObjUsiyane *arg0, GlobalContext *arg1); /* static */
void func_80C082E0(Actor *arg0, GlobalContext *arg1); /* static */
extern Gfx D_06000098;
extern Gfx D_06000838;
extern CollisionHeader D_060022AC;
static Vec3f D_80C08660 = {800.0f, -940.0f, 2000.0f};
static ? D_80C0866C;                                /* unable to generate initializer */
static InitChainEntry D_80C086B0;                   /* unable to generate initializer */

typedef struct ObjUsiyane {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(ObjUsiyane *, GlobalContext *);
    /* 0x0160 */ char pad160[0x4];                  /* maybe part of actionFunc[2]? */
    /* 0x0164 */ s32 unk164;                        /* inferred */
    /* 0x0168 */ char pad168[0x5A0];                /* maybe part of unk164[361]? */
    /* 0x0708 */ f32 unk708;                        /* inferred */
    /* 0x070C */ f32 unk70C;                        /* inferred */
    /* 0x0710 */ Vec3f unk710;                      /* inferred */
    /* 0x071C */ char pad71C[0x28];
    /* 0x0744 */ s32 unk744;                        /* inferred */
} ObjUsiyane;                                       /* size 0x748 */

s32 func_80C07C80(s32 arg0) {
    u32 phi_v1;

    if ((arg0 & 1) == 0) {
        phi_v1 = gSaveContext.roomInf[124][arg0 >> 1] & 0xFFFF;
    } else {
        phi_v1 = (u32) (gSaveContext.roomInf[124][arg0 >> 1] & 0xFFFF0000) >> 0x10;
    }
    return phi_v1 + 0x1AAA;
}

s32 func_80C07CD0(void) {
    s32 sp2C;
    s32 temp_hi;
    s32 temp_s0;
    s32 temp_v0_2;
    u16 temp_v0;
    s32 phi_s0;
    s32 phi_s1;
    s32 phi_s1_2;
    s32 phi_v0;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi <= 0) {
        return 0;
    }
    if (temp_hi == 1) {
        temp_v0 = gSaveContext.time;
        if (((s32) temp_v0 < 0x1AAA) || ((s32) temp_v0 >= 0x4000)) {
            return 0;
        }
        phi_s1 = 0x3800;
        if ((s32) temp_v0 < 0x3800) {
            sp2C = (s32) temp_v0;
            phi_s0 = 0;
            do {
                temp_v0_2 = func_80C07C80(phi_s0);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
                phi_s1_2 = phi_s1;
                if (temp_v0_2 < phi_s1) {
                    phi_s1_2 = temp_v0_2;
                }
                phi_s1 = phi_s1_2;
            } while (temp_s0 != 8);
            if (sp2C < (phi_s1_2 + 0xE11)) {
                return 0;
            }
            goto block_13;
        }
        goto block_13;
    }
block_13:
    phi_v0 = 1;
    if ((gSaveContext.weekEventReg[22] & 1) != 0) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void func_80C07DC4(Actor *arg0, GlobalContext *arg1) {
    if (func_80C07CD0() != 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_80C07DFC(void *arg0, ? *arg1, void *arg2, ? *arg3, s32 arg4, s32 arg5, Vec3f *arg6, void *arg7) {
    f32 sp4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    temp_f12 = arg0->unk0;
    temp_f0 = (f32) arg4 / (f32) arg5;
    arg6->x = ((arg2->unk0 - temp_f12) * temp_f0) + temp_f12;
    temp_f14 = arg0->unk4;
    arg6->y = ((arg2->unk4 - temp_f14) * temp_f0) + temp_f14;
    temp_f16 = arg0->unk8;
    arg6->z = ((arg2->unk8 - temp_f16) * temp_f0) + temp_f16;
    temp_f18 = (f32) arg1->unk0;
    arg7->unk0 = (s16) (s32) ((((f32) arg3->unk0 - temp_f18) * temp_f0) + temp_f18);
    sp4 = (f32) arg1->unk2;
    arg7->unk2 = (s16) (s32) ((((f32) arg3->unk2 - sp4) * temp_f0) + sp4);
    temp_f2 = (f32) arg1->unk4;
    arg7->unk4 = (s16) (s32) ((((f32) arg3->unk4 - temp_f2) * temp_f0) + temp_f2);
}

void func_80C07F30(Actor *arg0, GlobalContext *arg1) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    Actor *sp90;
    Vec3f *sp88;
    s32 sp80;
    f32 *temp_a0;
    f32 *temp_t5;
    s32 temp_s1;
    s32 temp_t9;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s6;
    ? *phi_s7;
    s32 phi_s1;
    Vec3f *phi_s2;
    void *phi_s3;
    void *phi_s0;
    void *phi_s4;

    sp88 = &D_80C08660;
    sp90 = arg0;
    sp80 = 0;
    phi_s6 = arg0 + 0x710;
    phi_s7 = &D_80C0866C;
    do {
        temp_s0 = arg0 + sp80;
        phi_s1 = 0;
        phi_s2 = temp_s0 + 0x168;
        phi_s3 = temp_s0 + 0x180;
        phi_s0 = temp_s0;
        phi_s4 = temp_s0 + 0x174;
loop_2:
        if (sp80 != 0x6C) {
            func_80C07DFC(phi_s6, phi_s7, sp90 + 0x71C, sp88 + 0x20, phi_s1, 0xA, phi_s2, phi_s3);
        } else {
            func_80C07DFC(phi_s6, phi_s7, arg0 + 0x710, &D_80C0866C, phi_s1, 0xA, phi_s2, phi_s3);
        }
        func_800B12F0(arg1, phi_s2, &D_801D15B0, &D_801D15B0, (s16) 0x64, (s16) 0x1E, (s16) 7);
        phi_s0->unk182 = (s16) (Rand_Next() >> 0x10);
        sp98 = 0.0f;
        temp_a0 = &sp94;
        sp94 = phi_s0->unk168 - arg0->unk708;
        sp9C = phi_s0->unk170 - arg0->unk70C;
        Math3D_Normalize((Vec3f *) temp_a0);
        sp98 = 19.0f;
        temp_t5 = &sp94;
        sp94 *= 5.0f;
        sp9C *= 5.0f;
        phi_s4->unk0 = (f32) temp_t5->unk0;
        phi_s4->unk4 = (s32) temp_t5->unk4;
        phi_s4->unk8 = (s32) temp_t5->unk8;
        phi_s0->unk186 = (s16) (s32) (Rand_Centered() * 4000.0f);
        phi_s0->unk188 = (s16) (s32) (Rand_Centered() * 4000.0f);
        temp_s1 = phi_s1 + 1;
        temp_s0_2 = phi_s0 + 0x90;
        temp_s0_2->unkFA = (s16) (s32) (Rand_Centered() * 4000.0f);
        phi_s1 = temp_s1;
        phi_s2 += 0x90;
        phi_s3 += 0x90;
        phi_s0 = temp_s0_2;
        phi_s4 += 0x90;
        if (temp_s1 != 0xA) {
            goto loop_2;
        }
        temp_t9 = sp80 + 0x24;
        sp80 = temp_t9;
        sp88 += 0x14;
        sp90 += 0xC;
        phi_s6 += 0xC;
        phi_s7 += 0x14;
    } while (temp_t9 != 0x90);
    Audio_PlayActorSound2(arg0, 0x2928U);
    arg0->unk740 = 0;
    arg0->unk744 = (s32) (arg0->unk744 | 4);
}

void func_80C081C8(Actor *arg0, ? arg1) {
    Actor *temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_v0_2;
    void *phi_v0;
    s32 phi_v1;
    s32 phi_a1;
    s32 phi_v0_2;
    Actor *phi_a2;

    temp_v0 = arg0->unk740;
    arg0->unk744 = (s32) (arg0->unk744 | 1);
    phi_a1 = 0;
    phi_v0_2 = temp_v0;
    phi_a2 = arg0;
    if (temp_v0 < 0x47) {
        do {
            phi_v0 = arg0 + phi_a1;
            phi_v1 = 0;
loop_3:
            phi_v0->unk178 = (f32) (phi_v0->unk178 + -0.8f);
            phi_v0->unk168 = (f32) (phi_v0->unk168 + phi_v0->unk174);
            temp_v1 = phi_v1 + 1;
            temp_v0_2 = phi_v0 + 0x90;
            temp_v0_2->unkDC = (f32) (phi_v0->unk16C + phi_v0->unk178);
            temp_v0_2->unkE0 = (f32) (phi_v0->unk170 + phi_v0->unk17C);
            temp_v0_2->unkF0 = (s16) (phi_v0->unk180 + phi_v0->unk186);
            temp_v0_2->unkF2 = (s16) (phi_v0->unk182 + phi_v0->unk188);
            temp_v0_2->unkF4 = (s16) (phi_v0->unk184 + phi_v0->unk18A);
            phi_v0 = temp_v0_2;
            phi_v1 = temp_v1;
            if (temp_v1 != 0xA) {
                goto loop_3;
            }
            temp_a1 = phi_a1 + 0x24;
            phi_a1 = temp_a1;
        } while (temp_a1 != 0x90);
        goto block_8;
    }
    temp_a0 = arg0;
    if (temp_v0 >= 0x46) {
        arg0 = arg0;
        Actor_MarkForDeath(temp_a0);
block_8:
        phi_v0_2 = arg0->unk740;
        phi_a2 = arg0;
    }
    phi_a2->unk740 = (s32) (phi_v0_2 + 1);
}

void func_80C082CC(ObjUsiyane *arg0, GlobalContext *arg1) {
    arg0->unk164 = -1;
}

void func_80C082E0(Actor *arg0, GlobalContext *arg1) {
    u16 temp_a0;
    u32 temp_v0;

    if (func_800EE29C(arg1, 0x228U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x228U);
        arg0->unk160 = temp_v0;
        temp_a0 = arg1->csCtx.npcActions[temp_v0]->unk0;
        if (temp_a0 != arg0->unk164) {
            arg0->unk164 = (s32) temp_a0;
            if (temp_a0 == 2) {
                func_80C07F30(arg0, arg1);
                arg0->unk15C = func_80C081C8;
            }
        }
    }
}

void ObjUsiyane_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjUsiyane *this = (ObjUsiyane *) thisx;
    s32 temp_v0;

    Actor_ProcessInitChain(&this->actor, &D_80C086B0);
    Actor_SetScale(&this->actor, 0.1f);
    this->unk744 = 0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060022AC);
    temp_v0 = this->actor.params & 0xF;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        func_80C082CC(this, globalCtx);
        this->actionFunc = (void (*)(ObjUsiyane *, GlobalContext *)) func_80C082E0;
        return;
    }
    this->actionFunc = (void (*)(ObjUsiyane *, GlobalContext *)) func_80C07DC4;
}

void ObjUsiyane_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjUsiyane *this = (ObjUsiyane *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void ObjUsiyane_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjUsiyane *this = (ObjUsiyane *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjUsiyane_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjUsiyane *this = (ObjUsiyane *) thisx;
    MtxF sp84;
    Vec3f sp74;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s7;
    Vec3f *phi_s0;
    Vec3f *phi_s2;
    s32 phi_s1;
    s32 phi_v0;
    void *phi_s0_2;
    s32 phi_s1_2;
    s32 phi_s7;

    if ((this->unk744 & 1) == 0) {
        func_800BDFC0(globalCtx, &D_06000838);
    }
    phi_v0 = this->unk744;
    if ((this->unk744 & 2) == 0) {
        phi_s0 = &D_80C08660;
        phi_s2 = &this->unk710;
        phi_s1 = 0;
        do {
            SysMatrix_MultiplyVector3fByState(phi_s0, phi_s2);
            SysMatrix_MultiplyVector3fByState(&D_801D15B0, &sp74);
            temp_s1 = phi_s1 + 0xC;
            this->unk708 = sp74.x;
            this->unk70C = sp74.z;
            phi_s0 += 0x14;
            phi_s2 += 0xC;
            phi_s1 = temp_s1;
        } while (temp_s1 != 0x30);
        this->unk744 |= 2;
        phi_v0 = this->unk744;
    }
    if ((phi_v0 & 4) != 0) {
        phi_s7 = 0;
        if ((phi_v0 & 8) == 0) {
            do {
                phi_s0_2 = this + phi_s7;
                phi_s1_2 = 0;
loop_10:
                SysMatrix_StatePush();
                SkinMatrix_SetScaleRotateRPYTranslate(&sp84, 0.1f, 0.1f, 0.1f, (s16) (s32) phi_s0_2->unk180, (s16) (s32) phi_s0_2->unk182, (s16) (s32) phi_s0_2->unk184, phi_s0_2->unk168, phi_s0_2->unk16C, phi_s0_2->unk170);
                SysMatrix_SetCurrentState(&sp84);
                func_800BDFC0(globalCtx, &D_06000098);
                SysMatrix_StatePop();
                temp_s1_2 = phi_s1_2 + 1;
                phi_s0_2 += 0x90;
                phi_s1_2 = temp_s1_2;
                if (temp_s1_2 != 0xA) {
                    goto loop_10;
                }
                temp_s7 = phi_s7 + 0x24;
                phi_s7 = temp_s7;
            } while (temp_s7 != 0x90);
        }
    }
}

