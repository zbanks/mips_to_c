typedef struct {
    /* 0x00 */ void *loadedRamAddr;
    /* 0x04 */ u32 vromStart;
    /* 0x08 */ u32 vromEnd;
    /* 0x0C */ void *vramStart;
    /* 0x10 */ void *vramEnd;
    /* 0x14 */ void (*unk14)();                     /* inferred */
    /* 0x18 */ void (*init)();
    /* 0x1C */ void (*destroy)();
    /* 0x20 */ void (*unk20)();                     /* inferred */
    /* 0x24 */ void (*unk24)();                     /* inferred */
    /* 0x28 */ s32 unk28;                           /* inferred */
    /* 0x2C */ u32 instanceSize;
} GameStateOverlay;                                 /* size = 0x30 */

struct _mips2c_stack_DLF_FreeGameState {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DLF_LoadGameState {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

void DLF_LoadGameState(GameStateOverlay *gameState) {
    void (*temp_v1)();
    void (*temp_v1_2)();
    void (*temp_v1_3)();
    void (*temp_v1_4)();
    void (*temp_v1_5)();
    void *temp_a2;
    void *temp_v0;
    void (*phi_v0)();
    void (*phi_v0_2)();
    void (*phi_v0_3)();
    void (*phi_v0_4)();
    void (*phi_v0_5)();

    if (gameState->loadedRamAddr == 0) {
        temp_a2 = gameState->vramStart;
        if (temp_a2 == 0) {
            goto block_16;
        }
        temp_v0 = Load2_AllocateAndLoad(gameState->vromStart, gameState->vromEnd, (u32) temp_a2, (u32) gameState->vramEnd);
        gameState->loadedRamAddr = temp_v0;
        if (temp_v0 != 0) {
            temp_v1 = gameState->unk14;
            if (temp_v1 != 0) {
                phi_v0 = temp_v1 - (gameState->vramStart - temp_v0);
            } else {
                phi_v0 = NULL;
            }
            temp_v1_2 = gameState->init;
            gameState->unk14 = phi_v0;
            phi_v0_2 = NULL;
            phi_v0_3 = NULL;
            phi_v0_4 = NULL;
            phi_v0_5 = NULL;
            if (temp_v1_2 != 0) {
                phi_v0_2 = temp_v1_2 - (gameState->vramStart - gameState->loadedRamAddr);
            }
            temp_v1_3 = gameState->destroy;
            gameState->init = phi_v0_2;
            if (temp_v1_3 != 0) {
                phi_v0_3 = temp_v1_3 - (gameState->vramStart - gameState->loadedRamAddr);
            }
            temp_v1_4 = gameState->unk20;
            gameState->destroy = phi_v0_3;
            if (temp_v1_4 != 0) {
                phi_v0_4 = temp_v1_4 - (gameState->vramStart - gameState->loadedRamAddr);
            }
            temp_v1_5 = gameState->unk24;
            gameState->unk20 = phi_v0_4;
            if (temp_v1_5 != 0) {
                phi_v0_5 = temp_v1_5 - (gameState->vramStart - gameState->loadedRamAddr);
            }
            gameState->unk24 = phi_v0_5;
block_16:
            gameState->unk28 = 0;
        }
    }
}

void DLF_FreeGameState(GameStateOverlay *gameState) {
    void (*temp_v1)();
    void (*temp_v1_2)();
    void (*temp_v1_3)();
    void (*temp_v1_4)();
    void (*temp_v1_5)();
    void *temp_a2;
    void (*phi_v0)();
    void (*phi_v0_2)();
    void (*phi_v0_3)();
    void (*phi_v0_4)();
    void (*phi_v0_5)();
    void (*phi_v0_6)();

    temp_a2 = gameState->loadedRamAddr;
    if (temp_a2 != 0) {
        phi_v0 = NULL;
        phi_v0_2 = NULL;
        phi_v0_3 = NULL;
        phi_v0_4 = NULL;
        phi_v0_5 = NULL;
        phi_v0_6 = NULL;
        if (gameState->unk28 != 0) {
            phi_v0 = (void (*)())-1;
        }
        if (phi_v0 == 0) {
            temp_v1 = gameState->unk14;
            if (temp_v1 != 0) {
                phi_v0_2 = temp_v1 + (gameState->vramStart - temp_a2);
            }
            temp_v1_2 = gameState->init;
            gameState->unk14 = phi_v0_2;
            if (temp_v1_2 != 0) {
                phi_v0_3 = temp_v1_2 + (gameState->vramStart - gameState->loadedRamAddr);
            }
            temp_v1_3 = gameState->destroy;
            gameState->init = phi_v0_3;
            if (temp_v1_3 != 0) {
                phi_v0_4 = temp_v1_3 + (gameState->vramStart - gameState->loadedRamAddr);
            }
            temp_v1_4 = gameState->unk20;
            gameState->destroy = phi_v0_4;
            if (temp_v1_4 != 0) {
                phi_v0_5 = temp_v1_4 + (gameState->vramStart - gameState->loadedRamAddr);
            }
            temp_v1_5 = gameState->unk24;
            gameState->unk20 = phi_v0_5;
            if (temp_v1_5 != 0) {
                phi_v0_6 = temp_v1_5 + (gameState->vramStart - gameState->loadedRamAddr);
            }
            gameState->unk24 = phi_v0_6;
            gameState = gameState;
            SystemArena_Free(gameState->loadedRamAddr);
            gameState->loadedRamAddr = NULL;
        }
    }
}
