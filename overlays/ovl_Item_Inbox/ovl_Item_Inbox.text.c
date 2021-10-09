struct _mips2c_stack_ItemInbox_Destroy {};          /* size 0x0 */

struct _mips2c_stack_ItemInbox_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ItemInbox_Idle {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ItemInbox_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ItemInbox_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void ItemInbox_Init(ItemInbox *this, GlobalContext *globalCtx) {
    ItemInbox *this = (ItemInbox *) thisx;
    this->actionFunc = ItemInbox_Idle;
    Actor_SetScale((Actor *) this, 0.2f);
}

void ItemInbox_Destroy(ItemInbox *this, GlobalContext *globalCtx) {
    ItemInbox *this = (ItemInbox *) thisx;

}

void ItemInbox_Idle(ItemInbox *this, GlobalContext *globalCtx) {
    if (Actor_GetChestFlag(globalCtx, ((s32) this->actor.params >> 8) & 0x1F) != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void ItemInbox_Update(ItemInbox *this, GlobalContext *globalCtx) {
    ItemInbox *this = (ItemInbox *) thisx;
    this->actionFunc(this, globalCtx);
}

void ItemInbox_Draw(ItemInbox *this, GlobalContext *globalCtx) {
    ItemInbox *this = (ItemInbox *) thisx;
    func_800B8050((Actor *) this, globalCtx, 0);
    func_800B8118((Actor *) this, globalCtx, 0);
    GetItem_Draw(globalCtx, (s16) (this->actor.params & 0xFF));
}
