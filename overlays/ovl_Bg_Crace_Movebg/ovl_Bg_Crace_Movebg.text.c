CRASHED

typedef struct BgCraceMovebg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x18];
    /* 0x15C */ void (*actionFunc)(BgCraceMovebg *, GlobalContext *);
    /* 0x160 */ char pad_160[0x10];                 /* maybe part of actionFunc[5]? */
    /* 0x170 */ s32 unk_170;
    /* 0x174 */ char pad_174[0x14];                 /* maybe part of unk_170[6]? */
    /* 0x188 */ Vec3f unk_188;                      /* inferred */
} BgCraceMovebg;                                    /* size = 0x194 */

struct _mips2c_stack_BgCraceMovebg_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgCraceMovebg_Update {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A7090C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A70970 {};              /* size 0x0 */

struct _mips2c_stack_func_80A7099C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A709E4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A70A08 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A70A84 {};              /* size 0x0 */

struct _mips2c_stack_func_80A70A9C {};              /* size 0x0 */

struct _mips2c_stack_func_80A70C04 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x14];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A70D74 {};              /* size 0x0 */

struct _mips2c_stack_func_80A70DA8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A70E2C {};              /* size 0x0 */

struct _mips2c_stack_func_80A70E70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A70F14 {};              /* size 0x0 */

struct _mips2c_stack_func_80A70F2C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A70FF4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A71040 {};              /* size 0x0 */

? func_80169FDC(GlobalContext *);                   /* extern */
s32 func_80A7090C(GlobalContext *arg0);             /* static */
void func_80A70970(void *arg0, ? arg1);             /* static */
void func_80A7099C(void *arg0, GlobalContext *arg1); /* static */
void func_80A709E4(void *arg0, GlobalContext *arg1); /* static */
void func_80A70A08(Actor *arg0, s32 arg1);          /* static */
void func_80A70A84(Actor *arg0, s32 arg1);          /* static */
void func_80A70A9C(s32 arg0, ? arg1);               /* static */
void func_80A70C04(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80A70D74(void *arg0, ? arg1);             /* static */
void func_80A70DA8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A70E2C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A70E70(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A70F14(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A70F2C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A70FF4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A71040(s32 arg0, ? arg1);               /* static */
extern Gfx D_060003A0;
static Vec3f D_80A710AC = {0.0f, 0.0f, 1.0f};

/*
Failed to decompile function BgCraceMovebg_Init:

Label L80A707DC refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

s32 func_80A7090C(GlobalContext *arg0) {
    s32 sp18;
    Actor *temp_v0;
    s32 phi_v1;

    sp18 = 0;
    temp_v0 = func_ActorCategoryIterateById(arg0, NULL, 4, 0x17F);
    phi_v1 = sp18;
    if (temp_v0 != 0) {
        phi_v1 = 1;
        if (Flags_GetSwitch(arg0, ((s32) temp_v0->params >> 7) & 0x7F) != 0) {
            phi_v1 = 2;
        }
    }
    return phi_v1;
}

void func_80A70970(void *arg0, ? arg1) {
    arg0->unk_164 = 0.0f;
    arg0->unk_160 = 0.0f;
    arg0->unk_15C = func_80A7099C;
    arg0->unk_28 = (f32) arg0->unk_C;
}

void func_80A7099C(void *arg0, GlobalContext *arg1) {
    if (Flags_GetSwitch(arg1, ((s32) arg0->unk_1C >> 4) & 0x7F) != 0) {
        func_80A709E4(arg0, arg1);
    }
}

void func_80A709E4(void *arg0, GlobalContext *arg1) {
    arg0->unk_15C = func_80A70A08;
    arg0->unk_164 = 180.0f;
}

void func_80A70A08(Actor *arg0, s32 arg1) {
    f32 temp_f0;

    func_800B9010(arg0, 0x2143U);
    Math_SmoothStepToF((f32 *) &arg0[1].params, arg0->unk_164, 2.0f, arg0[1].world.pos.y, 0.01f);
    temp_f0 = arg0->unk_160;
    arg0->world.pos.y = arg0->home.pos.y + temp_f0;
    if (arg0->unk_164 == temp_f0) {
        func_80A70A84(arg0, arg1);
    }
}

void func_80A70A84(Actor *arg0, s32 arg1) {
    arg0->unk_15C = func_80A70A9C;
}

void func_80A70A9C(s32 arg0, ? arg1) {

}

/*
Failed to decompile function BgCraceMovebg_Destroy:

Label L80A70B10 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void BgCraceMovebg_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_a3;
    BgCraceMovebg *temp_a2;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_v0;
    BgCraceMovebg *this = (BgCraceMovebg *) thisx;

    temp_a2 = this;
    temp_a3 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = temp_a2->actor.params & 0xF;
    if ((temp_v0 == 0) || (temp_v0 == 2)) {
        temp_v0_2 = temp_a2->actor.home.rot.y;
        temp_v1 = temp_a2->actor.yawTowardsPlayer - temp_v0_2;
        if (((s32) temp_v1 >= -0x4000) && ((s32) temp_v1 < 0x4001)) {
            temp_a2->actor.shape.rot.y = temp_v0_2;
        } else {
            temp_a2->actor.shape.rot.y = temp_v0_2 + 0x8000;
        }
    }
    this = temp_a2;
    sp1C = temp_a3;
    temp_a2->actionFunc(temp_a2, globalCtx);
    Math_Vec3f_Copy(&this->unk_188, (Vec3f *) &temp_a3[9].floorHeight);
}

void func_80A70C04(Actor *arg0, GlobalContext *arg1) {
    ? sp3C;
    ? sp30;
    Vec3f *sp2C;
    Vec3f *sp28;
    Vec3f *temp_a0;
    Vec3f *temp_v1;
    f32 temp_f0;

    if (((arg0->params & 0xF) != 2) && (temp_a0 = arg0 + 8, temp_v1 = arg1->actorCtx.actorList[2].first + 0xBEC, sp28 = temp_v1, sp2C = temp_a0, (func_8013E5CC(temp_a0, arg0 + 0x14, &D_80A710AC, arg0 + 0x188, temp_v1, (Vec3f *) &sp3C) != 0)) && (Matrix_RotateY((s16) ((s32) arg0->home.rot.y * -1), 0U), Math_Vec3f_Diff(sp28, sp2C, (Vec3f *) &sp30), SysMatrix_MultiplyVector3fByState((Vec3f *) &sp30, arg0 + 0x178), (fabsf(arg0->unk_178) < 100.0f)) && (temp_f0 = arg0->unk_17C, (temp_f0 >= -10.0f)) && (temp_f0 <= 180.0f)) {
        if (arg0[1].focus.pos.x < 0.0f) {
            Actor_SetSwitchFlag(arg1, (((s32) arg0->params >> 4) & 0x7F) + 1);
            arg0[1].world.pos.z |= 2;
            return;
        }
        Actor_UnsetSwitchFlag(arg1, (((s32) arg0->params >> 4) & 0x7F) + 1);
        arg0[1].world.pos.z &= -3;
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80A70D74(void *arg0, ? arg1) {
    arg0->unk_164 = 180.0f;
    arg0->unk_160 = 180.0f;
    arg0->unk_15C = func_80A70DA8;
    arg0->unk_28 = (f32) (arg0->unk_C + 180.0f);
}

void func_80A70DA8(Actor *arg0, GlobalContext *arg1) {
    arg0->world.pos.y = arg0->home.pos.y + arg0->unk_160;
    func_80A70C04(arg0, arg1);
    if ((arg0[1].world.pos.z & 1) != 0) {
        func_80A70E2C(arg0, arg1);
    }
    if (Flags_GetSwitch(arg1, ((s32) arg0->params >> 4) & 0x7F) != 0) {
        func_80A70F14(arg0, arg1);
    }
}

void func_80A70E2C(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_174 = (s32) ((((s32) arg0->params >> 0xB) & 0x1F) * 0xA);
    arg0->unk_164 = 180.0f;
    arg0->unk_160 = 180.0f;
    arg0->unk_15C = func_80A70E70;
}

void func_80A70E70(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_a1;
    s32 temp_v0;

    temp_a2 = arg0;
    temp_v0 = temp_a2->unk_174;
    if (temp_v0 > 0) {
        temp_a2->unk_174 = (s32) (temp_v0 - 1);
    }
    temp_a0 = temp_a2;
    temp_a2->world.pos.y = temp_a2->home.pos.y + temp_a2->unk_160;
    arg0 = temp_a2;
    func_80A70C04(temp_a0, arg1, temp_a2);
    if (arg0->unk_174 <= 0) {
        arg0->unk_160 = 180.0f;
        arg0->unk_164 = 0.0f;
        temp_a1 = (s32) arg0->params >> 4;
        arg0->world.pos.y = arg0->home.pos.y + 180.0f;
        arg0 = arg0;
        Actor_SetSwitchFlag(arg1, temp_a1 & 0x7F);
        func_80A70F14(arg0, arg1);
    }
}

void func_80A70F14(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_15C = func_80A70F2C;
}

void func_80A70F2C(Actor *arg0, GlobalContext *arg1) {
    arg0->world.pos.y = arg0->home.pos.y + arg0->unk_160;
    func_80A70C04(arg0, arg1);
    if (Math_StepToF(arg0 + 0x160, 0.0f, 1.0f) != 0) {
        if (((arg0[1].world.pos.z & 2) == 0) && (Flags_GetSwitch(arg1, (((s32) arg0->params >> 4) & 0x7F) + 1) == 0)) {
            arg1->unk_18845 = 1;
            func_80169FDC(arg1);
            play_sound(0x5801U);
        }
        func_80A70FF4(arg0, arg1);
        return;
    }
    func_800B9010(arg0, 0x21C3U);
}

void func_80A70FF4(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_164 = 0.0f;
    arg0->unk_160 = 0.0f;
    arg0->world.pos.y = arg0->home.pos.y;
    Audio_PlayActorSound2(arg0, 0x2893U);
    arg0->unk_15C = func_80A71040;
}

void func_80A71040(s32 arg0, ? arg1) {

}

void BgCraceMovebg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgCraceMovebg *this = (BgCraceMovebg *) thisx;
    func_800BDFC0(globalCtx, &D_060003A0);
}
