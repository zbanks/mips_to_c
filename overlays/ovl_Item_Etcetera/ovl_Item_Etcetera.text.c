typedef struct ItemEtcetera {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*unk144)(ItemEtcetera *, GlobalContext *); /* inferred */
    /* 0x148 */ s16 unk148;                         /* inferred */
    /* 0x14A */ s16 unk14A;                         /* inferred */
    /* 0x14C */ u8 unk14C;                          /* inferred */
    /* 0x14D */ char pad14D[0x3];                   /* maybe part of unk14C[4]? */
    /* 0x150 */ void (*unk150)(Actor *, GlobalContext *); /* inferred */
    /* 0x154 */ void (*actionFunc)(ItemEtcetera *, GlobalContext *);
} ItemEtcetera;                                     /* size = 0x158 */

struct _mips2c_stack_ItemEtcetera_Destroy {};       /* size 0x0 */

struct _mips2c_stack_ItemEtcetera_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ItemEtcetera_SetupAction {};   /* size 0x0 */

struct _mips2c_stack_ItemEtcetera_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80920044 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092009C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809200F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80920164 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809201BC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_8092009C(ItemEtcetera *this, GlobalContext *globalCtx); /* static */
void func_809200F8(ItemEtcetera *this, GlobalContext *globalCtx); /* static */
void func_80920164(Actor *this, GlobalContext *globalCtx); /* static */
void func_809201BC(Actor *this, GlobalContext *globalCtx); /* static */
static ? D_80920230;                                /* unable to generate initializer */
static ? D_8092024C;                                /* unable to generate initializer */
static ? D_80920268;                                /* unable to generate initializer */

void ItemEtcetera_SetupAction(ItemEtcetera *this, void (*actionFunc)(ItemEtcetera *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void ItemEtcetera_Init(ItemEtcetera *this, GlobalContext *globalCtx) {
    s32 sp2C;
    s32 sp24;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    ItemEtcetera *this = (ItemEtcetera *) thisx;

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
    Actor_SetScale((Actor *) this, 0.25f);
    ItemEtcetera_SetupAction(this, func_80920044);
    switch (sp2C) {
    case 7:
        Actor_SetScale((Actor *) this, 0.5f);
        this->actor.draw = NULL;
        this->actor.shape.yOffset = 50.0f;
        return;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        Actor_SetScale((Actor *) this, 0.5f);
        this->unk144 = func_809200F8;
        this->unk150 = func_80920164;
        this->actor.world.pos.y += 15.0f;
        /* fallthrough */
    default:
        return;
    }
}

void ItemEtcetera_Destroy(ItemEtcetera *this, GlobalContext *globalCtx) {
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
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, (s32) this->unk14A, 30.0f, 50.0f);
}

void func_809200F8(ItemEtcetera *this, GlobalContext *globalCtx) {
    if (Actor_GetChestFlag(globalCtx, ((s32) this->actor.params >> 8) & 0x1F) != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void ItemEtcetera_Update(ItemEtcetera *this, GlobalContext *globalCtx) {
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
