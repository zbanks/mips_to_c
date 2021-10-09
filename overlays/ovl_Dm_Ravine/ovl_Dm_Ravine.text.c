typedef struct {
    /* 0x00 */ Room currRoom;
    /* 0x14 */ Room prevRoom;
    /* 0x28 */ void *roomMemPages[2];
    /* 0x30 */ u8 activeMemPage;
    /* 0x31 */ s8 unk31;
    /* 0x32 */ char pad_32[0x2];                    /* maybe part of unk31[3]? */
    /* 0x34 */ void *activeRoomVram;
    /* 0x38 */ DmaRequest dmaRequest;
    /* 0x58 */ OSMesgQueue loadQueue;
    /* 0x70 */ void *loadMsg[1];
    /* 0x74 */ void *unk74;
    /* 0x78 */ s8 unk78;
    /* 0x79 */ s8 unk79;
    /* 0x7A */ s16 unk_7A;                          /* inferred */
    /* 0x7C */ s16 unk_7C;                          /* inferred */
    /* 0x7E */ char pad_7E[0x2];
} RoomContext;                                      /* size = 0x80 */

struct _mips2c_stack_DmRavine_Destroy {};           /* size 0x0 */

struct _mips2c_stack_DmRavine_DoNothing {};         /* size 0x0 */

struct _mips2c_stack_DmRavine_Draw {};              /* size 0x0 */

struct _mips2c_stack_DmRavine_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DmRavine_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void DmRavine_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmRavine *this = (DmRavine *) thisx;
    if ((gGameInfo->data[1440] | (gSaveContext.weekEventReg[0] & 0x10)) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->isActive = 0;
    globalCtx->roomCtx.unk_7A = 1;
    globalCtx->roomCtx.unk_7C = 0;
    this->state = 0;
    Actor_SetScale((Actor *) this, 1.0f);
    this->actionFunc = DmRavine_DoNothing;
}

void DmRavine_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmRavine *this = (DmRavine *) thisx;

}

void DmRavine_DoNothing(DmRavine *this, GlobalContext *globalCtx) {

}

void DmRavine_Update(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_v0;
    DmRavine *this = (DmRavine *) thisx;

    temp_v0 = this->state;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                return;
            }
            Actor_MarkForDeath((Actor *) this);
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return;
        }
        this->isActive = 1;
        globalCtx->roomCtx.unk_7C += 1;
        if (((s32) globalCtx->roomCtx.unk_7C >= 0xFF) && (globalCtx->roomCtx.unk_7C = 0xFE, (((s32) globalCtx->csCtx.frames < 0x2BD) == 0))) {
            globalCtx->roomCtx.unk_7C = 0xFF;
            globalCtx->roomCtx.unk_7A = 0;
            this->state += 1;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void DmRavine_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmRavine *this = (DmRavine *) thisx;

}
