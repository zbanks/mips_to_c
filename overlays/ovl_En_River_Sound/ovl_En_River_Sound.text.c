typedef struct EnRiverSound {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s8 unk144;                          /* inferred */
    /* 0x145 */ u8 unk145;                          /* inferred */
    /* 0x146 */ u8 unk146;                          /* inferred */
    /* 0x147 */ char pad147[0x1];
    /* 0x148 */ void *unk148;                       /* inferred */
} EnRiverSound;                                     /* size = 0x14C */

struct _mips2c_stack_EnRiverSound_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnRiverSound_Init {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Path *sp1C;                          /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnRiverSound_Update {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ CollisionContext *sp28;              /* inferred */
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x14];
};                                                  /* size = 0x48 */

? func_8019FF9C(Vec3f *, s32, EnRiverSound *);      /* extern */
extern ? D_801E0BD0;
static ? D_808A8060;                                /* unable to generate initializer */

void EnRiverSound_Init(EnRiverSound *this, GlobalContext *globalCtx) {
    Path *sp1C;
    Path *temp_a1;
    s16 temp_v0;
    s32 temp_v1;
    EnRiverSound *this = (EnRiverSound *) thisx;

    temp_v0 = this->actor.params;
    this->unk144 = 0;
    temp_v1 = ((s32) temp_v0 >> 8) & 0xFF;
    this->actor.params = temp_v0 & 0xFF;
    if (temp_v1 == 0xFF) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_a1 = &globalCtx->setupPathList[temp_v1];
    this = this;
    sp1C = temp_a1;
    this->unk148 = Lib_SegmentedToVirtual((void *) temp_a1->points);
    this->unk146 = temp_a1->count;
}

void EnRiverSound_Update(EnRiverSound *this, GlobalContext *globalCtx) {
    ? sp34;
    s32 sp30;
    PosRot *sp2C;
    CollisionContext *sp28;
    CollisionContext *temp_a0;
    PosRot *temp_a3;
    u8 temp_v0;
    u8 temp_v0_2;
    EnRiverSound *this = (EnRiverSound *) thisx;

    Math_Vec3f_Copy((Vec3f *) &sp34, &globalCtx->view.eye);
    temp_a3 = &this->actor.world;
    if ((s32) this->actor.params < 0xFD) {
        func_800BCCDC((Vec3s *) this->unk148, this->unk146, (Vec3f *) &sp34, (Vec3f *) &this->actor.world, 1);
        return;
    }
    sp2C = temp_a3;
    func_800BCCDC((Vec3s *) this->unk148, this->unk146, (Vec3f *) &sp34, (Vec3f *) temp_a3, 0);
    temp_a0 = &globalCtx->colCtx;
    sp28 = temp_a0;
    if (func_800C411C(temp_a0, &this->actor.floorPoly, &sp30, (Actor *) this, (Vec3f *) sp2C) != -32000.0f) {
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

void EnRiverSound_Draw(EnRiverSound *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnRiverSound *this = (EnRiverSound *) thisx;

    temp_v0 = this->actor.params;
    if ((s32) temp_v0 < 0xFD) {
        Audio_PlayActorSound2((Actor *) this, *(&D_801E0BD0 + (temp_v0 * 2)));
        return;
    }
    func_8019FF9C(&this->actor.projectedPos, *(&D_808A8060 + (this->unk145 * 4)), this);
}
