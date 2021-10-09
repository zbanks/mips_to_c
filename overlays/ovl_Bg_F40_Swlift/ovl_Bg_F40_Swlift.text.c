extern Gfx D_06003B08;
extern CollisionHeader D_06003E80;
static ? D_8096F510;                                /* unable to generate initializer */
static s32 D_8096F514 = {0xFF, 0xFF, 0xFF};
static InitChainEntry D_8096F540;                   /* unable to generate initializer */
static ? D_8096F5D0;

typedef struct BgF40Swlift {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ s32 unk15C;                        /* inferred */
} BgF40Swlift;                                      /* size 0x160 */

void BgF40Swlift_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Swlift *this = (BgF40Swlift *) thisx;
    s32 temp_v0;
    s32 temp_v1;

    Actor_ProcessInitChain(&this->actor, &D_8096F540);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    temp_v1 = ((s32) this->actor.params >> 8) & 0xFF;
    if ((temp_v1 < 0) || (temp_v1 >= 5)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v0 = temp_v1 * 4;
    *(&D_8096F5D0 + temp_v0) = (s32) this->actor.world.pos.y;
    *(&D_8096F510 + temp_v0) = this->actor.params & 0xFF;
    if (temp_v1 != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06003E80);
    this->actor.params = 0;
}

void BgF40Swlift_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Swlift *this = (BgF40Swlift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void BgF40Swlift_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Swlift *this = (BgF40Swlift *) thisx;
    f32 sp30;
    f32 temp_f2;
    s16 temp_s3_2;
    s32 *temp_s0;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_t4;
    s32 temp_v0;
    s32 *phi_s0;
    s32 phi_s3;
    s32 phi_s3_2;
    s32 phi_s1;
    f32 phi_f2;
    s32 phi_v0;
    s32 phi_s1_2;
    f32 phi_f0;

    phi_s0 = &D_8096F514;
    phi_s3 = 1;
    phi_s1_2 = 4;
loop_1:
    temp_a1 = *phi_s0;
    phi_s3_2 = phi_s3;
    phi_s1 = phi_s1_2;
    if (temp_a1 != 0xFF) {
        phi_s0 += 4;
        if (Flags_GetSwitch(globalCtx, temp_a1) != 0) {
            temp_s3 = phi_s3 + 1;
            temp_s1 = phi_s1_2 + 4;
            phi_s3 = temp_s3;
            phi_s3_2 = temp_s3;
            phi_s1 = temp_s1;
            phi_s1_2 = temp_s1;
            if (temp_s3 < 4) {
                goto loop_1;
            }
        }
    }
    temp_s3_2 = phi_s3_2 - 1;
    if (temp_s3_2 != this->actor.params) {
        this->actor.params = -1;
        temp_s0 = phi_s1 - 4 + &D_8096F5D0;
        temp_f2 = ((f32) *temp_s0 - this->actor.world.pos.y) * 0.1f;
        if (temp_f2 > 0.0f) {
            if (temp_f2 < 0.5f) {
                phi_f2 = 0.5f;
            } else if (temp_f2 > 15.0f) {
                phi_f2 = 15.0f;
            } else {
                phi_f0 = temp_f2;
                goto block_16;
            }
        } else {
            phi_f0 = -15.0f;
            if (temp_f2 < -15.0f) {

            } else if (temp_f2 > -0.5f) {
                phi_f0 = -0.5f;
            } else {
                phi_f0 = temp_f2;
            }
block_16:
            phi_f2 = phi_f0;
        }
        sp30 = phi_f2;
        if ((Math_StepToF(&this->actor.speedXZ, phi_f2, 1.0f) != 0) && (fabsf(phi_f2) <= 0.5f)) {
            if (Math_StepToF(&this->actor.world.pos.y, (f32) *temp_s0, fabsf(this->actor.speedXZ)) != 0) {
                this->actor.params = temp_s3_2;
                this->unk15C = 0x30;
                this->actor.speedXZ = 0.0f;
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        }
        this->actor.world.pos.y += this->actor.speedXZ;
        return;
    }
    temp_v0 = this->unk15C;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        this->unk15C = 0x30;
        phi_v0 = 0x30;
    }
    temp_t4 = phi_v0 - 1;
    this->unk15C = temp_t4;
    this->actor.world.pos.y = (sin_rad((f32) temp_t4 * 0.1308997f) * 5.0f) + (f32) *(&D_8096F5D0 + (this->actor.params * 4));
}

void BgF40Swlift_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Swlift *this = (BgF40Swlift *) thisx;
    func_800BDFC0(globalCtx, &D_06003B08);
}

