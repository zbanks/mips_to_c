struct _mips2c_stack_EnTorch_Init {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

static ? D_80973600;                                /* unable to generate initializer */

void EnTorch_Init(EnTorch *this, GlobalContext *globalCtx) {
    s8 temp_v0;
    EnTorch *this = (EnTorch *) thisx;

    temp_v0 = gSaveContext.respawn[3].data;
    Actor_Spawn(&globalCtx->actorCtx, globalCtx, 6, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, (s16) ((*(&D_80973600 + (((s32) temp_v0 >> 5) & 7)) << 5) | 0x5000 | (temp_v0 & 0x1F)));
    Actor_MarkForDeath((Actor *) this);
}
