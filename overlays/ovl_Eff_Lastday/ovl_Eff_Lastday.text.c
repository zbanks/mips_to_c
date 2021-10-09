typedef struct EffLastday {
    /* 0x000 */ Actor actor;
    /* 0x144 */ Gfx *unk144;                        /* inferred */
    /* 0x148 */ void *unk148;                       /* inferred */
    /* 0x14C */ s16 unk14C;                         /* inferred */
    /* 0x14E */ s16 unk14E;                         /* inferred */
    /* 0x150 */ u16 unk150;                         /* inferred */
    /* 0x152 */ char pad152[0x2];
    /* 0x154 */ void (*actionFunc)(EffLastday *, GlobalContext *);
} EffLastday;                                       /* size = 0x158 */

struct _mips2c_stack_EffLastday_Destroy {};         /* size 0x0 */

struct _mips2c_stack_EffLastday_Draw {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffLastday_Init {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ ActorContext *sp40;                  /* inferred */
    /* 0x44 */ char pad44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EffLastday_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEBD0C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEBDF8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEBEB8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEBF78 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEC0A4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80BEC0A4(s16 arg0, GraphicsContext *);    /* static */
extern void D_06000000;
extern Gfx D_06000060;
extern void D_06000148;
extern Gfx D_06000210;
extern void D_06000308;
extern Gfx D_06000370;
extern void D_06000448;
extern Gfx D_06000510;
extern void D_06000608;

void EffLastday_Init(EffLastday *this, GlobalContext *globalCtx) {
    ActorContext *sp40;
    ActorContext *temp_a0;
    s32 temp_v0;
    EffLastday *this = (EffLastday *) thisx;

    Actor_SetScale((Actor *) this, 0.1f);
    temp_v0 = this->actor.params & 0xF;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                this->unk144 = &D_06000370;
                this->unk148 = Lib_SegmentedToVirtual(&D_06000448);
                this->unk150 = 0x1FB;
                this->actionFunc = func_80BEBD0C;
                Actor_SetScale((Actor *) this, 1.0f);
                temp_a0 = &globalCtx->actorCtx;
                sp40 = temp_a0;
                Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 0x272, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, 1);
                Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 0x272, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, 2);
                Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 0x272, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, 3);
                return;
            }
            this->unk144 = &D_06000060;
            this->unk148 = Lib_SegmentedToVirtual(&D_06000148);
            this->unk150 = 0x1FE;
            this->actionFunc = func_80BEBF78;
            Actor_SetScale((Actor *) this, 0.2f);
            this->actor.home.rot.z = 0;
            return;
        }
        this->unk144 = &D_06000210;
        this->unk148 = Lib_SegmentedToVirtual(&D_06000308);
        this->unk150 = 0x1FD;
        this->actionFunc = func_80BEBEB8;
        Actor_SetScale((Actor *) this, 0.5f);
        return;
    }
    this->unk144 = &D_06000510;
    this->unk148 = Lib_SegmentedToVirtual(&D_06000608);
    this->unk150 = 0x1FC;
    this->actionFunc = func_80BEBDF8;
    Actor_SetScale((Actor *) this, 1.0f);
}

void EffLastday_Destroy(EffLastday *this, GlobalContext *globalCtx) {
    EffLastday *this = (EffLastday *) thisx;

}

void func_80BEBD0C(EffLastday *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_v1;

    if (func_800EE29C(globalCtx, (u32) this->unk150) != 0) {
        func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, (u32) this->unk150));
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk150)]->unk0;
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                this->actor.draw = NULL;
                this->unk14E = 0;
                this->unk14C = 0;
                return;
            }
            this->actor.draw = EffLastday_Draw;
            return;
        }
        temp_v0 = this->unk14E;
        this->actor.draw = EffLastday_Draw;
        if ((s32) temp_v0 < 0xFF) {
            this->unk14E = temp_v0 + 0xA;
        }
        if ((s32) this->unk14E >= 0x100) {
            this->unk14E = 0xFF;
        }
        this->unk14C += 1;
        return;
    }
    this->actor.draw = NULL;
}

void func_80BEBDF8(EffLastday *this, GlobalContext *globalCtx) {
    u16 temp_v1;

    if (func_800EE29C(globalCtx, (u32) this->unk150) != 0) {
        func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, (u32) this->unk150));
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk150)]->unk0;
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                this->actor.draw = NULL;
                this->unk14C = 0;
                return;
            }
            this->actor.draw = EffLastday_Draw;
            return;
        }
        this->actor.draw = EffLastday_Draw;
        this->unk14C += 1;
        return;
    }
    this->actor.draw = NULL;
}

void func_80BEBEB8(EffLastday *this, GlobalContext *globalCtx) {
    u16 temp_v1;

    if (func_800EE29C(globalCtx, (u32) this->unk150) != 0) {
        func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, (u32) this->unk150));
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk150)]->unk0;
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                this->actor.draw = NULL;
                this->unk14C = 0;
                return;
            }
            this->actor.draw = EffLastday_Draw;
            return;
        }
        this->actor.draw = EffLastday_Draw;
        this->unk14C += 1;
        return;
    }
    this->actor.draw = NULL;
}

void func_80BEBF78(EffLastday *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_v1;

    if (func_800EE29C(globalCtx, (u32) this->unk150) != 0) {
        func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, (u32) this->unk150));
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk150)]->unk0;
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                this->actor.draw = NULL;
                this->unk14E = 0;
                this->unk14C = 0;
                return;
            }
            this->actor.draw = EffLastday_Draw;
            return;
        }
        if (this->actor.home.rot.z == 0) {
            this->actor.home.rot.z = 1;
            Audio_PlayActorSound2((Actor *) this, 0x2987U);
        }
        temp_v0 = this->unk14E;
        this->actor.draw = EffLastday_Draw;
        if ((s32) temp_v0 < 0xFF) {
            this->unk14E = temp_v0 + 5;
        }
        if ((s32) this->unk14E >= 0x100) {
            this->unk14E = 0xFF;
        }
        this->unk14C += 1;
        return;
    }
    this->actor.draw = NULL;
}

void EffLastday_Update(EffLastday *this, GlobalContext *globalCtx) {
    EffLastday *this = (EffLastday *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80BEC0A4(s16 arg0) {
    void *temp_v0;

    temp_v0 = Lib_SegmentedToVirtual(&D_06000000);
    temp_v0->unkF = (s8) arg0;
    temp_v0->unk3F = (s8) arg0;
    temp_v0->unk4F = (s8) arg0;
    temp_v0->unk5F = (s8) arg0;
}

void EffLastday_Draw(EffLastday *this, GlobalContext *globalCtx) {
    Gfx *temp_v1;
    GraphicsContext *temp_a2;
    s32 temp_v0;
    EffLastday *this = (EffLastday *) thisx;

    temp_v0 = this->actor.params & 0xF;
    temp_a2 = globalCtx->state.gfxCtx;
    if ((temp_v0 != 1) && (temp_v0 != 2)) {
        if (temp_v0 == 3) {
            func_80BEC0A4(this->unk14E, temp_a2);
        } else {
            temp_v1 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000080;
            temp_v1->words.w1 = (this->unk14E & 0xFF) | ~0x55FF;
        }
    }
    AnimatedMat_DrawAlphaStep(globalCtx, (AnimatedMaterial *) this->unk148, 1.0f, (u32) this->unk14C);
    func_800BE03C(globalCtx, this->unk144);
}
