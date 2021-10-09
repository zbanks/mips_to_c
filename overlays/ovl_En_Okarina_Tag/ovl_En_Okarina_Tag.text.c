s32 func_800B8718(EnOkarinaTag *, GlobalContext *); /* extern */
? func_800B874C(f32, EnOkarinaTag *, GlobalContext *, f32, f32); /* extern */

typedef struct EnOkarinaTag {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnOkarinaTag *, GlobalContext *);
    /* 0x0148 */ s16 unk148;                        /* inferred */
    /* 0x014A */ s16 unk14A;                        /* inferred */
    /* 0x014C */ s32 unk14C;                        /* inferred */
    /* 0x0150 */ s8 unk150;                         /* inferred */
    /* 0x0151 */ char pad151[0x3];                  /* maybe part of unk150[4]? */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ f32 unk158;                        /* inferred */
} EnOkarinaTag;                                     /* size 0x15C */

void EnOkarinaTag_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnOkarinaTag *this = (EnOkarinaTag *) thisx;

}

void EnOkarinaTag_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnOkarinaTag *this = (EnOkarinaTag *) thisx;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_a1;
    s16 temp_v1;
    s32 temp_v0;
    f32 phi_f0;
    f32 phi_f0_2;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v1 = this->actor.params;
    temp_a1 = this->actor.world.rot.z;
    this->actor.flags &= -2;
    this->unk148 = ((s32) temp_v1 >> 0xB) & 0x1F;
    this->unk14A = ((s32) temp_v1 >> 7) & 0xF;
    this->unk14C = temp_v1 & 0x7F;
    phi_f0_2 = 0.0f;
    phi_v0 = 0;
    phi_v0_2 = 0;
    if ((s32) temp_a1 > 0) {
        temp_f0 = (f32) temp_a1;
        phi_f0 = temp_f0;
        phi_f0_2 = temp_f0;
        if (temp_f0 > 10.0f) {
            do {
                temp_f0_2 = phi_f0 - 10.0f;
                temp_v0 = phi_v0_2 + 1;
                phi_f0 = temp_f0_2;
                phi_f0_2 = temp_f0_2;
                phi_v0 = temp_v0;
                phi_v0_2 = temp_v0;
            } while (temp_f0_2 > 10.0f);
        }
    }
    this->unk154 = phi_f0_2 * 50.0f;
    this->unk158 = (f32) phi_v0 * 50.0f;
    if (this->unk14C == 0x7F) {
        this->unk14C = -1;
    }
    if (this->unk14A == 0xF) {
        this->unk14A = -1;
    }
    this->actor.targetMode = 1;
    this->actionFunc = func_8093E518;
}

void func_8093E518(EnOkarinaTag *this, GlobalContext *globalCtx) {
    u16 sp24;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a2;
    u16 temp_v1;
    u16 phi_v1;
    s32 phi_v1_2;
    f32 phi_f0;
    f32 phi_f2;

    temp_a2 = this->unk14C;
    if (((temp_a2 < 0) || (((this->unk148 != 0) || (Flags_GetSwitch(globalCtx, temp_a2) == 0)) && ((this->unk148 != 1) || (Flags_GetSwitch(globalCtx, this->unk14C) != 0)))) && ((temp_v0 = this->unk14A, temp_v1 = temp_v0 & 0xFFFF, phi_v1 = temp_v1, (temp_v1 != 6)) || (phi_v1 = 0xAU, (gSaveContext.unk_F65 != 0)))) {
        if (temp_v0 == -1) {
            phi_v1 = 0U;
        }
        sp24 = phi_v1;
        if (func_800B8718(this, globalCtx) != 0) {
            func_80152434(globalCtx, (phi_v1 + 0x29) & 0xFFFF);
            this->actionFunc = func_8093E68C;
            return;
        }
        temp_v0_2 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
        phi_v1_2 = temp_v0_2 << 0x10;
        if ((s32) temp_v0_2 < 0) {
            phi_v1_2 = (s32) temp_v0_2 * -0x10000;
        }
        if ((phi_v1_2 >> 0x10) >= 0x4300) {
            this->unk150 = 0;
            return;
        }
        temp_f0 = this->unk154;
        this->unk150 = 1;
        phi_f0 = temp_f0;
        if (temp_f0 == 0.0f) {
            phi_f0 = 50000.0f;
        }
        temp_f2 = this->unk158;
        phi_f2 = temp_f2;
        if (temp_f2 == 0.0f) {
            phi_f2 = 50000.0f;
        }
        func_800B874C(0.0f, this, globalCtx, phi_f0, phi_f2);
        // Duplicate return node #20. Try simplifying control flow for better match
    }
}

void func_8093E68C(EnOkarinaTag *this, GlobalContext *globalCtx) {
    s16 temp_v0_2;
    s32 temp_a1;
    u16 temp_v0;

    temp_v0 = globalCtx->msgCtx.unk1202A;
    if (temp_v0 == 4) {
        this->actionFunc = func_8093E518;
        return;
    }
    if ((temp_v0 == 3) || ((this->unk14A == -1) && ((temp_v0 == 5) || (temp_v0 == 6) || (temp_v0 == 7) || (temp_v0 == 8) || (temp_v0 == 0xA) || (temp_v0 == 9) || (temp_v0 == 0xF)))) {
        temp_a1 = this->unk14C;
        if (temp_a1 >= 0) {
            temp_v0_2 = this->unk148;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 1) {
                    if (temp_v0_2 != 2) {

                    } else if (Flags_GetSwitch(globalCtx, temp_a1) != 0) {
                        Actor_UnsetSwitchFlag(globalCtx, this->unk14C);
                    } else {
                        Actor_SetSwitchFlag(globalCtx, this->unk14C);
                    }
                } else {
                    Actor_UnsetSwitchFlag(globalCtx, temp_a1);
                }
            } else {
                Actor_SetSwitchFlag(globalCtx, temp_a1);
            }
        }
        globalCtx->msgCtx.unk1202A = 4;
        play_sound(0x4802U);
        this->actionFunc = func_8093E518;
    }
}

void EnOkarinaTag_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnOkarinaTag *this = (EnOkarinaTag *) thisx;
    this->actionFunc(this, globalCtx);
}

