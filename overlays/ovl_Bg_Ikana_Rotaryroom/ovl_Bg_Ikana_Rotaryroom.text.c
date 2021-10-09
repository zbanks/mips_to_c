f32 func_800C4188(void *, void *, ? *, ? *, s32, f32 *); /* extern */
void func_80B802E0(BgIkanaRotaryroom *arg0);        /* static */
void func_80B80358(Vec3f *arg0);                    /* static */
void func_80B80440(BgIkanaRotaryroom *arg0, GlobalContext *arg1); /* static */
void func_80B80550(BgIkanaRotaryroom *arg0, GlobalContext *arg1); /* static */
void *func_80B80778(Actor *arg0, void *arg1, s16 *arg2); /* static */
void func_80B80894(Actor *arg0, void *arg1, Actor *, void *); /* static */
void func_80B80C88(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B80F08(BgIkanaRotaryroom *arg0, GlobalContext *arg1, BgIkanaRotaryroom *); /* static */
void func_80B81010(void *arg0, void *arg1);         /* static */
void func_80B81234(void *arg0, void *arg1);         /* static */
void func_80B81570(BgIkanaRotaryroom *arg0, GlobalContext *arg1); /* static */
s32 func_80B816A4(Actor *arg0, s32, Actor *);       /* static */
void func_80B818B4(BgIkanaRotaryroom *arg0);        /* static */
void func_80B818C8(BgIkanaRotaryroom *arg0, GlobalContext *arg1, BgIkanaRotaryroom *); /* static */
void func_80B81978(BgIkanaRotaryroom *arg0);        /* static */
void func_80B8198C(BgIkanaRotaryroom *arg0, GlobalContext *arg1, BgIkanaRotaryroom *); /* static */
void func_80B819DC(void *arg0);                     /* static */
void func_80B819F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B81A64(Actor *arg0);                    /* static */
void func_80B81A80(Actor *arg0, void *arg1);        /* static */
void func_80B81B84(Actor *arg0, s32, Actor *);      /* static */
void func_80B81BA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B81DAC(Actor *arg0);                    /* static */
void func_80B81DC8(Actor *arg0, void *arg1);        /* static */
extern Gfx D_06004710;
extern Gfx D_060048A0;
extern Gfx D_06007360;
extern Gfx D_06007448;
extern void D_06007B68;
static ColliderJntSphElementInit D_80B820E0 = {
    {
        {4, {0, 0, 0}, {0x2000, 0, 0}, 0, 1, 0},
        {0, {{0xF286, 0x1C2, 0}, 0x3C}, 0x64},
    },
    {{4, {0, 0, 0}, {0x2000, 0, 0}, 0, 1, 0}, {0, {{0xD7A, 0x1C2, 0}, 0x3C}, 0x64}},
};
static ColliderJntSphInit D_80B82128 = {{0xA, 0, 9, 0, 0, 0}, 2, &D_80B820E0};
static ColliderJntSphElementInit D_80B82138 = {
    {4, {0, 0, 0}, {0x2000, 0, 0}, 0, 1, 0},
    {0, {{0xF15A, 0x4B0, 0}, 0x3C}, 0x64},
};
static ColliderJntSphInit D_80B8215C = {{0xA, 0, 9, 0, 0, 0}, 1, &D_80B82138};
static ? D_80B8216C;                                /* unable to generate initializer */
static ? D_80B82178;                                /* unable to generate initializer */
static ? D_80B82184;                                /* unable to generate initializer */
static ? D_80B821C4;                                /* unable to generate initializer */
static ? D_80B82200;                                /* unable to generate initializer */
static InitChainEntry D_80B82214;                   /* unable to generate initializer */
static ? D_80B82218;                                /* unable to generate initializer */
static ? D_80B8221C;                                /* unable to generate initializer */

typedef struct BgIkanaRotaryroom {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ ColliderJntSph unk15C;             /* inferred */
    /* 0x017C */ ColliderJntSphElement unk17C;      /* inferred */
    /* 0x01BC */ char pad1BC[0x40];                 /* maybe part of unk17C[2]? */
    /* 0x01FC */ void *unk1FC;                      /* inferred */
    /* 0x0200 */ void (*unk200)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *); /* inferred */
    /* 0x0204 */ Actor *unk204;                     /* inferred */
    /* 0x0208 */ char pad208[0x40];                 /* maybe part of unk204[17]? */
    /* 0x0248 */ s32 unk248;                        /* inferred */
    /* 0x024C */ char pad24C[0x84];                 /* maybe part of unk248[34]? */
    /* 0x02D0 */ s32 unk2D0;                        /* inferred */
    /* 0x02D4 */ char pad2D4[0x10C];                /* maybe part of unk2D0[68]? */
    /* 0x03E0 */ s32 unk3E0;                        /* inferred */
    /* 0x03E4 */ char pad3E4[0x194];                /* maybe part of unk3E0[102]? */
    /* 0x0578 */ ? (*unk578)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *); /* inferred */
    /* 0x057C */ ? (*unk57C)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *); /* inferred */
    /* 0x0580 */ void (*actionFunc)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *);
    /* 0x0584 */ char pad584[0x4];                  /* maybe part of actionFunc[2]? */
} BgIkanaRotaryroom;                                /* size 0x588 */

void func_80B802E0(BgIkanaRotaryroom *arg0) {
    ColliderJntSph *sp20;
    ColliderJntSph *temp_a1;

    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, arg0 + 0xBC);
    Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
    temp_a1 = arg0 + 0x15C;
    sp20 = temp_a1;
    Collider_UpdateSpheres(0, temp_a1);
    if ((arg0->actor.params & 1) == 0) {
        Collider_UpdateSpheres(1, temp_a1);
    }
}

void func_80B80358(Vec3f *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f2_3;

    temp_f0 = arg0->x;
    if (temp_f0 >= 0.0f) {
        phi_f2 = 0.5f;
    } else {
        phi_f2 = -0.5f;
    }
    temp_f12 = arg0->y;
    arg0->x = temp_f0 + phi_f2;
    if (temp_f12 >= 0.0f) {
        phi_f2_2 = 0.5f;
    } else {
        phi_f2_2 = -0.5f;
    }
    temp_f0_2 = arg0->z;
    arg0->y = temp_f12 + phi_f2_2;
    if (temp_f0_2 >= 0.0f) {
        phi_f2_3 = 0.5f;
    } else {
        phi_f2_3 = -0.5f;
    }
    arg0->z = temp_f0_2 + phi_f2_3;
    arg0->x = (f32) (s32) arg0->x;
    arg0->y = (f32) (s32) arg0->y;
    arg0->z = (f32) (s32) arg0->z;
}

void func_80B80440(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    Vec3f sp50;

    SysMatrix_StatePush();
    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, arg0 + 0xBC);
    if (Flags_GetSwitch(arg1, ((s32) arg0->actor.params >> 8) & 0x7F) != 0) {
        SysMatrix_InsertTranslation(D_80B82178.unk0, D_80B82178.unk4, D_80B82178.unk8, 1);
    } else {
        SysMatrix_InsertTranslation(D_80B8216C.unk0, D_80B8216C.unk4, D_80B8216C.unk8, 1);
    }
    SysMatrix_GetStateTranslation(&sp50);
    func_80B80358(&sp50);
    arg0->unk204 = Actor_SpawnAsChildAndCutscene(&arg1->actorCtx, arg1, 0x218, sp50.x, sp50.y, sp50.z, (s16) (s32) arg0->actor.shape.rot.x, (s16) (s32) arg0->actor.shape.rot.y, (s16) (s32) arg0->actor.shape.rot.z, -1, ActorCutscene_GetAdditionalCutscene((s16) arg0->actor.cutscene), (s32) arg0->actor.unk20, NULL);
    SysMatrix_StatePop();
}

void func_80B80550(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    s32 spC8;
    s32 spC4;
    Vec3f spB4;
    MtxF sp68;
    s16 sp64;
    s16 sp62;
    s16 sp60;
    Actor *temp_s2;
    Actor *temp_s2_2;
    Vec3f *temp_s6;
    s16 *temp_a3;
    s16 temp_v0;
    s32 temp_s3;
    void *temp_s1;
    Actor *phi_s2;
    Vec3f *phi_s4;
    void *phi_s0;
    s32 phi_s3;

    temp_v0 = arg0->actor.params;
    spC8 = temp_v0 & 1;
    if (Flags_GetSwitch(arg1, ((s32) temp_v0 >> 1) & 0x7F) != 0) {
        spC4 = 1;
    } else {
        spC4 = 0;
    }
    temp_s2 = arg1->actorCtx.actorList[10].first;
    SysMatrix_StatePush();
    temp_a3 = &sp60;
    sp60 = arg0->actor.home.rot.x + 0x8000;
    sp62 = arg0->actor.home.rot.y;
    sp64 = arg0->actor.home.rot.z;
    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (Vec3s *) temp_a3);
    if (temp_s2 != 0) {
        phi_s2 = temp_s2;
        do {
            temp_s6 = phi_s2 + 0x24;
            if (phi_s2->id == 0x1E) {
                temp_s1 = (spC8 << 5) + &D_80B82184;
                Math_Vec3f_Diff(temp_s6, arg0 + 0x24, &spB4);
                phi_s4 = temp_s1 + 4;
                phi_s0 = temp_s1;
                phi_s3 = 0;
                do {
                    if ((Math3D_DistanceSquared(&spB4, phi_s4) < 62500.0f) && (phi_s0->unk0 != spC4) && (phi_s0->unk1 == 0)) {
                        SysMatrix_StatePush();
                        SysMatrix_InsertTranslation(spB4.x, spB4.y, spB4.z, 1);
                        Matrix_RotateY((s16) (phi_s2->shape.rot.y - arg0->actor.home.rot.y), 1U);
                        SysMatrix_InsertXRotation_s((s16) (phi_s2->shape.rot.x - arg0->actor.home.rot.x), 1);
                        SysMatrix_InsertZRotation_s((s16) (phi_s2->shape.rot.z - arg0->actor.home.rot.z), 1);
                        SysMatrix_GetStateTranslation(temp_s6);
                        func_80B80358(temp_s6);
                        SysMatrix_CopyCurrentState(&sp68);
                        func_8018219C(&sp68, phi_s2 + 0xBC, 0);
                        SysMatrix_StatePop();
                    }
                    temp_s3 = phi_s3 + 0x10;
                    phi_s4 += 0x10;
                    phi_s0 += 0x10;
                    phi_s3 = temp_s3;
                } while (temp_s3 != 0x20);
            }
            temp_s2_2 = phi_s2->next;
            phi_s2 = temp_s2_2;
        } while (temp_s2_2 != 0);
    }
    SysMatrix_StatePop();
}

void *func_80B80778(Actor *arg0, void *arg1, s16 *arg2) {
    Vec3f sp68;
    void *sp58;
    s32 temp_s1;
    s32 temp_s3;
    void *phi_s0;
    s32 phi_s1;

    sp58 = NULL;
    temp_s3 = arg0->params & 1;
    if (*arg2 == 0x1E) {
        SysMatrix_StatePush();
        phi_s0 = (temp_s3 << 5) + &D_80B82184;
        phi_s1 = 0;
loop_2:
        if ((phi_s0->unk1 == 0) && (SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, arg0 + 0xBC), SysMatrix_MultiplyVector3fByState(phi_s0 + 4, &sp68), (Math3D_DistanceSquared(arg2 + 0x24, &sp68) < 62500.0f))) {
            sp58 = phi_s0;
        } else {
            temp_s1 = phi_s1 + 0x10;
            phi_s0 += 0x10;
            phi_s1 = temp_s1;
            if (temp_s1 != 0x20) {
                goto loop_2;
            }
        }
        SysMatrix_StatePop();
    }
    return sp58;
}

void func_80B80894(Actor *arg0, void *arg1) {
    MtxF *sp2C;
    Actor *temp_v0;
    Actor *temp_v0_3;
    Actor *temp_v0_5;
    s16 *temp_s0_2;
    s16 *temp_s0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    void *temp_s0;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_6;
    Actor *phi_v0;
    s32 phi_s1;
    s16 *phi_s0;
    s32 phi_s1_2;
    Actor *phi_v0_2;
    s32 phi_s1_3;
    void *phi_s0_2;
    s32 phi_s1_4;
    Actor *phi_v0_3;
    s32 phi_s1_5;
    void *phi_s0_3;
    s32 phi_s1_6;

    temp_s0 = arg0->unk204;
    SysMatrix_StatePush();
    SysMatrix_InsertZRotation_s((s16) ((s32) arg0->shape.rot.z * -1), 0);
    SysMatrix_InsertXRotation_s((s16) ((s32) arg0->shape.rot.x * -1), 1);
    Matrix_RotateY((s16) ((s32) arg0->shape.rot.y * -1), 1U);
    SysMatrix_InsertTranslation(-arg0->world.pos.x, -arg0->world.pos.y, -arg0->world.pos.z, 1);
    if (temp_s0 != 0) {
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(temp_s0->unk24, temp_s0->unk28, temp_s0->unk2C, 1);
        Matrix_RotateY(temp_s0->unkBE, 1U);
        SysMatrix_InsertXRotation_s(temp_s0->unkBC, 1);
        SysMatrix_InsertZRotation_s(temp_s0->unkC0, 1);
        SysMatrix_CopyCurrentState(arg0 + 0x208);
        SysMatrix_StatePop();
    }
    phi_v0 = arg0;
    phi_s1 = 0;
    phi_s1_2 = 0;
    phi_s1_4 = 0;
    phi_s1_6 = 0;
    do {
        temp_s1 = phi_s1 + 1;
        temp_v0 = phi_v0 + 0x44;
        temp_v0->unk204 = 0;
        phi_v0 = temp_v0;
        phi_s1 = temp_s1;
    } while (temp_s1 < 2);
    temp_s0_2 = arg1->unk1D2C;
    phi_s0 = temp_s0_2;
    if (temp_s0_2 != 0) {
        do {
            if ((func_80B80778(arg0, arg1, phi_s0) != 0) && (phi_s1_2 < 2)) {
                temp_v0_2 = arg0 + (phi_s1_2 * 0x44);
                temp_v0_2->unk248 = phi_s0;
                sp2C = temp_v0_2 + 0x24C;
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(phi_s0->unk24, phi_s0->unk28, phi_s0->unk2C, 1);
                Matrix_RotateY(phi_s0->unkBE, 1U);
                SysMatrix_InsertXRotation_s(phi_s0->unkBC, 1);
                SysMatrix_InsertZRotation_s(phi_s0->unkC0, 1);
                SysMatrix_CopyCurrentState(sp2C);
                SysMatrix_StatePop();
                phi_s1_2 += 1;
            }
            temp_s0_3 = phi_s0->unk12C;
            phi_s0 = temp_s0_3;
        } while (temp_s0_3 != 0);
    }
    phi_v0_2 = arg0;
    phi_s1_3 = 0;
    do {
        temp_s1_2 = phi_s1_3 + 1;
        temp_v0_3 = phi_v0_2 + 0x44;
        temp_v0_3->unk28C = 0;
        phi_v0_2 = temp_v0_3;
        phi_s1_3 = temp_s1_2;
    } while (temp_s1_2 < 4);
    temp_s0_4 = arg1->unk1D08;
    phi_s0_2 = temp_s0_4;
    if (temp_s0_4 != 0) {
        do {
            if ((phi_s0_2->unk0 == 0x21) && (phi_s0_2->unk138 != 0) && (phi_s1_4 < 4)) {
                temp_v0_4 = arg0 + (phi_s1_4 * 0x44);
                temp_v0_4->unk2D0 = phi_s0_2;
                sp2C = temp_v0_4 + 0x2D4;
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(phi_s0_2->unk24, phi_s0_2->unk28, phi_s0_2->unk2C, 1);
                Matrix_RotateY(phi_s0_2->unkBE, 1U);
                SysMatrix_InsertXRotation_s(phi_s0_2->unkBC, 1);
                SysMatrix_InsertZRotation_s(phi_s0_2->unkC0, 1);
                SysMatrix_CopyCurrentState(sp2C);
                SysMatrix_StatePop();
                phi_s1_4 += 1;
            }
            temp_s0_5 = phi_s0_2->unk12C;
            phi_s0_2 = temp_s0_5;
        } while (temp_s0_5 != 0);
    }
    phi_v0_3 = arg0;
    phi_s1_5 = 0;
    do {
        temp_s1_3 = phi_s1_5 + 1;
        temp_v0_5 = phi_v0_3 + 0x50;
        temp_v0_5->unk390 = 0;
        phi_v0_3 = temp_v0_5;
        phi_s1_5 = temp_s1_3;
    } while (temp_s1_3 < 4);
    temp_s0_6 = arg1->unk1CF0;
    phi_s0_3 = temp_s0_6;
    if (temp_s0_6 != 0) {
        do {
            if ((phi_s0_3->unk138 != 0) && (phi_s0_3->unk0 != 0x170) && (phi_s1_6 < 4)) {
                temp_v0_6 = arg0 + (phi_s1_6 * 0x50);
                temp_v0_6->unk3E0 = phi_s0_3;
                temp_v0_6->unk424 = (unaligned s32) phi_s0_3->unkBC;
                temp_v0_6->unk42C = 0.0f;
                temp_v0_6->unk428 = (u16) phi_s0_3->unkC0;
                sp2C = temp_v0_6 + 0x3E4;
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(phi_s0_3->unk24, phi_s0_3->unk28, phi_s0_3->unk2C, 1);
                Matrix_RotateY(phi_s0_3->unkBE, 1U);
                SysMatrix_InsertXRotation_s(phi_s0_3->unkBC, 1);
                SysMatrix_InsertZRotation_s((s16) phi_s0_3->unkC0, 1);
                SysMatrix_CopyCurrentState(sp2C);
                SysMatrix_StatePop();
                phi_s1_6 += 1;
            }
            temp_s0_7 = phi_s0_3->unk12C;
            phi_s0_3 = temp_s0_7;
        } while (temp_s0_7 != 0);
    }
    temp_s0_8 = arg1->unk1CCC;
    if (temp_s0_8->unk138 != 0) {
        arg0->unk560 = (unaligned s32) temp_s0_8->unkBC;
        arg0->unk564 = (u16) temp_s0_8->unkC0;
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(temp_s0_8->unk24, temp_s0_8->unk28, temp_s0_8->unk2C, 1);
        Matrix_RotateY(temp_s0_8->unkBE, 1U);
        SysMatrix_InsertXRotation_s(temp_s0_8->unkBC, 1);
        SysMatrix_InsertZRotation_s((s16) temp_s0_8->unkC0, 1);
        SysMatrix_CopyCurrentState(arg0 + 0x520);
        SysMatrix_StatePop();
    }
    SysMatrix_StatePop();
}

void func_80B80C88(Actor *arg0, GlobalContext *arg1) {
    MtxF sp3C;
    Vec3f *temp_s0;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_3;
    Vec3f *temp_s0_4;
    Vec3f *temp_s0_5;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    void *temp_s1_5;
    Actor *phi_s2;
    s32 phi_s3;
    Actor *phi_s2_2;
    s32 phi_s3_2;
    Actor *phi_s2_3;
    s32 phi_s3_3;

    temp_s1 = arg0->unk204;
    SysMatrix_StatePush();
    SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, arg0 + 0xBC);
    if (temp_s1 != 0) {
        SysMatrix_StatePush();
        SysMatrix_InsertMatrix(arg0 + 0x208, 1);
        temp_s0 = temp_s1 + 0x24;
        SysMatrix_GetStateTranslation(temp_s0);
        func_80B80358(temp_s0);
        SysMatrix_CopyCurrentState(&sp3C);
        func_8018219C(&sp3C, temp_s1 + 0xBC, 0);
        SysMatrix_StatePop();
    }
    phi_s2 = arg0;
    phi_s3 = 0;
    phi_s3_2 = 0;
    phi_s3_3 = 0;
    do {
        temp_s1_2 = phi_s2->unk248;
        if (temp_s1_2 != 0) {
            SysMatrix_StatePush();
            SysMatrix_InsertMatrix(phi_s2 + 0x24C, 1);
            temp_s0_2 = temp_s1_2 + 0x24;
            SysMatrix_GetStateTranslation(temp_s0_2);
            func_80B80358(temp_s0_2);
            SysMatrix_CopyCurrentState(&sp3C);
            func_8018219C(&sp3C, temp_s1_2 + 0xBC, 0);
            SysMatrix_StatePop();
        }
        temp_s3 = phi_s3 + 0x44;
        phi_s2 += 0x44;
        phi_s3 = temp_s3;
    } while (temp_s3 < 0x88);
    phi_s2_2 = arg0;
    do {
        temp_s1_3 = phi_s2_2->unk2D0;
        if (temp_s1_3 != 0) {
            SysMatrix_StatePush();
            SysMatrix_InsertMatrix(phi_s2_2 + 0x2D4, 1);
            temp_s0_3 = temp_s1_3 + 0x24;
            SysMatrix_GetStateTranslation(temp_s0_3);
            func_80B80358(temp_s0_3);
            SysMatrix_CopyCurrentState(&sp3C);
            func_8018219C(&sp3C, temp_s1_3 + 0xBC, 0);
            SysMatrix_StatePop();
        }
        temp_s3_2 = phi_s3_2 + 0x44;
        phi_s2_2 += 0x44;
        phi_s3_2 = temp_s3_2;
    } while (temp_s3_2 < 0x110);
    phi_s2_3 = arg0;
    do {
        temp_s1_4 = phi_s2_3->unk3E0;
        if (temp_s1_4 != 0) {
            SysMatrix_StatePush();
            SysMatrix_InsertMatrix(phi_s2_3 + 0x3E4, 1);
            temp_s0_4 = temp_s1_4 + 0x24;
            SysMatrix_GetStateTranslation(temp_s0_4);
            func_80B80358(temp_s0_4);
            SysMatrix_CopyCurrentState(&sp3C);
            func_8018219C(&sp3C, temp_s1_4 + 0xBC, 0);
            SysMatrix_StatePop();
        }
        temp_s3_3 = phi_s3_3 + 0x50;
        phi_s2_3 += 0x50;
        phi_s3_3 = temp_s3_3;
    } while (temp_s3_3 != 0x140);
    temp_s1_5 = arg1->actorCtx.actorList[2].first;
    if (temp_s1_5 != 0) {
        SysMatrix_StatePush();
        SysMatrix_InsertMatrix(arg0 + 0x520, 1);
        temp_s0_5 = temp_s1_5 + 0x24;
        SysMatrix_GetStateTranslation(temp_s0_5);
        Math_Vec3f_Copy(temp_s1_5 + 8, temp_s0_5);
        func_80B80358(temp_s0_5);
        SysMatrix_CopyCurrentState(&sp3C);
        func_8018219C(&sp3C, temp_s1_5 + 0xBC, 0);
        SysMatrix_StatePop();
        temp_s1_5->freezeTimer = 2;
    }
    SysMatrix_StatePop();
}

s32 func_80B80F08(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    void *sp40;
    Vec3f sp34;
    Vec3f sp28;
    s32 sp24;
    void *temp_v0;

    temp_v0 = arg0->unk204;
    sp24 = 0;
    if (temp_v0 != 0) {
        sp40 = temp_v0;
        SysMatrix_StatePush();
        SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, arg0 + 0xBC);
        SysMatrix_InsertTranslation(D_80B82178.unk0, D_80B82178.unk4, D_80B82178.unk8, 1);
        SysMatrix_GetStateTranslation(&sp34);
        SysMatrix_SetStateRotationAndTranslation(temp_v0->world.pos.x, temp_v0->world.pos.y + temp_v0->unk170, temp_v0->world.pos.z, temp_v0 + 0xBC);
        SysMatrix_GetStateTranslation(&sp28);
        SysMatrix_StatePop();
        if (Math3D_DistanceSquared(&sp34, &sp28) < 3.0f) {
            if (Flags_GetSwitch(arg1, ((s32) arg0->actor.params >> 8) & 0x7F) == 0) {
                sp24 = 1;
            }
            Actor_SetSwitchFlag(arg1, ((s32) arg0->actor.params >> 8) & 0x7F);
        }
    }
    return sp24;
}

void func_80B81010(void *arg0, void *arg1) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    ? sp7C;
    ? sp78;
    f32 *temp_t8;
    f32 temp_f0;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s4;
    s32 temp_s4_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *phi_s3;
    s32 phi_s2;
    s32 phi_s4;
    s32 phi_s7;
    void *phi_s3_2;
    s32 phi_s4_2;

    phi_s4 = 0;
    phi_s3_2 = arg0;
    phi_s4_2 = 0;
    phi_s7 = 1;
    if (ActorCutscene_GetCurrentIndex() == arg0->unk38) {
        phi_s3 = arg0;
        do {
            temp_s0 = phi_s3->unk3E0;
            temp_s1 = phi_s3 + 0x3E0;
            if (temp_s0 != 0) {
                temp_s2 = Math_ScaledStepToS(temp_s0 + 0xBC, temp_s1->unk44, 0xBB8) & 1;
                temp_s2_2 = temp_s2 & Math_ScaledStepToS(temp_s0 + 0xBE, temp_s1->unk46, 0xBB8);
                temp_s2_3 = temp_s2_2 & Math_ScaledStepToS(temp_s0 + 0xC0, temp_s1->unk48, 0xBB8);
                temp_s1->unk4C = (f32) (temp_s1->unk4C - 2.0f);
                if (temp_s1->unk4C < -30.0f) {
                    temp_s1->unk4C = -30.0f;
                }
                Math_Vec3f_Copy(temp_s0 + 0x108, temp_s0 + 0x24);
                temp_t8 = &sp84;
                temp_s0->unk28 = (f32) (temp_s0->unk28 + temp_s1->unk4C);
                sp84 = temp_s0->unk108;
                sp88 = temp_s0->unk10C + 50.0f;
                sp8C = temp_s0->unk110;
                temp_f0 = func_800C4188(arg1, arg1 + 0x830, &sp7C, &sp78, 0, temp_t8);
                if (temp_s0->unk28 <= temp_f0) {
                    temp_s0->unk28 = temp_f0;
                    phi_s2 = temp_s2_3;
                } else {
                    phi_s2 = 0;
                }
                if (phi_s2 != 0) {
                    temp_s1->unk0 = 0;
                } else {
                    phi_s7 = 0;
                }
            }
            temp_s4 = phi_s4 + 0x50;
            phi_s3 += 0x50;
            phi_s4 = temp_s4;
        } while (temp_s4 != 0x140);
        if (phi_s7 != 0) {
            arg0->unk578 = 0;
            return;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
        return;
    }
    do {
        temp_s0_2 = phi_s3_2->unk3E0;
        if (temp_s0_2 != 0) {
            temp_s0_2->unkBC = (unaligned s32) phi_s3_2->unk424;
            temp_s0_2->unkC0 = (u16) phi_s3_2->unk428;
            Math_Vec3f_Copy(temp_s0_2 + 0x108, temp_s0_2 + 0x24);
        }
        temp_s4_2 = phi_s4_2 + 0x50;
        phi_s3_2 += 0x50;
        phi_s4_2 = temp_s4_2;
    } while (temp_s4_2 != 0x140);
    arg0->unk578 = 0;
}

void func_80B81234(void *arg0, void *arg1) {
    s32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Vec3f sp4C;
    f32 sp44;
    ? sp40;
    ? sp3C;
    Vec3f *sp30;
    Vec3f *sp2C;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f0;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = arg1->unk1CCC;
    sp44 = *(&D_80B82200 + (temp_s1->unk14B * 4)) * 0.5f;
    if (ActorCutscene_GetCurrentIndex() == arg0->unk38) {
        if ((temp_s1 != 0) && (temp_s0 = arg0 + 0x520, ((s32) temp_s1->unk118 > 0))) {
            sp58 = temp_s0->unk4C;
            sp5C = temp_s0->unk50 + 50.0f;
            sp60 = temp_s0->unk54;
            sp64 = Math_ScaledStepToS(temp_s1 + 0xBC, temp_s0->unk40, 0x7D0) & 1;
            sp64 &= Math_ScaledStepToS(temp_s1 + 0xBE, temp_s0->unk42, 0x7D0);
            sp64 &= Math_ScaledStepToS(temp_s1 + 0xC0, temp_s0->unk44, 0x7D0);
            temp_s0->unk48 = (f32) (temp_s0->unk48 - 2.1f);
            temp_s0->unk48 = (f32) (temp_s0->unk48 * 0.98f);
            if (temp_s0->unk48 < -30.0f) {
                temp_s0->unk48 = -30.0f;
            }
            temp_s0->unk50 = (f32) (temp_s0->unk50 + temp_s0->unk48);
            SysMatrix_StatePush();
            Matrix_RotateY(temp_s1->unkBE, 0U);
            SysMatrix_InsertXRotation_s(temp_s1->unkBC, 1);
            SysMatrix_InsertZRotation_s(temp_s1->unkC0, 1);
            SysMatrix_GetStateTranslationAndScaledY(sp44, &sp4C);
            SysMatrix_StatePop();
            temp_f0 = func_800C4188(arg1, arg1 + 0x830, &sp40, &sp3C, 0, &sp58);
            temp_a0 = temp_s1 + 8;
            temp_a1 = temp_s1 + 0x24;
            if (temp_s0->unk50 <= temp_f0) {
                temp_s0->unk50 = temp_f0;
            } else {
                sp64 = 0;
            }
            sp30 = temp_a0;
            sp2C = temp_a1;
            Math_Vec3f_Copy(temp_a0, temp_a1);
            temp_s1->unk24 = (f32) (temp_s0->unk4C - sp4C.x);
            temp_s1->unk28 = (f32) ((temp_s0->unk50 - sp4C.y) + sp44);
            temp_s1->unk2C = (f32) (temp_s0->unk54 - sp4C.z);
            if (sp64 != 0) {
                Math_Vec3f_Copy(temp_a0, temp_a1);
                arg0->unk57C = 0;
                return;
            }
            temp_s1->unk118 = 2U;
            return;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return;
    }
    if (temp_s1 != 0) {
        temp_s1->unkBC = (unaligned s32) arg0->unk560;
        temp_s1->unkC0 = (s16) arg0->unk564;
        Math_Vec3f_Copy(temp_s1 + 8, temp_s1 + 0x24);
    }
    arg0->unk57C = 0;
}

void func_80B814B8(BgIkanaRotaryroom *this, GlobalContext *globalCtx) {
    Actor *temp_s0;

    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    if (ActorCutscene_GetCurrentIndex() == this->actor.cutscene) {
        if ((temp_s0->bgCheckFlags & 0x100) != 0) {
            func_800B8E58(temp_s0, (temp_s0->unkA68->unk92 + 0x6805) & 0xFFFF);
            func_80169EFC(globalCtx);
            func_800B8E58(temp_s0, (temp_s0->unkA68->unk92 + 0x680C) & 0xFFFF);
            globalCtx->unk_18845 = 1;
            play_sound(0x5801U);
            this->actionFunc = NULL;
            return;
        }
        // Duplicate return node #4. Try simplifying control flow for better match
        return;
    }
    this->actionFunc = NULL;
}

void func_80B81570(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    Vec3f sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    ? *temp_s0;
    f32 *temp_a0;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f8;
    ? *phi_s0;

    SysMatrix_StatePush();
    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    phi_s0 = &D_80B821C4;
    do {
        temp_a0 = &sp64;
        sp64 = (f32) phi_s0->unk0;
        sp68 = (f32) phi_s0->unk2;
        sp6C = (f32) phi_s0->unk4;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, &sp70);
        temp_f8 = sp70.x + arg0->actor.world.pos.x;
        sp70.x = temp_f8;
        temp_f18 = sp70.y + arg0->actor.world.pos.y;
        sp70.y = temp_f18;
        temp_f10 = sp70.z + arg0->actor.world.pos.z;
        sp70.z = temp_f10;
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0x170, temp_f8, temp_f18, temp_f10, (s16) 0, (s16) 0, (s16) 0, (s16) 1);
        temp_s0 = phi_s0 + 6;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_80B82200);
    SysMatrix_StatePop();
}

s32 func_80B816A4(Actor *arg0) {
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    phi_v1_4 = 0;
    if (arg0->unk3E0 != 0) {
        phi_v1_4 = 1;
    }
    phi_v1_3 = phi_v1_4;
    if (arg0->unk430 != 0) {
        phi_v1_3 = phi_v1_4 + 1;
    }
    phi_v1_2 = phi_v1_3;
    if (arg0->unk480 != 0) {
        phi_v1_2 = phi_v1_3 + 1;
    }
    phi_v1 = phi_v1_2;
    if (arg0->unk4D0 != 0) {
        phi_v1 = phi_v1_2 + 1;
    }
    return phi_v1;
}

void BgIkanaRotaryroom_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaRotaryroom *this = (BgIkanaRotaryroom *) thisx;
    s32 sp34;
    CollisionHeader **sp30;
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a1;
    CollisionHeader **temp_v0;

    sp34 = this->actor.params & 1;
    Actor_ProcessInitChain(&this->actor, &D_80B82214);
    if (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 1) & 0x7F) != 0) {
        this->actor.shape.rot.x = -0x8000;
    } else {
        this->actor.shape.rot.x = 0;
    }
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    temp_v0 = (sp34 * 4) + &D_80B82218;
    sp30 = temp_v0;
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, *temp_v0);
    temp_a1 = &this->unk15C;
    sp2C = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    if (sp30 == &D_80B82218) {
        Collider_SetJntSph(globalCtx, temp_a1, &this->actor, &D_80B82128, &this->unk17C);
    } else {
        Collider_SetJntSph(globalCtx, temp_a1, &this->actor, &D_80B8215C, &this->unk17C);
    }
    func_80B802E0(this);
    if (sp30 == &D_80B8221C) {
        this->unk1FC = Lib_SegmentedToVirtual(&D_06007B68);
    }
    if (sp30 == &D_80B82218) {
        func_80B80440(this, globalCtx);
    } else {
        func_80B81570(this, globalCtx);
    }
    func_80B80550(this, globalCtx);
    func_80B818B4(this);
}

void BgIkanaRotaryroom_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaRotaryroom *this = (BgIkanaRotaryroom *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroyJntSph(globalCtx, &this->unk15C);
}

void func_80B818B4(BgIkanaRotaryroom *arg0) {
    arg0->unk200 = func_80B818C8;
}

void func_80B818C8(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    s32 sp20;
    s32 temp_a1;
    u8 temp_v0;

    temp_v0 = arg0->unk15C.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        arg0->unk15C.base.acFlags = temp_v0 & 0xFFFD;
        temp_a1 = ((s32) arg0->actor.params >> 1) & 0x7F;
        sp20 = temp_a1;
        arg0 = arg0;
        if (Flags_GetSwitch(arg1, temp_a1) != 0) {
            arg0 = arg0;
            Actor_UnsetSwitchFlag(arg1, temp_a1);
        } else {
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, temp_a1);
        }
        func_80B81978(arg0);
        return;
    }
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, arg0 + 0x15C);
}

void func_80B81978(BgIkanaRotaryroom *arg0) {
    arg0->unk200 = func_80B8198C;
}

void func_80B8198C(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = arg0->unk204;
    if (temp_v0 == 0) {
        func_80B819DC();
        return;
    }
    temp_v1 = temp_v0->unk17C;
    if ((temp_v1 & 1) != 0) {
        temp_v0->unk17C = (u8) (temp_v1 | 8);
        func_80B819DC();
    }
}

void func_80B819DC(void *arg0) {
    arg0->unk200 = func_80B819F0;
}

void func_80B819F0(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        if ((s32) arg0->cutscene >= 0) {
            func_800B7298(arg1, arg0, 7U);
        }
        func_80B81A64(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80B81A64(Actor *arg0) {
    arg0->unk584 = 0x19;
    arg0->unk200 = func_80B81A80;
}

void func_80B81A80(Actor *arg0, void *arg1) {
    s16 sp26;
    Actor *temp_a0;
    Actor *temp_a0_2;
    Actor *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a0_3;
    s32 temp_v1;
    Actor *phi_v0;
    s32 phi_v1;

    temp_a0 = arg0;
    arg0 = arg0;
    arg1 = arg1;
    func_800B9010(temp_a0, 0x2098U);
    temp_a2 = arg0;
    temp_a0_2 = temp_a2;
    temp_a2->unk584 = (s16) (temp_a2->unk584 - 1);
    temp_v0 = temp_a2->unk584;
    if ((s32) temp_v0 <= 0) {
        arg0 = temp_a2;
        func_80B80894(temp_a0_2, arg1, temp_a2, arg1);
        phi_v0 = arg0;
        phi_v1 = 0;
        do {
            temp_v1 = phi_v1 + 0x44;
            phi_v1 = temp_v1;
            if (phi_v0->unk2D0 != 0) {
                phi_v0->unk2D0->unk190 = 3;
            }
            phi_v0 += 0x44;
        } while (temp_v1 != 0x110);
        func_80B81B84(arg0, 0x110, arg0);
        return;
    }
    if (temp_v0 == 0xF) {
        temp_v0_2 = Quake_Add((arg1 + (arg1->unk810 * 4))->unk800, 3U);
        temp_a0_3 = temp_v0_2 << 0x10;
        sp26 = temp_v0_2;
        Quake_SetSpeed((s16) (temp_a0_3 >> 0x10), 0x7B30);
        Quake_SetQuakeValues(sp26, 6, 0, 0x64, (s16) 0);
        Quake_SetCountdown(sp26, 0x16);
    }
}

void func_80B81B84(Actor *arg0) {
    arg0->unk584 = 0x2001;
    arg0->unk200 = func_80B81BA0;
}

void func_80B81BA0(Actor *arg0, GlobalContext *arg1) {
    s32 sp30;
    s16 sp2A;
    Actor *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_v1;
    u8 temp_t4;
    void *temp_v0_3;
    Actor *phi_v0;
    s32 phi_v1;

    sp30 = 0;
    func_800B9010(arg0, 0x2098U);
    temp_v0 = arg0->unk584;
    if ((s32) temp_v0 > 0) {
        arg0->unk584 = (s16) (temp_v0 - 1);
    }
    arg0->shape.rot.x += 0x1F4;
    if ((arg0->unk584 & 7) == 0) {
        temp_v0_2 = Quake_Add((arg1 + (arg1->activeCamera * 4))->unk800, 3U);
        temp_a0 = temp_v0_2 << 0x10;
        sp2A = temp_v0_2;
        Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x7B30);
        Quake_SetQuakeValues(sp2A, (s16) ((s32) (Rand_ZeroOne() * 2.5f) + 3), 0, 0xA, (s16) 0);
        Quake_SetCountdown(sp2A, 0xF);
    }
    if (Flags_GetSwitch(arg1, ((s32) arg0->params >> 1) & 0x7F) != 0) {
        if ((s32) arg0->shape.rot.x < 0) {
            arg0->shape.rot.x = -0x8000;
            sp30 = 1;
        }
    } else if ((s32) arg0->shape.rot.x >= 0) {
        arg0->shape.rot.x = 0;
        sp30 = 1;
    }
    func_80B80C88(arg0, arg1);
    phi_v1 = 0;
    if (sp30 != 0) {
        temp_v0_3 = arg0->unk204;
        temp_a2 = arg1->actorCtx.actorList[2].first;
        if (temp_v0_3 != 0) {
            temp_t4 = temp_v0_3->unk17C & 0xFFF7;
            temp_v0_3->unk17C = temp_t4;
            temp_v0_3->unk17C = (u8) (temp_t4 | 4);
        }
        phi_v0 = arg0;
        do {
            temp_v1 = phi_v1 + 0x44;
            phi_v1 = temp_v1;
            if (phi_v0->unk2D0 != 0) {
                phi_v0->unk2D0->unk190 = 4;
            }
            phi_v0 += 0x44;
        } while (temp_v1 != 0x110);
        arg0->unk568 = 0.0f;
        arg0->unk56C = (f32) temp_a2->world.pos.x;
        arg0->unk570 = (f32) (temp_a2->world.pos.y - *(&D_80B82200 + (temp_a2->unk14B * 4)));
        arg0->unk574 = (f32) temp_a2->world.pos.z;
        if (func_80B816A4(arg0, 0x110, temp_a2) > 0) {
            arg0->unk578 = func_80B81010;
        }
        arg0->unk57C = func_80B81234;
        arg0->unk580 = func_80B814B8;
        func_80B802E0((BgIkanaRotaryroom *) arg0);
        func_80B81DAC(arg0);
    }
}

void func_80B81DAC(Actor *arg0) {
    arg0->unk584 = 0x14;
    arg0->unk200 = func_80B81DC8;
}

void func_80B81DC8(Actor *arg0, void *arg1) {
    s16 sp26;
    Actor *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a0_2;
    s16 phi_v0;

    temp_v0 = arg0->unk584;
    temp_a0 = arg0;
    phi_v0 = temp_v0;
    if ((s32) temp_v0 >= 0xB) {
        arg0 = arg0;
        arg1 = arg1;
        func_800B9010(temp_a0, 0x2098U);
        phi_v0 = arg0->unk584;
    }
    arg0->unk584 = (s16) (phi_v0 - 1);
    temp_v0_2 = arg0->unk584;
    if ((s32) temp_v0_2 <= 0) {
        arg0 = arg0;
        ActorCutscene_Stop((s16) arg0->cutscene);
        func_80B818B4((BgIkanaRotaryroom *) arg0);
        return;
    }
    if (temp_v0_2 == 0x13) {
        temp_v0_3 = Quake_Add((arg1 + (arg1->unk810 * 4))->unk800, 3U);
        temp_a0_2 = temp_v0_3 << 0x10;
        sp26 = temp_v0_3;
        Quake_SetSpeed((s16) (temp_a0_2 >> 0x10), 0x4E20);
        Quake_SetQuakeValues(sp26, 5, 0, 0x28, (s16) 0x3C);
        Quake_SetCountdown(sp26, 0x11);
    }
}

void BgIkanaRotaryroom_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaRotaryroom *this = (BgIkanaRotaryroom *) thisx;
    ? (*temp_v0_3)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *);
    ? (*temp_v0_4)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *);
    ? (*temp_v0_5)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *);
    Actor *temp_v0;
    Actor *temp_v0_2;
    BgIkanaRotaryroom *temp_a0_4;
    BgIkanaRotaryroom *temp_a0_5;
    BgIkanaRotaryroom *temp_a2;
    BgIkanaRotaryroom *temp_a2_2;
    BgIkanaRotaryroom *temp_a2_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void **temp_a0;
    void **temp_a0_2;
    void **temp_a0_3;
    BgIkanaRotaryroom *phi_v0;
    s32 phi_v1;
    BgIkanaRotaryroom *phi_v0_2;
    s32 phi_v1_2;
    BgIkanaRotaryroom *phi_v0_3;
    s32 phi_v1_3;
    BgIkanaRotaryroom *phi_a2;
    BgIkanaRotaryroom *phi_a2_2;

    temp_a2 = this;
    temp_v0 = temp_a2->unk204;
    phi_v1 = 0;
    phi_v1_2 = 0;
    phi_v1_3 = 0;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        temp_a2->unk204 = NULL;
    }
    phi_v0 = temp_a2;
    do {
        temp_v1 = phi_v1 + 0x44;
        temp_a0 = phi_v0 + 0x248;
        phi_v1 = temp_v1;
        if ((phi_v0->unk248 != 0) && ((*temp_a0)->unk138 == 0)) {
            *temp_a0 = NULL;
        }
        phi_v0 += 0x44;
    } while (temp_v1 < 0x88);
    phi_v0_2 = temp_a2;
    do {
        temp_v1_2 = phi_v1_2 + 0x44;
        temp_a0_2 = phi_v0_2 + 0x2D0;
        phi_v1_2 = temp_v1_2;
        if ((phi_v0_2->unk2D0 != 0) && ((*temp_a0_2)->unk138 == 0)) {
            *temp_a0_2 = NULL;
        }
        phi_v0_2 += 0x44;
    } while (temp_v1_2 < 0x110);
    phi_v0_3 = temp_a2;
    do {
        temp_v1_3 = phi_v1_3 + 0x50;
        temp_a0_3 = phi_v0_3 + 0x3E0;
        phi_v1_3 = temp_v1_3;
        if ((phi_v0_3->unk3E0 != 0) && ((*temp_a0_3)->unk138 == 0)) {
            *temp_a0_3 = NULL;
        }
        phi_v0_3 += 0x50;
    } while (temp_v1_3 != 0x140);
    temp_a0_4 = temp_a2;
    this = temp_a2;
    temp_a2_2 = this;
    if (func_80B80F08(temp_a0_4, globalCtx, temp_a2) != 0) {
        temp_v0_2 = temp_a2_2->unk204;
        if (temp_v0_2 != 0) {
            temp_v0_2->unk17E = 1;
        }
    }
    this = temp_a2_2;
    temp_a2_2->unk200(temp_a2_2, globalCtx, temp_a2_2);
    temp_a2_3 = this;
    temp_v0_3 = temp_a2_3->unk578;
    temp_a0_5 = temp_a2_3;
    phi_a2 = temp_a2_3;
    if (temp_v0_3 != 0) {
        this = temp_a2_3;
        temp_v0_3(temp_a0_5, globalCtx, temp_a2_3);
        phi_a2 = this;
    }
    temp_v0_4 = phi_a2->unk57C;
    phi_a2_2 = phi_a2;
    if (temp_v0_4 != 0) {
        this = phi_a2;
        temp_v0_4(phi_a2, globalCtx, phi_a2);
        phi_a2_2 = this;
    }
    temp_v0_5 = phi_a2_2->actionFunc;
    if (temp_v0_5 != 0) {
        temp_v0_5(phi_a2_2, globalCtx, phi_a2_2);
    }
}

void BgIkanaRotaryroom_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaRotaryroom *this = (BgIkanaRotaryroom *) thisx;
    if ((this->actor.params & 1) == 0) {
        func_800BDFC0(globalCtx, &D_060048A0);
        func_800BE03C(globalCtx, &D_06004710);
        return;
    }
    AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) this->unk1FC);
    func_800BDFC0(globalCtx, &D_06007448);
    func_800BE03C(globalCtx, &D_06007360);
}

