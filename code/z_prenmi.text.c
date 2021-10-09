

void PreNMI_Stop(PreNMIContext *prenmiCtx) {
    prenmiCtx->state.running = 0;
    prenmiCtx->state.nextGameStateInit = NULL;
    prenmiCtx->state.nextGameStateSize = 0;
}

void PreNMI_Update(PreNMIContext *prenmiCtx) {
    u32 temp_v0;

    temp_v0 = prenmiCtx->timer;
    if (temp_v0 == 0) {
        prenmiCtx = prenmiCtx;
        ViConfig_UpdateVi(1U);
        PreNMI_Stop(prenmiCtx);
        return;
    }
    prenmiCtx->timer = temp_v0 - 1;
}

void PreNMI_Draw(PreNMIContext *prenmiCtx) {
    GraphicsContext *sp24;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;

    temp_a0 = prenmiCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012CF0C(temp_a0, 1, 1, 0U, (u8) 0, (u8) 0);
    func_8012C470(temp_a0);
    temp_v1 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = -1;
    temp_v1->words.w0 = 0xF7000000;
    temp_v1_2 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = (((prenmiCtx->timer + 0x64) & 0x3FF) * 4) | 0xF64FC000;
    temp_v1_2->words.w1 = ((prenmiCtx->timer + 0x64) & 0x3FF) * 4;
}

void PreNMI_Main(PreNMIContext *prenmiCtx) {
    PreNMI_Update(prenmiCtx);
    PreNMI_Draw(prenmiCtx);
    prenmiCtx->state.unkA3 = 1;
}

void PreNMI_Destroy(PreNMIContext *prenmiCtx) {

}

void PreNMI_Init(PreNMIContext *prenmiCtx) {
    prenmiCtx->state.main = (void (*)(GameState *)) PreNMI_Main;
    prenmiCtx->state.destroy = (void (*)(GameState *)) PreNMI_Destroy;
    prenmiCtx->timer = 0x1E;
    prenmiCtx->unkA8 = 0xA;
    Game_SetFramerateDivisor(&prenmiCtx->state, 1);
}

