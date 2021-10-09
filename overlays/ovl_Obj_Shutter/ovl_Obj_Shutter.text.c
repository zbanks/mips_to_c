extern ? D_060011E0;
static void D_80A38130;                             /* unable to generate initializer */

typedef struct ObjShutter {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ u8 unk144;                         /* inferred */
    /* 0x0145 */ char pad145[0x3];                  /* maybe part of unk144[4]? */
    /* 0x0148 */ f32 unk148;                        /* inferred */
} ObjShutter;                                       /* size 0x14C */

void ObjShutter_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjShutter *this = (ObjShutter *) thisx;

}

void ObjShutter_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjShutter *this = (ObjShutter *) thisx;

}

void ObjShutter_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjShutter *this = (ObjShutter *) thisx;
    struct_80133038_arg2 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_f8;

    this = this;
    func_80133038(globalCtx, &D_80A38130, &sp20);
    if (sp20.unk0 == 1) {
        if (sp20.unk0 != this->unk144) {
            this->actor.velocity.y = 0.0f;
        }
        temp_f0 = this->unk148;
        if ((temp_f0 >= 80.0f) || (this->unk144 == 0)) {
            this->actor.velocity.y = 0.0f;
            this->unk148 = 80.0f;
        } else {
            this->unk148 = temp_f0 + 10.0f;
        }
    } else {
        if (sp20.unk0 != this->unk144) {
            this->actor.velocity.y = 0.0f;
        }
        temp_f0_2 = this->unk148;
        if (temp_f0_2 != 0.0f) {
            this->actor.velocity.y -= 3.0f;
            temp_f12 = this->actor.velocity.y;
            this->unk148 = temp_f0_2 + temp_f12;
            if (this->unk148 <= 0.0f) {
                temp_f2 = fabsf(temp_f12) * 0.8f;
                temp_f8 = (s32) temp_f2;
                this->actor.velocity.y = temp_f2;
                if (temp_f8 == 0) {
                    this->actor.velocity.y = 0.0f;
                    this->unk148 = 0.0f;
                }
            }
        }
    }
    this->unk144 = sp20.unk0;
}

void ObjShutter_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjShutter *this = (ObjShutter *) thisx;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + this->unk148, this->actor.world.pos.z, 0);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    Matrix_RotateY(this->actor.world.rot.y, 1U);
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_060011E0;
    temp_v0_2->words.w0 = 0xDE000000;
}

