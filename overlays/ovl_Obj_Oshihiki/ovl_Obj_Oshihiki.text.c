typedef struct ObjOshihiki {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x8];                  /* maybe part of unk_144[3]? */
    /* 0x150 */ s16 unk_150;                        /* inferred */
    /* 0x152 */ char pad_152[0xA];                  /* maybe part of unk_150[6]? */
    /* 0x15C */ void (*actionFunc)(ObjOshihiki *, GlobalContext *);
    /* 0x160 */ u16 unk_160;                        /* inferred */
    /* 0x162 */ s16 unk_162;                        /* inferred */
    /* 0x164 */ f32 unk_164;                        /* inferred */
    /* 0x168 */ f32 unk_168;                        /* inferred */
    /* 0x16C */ char pad_16C[0x48];                 /* maybe part of unk_168[19]? */
    /* 0x1B4 */ s16 unk_1B4;                        /* inferred */
    /* 0x1B6 */ char pad_1B6[0x6];                  /* maybe part of unk_1B4[4]? */
    /* 0x1BC */ f32 unk_1BC;                        /* inferred */
    /* 0x1C0 */ f32 unk_1C0;                        /* inferred */
    /* 0x1C4 */ s8 unk_1C4;                         /* inferred */
    /* 0x1C5 */ u8 unk_1C5;                         /* inferred */
    /* 0x1C6 */ u8 unk_1C6;                         /* inferred */
    /* 0x1C7 */ u8 unk_1C7;                         /* inferred */
    /* 0x1C8 */ void *unk_1C8;                      /* inferred */
} ObjOshihiki;                                      /* size = 0x1CC */

struct _mips2c_stack_ObjOshihiki_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjOshihiki_Draw {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_ObjOshihiki_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjOshihiki_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80917290 {};              /* size 0x0 */

struct _mips2c_stack_func_809172E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091734C {};              /* size 0x0 */

struct _mips2c_stack_func_80917378 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80917408 {};              /* size 0x0 */

struct _mips2c_stack_func_80917538 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80917604 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8091763C {};              /* size 0x0 */

struct _mips2c_stack_func_8091768C {};              /* size 0x0 */

struct _mips2c_stack_func_80917840 {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_809179A0 {};              /* size 0x0 */

struct _mips2c_stack_func_80917AEC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80917B44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80917B9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80917C14 {
    /* 0x00 */ char pad_0[0x98];
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad_98[0x4];
    /* 0x9C */ ? sp9C;                              /* inferred */
    /* 0x9C */ char pad_9C[0x4];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ ? spAC;                              /* inferred */
    /* 0xAC */ char pad_AC[0xC];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ char pad_D0[0x10];                   /* maybe part of spCC[5]? */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80917E8C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ DynaPolyActor *sp18;                 /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80917F88 {};              /* size 0x0 */

struct _mips2c_stack_func_80917FC0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809180C8 {};              /* size 0x0 */

struct _mips2c_stack_func_80918108 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ DynaPolyActor *sp24;                 /* inferred */
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80918314 {};              /* size 0x0 */

struct _mips2c_stack_func_8091834C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8091851C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80918574 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

f32 func_800C4240(s32, s32, s32, ObjOshihiki *, f32 *, f32); /* extern */
s32 func_800C56E0(s32, f32 *, f32 *, ? *, ? *, s32, s32, s32, s32, ? *, Actor *, f32); /* extern */
s32 func_80124020();                                /* extern */
void func_80917290(f32 *arg0, f32 *arg1, f32 arg2, f32 arg3); /* static */
s32 func_809172E4(Actor *arg0, Actor *arg1);        /* static */
void func_8091734C(ObjOshihiki *arg0);              /* static */
DynaPolyActor *func_80917378(Actor *arg0, Actor *arg1, Actor *); /* static */
void func_80917408(Actor *arg0);                    /* static */
s32 func_80917538(Actor *arg0, DynaPolyActor *arg1, GlobalContext *arg2); /* static */
void func_80917604(Actor *arg0, GlobalContext *arg1); /* static */
void func_8091763C(ObjOshihiki *arg0, GlobalContext *arg1); /* static */
void func_8091768C(ObjOshihiki *arg0, GlobalContext *arg1); /* static */
void func_80917840(ObjOshihiki *arg0, s32 arg1);    /* static */
s16 func_809179A0(ObjOshihiki *arg0);               /* static */
void func_80917AEC(ObjOshihiki *arg0, s32 arg1);    /* static */
s32 func_80917B44(Actor *arg0, Actor *, void *);    /* static */
s32 func_80917B9C(Actor *arg0, Actor *arg1);        /* static */
s32 func_80917C14(Actor *arg0, s16 arg1, f32 arg2, Actor *arg3, Actor *); /* static */
s32 func_80917E8C(Actor *arg0, Actor *arg1);        /* static */
void func_80917F88(Actor *arg0, Actor *arg1, void *); /* static */
void func_80917FC0(Actor *arg0, Actor *arg1);       /* static */
void func_809180C8(ObjOshihiki *arg0, GlobalContext *arg1, void *); /* static */
void func_80918108(Actor *arg0, Actor *arg1);       /* static */
void func_80918314(Actor *arg0, Actor *arg1);       /* static */
void func_8091834C(Actor *arg0, void *arg1);        /* static */
void func_8091851C(Actor *arg0, Actor *, void *);   /* static */
void func_80918574(Actor *arg0, Actor *arg1);       /* static */
extern void D_0501B370;
static ? D_80918850;                                /* unable to generate initializer */
static ? D_80918868;                                /* unable to generate initializer */
static InitChainEntry D_80918898[3];                /* unable to generate initializer */
static ? D_809188A4;                                /* unable to generate initializer */
static ? D_809188E0;                                /* unable to generate initializer */
static ? D_80918910;                                /* unable to generate initializer */
static s8 D_80918940[16] = {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void func_80917290(f32 *arg0, f32 *arg1, f32 arg2, f32 arg3) {
    arg0->unk_0 = (arg1[2] * arg2) + (arg1->unk_0 * arg3);
    arg0[1] = arg1[1];
    arg0[2] = (arg1[2] * arg3) - (arg1->unk_0 * arg2);
}

s32 func_809172E4(Actor *arg0, Actor *arg1) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->params & 0xF;
    if (arg0->unk_1B6 != 0) {
        return 0;
    }
    if ((temp_v0 == 0) || (temp_v0 == 3)) {
        return 1;
    }
    phi_v0 = 0;
    if (func_80124020() >= 2) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_8091734C(ObjOshihiki *arg0) {
    void *temp_v1;

    arg0->unk_178 = 0x32;
    temp_v1 = arg0 + (1 * 4);
    temp_v1->unk_17C = 0x32;
    temp_v1->unk_180 = 0x32;
    temp_v1->unk_184 = 0x32;
    temp_v1->unk_178 = 0x32;
}

DynaPolyActor *func_80917378(Actor *arg0, Actor *arg1) {
    DynaPolyActor *temp_v0;
    s32 temp_a2;

    temp_a2 = (arg0 + (arg0->unk_1B4 * 4))->unk_178;
    if ((temp_a2 != 0x32) && (fabsf(arg0->floorHeight - arg0->world.pos.y) < 0.001f) && (temp_v0 = BgCheck_GetActorOfMesh(arg1 + 0x830, temp_a2), (temp_v0 != 0)) && (temp_v0->actor.id == 0x7A)) {
        return temp_v0;
    }
    return NULL;
}

void func_80917408(Actor *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f0 = arg0->home.pos.x;
    temp_f2 = arg0->world.pos.x;
    if (temp_f0 < temp_f2) {
        if ((temp_f2 - temp_f0) >= 60.0f) {
            do {
                arg0->home.pos.x += 60.0f;
            } while ((temp_f2 - arg0->home.pos.x) >= 60.0f);
        }
    } else if ((temp_f0 - temp_f2) >= 60.0f) {
        do {
            arg0->home.pos.x -= 60.0f;
        } while ((arg0->home.pos.x - temp_f2) >= 60.0f);
    }
    temp_f0_2 = arg0->home.pos.z;
    temp_f2_2 = arg0->world.pos.z;
    if (temp_f0_2 < temp_f2_2) {
        if ((temp_f2_2 - temp_f0_2) >= 60.0f) {
            do {
                arg0->home.pos.z += 60.0f;
            } while ((temp_f2_2 - arg0->home.pos.z) >= 60.0f);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if ((temp_f0_2 - temp_f2_2) >= 60.0f) {
        do {
            arg0->home.pos.z -= 60.0f;
        } while ((arg0->home.pos.z - temp_f2_2) >= 60.0f);
    }
}

s32 func_80917538(Actor *arg0, DynaPolyActor *arg1, GlobalContext *arg2) {
    s16 temp_a1;
    s16 temp_v0;
    s32 temp_v1;

    if (arg1 == 0) {
        goto block_12;
    }
    if (arg1->actor.id == 0x93) {
        temp_v0 = arg1->actor.params;
        temp_a1 = ((s32) temp_v0 >> 8) & 0x7F;
        temp_v1 = temp_v0 & 0x33;
        if (temp_v1 != 0x20) {
            if (temp_v1 != 0x30) {
                goto block_12;
            }
            if ((temp_a1 == (((s32) arg0->params >> 8) & 0x7F)) && (Flags_GetSwitch(arg2, (s32) temp_a1) == 0)) {
                return 0;
            }
            goto block_12;
        }
        if ((temp_a1 == (((s32) arg0->params >> 8) & 0x7F)) && (Flags_GetSwitch(arg2, (s32) temp_a1) != 0)) {
            return 0;
        }
        goto block_12;
    }
block_12:
    return 1;
}

void func_80917604(Actor *arg0, GlobalContext *arg1) {
    Actor_SetScale(arg0, *(&D_80918850 + ((arg0->params & 0xF) * 4)));
}

void func_8091763C(ObjOshihiki *arg0, GlobalContext *arg1) {
    u32 temp_t7;

    temp_t7 = arg0->actor.params & 0xF;
    switch (temp_t7) {
    case 0:
    case 3:
        arg0->unk_1C4 = 0;
        return;
    case 1:
    case 4:
        arg0->unk_1C4 = 1;
        return;
    case 2:
    case 5:
        arg0->unk_1C4 = 2;
        /* fallthrough */
    default:
        return;
    }
}

void func_8091768C(ObjOshihiki *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = ((((s32) arg0->actor.params >> 4) & 0xF) * 3) + &D_80918868;
    arg0->unk_1C5 = temp_v0->unk_0;
    arg0->unk_1C6 = temp_v0->unk_1;
    arg0->unk_1C7 = temp_v0->unk_2;
}

void ObjOshihiki_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    ObjOshihiki *this = (ObjOshihiki *) thisx;

    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    temp_v0 = (s32) this->actor.params >> 8;
    temp_v1 = temp_v0 & 0xFF;
    if ((temp_v1 >= 0) && (temp_v1 < 0x80)) {
        if (Flags_GetSwitch(globalCtx, temp_v0 & 0x7F) != 0) {
            temp_v0_2 = this->actor.params & 0xF;
            if ((temp_v0_2 == 0) || (temp_v0_2 == 1) || (temp_v0_2 == 2)) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            goto block_11;
        }
        temp_v0_3 = this->actor.params & 0xF;
        if ((temp_v0_3 == 3) || (temp_v0_3 == 4) || (temp_v0_3 == 5)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_11;
    }
block_11:
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, (CollisionHeader *) &D_05007498);
    this->unk_1C8 = Lib_SegmentedToVirtual(&D_0501B370);
    func_80917604((Actor *) this, globalCtx);
    func_8091763C(this, globalCtx);
    Actor_ProcessInitChain((Actor *) this, D_80918898);
    this->actor.colChkInfo.mass = 0xFF;
    func_8091768C(this, globalCtx);
    func_8091734C(this);
    func_809180C8(this, globalCtx);
}

void ObjOshihiki_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjOshihiki *this = (ObjOshihiki *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80917840(ObjOshihiki *arg0, s32 arg1) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    ? *temp_s1;
    ObjOshihiki *temp_s2;
    f32 *temp_a1;
    f32 *temp_s5;
    ? *phi_s1;
    s32 phi_s3;
    s32 phi_s4;
    ObjOshihiki *phi_s2;

    temp_s5 = &sp80;
    phi_s1 = &D_809188A4;
    phi_s3 = arg0 + 0x18C;
    phi_s4 = arg0 + 0x178;
    phi_s2 = arg0;
    do {
        temp_a1 = &sp74;
        sp74 = phi_s1->unk_0 * (arg0->actor.scale.x * 10.0f);
        sp78 = phi_s1->unk_4 * (arg0->actor.scale.y * 10.0f);
        sp7C = phi_s1->unk_8 * (arg0->actor.scale.z * 10.0f);
        func_80917290(temp_s5, temp_a1, arg0->unk_164, arg0->unk_168);
        sp80 += arg0->actor.world.pos.x;
        sp84 += arg0->actor.prevPos.y;
        sp88 += arg0->actor.world.pos.z;
        temp_s1 = phi_s1 + 0xC;
        temp_s2 = phi_s2 + 4;
        temp_s2->unk_19C = func_800C4240(arg1 + 0x830, phi_s3, phi_s4, arg0, temp_s5, 0.0f);
        phi_s1 = temp_s1;
        phi_s3 += 4;
        phi_s4 += 4;
        phi_s2 = temp_s2;
    } while (temp_s1 != &D_809188E0);
}

s16 func_809179A0(ObjOshihiki *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    void *temp_v0;
    s16 phi_v1;
    s32 phi_a1;
    f32 phi_f0;
    f32 phi_f0_2;
    s16 phi_v1_2;

    temp_v0 = arg0 + 4;
    temp_f0 = temp_v0->unk_1A0;
    temp_f2 = arg0->unk_1A0;
    phi_v1 = 0;
    phi_a1 = 0x32;
    if (temp_f2 < temp_f0) {
        goto block_4;
    }
    if ((temp_v0->unk_178 == 0x32) && ((temp_f0 - temp_f2) > -0.001f)) {
block_4:
        phi_v1 = 1;
        phi_a1 = 0x32;
    }
    temp_f0_2 = (arg0 + (phi_v1 * 4))->unk_1A0;
    temp_f2_2 = temp_v0->unk_1A4;
    phi_f0 = temp_f0_2;
    phi_v1_2 = phi_v1;
    if (temp_f0_2 < temp_f2_2) {
        goto block_10;
    }
    if ((phi_a1 == temp_v0->unk_17C) && ((temp_f2_2 - temp_f0_2) > -0.001f)) {
block_10:
        phi_f0 = arg0->unk_1A8;
        phi_v1_2 = 2;
    }
    temp_f2_3 = temp_v0->unk_1A8;
    phi_f0_2 = phi_f0;
    if (phi_f0 < temp_f2_3) {
        goto block_16;
    }
    if ((phi_a1 == temp_v0->unk_180) && ((temp_f2_3 - phi_f0) > -0.001f)) {
block_16:
        phi_f0_2 = arg0->unk_1AC;
        phi_v1_2 = 3;
    }
    temp_f2_4 = temp_v0->unk_1AC;
    if (phi_f0_2 < temp_f2_4) {
        goto block_21;
    }
    if ((phi_a1 == temp_v0->unk_184) && ((temp_f2_4 - phi_f0_2) > -0.001f)) {
block_21:
        phi_v1_2 = 4;
    }
    return phi_v1_2;
}

void func_80917AEC(ObjOshihiki *arg0, s32 arg1) {
    func_8091734C(arg0);
    func_80917840(arg0, arg1);
    arg0->unk_1B4 = func_809179A0(arg0);
    arg0->actor.floorHeight = (arg0 + (arg0->unk_1B4 * 4))->unk_1A0;
}

s32 func_80917B44(Actor *arg0) {
    f32 temp_f0;
    s32 phi_v0;

    func_80917AEC();
    temp_f0 = arg0->floorHeight;
    phi_v0 = 0;
    if ((temp_f0 - arg0->world.pos.y) >= -0.001f) {
        arg0->world.pos.y = temp_f0;
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80917B9C(Actor *arg0, Actor *arg1) {
    f32 temp_f0;
    f32 temp_f2;
    s32 phi_v0;

    temp_f0 = arg0->world.pos.y;
    if (temp_f0 <= -31990.0f) {
        Actor_MarkForDeath(arg0);
        return 0;
    }
    temp_f2 = arg0->floorHeight;
    phi_v0 = 0;
    if ((temp_f2 - temp_f0) >= -0.001f) {
        arg0->world.pos.y = temp_f2;
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80917C14(Actor *arg0, s16 arg1, f32 arg2, Actor *arg3) {
    f32 spE4;
    f32 spE0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    ? spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    ? sp9C;
    ? sp98;
    ? *temp_s0;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 *temp_s4;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f4;
    ? *phi_s1;
    ? *phi_s0;
    s8 *phi_s3;

    temp_f24 = Math_SinS(arg1);
    temp_f26 = Math_CosS(arg1);
    temp_f16 = ((arg3->scale.x * 300.0f) + 60.0f) - 0.5f;
    spE0 = temp_f16;
    phi_s1 = &D_80918910;
    phi_s0 = &D_809188E0;
    phi_s3 = D_80918940;
    if (arg2 > 0.0f) {
        spE4 = temp_f16;
    } else {
        spE0 = -spE0;
        spE4 = -(((arg3->scale.x * 300.0f) + 90.0f) - 0.5f);
    }
    temp_s4 = &spC4;
loop_4:
    temp_f20 = (&spE0)[*phi_s3];
    temp_a1 = &spA0;
    spA0 = phi_s1->unk_0 + (phi_s0->unk_0 * arg3->scale.x * 10.0f);
    spA8 = 0.0f;
    spA4 = phi_s1->unk_4 + (phi_s0->unk_4 * arg3->scale.y * 10.0f);
    func_80917290(temp_s4, temp_a1, temp_f24, temp_f26);
    temp_f10 = spC4 + arg3->world.pos.x;
    spC4 = temp_f10;
    temp_f4 = spC8 + arg3->world.pos.y;
    temp_a2 = &spB8;
    spC8 = temp_f4;
    spBC = temp_f4;
    temp_f16_2 = spCC + arg3->world.pos.z;
    spCC = temp_f16_2;
    spB8 = (temp_f20 * temp_f24) + temp_f10;
    spC0 = (temp_f20 * temp_f26) + temp_f16_2;
    phi_s3 += 1;
    if (func_800C56E0(arg0 + 0x830, temp_s4, temp_a2, &spAC, &sp98, 1, 0, 0, 1, &sp9C, arg3, 0.0f) != 0) {
        return 1;
    }
    temp_s0 = phi_s0 + 8;
    phi_s1 += 8;
    phi_s0 = temp_s0;
    if (temp_s0 == &D_80918910) {
        return 0;
    }
    goto loop_4;
}

s32 func_80917E8C(Actor *arg0, Actor *arg1) {
    DynaPolyActor *sp18;
    Actor *temp_a0;
    Actor *temp_a3;
    Actor *temp_a3_2;
    DynaPolyActor *temp_v0;
    u16 temp_v1;
    void *temp_v0_2;
    Actor *phi_a3;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    temp_v0 = func_80917378(temp_a0, arg1, temp_a3);
    temp_a3_2 = arg0;
    phi_a3 = temp_a3_2;
    if ((temp_v0 != 0) && ((temp_v0->unk_160 & 0x20) != 0)) {
        arg0 = temp_a3_2;
        sp18 = temp_v0;
        phi_a3 = arg0;
        if (func_80917C14(arg1, temp_v0->unk150, temp_v0->unk_174, temp_a3_2) == 0) {
            arg0[1].gravity = sp18;
        }
    }
    if (((phi_a3[1].params & 0x100) != 0) && (temp_v0_2 = phi_a3[1].gravity, (temp_v0_2 != 0))) {
        temp_v1 = temp_v0_2->unk_160;
        if ((temp_v1 & 0x10) != 0) {
            phi_a3[1].minVelocityY = temp_v0_2->unk_24 - temp_v0_2->unk_108;
            phi_a3[1].wallPoly = temp_v0_2->unk_2C - temp_v0_2->unk_110;
            phi_a3->world.pos.x += phi_a3[1].minVelocityY;
            phi_a3->world.pos.z += phi_a3[1].wallPoly;
            func_80917408(phi_a3);
            return 1;
        }
        if ((temp_v1 & 0x20) == 0) {
            phi_a3[1].gravity = NULL;
        }
        goto block_10;
    }
block_10:
    return 0;
}

void func_80917F88(Actor *arg0, Actor *arg1) {
    arg0[1].params |= 2;
    arg0->gravity = 0.0f;
    arg0->velocity.z = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->velocity.x = 0.0f;
    arg0->unk_15C = func_80917FC0;
}

void func_80917FC0(Actor *arg0, Actor *arg1) {
    void *sp18;
    Actor *temp_a0;
    Actor *temp_a3;
    Actor *temp_a3_2;
    f32 temp_a2;
    s16 temp_a1;
    void *temp_v1;
    Actor *phi_a3;

    temp_a3 = arg0;
    temp_v1 = arg1[22].projectedPos.z;
    temp_a3[1].params |= 1;
    if ((s32) temp_a3->unk_162 <= 0) {
        temp_a0 = temp_a3;
        if (fabsf(temp_a3[1].flags) > 0.001f) {
            sp18 = temp_v1;
            arg0 = temp_a3;
            temp_a3_2 = arg0;
            phi_a3 = temp_a3_2;
            if ((func_809172E4(temp_a0, temp_a3) != 0) && (temp_a1 = temp_a3_2->unk_150, temp_a2 = temp_a3_2[1].flags, arg0 = temp_a3_2, sp18 = temp_v1, phi_a3 = arg0, (func_80917C14(arg1, temp_a1, temp_a2, temp_a3_2) == 0))) {
                arg0->unk_174 = (f32) arg0[1].flags;
                func_80918314(arg0, arg1);
                return;
            }
            arg1[22].projectedPos.z->unk_A70 = (s32) (arg1[22].projectedPos.z->unk_A70 & ~0x10);
            phi_a3[1].flags = 0;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if (fabsf(temp_a3[1].flags) > 0.001f) {
        temp_v1->unk_A70 = (s32) (temp_v1->unk_A70 & ~0x10);
        temp_a3[1].flags = 0.0f;
    }
}

void func_809180C8(ObjOshihiki *arg0, GlobalContext *arg1) {
    arg0->unk_160 |= 8;
    arg0->actor.velocity.z = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.velocity.x = 0.0f;
    arg0->actionFunc = func_80918108;
    arg0->actor.gravity = -1.0f;
}

void func_80918108(Actor *arg0, Actor *arg1) {
    void *sp28;
    DynaPolyActor *sp24;
    s32 sp20;
    DynaPolyActor *temp_v0;
    DynaPolyActor *temp_v0_2;
    s32 temp_a1;
    s32 temp_a1_2;

    sp20 = 0;
    sp28 = arg1[22].projectedPos.z;
    arg0[1].params |= 4;
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    if (func_80917B44(arg0, arg1) != 0) {
        temp_a1 = (arg0 + (arg0->unk_1B4 * 4))->unk_178;
        if (temp_a1 == 0x32) {
            func_80917F88(arg0, arg1);
        } else {
            temp_v0 = BgCheck_GetActorOfMesh(arg1 + 0x830, temp_a1);
            if (temp_v0 != 0) {
                sp24 = temp_v0;
                func_800CAE88(temp_v0);
                func_800CAF24(sp24);
                if (((s32) arg0->unk_162 <= 0) && (fabsf((bitwise f32) arg0[1].flags) > 0.001f) && (func_809172E4(arg0, arg1) != 0) && (func_80917538(arg0, sp24, (GlobalContext *) arg1) != 0) && (func_80917C14(arg1, arg0->unk_150, (bitwise f32) arg0[1].flags, arg0) == 0)) {
                    arg0->unk_174 = (u32) arg0[1].flags;
                    func_80918314(arg0, arg1);
                    sp20 = 1;
                }
            } else {
                func_80917F88(arg0, arg1);
            }
        }
    } else {
        temp_a1_2 = (arg0 + (arg0->unk_1B4 * 4))->unk_178;
        if (temp_a1_2 == 0x32) {
            func_8091851C(arg0, arg1);
        } else {
            temp_v0_2 = BgCheck_GetActorOfMesh((CollisionContext *) &arg1[6].xzDistToPlayer, temp_a1_2);
            if ((temp_v0_2 != 0) && ((temp_v0_2->unk154 & 1) != 0)) {
                sp24 = temp_v0_2;
                func_800CAE88(temp_v0_2);
                func_800CAF24(sp24);
                arg0->world.pos.y = arg0->floorHeight;
            } else {
                func_8091851C(arg0, arg1);
            }
        }
    }
    if ((sp20 == 0) && (fabsf((bitwise f32) arg0[1].flags) > 0.001f)) {
        sp28->unk_A70 = (s32) (sp28->unk_A70 & ~0x10);
        arg0[1].flags = 0;
    }
}

void func_80918314(Actor *arg0, Actor *arg1) {
    arg0[1].params |= 0x20;
    arg0->unk_15C = func_8091834C;
    arg0->gravity = 0.0f;
    arg0[1].world.pos.y = 2.0f;
}

void func_8091834C(Actor *arg0, void *arg1) {
    s32 sp28;
    f32 temp_f0;
    s32 temp_v1;
    void *temp_s1;
    void *temp_s1_2;
    f32 phi_f2;

    temp_s1 = arg1->unk_1CCC;
    arg0[1].params |= 0x10;
    temp_v1 = Math_StepToF(arg0 + 0x170, 60.0f, arg0[1].world.pos.y);
    if (arg0->unk_174 >= 0.0f) {
        phi_f2 = 1.0f;
    } else {
        phi_f2 = -1.0f;
    }
    temp_f0 = phi_f2 * arg0[1].world.pos.z;
    arg0->world.pos.x = arg0->home.pos.x + (temp_f0 * arg0->unk_164);
    arg0->world.pos.z = arg0->home.pos.z + (temp_f0 * arg0[1].world.pos.x);
    sp28 = temp_v1;
    if (func_80917B44((bitwise Actor *) 0.0f, arg0, arg1) == 0) {
        arg0->home.pos.x = arg0->world.pos.x;
        arg0->home.pos.z = arg0->world.pos.z;
        temp_s1->unk_A70 = (s32) (temp_s1->unk_A70 & ~0x10);
        arg0[1].flags = 0;
        arg0[1].world.pos.z = (bitwise f32) 0U;
        arg0[1].world.pos.y = (bitwise f32) 0U;
        func_8091851C((Actor *) 0U, arg0, arg1);
    } else if (temp_v1 != 0) {
        temp_s1_2 = arg1->unk_1CCC;
        if (func_80917C14((Actor *) 0U, (s16) arg1, (bitwise f32) arg0->unk_150, (Actor *) arg0[1].flags, arg0) != 0) {
            Audio_PlayActorSound2(arg0, 0x2835U);
        }
        arg0->home.pos.x = arg0->world.pos.x;
        arg0->home.pos.z = arg0->world.pos.z;
        temp_s1_2->unk_A70 = (s32) (temp_s1_2->unk_A70 & ~0x10);
        arg0[1].flags = 0;
        arg0[1].world.pos.z = (bitwise f32) 0U;
        arg0[1].world.pos.y = (bitwise f32) 0U;
        arg0->unk_162 = 0xA;
        if ((arg0 + (arg0->unk_1B4 * 4))->unk_178 == 0x32) {
            func_80917F88((Actor *) 0U, arg0, arg1);
        } else {
            func_809180C8((ObjOshihiki *) 0U, (GlobalContext *) arg0, arg1);
        }
    }
    Audio_PlayActorSound2(arg0, 0x200AU);
}

void func_8091851C(Actor *arg0) {
    arg0[1].params |= 0x80;
    arg0->velocity.z = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->velocity.x = 0.0f;
    arg0->gravity = -1.0f;
    func_80917AEC();
    arg0->unk_15C = func_80918574;
}

void func_80918574(Actor *arg0, Actor *arg1) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg1[22].projectedPos.z;
    arg0[1].params |= 0x40;
    if (fabsf(arg0[1].flags) > 0.001f) {
        arg0[1].flags = 0.0f;
        temp_v0->unk_A70 = (s32) (temp_v0->unk_A70 & ~0x10);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    if (func_80917B9C(arg0, arg1) != 0) {
        if ((arg0 + (arg0->unk_1B4 * 4))->unk_178 == 0x32) {
            func_80917F88(arg0, arg1);
        } else {
            func_809180C8((ObjOshihiki *) arg0, (GlobalContext *) arg1);
        }
        Audio_PlayActorSound2(arg0, 0x2835U);
        temp_v0_2 = arg0 + (arg0->unk_1B4 * 4);
        Audio_PlayActorSound2(arg0, (func_800C9BDC((CollisionContext *) &arg1[6].xzDistToPlayer, temp_v0_2->unk_18C, temp_v0_2->unk_178) + 0x800) & 0xFFFF);
    }
}

void ObjOshihiki_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_a0;
    s16 temp_v0;
    u16 temp_t8;
    void (*temp_v0_2)(ObjOshihiki *, GlobalContext *);
    ObjOshihiki *this = (ObjOshihiki *) thisx;

    temp_v0 = this->unk_162;
    temp_t8 = this->unk_160 & 0xFF00;
    this->unk_160 = temp_t8;
    this->unk_160 = temp_t8 | 0x100;
    if ((s32) temp_v0 > 0) {
        this->unk_162 = temp_v0 - 1;
    }
    this->actor.world.rot.y = this->unk_150;
    temp_a0 = this->actor.world.rot.y;
    this = this;
    this->unk_164 = Math_SinS(temp_a0);
    temp_v0_2 = this->actionFunc;
    this->unk_168 = Math_CosS(this->actor.world.rot.y);
    if (temp_v0_2 != 0) {
        temp_v0_2(this, globalCtx);
    }
}

void ObjOshihiki_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s1;
    ObjOshihiki *this = (ObjOshihiki *) thisx;

    temp_s1 = globalCtx->state.gfxCtx;
    if (func_80917E8C((Actor *) this, (Actor *) globalCtx) != 0) {
        SysMatrix_InsertTranslation(this->unk_1BC * 10.0f, 0.0f, this->unk_1C0 * 10.0f, 1);
    }
    this->unk_160 &= 0xFEFF;
    func_8012C28C(globalCtx->state.gfxCtx);
    AnimatedMat_DrawStep(globalCtx, (AnimatedMaterial *) this->unk_1C8, (u32) this->unk_1C4);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp2C = temp_v0;
    sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFA00FFFF;
    temp_v0_2->words.w1 = (this->unk_1C5 << 0x18) | (this->unk_1C6 << 0x10) | (this->unk_1C7 << 8) | 0xFF;
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_050182A8;
}
