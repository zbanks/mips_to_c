

void EnTagObj_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTagObj *this = (EnTagObj *) thisx;
    this->hasSpawnedSeahorse = 0;
}

void EnTagObj_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTagObj *this = (EnTagObj *) thisx;

}

void EnTagObj_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTagObj *this = (EnTagObj *) thisx;
    if (this->hasSpawnedSeahorse == 0) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x205, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        this->hasSpawnedSeahorse = 1;
    }
}

