typedef struct EnPart {
    /* 0x000 */ Actor actor;
    /* 0x144 */ u8 unk_144;                         /* inferred */
    /* 0x145 */ char pad_145[0x3];                  /* maybe part of unk_144[4]? */
    /* 0x148 */ f32 unk_148;                        /* inferred */
    /* 0x14C */ char pad_14C[0x4];
    /* 0x150 */ u32 unk_150;                        /* inferred */
} EnPart;                                           /* size = 0x154 */

struct _mips2c_stack_EnPart_Destroy {};             /* size 0x0 */

struct _mips2c_stack_EnPart_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnPart_Init {};                /* size 0x0 */

struct _mips2c_stack_EnPart_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80865390 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808654C4 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x8];                    /* maybe part of sp68[3]? */
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
};                                                  /* size = 0x90 */

? EffectSsDtBubble_SpawnColorProfile(GlobalContext *, f32 *, ? *, Vec3f *, s32, s32, s32, s32); /* extern */
void func_80865390(void *arg0, ? arg1);             /* static */
void func_808654C4(Actor *arg0, GlobalContext *arg1); /* static */
static ? D_80865900;                                /* unable to generate initializer */
static ? D_8086590C;                                /* unable to generate initializer */

void EnPart_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnPart *this = (EnPart *) thisx;

}

void EnPart_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPart *this = (EnPart *) thisx;

}

void func_80865390(void *arg0, ? arg1) {
    s16 temp_v0;

    arg0->unk_144 = 1;
    temp_v0 = arg0->unk_1C;
    arg0->unk_32 = (s16) (s32) (Rand_ZeroOne() * 20000.0f);
    if ((temp_v0 != 1) && (temp_v0 != 4)) {
        if (temp_v0 != 0xF) {
            return;
        }
        arg0->unk_146 = 0x64;
        arg0->unk_32 = (s16) (arg0->unk_120->unk_BE + 0x8000);
        arg0->unk_68 = 7.0f;
        arg0->unk_70 = 2.0f;
        arg0->unk_74 = -1.0f;
        return;
    }
    arg0->unk_146 = (s16) (arg0->unk_146 + (s32) (Rand_ZeroOne() * 17.0f) + 5);
    arg0->unk_68 = (f32) ((Rand_ZeroOne() * 5.0f) + 4.0f);
    arg0->unk_74 = (f32) (-0.6f - (Rand_ZeroOne() * 0.5f));
    arg0->unk_14C = 0.15f;
}

void func_808654C4(Actor *arg0, GlobalContext *arg1) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp78;
    ? sp74;
    f32 sp68;
    ? sp64;
    PosRot *temp_s0_3;
    Vec3f *temp_s0;
    f32 *temp_s3;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s0_2;
    s32 phi_s0;

    sp74.unk_0 = (s32) D_80865900.unk_0;
    sp74.unk_4 = (s32) D_80865900.unk_4;
    sp74.unk_8 = (s32) D_80865900.unk_8;
    temp_v0 = arg0->params;
    if (temp_v0 == 0xF) {
        arg0->unk_146 = (s16) (arg0->unk_146 - 1);
        temp_s0 = arg0 + 0x24;
        if ((s32) arg0->unk_146 > 0) {
            arg0->shape.rot.x += 0x3A98;
            arg0->shape.rot.y = arg0->shape.rot.y;
            arg0->shape.rot.z = arg0->shape.rot.z;
            if (func_800C5A20(arg1 + 0x830, arg0 + 0x24, 20.0f) != 0) {
                arg0->unk_146 = 0;
                return;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        Math_Vec3f_Copy((Vec3f *) &sp64, temp_s0);
        sp68 = arg0->floorHeight;
        func_800B3030(arg1, (Vec3f *) &sp64, &D_801D15B0, &D_801D15B0, (s16) (s32) (arg0->scale.y * 1400.0f), (s16) 7, 0);
        Audio_PlaySoundAtPosition(arg1, temp_s0, 0xA, 0x3878U);
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_v1 = arg0->unk_146;
    if ((s32) temp_v1 <= 0) {
        if (temp_v0 != 1) {
            phi_s0 = 7;
            if (temp_v0 != 4) {

            } else {
                temp_s3 = &sp80;
                do {
                    sp80 = randPlusMinusPoint5Scaled(60.0f) + arg0->world.pos.x;
                    sp84 = randPlusMinusPoint5Scaled(50.0f) + (arg0->world.pos.y + (arg0->shape.yOffset * arg0->scale.y));
                    sp88 = randPlusMinusPoint5Scaled(60.0f) + arg0->world.pos.z;
                    sp78 = Rand_ZeroOne() + 1.0f;
                    EffectSsDtBubble_SpawnColorProfile(arg1, temp_s3, &sp74, &D_801D15B0, Rand_S16Offset(0x50, 0x64), 0x19, 0, 1);
                    temp_s0_2 = phi_s0 - 1;
                    phi_s0 = temp_s0_2;
                } while (temp_s0_2 >= 0);
            }
        } else {
            temp_s0_3 = &arg0->world;
            func_800B3030(arg1, (Vec3f *) temp_s0_3, &D_801D15B0, &D_801D15B0, (s16) (s32) (arg0->scale.y * 4000.0f), (s16) 7, 1);
            Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_s0_3, 0xA, 0x3878U);
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->unk_146 = (s16) (temp_v1 - 1);
    arg0->unk_148 = (f32) (arg0->unk_148 + arg0->unk_14C);
}

void EnPart_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnPart *this = (EnPart *) thisx;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    *(&D_8086590C + (this->unk_144 * 4))(this, globalCtx);
}

void EnPart_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s0;
    GraphicsContext *phi_a2;
    EnPart *this = (EnPart *) thisx;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a2;
    phi_a2 = temp_a2;
    if ((s32) this->actor.params > 0) {
        SysMatrix_InsertZRotation_f(this->unk_148, 1);
        phi_a2 = globalCtx->state.gfxCtx;
    }
    func_8012C28C(phi_a2);
    func_800B8050((Actor *) this, globalCtx, 0);
    if (this->actor.params == 0xF) {
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = (u32) gEmptyDL;
        temp_v0->words.w0 = 0xDB060030;
    }
    if (this->unk_150 != 0) {
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp24 = temp_v0_2;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = this->unk_150;
    }
}
