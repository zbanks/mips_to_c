struct _mips2c_stack_ObjDowsing_Destroy {};         /* size 0x0 */

struct _mips2c_stack_ObjDowsing_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDowsing_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B23D50 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B23DD0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

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

void ObjDowsing_Init(ObjDowsing *this, GlobalContext *globalCtx) {
    ObjDowsing *this = (ObjDowsing *) thisx;
    func_80B23DD0();
}

void ObjDowsing_Destroy(ObjDowsing *this, GlobalContext *globalCtx) {
    ObjDowsing *this = (ObjDowsing *) thisx;

}

void ObjDowsing_Update(ObjDowsing *this, GlobalContext *globalCtx) {
    ObjDowsing *this = (ObjDowsing *) thisx;
    if (func_80B23DD0((Actor *) this, globalCtx) == 0) {
        func_800B8C50((Actor *) this, globalCtx);
    }
}
