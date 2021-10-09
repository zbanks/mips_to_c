struct _mips2c_stack_ObjKibako2_Break {
    /* 0x00 */ char pad0[0xC4];
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ char padDC[0xC];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_ObjKibako2_ContainsSkulltula {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjKibako2_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjKibako2_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjKibako2_Idle {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjKibako2_Init {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjKibako2_Kill {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjKibako2_ShouldBreak {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjKibako2_SpawnCollectible {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjKibako2_SpawnContents {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjKibako2_SpawnSkulltula {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_ObjKibako2_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void ObjKibako2_Break(ObjKibako2 *arg0, GlobalContext *arg1); /* static */
s32 ObjKibako2_ContainsSkulltula(Actor *arg0, GlobalContext *arg1); /* static */
s32 ObjKibako2_ShouldBreak(ObjKibako2 *arg0);       /* static */
void ObjKibako2_SpawnCollectible(void *arg0, GlobalContext *arg1); /* static */
void ObjKibako2_SpawnContents(ObjKibako2 *arg0);    /* static */
void ObjKibako2_SpawnSkulltula(Actor *arg0, GlobalContext *arg1); /* static */
extern Gfx D_06000960;
extern CollisionHeader D_06000B70;
extern Gfx D_06001040;
static ColliderCylinderInit D_8098EE60 = {
    {0xA, 0, 9, 0, 0x20, 1},
    {0, {0, 0, 0}, {0x80000508, 0, 0}, 0, 1, 0},
    {0x1F, 0x30, 0, {0, 0, 0}},
};
static InitChainEntry D_8098EE8C[5];                /* unable to generate initializer */

s32 ObjKibako2_ContainsSkulltula(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_a2;
    s32 phi_v0;

    temp_v0 = ((arg0->params & 0x1F) * 4) | 0xFF01;
    phi_a2 = -1;
    if ((temp_v0 & 3) != 0) {
        phi_a2 = ((s32) (temp_v0 & 0x3FC) >> 2) & 0xFF;
    }
    temp_v0_2 = (phi_a2 < 0) == 1;
    phi_v0 = temp_v0_2;
    if (temp_v0_2 == 0) {
        phi_v0 = Actor_GetChestFlag(arg1, (u32) phi_a2) == 0;
    }
    return phi_v0;
}

void ObjKibako2_Break(ObjKibako2 *arg0, GlobalContext *arg1) {
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    Vec3f *temp_s2;
    f32 *temp_s4;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f4;
    f32 temp_f8;
    s32 temp_s3;
    s16 phi_s1;
    s32 phi_s0;
    s32 phi_s3;

    temp_s2 = arg0 + 0x24;
    temp_s6 = &spC4;
    temp_s4 = &spD0;
    phi_s1 = 0;
    phi_s3 = 0;
    do {
        temp_f20 = Math_SinS(phi_s1);
        temp_f22 = Math_CosS(phi_s1);
        temp_f24 = Rand_ZeroOne() * 30.0f;
        temp_f4 = temp_f20 * temp_f24;
        spD0 = temp_f4;
        temp_f10 = temp_f22 * temp_f24;
        temp_f8 = (Rand_ZeroOne() * 10.0f) + 2.0f;
        spD8 = temp_f10;
        spD4 = temp_f8;
        spC4 = spD0 * 0.2f;
        spC8 = (Rand_ZeroOne() * 10.0f) + 2.0f;
        spCC = temp_f10 * 0.2f;
        spD0 = temp_f4 + temp_s2->x;
        spD4 += temp_s2->y;
        spD8 = temp_f10 + temp_s2->z;
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.05f) {
            phi_s0 = 0x60;
        } else {
            phi_s0 = 0x20;
            if (temp_f0 < 0.7f) {
                phi_s0 = 0x40;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s6, (Vec3f *) temp_s4, (s16) -0xC8, (s16) phi_s0, (s16) 0x1C, (s16) 2, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 30.0f) + 5.0f), (s16) 0, (s16) 0, 0x46, (s16) -1, (s16) 0x133, &D_06001040);
        temp_s3 = phi_s3 + 1;
        phi_s1 = (s16) (phi_s1 + 0x4E20);
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x10);
    func_800BBFB0(arg1, temp_s2, 90.0f, 6, (s16) 0x64, (s16) 0xA0, (u8) 1);
}

void ObjKibako2_SpawnCollectible(void *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s32 temp_v0;

    temp_a0 = arg0->unk1C;
    arg0 = arg0;
    temp_v0 = func_800A8150(temp_a0 & 0x3F);
    if (temp_v0 >= 0) {
        Item_DropCollectible(arg1, arg0 + 0x24, ((((s32) arg0->unk1C >> 8) & 0x7F) << 8) | temp_v0);
    }
}

void ObjKibako2_SpawnSkulltula(Actor *arg0, GlobalContext *arg1) {
    s32 sp38;
    Actor *temp_v0;

    if (ObjKibako2_ContainsSkulltula(arg0, arg1) != 0) {
        sp38 = ((arg0->params & 0x1F) * 4) | 0xFF01;
        temp_v0 = Actor_Spawn(&arg1->actorCtx, arg1, 0x50, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) (s32) (s16) ((Rand_Next() >> 0x11) + arg0->yawTowardsPlayer + 0xC000), (s16) 0, (s16) sp38);
        if (temp_v0 != 0) {
            temp_v0->parent = arg0;
            temp_v0->velocity.y = 13.0f;
            temp_v0->speedXZ = 0.0f;
        }
    }
}

void ObjKibako2_SpawnContents(ObjKibako2 *arg0) {
    if ((((s32) arg0->dyna.actor.params >> 0xF) & 1) == 0) {
        ObjKibako2_SpawnCollectible();
        return;
    }
    ObjKibako2_SpawnSkulltula();
}

void ObjKibako2_Init(ObjKibako2 *this, GlobalContext *globalCtx) {
    s32 sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    s16 temp_v0;
    ObjKibako2 *this = (ObjKibako2 *) thisx;

    sp24 = ((s32) this->dyna.actor.params >> 0xF) & 1;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Actor_ProcessInitChain((Actor *) this, D_8098EE8C);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000B70);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_8098EE60);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    this->dyna.actor.home.rot.z = 0;
    this->dyna.actor.world.rot.z = 0;
    this->dyna.actor.shape.rot.z = 0;
    this->dyna.actor.world.rot.x = 0;
    this->dyna.actor.shape.rot.x = 0;
    if (sp24 == 0) {
        temp_v0 = this->dyna.actor.params;
        if (func_800A81A4(globalCtx, temp_v0 & 0x3F, ((s32) temp_v0 >> 8) & 0x7F) != 0) {
            this->unk_1AC = 1;
            this->dyna.actor.flags |= 0x10;
        }
    }
    if ((sp24 != 1) || (ObjKibako2_ContainsSkulltula((Actor *) this, globalCtx) == 0)) {
        this->skulltulaNoiseTimer = -1;
    }
    this->actionFunc = ObjKibako2_Idle;
}

void ObjKibako2_Destroy(ObjKibako2 *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    ObjKibako2 *this = (ObjKibako2 *) thisx;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    Collider_DestroyCylinder(temp_a0, &this->collider);
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

s32 ObjKibako2_ShouldBreak(ObjKibako2 *arg0) {
    s32 sp18;
    s32 temp_v0;
    s32 temp_v1_2;
    u8 temp_v1;
    s32 phi_a3;

    temp_v1 = arg0->collider.base.acFlags;
    phi_a3 = 0;
    if ((temp_v1 & 2) != 0) {
        temp_v0 = arg0->collider.base.ac;
        arg0->collider.base.acFlags = temp_v1 & 0xFFFD;
        if (temp_v0 != 0) {
            temp_v1_2 = *arg0->collider.info.acHitInfo;
            if (temp_v1_2 & 0x80000000) {
                sp18 = 0;
                phi_a3 = sp18;
                if (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 25600.0f) {
                    goto block_11;
                }
            } else if ((temp_v1_2 & 8) != 0) {
                sp18 = 0;
                if (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 10000.0f) {
                    goto block_11;
                }
            } else if ((temp_v1_2 & 0x500) != 0) {
                phi_a3 = 1;
            }
        }
    } else if (arg0->dyna.actor.home.rot.z != 0) {
block_11:
        phi_a3 = 1;
    }
    return phi_a3;
}

void ObjKibako2_Idle(ObjKibako2 *this, GlobalContext *globalCtx) {
    if (ObjKibako2_ShouldBreak(this) != 0) {
        ObjKibako2_Break(this, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->dyna.actor.world, 0x14, 0x28AAU);
        this->dyna.actor.flags |= 0x10;
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
        this->dyna.actor.draw = NULL;
        this->actionFunc = ObjKibako2_Kill;
        return;
    }
    if (this->dyna.actor.xzDistToPlayer < 600.0f) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->collider);
    }
}

void ObjKibako2_Kill(ObjKibako2 *this, GlobalContext *globalCtx) {
    ObjKibako2_SpawnContents(this);
    Actor_MarkForDeath((Actor *) this);
}

void ObjKibako2_Update(ObjKibako2 *this, GlobalContext *globalCtx) {
    ObjKibako2 *temp_a0;
    s8 temp_v0;
    ObjKibako2 *this = (ObjKibako2 *) thisx;

    if (this->unk_1AC != 0) {
        globalCtx->actorCtx.unk5 |= 8;
    }
    temp_v0 = this->skulltulaNoiseTimer;
    if ((s32) temp_v0 >= 0) {
        if (temp_v0 == 0) {
            temp_a0 = this;
            this = this;
            Audio_PlayActorSound2((Actor *) temp_a0, 0x39DAU);
            if (Rand_ZeroOne() < 0.1f) {
                this = this;
                this->skulltulaNoiseTimer = Rand_S16Offset(0x28, 0x50);
                this->actionFunc(this, globalCtx);
                return;
            }
            this->skulltulaNoiseTimer = 8;
            this->actionFunc(this, globalCtx);
            return;
        }
        this->skulltulaNoiseTimer = temp_v0 - 1;
        /* Duplicate return node #8. Try simplifying control flow for better match */
        this->actionFunc(this, globalCtx);
        return;
    }
    this->actionFunc(this, globalCtx);
}

void ObjKibako2_Draw(ObjKibako2 *this, GlobalContext *globalCtx) {
    ObjKibako2 *this = (ObjKibako2 *) thisx;
    func_800BDFC0(globalCtx, &D_06000960);
}
