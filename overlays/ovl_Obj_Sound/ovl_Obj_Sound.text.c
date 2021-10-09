? func_801A153C(Vec3f *, s8, ObjSound *);           /* extern */
? func_801A17F4(Vec3f *, s8, Actor *);              /* extern */
? func_801A4748(Vec3f *, u16, ObjSound *);          /* extern */
void func_8099AA84(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_801E0BD0;

typedef struct ObjSound {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ u8 unk144;                         /* inferred */
    /* 0x0145 */ u8 unk145;                         /* inferred */
    /* 0x0146 */ s16 unk146;                        /* inferred */
} ObjSound;                                         /* size 0x148 */

void ObjSound_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjSound *this = (ObjSound *) thisx;
    s16 temp_v0;

    temp_v0 = this->actor.params;
    this->unk144 = 0;
    this->unk146 = ((s32) temp_v0 >> 8) & 0xFF;
    this->unk145 = ((s32) temp_v0 >> 7) & 1;
    this->actor.params = temp_v0 & 0x7F;
    if (this->unk146 == 3) {
        this->actor.draw = func_8099AA84;
    }
}

void ObjSound_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjSound *this = (ObjSound *) thisx;
    if (this->unk146 == 1) {
        func_801A153C(NULL, 0);
    }
}

void ObjSound_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjSound *this = (ObjSound *) thisx;
    s16 temp_v0;

    temp_v0 = this->unk146;
    if (temp_v0 == 0) {
        if (this->unk145 != 0) {
            func_800B9010(&this->actor, *(&D_801E0BD0 + (this->actor.params * 2)));
            return;
        }
        func_800B8FE8(&this->actor, *(&D_801E0BD0 + (this->actor.params * 2)));
        return;
    }
    if (this->unk144 != 0) {
        if (temp_v0 == 1) {
            func_801A153C(&this->actor.projectedPos, this->unk1D, this);
            return;
        }
        if (temp_v0 == 2) {
            func_801A4748(&this->actor.projectedPos, *(&D_801E0BD0 + (this->actor.params * 2)), this);
            return;
        }
        // Duplicate return node #10. Try simplifying control flow for better match
        return;
    }
    this->unk144 = 1;
}

void func_8099AA84(Actor *this, GlobalContext *globalCtx) {
    if (((gSaveContext.eventInf[4] & 2) != 0) || ((gSaveContext.eventInf[3] & 0x20) != 0)) {
        func_801A17F4(&this->projectedPos, this->unk1D, this);
    }
}

