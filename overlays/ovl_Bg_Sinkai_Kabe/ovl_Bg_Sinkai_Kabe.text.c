typedef struct BgSinkaiKabe {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(BgSinkaiKabe *, GlobalContext *);
    /* 0x160 */ Actor *unk_160;                     /* inferred */
    /* 0x164 */ s16 unk_164;                        /* inferred */
    /* 0x166 */ s16 unk_166;                        /* inferred */
    /* 0x168 */ char pad_168[0x4];                  /* maybe part of unk_166[3]? */
    /* 0x16C */ s32 unk_16C;                        /* inferred */
} BgSinkaiKabe;                                     /* size = 0x170 */

struct _mips2c_stack_BgSinkaiKabe_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgSinkaiKabe_Init {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ PosRot *sp54;                        /* inferred */
    /* 0x58 */ char pad_58[0x18];                   /* maybe part of sp54[7]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ CollisionHeader *sp7C;               /* inferred */
    /* 0x80 */ char pad_80[0x8];
};                                                  /* size = 0x88 */

struct _mips2c_stack_BgSinkaiKabe_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B6DA20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80B6DA20(BgSinkaiKabe *, GlobalContext *); /* static */
extern CollisionHeader D_06000048;
static s32 D_80B6DB70 = 0;

void BgSinkaiKabe_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    PosRot *sp54;
    Actor *temp_v0_2;
    PosRot *temp_a1;
    f32 temp_f10;
    f32 temp_f8;
    s16 temp_v0;
    s16 temp_v0_3;
    s8 temp_s0;
    s16 phi_s0;
    BgSinkaiKabe *phi_s1;
    s32 phi_s0_2;
    BgSinkaiKabe *this = (BgSinkaiKabe *) thisx;

    sp7C = NULL;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_06000048, &sp7C);
    this->unk_144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp7C);
    temp_a1 = &this->actor.world;
    sp54 = temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp70, (Vec3f *) temp_a1);
    sp70 += Math_SinS((s16) (this->actor.world.rot.y + 0x8000)) * 3000.0f;
    sp78 += Math_CosS((s16) (this->actor.world.rot.y + 0x8000)) * 3000.0f;
    temp_s0 = this->actor.cutscene;
    phi_s0 = (s16) temp_s0;
    phi_s1 = this;
    if (temp_s0 != -1) {
        do {
            phi_s1->unk_164 = phi_s0;
            temp_v0 = ActorCutscene_GetAdditionalCutscene(phi_s0);
            phi_s0 = temp_v0;
            phi_s1 += 2;
        } while (temp_v0 != -1);
    }
    this->actor.scale.x = 0.1f;
    this->actor.scale.y = 0.1f;
    this->actor.scale.z = 0.1f;
    this->unk_16C = D_80B6DB70;
    D_80B6DB70 += 1;
    if ((gSaveContext.weekEventReg[13] & 1) == 0) {
        temp_v0_2 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x206, sp70, sp74, sp78, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 1, (s32) this->actor.params);
        this->unk_160 = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_v0_2->unk_2C0 = (s16) this->unk_164;
            temp_v0_2->unk_2C2 = (s16) this->unk_166;
            temp_v0_2->cutscene = this->actor.cutscene;
            Math_Vec3f_Copy(temp_v0_2 + 0x260, (Vec3f *) sp54);
            temp_v0_2->unk_250 = (s32) this->unk_16C;
        }
    } else {
        temp_v0_3 = this->actor.params;
        phi_s0_2 = 0;
        if (((temp_v0_3 == 0) && ((gSaveContext.weekEventReg[83] & 0x10) != 0)) || ((temp_v0_3 == 1) && ((gSaveContext.weekEventReg[83] & 0x20) != 0)) || ((temp_v0_3 == 2) && ((gSaveContext.weekEventReg[83] & 0x40) != 0)) || ((temp_v0_3 == 3) && ((gSaveContext.weekEventReg[83] & 0x80) != 0)) || ((temp_v0_3 == 4) && ((gSaveContext.weekEventReg[84] & 1) != 0)) || ((temp_v0_3 == 5) && ((gSaveContext.weekEventReg[84] & 2) != 0)) || ((temp_v0_3 == 6) && ((gSaveContext.weekEventReg[84] & 4) != 0)) || ((temp_v0_3 == 7) && ((gSaveContext.weekEventReg[84] & 8) != 0))) {
            phi_s0_2 = 1;
        }
        Math_Vec3f_Copy((Vec3f *) &sp70, (Vec3f *) &this->actor.home);
        temp_f8 = sp70 + (Math_SinS((s16) (this->actor.world.rot.y + 0x8000)) * 500.0f);
        sp74 += -100.0f;
        sp70 = temp_f8;
        temp_f10 = sp78 + (Math_CosS((s16) (this->actor.world.rot.y + 0x8000)) * 500.0f);
        sp78 = temp_f10;
        if (phi_s0_2 != 0) {
            Actor_SpawnAsChildAndCutscene(&globalCtx->actorCtx, globalCtx, 0x205, sp70, sp74, temp_f10, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, 0x4000, (u32) this->actor.cutscene, (s32) this->actor.unk20, NULL);
        }
        Actor_MarkForDeath((Actor *) this);
    }
    this->actionFunc = func_80B6DA20;
}

void BgSinkaiKabe_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgSinkaiKabe *this = (BgSinkaiKabe *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80B6DA20(BgSinkaiKabe *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    f32 temp_f0;
    s16 temp_v0;
    s32 phi_v1;
    Actor *phi_a2;

    temp_a2 = arg0->unk_160;
    phi_a2 = temp_a2;
    if (temp_a2 != 0) {
        if (temp_a2->update != 0) {
            if (temp_a2->unk_2BA == 0) {
                temp_f0 = arg0->actor.xzDistToPlayer;
                if (!(temp_f0 < 500.0f)) {
                    temp_v0 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
                    phi_v1 = (s32) temp_v0;
                    if ((s32) temp_v0 < 0) {
                        phi_v1 = -(s32) temp_v0;
                    }
                    if ((phi_v1 < 0x2000) && (temp_f0 < 700.0f)) {
                        goto block_8;
                    }
                } else {
block_8:
                    if (fabsf(arg0->actor.world.pos.y - arg1->actorCtx.actorList[2].first->world.pos.y) < 400.0f) {
                        temp_a2->unk_2BA = 1;
                        phi_a2 = arg0->unk_160;
                    }
                }
            }
        } else {
            arg0->unk_160 = NULL;
            phi_a2 = NULL;
        }
    }
    if (phi_a2 == 0) {
        Actor_MarkForDeath((Actor *) arg0);
    }
}

void BgSinkaiKabe_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgSinkaiKabe *this = (BgSinkaiKabe *) thisx;
    this->actionFunc(this, globalCtx);
}
