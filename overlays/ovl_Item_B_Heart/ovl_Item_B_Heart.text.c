extern ? D_06001290;
extern ? D_06001470;
static InitChainEntry D_808BD180;                   /* unable to generate initializer */

typedef struct ItemBHeart {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char pad144[0x20];
    /* 0x0164 */ f32 unk164;                        /* inferred */
    /* 0x0168 */ f32 unk168;                        /* inferred */
} ItemBHeart;                                       /* size 0x16C */

void ItemBHeart_Init(Actor *thisx, GlobalContext *globalCtx) {
    ItemBHeart *this = (ItemBHeart *) thisx;
    if (Actor_GetCollectibleFlag(globalCtx, 0x1F) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    Actor_ProcessInitChain(&this->actor, &D_808BD180);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.8f);
    if (this->actor.params == 0x23) {
        this->unk168 = 0.1f;
    } else {
        this->unk168 = 1.0f;
    }
    this->actor.world.pos.y += 20.0f * this->unk168;
}

void ItemBHeart_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ItemBHeart *this = (ItemBHeart *) thisx;

}

void ItemBHeart_Update(Actor *thisx, GlobalContext *globalCtx) {
    ItemBHeart *this = (ItemBHeart *) thisx;
    func_808BCF54(this, globalCtx);
    if (!(this->unk168 < 0.5f)) {
        if (Actor_HasParent(&this->actor, globalCtx) != 0) {
            Actor_SetCollectibleFlag(globalCtx, 0x1F);
            Actor_MarkForDeath(&this->actor);
            return;
        }
        func_800B8A1C(&this->actor, globalCtx, 0xD, 30.0f, 80.0f);
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_808BCF54(ItemBHeart *this, GlobalContext *globalCtx) {
    this->actor.shape.rot.y += 0x400;
    Math_ApproachF(&this->unk164, 0.4f, 0.1f, 0.01f);
    Actor_SetScale(&this->actor, this->unk164 * this->unk168);
}

void ItemBHeart_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ItemBHeart *this = (ItemBHeart *) thisx;
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
        temp_a2->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp38 = temp_a2;
        sp30 = temp_v0_6;
        sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_06001290;
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_8 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = (u32) &D_06001470;
        temp_v0_8->words.w0 = 0xDE000000;
        return;
    }
    sp38 = temp_a2;
    func_8012C28C(sp18);
    temp_v0_3 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp38 = temp_a2;
    sp24 = temp_v0_3;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_06001290;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_06001470;
    temp_v0_5->words.w0 = 0xDE000000;
}

