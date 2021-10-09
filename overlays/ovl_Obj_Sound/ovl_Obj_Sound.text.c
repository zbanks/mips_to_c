typedef struct ObjSound {
    /* 0x000 */ Actor actor;
    /* 0x144 */ u8 unk_144;                         /* inferred */
    /* 0x145 */ u8 unk_145;                         /* inferred */
    /* 0x146 */ s16 unk_146;                        /* inferred */
} ObjSound;                                         /* size = 0x148 */

struct _mips2c_stack_ObjSound_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjSound_Init {};              /* size 0x0 */

struct _mips2c_stack_ObjSound_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099AA84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_801A153C(Vec3f *, s8, ObjSound *);           /* extern */
? func_801A17F4(Vec3f *, s8, Actor *);              /* extern */
? func_801A4748(Vec3f *, u16, ObjSound *);          /* extern */
void func_8099AA84(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_801E0BD0;

void ObjSound_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    ObjSound *this = (ObjSound *) thisx;

    temp_v0 = this->actor.params;
    this->unk_144 = 0;
    this->unk_146 = ((s32) temp_v0 >> 8) & 0xFF;
    this->unk_145 = ((s32) temp_v0 >> 7) & 1;
    this->actor.params = temp_v0 & 0x7F;
    if (this->unk_146 == 3) {
        this->actor.draw = func_8099AA84;
    }
}

void ObjSound_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjSound *this = (ObjSound *) thisx;
    if (this->unk_146 == 1) {
        func_801A153C(NULL, 0);
    }
}

void ObjSound_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    ObjSound *this = (ObjSound *) thisx;

    temp_v0 = this->unk_146;
    if (temp_v0 == 0) {
        if (this->unk_145 != 0) {
            func_800B9010((Actor *) this, *(&D_801E0BD0 + (this->actor.params * 2)));
            return;
        }
        func_800B8FE8((Actor *) this, *(&D_801E0BD0 + (this->actor.params * 2)));
        return;
    }
    if (this->unk_144 != 0) {
        if (temp_v0 == 1) {
            func_801A153C(&this->actor.projectedPos, this->unk_1D, this);
            return;
        }
        if (temp_v0 == 2) {
            func_801A4748(&this->actor.projectedPos, *(&D_801E0BD0 + (this->actor.params * 2)), this);
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    this->unk_144 = 1;
}

void func_8099AA84(Actor *this, GlobalContext *globalCtx) {
    if (((gSaveContext.eventInf[4] & 2) != 0) || ((gSaveContext.eventInf[3] & 0x20) != 0)) {
        func_801A17F4(&this->projectedPos, this->unk_1D, this);
    }
}
