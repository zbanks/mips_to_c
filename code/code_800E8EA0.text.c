struct _mips2c_stack_func_800E8EA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800E8F08 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800E8FA4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800E9138 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x14];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800E9250 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x14];
};                                                  /* size = 0x38 */

struct _mips2c_stack_nop_800E8ED0 {};               /* size 0x0 */

struct _mips2c_stack_nop_800E8EE0 {};               /* size 0x0 */

struct _mips2c_stack_nop_800E8EEC {};               /* size 0x0 */

struct _mips2c_stack_nop_800E8EFC {};               /* size 0x0 */

s32 D_801D0D50 = 0;

void func_800E8EA0(GlobalContext *globalCtx, Actor *actor, u16 textId) {
    func_80151938(globalCtx, textId);
    actor->textId = textId;
}

s32 nop_800E8ED0(s32 param_1) {
    return 0;
}

void nop_800E8EE0(s32 param_1) {

}

s32 nop_800E8EEC(s32 param_1) {
    return 0;
}

void nop_800E8EFC(s32 param_1) {

}

s32 func_800E8F08(Vec3s *param_1, Vec3s *param_2) {
    Math_SmoothStepToS(&param_1->y, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS((s16 *) param_1, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(&param_2->y, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS((s16 *) param_2, 0, 6, 0x1838, (s16) 0x64);
    return 1;
}

s32 func_800E8FA4(Actor *actor, Vec3f *param_2, Vec3s *param_3, Vec3s *param_4) {
    s16 sp36;
    s16 sp34;
    PosRot *sp28;
    PosRot *temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 phi_v1;
    s16 phi_v1_2;
    s32 phi_v1_3;
    s16 phi_v1_4;

    temp_a0 = &actor->focus;
    sp28 = temp_a0;
    sp36 = Math_Vec3f_Pitch((Vec3f *) temp_a0, param_2);
    sp34 = Math_Vec3f_Yaw((Vec3f *) temp_a0, param_2) - actor->world.rot.y;
    Math_SmoothStepToS((s16 *) param_3, sp36, 6, 0x7D0, (s16) 1);
    temp_a0_2 = param_3->x;
    if ((s32) temp_a0_2 < -0x1770) {
        param_3->x = -0x1770;
    } else {
        phi_v1 = temp_a0_2;
        if ((s32) temp_a0_2 >= 0x1771) {
            phi_v1 = 0x1770;
        }
        param_3->x = phi_v1;
    }
    temp_a0_3 = param_3->y;
    if ((s32) temp_a0_3 < -0x1F40) {
        param_3->y = -0x1F40;
    } else {
        phi_v1_2 = temp_a0_3;
        if ((s32) temp_a0_3 >= 0x1F41) {
            phi_v1_2 = 0x1F40;
        }
        param_3->y = phi_v1_2;
    }
    if (Math_SmoothStepToS(&param_3->y, sp34, 6, 0x7D0, (s16) 1) != 0) {
        temp_a0_4 = param_3->y;
        phi_v1_3 = (s32) temp_a0_4;
        if ((s32) temp_a0_4 < 0) {
            phi_v1_3 = -(s32) temp_a0_4;
        }
        if (phi_v1_3 < 0x1F40) {
            return 0;
        }
        goto block_15;
    }
block_15:
    Math_SmoothStepToS(&param_4->y, (s16) (sp34 - param_3->y), 4, 0x7D0, (s16) 1);
    temp_a0_5 = param_4->y;
    if ((s32) temp_a0_5 < -0x2EE0) {
        param_4->y = -0x2EE0;
        return 1;
    }
    phi_v1_4 = temp_a0_5;
    if ((s32) temp_a0_5 >= 0x2EE1) {
        phi_v1_4 = 0x2EE0;
    }
    param_4->y = phi_v1_4;
    return 1;
}

s32 func_800E9138(GlobalContext *globalCtx, Actor *actor, Vec3s *param_3, Vec3s *param_4, f32 param_5) {
    ? sp2C;
    Actor *temp_t1;
    s16 temp_v0;
    u8 temp_t0;
    s32 phi_v1;

    temp_t1 = globalCtx->actorCtx.actorList[2].first;
    actor->focus.pos.x = actor->world.pos.x;
    actor->focus.pos.y = actor->world.pos.y;
    actor->focus.pos.z = actor->world.pos.z;
    actor->focus.pos.y += param_5;
    temp_t0 = globalCtx->csCtx.state;
    if ((temp_t0 == 0) && (D_801D0D50 == 0)) {
        temp_v0 = actor->yawTowardsPlayer - actor->shape.rot.y;
        phi_v1 = temp_v0 << 0x10;
        if ((s32) temp_v0 < 0) {
            phi_v1 = (s32) temp_v0 * -0x10000;
        }
        if ((phi_v1 >> 0x10) >= 0x4300) {
            func_800E8F08(param_3, param_4);
            return 0;
        }
        goto block_6;
    }
block_6:
    if ((temp_t0 != 0) || (D_801D0D50 != 0)) {
        sp2C.unk_0 = (f32) globalCtx->view.eye.x;
        sp2C.unk_4 = (f32) globalCtx->view.eye.y;
        sp2C.unk_8 = (f32) globalCtx->view.eye.z;
    } else {
        sp2C.unk_0 = (f32) temp_t1->focus.pos.x;
        sp2C.unk_4 = (f32) temp_t1->focus.pos.y;
        sp2C.unk_8 = (f32) temp_t1->focus.pos.z;
    }
    func_800E8FA4(actor, (Vec3f *) &sp2C, param_3, param_4);
    return 1;
}

s32 func_800E9250(GlobalContext *globalCtx, Actor *actor, Vec3s *param_3, Vec3s *param_4, ? param_5, ? param_5_unk4, ? param_5_unk8) {
    ? sp24;
    Actor *temp_t1;
    s16 temp_v0;
    u8 temp_t0;
    s32 phi_v1;

    temp_t1 = globalCtx->actorCtx.actorList[2].first;
    actor->focus.pos.x = param_5.unk_0;
    actor->focus.pos.y = param_5.unk_4;
    actor->focus.pos.z = param_5.unk_8;
    temp_t0 = globalCtx->csCtx.state;
    if ((temp_t0 == 0) && (D_801D0D50 == 0)) {
        temp_v0 = actor->yawTowardsPlayer - actor->shape.rot.y;
        phi_v1 = temp_v0 << 0x10;
        if ((s32) temp_v0 < 0) {
            phi_v1 = (s32) temp_v0 * -0x10000;
        }
        if ((phi_v1 >> 0x10) >= 0x4300) {
            func_800E8F08(param_3, param_4);
            return 0;
        }
        goto block_6;
    }
block_6:
    if ((temp_t0 != 0) || (D_801D0D50 != 0)) {
        sp24.unk_0 = (f32) globalCtx->view.eye.x;
        sp24.unk_4 = (f32) globalCtx->view.eye.y;
        sp24.unk_8 = (f32) globalCtx->view.eye.z;
    } else {
        sp24.unk_0 = (f32) temp_t1->focus.pos.x;
        sp24.unk_4 = (f32) temp_t1->focus.pos.y;
        sp24.unk_8 = (f32) temp_t1->focus.pos.z;
    }
    func_800E8FA4(actor, (Vec3f *) &sp24, param_3, param_4);
    return 1;
}
