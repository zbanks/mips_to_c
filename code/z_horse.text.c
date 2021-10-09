? func_800B7170(GlobalContext *, SaveContext *);    /* extern */
? func_800B71DC(GlobalContext *, SaveContext *, Actor *); /* extern */
f32 func_800C3FA0(void *, ? *, ? *);                /* extern */
s32 func_800F3940(GlobalContext *arg0);             /* static */
? func_800F39B4(void *arg0, s32 arg1, s32 arg2, void *arg3, s16 *arg4); /* static */
s32 func_800F3A64(s16 arg0, s16);                   /* static */
void func_800F3B2C(GlobalContext *arg0);            /* static */
s32 func_800F3B68(GlobalContext *arg0, SaveContext *arg1); /* static */
void func_800F3C44(GlobalContext *arg0, SaveContext *arg1); /* static */
void func_800F3ED4(GlobalContext *arg0, SaveContext *arg1); /* static */
void func_800F415C(void *arg0, Vec3f *arg1, s16 arg2); /* static */
static s16 D_801BDA70 = 0x2D;
static s16 D_801BDA74 = 0x40;
static s16 D_801BDA78 = 0x35;
static ? D_801BDA7C;                                /* unable to generate initializer */
static s32 D_801BDA9C = 0;
static s16 D_801BDAA8 = 0x2D;
static s16 D_801BDAAA = 4;
static s16 D_801BDAAC = 0x37;
static s16 D_801BDAAE = 0;
static s16 D_801BDAB0 = 0x38;
static s16 D_801BDAB2 = 0;
static s16 D_801BDAB4 = 0x1C;
static s16 D_801BDAB6 = 0;
s32 D_801BDAA0 = 0;
u32 gBitFlags[32] = {
    1,
    2,
    4,
    8,
    0x10,
    0x20,
    0x40,
    0x80,
    0x100,
    0x200,
    0x400,
    0x800,
    0x1000,
    0x2000,
    0x4000,
    0x8000,
    0x10000,
    0x20000,
    0x40000,
    0x80000,
    0x100000,
    0x200000,
    0x400000,
    0x800000,
    0x1000000,
    0x2000000,
    0x4000000,
    0x8000000,
    0x10000000,
    0x20000000,
    0x40000000,
    0x80000000,
};
SaveContext gSaveContext;



s32 func_800F3940(GlobalContext *arg0) {
    Actor *temp_v0;
    Actor *phi_s0;

    phi_s0 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg0, phi_s0, 6, 0x7C);
    if (temp_v0 != 0) {
        if (temp_v0->params == 2) {
            return temp_v0->unk160;
        }
        phi_s0 = temp_v0->next;
        goto loop_1;
    }
    return -1;
}

? func_800F39B4(void *arg0, s32 arg1, s32 arg2, void *arg3, s16 *arg4) {
    s16 *temp_v1_2;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = arg0->unk18864 + (arg1 * 8);
    temp_v1 = temp_v0->unk0;
    arg3->unk0 = 0;
    arg3->unk2 = 0;
    arg3->unk4 = 0;
    *arg4 = 0;
    if (temp_v1 == 0) {
        return 0;
    }
    if (arg2 >= (s32) temp_v1) {
        return 0;
    }
    temp_v1_2 = Lib_SegmentedToVirtual(temp_v0->unk4) + (arg2 * 6);
    arg3->unk0 = (s16) temp_v1_2->unk0;
    arg3->unk2 = (s16) temp_v1_2->unk2;
    arg3->unk4 = (s16) temp_v1_2->unk4;
    *arg4 = 0;
    return 1;
}

s32 func_800F3A64(s16 arg0) {
    ? *temp_v1;
    ? *phi_v1;

    if (arg0 == D_801BDA70) {
        return 1;
    }
    if (arg0 == D_801BDA74) {
        return 1;
    }
    phi_v1 = &D_801BDA7C;
    if (arg0 == D_801BDA78) {
        return 1;
    }
loop_7:
    if (arg0 == phi_v1->unk0) {
        return 1;
    }
    if (arg0 == phi_v1->unk4) {
        return 1;
    }
    if (arg0 == phi_v1->unk8) {
        return 1;
    }
    temp_v1 = phi_v1 + 0x10;
    phi_v1 = temp_v1;
    if (arg0 == phi_v1->unkC) {
        return 1;
    }
    if (temp_v1 == &D_801BDA9C) {
        return 0;
    }
    goto loop_7;
}

void func_800F3B2C(GlobalContext *arg0) {
    gSaveContext.horseData.scene = 0x35;
    gSaveContext.horseData.pos.x = -0x58C;
    gSaveContext.horseData.pos.y = 0x101;
    gSaveContext.horseData.pos.z = -0x505;
    gSaveContext.horseData.angle = 0x2AAA;
}

s32 func_800F3B68(GlobalContext *arg0, SaveContext *arg1) {
    s16 temp_v1;
    s32 temp_v0;

    temp_v0 = gSaveContext.sceneSetupIndex;
    if (temp_v0 == 0) {
        return 1;
    }
    temp_v1 = arg0->sceneNum;
    if ((temp_v1 == D_801BDAA8) && (temp_v0 == (D_801BDAAA + 1))) {
        return 1;
    }
    if ((temp_v1 == D_801BDAAC) && (temp_v0 == (D_801BDAAE + 1))) {
        return 1;
    }
    if ((temp_v1 == D_801BDAB0) && (temp_v0 == (D_801BDAB2 + 1))) {
        return 1;
    }
    if ((temp_v1 == D_801BDAB4) && (temp_v0 == (D_801BDAB6 + 1))) {
        return 1;
    }
    return 0;
}

void func_800F3C44(GlobalContext *arg0, SaveContext *arg1) {
    f32 sp64;
    ? sp60;
    ? sp58;
    Actor *temp_v0;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_a1;
    u32 temp_v0_2;
    u32 temp_v1;
    f32 phi_f2;

    if (func_800F3B68(arg0, arg1) != 0) {
        if ((D_801BDA9C != 0) && ((*(gBitFlags + 0x38) & gSaveContext.inventory.questItems) != 0)) {
            sp60.unk0 = (f32) arg1->unk24;
            sp60.unk4 = (f32) arg1->unk28;
            sp60.unk8 = (f32) arg1->unk2C;
            sp64 += 5.0f;
            temp_f0 = func_800C3FA0(arg0 + 0x830, &sp58, &sp60);
            phi_f2 = temp_f0;
            if (temp_f0 == -32000.0f) {
                phi_f2 = arg1->unk28;
            }
            temp_v0 = Actor_Spawn(arg0 + 0x1CA0, arg0, 0xD, arg1->unk24, phi_f2, arg1->unk2C, (s16) (s32) arg1->unkBC, (s16) (s32) arg1->unkBE, (s16) (s32) arg1->unkC0, (s16) 0x400B);
            arg1->roomInf[23][5] = temp_v0;
            func_800B71DC(arg0, arg1, temp_v0);
            func_800B7170(arg0, arg1);
            return;
        }
        temp_a0 = gSaveContext.horseData.scene;
        temp_a1 = arg0->sceneNum;
        temp_v1 = *(gBitFlags + 0x38);
        temp_v0_2 = gSaveContext.inventory.questItems;
        if ((temp_a0 == temp_a1) && ((temp_v1 & temp_v0_2) != 0)) {
            if (func_800F3A64(temp_a0, temp_a1) != 0) {
                Actor_Spawn(&arg0->actorCtx, arg0, 0xD, (f32) gSaveContext.horseData.pos.x, (f32) gSaveContext.horseData.pos.y, (f32) gSaveContext.horseData.pos.z, (s16) 0, (s16) (s32) gSaveContext.horseData.angle, (s16) 0, (s16) 0x4001);
                return;
            }
            func_800F3B2C(arg0);
            return;
        }
        if ((temp_a1 == 0x35) && ((temp_v1 & temp_v0_2) == 0)) {
            Actor_Spawn(&arg0->actorCtx, arg0, 0xD, -1420.0f, 257.0f, -1285.0f, (s16) 0, (s16) 0x2AAA, (s16) 0, (s16) 0x4001);
            return;
        }
        if (((temp_v1 & temp_v0_2) != 0) && (func_800F3A64(temp_a1, temp_a1) != 0)) {
            Actor_Spawn(&arg0->actorCtx, arg0, 0xD, arg1->unk24, arg1->unk28, arg1->unk2C, (s16) 0, (s16) (s32) arg1->unkBE, (s16) 0, (s16) 0x4002);
        }
        // Duplicate return node #17. Try simplifying control flow for better match
    }
}

void func_800F3ED4(GlobalContext *arg0, SaveContext *arg1) {
    Actor *temp_v0_2;
    Actor *temp_v0_4;
    s16 temp_v0;
    s32 temp_v0_3;

    temp_v0 = arg0->sceneNum;
    if ((temp_v0 == 0x6A) && ((gSaveContext.weekEventReg[92] & 7) == 1)) {
        temp_v0_2 = Actor_Spawn(arg0 + 0x1CA0, arg0, 0xD, -1262.0f, -106.0f, 470.0f, (s16) 0, (s16) 0x7FFF, (s16) 0, (s16) 0x400D);
        arg1->roomInf[23][5] = temp_v0_2;
        func_800B71DC(arg0, arg1, temp_v0_2);
        func_800B7170(arg0, arg1);
        return;
    }
    if ((temp_v0 == 0x6A) && ((temp_v0_3 = gSaveContext.weekEventReg[92] & 7, (temp_v0_3 == 3)) || (temp_v0_3 == 2))) {
        Actor_Spawn(&arg0->actorCtx, arg0, 0xD, -1741.0f, -106.0f, -641.0f, (s16) 0, (s16) -0x4FA4, (s16) 0, (s16) 0x4001);
        return;
    }
    if ((gSaveContext.entranceIndex == 0x6400) && (func_800EE1D8(arg0) != 0) && (arg1->unk14B == 4)) {
        temp_v0_4 = Actor_Spawn(&arg0->actorCtx, arg0, 0xD, -1106.0f, 260.0f, -1185.0f, (s16) 0, (s16) 0x13, (s16) 0, (s16) 0x4007);
        arg1->roomInf[23][5] = temp_v0_4;
        func_800B71DC(arg0, arg1, temp_v0_4);
        func_800B7170(arg0, arg1);
    }
}

void func_800F40A0(GlobalContext *globalCtx, s32 param_2) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v1 = globalCtx->sceneNum;
    if (((temp_v1 == (GlobalContext *)0x6A) && ((gSaveContext.weekEventReg[92] & 7) == 1)) || ((temp_v1 == 0x35) && ((temp_v0 = gSaveContext.sceneSetupIndex, (temp_v0 == 1)) || (temp_v0 == 5)) && (param_2->unk14B == 4)) || ((temp_v1 == (GlobalContext *)0x6A) && ((temp_v0_2 = gSaveContext.weekEventReg[92] & 7, (temp_v0_2 == 3)) || (temp_v0_2 == 2)))) {
        func_800F3ED4((GlobalContext *)0x6A, &gSaveContext);
    } else {
        func_800F3C44((GlobalContext *)0x6A, &gSaveContext);
    }
    D_801BDAA0 = 0;
}

void func_800F415C(void *arg0, Vec3f *arg1, s16 arg2) {
    Vec3f *temp_a0;
    s16 temp_a0_2;
    s16 temp_v1;

    temp_a0 = arg0 + 0x24;
    arg2 = arg2;
    arg0 = arg0;
    temp_v1 = arg0->unk32;
    temp_a0_2 = Math_Vec3f_Yaw(temp_a0, arg1) - temp_v1;
    if ((s32) arg2 < (s32) temp_a0_2) {
        arg0->unk32 = (s16) (temp_v1 + arg2);
    } else if ((s32) temp_a0_2 < -(s32) arg2) {
        arg0->unk32 = (s16) (temp_v1 - arg2);
    } else {
        arg0->unk32 = (s16) (temp_v1 + temp_a0_2);
    }
    arg0->unkBE = (s16) arg0->unk32;
}

s32 func_800F41E4(GlobalContext *globalCtx, ActorContext *actorCtx) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *phi_s0;

    temp_s0 = actorCtx->actorList[1].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_2:
        if ((phi_s0->update != 0) && (phi_s0->init == 0) && (Object_IsLoaded(&globalCtx->objectCtx, (s32) phi_s0->objBankIndex) != 0) && (phi_s0->id == 0xD) && (phi_s0->unk144 != 1)) {
            return 1;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    return 0;
}

