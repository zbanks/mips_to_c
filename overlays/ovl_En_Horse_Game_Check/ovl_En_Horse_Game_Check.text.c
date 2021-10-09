typedef struct EnHorseGameCheck {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad144[0x18];
    /* 0x15C */ s32 unk15C;                         /* inferred */
    /* 0x160 */ s32 unk160;                         /* inferred */
    /* 0x164 */ char pad164[0x54];                  /* maybe part of unk160[22]? */
} EnHorseGameCheck;                                 /* size = 0x1B8 */

struct _mips2c_stack_EnHorseGameCheck_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHorseGameCheck_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHorseGameCheck_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHorseGameCheck_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F8AA0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ActorShape *sp2C;                    /* inferred */
    /* 0x30 */ char pad30[0x8];                     /* maybe part of sp2C[3]? */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0x40];
    /* 0x78 */ CollisionHeader *sp78;               /* inferred */
    /* 0x7C */ char pad7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_808F8C24 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F8C5C {};              /* size 0x0 */

struct _mips2c_stack_func_808F8C70 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F8CCC {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ ActorContext *sp3C;                  /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0xC];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad4C[0x14];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808F8E94 {};              /* size 0x0 */

struct _mips2c_stack_func_808F8EB0 {};              /* size 0x0 */

struct _mips2c_stack_func_808F8FAC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ CollisionContext *sp28;              /* inferred */
    /* 0x2C */ char pad2C[0x10];                    /* maybe part of sp28[5]? */
    /* 0x3C */ void *sp3C;                          /* inferred */
    /* 0x40 */ char pad40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808F96E4 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ActorShape *sp2C;                    /* inferred */
    /* 0x30 */ char pad30[0x8];                     /* maybe part of sp2C[3]? */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0x40];
    /* 0x78 */ CollisionHeader *sp78;               /* inferred */
    /* 0x7C */ char pad7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_808F9830 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F9868 {};              /* size 0x0 */

struct _mips2c_stack_func_808F987C {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ CollisionHeader *sp28;               /* inferred */
    /* 0x2C */ char pad2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808F990C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F9944 {};              /* size 0x0 */

struct _mips2c_stack_func_808F9958 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F999C {};              /* size 0x0 */

struct _mips2c_stack_func_808F99B0 {};              /* size 0x0 */

struct _mips2c_stack_func_808F99C4 {};              /* size 0x0 */

struct _mips2c_stack_func_808F99D8 {};              /* size 0x0 */

? func_80169940(GlobalContext *, ?, ?);             /* extern */
? func_808F8AA0(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
? func_808F8C24(void *arg0, GlobalContext *arg1);   /* static */
? func_808F8C5C(s32 arg0, ? arg1);                  /* static */
? func_808F8C70(s32 arg0, GlobalContext *arg1);     /* static */
? func_808F8CCC(Actor *arg0, GlobalContext *arg1);  /* static */
? func_808F8E94(s32 arg0, ? arg1);                  /* static */
? func_808F8EB0(void *arg0, void *arg1);            /* static */
? func_808F8FAC(void *arg0, void *arg1);            /* static */
? func_808F96E4(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
? func_808F9830(void *arg0, GlobalContext *arg1);   /* static */
? func_808F9868(s32 arg0, ? arg1);                  /* static */
? func_808F987C(Actor *arg0, GlobalContext *arg1);  /* static */
? func_808F990C(void *arg0, GlobalContext *arg1);   /* static */
? func_808F9944(s32 arg0, ? arg1);                  /* static */
? func_808F9958(s32 arg0, GlobalContext *arg1);     /* static */
? func_808F999C(s32 arg0, ? arg1);                  /* static */
? func_808F99B0(s32 arg0, ? arg1);                  /* static */
? func_808F99C4(s32 arg0, ? arg1);                  /* static */
? func_808F99D8(s32 arg0, ? arg1);                  /* static */
extern Gfx D_060013A0;
extern Gfx D_060014B0;
extern CollisionHeader D_06002FB8;
extern Gfx D_06003030;
extern Gfx D_060030C0;
extern CollisionHeader D_06003918;
extern s32 D_801BDA9C;
static CamData D_808F9B20 = {0, 0, NULL};
static SurfaceType D_808F9B28 = {{0, 0}};
static CollisionPoly D_808F9B30[2];                 /* unable to generate initializer */
static Vec3s D_808F9B50[4] = {{0xFFB0, 0, 0x50}, {0x50, 0, 0x50}, {0x50, 0, 0xFFB0}, {0xFFB0, 0, 0xFFB0}};
static CollisionHeader D_808F9B68 = {
    {0xFFB0, 0, 0xFFB0},
    {0x50, 0, 0x50},
    4,
    &D_808F9B50,
    2,
    &D_808F9B30,
    &D_808F9B28,
    &D_808F9B20,
    0,
    NULL,
};
static ? D_808F9B94;                                /* unable to generate initializer */
static ? D_808F9BA0;                                /* unable to generate initializer */
static ? D_808F9BAC;                                /* unable to generate initializer */
static ? D_808F9BBC;                                /* unable to generate initializer */
static ? D_808F9BCC;                                /* unable to generate initializer */
static InitChainEntry D_808F9BDC[2];                /* unable to generate initializer */
static ? D_808F9BE4;                                /* unable to generate initializer */
static ? D_808F9C0C;                                /* unable to generate initializer */
static ? D_808F9C34;                                /* unable to generate initializer */
static ? D_808F9C5C;                                /* unable to generate initializer */

? func_808F8AA0(DynaPolyActor *arg0, GlobalContext *arg1) {
    CollisionHeader *sp78;
    ? sp38;
    ActorShape *sp2C;
    ActorShape *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;

    sp78 = NULL;
    arg0->actor.flags |= 0x400000;
    temp_f0 = (f32) arg0->unk160 * 0.001f;
    arg0->actor.scale.z = temp_f0;
    arg0->actor.scale.y = temp_f0;
    arg0->actor.scale.x = temp_f0;
    BcCheck3_BgActorInit(arg0, 0);
    if ((gSaveContext.weekEventReg[92] & 7) != 1) {
        Actor_MarkForDeath((Actor *) arg0);
        return 0;
    }
    BgCheck_RelocateMeshHeader(&D_06003918, &sp78);
    arg0->bgId = BgCheck_AddActorMesh(arg1, arg1 + 0x880, arg0, sp78);
    arg0->unk15C = 5;
    arg0->actor.floorPoly = NULL;
    arg0->actor.world.pos.y += 100.0f;
    temp_f0_2 = func_800C4000(arg1, &arg1->colCtx, (s32 *) &arg0->actor.floorPoly, (Vec3f *) &arg0->actor.world);
    arg0->actor.floorHeight = temp_f0_2;
    arg0->actor.world.pos.y = temp_f0_2 + 3.0f;
    func_800C0094(arg0->actor.floorPoly, arg0->actor.world.pos.x, temp_f0_2, arg0->actor.world.pos.z, (MtxF *) &sp38);
    SysMatrix_SetCurrentState((MtxF *) &sp38);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    temp_f14 = arg0->actor.scale.y;
    Matrix_Scale(arg0->actor.scale.x, temp_f14, temp_f14, 1);
    SysMatrix_CopyCurrentState((MtxF *) &sp38);
    temp_a1 = &arg0->actor.shape;
    sp2C = temp_a1;
    func_8018219C((MtxF *) &sp38, (Vec3s *) temp_a1, 1);
    arg0->unk30 = (unaligned s32) temp_a1->unk0;
    arg0->actor.world.rot.z = (s16) (u16) temp_a1->rot.z;
    return 1;
}

? func_808F8C24(void *arg0, GlobalContext *arg1) {
    BgCheck_RemoveActorMesh(arg1, arg1 + 0x880, arg0->unk144);
    return 1;
}

? func_808F8C5C(s32 arg0, ? arg1) {
    return 1;
}

? func_808F8C70(s32 arg0, GlobalContext *arg1) {
    if (Matrix_NewMtx(arg1->state.gfxCtx) == 0) {

    } else {
        func_800BE03C(arg1, &D_06003030);
        func_800BDFC0(arg1, &D_060030C0);
    }
    return 1;
}

? func_808F8CCC(Actor *arg0, GlobalContext *arg1) {
    ? sp4C;
    ? sp40;
    ActorContext *sp3C;
    Actor *temp_v0;
    Actor *temp_v0_2;
    ActorContext *temp_a0;

    sp4C.unk0 = (s32) D_808F9B94.unk0;
    sp4C.unk4 = (s32) D_808F9B94.unk4;
    sp4C.unk8 = (s32) D_808F9B94.unk8;
    sp40.unk0 = (s32) D_808F9BA0.unk0;
    sp40.unk4 = (s32) D_808F9BA0.unk4;
    sp40.unk8 = (s32) D_808F9BA0.unk8;
    arg0->unk164 = 0;
    arg0->unk168 = 0;
    arg0->unk174 = 0;
    if ((gSaveContext.weekEventReg[92] & 7) != 1) {
        Actor_MarkForDeath(arg0);
    } else {
        func_8010E9F0(4, 0);
        arg1->interfaceCtx.unk_280 = 1;
        temp_a0 = arg1 + 0x1CA0;
        sp3C = temp_a0;
        temp_v0 = Actor_Spawn(temp_a0, arg1, 0xD, -1149.0f, -106.0f, 470.0f, (s16) 0, (s16) 0x7FFF, (s16) 0, (s16) 0x2004);
        arg0->unk16C = temp_v0;
        if (temp_v0 == 0) {
            __assert("../z_en_horse_game_check.c", 0x5EDU);
        }
        temp_v0_2 = Actor_Spawn(sp3C, arg1, 0xD, -1376.0f, -106.0f, 470.0f, (s16) 0, (s16) 0x7FFF, (s16) 0, (s16) 0x2005);
        arg0->unk170 = temp_v0_2;
        if (temp_v0_2 == 0) {
            __assert("../z_en_horse_game_check.c", 0x5F6U);
        }
        arg0->unk17C = -1;
        func_800DFAC8(arg1->cameraPtrs[0], 0xA);
        Play_CameraSetAtEye(arg1, 0, (Vec3f *) &sp40, (Vec3f *) &sp4C);
        func_80169940(arg1, 0, 0x42340000);
        func_800FE484();
    }
    return 0;
}

? func_808F8E94(s32 arg0, ? arg1) {
    gSaveContext.unk_3DD0[4] = 0;
    return 1;
}

? func_808F8EB0(void *arg0, void *arg1) {
    s32 temp_a0;
    u8 temp_t0;
    u8 temp_v1;

    if (arg1->unk1887A == 0xCE20) {
        return 0;
    }
    temp_v1 = gSaveContext.weekEventReg[92];
    temp_a0 = temp_v1 & 7;
    if (temp_a0 == 3) {
        arg1->unk1887F = 0x40;
        goto block_8;
    }
    if (temp_a0 == 2) {
        arg1->unk1887F = 0x50;
        gSaveContext.nextTransition = 3;
    } else {
        temp_t0 = temp_v1 & 0xF8;
        if (temp_a0 == 4) {
            gSaveContext.weekEventReg[92] = temp_t0;
            gSaveContext.weekEventReg[92] = (temp_t0 & 0xFFF8) | 3 | temp_t0;
            arg1->unk1887F = 2U;
block_8:
            gSaveContext.nextTransition = 2;
        }
    }
    D_801BDA9C = 0;
    if (arg1->unk1CCC->unkA6C & 0x800000) {
        D_801BDAA0 = 1;
    }
    arg1->unk1887A = 0xCE20;
    arg1->unk18875 = 0x14;
    return 0;
}

? func_808F8FAC(void *arg0, void *arg1) {
    void *sp3C;
    CollisionContext *sp28;
    CollisionContext *temp_a0;
    DynaPolyActor *temp_v0_12;
    DynaPolyActor *temp_v0_14;
    DynaPolyActor *temp_v0_7;
    s32 temp_t5;
    s32 temp_v0_16;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_12;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    u8 temp_t0;
    u8 temp_v0;
    u8 temp_v0_13;
    u8 temp_v0_15;
    u8 temp_v0_3;
    u8 temp_v0_8;
    void *temp_t7;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_9;
    s32 phi_a0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_t7 = arg1->unk1CCC->unk390;
    sp3C = temp_t7;
    if (temp_t7 == 0) {

    } else {
        if ((arg0->unk168 >= 0x33) && (temp_v1 = arg0->unk164, ((temp_v1 & 2) == 0))) {
            arg0->unk164 = (s32) (temp_v1 | 2);
        } else {
            temp_v0 = arg1->unk16C68;
            if (((s32) temp_v0 >= 8) && (temp_v1_2 = arg0->unk164, ((temp_v1_2 & 1) == 0))) {
                arg0->unk164 = (s32) (temp_v1_2 | 1);
                sp3C->unk388 = 1;
            } else if (((s32) temp_v0 >= 8) && ((arg0->unk164 & 8) == 0)) {
                arg0->unk16C->unk388 = 1;
                arg0->unk170->unk388 = 1;
                arg0->unk164 = (s32) (arg0->unk164 | 8);
                arg0->unk17C = (s32) arg0->unk168;
            }
        }
        temp_v0_2 = arg0->unk17C;
        phi_a0 = arg0->unk168;
        if ((temp_v0_2 != -1) && ((arg0->unk168 - temp_v0_2) >= 0xB)) {
            arg0->unk17C = -1;
            func_800DFAC8(arg1->unk800, 4);
            phi_a0 = arg0->unk168;
        }
        temp_v1_3 = arg0->unk164;
        arg0->unk168 = (s32) (phi_a0 + 1);
        phi_v1 = temp_v1_3;
        if (((temp_v1_3 & 0x4000) != 0) && (temp_v1_3 & 0x200000)) {
            temp_t5 = temp_v1_3 | 0x10;
            if ((temp_v1_3 & 0x10) == 0) {
                arg0->unk164 = temp_t5;
                phi_v1 = temp_t5;
            }
        }
        phi_v1_2 = phi_v1;
        if (((phi_v1 & 0x800) != 0) || ((phi_v1 << 0xD) < 0) || (phi_v1 & 0x2000000)) {
            temp_v0_16 = arg0->unk174;
            if (temp_v0_16 > 0) {
                arg0->unk174 = (s32) (temp_v0_16 - 1);
            } else {
                func_808F8EB0(arg0, arg1);
            }
        } else {
            if ((gSaveContext.unk_3DE0[4] != 0) || ((u32) *(&gSaveContext + 0x3E04) >= 0x4650U)) {
                func_801A89A8(0x8041);
                play_sound(0x4835U);
                arg0->unk164 = (s32) (arg0->unk164 | 0x40000);
                gSaveContext.unk_3DD0[4] = 6;
                temp_v0_3 = gSaveContext.weekEventReg[92] & 0xF8;
                temp_t0 = (temp_v0_3 & 0xFFF8) | 4 | temp_v0_3;
                gSaveContext.weekEventReg[92] = temp_v0_3;
                gSaveContext.weekEventReg[92] = temp_t0;
                arg0->unk174 = 0x3C;
                phi_v1_2 = arg0->unk164;
            }
            if ((phi_v1_2 & 0x1000) == 0) {
                temp_v0_4 = arg0->unk16C;
                if (Math3D_XZBoundCheck(D_808F9BAC.unk0, D_808F9BAC.unk4, D_808F9BAC.unk8, D_808F9BAC.unkC, temp_v0_4->unk24, temp_v0_4->unk2C) != 0) {
                    arg0->unk164 = (s32) (arg0->unk164 | 0x1000);
                }
            }
            temp_v1_4 = arg0->unk164;
            if (((temp_v1_4 & 0x2000) == 0) && ((temp_v1_4 & 0x1000) != 0)) {
                temp_v0_5 = arg0->unk16C;
                if (Math3D_XZBoundCheck(D_808F9BBC.unk0, D_808F9BBC.unk4, D_808F9BBC.unk8, D_808F9BBC.unkC, temp_v0_5->unk24, temp_v0_5->unk2C) != 0) {
                    arg0->unk164 = (s32) (arg0->unk164 | 0x2000);
                }
            }
            temp_v1_5 = arg0->unk164;
            if (((temp_v1_5 & 0x4000) == 0) && ((temp_v1_5 & 0x2000) != 0)) {
                temp_v0_6 = arg0->unk16C;
                if (Math3D_XZBoundCheck(D_808F9BCC.unk0, D_808F9BCC.unk4, D_808F9BCC.unk8, D_808F9BCC.unkC, temp_v0_6->unk24, temp_v0_6->unk2C) != 0) {
                    arg0->unk164 = (s32) (arg0->unk164 | 0x4000);
                }
            }
            temp_a0 = arg1 + 0x830;
            sp28 = temp_a0;
            temp_v0_7 = BgCheck_GetActorOfMesh(temp_a0, arg0->unk16C->unk24C);
            temp_v1_6 = arg0->unk164;
            if (((temp_v1_6 & 0x4000) != 0) && (temp_v0_7 != 0) && (temp_v0_7->actor.id == 0x6B) && (temp_v0_7->unk15C == 7) && ((temp_v1_6 << 0xD) >= 0)) {
                func_801A89A8(0x8041);
                play_sound(0x4835U);
                arg0->unk164 = (s32) (arg0->unk164 | 0x40000);
                gSaveContext.unk_3DD0[4] = 6;
                temp_v0_8 = gSaveContext.weekEventReg[92] & 0xF8;
                gSaveContext.weekEventReg[92] = temp_v0_8;
                gSaveContext.weekEventReg[92] = (temp_v0_8 & 0xFFF8) | 3 | temp_v0_8;
                arg0->unk174 = 0x3C;
            }
            if ((arg0->unk164 << 0xC) >= 0) {
                temp_v0_9 = arg0->unk170;
                if (Math3D_XZBoundCheck(D_808F9BAC.unk0, D_808F9BAC.unk4, D_808F9BAC.unk8, D_808F9BAC.unkC, temp_v0_9->unk24, temp_v0_9->unk2C) != 0) {
                    arg0->unk164 = (s32) (arg0->unk164 | 0x80000);
                }
            }
            temp_v1_7 = arg0->unk164;
            if (((temp_v1_7 << 0xB) >= 0) && ((temp_v1_7 & 0x80000) != 0)) {
                temp_v0_10 = arg0->unk170;
                if (Math3D_XZBoundCheck(D_808F9BBC.unk0, D_808F9BBC.unk4, D_808F9BBC.unk8, D_808F9BBC.unkC, temp_v0_10->unk24, temp_v0_10->unk2C) != 0) {
                    arg0->unk164 = (s32) (arg0->unk164 | 0x100000);
                }
            }
            temp_v1_8 = arg0->unk164;
            if (((temp_v1_8 << 0xA) >= 0) && ((temp_v1_8 & 0x100000) != 0)) {
                temp_v0_11 = arg0->unk170;
                if (Math3D_XZBoundCheck(D_808F9BCC.unk0, D_808F9BCC.unk4, D_808F9BCC.unk8, D_808F9BCC.unkC, temp_v0_11->unk24, temp_v0_11->unk2C) != 0) {
                    arg0->unk164 = (s32) (arg0->unk164 | 0x200000);
                }
            }
            temp_v0_12 = BgCheck_GetActorOfMesh(sp28, arg0->unk170->unk24C);
            temp_v1_9 = arg0->unk164;
            if ((temp_v1_9 & 0x200000) && (temp_v0_12 != 0) && (temp_v0_12->actor.id == 0x6B) && (temp_v0_12->unk15C == 7) && ((temp_v1_9 << 6) >= 0)) {
                func_801A89A8(0x8041);
                play_sound(0x4835U);
                arg0->unk164 = (s32) (arg0->unk164 | 0x2000000);
                gSaveContext.unk_3DD0[4] = 6;
                temp_v0_13 = gSaveContext.weekEventReg[92] & 0xF8;
                gSaveContext.weekEventReg[92] = temp_v0_13;
                gSaveContext.weekEventReg[92] = (temp_v0_13 & 0xFFF8) | 3 | temp_v0_13;
                arg0->unk174 = 0x3C;
            }
            if (((arg0->unk164 & 0x20) == 0) && (Math3D_XZBoundCheck(D_808F9BAC.unk0, D_808F9BAC.unk4, D_808F9BAC.unk8, D_808F9BAC.unkC, sp3C->unk24, sp3C->unk2C) != 0)) {
                arg0->unk164 = (s32) (arg0->unk164 | 0x20);
            }
            temp_v1_10 = arg0->unk164;
            if (((temp_v1_10 & 0x40) == 0) && ((temp_v1_10 & 0x20) != 0) && (Math3D_XZBoundCheck(D_808F9BBC.unk0, D_808F9BBC.unk4, D_808F9BBC.unk8, D_808F9BBC.unkC, sp3C->unk24, sp3C->unk2C) != 0)) {
                arg0->unk164 = (s32) (arg0->unk164 | 0x40);
            }
            temp_v1_11 = arg0->unk164;
            if (((temp_v1_11 & 0x80) == 0) && ((temp_v1_11 & 0x40) != 0) && (Math3D_XZBoundCheck(D_808F9BCC.unk0, D_808F9BCC.unk4, D_808F9BCC.unk8, D_808F9BCC.unkC, sp3C->unk24, sp3C->unk2C) != 0)) {
                arg0->unk164 = (s32) (arg0->unk164 | 0x80);
            }
            temp_v0_14 = BgCheck_GetActorOfMesh(sp28, sp3C->unk24C);
            temp_v1_12 = arg0->unk164;
            if (((temp_v1_12 & 0x80) != 0) && (temp_v0_14 != 0) && (temp_v0_14->actor.id == 0x6B) && (temp_v0_14->unk15C == 7) && ((temp_v1_12 & 0x800) == 0)) {
                func_801A89A8(0x8041);
                play_sound(0x4835U);
                arg0->unk164 = (s32) (arg0->unk164 | 0x800);
                gSaveContext.unk_3DD0[4] = 6;
                temp_v0_15 = gSaveContext.weekEventReg[92] & 0xF8;
                gSaveContext.weekEventReg[92] = temp_v0_15;
                gSaveContext.weekEventReg[92] = (temp_v0_15 & 0xFFF8) | 2 | temp_v0_15;
                arg0->unk174 = 0x3C;
            }
        }
    }
    return 1;
}

? func_808F96E4(DynaPolyActor *arg0, GlobalContext *arg1) {
    CollisionHeader *sp78;
    ? sp38;
    ActorShape *sp2C;
    ActorShape *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;

    sp78 = NULL;
    temp_f0 = (f32) arg0->unk160 * 0.01f;
    arg0->actor.scale.z = temp_f0;
    arg0->actor.scale.y = temp_f0;
    arg0->actor.scale.x = temp_f0;
    BcCheck3_BgActorInit(arg0, 0);
    BgCheck_RelocateMeshHeader(&D_808F9B68, &sp78);
    arg0->bgId = BgCheck_AddActorMesh(arg1, arg1 + 0x880, arg0, sp78);
    arg0->unk15C = 7;
    arg0->actor.floorPoly = NULL;
    arg0->actor.world.pos.y += 100.0f;
    temp_f0_2 = func_800C4000(arg1, &arg1->colCtx, (s32 *) &arg0->actor.floorPoly, (Vec3f *) &arg0->actor.world);
    arg0->actor.floorHeight = temp_f0_2;
    arg0->actor.world.pos.y = temp_f0_2 + 1.0f;
    func_800C0094(arg0->actor.floorPoly, arg0->actor.world.pos.x, temp_f0_2, arg0->actor.world.pos.z, (MtxF *) &sp38);
    SysMatrix_SetCurrentState((MtxF *) &sp38);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    temp_f14 = arg0->actor.scale.y;
    Matrix_Scale(arg0->actor.scale.x, temp_f14, temp_f14, 1);
    SysMatrix_CopyCurrentState((MtxF *) &sp38);
    temp_a1 = &arg0->actor.shape;
    sp2C = temp_a1;
    func_8018219C((MtxF *) &sp38, (Vec3s *) temp_a1, 1);
    arg0->unk30 = (unaligned s32) temp_a1->unk0;
    arg0->actor.world.rot.z = (s16) (u16) temp_a1->rot.z;
    return 1;
}

? func_808F9830(void *arg0, GlobalContext *arg1) {
    BgCheck_RemoveActorMesh(arg1, arg1 + 0x880, arg0->unk144);
    return 1;
}

? func_808F9868(s32 arg0, ? arg1) {
    return 1;
}

? func_808F987C(Actor *arg0, GlobalContext *arg1) {
    CollisionHeader *sp28;

    sp28 = NULL;
    Actor_ProcessInitChain(arg0, D_808F9BDC);
    arg0->scale.z = 1.0f;
    arg0->scale.y = 1.0f;
    arg0->scale.x = 1.0f;
    BcCheck3_BgActorInit((DynaPolyActor *) arg0, 0);
    BgCheck_RelocateMeshHeader(&D_06002FB8, &sp28);
    arg0->unk144 = BgCheck_AddActorMesh(arg1, arg1 + 0x880, (DynaPolyActor *) arg0, sp28);
    arg0->unk15C = 8;
    return 1;
}

? func_808F990C(void *arg0, GlobalContext *arg1) {
    BgCheck_RemoveActorMesh(arg1, arg1 + 0x880, arg0->unk144);
    return 1;
}

? func_808F9944(s32 arg0, ? arg1) {
    return 1;
}

? func_808F9958(s32 arg0, GlobalContext *arg1) {
    func_800BDFC0(arg1, &D_060014B0);
    func_800BDFC0(arg1, &D_060013A0);
    return 1;
}

? func_808F999C(s32 arg0, ? arg1) {
    return 1;
}

? func_808F99B0(s32 arg0, ? arg1) {
    return 1;
}

? func_808F99C4(s32 arg0, ? arg1) {
    return 1;
}

? func_808F99D8(s32 arg0, ? arg1) {
    return 1;
}

void EnHorseGameCheck_Init(EnHorseGameCheck *this, GlobalContext *globalCtx) {
    ? (*temp_v0_2)();
    s16 temp_v0;
    s32 temp_v1;
    EnHorseGameCheck *this = (EnHorseGameCheck *) thisx;

    temp_v0 = this->actor.params;
    temp_v1 = temp_v0 & 0xFF;
    this->unk15C = temp_v1;
    this->unk160 = (s32) (temp_v0 & 0xFF00) >> 8;
    if (temp_v1 >= 0xA) {
        this->unk15C = 0;
    }
    temp_v0_2 = *(&D_808F9BE4 + (this->unk15C * 4));
    if (temp_v0_2 != 0) {
        temp_v0_2();
    }
}

void EnHorseGameCheck_Destroy(EnHorseGameCheck *this, GlobalContext *globalCtx) {
    ? (*temp_v0)();
    EnHorseGameCheck *this = (EnHorseGameCheck *) thisx;

    temp_v0 = *(&D_808F9C0C + (this->unk15C * 4));
    if (temp_v0 != 0) {
        temp_v0();
    }
}

void EnHorseGameCheck_Update(EnHorseGameCheck *this, GlobalContext *globalCtx) {
    ? (*temp_v0)();
    EnHorseGameCheck *this = (EnHorseGameCheck *) thisx;

    temp_v0 = *(&D_808F9C34 + (this->unk15C * 4));
    if (temp_v0 != 0) {
        temp_v0();
    }
}

void EnHorseGameCheck_Draw(EnHorseGameCheck *this, GlobalContext *globalCtx) {
    ? (*temp_v0)();
    EnHorseGameCheck *this = (EnHorseGameCheck *) thisx;

    temp_v0 = *(&D_808F9C5C + (this->unk15C * 4));
    if (temp_v0 != 0) {
        temp_v0();
    }
}
