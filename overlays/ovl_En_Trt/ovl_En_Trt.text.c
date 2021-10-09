struct _mips2c_stack_EnTrt_BeginInteraction {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_Blink {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_BrowseShelf {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
    /* 0x28 */ char pad_28[0x7];                    /* maybe part of sp27[8]? */
    /* 0x2F */ u8 sp2F;                             /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTrt_BuyItemWithFanfare {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_CanBuy {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_CannotBuy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_ChangeAnim {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTrt_CloseEyes {};            /* size 0x0 */

struct _mips2c_stack_EnTrt_ContinueShopping {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_CursorLeftRight {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ u8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnTrt_DrawCursor {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ GraphicsContext *sp18;               /* inferred */
    /* 0x1C */ char pad_1C[0x1C];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnTrt_DrawStickDirectionPrompt {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnTrt_DrawTextRec {};          /* size 0x0 */

struct _mips2c_stack_EnTrt_EndConversation {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_EndInteraction {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_EyesClosed {};           /* size 0x0 */

struct _mips2c_stack_EnTrt_FaceShopkeeper {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_FacingShopkeeperDialogResult {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_GetCutscenes {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_GetItemChoiceTextId {};  /* size 0x0 */

struct _mips2c_stack_EnTrt_GetItemTextId {};        /* size 0x0 */

struct _mips2c_stack_EnTrt_GetMushroom {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_GiveRedPotionForKoume {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_GivenRedPotionForKoume {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_Goodbye {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_HandleCanBuyItem {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_HasPlayerSelectedItem {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_Hello {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_IdleAwake {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void (*sp20)(EnTrt *);               /* inferred */
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTrt_IdleSleeping {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_InitShop {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_InitShopkeeper {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_ItemGiven {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_LookToShelf {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_LookToShopkeeperFromShelf {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_NodOff {};               /* size 0x0 */

struct _mips2c_stack_EnTrt_OpenEyes {};             /* size 0x0 */

struct _mips2c_stack_EnTrt_OpenEyes2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_OpenEyesThenSetToBlink {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_OpenThenCloseEyes {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_OverrideLimbDraw {};     /* size 0x0 */

struct _mips2c_stack_EnTrt_PayForMushroom {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_PositionSelectedItem {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ char pad_8[0x18];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_PostLimbDraw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_ResetItemPosition {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_ReturnItemToShelf {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_SelectItem {
    /* 0x00 */ char pad_0[0x23];
    /* 0x23 */ u8 sp23;                             /* inferred */
    /* 0x24 */ EnGirlA *sp24;                       /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_SetCursorIndexFromNeutral {}; /* size 0x0 */

struct _mips2c_stack_EnTrt_SetupBuyItemWithFanfare {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTrt_SetupCanBuy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_SetupCannotBuy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_SetupEndInteraction {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_SetupGetMushroomCutscene {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_SetupItemGiven {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_SetupLookToShopkeeperFromShelf {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_SetupStartShopping {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_SetupTalkToShopkeeper {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_SetupTryToGiveRedPotion {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_ShopkeeperGone {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x3];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTrt_SpawnShopItems {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnTrt_StartShopping {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_Surprised {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_TakeItemOffShelf {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_TalkToShopkeeper {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_TestCancelOption {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_TestEndInteraction {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTrt_TestItemSelected {};     /* size 0x0 */

struct _mips2c_stack_EnTrt_TryToGiveRedPotion {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_TryToGiveRedPotionAfterSurprised {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_UnkActorDraw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_UpdateCollider {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ CollisionCheckContext *sp18;         /* inferred */
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTrt_UpdateCursorAnim {};     /* size 0x0 */

struct _mips2c_stack_EnTrt_UpdateCursorPos {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTrt_UpdateHeadPosAndRot {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x40];
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ char pad_6E[0x2];
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0xC];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_EnTrt_UpdateHeadYawAndPitch {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ Actor *sp4C;                         /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnTrt_UpdateItemSelectedProperty {}; /* size 0x0 */

struct _mips2c_stack_EnTrt_UpdateJoystickInputState {}; /* size 0x0 */

struct _mips2c_stack_EnTrt_UpdateStickDirectionPromptAnim {}; /* size 0x0 */

void EnTrt_ChangeAnim(SkelAnime *arg0, ? *arg1, s32 arg2, EnTrt *); /* static */
void EnTrt_CursorLeftRight(GlobalContext *arg0, EnTrt *arg1); /* static */
void EnTrt_DrawCursor(GraphicsContext **arg0, EnTrt *arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5); /* static */
void EnTrt_DrawStickDirectionPrompt(GraphicsContext **arg0, EnTrt *arg1); /* static */
void EnTrt_DrawTextRec(GraphicsContext **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 argA, f32 argB); /* static */
void EnTrt_EndInteraction(GlobalContext *arg0, Actor *arg1, GlobalContext *); /* static */
u16 EnTrt_GetItemChoiceTextId(Actor *arg0);         /* static */
u16 EnTrt_GetItemTextId(EnTrt *arg0, EnTrt *);      /* static */
void EnTrt_GetMushroom(Actor *arg0, GlobalContext *arg1); /* static */
void EnTrt_Goodbye(Actor *arg0, GlobalContext *arg1); /* static */
void EnTrt_HandleCanBuyItem(GlobalContext *arg0, Actor *arg1); /* static */
s32 EnTrt_HasPlayerSelectedItem(GlobalContext *arg0, Actor *arg1, Input *); /* static */
void EnTrt_InitShop(EnTrt *arg0, GlobalContext *arg1); /* static */
void EnTrt_InitShopkeeper(EnTrt *arg0, GlobalContext *arg1); /* static */
s32 EnTrt_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void EnTrt_PositionSelectedItem(EnTrt *arg0);       /* static */
void EnTrt_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 EnTrt_SetCursorIndexFromNeutral(EnTrt *arg0, s32 arg1); /* static */
void EnTrt_SetupBuyItemWithFanfare(GlobalContext *arg0, Actor *arg1); /* static */
void EnTrt_SetupCanBuy(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
void EnTrt_SetupCannotBuy(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
void EnTrt_SetupGetMushroomCutscene(Actor *arg0);   /* static */
void EnTrt_SetupStartShopping(GlobalContext *arg0, EnTrt *arg1, u8 arg2); /* static */
void EnTrt_SetupTryToGiveRedPotion(Actor *arg0, GlobalContext *arg1); /* static */
void EnTrt_ShopkeeperGone(Actor *arg0, GlobalContext *arg1); /* static */
void EnTrt_SpawnShopItems(EnTrt *arg0, GlobalContext *arg1, ? *arg2); /* static */
void EnTrt_TalkToShopkeeper(EnTrt *this, GlobalContext *globalCtx); /* static */
s32 EnTrt_TestCancelOption(EnTrt *arg0, GlobalContext *arg1, Input *arg2); /* static */
s32 EnTrt_TestEndInteraction(Actor *arg0, GlobalContext *arg1, Input *arg2); /* static */
s32 EnTrt_TestItemSelected(GlobalContext *arg0);    /* static */
void EnTrt_UnkActorDraw(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void EnTrt_UpdateCollider(Actor *arg0, GlobalContext *arg1); /* static */
void EnTrt_UpdateCursorAnim(EnTrt *arg0);           /* static */
void EnTrt_UpdateCursorPos(GlobalContext *arg0, EnTrt *arg1); /* static */
void EnTrt_UpdateHeadPosAndRot(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4); /* static */
void EnTrt_UpdateItemSelectedProperty(EnTrt *arg0); /* static */
void EnTrt_UpdateJoystickInputState(GlobalContext *arg0, EnTrt *arg1); /* static */
void EnTrt_UpdateStickDirectionPromptAnim(EnTrt *arg0); /* static */
extern AnimationHeaderCommon D_060030EC;
extern AnimationHeader D_0600FD34;
extern FlexSkeletonHeader D_0600FEF0;
static f32 D_80A8FEF4 = -12.0f;
static f32 sActorScale = 0.008f;
static ? sAnimations;                               /* unable to generate initializer */
static ? sEyeTextures;                              /* unable to generate initializer */
static InitChainEntry sInitChain;                   /* unable to generate initializer */
static f32 sSelectedItemPosition = 6.0f;
static ? sShop;                                     /* unable to generate initializer */

void EnTrt_ChangeAnim(SkelAnime *arg0, ? *arg1, s32 arg2) {
    s16 temp_v0;
    void *temp_s0;
    f32 phi_f0;

    temp_s0 = arg1 + (arg2 * 0x10);
    temp_v0 = temp_s0->unk_A;
    if ((s32) temp_v0 < 0) {
        phi_f0 = (f32) SkelAnime_GetFrameCount(temp_s0->unk_0);
    } else {
        phi_f0 = (f32) temp_v0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk_0, temp_s0->unk_4, (f32) temp_s0->unk_8, phi_f0, (u8) (s32) temp_s0->unk_C, (f32) temp_s0->unk_E);
}

s32 EnTrt_TestItemSelected(GlobalContext *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v1;
    s32 phi_v0;

    if ((arg0->msgCtx.unk12020 == 0x10) || (arg0->msgCtx.unk12020 == 0x11)) {
        return ~(arg0->state.input[0].press.button | 0xFFFF7FFF) == 0;
    }
    temp_v1 = arg0->state.input[0].press.button;
    temp_v0 = ~(temp_v1 | 0xFFFF7FFF) == 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        temp_v0_2 = ~(temp_v1 | ~0x4000) == 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            phi_v0 = ~(temp_v1 | ~8) == 0;
        }
    }
    return phi_v0;
}

void EnTrt_SpawnShopItems(EnTrt *arg0, GlobalContext *arg1, ? *arg2) {
    s16 temp_v0;
    s32 temp_s2;
    ? *phi_s0;
    EnTrt *phi_s1;
    s32 phi_s2;

    phi_s0 = arg2;
    phi_s1 = arg0;
    phi_s2 = 0;
    do {
        temp_v0 = phi_s0->unk_0;
        if ((s32) temp_v0 < 0) {
            phi_s1->items[0] = NULL;
        } else if ((s32) temp_v0 < 0) {
            phi_s1->items[0] = NULL;
        } else {
            phi_s1->items[0] = Actor_Spawn(arg1 + 0x1CA0, arg1, 2, (f32) phi_s0->unk_2, (f32) phi_s0->unk_4, (f32) phi_s0->unk_6, (s16) 0, (s16) 0, (s16) 0, (s16) (s32) temp_v0);
        }
        temp_s2 = phi_s2 + 4;
        phi_s0 += 8;
        phi_s1 += 4;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xC);
}

void EnTrt_UpdateCollider(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    CollisionCheckContext *sp18;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    temp_a1 = arg0 + 0x190;
    sp1C = temp_a1;
    Collider_UpdateCylinder(arg0, temp_a1);
    temp_a1_2 = arg1 + 0x18884;
    sp18 = temp_a1_2;
    CollisionCheck_SetAC(arg1, temp_a1_2, (Collider *) sp1C);
    CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp1C);
}

void EnTrt_UpdateCursorPos(GlobalContext *arg0, EnTrt *arg1) {
    s16 sp2E;
    s16 sp2C;

    func_800B8898(arg0, (arg1 + (arg1->cursorIdx * 4))->unk_340, &sp2E, &sp2C);
    arg1->cursorPos.x = (f32) sp2E + 0.0f;
    arg1->cursorPos.y = (f32) sp2C + 17.0f;
    arg1->cursorPos.z = 1.2f;
}

void EnTrt_SetupGetMushroomCutscene(Actor *arg0) {
    s16 temp_a0;

    if (arg0->unk_334 == 3) {
        temp_a0 = arg0->unk_3E0;
        if (arg0->unk_3E2 != temp_a0) {
            ActorCutscene_Stop(temp_a0);
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            arg0->unk_3E0 = (s16) arg0->unk_3E2;
            ActorCutscene_SetIntentToPlay(arg0->unk_3E0);
            arg0->unk_334 = 1;
        }
    }
    if (arg0->unk_334 == 1) {
        if (ActorCutscene_GetCanPlayNext(arg0->unk_3E0) != 0) {
            ActorCutscene_StartAndSetFlag(arg0->unk_3E0, arg0);
            arg0->unk_334 = 2;
            return;
        }
        ActorCutscene_SetIntentToPlay(arg0->unk_3E0);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

u16 EnTrt_GetItemTextId(EnTrt *arg0) {
    void *temp_v1;

    temp_v1 = (arg0 + (arg0->cursorIdx * 4))->unk_340;
    if ((temp_v1->unk_1C == 2) && ((arg0->flags & 2) == 0)) {
        return 0x880U;
    }
    return temp_v1->unk_116;
}

u16 EnTrt_GetItemChoiceTextId(Actor *arg0) {
    void *temp_v1;

    temp_v1 = (arg0 + (arg0->unk_34C * 4))->unk_340;
    if ((temp_v1->unk_1C == 2) && ((gSaveContext.weekEventReg[53] & 0x10) == 0)) {
        arg0->unk_406 = 0x881;
        return 0x881U;
    }
    return temp_v1->unk_198;
}

void EnTrt_EndInteraction(GlobalContext *arg0, Actor *arg1) {
    void *sp24;

    sp24 = arg0->actorCtx.actorList[2].first;
    if (arg1->unk_334 == 3) {
        ActorCutscene_Stop(arg1->unk_3E0);
        arg1->unk_334 = 0;
    }
    func_800B84D0(arg1, arg0);
    arg0->msgCtx.unk11F22 = 0x43;
    arg0->msgCtx.unk12023 = 4;
    Interface_ChangeAlpha(0x32U);
    arg1->unk_400 = 0;
    arg1->unk_384 = 0;
    arg1->unk_3BC = 0;
    sp24->unk_A70 = (s32) (sp24->unk_A70 & 0xDFFFFFFF);
    arg0->interfaceCtx.unk_222 = 0;
    arg0->interfaceCtx.unk_224 = 0;
    arg1->unk_406 = 0x834;
    arg1->unk_402 = 0x50;
    arg1->unk_42C = (u16) (arg1->unk_42C | 1);
    arg1->unk_332 = 0xA;
    arg1->textId = 0;
    arg1->unk_144 = EnTrt_IdleSleeping;
    arg1->unk_3DC = EnTrt_NodOff;
}

s32 EnTrt_TestEndInteraction(Actor *arg0, GlobalContext *arg1, Input *arg2) {
    s32 phi_v0;

    phi_v0 = 0;
    if (~(arg2->press.button | ~0x4000) == 0) {
        EnTrt_EndInteraction(arg1, arg0, arg1);
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 EnTrt_TestCancelOption(EnTrt *arg0, GlobalContext *arg1, Input *arg2) {
    s32 phi_v0;

    phi_v0 = 0;
    if (~(arg2->press.button | ~0x4000) == 0) {
        arg0->actionFunc = arg0->tmpActionFunc;
        func_80151938(arg1, EnTrt_GetItemTextId() & 0xFFFF);
        phi_v0 = 1;
    }
    return phi_v0;
}

void EnTrt_SetupStartShopping(GlobalContext *arg0, EnTrt *arg1, u8 arg2) {
    func_8011552C(arg0, 0x10);
    if (arg2 == 0) {
        arg1->actionFunc = EnTrt_Hello;
        return;
    }
    EnTrt_StartShopping(arg0, arg1);
}

void EnTrt_StartShopping(GlobalContext *globalCtx, EnTrt *this) {
    func_80151938(globalCtx, 0x83EU);
    func_8011552C(globalCtx, 6);
    this->stickLeftPrompt.isEnabled = 0;
    this->stickRightPrompt.isEnabled = 1;
    this->actionFunc = EnTrt_FaceShopkeeper;
}

void EnTrt_UpdateJoystickInputState(GlobalContext *arg0, EnTrt *arg1) {
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_t7;
    s32 temp_v0_2;
    s8 temp_v0;
    s8 temp_v1;

    temp_a2 = arg1->stickAccumX;
    temp_v0 = arg0->state.input[0].rel.stick_x;
    temp_v1 = arg0->state.input[0].rel.stick_y;
    if (temp_a2 == 0) {
        if (((s32) temp_v0 >= 0x1F) || ((s32) temp_v0 < -0x1E)) {
            arg1->stickAccumX = (s32) temp_v0;
        }
    } else if (((s32) temp_v0 < 0x1F) && ((s32) temp_v0 >= -0x1E)) {
        arg1->stickAccumX = 0;
    } else {
        temp_t7 = temp_a2 + temp_v0;
        if ((temp_a2 * temp_v0) < 0) {
            arg1->stickAccumX = (s32) temp_v0;
        } else {
            arg1->stickAccumX = temp_t7;
            if (temp_t7 >= 0x7D1) {
                arg1->stickAccumX = 0x7D0;
            } else if (temp_t7 < -0x7D0) {
                arg1->stickAccumX = -0x7D0;
            }
        }
    }
    temp_v0_2 = arg1->stickAccumY;
    if (temp_v0_2 == 0) {
        if (((s32) temp_v1 >= 0x1F) || ((s32) temp_v1 < -0x1E)) {
            arg1->stickAccumY = (s32) temp_v1;
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    }
    if (((s32) temp_v1 < 0x1F) && ((s32) temp_v1 >= -0x1E)) {
        arg1->stickAccumY = 0;
        return;
    }
    temp_t1 = temp_v0_2 + temp_v1;
    if ((temp_v0_2 * temp_v1) < 0) {
        arg1->stickAccumY = (s32) temp_v1;
        return;
    }
    arg1->stickAccumY = temp_t1;
    if (temp_t1 >= 0x7D1) {
        arg1->stickAccumY = 0x7D0;
        return;
    }
    if (temp_t1 < -0x7D0) {
        arg1->stickAccumY = -0x7D0;
    }
}

s32 EnTrt_SetCursorIndexFromNeutral(EnTrt *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg1 & 0xFF;
    if ((arg0 + (temp_a1 * 4))->unk_340 != 0) {
        return temp_a1;
    }
    return 0xFF;
}

void EnTrt_Hello(EnTrt *this, GlobalContext *globalCtx) {
    u8 sp27;

    sp27 = func_80152498(&globalCtx->msgCtx);
    if (this->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(this->cutscene, (Actor *) this);
            this->cutsceneState = 3;
        } else {
            ActorCutscene_SetIntentToPlay(this->cutscene);
        }
    }
    if ((sp27 == 5) && (func_80147624(globalCtx) != 0)) {
        play_sound(0x4818U);
        if (EnTrt_TestEndInteraction((Actor *) this, globalCtx, globalCtx->state.input) == 0) {
            EnTrt_StartShopping(globalCtx, this);
        }
    }
}

void EnTrt_GetMushroom(Actor *arg0, GlobalContext *arg1) {
    Actor *sp20;
    Actor *temp_v1;
    u16 temp_v0_2;
    u8 temp_v0;

    temp_v0 = func_80152498(arg1 + 0x4908);
    temp_v1 = arg1->actorCtx.actorList[2].first;
    arg0->unk_3E2 = (s16) arg0->unk_412;
    if (arg0->unk_334 != 2) {
        sp20 = temp_v1;
        EnTrt_SetupGetMushroomCutscene(arg0);
        if (arg0->unk_334 == 2) {
            temp_v1->unk_A70 = (s32) (temp_v1->unk_A70 & 0xDFFFFFFF);
            return;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 5) && (func_80147624(arg1) != 0)) {
        temp_v0_2 = arg0->unk_406;
        if (temp_v0_2 != 0x883) {
            if (temp_v0_2 != 0x888) {
                if (temp_v0_2 != 0x889) {
                    arg0->unk_334 = 3;
                    EnTrt_EndInteraction(arg1, arg0);
                    /* Duplicate return node #15. Try simplifying control flow for better match */
                    return;
                }
                if (arg0->unk_334 == 2) {
                    ActorCutscene_Stop(arg0->unk_3E0);
                    arg0->unk_334 = 0;
                }
                arg1->msgCtx.unk11F22 = 0x43;
                arg1->msgCtx.unk12023 = 4;
                arg0->unk_144 = EnTrt_PayForMushroom;
                return;
            }
            arg0->unk_406 = 0x889U;
            func_801518B0(arg1, 0x889U & 0xFFFF, arg0);
            return;
        }
        arg0->unk_406 = 0x884U;
        func_801518B0(arg1, 0x884U & 0xFFFF, arg0);
        gSaveContext.weekEventReg[53] |= 8;
        func_80123D50(arg1, (Player *) arg1->actorCtx.actorList[2].first, 0x12, 0x15);
    }
}

void EnTrt_PayForMushroom(EnTrt *this, GlobalContext *globalCtx) {
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        func_80123D50(globalCtx, (Player *) globalCtx->actorCtx.actorList[2].first, 0x12, 0x15);
        this->actionFunc = EnTrt_SetupItemGiven;
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 4, 300.0f, 300.0f);
}

void EnTrt_Goodbye(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    arg0 = arg0;
    if ((func_80152498(arg1 + 0x4908) == 5) && (arg0 = arg0, (func_80147624(arg1) != 0))) {
        temp_v0 = arg0->unk_406;
        if (temp_v0 != 0x886) {
            if ((temp_v0 != 0x887) && (temp_v0 != 0x88B)) {
                return;
            }
            EnTrt_EndInteraction(arg1, arg0, (GlobalContext *) arg0);
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return;
        }
        arg0->unk_406 = 0x887U;
        func_80151938(arg1, 0x887U & 0xFFFF);
    }
}

void EnTrt_SetupTryToGiveRedPotion(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t2;

    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        if (arg0->unk_406 == 0x88F) {
            if ((func_80114E90() != 0) || ((gSaveContext.weekEventReg[12] & 0x10) == 0)) {
                if (arg0->unk_334 == 3) {
                    ActorCutscene_Stop(arg0->unk_3E0);
                    arg0->unk_334 = 0;
                }
                arg1->msgCtx.unk11F22 = 0x43;
                arg1->msgCtx.unk12023 = 4;
                arg0->unk_144 = EnTrt_GiveRedPotionForKoume;
                return;
            }
            temp_t2 = arg0->unk_406;
            arg0->unk_406 = 0x88EU;
            arg0->unk_408 = temp_t2;
            gSaveContext.weekEventReg[85] |= 8;
            func_801518B0(arg1, arg0->unk_406, arg0);
            arg0->unk_144 = EnTrt_EndConversation;
            return;
        }
        if ((gSaveContext.weekEventReg[12] & 8) != 0) {
            arg0->unk_406 = 0x83DU;
            EnTrt_SetupStartShopping(arg1, (EnTrt *) arg0, 0U);
            goto block_20;
        }
        if ((gSaveContext.weekEventReg[84] & 0x40) != 0) {
            arg0->unk_406 = 0x83BU;
            if (func_80114F2C(0x13) != 0) {
                EnTrt_SetupStartShopping(arg1, (EnTrt *) arg0, 0U);
            } else {
                arg0->unk_144 = EnTrt_TryToGiveRedPotion;
            }
            goto block_20;
        }
        if ((gSaveContext.weekEventReg[16] & 0x10) != 0) {
            arg0->unk_402 = 0x1E;
            arg0->unk_406 = 0x838U;
            arg0->unk_334 = 2;
            arg0->unk_144 = EnTrt_Surprised;
            return;
        }
        if ((gSaveContext.weekEventReg[17] & 1) != 0) {
            arg0->unk_406 = 0x835U;
            EnTrt_SetupStartShopping(arg1, (EnTrt *) arg0, 0U);
block_20:
        }
        func_801518B0(arg1, arg0->unk_406, arg0);
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void EnTrt_GiveRedPotionForKoume(EnTrt *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_v1;
    u8 temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    sp24 = temp_v1;
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        temp_v0 = gSaveContext.weekEventReg[12];
        if ((temp_v0 & 0x10) == 0) {
            gSaveContext.weekEventReg[12] = temp_v0 | 0x10;
        }
        gSaveContext.weekEventReg[84] |= 0x40;
        temp_v1->unk_A70 = (s32) (temp_v1->unk_A70 & 0xDFFFFFFF);
        this->actionFunc = EnTrt_GivenRedPotionForKoume;
        return;
    }
    if ((gSaveContext.weekEventReg[12] & 0x10) != 0) {
        func_800B8A1C((Actor *) this, globalCtx, 0x5B, 300.0f, 300.0f);
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 0x59, 300.0f, 300.0f);
}

void EnTrt_GivenRedPotionForKoume(EnTrt *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
        if (this->cutsceneState == 0) {
            if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
                ActorCutscene_StartAndSetFlag(this->cutscene, (Actor *) this);
                *(void *)0xA70 = (s32) (*(s32 *)0xA70 | 0x20000000);
                this->actionFunc = EnTrt_ContinueShopping;
                this->cutsceneState = 3;
            } else {
                if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                    ActorCutscene_Stop(0x7C);
                }
                this->cutscene = this->lookToShopkeeperCutscene;
                ActorCutscene_SetIntentToPlay(this->cutscene);
            }
        }
        func_800B85E0((Actor *) this, globalCtx, 400.0f, -1);
        this->actionFunc = EnTrt_ItemGiven;
    }
}

void EnTrt_EndConversation(EnTrt *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 == 5) {
        if (func_80147624(globalCtx) != 0) {
            EnTrt_EndInteraction(globalCtx, (Actor *) this);
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 6) && (func_80147624(globalCtx) != 0)) {
        EnTrt_EndInteraction(globalCtx, (Actor *) this);
    }
}

s32 EnTrt_FacingShopkeeperDialogResult(EnTrt *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    temp_v0 = globalCtx->msgCtx.choiceIndex;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return 0;
        }
        globalCtx = globalCtx;
        func_8019F230();
        EnTrt_EndInteraction(globalCtx, (Actor *) this);
        return 1;
    }
    globalCtx = globalCtx;
    func_8019F208();
    EnTrt_SetupTalkToShopkeeper(globalCtx, this);
    return 1;
}

void EnTrt_FaceShopkeeper(EnTrt *this, GlobalContext *globalCtx) {
    u8 sp27;
    s32 temp_v0;

    sp27 = func_80152498(&globalCtx->msgCtx);
    if (this->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(this->cutscene, (Actor *) this);
            this->cutsceneState = 3;
        } else {
            ActorCutscene_SetIntentToPlay(this->cutscene);
        }
    }
    if (this->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        this->cutscene = this->lookForwardCutscene;
        ActorCutscene_SetIntentToPlay(this->cutscene);
        this->cutsceneState = 1;
        return;
    }
    if (sp27 == 4) {
        func_8011552C(globalCtx, 6);
        if ((EnTrt_TestEndInteraction((Actor *) this, globalCtx, globalCtx->state.input) == 0) && ((func_80147624(globalCtx) == 0) || (EnTrt_FacingShopkeeperDialogResult(this, globalCtx) == 0)) && (this->stickAccumX > 0)) {
            temp_v0 = EnTrt_SetCursorIndexFromNeutral(this, 2);
            if (temp_v0 != 0xFF) {
                this->cursorIdx = temp_v0 & 0xFF;
                this->actionFunc = EnTrt_LookToShelf;
                func_8011552C(globalCtx, 6);
                this->stickRightPrompt.isEnabled = 0;
                play_sound(0x4809U);
            }
        }
    }
}

void EnTrt_LookToShelf(EnTrt *this, GlobalContext *globalCtx) {
    if (this->cutsceneState == 3) {
        ActorCutscene_Stop(this->cutscene);
        this->cutsceneState = 0;
    }
    if (this->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        this->cutscene = this->lookToShelfCutscene;
        ActorCutscene_SetIntentToPlay(this->cutscene);
        this->cutsceneState = 1;
        return;
    }
    if (this->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(this->cutscene, (Actor *) this);
            this->cutsceneState = 3;
            EnTrt_UpdateCursorPos(globalCtx, this);
            this->actionFunc = EnTrt_BrowseShelf;
            func_80151938(globalCtx, EnTrt_GetItemTextId(this) & 0xFFFF);
            return;
        }
        ActorCutscene_SetIntentToPlay(this->cutscene);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void EnTrt_CursorLeftRight(GlobalContext *arg0, EnTrt *arg1) {
    u8 sp1F;
    s32 temp_v1;
    u8 temp_v0;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;
    EnTrt *phi_a1;

    temp_v1 = arg1->stickAccumX;
    temp_v0 = arg1->cursorIdx;
    phi_v0_2 = temp_v0;
    phi_a1 = arg1;
    if (temp_v1 < 0) {
        if (temp_v0 != 2) {
            phi_v0 = (temp_v0 + 1) & 0xFF;
        } else {
            sp1F = temp_v0;
            EnTrt_SetupLookToShopkeeperFromShelf(arg0, arg1);
            phi_v0 = temp_v0;
        }
        phi_v0_3 = phi_v0;
        phi_a1 = arg1;
        if ((arg1 + (phi_v0 * 4))->unk_340 != 0) {
            goto block_10;
        }
    } else if (temp_v1 > 0) {
        if (temp_v0 != 0) {
            phi_v0_2 = (temp_v0 - 1) & 0xFF;
        }
        phi_v0_3 = phi_v0_2;
        if (arg1->items[phi_v0_2] != 0) {
block_10:
            phi_a1->cursorIdx = phi_v0_3;
        }
    }
}

s32 EnTrt_HasPlayerSelectedItem(GlobalContext *arg0, Actor *arg1) {
    void *sp24;

    sp24 = (arg1 + (arg1->unk_34C * 4))->unk_340;
    if (EnTrt_TestEndInteraction(arg1, arg0) != 0) {
        return 1;
    }
    if (EnTrt_TestItemSelected(arg0) != 0) {
        if ((sp24->unk_1C != 2) || ((arg1->unk_42C & 2) != 0)) {
            arg1->unk_148 = arg1->unk_144;
            func_80151938(arg0, EnTrt_GetItemChoiceTextId(arg1) & 0xFFFF);
            play_sound(0x4808U);
            arg1->unk_384 = 0;
            arg1->unk_3BC = 0;
            arg1->unk_400 = 0;
            arg1->unk_144 = EnTrt_SelectItem;
            return 1;
        }
        play_sound(0x4806U);
        return 1;
    }
    return 0;
}

void EnTrt_BrowseShelf(EnTrt *this, GlobalContext *globalCtx) {
    u8 sp2F;
    u8 sp27;
    s16 temp_v0;

    sp2F = func_80152498(&globalCtx->msgCtx);
    sp27 = this->cursorIdx;
    if (EnTrt_ReturnItemToShelf(this) == 0) {
        this->delayTimer = 3;
        return;
    }
    temp_v0 = this->delayTimer;
    if (temp_v0 != 0) {
        this->delayTimer = temp_v0 - 1;
        return;
    }
    this->drawCursor = 0xFF;
    this->stickLeftPrompt.isEnabled = 1;
    EnTrt_UpdateCursorPos(globalCtx, this);
    if (sp2F == 5) {
        func_8011552C(globalCtx, 6);
        if (EnTrt_HasPlayerSelectedItem(globalCtx, (Actor *) this, globalCtx->state.input) == 0) {
            EnTrt_CursorLeftRight(globalCtx, this);
            if (sp27 != this->cursorIdx) {
                func_80151938(globalCtx, EnTrt_GetItemTextId(this) & 0xFFFF);
                play_sound(0x4809U);
            }
        }
    }
}

void EnTrt_SetupBuyItemWithFanfare(GlobalContext *arg0, Actor *arg1) {
    void *sp2C;
    GlobalContext *temp_a1;
    void *temp_v0;

    temp_a1 = arg0;
    temp_v0 = temp_a1->actorCtx.actorList[2].first;
    arg0 = temp_a1;
    sp2C = temp_v0;
    func_800B8A1C(arg1, temp_a1, (arg1 + (arg1->unk_34C * 4))->unk_340->unk_19C, 300.0f, 300.0f);
    arg0->msgCtx.unk11F22 = 0x43;
    arg0->msgCtx.unk12023 = 4;
    temp_v0->unk_A70 = (s32) (temp_v0->unk_A70 & 0xDFFFFFFF);
    Interface_ChangeAlpha(0x32U);
    arg1->unk_400 = 0;
    arg1->unk_144 = EnTrt_BuyItemWithFanfare;
}

void EnTrt_SetupCannotBuy(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    func_80151938(arg0, arg2 & 0xFFFF & 0xFFFF);
    arg1->unk_144 = EnTrt_CannotBuy;
}

void EnTrt_SetupCanBuy(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    func_80151938(arg0, arg2 & 0xFFFF & 0xFFFF);
    arg1->unk_144 = EnTrt_CanBuy;
}

void EnTrt_HandleCanBuyItem(GlobalContext *arg0, Actor *arg1) {
    u32 temp_v0;
    void *temp_a1;
    void *temp_s1;

    temp_s1 = (arg1 + (arg1->unk_34C * 4))->unk_340;
    temp_v0 = temp_s1->unk_1B4(arg0, temp_s1);
    switch (temp_v0) {
    case 0:
        if (arg1->unk_334 == 3) {
            ActorCutscene_Stop(arg1->unk_3E0);
            arg1->unk_334 = 0;
        }
        func_8019F208();
        temp_a1 = (arg1 + (arg1->unk_34C * 4))->unk_340;
        temp_a1->unk_1BC(arg0, temp_a1);
        EnTrt_SetupBuyItemWithFanfare(arg0, arg1);
        arg1->unk_400 = 0;
        arg1->unk_3C0 = 0.0f;
        temp_s1->unk_1A4(arg0, temp_s1);
        return;
    case 1:
        func_8019F208();
        temp_s1->unk_1B8(arg0, temp_s1);
        EnTrt_SetupCanBuy(arg0, arg1, 0x848);
        arg1->unk_400 = 0;
        arg1->unk_3C0 = 0.0f;
        temp_s1->unk_1A4(arg0, temp_s1);
        return;
    case 2:
        play_sound(0x4806U);
        EnTrt_SetupCannotBuy(arg0, arg1, 0x641);
        return;
    case 3:
        play_sound(0x4806U);
        EnTrt_SetupCannotBuy(arg0, arg1, 0x846);
        return;
    case 4:
        play_sound(0x4806U);
        EnTrt_SetupCannotBuy(arg0, arg1, 0x847);
        return;
    case 5:
        play_sound(0x4806U);
        EnTrt_SetupCannotBuy(arg0, arg1, 0x643);
        /* fallthrough */
    default:
        return;
    }
}

void EnTrt_SelectItem(EnTrt *this, GlobalContext *globalCtx) {
    EnGirlA *sp24;
    u8 sp23;
    u8 temp_v0;

    sp24 = this->items[this->cursorIdx];
    sp23 = func_80152498(&globalCtx->msgCtx);
    if (EnTrt_TakeItemOffShelf(this) != 0) {
        if (sp23 == 4) {
            func_8011552C(globalCtx, 6);
            if ((EnTrt_TestCancelOption(this, globalCtx, globalCtx->state.input) == 0) && (func_80147624(globalCtx) != 0)) {
                temp_v0 = globalCtx->msgCtx.choiceIndex;
                if (temp_v0 != 0) {
                    if (temp_v0 != 1) {
                        return;
                    }
                    func_8019F230();
                    this->actionFunc = this->tmpActionFunc;
                    func_80151938(globalCtx, EnTrt_GetItemTextId(this) & 0xFFFF);
                    return;
                }
                EnTrt_HandleCanBuyItem(globalCtx, (Actor *) this);
                return;
            }
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        if ((sp23 == 5) && (func_80147624(globalCtx) != 0)) {
            if (func_80114E90() == 0) {
                play_sound(0x4806U);
                EnTrt_SetupCannotBuy(globalCtx, (Actor *) this, 0x846);
                return;
            }
            if (this->cutsceneState == 3) {
                ActorCutscene_Stop(this->cutscene);
                this->cutsceneState = 0;
            }
            EnTrt_SetupBuyItemWithFanfare(globalCtx, (Actor *) this);
            this->drawCursor = 0;
            this->shopItemSelectedTween = 0.0f;
            sp24->boughtFunc(globalCtx, sp24);
            gSaveContext.weekEventReg[53] |= 0x10;
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}

void EnTrt_IdleSleeping(EnTrt *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v1;
    EnTrt *temp_a0;
    EnTrt *temp_a0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v1_2;
    s16 temp_v1_3;
    u8 temp_v0;
    Actor *phi_v1;
    EnTrt *phi_a3;
    s16 phi_v0;
    Actor *phi_a3_2;
    s16 phi_v0_2;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (((gSaveContext.weekEventReg[85] & 8) != 0) && ((gSaveContext.weekEventReg[84] & 0x40) == 0)) {
        this->textId = 0x88F;
    } else if ((this->flags & 4) == 0) {
        this->textId = 0x834;
    } else {
        this->textId = 0x83E;
    }
    if ((gSaveContext.weekEventReg[53] & 8) == 0) {
        this->talkOptionTextId = 0x845;
    } else if ((this->flags & 2) != 0) {
        this->talkOptionTextId = 0x882;
    } else {
        this->talkOptionTextId = 0x885;
    }
    this->tmpTextId = this->textId;
    temp_v0 = temp_v1->unk_14B;
    if ((temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3)) {
        this->textId = 0x850;
    }
    sp1C = temp_v1;
    this = this;
    if (Player_GetMask(globalCtx) == 0x13) {
        this->textId = 0x890;
    }
    temp_a0 = this;
    sp1C = temp_v1;
    this = this;
    phi_v1 = temp_v1;
    phi_a3 = this;
    if (func_800B84D0((Actor *) temp_a0, globalCtx) != 0) {
        if (temp_v1->unk_14B == 4) {
            this->flags |= 4;
        }
        if (this->cutsceneState == 0) {
            sp1C = temp_v1;
            this = this;
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                sp1C = temp_v1;
                this = this;
                ActorCutscene_Stop(0x7C);
            }
            this->cutscene = this->lookForwardCutscene;
            this = this;
            sp1C = globalCtx->actorCtx.actorList[2].first;
            ActorCutscene_SetIntentToPlay(this->cutscene);
            this->cutsceneState = 1;
            phi_v1 = globalCtx->actorCtx.actorList[2].first;
        }
        phi_v1->unk_A70 = (s32) (phi_v1->unk_A70 | 0x20000000);
        this->timer = 0x2D;
        this->actionFunc = EnTrt_BeginInteraction;
        phi_a3 = this;
    } else {
        temp_f0 = temp_v1->world.pos.x;
        if ((temp_f0 >= -50.0f) && (temp_f0 <= -25.0f)) {
            temp_f0_2 = temp_v1->world.pos.z;
            if (temp_f0_2 >= -19.0f) {
                temp_a0_2 = this;
                if (temp_f0_2 <= 30.0f) {
                    this = this;
                    func_800B8614((Actor *) temp_a0_2, globalCtx, 200.0f);
                    phi_a3 = this;
                }
            }
        }
    }
    temp_v1_2 = phi_a3->timer;
    phi_a3_2 = (Actor *) phi_a3;
    if (temp_v1_2 == 0) {
        phi_v0 = 0;
    } else {
        phi_a3->timer = temp_v1_2 - 1;
        phi_v0 = phi_a3->timer;
    }
    if (phi_v0 == 0) {
        phi_a3->timer = 0x28;
        this = phi_a3;
        EnTrt_ChangeAnim(phi_a3 + 0x14C, &sAnimations, 1, phi_a3);
        this->animationIdx = 1;
        this->actionFunc = EnTrt_IdleAwake;
        this->blinkFunc = EnTrt_OpenThenCloseEyes;
        phi_a3_2 = (Actor *) this;
    }
    temp_v1_3 = phi_a3_2->unk_332;
    if (temp_v1_3 == 0) {
        phi_v0_2 = 0;
    } else {
        phi_a3_2->unk_332 = (s16) (temp_v1_3 - 1);
        phi_v0_2 = phi_a3_2->unk_332;
    }
    if (phi_v0_2 == 0) {
        func_800B9010(phi_a3_2, 0x31FFU);
    }
}

void EnTrt_IdleAwake(EnTrt *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    SkelAnime *sp24;
    void (*sp20)(EnTrt *);
    Actor *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0_2;
    u8 temp_v0;
    Actor *phi_v1;
    s16 phi_v1_2;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    this->flags &= 0xFFFE;
    temp_v0 = temp_v1->unk_14B;
    if ((temp_v0 == 4) || (temp_v0 == 0)) {
        sp2C = temp_v1;
        if (Player_GetMask(globalCtx) == 0x13) {
            this->textId = 0x890;
        } else {
            this->textId = this->tmpTextId;
        }
    } else {
        this->textId = 0x850;
    }
    sp2C = globalCtx->actorCtx.actorList[2].first;
    phi_v1 = globalCtx->actorCtx.actorList[2].first;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        if (this->cutsceneState == 0) {
            sp2C = globalCtx->actorCtx.actorList[2].first;
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                sp2C = globalCtx->actorCtx.actorList[2].first;
                ActorCutscene_Stop(0x7C);
            }
            this->cutscene = this->lookForwardCutscene;
            sp2C = globalCtx->actorCtx.actorList[2].first;
            ActorCutscene_SetIntentToPlay(this->cutscene);
            this->cutsceneState = 1;
            phi_v1 = globalCtx->actorCtx.actorList[2].first;
        }
        phi_v1->unk_A70 = (s32) (phi_v1->unk_A70 | 0x20000000);
        if (phi_v1->unk_14B == 4) {
            this->flags |= 4;
        }
        EnTrt_ChangeAnim(&this->skelAnime, &sAnimations, 2);
        this->blinkFunc = EnTrt_EyesClosed;
        this->timer = 0x2D;
        this->actionFunc = EnTrt_BeginInteraction;
    } else {
        temp_f0 = globalCtx->actorCtx.actorList[2].first->world.pos.x;
        if ((temp_f0 >= -50.0f) && (temp_f0 <= -25.0f)) {
            temp_f0_2 = globalCtx->actorCtx.actorList[2].first->world.pos.z;
            if ((temp_f0_2 >= -19.0f) && (temp_f0_2 <= 30.0f)) {
                func_800B8614((Actor *) this, globalCtx, 200.0f);
            }
        }
    }
    temp_v0_2 = this->timer;
    if (temp_v0_2 == 0) {
        phi_v1_2 = 0;
    } else {
        this->timer = temp_v0_2 - 1;
        phi_v1_2 = this->timer;
    }
    if (phi_v1_2 == 0) {
        sp20 = EnTrt_EyesClosed;
        sp24 = &this->skelAnime;
        this->timer = Rand_S16Offset(0x96, 0x64);
        EnTrt_ChangeAnim(sp24, &sAnimations, 2);
        this->animationIdx = 2;
        this->sleepSoundTimer = 0xA;
        this->actor.textId = 0;
        this->actionFunc = EnTrt_IdleSleeping;
        this->blinkFunc = sp20;
    }
}

void EnTrt_BeginInteraction(EnTrt *this, GlobalContext *globalCtx) {
    s16 sp26;
    s16 temp_v1;
    s16 temp_v1_2;
    u16 temp_v0;
    s16 phi_v0;

    sp26 = (s16) (s32) (this->skelAnime.animCurrentFrame / this->skelAnime.animPlaybackSpeed);
    temp_v1 = this->cutsceneState;
    if (temp_v1 == 1) {
        if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(this->cutscene, (Actor *) this);
            this->cutsceneState = 2;
            return;
        }
        ActorCutscene_SetIntentToPlay(this->cutscene);
        return;
    }
    if (temp_v1 == 2) {
        if (this->animationIdx != 5) {
            if (sp26 == (s16) (SkelAnime_GetFrameCount(&D_060030EC) / (s32) (s16) (s32) this->skelAnime.animPlaybackSpeed)) {
                EnTrt_ChangeAnim(&this->skelAnime, &sAnimations, 3);
                this->animationIdx = 3;
                this->blinkFunc = EnTrt_OpenEyesThenSetToBlink;
                this->timer = 0xA;
                this->cutsceneState = 3;
                Audio_PlayActorSound2((Actor *) this, 0x3A00U);
                return;
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return;
        }
        this->blinkFunc = EnTrt_OpenEyesThenSetToBlink;
        this->timer = 0xA;
        this->cutsceneState = 3;
        return;
    }
    temp_v1_2 = this->timer;
    if (temp_v1_2 == 0) {
        phi_v0 = 0;
    } else {
        this->timer = temp_v1_2 - 1;
        phi_v0 = this->timer;
    }
    if (phi_v0 == 0) {
        this->timer = Rand_S16Offset(0x28, 0x14);
        EnTrt_ChangeAnim(&this->skelAnime, &sAnimations, 5);
        func_801518B0(globalCtx, this->textId, (Actor *) this);
        temp_v0 = this->textId;
        this->animationIdx = 5;
        if (temp_v0 != 0x834) {
            if (temp_v0 != 0x83E) {
                if (temp_v0 != 0x850) {
                    if (temp_v0 != 0x88F) {
                        if (temp_v0 != 0x890) {
                            return;
                        }
                        goto block_26;
                    }
                    this->actionFunc = (void (*)(EnTrt *, GlobalContext *)) EnTrt_SetupTryToGiveRedPotion;
                    /* Duplicate return node #28. Try simplifying control flow for better match */
                    return;
                }
block_26:
                this->actionFunc = EnTrt_SetupEndInteraction;
                return;
            }
            func_8011552C(globalCtx, 6);
            this->stickLeftPrompt.isEnabled = 0;
            this->stickRightPrompt.isEnabled = 1;
            this->actionFunc = EnTrt_FaceShopkeeper;
            return;
        }
        if (((gSaveContext.weekEventReg[12] & 8) == 0) && ((gSaveContext.weekEventReg[84] & 0x40) == 0) && ((gSaveContext.weekEventReg[16] & 0x10) == 0) && ((gSaveContext.weekEventReg[17] & 1) == 0)) {
            func_8011552C(globalCtx, 6);
            this->stickLeftPrompt.isEnabled = 0;
            this->stickRightPrompt.isEnabled = 1;
            this->actionFunc = EnTrt_Hello;
            return;
        }
        this->actionFunc = (void (*)(EnTrt *, GlobalContext *)) EnTrt_SetupTryToGiveRedPotion;
    }
}

void EnTrt_Surprised(EnTrt *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_v0 = this->cutsceneState;
    if (temp_v0 == 1) {
        if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(this->cutscene, (Actor *) this);
            this->cutsceneState = 2;
            return;
        }
        ActorCutscene_SetIntentToPlay(this->cutscene);
        return;
    }
    if (temp_v0 == 2) {
        temp_v0_2 = this->timer;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            this->timer = temp_v0_2 - 1;
            phi_v1 = this->timer;
        }
        if (phi_v1 == 0) {
            EnTrt_ChangeAnim(&this->skelAnime, &sAnimations, 4);
            this->animationIdx = 4;
            this->blinkFunc = EnTrt_OpenEyes2;
            Audio_PlayActorSound2((Actor *) this, 0x39FBU);
            this->timer = 0x1E;
            this->cutsceneState = 3;
            return;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return;
    }
    temp_v0_3 = this->timer;
    if (temp_v0_3 == 0) {
        phi_v1_2 = 0;
    } else {
        this->timer = temp_v0_3 - 1;
        phi_v1_2 = this->timer;
    }
    if (phi_v1_2 == 0) {
        this->timer = Rand_S16Offset(0x28, 0x14);
        EnTrt_ChangeAnim(&this->skelAnime, &sAnimations, 5);
        func_801518B0(globalCtx, this->textId, (Actor *) this);
        this->animationIdx = 5;
        this->actionFunc = EnTrt_TryToGiveRedPotionAfterSurprised;
    }
}

void EnTrt_TryToGiveRedPotionAfterSurprised(EnTrt *this, GlobalContext *globalCtx) {
    u16 temp_t1;

    this->blinkFunc = EnTrt_Blink;
    if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
        if ((func_80114E90() != 0) || ((gSaveContext.weekEventReg[12] & 0x10) == 0)) {
            if (this->cutsceneState == 3) {
                ActorCutscene_Stop(this->cutscene);
                this->cutsceneState = 0;
            }
            this->actionFunc = EnTrt_GiveRedPotionForKoume;
            return;
        }
        temp_t1 = this->textId;
        this->textId = 0x88E;
        this->tmpTextId = temp_t1;
        gSaveContext.weekEventReg[85] |= 8;
        func_801518B0(globalCtx, this->textId, (Actor *) this);
        this->actionFunc = EnTrt_EndConversation;
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void EnTrt_TryToGiveRedPotion(EnTrt *this, GlobalContext *globalCtx) {
    u16 temp_t1;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        if (this->textId == 0x83C) {
            if (func_80114E90() != 0) {
                if (this->cutsceneState == 3) {
                    ActorCutscene_Stop(this->cutscene);
                    this->cutsceneState = 0;
                }
                globalCtx->msgCtx.unk11F22 = 0x43;
                globalCtx->msgCtx.unk12023 = 4;
                this->actionFunc = EnTrt_GiveRedPotionForKoume;
                return;
            }
            temp_t1 = this->textId;
            this->textId = 0x88E;
            this->tmpTextId = temp_t1;
            gSaveContext.weekEventReg[85] |= 8;
            func_801518B0(globalCtx, this->textId, (Actor *) this);
            this->actionFunc = EnTrt_EndConversation;
            return;
        }
        this->textId = 0x83C;
        func_801518B0(globalCtx, 0x83CU & 0xFFFF, (Actor *) this);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void EnTrt_ItemGiven(EnTrt *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_v1;
    u16 temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (this->cutsceneState == 0) {
        sp24 = temp_v1;
        if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
            sp24 = temp_v1;
            ActorCutscene_StartAndSetFlag(this->cutscene, (Actor *) this);
            temp_v1->unk_A70 = (s32) (temp_v1->unk_A70 | 0x20000000);
            this->actionFunc = EnTrt_ContinueShopping;
            this->cutsceneState = 3;
        } else {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            this->cutscene = this->lookToShopkeeperCutscene;
            ActorCutscene_SetIntentToPlay(this->cutscene);
        }
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        temp_v0 = this->textId;
        if ((temp_v0 != 0x838) && (temp_v0 != 0x83C)) {
            if (temp_v0 != 0x881) {
                if (temp_v0 != 0x889) {
                    if ((temp_v0 != 0x88E) && (temp_v0 != 0x88F)) {
                        this->textId = 0x849;
                    } else {
                        goto block_16;
                    }
                } else {
                    this->textId = 0x88A;
                }
            } else {
                this->textId = 0x88C;
            }
        } else {
block_16:
            this->textId = 0x83A;
        }
        func_80151938(globalCtx, this->textId);
        return;
    }
    func_800B85E0((Actor *) this, globalCtx, 400.0f, -1);
}

void EnTrt_SetupEndInteraction(EnTrt *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        EnTrt_EndInteraction(globalCtx, (Actor *) this);
    }
}

void EnTrt_ShopkeeperGone(Actor *arg0, GlobalContext *arg1) {
    u8 sp27;
    void *sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    void *temp_v1;

    sp27 = func_80152498(arg1 + 0x4908);
    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp20 = temp_v1;
    if (func_800B84D0(arg0, arg1) != 0) {
        func_801518B0(arg1, arg0->unk_406, arg0);
    } else {
        temp_f0 = temp_v1->world.pos.x;
        if ((temp_f0 >= -50.0f) && (temp_f0 <= 50.0f)) {
            temp_f0_2 = temp_v1->world.pos.z;
            if ((temp_f0_2 >= -19.0f) && (temp_f0_2 <= 30.0f)) {
                func_800B8614(arg0, arg1, 200.0f);
            }
        }
    }
    if ((sp27 == 6) && (func_80147624(arg1) != 0)) {
        if ((gSaveContext.weekEventReg[20] & 2) != 0) {
            arg1->nextEntranceIndex = 0xC50;
        } else {
            arg1->nextEntranceIndex = 0x8450;
        }
        arg1->unk_1887F = 0x40;
        gSaveContext.nextTransition = 0x40;
        arg1->sceneLoadFlag = 0x14;
    }
}

void EnTrt_CannotBuy(EnTrt *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        this->actionFunc = this->tmpActionFunc;
        func_80151938(globalCtx, EnTrt_GetItemTextId(this, this) & 0xFFFF);
    }
}

void EnTrt_CanBuy(EnTrt *this, GlobalContext *globalCtx) {
    EnGirlA *temp_a1;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        this->shopItemSelectedTween = 0.0f;
        EnTrt_ResetItemPosition(this);
        temp_a1 = this->items[this->cursorIdx];
        temp_a1->restockFunc(globalCtx, temp_a1);
        this->actionFunc = this->tmpActionFunc;
        func_80151938(globalCtx, EnTrt_GetItemTextId(this) & 0xFFFF);
    }
}

void EnTrt_BuyItemWithFanfare(EnTrt *this, GlobalContext *globalCtx) {
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->actionFunc = EnTrt_SetupItemGiven;
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, this->items[this->cursorIdx]->getItemId, 300.0f, 300.0f);
}

void EnTrt_SetupItemGiven(EnTrt *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
        this->actionFunc = EnTrt_ItemGiven;
        if (this->cutsceneState == 0) {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            this->cutscene = this->lookToShopkeeperCutscene;
            ActorCutscene_SetIntentToPlay(this->cutscene);
        }
        func_800B85E0((Actor *) this, globalCtx, 400.0f, -1);
    }
}

void EnTrt_ContinueShopping(EnTrt *this, GlobalContext *globalCtx) {
    Actor *sp20;
    EnGirlA *temp_a1;
    EnGirlA *temp_a1_2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    temp_v1 = temp_v0;
    sp20 = globalCtx->actorCtx.actorList[2].first;
    if (temp_v0 == 4) {
        func_8011552C(globalCtx, 6);
        if ((func_80147624(globalCtx) != 0) && (EnTrt_ResetItemPosition(this), temp_a1 = this->items[this->cursorIdx], temp_a1->restockFunc(globalCtx, temp_a1), (EnTrt_TestEndInteraction((Actor *) this, globalCtx, globalCtx->state.input) == 0))) {
            temp_v0_2 = globalCtx->msgCtx.choiceIndex;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 1) {

                }
                func_8019F230();
                EnTrt_EndInteraction(globalCtx, (Actor *) this);
                return;
            }
            func_8019F208();
            sp20->shape.rot.y += 0x8000;
            sp20->unk_A70 = (s32) (sp20->unk_A70 | 0x20000000);
            func_801518B0(globalCtx, this->textId, (Actor *) this);
            EnTrt_SetupStartShopping(globalCtx, this, 1U);
            func_800B85E0((Actor *) this, globalCtx, 400.0f, -1);
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v1 == 5) && (func_80147624(globalCtx) != 0)) {
        EnTrt_ResetItemPosition(this);
        temp_a1_2 = this->items[this->cursorIdx];
        temp_a1_2->restockFunc(globalCtx, temp_a1_2);
        EnTrt_EndInteraction(globalCtx, (Actor *) this);
    }
}

void EnTrt_PositionSelectedItem(EnTrt *arg0) {
    f32 sp4;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    u8 temp_v0;
    void *temp_a1;
    void *temp_v1;

    temp_v0 = arg0->cursorIdx;
    temp_v1 = (temp_v0 * 8) + &sShop;
    temp_f12 = arg0->shopItemSelectedTween;
    temp_f2 = (f32) temp_v1->unk_2;
    temp_f16 = (f32) temp_v1->unk_4;
    temp_a1 = (arg0 + (temp_v0 * 4))->unk_340;
    sp4 = (f32) temp_v1->unk_6;
    temp_a1->unk_24 = (f32) (temp_f2 + ((sSelectedItemPosition - temp_f2) * temp_f12));
    temp_a1->unk_28 = (f32) (temp_f16 + ((D_80A8FEF4 - temp_f16) * temp_f12));
    temp_a1->unk_2C = (f32) (sp4 + ((D_80A8FEF4 - sp4) * temp_f12));
}

void EnTrt_ResetItemPosition(EnTrt *this) {
    this->shopItemSelectedTween = 0.0f;
    EnTrt_PositionSelectedItem();
}

s32 EnTrt_TakeItemOffShelf(EnTrt *this) {
    s32 phi_v0;

    Math_ApproachF(&this->shopItemSelectedTween, 1.0f, 1.0f, 0.15f);
    if (this->shopItemSelectedTween >= 0.85f) {
        this->shopItemSelectedTween = 1.0f;
    }
    EnTrt_PositionSelectedItem(this);
    phi_v0 = 0;
    if (this->shopItemSelectedTween == 1.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 EnTrt_ReturnItemToShelf(EnTrt *this) {
    s32 phi_v0;

    Math_ApproachF(&this->shopItemSelectedTween, 0.0f, 1.0f, 0.15f);
    if (this->shopItemSelectedTween <= 0.15f) {
        this->shopItemSelectedTween = 0.0f;
    }
    EnTrt_PositionSelectedItem(this);
    phi_v0 = 0;
    if (this->shopItemSelectedTween == 0.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void EnTrt_UpdateItemSelectedProperty(EnTrt *arg0) {
    s32 temp_a2;
    s32 temp_v1;
    void *temp_a1;
    void **phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x340;
    phi_v1 = 0;
    do {
        temp_a1 = *phi_v0;
        if (temp_a1 != 0) {
            temp_a2 = arg0->actionFunc;
            if ((EnTrt_SelectItem != temp_a2) && (EnTrt_CannotBuy != temp_a2) && (arg0->drawCursor == 0)) {
                goto block_8;
            }
            if (phi_v1 == arg0->cursorIdx) {
                temp_a1->unk_1AC = 1;
            } else {
block_8:
                temp_a1->unk_1AC = 0;
            }
        }
        temp_v1 = phi_v1 + 1;
        phi_v0 += 4;
        phi_v1 = temp_v1;
    } while (temp_v1 != 3);
}

void EnTrt_UpdateCursorAnim(EnTrt *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s32 temp_f8;
    s32 temp_v1;
    f32 phi_f0;

    temp_f0 = arg0->cursorAnimTween;
    if (arg0->cursorAnimState == 0) {
        temp_f0_2 = temp_f0 + 0.05f;
        phi_f0 = temp_f0_2;
        if (temp_f0_2 >= 1.0f) {
            arg0->cursorAnimState = 1;
            phi_f0 = 1.0f;
        }
    } else {
        temp_f0_3 = temp_f0 - 0.05f;
        phi_f0 = temp_f0_3;
        if (temp_f0_3 <= 0.0f) {
            arg0->cursorAnimState = 0;
            phi_f0 = 0.0f;
        }
    }
    temp_f8 = (s32) 0.0f;
    arg0->cursorAnimTween = phi_f0;
    temp_v1 = (0xFF - temp_f8) & 0xFF;
    arg0->cursorColor.r = -temp_f8 & 0xFF;
    arg0->cursorColor.b = temp_v1;
    arg0->cursorColor.a = temp_v1;
    arg0->cursorColor.g = (0x50 - (s32) (80.0f * phi_f0)) & 0xFF;
}

void EnTrt_UpdateStickDirectionPromptAnim(EnTrt *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_f18;
    s32 temp_v1;
    f32 phi_f2;
    f32 phi_f0;

    temp_f2 = arg0->arrowAnimTween;
    if (arg0->arrowAnimState == 0) {
        temp_f2_2 = temp_f2 + 0.05f;
        phi_f2 = temp_f2_2;
        if (temp_f2_2 > 1.0f) {
            arg0->arrowAnimState = 1;
            phi_f2 = 1.0f;
        }
    } else {
        temp_f2_3 = temp_f2 - 0.05f;
        phi_f2 = temp_f2_3;
        if (temp_f2_3 < 0.0f) {
            arg0->arrowAnimState = 0;
            phi_f2 = 0.0f;
        }
    }
    arg0->arrowAnimTween = phi_f2;
    if (arg0->stickAnimState == 0) {
        temp_f0 = arg0->stickAnimTween + 0.1f;
        phi_f0 = temp_f0;
        if (temp_f0 > 1.0f) {
            arg0->stickAnimState = 1;
            phi_f0 = 1.0f;
        }
    } else {
        arg0->stickAnimState = 0;
        phi_f0 = 0.0f;
    }
    temp_f18 = (s32) (155.0f * phi_f2);
    arg0->stickRightPrompt.arrowTexX = 290.0f;
    temp_f2_4 = 8.0f * phi_f0;
    arg0->stickLeftPrompt.arrowColor.r = (0xFF - temp_f18) & 0xFF;
    temp_v1 = (0xFF - temp_f18) & 0xFF;
    temp_a1 = -(s32) (-100.0f * phi_f2) & 0xFF;
    temp_a2 = (0xC8 - (s32) (50.0f * phi_f2)) & 0xFF;
    arg0->stickAnimTween = phi_f0;
    arg0->stickLeftPrompt.arrowColor.g = temp_v1;
    arg0->stickLeftPrompt.arrowColor.b = temp_a1;
    arg0->stickLeftPrompt.arrowColor.a = temp_a2;
    arg0->stickRightPrompt.arrowColor.r = temp_v1;
    arg0->stickRightPrompt.arrowColor.g = temp_v1;
    arg0->stickRightPrompt.arrowColor.b = temp_a1;
    arg0->stickRightPrompt.arrowColor.a = temp_a2;
    arg0->stickRightPrompt.stickTexX = 274.0f + temp_f2_4;
    arg0->stickLeftPrompt.stickTexX = 49.0f - temp_f2_4;
    arg0->stickRightPrompt.arrowTexY = 91.0f;
    arg0->stickLeftPrompt.arrowTexY = 91.0f;
    arg0->stickRightPrompt.stickTexY = 95.0f;
    arg0->stickLeftPrompt.stickTexY = 95.0f;
    arg0->stickLeftPrompt.arrowTexX = 33.0f;
}

void EnTrt_OpenEyes(EnTrt *this) {
    s16 temp_v0;

    temp_v0 = this->eyeTextureIdx;
    if ((s32) temp_v0 <= 0) {
        this->eyeTextureIdx = 0;
        return;
    }
    this->eyeTextureIdx = temp_v0 - 1;
}

void EnTrt_CloseEyes(EnTrt *this) {
    s16 temp_v0;

    temp_v0 = this->eyeTextureIdx;
    if ((s32) temp_v0 >= 2) {
        this->eyeTextureIdx = 2;
        return;
    }
    this->eyeTextureIdx = temp_v0 + 1;
}

void EnTrt_Blink(EnTrt *this) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = this->blinkTimer - 1;
    if (temp_v0 != 0) {
        this->blinkTimer = temp_v0;
        return;
    }
    temp_v0_2 = this->eyeTextureIdx + 1;
    if ((s32) temp_v0_2 >= 3) {
        this->eyeTextureIdx = 0;
        this->blinkTimer = (s32) (Rand_ZeroOne() * 60.0f) + 0x14;
        return;
    }
    this->eyeTextureIdx = temp_v0_2;
    this->blinkTimer = 1;
}

void EnTrt_NodOff(EnTrt *this) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = this->blinkTimer - 1;
    if (temp_v0 != 0) {
        this->blinkTimer = temp_v0;
        return;
    }
    temp_v0_2 = this->eyeTextureIdx + 1;
    if ((s32) temp_v0_2 >= 3) {
        this->eyeTextureIdx = 1;
        this->blinkTimer = 0x14;
        return;
    }
    this->eyeTextureIdx = temp_v0_2;
    this->blinkTimer = 3;
}

void EnTrt_OpenThenCloseEyes(EnTrt *this) {
    f32 temp_f0;

    temp_f0 = this->skelAnime.animCurrentFrame;
    if (temp_f0 >= 40.0f) {
        EnTrt_CloseEyes(this);
        return;
    }
    if (temp_f0 >= 35.0f) {
        this->eyeTextureIdx = 1;
        return;
    }
    if (temp_f0 >= 10.0f) {
        EnTrt_OpenEyes(this);
    }
}

void EnTrt_EyesClosed(EnTrt *this) {
    this->eyeTextureIdx = 2;
}

void EnTrt_OpenEyes2(EnTrt *this) {
    EnTrt_OpenEyes(this);
}

void EnTrt_OpenEyesThenSetToBlink(EnTrt *this) {
    if (this->skelAnime.animCurrentFrame >= 7.0f) {
        EnTrt_OpenEyes(this);
        if (this->eyeTextureIdx == 0) {
            this->blinkFunc = EnTrt_Blink;
        }
    }
}

void EnTrt_TalkToShopkeeper(EnTrt *arg0, GlobalContext *arg1) {
    void *sp18;
    EnTrt *temp_a2;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_3;
    MessageContext *temp_a0;
    s32 temp_v0_3;
    u16 temp_a1;
    u16 temp_v0_2;
    u8 temp_v0;
    void *temp_v1;

    temp_a0 = arg1 + 0x4908;
    arg0 = arg0;
    arg1 = arg1;
    temp_v0 = func_80152498(temp_a0);
    temp_v1 = arg1->actorCtx.actorList[2].first;
    if (temp_v0 == 5) {
        temp_a0_2 = arg1;
        arg0 = arg0;
        arg1 = arg1;
        if (func_80147624(temp_a0_2) != 0) {
            temp_v0_2 = arg0->talkOptionTextId;
            if ((temp_v0_2 == 0x845) || (temp_v0_2 == 0x882)) {
                func_80151938(arg1, 0xFFU);
                return;
            }
            EnTrt_StartShopping(arg1, arg0);
            return;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return;
    }
    temp_a0_3 = arg1;
    if (temp_v0 == 0x10) {
        sp18 = temp_v1;
        arg0 = arg0;
        arg1 = arg1;
        temp_v0_3 = func_80123810(temp_a0_3);
        temp_a2 = arg0;
        if (temp_v0_3 > 0) {
            if (temp_v0_3 == 0x1E) {
                if ((gSaveContext.weekEventReg[53] & 8) != 0) {
                    temp_v1->textId = 0x888;
                } else {
                    temp_v1->textId = 0x883;
                }
                temp_a2->textId = temp_v1->textId;
                temp_v1->unk_A87 = (s8) temp_v0_3;
                temp_a2->actionFunc = (void (*)(EnTrt *, GlobalContext *)) EnTrt_GetMushroom;
            } else {
                if ((temp_a2->flags & 2) != 0) {
                    temp_v1->textId = 0x88B;
                } else {
                    temp_v1->textId = 0x886;
                }
                temp_a2->actionFunc = (void (*)(EnTrt *, GlobalContext *)) EnTrt_Goodbye;
                temp_a2->textId = temp_v1->textId;
            }
            func_801477B4(arg1);
            return;
        }
        if (temp_v0_3 < 0) {
            if ((temp_a2->flags & 2) != 0) {
                temp_a2->textId = 0x88B;
            } else {
                temp_a2->textId = 0x886;
            }
            temp_a1 = temp_a2->textId;
            arg0 = temp_a2;
            func_801518B0(arg1, temp_a1, (Actor *) temp_a2);
            arg0->actionFunc = (void (*)(EnTrt *, GlobalContext *)) EnTrt_Goodbye;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
    }
}

void EnTrt_SetupTalkToShopkeeper(GlobalContext *globalCtx, EnTrt *this) {
    u16 temp_a1;

    this->actionFunc = EnTrt_TalkToShopkeeper;
    temp_a1 = this->talkOptionTextId;
    this = this;
    func_80151938(globalCtx, temp_a1);
    func_8011552C(globalCtx, 6);
    this->stickLeftPrompt.isEnabled = 0;
    this->stickRightPrompt.isEnabled = 0;
}

void EnTrt_SetupLookToShopkeeperFromShelf(GlobalContext *globalCtx, EnTrt *this) {
    play_sound(0x4809U);
    this->drawCursor = 0;
    this->actionFunc = EnTrt_LookToShopkeeperFromShelf;
}

void EnTrt_LookToShopkeeperFromShelf(EnTrt *this, GlobalContext *globalCtx) {
    if (this->cutsceneState == 3) {
        ActorCutscene_Stop(this->cutscene);
        this->cutsceneState = 0;
    }
    if (this->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        this->cutscene = this->lookToShopkeeperCutscene;
        ActorCutscene_SetIntentToPlay(this->cutscene);
        this->cutsceneState = 1;
        return;
    }
    if (this->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(this->cutscene, (Actor *) this);
            this->cutsceneState = 3;
            EnTrt_StartShopping(globalCtx, this);
            return;
        }
        ActorCutscene_SetIntentToPlay(this->cutscene);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void EnTrt_InitShopkeeper(EnTrt *arg0, GlobalContext *arg1) {
    SkelAnime_InitSV(arg1, arg0 + 0x14C, &D_0600FEF0, &D_0600FD34, NULL, NULL, 0);
    if (((gSaveContext.weekEventReg[12] & 8) == 0) && ((gSaveContext.weekEventReg[84] & 0x40) == 0) && (gSaveContext.day >= 2)) {
        arg0->actor.draw = NULL;
        return;
    }
    arg0->actor.draw = EnTrt_Draw;
}

void EnTrt_InitShop(EnTrt *arg0, GlobalContext *arg1) {
    EnTrt_GetCutscenes(arg0, arg1);
    arg0->cutscene = arg0->lookForwardCutscene;
    ActorShape_Init(&arg0->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    EnTrt_InitShopkeeper(arg0, arg1);
    arg0->actor.colChkInfo.mass = 0xFF;
    arg0->actor.colChkInfo.cylRadius = 0x32;
    arg0->timer = Rand_S16Offset(0x28, 0x14);
    if (((gSaveContext.weekEventReg[12] & 8) == 0) && ((gSaveContext.weekEventReg[84] & 0x40) == 0) && (gSaveContext.day >= 2)) {
        arg0->textId = 0x84A;
        arg0->actionFunc = (void (*)(EnTrt *, GlobalContext *)) EnTrt_ShopkeeperGone;
    } else {
        arg0->sleepSoundTimer = 0xA;
        arg0->actor.textId = 0;
        arg0->actionFunc = EnTrt_IdleSleeping;
    }
    arg0->stickAccumY = 0;
    arg0->stickAccumX = 0;
    arg0->cursorIdx = 0;
    arg0->cursorPos.x = 100.0f;
    arg0->cursorPos.y = 100.0f;
    arg0->cursorColor.r = 0;
    arg0->cursorColor.g = 0x50;
    arg0->cursorColor.b = 0xFF;
    arg0->cursorColor.a = 0xFF;
    arg0->cursorAnimTween = 0.0f;
    arg0->cursorAnimState = 0;
    arg0->drawCursor = 0;
    arg0->stickLeftPrompt.stickColor.r = 0xC8;
    arg0->stickLeftPrompt.stickColor.g = 0xC8;
    arg0->stickLeftPrompt.stickColor.b = 0xC8;
    arg0->stickLeftPrompt.stickColor.a = 0xB4;
    arg0->stickLeftPrompt.arrowColor.r = 0xFF;
    arg0->stickLeftPrompt.arrowColor.g = 0xFF;
    arg0->stickLeftPrompt.arrowColor.b = 0;
    arg0->stickLeftPrompt.arrowColor.a = 0xC8;
    arg0->stickLeftPrompt.isEnabled = 0;
    arg0->stickRightPrompt.stickColor.r = 0xC8;
    arg0->stickRightPrompt.stickColor.g = 0xC8;
    arg0->stickRightPrompt.stickColor.b = 0xC8;
    arg0->stickRightPrompt.stickColor.a = 0xB4;
    arg0->stickRightPrompt.arrowColor.r = 0xFF;
    arg0->stickRightPrompt.arrowColor.g = 0;
    arg0->stickRightPrompt.arrowColor.b = 0;
    arg0->stickRightPrompt.arrowColor.a = 0xC8;
    arg0->stickRightPrompt.isEnabled = 0;
    arg0->arrowAnimTween = 0.0f;
    arg0->stickAnimTween = 0.0f;
    arg0->arrowAnimState = 0;
    arg0->stickAnimState = 0;
    arg0->shopItemSelectedTween = 0.0f;
    arg0->actor.gravity = 0.0f;
    arg0->stickLeftPrompt.stickTexY = 95.0f;
    arg0->stickRightPrompt.stickTexY = 95.0f;
    arg0->cursorPos.z = 1.2f;
    arg0->stickLeftPrompt.stickTexX = 49.0f;
    arg0->stickLeftPrompt.arrowTexY = 91.0f;
    arg0->stickRightPrompt.arrowTexY = 91.0f;
    arg0->stickLeftPrompt.texZ = 1.0f;
    arg0->stickRightPrompt.texZ = 1.0f;
    arg0->stickLeftPrompt.arrowTexX = 33.0f;
    arg0->stickRightPrompt.stickTexX = 274.0f;
    arg0->stickRightPrompt.arrowTexX = 290.0f;
    Actor_SetScale((Actor *) arg0, sActorScale);
    EnTrt_SpawnShopItems(arg0, arg1, &sShop);
    arg0->blinkTimer = 0x14;
    arg0->eyeTextureIdx = 0;
    arg0->blinkFunc = EnTrt_EyesClosed;
    if ((gSaveContext.weekEventReg[53] & 8) != 0) {
        arg0->flags |= 2;
    }
    arg0->actor.flags &= -2;
}

void EnTrt_GetCutscenes(EnTrt *this, GlobalContext *globalCtx) {
    this->lookForwardCutscene = (s16) this->actor.cutscene;
    this->lookToShelfCutscene = ActorCutscene_GetAdditionalCutscene(this->lookForwardCutscene);
    this->lookToShopkeeperCutscene = ActorCutscene_GetAdditionalCutscene(this->lookToShelfCutscene);
    this->getMushroomCutscene = ActorCutscene_GetAdditionalCutscene(this->lookToShopkeeperCutscene);
}

void EnTrt_DrawCursor(GraphicsContext **arg0, EnTrt *arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5) {
    GraphicsContext *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    f32 temp_f0;
    s32 temp_a1;

    temp_a2 = *arg0;
    if (arg5 != 0) {
        sp18 = temp_a2;
        func_8012C654(temp_a2);
        temp_v0 = sp18->overlay.p;
        sp18->overlay.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = (arg1->cursorColor.r << 0x18) | ((arg1->cursorColor.g & 0xFF) << 0x10) | ((arg1->cursorColor.b & 0xFF) << 8) | (arg1->cursorColor.a & 0xFF);
        temp_v0_2 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFD700000;
        temp_v0_2->words.w1 = (u32) &D_0401F740;
        temp_v0_3 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xF5700000;
        temp_v0_3->words.w1 = 0x7050140;
        temp_v0_4 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0;
        temp_v0_4->words.w0 = 0xE6000000;
        temp_v0_5 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0x703F800;
        temp_v0_5->words.w0 = 0xF3000000;
        temp_v0_6 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0;
        temp_v0_6->words.w0 = 0xE7000000;
        temp_v0_7 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xF5600200;
        temp_v0_7->words.w1 = 0x50140;
        temp_v0_8 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xF2000000;
        temp_v0_8->words.w1 = 0x3C03C;
        temp_v0_9 = sp18->overlay.p;
        temp_f0 = 16.0f * arg4;
        sp18->overlay.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = (((s32) ((arg2 + temp_f0) * 4.0f) & 0xFFF) << 0xC) | 0xE4000000 | ((s32) ((arg3 + temp_f0 + -12.0f) * 4.0f) & 0xFFF);
        temp_v0_9->words.w1 = (((s32) ((arg2 - temp_f0) * 4.0f) & 0xFFF) << 0xC) | ((s32) (((arg3 - temp_f0) + -12.0f) * 4.0f) & 0xFFF);
        temp_v0_10 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = 0;
        temp_v0_10->words.w0 = 0xE1000000;
        temp_v0_11 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_11 + 8;
        temp_a1 = (s32) ((1.0f / arg4) * 1024.0f) & 0xFFFF;
        temp_v0_11->words.w1 = (temp_a1 << 0x10) | temp_a1;
        temp_v0_11->words.w0 = 0xF1000000;
    }
}

void EnTrt_DrawTextRec(GraphicsContext **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 argA, f32 argB) {
    GraphicsContext *temp_v0;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;

    temp_v0 = *arg0;
    temp_a0 = temp_v0->overlay.p;
    temp_v0->overlay.p = temp_a0 + 8;
    temp_a0->words.w1 = 0;
    temp_a0->words.w0 = 0xE7000000;
    temp_a0_2 = temp_v0->overlay.p;
    temp_v0->overlay.p = temp_a0_2 + 8;
    temp_a0_2->words.w0 = 0xFA000000;
    temp_a0_2->words.w1 = (arg1 << 0x18) | ((arg2 & 0xFF) << 0x10) | ((arg3 & 0xFF) << 8) | (arg4 & 0xFF);
    temp_f2 = 8.0f * arg7;
    temp_a0_3 = temp_v0->overlay.p;
    temp_f14 = 12.0f * arg7;
    temp_v0->overlay.p = temp_a0_3 + 8;
    temp_a0_3->words.w0 = (((s32) ((arg5 + temp_f2) * 4.0f) & 0xFFF) << 0xC) | 0xE4000000 | ((s32) ((arg6 + temp_f14) * 4.0f) & 0xFFF);
    temp_a0_3->words.w1 = (((s32) ((arg5 - temp_f2) * 4.0f) & 0xFFF) << 0xC) | ((s32) ((arg6 - temp_f14) * 4.0f) & 0xFFF);
    temp_a0_4 = temp_v0->overlay.p;
    temp_v0->overlay.p = temp_a0_4 + 8;
    temp_a0_4->words.w0 = 0xE1000000;
    temp_a0_4->words.w1 = (arg8 << 0x10) | (arg9 & 0xFFFF);
    temp_a0_5 = temp_v0->overlay.p;
    temp_f2_2 = (1.0f / arg7) * 1024.0f;
    temp_v0->overlay.p = temp_a0_5 + 8;
    temp_a0_5->words.w0 = 0xF1000000;
    temp_a0_5->words.w1 = ((s32) (temp_f2_2 * argA) << 0x10) | ((s32) (argB * temp_f2_2) & 0xFFFF);
}

void EnTrt_DrawStickDirectionPrompt(GraphicsContext **arg0, EnTrt *arg1) {
    s32 sp4C;
    s32 sp48;
    GraphicsContext *sp44;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    s32 temp_t1;
    s32 temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;

    temp_t1 = arg1->stickLeftPrompt.isEnabled;
    temp_v0 = arg1->stickRightPrompt.isEnabled;
    temp_a2 = *arg0;
    if ((temp_t1 != 0) || (temp_v0 != 0)) {
        sp48 = temp_v0;
        sp44 = temp_a2;
        sp4C = temp_t1;
        func_8012C654(temp_a2);
        temp_v0_2 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFC119623;
        temp_v0_2->words.w1 = 0xFF2FFFFF;
        temp_v0_3 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFD700000;
        temp_v0_3->words.w1 = (u32) &D_0401F8C0;
        temp_v0_4 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xF5700000;
        temp_v0_4->words.w1 = 0x7000040;
        temp_v0_5 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0;
        temp_v0_5->words.w0 = 0xE6000000;
        temp_v0_6 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0x70BF400;
        temp_v0_6->words.w0 = 0xF3000000;
        temp_v0_7 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = 0;
        temp_v0_7->words.w0 = 0xE7000000;
        temp_v0_8 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0x40;
        temp_v0_8->words.w0 = 0xF5680400;
        temp_v0_9 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xF2000000;
        temp_v0_9->words.w1 = 0x3C05C;
        if (temp_t1 != 0) {
            sp4C = temp_t1;
            sp44 = temp_a2;
            EnTrt_DrawTextRec(arg0, arg1->stickLeftPrompt.arrowColor.r, arg1->stickLeftPrompt.arrowColor.g, arg1->stickLeftPrompt.arrowColor.b, arg1->stickLeftPrompt.arrowColor.a, arg1->stickLeftPrompt.arrowTexX, arg1->stickLeftPrompt.arrowTexY, arg1->stickLeftPrompt.texZ, 0, 0, -1.0f, 1.0f);
        }
        if (sp48 != 0) {
            sp4C = arg1->stickLeftPrompt.isEnabled;
            sp44 = *arg0;
            EnTrt_DrawTextRec(arg0, arg1->stickRightPrompt.arrowColor.r, arg1->stickRightPrompt.arrowColor.g, arg1->stickRightPrompt.arrowColor.b, arg1->stickRightPrompt.arrowColor.a, arg1->stickRightPrompt.arrowTexX, arg1->stickRightPrompt.arrowTexY, arg1->stickRightPrompt.texZ, 0, 0, 1.0f, 1.0f);
        }
        temp_v0_10 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xFD700000;
        temp_v0_10->words.w1 = &D_0401F7C0;
        temp_v0_11 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xF5700000;
        temp_v0_11->words.w1 = 0x7000040;
        temp_v0_12 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_12 + 8;
        temp_v0_12->words.w1 = 0;
        temp_v0_12->words.w0 = 0xE6000000;
        temp_v0_13 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_13 + 8;
        temp_v0_13->words.w1 = 0x707F400;
        temp_v0_13->words.w0 = 0xF3000000;
        temp_v0_14 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_14 + 8;
        temp_v0_14->words.w1 = 0;
        temp_v0_14->words.w0 = 0xE7000000;
        temp_v0_15 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_15 + 8;
        temp_v0_15->words.w1 = 0x40;
        temp_v0_15->words.w0 = 0xF5680400;
        temp_v0_16 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_16 + 8;
        temp_v0_16->words.w0 = 0xF2000000;
        temp_v0_16->words.w1 = 0x3C03C;
        if (arg1->stickLeftPrompt.isEnabled != 0) {
            EnTrt_DrawTextRec(arg0, arg1->stickLeftPrompt.stickColor.r, arg1->stickLeftPrompt.stickColor.g, arg1->stickLeftPrompt.stickColor.b, arg1->stickLeftPrompt.stickColor.a, arg1->stickLeftPrompt.stickTexX, arg1->stickLeftPrompt.stickTexY, arg1->stickLeftPrompt.texZ, 0, 0, -1.0f, 1.0f);
        }
        if (sp48 != 0) {
            EnTrt_DrawTextRec(arg0, arg1->stickRightPrompt.stickColor.r, arg1->stickRightPrompt.stickColor.g, arg1->stickRightPrompt.stickColor.b, arg1->stickRightPrompt.stickColor.a, arg1->stickRightPrompt.stickTexX, arg1->stickRightPrompt.stickTexY, arg1->stickRightPrompt.texZ, 0, 0, 1.0f, 1.0f);
        }
    }
}

void EnTrt_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTrt *this = (EnTrt *) thisx;
    Actor_ProcessInitChain((Actor *) this, &sInitChain);
    EnTrt_InitShop(this, globalCtx);
}

void EnTrt_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTrt *this = (EnTrt *) thisx;
    SkelAnime_Free(&this->skelAnime, globalCtx);
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnTrt_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTrt *this = (EnTrt *) thisx;
    this->blinkFunc(this);
    EnTrt_UpdateJoystickInputState(globalCtx, this);
    EnTrt_UpdateItemSelectedProperty(this);
    EnTrt_UpdateStickDirectionPromptAnim(this);
    EnTrt_UpdateCursorAnim(this);
    EnTrt_UpdateHeadYawAndPitch(this, globalCtx);
    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, 90.0f);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    EnTrt_UpdateCollider((Actor *) this, globalCtx);
}

void EnTrt_UpdateHeadYawAndPitch(EnTrt *this, GlobalContext *globalCtx) {
    Actor *sp4C;
    f32 sp44;
    ? sp40;
    ? sp34;
    Actor *temp_t0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 phi_v0;
    s16 phi_v0_2;

    temp_t0 = globalCtx->actorCtx.actorList[2].first;
    sp4C = temp_t0;
    Math_SmoothStepToS(&this->headYaw, (s16) (this->actor.yawTowardsPlayer - this->actor.shape.rot.y), 4, 0x38E0, (s16) 1);
    temp_v1 = this->headYaw;
    if ((s32) temp_v1 < -0x38E0) {
        this->headYaw = -0x38E0;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x38E1) {
            phi_v0 = 0x38E0;
        }
        this->headYaw = phi_v0;
    }
    sp40.unk_0 = (f32) temp_t0->world.pos.x;
    sp40.unk_4 = (f32) temp_t0->world.pos.y;
    sp40.unk_8 = (f32) temp_t0->world.pos.z;
    sp44 = temp_t0->unk_C44 + 3.0f;
    sp34.unk_0 = (f32) this->actor.world.pos.x;
    sp34.unk_4 = (f32) this->actor.world.pos.y;
    sp34.unk_8 = (f32) this->actor.world.pos.z;
    Math_SmoothStepToS(&this->headPitch, Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x1C70, (s16) 1);
    temp_v1_2 = this->headPitch;
    if ((s32) temp_v1_2 < -0x1C70) {
        this->headPitch = -0x1C70;
        return;
    }
    phi_v0_2 = temp_v1_2;
    if ((s32) temp_v1_2 >= 0x1C71) {
        phi_v0_2 = 0x1C70;
    }
    this->headPitch = phi_v0_2;
}

void EnTrt_UpdateHeadPosAndRot(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4) {
    ? sp7C;
    ? sp70;
    s16 sp6A;
    s16 sp68;
    ? sp28;
    s16 temp_a1;

    sp70.unk_0 = (f32) D_801D15B0.x;
    sp70.unk_4 = (f32) D_801D15B0.y;
    sp70.unk_8 = (f32) D_801D15B0.z;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp70, (Vec3f *) &sp7C);
    SysMatrix_CopyCurrentState((MtxF *) &sp28);
    func_8018219C((MtxF *) &sp28, (Vec3s *) &sp68, 0);
    arg2->unk_0 = (s32) sp7C.unk_0;
    arg2->unk_4 = (s32) sp7C.unk_4;
    arg2->unk_8 = (s32) sp7C.unk_8;
    if (arg4 != 0) {
        temp_a1 = sp68 + arg0;
        sp6A += arg1;
        sp68 = temp_a1;
        Math_SmoothStepToS(arg3, temp_a1, 4, 0x1FFE, (s16) 1);
        Math_SmoothStepToS(arg3 + 2, sp6A, 4, 0x1FFE, (s16) 1);
        Math_SmoothStepToS(arg3 + 4, sp6C, 4, 0x1FFE, (s16) 1);
        return;
    }
    arg3->unk_0 = sp68;
    arg3->unk_2 = sp6A;
    arg3->unk_4 = sp6C;
}

s32 EnTrt_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    Vec3s *temp_v1;
    s32 temp_v0;
    void *temp_t6;
    void *temp_t6_2;
    void *phi_t6;
    Vec3s *phi_v1;
    s32 phi_v0;
    void *phi_t6_2;
    Vec3s *phi_v1_2;

    temp_t6 = arg5->unk_340;
    phi_t6 = temp_t6;
    phi_v1 = arg5;
    phi_v0 = 1;
    phi_t6_2 = temp_t6;
    phi_v1_2 = arg5;
    if (1 != 3) {
        do {
            phi_t6->unk_58 = 0.2f;
            temp_v0 = phi_v0 + 1;
            temp_v1 = phi_v1 + 4;
            phi_v1->unk_340->unk_5C = 0.2f;
            temp_v1->unk_33C->unk_60 = 0.2f;
            temp_t6_2 = temp_v1->unk_340;
            phi_t6 = temp_t6_2;
            phi_v1 = temp_v1;
            phi_v0 = temp_v0;
            phi_t6_2 = temp_t6_2;
            phi_v1_2 = temp_v1;
        } while (temp_v0 != 3);
    }
    phi_t6_2->unk_58 = 0.2f;
    phi_v1_2->unk_340->unk_5C = 0.2f;
    (phi_v1_2 + 4)->unk_33C->unk_60 = 0.2f;
    if (arg1 == 0xE) {
        *arg2 = NULL;
    }
    return 0;
}

void EnTrt_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s32 phi_v0;

    phi_v0 = 0;
    if ((arg4->unk_42C & 1) != 0) {
        phi_v0 = 1;
    }
    if (arg1 == 0x15) {
        EnTrt_UpdateHeadPosAndRot(arg4->unk_428, arg4->unk_42A, arg4 + 0x41C, arg4 + 0x416, phi_v0);
        SysMatrix_InsertTranslation(arg4->unk_41C, arg4->unk_420, arg4->unk_424, 0);
        Matrix_Scale(arg4->scale.x, arg4->scale.y, arg4->scale.z, 1);
        Matrix_RotateY(arg4->unk_418, 1U);
        SysMatrix_InsertXRotation_s(arg4->unk_416, 1);
        SysMatrix_InsertZRotation_s(arg4->unk_41A, 1);
    }
}

void EnTrt_UnkActorDraw(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    if (arg1 == 0x15) {
        SysMatrix_InsertTranslation(arg2->unk_41C, arg2->unk_420, arg2->unk_424, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk_418, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_416, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_41A, 1);
    }
}

void EnTrt_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnTrt *this = (EnTrt *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp3C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp3C = sp3C;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&sEyeTextures + (this->eyeTextureIdx * 4)));
    temp_v0_2 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp30 = temp_v0_2;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&sEyeTextures + (this->eyeTextureIdx * 4)));
    func_801343C0(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnTrt_OverrideLimbDraw, EnTrt_PostLimbDraw, EnTrt_UnkActorDraw, (Actor *) this);
    EnTrt_DrawCursor((GraphicsContext **) globalCtx, this, this->cursorPos.x, this->cursorPos.y, this->cursorPos.z, (u8) (s32) this->drawCursor);
    EnTrt_DrawStickDirectionPrompt((GraphicsContext **) globalCtx, this);
}
