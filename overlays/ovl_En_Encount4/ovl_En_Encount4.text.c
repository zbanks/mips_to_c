typedef struct EnEncount4 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnEncount4 *, GlobalContext *);
    /* 0x148 */ s16 unk_148;                        /* inferred */
    /* 0x14A */ s16 unk_14A;                        /* inferred */
    /* 0x14C */ s16 unk_14C;
    /* 0x14E */ s16 unk_14E;
    /* 0x150 */ s16 unk_150;                        /* inferred */
    /* 0x152 */ char pad_152[0x2];
    /* 0x154 */ s16 *unk_154;                       /* inferred */
} EnEncount4;                                       /* size = 0x158 */

struct _mips2c_stack_EnEncount4_Destroy {};         /* size 0x0 */

struct _mips2c_stack_EnEncount4_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnEncount4_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C3FD8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C4078 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_809C42A8 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ CollisionPoly *sp50;                 /* inferred */
    /* 0x54 */ char pad_54[0x2];
    /* 0x56 */ s16 sp56;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];                    /* maybe part of sp56[3]? */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ s16 *sp68;                           /* inferred */
    /* 0x6C */ Actor *sp6C;                         /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_809C4598 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C464C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

static ? D_809C46D0;                                /* unable to generate initializer */
static ? D_809C46DC;                                /* unable to generate initializer */

void EnEncount4_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnEncount4 *this = (EnEncount4 *) thisx;

    temp_v0 = this->actor.params;
    this->unk_14A = temp_v0 & 0x7F;
    this->unk_148 = ((s32) temp_v0 >> 0xC) & 0xF;
    if (this->unk_14A == 0x7F) {
        this->unk_14A = -1;
    }
    if (((s32) this->unk_14A >= 0) && (this = this, (Flags_GetSwitch(globalCtx, (s32) this->unk_14A) != 0))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.flags &= -2;
    this->actionFunc = func_809C3FD8;
}

void EnEncount4_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEncount4 *this = (EnEncount4 *) thisx;

}

void func_809C3FD8(EnEncount4 *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    s16 temp_a1;
    s16 temp_a3;
    Actor *phi_v0;

    temp_a3 = this->unk_14A;
    this->unk_14E = 0;
    temp_a1 = temp_a3;
    if (((s32) temp_a3 >= 0) && (this = this, (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0))) {
        this->unk_150 = 0x64;
        this->actionFunc = func_809C464C;
        return;
    }
    temp_v0 = globalCtx->actorCtx.actorList[9].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_4:
        if (phi_v0->id != 0x28F) {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 == 0) {
                /* Duplicate return node #8. Try simplifying control flow for better match */
                return;
            }
            goto loop_4;
        }
        this->unk_154 = phi_v0;
        this->actionFunc = func_809C4078;
    }
}

void func_809C4078(EnEncount4 *this, GlobalContext *globalCtx) {
    ActorContext *temp_s4;
    f32 *temp_s0_2;
    f32 temp_f20;
    f32 temp_f22;
    s16 *temp_s0;
    s16 temp_a2;
    s16 temp_s2;
    s16 temp_v1;
    s32 phi_v0;
    s16 *phi_s1;
    f32 *phi_s0;
    s32 phi_s6;

    temp_a2 = this->unk_14A;
    temp_s0 = this->unk_154;
    if (((s32) temp_a2 >= 0) && (Flags_GetSwitch(globalCtx, (s32) temp_a2) != 0)) {
        this->unk_150 = 0x64;
        this->actionFunc = func_809C464C;
        return;
    }
    if (gGameInfo->data[2401] == 0) {
        if ((this->unk_154->unk_0 != 0x28F) || (temp_s0->unk_138 == 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        temp_v1 = this->unk_148;
        if ((temp_v1 != 0) || (this->actor.xzDistToPlayer < 240.0f)) {
            if ((temp_v1 == 0) && (temp_s0->unk_2DC != 0)) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            phi_s6 = 0;
            if ((temp_v1 == 0) || (temp_s0->unk_2DC != 0)) {
                phi_v0 = 0;
                if (temp_v1 != 0) {
                    phi_v0 = 2;
                    phi_s6 = 1;
                }
                if (phi_v0 < 5) {
                    temp_s4 = &globalCtx->actorCtx;
                    phi_s1 = (phi_v0 * 2) + &D_809C46D0;
                    phi_s0 = (phi_v0 * 4) + &D_809C46DC;
                    do {
                        temp_s2 = *phi_s1 + this->actor.world.rot.y;
                        temp_f22 = this->actor.world.pos.y;
                        temp_f20 = (*phi_s0 * Math_SinS(temp_s2)) + this->actor.world.pos.x;
                        Actor_SpawnAsChild(temp_s4, (Actor *) this, globalCtx, 0x110, temp_f20, temp_f22, (*phi_s0 * Math_CosS(temp_s2)) + this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, phi_s6);
                        temp_s0_2 = phi_s0 + 4;
                        phi_s1 += 2;
                        phi_s0 = temp_s0_2;
                    } while ((u32) temp_s0_2 < (u32) (&D_809C46DC + 0x14));
                }
                this->actionFunc = func_809C42A8;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

void func_809C42A8(EnEncount4 *this, GlobalContext *globalCtx) {
    Actor *sp6C;
    s16 *sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s16 sp56;
    CollisionPoly *sp50;
    s32 sp4C;
    f32 sp44;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a0;
    s16 temp_a2;
    s16 phi_a0;

    sp6C = globalCtx->actorCtx.actorList[2].first;
    temp_a2 = this->unk_14A;
    if (((s32) temp_a2 >= 0) && (sp68 = this->unk_154, (Flags_GetSwitch(globalCtx, (s32) temp_a2) != 0))) {
        this->unk_150 = 0x64;
        this->actionFunc = func_809C464C;
        return;
    }
    if (this->unk_148 == 1) {
        if ((*this->unk_154 != 0x28F) || (this->unk_154->unk_138 == 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return;
    }
    if ((s32) this->unk_14E >= 2) {
        this->unk_150 = 0x64;
        this->actionFunc = func_809C464C;
        return;
    }
    if (((gSaveContext.weekEventReg[85] & 0x40) == 0) && ((s32) this->unk_14C < 2) && !(this->actor.xzDistToPlayer > 240.0f)) {
        sp5C = (Math_SinS(this->actor.world.rot.y) * 30.0f) + this->actor.world.pos.x;
        sp60 = sp6C->floorHeight + 120.0f;
        sp64 = (Math_CosS(this->actor.world.rot.y) * 30.0f) + this->actor.world.pos.z;
        temp_f0 = func_800C411C(&globalCtx->colCtx, &sp50, &sp4C, (Actor *) this, (Vec3f *) &sp5C);
        if (!(temp_f0 <= -32000.0f) && ((temp_f2 = sp6C->yDistToWater, (temp_f2 == -32000.0f)) || !(temp_f0 < (sp6C->world.pos.y - temp_f2)))) {
            sp60 = temp_f0;
            temp_a0 = (s32) Rand_ZeroFloat(512.0f) + this->actor.world.rot.y + 0x3800;
            phi_a0 = temp_a0;
            if (this->unk_14C != 0) {
                phi_a0 = (s16) (temp_a0 + 0x8000);
            }
            sp56 = phi_a0;
            sp44 = randPlusMinusPoint5Scaled(40.0f);
            sp5C += Math_SinS(phi_a0) * (40.0f + sp44);
            sp44 = randPlusMinusPoint5Scaled(40.0f);
            temp_f2_2 = sp64 + (Math_CosS(phi_a0) * (40.0f + sp44));
            sp64 = temp_f2_2;
            if (Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0xED, sp5C, sp60, temp_f2_2, (s16) 0, (s16) 0, (s16) 0, 0) != 0) {
                this->unk_14C += 1;
                if ((s32) this->unk_14C >= 2) {
                    this->actionFunc = func_809C4598;
                }
            }
        }
    }
}

void func_809C4598(EnEncount4 *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a2_2;
    EnEncount4 *phi_a3;

    temp_a2 = this->unk_14A;
    temp_a1 = temp_a2;
    if (((s32) temp_a2 >= 0) && (this = this, (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0))) {
        this->unk_150 = 0x64;
        this->actionFunc = func_809C464C;
        return;
    }
    phi_a3 = this;
    if ((s32) this->unk_14E >= 2) {
        temp_a2_2 = this->unk_14A;
        this->unk_150 = 0x64;
        if ((s32) temp_a2_2 >= 0) {
            this = this;
            Actor_SetSwitchFlag(globalCtx, (s32) temp_a2_2);
            phi_a3 = this;
        }
        phi_a3->actionFunc = func_809C464C;
        return;
    }
    if (this->unk_14C == 0) {
        this->actionFunc = func_809C42A8;
    }
}

void func_809C464C(EnEncount4 *this, GlobalContext *globalCtx) {
    if (this->unk_150 == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnEncount4_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnEncount4 *this = (EnEncount4 *) thisx;

    temp_v0 = this->unk_150;
    if (temp_v0 != 0) {
        this->unk_150 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
}
