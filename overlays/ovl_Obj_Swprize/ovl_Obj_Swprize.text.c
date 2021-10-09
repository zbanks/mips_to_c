typedef struct ObjSwprize {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(ObjSwprize *, GlobalContext *);
    /* 0x148 */ s16 unk_148;                        /* inferred */
    /* 0x14A */ char pad_14A[0x2];
} ObjSwprize;                                       /* size = 0x14C */

struct _mips2c_stack_ObjSwprize_Destroy {};         /* size 0x0 */

struct _mips2c_stack_ObjSwprize_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjSwprize_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C25360 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C253D0 {
    /* 0x00 */ char pad_0[0x78];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0xC];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80C25640 {};              /* size 0x0 */

struct _mips2c_stack_func_80C25654 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C25698 {};              /* size 0x0 */

struct _mips2c_stack_func_80C256AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C25710 {};              /* size 0x0 */

struct _mips2c_stack_func_80C2572C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C25780 {};              /* size 0x0 */

struct _mips2c_stack_func_80C25794 {};              /* size 0x0 */

void func_80C25360(ObjSwprize *arg0, Vec3f *arg1);  /* static */
void func_80C253D0(ObjSwprize *arg0, GlobalContext *arg1); /* static */
void func_80C25640(ObjSwprize *arg0);               /* static */
void func_80C25698(ObjSwprize *arg0);               /* static */
void func_80C25710(ObjSwprize *arg0);               /* static */
void func_80C25780(ObjSwprize *arg0);               /* static */
static ? D_80C257F0;                                /* unable to generate initializer */
static ? D_80C257F4;                                /* unable to generate initializer */
static ? D_80C257F8;                                /* unable to generate initializer */

void func_80C25360(ObjSwprize *arg0, Vec3f *arg1) {
    SysMatrix_StatePush();
    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    SysMatrix_GetStateTranslationAndScaledY(1.0f, arg1);
    SysMatrix_StatePop();
}

void func_80C253D0(ObjSwprize *arg0, GlobalContext *arg1) {
    f32 sp78;
    EnItem00 *temp_v0;
    EnItem00 *temp_v0_2;
    s16 *temp_s0;
    s16 temp_s7;
    s32 temp_s0_2;
    s32 phi_s0;

    temp_s0 = ((((s32) arg0->actor.params >> 8) & 3) * 2) + &D_80C257F0;
    temp_s7 = *temp_s0;
    func_80C25360(arg0, (Vec3f *) &sp78);
    if (temp_s0 == &D_80C257F4) {
        phi_s0 = 0;
        do {
            temp_v0 = Item_DropCollectible(arg1, arg0 + 0x24, (u32) temp_s7);
            if (temp_v0 != 0) {
                if (sp7C < 0.98f) {
                    temp_v0->actor.velocity.y = (sp7C + 1.0f) * 4.0f;
                    temp_v0->actor.speedXZ = (2.0f * (1.0f - fabsf(sp7C))) + 2.0f;
                    temp_v0->actor.world.rot.y = *((phi_s0 * 2) + &D_80C257F8) + Math_FAtan2F(sp80, sp78);
                } else {
                    temp_v0->actor.world.rot.y = phi_s0 * 0x5555;
                }
            }
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 3);
        return;
    }
    temp_v0_2 = Item_DropCollectible(arg1, arg0 + 0x24, (u32) temp_s7);
    if ((temp_v0_2 != 0) && (sp7C < 0.98f)) {
        temp_v0_2->actor.velocity.y = (sp7C + 1.0f) * 4.0f;
        temp_v0_2->actor.speedXZ = (2.0f * (1.0f - fabsf(sp7C))) + 2.0f;
        temp_v0_2->actor.world.rot.y = Math_FAtan2F(sp80, sp78);
    }
}

void ObjSwprize_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_a1;
    ObjSwprize *this = (ObjSwprize *) thisx;

    temp_a1 = this->actor.params;
    this = this;
    if (Flags_GetSwitch(globalCtx, temp_a1 & 0x7F) != 0) {
        func_80C25780(this);
        return;
    }
    func_80C25640(this);
}

void ObjSwprize_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjSwprize *this = (ObjSwprize *) thisx;

}

void func_80C25640(ObjSwprize *arg0) {
    arg0->actionFunc = func_80C25654;
}

void func_80C25654(ObjSwprize *this, GlobalContext *globalCtx) {
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        func_80C25698(this);
    }
}

void func_80C25698(ObjSwprize *arg0) {
    arg0->actionFunc = func_80C256AC;
}

void func_80C256AC(ObjSwprize *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        func_80C253D0(this, globalCtx);
        func_80C25710(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_80C25710(ObjSwprize *arg0) {
    arg0->unk_148 = 0x28;
    arg0->actionFunc = func_80C2572C;
}

void func_80C2572C(ObjSwprize *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s8 temp_a0;

    temp_v0 = this->unk_148;
    if ((s32) temp_v0 > 0) {
        this->unk_148 = temp_v0 - 1;
        if (this->unk_148 == 0) {
            temp_a0 = this->actor.cutscene;
            this = this;
            ActorCutscene_Stop((s16) temp_a0);
            func_80C25780(this);
        }
    }
}

void func_80C25780(ObjSwprize *arg0) {
    arg0->actionFunc = func_80C25794;
}

void func_80C25794(ObjSwprize *this, GlobalContext *globalCtx) {

}

void ObjSwprize_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjSwprize *this = (ObjSwprize *) thisx;
    this->actionFunc(this, globalCtx);
}
