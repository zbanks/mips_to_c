typedef struct GameState {
    /* 0x00 */ GraphicsContext *gfxCtx;
    /* 0x04 */ void (*main)(GameState *);
    /* 0x08 */ void (*destroy)(GameState *);
    /* 0x0C */ void (*nextGameStateInit)(GameState *);
    /* 0x10 */ u32 nextGameStateSize;
    /* 0x14 */ Input input[4];
    /* 0x74 */ TwoHeadArena heap;
    /* 0x84 */ GameAlloc alloc;
    /* 0x98 */ char pad_98[0x3];
    /* 0x9B */ u8 running;
    /* 0x9C */ u32 frames;
    /* 0xA0 */ char pad_A0[0x2];
    /* 0xA2 */ u8 framerateDivisor;
    /* 0xA3 */ s8 unk_A3;                           /* inferred */
} GameState;                                        /* size = 0xA4 */

typedef struct PreNMIContext {
    /* 0x00 */ GameState state;
    /* 0xA4 */ u32 timer;
    /* 0xA8 */ s32 unk_A8;                          /* inferred */
} PreNMIContext;                                    /* size = 0xAC */

struct _mips2c_stack_PreNMI_Destroy {};             /* size 0x0 */

struct _mips2c_stack_PreNMI_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_PreNMI_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_PreNMI_Main {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_PreNMI_Stop {};                /* size 0x0 */

struct _mips2c_stack_PreNMI_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

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
    temp_a0->polyOpa.p = &temp_v1[1];
    temp_v1->words.w1 = -1;
    temp_v1->words.w0 = 0xF7000000;
    temp_v1_2 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v1_2[1];
    temp_v1_2->words.w0 = (((prenmiCtx->timer + 0x64) & 0x3FF) * 4) | 0xF64FC000;
    temp_v1_2->words.w1 = ((prenmiCtx->timer + 0x64) & 0x3FF) * 4;
}

void PreNMI_Main(PreNMIContext *prenmiCtx) {
    PreNMI_Update(prenmiCtx);
    PreNMI_Draw(prenmiCtx);
    prenmiCtx->state.unk_A3 = 1;
}

void PreNMI_Destroy(PreNMIContext *prenmiCtx) {

}

void PreNMI_Init(PreNMIContext *prenmiCtx) {
    prenmiCtx->state.main = (void (*)(GameState *)) PreNMI_Main;
    prenmiCtx->state.destroy = (void (*)(GameState *)) PreNMI_Destroy;
    prenmiCtx->timer = 0x1E;
    prenmiCtx->unk_A8 = 0xA;
    Game_SetFramerateDivisor((GameState *) prenmiCtx, 1);
}
