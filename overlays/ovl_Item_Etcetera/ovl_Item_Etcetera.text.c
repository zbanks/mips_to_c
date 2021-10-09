void func_8092009C(ItemEtcetera *this, GlobalContext *globalCtx); /* static */
void func_809200F8(ItemEtcetera *this, GlobalContext *globalCtx); /* static */
void func_80920164(Actor *this, GlobalContext *globalCtx); /* static */
void func_809201BC(Actor *this, GlobalContext *globalCtx); /* static */
static ? D_80920230;                                /* unable to generate initializer */
static ? D_8092024C;                                /* unable to generate initializer */
static ? D_80920268;                                /* unable to generate initializer */

typedef struct ItemEtcetera {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*unk144)(ItemEtcetera *, GlobalContext *); /* inferred */
    /* 0x0148 */ s16 unk148;                        /* inferred */
    /* 0x014A */ s16 unk14A;                        /* inferred */
    /* 0x014C */ u8 unk14C;                         /* inferred */
    /* 0x014D */ char pad14D[0x3];                  /* maybe part of unk14C[4]? */
    /* 0x0150 */ void (*unk150)(Actor *, GlobalContext *); /* inferred */
    /* 0x0154 */ void (*actionFunc)(ItemEtcetera *, GlobalContext *);
} ItemEtcetera;                                     /* size 0x158 */

void ItemEtcetera_SetupAction(ItemEtcetera *this, void (*actionFunc)(ItemEtcetera *, GlobalContext *)) {
    ItemEtcetera *self = (ItemEtcetera *) this;
    self->actionFunc = actionFunc;
}

void ItemEtcetera_Init(Actor *thisx, GlobalContext *globalCtx) {
    ItemEtcetera *this = (ItemEtcetera *) thisx;
    s32 sp2C;
    s32 sp24;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v0 = this->actor.params & 0xFF;
    temp_v1 = temp_v0 * 2;
    sp24 = temp_v1;
    sp2C = temp_v0;
    temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, *(&D_80920230 + temp_v1));
    if (temp_v0_2 >= 0) {
        this->unk14C = (u8) temp_v0_2;
    }
    this->unk148 = *(&D_8092024C + temp_v1);
    this->unk144 = func_8092009C;
    this->unk150 = func_809201BC;
    this->unk14A = *(&D_80920268 + temp_v1);
    Actor_SetScale(&this->actor, 0.25f);
    ItemEtcetera_SetupAction(this, func_80920044);
    switch (sp2C) {
    case 7:
        Actor_SetScale(&this->actor, 0.5f);
        this->actor.draw = NULL;
        this->actor.shape.yOffset = 50.0f;
        return;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        Actor_SetScale(&this->actor, 0.5f);
        this->unk144 = func_809200F8;
        this->unk150 = func_80920164;
        this->actor.world.pos.y += 15.0f;
        // fallthrough
    default:
        return;
    }
}

void ItemEtcetera_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ItemEtcetera *this = (ItemEtcetera *) thisx;

}

void func_80920044(ItemEtcetera *this, GlobalContext *globalCtx) {
    u8 temp_a1;

    temp_a1 = this->unk14C;
    this = this;
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) temp_a1) != 0) {
        this->actor.objBankIndex = (s8) this->unk14C;
        this->actor.draw = this->unk150;
        this->actionFunc = this->unk144;
    }
}

void func_8092009C(ItemEtcetera *this, GlobalContext *globalCtx) {
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    func_800B8A1C(&this->actor, globalCtx, (s32) this->unk14A, 30.0f, 50.0f);
}

void func_809200F8(ItemEtcetera *this, GlobalContext *globalCtx) {
    if (Actor_GetChestFlag(globalCtx, ((s32) this->actor.params >> 8) & 0x1F) != 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void ItemEtcetera_Update(Actor *thisx, GlobalContext *globalCtx) {
    ItemEtcetera *this = (ItemEtcetera *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80920164(Actor *this, GlobalContext *globalCtx) {
    if (globalCtx->actorCtx.unk4 == 0x64) {
        func_800B8050(this, globalCtx, 0);
        func_800B8118(this, globalCtx, 0);
        GetItem_Draw(globalCtx, this->unk148);
    }
}

void func_809201BC(Actor *this, GlobalContext *globalCtx) {
    func_800B8050(this, globalCtx, 0);
    func_800B8118(this, globalCtx, 0);
    GetItem_Draw(globalCtx, this->unk148);
}

