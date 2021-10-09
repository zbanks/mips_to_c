struct _mips2c_stack_EnTanron6_Destroy {};          /* size 0x0 */

struct _mips2c_stack_EnTanron6_DoNothing {};        /* size 0x0 */

struct _mips2c_stack_EnTanron6_Draw {};             /* size 0x0 */

struct _mips2c_stack_EnTanron6_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTanron6_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE60D0 {};              /* size 0x0 */

static DamageTable D_80BE6170 = {
    {
        0xF0,
        0xF0,
        0,
        0xF1,
        0xE1,
        0xE1,
        0,
        0xE1,
        0xF0,
        0xF0,
        0xF0,
        0xE1,
        0xE1,
        0x46,
        0xF0,
        0xF0,
        0xE1,
        0xF0,
        0xF0,
        0,
        0,
        0xF0,
        0xE1,
        0,
        0xF0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF0,
    },
};

void EnTanron6_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron6 *this = (EnTanron6 *) thisx;
    this->actor.colChkInfo.mass = 0xA;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    this->actor.colChkInfo.health = 1;
    this->actor.colChkInfo.damageTable = &D_80BE6170;
    this->actor.targetMode = 6;
    EnTanron6_DoNothing(this);
}

void EnTanron6_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron6 *this = (EnTanron6 *) thisx;

}

void EnTanron6_DoNothing(EnTanron6 *this) {
    this->actionFunc = func_80BE60D0;
}

void func_80BE60D0(EnTanron6 *this, GlobalContext *globalCtx) {

}

void EnTanron6_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron6 *this = (EnTanron6 *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 40.0f, 40.0f, 0x1DU);
}

void EnTanron6_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron6 *this = (EnTanron6 *) thisx;

}
