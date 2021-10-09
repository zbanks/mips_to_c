typedef struct MirRay3 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderQuad unk144;                /* inferred */
    /* 0x1C4 */ ColliderQuad unk1C4;                /* inferred */
    /* 0x218 */ f32 unk218;                         /* overlap; inferred */
    /* 0x21C */ f32 unk21C;                         /* inferred */
    /* 0x220 */ char pad220[0x4];
    /* 0x224 */ f32 unk224;                         /* inferred */
    /* 0x228 */ f32 unk228;                         /* inferred */
    /* 0x22C */ char pad22C[0x4];
    /* 0x230 */ f32 unk230;                         /* inferred */
    /* 0x234 */ f32 unk234;                         /* inferred */
    /* 0x238 */ char pad238[0x4];
    /* 0x23C */ f32 unk23C;                         /* inferred */
    /* 0x240 */ f32 unk240;                         /* inferred */
    /* 0x244 */ char pad244[0x4];
    /* 0x248 */ f32 unk248;                         /* inferred */
    /* 0x24C */ f32 unk24C;                         /* inferred */
    /* 0x250 */ char pad250[0x4];
    /* 0x254 */ f32 unk254;                         /* inferred */
    /* 0x258 */ f32 unk258;                         /* inferred */
    /* 0x25C */ char pad25C[0x8];                   /* maybe part of unk258[3]? */
} MirRay3;                                          /* size = 0x264 */

struct _mips2c_stack_MirRay3_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_MirRay3_Draw {
    /* 0x000 */ char pad0[0x8C];
    /* 0x08C */ ? sp8C;                             /* inferred */
    /* 0x08C */ char pad8C[0x4C];
    /* 0x0D8 */ s32 spD8;                           /* inferred */
    /* 0x0DC */ u8 spDC;                            /* inferred */
    /* 0x0DD */ char padDD[0x3];                    /* maybe part of spDC[4]? */
    /* 0x0E0 */ ? spE0;                             /* inferred */
    /* 0x0E0 */ char padE0[0x1A4];
    /* 0x284 */ ? sp284;                            /* inferred */
    /* 0x284 */ char pad284[0xC];
};                                                  /* size = 0x290 */

struct _mips2c_stack_MirRay3_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderQuad *sp24;                  /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_MirRay3_Update {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ColliderQuad *sp28;                  /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B9E544 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9E5F4 {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad74[0x8];                     /* maybe part of sp70[3]? */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80B9E7D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B9E8D4 {
    /* 0x000 */ char pad0[0xC4];
    /* 0x0C4 */ s32 spC4;                           /* inferred */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ f32 spCC;                           /* inferred */
    /* 0x0D0 */ f32 spD0;                           /* inferred */
    /* 0x0D4 */ f32 spD4;                           /* inferred */
    /* 0x0D8 */ f32 spD8;                           /* inferred */
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ char padE0[0xC];                    /* maybe part of spDC[4]? */
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ f32 spF8;                           /* inferred */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ f32 sp108;                          /* inferred */
    /* 0x10C */ f32 sp10C;                          /* inferred */
    /* 0x110 */ f32 sp110;                          /* inferred */
    /* 0x114 */ f32 sp114;                          /* inferred */
    /* 0x118 */ f32 sp118;                          /* inferred */
    /* 0x11C */ f32 sp11C;                          /* inferred */
    /* 0x120 */ f32 sp120;                          /* inferred */
    /* 0x124 */ f32 sp124;                          /* inferred */
    /* 0x128 */ f32 sp128;                          /* inferred */
    /* 0x12C */ f32 sp12C;                          /* inferred */
    /* 0x130 */ f32 sp130;                          /* inferred */
    /* 0x134 */ f32 sp134;                          /* inferred */
    /* 0x138 */ f32 sp138;                          /* inferred */
    /* 0x13C */ f32 sp13C;                          /* inferred */
    /* 0x140 */ f32 sp140;                          /* inferred */
    /* 0x144 */ f32 sp144;                          /* inferred */
    /* 0x148 */ f32 sp148;                          /* inferred */
    /* 0x14C */ char pad14C[0xC];
};                                                  /* size = 0x158 */

s32 func_800C57F8(void *, f32 *, f32 *, f32 *, s32 *, s32); /* extern */
s32 func_8012405C(GlobalContext *);                 /* extern */
s32 func_8017D2FC(f32, f32, f32, f32, f32 *, f32 *, f32 *, s32); /* extern */
void func_80B9E544(MirRay3 *arg0, GlobalContext *arg1); /* static */
void func_80B9E5F4(MirRay3 *arg0, GlobalContext *arg1, ? *arg2); /* static */
void func_80B9E7D0(? *arg0);                        /* static */
void func_80B9E8D4(MirRay3 *arg0, GlobalContext *arg1, ? *arg2); /* static */
extern ? D_06000168;
extern void D_060003F8;
extern ? D_060004B0;
static ColliderQuadInit D_80B9F420 = {
    {0xA, 9, 0, 0, 0, 3},
    {0, {0x200000, 0, 0}, {0xF7CFFFFF, 0, 0}, 1, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static ColliderCylinderInit D_80B9F470 = {
    {0xA, 0, 0x29, 0, 0x20, 1},
    {0, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
    {0xA, 0xA, 0, {0, 0, 0}},
};

void MirRay3_Init(MirRay3 *this, GlobalContext *globalCtx) {
    ColliderQuad *sp24;
    ColliderQuad *temp_a1;
    ColliderQuad *temp_a1_2;
    MirRay3 *this = (MirRay3 *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    Actor_SetScale((Actor *) this, 1.0f);
    this->unk218 = -536.0f;
    this->unk21C = -939.0f;
    this->unk230 = -536.0f;
    this->unk228 = 0.0f;
    this->unk224 = -1690.0f;
    temp_a1 = &this->unk144;
    this->unk234 = 938.0f;
    this->unk248 = 758.0f;
    this->unk254 = 758.0f;
    this->unk240 = 0.0f;
    this->unk23C = 921.0f;
    this->unk24C = 800.0f;
    this->unk258 = -800.0f;
    sp24 = temp_a1;
    Collider_InitQuad(globalCtx, temp_a1);
    Collider_SetQuad(globalCtx, temp_a1, (Actor *) this, &D_80B9F420);
    temp_a1_2 = &this->unk1C4;
    sp24 = temp_a1_2;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1_2);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, (Actor *) this, &D_80B9F470);
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = this->actor.shape.rot.x;
}

void MirRay3_Destroy(MirRay3 *this, GlobalContext *globalCtx) {
    MirRay3 *this = (MirRay3 *) thisx;
    Collider_DestroyQuad(globalCtx, &this->unk144);
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk1C4);
}

void MirRay3_Update(MirRay3 *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    ColliderQuad *sp28;
    Actor *temp_s2;
    ColliderQuad *temp_a2;
    MirRay3 *this = (MirRay3 *) thisx;

    temp_s2 = globalCtx->actorCtx.actorList[2].first;
    this->unk210 = (u16) (this->unk210 & 0xFFFE);
    if (this->unk1C4.dim.quad[1].y > 0.5f) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk144);
    }
    this->unk210 = (u16) (this->unk210 & 0xFFFD);
    if (func_8012405C(globalCtx) != 0) {
        if ((this->unk1C4.base.acFlags & 2) != 0) {
            this->unk210 = (u16) (this->unk210 | 2);
        }
        temp_a2 = &this->unk1C4;
        this->actor.world.pos.x = temp_s2->unkD34;
        this->actor.world.pos.y = temp_s2->unkD38;
        this->actor.world.pos.z = temp_s2->unkD3C;
        sp2C = &globalCtx->colChkCtx;
        sp28 = temp_a2;
        Collider_UpdateCylinder((Actor *) this, (ColliderCylinder *) temp_a2);
        CollisionCheck_SetAC(globalCtx, sp2C, (Collider *) temp_a2);
    }
    if (this->unk1C4.dim.quad[1].y > 0.1f) {
        func_800B8F98(temp_s2, 0x1049U);
    }
    Math_ApproachZeroF(&this->unk1C4.dim.quad[1].y, 1.0f, 0.1f);
}

void func_80B9E544(MirRay3 *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first + 0xD04;
    if ((arg0->unk210 & 2) != 0) {
        temp_f12 = temp_v0->unk20;
        temp_f14 = temp_v0->unk24;
        temp_f2 = temp_v0->unk28;
        temp_f0 = sqrtf((temp_f2 * temp_f2) + ((temp_f12 * temp_f12) + (temp_f14 * temp_f14)));
        if (temp_f0 == 0.0f) {
            arg0->unk260 = 1.0f;
        } else {
            arg0->unk260 = 1.0f / temp_f0;
        }
        Math_ApproachF(arg0 + 0x214, 1.0f, 0.5f, 0.25f);
    }
}

void func_80B9E5F4(MirRay3 *arg0, GlobalContext *arg1, ? *arg2) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp70;
    s32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f4;
    s32 temp_s3;
    void *temp_s0;
    void *temp_v0;
    MirRay3 *phi_s1;
    ? *phi_s2;
    s32 phi_s3;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_s0 = temp_v0 + 0xD04;
    sp60 = -(temp_v0->unkD24 * arg0->unk260) * arg0->unk1C4.dim.quad[1].y * 400.0f;
    sp64 = -(temp_v0->unkD28 * arg0->unk260) * arg0->unk1C4.dim.quad[1].y * 400.0f;
    sp68 = -(temp_v0->unkD2C * arg0->unk260) * arg0->unk1C4.dim.quad[1].y * 400.0f;
    phi_s1 = arg0;
    phi_s2 = arg2;
    phi_s3 = 0;
    do {
        temp_a1 = &sp88;
        temp_a2 = &sp7C;
        temp_f4 = (temp_s0->unk10 * phi_s1->unk1C4.dim.quad[2].x) + (temp_s0->unk30 + (phi_s1->unk1C4.dim.quad[1].z * temp_s0->unk0));
        sp88 = temp_f4;
        temp_f16 = (temp_s0->unk14 * phi_s1->unk1C4.dim.quad[2].x) + (temp_s0->unk34 + (phi_s1->unk1C4.dim.quad[1].z * temp_s0->unk4));
        sp8C = temp_f16;
        temp_f18 = (temp_s0->unk18 * phi_s1->unk1C4.dim.quad[2].x) + (temp_s0->unk38 + (phi_s1->unk1C4.dim.quad[1].z * temp_s0->unk8));
        sp90 = temp_f18;
        sp7C = sp60 + temp_f4;
        sp80 = sp64 + temp_f16;
        sp84 = sp68 + temp_f18;
        phi_s1 += 0xC;
        if (func_800C57F8(arg1 + 0x830, temp_a1, temp_a2, &sp70, &sp6C, 1) != 0) {
            phi_s2->unk4C = sp6C;
        } else {
            phi_s2->unk4C = 0;
        }
        temp_s3 = phi_s3 + 0x54;
        phi_s2 += 0x54;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x1F8);
}

void func_80B9E7D0(? *arg0) {
    s32 temp_a0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_v1;
    void *temp_a3;
    void *temp_t0;
    void *temp_v0;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_t2;
    s32 phi_t2_2;
    s32 phi_t2_3;

    phi_v0 = 0;
    do {
        temp_a0 = phi_v0 + 1;
        phi_v1 = temp_a0;
        if (temp_a0 < 6) {
            do {
                temp_v0 = (arg0 + (phi_v0 * 0x54))->unk4C;
                if (temp_v0 != 0) {
                    temp_a3 = arg0 + (phi_v1 * 0x54);
                    temp_t0 = temp_a3->unk4C;
                    if (temp_t0 != 0) {
                        temp_t1 = temp_v0->unk8 - temp_t0->unk8;
                        phi_t2 = -temp_t1;
                        if (temp_t1 >= 0) {
                            phi_t2 = temp_t1;
                        }
                        if (phi_t2 < 0x64) {
                            temp_t1_2 = temp_v0->unkA - temp_t0->unkA;
                            phi_t2_2 = -temp_t1_2;
                            if (temp_t1_2 >= 0) {
                                phi_t2_2 = temp_t1_2;
                            }
                            if (phi_t2_2 < 0x64) {
                                temp_t1_3 = temp_v0->unkC - temp_t0->unkC;
                                phi_t2_3 = -temp_t1_3;
                                if (temp_t1_3 >= 0) {
                                    phi_t2_3 = temp_t1_3;
                                }
                                if ((phi_t2_3 < 0x64) && (temp_v0->unkE == temp_t0->unkE)) {
                                    temp_a3->unk4C = NULL;
                                }
                            }
                        }
                    }
                }
                temp_v1 = phi_v1 + 1;
                phi_v1 = temp_v1;
            } while (temp_v1 != 6);
        }
        phi_v0 = temp_a0;
    } while (temp_a0 != 6);
}

void func_80B9E8D4(MirRay3 *arg0, GlobalContext *arg1, ? *arg2) {
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    s32 spC4;
    f32 *temp_a1;
    f32 *temp_a3;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 *temp_s6;
    f32 *temp_t0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f4_5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 temp_s2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    ? *phi_s0;
    s32 phi_s2;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_s6 = &sp134;
    temp_f6 = -(temp_v0->unkD24 * arg0->unk260) * arg0->unk1C4.dim.quad[1].y * 400.0f;
    temp_s4 = &sp110;
    temp_s3 = &sp11C;
    temp_s1 = temp_v0 + 0xD04;
    spF8 = temp_f6;
    temp_f18 = -(temp_v0->unkD28 * arg0->unk260) * arg0->unk1C4.dim.quad[1].y * 400.0f;
    spFC = temp_f18;
    temp_f4 = -(temp_v0->unkD2C * arg0->unk260) * arg0->unk1C4.dim.quad[1].y * 400.0f;
    sp100 = temp_f4;
    sp140 = temp_v0->unkD34;
    sp144 = temp_v0->unkD38;
    temp_f8 = temp_v0->unkD3C;
    sp148 = temp_f8;
    sp134 = temp_f6 + sp140;
    sp138 = temp_f18 + sp144;
    sp13C = temp_f4 + temp_f8;
    temp_f26 = arg0->unk1C4.dim.quad[1].y * 400.0f;
    phi_s0 = arg2;
    phi_s2 = 0;
    do {
        temp_v0_2 = phi_s0->unk4C;
        if (temp_v0_2 != 0) {
            temp_f12 = (f32) temp_v0_2->unk8 * 0.00003051851f;
            spEC = temp_f12;
            temp_f14 = (f32) phi_s0->unk4C->unkA * 0.00003051851f;
            spF0 = temp_f14;
            temp_f6_2 = (f32) phi_s0->unk4C->unkC * 0.00003051851f;
            spF4 = temp_f6_2;
            if (func_8017D2FC(temp_f12, temp_f14, temp_f6_2, (f32) phi_s0->unk4C->unkE, &sp140, temp_s6, &sp128, 1) != 0) {
                phi_s0->unk0 = sp128;
                phi_s0->unk4 = sp12C;
                phi_s0->unk8 = sp130;
                temp_f2 = sp128 - sp140;
                temp_f12_2 = sp12C - sp144;
                temp_f14_2 = sp130 - sp148;
                temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2));
                if (temp_f0 < (temp_f26 * 0.9f)) {
                    phi_s0->unk50 = 0xFF;
                } else if (temp_f26 < temp_f0) {
                    phi_s0->unk50 = 0;
                } else {
                    phi_s0->unk50 = (s8) (s32) ((10.0f - ((10.0f / temp_f26) * temp_f0)) * 255.0f);
                }
                temp_f6_3 = (temp_s1->unk0 * 100.0f) + sp140;
                sp11C = temp_f6_3;
                temp_f10 = (temp_s1->unk4 * 100.0f) + sp144;
                sp120 = temp_f10;
                temp_f4_2 = (temp_s1->unk8 * 100.0f) + sp148;
                sp124 = temp_f4_2;
                sp110 = (spF8 * 4.0f) + temp_f6_3;
                sp114 = (spFC * 4.0f) + temp_f10;
                sp118 = (sp100 * 4.0f) + temp_f4_2;
                phi_s0->unk44 = 0.0f;
                temp_f0_2 = phi_s0->unk44;
                phi_s0->unkC = 1.0f;
                phi_s0->unk20 = 1.0f;
                phi_s0->unk34 = 1.0f;
                phi_s0->unk48 = 1.0f;
                phi_s0->unk40 = temp_f0_2;
                phi_s0->unk3C = temp_f0_2;
                phi_s0->unk38 = temp_f0_2;
                phi_s0->unk30 = temp_f0_2;
                phi_s0->unk2C = temp_f0_2;
                phi_s0->unk28 = temp_f0_2;
                phi_s0->unk24 = temp_f0_2;
                phi_s0->unk1C = temp_f0_2;
                phi_s0->unk18 = temp_f0_2;
                phi_s0->unk14 = temp_f0_2;
                phi_s0->unk10 = temp_f0_2;
                if (func_8017D2FC(spEC, spF0, spF4, (f32) phi_s0->unk4C->unkE, temp_s3, temp_s4, &sp104, 1) != 0) {
                    phi_s0->unkC = (f32) (sp104 - sp128);
                    phi_s0->unk10 = (f32) (sp108 - sp12C);
                    phi_s0->unk14 = (f32) (sp10C - sp130);
                }
                temp_f10_2 = (temp_s1->unk10 * 100.0f) + sp140;
                sp11C = temp_f10_2;
                temp_f4_3 = (temp_s1->unk14 * 100.0f) + sp144;
                sp120 = temp_f4_3;
                temp_f18_2 = (temp_s1->unk18 * 100.0f) + sp148;
                sp124 = temp_f18_2;
                sp110 = (spF8 * 4.0f) + temp_f10_2;
                sp114 = (spFC * 4.0f) + temp_f4_3;
                sp118 = (sp100 * 4.0f) + temp_f18_2;
                if (func_8017D2FC(spEC, spF0, spF4, (f32) phi_s0->unk4C->unkE, temp_s3, temp_s4, &sp104, 1) != 0) {
                    phi_s0->unk1C = (f32) (sp104 - sp128);
                    phi_s0->unk20 = (f32) (sp108 - sp12C);
                    phi_s0->unk24 = (f32) (sp10C - sp130);
                }
            } else {
                phi_s0->unk4C = NULL;
            }
        }
        temp_s2 = phi_s2 + 0x54;
        phi_s0 += 0x54;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x1F8);
    temp_f2_2 = arg0->unk1C4.dim.quad[1].y * 400.0f;
    temp_f8_2 = -(temp_s1->unk20 * arg0->unk260);
    spF8 = temp_f8_2;
    temp_f4_4 = -(temp_s1->unk24 * arg0->unk260);
    spFC = temp_f4_4;
    temp_f6_4 = -(temp_s1->unk28 * arg0->unk260);
    sp100 = temp_f6_4;
    sp134 = (temp_f8_2 * temp_f2_2) + sp140;
    sp138 = (temp_f4_4 * temp_f2_2) + sp144;
    sp13C = (temp_f6_4 * temp_f2_2) + sp148;
    if (func_800C57F8(arg1 + 0x830, &sp140, temp_s6, &sp128, &spC4, 1) == 0) {
        Math_Vec3f_Copy((Vec3f *) &sp128, (Vec3f *) temp_s6);
    }
    temp_t0 = &sp128;
    temp_a1 = &spD4;
    temp_a3 = &spC8;
    temp_f10_3 = sp128 + (spF8 * 5.0f);
    sp128 = temp_f10_3;
    temp_f4_5 = sp12C + (spFC * 5.0f);
    sp12C = temp_f4_5;
    temp_f18_3 = sp130 + (sp100 * 5.0f);
    sp130 = temp_f18_3;
    spD4 = (temp_s1->unk0 * 300.0f) + sp140;
    spD8 = (temp_s1->unk4 * 300.0f) + sp144;
    spDC = (temp_s1->unk8 * 300.0f) + sp148;
    spC8 = (temp_s1->unk0 * 300.0f) + temp_f10_3;
    spCC = (temp_s1->unk4 * 300.0f) + temp_f4_5;
    spD0 = (temp_s1->unk8 * 300.0f) + temp_f18_3;
    Collider_SetQuadVertices(arg0 + 0x144, (Vec3f *) temp_a1, (Vec3f *) &sp140, (Vec3f *) temp_a3, (Vec3f *) temp_t0);
}

void MirRay3_Draw(MirRay3 *this, GlobalContext *globalCtx) {
    ? sp284;
    ? spE0;
    u8 spDC;
    ? sp8C;
    ? *temp_s0_2;
    ? *temp_s0_3;
    Actor *temp_s0;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f6;
    u16 temp_a0_2;
    u8 temp_v0_6;
    s32 phi_a0;
    f32 phi_f6;
    ? *phi_s0;
    ? *phi_s0_2;
    MirRay3 *this = (MirRay3 *) thisx;

    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    if (((this->unk210 & 1) == 0) && (func_8012405C(globalCtx) != 0)) {
        SysMatrix_InsertMatrix(temp_s0 + 0xD04, 0);
        func_80B9E544(this, globalCtx);
        if (!(this->unk1C4.dim.quad[1].y <= 0.1f)) {
            temp_a0 = globalCtx->state.gfxCtx;
            temp_s2 = temp_a0;
            func_8012C2DC(temp_a0);
            Matrix_Scale(1.0f, 1.0f, this->unk1C4.dim.quad[1].y, 1);
            temp_v0 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            if ((this->actor.params & 0xF) == 1) {
                temp_a0_2 = gSaveContext.time;
                phi_a0 = (s32) temp_a0_2;
                if ((s32) temp_a0_2 >= 0x8001) {
                    phi_a0 = (0xFFFF - temp_a0_2) & 0xFFFF;
                }
                temp_v0_2 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w0 = 0xFA000078;
                temp_v0_2->words.w1 = ((s32) (this->unk1C4.dim.quad[1].y * 100.0f) & 0xFF) | ~0xFF;
                temp_v1 = temp_s2->polyXlu.p;
                temp_f6 = (f32) phi_a0;
                temp_s2->polyXlu.p = temp_v1 + 8;
                temp_v1->words.w0 = 0xFB000000;
                phi_f6 = temp_f6;
                if (phi_a0 < 0) {
                    phi_f6 = temp_f6 + 4294967296.0f;
                }
                temp_v1->words.w1 = (((u32) ((100.0f * (phi_f6 * 0.000030517578f)) + 105.0f) & 0xFF) << 8) | 0xDAE10000 | 0xFF;
            } else {
                temp_v0_3 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xFA000078;
                temp_v0_3->words.w1 = ((s32) (this->unk1C4.dim.quad[1].y * 100.0f) & 0xFF) | ~0xFF;
                temp_v0_4 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = 0xDAE1CDFF;
                temp_v0_4->words.w0 = 0xFB000000;
            }
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060003F8));
            temp_v0_5 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDE000000;
            temp_v0_5->words.w1 = (u32) &D_06000168;
            func_80B9E5F4(this, globalCtx, &sp8C);
            func_80B9E7D0(&sp8C);
            func_80B9E8D4(this, globalCtx, &sp8C);
            phi_s0 = &spE0;
            if (spD8 == 0) {
                spDC = 0;
            }
            do {
                if (phi_s0->unk4C != 0) {
                    temp_v0_6 = phi_s0->unk50;
                    if ((s32) spDC < (s32) temp_v0_6) {
                        spDC = temp_v0_6;
                    }
                }
                temp_s0_2 = phi_s0 + 0x54;
                phi_s0 = temp_s0_2;
            } while ((u32) temp_s0_2 < (u32) &sp284);
            temp_v0_7 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xE200001C;
            temp_v0_7->words.w1 = 0xC8104DD8;
            phi_s0_2 = &sp8C;
            do {
                if (phi_s0_2->unk4C != 0) {
                    SysMatrix_InsertTranslation(phi_s0_2->unk0, phi_s0_2->unk4, phi_s0_2->unk8, 0);
                    Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
                    SysMatrix_InsertMatrix(phi_s0_2 + 0xC, 1);
                    temp_v0_8 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_8 + 8;
                    temp_v0_8->words.w0 = 0xDA380003;
                    temp_v0_8->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                    temp_v0_9 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_9 + 8;
                    temp_v0_9->words.w1 = 0;
                    temp_v0_9->words.w0 = 0xE7000000;
                    temp_v0_10 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_10 + 8;
                    temp_v0_10->words.w0 = 0xFA000000;
                    temp_v0_10->words.w1 = spDC | ~0xFF;
                    temp_v0_11 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_11 + 8;
                    temp_v0_11->words.w1 = (u32) &D_060004B0;
                    temp_v0_11->words.w0 = 0xDE000000;
                }
                temp_s0_3 = phi_s0_2 + 0x54;
                phi_s0_2 = temp_s0_3;
            } while (temp_s0_3 != &sp284);
            this->unk210 = (u16) (this->unk210 | 1);
        }
    }
}
