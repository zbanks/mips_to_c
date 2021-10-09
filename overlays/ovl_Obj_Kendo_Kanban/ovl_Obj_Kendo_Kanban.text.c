void func_80B65880(ObjKendoKanban *arg0);           /* static */
void func_80B658A4(ObjKendoKanban *arg0, GlobalContext *arg1); /* static */
void func_80B65D54(Actor *arg0);                    /* static */
void func_80B65DA8(ObjKendoKanban *arg0, GlobalContext *arg1); /* static */
s32 func_80B6618C(void *arg0, void *arg1);          /* static */
void func_80B66304(ObjKendoKanban *arg0, GlobalContext *arg1); /* static */
extern ? D_06000180;
static ? D_80B66660;                                /* unable to generate initializer */
static ? D_80B6666C;                                /* unable to generate initializer */
static ? D_80B66678;                                /* unable to generate initializer */
static ? D_80B66684;                                /* unable to generate initializer */
static ? D_80B66690;                                /* unable to generate initializer */
static ? D_80B6669C;                                /* unable to generate initializer */
static ? D_80B666A8;                                /* unable to generate initializer */
static ? D_80B666B4;                                /* unable to generate initializer */
static u32 D_80B666C0 = 0x6002080;
static u32 D_80B666C4 = 0x6002180;
static u32 D_80B666C8 = 0x6002380;
static u32 D_80B666CC = 0x6002280;
static ? D_80B666D0;                                /* unable to generate initializer */
static ? D_80B666DC;                                /* unable to generate initializer */
static ? D_80B666E8;                                /* unable to generate initializer */
static ? D_80B666F4;                                /* unable to generate initializer */
static ? D_80B6670C;                                /* unable to generate initializer */
static ? D_80B66718;                                /* unable to generate initializer */
static ? D_80B66724;                                /* unable to generate initializer */
static ? D_80B66730;                                /* unable to generate initializer */
static ? D_80B6673C;                                /* unable to generate initializer */
static ColliderTrisInit D_80B667B4 = {{0xD, 0, 9, 0, 0x10, 2}, 2, &D_80B6673C};
static ColliderCylinderInit D_80B667C4 = {
    {0xD, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
    {0x21, 0x50, 0, {0, 0, 0}},
};
static DamageTable D_80B667F0 = {
    {
        0,
        0xF0,
        0,
        0,
        0,
        0,
        0xF2,
        0,
        0xF2,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0x10,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static CollisionCheckInfoInit2 D_80B66810 = {8, 0, 0, 0, 0xFE};
static ? D_80B6681C;                                /* unable to generate initializer */
static ? D_80B66828;                                /* unable to generate initializer */

typedef struct ObjKendoKanban {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ ColliderTris unk190;               /* inferred */
    /* 0x01B0 */ ColliderTrisElement unk1B0;        /* inferred */
    /* 0x020C */ char pad20C[0x5C];                 /* maybe part of unk1B0[2]? */
    /* 0x0268 */ void (*actionFunc)(ObjKendoKanban *, GlobalContext *);
    /* 0x026C */ f32 unk26C;                        /* inferred */
    /* 0x0270 */ f32 unk270;                        /* inferred */
    /* 0x0274 */ f32 unk274;                        /* inferred */
    /* 0x0278 */ f32 unk278;                        /* inferred */
    /* 0x027C */ f32 unk27C;                        /* inferred */
    /* 0x0280 */ f32 unk280;                        /* inferred */
    /* 0x0284 */ f32 unk284;                        /* inferred */
    /* 0x0288 */ f32 unk288;                        /* inferred */
    /* 0x028C */ f32 unk28C;                        /* inferred */
    /* 0x0290 */ f32 unk290;                        /* inferred */
    /* 0x0294 */ f32 unk294;                        /* inferred */
    /* 0x0298 */ f32 unk298;                        /* inferred */
    /* 0x029C */ f32 unk29C;                        /* inferred */
    /* 0x02A0 */ f32 unk2A0;                        /* inferred */
    /* 0x02A4 */ f32 unk2A4;                        /* inferred */
    /* 0x02A8 */ f32 unk2A8;                        /* inferred */
    /* 0x02AC */ f32 unk2AC;                        /* inferred */
    /* 0x02B0 */ f32 unk2B0;                        /* inferred */
    /* 0x02B4 */ f32 unk2B4;                        /* inferred */
    /* 0x02B8 */ f32 unk2B8;                        /* inferred */
    /* 0x02BC */ f32 unk2BC;                        /* inferred */
    /* 0x02C0 */ f32 unk2C0;                        /* inferred */
    /* 0x02C4 */ f32 unk2C4;                        /* inferred */
    /* 0x02C8 */ f32 unk2C8;                        /* inferred */
    /* 0x02CC */ f32 unk2CC;                        /* inferred */
    /* 0x02D0 */ f32 unk2D0;                        /* inferred */
    /* 0x02D4 */ f32 unk2D4;                        /* inferred */
    /* 0x02D8 */ f32 unk2D8;                        /* inferred */
    /* 0x02DC */ f32 unk2DC;                        /* inferred */
    /* 0x02E0 */ f32 unk2E0;                        /* inferred */
    /* 0x02E4 */ f32 unk2E4;                        /* inferred */
    /* 0x02E8 */ f32 unk2E8;                        /* inferred */
    /* 0x02EC */ f32 unk2EC;                        /* inferred */
    /* 0x02F0 */ s32 unk2F0;                        /* inferred */
    /* 0x02F4 */ s32 unk2F4;                        /* inferred */
    /* 0x02F8 */ s32 unk2F8;                        /* inferred */
    /* 0x02FC */ s32 unk2FC;                        /* inferred */
    /* 0x0300 */ s16 unk300;                        /* inferred */
    /* 0x0302 */ s16 unk302;                        /* inferred */
    /* 0x0304 */ s16 unk304;                        /* inferred */
    /* 0x0306 */ char pad306[0x2];                  /* maybe part of unk304[2]? */
    /* 0x0308 */ s16 unk308;                        /* inferred */
    /* 0x030A */ s16 unk30A;                        /* inferred */
    /* 0x030C */ u8 unk30C;                         /* inferred */
    /* 0x030D */ char pad30D[0x3];                  /* maybe part of unk30C[4]? */
} ObjKendoKanban;                                   /* size 0x310 */

void ObjKendoKanban_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjKendoKanban *this = (ObjKendoKanban *) thisx;
    ? sp94;
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f sp70;
    ? sp5C;
    ColliderTris *sp4C;
    ColliderCylinder *temp_s0;
    ColliderTris *temp_a1;
    Vec3f *temp_s0_2;
    s32 temp_s4;
    Vec3f *phi_s1;
    Vec3f *phi_s0;
    s32 phi_s4;
    ? *phi_s5;

    Actor_SetScale(&this->actor, 0.1f);
    temp_s0 = &this->unk144;
    Collider_InitCylinder(globalCtx, temp_s0);
    Collider_SetCylinder(globalCtx, temp_s0, &this->actor, &D_80B667C4);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B667F0, &D_80B66810);
    temp_a1 = &this->unk190;
    sp4C = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    Collider_SetTris(globalCtx, temp_a1, &this->actor, &D_80B667B4, &this->unk1B0);
    SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, &this->actor.shape.rot);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    phi_s4 = 0;
    phi_s5 = &D_80B6673C;
    do {
        phi_s1 = phi_s5 + 0x18;
        phi_s0 = &sp70;
loop_2:
        SysMatrix_MultiplyVector3fByState(phi_s1, phi_s0);
        temp_s0_2 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 != &sp94) {
            goto loop_2;
        }
        Collider_SetTrisVertices(sp4C, phi_s4, &sp70, &sp7C, &sp88);
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
        phi_s5 += 0x3C;
    } while (temp_s4 < 2);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    this->unk30C = this->actor.params & 0xF;
    this->actor.gravity = -2.0f;
    this->unk2CC = D_80B6681C.unk0;
    this->unk2D0 = D_80B6681C.unk4;
    this->unk2D4 = D_80B6681C.unk8;
    this->unk2D8 = D_80B6681C.unk0;
    this->unk2DC = D_80B6681C.unk4;
    this->unk2E0 = D_80B6681C.unk8;
    this->unk2E4 = D_80B6681C.unk0;
    this->unk2E8 = D_80B6681C.unk4;
    this->unk2EC = D_80B6681C.unk8;
    this->unk2F0 = D_80B66828.unk0;
    this->unk2F4 = D_80B66828.unk4;
    this->unk302 = 0;
    this->unk304 = 0;
    this->unk2FC = -1;
    this->unk300 = 0;
    this->unk308 = 0;
    this->unk2F8 = D_80B66828.unk8;
    sp5C.unk0 = (f32) D_80B6681C.unk0;
    sp5C.unk4 = (f32) D_80B6681C.unk4;
    sp5C.unk8 = (f32) D_80B6681C.unk8;
    this->unk29C = sp5C.unk0;
    this->unk2A0 = sp5C.unk4;
    this->unk2A4 = sp5C.unk8;
    this->unk26C = sp5C.unk0;
    this->unk270 = sp5C.unk4;
    this->unk274 = sp5C.unk8;
    sp5C.unk0 = (f32) D_80B6681C.unk0;
    sp5C.unk4 = (f32) D_80B6681C.unk4;
    sp5C.unk8 = (f32) D_80B6681C.unk8;
    this->unk2A8 = sp5C.unk0;
    this->unk2AC = sp5C.unk4;
    this->unk2B0 = sp5C.unk8;
    this->unk278 = sp5C.unk0;
    this->unk27C = sp5C.unk4;
    this->unk280 = sp5C.unk8;
    sp5C.unk0 = (f32) D_80B6681C.unk0;
    sp5C.unk4 = (f32) D_80B6681C.unk4;
    sp5C.unk8 = (f32) D_80B6681C.unk8;
    this->unk2B4 = sp5C.unk0;
    this->unk2B8 = sp5C.unk4;
    this->unk2BC = sp5C.unk8;
    this->unk284 = sp5C.unk0;
    this->unk288 = sp5C.unk4;
    this->unk28C = sp5C.unk8;
    sp5C.unk0 = (f32) D_80B6681C.unk0;
    sp5C.unk4 = (f32) D_80B6681C.unk4;
    sp5C.unk8 = (f32) D_80B6681C.unk8;
    this->unk2C0 = sp5C.unk0;
    this->unk2C4 = sp5C.unk4;
    this->unk2C8 = sp5C.unk8;
    this->unk290 = sp5C.unk0;
    this->unk294 = sp5C.unk4;
    this->unk30A = 0;
    this->unk298 = sp5C.unk8;
    if (this->unk30C == 0) {
        func_80B65880(this);
        return;
    }
    func_80B658A4(this, globalCtx);
}

void ObjKendoKanban_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjKendoKanban *this = (ObjKendoKanban *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
    Collider_DestroyTris(globalCtx, &this->unk190);
}

void func_80B65880(ObjKendoKanban *arg0) {
    arg0->actionFunc = func_80B65894;
}

void func_80B65894(ObjKendoKanban *this, GlobalContext *globalCtx) {

}

void func_80B658A4(Actor *arg0, GlobalContext *arg1) {
    s8 temp_v0_2;
    u8 temp_v0;

    temp_v0 = arg0->unk30C;
    if (temp_v0 == 0) {
        temp_v0_2 = arg1->actorCtx.actorList[2].first->unkADA;
        if ((temp_v0_2 == 0) || (temp_v0_2 == 1) || (temp_v0_2 == 0x14)) {
            arg0->unk30C = 5U;
            arg0->unk304 = 0x71C;
            arg0->velocity.x = D_80B6666C.unk0;
            arg0->velocity.y = D_80B6666C.unk4;
            arg0->velocity.z = D_80B6666C.unk8;
            arg0->unk2CC = (s32) D_80B6669C.unk0;
            arg0->unk2D0 = (s32) D_80B6669C.unk4;
            arg0->unk2D4 = (s32) D_80B6669C.unk8;
            Actor_SpawnAsChild(&arg1->actorCtx, arg0, arg1, 0x209, arg0->home.pos.x - 5.0f, arg0->home.pos.y, arg0->home.pos.z, (s16) 0, (s16) 0, (s16) 0, 0xA);
            arg0->unk29C = (s32) D_80B666DC.unk0;
            arg0->unk2A0 = (s32) D_80B666DC.unk4;
            arg0->unk2A4 = (s32) D_80B666DC.unk8;
            arg0->unk2A8 = (s32) D_80B666E8.unk0;
            arg0->unk2AC = (s32) D_80B666E8.unk4;
            arg0->unk2B0 = (s32) D_80B666E8.unk8;
            arg0->unk2B4 = (s32) D_80B66730.unk0;
            arg0->unk2B8 = (s32) D_80B66730.unk4;
            arg0->unk2BC = (s32) D_80B66730.unk8;
            arg0->unk2C0 = (s32) D_80B66724.unk0;
            arg0->unk2C4 = (s32) D_80B66724.unk4;
            arg0->unk2C8 = (s32) D_80B66724.unk8;
        } else {
            arg0->unk30C = 0xCU;
            arg0->unk304 = -0x71C;
            arg0->velocity.x = D_80B66678.unk0;
            arg0->velocity.y = D_80B66678.unk4;
            arg0->velocity.z = D_80B66678.unk8;
            arg0->unk2CC = (s32) D_80B666A8.unk0;
            arg0->unk2D0 = (s32) D_80B666A8.unk4;
            arg0->unk2D4 = (s32) D_80B666A8.unk8;
            Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x209, arg0->home.pos.x, arg0->home.pos.y + 5.0f, arg0->home.pos.z, (s16) 0, (s16) 0, (s16) 0, 3);
            arg0->unk29C = (s32) D_80B666F4.unk0;
            arg0->unk2A0 = (s32) D_80B666F4.unk4;
            arg0->unk2A4 = (s32) D_80B666F4.unk8;
            arg0->unk2A8 = (s32) D_80B6670C.unk0;
            arg0->unk2AC = (s32) D_80B6670C.unk4;
            arg0->unk2B0 = (s32) D_80B6670C.unk8;
            arg0->unk2B4 = (s32) D_80B66730.unk0;
            arg0->unk2B8 = (s32) D_80B66730.unk4;
            arg0->unk2BC = (s32) D_80B66730.unk8;
            arg0->unk2C0 = (s32) D_80B66718.unk0;
            arg0->unk2C4 = (s32) D_80B66718.unk4;
            arg0->unk2C8 = (s32) D_80B66718.unk8;
        }
    } else if (temp_v0 == 0xA) {
        arg0->unk304 = 0x71C;
        arg0->velocity.x = D_80B66660.unk0;
        arg0->velocity.y = D_80B66660.unk4;
        arg0->velocity.z = D_80B66660.unk8;
        arg0->unk2CC = (s32) D_80B66690.unk0;
        arg0->unk2D0 = (s32) D_80B66690.unk4;
        arg0->unk2D4 = (s32) D_80B66690.unk8;
        arg0->unk29C = (s32) D_80B666D0.unk0;
        arg0->unk2A0 = (s32) D_80B666D0.unk4;
        arg0->unk2A4 = (s32) D_80B666D0.unk8;
        arg0->unk2A8 = (s32) D_80B666DC.unk0;
        arg0->unk2AC = (s32) D_80B666DC.unk4;
        arg0->unk2B0 = (s32) D_80B666DC.unk8;
        arg0->unk2B4 = (s32) D_80B66724.unk0;
        arg0->unk2B8 = (s32) D_80B66724.unk4;
        arg0->unk2BC = (s32) D_80B66724.unk8;
        arg0->unk2C0 = (s32) D_80B66718.unk0;
        arg0->unk2C4 = (s32) D_80B66718.unk4;
        arg0->unk2C8 = (s32) D_80B66718.unk8;
    } else if (temp_v0 == 3) {
        arg0->unk304 = 0x71C;
        arg0->velocity.x = D_80B66684.unk0;
        arg0->velocity.y = D_80B66684.unk4;
        arg0->velocity.z = D_80B66684.unk8;
        arg0->unk2CC = (s32) D_80B666B4.unk0;
        arg0->unk2D0 = (s32) D_80B666B4.unk4;
        arg0->unk2D4 = (s32) D_80B666B4.unk8;
        arg0->unk29C = (s32) D_80B666D0.unk0;
        arg0->unk2A0 = (s32) D_80B666D0.unk4;
        arg0->unk2A4 = (s32) D_80B666D0.unk8;
        arg0->unk2A8 = (s32) D_80B666E8.unk0;
        arg0->unk2AC = (s32) D_80B666E8.unk4;
        arg0->unk2B0 = (s32) D_80B666E8.unk8;
        arg0->unk2B4 = (s32) D_80B6670C.unk0;
        arg0->unk2B8 = (s32) D_80B6670C.unk4;
        arg0->unk2BC = (s32) D_80B6670C.unk8;
        arg0->unk2C0 = (s32) D_80B666F4.unk0;
        arg0->unk2C4 = (s32) D_80B666F4.unk4;
        arg0->unk2C8 = (s32) D_80B666F4.unk8;
    }
    arg0->unk30A = 0;
    arg0->unk268 = func_80B65CE0;
}

void func_80B65CE0(ObjKendoKanban *this, GlobalContext *globalCtx) {
    this->actor.velocity.y += this->actor.gravity;
    Actor_ApplyMovement(&this->actor);
    this->unk302 += this->unk304;
    func_80B65DA8(this, globalCtx);
    if (this->actor.world.pos.y < -200.0f) {
        this->actor.world.pos.y = -200.0f;
    }
}

void func_80B65D54(Actor *arg0) {
    arg0->unk268 = func_80B65D68;
}

void func_80B65D68(ObjKendoKanban *this, GlobalContext *globalCtx) {
    Actor *sp1C;

    sp1C = globalCtx->actorCtx.actorList[2].first;
    if (func_80B6618C() == 1) {
        sp1C->unkAC0 = 700.0f;
    }
}

void func_80B65DA8(Actor *arg0, GlobalContext *arg1) {
    ? sp5C;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp38;
    Vec3f *sp30;
    Vec3f *sp2C;
    Vec3f *temp_a3;
    Vec3f *temp_v0_2;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f8;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0;
    u16 temp_v0_4;
    void *temp_t2;
    Actor *phi_v1;
    s32 phi_v0;
    s32 phi_a2;
    s16 phi_v0_2;

    temp_a3 = arg0 + 0x24;
    sp5C.unk0 = (f32) arg0->unk26C;
    sp5C.unk4 = (f32) arg0->unk270;
    sp5C.unk8 = (f32) arg0->unk274;
    sp48.unk0 = temp_a3->x;
    sp48.unk4 = (s32) temp_a3->y;
    sp48.unk8 = (s32) temp_a3->z;
    temp_f8 = sp48 - arg0->unk2D8;
    sp48 = temp_f8;
    sp4C -= arg0->unk2DC;
    temp_f10 = sp50 - arg0->unk2E0;
    sp50 = temp_f10;
    temp_f10_2 = (arg0->unk2F0 * temp_f10) + (arg0->unk2F8 * -temp_f8);
    sp38 = temp_f10_2;
    phi_v1 = arg0;
    phi_v0 = 0;
    phi_a2 = 0;
    if (temp_f10_2 < 0.0f) {
        arg0->unk304 = (s16) (arg0->unk304 + 0x64);
    } else {
        arg0->unk304 = (s16) (arg0->unk304 - 0x64);
    }
    do {
        if (phi_v1->unk270 < sp60) {
            sp5C.unk0 = (f32) phi_v1->unk26C;
            sp5C.unk4 = (f32) phi_v1->unk270;
            sp5C.unk8 = (f32) phi_v1->unk274;
            phi_a2 = phi_v0;
        }
        temp_v0 = phi_v0 + 1;
        phi_v1 += 0xC;
        phi_v0 = temp_v0;
    } while (temp_v0 != 4);
    if (phi_a2 != arg0->unk2FC) {
        arg0->unk300 = 1;
        arg0->unk2FC = phi_a2;
        temp_t2 = arg0 + (phi_a2 * 0xC);
        temp_v0_2 = arg0 + 0x2E4;
        temp_v0_2->x = temp_t2->unk29C;
        temp_v0_2->y = temp_t2->unk2A0;
        temp_v0_2->z = temp_t2->unk2A4;
        sp30 = temp_a3;
        sp2C = temp_v0_2;
        SysMatrix_StatePush();
        SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, arg0 + 0xBC);
        Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
        SysMatrix_MultiplyVector3fByState(sp2C, sp30);
        sp30->x = sp5C.unk0;
        sp30->y = sp5C.unk4;
        sp30->z = sp5C.unk8;
        arg0->prevPos.x = sp30->x;
        arg0->prevPos.y = sp30->y;
        arg0->prevPos.z = sp30->z;
        SysMatrix_StatePop();
    }
    Actor_UpdateBgCheckInfo(arg1, arg0, 0.0f, 0.0f, 0.0f, 4U);
    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->velocity.x *= 0.8f;
        arg0->velocity.z *= 0.8f;
    }
    if (arg0->unk300 == 1) {
        temp_v1 = arg0->unk308;
        if ((s32) temp_v1 >= 7) {
            temp_v1_2 = arg0->unk302;
            temp_v0_3 = temp_v1_2 & 0x3FFF;
            phi_v0_2 = temp_v0_3;
            if ((s32) temp_v0_3 >= 0x2000) {
                phi_v0_2 = (s16) (temp_v0_3 - 0x4000);
            }
            arg0->unk302 = (s16) (temp_v1_2 - phi_v0_2);
            arg0->unk304 = 0;
            func_80B65D54(arg0);
            return;
        }
        temp_v0_4 = arg0->bgCheckFlags;
        if ((temp_v0_4 & 2) != 0) {
            Audio_PlayActorSound2(arg0, 0x28B4U);
            arg0->unk300 = 0;
            arg0->velocity.y *= 0.5f;
            return;
        }
        if ((temp_v0_4 & 1) != 0) {
            arg0->unk308 = (s16) (temp_v1 + 1);
            arg0->unk300 = 0;
            arg0->velocity.x *= 0.3f;
            arg0->velocity.z *= 0.3f;
            Audio_PlayActorSound2(arg0, 0x28B4U);
            if (sp38 > 0.0f) {
                temp_v0_5 = arg0->unk304;
                if ((s32) temp_v0_5 > 0) {
                    arg0->unk304 = (s16) (s32) ((f32) temp_v0_5 * 1.2f);
                    return;
                }
                arg0->unk304 = (s16) (s32) ((f32) temp_v0_5 * -0.6f);
                return;
            }
            temp_v0_6 = arg0->unk304;
            if ((s32) temp_v0_6 < 0) {
                arg0->unk304 = (s16) (s32) ((f32) temp_v0_6 * 1.2f);
                return;
            }
            arg0->unk304 = (s16) (s32) ((f32) temp_v0_6 * -0.6f);
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #25. Try simplifying control flow for better match
    }
}

s32 func_80B6618C(void *arg0, void *arg1) {
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_a2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;
    s32 phi_a2;
    void *phi_a3;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;
    s32 phi_v1_2;

    temp_v0 = arg1->unk1CCC;
    temp_f2 = temp_v0->unk2C;
    temp_f14 = temp_v0->unk24;
    phi_a2 = 0;
    phi_a3 = arg0;
    phi_v1 = 0;
loop_1:
    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_v1_2 = phi_v1;
    if (phi_a2 != 3) {
        phi_v0 = phi_a2 + 1;
    }
    temp_a1 = arg0 + (phi_v0 * 0xC);
    if (((phi_a3->unk26C - temp_f14) * (temp_a1->unk274 - temp_f2)) < ((phi_a3->unk274 - temp_f2) * (temp_a1->unk26C - temp_f14))) {
        if (phi_v1 == 0) {
            phi_v1_2 = 1;
            goto block_12;
        }
        if (phi_v1 != 1) {
            return 0;
        }
        goto block_12;
    }
    if (phi_v1 == 0) {
        phi_v1_2 = -1;
        goto block_12;
    }
    if (phi_v1 != -1) {
        return 0;
    }
block_12:
    phi_v1 = phi_v1_2;
    if (phi_a2 != 2) {
        phi_v0_2 = phi_a2 + 2;
    }
    temp_a2 = phi_a2 + 2;
    temp_a1_2 = arg0 + (phi_v0_2 * 0xC);
    phi_a2 = temp_a2;
    if (((phi_a3->unk278 - temp_f14) * (temp_a1_2->unk274 - temp_f2)) < ((phi_a3->unk280 - temp_f2) * (temp_a1_2->unk26C - temp_f14))) {
        if (phi_v1_2 == 0) {
            phi_v1 = 1;
            goto block_23;
        }
        if (phi_v1_2 != 1) {
            return 0;
        }
        goto block_23;
    }
    if (phi_v1_2 == 0) {
        phi_v1 = -1;
        goto block_23;
    }
    if (phi_v1_2 != -1) {
        return 0;
    }
block_23:
    phi_a3 += 0x18;
    if (temp_a2 == 4) {
        return 1;
    }
    goto loop_1;
}

void func_80B66304(ObjKendoKanban *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    u8 temp_v0_2;
    void (*temp_v0)(ObjKendoKanban *, GlobalContext *);

    temp_v0 = arg0->actionFunc;
    if ((func_80B65CE0 != temp_v0) && (func_80B65D68 != temp_v0)) {
        temp_v0_2 = arg0->unk190.base.acFlags;
        if ((temp_v0_2 & 2) != 0) {
            arg0->unk190.base.acFlags = temp_v0_2 & 0xFFFD;
            func_80B658A4(arg0, arg1);
        }
        temp_a1 = &arg0->unk144;
        sp20 = temp_a1;
        Collider_UpdateCylinder(&arg0->actor, temp_a1);
        arg0->unk144.dim.pos.z -= (s32) (20.0f * Math_CosS(arg0->actor.shape.rot.y));
        arg0->unk144.dim.pos.x -= (s32) (20.0f * Math_SinS(arg0->actor.shape.rot.y));
        if (func_80B65894 == arg0->actionFunc) {
            CollisionCheck_SetAC(arg1, &arg1->colChkCtx, &arg0->unk190.base);
        }
        CollisionCheck_SetOC(arg1, &arg1->colChkCtx, &sp20->base);
    }
}

void ObjKendoKanban_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjKendoKanban *this = (ObjKendoKanban *) thisx;
    this->actionFunc(this, globalCtx);
    func_80B66304(this, globalCtx);
}

void ObjKendoKanban_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjKendoKanban *this = (ObjKendoKanban *) thisx;
    Gfx *temp_s1;
    Gfx *temp_s1_2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_s0_2;
    u8 phi_a0;
    u8 phi_a0_2;
    Vec3f *phi_s1;
    Vec3f *phi_s2;
    s32 phi_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if (this->unk30C == 0) {
        temp_s1 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_s1 + 8;
        temp_s1->words.w0 = 0xDA380003;
        temp_s1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w1 = (u32) &D_06000180;
        temp_v1->words.w0 = 0xDE000000;
    } else {
        SysMatrix_InsertRotationAroundUnitVector_s(this->unk302, (Vec3f *) &this->unk2F0, 1);
        SysMatrix_InsertTranslation(-this->unk2E4, -this->unk2E8, -this->unk2EC, 1);
        temp_s1_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_s1_2 + 8;
        temp_s1_2->words.w0 = 0xDA380003;
        temp_s1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        if ((this->unk30C & 1) != 0) {
            temp_v1_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_2 + 8;
            temp_v1_2->words.w0 = 0xDE000000;
            temp_v1_2->words.w1 = D_80B666C0;
        }
        phi_a0 = this->unk30C;
        if ((this->unk30C & 2) != 0) {
            temp_v1_3 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_3 + 8;
            temp_v1_3->words.w0 = 0xDE000000;
            temp_v1_3->words.w1 = D_80B666C4;
            phi_a0 = this->unk30C;
        }
        phi_a0_2 = phi_a0;
        if ((phi_a0 & 4) != 0) {
            temp_v1_4 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_4 + 8;
            temp_v1_4->words.w0 = 0xDE000000;
            temp_v1_4->words.w1 = D_80B666C8;
            phi_a0_2 = this->unk30C;
        }
        if ((phi_a0_2 & 8) != 0) {
            temp_v1_5 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1_5 + 8;
            temp_v1_5->words.w0 = 0xDE000000;
            temp_v1_5->words.w1 = D_80B666CC;
        }
    }
    phi_s1 = (Vec3f *) &this->unk29C;
    phi_s2 = (Vec3f *) &this->unk26C;
    phi_s0 = 0;
    do {
        SysMatrix_MultiplyVector3fByState(phi_s1, phi_s2);
        temp_s0_2 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s2 += 0xC;
        phi_s0 = temp_s0_2;
    } while (temp_s0_2 != 0x30);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &this->unk2CC, (Vec3f *) &this->unk2D8);
}

