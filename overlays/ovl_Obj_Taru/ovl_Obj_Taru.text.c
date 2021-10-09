s32 func_80B9B6E0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B9B74C(ObjTaru *arg0, GlobalContext *arg1); /* static */
void func_80B9B9C8(ObjTaru *arg0, GlobalContext *arg1); /* static */
void func_80B9BC64(void *arg0, GlobalContext *arg1); /* static */
void func_80B9BCBC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B9BD84(ObjTaru *arg0);                  /* static */
s32 func_80B9BF7C(ObjTaru *arg0);                   /* static */
void func_80B9C07C(ObjTaru *, GlobalContext *);     /* static */
void func_80B9C174(ObjTaru *, GlobalContext *);     /* static */
void func_80B9C1A0(ObjTaru *, GlobalContext *);     /* static */
extern Gfx D_06000420;
extern CollisionHeader D_06000FC8;
extern Gfx D_06001040;
extern Gfx D_06001100;
extern Gfx D_06001140;
extern CollisionHeader D_06001CB0;
static ColliderCylinderInit D_80B9C340 = {
    {0xA, 0, 9, 0, 0x20, 1},
    {0, {0, 0, 0}, {0x80000508, 0, 0}, 0, 1, 0},
    {0x1E, 0x32, 0, {0, 0, 0}},
};
static InitChainEntry D_80B9C36C;                   /* unable to generate initializer */

typedef struct ObjTaru {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ ColliderCylinder unk15C;           /* inferred */
    /* 0x01A8 */ void (*actionFunc)(ObjTaru *, GlobalContext *);
    /* 0x01AC */ s8 unk1AC;                         /* inferred */
    /* 0x01AD */ s8 unk1AD;                         /* inferred */
    /* 0x01AE */ char pad1AE[0x2];                  /* maybe part of unk1AD[3]? */
} ObjTaru;                                          /* size 0x1B0 */

s32 func_80B9B6E0(Actor *arg0, GlobalContext *arg1) {
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

void func_80B9B74C(ObjTaru *arg0, GlobalContext *arg1) {
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

void func_80B9B9C8(ObjTaru *arg0, GlobalContext *arg1) {
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC0;
    f32 spBC;
    f32 spA0;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f6;
    s32 temp_s0;
    s32 temp_s7;
    void *temp_s1;
    s32 phi_fp;
    s32 phi_s5;
    s32 phi_s7;
    s32 phi_s0;

    spC0 = Math_SinS(arg0->actor.shape.rot.y);
    spBC = Math_CosS(arg0->actor.shape.rot.y);
    phi_s7 = 0;
    if ((arg0->actor.params & 0x100) != 0) {
        phi_fp = 0;
        phi_s5 = 8;
    } else {
        phi_fp = 2;
        phi_s5 = 6;
    }
    temp_s3 = &spCC;
    temp_s2 = &spD8;
    do {
        phi_s0 = phi_fp;
        if (phi_fp < phi_s5) {
            temp_s1 = arg0 + 0x24;
            spA0 = (f32) phi_s7 * 30.0f;
            do {
                temp_f20 = randPlusMinusPoint5Scaled(10.0f) + -105.0f + ((f32) phi_s0 * 30.0f);
                temp_f22 = randPlusMinusPoint5Scaled(4.0f);
                temp_f10 = temp_f20 * spBC;
                spD8 = temp_f10;
                temp_f6 = randPlusMinusPoint5Scaled(10.0f) + 15.0f + spA0;
                spE0 = temp_f20 * spC0;
                spDC = temp_f6;
                spCC = (temp_f10 * 0.05f) + (temp_f22 * spC0);
                spD0 = Rand_ZeroFloat(5.0f) + 2.0f;
                spD4 = (spE0 * 0.05f) + (temp_f22 * spBC);
                spD8 += temp_s1->unk0;
                spDC += temp_s1->unk4;
                spE0 += temp_s1->unk8;
                EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s3, (Vec3f *) temp_s2, (s16) -0x64, (s16) 0x20, (s16) 0x1C, (s16) 4, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 30.0f) + 5.0f), (s16) 0, (s16) 0, 0x5A, (s16) -1, (s16) 0x133, &D_06001100);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != phi_s5);
        }
        temp_s7 = phi_s7 + 1;
        phi_s7 = temp_s7;
    } while (temp_s7 != 4);
}

void func_80B9BC64(void *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s32 temp_v0;

    temp_a0 = arg0->unk1C;
    arg0 = arg0;
    temp_v0 = func_800A8150(temp_a0 & 0x3F);
    if (temp_v0 >= 0) {
        Item_DropCollectible(arg1, arg0 + 0x24, ((((s32) arg0->unk1C >> 8) & 0x7F) << 8) | temp_v0);
    }
}

void func_80B9BCBC(Actor *arg0, GlobalContext *arg1) {
    s32 sp38;
    Actor *temp_v0;

    if (func_80B9B6E0(arg0, arg1) != 0) {
        sp38 = ((arg0->params & 0x1F) * 4) | 0xFF01;
        temp_v0 = Actor_Spawn(&arg1->actorCtx, arg1, 0x50, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) (s32) (s16) ((Rand_Next() >> 0x11) + arg0->yawTowardsPlayer + 0xC000), (s16) 0, (s16) sp38);
        if (temp_v0 != 0) {
            temp_v0->parent = arg0;
            temp_v0->velocity.y = 12.0f;
            temp_v0->speedXZ = 2.0f;
        }
    }
}

void func_80B9BD84(ObjTaru *arg0) {
    if ((((s32) arg0->actor.params >> 0xF) & 1) == 0) {
        func_80B9BC64();
        return;
    }
    func_80B9BCBC();
}

void ObjTaru_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjTaru *this = (ObjTaru *) thisx;
    s32 sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;

    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    Actor_ProcessInitChain(&this->actor, &D_80B9C36C);
    temp_v0 = this->actor.params;
    if ((temp_v0 & 0x80) != 0) {
        if (Flags_GetSwitch(globalCtx, temp_v0 & 0x7F) != 0) {
            Actor_MarkForDeath(&this->actor);
        } else {
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001CB0);
        }
        if ((this->actor.params & 0x100) != 0) {
            this->actor.scale.x = 0.2f;
        }
    } else {
        sp24 = ((s32) temp_v0 >> 0xF) & 1;
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000FC8);
        temp_a1 = &this->unk15C;
        sp20 = temp_a1;
        Collider_InitAndSetCylinder(globalCtx, temp_a1, &this->actor, &D_80B9C340);
        Collider_UpdateCylinder(&this->actor, temp_a1);
        if (sp24 == 0) {
            temp_v0_2 = this->actor.params;
            if (func_800A81A4(globalCtx, temp_v0_2 & 0x3F, ((s32) temp_v0_2 >> 8) & 0x7F) != 0) {
                this->unk1AC = 1;
                this->actor.flags |= 0x10;
            }
        }
        if ((sp24 != 1) || (func_80B9B6E0(&this->actor, globalCtx) == 0)) {
            this->unk1AD = -1;
        }
    }
    this->actionFunc = func_80B9C07C;
}

void ObjTaru_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjTaru *this = (ObjTaru *) thisx;
    ColliderCylinder *temp_a1;

    temp_a1 = &this->unk15C;
    if ((this->actor.params & 0x80) == 0) {
        this = this;
        Collider_DestroyCylinder(globalCtx, temp_a1);
    }
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

s32 func_80B9BF7C(ObjTaru *arg0) {
    s32 sp18;
    s32 temp_v0;
    s32 temp_v1_2;
    u8 temp_v1;
    s32 phi_a3;

    phi_a3 = 0;
    if (((arg0->actor.params & 0x80) == 0) && (temp_v1 = arg0->unk15C.base.acFlags, ((temp_v1 & 2) != 0))) {
        temp_v0 = arg0->unk15C.base.ac;
        arg0->unk15C.base.acFlags = temp_v1 & 0xFFFD;
        if (temp_v0 != 0) {
            temp_v1_2 = *arg0->unk15C.info.acHitInfo;
            if (temp_v1_2 & 0x80000000) {
                sp18 = 0;
                phi_a3 = sp18;
                if (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 25600.0f) {
                    goto block_12;
                }
            } else if ((temp_v1_2 & 8) != 0) {
                sp18 = 0;
                if (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 10000.0f) {
                    goto block_12;
                }
            } else if ((temp_v1_2 & 0x500) != 0) {
                phi_a3 = 1;
            }
        }
    } else if (arg0->actor.home.rot.z != 0) {
block_12:
        phi_a3 = 1;
    }
    return phi_a3;
}

void func_80B9C07C(ObjTaru *arg0, GlobalContext *arg1) {
    if (func_80B9BF7C(arg0) != 0) {
        if ((arg0->actor.params & 0x80) == 0) {
            func_80B9B74C(arg0, arg1);
        } else {
            func_80B9B9C8(arg0, arg1);
        }
        Audio_PlaySoundAtPosition(arg1, &arg0->actor.world.pos, 0x14, 0x28AAU);
        if ((arg0->actor.params & 0x80) != 0) {
            arg0->actionFunc = func_80B9C1A0;
            return;
        }
        arg0->actor.flags |= 0x10;
        func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk144);
        arg0->actor.draw = NULL;
        arg0->actionFunc = func_80B9C174;
        return;
    }
    if (arg0->actor.xzDistToPlayer < 600.0f) {
        CollisionCheck_SetAC(arg1, &arg1->colChkCtx, &arg0->unk15C.base);
    }
}

void func_80B9C174(ObjTaru *arg0, GlobalContext *arg1) {
    func_80B9BD84(arg0);
    Actor_MarkForDeath(&arg0->actor);
}

void func_80B9C1A0(ObjTaru *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, &arg0->actor);
        Actor_SetSwitchFlag(arg1, arg0->actor.params & 0x7F);
        Actor_MarkForDeath(&arg0->actor);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
}

void ObjTaru_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjTaru *this = (ObjTaru *) thisx;
    ObjTaru *temp_a0;
    s8 temp_v0;

    if ((this->actor.params & 0x80) == 0) {
        if (this->unk1AC != 0) {
            globalCtx->actorCtx.unk5 |= 8;
        }
        temp_v0 = this->unk1AD;
        if ((s32) temp_v0 >= 0) {
            if (temp_v0 == 0) {
                temp_a0 = this;
                this = this;
                Audio_PlayActorSound2(&temp_a0->actor, 0x39DAU);
                if (Rand_ZeroOne() < 0.1f) {
                    this = this;
                    this->unk1AD = Rand_S16Offset(0x28, 0x50);
                    this->actionFunc(this, globalCtx);
                    return;
                }
                this->unk1AD = 8;
                this->actionFunc(this, globalCtx);
                return;
            }
            this->unk1AD = temp_v0 - 1;
            // Duplicate return node #9. Try simplifying control flow for better match
            this->actionFunc(this, globalCtx);
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        this->actionFunc(this, globalCtx);
        return;
    }
    this->actionFunc(this, globalCtx);
}

void ObjTaru_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjTaru *this = (ObjTaru *) thisx;
    Gfx *phi_a1;

    phi_a1 = &D_06000420;
    if ((this->actor.params & 0x80) != 0) {
        phi_a1 = &D_06001140;
    }
    func_800BDFC0(globalCtx, phi_a1);
}

