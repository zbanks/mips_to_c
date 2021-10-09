void func_80A45164(Actor *this, GlobalContext *globalCtx); /* static */
static ? D_80A45270;                                /* unable to generate initializer */
static ? D_80A4527C;                                /* unable to generate initializer */
static ? D_80A45290;                                /* unable to generate initializer */
static ? D_80A452A4;                                /* unable to generate initializer */
static ? D_80A452B0;                                /* unable to generate initializer */

typedef struct EnSekihi {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ s32 unk15C;                        /* inferred */
    /* 0x0160 */ s32 unk160;                        /* inferred */
    /* 0x0164 */ s8 unk164;                         /* inferred */
    /* 0x0165 */ char pad165[0x3];                  /* maybe part of unk164[4]? */
    /* 0x0168 */ void (*actionFunc)(EnSekihi *, GlobalContext *);
} EnSekihi;                                         /* size 0x16C */

void EnSekihi_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSekihi *this = (EnSekihi *) thisx;
    s32 sp24;
    s32 *sp20;
    s32 sp1C;
    s32 *temp_t0;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v0 = this->actor.params & 0xF;
    if ((temp_v0 < 0) || (temp_a3 = temp_v0 * 4, ((temp_v0 < 5) == 0)) || (temp_t0 = temp_a3 + &D_80A4527C, (*temp_t0 == 0))) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if ((temp_v0 == 4) && ((u32) (gSaveContext.roomInf[126][0] & 0xFFFF) >= 0x1EU)) {
        gSaveContext.weekEventReg[13] |= 0x20;
    }
    temp_v1 = temp_v0 * 2;
    sp1C = temp_v1;
    this = this;
    sp24 = temp_a3;
    sp20 = temp_t0;
    temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, *(&D_80A45270 + temp_v1));
    if (temp_v0_2 >= 0) {
        this->unk164 = (s8) temp_v0_2;
    }
    this->actionFunc = func_80A44DE8;
    this->unk15C = *temp_t0;
    this->unk160 = *(&D_80A45290 + temp_a3);
    this->actor.focus.pos.y = this->actor.world.pos.y + 60.0f;
    this->actor.textId = *(&D_80A452A4 + temp_v1);
    Actor_SetScale(&this->actor, 0.1f);
}

void EnSekihi_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSekihi *this = (EnSekihi *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80A44DE8(EnSekihi *this, GlobalContext *globalCtx) {
    CollisionHeader *sp44;
    s32 sp40;
    ? sp3C;
    ? sp2C;
    CollisionHeader **sp28;
    CollisionHeader **temp_v1;
    CollisionHeader *temp_a0;
    s32 temp_t8;

    sp44 = NULL;
    sp2C.unk0 = (s32) D_80A452B0.unk0;
    sp2C.unk4 = (s32) D_80A452B0.unk4;
    sp2C.unk8 = (s32) D_80A452B0.unk8;
    sp2C.unkC = (s32) D_80A452B0.unkC;
    sp2C.unk10 = (s32) D_80A452B0.unk10;
    sp40 = this->actor.params & 0xF;
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk164) != 0) {
        this->actor.draw = func_80A45164;
        this->actor.objBankIndex = this->unk164;
        if (sp40 == 4) {
            this->actionFunc = func_80A450B0;
        } else {
            this->actionFunc = func_80A45130;
        }
        Actor_SetObjectSegment(globalCtx, &this->actor);
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        temp_t8 = sp40 * 4;
        temp_v1 = temp_t8 + &sp2C;
        temp_a0 = *temp_v1;
        if (temp_a0 != 0) {
            sp28 = temp_v1;
            BgCheck_RelocateMeshHeader(temp_a0, &sp44);
        }
        sp28 = temp_t8 + &sp2C;
        this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp44);
        if (((temp_t8 + &sp2C) == &sp3C) && (gSaveContext.inventory.items[gItemSlots[0x34]] != 0x34)) {
            Actor_MarkForDeath(&this->actor);
        }
    }
}

void func_80A44F40(EnSekihi *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_3;
    MessageContext *temp_a0;
    u16 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_a0 = &globalCtx->msgCtx;
    globalCtx = globalCtx;
    temp_v0 = func_80152498(temp_a0);
    if (temp_v0 != 4) {
        temp_a0_2 = globalCtx;
        if (temp_v0 != 5) {
            return;
        }
        globalCtx = globalCtx;
        if (func_80147624(temp_a0_2) != 0) {
            temp_v1 = globalCtx->msgCtx.unk11F04;
            if (temp_v1 != 0x1018) {
                if ((temp_v1 != 0x101A) && (temp_v1 != 0x101B)) {
                    return;
                }
                func_801477B4(globalCtx);
                this->actionFunc = func_80A450B0;
                // Duplicate return node #19. Try simplifying control flow for better match
                return;
            }
            func_80151938(globalCtx, (temp_v1 + 1) & 0xFFFF);
            return;
        }
        // Duplicate return node #19. Try simplifying control flow for better match
        return;
    }
    temp_a0_3 = globalCtx;
    globalCtx = globalCtx;
    if ((func_80147624(temp_a0_3) != 0) && (globalCtx->msgCtx.unk11F04 == 0x1019)) {
        temp_v0_2 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    return;
                }
                globalCtx = globalCtx;
                func_8019F230();
                func_801477B4(globalCtx);
                this->actionFunc = func_80A450B0;
                return;
            }
            globalCtx = globalCtx;
            func_8019F208();
            func_80151938(globalCtx, 0x101BU);
            return;
        }
        globalCtx = globalCtx;
        func_8019F208();
        func_80151938(globalCtx, 0x101AU);
    }
}

void func_80A450B0(EnSekihi *this, GlobalContext *globalCtx) {
    EnSekihi *temp_a0;

    temp_a0 = this;
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        temp_a0->actionFunc = func_80A44F40;
        return;
    }
    if (temp_a0->actor.xzDistToPlayer < 100.0f) {
        this = temp_a0;
        if (Actor_IsLinkFacingActor(&temp_a0->actor, 0x2600, globalCtx) != 0) {
            func_800B8614(&this->actor, globalCtx, 120.0f);
        }
    }
}

void func_80A45130(EnSekihi *this, GlobalContext *globalCtx) {

}

void EnSekihi_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnSekihi *this = (EnSekihi *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80A45164(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;

    temp_s0 = globalCtx->state.gfxCtx;
    if (this->unk160 != 0) {
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp28 = temp_v0;
        sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = this->unk160;
    }
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp20 = temp_v0_3;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = this->unk15C;
}

