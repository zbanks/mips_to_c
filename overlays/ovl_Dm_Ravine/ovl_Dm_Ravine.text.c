typedef struct {
    /* 0x0000 */ Room currRoom;
    /* 0x0014 */ Room prevRoom;
    /* 0x0028 */ void *roomMemPages[2];
    /* 0x0030 */ u8 activeMemPage;
    /* 0x0031 */ s8 unk31;
    /* 0x0032 */ char pad32[0x2];                   /* maybe part of unk31[3]? */
    /* 0x0034 */ void *activeRoomVram;
    /* 0x0038 */ DmaRequest dmaRequest;
    /* 0x0058 */ OSMesgQueue loadQueue;
    /* 0x0070 */ void *loadMsg[1];
    /* 0x0074 */ void *unk74;
    /* 0x0078 */ s8 unk78;
    /* 0x0079 */ s8 unk79;
    /* 0x007A */ s16 unk7A;                         /* inferred */
    /* 0x007C */ s16 unk7C;                         /* inferred */
    /* 0x007E */ char pad7E[0x2];                   /* maybe part of unk7C[2]? */
} RoomContext;                                      /* size 0x80 */

void DmRavine_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmRavine *this = (DmRavine *) thisx;
    if ((gGameInfo->data[1440] | (gSaveContext.weekEventReg[0] & 0x10)) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->isActive = 0;
    globalCtx->roomCtx.unk7A = 1;
    globalCtx->roomCtx.unk7C = 0;
    this->state = 0;
    Actor_SetScale(&this->actor, 1.0f);
    this->actionFunc = DmRavine_DoNothing;
}

void DmRavine_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmRavine *this = (DmRavine *) thisx;

}

void DmRavine_DoNothing(DmRavine *this, GlobalContext *globalCtx) {
    DmRavine *self = (DmRavine *) this;

}

void DmRavine_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmRavine *this = (DmRavine *) thisx;
    u8 temp_v0;

    temp_v0 = this->state;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                return;
            }
            Actor_MarkForDeath(&this->actor);
            // Duplicate return node #8. Try simplifying control flow for better match
            return;
        }
        this->isActive = 1;
        globalCtx->roomCtx.unk7C += 1;
        if (((s32) globalCtx->roomCtx.unk7C >= 0xFF) && (globalCtx->roomCtx.unk7C = 0xFE, (((s32) globalCtx->csCtx.frames < 0x2BD) == 0))) {
            globalCtx->roomCtx.unk7C = 0xFF;
            globalCtx->roomCtx.unk7A = 0;
            this->state += 1;
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void DmRavine_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmRavine *this = (DmRavine *) thisx;

}

