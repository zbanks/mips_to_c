typedef struct DmHina {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(DmHina *, GlobalContext *);
    /* 0x148 */ f32 unk_148;                        /* inferred */
    /* 0x14C */ f32 unk_14C;                        /* inferred */
    /* 0x150 */ char pad_150[0x4];
    /* 0x154 */ f32 unk_154;                        /* inferred */
    /* 0x158 */ f32 unk_158;                        /* inferred */
    /* 0x15C */ f32 unk_15C;                        /* inferred */
    /* 0x160 */ f32 unk_160;                        /* inferred */
    /* 0x164 */ f32 unk_164;                        /* inferred */
    /* 0x168 */ f32 unk_168;                        /* inferred */
    /* 0x16C */ f32 unk_16C;                        /* inferred */
    /* 0x170 */ f32 unk_170;                        /* inferred */
    /* 0x174 */ f32 unk_174;                        /* inferred */
    /* 0x178 */ char pad_178[0x2];
    /* 0x17A */ s16 unk_17A;                        /* inferred */
    /* 0x17C */ s16 unk_17C;                        /* inferred */
    /* 0x17E */ u8 unk_17E;                         /* inferred */
    /* 0x17F */ char pad_17F[0x1];
    /* 0x180 */ u8 unk_180;                         /* inferred */
    /* 0x181 */ char pad_181[0x3];                  /* maybe part of unk_180[4]? */
} DmHina;                                           /* size = 0x184 */

struct _mips2c_stack_DmHina_Destroy {};             /* size 0x0 */

struct _mips2c_stack_DmHina_Draw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_DmHina_Init {};                /* size 0x0 */

struct _mips2c_stack_DmHina_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1F470 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A1F56C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1F5AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A1F63C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A1F75C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A1F9AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void func_80A1F75C(DmHina *arg0, GlobalContext *arg1); /* static */
void func_80A1F9AC(DmHina *arg0, GraphicsContext **arg1); /* static */
extern ? D_04023428;

void DmHina_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f0;
    DmHina *this = (DmHina *) thisx;

    temp_f0 = this->actor.world.pos.y;
    this->unk_180 = 1;
    this->actionFunc = func_80A1F470;
    this->unk_158 = temp_f0;
    this->actor.focus.pos.y = temp_f0;
    this->unk_148 = 0.0f;
    this->unk_15C = 1.0f;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.z = this->actor.world.pos.z;
}

void DmHina_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmHina *this = (DmHina *) thisx;

}

void func_80A1F470(DmHina *this, GlobalContext *globalCtx) {
    Actor *sp2C;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    Math_SmoothStepToF(&this->unk_148, 0.6f, 0.5f, 0.05f, 0.001f);
    this->unk_154 = Math_SinS((s16) (globalCtx->gameplayFrames * 0x708)) * 8.0f;
    if (((sp2C->unk_A6C & 0x400) != 0) && (this->actor.xzDistToPlayer < 80.0f)) {
        this->unk_180 = 0;
        this->actionFunc = func_80A1F56C;
        this->unk_154 = 0.0f;
        this->actor.world.pos.y += 40.0f;
    }
}

void func_80A1F56C(DmHina *this, GlobalContext *globalCtx) {
    if (func_80152498(&globalCtx->msgCtx) == 2) {
        this->unk_17C = 2;
        this->actionFunc = func_80A1F5AC;
    }
}

void func_80A1F5AC(DmHina *this, GlobalContext *globalCtx) {
    this->unk_17C += -1;
    if (this->unk_17C == 0) {
        this->unk_180 = 1;
        func_800EA0D4(globalCtx, &globalCtx->csCtx);
        this->unk_17A = func_801694DC(globalCtx);
        func_80169590(globalCtx, 0, 1);
        func_80169590(globalCtx, this->unk_17A, 7);
        this->actionFunc = func_80A1F63C;
    }
}

void func_80A1F63C(DmHina *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    temp_f0 = this->actor.world.pos.x;
    temp_f2 = this->actor.world.pos.z;
    temp_f12 = this->unk_15C;
    this->unk_160 = temp_f0 + 100.0f;
    this->unk_164 = this->unk_158 + 260.0f;
    this->unk_168 = temp_f2 + 100.0f;
    this->unk_16C = temp_f0;
    this->unk_174 = temp_f2;
    this->unk_170 = this->actor.world.pos.y + (this->unk_154 * temp_f12) + (40.0f * temp_f12);
    Play_CameraSetAtEye(globalCtx, this->unk_17A, (Vec3f *) &this->unk_16C, (Vec3f *) &this->unk_160);
    Math_SmoothStepToF(&this->actor.world.pos.y, this->unk_158 + 300.0f, 0.5f, 2.0f, 0.1f);
    if (((this->unk_158 + 240.0f) < this->actor.world.pos.y) && (this->unk_17E != 1)) {
        this->unk_17E = 1;
        Audio_PlayActorSound2((Actor *) this, 0x580BU);
    }
    Audio_PlayActorSound2((Actor *) this, 0x219BU);
}

void func_80A1F75C(DmHina *arg0, GlobalContext *arg1) {
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_a0;
    s32 temp_f16;
    s32 temp_f16_2;
    u8 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    f32 phi_f18;
    void *phi_v1;
    s32 phi_a0;
    f32 phi_f18_2;
    void *phi_v1_2;

    temp_v0 = arg0->unk_17E;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return;
        }
        Math_SmoothStepToF(arg0 + 0x14C, 1.0f, 0.4f, 0.05f, 0.001f);
        arg0->unk_17F = (s8) (u32) (arg0->unk_14C * 255.0f);
        temp_v1 = arg1 + 0x10000;
        arg0->unk_150 = Math_SinS((s16) (arg1->state.frames * 0x1F40));
        temp_f18 = arg0->unk_14C * -255.0f;
        phi_f18 = temp_f18;
        phi_v1 = temp_v1;
        phi_a0 = 1;
        phi_f18_2 = temp_f18;
        phi_v1_2 = temp_v1;
        if (1 != 3) {
            do {
                temp_f16 = (s32) phi_f18;
                temp_a0 = phi_a0 + 1;
                temp_v1_2 = phi_v1 + 2;
                temp_v1_2->unk_7094 = (s16) temp_f16;
                temp_v1_2->unk_70A0 = (s16) temp_f16;
                temp_v1_2->unk_708E = (s16) temp_f16;
                temp_f18_2 = arg0->unk_14C * -255.0f;
                phi_f18 = temp_f18_2;
                phi_v1 = temp_v1_2;
                phi_a0 = temp_a0;
                phi_f18_2 = temp_f18_2;
                phi_v1_2 = temp_v1_2;
            } while (temp_a0 != 3);
        }
        temp_f16_2 = (s32) phi_f18_2;
        temp_v1_3 = phi_v1_2 + 2;
        temp_v1_3->unk_7094 = (s16) temp_f16_2;
        temp_v1_3->unk_70A0 = (s16) temp_f16_2;
        temp_v1_3->unk_708E = (s16) temp_f16_2;
        arg1->envCtx.unk_8C.fogNear = (s16) (s32) (arg0->unk_14C * -500.0f);
        if ((s32) arg1->envCtx.unk_8C.fogNear < -0x12C) {
            arg1->roomCtx.currRoom.segment = NULL;
        }
        return;
    }
    arg0->unk_17F = 0;
    arg0->unk_14C = 0.0f;
}

void DmHina_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmHina *this = (DmHina *) thisx;
    this->actionFunc(this, globalCtx);
    func_80A1F75C(this, globalCtx);
}

void func_80A1F9AC(DmHina *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s1;
    f32 temp_f0;
    f32 temp_f12;

    temp_a2 = *arg1;
    temp_s1 = temp_a2;
    if (arg0->unk_17E != 0) {
        func_8012C2DC(temp_a2);
        temp_v1 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1[1];
        temp_v1->words.w0 = 0xFA000000;
        temp_v1->words.w1 = ((((u32) (arg0->unk_14C * 100.0f) + 0x9B) & 0xFF) << 8) | 0xFFFF0000 | arg0->unk_17F;
        temp_v1_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_2[1];
        temp_v1_2->words.w0 = 0xFB000000;
        temp_v1_2->words.w1 = ((((u32) (arg0->unk_150 * 100.0f) + 0x32) & 0xFF) << 8) | 0xFFFF0000;
        temp_v0 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0[1];
        temp_v0->words.w1 = (u32) &D_04023348;
        temp_v0->words.w0 = 0xDE000000;
        temp_f0 = arg0->unk_15C;
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y + (arg0->unk_154 * temp_f0) + (40.0f * temp_f0), arg0->actor.world.pos.z, 0);
        SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
        temp_f12 = arg0->unk_14C * 20.0f;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        SysMatrix_InsertZRotation_f(Rand_ZeroFloat(6.2831855f), 1);
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDA380003;
        temp_v0_2->words.w1 = Matrix_NewMtx(temp_s1);
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = (u32) &D_04023428;
    }
}

void DmHina_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f12;
    s16 temp_v0;
    DmHina *this = (DmHina *) thisx;

    if (this->unk_180 != 0) {
        temp_f0 = this->unk_15C;
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + (this->unk_154 * temp_f0) + (40.0f * temp_f0), this->actor.world.pos.z, 0);
        SysMatrix_InsertRotation(0, (s16) (globalCtx->gameplayFrames * 0x3E8), 0, 1);
        temp_f12 = this->unk_148 * (1.0f - this->unk_14C) * this->unk_15C;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0 = this->actor.params;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    if (temp_v0 != 3) {

                    } else {
                        GetItem_Draw(globalCtx, 0x65);
                    }
                } else {
                    GetItem_Draw(globalCtx, 0x64);
                }
            } else {
                GetItem_Draw(globalCtx, 0x63);
            }
        } else {
            GetItem_Draw(globalCtx, 0x5C);
        }
        func_80A1F9AC(this, (GraphicsContext **) globalCtx);
    }
}
