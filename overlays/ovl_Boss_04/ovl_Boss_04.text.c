typedef struct Boss04 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x30];                 /* maybe part of unk_188[9]? */
    /* 0x1BE */ Vec3s unk_1BE;                      /* inferred */
    /* 0x1C4 */ char pad_1C4[0x30];                 /* maybe part of unk_1BE[9]? */
    /* 0x1F4 */ s16 unk_1F4;                        /* inferred */
    /* 0x1F6 */ s8 unk_1F6;                         /* inferred */
    /* 0x1F7 */ u8 unk_1F7;                         /* inferred */
    /* 0x1F8 */ s16 unk_1F8;                        /* inferred */
    /* 0x1FA */ s16 unk_1FA;                        /* inferred */
    /* 0x1FC */ char pad_1FC[0x2];
    /* 0x1FE */ s16 unk_1FE;                        /* inferred */
    /* 0x200 */ s16 unk_200;                        /* inferred */
    /* 0x202 */ char pad_202[0x2];
    /* 0x204 */ void (*actionFunc)(Boss04 *, GlobalContext *);
    /* 0x208 */ ColliderJntSph unk_208;             /* inferred */
    /* 0x228 */ ColliderJntSphElement unk_228;      /* inferred */
    /* 0x268 */ ColliderJntSph unk_268;             /* inferred */
    /* 0x288 */ ColliderJntSphElement unk_288;      /* inferred */
    /* 0x2C8 */ s16 unk_2C8;                        /* inferred */
    /* 0x2CA */ char pad_2CA[0x2];
    /* 0x2CC */ f32 unk_2CC;                        /* inferred */
    /* 0x2D0 */ f32 unk_2D0;                        /* inferred */
    /* 0x2D4 */ s16 unk_2D4;                        /* inferred */
    /* 0x2D6 */ s16 unk_2D6;                        /* inferred */
    /* 0x2D8 */ s16 unk_2D8;                        /* inferred */
    /* 0x2DA */ s16 unk_2DA;                        /* inferred */
    /* 0x2DC */ char pad_2DC[0x4];                  /* maybe part of unk_2DA[3]? */
    /* 0x2E0 */ s16 unk_2E0;                        /* inferred */
    /* 0x2E2 */ s16 unk_2E2;                        /* inferred */
    /* 0x2E4 */ char pad_2E4[0x3D8];                /* maybe part of unk_2E2[493]? */
    /* 0x6BC */ f32 unk_6BC;                        /* inferred */
    /* 0x6C0 */ char pad_6C0[0x4];
    /* 0x6C4 */ f32 unk_6C4;                        /* inferred */
    /* 0x6C8 */ Vec3f unk_6C8;                      /* inferred */
    /* 0x6D4 */ f32 unk_6D4;                        /* inferred */
    /* 0x6D8 */ f32 unk_6D8;                        /* inferred */
    /* 0x6DC */ f32 unk_6DC;                        /* inferred */
    /* 0x6E0 */ f32 unk_6E0;                        /* inferred */
    /* 0x6E4 */ f32 unk_6E4;                        /* inferred */
    /* 0x6E8 */ f32 unk_6E8;                        /* inferred */
    /* 0x6EC */ char pad_6EC[0x4];
    /* 0x6F0 */ f32 unk_6F0;                        /* inferred */
    /* 0x6F4 */ s16 unk_6F4;                        /* inferred */
    /* 0x6F6 */ s16 unk_6F6;                        /* inferred */
    /* 0x6F8 */ f32 unk_6F8;                        /* inferred */
    /* 0x6FC */ f32 unk_6FC;                        /* inferred */
    /* 0x700 */ f32 unk_700;                        /* inferred */
    /* 0x704 */ u32 unk_704;                        /* inferred */
    /* 0x708 */ s16 unk_708;                        /* inferred */
    /* 0x70A */ s16 unk_70A;                        /* inferred */
    /* 0x70C */ Vec3f unk_70C;                      /* inferred */
    /* 0x718 */ Vec3f unk_718;                      /* inferred */
    /* 0x724 */ char pad_724[0x4];
    /* 0x728 */ f32 unk_728;                        /* inferred */
    /* 0x72C */ char pad_72C[0x10];                 /* maybe part of unk_728[5]? */
    /* 0x73C */ f32 unk_73C;                        /* inferred */
    /* 0x740 */ char pad_740[0x4];
    /* 0x744 */ f32 unk_744;                        /* inferred */
    /* 0x748 */ s16 unk_748;                        /* inferred */
    /* 0x74A */ u8 unk_74A;                         /* inferred */
    /* 0x74B */ char pad_74B[0x1];
} Boss04;                                           /* size = 0x74C */

struct _mips2c_stack_Boss04_Destroy {};             /* size 0x0 */

struct _mips2c_stack_Boss04_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Boss04_Init {
    /* 0x00 */ char pad_0[0x90];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x4];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x8];                    /* maybe part of sp98[3]? */
    /* 0xA4 */ u32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char pad_B8[0x4];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ CollisionPoly *spC0;                 /* inferred */
    /* 0xC4 */ char pad_C4[0xC];
};                                                  /* size = 0xD0 */

struct _mips2c_stack_Boss04_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderJntSph *sp2C;                /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad_34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809EC040 {};              /* size 0x0 */

struct _mips2c_stack_func_809EC544 {};              /* size 0x0 */

struct _mips2c_stack_func_809EC568 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 *sp40;                           /* inferred */
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ Camera *sp5C;                        /* inferred */
    /* 0x60 */ Actor *sp60;                         /* inferred */
    /* 0x64 */ char pad_64[0x10];                   /* maybe part of sp60[5]? */
    /* 0x74 */ Actor *sp74;                         /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_809ECD00 {};              /* size 0x0 */

struct _mips2c_stack_func_809ECD18 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809ECEF4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809ECF58 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809ED224 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809ED2A0 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809ED45C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809ED50C {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809EDCCC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809EDECC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad_18[0x10];
};                                                  /* size = 0x28 */

? func_800BC848(Boss04 *, GlobalContext *, ?, ?);   /* extern */
? func_8016566C(?);                                 /* extern */
? func_80165690();                                  /* extern */
? func_80169940(GlobalContext *, s16, f32);         /* extern */
void func_809EC040(s32 arg0, void *arg1, ? *arg2);  /* static */
void func_809EC544(Boss04 *arg0);                   /* static */
void func_809ECD00(Boss04 *arg0, GlobalContext *arg1); /* static */
void func_809ECEF4(Boss04 *arg0);                   /* static */
void func_809ED224(Boss04 *arg0);                   /* static */
void func_809ED45C(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_809ED50C(Boss04 *arg0);                   /* static */
s32 func_809EDCCC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809EDECC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_0600004C;
extern ? D_06004510;
extern ? D_06004550;
extern FlexSkeletonHeader D_060045E8;
static DamageTable D_809EE150 = {
    {
        0xF1,
        0xF1,
        0,
        0xF2,
        0xF1,
        0xF2,
        0,
        0xF1,
        0xF2,
        0xF2,
        0xF2,
        0x22,
        0x32,
        0x42,
        0xF2,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF0,
        0xF0,
        0xF2,
        0xF2,
        0xF2,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ColliderJntSphElementInit D_809EE190 = {
    {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0x32}, 0x64},
};
static ColliderJntSphInit D_809EE1B4 = {{3, 0x11, 9, 9, 0x10, 0}, 1, &D_809EE190};
static ColliderJntSphElementInit D_809EE1C4 = {
    {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0x46}, 0x64},
};
static ColliderJntSphInit D_809EE1E8 = {{9, 0x11, 9, 9, 0x10, 0}, 1, &D_809EE1C4};
static ? D_809EE1F8;                                /* unable to generate initializer */
static ? D_809EE204;                                /* unable to generate initializer */
static ? D_809EE210;                                /* unable to generate initializer */
static ? D_809EE21C;                                /* unable to generate initializer */
static Vec3f D_809EE228 = {0.0f, -200.0f, 0.0f};
static Vec3f D_809EE234 = {0.0f, 720.0f, 0.0f};
static u8 D_809EE4D0;

void func_809EC040(s32 arg0, void *arg1, ? *arg2) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = arg0 << 6;
    (arg1->unk_1C + temp_v0)->unk_30 = (s16) (s32) arg2->unk_0;
    (arg1->unk_1C + temp_v0)->unk_32 = (s16) (s32) arg2->unk_4;
    (arg1->unk_1C + temp_v0)->unk_34 = (s16) (s32) arg2->unk_8;
    temp_v1 = arg1->unk_1C + temp_v0;
    temp_v1->unk_36 = (s16) (s32) (temp_v1->unk_38 * (f32) temp_v1->unk_2E);
}

void Boss04_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionPoly *spC0;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    u32 spA4;
    f32 sp90;
    ? *temp_s0;
    ActorContext *temp_s5;
    f32 *temp_s2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f24;
    f32 temp_f2;
    s32 temp_s2_2;
    ? *phi_s0;
    s16 phi_s0_2;
    f32 phi_f20;
    f32 phi_f24;
    s32 phi_s2;
    Boss04 *this = (Boss04 *) thisx;

    if (Actor_GetRoomCleared(globalCtx, (u32) globalCtx->roomCtx.currRoom.num) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.params = 0x64;
    Actor_SetScale((Actor *) this, 0.1f);
    this->actor.targetMode = 5;
    this->actor.hintId = 0x19;
    this->actor.colChkInfo.health = 0x14;
    this->actor.colChkInfo.damageTable = &D_809EE150;
    this->unk_700 = 1.0f;
    this->unk_6FC = 1.0f;
    this->unk_6F8 = 1.0f;
    Collider_InitAndSetJntSph(globalCtx, &this->unk_208, (Actor *) this, &D_809EE1B4, &this->unk_228);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_268, (Actor *) this, &D_809EE1E8, &this->unk_288);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_060045E8, &D_0600004C, &this->unk_188, &this->unk_1BE, 9);
    spAC = this->actor.world.pos.y + 200.0f;
    temp_s2 = &spA8;
    phi_s0 = &D_809EE1F8;
    do {
        spA8 = phi_s0->unk_0 + this->actor.world.pos.x;
        spB0 = phi_s0->unk_8 + this->actor.world.pos.z;
        if (func_800C55C4(&globalCtx->colCtx, (Vec3f *) &this->actor.world, (Vec3f *) temp_s2, (Vec3f *) &spB4, &spC0, 1U, 0U, 0U, 1U, &spA4) != 0) {
            if (phi_s0 == &D_809EE1F8) {
                this->unk_6D8 = spB4;
            } else if (phi_s0 == &D_809EE204) {
                this->unk_6DC = spB4;
            } else if (phi_s0 == &D_809EE210) {
                this->unk_6E0 = spBC;
            } else if (phi_s0 == &D_809EE21C) {
                this->unk_6E4 = spBC;
            }
        }
        temp_s0 = phi_s0 + 0xC;
        phi_s0 = temp_s0;
    } while ((u32) temp_s0 < (u32) &D_809EE228);
    temp_f0 = this->unk_6D8;
    temp_f12 = this->unk_6E0;
    temp_f2 = temp_f0 + ((this->unk_6DC - temp_f0) * 0.5f);
    temp_f14 = temp_f12 + ((this->unk_6E4 - temp_f12) * 0.5f);
    this->unk_6E8 = temp_f2;
    this->actor.world.pos.x = temp_f2;
    this->unk_6F0 = temp_f14;
    this->actor.world.pos.z = temp_f14;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 60.0f, 60.0f, 4U);
    if ((gGameInfo->data[1312] != 0) || ((gSaveContext.eventInf[6] & 1) != 0)) {
        func_809ECD00(this, globalCtx);
        temp_f24 = this->actor.floorHeight;
        this->actor.world.pos.y = temp_f24 + 160.0f;
        D_809EE4D0 = gGameInfo->data[1289] + 0x32;
        phi_f24 = temp_f24;
    } else {
        func_809EC544(this);
        temp_f0_2 = this->actor.floorHeight;
        this->actor.world.pos.y = (f32) gGameInfo->data[1318] + (temp_f0_2 + 590.0f);
        phi_f24 = (f32) gGameInfo->data[1319] + (temp_f0_2 + 550.0f);
    }
    this->unk_6F6 = 0x52;
    temp_s5 = &globalCtx->actorCtx;
    phi_s0_2 = 0;
    phi_f20 = 110.0f;
    phi_s2 = 0;
    do {
        Matrix_RotateY(phi_s0_2, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(phi_f20, (Vec3f *) &sp90);
        Actor_SpawnAsChild(temp_s5, (Actor *) this, globalCtx, 0x23E, this->unk_6E8 + sp90, phi_f24, this->unk_6F0 + sp98, (s16) 0, (s16) 0, (s16) 0, phi_s2);
        temp_s2_2 = phi_s2 + 1;
        phi_s0_2 = (s16) (phi_s0_2 + 0x1300);
        phi_f20 += 2.5f;
        phi_s2 = temp_s2_2;
    } while (temp_s2_2 != 0x52);
    Actor_SpawnAsChild(temp_s5, (Actor *) this, globalCtx, 0x23E, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0x64);
}

void Boss04_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Boss04 *this = (Boss04 *) thisx;

}

void func_809EC544(Boss04 *arg0) {
    arg0->actionFunc = func_809EC568;
    arg0->actor.flags &= -2;
}

void func_809EC568(Boss04 *this, GlobalContext *globalCtx) {
    Actor *sp74;
    Actor *sp60;
    Camera *sp5C;
    f32 sp54;
    ? sp50;
    Vec3f *sp48;
    Vec3f *sp44;
    f32 *sp40;
    Actor *temp_a0;
    Actor *temp_a0_2;
    Camera *temp_v0_2;
    Vec3f *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    s16 temp_v0_3;
    Actor *phi_a0;
    u32 phi_v0;

    sp74 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk_708;
    this->unk_1FE = 0xF;
    this->unk_704 += 1;
    if ((temp_v0 != 0) && ((s32) temp_v0 < 0xA)) {
        this->actor.world.pos.y = (Math_SinS((s16) (this->unk_1F4 << 9)) * 10.0f) + (this->actor.floorHeight + 160.0f);
        Matrix_RotateY(this->actor.yawTowardsPlayer, 0U);
    }
    switch ((u32) this->unk_708) {
    case 0:
        this->unk_2C8 = 0x32;
        this->unk_2D0 = 2000.0f;
        if ((sp74->unk_A6C & 0x100000) && (this->actor.projectedPos.z > 0.0f) && (fabsf(this->actor.projectedPos.x) < 300.0f) && (fabsf(this->actor.projectedPos.y) < 300.0f)) {
            if (((u32) this->unk_704 >= 0xFU) && (ActorCutscene_GetCurrentIndex() == -1)) {
                this->unk_708 = 0xA;
                this->unk_704 = 0;
                func_800EA0D4(globalCtx, &globalCtx->csCtx);
                this->unk_70A = func_801694DC(globalCtx);
                func_80169590(globalCtx, 0, 1);
                func_80169590(globalCtx, this->unk_70A, 7);
                func_800B7298(globalCtx, (Actor *) this, 7U);
                sp74->world.pos.x = this->unk_6E8;
                sp74->shape.rot.y = 0x7FFF;
                sp74->world.pos.z = this->unk_6F0 + 410.0f;
                sp74->world.rot.y = sp74->shape.rot.y;
                Math_Vec3f_Copy(&this->unk_70C, (Vec3f *) &sp74->world);
                this->unk_70C.y += 100.0f;
                Math_Vec3f_Copy(&this->unk_718, (Vec3f *) &this->actor.world);
                func_8016566C(0x96);
                this->unk_744 = 60.0f;
                temp_a0 = globalCtx->actorCtx.actorList[9].first;
                phi_a0 = temp_a0;
                if (temp_a0 != 0) {
                    do {
                        if (phi_a0->id == 0x170) {
                            sp60 = phi_a0;
                            Actor_MarkForDeath(phi_a0);
                        }
                        temp_a0_2 = phi_a0->next;
                        phi_a0 = temp_a0_2;
                    } while (temp_a0_2 != 0);
                }
            }
        } else {
            this->unk_704 = 0;
        }
        break;
    case 10:
        if (this->unk_704 == 3) {
            Audio_PlayActorSound2((Actor *) this, 0x3993U);
            this->unk_74A = 1;
        }
        this->unk_2C8 = 0x12C;
        this->unk_2D0 = 10000.0f;
        Math_ApproachF(&this->unk_744, 20.0f, 0.3f, 11.0f);
        if (this->unk_704 == 0x28) {
            this->unk_708 = 0xB;
            this->unk_704 = 0;
        }
        break;
    case 11:
        if ((u32) this->unk_704 >= 0x33U) {
            this->unk_708 = 0xC;
            this->unk_704 = 0;
            this->actor.gravity = -3.0f;
        }
        break;
    case 13:
        if (this->unk_704 == 0x2D) {
            this->unk_708 = 1;
            this->unk_704 = 0;
            func_800B7298(globalCtx, (Actor *) this, 0x15U);
            this->actor.gravity = 0.0f;
        } else {
        case 12:
            Audio_PlayActorSound2((Actor *) this, 0x3216U);
            Math_ApproachF((f32 *) &this->unk_718, this->actor.world.pos.x, 0.5f, 1000.0f);
            Math_ApproachF(&this->unk_718.y, this->actor.world.pos.y, 0.5f, 1000.0f);
            Math_ApproachF(&this->unk_718.z, this->actor.world.pos.z, 0.5f, 1000.0f);
            if ((this->actor.bgCheckFlags & 2) != 0) {
                play_sound(0x185CU);
                this->unk_6F4 = 0xF;
                this->unk_708 = 0xD;
                this->unk_704 = 0;
                this->unk_2DA = 0xA;
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0x23);
                Audio_PlayActorSound2((Actor *) this, 0x324EU);
                this->unk_748 = 0x14;
            }
        }
        break;
    case 1:
        sp74->shape.rot.y = 0x7FFF;
        sp74->world.rot.y = sp74->shape.rot.y;
        SysMatrix_GetStateTranslationAndScaledZ(-100.0f, &this->unk_70C);
        this->unk_70C.x += sp74->world.pos.x;
        this->unk_70C.y = func_800B6FC8((Player *) sp74) + sp74->world.pos.y + 36.0f;
        this->unk_70C.z += sp74->world.pos.z;
        this->unk_718.x = sp74->world.pos.x;
        this->unk_718.y = (func_800B6FC8((Player *) sp74) + sp74->world.pos.y) - 4.0f;
        this->unk_718.z = sp74->world.pos.z;
        if ((u32) this->unk_704 >= 0x23U) {
            this->unk_704 = 0;
            this->unk_708 = 2;
            this->unk_728 = -200.0f;
        }
        break;
    case 2:
    case 3:
        temp_a1 = &this->unk_70C;
        sp44 = temp_a1;
        SysMatrix_GetStateTranslationAndScaledZ(500.0f, temp_a1);
        temp_f0 = this->actor.world.pos.x;
        temp_f2 = this->actor.world.pos.y;
        temp_f12 = this->actor.world.pos.z;
        this->unk_70C.x += temp_f0;
        this->unk_70C.y += temp_f2 - 50.0f;
        this->unk_70C.z += temp_f12;
        this->unk_718.x = temp_f0;
        this->unk_718.z = temp_f12;
        this->unk_718.y = (temp_f2 - 70.0f) + this->unk_728;
        Math_ApproachZeroF(&this->unk_728, 0.05f, this->unk_73C);
        Math_ApproachF(&this->unk_73C, 3.0f, 1.0f, 0.05f);
        if (this->unk_704 == 0x14) {
            this->unk_708 = 3;
        }
        phi_v0 = this->unk_704;
        if (this->unk_704 == 0x46) {
            this->unk_2C8 = 0x12C;
            this->unk_2D0 = 0.0f;
            D_809EE4D0 = 1;
            this->unk_2E2 = 0x3C;
            this->unk_2E0 = 0x5D;
            phi_v0 = this->unk_704;
        }
        if (phi_v0 >= 0x8DU) {
            temp_v0_2 = Play_GetCamera(globalCtx, 0);
            this->unk_708 = 0;
            sp5C = temp_v0_2;
            func_809ECD00(this, globalCtx);
            sp5C->eye.x = sp44->x;
            sp5C->eye.y = sp44->y;
            sp5C->eye.z = sp44->z;
            sp5C->eyeNext.x = sp44->x;
            sp5C->eyeNext.y = sp44->y;
            sp5C->eyeNext.z = sp44->z;
            sp5C->at.x = this->unk_718.x;
            sp5C->at.y = this->unk_718.y;
            sp5C->at.z = this->unk_718.z;
            func_80169AFC(globalCtx, this->unk_70A, 0);
            this->unk_70A = 0;
            func_800EA0EC(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 6U);
            func_80165690();
            gSaveContext.eventInf[6] |= 1;
        }
        break;
    }
    if (this->unk_70A != 0) {
        sp40 = &this->unk_744;
        sp44 = &this->unk_70C;
        sp48 = &this->unk_718;
        ShrinkWindow_SetLetterboxTarget(0x1B);
        temp_v0_3 = this->unk_748;
        if (temp_v0_3 != 0) {
            this->unk_748 = temp_v0_3 - 1;
        }
        Math_Vec3f_Copy((Vec3f *) &sp50, sp48);
        sp54 += Math_SinS((s16) (this->unk_748 << 0xE)) * (f32) this->unk_748 * 1.5f;
        Play_CameraSetAtEye(globalCtx, this->unk_70A, (Vec3f *) &sp50, sp44);
        func_80169940(globalCtx, this->unk_70A, this->unk_744);
        Math_ApproachF(sp40, 60.0f, 0.1f, 1.0f);
    }
    this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
    temp_f2_2 = sp74->world.pos.x - this->actor.world.pos.x;
    temp_f16 = sp74->world.pos.z - this->actor.world.pos.z;
    this->actor.shape.rot.x = Math_Atan2S(-(sp74->world.pos.y - this->actor.world.pos.y), sqrtf((temp_f2_2 * temp_f2_2) + (temp_f16 * temp_f16)));
}

void func_809ECD00(Boss04 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809ECD18;
}

void func_809ECD18(Boss04 *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s16 temp_v0;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk_1F4;
    if ((s32) temp_v0 >= 0x500) {
        this->unk_1F4 = temp_v0 - 0x300;
        this->unk_1F7 += 1;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x200);
    this->actor.world.pos.y = (Math_SinS((s16) (this->unk_1F4 << 9)) * 10.0f) + (this->actor.floorHeight + (f32) gGameInfo->data[1265] + 160.0f);
    Math_ApproachF(&this->actor.speedXZ, this->unk_6D4, 1.0f, 0.5f);
    if (this->unk_1F8 == 0) {
        this->unk_1F8 = (s16) (s32) (Rand_ZeroFloat(100.0f) + 50.0f);
        this->unk_6D4 = Rand_ZeroFloat(3.0f);
        if (Rand_ZeroOne() < 0.1f) {
            Math_Vec3f_Copy(&this->unk_6C8, (Vec3f *) &sp24->world);
        } else {
            this->unk_6C8.x = randPlusMinusPoint5Scaled(600.0f) + this->unk_6E8;
            this->unk_6C8.z = randPlusMinusPoint5Scaled(600.0f) + this->unk_6F0;
        }
    }
    Math_ApproachS(&this->actor.world.rot.y, Math_Atan2S(this->unk_6C8.x - this->actor.world.pos.x, this->unk_6C8.z - this->actor.world.pos.z), 5, 0x200);
    if (((s32) (s8) this->actor.colChkInfo.health < 0xB) || (gGameInfo->data[1336] != 0)) {
        gGameInfo->data[1336] = 0;
        func_809ECEF4(this);
    }
}

void func_809ECEF4(Boss04 *arg0) {
    Boss04 *temp_a2;

    temp_a2 = arg0;
    temp_a2->actionFunc = func_809ECF58;
    arg0 = temp_a2;
    Math_Vec3s_Copy(temp_a2 + 0x30, temp_a2 + 0xBC);
    arg0->unk_1F8 = 0;
    arg0->unk_1F6 = 1;
    arg0->unk_1FA = 0x3C;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.gravity = -3.0f;
}

void func_809ECF58(Boss04 *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    GameInfo *temp_v0;

    if ((this->unk_1FE == 0xE) || (((this->actor.bgCheckFlags & 8) != 0) && (this->unk_1F8 == 0))) {
        this->unk_1F8 = 0x14;
        if ((Rand_ZeroOne() < 0.2f) && (this->unk_1FE == 0)) {
            this->actor.world.rot.y = this->actor.yawTowardsPlayer;
            this->unk_2C8 = 0x64;
            this->unk_2D0 = 10000.0f;
        } else {
            this->actor.world.rot.y = (s32) Rand_ZeroFloat(8000.0f) + this->actor.world.rot.y + 0x8000;
        }
        this->actor.speedXZ = 0.0f;
        if ((this->actor.bgCheckFlags & 8) != 0) {
            play_sound(0x185CU);
            func_800BC848(this, globalCtx, 0xF, 0xA);
            this->unk_6F4 = 0xF;
            sp3C = this->actor.focus.pos.x;
            sp40 = this->actor.focus.pos.y;
            sp44 = this->actor.focus.pos.z;
            func_800BBFB0(globalCtx, (Vec3f *) &sp3C, 100.0f, 0x28, (s16) 0x1F4, (s16) 0xA, (u8) 0);
        }
    }
    Math_ApproachS((s16 *) &this->actor.shape, (s16) (s32) (Math_SinS((s16) (this->unk_1F4 * 0xFB8)) * 5000.0f), 5, 0x800);
    Math_ApproachS(&this->actor.shape.rot.z, (s16) (s32) (Math_SinS((s16) (this->unk_1F4 * 0xCD0)) * 3000.0f), 5, 0x800);
    if (this->unk_6F4 == 0) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 5, 0x1000);
        if (this->unk_1FA == 0) {
            Math_ApproachF(&this->actor.speedXZ, 20.0f, 1.0f, 1.0f);
            sp3C = this->actor.world.pos.x;
            sp40 = this->actor.floorHeight + 2.0f;
            sp44 = this->actor.world.pos.z;
            EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp3C, 0x578, 0x1F4, (s16) 0);
            Audio_PlayActorSound2((Actor *) this, 0x3216U);
        }
    }
    temp_v0 = gGameInfo;
    if (temp_v0->data[1336] != 0) {
        temp_v0->data[1336] = 0;
        func_809ED224(this);
        this->unk_1FE = 0x64;
        this->unk_200 = 0x64;
    }
}

void func_809ED224(Actor *arg0) {
    arg0->unk_204 = func_809ED2A0;
    arg0->unk_1F8 = 0x3C;
    arg0->unk_1FA = 0x64;
    arg0->speedXZ = 0.0f;
    arg0->unk_2C8 = 0xC8;
    arg0->unk_2D0 = 10000.0f;
    Audio_PlayActorSound2(arg0, 0x3A14U);
    arg0->flags &= -2;
    func_801A2ED8();
    arg0->unk_1F6 = 0xA;
}

void func_809ED2A0(Boss04 *this, GlobalContext *globalCtx) {
    f32 temp_f2;
    s16 temp_v0;
    s16 phi_v0;
    s16 phi_v0_2;

    temp_v0 = this->unk_1F8;
    this->unk_2DA = 0xA;
    if ((s32) temp_v0 >= 5) {
        this->unk_6FC = (Math_SinS((s16) (temp_v0 * 0x3000)) * 10.0f * 0.01f) + 1.0f;
        temp_f2 = (Math_CosS((s16) (this->unk_1F8 * 0x3000)) * 10.0f * 0.01f) + 1.0f;
        this->unk_700 = temp_f2;
        this->unk_6F8 = temp_f2;
    }
    phi_v0 = this->unk_1F8;
    if (this->unk_1F8 == 5) {
        this->unk_6F8 *= 1.3f;
        this->unk_6FC *= 1.3f;
        this->unk_700 *= 1.3f;
        phi_v0 = this->unk_1F8;
    }
    phi_v0_2 = phi_v0;
    if (phi_v0 == 3) {
        this->actor.flags &= -2;
        this->unk_700 = 0.0f;
        this->unk_6FC = 0.0f;
        this->unk_6F8 = 0.0f;
        phi_v0_2 = this->unk_1F8;
    }
    if ((phi_v0_2 == 2) || (phi_v0_2 == 5)) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 1);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x185CU);
    }
    if (this->unk_1FA == 3) {
        this->unk_1F6 = 0xB;
    }
    if (this->unk_1FA == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_809ED45C(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a0_2;
    u8 temp_v1;
    void *temp_v0;

    if ((arg0->unk_1FE == 0) && (temp_v0 = arg0->unk_224, temp_a0 = arg0, temp_v1 = temp_v0->unk_16, ((temp_v1 & 2) != 0))) {
        temp_v0->unk_16 = (u8) (temp_v1 & 0xFFFD);
        arg0 = arg0;
        Audio_PlayActorSound2(temp_a0, 0x3A13U);
        temp_a0_2 = arg0;
        arg0->colChkInfo.health -= arg0->colChkInfo.damage;
        if ((s32) (s8) arg0->colChkInfo.health <= 0) {
            arg0 = arg0;
            func_809ED224((Boss04 *) temp_a0_2);
            arg0->unk_1FE = 0x64;
            arg0->unk_200 = 0x64;
            Enemy_StartFinishingBlow(arg1, arg0);
            return;
        }
        arg0->unk_2DA = 0xF;
        arg0->unk_1FE = 0xF;
        arg0->unk_200 = 0xF;
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_809ED50C(Boss04 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    Vec3f *phi_s1;
    s32 phi_s0;
    Vec3f *phi_s1_2;
    s32 phi_s0_2;
    Vec3f *phi_s1_3;
    s32 phi_s0_3;
    Vec3f *phi_s1_4;
    s32 phi_s0_4;
    Vec3f *phi_s1_5;
    s32 phi_s0_5;
    Vec3f *phi_s1_6;
    s32 phi_s0_6;
    Vec3f *phi_s1_7;
    s32 phi_s0_7;

    arg0->unk_2DE += arg0->unk_2E2;
    arg0->unk_2DC += arg0->unk_2E0;
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    SysMatrix_InsertTranslation(0.0f, 0.0f, 10.0f, 1);
    SysMatrix_GetStateTranslation(arg0 + 0x6BC);
    Matrix_Scale(arg0->actor.scale.x * 13.0f, arg0->actor.scale.y * 13.0f, arg0->actor.scale.z * 16.0f, 1);
    Matrix_RotateY(arg0->unk_2DC, 1U);
    SysMatrix_InsertXRotation_s(arg0->unk_2DE, 1);
    SysMatrix_StatePush();
    phi_s1 = arg0 + 0x2E4;
    phi_s0 = 0;
    phi_s0_2 = 0;
    phi_s0_3 = 0;
    phi_s0_4 = 0;
    phi_s0_5 = 0;
    phi_s0_6 = 0;
    phi_s0_7 = 0;
    do {
        SysMatrix_RotateStateAroundXAxis(0.3926991f);
        SysMatrix_GetStateTranslationAndScaledZ(100.0f, phi_s1);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 < 0xC0);
    SysMatrix_StatePop();
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(38.0f, 0.0f, 0.0f, 1);
    phi_s1_2 = arg0 + 0x3A4;
    do {
        SysMatrix_RotateStateAroundXAxis(0.41887903f);
        SysMatrix_GetStateTranslationAndScaledZ(92.0f, phi_s1_2);
        temp_s0_2 = phi_s0_2 + 0xC;
        phi_s1_2 += 0xC;
        phi_s0_2 = temp_s0_2;
    } while (temp_s0_2 < 0xB4);
    SysMatrix_StatePop();
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(-38.0f, 0.0f, 0.0f, 1);
    phi_s1_3 = arg0 + 0x458;
    do {
        SysMatrix_RotateStateAroundXAxis(0.41887903f);
        SysMatrix_GetStateTranslationAndScaledZ(92.0f, phi_s1_3);
        temp_s0_3 = phi_s0_3 + 0xC;
        phi_s1_3 += 0xC;
        phi_s0_3 = temp_s0_3;
    } while (temp_s0_3 < 0xB4);
    SysMatrix_StatePop();
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(71.0f, 0.0f, 0.0f, 1);
    phi_s1_4 = arg0 + 0x50C;
    do {
        SysMatrix_RotateStateAroundXAxis(0.5711987f);
        SysMatrix_GetStateTranslationAndScaledZ(71.0f, phi_s1_4);
        temp_s0_4 = phi_s0_4 + 0xC;
        phi_s1_4 += 0xC;
        phi_s0_4 = temp_s0_4;
    } while (temp_s0_4 < 0x84);
    SysMatrix_StatePop();
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(-71.0f, 0.0f, 0.0f, 1);
    phi_s1_5 = arg0 + 0x590;
    do {
        SysMatrix_RotateStateAroundXAxis(0.5711987f);
        SysMatrix_GetStateTranslationAndScaledZ(71.0f, phi_s1_5);
        temp_s0_5 = phi_s0_5 + 0xC;
        phi_s1_5 += 0xC;
        phi_s0_5 = temp_s0_5;
    } while (temp_s0_5 < 0x84);
    SysMatrix_StatePop();
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(92.0f, 0.0f, 0.0f, 1);
    phi_s1_6 = arg0 + 0x614;
    do {
        SysMatrix_RotateStateAroundXAxis(1.0471976f);
        SysMatrix_GetStateTranslationAndScaledZ(38.0f, phi_s1_6);
        temp_s0_6 = phi_s0_6 + 0xC;
        phi_s1_6 += 0xC;
        phi_s0_6 = temp_s0_6;
    } while (temp_s0_6 < 0x48);
    SysMatrix_StatePop();
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(-92.0f, 0.0f, 0.0f, 1);
    phi_s1_7 = arg0 + 0x65C;
    do {
        SysMatrix_RotateStateAroundXAxis(1.0471976f);
        SysMatrix_GetStateTranslationAndScaledZ(38.0f, phi_s1_7);
        temp_s0_7 = phi_s0_7 + 0xC;
        phi_s1_7 += 0xC;
        phi_s0_7 = temp_s0_7;
    } while (temp_s0_7 != 0x48);
    SysMatrix_StatePop();
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(100.0f, 0.0f, 0.0f, 1);
    SysMatrix_GetStateTranslation(arg0 + 0x6A4);
    SysMatrix_StatePop();
    SysMatrix_InsertTranslation(-100.0f, 0.0f, 0.0f, 1);
    SysMatrix_GetStateTranslation(arg0 + 0x6B0);
}

void Boss04_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp30;
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 temp_f2;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    u8 temp_t8;
    u8 temp_v0_10;
    s32 phi_v1;
    Boss04 *this = (Boss04 *) thisx;

    this->unk_1F4 += 1;
    if (gGameInfo->data[1311] == 0) {
        temp_v0 = this->unk_1F8;
        if (temp_v0 != 0) {
            this->unk_1F8 = temp_v0 - 1;
        }
        temp_v0_2 = this->unk_1FA;
        if (temp_v0_2 != 0) {
            this->unk_1FA = temp_v0_2 - 1;
        }
        temp_v0_3 = this->unk_2C8;
        if (temp_v0_3 != 0) {
            this->unk_2C8 = temp_v0_3 - 1;
        }
        temp_v0_4 = this->unk_1FE;
        if (temp_v0_4 != 0) {
            this->unk_1FE = temp_v0_4 - 1;
        }
        temp_v0_5 = this->unk_200;
        if (temp_v0_5 != 0) {
            this->unk_200 = temp_v0_5 - 1;
        }
        temp_v0_6 = this->unk_2DA;
        if (temp_v0_6 != 0) {
            this->unk_2DA = temp_v0_6 - 1;
        }
        temp_v0_7 = this->unk_6F4;
        if (temp_v0_7 != 0) {
            this->unk_6F4 = temp_v0_7 - 1;
        }
        this->actionFunc(this, globalCtx);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        this->actor.world.pos.y -= 100.0f;
        this->actor.prevPos.y -= 100.0f;
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 100.0f, 120.0f, 200.0f, 5U);
        this->actor.world.pos.y += 100.0f;
        this->actor.prevPos.y += 100.0f;
    }
    if (this->unk_200 == 0xA) {
        this->unk_2D0 = 0.0f;
        this->unk_2C8 = (s16) (s32) (Rand_ZeroFloat(100.0f) + 60.0f);
    }
    if (this->unk_2C8 == 0) {
        this->unk_2C8 = (s16) (s32) (Rand_ZeroFloat(100.0f) + 60.0f);
        this->unk_2D0 = 10000.0f - this->unk_2D0;
    }
    Math_ApproachF(&this->unk_2CC, this->unk_2D0, 0.2f, 1000.0f);
    if (func_809ED2A0 != this->actionFunc) {
        temp_v0_8 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        phi_v1 = (s32) temp_v0_8;
        if ((s32) temp_v0_8 < 0) {
            phi_v1 = -(s32) temp_v0_8;
        }
        if (phi_v1 < 0x6000) {
            if ((s32) temp_v0_8 >= 0x2501) {
                this->unk_2D6 = 0x2500;
            } else if ((s32) temp_v0_8 < -0x2500) {
                this->unk_2D6 = -0x2500;
            } else {
                this->unk_2D6 = temp_v0_8;
            }
        } else {
            this->unk_2D6 = 0;
        }
        Math_ApproachS(&this->unk_2D4, this->unk_2D6, 5, 0x800);
        this->unk_2D8 = 0x7D0;
        temp_v0_9 = this->unk_6F4;
        this->unk_700 = (Math_SinS((s16) (this->unk_6F4 * 0x3000)) * (f32) temp_v0_9 * 0.02f) + 1.0f;
        temp_f2 = (Math_CosS((s16) (temp_v0_9 * 0x3000)) * (f32) this->unk_6F4 * 0.02f) + 1.0f;
        temp_f6 = temp_f2 - 1.0f;
        this->unk_6FC = temp_f2;
        this->unk_6F8 = temp_f2;
        this->actor.shape.yOffset = temp_f6 * 1000.0f;
        func_809ED45C((bitwise Actor *) 1.0f, (GlobalContext *) this, globalCtx);
        temp_a1 = &globalCtx->colChkCtx;
        if (this->unk_2CC > 3000.0f) {
            sp30 = temp_a1;
            CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) &this->unk_208);
            this->actor.flags |= 1;
        } else {
            this->actor.flags &= -2;
            sp30 = &globalCtx->colChkCtx;
        }
        temp_a2 = &this->unk_268;
        sp2C = temp_a2;
        CollisionCheck_SetOC(globalCtx, sp30, (Collider *) temp_a2);
        CollisionCheck_SetAC(globalCtx, sp30, (Collider *) temp_a2);
        CollisionCheck_SetAT(globalCtx, sp30, (Collider *) temp_a2);
        func_809ED50C(this);
    }
    temp_v0_10 = D_809EE4D0;
    temp_t8 = temp_v0_10 - 1;
    if (temp_v0_10 != 0) {
        D_809EE4D0 = temp_t8;
        if ((temp_t8 & 0xFF) == 0) {
            func_801A2E54(0x38);
        }
    }
    if (this->unk_74A != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3215U);
    }
}

s32 func_809EDCCC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == gGameInfo->data[1280]) {
        if ((arg5->unk_1F4 & 3) == 0) {
            *arg2 = NULL;
        }
        arg4->x += gGameInfo->data[1281] << 8;
        arg4->y += gGameInfo->data[1282] << 8;
        arg4->z += gGameInfo->data[1283] << 8;
    }
    if ((arg1 == 5) || (arg1 == 7)) {
        arg4->y = (arg4->y + (s32) arg5->unk_2CC) - 0x500;
    }
    if (arg1 == 4) {
        arg4->y += arg5->unk_2D8;
        arg4->z += arg5->unk_2D4;
        if (arg5->unk_2DA != 0) {
            arg4->y += (s32) (Math_SinS((s16) (arg5->unk_1F4 * 0x3000)) * (f32) (arg5->unk_2DA * 0x1F4));
            arg4->z += (s32) (Math_SinS((s16) (arg5->unk_1F4 * 0x3500)) * (f32) (arg5->unk_2DA * 0x12C));
        }
    }
    return 0;
}

void func_809EDECC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp18;

    if (arg1 == 1) {
        SysMatrix_GetStateTranslationAndScaledY(-500.0f, arg4 + 0x3C);
        SysMatrix_MultiplyVector3fByState(&D_809EE228, (Vec3f *) &sp18);
        func_809EC040(0, arg4 + 0x208, &sp18);
        SysMatrix_MultiplyVector3fByState(&D_809EE234, (Vec3f *) &sp18);
        func_809EC040(0, arg4 + 0x268, &sp18);
    }
}

void Boss04_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    Boss04 *this = (Boss04 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    if ((this->unk_200 & 1) != 0) {
        temp_s1->polyOpa.p = Gfx_SetFog(temp_s1->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    SysMatrix_InsertTranslation(0.0f, 0.0f, 800.0f, 1);
    Matrix_Scale(this->unk_6F8, this->unk_6FC, this->unk_700, 1);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_809EDCCC, func_809EDECC, (Actor *) this);
    temp_s1->polyOpa.p = func_801660B8(globalCtx, temp_s1->polyOpa.p);
    if (func_809EC568 != this->actionFunc) {
        func_8012C448(globalCtx->state.gfxCtx);
        temp_v0 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = 0x96;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = (u32) &D_06004510;
        SysMatrix_InsertTranslation(this->unk_6BC, this->actor.floorHeight, this->unk_6C4, 0);
        Matrix_RotateY(this->actor.shape.rot.y, 1U);
        SysMatrix_InsertTranslation(0.0f, 0.0f, -20.0f, 1);
        Matrix_Scale(this->unk_6F8 * 1.8f, 0.0f, this->unk_700 * 2.8f, 1);
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = (u32) &D_06004550;
    }
}
