? EffectSsDtBubble_SpawnColorProfile(GlobalContext *, f32 *, ? *, Vec3f *, s32, s32, s32, s32); /* extern */
void func_80865390(void *arg0, ? arg1);             /* static */
void func_808654C4(Actor *arg0, GlobalContext *arg1); /* static */
static ? D_80865900;                                /* unable to generate initializer */
static ? D_8086590C;                                /* unable to generate initializer */

typedef struct EnPart {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ u8 unk144;                         /* inferred */
    /* 0x0145 */ char pad145[0x3];                  /* maybe part of unk144[4]? */
    /* 0x0148 */ f32 unk148;                        /* inferred */
    /* 0x014C */ char pad14C[0x4];                  /* maybe part of unk148[2]? */
    /* 0x0150 */ u32 unk150;                        /* inferred */
} EnPart;                                           /* size 0x154 */

void EnPart_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnPart *this = (EnPart *) thisx;

}

void EnPart_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPart *this = (EnPart *) thisx;

}

void func_80865390(void *arg0, ? arg1) {
    s16 temp_v0;

    arg0->unk144 = 1;
    temp_v0 = arg0->unk1C;
    arg0->unk32 = (s16) (s32) (Rand_ZeroOne() * 20000.0f);
    if ((temp_v0 != 1) && (temp_v0 != 4)) {
        if (temp_v0 != 0xF) {
            return;
        }
        arg0->unk146 = 0x64;
        arg0->unk32 = (s16) (arg0->unk120->unkBE + 0x8000);
        arg0->unk68 = 7.0f;
        arg0->unk70 = 2.0f;
        arg0->unk74 = -1.0f;
        return;
    }
    arg0->unk146 = (s16) (arg0->unk146 + (s32) (Rand_ZeroOne() * 17.0f) + 5);
    arg0->unk68 = (f32) ((Rand_ZeroOne() * 5.0f) + 4.0f);
    arg0->unk74 = (f32) (-0.6f - (Rand_ZeroOne() * 0.5f));
    arg0->unk14C = 0.15f;
}

void func_808654C4(Actor *arg0, GlobalContext *arg1) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp78;
    ? sp74;
    Vec3f sp64;
    PosRot *temp_s0_3;
    Vec3f *temp_s0;
    f32 *temp_s3;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s0_2;
    s32 phi_s0;

    sp74.unk0 = (s32) D_80865900.unk0;
    sp74.unk4 = (s32) D_80865900.unk4;
    sp74.unk8 = (s32) D_80865900.unk8;
    temp_v0 = arg0->params;
    if (temp_v0 == 0xF) {
        arg0->unk146 = (s16) (arg0->unk146 - 1);
        temp_s0 = arg0 + 0x24;
        if ((s32) arg0->unk146 > 0) {
            arg0->shape.rot.x += 0x3A98;
            arg0->shape.rot.y = arg0->shape.rot.y;
            arg0->shape.rot.z = arg0->shape.rot.z;
            if (func_800C5A20(arg1 + 0x830, arg0 + 0x24, 20.0f) != 0) {
                arg0->unk146 = 0;
                return;
            }
            // Duplicate return node #14. Try simplifying control flow for better match
            return;
        }
        Math_Vec3f_Copy(&sp64, temp_s0);
        sp64.y = arg0->floorHeight;
        func_800B3030(arg1, &sp64, &D_801D15B0, &D_801D15B0, (s16) (s32) (arg0->scale.y * 1400.0f), (s16) 7, 0);
        Audio_PlaySoundAtPosition(arg1, temp_s0, 0xA, 0x3878U);
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_v1 = arg0->unk146;
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
            func_800B3030(arg1, &temp_s0_3->pos, &D_801D15B0, &D_801D15B0, (s16) (s32) (arg0->scale.y * 4000.0f), (s16) 7, 1);
            Audio_PlaySoundAtPosition(arg1, &temp_s0_3->pos, 0xA, 0x3878U);
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->unk146 = (s16) (temp_v1 - 1);
    arg0->unk148 = (f32) (arg0->unk148 + arg0->unk14C);
}

void EnPart_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnPart *this = (EnPart *) thisx;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    *(&D_8086590C + (this->unk144 * 4))(this, globalCtx);
}

void EnPart_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnPart *this = (EnPart *) thisx;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s0;
    GraphicsContext *phi_a2;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a2;
    phi_a2 = temp_a2;
    if ((s32) this->actor.params > 0) {
        SysMatrix_InsertZRotation_f(this->unk148, 1);
        phi_a2 = globalCtx->state.gfxCtx;
    }
    func_8012C28C(phi_a2);
    func_800B8050(&this->actor, globalCtx, 0);
    if (this->actor.params == 0xF) {
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = (u32) gEmptyDL;
        temp_v0->words.w0 = 0xDB060030;
    }
    if (this->unk150 != 0) {
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp24 = temp_v0_2;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = this->unk150;
    }
}

