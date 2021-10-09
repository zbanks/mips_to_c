s8 ShrinkWindow_GetLetterboxTarget();               /* static */
s8 ShrinkWindow_GetPillarboxMagnitude();            /* static */
s8 ShrinkWindow_GetPillarboxTarget();               /* static */
void ShrinkWindow_Init();                           /* static */
s32 gScreenHeight = 0xF0;
s32 gScreenWidth = 0x140;
ShrinkWindowContext gShrinkWindowContext;
ShrinkWindowContext *gShrinkWindowContextPtr;



void ShrinkWindow_SetLetterboxTarget(s8 target) {
    gShrinkWindowContextPtr->letterboxTarget = target;
}

s8 ShrinkWindow_GetLetterboxTarget(void) {
    return gShrinkWindowContextPtr->letterboxTarget;
}

void ShrinkWindow_SetLetterboxMagnitude(s8 magnitude) {
    gShrinkWindowContextPtr->letterboxMagnitude = magnitude;
}

s32 ShrinkWindow_GetLetterboxMagnitude(void) {
    return (s32) gShrinkWindowContextPtr->letterboxMagnitude;
}

void ShrinkWindow_SetPillarboxTarget(s8 target) {
    gShrinkWindowContextPtr->pillarboxTarget = target;
}

s8 ShrinkWindow_GetPillarboxTarget(void) {
    return gShrinkWindowContextPtr->pillarboxTarget;
}

void ShrinkWindow_SetPillarboxMagnitude(u8 magnitude) {
    gShrinkWindowContextPtr->pillarboxMagnitude = (s8) magnitude;
}

s8 ShrinkWindow_GetPillarboxMagnitude(void) {
    return gShrinkWindowContextPtr->pillarboxMagnitude;
}

void ShrinkWindow_Init(void) {
    gShrinkWindowContextPtr = &gShrinkWindowContext;
    bzero((void *) &gShrinkWindowContext, 4);
}

void ShrinkWindow_Fini(void) {
    gShrinkWindowContextPtr = NULL;
}

void ShrinkWindow_Step(s32 framerateDivisor) {
    s32 sp24;
    s32 sp20;
    ShrinkWindowContext *temp_v0;
    ShrinkWindowContext *temp_v0_2;
    s32 *temp_a0;
    s32 *temp_a0_2;
    s32 phi_a2;

    if (framerateDivisor == 3) {
        phi_a2 = 0xA;
    } else {
        phi_a2 = 0x1E / framerateDivisor;
    }
    temp_v0 = gShrinkWindowContextPtr;
    temp_a0 = &sp20;
    sp20 = (s32) temp_v0->letterboxMagnitude;
    sp24 = phi_a2;
    Math_StepToIGet(temp_a0, (s32) temp_v0->letterboxTarget, phi_a2);
    temp_a0_2 = &sp20;
    gShrinkWindowContextPtr->letterboxMagnitude = (s8) sp20;
    temp_v0_2 = gShrinkWindowContextPtr;
    sp20 = (s32) temp_v0_2->pillarboxMagnitude;
    Math_StepToIGet(temp_a0_2, (s32) temp_v0_2->pillarboxTarget, phi_a2);
    gShrinkWindowContextPtr->pillarboxMagnitude = (s8) sp20;
}

void ShrinkWindow_Draw(GlobalContext *globalCtx) {
    ShrinkWindowContext *temp_v0;
    f32 temp_v0_15;
    f32 temp_v0_2;
    s8 temp_a1;
    s8 temp_v1;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_19;
    void *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_23;
    void *temp_v0_24;
    void *temp_v0_25;
    void *temp_v0_26;
    void *temp_v0_27;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    temp_v0 = gShrinkWindowContextPtr;
    temp_v1 = temp_v0->letterboxMagnitude;
    temp_a1 = temp_v0->pillarboxMagnitude;
    if ((s32) temp_v1 > 0) {
        temp_v0_2 = globalCtx->mainCamera.skyboxOffset.x;
        temp_v0_2->unk0 = 0xE7000000;
        temp_v0_2->unk4 = 0;
        temp_v0_3 = (bitwise s32) temp_v0_2 + 8;
        temp_v0_3->unk4 = 0x300000;
        temp_v0_3->unk0 = 0xE3000A01;
        temp_v0_4 = temp_v0_3 + 8;
        temp_v0_4->unk0 = 0xE200001C;
        temp_v0_4->unk4 = 0;
        temp_v0_5 = temp_v0_4 + 8;
        temp_v0_5->unk0 = 0xF7000000;
        temp_v0_5->unk4 = 0x10001;
        temp_v0_6 = temp_v0_5 + 8;
        temp_v0_6->unk0 = (s32) ((((gScreenWidth - 1) & 0x3FF) << 0xE) | 0xF6000000 | (((temp_v1 - 1) & 0x3FF) * 4));
        temp_v0_6->unk4 = 0;
        temp_v0_7 = temp_v0_6 + 8;
        temp_v0_7->unk0 = (s32) ((((gScreenWidth - 1) & 0x3FF) << 0xE) | 0xF6000000 | (((gScreenHeight - 1) & 0x3FF) * 4));
        temp_v0_8 = temp_v0_7 + 8;
        temp_v0_7->unk4 = (s32) (((gScreenHeight - temp_v1) & 0x3FF) * 4);
        temp_v0_8->unk0 = 0xE7000000;
        temp_v0_8->unk4 = 0;
        temp_v0_9 = temp_v0_8 + 8;
        temp_v0_9->unk0 = 0xE3000A01;
        temp_v0_9->unk4 = 0;
        temp_v0_10 = temp_v0_9 + 8;
        temp_v0_10->unk4 = 0x504240;
        temp_v0_10->unk0 = 0xE200001C;
        temp_v0_11 = temp_v0_10 + 8;
        temp_v0_11->unk0 = 0xFA000000;
        temp_v0_11->unk4 = 0;
        temp_v0_12 = temp_v0_11 + 8;
        temp_v0_12->unk4 = (s32) ((temp_v1 & 0x3FF) * 4);
        temp_v0_12->unk0 = (s32) (((gScreenWidth & 0x3FF) << 0xE) | 0xF6000000 | (((temp_v1 + 1) & 0x3FF) * 4));
        temp_v0_13 = temp_v0_12 + 8;
        temp_v0_13->unk0 = (s32) (((gScreenWidth & 0x3FF) << 0xE) | 0xF6000000 | (((gScreenHeight - temp_v1) & 0x3FF) * 4));
        temp_v0_14 = temp_v0_13 + 8;
        temp_v0_13->unk4 = (s32) ((((gScreenHeight - temp_v1) - 1) & 0x3FF) * 4);
        temp_v0_14->unk0 = 0xE7000000;
        temp_v0_14->unk4 = 0;
        globalCtx->mainCamera.skyboxOffset.x = (bitwise f32) (temp_v0_14 + 8);
    }
    if ((s32) temp_a1 > 0) {
        temp_v0_15 = globalCtx->mainCamera.skyboxOffset.x;
        temp_v0_15->unk0 = 0xE7000000;
        temp_v0_15->unk4 = 0;
        temp_v0_16 = (bitwise s32) temp_v0_15 + 8;
        temp_v0_16->unk0 = 0xE3000A01;
        temp_v0_16->unk4 = 0x300000;
        temp_v0_17 = temp_v0_16 + 8;
        temp_v0_17->unk0 = 0xE200001C;
        temp_v0_17->unk4 = 0;
        temp_v0_18 = temp_v0_17 + 8;
        temp_v0_18->unk4 = 0x10001;
        temp_v0_18->unk0 = 0xF7000000;
        temp_v0_19 = temp_v0_18 + 8;
        temp_v0_19->unk0 = (s32) ((((temp_a1 - 1) & 0x3FF) << 0xE) | 0xF6000000 | (((gScreenHeight - 1) & 0x3FF) * 4));
        temp_v0_19->unk4 = 0;
        temp_v0_20 = temp_v0_19 + 8;
        temp_v0_20->unk0 = (s32) ((((gScreenWidth - 1) & 0x3FF) << 0xE) | 0xF6000000 | (((gScreenHeight - 1) & 0x3FF) * 4));
        temp_v0_21 = temp_v0_20 + 8;
        temp_v0_20->unk4 = (s32) (((gScreenWidth - temp_a1) & 0x3FF) << 0xE);
        temp_v0_21->unk0 = 0xE7000000;
        temp_v0_21->unk4 = 0;
        temp_v0_22 = temp_v0_21 + 8;
        temp_v0_22->unk0 = 0xE3000A01;
        temp_v0_22->unk4 = 0;
        temp_v0_23 = temp_v0_22 + 8;
        temp_v0_23->unk4 = 0x504240;
        temp_v0_23->unk0 = 0xE200001C;
        temp_v0_24 = temp_v0_23 + 8;
        temp_v0_24->unk0 = 0xFA000000;
        temp_v0_24->unk4 = 0;
        temp_v0_25 = temp_v0_24 + 8;
        temp_v0_25->unk0 = (s32) ((((temp_a1 + 2) & 0x3FF) << 0xE) | 0xF6000000 | ((gScreenHeight & 0x3FF) * 4));
        temp_v0_25->unk4 = (s32) ((temp_a1 & 0x3FF) << 0xE);
        temp_v0_26 = temp_v0_25 + 8;
        temp_v0_26->unk0 = (s32) ((((gScreenWidth - temp_a1) & 0x3FF) << 0xE) | 0xF6000000 | ((gScreenHeight & 0x3FF) * 4));
        temp_v0_27 = temp_v0_26 + 8;
        temp_v0_26->unk4 = (s32) ((((gScreenWidth - temp_a1) - 2) & 0x3FF) << 0xE);
        temp_v0_27->unk0 = 0xE7000000;
        temp_v0_27->unk4 = 0;
        globalCtx->mainCamera.skyboxOffset.x = (bitwise f32) (temp_v0_27 + 8);
    }
}

