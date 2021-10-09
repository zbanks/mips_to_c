typedef struct ObjTokeiTurret {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
} ObjTokeiTurret;                                   /* size = 0x15C */

struct _mips2c_stack_ObjTokeiTurret_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjTokeiTurret_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x8];                    /* maybe part of sp18[3]? */
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjTokeiTurret_Init {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjTokeiTurret_Update {};      /* size 0x0 */

extern Gfx D_06002508;
extern CollisionHeader D_060026A0;
extern ? D_06002A88;
extern CollisionHeader D_06002D80;
extern Gfx D_06003038;
static InitChainEntry D_80B91EC0[4];                /* unable to generate initializer */

void ObjTokeiTurret_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp1C;
    ObjTokeiTurret *temp_a3;
    s32 temp_v0;
    ObjTokeiTurret *this = (ObjTokeiTurret *) thisx;

    temp_a3 = this;
    temp_v0 = temp_a3->actor.params & 3;
    sp1C = temp_v0;
    this = temp_a3;
    Actor_ProcessInitChain((Actor *) temp_a3, D_80B91EC0);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        this->actor.uncullZoneScale = 240.0f;
        this->actor.uncullZoneDownward = 240.0f;
        if (temp_v0 == 0) {
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060026A0);
            return;
        }
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06002D80);
        return;
    }
    this->actor.uncullZoneScale = 1300.0f;
    this->actor.uncullZoneDownward = 1300.0f;
}

void ObjTokeiTurret_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiTurret *this = (ObjTokeiTurret *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void ObjTokeiTurret_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiTurret *this = (ObjTokeiTurret *) thisx;

}

void ObjTokeiTurret_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp28;
    GraphicsContext *sp24;
    Gfx *sp18;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_a3;
    s32 temp_v0;
    ObjTokeiTurret *this = (ObjTokeiTurret *) thisx;

    temp_v0 = this->actor.params & 3;
    if (temp_v0 == 1) {
        temp_a3 = globalCtx->state.gfxCtx;
        temp_v1 = temp_a3->polyOpa.p;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1->words.w1 = (u32) (sSetupDL + 0x4B0);
        temp_v1_2 = temp_v1 + 8;
        temp_v1_2->words.w0 = 0xDA380003;
        temp_v1_3 = temp_v1_2 + 8;
        sp28 = temp_v1_3;
        sp24 = temp_a3;
        sp18 = temp_v1_2;
        temp_v1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_3->words.w0 = 0xDE000000;
        temp_v1_3->words.w1 = (u32) &D_06002A88;
        temp_a3->polyOpa.p = temp_v1_3 + 8;
        return;
    }
    if (temp_v0 == 0) {
        func_800BDFC0(globalCtx, &D_06002508);
        return;
    }
    func_800BDFC0(globalCtx, &D_06003038);
}
