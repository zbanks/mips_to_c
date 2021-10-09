

void BcCheck3_BgActorInit(DynaPolyActor *actor, s32 param_2) {
    actor->bgId = -1;
    actor->unk148 = 0.0f;
    actor->unk14C = 0.0f;
    actor->unk154 = (u32) param_2;
    actor->unk_158 = 0;
}

void BgCheck3_LoadMesh(GlobalContext *globalCtx, DynaPolyActor *actor, CollisionHeader *meshHeader) {
    CollisionHeader *sp1C;

    sp1C = NULL;
    BgCheck_RelocateMeshHeader(meshHeader, &sp1C);
    actor->bgId = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, actor, sp1C);
}

void BgCheck3_ResetFlags(DynaPolyActor *actor) {
    actor->unk_158 = 0;
}

void func_800CAE88(DynaPolyActor *actor) {
    actor->unk_158 |= 1;
}

void func_800CAE9C(DynaPolyActor *actor) {
    actor->unk_158 |= 2;
}

void func_800CAEB0(CollisionContext *colCtx, s32 index) {
    DynaPolyActor *temp_v0;

    temp_v0 = BgCheck_GetActorOfMesh(colCtx, index);
    if (temp_v0 != 0) {
        func_800CAE9C(temp_v0);
    }
}

void func_800CAEE0(DynaPolyActor *actor) {
    actor->unk_158 |= 4;
}

void func_800CAEF4(CollisionContext *colCtx, s32 index) {
    DynaPolyActor *temp_v0;

    temp_v0 = BgCheck_GetActorOfMesh(colCtx, index);
    if (temp_v0 != 0) {
        func_800CAEE0(temp_v0);
    }
}

void func_800CAF24(DynaPolyActor *actor) {
    actor->unk_158 |= 8;
}

void func_800CAF38(DynaPolyActor *actor) {
    actor->unk_158 |= 0x10;
}

s32 func_800CAF4C(DynaPolyActor *actor) {
    if ((actor->unk_158 & 1) != 0) {
        return 1;
    }
    return 0;
}

s32 func_800CAF70(DynaPolyActor *actor) {
    if ((actor->unk_158 & 2) != 0) {
        return 1;
    }
    return 0;
}

s32 func_800CAF94(DynaPolyActor *actor) {
    if ((actor->unk_158 & 4) != 0) {
        return 1;
    }
    return 0;
}

s32 func_800CAFB8(DynaPolyActor *actor) {
    if ((actor->unk_158 & 8) != 0) {
        return 1;
    }
    return 0;
}

s32 func_800CAFDC(DynaPolyActor *actor) {
    if ((actor->unk_158 & 0x10) != 0) {
        return 1;
    }
    return 0;
}

