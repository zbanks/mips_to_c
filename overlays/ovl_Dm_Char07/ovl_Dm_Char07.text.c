struct _mips2c_stack_DmChar07_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DmChar07_DoNothing {};         /* size 0x0 */

struct _mips2c_stack_DmChar07_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x34];                    /* maybe part of sp1C[14]? */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ char pad58[0x4];
    /* 0x5C */ GraphicsContext *sp5C;               /* inferred */
    /* 0x60 */ char pad60[0x8];
};                                                  /* size = 0x68 */

struct _mips2c_stack_DmChar07_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_DmChar07_SetupAction {};       /* size 0x0 */

struct _mips2c_stack_DmChar07_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void DmChar07_SetupAction(DmChar07 *arg0, void (*arg1)(DmChar07 *, GlobalContext *)); /* static */
extern ? D_06000100;
extern ? D_06000240;
extern ? D_06000650;
extern ? D_06000790;
extern ? D_06000B80;
extern ? D_06000CC0;
extern ? D_060010D0;
extern ? D_06001210;
extern ? D_060015E0;
extern ? D_060016B8;
extern ? D_06002BA0;
extern ? D_06002CD0;
extern CollisionHeader D_06006688;
extern ? D_060076A0;
extern ? D_06007918;
extern void D_060105F8;
extern ? D_06010D68;

void DmChar07_SetupAction(DmChar07 *arg0, void (*arg1)(DmChar07 *, GlobalContext *)) {
    arg0->actionFunc = arg1;
}

void DmChar07_Init(DmChar07 *this, GlobalContext *globalCtx) {
    s16 temp_t6;
    DmChar07 *this = (DmChar07 *) thisx;

    this->isStage = 0;
    Actor_SetScale((Actor *) this, 1.0f);
    temp_t6 = this->dyna.actor.params;
    this->dyna.actor.params &= 0xFF;
    this->spotlightFlags = ((s32) temp_t6 >> 8) & 0x1F;
    if (this->dyna.actor.params == 0) {
        Actor_SetScale((Actor *) this, 0.1f);
        this->isStage = 1;
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06006688);
    } else {
        Actor_SetScale((Actor *) this, 1.0f);
    }
    DmChar07_SetupAction(this, DmChar07_DoNothing);
}

void DmChar07_Destroy(DmChar07 *this, GlobalContext *globalCtx) {
    DmChar07 *this = (DmChar07 *) thisx;
    if (this->isStage != 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
    }
}

void DmChar07_DoNothing(DmChar07 *this, GlobalContext *globalCtx) {

}

void DmChar07_Update(DmChar07 *this, GlobalContext *globalCtx) {
    DmChar07 *this = (DmChar07 *) thisx;
    this->actionFunc(this, globalCtx);
}

void DmChar07_Draw(DmChar07 *this, GlobalContext *globalCtx) {
    GraphicsContext *sp5C;
    Gfx *sp54;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    s16 temp_v0_17;
    s16 temp_v0_2;
    u8 phi_v1;
    u8 phi_v1_2;
    u8 phi_v1_3;
    u8 phi_v1_4;
    u8 phi_v1_5;
    u8 phi_v1_6;
    DmChar07 *this = (DmChar07 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    this = this;
    sp5C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp5C->polyOpa.p;
    sp5C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    this = this;
    sp5C = sp5C;
    sp54 = temp_v0;
    sp54->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = this->dyna.actor.params;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 != 1) {
            if (temp_v0_2 != 2) {
                if (temp_v0_2 != 3) {

                } else {
                    temp_v0_3 = sp5C->polyOpa.p;
                    sp5C->polyOpa.p = temp_v0_3 + 8;
                    temp_v0_3->words.w1 = (u32) &D_06010D68;
                    temp_v0_3->words.w0 = 0xDE000000;
                }
            } else {
                if ((this->spotlightFlags & 1) != 0) {
                    temp_v0_4 = sp5C->polyOpa.p;
                    sp5C->polyOpa.p = temp_v0_4 + 8;
                    temp_v0_4->words.w1 = (u32) &D_06000240;
                    temp_v0_4->words.w0 = 0xDE000000;
                }
                phi_v1 = this->spotlightFlags;
                if ((this->spotlightFlags & 2) != 0) {
                    temp_v0_5 = sp5C->polyOpa.p;
                    sp5C->polyOpa.p = temp_v0_5 + 8;
                    temp_v0_5->words.w1 = (u32) &D_06000790;
                    temp_v0_5->words.w0 = 0xDE000000;
                    phi_v1 = this->spotlightFlags;
                }
                phi_v1_2 = phi_v1;
                if ((phi_v1 & 4) != 0) {
                    temp_v0_6 = sp5C->polyOpa.p;
                    sp5C->polyOpa.p = temp_v0_6 + 8;
                    temp_v0_6->words.w1 = (u32) &D_06000CC0;
                    temp_v0_6->words.w0 = 0xDE000000;
                    phi_v1_2 = this->spotlightFlags;
                }
                phi_v1_3 = phi_v1_2;
                if ((phi_v1_2 & 8) != 0) {
                    temp_v0_7 = sp5C->polyOpa.p;
                    sp5C->polyOpa.p = temp_v0_7 + 8;
                    temp_v0_7->words.w1 = (u32) &D_06001210;
                    temp_v0_7->words.w0 = 0xDE000000;
                    phi_v1_3 = this->spotlightFlags;
                }
                if ((phi_v1_3 & 0x10) != 0) {
                    temp_v0_8 = sp5C->polyOpa.p;
                    sp5C->polyOpa.p = temp_v0_8 + 8;
                    temp_v0_8->words.w1 = (u32) &D_060016B8;
                    temp_v0_8->words.w0 = 0xDE000000;
                }
            }
        } else {
            sp5C = sp5C;
            this = this;
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060105F8));
            temp_v0_9 = sp5C->polyOpa.p;
            sp5C->polyOpa.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = (u32) &D_06007918;
            temp_v0_9->words.w0 = 0xDE000000;
            temp_v0_10 = sp5C->polyOpa.p;
            sp5C->polyOpa.p = temp_v0_10 + 8;
            temp_v0_10->words.w1 = (u32) &D_06000240;
            temp_v0_10->words.w0 = 0xDE000000;
            temp_v0_11 = sp5C->polyOpa.p;
            sp5C->polyOpa.p = temp_v0_11 + 8;
            temp_v0_11->words.w1 = (u32) &D_06000790;
            temp_v0_11->words.w0 = 0xDE000000;
            temp_v0_12 = sp5C->polyOpa.p;
            sp5C->polyOpa.p = temp_v0_12 + 8;
            temp_v0_12->words.w1 = (u32) &D_06000CC0;
            temp_v0_12->words.w0 = 0xDE000000;
            temp_v0_13 = sp5C->polyOpa.p;
            sp5C->polyOpa.p = temp_v0_13 + 8;
            temp_v0_13->words.w1 = (u32) &D_06001210;
            temp_v0_13->words.w0 = 0xDE000000;
            temp_v0_14 = sp5C->polyOpa.p;
            sp5C->polyOpa.p = temp_v0_14 + 8;
            temp_v0_14->words.w1 = (u32) &D_060016B8;
            temp_v0_14->words.w0 = 0xDE000000;
        }
    } else {
        temp_v0_15 = sp5C->polyOpa.p;
        sp5C->polyOpa.p = temp_v0_15 + 8;
        temp_v0_15->words.w1 = (u32) &D_06002CD0;
        temp_v0_15->words.w0 = 0xDE000000;
    }
    this = this;
    sp5C = sp5C;
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_16 = sp5C->polyXlu.p;
    sp5C->polyXlu.p = temp_v0_16 + 8;
    temp_v0_16->words.w0 = 0xDA380003;
    this = this;
    sp5C = sp5C;
    sp1C = temp_v0_16;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_17 = this->dyna.actor.params;
    if (temp_v0_17 != 0) {
        if (temp_v0_17 != 1) {
            if (temp_v0_17 != 2) {
                if (temp_v0_17 != 3) {
                    return;
                }
                /* Duplicate return node #35. Try simplifying control flow for better match */
                return;
            }
            if ((this->spotlightFlags & 1) != 0) {
                temp_v0_18 = sp5C->polyOpa.p;
                sp5C->polyOpa.p = temp_v0_18 + 8;
                temp_v0_18->words.w1 = (u32) &D_06000100;
                temp_v0_18->words.w0 = 0xDE000000;
            }
            phi_v1_4 = this->spotlightFlags;
            if ((this->spotlightFlags & 2) != 0) {
                temp_v0_19 = sp5C->polyOpa.p;
                sp5C->polyOpa.p = temp_v0_19 + 8;
                temp_v0_19->words.w1 = (u32) &D_06000650;
                temp_v0_19->words.w0 = 0xDE000000;
                phi_v1_4 = this->spotlightFlags;
            }
            phi_v1_5 = phi_v1_4;
            if ((phi_v1_4 & 4) != 0) {
                temp_v0_20 = sp5C->polyOpa.p;
                sp5C->polyOpa.p = temp_v0_20 + 8;
                temp_v0_20->words.w1 = (u32) &D_06000B80;
                temp_v0_20->words.w0 = 0xDE000000;
                phi_v1_5 = this->spotlightFlags;
            }
            phi_v1_6 = phi_v1_5;
            if ((phi_v1_5 & 8) != 0) {
                temp_v0_21 = sp5C->polyOpa.p;
                sp5C->polyOpa.p = temp_v0_21 + 8;
                temp_v0_21->words.w1 = (u32) &D_060010D0;
                temp_v0_21->words.w0 = 0xDE000000;
                phi_v1_6 = this->spotlightFlags;
            }
            if ((phi_v1_6 & 0x10) != 0) {
                temp_v0_22 = sp5C->polyOpa.p;
                sp5C->polyOpa.p = temp_v0_22 + 8;
                temp_v0_22->words.w1 = (u32) &D_060015E0;
                temp_v0_22->words.w0 = 0xDE000000;
            }
            return;
        }
        temp_v0_23 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v0_23 + 8;
        temp_v0_23->words.w1 = (u32) &D_060076A0;
        temp_v0_23->words.w0 = 0xDE000000;
        temp_v0_24 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v0_24 + 8;
        temp_v0_24->words.w1 = (u32) &D_06000100;
        temp_v0_24->words.w0 = 0xDE000000;
        temp_v0_25 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v0_25 + 8;
        temp_v0_25->words.w1 = (u32) &D_06000650;
        temp_v0_25->words.w0 = 0xDE000000;
        temp_v0_26 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v0_26 + 8;
        temp_v0_26->words.w1 = (u32) &D_06000B80;
        temp_v0_26->words.w0 = 0xDE000000;
        temp_v0_27 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v0_27 + 8;
        temp_v0_27->words.w1 = (u32) &D_060010D0;
        temp_v0_27->words.w0 = 0xDE000000;
        temp_v0_28 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v0_28 + 8;
        temp_v0_28->words.w1 = (u32) &D_060015E0;
        temp_v0_28->words.w0 = 0xDE000000;
        return;
    }
    temp_v0_29 = sp5C->polyXlu.p;
    sp5C->polyXlu.p = temp_v0_29 + 8;
    temp_v0_29->words.w1 = (u32) &D_06002BA0;
    temp_v0_29->words.w0 = 0xDE000000;
}
