typedef struct ObjShutter {
    /* 0x000 */ Actor actor;
    /* 0x144 */ u8 unk_144;                         /* inferred */
    /* 0x145 */ char pad_145[0x3];                  /* maybe part of unk_144[4]? */
    /* 0x148 */ f32 unk_148;                        /* inferred */
} ObjShutter;                                       /* size = 0x14C */

struct _mips2c_stack_ObjShutter_Destroy {};         /* size 0x0 */

struct _mips2c_stack_ObjShutter_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjShutter_Init {};            /* size 0x0 */

struct _mips2c_stack_ObjShutter_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ char pad_21[0x17];
};                                                  /* size = 0x38 */

extern ? D_060011E0;
static void D_80A38130;                             /* unable to generate initializer */

void ObjShutter_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjShutter *this = (ObjShutter *) thisx;

}

void ObjShutter_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjShutter *this = (ObjShutter *) thisx;

}

void ObjShutter_Update(Actor *thisx, GlobalContext *globalCtx) {
    u8 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_f8;
    ObjShutter *this = (ObjShutter *) thisx;

    this = this;
    func_80133038(globalCtx, &D_80A38130, (struct_80133038_arg2 *) &sp20);
    if (sp20 == 1) {
        if (sp20 != this->unk_144) {
            this->actor.velocity.y = 0.0f;
        }
        temp_f0 = this->unk_148;
        if ((temp_f0 >= 80.0f) || (this->unk_144 == 0)) {
            this->actor.velocity.y = 0.0f;
            this->unk_148 = 80.0f;
        } else {
            this->unk_148 = temp_f0 + 10.0f;
        }
    } else {
        if (sp20 != this->unk_144) {
            this->actor.velocity.y = 0.0f;
        }
        temp_f0_2 = this->unk_148;
        if (temp_f0_2 != 0.0f) {
            this->actor.velocity.y -= 3.0f;
            temp_f12 = this->actor.velocity.y;
            this->unk_148 = temp_f0_2 + temp_f12;
            if (this->unk_148 <= 0.0f) {
                temp_f2 = fabsf(temp_f12) * 0.8f;
                temp_f8 = (s32) temp_f2;
                this->actor.velocity.y = temp_f2;
                if (temp_f8 == 0) {
                    this->actor.velocity.y = 0.0f;
                    this->unk_148 = 0.0f;
                }
            }
        }
    }
    this->unk_144 = sp20;
}

void ObjShutter_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    ObjShutter *this = (ObjShutter *) thisx;

    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + this->unk_148, this->actor.world.pos.z, 0);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    Matrix_RotateY(this->actor.world.rot.y, 1U);
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_060011E0;
    temp_v0_2->words.w0 = 0xDE000000;
}
