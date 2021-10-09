? func_800FAAB4(GlobalContext *, s32);              /* extern */
void func_8089F014(EnViewer *arg0, GlobalContext *arg1, f32 arg2, GlobalContext *); /* static */
void func_8089F0A0(EnViewer *arg0, GlobalContext *arg1); /* static */
static u8 D_8089F3E0 = 0;
static u8 D_8089F3E4 = 0;
static u32 D_8089F4D0;

typedef struct EnViewer {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnViewer *, GlobalContext *);
    /* 0x0148 */ f32 unk148;                        /* inferred */
    /* 0x014C */ f32 unk14C;                        /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ u8 unk154;                         /* inferred */
    /* 0x0155 */ char pad155[0x3];                  /* maybe part of unk154[4]? */
} EnViewer;                                         /* size 0x158 */

void EnViewer_SetupAction(EnViewer *this, void (*actionFunc)(EnViewer *, GlobalContext *)) {
    EnViewer *self = (EnViewer *) this;
    self->actionFunc = actionFunc;
}

void EnViewer_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnViewer *this = (EnViewer *) thisx;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f4;
    f32 temp_f6;
    s16 temp_v0;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t8;
    s32 temp_v1;
    u16 temp_t9;
    f32 phi_f6;
    f32 phi_f4;
    f32 phi_f18;
    f32 phi_f16;

    this->unk154 = D_8089F3E0;
    D_8089F3E0 += 1;
    temp_v0 = this->actor.params;
    temp_v1 = temp_v0 & 3;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                return;
            }
            temp_t4 = ((s32) temp_v0 >> 2) & 0x7F;
            temp_f6 = (f32) temp_t4;
            this->unk148 = (f32) (((s32) temp_v0 >> 9) & 0xFFFF) * 40.0f;
            phi_f6 = temp_f6;
            if (temp_t4 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            this->unk14C = phi_f6 * 40.0f;
            EnViewer_SetupAction(this, func_8089F2C4);
            return;
        }
        temp_t8 = ((s32) temp_v0 >> 2) & 0x7F;
        temp_f4 = (f32) temp_t8;
        this->unk148 = (f32) (((s32) temp_v0 >> 9) & 0xFFFF) * 40.0f;
        phi_f4 = temp_f4;
        if (temp_t8 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        temp_t9 = (u16) this->actor.world.rot.y;
        this->unk150 = phi_f4 * 40.0f;
        temp_f18 = (f32) temp_t9;
        phi_f18 = temp_f18;
        if ((s32) temp_t9 < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        this->unk14C = phi_f18 * 40.0f;
        EnViewer_SetupAction(this, func_8089F218);
        return;
    }
    temp_t3 = ((s32) temp_v0 >> 2) & 0x7F;
    temp_f16 = (f32) temp_t3;
    this->unk148 = (f32) ((s32) (temp_v0 & 0xFFFF) >> 9) * 40.0f;
    phi_f16 = temp_f16;
    if (temp_t3 < 0) {
        phi_f16 = temp_f16 + 4294967296.0f;
    }
    this->unk150 = phi_f16 * 40.0f;
    EnViewer_SetupAction(this, func_8089F17C);
}

void EnViewer_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnViewer *this = (EnViewer *) thisx;
    D_8089F3E0 += -1;
}

void func_8089F014(EnViewer *arg0, GlobalContext *arg1, f32 arg2) {
    f32 phi_f12;
    f32 phi_f0;

    phi_f12 = arg2;
    phi_f0 = 1.0f;
    if (arg2 > 1.0f) {
        goto block_3;
    }
    phi_f0 = 0.0f;
    if (arg2 < 0.0f) {
block_3:
        phi_f12 = phi_f0;
    }
    arg1->envCtx.unk_C3 = 0;
    arg1->envCtx.unk_E0 = 2;
    arg1->envCtx.unk_C1 = (u8) arg0->actor.world.rot.x;
    arg1->envCtx.unk_C2 = (u8) arg0->actor.world.rot.z;
    arg1->envCtx.unk_DC = phi_f12;
}

void func_8089F0A0(EnViewer *arg0, GlobalContext *arg1) {
    void *sp1C;
    CollisionContext *temp_a0;
    CollisionPoly *temp_a1;
    u8 temp_a2;
    u8 temp_t7;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    temp_t7 = D_8089F3E4 + 1;
    D_8089F3E4 = temp_t7;
    if (D_8089F3E0 == (temp_t7 & 0xFF)) {
        temp_a0 = arg1 + 0x830;
        if (arg1->envCtx.unk_C3 != 0xFF) {
            arg1->envCtx.unk_C3 = 0xFF;
            arg1->envCtx.unk_E0 = 0;
            arg1->envCtx.unk_DC = 1.0f;
            temp_a2 = temp_v1->floorBgId;
            temp_a1 = temp_v1->floorPoly;
            sp1C = arg1 + 0x10000;
            arg1 = arg1;
            func_800FAAB4(arg1, func_800C9C9C(temp_a0, temp_a1, (s32) temp_a2) & 0xFF);
            arg1->envCtx.unk_DC = 1.0f;
            arg1->envCtx.unk_C2 = arg1->envCtx.unk_C1;
        }
    }
}

void func_8089F17C(EnViewer *this, GlobalContext *globalCtx) {
    f32 temp_f12;
    f32 temp_f2;

    if ((this->actor.room == globalCtx->roomCtx.currRoom.num) && (fabsf(this->actor.xzDistToPlayer) <= this->unk148) && (temp_f2 = this->unk150, temp_f12 = this->actor.yDistToPlayer, (temp_f12 <= temp_f2)) && (this->actor.world.pos.y <= globalCtx->actorCtx.actorList[2].first->world.pos.y)) {
        func_8089F014((bitwise EnViewer *) temp_f12, (bitwise GlobalContext *) (temp_f12 / temp_f2));
        return;
    }
    func_8089F0A0();
}

void func_8089F218(EnViewer *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;

    temp_f0 = fabsf(this->actor.xzDistToPlayer);
    if ((this->actor.room == globalCtx->roomCtx.currRoom.num) && (temp_f12 = this->unk148, (temp_f0 <= temp_f12)) && (this->actor.yDistToPlayer <= this->unk150) && (this->actor.world.pos.y <= globalCtx->actorCtx.actorList[2].first->world.pos.y)) {
        temp_f0_2 = this->unk14C;
        func_8089F014((bitwise EnViewer *) temp_f12, (bitwise GlobalContext *) temp_f0, (temp_f0 - temp_f0_2) / (temp_f12 - temp_f0_2));
        return;
    }
    func_8089F0A0();
}

void func_8089F2C4(EnViewer *this, GlobalContext *globalCtx) {
    Vec3f sp20;
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    globalCtx = globalCtx;
    Actor_CalcOffsetOrientedToDrawRotation(&this->actor, &sp20, &temp_v0->world.pos);
    if (this->unk14C == 0.0f) {
        this->unk14C = 0.1f;
    }
    if ((this->actor.room == globalCtx->roomCtx.currRoom.num) && (sp20.x < fabsf(this->unk148))) {
        func_8089F014(this, globalCtx, sp20.z / this->unk14C, globalCtx);
        return;
    }
    func_8089F0A0(this, globalCtx);
}

void EnViewer_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnViewer *this = (EnViewer *) thisx;
    u32 temp_v0;

    temp_v0 = globalCtx->state.frames;
    if (D_8089F4D0 != temp_v0) {
        D_8089F4D0 = temp_v0;
        D_8089F3E4 = 0;
    }
    this->actionFunc(this, globalCtx);
}

void EnViewer_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnViewer *this = (EnViewer *) thisx;

}

