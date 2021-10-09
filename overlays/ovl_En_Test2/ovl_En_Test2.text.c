void func_80A3E4EC(Actor *actor, GlobalContext *globalCtx); /* static */
void func_80A3E524(Actor *this, GlobalContext *globalCtx); /* static */
static ? D_80A3E6B0;                                /* unable to generate initializer */
static ? D_80A3E6B4;                                /* unable to generate initializer */
static InitChainEntry D_80A3E74C;                   /* unable to generate initializer */
static ? D_80A3E75C;                                /* unable to generate initializer */

typedef struct EnTest2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void *unk144;                      /* inferred */
} EnTest2;                                          /* size 0x148 */

void EnTest2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTest2 *this = (EnTest2 *) thisx;
    s16 temp_v0;

    Actor_ProcessInitChain(&this->actor, &D_80A3E74C);
    temp_v0 = this->actor.params;
    if ((temp_v0 == 0xB) || (temp_v0 == 0xC)) {
        this->actor.flags |= 0x20;
    }
}

void EnTest2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTest2 *this = (EnTest2 *) thisx;
    s32 sp30;
    void *sp2C;
    ObjectContext *sp24;
    ObjectContext *temp_a0;
    s32 temp_v0;
    void *temp_v0_2;

    temp_a0 = &globalCtx->objectCtx;
    sp24 = temp_a0;
    temp_v0 = Object_GetIndex(temp_a0, *(&D_80A3E75C + (this->actor.params * 2)));
    if (temp_v0 < 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    sp30 = temp_v0;
    if (Object_IsLoaded(temp_a0, temp_v0) != 0) {
        temp_v0_2 = (this->actor.params * 0xC) + &D_80A3E6B0;
        this->actor.objBankIndex = (s8) temp_v0;
        this->actor.draw = func_80A3E524;
        if (temp_v0_2->unk8 != 0) {
            sp2C = temp_v0_2;
            Actor_SetObjectSegment(globalCtx, &this->actor);
            this->unk144 = Lib_SegmentedToVirtual(temp_v0_2->unk8);
        }
        if (globalCtx->roomCtx.currRoom.unk5 != 0) {
            this->actor.update = func_80A3E4EC;
            return;
        }
        this->actor.update = Actor_Noop;
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_80A3E4EC(Actor *actor, GlobalContext *globalCtx) {
    if (globalCtx->actorCtx.unk4 == 0x64) {
        actor->flags |= 0x80;
        return;
    }
    actor->flags &= -0x81;
}

void func_80A3E524(Actor *this, GlobalContext *globalCtx) {
    u32 sp2C;
    GraphicsContext *sp28;
    Gfx *sp20;
    AnimatedMaterial *temp_a2;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    u32 *temp_a3;

    temp_a2 = this->unk144;
    temp_a3 = &D_80A3E6B4 + (this->params * 0xC);
    if (temp_a2 != 0) {
        sp2C = *temp_a3;
        AnimatedMat_Draw(globalCtx, temp_a2);
    }
    if ((this->flags & 0x80) == 0x80) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp2C = *temp_a3;
        sp28 = temp_a0;
        func_8012C2DC(temp_a0);
        temp_v0 = sp28->polyXlu.p;
        sp28->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp2C = *temp_a3;
        sp28 = sp28;
        sp20 = temp_v0;
        sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        if (*temp_a3 != 0) {
            temp_v0_2 = sp28->polyXlu.p;
            sp28->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = *temp_a3;
            temp_v0_2->words.w0 = 0xDE000000;
        }
        temp_v0_3 = sp28->polyXlu.p;
        sp28->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = *(&D_80A3E6B0 + (this->params * 0xC));
        return;
    }
    if (*temp_a3 != 0) {
        func_800BE03C(globalCtx, (Gfx *) *temp_a3);
    }
    func_800BDFC0(globalCtx, *(&D_80A3E6B0 + (this->params * 0xC)));
}

