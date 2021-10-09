void EnGirlA_Bought(GlobalContext *arg0, EnGirlA *arg1); /* static */
void EnGirlA_DoNothing(EnGirlA *arg0, GlobalContext *arg1); /* static */
void EnGirlA_InitItem(GlobalContext *arg0, EnGirlA *arg1); /* static */
void EnGirlA_InitObjIndex(Actor *arg0, s32 arg1);   /* static */
void EnGirlA_Restock(GlobalContext *arg0, EnGirlA *arg1); /* static */
void EnGirlA_SetupAction(EnGirlA *arg0, void (*arg1)(EnGirlA *, GlobalContext *)); /* static */
s32 EnGirlA_TrySetMaskItemDescription(EnGirlA *arg0, GlobalContext *arg1); /* static */
static ? D_80864A50;                                /* unable to generate initializer */



void EnGirlA_SetupAction(EnGirlA *arg0, void (*arg1)(s32, ?)) {
    arg0->actionFunc = arg1;
}

void EnGirlA_InitObjIndex(Actor *arg0, s32 arg1) {
    s16 sp1E;
    s16 temp_v1;

    temp_v1 = arg0->params;
    if (((s32) temp_v1 >= 0x2B) && ((s32) temp_v1 < 0)) {
        Actor_MarkForDeath(arg0);
        return;
    }
    sp1E = temp_v1;
    arg0 = arg0;
    arg0->unk18C = Object_GetIndex(arg1 + 0x17D88, *(&D_80864A50 + (temp_v1 << 5)));
    if ((s32) arg0->unk18C < 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->params = temp_v1;
    arg0->unk190 = EnGirlA_InitalUpdate;
}

void EnGirlA_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGirlA *this = (EnGirlA *) thisx;
    EnGirlA_InitObjIndex();
}

void EnGirlA_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGirlA *this = (EnGirlA *) thisx;

}

s32 EnGirlA_CanBuyPotionRed(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    s32 phi_v0;

    if (func_80114E90() == 0) {
        return 3;
    }
    phi_v0 = 1;
    if ((s32) gSaveContext.rupees < self->unk16974) {
        phi_v0 = 4;
    }
    return phi_v0;
}

s32 EnGirlA_CanBuyPotionGreen(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    s32 phi_v0;

    if (func_80114E90() == 0) {
        return 3;
    }
    phi_v0 = 1;
    if ((s32) gSaveContext.rupees < self->unk16974) {
        phi_v0 = 4;
    }
    return phi_v0;
}

s32 EnGirlA_CanBuyPotionBlue(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    s32 phi_v0;

    if ((gSaveContext.weekEventReg[53] & 8) == 0) {
        return 5;
    }
    if (func_80114E90() == 0) {
        return 3;
    }
    if ((gSaveContext.weekEventReg[53] & 0x10) == 0) {
        return 1;
    }
    phi_v0 = 1;
    if ((s32) gSaveContext.rupees < self->unk16974) {
        phi_v0 = 4;
    }
    return phi_v0;
}

s32 EnGirlA_CanBuyArrows(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    u32 temp_a1;
    u32 temp_v1;
    u8 temp_a2;

    temp_a1 = *gUpgradeMasks;
    temp_v1 = gSaveContext.inventory.upgrades;
    temp_a2 = *gUpgradeShifts;
    if (((u32) (temp_v1 & temp_a1) >> temp_a2) == 0) {
        return 6;
    }
    if ((s32) gSaveContext.inventory.ammo[gItemSlots[1]] >= (s32) *(gUpgradeShifts + 8 + (((u32) (temp_v1 & temp_a1) >> temp_a2) * 2))) {
        return 7;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 1;
}

s32 EnGirlA_CanBuyNuts(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    u16 temp_v0;

    temp_v0 = (*(gUpgradeCapacities + 0x30))[(u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x1C)) >> gUpgradeShifts[7]];
    if ((temp_v0 != 0) && ((s32) gSaveContext.inventory.ammo[gItemSlots[9]] >= (s32) temp_v0)) {
        return 2;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    if (func_80114978(9) == 0xFF) {
        return 0;
    }
    return 1;
}

s32 EnGirlA_CanBuyShieldHero(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    if (((s32) (gSaveContext.equips.equipment & *(gEquipMasks + 2)) >> gEquipShifts[1]) != 0) {
        return 2;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 0;
}

s32 EnGirlA_CanBuyStick(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    u16 temp_v0;

    temp_v0 = (*(gUpgradeCapacities + 0x28))[(u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x18)) >> gUpgradeShifts[6]];
    if ((temp_v0 != 0) && ((s32) gSaveContext.inventory.ammo[gItemSlots[8]] >= (s32) temp_v0)) {
        return 2;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    if (func_80114978(8) == 0xFF) {
        return 0;
    }
    return 1;
}

s32 EnGirlA_CanBuyMaskAllNight(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 1;
}

s32 EnGirlA_CanBuyBombBagCuriosityShop(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    if ((u32) ((u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 4)) >> gUpgradeShifts[1]) >= 2U) {
        return 5;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 1;
}

s32 EnGirlA_CanBuyBombBag20BombShop(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    u32 temp_v0;
    u32 temp_v1;
    u8 temp_a1;

    temp_v1 = *(gUpgradeMasks + 4);
    temp_v0 = gSaveContext.inventory.upgrades;
    temp_a1 = gUpgradeShifts[1];
    if (((u32) (temp_v0 & temp_v1) >> temp_a1) == 1) {
        return 8;
    }
    if ((u32) ((u32) (temp_v0 & temp_v1) >> temp_a1) >= 2U) {
        return 9;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 0;
}

s32 EnGirlA_CanBuyBombBag30BombShop(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    u32 temp_v0;
    u32 temp_v1;
    u8 temp_a1;

    temp_v1 = *(gUpgradeMasks + 4);
    temp_v0 = gSaveContext.inventory.upgrades;
    temp_a1 = gUpgradeShifts[1];
    if (((u32) (temp_v0 & temp_v1) >> temp_a1) == 2) {
        return 8;
    }
    if (((u32) (temp_v0 & temp_v1) >> temp_a1) == 3) {
        return 9;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 0;
}

s32 EnGirlA_CanBuyBombchus(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    u32 temp_a1;
    u32 temp_v1;
    u8 temp_a2;

    temp_a1 = *(gUpgradeMasks + 4);
    temp_v1 = gSaveContext.inventory.upgrades;
    temp_a2 = gUpgradeShifts[1];
    if (((u32) (temp_v1 & temp_a1) >> temp_a2) == 0) {
        return 5;
    }
    if ((s32) gSaveContext.inventory.ammo[gItemSlots[7]] >= (s32) (*gUpgradeCapacities)[(u32) (temp_v1 & temp_a1) >> temp_a2]) {
        return 2;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    if (func_80114978(7) == 0xFF) {
        return 0;
    }
    return 1;
}

s32 EnGirlA_CanBuyBombs(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    u32 temp_a1;
    u32 temp_v1;
    u8 temp_a2;

    temp_a1 = *(gUpgradeMasks + 4);
    temp_v1 = gSaveContext.inventory.upgrades;
    temp_a2 = gUpgradeShifts[1];
    if (((u32) (temp_v1 & temp_a1) >> temp_a2) == 0) {
        return 5;
    }
    if ((s32) gSaveContext.inventory.ammo[gItemSlots[6]] >= (s32) (*gUpgradeCapacities)[(u32) (temp_v1 & temp_a1) >> temp_a2]) {
        return 2;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 1;
}

s32 EnGirlA_CanBuyBottle(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 0;
}

s32 EnGirlA_CanBuySword(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 0;
}

s32 EnGirlA_CanBuyShieldMirror(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    if (((s32) (gSaveContext.equips.equipment & *(gEquipMasks + 2)) >> gEquipShifts[1]) != 0) {
        return 2;
    }
    if ((s32) gSaveContext.rupees < self->unk16974) {
        return 4;
    }
    return 0;
}

s32 EnGirlA_CanBuyFairy(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    s32 phi_v0;

    if (func_80114E90() == 0) {
        return 3;
    }
    phi_v0 = 1;
    if ((s32) gSaveContext.rupees < self->unk16974) {
        phi_v0 = 4;
    }
    return phi_v0;
}

void EnGirlA_BuyBottleItem(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    u16 temp_t6;

    temp_t6 = (u16) this->actor.params;
    switch (temp_t6) {
    case 0:
    case 10:
    case 18:
    case 29:
    case 32:
    case 35:
        Item_Give((GlobalContext *) self, 0x13U);
        break;
    case 1:
    case 5:
    case 14:
        Item_Give((GlobalContext *) self, 0x14U);
        break;
    case 2:
        Item_Give((GlobalContext *) self, 0x15U);
        break;
    case 3:
    case 11:
        Item_Give((GlobalContext *) self, 0x16U);
        break;
    }
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyArrows(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    func_80115A14(1, this->itemParams);
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyNuts(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    s16 temp_v0;

    temp_v0 = this->itemParams;
    if (temp_v0 != 5) {
        if (temp_v0 != 0xA) {

        } else {
            Item_Give((GlobalContext *) self, 0x8EU);
        }
    } else {
        Item_Give((GlobalContext *) self, 0x8DU);
    }
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyShieldHero(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    Item_Give((GlobalContext *) self, 0x51U);
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyStick(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    Item_Give((GlobalContext *) self, 8U);
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyMaskAllNight(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    Item_Give((GlobalContext *) self, 0x38U);
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyBombBag(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    s16 temp_v0;

    temp_v0 = this->itemParams;
    if (temp_v0 != 0x14) {
        if (temp_v0 != 0x15) {
            if (temp_v0 != 0x16) {

            } else {
                Item_Give((GlobalContext *) self, 0x58U);
            }
        } else {
            Item_Give((GlobalContext *) self, 0x57U);
        }
    } else {
        Item_Give((GlobalContext *) self, 0x56U);
    }
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyBombchus(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    if (this->itemParams == 0xA) {
        Item_Give((GlobalContext *) self, 0x98U);
    }
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyBombs(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    s16 temp_v0;

    temp_v0 = this->itemParams;
    if (temp_v0 != 5) {
        if (temp_v0 != 0xA) {
            if (temp_v0 != 0x14) {
                if (temp_v0 != 0x1E) {

                } else {
                    Item_Give((GlobalContext *) self, 0x92U);
                }
            } else {
                Item_Give((GlobalContext *) self, 0x91U);
            }
        } else {
            Item_Give((GlobalContext *) self, 0x90U);
        }
    } else {
        Item_Give((GlobalContext *) self, 0x8FU);
    }
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyBottle(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    Item_Give((GlobalContext *) self, 0x12U);
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuySword(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    s16 temp_v0;

    temp_v0 = this->itemParams;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 != 4) {

                } else {
                    Item_Give((GlobalContext *) self, 0x10U);
                }
            } else {
                Item_Give((GlobalContext *) self, 0x4FU);
            }
        } else {
            Item_Give((GlobalContext *) self, 0x4EU);
        }
    } else {
        Item_Give((GlobalContext *) self, 0x4DU);
    }
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyShieldMirror(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    Item_Give((GlobalContext *) self, 0x52U);
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_BuyFanfare(GlobalContext *globalCtx, EnGirlA *this) {
    EnGirlA *self = (EnGirlA *) globalCtx;
    func_801159EC((s16) ((s32) self->unk16974 * -1));
}

void EnGirlA_DoNothing(EnGirlA *arg0, GlobalContext *arg1) {

}

void EnGirlA_InitItem(GlobalContext *arg0, EnGirlA *arg1) {
    arg1->isOutOfStock = 0;
    arg1->actor.draw = EnGirlA_Draw;
    arg1->actor.textId = ((arg1->actor.params << 5) + &D_80864A50)->unkA;
}

void EnGirlA_Bought(GlobalContext *arg0, EnGirlA *arg1) {
    arg1->isOutOfStock = 1;
    arg1->actor.draw = NULL;
}

void EnGirlA_Restock(GlobalContext *arg0, EnGirlA *arg1) {
    arg1->isOutOfStock = 0;
    arg1->actor.draw = EnGirlA_Draw;
}

s32 EnGirlA_TrySetMaskItemDescription(EnGirlA *arg0, GlobalContext *arg1) {
    return 0;
}

void EnGirlA_InitalUpdate(EnGirlA *this, GlobalContext *globalCtx) {
    EnGirlA *self = (EnGirlA *) this;
    s16 sp2E;
    void *sp24;
    s32 temp_t1;
    void *temp_v1;

    sp2E = self->actor.params;
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) self->objIndex) != 0) {
        self->actor.flags &= -0x11;
        self->actor.objBankIndex = self->objIndex;
        temp_t1 = sp2E << 5;
        temp_v1 = temp_t1 + &D_80864A50;
        self->actor.textId = temp_v1->unkA;
        self->choiceTextId = temp_v1->unkC;
        sp24 = temp_v1;
        if (EnGirlA_TrySetMaskItemDescription(self, globalCtx) == 0) {
            sp24 = temp_v1;
            EnGirlA_InitItem(globalCtx, self);
        }
        self->boughtFunc = EnGirlA_Bought;
        self->restockFunc = EnGirlA_Restock;
        self->getItemId = (temp_t1 + &D_80864A50)->unk10;
        self->canBuyFunc = (temp_t1 + &D_80864A50)->unk14;
        self->buyFunc = (temp_t1 + &D_80864A50)->unk18;
        self->unk1C0 = 0;
        self->buyFanfareFunc = (temp_t1 + &D_80864A50)->unk1C;
        self->itemParams = (temp_t1 + &D_80864A50)->unk8;
        self->drawFunc = (temp_t1 + &D_80864A50)->unk4;
        self->actor.flags &= -2;
        self->getItemDrawId = (temp_t1 + &D_80864A50)->unk2;
        Actor_SetScale(&self->actor, 0.25f);
        self->actor.shape.yOffset = 24.0f;
        self->actor.shape.shadowScale = 4.0f;
        self->actor.floorHeight = self->actor.home.pos.y;
        self->actor.gravity = 0.0f;
        EnGirlA_SetupAction(self, EnGirlA_DoNothing);
        self->isInitialized = 1;
        self->mainActionFunc = EnGirlA_Update2;
        self->isSelected = 0;
        self->rotY = 0;
        self->initialRotY = self->actor.shape.rot.y;
    }
}

void EnGirlA_Update2(EnGirlA *this, GlobalContext *globalCtx) {
    EnGirlA *self = (EnGirlA *) this;
    Actor_SetScale(&self->actor, 0.25f);
    self->actor.shape.yOffset = 24.0f;
    self->actor.shape.shadowScale = 4.0f;
    EnGirlA_TrySetMaskItemDescription(self, globalCtx);
    self->actionFunc(self, globalCtx);
    Actor_SetHeight(&self->actor, 5.0f);
    self->actor.shape.rot.x = 0;
    if (self->isSelected != 0) {
        self->rotY += 0x1F4;
        return;
    }
    Math_SmoothStepToS(&self->rotY, 0, 0xA, 0x7D0, (s16) 0);
}

void EnGirlA_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGirlA *this = (EnGirlA *) thisx;
    this->mainActionFunc(this, globalCtx);
}

void EnGirlA_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnGirlA *this = (EnGirlA *) thisx;
    EnGirlA *temp_a0_2;
    s16 temp_a0;
    void (*temp_v0)(Actor *, GlobalContext *, s32);

    temp_a0 = this->rotY;
    this = this;
    Matrix_RotateY(temp_a0, 1U);
    temp_v0 = this->drawFunc;
    temp_a0_2 = this;
    if (temp_v0 != 0) {
        this = this;
        temp_v0(&temp_a0_2->actor, globalCtx, 0);
    }
    GetItem_Draw(globalCtx, this->getItemDrawId);
}

