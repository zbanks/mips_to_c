void func_8098F040(void *arg0, GlobalContext *arg1); /* static */
void func_8098F110(void *arg0, GlobalContext *arg1); /* static */
void func_8098F220(void *arg0, GlobalContext *arg1); /* static */
void func_8098F364(ObjMure3 *arg0, GlobalContext *arg1); /* static */
void func_8098F438(ObjMure3 *arg0, GlobalContext *arg1); /* static */
void func_8098F598(ObjMure3 *arg0);                 /* static */
void func_8098F5D0(ObjMure3 *arg0);                 /* static */
void func_8098F66C(ObjMure3 *arg0);                 /* static */
static ? D_8098F740;                                /* unable to generate initializer */
static InitChainEntry D_8098F748;                   /* unable to generate initializer */
static ? D_8098F754;                                /* unable to generate initializer */

typedef struct ObjMure3 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(ObjMure3 *, GlobalContext *);
    /* 0x0148 */ s32 unk148;                        /* inferred */
    /* 0x014C */ char pad14C[0x18];                 /* maybe part of unk148[7]? */
    /* 0x0164 */ u16 unk164;                        /* inferred */
    /* 0x0166 */ char pad166[0x2];                  /* maybe part of unk164[2]? */
} ObjMure3;                                         /* size 0x168 */

void func_8098F040(void *arg0, GlobalContext *arg1) {
    Vec3f sp48;
    Actor *temp_v0;
    s32 temp_s0;
    s32 phi_s0;

    Math_Vec3f_Copy(&sp48, arg0 + 0x24);
    phi_s0 = 0;
    do {
        if ((((s32) arg0->unk164 >> phi_s0) & 1) == 0) {
            temp_v0 = Item_DropCollectible2(arg1, &sp48, 0x10001U);
            (arg0 + (phi_s0 * 4))->unk148 = temp_v0;
            if (temp_v0 != 0) {
                temp_v0->room = arg0->unk3;
            }
        }
        temp_s0 = phi_s0 + 1;
        sp48.y += 20.0f;
        phi_s0 = temp_s0;
    } while (temp_s0 != 5);
}

void func_8098F110(void *arg0, GlobalContext *arg1) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    Actor *temp_v0;
    f32 *temp_a1;
    f32 temp_f24;
    f32 temp_f26;
    s32 temp_s1;
    s32 phi_s1;
    f32 phi_f20;

    temp_f24 = Math_SinS(arg0->unk32);
    temp_f26 = Math_CosS(arg0->unk32);
    sp64 = arg0->unk28;
    phi_s1 = 0;
    phi_f20 = -40.0f;
    do {
        if ((((s32) arg0->unk164 >> phi_s1) & 1) == 0) {
            temp_a1 = &sp60;
            sp60 = arg0->unk24 + (temp_f24 * phi_f20);
            sp68 = arg0->unk2C + (temp_f26 * phi_f20);
            temp_v0 = Item_DropCollectible2(arg1, (Vec3f *) temp_a1, 0x4000U);
            (arg0 + (phi_s1 * 4))->unk148 = temp_v0;
            if (temp_v0 != 0) {
                temp_v0->room = arg0->unk3;
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        phi_f20 += 20.0f;
    } while (temp_s1 != 5);
}

void func_8098F220(void *arg0, GlobalContext *arg1) {
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    Actor *temp_v0;
    Actor *temp_v0_2;
    f32 *temp_s6;
    s32 temp_s0;
    s32 phi_s0;
    s16 phi_s3;

    sp4C = arg0->unk28;
    temp_s6 = &sp48;
    phi_s0 = 0;
    phi_s3 = arg0->unk32;
    do {
        if ((((s32) arg0->unk164 >> phi_s0) & 1) == 0) {
            sp48 = (Math_SinS(phi_s3) * 40.0f) + arg0->unk24;
            sp50 = (Math_CosS(phi_s3) * 40.0f) + arg0->unk2C;
            temp_v0 = Item_DropCollectible2(arg1, (Vec3f *) temp_s6, 0x4000U);
            (arg0 + (phi_s0 * 4))->unk148 = temp_v0;
            if (temp_v0 != 0) {
                temp_v0->room = arg0->unk3;
            }
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        phi_s3 = (s16) (phi_s3 + 0x2AAA);
    } while (temp_s0 != 6);
    if ((((s32) arg0->unk164 >> 6) & 1) == 0) {
        sp48 = arg0->unk24;
        sp50 = arg0->unk2C;
        temp_v0_2 = Item_DropCollectible2(arg1, (Vec3f *) temp_s6, 0x4002U);
        arg0->unk160 = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_v0_2->room = arg0->unk3;
        }
    }
}

void func_8098F364(ObjMure3 *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s16 temp_s4;
    s32 temp_s0;
    u16 temp_v0;
    s32 phi_s0;
    Actor **phi_s1;

    temp_s4 = *(&D_8098F740 + ((((s32) arg0->actor.params >> 0xD) & 7) * 2));
    phi_s0 = 0;
    phi_s1 = arg0 + 0x148;
    if ((s32) temp_s4 > 0) {
        do {
            temp_v0 = arg0->unk164;
            if ((((s32) temp_v0 >> phi_s0) & 1) == 0) {
                temp_a0 = *phi_s1;
                if (temp_a0 != 0) {
                    if ((temp_a0->unk1A4 != 0) || (temp_a0->update == 0)) {
                        arg0->unk164 = temp_v0 | (1 << phi_s0);
                    } else {
                        Actor_MarkForDeath(temp_a0);
                    }
                }
            }
            temp_s0 = phi_s0 + 1;
            *phi_s1 = NULL;
            phi_s0 = temp_s0;
            phi_s1 += 4;
        } while (temp_s0 != temp_s4);
    }
}

void func_8098F438(ObjMure3 *arg0, GlobalContext *arg1) {
    s16 temp_s4;
    s32 temp_s2;
    void **temp_s1;
    ObjMure3 *phi_s0;
    s32 phi_s2;

    temp_s4 = *(&D_8098F740 + ((((s32) arg0->actor.params >> 0xD) & 7) * 2));
    phi_s0 = arg0;
    phi_s2 = 0;
    if ((s32) temp_s4 > 0) {
        do {
            if (phi_s0->unk148 != 0) {
                temp_s1 = phi_s0 + 0x148;
                if ((((s32) arg0->unk164 >> phi_s2) & 1) == 0) {
                    if ((*temp_s1)->unk1A4 != 0) {
                        Actor_SetSwitchFlag(arg1, arg0->actor.params & 0x7F);
                    }
                    if ((*temp_s1)->unk138 == 0) {
                        arg0->unk164 |= 1 << phi_s2;
                        phi_s0->unk148 = 0;
                    }
                }
            }
            temp_s2 = phi_s2 + 1;
            phi_s0 += 4;
            phi_s2 = temp_s2;
        } while (temp_s2 != temp_s4);
    }
}

void ObjMure3_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjMure3 *this = (ObjMure3 *) thisx;
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    Actor_ProcessInitChain(&this->actor, &D_8098F748);
    func_8098F598(this);
}

void ObjMure3_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjMure3 *this = (ObjMure3 *) thisx;

}

void func_8098F598(ObjMure3 *arg0) {
    arg0->actionFunc = func_8098F5AC;
}

void func_8098F5AC(ObjMure3 *this, GlobalContext *globalCtx) {
    func_8098F5D0();
}

void func_8098F5D0(ObjMure3 *arg0) {
    arg0->actionFunc = func_8098F5E4;
}

void func_8098F5E4(ObjMure3 *this, GlobalContext *globalCtx) {
    ObjMure3 *temp_a0;

    temp_a0 = this;
    if (Math3D_XZLengthSquared(this->actor.projectedPos.x, this->actor.projectedPos.z) < 1322500.0f) {
        temp_a0->actor.flags |= 0x10;
        this = temp_a0;
        *(&D_8098F754 + ((((s32) temp_a0->actor.params >> 0xD) & 7) * 4))(temp_a0, globalCtx);
        func_8098F66C(this);
    }
}

void func_8098F66C(ObjMure3 *arg0) {
    arg0->actionFunc = func_8098F680;
}

void func_8098F680(ObjMure3 *this, GlobalContext *globalCtx) {
    func_8098F438(this, globalCtx);
    if (Math3D_XZLengthSquared(this->actor.projectedPos.x, this->actor.projectedPos.z) >= 2102500.0f) {
        this->actor.flags &= -0x11;
        func_8098F364(this, globalCtx);
        func_8098F5D0(this);
    }
}

void ObjMure3_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjMure3 *this = (ObjMure3 *) thisx;
    this->actionFunc(this, globalCtx);
}

