struct _mips2c_stack_EnTagObj_Destroy {};           /* size 0x0 */

struct _mips2c_stack_EnTagObj_Init {};              /* size 0x0 */

struct _mips2c_stack_EnTagObj_Update {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

void EnTagObj_Init(EnTagObj *this, GlobalContext *globalCtx) {
    EnTagObj *this = (EnTagObj *) thisx;
    this->hasSpawnedSeahorse = 0;
}

void EnTagObj_Destroy(EnTagObj *this, GlobalContext *globalCtx) {
    EnTagObj *this = (EnTagObj *) thisx;

}

void EnTagObj_Update(EnTagObj *this, GlobalContext *globalCtx) {
    EnTagObj *this = (EnTagObj *) thisx;
    if (this->hasSpawnedSeahorse == 0) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x205, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        this->hasSpawnedSeahorse = 1;
    }
}
