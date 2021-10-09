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

typedef struct EnHeishi {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x60];                 /* maybe part of unk188[17]? */
    /* 0x01EE */ Vec3s unk1EE;                      /* inferred */
    /* 0x01F4 */ char pad1F4[0x60];                 /* maybe part of unk1EE[17]? */
    /* 0x0254 */ void (*actionFunc)(EnHeishi *, GlobalContext *);
    /* 0x0258 */ s16 unk258;                        /* inferred */
    /* 0x025A */ s16 unk25A;                        /* inferred */
    /* 0x025C */ char pad25C[0x2];                  /* maybe part of unk25A[2]? */
    /* 0x025E */ s16 unk25E;                        /* inferred */
    /* 0x0260 */ s16 unk260;                        /* inferred */
    /* 0x0262 */ char pad262[0x6];                  /* maybe part of unk260[4]? */
    /* 0x0268 */ s32 unk268;                        /* inferred */
    /* 0x026C */ s32 unk26C;                        /* inferred */
    /* 0x0270 */ s16 unk270;                        /* inferred */
    /* 0x0272 */ s16 unk272;                        /* inferred */
    /* 0x0274 */ char pad274[0x4];                  /* maybe part of unk272[3]? */
    /* 0x0278 */ s16 unk278;                        /* inferred */
    /* 0x027A */ char pad27A[0xA];                  /* maybe part of unk278[6]? */
    /* 0x0284 */ ColliderCylinder unk284;           /* inferred */
    /* 0x02C4 */ s16 unk2C4;                        /* overlap; inferred */
    /* 0x02C6 */ s16 unk2C6;                        /* inferred */
    /* 0x02C8 */ s16 unk2C8;                        /* inferred */
    /* 0x02CA */ char pad2CA[0x6];                  /* maybe part of unk2C8[4]? */
} EnHeishi;                                         /* size 0x2D0 */

void EnHeishi_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnHeishi *this = (EnHeishi *) thisx;
    s16 temp_v0;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600D640, &D_06003BFC, &this->unk188, &this->unk1EE, 0x11);
    temp_v0 = this->actor.params;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk268 = (s32) temp_v0;
    this->unk272 = this->actor.world.rot.y;
    if (temp_v0 == 0) {
        this->unk26C = 1;
        if (((gSaveContext.weekEventReg[63] & 0x80) == 0) && ((gSaveContext.day != 3) || (gSaveContext.isNight == 0))) {
            Actor_MarkForDeath(&this->actor);
        }
    } else {
        this->unk2C4 = 0x1E;
        this->unk2C6 = 0x3C;
        this->unk2C8 = 0;
        if (((gSaveContext.weekEventReg[63] & 0x80) != 0) || ((gSaveContext.day == 3) && (gSaveContext.isNight != 0))) {
            Actor_MarkForDeath(&this->actor);
        }
    }
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk284, &this->actor, &D_80BE9450);
    this->actor.flags |= 0x8000000;
    func_80BE91DC(this);
}

void EnHeishi_Destroy(Actor *thisx, GlobalContext *globalCtx) {
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
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_80BE91DC(EnHeishi *arg0) {
    func_80BE90BC(NULL);
    arg0->unk278 = 0;
    arg0->actionFunc = func_80BE9214;
}

void func_80BE9214(EnHeishi *this, GlobalContext *globalCtx) {

}

void EnHeishi_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHeishi *this = (EnHeishi *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    temp_v0 = this->unk270;
    if (temp_v0 != 0) {
        this->unk270 = temp_v0 - 1;
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if ((this->unk268 != 0) && (gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 50.0f, 0x1DU);
    Actor_SetScale(&this->actor, 0.01f);
    if (this->unk26C != 0) {
        func_80BE9148(this);
    }
    Actor_SetHeight(&this->actor, 60.0f);
    Math_SmoothStepToS(&this->unk25A, this->unk260, 1, 0xBB8, (s16) 0);
    Math_SmoothStepToS(&this->unk258, this->unk25E, 1, 0x3E8, (s16) 0);
    temp_a2 = &this->unk284;
    sp2C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

s32 func_80BE9380(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x10) {
        arg4->x += arg5->unk25A;
        arg4->y += arg5->unk258;
        arg4->z += arg5->unk25C;
    }
    return 0;
}

void EnHeishi_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnHeishi *this = (EnHeishi *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BE9380, NULL, &this->actor);
}

