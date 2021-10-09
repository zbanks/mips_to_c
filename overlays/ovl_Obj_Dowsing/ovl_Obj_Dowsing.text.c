u32 func_80B23D50(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B23DD0(Actor *arg0, GlobalContext *);    /* static */



u32 func_80B23D50(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_a2;
    s32 temp_v1;
    u32 phi_v0;

    temp_v0 = arg0->params;
    temp_v1 = (s32) temp_v0 >> 7;
    temp_a2 = temp_v0 & 0x7F;
    if (temp_v1 == 1) {
        return Actor_GetCollectibleFlag(arg1, temp_a2);
    }
    if (temp_v1 == 2) {
        return Actor_GetChestFlag(arg1, (u32) temp_a2);
    }
    phi_v0 = 0U;
    if (temp_v1 == 3) {
        phi_v0 = Flags_GetSwitch(arg1, temp_a2);
    }
    return phi_v0;
}

s32 func_80B23DD0(Actor *arg0) {
    if (func_80B23D50(arg0) != 0) {
        Actor_MarkForDeath(arg0);
        return 1;
    }
    return 0;
}

void ObjDowsing_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjDowsing *this = (ObjDowsing *) thisx;
    func_80B23DD0();
}

void ObjDowsing_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjDowsing *this = (ObjDowsing *) thisx;

}

void ObjDowsing_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjDowsing *this = (ObjDowsing *) thisx;
    if (func_80B23DD0(&this->actor, globalCtx) == 0) {
        func_800B8C50(&this->actor, globalCtx);
    }
}

