void func_80A4FB10(DemoGetitem *, GlobalContext *); /* static */
void func_80A4FB68(DemoGetitem *, GlobalContext *); /* static */
void func_80A4FCF0(Actor *this, GlobalContext *globalCtx); /* static */
static ? D_80A4FD60;                                /* unable to generate initializer */
static ? D_80A4FD64;                                /* unable to generate initializer */
static ? D_80A4FD68;                                /* unable to generate initializer */

typedef struct DemoGetitem {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ u16 unk146;                        /* inferred */
    /* 0x0148 */ s8 unk148;                         /* inferred */
    /* 0x0149 */ char pad149[0x3];                  /* maybe part of unk148[4]? */
    /* 0x014C */ void (*actionFunc)(DemoGetitem *, GlobalContext *);
} DemoGetitem;                                      /* size 0x150 */

void DemoGetitem_Init(Actor *thisx, GlobalContext *globalCtx) {
    DemoGetitem *this = (DemoGetitem *) thisx;
    s32 sp1C;
    DemoGetitem *temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;

    temp_a0 = this;
    phi_v1 = 0;
    if ((this->actor.params & 0xF) == 1) {
        phi_v1 = 1;
    }
    sp1C = phi_v1;
    this = this;
    Actor_SetScale(&temp_a0->actor, 0.25f);
    temp_v0 = phi_v1 * 2;
    this->actionFunc = func_80A4FB10;
    this->unk144 = *(&D_80A4FD64 + temp_v0);
    this->unk146 = *(&D_80A4FD68 + temp_v0);
    temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, *(&D_80A4FD60 + temp_v0));
    if (temp_v0_2 < 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk148 = (s8) temp_v0_2;
}

void DemoGetitem_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DemoGetitem *this = (DemoGetitem *) thisx;

}

void func_80A4FB10(DemoGetitem *arg0, GlobalContext *arg1) {
    s8 temp_a1;

    temp_a1 = arg0->unk148;
    arg0 = arg0;
    if (Object_IsLoaded(&arg1->objectCtx, (s32) temp_a1) != 0) {
        arg0->actor.draw = NULL;
        arg0->actionFunc = func_80A4FB68;
        arg0->actor.objBankIndex = arg0->unk148;
    }
}

void func_80A4FB68(DemoGetitem *arg0, GlobalContext *arg1) {
    s16 sp22;
    u16 temp_v1;

    sp22 = arg1->gameplayFrames * 0x3E8;
    if (func_800EE29C(arg1, (u32) arg0->unk146) != 0) {
        if (arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk146)]->unk0 != 4) {
            arg0->actor.shape.yOffset = 0.0f;
        }
        temp_v1 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk146)]->unk0;
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                if (temp_v1 != 4) {
                    goto block_10;
                }
                arg0->actor.draw = func_80A4FCF0;
                func_800EDF24(&arg0->actor, arg1, func_800EE200(arg1, (u32) arg0->unk146));
                arg0->actor.shape.yOffset = Math_SinS(sp22) * 15.0f;
                return;
            }
            Actor_MarkForDeath(&arg0->actor);
            return;
        }
        arg0->actor.draw = func_80A4FCF0;
        func_800EDE34(&arg0->actor, arg1, func_800EE200(arg1, (u32) arg0->unk146));
        arg0->actor.shape.rot.y += 0x3E8;
        return;
    }
block_10:
    arg0->actor.draw = NULL;
}

void DemoGetitem_Update(Actor *thisx, GlobalContext *globalCtx) {
    DemoGetitem *this = (DemoGetitem *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80A4FCF0(Actor *this, GlobalContext *globalCtx) {
    func_800B8050(this, globalCtx, 0);
    func_800B8118(this, globalCtx, 0);
    GetItem_Draw(globalCtx, this->unk144);
}

