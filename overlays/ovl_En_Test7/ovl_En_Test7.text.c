CRASHED

/*
Internal error while decompiling function func_80AF2350:

Traceback (most recent call last):
  File "main.py", line 0, in run
    raise function_info
  File "main.py", line 0, in run
    info = translate_to_ast(function, options, global_info)
  File "translate.py", line 0, in translate_to_ast
    assert fn_sig is not None, "fn_type is known to be a function"
AssertionError: fn_type is known to be a function
*/
/*
Internal error while decompiling function func_80AF2AE8:

Traceback (most recent call last):
  File "main.py", line 0, in run
    raise function_info
  File "main.py", line 0, in run
    info = translate_to_ast(function, options, global_info)
  File "translate.py", line 0, in translate_to_ast
    assert fn_sig is not None, "fn_type is known to be a function"
AssertionError: fn_type is known to be a function
*/
/*
Internal error while decompiling function func_80AF2EC8:

Traceback (most recent call last):
  File "main.py", line 0, in run
    raise function_info
  File "main.py", line 0, in run
    info = translate_to_ast(function, options, global_info)
  File "translate.py", line 0, in translate_to_ast
    assert fn_sig is not None, "fn_type is known to be a function"
AssertionError: fn_type is known to be a function
*/
? func_800FD698(GlobalContext *, ?, ?, f32);        /* extern */
? func_8016566C(?);                                 /* extern */
? func_80165690();                                  /* extern */
? func_80183430(LightInfo *, ? *, s32 *, ? *, ? *, s32); /* extern */
? func_801834A8(LightInfo *, s32 *);                /* extern */
s32 func_80183DE0(s32);                             /* extern */
? func_8018450C(GlobalContext *, LightInfo *, Gfx *, ? (*)(s32, ?, ?, s32 *, s32), s32, EnTest7 *); /* extern */
void func_80AF082C(EnTest7 *arg0, void (*arg1)(EnTest7 *, GlobalContext *, EnTest7 *), void (*)(EnTest7 *, ?), void (*)(EnTest7 *, GlobalContext *), void (*)(EnTest7 *, ?)); /* static */
void func_80AF0838(s32 *arg0);                      /* static */
void func_80AF0984(s32 *arg0, f32 *arg1, s32 *arg2, s32 *); /* static */
void func_80AF0C30(s32 *arg0, f32 *arg1, s32 *arg2, f32 *, ?); /* static */
void func_80AF0CDC(GlobalContext *arg0, void *arg1); /* static */
void func_80AF10D8(GlobalContext *arg0, void *arg1); /* static */
void func_80AF118C(GlobalContext *arg0, void *arg1, EnTest7 *arg2, s32 arg3, s32 arg4); /* static */
void func_80AF14FC(GraphicsContext **arg0, s32 *arg1); /* static */
void func_80AF1730(f32 *arg0);                      /* static */
void func_80AF19A8(EnTest7 *arg0, GlobalContext *arg1, EnTest7 *); /* static */
void func_80AF1A2C(EnTest7 *arg0, GlobalContext *arg1, EnTest7 *); /* static */
void func_80AF1B68(EnTest7 *arg0, void (*arg1)(EnTest7 *, GlobalContext *, EnTest7 *)); /* static */
void func_80AF1CA0(EnTest7 *arg0, GlobalContext *arg1, EnTest7 *); /* static */
void func_80AF1E44(EnTest7 *arg0, GlobalContext *arg1, EnTest7 *); /* static */
void func_80AF1F48(EnTest7 *arg0, ? arg1);          /* static */
void func_80AF2030(EnTest7 *arg0, GlobalContext *arg1, EnTest7 *); /* static */
void func_80AF21E8(EnTest7 *arg0, GlobalContext *arg1); /* static */
void func_80AF2318(EnTest7 *arg0, GlobalContext *arg1, EnTest7 *); /* static */
void func_80AF24D8(GlobalContext *arg0, GlobalContext *arg1, f32 arg2); /* static */
void func_80AF2654(GlobalContext *arg0, GlobalContext *arg1, f32 arg2); /* static */
void func_80AF2808(EnTest7 *arg0, GlobalContext *arg1, f32 arg2); /* static */
void func_80AF2938(EnTest7 *arg0, GlobalContext *arg1, EnTest7 *); /* static */
void func_80AF29C0(void *arg0, GlobalContext *arg1); /* static */
void func_80AF2BAC(Actor *arg0, GlobalContext *arg1, void *arg2, f32 arg3); /* static */
void func_80AF2C48(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AF2DB4(s32 arg0, GlobalContext *arg1);  /* static */
void func_80AF2F98(EnTest7 *arg0, GlobalContext *arg1, EnTest7 *); /* static */
void func_80AF30F4(EnTest7 *arg0, GlobalContext *arg1, EnTest7 *); /* static */
? func_80AF31D0(s32 arg0, ? arg1, ? arg2, s32 *arg3, s32 arg5); /* static */
extern Gfx D_04080FC8;
extern ? D_04085640;
static s32 D_80AF3410 = 0;
static Vec3f D_80AF3414 = {0.0f, 1.0f, 0.0f};
static Vec3f D_80AF3420 = {0.0f, 0.0f, 1.0f};
static ? D_80AF342C;                                /* unable to generate initializer */
static ? D_80AF3430;                                /* unable to generate initializer */
static ? D_80AF3434;                                /* unable to generate initializer */
static ? D_80AF3438;                                /* unable to generate initializer */
static s16 D_80AF3450 = 0;
static s16 D_80AF3452 = 0x31C7;
static f32 D_80AF3454 = 3500.0f;
static MtxF D_80AF38B0;
static Vec3f D_80AF38F0;                            /* type too large by 8 */
static f32 D_80AF38F4;
static f32 D_80AF38F8;
static Vec3f D_80AF3900;
static EnTest7 func_80AF2350;
static EnTest7 func_80AF2AE8;
static EnTest7 func_80AF2EC8;

typedef struct EnTest7 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ f32 unk148;                        /* inferred */
    /* 0x014C */ f32 unk14C;                        /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ s16 unk158;                        /* inferred */
    /* 0x015A */ char pad15A[0x2];                  /* maybe part of unk158[2]? */
    /* 0x015C */ s32 unk15C;                        /* inferred */
    /* 0x0160 */ char pad160[0x176C];               /* maybe part of unk15C[1500]? */
    /* 0x18CC */ LightInfo unk18CC;                 /* inferred */
    /* 0x18DA */ char pad18DA[0x2];
    /* 0x18DC */ f32 unk18DC;                       /* inferred */
    /* 0x18E0 */ char pad18E0[0x4];                 /* maybe part of unk18DC[2]? */
    /* 0x18E4 */ void *unk18E4;                     /* inferred */
    /* 0x18E8 */ char pad18E8[0x14];                /* maybe part of unk18E4[6]? */
    /* 0x18FC */ ? unk18FC;                         /* inferred */
    /* 0x18FD */ char pad18FD[0x7];
    /* 0x1904 */ s16 unk1904;                       /* inferred */
    /* 0x1906 */ char pad1906[0x2A2];               /* maybe part of unk1904[338]? */
    /* 0x1BA8 */ ? unk1BA8;                         /* inferred */
    /* 0x1BA9 */ char pad1BA9[0x2AB];
    /* 0x1E54 */ s32 unk1E54;                       /* inferred */
    /* 0x1E58 */ void (*unk1E58)(EnTest7 *, GlobalContext *, EnTest7 *); /* inferred */
    /* 0x1E5C */ void (*actionFunc)(EnTest7 *, GlobalContext *);
    /* 0x1E60 */ f32 unk1E60;                       /* inferred */
    /* 0x1E64 */ f32 unk1E64;                       /* inferred */
    /* 0x1E68 */ f32 unk1E68;                       /* inferred */
    /* 0x1E6C */ f32 unk1E6C;                       /* inferred */
    /* 0x1E70 */ f32 unk1E70;                       /* inferred */
    /* 0x1E74 */ f32 unk1E74;                       /* inferred */
    /* 0x1E78 */ f32 unk1E78;                       /* inferred */
    /* 0x1E7C */ LightNode *unk1E7C;                /* inferred */
    /* 0x1E80 */ LightInfo unk1E80;                 /* inferred */
    /* 0x1E8E */ s16 unk1E8E;                       /* inferred */
    /* 0x1E90 */ f32 unk1E90;                       /* inferred */
    /* 0x1E94 */ f32 unk1E94;                       /* inferred */
    /* 0x1E98 */ void (*unk1E98)(Actor *, GlobalContext *); /* inferred */
} EnTest7;                                          /* size 0x1E9C */

void EnTest7_SetupAction(EnTest7 *this, void (*actionFunc)(EnTest7 *, GlobalContext *)) {
    EnTest7 *self = (EnTest7 *) this;
    self->actionFunc = actionFunc;
}

void func_80AF082C(EnTest7 *arg0, void (*arg1)(EnTest7 *, GlobalContext *)) {
    arg0->unk1E58 = arg1;
}

void func_80AF0838(s32 *arg0) {
    s32 temp_v0;
    s32 *phi_v1;
    s32 phi_v0;

    phi_v1 = arg0;
    phi_v0 = 0;
    do {
        phi_v1->unk0 = 0;
        phi_v1->unk4 = 0;
        phi_v1->unk8 = 0.0f;
        phi_v1->unkC = 0.0f;
        phi_v1->unk10 = 0.0f;
        phi_v1->unk14 = 0.0f;
        phi_v1->unk18 = 0.0f;
        phi_v1->unk1C = 0.0f;
        phi_v1->unk20 = 0.0f;
        phi_v1->unk24 = 0.0f;
        phi_v1->unk28 = 0.0f;
        phi_v1->unk2C = 0.00001f;
        phi_v1->unk30 = 0;
        phi_v1->unk32 = 0;
        phi_v1->unk34 = 0;
        phi_v1->unk36 = 0;
        phi_v1->unk38 = 0;
        phi_v1->unk3A = 0;
        temp_v0 = phi_v0 + 4;
        phi_v1->unk3C = 0;
        phi_v1->unk40 = 0;
        phi_v1->unk44 = 0.0f;
        phi_v1->unk48 = 0.0f;
        phi_v1->unk4C = 0.0f;
        phi_v1->unk50 = 0.0f;
        phi_v1->unk54 = 0.0f;
        phi_v1->unk58 = 0.0f;
        phi_v1->unk5C = 0.0f;
        phi_v1->unk60 = 0.0f;
        phi_v1->unk64 = 0.0f;
        phi_v1->unk68 = 0.00001f;
        phi_v1->unk6C = 0;
        phi_v1->unk6E = 0;
        phi_v1->unk70 = 0;
        phi_v1->unk72 = 0;
        phi_v1->unk74 = 0;
        phi_v1->unk76 = 0;
        phi_v1->unk78 = 0;
        phi_v1->unk7C = 0;
        phi_v1->unk80 = 0.0f;
        phi_v1->unk84 = 0.0f;
        phi_v1->unk88 = 0.0f;
        phi_v1->unk8C = 0.0f;
        phi_v1->unk90 = 0.0f;
        phi_v1->unk94 = 0.0f;
        phi_v1->unk98 = 0.0f;
        phi_v1->unk9C = 0.0f;
        phi_v1->unkA0 = 0.0f;
        phi_v1->unkA4 = 0.00001f;
        phi_v1->unkA8 = 0;
        phi_v1->unkAA = 0;
        phi_v1->unkAC = 0;
        phi_v1->unkAE = 0;
        phi_v1->unkB0 = 0;
        phi_v1->unkB2 = 0;
        phi_v1->unkB4 = 0;
        phi_v1->unkB8 = 0;
        phi_v1->unkBC = 0.0f;
        phi_v1->unkC0 = 0.0f;
        phi_v1->unkC4 = 0.0f;
        phi_v1->unkC8 = 0.0f;
        phi_v1->unkCC = 0.0f;
        phi_v1->unkD0 = 0.0f;
        phi_v1->unkD4 = 0.0f;
        phi_v1->unkD8 = 0.0f;
        phi_v1->unkDC = 0.0f;
        phi_v1->unkE0 = 0.00001f;
        phi_v1->unkE4 = 0;
        phi_v1->unkE6 = 0;
        phi_v1->unkE8 = 0;
        phi_v1->unkEA = 0;
        phi_v1->unkEC = 0;
        phi_v1->unkEE = 0;
        phi_v1 += 0xF0;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0x64);
}

void func_80AF0984(s32 *arg0, f32 *arg1, s32 *arg2) {
    s16 sp26;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f4;

    sp26 = (s16) (s32) (Rand_ZeroOne() * 65535.0f);
    arg0->unk8 = (?32) arg1->unk0;
    arg0->unkC = (f32) arg1->unk4;
    arg0->unk10 = (?32) arg1->unk8;
    if (arg2 != 0) {
        Math_CosS(sp26);
        arg0->unk8 = (f32) arg0->unk8;
        arg0->unkC = (f32) (arg0->unkC + ((Rand_ZeroOne() * 100.0f) - 20.0f));
        Math_SinS(sp26);
        arg0->unk10 = (?32) arg0->unk10;
    }
    sp20 = (Rand_ZeroOne() * 4.0f) + 2.0f;
    arg0->unk14 = (f32) (Math_CosS(sp26) * sp20);
    arg0->unk18 = Rand_ZeroOne();
    temp_f4 = Math_SinS(sp26) * sp20;
    arg0->unk20 = 0.0f;
    arg0->unk24 = 0.0f;
    arg0->unk28 = 0.0f;
    arg0->unk2C = 0.25f;
    arg0->unk1C = temp_f4;
    arg0->unk30 = (s16) (s32) (Rand_ZeroOne() * 65536.0f);
    arg0->unk32 = (s16) (s32) (Rand_ZeroOne() * 65536.0f);
    temp_f0 = Rand_ZeroOne();
    arg0->unk4 = 0x3C;
    arg0->unk34 = (s16) (s32) (temp_f0 * 65536.0f);
    if (Rand_ZeroOne() < 0.9f) {
        arg0->unk0 = 1;
        arg0->unk30 = (s16) (s32) (Rand_ZeroOne() * 65536.0f);
        arg0->unk32 = (s16) (s32) (Rand_ZeroOne() * 65536.0f);
        temp_f0_2 = Rand_ZeroOne();
        arg0->unk36 = 0;
        arg0->unk38 = 0;
        arg0->unk3A = 0;
        arg0->unk34 = (s16) (s32) (temp_f0_2 * 65536.0f);
        return;
    }
    arg0->unk0 = 2;
    arg0->unk30 = 0;
    arg0->unk32 = 0;
    temp_f0_3 = Rand_ZeroOne();
    arg0->unk36 = 0;
    arg0->unk34 = (s16) (s32) (temp_f0_3 * 5000.0f);
    arg0->unk38 = (s16) (s32) ((Rand_ZeroOne() * 8000.0f) + 2000.0f);
    if (Rand_ZeroOne() > 0.5f) {
        arg0->unk38 = (s16) -(s32) arg0->unk38;
    }
    arg0->unk3A = 0;
}

void func_80AF0C30(s32 *arg0, f32 *arg1, s32 *arg2) {
    s32 sp1C;
    s32 temp_v0;
    s32 temp_v1;
    s32 *phi_a3;
    s32 phi_v0;
    s32 phi_t0;
    s32 phi_v1;

    phi_a3 = arg0;
    phi_v0 = 0;
    phi_t0 = 0;
loop_1:
    if (*phi_a3 == 0) {
        sp1C = phi_v0;
        func_80AF0984(phi_a3, arg1, arg2, phi_a3);
        D_80AF3410 = phi_v0;
        phi_t0 = 1;
    } else {
        temp_v0 = phi_v0 + 1;
        phi_a3 += 0x3C;
        phi_v0 = temp_v0;
        if (temp_v0 != 0x64) {
            goto loop_1;
        }
    }
    if (phi_t0 == 0) {
        temp_v1 = D_80AF3410 + 1;
        phi_v1 = temp_v1;
        if (temp_v1 >= 0x64) {
            phi_v1 = 0;
        }
        func_80AF0984((phi_v1 * 0x3C) + arg0, arg1, arg2);
    }
}

void func_80AF0CDC(GlobalContext *arg0, void *arg1) {
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v0;
    f32 phi_f8;

    temp_v0 = arg1->unk4;
    sp24 = 0;
    sp2C = temp_v0 % 0x29;
    sp28 = (s32) (temp_v0 + 0x1B58) % 0x29;
    SkinMatrix_SetRotateRPY(&D_80AF38B0, arg1->unk30, arg1->unk32, arg1->unk34);
    SkinMatrix_Vec3fMtxFMultXYZ(&D_80AF38B0, &D_80AF3414, &D_80AF38F0);
    SkinMatrix_Vec3fMtxFMultXYZ(&D_80AF38B0, &D_80AF3420, &D_80AF3900);
    temp_v0_2 = arg1->unk30;
    if ((s32) temp_v0_2 < 0x3448) {
        arg1->unk30 = (s16) (temp_v0_2 + 0x384);
    } else if ((s32) temp_v0_2 >= 0x4BB9) {
        arg1->unk30 = (s16) (temp_v0_2 - 0x384);
    } else {
        arg1->unk30 = (s16) (s32) ((Math_SinS((s16) (s32) (((f32) sp2C * 65535.0f) / 41.0f)) * 2000.0f) + 16384.0f);
    }
    temp_v0_3 = arg1->unk32;
    if ((s32) temp_v0_3 < -0xBB8) {
        arg1->unk32 = (s16) (temp_v0_3 + 0x384);
    } else if ((s32) temp_v0_3 >= 0xBB9) {
        arg1->unk32 = (s16) (temp_v0_3 - 0x384);
    } else {
        sp24 = 1;
        arg1->unk32 = (s16) (s32) (Math_SinS((s16) (s32) (((f32) sp28 * 65535.0f) / 41.0f)) * 2000.0f);
    }
    if (sp24 == 1) {
        if (D_80AF38F4 < 0.0f) {
            arg1->unk14 = (f32) (arg1->unk14 + (D_80AF38F4 * 0.5f));
            arg1->unk18 = (f32) (arg1->unk18 + ((D_80AF38F4 * 0.5f) + 0.08f));
            phi_f8 = arg1->unk1C + (D_80AF38F8 * 0.5f);
            goto block_17;
        }
        arg1->unk14 = (f32) (arg1->unk14 + (-D_80AF38F4 * 0.5f));
        arg1->unk18 = (f32) (arg1->unk18 + ((-D_80AF38F4 * 0.5f) + 0.08f));
        arg1->unk1C = (f32) (arg1->unk1C + (-D_80AF38F8 * 0.5f));
    } else if (D_80AF38F4 < 0.0f) {
        arg1->unk14 = (f32) (arg1->unk14 + (D_80AF38F4 * 0.2f));
        arg1->unk18 = (f32) (arg1->unk18 + ((D_80AF38F4 * 0.2f) + 0.08f));
        arg1->unk1C = (f32) (arg1->unk1C + (D_80AF38F8 * 0.2f));
    } else {
        arg1->unk14 = (f32) (arg1->unk14 + (-D_80AF38F4 * 0.2f));
        arg1->unk18 = (f32) (arg1->unk18 + ((-D_80AF38F4 * 0.2f) + 0.08f));
        phi_f8 = arg1->unk1C + (-D_80AF38F8 * 0.2f);
block_17:
        arg1->unk1C = phi_f8;
    }
    arg1->unk8 = (f32) (arg1->unk8 + arg1->unk14);
    arg1->unkC = (f32) (arg1->unkC + arg1->unk18);
    arg1->unk10 = (f32) (arg1->unk10 + arg1->unk1C);
}

void func_80AF10D8(GlobalContext *arg0, void *arg1) {
    f32 temp_f0;

    arg1->unk32 = (s16) (arg1->unk32 + arg1->unk38);
    arg1->unk20 = Rand_Centered();
    arg1->unk24 = (f32) (Rand_Centered() + -0.01f);
    temp_f0 = Rand_Centered();
    arg1->unk28 = temp_f0;
    arg1->unk14 = (f32) (arg1->unk14 + arg1->unk20);
    arg1->unk18 = (f32) (arg1->unk18 + arg1->unk24);
    arg1->unk1C = (f32) (arg1->unk1C + temp_f0);
    arg1->unk8 = (f32) (arg1->unk8 + arg1->unk14);
    arg1->unkC = (f32) (arg1->unkC + arg1->unk18);
    arg1->unk10 = (f32) (arg1->unk10 + arg1->unk1C);
}

void func_80AF118C(GlobalContext *arg0, void *arg1, EnTest7 *arg2, s32 arg3, s32 arg4) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f20_6;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    s32 temp_s3;
    s32 temp_v0;
    void *phi_s0;
    s16 phi_s1;
    s32 phi_s3;

    phi_s0 = arg1;
    phi_s3 = 0;
    do {
        temp_v0 = phi_s0->unk0;
        if (temp_v0 != 0) {
            if (temp_v0 == 1) {
                func_80AF0CDC(arg0, phi_s0);
            } else {
                func_80AF10D8(arg0, phi_s0);
            }
            if (arg3 != 0) {
                temp_f22 = phi_s0->unk8 - arg2->actor.world.pos.x;
                temp_f24 = phi_s0->unk10 - arg2->actor.world.pos.z;
                temp_f0 = (temp_f22 * temp_f22) + (temp_f24 * temp_f24);
                phi_s1 = -0x2710;
                if (temp_f0 > 400.0f) {
                    phi_s1 = (s16) (s32) ((f32) -0x2710 / (((temp_f0 - 400.0f) * 0.00125f) + 1.0f));
                }
                temp_f20 = Math_CosS(phi_s1);
                temp_f26 = (temp_f22 * temp_f20) - (Math_SinS(phi_s1) * temp_f24);
                temp_f20_2 = Math_SinS(phi_s1);
                temp_f4 = Math_CosS(phi_s1) * temp_f24;
                temp_f22_2 = phi_s0->unk14;
                temp_f24_2 = phi_s0->unk1C;
                phi_s0->unk8 = (f32) (arg2->actor.world.pos.x + temp_f26);
                phi_s0->unk10 = (f32) (arg2->actor.world.pos.z + (temp_f4 + (temp_f22 * temp_f20_2)));
                temp_f20_3 = Math_CosS(phi_s1);
                phi_s0->unk14 = (f32) ((temp_f22_2 * temp_f20_3) - (Math_SinS(phi_s1) * temp_f24_2));
                temp_f20_4 = Math_SinS(phi_s1);
                temp_f24_3 = phi_s0->unk28;
                temp_f22_3 = phi_s0->unk20;
                phi_s0->unk1C = (f32) ((Math_CosS(phi_s1) * temp_f24_2) + (temp_f22_2 * temp_f20_4));
                temp_f20_5 = Math_CosS(phi_s1);
                phi_s0->unk20 = (f32) ((temp_f22_3 * temp_f20_5) - (Math_SinS(phi_s1) * temp_f24_3));
                temp_f20_6 = Math_SinS(phi_s1);
                phi_s0->unk28 = (f32) ((Math_CosS(phi_s1) * temp_f24_3) + (temp_f22_3 * temp_f20_6));
            }
            if (arg4 != 0) {
                temp_a0 = &sp8C;
                sp8C = phi_s0->unk8 - arg2->actor.world.pos.x;
                temp_f4_2 = phi_s0->unkC - (arg2->actor.world.pos.y + 40.0f);
                sp90 = temp_f4_2;
                sp94 = phi_s0->unk10 - arg2->actor.world.pos.z;
                temp_f2 = 1.0f - (0.5f / ((Math3D_Vec3fMagnitude((Vec3f *) temp_a0) / 500.0f) + 1.0f));
                temp_f18 = sp8C * temp_f2;
                temp_f10 = temp_f4_2 * temp_f2;
                temp_f16 = sp94 * temp_f2;
                sp8C = temp_f18;
                sp90 = temp_f10;
                sp94 = temp_f16;
                phi_s0->unk8 = (f32) (arg2->actor.world.pos.x + temp_f18);
                phi_s0->unkC = (f32) (arg2->actor.world.pos.y + sp90 + 40.0f);
                phi_s0->unk10 = (f32) (arg2->actor.world.pos.z + sp94);
            }
        }
        temp_s3 = phi_s3 + 0x3C;
        phi_s0 += 0x3C;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x1770);
}

void func_80AF14FC(GraphicsContext **arg0, s32 *arg1) {
    MtxF sp6C;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    Mtx *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    s32 temp_s2;
    s32 *phi_s0;
    s32 phi_s2;

    temp_a0 = *arg0;
    temp_s1 = temp_a0;
    func_8012C1C0(temp_a0);
    SysMatrix_StatePush();
    temp_v1 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = -1;
    temp_v1->words.w0 = 0xFA000080;
    temp_v1_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = -1;
    temp_v1_2->words.w0 = 0xFB000000;
    phi_s0 = arg1;
    phi_s2 = 0;
    do {
        if (phi_s0->unk0 != 0) {
            temp_f12 = phi_s0->unk8;
            if ((temp_f12 > 30000.0f) || (temp_f12 < -30000.0f) || (temp_f14 = phi_s0->unkC, (temp_f14 > 30000.0f)) || (temp_f14 < -30000.0f) || (temp_f0 = phi_s0->unk10, (temp_f0 > 30000.0f)) || (temp_f0 < -30000.0f)) {
                phi_s0->unk0 = 0;
            } else {
                SysMatrix_InsertTranslation(temp_f12, temp_f14, temp_f0, 0);
                if (phi_s0->unk0 == 1) {
                    SysMatrix_InsertRotation(phi_s0->unk30, phi_s0->unk32, phi_s0->unk34, 1);
                } else {
                    SkinMatrix_SetRotateYRP(&sp6C, phi_s0->unk30, phi_s0->unk32, phi_s0->unk34);
                    SysMatrix_InsertMatrix(&sp6C, 1);
                }
                temp_f12_2 = phi_s0->unk2C;
                Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
                if (phi_s0->unk0 == 2) {
                    SysMatrix_InsertTranslation(0.0f, 30.0f, 0.0f, 1);
                }
                temp_v0 = Matrix_NewMtx(*arg0);
                if (temp_v0 != 0) {
                    temp_v1_3 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v1_3 + 8;
                    temp_v1_3->words.w1 = (u32) temp_v0;
                    temp_v1_3->words.w0 = 0xDA380003;
                    temp_v1_4 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v1_4 + 8;
                    temp_v1_4->words.w1 = (u32) &D_04081628;
                    temp_v1_4->words.w0 = 0xDE000000;
                }
            }
        }
        temp_s2 = phi_s2 + 0x3C;
        phi_s0 += 0x3C;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x1770);
    SysMatrix_StatePop();
}

void func_80AF1730(f32 *arg0) {
    arg0->unk0 = 0.0f;
    arg0->unk4 = 0.0f;
    arg0->unk8 = 1.0f;
    arg0->unkC = 1.0f;
    arg0->unk10 = 0;
}

void EnTest7_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTest7 *this = (EnTest7 *) thisx;
    Actor *sp40;
    f32 sp34;
    LightInfo *sp30;
    Actor *temp_s1;
    LightInfo *temp_a0;
    LightInfo *temp_a0_3;
    f32 temp_f18;
    s16 temp_a0_2;
    s16 temp_v1;

    temp_a0 = &this->unk18CC;
    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    sp40 = temp_s1;
    temp_v1 = temp_s1->shape.rot.y;
    this->unk144 = 0;
    this->unk1E54 = 0;
    this->actor.shape.rot.y = temp_v1;
    this->actor.world.rot.y = temp_v1;
    this->unk1E8E = temp_s1->shape.rot.y;
    this->unk1E90 = temp_s1->scale.x;
    this->unk1E94 = temp_s1->scale.z;
    sp30 = temp_a0;
    func_80183430(temp_a0, &D_04085640, &D_04083534, &this->unk18FC, &this->unk1BA8, 0);
    func_801834A8(temp_a0, &D_04083534);
    func_80AF0838(&this->unk15C);
    func_80AF1730(&this->unk148);
    if (this->actor.params == -1) {
        func_80AF082C(this, func_80AF2938);
        EnTest7_SetupAction(this, NULL);
    } else {
        func_80AF082C(this, func_80AF19A8);
        EnTest7_SetupAction(this, func_80AF2854);
        func_801A2E54(0x55);
    }
    temp_a0_2 = globalCtx->unk_1879C[8];
    if (temp_a0_2 == -1) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    ActorCutscene_SetIntentToPlay(temp_a0_2);
    sp40->unkA6C = (s32) (sp40->unkA6C | 0x20);
    sp34 = Math_SinS(this->unk1E8E);
    temp_a0_3 = &this->unk1E80;
    temp_f18 = Math_CosS(this->unk1E8E) * 90.0f;
    sp30 = temp_a0_3;
    Lights_PointNoGlowSetInfo(temp_a0_3, (s16) (s32) ((sp34 * 90.0f) + temp_s1->world.pos.x), (s16) (s32) (temp_s1->world.pos.y + 10.0f), (s16) (s32) (temp_f18 + temp_s1->world.pos.z), (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
    this->unk1E7C = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, sp30);
}

void EnTest7_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTest7 *this = (EnTest7 *) thisx;
    s16 temp_a0;

    temp_a0 = globalCtx->unk_1879C[8];
    globalCtx = globalCtx;
    ActorCutscene_Stop(temp_a0);
    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->unk1E7C);
}

void func_80AF19A8(EnTest7 *arg0, GlobalContext *arg1) {
    s32 sp1C;

    sp1C = arg1 + 0x18000;
    if (ActorCutscene_GetCanPlayNext(arg1->unk_1879C[8]) == 0) {
        ActorCutscene_SetIntentToPlay(arg1->unk_1879C[8]);
        return;
    }
    ActorCutscene_Start(arg1->unk_1879C[8], NULL);
    func_80AF082C(arg0, func_80AF1A2C);
    arg1->unk_18844 = 1;
}

void func_80AF1A2C(EnTest7 *arg0, GlobalContext *arg1) {
    Color_RGB8 sp34;
    Color_RGB8 sp30;
    f32 sp2C;
    Camera *temp_v0;
    f32 temp_f0;

    sp34.r = (first 3 bytes) D_80AF342C;
    sp30.r = (first 3 bytes) D_80AF3430;
    temp_f0 = (f32) arg0->unk1E54 / 10.0f;
    sp2C = temp_f0;
    func_800FD59C(arg1, &sp30, temp_f0);
    func_800FD654(arg1, &sp34, sp2C);
    func_800FD698(arg1, 0x7D0, 0xFA0, sp2C);
    if (arg0->unk1E54 >= 0xA) {
        temp_v0 = Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(arg1->unk_1879C[8]));
        arg0->unk1E60 = temp_v0->eye.x;
        arg0->unk1E64 = temp_v0->eye.y;
        arg0->unk1E68 = temp_v0->eye.z;
        arg0->unk1E6C = temp_v0->at.x;
        arg0->unk1E70 = temp_v0->at.y;
        arg0->unk1E74 = temp_v0->at.z;
        arg0->unk1E78 = temp_v0->fov;
        func_80AF082C(arg0, func_80AF1CA0);
        arg0->unk144 |= 0x20;
        func_8019F1C0(&arg0->actor.projectedPos, 0x9BBU);
        func_8016566C(0x78);
    }
}

void func_80AF1B68(EnTest7 *arg0, void (*arg1)(EnTest7 *, GlobalContext *, EnTest7 *)) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    void (*phi_f14)(EnTest7 *, GlobalContext *, EnTest7 *);

    temp_f2 = arg0->unk14C;
    arg0->unk144 |= 2;
    phi_f14 = arg1;
    if (temp_f2 < 11.0f) {
        temp_f0 = arg0->unk148;
        arg0->unk14C = temp_f2 + 0.3f;
        arg0->unk150 = ((temp_f0 * -0.45f) / 11.0f) + 0.7f;
        arg0->unk154 = ((temp_f0 * -0.29999998f) / 11.0f) + 0.7f;
        phi_f14 = (bitwise void (*)(EnTest7 *, GlobalContext *, EnTest7 *)) 0.7f;
    }
    temp_f0_2 = arg0->unk148;
    if (temp_f0_2 < 11.0f) {
        arg0->unk148 = temp_f0_2 + 1.0f;
        if (arg0->unk148 > 6.0f) {
            arg0->unk144 &= -2;
            arg1->unk1CCC->unk13C = 0;
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return;
    }
    if (arg0->unk1E54 >= 0x57) {
        func_80AF082C((bitwise EnTest7 *) 11.0f, phi_f14, func_80AF1F48);
        arg0->unk144 &= -9;
        arg0->unk158 += -0x2EE0;
        return;
    }
    arg0->unk158 += -0x2EE0;
}

void func_80AF1CA0(EnTest7 *arg0, void (*arg1)(EnTest7 *, GlobalContext *, EnTest7 *)) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    Camera *sp30;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    f32 phi_f0;

    if (func_80183DE0(arg0 + 0x18CC) != 0) {
        func_80AF082C(arg0, func_80AF1E44);
    }
    if (arg0->unk18DC > 60.0f) {
        func_80AF1B68(arg0, arg1);
    }
    phi_f0 = arg0->unk18DC;
    if (arg0->unk18DC > 20.0f) {
        temp_v0 = arg0->unk144;
        if ((temp_v0 & 0x40) == 0) {
            arg0->unk144 = temp_v0 | 0x40;
            func_8019F1C0(&arg0->actor.projectedPos, 0x9BCU);
            phi_f0 = arg0->unk18DC;
        }
    }
    temp_v0_2 = arg0->unk144;
    if (phi_f0 > 42.0f) {
        if ((temp_v0_2 & 0x80) == 0) {
            arg0->unk144 = temp_v0_2 | 0x80;
            func_8019F1C0(&arg0->actor.projectedPos, 0x9BDU);
        }
        if (Rand_ZeroOne() < 0.3f) {
            sp30 = Play_GetCamera((GlobalContext *) arg1, ActorCutscene_GetCurrentCamera(arg1->unk187AC));
            temp_f0 = Rand_ZeroOne();
            temp_f2 = arg0->actor.world.pos.x;
            temp_a1 = &sp34;
            sp34 = ((sp30->eye.x - temp_f2) * temp_f0) + temp_f2;
            temp_f12 = arg0->actor.world.pos.y;
            sp38 = ((sp30->eye.y - temp_f12) * temp_f0) + temp_f12;
            temp_f14 = arg0->actor.world.pos.z;
            sp3C = ((sp30->eye.z - temp_f14) * temp_f0) + temp_f14;
            func_80AF0C30((bitwise s32 *) temp_f12, (bitwise f32 *) temp_f14, &arg0->unk15C, temp_a1, 1);
            arg0->unk144 |= 8;
            return;
        }
        // Duplicate return node #13. Try simplifying control flow for better match
        return;
    }
    arg0->unk144 = temp_v0_2 | 1;
}

void func_80AF1E44(EnTest7 *arg0, void (*arg1)(EnTest7 *, GlobalContext *, EnTest7 *)) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    Camera *sp30;
    s32 *sp24;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    func_80AF1B68(arg0, arg1);
    if (Rand_ZeroOne() < 0.3f) {
        sp30 = Play_GetCamera((GlobalContext *) arg1, ActorCutscene_GetCurrentCamera(arg1->unk187AC));
        temp_f0 = Rand_ZeroOne();
        temp_f2 = arg0->actor.world.pos.x;
        temp_a1 = &sp34;
        sp34 = ((sp30->eye.x - temp_f2) * temp_f0) + temp_f2;
        temp_f12 = arg0->actor.world.pos.y;
        sp38 = ((sp30->eye.y - temp_f12) * temp_f0) + temp_f12;
        temp_f14 = arg0->actor.world.pos.z;
        sp3C = ((sp30->eye.z - temp_f14) * temp_f0) + temp_f14;
        func_80AF0C30((bitwise s32 *) temp_f12, (bitwise f32 *) temp_f14, &arg0->unk15C, temp_a1, 1);
    }
    sp24 = &arg0->unk15C;
    Math_Vec3f_Copy((Vec3f *) &sp34, &arg0->actor.world.pos);
    func_80AF0C30(sp24, &sp34, (s32 *)1);
    arg0->unk1904 += 0x2EE0;
}

void func_80AF1F48(EnTest7 *arg0, ? arg1) {
    Vec3f sp20;
    EnTest7 *temp_a0;
    EnTest7 *temp_a3;
    f32 temp_f0;
    s32 temp_t7;
    s32 temp_v0;
    EnTest7 *phi_a3;

    temp_a3 = arg0;
    temp_v0 = temp_a3->unk1E54;
    temp_t7 = temp_a3->unk144 | 0x10;
    temp_a3->unk144 = temp_t7;
    temp_f0 = (f32) (temp_v0 - 0x56) / 10.0f;
    temp_a0 = temp_a3;
    temp_a3->unk150 = (-0.15f * temp_f0) + 0.25f;
    temp_a3->unk158 += -0x2EE0;
    temp_a3->unk144 = temp_t7 | 4;
    temp_a3->unk154 = (-0.3f * temp_f0) + 0.4f;
    phi_a3 = temp_a3;
    if (temp_v0 >= 0x60) {
        arg0 = temp_a3;
        func_80AF082C(temp_a0, func_80AF2030, (void (*)(EnTest7 *, ?)) temp_a3);
        arg0->unk144 &= -0x11;
        phi_a3 = arg0;
    }
    arg0 = phi_a3;
    Math_Vec3f_Copy(&sp20, phi_a3 + 0x24);
    func_80AF0C30(&arg0->unk15C, &sp20.x, (s32 *)1, (f32 *) arg0);
}

void func_80AF2030(void (*arg0)(EnTest7 *, ?), GlobalContext *arg1) {
    f32 sp1C;
    Camera *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;

    temp_f0 = (f32) (arg0->unk1E54 - 0x60);
    temp_f16 = 1.0f - (temp_f0 / 4.0f);
    arg0->unk150 = (f32) (((temp_f0 * -0.1f) / 4.0f) + 0.1f);
    arg0->unk158 = (s16) (arg0->unk158 - 0x2EE0);
    arg0->unk28 = (f32) (arg0->unk28 + 100.0f);
    arg0->unk154 = (f32) (((temp_f0 * 5.9f) / 4.0f) + 0.1f);
    sp1C = temp_f16;
    arg0 = arg0;
    temp_v0 = Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(arg1->unk_1879C[8]));
    temp_v0->player = NULL;
    temp_f0_2 = arg0->unk1E60;
    temp_v0->eye.x = ((temp_v0->eye.x - temp_f0_2) * temp_f16) + temp_f0_2;
    temp_f2 = arg0->unk1E64;
    temp_v0->eye.y = ((temp_v0->eye.y - temp_f2) * temp_f16) + temp_f2;
    temp_f12 = arg0->unk1E68;
    temp_v0->eye.z = ((temp_v0->eye.z - temp_f12) * temp_f16) + temp_f12;
    temp_f14 = arg0->unk1E78;
    temp_v0->fov = ((temp_v0->fov - temp_f14) * temp_f16) + temp_f14;
    if (arg0->unk1E54 >= 0x64) {
        gGameInfo->data[544] = 1;
        gGameInfo->data[545] = 0xFF;
        gGameInfo->data[546] = 0xFF;
        gGameInfo->data[547] = 0xFF;
        gGameInfo->data[548] = 0xFF;
        arg1->unk_18844 = 0;
        arg0->unk144 = (s32) (arg0->unk144 & ~4);
        func_80AF082C((bitwise EnTest7 *) temp_f12, (bitwise void (*)(EnTest7 *, GlobalContext *, EnTest7 *)) temp_f14, arg0, func_80AF21E8, arg0);
        func_80165690();
    }
}

void func_80AF21E8(EnTest7 *arg0, GlobalContext *arg1) {
    s32 sp2C;
    Color_RGB8 sp24;
    Color_RGB8 sp20;
    f32 sp1C;
    f32 temp_f0;
    s32 temp_v1;

    temp_v1 = arg0->unk1E54;
    sp24.r = (first 3 bytes) D_80AF3434;
    sp20.r = (first 3 bytes) D_80AF3438;
    if (gGameInfo->data[544] != 0) {
        sp2C = temp_v1 - 0x64;
        func_8019F1C0(arg0 + 0xEC, 0x9BEU);
        gGameInfo->data[544] = 0;
        gGameInfo->data[545] = 0;
        gGameInfo->data[546] = 0;
        gGameInfo->data[547] = 0;
        gGameInfo->data[548] = 0;
    }
    temp_f0 = 1.0f - ((f32) (temp_v1 - 0x64) / 10.0f);
    sp1C = temp_f0;
    func_800FD59C(arg1, &sp20, temp_f0);
    func_800FD654(arg1, &sp24, sp1C);
    func_800FD698(arg1, 0x7D0, 0xFA0, sp1C);
    if (arg0->unk1E54 >= 0x6E) {
        func_80AF082C(arg0, func_80AF2318);
    }
}

void func_80AF2318(EnTest7 *arg0, GlobalContext *arg1) {
    if (arg0->unk1E54 >= 0x82) {
        func_80AF082C(&func_80AF2350);
    }
}



void func_80AF24D8(GlobalContext *arg0, GlobalContext *arg1, f32 arg2) {
    f32 sp40;
    f32 sp3C;
    void *sp34;
    f32 sp28;
    void *sp24;
    Camera *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    sp34 = arg1->actorCtx.actorList[2].first;
    temp_v0 = Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(arg1->unk_1879C[8]));
    temp_v0->player = NULL;
    sp28 = Math_SinS(arg0->unk1E8E);
    temp_f0 = Math_CosS(0xFA0);
    sp24 = sp34 + 0x24;
    sp3C = (temp_f0 * (180.0f * sp28)) + sp34->world.pos.x;
    sp40 = (Math_SinS(0xFA0) * 180.0f) + sp24->unk4;
    sp28 = Math_CosS(arg0->unk1E8E);
    temp_f2 = temp_v0->eye.x;
    temp_f12 = temp_v0->eye.y;
    temp_f14 = temp_v0->eye.z;
    temp_f16 = temp_v0->fov;
    temp_f18 = (Math_CosS(0xFA0) * (180.0f * sp28)) + sp24->unk8;
    temp_v0->eye.x = ((sp3C - temp_f2) * arg2) + temp_f2;
    temp_v0->eye.y = ((sp40 - temp_f12) * arg2) + temp_f12;
    temp_v0->eye.z = ((temp_f18 - temp_f14) * arg2) + temp_f14;
    temp_v0->fov = ((arg0->actorCtx.collectibleFlags[1] - temp_f16) * arg2) + temp_f16;
    temp_v0->at.y += 1.4444444f;
}

void func_80AF2654(GlobalContext *arg0, GlobalContext *arg1, f32 arg2) {
    void *sp40;
    f32 sp34;
    f32 sp30;
    f32 sp28;
    Camera *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    void *temp_s1;

    sp40 = arg1->actorCtx.actorList[2].first;
    temp_v0 = Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(arg1->unk_1879C[8]));
    temp_v0->player = NULL;
    sp28 = Math_SinS(arg0->unk1E8E);
    temp_s1 = sp40 + 0x24;
    sp30 = (Math_CosS(0xBB8) * (80.0f * sp28)) + sp40->world.pos.x;
    sp34 = (Math_SinS(0xBB8) * 80.0f) + temp_s1->unk4;
    sp28 = Math_CosS(arg0->unk1E8E);
    temp_f2 = temp_v0->eye.x;
    temp_f12 = temp_v0->eye.y;
    temp_f14 = temp_v0->eye.z;
    temp_f16 = temp_v0->at.x;
    temp_f0 = temp_v0->at.y;
    temp_f18 = (Math_CosS(0xBB8) * (80.0f * sp28)) + temp_s1->unk8;
    temp_f2_2 = temp_v0->at.z;
    temp_v0->eye.x = ((sp30 - temp_f2) * arg2) + temp_f2;
    temp_f12_2 = temp_v0->fov;
    temp_v0->eye.y = ((sp34 - temp_f12) * arg2) + temp_f12;
    temp_v0->eye.z = ((temp_f18 - temp_f14) * arg2) + temp_f14;
    temp_v0->at.x = ((temp_s1->unk0 - temp_f16) * arg2) + temp_f16;
    temp_v0->at.y = (((temp_s1->unk4 + 40.0f) - temp_f0) * arg2) + temp_f0;
    temp_v0->at.z = ((temp_s1->unk8 - temp_f2_2) * arg2) + temp_f2_2;
    temp_v0->fov = ((arg0->actorCtx.collectibleFlags[1] - temp_f12_2) * arg2) + temp_f12_2;
}

void func_80AF2808(EnTest7 *arg0, GlobalContext *arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f2;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0->shape.rot.y += 0x2EE0;
    temp_f0 = arg0->unk1E90;
    temp_v0->scale.x = ((0.0f - temp_f0) * arg2) + temp_f0;
    temp_f2 = arg0->unk1E94;
    temp_v0->scale.z = ((0.0f - temp_f2) * arg2) + temp_f2;
}

void func_80AF2854(EnTest7 *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    s32 phi_v0;
    EnTest7 *phi_a0;

    temp_v0 = this->unk1E54;
    phi_v0 = temp_v0;
    phi_a0 = this;
    if ((temp_v0 >= 0xC) && (temp_v0 < 0x1F)) {
        func_80AF24D8(globalCtx, (bitwise GlobalContext *) ((f32) (temp_v0 - 0xC) / 18.0f));
        goto block_6;
    }
    if ((temp_v0 >= 0x4F) && (temp_v0 < 0x60)) {
        func_80AF2654(globalCtx, (bitwise GlobalContext *) ((f32) (temp_v0 - 0x4F) / 16.0f));
block_6:
        phi_v0 = this->unk1E54;
        phi_a0 = this;
    }
    if ((phi_v0 >= 0x2A) && (phi_v0 < 0x45)) {
        func_80AF2808(phi_a0, globalCtx, (f32) (phi_v0 - 0x2A) / 26.0f);
    }
}

void func_80AF2938(EnTest7 *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    arg0->unk1E98 = temp_v0->draw;
    temp_v0->draw = NULL;
    temp_v0->unkA70 = (s32) (temp_v0->unkA70 | 0x20000000);
    arg0->unk144 |= 2;
    arg0->unk14C = 30.0f;
    if (arg1->roomCtx.currRoom.unk3 != 1) {
        func_80AF082C(&func_80AF2AE8);
        return;
    }
    func_80AF082C(&func_80AF2EC8);
}

void func_80AF29C0(void *arg0, GlobalContext *arg1) {
    void *sp38;
    f32 sp28;
    void *sp24;
    Camera *temp_s0;

    sp38 = arg1->actorCtx.actorList[2].first;
    temp_s0 = Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(arg1->unk_1879C[8]));
    sp28 = Math_SinS(D_80AF3450);
    temp_s0->at.x = (Math_CosS(D_80AF3452) * (D_80AF3454 * sp28)) + sp38->world.pos.x;
    sp24 = sp38 + 0x24;
    temp_s0->at.y = (Math_SinS(D_80AF3452) * D_80AF3454) + sp24->unk4;
    sp28 = Math_CosS(D_80AF3450);
    temp_s0->at.z = (Math_CosS(D_80AF3452) * (D_80AF3454 * sp28)) + sp24->unk8;
    arg0->unk24 = (f32) temp_s0->at.x;
    arg0->unk28 = (f32) (temp_s0->at.y - 40.0f);
    arg0->unk2C = (f32) temp_s0->at.z;
}



void func_80AF2BAC(Actor *arg0, GlobalContext *arg1, void *arg2, f32 arg3) {
    Camera *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    temp_v0 = Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(arg1->unk_1879C[8]));
    temp_v0->player = NULL;
    temp_f0 = arg2->unk0;
    temp_f2 = arg2->unk4;
    temp_f12 = arg2->unk8;
    temp_v0->at.x = ((temp_v0->at.x - temp_f0) * arg3) + temp_f0;
    temp_v0->at.y = ((temp_v0->at.y - temp_f2) * arg3) + temp_f2;
    temp_v0->at.z = ((temp_v0->at.z - temp_f12) * arg3) + temp_f12;
}

void func_80AF2C48(Actor *arg0, GlobalContext *arg1) {
    f32 sp24;
    Camera *sp20;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_f0 = arg0->home.pos.x;
    temp_f2 = arg0->home.pos.y;
    arg0->unk148 = 11.0f;
    temp_f14 = (f32) (0x28 - arg0->unk1E54) / 40.0f;
    temp_f12 = arg0->home.pos.z;
    arg0->unk144 = (s32) (arg0->unk144 | 4);
    arg0->unk150 = 0.05f;
    arg0->unk154 = 0.05f;
    arg0->unk158 = (s16) (arg0->unk158 + 0x2EE0);
    arg0->world.pos.x = ((arg0->world.pos.x - temp_f0) * temp_f14) + temp_f0;
    arg0->world.pos.y = ((arg0->world.pos.y - temp_f2) * temp_f14) + temp_f2;
    arg0->world.pos.z = ((arg0->world.pos.z - temp_f12) * temp_f14) + temp_f12;
    sp24 = temp_f14;
    sp20 = Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(arg1->unk_1879C[8]));
    func_80AF2BAC(arg0, arg1, arg0 + 8, temp_f14);
    sp20->at.x = arg0->world.pos.x;
    sp20->at.y = arg0->world.pos.y + 40.0f;
    sp20->at.z = arg0->world.pos.z;
    func_800B9010(arg0, 0x1C4U);
    if (arg0->unk1E54 >= 0x28) {
        arg0->unk144 = (s32) (arg0->unk144 & ~4);
        func_80AF082C((EnTest7 *) arg0, func_80AF2F98);
    }
}

void func_80AF2DB4(s32 arg0, GlobalContext *arg1) {
    Camera *sp2C;
    void *sp28;
    void *sp1C;
    s16 temp_a0;
    void *temp_v0;

    sp28 = arg1->actorCtx.actorList[2].first;
    temp_a0 = arg1->unk_1879C[8];
    arg1 = arg1;
    sp2C = Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a0));
    temp_v0 = sp28 + 0x24;
    sp2C->eye.x = (Math_SinS((s16) ((s32) sp28->shape.rot.y * -1)) * 200.0f * -0.83907f) + sp28->world.pos.x;
    sp2C->eye.y = temp_v0->unk4 + 108.8042f;
    sp1C = temp_v0;
    sp2C->eye.z = (Math_CosS((s16) ((s32) sp28->shape.rot.y * -1)) * 200.0f * -0.83907f) + temp_v0->unk8;
    sp2C->at.x = temp_v0->unk0;
    sp2C->at.y = temp_v0->unk4 + 40.0f;
    sp2C->at.z = temp_v0->unk8;
}



void func_80AF2F98(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    void *sp38;
    f32 sp2C;
    s32 *sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 *temp_a0;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    sp3C = temp_v0;
    sp38 = temp_v0;
    func_800B9010(arg0, 0x1C4U);
    temp_a0 = arg0 + 0x15C;
    sp2C.unk0 = arg0->world.pos.x;
    sp2C.unk4 = (f32) arg0->world.pos.y;
    sp2C.unk8 = (f32) arg0->world.pos.z;
    sp24 = temp_a0;
    func_80AF0C30(temp_a0, &sp2C, (s32 *)1);
    func_80AF0C30(temp_a0, &sp2C, (s32 *)1);
    temp_v0_2 = arg0->unk1E54;
    arg0->unk14C = (f32) (0x46 - temp_v0_2);
    if (temp_v0_2 >= 0x47) {
        func_80AF082C((EnTest7 *) arg0, func_80AF30F4);
    }
    temp_f0 = arg0->unk14C;
    if (temp_f0 > 11.0f) {
        arg0->unk158 = (s16) (arg0->unk158 + 0x2EE0);
        temp_f2 = ((-0.35f * (temp_f0 - 11.0f)) / 19.0f) + 0.4f;
        arg0->unk150 = temp_f2;
        arg0->unk154 = temp_f2;
        return;
    }
    sp38->draw = arg0->unk1E98;
    temp_f0_2 = arg0->unk14C;
    arg0->unk148 = temp_f0_2;
    temp_f2_2 = ((temp_f0_2 * -0.29999998f) / 11.0f) + 0.7f;
    arg0->unk150 = temp_f2_2;
    arg0->unk154 = temp_f2_2;
    sp3C->unkA70 = (s32) (sp3C->unkA70 & 0xDFFFFFFF);
}

void func_80AF30F4(Actor *arg0, GlobalContext *arg1) {
    s32 temp_t8;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (arg0->unk1E54 >= 0x5B) {
        temp_t8 = temp_v0->unkA6C & ~0x20;
        temp_v0->unkA6C = temp_t8;
        temp_v0->unkA6C = (s32) (temp_t8 & 0xDFFFFFFF);
        Actor_MarkForDeath(arg0);
    }
}

void EnTest7_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTest7 *this = (EnTest7 *) thisx;
    EnTest7 *temp_a0;
    EnTest7 *temp_a2;
    s32 temp_v0_2;
    void (*temp_v0)(EnTest7 *, GlobalContext *);

    temp_a2 = this;
    this = temp_a2;
    temp_a2->unk1E58(temp_a2, globalCtx, temp_a2);
    temp_v0 = this->actionFunc;
    temp_a0 = this;
    if (temp_v0 != 0) {
        this = this;
        temp_v0(temp_a0, globalCtx);
    }
    temp_v0_2 = this->unk144;
    this->unk1E54 += 1;
    func_80AF118C(globalCtx, this + 0x15C, this, (temp_v0_2 & 8) != 0, (temp_v0_2 & 0x10) != 0);
}

? func_80AF31D0(s32 arg0, ? arg1, ? arg2, s32 *arg3, s32 arg5) {
    Vec3f sp18;

    if ((*arg3 != 0) && (Rand_ZeroOne() < 0.03f)) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, &sp18);
        func_80AF0C30(arg5 + 0x15C, &sp18.x, NULL);
    }
    return 1;
}

void EnTest7_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTest7 *this = (EnTest7 *) thisx;
    s32 sp40;
    Gfx *temp_a2;
    GraphicsContext *temp_v0;
    f32 temp_f12;

    if ((this->unk144 & 1) != 0) {
        temp_v0 = globalCtx->state.gfxCtx;
        temp_a2 = temp_v0->polyOpa.d - (((this->unk18E4->unk1 << 6) + 0xF) & ~0xF);
        temp_v0->polyOpa.d = temp_a2;
        if (temp_a2 != 0) {
            func_8018450C(globalCtx, &this->unk18CC, temp_a2, func_80AF31D0, 0, this);
            goto block_3;
        }
    } else {
block_3:
        if ((this->unk144 & 2) != 0) {
            SysMatrix_StatePush();
            SysMatrix_InsertTranslation(0.0f, 4000.0f, 0.0f, 1);
            SysMatrix_InsertRotation(0, this->unk158, 0, 1);
            temp_f12 = this->unk150 * 100.0f;
            Matrix_Scale(temp_f12, this->unk154 * 100.0f, temp_f12, 1);
            sp40 = (s32) this->unk148;
            AnimatedMat_DrawStep(globalCtx, Lib_SegmentedToVirtual((void *) &D_040815D0), (u32) sp40);
            func_800BE03C(globalCtx, &D_04080FC8);
            SysMatrix_StatePop();
        }
        func_80AF14FC(&globalCtx->state.gfxCtx, &this->unk15C);
        if ((this->unk144 & 4) != 0) {
            func_800F9824(globalCtx, &globalCtx->envCtx, &globalCtx->view, globalCtx->state.gfxCtx, (bitwise Vec3f) this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s8) 70.0f, (s8) 5.0f, 0, 0);
        }
    }
}

