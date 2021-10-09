typedef struct ObjTokeidai {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ? *unk144;                          /* inferred */
    /* 0x148 */ ? *unk148;                          /* inferred */
    /* 0x14C */ char pad14C[0x8];                   /* maybe part of unk148[3]? */
    /* 0x154 */ s16 unk154;                         /* inferred */
    /* 0x156 */ s16 unk156;                         /* inferred */
    /* 0x158 */ s32 unk158;                         /* inferred */
    /* 0x15C */ s16 unk15C;                         /* inferred */
    /* 0x15E */ s16 unk15E;                         /* inferred */
    /* 0x160 */ s16 unk160;                         /* inferred */
    /* 0x162 */ s16 unk162;                         /* inferred */
    /* 0x164 */ s16 unk164;                         /* inferred */
    /* 0x166 */ char pad166[0x6];                   /* maybe part of unk164[4]? */
    /* 0x16C */ s32 unk16C;                         /* inferred */
    /* 0x170 */ u16 unk170;                         /* inferred */
    /* 0x172 */ char pad172[0x2];
    /* 0x174 */ void (*actionFunc)(ObjTokeidai *, GlobalContext *);
} ObjTokeidai;                                      /* size = 0x178 */

struct _mips2c_stack_ObjTokeidai_Destroy {};        /* size 0x0 */

struct _mips2c_stack_ObjTokeidai_Draw {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjTokeidai_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjTokeidai_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB2790 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB27B4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB2834 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB28C8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB29F8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB2BBC {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AB3010 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB319C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AB3240 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB32F0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB3370 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB34CC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB3544 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB3598 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB363C {};              /* size 0x0 */

struct _mips2c_stack_func_80AB365C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB36C4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB3808 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB3880 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB38B0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB39BC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB3A7C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB3B34 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB3BB0 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB3BD8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB3BE8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AB3C50 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB3CCC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB3ED0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB4040 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AB4080 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AB4160 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AB4394 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x8];                     /* maybe part of sp24[3]? */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80AB4664 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad50[0x4];
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ char pad5C[0xC];                     /* maybe part of sp58[4]? */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80AB4894 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

? func_801A3F54(?);                                 /* extern */
s32 func_80AB2790(ObjTokeidai *);                   /* static */
void func_80AB27B4(ObjTokeidai *arg0);              /* static */
void func_80AB2834(ObjTokeidai *arg0);              /* static */
void func_80AB28C8(ObjTokeidai *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80AB29F8(ObjTokeidai *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80AB2BBC(ObjTokeidai *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80AB3010(Actor *arg0, s32 arg1);          /* static */
void func_80AB36C4(void *arg0, GlobalContext *arg1); /* static */
void func_80AB3BB0(ObjTokeidai *arg0, GlobalContext *); /* static */
s32 func_80AB3C50(ObjTokeidai *arg1);               /* static */
void func_80AB3CCC(ObjTokeidai *arg0, GlobalContext *arg1); /* static */
void func_80AB4394(Actor *thisx, GlobalContext *globalCtx); /* static */
void func_80AB4664(void *arg0, GraphicsContext **arg1); /* static */
void func_80AB4894(Actor *thisx, GlobalContext *globalCtx); /* static */
extern ? D_06009A08;
extern ? D_0600B0C0;
extern ? D_0600B208;
extern ? D_0600BA78;
extern ? D_0600BEE8;
extern ? D_0600C368;
extern ? D_0600CF28;
extern ? D_0600D388;
extern ? D_0600D8E0;
extern ? D_0600D8E8;
extern ? D_0600E818;
extern ? D_0600F518;
static InitChainEntry D_80AB49E0[4];                /* unable to generate initializer */

s32 func_80AB2790(void) {
    if (gSaveContext.isNight != 0) {
        return 0x8000;
    }
    return 0;
}

void func_80AB27B4(ObjTokeidai *arg0) {
    f32 temp_f6;
    s32 temp_hi;
    u16 temp_t6;
    f32 phi_f6;

    temp_t6 = arg0->unk170;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_hi = (s32) (phi_f6 * 0.010986328f) % 0x1E;
    arg0->unk168 = temp_hi;
    arg0->unk14E = 0x3C;
    arg0->unk150 = 0;
    arg0->unk14C = (s16) (s32) ((f32) temp_hi * 2184.5334f);
}

void func_80AB2834(ObjTokeidai *arg0) {
    f32 temp_f6;
    s32 temp_f18;
    u16 temp_t6;
    f32 phi_f6;

    func_80AB27B4();
    temp_t6 = arg0->unk170;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f18 = (s32) (phi_f6 * 0.00036621094f);
    arg0->unk16C = temp_f18;
    arg0->unk154 = 0;
    arg0->unk156 = 0;
    arg0->unk15C = 0;
    arg0->unk152 = (s16) (s32) ((f32) temp_f18 * 2730.6667f);
    arg0->unk158 = func_80AB2790(arg0);
}

void func_80AB28C8(ObjTokeidai *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_hi;

    arg0->actor.draw = func_80AB4894;
    arg0->unk144 = &D_0600BA78;
    func_80AB27B4();
    temp_v0 = arg1->sceneNum;
    if (((temp_v0 == 0x6F) && (gSaveContext.sceneSetupIndex == 2) && (arg1->csCtx.unk_12 == 0)) || ((temp_v0 == 0x2D) && (gSaveContext.sceneSetupIndex == 2) && (arg1->csCtx.unk_12 == 0))) {
        func_80AB3BB0(arg0, arg1);
        return;
    }
    temp_hi = (s32) gSaveContext.day % 5;
    if (((temp_hi == 3) && ((s32) gSaveContext.time < 0x4000)) || (temp_hi >= 4)) {
        arg0->actionFunc = func_80AB3240;
        arg0->actor.world.pos.y += arg0->actor.scale.y * 1900.0f;
        arg0->actor.shape.yOffset = 1500.0f;
        gSaveContext.weekEventReg[8] |= 0x40;
        return;
    }
    arg0->actionFunc = func_80AB4080;
}

void func_80AB29F8(ObjTokeidai *arg0, GlobalContext *arg1) {
    f32 temp_f10;
    s16 temp_v0;
    s32 temp_hi;

    arg0->actor.draw = func_80AB4394;
    func_80AB2834(arg0);
    temp_v0 = arg1->sceneNum;
    if (((temp_v0 == 0x6F) && (gSaveContext.sceneSetupIndex == 2) && (arg1->csCtx.unk_12 == 0)) || ((temp_v0 == 0x2D) && (gSaveContext.sceneSetupIndex == 2) && (arg1->csCtx.unk_12 == 0))) {
        func_80AB3BB0(arg0, arg1);
        return;
    }
    temp_hi = (s32) gSaveContext.day % 5;
    if (((temp_hi == 3) && ((s32) gSaveContext.time < 0x4000)) || (temp_hi >= 4)) {
        arg0->actor.world.pos.y += (arg0->actor.scale.y * 5191.0f) - 50.0f;
        arg0->actor.world.pos.x += Math_SinS(arg0->actor.world.rot.y) * arg0->actor.scale.z * 1791.0f;
        temp_f10 = -Math_CosS(arg0->actor.world.rot.y) * arg0->actor.scale.z;
        arg0->actor.home.pos.x = arg0->actor.world.pos.x;
        arg0->unk162 = -0x140;
        arg0->actor.shape.rot.x = -0x4000;
        arg0->actor.home.pos.y = arg0->actor.world.pos.y;
        arg0->actor.world.pos.z += temp_f10 * 1791.0f;
        arg0->actor.home.pos.z = arg0->actor.world.pos.z;
        arg0->actionFunc = func_80AB34CC;
        arg0->actor.home.pos.y -= 1178.0f;
        arg0->actor.home.pos.z += 13.0f;
        return;
    }
    arg0->actionFunc = func_80AB3ED0;
}

void func_80AB2BBC(ObjTokeidai *arg0, GlobalContext *arg1) {
    Actor *temp_v0_3;
    Actor *temp_v1;
    f32 temp_f10;
    s16 temp_v0;
    s32 temp_hi;
    s32 temp_v0_2;
    Actor *phi_v1;

    arg0->actor.draw = func_80AB4664;
    arg0->unk144 = &D_0600B208;
    arg0->unk148 = &D_0600B0C0;
    if (gSaveContext.isNight != 0) {
        arg0->unk16C = 0x64;
    } else {
        arg0->unk16C = 0;
    }
    temp_v0 = arg1->sceneNum;
    if (((temp_v0 == 0x6F) && (gSaveContext.sceneSetupIndex == 2) && (arg1->csCtx.unk_12 == 0)) || ((temp_v0 == 0x2D) && (gSaveContext.sceneSetupIndex == 2) && (arg1->csCtx.unk_12 == 0))) {
        arg0->unk16C = 0;
        func_80AB3BB0(arg0);
        temp_v1 = arg0->actor.child;
        phi_v1 = temp_v1;
        if ((temp_v1 == 0) && ((temp_v0_2 = (s32) (arg0->actor.params & 0xF000) >> 0xC, (temp_v0_2 == 3)) || (temp_v0_2 == 6))) {
            temp_v0_3 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x1EB, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            arg0->actor.child = temp_v0_3;
            phi_v1 = temp_v0_3;
        }
        if (phi_v1 != 0) {
            if (((s32) (arg0->actor.params & 0xF000) >> 0xC) == 6) {
                phi_v1->home.rot.x = 0x384;
                return;
            }
            phi_v1->home.rot.x = 0x12C;
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    temp_hi = (s32) gSaveContext.day % 5;
    if (((temp_hi == 3) && ((s32) gSaveContext.time < 0x4000)) || (temp_hi >= 4)) {
        arg0->unk16C = 0;
        arg0->actor.world.pos.y += arg0->actor.scale.y * -2160.0f;
        arg0->actor.world.pos.x += Math_SinS(arg0->actor.world.rot.y) * arg0->actor.scale.z * 5400.0f;
        temp_f10 = -Math_CosS(arg0->actor.world.rot.y) * arg0->actor.scale.z;
        arg0->actor.shape.rot.x = -0x4000;
        arg0->actionFunc = func_80AB3598;
        arg0->actor.world.pos.z += temp_f10 * 5400.0f;
        return;
    }
    arg0->actionFunc = func_80AB4160;
}

void ObjTokeidai_Init(ObjTokeidai *this, GlobalContext *globalCtx) {
    u32 temp_t0;
    ObjTokeidai *this = (ObjTokeidai *) thisx;

    globalCtx = globalCtx;
    Actor_ProcessInitChain((Actor *) this, D_80AB49E0);
    this->actionFunc = func_80AB3BD8;
    this->unk144 = NULL;
    this->unk148 = NULL;
    this->unk160 = 0;
    this->unk15E = 0;
    this->unk162 = 0;
    temp_t0 = (u32) (this->actor.params & 0xF000) >> 0xC;
    this->actor.home.rot.x = 0;
    this->unk170 = gSaveContext.time;
    switch (temp_t0) {
    case 4:
        globalCtx = globalCtx;
        Actor_SetScale((Actor *) this, 0.15f);
        func_80AB28C8(this, globalCtx);
        return;
    case 0:
        func_80AB28C8(this, globalCtx, globalCtx);
        return;
    case 1:
        this->unk144 = &D_0600D388;
        return;
    case 8:
        Actor_SetScale((Actor *) this, 1.0f);
        this->unk144 = &D_06009A08;
        this->actionFunc = func_80AB365C;
        return;
    case 5:
        globalCtx = globalCtx;
        Actor_SetScale((Actor *) this, 0.15f);
        func_80AB29F8(this, globalCtx);
        return;
    case 2:
        func_80AB29F8(this, globalCtx, globalCtx);
        return;
    case 9:
        Actor_SetScale((Actor *) this, 0.02f);
        this->actor.draw = func_80AB4394;
        func_80AB2834(this);
        this->actionFunc = func_80AB4040;
        return;
    case 10:
        Actor_SetScale((Actor *) this, 0.01f);
        this->actor.draw = func_80AB4394;
        func_80AB2834(this);
        this->actionFunc = func_80AB4040;
        return;
    case 6:
        globalCtx = globalCtx;
        Actor_SetScale((Actor *) this, 0.15f);
        func_80AB2BBC(this, globalCtx);
        return;
    case 3:
        func_80AB2BBC(this, globalCtx, globalCtx);
        return;
    case 11:
        this->unk144 = &D_0600D8E8;
        this->unk148 = &D_0600D8E0;
        this->actionFunc = func_80AB3BE8;
        /* fallthrough */
    default:
        return;
    }
}

void ObjTokeidai_Destroy(ObjTokeidai *this, GlobalContext *globalCtx) {
    ObjTokeidai *this = (ObjTokeidai *) thisx;

}

void func_80AB3010(Actor *arg0, s32 arg1) {
    s32 sp1C;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_f18;
    s32 temp_hi;
    s32 temp_v1;
    u16 temp_t6;
    f32 phi_f6;
    s32 phi_v0;
    s32 phi_v1;
    s16 phi_v0_2;

    temp_t6 = arg0->unk170;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f18 = (s32) (phi_f6 * 0.010986328f);
    temp_hi = temp_f18 % 0x1E;
    if (temp_hi != arg0->unk168) {
        temp_v0 = arg0->unk150;
        phi_v0 = (s32) temp_v0;
        if ((temp_v0 == 8) && (arg1 != 0)) {
            sp1C = temp_hi;
            Audio_PlayActorSound2(arg0, 0x2916U);
            phi_v0 = (s32) arg0->unk150;
        }
        temp_v1 = phi_v0 & 3;
        phi_v1 = temp_v1;
        phi_v0_2 = (s16) phi_v0;
        if (phi_v0 >= 9) {
            arg0->unk14E = (s16) (arg0->unk14E + 0x3C);
            arg0->unk14C = (s16) (arg0->unk14C + arg0->unk14E);
            phi_v0_2 = arg0->unk150;
        } else {
            if (temp_v1 == 0) {
                temp_v0_2 = arg0->unk150;
                arg0->unk14C = (s16) (arg0->unk14C + 0x5A);
                phi_v1 = temp_v0_2 & 3;
                phi_v0_2 = temp_v0_2;
            }
            if (phi_v1 == 1) {
                arg0->unk14C = (s16) (arg0->unk14C - 0x5A);
                phi_v0_2 = arg0->unk150;
            }
        }
        arg0->unk150 = (s16) (phi_v0_2 + 1);
        if ((((temp_f18 % 0x1E) == 0xF) && ((s32) arg0->unk14C < 0)) || (((temp_f18 % 0x1E) != 0xF) && ((s32) (s16) (s32) ((f32) (temp_f18 % 0x1E) * 2184.5334f) < (s32) arg0->unk14C))) {
            arg0->unk168 = temp_f18 % 0x1E;
            arg0->unk14E = 0x5A;
            arg0->unk150 = 0;
            arg0->unk14C = (s16) (s32) ((f32) (temp_f18 % 0x1E) * 2184.5334f);
        }
    }
}

void func_80AB319C(ObjTokeidai *this, GlobalContext *globalCtx) {
    if (((this->actor.bgCheckFlags & 1) != 0) || (this->actor.world.pos.y < 0.0f)) {
        this->actionFunc = func_80AB3BD8;
        return;
    }
    this->actor.shape.rot.x += 0x50;
    this->actor.shape.rot.z += 0x50;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
}

void func_80AB3240(ObjTokeidai *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    this = this;
    if (func_800EE29C(globalCtx, 0x84U) != 0) {
        this = this;
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x84U)]->unk0 == 2) {
            temp_f0 = this->actor.scale.y;
            this->actionFunc = func_80AB319C;
            this->actor.speedXZ = temp_f0 * 5.0f;
            this->actor.minVelocityY = temp_f0 * -50.0f;
            this->actor.velocity.y = 0.0f;
            this->actor.gravity = temp_f0 * -5.0f;
        }
    }
}

void func_80AB32F0(ObjTokeidai *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk15C;
    this->actor.shape.rot.x += temp_v0;
    if ((s32) temp_v0 >= 0xA1) {
        this->unk15C = temp_v0 - 5;
    }
    this->actor.world.pos.z += 4.0f;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (this->actor.world.pos.y < 0.0f) {
        this->actionFunc = func_80AB3BD8;
    }
}

void func_80AB3370(ObjTokeidai *this, GlobalContext *globalCtx) {
    f32 sp18;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;

    temp_v0 = this->unk154;
    if ((s32) temp_v0 < 0x4000) {
        this->unk154 = temp_v0 + 0x28;
    }
    if ((s32) this->unk154 >= 0x801) {
        this->unk156 += 4;
    }
    if ((s32) this->unk156 < 0x80) {
        this->unk15C = 0x28;
        this->actor.shape.rot.x = this->unk154 - 0x4000;
    } else {
        temp_v0_2 = this->actor.shape.rot.x;
        if ((s32) temp_v0_2 < -0x1000) {
            temp_v1 = this->unk15C;
            this->actor.shape.rot.x = temp_v0_2 + this->unk15C;
            if ((s32) temp_v1 < 0x1E0) {
                this->unk15C = temp_v1 + 0xA;
            }
        } else {
            this->actor.shape.rot.x = temp_v0_2 + this->unk15C;
            this->actionFunc = func_80AB32F0;
            this->actor.minVelocityY = -7.5f;
            this->actor.gravity = -0.75f;
            this->actor.velocity.y = -2.0f;
        }
    }
    temp_a0 = this->unk154;
    this = this;
    sp18 = Math_SinS(temp_a0);
    temp_f0 = Math_CosS(this->unk154);
    this->actor.world.pos.y = ((1178.0f * temp_f0) - ((f32) this->unk156 * sp18)) + this->actor.home.pos.y;
    this->actor.world.pos.z = (1178.0f * sp18) + ((f32) this->unk156 * temp_f0) + this->actor.home.pos.z;
}

void func_80AB34CC(ObjTokeidai *this, GlobalContext *globalCtx) {
    if ((func_800EE29C(globalCtx, 0x84U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x84U)]->unk0 == 1)) {
        this->actionFunc = func_80AB3370;
        this->unk154 = 0;
        this->unk156 = -0xD;
    }
}

void func_80AB3544(ObjTokeidai *this, GlobalContext *globalCtx) {
    if (this->actor.world.pos.y < 0.0f) {
        this->actionFunc = func_80AB3BD8;
        return;
    }
    this->unk160 += 0x64;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80AB3598(ObjTokeidai *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    this = this;
    if (func_800EE29C(globalCtx, 0x84U) != 0) {
        this = this;
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x84U)]->unk0 == 3) {
            temp_f0 = this->actor.scale.y;
            this->actionFunc = func_80AB3544;
            this->unk160 = 0;
            this->actor.minVelocityY = temp_f0 * -50.0f;
            this->actor.velocity.y = 0.0f;
            this->actor.gravity = temp_f0 * -5.0f;
        }
    }
}

void func_80AB363C(ObjTokeidai *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->actor.shape.rot.x;
    if ((s32) temp_v0 < 0x4000) {
        this->actor.shape.rot.x = temp_v0 + 0x28;
    }
}

void func_80AB365C(ObjTokeidai *this, GlobalContext *globalCtx) {
    if ((func_800EE29C(globalCtx, 0x84U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x84U)]->unk0 == 1)) {
        this->actionFunc = func_80AB363C;
    }
}

void func_80AB36C4(void *arg0, GlobalContext *arg1) {
    s16 temp_v1;

    if ((func_800EE29C(arg1, 0x84U) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, 0x84U)]->unk0 == 5)) {
        gSaveContext.weekEventReg[8] |= 0x40;
        temp_v1 = arg1->sceneNum;
        if (((temp_v1 == 0x6F) && (gSaveContext.sceneSetupIndex == 2) && (arg1->csCtx.unk_12 == 0)) || ((temp_v1 == 0x2D) && (gSaveContext.sceneSetupIndex == 2) && (arg1->csCtx.unk_12 == 0))) {
            func_801A3F54(0);
            gSaveContext.cutscene = 0;
            gSaveContext.nextCutsceneIndex = 0;
            gSaveContext.respawnFlag = 2;
            arg1->sceneLoadFlag = 0x14;
            arg1->nextEntranceIndex = gSaveContext.respawn[1].entranceIndex;
            arg1->unk_1887F = 2;
            if (gSaveContext.respawn[1].playerParams == 0xCFF) {
                gSaveContext.nextTransition = 0x15;
            } else {
                gSaveContext.nextTransition = 2;
            }
        }
        arg0->unk174 = func_80AB3BD8;
    }
}

void func_80AB3808(ObjTokeidai *this, GlobalContext *globalCtx) {
    Actor *temp_v0_3;
    s16 temp_v0;
    s32 temp_v0_2;

    temp_v0 = this->unk162;
    if ((s32) temp_v0 >= -0x13F) {
        this->unk162 = temp_v0 - 0xA;
        return;
    }
    temp_v0_2 = (s32) (this->actor.params & 0xF000) >> 0xC;
    if ((temp_v0_2 == 2) || (temp_v0_2 == 5)) {
        func_80AB36C4();
        return;
    }
    temp_v0_3 = this->actor.child;
    this->actionFunc = func_80AB3BD8;
    if (temp_v0_3 != 0) {
        temp_v0_3->home.rot.x = 0;
    }
}

void func_80AB3880(ObjTokeidai *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk154;
    if ((s32) temp_v0 > 0) {
        this->unk154 = temp_v0 - 1;
        return;
    }
    this->actionFunc = func_80AB3808;
    this->unk154 = 0;
}

void func_80AB38B0(ObjTokeidai *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;

    temp_v0 = this->unk154;
    this->unk160 += temp_v0;
    if ((s32) this->unk160 < 0x4000) {
        this->unk154 = temp_v0 + this->unk156;
        return;
    }
    temp_v1 = this->unk164;
    this->unk156 = 0x14;
    this->unk160 = 0x4000;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {

            } else {
                Audio_PlayActorSound2((Actor *) this, 0x2942U);
                goto block_9;
            }
        } else {
            Audio_PlayActorSound2((Actor *) this, 0x2941U);
            goto block_9;
        }
    } else {
        Audio_PlayActorSound2((Actor *) this, 0x2940U);
block_9:
    }
    temp_v0_2 = this->unk154;
    this->unk164 += 1;
    if ((s32) temp_v0_2 >= 0x191) {
        this->unk154 = -0xC8;
        return;
    }
    if ((s32) temp_v0_2 >= 0x33) {
        this->unk154 = (s16) -(s32) ((s32) temp_v0_2 >> 1);
        return;
    }
    this->actionFunc = func_80AB3880;
    this->unk154 = 0xA;
}

void func_80AB39BC(ObjTokeidai *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = this->unk154;
    if ((s32) temp_v0 > 0) {
        if ((temp_v0 & 1) != 0) {
            this->unk15E = this->unk156 + 0xD48;
        } else {
            temp_v0_2 = this->unk156;
            this->unk15E = 0xD48 - temp_v0_2;
            if ((s32) temp_v0_2 > 0) {
                this->unk156 = temp_v0_2 - 4;
            }
        }
        this->unk154 += -1;
        return;
    }
    temp_v0_3 = (s32) (this->actor.params & 0xF000) >> 0xC;
    if ((temp_v0_3 == 2) || (temp_v0_3 == 5)) {
        Audio_PlayActorSound2((Actor *) this, 0x293FU);
    }
    this->unk15E = 0xD48;
    this->actionFunc = func_80AB38B0;
    this->unk154 = 0;
    this->unk156 = 0xA;
    this->unk164 = 0;
}

void func_80AB3A7C(ObjTokeidai *this, GlobalContext *globalCtx) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v1 = this->unk15E;
    if ((s32) temp_v1 < 0xD48) {
        temp_v0 = (s32) (this->actor.params & 0xF000) >> 0xC;
        this->unk15E = temp_v1 + 0x19;
        if ((temp_v0 == 2) || (temp_v0 == 5)) {
            func_800B9010((Actor *) this, 0x213DU);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    temp_v0_2 = (s32) (this->actor.params & 0xF000) >> 0xC;
    if ((temp_v0_2 == 2) || (temp_v0_2 == 5)) {
        Audio_PlayActorSound2((Actor *) this, 0x293EU);
    }
    this->unk15E = 0xD48;
    this->actionFunc = func_80AB39BC;
    this->unk154 = 0xA;
    this->unk156 = 0x14;
}

void func_80AB3B34(ObjTokeidai *this, GlobalContext *globalCtx) {
    if (((func_800EE29C(globalCtx, 0x84U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x84U)]->unk0 == 4)) || ((gSaveContext.weekEventReg[8] & 0x40) != 0)) {
        this->actionFunc = func_80AB3A7C;
    }
}

void func_80AB3BB0(ObjTokeidai *arg0) {
    arg0->actionFunc = func_80AB3B34;
    arg0->unk154 = 0;
    arg0->unk156 = 0;
    arg0->unk15E = 0;
    arg0->unk160 = 0;
    arg0->unk162 = 0;
}

void func_80AB3BD8(ObjTokeidai *this, GlobalContext *globalCtx) {

}

void func_80AB3BE8(ObjTokeidai *this, GlobalContext *globalCtx) {
    s32 temp_hi;

    temp_hi = (s32) gSaveContext.day % 5;
    if (((temp_hi == 3) && ((s32) gSaveContext.time < 0x4000)) || (temp_hi >= 4) || ((gSaveContext.weekEventReg[8] & 0x40) != 0)) {
        this->actor.draw = ObjTokeidai_Draw;
        return;
    }
    this->actor.draw = NULL;
}

s32 func_80AB3C50(ObjTokeidai *arg1) {
    if (gSaveContext.inventory.items[0] == 0xFF) {
        goto block_5;
    }
    if ((((s32) gSaveContext.day % 5) == 3) && ((s32) gSaveContext.time < 0x4000)) {
        func_80AB3BB0();
        return 1;
    }
block_5:
    return 0;
}

void func_80AB3CCC(ObjTokeidai *arg0, GlobalContext *arg1) {
    ObjTokeidai *temp_a0;
    f32 temp_f6;
    s16 temp_v0;
    s32 temp_f18;
    s32 temp_t1;
    s32 temp_t8;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_t6;
    f32 phi_f6;
    s32 phi_v1;
    s16 phi_v0;
    ObjTokeidai *phi_a0;

    temp_t6 = arg0->unk170;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f18 = (s32) (phi_f6 * 0.00036621094f);
    if (temp_f18 != arg0->unk16C) {
        temp_v0 = arg0->unk156;
        temp_v1 = temp_v0 & 3;
        phi_v1 = temp_v1;
        if ((s32) temp_v0 >= 0xD) {
            arg0->unk154 += 0xA;
            arg0->unk152 += arg0->unk154;
            phi_v0 = arg0->unk156;
        } else {
            if (temp_v1 == 0) {
                arg0->unk152 += 0x3C;
                phi_v1 = arg0->unk156 & 3;
            }
            phi_v0 = arg0->unk156;
            if (phi_v1 == 1) {
                arg0->unk152 += -0x3C;
                phi_v0 = arg0->unk156;
            }
        }
        arg0->unk156 = phi_v0 + 1;
        if (((temp_f18 == 0xC) && ((s32) arg0->unk152 < 0)) || ((temp_f18 != 0xC) && ((s32) (s16) (s32) ((f32) temp_f18 * 2730.6667f) < (s32) arg0->unk152))) {
            arg0->unk16C = temp_f18;
            arg0->unk154 = 0;
            arg0->unk156 = 0;
            arg0->unk152 = (s16) (s32) ((f32) temp_f18 * 2730.6667f);
        }
    }
    temp_a0 = arg0;
    temp_v1_2 = temp_a0->unk158;
    phi_a0 = temp_a0;
    if (func_80AB2790((ObjTokeidai *) temp_f18) != temp_v1_2) {
        if (temp_a0->unk16C == 6) {
            temp_a0->unk15C += 0x222;
            temp_t1 = temp_v1_2 + temp_a0->unk15C;
            temp_a0->unk158 = temp_t1;
            if (temp_t1 >= 0x10001) {
                arg0 = temp_a0;
                arg0->unk158 = func_80AB2790(temp_a0);
                arg0->unk15C = 0;
                phi_a0 = arg0;
            }
        }
        if (phi_a0->unk16C == 0x12) {
            phi_a0->unk15C += 0x222;
            temp_t8 = phi_a0->unk158 + phi_a0->unk15C;
            phi_a0->unk158 = temp_t8;
            if (temp_t8 >= 0x8001) {
                arg0 = phi_a0;
                arg0->unk158 = func_80AB2790(phi_a0);
                arg0->unk15C = 0;
            }
        }
    }
}

void func_80AB3ED0(ObjTokeidai *this, GlobalContext *globalCtx) {
    SaveContext *phi_v1;
    ObjTokeidai *phi_a0;
    ObjTokeidai *phi_a0_2;

    phi_v1 = &gSaveContext;
    phi_a0 = this;
    if ((((s32) gSaveContext.day % 5) == 3) && (this->unk16C < 6) && ((s32) gSaveContext.time < 0x4000)) {
        this->actor.draw = func_80AB4394;
        func_80AB3BB0();
        gSaveContext.weekEventReg[8] |= 0x40;
        return;
    }
    if (globalCtx->csCtx.state != 0) {
        this->actor.home.rot.x = 1;
        this->unk170 += 3;
        this->actor.draw = func_80AB4394;
    } else {
        if (((globalCtx->actorCtx.unk5 & 2) == 0) && (((s32) (this->actor.params & 0xF000) >> 0xC) == 5) && (ActorCutscene_GetCurrentIndex() == -1)) {
            this->actor.draw = NULL;
        }
        this->unk170 = gSaveContext.time;
        phi_v1 = &gSaveContext;
        phi_a0 = this;
        if (this->actor.home.rot.x != 0) {
            this = this;
            func_80AB2834(this);
            this->actor.home.rot.x = 0;
            phi_v1 = &gSaveContext;
            phi_a0 = this;
        }
    }
    phi_a0_2 = phi_a0;
    if ((((s32) phi_v1->day % 5) != 3) || ((s32) phi_v1->time >= 0x4000)) {
        this = phi_a0;
        func_80AB3010((Actor *) phi_a0, 1);
        phi_a0_2 = this;
    }
    func_80AB3CCC(phi_a0_2, globalCtx);
}

void func_80AB4040(ObjTokeidai *this, GlobalContext *globalCtx) {
    this->unk170 = gSaveContext.time;
    func_80AB3010((Actor *)1);
    func_80AB3CCC(this, globalCtx);
}

void func_80AB4080(ObjTokeidai *this, GlobalContext *globalCtx) {
    if (func_80AB3C50(this) != 0) {
        this->actor.draw = func_80AB4894;
        return;
    }
    if (globalCtx->csCtx.state != 0) {
        this->actor.home.rot.x = 1;
        this->actor.draw = func_80AB4894;
        this->unk170 += 3;
    } else {
        if (((globalCtx->actorCtx.unk5 & 2) == 0) && (((s32) (this->actor.params & 0xF000) >> 0xC) == 4) && (ActorCutscene_GetCurrentIndex() == -1)) {
            this->actor.draw = NULL;
        }
        this->unk170 = gSaveContext.time;
        if (this->actor.home.rot.x != 0) {
            func_80AB27B4(this);
            this->actor.home.rot.x = 0;
        }
    }
    func_80AB3010((Actor *) this, 0);
}

void func_80AB4160(ObjTokeidai *this, GlobalContext *globalCtx) {
    Actor *temp_v0_2;
    Actor *temp_v1;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    Actor *phi_v1;

    if (func_80AB3C50(this) != 0) {
        temp_v1 = this->actor.child;
        this->unk16C = 0;
        phi_v1 = temp_v1;
        if ((temp_v1 == 0) && ((temp_v0 = (s32) (this->actor.params & 0xF000) >> 0xC, (temp_v0 == 3)) || (temp_v0 == 6))) {
            temp_v0_2 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x1EB, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            this->actor.child = temp_v0_2;
            phi_v1 = temp_v0_2;
        }
        if (phi_v1 != 0) {
            if (((s32) (this->actor.params & 0xF000) >> 0xC) == 6) {
                phi_v1->home.rot.x = 0x384;
                return;
            }
            phi_v1->home.rot.x = 0x12C;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    this->actor.shape.rot.y += -0x40;
    if (gSaveContext.isNight != 0) {
        temp_v0_3 = this->unk16C;
        if (temp_v0_3 < 0x64) {
            this->unk16C = temp_v0_3 + 4;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    temp_v0_4 = this->unk16C;
    if (temp_v0_4 > 0) {
        this->unk16C = temp_v0_4 - 4;
    }
}

void ObjTokeidai_Update(ObjTokeidai *this, GlobalContext *globalCtx) {
    ObjTokeidai *this = (ObjTokeidai *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjTokeidai_Draw(ObjTokeidai *this, GlobalContext *globalCtx) {
    Gfx *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;
    ObjTokeidai *this = (ObjTokeidai *) thisx;

    temp_s0 = globalCtx->state.gfxCtx;
    if (this->unk144 != 0) {
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp28 = temp_v0;
        sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = (u32) this->unk144;
    }
    if (this->unk148 != 0) {
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp20 = temp_v0_3;
        sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = (u32) this->unk148;
    }
}

void func_80AB4394(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp40;
    Gfx *sp38;
    Gfx *sp30;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_v0_6;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_InsertTranslation(0.0f, (f32) thisx->unk15E, 0.0f, 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -1791.0f, 1);
    SysMatrix_InsertXRotation_s((s16) ((s32) thisx->unk160 * -1), 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, 1791.0f, 1);
    SysMatrix_StatePush();
    SysMatrix_InsertZRotation_s((s16) ((s32) thisx->unk14C * -1), 1);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp40 = temp_v0;
    sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_0600CF28;
    temp_v0_2->words.w0 = 0xDE000000;
    SysMatrix_StatePop();
    SysMatrix_InsertTranslation(0.0f, 0.0f, (f32) thisx->unk162, 1);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp38 = temp_v0_3;
    sp38->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_0600BEE8;
    temp_v0_4->words.w0 = 0xDE000000;
    SysMatrix_InsertZRotation_s((s16) ((s32) thisx->unk152 * -2), 1);
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDA380003;
    sp30 = temp_v0_5;
    sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_6 = (s32) (thisx->params & 0xF000) >> 0xC;
    if ((temp_v0_6 == 9) || (temp_v0_6 == 0xA)) {
        temp_v0_8 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = (u32) &D_0600F518;
        temp_v0_8->words.w0 = 0xDE000000;
    } else {
        temp_v0_7 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_0600E818;
        temp_v0_7->words.w0 = 0xDE000000;
    }
    SysMatrix_InsertTranslation(0.0f, -1112.0f, -19.6f, 1);
    Matrix_RotateY(thisx->unk15A, 1U);
    temp_v0_9 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0xDA380003;
    sp24 = temp_v0_9;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_10 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_10 + 8;
    temp_v0_10->words.w1 = (u32) &D_0600C368;
    temp_v0_10->words.w0 = 0xDE000000;
}

void func_80AB4664(Actor *arg0, GraphicsContext **arg1) {
    s32 sp68;
    Gfx *sp58;
    Gfx *sp54;
    Gfx *sp4C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_s0;

    sp68 = arg1->unk18840;
    Matrix_RotateY((s16) ((s32) arg0->shape.rot.y * -1), 1U);
    SysMatrix_InsertTranslation(0.0f, (f32) arg0->unk15E, 0.0f, 1);
    SysMatrix_InsertTranslation(0.0f, -5480.0f, 80.0f, 1);
    SysMatrix_InsertXRotation_s((s16) ((s32) arg0->unk160 * -1), 1);
    SysMatrix_InsertTranslation(0.0f, 5480.0f, -80.0f, 1);
    Matrix_RotateY(arg0->shape.rot.y, 1U);
    temp_s0 = arg1->unk0;
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp58 = temp_v0;
    sp58->words.w1 = Gfx_TwoTexScroll(arg1->unk0, 0, 0U, 0U, 0x20, 0x40, 1, (u32) -sp68, 0U, 0x20, 0x20);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp54 = temp_v0_2;
    sp54->words.w1 = Matrix_NewMtx(arg1->unk0);
    func_8012C28C(arg1->unk0);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = arg0->unk144;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    sp4C = temp_v0_4;
    sp4C->words.w1 = Matrix_NewMtx(arg1->unk0);
    func_8012C2DC(arg1->unk0);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFA0000FF;
    temp_v0_5->words.w1 = ((s32) ((f32) arg0->unk16C * 2.55f) & 0xFF) | 0xFFEBB400;
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDE000000;
    temp_v0_6->words.w1 = arg0->unk148;
}

void func_80AB4894(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_s1;

    temp_s1 = globalCtx->state.gfxCtx;
    SysMatrix_InsertTranslation(0.0f, (f32) thisx->unk15E, 0.0f, 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -1791.0f, 1);
    Matrix_RotateY((s16) ((s32) thisx->shape.rot.y * -1), 1U);
    SysMatrix_InsertXRotation_s((s16) ((s32) thisx->unk160 * -1), 1);
    Matrix_RotateY(thisx->shape.rot.y, 1U);
    SysMatrix_InsertTranslation(0.0f, 0.0f, 1791.0f, 1);
    SysMatrix_InsertZRotation_s(thisx->unk14C, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_0600BA78;
}
