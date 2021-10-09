typedef struct EnHeishi {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x60];                  /* maybe part of unk188[17]? */
    /* 0x1EE */ Vec3s unk1EE;                       /* inferred */
    /* 0x1F4 */ char pad1F4[0x60];                  /* maybe part of unk1EE[17]? */
    /* 0x254 */ void (*actionFunc)(EnHeishi *, GlobalContext *);
    /* 0x258 */ s16 unk258;                         /* inferred */
    /* 0x25A */ s16 unk25A;                         /* inferred */
    /* 0x25C */ char pad25C[0x2];
    /* 0x25E */ s16 unk25E;                         /* inferred */
    /* 0x260 */ s16 unk260;                         /* inferred */
    /* 0x262 */ char pad262[0x6];                   /* maybe part of unk260[4]? */
    /* 0x268 */ s32 unk268;                         /* inferred */
    /* 0x26C */ s32 unk26C;                         /* inferred */
    /* 0x270 */ s16 unk270;                         /* inferred */
    /* 0x272 */ s16 unk272;                         /* inferred */
    /* 0x274 */ char pad274[0x10];                  /* maybe part of unk272[9]? */
    /* 0x284 */ ColliderCylinder unk284;            /* inferred */
    /* 0x2C4 */ s16 unk2C4;                         /* overlap; inferred */
    /* 0x2C6 */ s16 unk2C6;                         /* inferred */
    /* 0x2C8 */ s16 unk2C8;                         /* inferred */
    /* 0x2CA */ char pad2CA[0x6];                   /* maybe part of unk2C8[4]? */
} EnHeishi;                                         /* size = 0x2D0 */

struct _mips2c_stack_EnHeishi_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHeishi_Draw {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnHeishi_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnHeishi_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BE90BC {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BE9148 {};              /* size 0x0 */

struct _mips2c_stack_func_80BE91DC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE9214 {};              /* size 0x0 */

struct _mips2c_stack_func_80BE9380 {};              /* size 0x0 */

void func_80BE90BC(void *arg0, s32 arg1);           /* static */
void func_80BE9148(EnHeishi *arg0);                 /* static */
void func_80BE91DC(EnHeishi *arg0);                 /* static */
s32 func_80BE9380(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_06003BFC;
extern FlexSkeletonHeader D_0600D640;
static ColliderCylinderInit D_80BE9450 = {
    {0xA, 0, 0, 9, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x14, 0x3C, 0, {0, 0, 0}},
};
static ? D_80BE947C;                                /* unable to generate initializer */
static ? D_80BE9490;                                /* unable to generate initializer */

void EnHeishi_Init(EnHeishi *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnHeishi *this = (EnHeishi *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600D640, &D_06003BFC, &this->unk188, &this->unk1EE, 0x11);
    temp_v0 = this->actor.params;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk268 = (s32) temp_v0;
    this->unk272 = this->actor.world.rot.y;
    if (temp_v0 == 0) {
        this->unk26C = 1;
        if (((gSaveContext.weekEventReg[63] & 0x80) == 0) && ((gSaveContext.day != 3) || (gSaveContext.isNight == 0))) {
            Actor_MarkForDeath((Actor *) this);
        }
    } else {
        this->unk2C4 = 0x1E;
        this->unk2C6 = 0x3C;
        this->unk2C8 = 0;
        if (((gSaveContext.weekEventReg[63] & 0x80) != 0) || ((gSaveContext.day == 3) && (gSaveContext.isNight != 0))) {
            Actor_MarkForDeath((Actor *) this);
        }
    }
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk284, (Actor *) this, &D_80BE9450);
    this->actor.flags |= 0x8000000;
    func_80BE91DC(this);
}

void EnHeishi_Destroy(EnHeishi *this, GlobalContext *globalCtx) {
    EnHeishi *this = (EnHeishi *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk284);
}

void func_80BE90BC(void *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->unk264 = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80BE947C + (arg1 * 4)));
    temp_v1 = arg0->unk264;
    arg0->unk274 = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80BE947C + (temp_v1 * 4)), 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_80BE9490 + temp_v1), -10.0f);
}

void func_80BE9148(EnHeishi *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_v0 = arg0->unk272 - arg0->actor.world.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    arg0->unk260 = 0;
    if ((arg0->actor.xzDistToPlayer < 200.0f) && (phi_v1 < 0x4E20)) {
        arg0->unk260 = arg0->unk272 - arg0->actor.world.rot.y;
        temp_v0_2 = arg0->unk260;
        if ((s32) temp_v0_2 >= 0x2711) {
            arg0->unk260 = 0x2710;
            return;
        }
        if ((s32) temp_v0_2 < -0x2710) {
            arg0->unk260 = -0x2710;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80BE91DC(EnHeishi *arg0) {
    func_80BE90BC(NULL);
    arg0->unk278 = 0;
    arg0->actionFunc = func_80BE9214;
}

void func_80BE9214(EnHeishi *this, GlobalContext *globalCtx) {

}

void EnHeishi_Update(EnHeishi *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    EnHeishi *this = (EnHeishi *) thisx;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    temp_v0 = this->unk270;
    if (temp_v0 != 0) {
        this->unk270 = temp_v0 - 1;
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if ((this->unk268 != 0) && (gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
    Actor_SetScale((Actor *) this, 0.01f);
    if (this->unk26C != 0) {
        func_80BE9148(this);
    }
    Actor_SetHeight((Actor *) this, 60.0f);
    Math_SmoothStepToS(&this->unk25A, this->unk260, 1, 0xBB8, (s16) 0);
    Math_SmoothStepToS(&this->unk258, this->unk25E, 1, 0x3E8, (s16) 0);
    temp_a2 = &this->unk284;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

s32 func_80BE9380(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x10) {
        arg4->x += arg5->unk25A;
        arg4->y += arg5->unk258;
        arg4->z += arg5->unk25C;
    }
    return 0;
}

void EnHeishi_Draw(EnHeishi *this, GlobalContext *globalCtx) {
    EnHeishi *this = (EnHeishi *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BE9380, NULL, (Actor *) this);
}
