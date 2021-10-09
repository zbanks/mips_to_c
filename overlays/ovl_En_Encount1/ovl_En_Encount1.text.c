static ? D_808E0DF0;                                /* unable to generate initializer */
static ? D_808E0DF8;                                /* unable to generate initializer */

typedef struct EnEncount1 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnEncount1 *, GlobalContext *);
    /* 0x0148 */ Path *unk148;                      /* inferred */
    /* 0x014C */ s16 unk14C;                        /* inferred */
    /* 0x014E */ s16 unk14E;                        /* inferred */
    /* 0x0150 */ s16 unk150;                        /* inferred */
    /* 0x0152 */ s16 unk152;                        /* inferred */
    /* 0x0154 */ s16 unk154;                        /* inferred */
    /* 0x0156 */ s16 unk156;                        /* inferred */
    /* 0x0158 */ s16 unk158;                        /* inferred */
    /* 0x015A */ s16 unk15A;                        /* inferred */
    /* 0x015C */ s32 unk15C;                        /* inferred */
    /* 0x0160 */ f32 unk160;                        /* inferred */
} EnEncount1;                                       /* size 0x164 */

void EnEncount1_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEncount1 *this = (EnEncount1 *) thisx;
    s16 temp_a1;
    s16 temp_v0;

    temp_v0 = this->actor.params;
    if ((s32) temp_v0 <= 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk154 = temp_v0 & 0x3F;
    this->unk150 = ((s32) temp_v0 >> 0xB) & 0x1F;
    this->unk14C = ((s32) temp_v0 >> 6) & 0x1F;
    this->unk158 = this->actor.world.rot.x;
    this->unk15C = (s32) this->actor.world.rot.y;
    this->unk160 = ((f32) this->actor.world.rot.z * 40.0f) + 120.0f;
    if ((s32) this->unk154 >= 0x3F) {
        this->unk154 = -1;
    }
    if ((s32) this->actor.world.rot.z < 0) {
        this->unk160 = -1.0f;
    }
    if (this->unk150 == 3) {
        this->unk15A = this->actor.params & 0x3F;
        temp_a1 = this->unk15A;
        this = this;
        this->unk148 = func_8013D648(globalCtx, temp_a1, 0x3F);
        this->unk154 = -1;
        this->unk160 = -1.0f;
    }
    this->actor.flags &= -2;
    this->actionFunc = func_808E0954;
}

void func_808E0954(EnEncount1 *this, GlobalContext *globalCtx) {
    Actor *sp74;
    f32 sp70;
    f32 sp6C;
    void sp68;
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
    if (((s32) this->unk14E < (s32) this->unk14C) && ((temp_f0 = this->unk160, !(temp_f0 > 0.0f)) || !(temp_f0 < this->actor.xzDistToPlayer)) && ((temp_v0 = this->unk154, ((s32) temp_v0 <= 0)) || ((s32) this->unk152 < (s32) temp_v0)) && ((temp_v0_2 = this->unk156, (temp_v0_2 == 0)) || (this->unk156 = temp_v0_2 + 1, (((s32) this->unk156 < (s32) this->unk158) == 0)))) {
        temp_t0 = this->unk150;
        this->unk156 = 0;
        if (temp_t0 != 0) {
            if (temp_t0 != 1) {
                if (temp_t0 != 2) {
                    if (temp_t0 != 3) {

                    } else {
                        temp_a0 = this->unk148;
                        if ((temp_a0 != 0) && (func_8013D68C(temp_a0, 0, &sp68) == 0)) {
                            Actor_MarkForDeath(&this->actor);
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
                temp_f0_2 = func_800C411C(&globalCtx->colCtx, &sp54, &sp50, &this->actor, (Vec3f *) &sp68);
                if (((sp74->unkA6C * 0x10) < 0) && !(temp_f0_2 <= -32000.0f) && !(sp74->yDistToWater < temp_f0_2)) {
                    goto block_26;
                }
            } else {
                Math_Vec3f_Copy((Vec3f *) &sp68, &sp74->world.pos);
                goto block_26;
            }
        } else {
            sp64 = randPlusMinusPoint5Scaled(40.0f) + 200.0f;
            temp_a0_3 = sp74->shape.rot.y;
            sp5E = temp_a0_3;
            if ((this->unk14E & 1) != 0) {
                sp5E = (s32) temp_a0_3 * -1;
                sp64 = randPlusMinusPoint5Scaled(20.0f) + 100.0f;
            }
            sp48 = Math_SinS(sp5E);
            sp68 = randPlusMinusPoint5Scaled(40.0f) + (sp74->world.pos.x + (sp48 * sp64));
            sp6C = sp74->floorHeight + 120.0f;
            sp48 = Math_CosS(sp5E);
            sp70 = randPlusMinusPoint5Scaled(40.0f) + (sp74->world.pos.z + (sp48 * sp64));
            temp_f0_3 = func_800C411C(&globalCtx->colCtx, &sp54, &sp50, &this->actor, (Vec3f *) &sp68);
            if (!(temp_f0_3 <= -32000.0f) && ((temp_f2 = sp74->yDistToWater, (temp_f2 == -32000.0f)) || !(temp_f0_3 < (sp74->world.pos.y - temp_f2)))) {
                sp6C = temp_f0_3;
block_26:
block_27:
                temp_v0_3 = this->unk150 * 2;
                if (Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, *(&D_808E0DF0 + temp_v0_3), (bitwise f32) sp68, sp6C, sp70, (s16) 0, (s16) 0, (s16) 0, (s32) *(&D_808E0DF8 + temp_v0_3)) != 0) {
                    this->unk14E += 1;
                    if ((s32) this->unk154 > 0) {
                        this->unk152 += 1;
                    }
                    if (((s32) this->unk14E >= (s32) this->unk14C) && (this->unk158 != 0)) {
                        this->unk156 = 1;
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

