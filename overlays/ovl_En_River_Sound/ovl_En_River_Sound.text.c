? func_8019FF9C(Vec3f *, s32, EnRiverSound *);      /* extern */
extern ? D_801E0BD0;
static ? D_808A8060;                                /* unable to generate initializer */

typedef struct EnRiverSound {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s8 unk144;                         /* inferred */
    /* 0x0145 */ u8 unk145;                         /* inferred */
    /* 0x0146 */ u8 unk146;                         /* inferred */
    /* 0x0147 */ char pad147[0x1];                  /* maybe part of unk146[2]? */
    /* 0x0148 */ void *unk148;                      /* inferred */
} EnRiverSound;                                     /* size 0x14C */

void EnRiverSound_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnRiverSound *this = (EnRiverSound *) thisx;
    Path *sp1C;
    Path *temp_a1;
    s16 temp_v0;
    s32 temp_v1;

    temp_v0 = this->actor.params;
    this->unk144 = 0;
    temp_v1 = ((s32) temp_v0 >> 8) & 0xFF;
    this->actor.params = temp_v0 & 0xFF;
    if (temp_v1 == 0xFF) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_a1 = &globalCtx->setupPathList[temp_v1];
    this = this;
    sp1C = temp_a1;
    this->unk148 = Lib_SegmentedToVirtual((void *) temp_a1->points);
    this->unk146 = temp_a1->count;
}

void EnRiverSound_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnRiverSound *this = (EnRiverSound *) thisx;
    Vec3f sp34;
    s32 sp30;
    PosRot *sp2C;
    CollisionContext *sp28;
    CollisionContext *temp_a0;
    PosRot *temp_a3;
    u8 temp_v0;
    u8 temp_v0_2;

    Math_Vec3f_Copy(&sp34, &globalCtx->view.eye);
    temp_a3 = &this->actor.world;
    if ((s32) this->actor.params < 0xFD) {
        func_800BCCDC((Vec3s *) this->unk148, this->unk146, &sp34, &this->actor.world.pos, 1);
        return;
    }
    sp2C = temp_a3;
    func_800BCCDC((Vec3s *) this->unk148, this->unk146, &sp34, &temp_a3->pos, 0);
    temp_a0 = &globalCtx->colCtx;
    sp28 = temp_a0;
    if (func_800C411C(temp_a0, &this->actor.floorPoly, &sp30, &this->actor, &sp2C->pos) != -32000.0f) {
        this->unk145 = func_800C9E18(temp_a0, this->actor.floorPoly, sp30);
    } else {
        this->unk145 = 0;
    }
    temp_v0 = this->unk145;
    if (temp_v0 == 0) {
        this->unk145 = this->actor.params - 0xFD;
    } else {
        this->unk145 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk145;
    if ((s32) temp_v0_2 >= 3) {
        this->unk145 = 2;
        return;
    }
    this->unk145 = temp_v0_2;
}

void EnRiverSound_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnRiverSound *this = (EnRiverSound *) thisx;
    s16 temp_v0;

    temp_v0 = this->actor.params;
    if ((s32) temp_v0 < 0xFD) {
        Audio_PlayActorSound2(&this->actor, *(&D_801E0BD0 + (temp_v0 * 2)));
        return;
    }
    func_8019FF9C(&this->actor.projectedPos, *(&D_808A8060 + (this->unk145 * 4)), this);
}

