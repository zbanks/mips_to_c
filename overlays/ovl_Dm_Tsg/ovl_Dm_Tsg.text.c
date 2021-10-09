typedef struct DmTsg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad144[0x644];                 /* maybe part of actor[5]? */
    /* 0x788 */ f32 unk788;                         /* inferred */
    /* 0x78C */ char pad78C[0xC8];                  /* maybe part of unk788[51]? */
    /* 0x854 */ s16 unk854;                         /* inferred */
    /* 0x856 */ char pad856[0xC8];                  /* maybe part of unk854[101]? */
    /* 0x91E */ u8 unk91E;                          /* inferred */
    /* 0x91F */ char pad91F[0x1];
} DmTsg;                                            /* size = 0x920 */

struct _mips2c_stack_DmTsg_Destroy {};              /* size 0x0 */

struct _mips2c_stack_DmTsg_Draw {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_DmTsg_Init {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_DmTsg_Update {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

extern Gfx D_06002D30;
extern void D_06011458;

void DmTsg_Init(DmTsg *this, GlobalContext *globalCtx) {
    DmTsg *temp_s0;
    s32 temp_s1;
    DmTsg *phi_s0;
    s32 phi_s1;
    DmTsg *this = (DmTsg *) thisx;

    if (gSaveContext.entranceIndex == 0x2E00) {
        Actor_SetScale((Actor *) this, 0.1f);
        phi_s0 = this;
        phi_s1 = 0;
        do {
            phi_s0->unk78C = (s16) (s32) (Rand_ZeroOne() * 65535.0f);
            temp_s1 = phi_s1 + 1;
            temp_s0 = phi_s0 + 2;
            temp_s0->unk854 = (s32) (Rand_ZeroOne() * 200.0f) + 0x64;
            phi_s0 = temp_s0;
            phi_s1 = temp_s1;
        } while (temp_s1 != 0x64);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void DmTsg_Destroy(DmTsg *this, GlobalContext *globalCtx) {
    DmTsg *this = (DmTsg *) thisx;

}

void DmTsg_Update(DmTsg *this, GlobalContext *globalCtx) {
    s16 temp_s0;
    u32 temp_v0;
    void *temp_s1;
    void *temp_s3;
    void *temp_s4;
    s16 phi_s0;
    DmTsg *this = (DmTsg *) thisx;

    phi_s0 = 0;
    do {
        temp_s4 = this + (phi_s0 * 4);
        temp_s1 = this + (phi_s0 * 2);
        temp_s4->unk5F8 = (f32) ((Math_SinS((s16) ((phi_s0 & 0xF) * this->unk854)) * 60.0f) + 120.0f);
        temp_s3 = this + (phi_s0 * 0xC);
        temp_s3->unk148 = (f32) (temp_s4->unk5F8 * Math_CosS(temp_s1->unk78C));
        temp_s3->unk14C = (f32) (this->unk788 + (f32) (phi_s0 * 0x10));
        temp_s0 = phi_s0 + 1;
        temp_s3->unk150 = (f32) (temp_s4->unk5F8 * Math_SinS(temp_s1->unk78C));
        temp_s1->unk78C = (s16) (temp_s1->unk78C + temp_s1->unk856);
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 0x64);
    this->unk91E = 0;
    this->unk854 += 0x28;
    if (func_800EE29C(globalCtx, 0x202U) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0x202U);
        if (globalCtx->csCtx.npcActions[temp_v0]->unk0 != 1) {
            this->unk91E = 1;
        }
        func_800EDF24((Actor *) this, globalCtx, temp_v0);
    }
}

void DmTsg_Draw(DmTsg *this, GlobalContext *globalCtx) {
    MtxF *temp_fp;
    s32 temp_s4;
    u32 temp_s0;
    DmTsg *phi_s1;
    u32 phi_s0;
    s32 phi_s4;
    DmTsg *this = (DmTsg *) thisx;

    phi_s0 = 0U;
    phi_s4 = 0;
    phi_s0 = 0U;
    if (this->unk91E != 0) {
        temp_fp = &globalCtx->mf_187FC;
        phi_s1 = this;
        do {
            SysMatrix_InsertTranslation(phi_s1->unk148 + this->actor.world.pos.x, phi_s1->unk14C + this->actor.world.pos.y, phi_s1->unk150 + this->actor.world.pos.z, 0);
            Matrix_Scale(0.3f, 0.3f, 0.3f, 1);
            temp_s0 = phi_s0 + 1;
            AnimatedMat_DrawStep(globalCtx, Lib_SegmentedToVirtual(&D_06011458), phi_s0);
            SysMatrix_InsertMatrix(temp_fp, 1);
            func_800BE03C(globalCtx, &D_06002D30);
            temp_s4 = phi_s4 + 0xC;
            phi_s4 = temp_s4;
            phi_s0 = temp_s0;
            if (temp_s0 >= 0xAU) {

            }
            phi_s1 += 0xC;
        } while (temp_s4 != 0x4B0);
    }
}
