struct _mips2c_stack_Opening_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Opening_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Opening_Main {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Opening_SetupForTitleCutscene {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80803EA0 {};              /* size 0x0 */

? ShrinkWindow_Init();                              /* extern */
? func_80144890();                                  /* extern */
void Opening_SetupForTitleCutscene(GameState *arg0); /* static */
void func_80803EA0(GameState *arg0);                /* static */
extern u8 D_801BB12C;
static ? openingCutscenes;                          /* unable to generate initializer */
static ? openingEntrances;                          /* unable to generate initializer */

void Opening_SetupForTitleCutscene(GameState *arg0) {
    s32 temp_t0;
    s32 temp_v1;

    gSaveContext.gameMode = 1;
    gSaveContext.eventInf[1] &= 0x7F;
    func_80144890();
    temp_v1 = D_801BB12C * 4;
    gSaveContext.entranceIndex = *(&openingEntrances + temp_v1);
    temp_t0 = *(&openingCutscenes + temp_v1);
    gSaveContext.sceneSetupIndex = 0;
    gSaveContext.time = 0x5555;
    gSaveContext.day = 1;
    gSaveContext.cutscene = temp_t0;
    gSaveContext.nextCutsceneIndex = (u16) temp_t0;
    arg0->running = 0;
    arg0->nextGameStateInit = Play_Init;
    arg0->nextGameStateSize = 0x19258;
    gSaveContext.playerForm = 4;
}

void func_80803EA0(GameState *arg0) {
    GameInfo *temp_v0;

    temp_v0 = gGameInfo;
    temp_v0->data[129] |= 1;
}

void Opening_Main(GameState *thisx) {
    func_8012CF0C(thisx->gfxCtx, 0, 1, 0U, (u8) 0, (u8) 0);
    Opening_SetupForTitleCutscene(thisx);
    func_80803EA0(thisx);
}

void Opening_Destroy(GameState *thisx) {
    ShrinkWindow_Fini();
}

void Opening_Init(GameState *thisx) {
    Game_SetFramerateDivisor(thisx, 1);
    SysMatrix_StateAlloc(thisx);
    ShrinkWindow_Init();
    View_Init(thisx + 0xA8, thisx->gfxCtx);
    thisx->main = Opening_Main;
    thisx->destroy = Opening_Destroy;
    gSaveContext.respawnFlag = 0;
    gSaveContext.respawn[4].entranceIndex = 0xFF;
    gSaveContext.respawn[5].entranceIndex = 0xFF;
    gSaveContext.respawn[6].entranceIndex = 0xFF;
    gSaveContext.respawn[7].entranceIndex = 0xFF;
}
