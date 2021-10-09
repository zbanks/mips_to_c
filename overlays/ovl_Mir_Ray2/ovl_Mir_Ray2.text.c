void func_80AF3F70(MirRay2 *arg0, MirRay2 *);       /* static */
void func_80AF3FE0(MirRay2 *arg0, GlobalContext *arg1); /* static */
static ColliderJntSphElementInit D_80AF4350 = {{0, {0x200000, 0, 0}, {0, 0, 0}, 1, 0, 0}, {0, {{0, 0, 0}, 0x32}, 0x64}};
static ColliderJntSphInit D_80AF4374 = {{0xA, 0x21, 0, 0, 0, 0}, 1, &D_80AF4350};

typedef struct MirRay2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderJntSph unk144;             /* inferred */
    /* 0x0164 */ ColliderJntSphElement unk164;      /* inferred */
    /* 0x01A4 */ u16 unk1A4;                        /* inferred */
    /* 0x01A6 */ s16 unk1A6;                        /* inferred */
    /* 0x01A8 */ f32 unk1A8;                        /* inferred */
    /* 0x01AC */ LightNode *unk1AC;                 /* inferred */
    /* 0x01B0 */ LightInfo unk1B0;                  /* inferred */
    /* 0x01BE */ char pad1BE[0x2];
} MirRay2;                                          /* size 0x1C0 */

void func_80AF3F70(MirRay2 *arg0) {
    void *temp_v0;

    arg0->unk144.elements->unk30 = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk144.elements->dim.worldSphere.center.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk144.elements->dim.worldSphere.center.z = (s16) (s32) arg0->actor.world.pos.z;
    temp_v0 = arg0->unk144.elements;
    temp_v0->dim.worldSphere.radius = (s16) (s32) (arg0->unk1A8 * temp_v0->dim.scale);
}

void func_80AF3FE0(MirRay2 *arg0, GlobalContext *arg1) {
    if (arg0->actor.xzDistToPlayer < arg0->unk1A8) {
        Math_StepToS(arg0 + 0x1A6, 0x96, 0x32);
    } else {
        Math_StepToS(arg0 + 0x1A6, 0, 0x32);
    }
    Lights_PointNoGlowSetInfo(arg0 + 0x1B0, (s16) (s32) arg0->actor.world.pos.x, (s16) (s32) (arg0->actor.world.pos.y + 100.0f), (s16) (s32) arg0->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) (s32) arg0->unk1A6);
}

void MirRay2_Init(Actor *thisx, GlobalContext *globalCtx) {
    MirRay2 *this = (MirRay2 *) thisx;
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a1_2;

    temp_v0 = this->actor.home.rot.x;
    if ((s32) temp_v0 <= 0) {
        this->unk1A8 = 100.0f;
    } else {
        this->unk1A8 = (f32) temp_v0 * 4.0f;
    }
    Actor_SetScale(&this->actor, 1.0f);
    if ((this->actor.params & 0xF) != 1) {
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B4088, this->unk1A8 * 0.02f);
    }
    func_80AF3FE0(this, globalCtx);
    this->unk1AC = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->unk1B0);
    temp_a1 = &this->unk144;
    sp2C = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, &this->actor, &D_80AF4374, &this->unk164);
    func_80AF3F70(this);
    temp_v0_2 = this->actor.params;
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = this->actor.shape.rot.x;
    if ((temp_v0_2 & 0xF) != 1) {
        temp_a1_2 = (s32) (temp_v0_2 & 0xFE00) >> 9;
        if ((temp_a1_2 != 0x7F) && (Flags_GetSwitch(globalCtx, temp_a1_2) == 0)) {
            this->unk1A4 |= 1;
        }
    }
}

void MirRay2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    MirRay2 *this = (MirRay2 *) thisx;
    GlobalContext *temp_a0;
    LightContext *temp_a1;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->lightCtx;
    globalCtx = globalCtx;
    LightContext_RemoveLight(temp_a0, temp_a1, this->unk1AC);
    Collider_DestroyJntSph(globalCtx, &this->unk144);
}

void MirRay2_Update(Actor *thisx, GlobalContext *globalCtx) {
    MirRay2 *this = (MirRay2 *) thisx;
    if ((this->unk1A4 & 1) != 0) {
        if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9) != 0) {
            this->unk1A4 &= 0xFFFE;
            return;
        }
        // Duplicate return node #7. Try simplifying control flow for better match
        return;
    }
    func_80AF3FE0(this, globalCtx);
    if ((this->actor.params & 0xF) != 1) {
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 10.0f, 10.0f, 10.0f, 4U);
        this->actor.shape.shadowAlpha = 0x50;
    } else {
        func_80AF3F70(this, this);
    }
    CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->unk144.base);
}

void MirRay2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    MirRay2 *this = (MirRay2 *) thisx;

}

