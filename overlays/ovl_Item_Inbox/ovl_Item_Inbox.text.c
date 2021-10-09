

void ItemInbox_Init(Actor *thisx, GlobalContext *globalCtx) {
    ItemInbox *this = (ItemInbox *) thisx;
    this->actionFunc = ItemInbox_Idle;
    Actor_SetScale(&this->actor, 0.2f);
}

void ItemInbox_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ItemInbox *this = (ItemInbox *) thisx;

}

void ItemInbox_Idle(ItemInbox *this, GlobalContext *globalCtx) {
    ItemInbox *self = (ItemInbox *) this;
    if (Actor_GetChestFlag(globalCtx, ((s32) self->actor.params >> 8) & 0x1F) != 0) {
        Actor_MarkForDeath(&self->actor);
    }
}

void ItemInbox_Update(Actor *thisx, GlobalContext *globalCtx) {
    ItemInbox *this = (ItemInbox *) thisx;
    this->actionFunc(this, globalCtx);
}

void ItemInbox_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ItemInbox *this = (ItemInbox *) thisx;
    func_800B8050(&this->actor, globalCtx, 0);
    func_800B8118(&this->actor, globalCtx, 0);
    GetItem_Draw(globalCtx, (s16) (this->actor.params & 0xFF));
}

