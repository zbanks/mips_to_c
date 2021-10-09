GameInfo *gGameInfo;



void TitleSetup_GameStateResetContext(void) {
    gGameInfo->data[1346] = 0;
    gGameInfo->data[1354] = 0x1A;
    gGameInfo->data[1355] = 0x14;
    gGameInfo->data[1356] = 0xE;
    gGameInfo->data[1357] = 0;
    gGameInfo->data[1375] = 0;
    gGameInfo->data[1385] = 0x50;
    gGameInfo->data[1387] = -0x3AC;
    gGameInfo->data[1388] = 0xD7;
    gGameInfo->data[1389] = 0xDA;
    gGameInfo->data[1412] = 0x61;
    gGameInfo->data[1413] = 0x93;
    gGameInfo->data[1414] = 0x28;
    gGameInfo->data[1417] = 0x1E;
    gGameInfo->data[1418] = 0x42;
    gGameInfo->data[1419] = 0x1E;
    gGameInfo->data[1420] = 0x1C;
    gGameInfo->data[1421] = 0x3C;
    gGameInfo->data[1422] = 0x2F;
    gGameInfo->data[1423] = 0x62;
    gGameInfo->data[1431] = 0;
    gGameInfo->data[1432] = 0x56;
    gGameInfo->data[1433] = 0x258;
    gGameInfo->data[1434] = 0x1C2;
    gGameInfo->data[1435] = 0;
    gGameInfo->data[1438] = 0;
    gGameInfo->data[1439] = 0;
    gGameInfo->data[608] = 0x50;
    gGameInfo->data[609] = 0x3C;
    gGameInfo->data[610] = 0xDC;
    gGameInfo->data[611] = 0x3C;
    gGameInfo->data[612] = 0x50;
    gGameInfo->data[613] = 0xA0;
    gGameInfo->data[614] = 0xDC;
    gGameInfo->data[615] = 0xA0;
    gGameInfo->data[616] = 0x8E;
    gGameInfo->data[617] = 0x6C;
    gGameInfo->data[618] = 0xCC;
    gGameInfo->data[619] = 0xB1;
}

void TitleSetup_InitImpl(GameState *gameState) {
    func_80185908();
    func_800E9360();
    TitleSetup_GameStateResetContext();
    gameState->running = 0;
    gameState->nextGameStateSize = 0x248;
    gameState->nextGameStateInit = Title_Init;
}

void TitleSetup_Destroy(GameState *gameState) {

}

void TitleSetup_Init(GameState *gameState) {
    gameState->destroy = TitleSetup_Destroy;
    TitleSetup_InitImpl(gameState);
}

