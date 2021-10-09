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

typedef struct EffLastday {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ Gfx *unk144;                       /* inferred */
    /* 0x0148 */ void *unk148;                      /* inferred */
    /* 0x014C */ s16 unk14C;                        /* inferred */
    /* 0x014E */ s16 unk14E;                        /* inferred */
    /* 0x0150 */ u16 unk150;                        /* inferred */
    /* 0x0152 */ char pad152[0x2];                  /* maybe part of unk150[2]? */
    /* 0x0154 */ void (*actionFunc)(EffLastday *, GlobalContext *);
} EffLastday;                                       /* size 0x158 */

void EffLastday_Init(Actor *thisx, GlobalContext *globalCtx) {
    EffLastday *this = (EffLastday *) thisx;
    ActorContext *sp40;
    ActorContext *temp_a0;
    s32 temp_v0;

    Actor_SetScale(&this->actor, 0.1f);
    temp_v0 = this->actor.params & 0xF;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                this->unk144 = &D_06000370;
                this->unk148 = Lib_SegmentedToVirtual(&D_06000448);
                this->unk150 = 0x1FB;
                this->actionFunc = func_80BEBD0C;
                Actor_SetScale(&this->actor, 1.0f);
                temp_a0 = &globalCtx->actorCtx;
                sp40 = temp_a0;
                Actor_SpawnAsChild(temp_a0, &this->actor, globalCtx, 0x272, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, 1);
                Actor_SpawnAsChild(temp_a0, &this->actor, globalCtx, 0x272, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, 2);
                Actor_SpawnAsChild(temp_a0, &this->actor, globalCtx, 0x272, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, 3);
                return;
            }
            this->unk144 = &D_06000060;
            this->unk148 = Lib_SegmentedToVirtual(&D_06000148);
            this->unk150 = 0x1FE;
            this->actionFunc = func_80BEBF78;
            Actor_SetScale(&this->actor, 0.2f);
            this->actor.home.rot.z = 0;
            return;
        }
        this->unk144 = &D_06000210;
        this->unk148 = Lib_SegmentedToVirtual(&D_06000308);
        this->unk150 = 0x1FD;
        this->actionFunc = func_80BEBEB8;
        Actor_SetScale(&this->actor, 0.5f);
        return;
    }
    this->unk144 = &D_06000510;
    this->unk148 = Lib_SegmentedToVirtual(&D_06000608);
    this->unk150 = 0x1FC;
    this->actionFunc = func_80BEBDF8;
    Actor_SetScale(&this->actor, 1.0f);
}

void EffLastday_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EffLastday *this = (EffLastday *) thisx;

}

void func_80BEBD0C(EffLastday *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_v1;

    if (func_800EE29C(globalCtx, (u32) this->unk150) != 0) {
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, (u32) this->unk150));
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
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, (u32) this->unk150));
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
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, (u32) this->unk150));
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
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, (u32) this->unk150));
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
            Audio_PlayActorSound2(&this->actor, 0x2987U);
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

void EffLastday_Update(Actor *thisx, GlobalContext *globalCtx) {
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

void EffLastday_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EffLastday *this = (EffLastday *) thisx;
    Gfx *temp_v1;
    GraphicsContext *temp_a2;
    s32 temp_v0;

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

