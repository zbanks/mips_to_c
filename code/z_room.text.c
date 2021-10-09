typedef struct {
    /* 0x00 */ s8 num;
    /* 0x01 */ u8 unk1;
    /* 0x02 */ u8 unk2;
    /* 0x03 */ u8 unk3;
    /* 0x04 */ s8 echo;
    /* 0x05 */ u8 unk5;
    /* 0x06 */ u8 enablePosLights;
    /* 0x07 */ char pad7[0x1];
    /* 0x08 */ RoomMesh *mesh;
    /* 0x0C */ void *segment;
    /* 0x10 */ s32 unk10;                           /* inferred */
} Room;                                             /* size = 0x14 */

struct _mips2c_stack_Room_AllocateAndLoad {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad24[0x3C];
};                                                  /* size = 0x60 */

struct _mips2c_stack_Room_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Room_DrawType0Mesh {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ RSPMatrix *sp1C;                     /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x1C];                    /* maybe part of sp20[8]? */
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad44[0x8];                     /* maybe part of sp40[3]? */
    /* 0x4C */ RoomMesh *sp4C;                      /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_Room_DrawType1Mesh {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Room_DrawType2Mesh {
    /* 0x000 */ char pad0[0x1C];
    /* 0x01C */ s32 sp1C;                           /* inferred */
    /* 0x020 */ RSPMatrix *sp20;                    /* inferred */
    /* 0x024 */ MtxF *sp24;                         /* inferred */
    /* 0x028 */ s32 sp28;                           /* inferred */
    /* 0x02C */ char pad2C[0x28];                   /* maybe part of sp28[11]? */
    /* 0x054 */ f32 sp54;                           /* inferred */
    /* 0x058 */ char pad58[0x34];                   /* maybe part of sp54[14]? */
    /* 0x08C */ GraphicsContext *sp8C;              /* inferred */
    /* 0x090 */ char pad90[0x4];
    /* 0x094 */ ? sp94;                             /* inferred */
    /* 0x094 */ char pad94[0x8];
    /* 0x09C */ f32 sp9C;                           /* inferred */
    /* 0x0A0 */ f32 spA0;                           /* inferred */
    /* 0x0A4 */ f32 spA4;                           /* inferred */
    /* 0x0A8 */ f32 spA8;                           /* inferred */
    /* 0x0AC */ s32 spAC;                           /* inferred */
    /* 0x0B0 */ char padB0[0x4];
    /* 0x0B4 */ ? *spB4;                            /* inferred */
    /* 0x0B8 */ char padB8[0x8];                    /* maybe part of spB4[3]? */
    /* 0x0C0 */ ? *spC0;                            /* inferred */
    /* 0x0C4 */ ? *spC4;                            /* inferred */
    /* 0x0C8 */ ? spC8;                             /* inferred */
    /* 0x0C8 */ char padC8[0x800];
    /* 0x8C8 */ void *sp8C8;                        /* inferred */
    /* 0x8CC */ RoomMesh *sp8CC;                    /* inferred */
};                                                  /* size = 0x8D0 */

struct _mips2c_stack_Room_DrawType3Mesh {};         /* size 0x0 */

struct _mips2c_stack_Room_HandleLoadCallbacks {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Room_Init {};                  /* size 0x0 */

struct _mips2c_stack_Room_StartRoomTransition {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ OSMesgQueue *sp30;                   /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ u32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_Room_nop8012D510 {};           /* size 0x0 */

struct _mips2c_stack_func_8012DEE8 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ RSPMatrix *sp4C;                     /* inferred */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0xC];                     /* maybe part of sp50[4]? */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad70[0x20];                    /* maybe part of sp6C[9]? */
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ char pad94[0x4];
    /* 0x98 */ void *sp98;                          /* inferred */
    /* 0x9C */ RoomMesh *sp9C;                      /* inferred */
    /* 0xA0 */ Gfx *spA0;                           /* inferred */
    /* 0xA4 */ Camera *spA4;                        /* inferred */
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_8012E254 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8012E32C {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ RSPMatrix *sp48;                     /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0xC];                     /* maybe part of sp4C[4]? */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x20];                    /* maybe part of sp68[9]? */
    /* 0x8C */ s32 sp8C;                            /* inferred */
    /* 0x90 */ char pad90[0x4];
    /* 0x94 */ void *sp94;                          /* inferred */
    /* 0x98 */ u32 sp98;                            /* inferred */
    /* 0x9C */ RoomMesh *sp9C;                      /* inferred */
    /* 0xA0 */ Gfx *spA0;                           /* inferred */
    /* 0xA4 */ Camera *spA4;                        /* inferred */
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_8012EBF8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ActorContext *sp24;                  /* inferred */
};                                                  /* size = 0x28 */

void *func_800C98CC(CollisionContext *, s16, ?);    /* extern */
? func_800E01B8(f32 *, Camera *);                   /* extern */
u32 func_80182CBC(Gfx *);                           /* extern */
u32 func_80182CCC();                                /* extern */
static ? D_801ABAB0;                                /* unable to generate initializer */
static ? D_801E3BB0;                                /* unable to generate initializer; const */
Vec3f D_801C1D10 = {0.0f, 0.0f, 0.0f};
RSPMatrix D_801D1DE0 = {
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};
GameInfo *gGameInfo;
SaveContext gSaveContext;
u32 gSegments[16];
void (*roomDrawFuncs[4])(GlobalContext *, Room *, u32) = {
    Room_DrawType0Mesh,
    Room_DrawType1Mesh,
    Room_DrawType2Mesh,
    Room_DrawType3Mesh,
};

void Room_nop8012D510(GlobalContext *globalCtx, Room *room, void *param_3, s8 param_4) {

}

void Room_DrawType3Mesh(GlobalContext *globalCtx, Room *room, u32 flags) {

}

void Room_DrawType0Mesh(GlobalContext *globalCtx, Room *room, u32 flags) {
    RoomMesh *sp4C;
    GraphicsContext *sp40;
    s32 sp20;
    RSPMatrix *sp1C;
    s32 sp18;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    GraphicsContext *temp_a3;
    RoomMesh *temp_t0;
    s32 temp_a1;
    s32 temp_t1;
    s32 temp_t2;
    void *phi_a0;
    s32 phi_a1;

    temp_t2 = flags & 1;
    temp_a3 = globalCtx->state.gfxCtx;
    if (temp_t2 != 0) {
        sp40 = temp_a3;
        sp20 = temp_t2;
        func_800BCBF4(&D_801C1D10, globalCtx);
        temp_v1 = temp_a3->polyOpa.p;
        temp_a3->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xDB06000C;
        temp_v1->words.w1 = (u32) room->segment;
        sp40 = temp_a3;
        sp20 = temp_t2;
        func_8012C268(globalCtx);
        temp_v1_2 = temp_a3->polyOpa.p;
        temp_a3->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xDA380003;
        temp_v1_2->words.w1 = (u32) &D_801D1DE0;
    }
    temp_t1 = flags & 2;
    if (temp_t1 != 0) {
        sp1C = &D_801D1DE0;
        sp40 = globalCtx->state.gfxCtx;
        sp18 = temp_t1;
        sp20 = flags & 1;
        func_800BCC68(&D_801C1D10, globalCtx);
        temp_v1_3 = globalCtx->state.gfxCtx->polyXlu.p;
        globalCtx->state.gfxCtx->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0xDB06000C;
        temp_v1_3->words.w1 = (u32) room->segment;
        sp20 = flags & 1;
        sp18 = temp_t1;
        sp40 = globalCtx->state.gfxCtx;
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v1_4 = globalCtx->state.gfxCtx->polyXlu.p;
        globalCtx->state.gfxCtx->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xDA380003;
        temp_v1_4->words.w1 = (u32) sp1C;
    }
    temp_t0 = room->mesh;
    sp20 = flags & 1;
    sp18 = flags & 2;
    sp40 = globalCtx->state.gfxCtx;
    sp4C = temp_t0;
    phi_a0 = Lib_SegmentedToVirtual((void *) temp_t0->type0.paramsStart);
    phi_a1 = 0;
    if ((s32) temp_t0->type0.count > 0) {
        do {
            if (((flags & 1) != 0) && (phi_a0->unk0 != 0)) {
                temp_v1_5 = globalCtx->state.gfxCtx->polyOpa.p;
                globalCtx->state.gfxCtx->polyOpa.p = temp_v1_5 + 8;
                temp_v1_5->words.w0 = 0xDE000000;
                temp_v1_5->words.w1 = phi_a0->unk0;
            }
            if (((flags & 2) != 0) && (phi_a0->unk4 != 0)) {
                temp_v1_6 = globalCtx->state.gfxCtx->polyXlu.p;
                globalCtx->state.gfxCtx->polyXlu.p = temp_v1_6 + 8;
                temp_v1_6->words.w0 = 0xDE000000;
                temp_v1_6->words.w1 = phi_a0->unk4;
            }
            temp_a1 = phi_a1 + 1;
            phi_a0 += 8;
            phi_a1 = temp_a1;
        } while (temp_a1 < (s32) temp_t0->type0.count);
    }
}

void Room_DrawType2Mesh(GlobalContext *globalCtx, Room *room, u32 flags) {
    RoomMesh *sp8CC;
    void *sp8C8;
    ? spC8;
    ? *spC4;
    ? *spC0;
    ? *spB4;
    s32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    ? sp94;
    GraphicsContext *sp8C;
    f32 sp54;
    s32 sp28;
    MtxF *sp24;
    RSPMatrix *sp20;
    s32 sp1C;
    ? *temp_a0_5;
    ? *temp_t2;
    ? *temp_t3;
    ? *temp_v0_16;
    GameInfo *temp_v0_18;
    GameInfo *temp_v0_21;
    GameInfo *temp_v0_9;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_t0;
    MtxF *temp_a2;
    RoomMesh *temp_t5;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0_15;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t8;
    s32 temp_t9;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u8 temp_v0_14;
    u8 temp_v0_17;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_v0_19;
    void *temp_v0_20;
    void *temp_v0_22;
    void *temp_v0_23;
    void *temp_v0_24;
    s32 phi_t1;
    void *phi_a3;
    void *phi_a3_2;
    f32 phi_f14;
    RoomMesh *phi_t5;
    ? *phi_t3;
    ? *phi_t2;
    s32 phi_t1_2;
    GraphicsContext *phi_t0;
    ? *phi_v1;
    f32 phi_f2;
    ? *phi_v0;
    ? *phi_v0_2;
    s16 phi_v0_3;
    ? *phi_t2_2;
    s32 phi_t1_3;
    ? *phi_t2_3;
    GraphicsContext *phi_t0_2;
    ? *phi_t3_2;
    ? *phi_t3_3;
    s32 phi_a1;
    s32 phi_t1_4;
    ? *phi_t3_4;
    ? *phi_t2_4;

    temp_t0 = globalCtx->state.gfxCtx;
    temp_t8 = flags & 1;
    sp28 = temp_t8;
    if (temp_t8 != 0) {
        sp8C = temp_t0;
        spC4 = NULL;
        spC0 = NULL;
        func_800BCBF4(&D_801C1D10, globalCtx);
        temp_v0 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB06000C;
        temp_v0->words.w1 = (u32) room->segment;
        if (globalCtx->roomCtx.unk74 != 0) {
            temp_v0_2 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDB060018;
            temp_v0_2->words.w1 = (u32) globalCtx->roomCtx.unk74;
        }
        sp8C = temp_t0;
        spC4 = NULL;
        spC0 = NULL;
        func_8012C268(globalCtx);
        temp_v0_3 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        temp_v0_3->words.w1 = (u32) &D_801D1DE0;
    }
    temp_t9 = flags & 2;
    sp1C = temp_t9;
    temp_a2 = globalCtx + 0x18000;
    if (temp_t9 != 0) {
        sp20 = &D_801D1DE0;
        sp24 = temp_a2;
        sp8C = globalCtx->state.gfxCtx;
        spC4 = NULL;
        spC0 = NULL;
        func_800BCC68(&D_801C1D10, globalCtx);
        temp_v0_4 = globalCtx->state.gfxCtx->polyXlu.p;
        globalCtx->state.gfxCtx->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDB06000C;
        temp_v0_4->words.w1 = (u32) room->segment;
        if (globalCtx->roomCtx.unk74 != 0) {
            temp_v0_5 = globalCtx->state.gfxCtx->polyXlu.p;
            globalCtx->state.gfxCtx->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDB060018;
            temp_v0_5->words.w1 = (u32) globalCtx->roomCtx.unk74;
        }
        spC0 = NULL;
        spC4 = NULL;
        sp8C = globalCtx->state.gfxCtx;
        sp24 = temp_a2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_6 = globalCtx->state.gfxCtx->polyXlu.p;
        globalCtx->state.gfxCtx->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        temp_v0_6->words.w1 = (u32) sp20;
    }
    if ((room->enablePosLights != 0) || (gGameInfo->data[573] != 0)) {
        temp_v0_7 = globalCtx->state.gfxCtx->polyOpa.p;
        globalCtx->state.gfxCtx->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = 0x400000;
        temp_v0_7->words.w0 = 0xD9FFFFFF;
        temp_v0_8 = globalCtx->state.gfxCtx->polyXlu.p;
        globalCtx->state.gfxCtx->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0x400000;
        temp_v0_8->words.w0 = 0xD9FFFFFF;
    }
    temp_t5 = room->mesh;
    spC0 = NULL;
    spC4 = NULL;
    sp8C = globalCtx->state.gfxCtx;
    sp24 = globalCtx + 0x18000;
    sp8CC = temp_t5;
    temp_a3 = Lib_SegmentedToVirtual((void *) temp_t5->type0.paramsStart);
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    phi_t5 = temp_t5;
    phi_t3 = NULL;
    phi_t2 = NULL;
    phi_t0 = globalCtx->state.gfxCtx;
    phi_v1 = &spC8;
    phi_t2_2 = NULL;
    phi_t0_2 = globalCtx->state.gfxCtx;
    phi_t3_2 = NULL;
    if ((s32) (globalCtx + 0x18000)->unk758 < 0) {
        phi_t1 = 0;
        if ((s32) temp_t5->type0.count > 0) {
            do {
                temp_v0_9 = gGameInfo;
                temp_v1 = temp_v0_9->data[1718];
                if (temp_v1 != 0) {
                    if (((temp_v1 == 1) && ((s32) temp_v0_9->data[1721] >= phi_t1)) || ((temp_v1 == 2) && (phi_t1 == temp_v0_9->data[1721]))) {
                        if (sp28 != 0) {
                            temp_a0 = phi_a3->unk8;
                            if (temp_a0 != 0) {
                                temp_v0_10 = globalCtx->state.gfxCtx->polyOpa.p;
                                globalCtx->state.gfxCtx->polyOpa.p = temp_v0_10 + 8;
                                temp_v0_10->words.w1 = temp_a0;
                                temp_v0_10->words.w0 = 0xDE000000;
                            }
                        }
                        if (sp1C != 0) {
                            temp_a0_2 = phi_a3->unkC;
                            if (temp_a0_2 != 0) {
                                temp_v0_11 = globalCtx->state.gfxCtx->polyXlu.p;
                                globalCtx->state.gfxCtx->polyXlu.p = temp_v0_11 + 8;
                                temp_v0_11->words.w1 = temp_a0_2;
                                temp_v0_11->words.w0 = 0xDE000000;
                            }
                        }
                    }
                } else {
                    if (sp28 != 0) {
                        temp_a0_3 = phi_a3->unk8;
                        if (temp_a0_3 != 0) {
                            temp_v0_12 = globalCtx->state.gfxCtx->polyOpa.p;
                            globalCtx->state.gfxCtx->polyOpa.p = temp_v0_12 + 8;
                            temp_v0_12->words.w1 = temp_a0_3;
                            temp_v0_12->words.w0 = 0xDE000000;
                        }
                    }
                    if (sp1C != 0) {
                        temp_a0_4 = phi_a3->unkC;
                        if (temp_a0_4 != 0) {
                            temp_v0_13 = globalCtx->state.gfxCtx->polyXlu.p;
                            globalCtx->state.gfxCtx->polyXlu.p = temp_v0_13 + 8;
                            temp_v0_13->words.w1 = temp_a0_4;
                            temp_v0_13->words.w0 = 0xDE000000;
                        }
                    }
                }
                temp_t1 = phi_t1 + 1;
                phi_t1 = temp_t1;
                phi_a3 += 0x10;
            } while (temp_t1 < (s32) temp_t5->type0.count);
            return;
        }
        /* Duplicate return node #82. Try simplifying control flow for better match */
        return;
    }
    temp_v0_14 = temp_t5->type0.count;
    phi_f14 = 1.0f / (globalCtx + 0x18000)->unk7F8;
    phi_t1_2 = 0;
    phi_v0_3 = (s16) temp_v0_14;
    if ((s32) temp_v0_14 > 0) {
        sp24 = &globalCtx->projectionMatrix;
        do {
            temp_a1 = &spA0;
            spA0 = (f32) phi_a3_2->unk0;
            spA4 = (f32) phi_a3_2->unk2;
            sp54 = phi_f14;
            sp8CC = phi_t5;
            spC0 = phi_t3;
            spC4 = phi_t2;
            spAC = phi_t1_2;
            sp8C = phi_t0;
            sp8C8 = phi_a3_2;
            spB4 = phi_v1;
            spA8 = (f32) phi_a3_2->unk4;
            SkinMatrix_Vec3fMtxFMultXYZ(sp24, (Vec3f *) temp_a1, (Vec3f *) &sp94);
            sp9C *= phi_f14;
            temp_v0_15 = phi_a3_2->unk6;
            phi_t0_2 = phi_t0;
            phi_t3_4 = phi_t3;
            phi_t2_4 = phi_t2;
            phi_t3_4 = phi_t3;
            phi_t2_4 = phi_t2;
            phi_t2_4 = phi_t2;
            if ((s32) temp_v0_15 < 0) {
                phi_f2 = (f32) -(s32) temp_v0_15;
            } else {
                phi_f2 = (f32) temp_v0_15;
            }
            if (-phi_f2 < sp9C) {
                temp_f12 = sp9C - phi_f2;
                if (temp_f12 < (f32) globalCtx->lightCtx.unkC) {
                    phi_v1->unk0 = phi_a3_2;
                    phi_v0 = phi_t2;
                    if ((s32) phi_a3_2->unk6 < 0) {
                        phi_v1->unk4 = 3.4028235e38f;
                    } else {
                        phi_v1->unk4 = temp_f12;
                    }
                    if (phi_t2 == 0) {
                        phi_v1->unkC = NULL;
                        phi_v1->unk8 = NULL;
                        phi_t3_4 = phi_v1;
                        phi_t2_4 = phi_v1;
                    } else {
loop_46:
                        phi_v0_2 = phi_v0;
                        if (!(phi_v1->unk4 < phi_v0->unk4)) {
                            temp_v0_16 = phi_v0->unkC;
                            phi_v0 = temp_v0_16;
                            phi_v0_2 = temp_v0_16;
                            if (temp_v0_16 != 0) {
                                goto loop_46;
                            }
                        }
                        if (phi_v0_2 == 0) {
                            phi_v1->unk8 = phi_t3;
                            phi_v1->unkC = NULL;
                            phi_t3->unkC = phi_v1;
                            phi_t3_4 = phi_v1;
                        } else {
                            temp_a0_5 = phi_v0_2->unk8;
                            phi_v1->unk8 = temp_a0_5;
                            if (temp_a0_5 == 0) {
                                phi_t2_4 = phi_v1;
                            } else {
                                temp_a0_5->unkC = phi_v1;
                            }
                            phi_v0_2->unk8 = phi_v1;
                            phi_v1->unkC = phi_v0_2;
                        }
                    }
                    phi_v1 += 0x10;
                }
            }
            temp_v0_17 = phi_t5->type0.count;
            temp_t1_2 = phi_t1_2 + 1;
            phi_a3_2 += 0x10;
            phi_t3 = phi_t3_4;
            phi_t2 = phi_t2_4;
            phi_t1_2 = temp_t1_2;
            phi_v0_3 = (s16) temp_v0_17;
            phi_t2_2 = phi_t2_4;
            phi_t3_2 = phi_t3_4;
        } while (temp_t1_2 < (s32) temp_v0_17);
    }
    gGameInfo->data[1719] = phi_v0_3;
    phi_t1_3 = 1;
    phi_t2_3 = phi_t2_2;
    phi_t3_3 = phi_t3_2;
    phi_t1_4 = 1;
    if ((sp28 != 0) && (phi_t2_2 != 0)) {
        do {
            temp_v0_18 = gGameInfo;
            temp_a3_2 = phi_t2_3->unk0;
            temp_v1_2 = temp_v0_18->data[1718];
            if (temp_v1_2 != 0) {
                if (((temp_v1_2 == 1) && ((s32) temp_v0_18->data[1721] >= phi_t1_3)) || ((temp_v1_2 == 2) && (phi_t1_3 == temp_v0_18->data[1721]))) {
                    temp_a0_6 = temp_a3_2->unk8;
                    if (temp_a0_6 != 0) {
                        temp_v0_19 = phi_t0_2->polyOpa.p;
                        phi_t0_2->polyOpa.p = temp_v0_19 + 8;
                        temp_v0_19->words.w1 = temp_a0_6;
                        temp_v0_19->words.w0 = 0xDE000000;
                    }
                }
            } else {
                temp_a0_7 = temp_a3_2->unk8;
                if (temp_a0_7 != 0) {
                    temp_v0_20 = phi_t0_2->polyOpa.p;
                    phi_t0_2->polyOpa.p = temp_v0_20 + 8;
                    temp_v0_20->words.w1 = temp_a0_7;
                    temp_v0_20->words.w0 = 0xDE000000;
                }
            }
            temp_t2 = phi_t2_3->unkC;
            temp_t1_3 = phi_t1_3 + 1;
            phi_t1_3 = temp_t1_3;
            phi_t2_3 = temp_t2;
            phi_t1_4 = temp_t1_3;
        } while (temp_t2 != 0);
    }
    if ((sp1C != 0) && (phi_t3_2 != 0)) {
        do {
            temp_a3_3 = phi_t3_3->unk0;
            temp_a0_8 = temp_a3_3->unkC;
            if (temp_a0_8 != 0) {
                if ((temp_a3_3->unk6 & 1) != 0) {
                    temp_v0_21 = gGameInfo;
                    temp_f2 = (f32) (temp_v0_21->data[1726] + 0x7D0);
                    temp_f0 = phi_t3_3->unk4 - (f32) (temp_v0_21->data[1725] + 0xBB8);
                    if (temp_f0 < temp_f2) {
                        if (temp_f0 < 0.0f) {
                            phi_a1 = 0xFF;
                        } else {
                            phi_a1 = 0xFF - (s32) ((temp_f0 / temp_f2) * 255.0f);
                        }
                        temp_v0_22 = phi_t0_2->polyXlu.p;
                        phi_t0_2->polyXlu.p = temp_v0_22 + 8;
                        temp_v0_22->words.w1 = (phi_a1 & 0xFF) | ~0xFF;
                        temp_v0_22->words.w0 = 0xFB000000;
                        temp_v0_23 = phi_t0_2->polyXlu.p;
                        phi_t0_2->polyXlu.p = temp_v0_23 + 8;
                        temp_v0_23->words.w1 = temp_a0_8;
                        temp_v0_23->words.w0 = 0xDE000000;
                    }
                } else {
                    temp_v0_24 = phi_t0_2->polyXlu.p;
                    phi_t0_2->polyXlu.p = temp_v0_24 + 8;
                    temp_v0_24->words.w1 = temp_a0_8;
                    temp_v0_24->words.w0 = 0xDE000000;
                }
            }
            temp_t3 = phi_t3_3->unk8;
            phi_t3_3 = temp_t3;
        } while (temp_t3 != 0);
    }
    gGameInfo->data[1720] = phi_t1_4 - 1;
}

void func_8012DEE8(GlobalContext *globalCtx, Room *room, u32 flags) {
    Camera *spA4;
    Gfx *spA0;
    RoomMesh *sp9C;
    void *sp98;
    s32 sp90;
    f32 sp64;
    Gfx *sp60;
    s32 sp50;
    RSPMatrix *sp4C;
    Gfx *temp_a0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    GraphicsContext *temp_s0;
    RoomMesh *temp_t1;
    f32 temp_f0;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_v1;
    void *temp_v0;
    s32 phi_t0;
    s32 phi_t0_2;
    s32 phi_t0_3;
    s32 phi_t0_4;

    temp_s0 = globalCtx->state.gfxCtx;
    spA4 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    temp_t1 = room->mesh;
    globalCtx = globalCtx;
    sp9C = temp_t1;
    temp_v0 = Lib_SegmentedToVirtual((void *) temp_t1->type0.paramsStart);
    sp98 = temp_v0;
    temp_v1 = (flags & 1) != 0;
    phi_t0_2 = temp_v1;
    if (temp_v1 != 0) {
        phi_t0_2 = 0;
    }
    phi_t0 = temp_v1;
    if (temp_v1 != 0) {
        temp_t0 = temp_v0->unk0 != 0;
        phi_t0 = temp_t0;
        if (temp_t0 != 0) {
            phi_t0 = (gGameInfo->data[121] & 2) == 0;
        }
    }
    temp_t0_2 = (flags & 2) != 0;
    phi_t0_3 = temp_t0_2;
    if (temp_t0_2 != 0) {
        temp_t0_3 = temp_v0->unk4 != 0;
        phi_t0_3 = temp_t0_3;
        if (temp_t0_3 != 0) {
            phi_t0_3 = (gGameInfo->data[121] & 4) == 0;
        }
    }
    phi_t0_4 = phi_t0_3;
    if ((phi_t0 != 0) || (phi_t0_2 != 0)) {
        temp_v1_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xDB06000C;
        temp_v1_2->words.w1 = (u32) room->segment;
        if (phi_t0 != 0) {
            sp9C = temp_t1;
            sp50 = phi_t0_3;
            sp90 = phi_t0_2;
            func_8012C28C(globalCtx->state.gfxCtx);
            temp_v1_3 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_3 + 8;
            temp_v1_3->words.w0 = 0xDA380003;
            temp_v1_3->words.w1 = (u32) &D_801D1DE0;
            temp_v1_4 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_4 + 8;
            temp_v1_4->words.w0 = 0xDE000000;
            temp_v1_4->words.w1 = sp98->unk0;
        }
        phi_t0_4 = phi_t0_3;
        if (phi_t0_2 != 0) {
            temp_v1_5 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_5 + 8;
            temp_v1_5->words.w1 = (u32) (&D_801E3BB0 - 0x80000000);
            temp_v1_5->words.w0 = 0xE1000000;
            temp_v1_6 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_6 + 8;
            temp_v1_6->words.w0 = 0xDD0007FF;
            temp_v1_6->words.w1 = (u32) (&D_801ABAB0 - 0x80000000);
            spA0 = temp_s0->polyOpa.p;
            sp50 = phi_t0_3;
            sp9C = room->mesh;
            func_800E01B8(&sp64, spA4);
            temp_f0 = sp64 + sp6C;
            func_80172758(&spA0, (void *) room->mesh->type0.paramsEnd, room->mesh->unk10, room->mesh->unk14, (u16) (s32) room->mesh->unk16, (u8) (s32) room->mesh->unk18, (u8) (s32) room->mesh->unk19, (u16) (s32) room->mesh->unk1A, (u16) (s32) room->mesh->unk1C, (temp_f0 * 1.2f) + (sp68 * 0.6f), (sp68 * 2.4f) + (temp_f0 * 0.3f), 1.0f, 1.0f, 0U);
            temp_s0->polyOpa.p = spA0;
            temp_v1_7 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_7 + 8;
            temp_v1_7->words.w0 = 0xE1000000;
            sp50 = phi_t0_3;
            sp60 = temp_v1_7;
            temp_a0 = sp60;
            temp_a0->words.w1 = func_80182CCC();
            temp_v1_8 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_8 + 8;
            temp_v1_8->words.w0 = 0xDD0007FF;
            sp60 = temp_v1_8;
            sp60->words.w1 = func_80182CBC(temp_a0);
            phi_t0_4 = phi_t0_3;
        }
    }
    if (phi_t0_4 != 0) {
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB06000C;
        temp_v0_2->words.w1 = (u32) room->segment;
        sp4C = &D_801D1DE0;
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_801D1DE0;
        temp_v0_3->words.w0 = 0xDA380003;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = sp98->unk4;
    }
}

u32 func_8012E254(s32 param_1, GlobalContext *globalCtx) {
    s32 sp18;
    Actor *temp_v0;
    s16 temp_a1;
    s16 temp_v1;
    s32 temp_a0;
    u8 temp_a1_2;
    s32 phi_a3;
    void *phi_v1;
    s32 phi_a0;

    temp_a1 = globalCtx->cameraPtrs[globalCtx->activeCamera]->camDataIdx;
    sp18 = (s32) temp_a1;
    temp_v1 = func_800C98CC(&globalCtx->colCtx, temp_a1, 0x32)->unkE;
    phi_a3 = sp18;
    if ((s32) temp_v1 >= 0) {
        phi_a3 = (s32) temp_v1;
    }
    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_v0->params = (temp_v0->params & 0xFF00) | phi_a3;
    sp18 = phi_a3;
    temp_a1_2 = param_1->unk8;
    phi_v1 = Lib_SegmentedToVirtual(param_1->unkC);
    phi_a0 = 0;
    if ((s32) temp_a1_2 > 0) {
loop_3:
        temp_a0 = phi_a0 + 1;
        phi_a0 = temp_a0;
        if (phi_a3 == phi_v1->unk2) {
            return (u32) phi_v1;
        }
        phi_v1 += 0x1C;
        if (temp_a0 >= (s32) temp_a1_2) {
            goto block_6;
        }
        goto loop_3;
    }
block_6:
    __assert("../z_room.c", 0x351U);
    return 0U;
}

void func_8012E32C(GlobalContext *globalCtx, Room *room, u32 flags) {
    Camera *spA4;
    Gfx *spA0;
    RoomMesh *sp9C;
    u32 sp98;
    void *sp94;
    s32 sp8C;
    f32 sp60;
    Gfx *sp5C;
    s32 sp4C;
    RSPMatrix *sp48;
    Gfx *temp_a0;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    GraphicsContext *temp_s0;
    RoomMesh *temp_a3;
    f32 temp_f0;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_v1;
    u32 temp_t1;
    s32 phi_t0;
    s32 phi_t0_2;
    s32 phi_t0_3;
    s32 phi_t0_4;

    temp_s0 = globalCtx->state.gfxCtx;
    spA4 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    temp_a3 = room->mesh;
    sp9C = temp_a3;
    sp94 = Lib_SegmentedToVirtual((void *) temp_a3->type0.paramsStart);
    temp_t1 = func_8012E254((s32) sp9C, globalCtx);
    temp_v1 = (flags & 1) != 0;
    phi_t0_2 = temp_v1;
    if (temp_v1 != 0) {
        phi_t0_2 = 0;
    }
    phi_t0 = temp_v1;
    if (temp_v1 != 0) {
        temp_t0 = sp94->unk0 != 0;
        phi_t0 = temp_t0;
        if (temp_t0 != 0) {
            phi_t0 = (gGameInfo->data[121] & 2) == 0;
        }
    }
    temp_t0_2 = (flags & 2) != 0;
    phi_t0_3 = temp_t0_2;
    if (temp_t0_2 != 0) {
        temp_t0_3 = sp94->unk4 != 0;
        phi_t0_3 = temp_t0_3;
        if (temp_t0_3 != 0) {
            phi_t0_3 = (gGameInfo->data[121] & 4) == 0;
        }
    }
    phi_t0_4 = phi_t0_3;
    if ((phi_t0 != 0) || (phi_t0_2 != 0)) {
        temp_v1_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xDB06000C;
        temp_v1_2->words.w1 = (u32) room->segment;
        if (phi_t0 != 0) {
            sp98 = temp_t1;
            sp4C = phi_t0_3;
            sp8C = phi_t0_2;
            func_8012C28C(globalCtx->state.gfxCtx);
            temp_v1_3 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_3 + 8;
            temp_v1_3->words.w0 = 0xDA380003;
            temp_v1_3->words.w1 = (u32) &D_801D1DE0;
            temp_v1_4 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_4 + 8;
            temp_v1_4->words.w0 = 0xDE000000;
            temp_v1_4->words.w1 = sp94->unk0;
        }
        phi_t0_4 = phi_t0_3;
        if (phi_t0_2 != 0) {
            temp_v1_5 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_5 + 8;
            temp_v1_5->words.w1 = (u32) (&D_801E3BB0 - 0x80000000);
            temp_v1_5->words.w0 = 0xE1000000;
            temp_v1_6 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_6 + 8;
            temp_v1_6->words.w0 = 0xDD0007FF;
            temp_v1_6->words.w1 = (u32) (&D_801ABAB0 - 0x80000000);
            spA0 = temp_s0->polyOpa.p;
            sp4C = phi_t0_3;
            sp98 = temp_t1;
            func_800E01B8(&sp60, spA4);
            temp_f0 = sp60 + sp68;
            func_80172758(&spA0, temp_t1->unk4, temp_t1->unkC, temp_t1->unk10, (u16) (s32) temp_t1->unk12, (u8) (s32) temp_t1->unk14, (u8) (s32) temp_t1->unk15, (u16) (s32) temp_t1->unk16, (u16) (s32) temp_t1->unk18, (temp_f0 * 1.2f) + (sp64 * 0.6f), (sp64 * 2.4f) + (temp_f0 * 0.3f), 1.0f, 1.0f, 0U);
            temp_s0->polyOpa.p = spA0;
            temp_v1_7 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_7 + 8;
            temp_v1_7->words.w0 = 0xE1000000;
            sp4C = phi_t0_3;
            sp5C = temp_v1_7;
            temp_a0 = sp5C;
            temp_a0->words.w1 = func_80182CCC();
            temp_v1_8 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_8 + 8;
            temp_v1_8->words.w0 = 0xDD0007FF;
            sp5C = temp_v1_8;
            sp5C->words.w1 = func_80182CBC(temp_a0);
            phi_t0_4 = phi_t0_3;
        }
    }
    if (phi_t0_4 != 0) {
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB06000C;
        temp_v0->words.w1 = (u32) room->segment;
        sp48 = &D_801D1DE0;
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_801D1DE0;
        temp_v0_2->words.w0 = 0xDA380003;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = sp94->unk4;
    }
}

void Room_DrawType1Mesh(GlobalContext *globalCtx, Room *room, u32 flags) {
    u8 temp_v1;

    temp_v1 = room->mesh->type0.count;
    if (temp_v1 == 1) {
        func_8012DEE8(globalCtx, room, flags);
        return;
    }
    if (temp_v1 == 2) {
        func_8012E32C(globalCtx, room, flags);
        return;
    }
    __assert("../z_room.c", 0x3C5U);
}

void Room_Init(GlobalContext *globalCtx, RoomContext *roomCtx) {
    RoomContext *temp_v1;
    s32 temp_v0;
    RoomContext *phi_v1;
    s32 phi_v0;

    roomCtx->currRoom.num = -1;
    roomCtx->currRoom.segment = NULL;
    roomCtx->unk78 = 1;
    roomCtx->unk79 = 0;
    phi_v1 = roomCtx;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        temp_v1 = phi_v1 + 2;
        temp_v1->unk78 = 0;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 3);
}

u32 Room_AllocateAndLoad(GlobalContext *globalCtx, RoomContext *roomCtx) {
    void *sp20;
    RomFile *temp_t3;
    RomFile *temp_v0_2;
    RomFile *temp_v0_3;
    s32 temp_t0;
    s32 temp_v0_5;
    s32 temp_v1;
    s8 temp_a0_2;
    s8 temp_a2_2;
    u32 temp_a0;
    u8 temp_a2;
    u8 temp_v0;
    void *temp_t4;
    void *temp_v0_4;
    u32 phi_s0;
    RomFile *phi_v0;
    s32 phi_v1;
    TransitionActorEntry *phi_a3;
    u32 phi_s0_2;
    u32 phi_v0_2;
    s32 phi_t0;
    u32 phi_s0_3;
    s32 phi_a2;
    u32 phi_s0_4;
    u32 phi_s0_5;
    u32 phi_s0_6;
    u32 phi_a1;
    s32 phi_v1_2;
    s32 phi_v1_3;

    temp_t4 = globalCtx + 0x18000;
    temp_a2 = globalCtx->numRooms;
    temp_t3 = globalCtx->roomList;
    phi_s0 = 0U;
    phi_v1 = 0;
    phi_s0_5 = 0U;
    phi_v1_2 = 0;
    phi_v1_3 = 0;
    if ((s32) temp_a2 > 0) {
        phi_v0 = temp_t3;
        do {
            temp_v1 = phi_v1 + 8;
            temp_a0 = phi_v0->vromEnd - phi_v0->vromStart;
            phi_v1 = temp_v1;
            phi_s0_4 = phi_s0;
            if (phi_s0 < temp_a0) {
                phi_s0_4 = temp_a0;
            }
            phi_s0 = phi_s0_4;
            phi_v0 += 8;
            phi_s0_5 = phi_s0_4;
        } while (temp_v1 < (temp_a2 * 8));
    }
    temp_v0 = globalCtx->doorCtx.numTransitionActors;
    phi_s0_2 = phi_s0_5;
    phi_t0 = 0;
    phi_s0_3 = phi_s0_5;
    if (temp_v0 != 0) {
        phi_a3 = globalCtx->doorCtx.transitionActorList;
        if ((s32) temp_v0 > 0) {
            do {
                temp_a2_2 = phi_a3->sides[0].room;
                temp_t0 = phi_t0 + 1;
                temp_a0_2 = phi_a3->sides[1].room;
                phi_t0 = temp_t0;
                phi_s0_6 = phi_s0_2;
                if ((s32) temp_a2_2 < 0) {
                    phi_a1 = 0U;
                } else {
                    temp_v0_2 = &temp_t3[temp_a2_2];
                    phi_a1 = temp_v0_2->vromEnd - temp_v0_2->vromStart;
                }
                if ((s32) temp_a0_2 < 0) {

                } else {
                    temp_v0_3 = &temp_t3[temp_a0_2];
                    phi_v1_2 = temp_v0_3->vromEnd - temp_v0_3->vromStart;
                }
                phi_v0_2 = phi_a1;
                if (temp_a2_2 != temp_a0_2) {
                    phi_v0_2 = phi_a1 + phi_v1_2;
                }
                if (phi_s0_2 < phi_v0_2) {
                    phi_s0_6 = phi_v0_2;
                }
                phi_a3 += 0x10;
                phi_s0_2 = phi_s0_6;
                phi_s0_3 = phi_s0_6;
            } while (temp_t0 < (s32) temp_v0);
        }
    }
    sp20 = temp_t4;
    temp_v0_4 = THA_AllocEndAlign16(&globalCtx->state.heap, phi_s0_3);
    roomCtx->roomMemPages[0] = temp_v0_4;
    if (temp_v0_4 == 0) {
        sp20 = temp_t4;
        __assert("../z_room.c", 0x436U);
    }
    roomCtx->roomMemPages[1] = roomCtx->roomMemPages[0] + phi_s0_3;
    roomCtx->activeMemPage = 0;
    roomCtx->unk31 = 0;
    temp_v0_5 = gSaveContext.respawnFlag;
    if ((temp_v0_5 != 0) && (temp_v0_5 != -2) && (temp_v0_5 != -7)) {
        if ((temp_v0_5 == -8) || (temp_v0_5 == -5) || (temp_v0_5 == -4) || ((temp_v0_5 < 0) && (temp_v0_5 != -1) && (temp_v0_5 != -6))) {

        } else {
            phi_v1_3 = temp_v0_5 - 1;
            if (temp_v0_5 < 0) {
                phi_v1_3 = 2;
            }
        }
        phi_a2 = (s32) gSaveContext.respawn[phi_v1_3].roomIndex;
    } else {
        phi_a2 = (s32) ((globalCtx + 0x18000)->unk85C + ((globalCtx + 0x18000)->unkB48 * 2))->unk1;
    }
    Room_StartRoomTransition(globalCtx, roomCtx, phi_a2);
    return phi_s0_3;
}

s32 Room_StartRoomTransition(GlobalContext *globalCtx, RoomContext *roomCtx, s32 index) {
    u32 sp3C;
    void *sp38;
    s32 sp34;
    OSMesgQueue *sp30;
    OSMesgQueue *temp_a0;
    RomFile *temp_v0;
    u32 temp_a3;
    u8 temp_v1;

    if (roomCtx->unk31 == 0) {
        roomCtx->unk14 = (s32) roomCtx->unk0;
        roomCtx->unk18 = (s32) roomCtx->unk4;
        roomCtx->prevRoom.mesh = roomCtx->currRoom.mesh;
        roomCtx->prevRoom.segment = roomCtx->currRoom.segment;
        roomCtx->prevRoom.unk10 = roomCtx->currRoom.unk10;
        roomCtx->currRoom.segment = NULL;
        roomCtx->unk31 = 1;
        roomCtx->currRoom.num = (s8) index;
        temp_v1 = roomCtx->activeMemPage;
        temp_v0 = &globalCtx->roomList[index];
        temp_a3 = temp_v0->vromEnd - temp_v0->vromStart;
        temp_a0 = &roomCtx->loadQueue;
        roomCtx->activeRoomVram = (void *) (((roomCtx->roomMemPages[temp_v1] - ((temp_a3 + 8) * temp_v1)) + 8) & ~0xF);
        sp34 = index * 8;
        sp38 = globalCtx + 0x18000;
        sp3C = temp_a3;
        sp30 = temp_a0;
        osCreateMesgQueue(temp_a0, roomCtx->loadMsg, 1);
        DmaMgr_SendRequestImpl(&roomCtx->dmaRequest, roomCtx->activeRoomVram, globalCtx->roomList[index].vromStart, temp_a3, 0, sp30, NULL);
        roomCtx->activeMemPage ^= 1;
        return 1;
    }
    return 0;
}

s32 Room_HandleLoadCallbacks(GlobalContext *globalCtx, RoomContext *roomCtx) {
    s16 temp_v0_2;
    void *temp_v0;

    if (roomCtx->unk31 == 1) {
        if (osRecvMesg(&roomCtx->loadQueue, NULL, 0) == 0) {
            temp_v0 = roomCtx->activeRoomVram;
            roomCtx->unk31 = 0;
            roomCtx->currRoom.segment = temp_v0;
            *(gSegments + 0xC) = (u32) (temp_v0 + 0x80000000);
            Scene_ProcessHeader(globalCtx, (SceneCmd *) roomCtx->currRoom.segment);
            func_80123140(globalCtx, (Player *) globalCtx->actorCtx.actorList[2].first);
            Actor_SpawnTransitionActors(globalCtx, &globalCtx->actorCtx);
            temp_v0_2 = globalCtx->sceneNum;
            if (((temp_v0_2 != 0x13) || (roomCtx->currRoom.num != 1)) && (temp_v0_2 != 0x56)) {
                globalCtx->envCtx.unk_C3 = 0xFF;
                globalCtx->envCtx.unk_E0 = 0;
            }
            func_800FEAB0();
            if (func_800FE4B8(globalCtx) == 0) {
                func_800FD858(globalCtx);
            }
            goto block_9;
        }
        return 0;
    }
block_9:
    return 1;
}

void Room_Draw(GlobalContext *globalCtx, Room *room, u32 flags) {
    void *temp_v0;

    temp_v0 = room->segment;
    if (temp_v0 != 0) {
        *(gSegments + 0xC) = (u32) (temp_v0 + 0x80000000);
        roomDrawFuncs[room->mesh->type0.type](globalCtx, room, flags);
    }
}

void func_8012EBF8(GlobalContext *globalCtx, RoomContext *roomCtx) {
    ActorContext *sp24;
    ActorContext *temp_a1;
    s8 temp_a1_2;

    roomCtx->prevRoom.num = -1;
    roomCtx->prevRoom.segment = NULL;
    temp_a1 = &globalCtx->actorCtx;
    sp24 = temp_a1;
    roomCtx = roomCtx;
    func_800BA798(globalCtx, temp_a1);
    Actor_SpawnTransitionActors(globalCtx, temp_a1);
    temp_a1_2 = roomCtx->currRoom.num;
    if ((s32) temp_a1_2 >= 0) {
        func_8010A33C(globalCtx, (s16) temp_a1_2);
        func_8010A2DC(globalCtx);
    }
    func_801A3CD8(globalCtx->roomCtx.currRoom.echo);
}
