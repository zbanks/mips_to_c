struct _mips2c_stack_ItemBHeart_Destroy {};         /* size 0x0 */

struct _mips2c_stack_ItemBHeart_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ GraphicsContext *sp18;               /* inferred */
    /* 0x1C */ char pad_1C[0x8];                    /* maybe part of sp18[3]? */
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_ItemBHeart_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ItemBHeart_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808BCF54 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

extern ? D_06001290;
extern ? D_06001470;
static InitChainEntry D_808BD180[4];                /* unable to generate initializer */

void ItemBHeart_Init(Actor *thisx, GlobalContext *globalCtx) {
    ItemBHeart *this = (ItemBHeart *) thisx;
    if (Actor_GetCollectibleFlag(globalCtx, 0x1F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Actor_ProcessInitChain((Actor *) this, D_808BD180);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.8f);
    if (this->actor.params == 0x23) {
        this->unk_168 = 0.1f;
    } else {
        this->unk_168 = 1.0f;
    }
    this->actor.world.pos.y += 20.0f * this->unk_168;
}

void ItemBHeart_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ItemBHeart *this = (ItemBHeart *) thisx;

}

void ItemBHeart_Update(Actor *thisx, GlobalContext *globalCtx) {
    ItemBHeart *this = (ItemBHeart *) thisx;
    func_808BCF54(this, globalCtx);
    if (!(this->unk_168 < 0.5f)) {
        if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
            Actor_SetCollectibleFlag(globalCtx, 0x1F);
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        func_800B8A1C((Actor *) this, globalCtx, 0xD, 30.0f, 80.0f);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_808BCF54(ItemBHeart *this, GlobalContext *globalCtx) {
    this->actor.shape.rot.y += 0x400;
    Math_ApproachF(&this->unk_164, 0.4f, 0.1f, 0.01f);
    Actor_SetScale((Actor *) this, this->unk_164 * this->unk_168);
}

void ItemBHeart_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *sp24;
    GraphicsContext *sp18;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a2;
    Actor *phi_v0;
    s32 phi_a3;
    ItemBHeart *this = (ItemBHeart *) thisx;

    temp_a2 = globalCtx->state.gfxCtx;
    sp18 = temp_a2;
    temp_v0 = globalCtx->actorCtx.actorList[7].first;
    phi_v0 = temp_v0;
    phi_a3 = 0;
    if (temp_v0 != 0) {
loop_1:
        if ((phi_v0->id == 0x38) && (this->actor.projectedPos.z < phi_v0->projectedPos.z)) {
            phi_a3 = 1;
        } else {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 != 0) {
                goto loop_1;
            }
        }
    }
    if ((phi_a3 != 0) || (this->actor.world.rot.y != 0)) {
        sp38 = temp_a2;
        func_8012C2DC(sp18);
        temp_v0_6 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDA380003;
        sp38 = temp_a2;
        sp30 = temp_v0_6;
        sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = &temp_v0_7[1];
        temp_v0_7->words.w1 = (u32) &D_06001290;
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_8 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = &temp_v0_8[1];
        temp_v0_8->words.w1 = (u32) &D_06001470;
        temp_v0_8->words.w0 = 0xDE000000;
        return;
    }
    sp38 = temp_a2;
    func_8012C28C(sp18);
    temp_v0_3 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp38 = temp_a2;
    sp24 = temp_v0_3;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_06001290;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = &temp_v0_5[1];
    temp_v0_5->words.w1 = (u32) &D_06001470;
    temp_v0_5->words.w0 = 0xDE000000;
}
