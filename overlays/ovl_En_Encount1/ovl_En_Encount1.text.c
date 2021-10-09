typedef struct EnEncount1 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnEncount1 *, GlobalContext *);
    /* 0x148 */ Path *unk_148;                      /* inferred */
    /* 0x14C */ s16 unk_14C;                        /* inferred */
    /* 0x14E */ s16 unk_14E;                        /* inferred */
    /* 0x150 */ s16 unk_150;                        /* inferred */
    /* 0x152 */ s16 unk_152;                        /* inferred */
    /* 0x154 */ s16 unk_154;                        /* inferred */
    /* 0x156 */ s16 unk_156;                        /* inferred */
    /* 0x158 */ s16 unk_158;                        /* inferred */
    /* 0x15A */ s16 unk_15A;                        /* inferred */
    /* 0x15C */ s32 unk_15C;                        /* inferred */
    /* 0x160 */ f32 unk_160;                        /* inferred */
} EnEncount1;                                       /* size = 0x164 */

struct _mips2c_stack_EnEncount1_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnEncount1_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E0954 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ CollisionPoly *sp54;                 /* inferred */
    /* 0x58 */ char pad_58[0x6];                    /* maybe part of sp54[2]? */
    /* 0x5E */ s16 sp5E;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];                    /* maybe part of sp5E[3]? */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ Actor *sp74;                         /* inferred */
};                                                  /* size = 0x78 */

static ? D_808E0DF0;                                /* unable to generate initializer */
static ? D_808E0DF8;                                /* unable to generate initializer */

void EnEncount1_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_a1;
    s16 temp_v0;
    EnEncount1 *this = (EnEncount1 *) thisx;

    temp_v0 = this->actor.params;
    if ((s32) temp_v0 <= 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_154 = temp_v0 & 0x3F;
    this->unk_150 = ((s32) temp_v0 >> 0xB) & 0x1F;
    this->unk_14C = ((s32) temp_v0 >> 6) & 0x1F;
    this->unk_158 = this->actor.world.rot.x;
    this->unk_15C = (s32) this->actor.world.rot.y;
    this->unk_160 = ((f32) this->actor.world.rot.z * 40.0f) + 120.0f;
    if ((s32) this->unk_154 >= 0x3F) {
        this->unk_154 = -1;
    }
    if ((s32) this->actor.world.rot.z < 0) {
        this->unk_160 = -1.0f;
    }
    if (this->unk_150 == 3) {
        this->unk_15A = this->actor.params & 0x3F;
        temp_a1 = this->unk_15A;
        this = this;
        this->unk_148 = func_8013D648(globalCtx, temp_a1, 0x3F);
        this->unk_154 = -1;
        this->unk_160 = -1.0f;
    }
    this->actor.flags &= -2;
    this->actionFunc = func_808E0954;
}

void func_808E0954(EnEncount1 *this, GlobalContext *globalCtx) {
    Actor *sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s16 sp5E;
    CollisionPoly *sp54;
    s32 sp50;
    f32 sp48;
    Path *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_3;

    sp74 = globalCtx->actorCtx.actorList[2].first;
    if (((s32) this->unk_14E < (s32) this->unk_14C) && ((temp_f0 = this->unk_160, !(temp_f0 > 0.0f)) || !(temp_f0 < this->actor.xzDistToPlayer)) && ((temp_v0 = this->unk_154, ((s32) temp_v0 <= 0)) || ((s32) this->unk_152 < (s32) temp_v0)) && ((temp_v0_2 = this->unk_156, (temp_v0_2 == 0)) || (this->unk_156 = temp_v0_2 + 1, (((s32) this->unk_156 < (s32) this->unk_158) == 0)))) {
        temp_t0 = this->unk_150;
        this->unk_156 = 0;
        if (temp_t0 != 0) {
            if (temp_t0 != 1) {
                if (temp_t0 != 2) {
                    if (temp_t0 != 3) {

                    } else {
                        temp_a0 = this->unk_148;
                        if ((temp_a0 != 0) && (func_8013D68C(temp_a0, 0, (void *) &sp68) == 0)) {
                            Actor_MarkForDeath((Actor *) this);
                        }
                        goto block_26;
                    }
                    goto block_27;
                }
                sp64 = randPlusMinusPoint5Scaled(250.0f) + 500.0f;
                temp_a0_2 = sp74->shape.rot.y;
                sp5E = temp_a0_2;
                sp48 = Math_SinS(temp_a0_2);
                sp68 = randPlusMinusPoint5Scaled(40.0f) + (sp74->world.pos.x + (sp48 * sp64));
                sp6C = sp74->world.pos.y - Rand_ZeroFloat(20.0f);
                sp48 = Math_CosS(temp_a0_2);
                sp70 = randPlusMinusPoint5Scaled(40.0f) + (sp74->world.pos.z + (sp48 * sp64));
                temp_f0_2 = func_800C411C(&globalCtx->colCtx, &sp54, &sp50, (Actor *) this, (Vec3f *) &sp68);
                if (((sp74->unk_A6C * 0x10) < 0) && !(temp_f0_2 <= -32000.0f) && !(sp74->yDistToWater < temp_f0_2)) {
                    goto block_26;
                }
            } else {
                Math_Vec3f_Copy((Vec3f *) &sp68, (Vec3f *) &sp74->world);
                goto block_26;
            }
        } else {
            sp64 = randPlusMinusPoint5Scaled(40.0f) + 200.0f;
            temp_a0_3 = sp74->shape.rot.y;
            sp5E = temp_a0_3;
            if ((this->unk_14E & 1) != 0) {
                sp5E = (s32) temp_a0_3 * -1;
                sp64 = randPlusMinusPoint5Scaled(20.0f) + 100.0f;
            }
            sp48 = Math_SinS(sp5E);
            sp68 = randPlusMinusPoint5Scaled(40.0f) + (sp74->world.pos.x + (sp48 * sp64));
            sp6C = sp74->floorHeight + 120.0f;
            sp48 = Math_CosS(sp5E);
            sp70 = randPlusMinusPoint5Scaled(40.0f) + (sp74->world.pos.z + (sp48 * sp64));
            temp_f0_3 = func_800C411C(&globalCtx->colCtx, &sp54, &sp50, (Actor *) this, (Vec3f *) &sp68);
            if (!(temp_f0_3 <= -32000.0f) && ((temp_f2 = sp74->yDistToWater, (temp_f2 == -32000.0f)) || !(temp_f0_3 < (sp74->world.pos.y - temp_f2)))) {
                sp6C = temp_f0_3;
block_26:
block_27:
                temp_v0_3 = this->unk_150 * 2;
                if (Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, *(&D_808E0DF0 + temp_v0_3), sp68, sp6C, sp70, (s16) 0, (s16) 0, (s16) 0, (s32) *(&D_808E0DF8 + temp_v0_3)) != 0) {
                    this->unk_14E += 1;
                    if ((s32) this->unk_154 > 0) {
                        this->unk_152 += 1;
                    }
                    if (((s32) this->unk_14E >= (s32) this->unk_14C) && (this->unk_158 != 0)) {
                        this->unk_156 = 1;
                    }
                }
            }
        }
    }
}

void EnEncount1_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEncount1 *this = (EnEncount1 *) thisx;
    this->actionFunc(this, globalCtx);
}
