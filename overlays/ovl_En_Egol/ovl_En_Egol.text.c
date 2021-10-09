? func_800B31BC(GlobalContext *, Vec3f *, ?, ?, s32, s32); /* extern */
? func_800BC848(Actor *, GlobalContext *, s16, s16, ?); /* extern */
? func_80169940(GlobalContext *, s16, s32);         /* extern */
void func_80A7C990(Actor *arg0, s32 arg1);          /* static */
void func_80A7CA18(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3); /* static */
void func_80A7CBC4(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7); /* static */
void func_80A7CD08(Actor *arg0);                    /* static */
void func_80A7D140(EnEgol *arg0);                   /* static */
void func_80A7D168(EnEgol *arg0, GlobalContext *arg1); /* static */
void func_80A7D1E4(Actor *arg0);                    /* static */
void func_80A7D240(void *arg0, ? arg1);             /* static */
void func_80A7D27C(Actor *arg0, Actor *, Actor *, GlobalContext *); /* static */
void func_80A7D2C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A7D710(Actor *arg0);                    /* static */
void func_80A7D780(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A7DAAC(Actor *arg0);                    /* static */
void func_80A7DAF0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A7E2E8(Actor *arg0, Actor *);           /* static */
void func_80A7E344(Actor *arg0);                    /* static */
void func_80A7E478(Actor *arg0);                    /* static */
void func_80A7E4B4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A7E7EC(EnEgol *arg0);                   /* static */
void func_80A7E820(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A7E924(Actor *arg0);                    /* static */
void func_80A7E970(void *arg0, ? arg1);             /* static */
void func_80A7E9D0(Actor *arg0);                    /* static */
void func_80A7EA28(void *arg0, ? arg1);             /* static */
void func_80A7EA88(void *arg0);                     /* static */
void func_80A7EAD8(void *arg0, ? arg1);             /* static */
void func_80A7EB14(void *arg0);                     /* static */
void func_80A7EB54(void *arg0, ? arg1);             /* static */
void func_80A7EB90(Actor *arg0);                    /* static */
void func_80A7EBDC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A7EC84(Actor *arg0, ? arg1);            /* static */
void func_80A7ED14(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A7EFB8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A7F8E8(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80A7FAFC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80A80508(Actor *arg0, Vec3f *arg1, Vec3s *arg2, s16 *arg3, f32 arg4, s32 arg5, s32); /* static */
void func_80A80750(EnEgol *arg0, GlobalContext *arg1); /* static */
void func_80A80904(EnEgol *arg0, GlobalContext *arg1); /* static */
extern ? D_04023428;
extern ? D_06000040;
extern ? D_06001170;
extern ? D_060013B0;
extern ? D_06001918;
extern ? D_060041F0;
extern void D_060094E4;
extern FlexSkeletonHeader D_06009664;
extern AnimationHeader D_0600EE4C;
static ColliderJntSphElementInit D_80A80C40 = {
    {2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0xE, {{0, 0, 0}, 0}, 1},
};
static ColliderJntSphElementInit D_80A80C64 = {
    {
        {2, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {6, {{0, 0, 0}, 0}, 1},
    },
    {
        {2, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {9, {{0, 0, 0}, 0}, 1},
    },
    {{2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1}, {3, {{0, 0, 0}, 0}, 1}},
    {{2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {4, {{0, 0, 0}, 0}, 1}},
    {{2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0}, {7, {{0, 0, 0}, 0}, 1}},
    {
        {2, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0x17, {{0, 0, 0}, 0}, 1},
    },
};
static ColliderJntSphInit D_80A80D3C = {{9, 0x11, 9, 0x39, 0x10, 0}, 6, &D_80A80C64};
static ColliderJntSphInit D_80A80D4C = {{0xA, 0x11, 9, 0x39, 0x10, 0}, 1, &D_80A80C40};
static ColliderQuadInit D_80A80D5C = {
    {0xA, 0x11, 0, 0, 0, 3},
    {0, {0xF7CFFFFF, 7, 0x10}, {0, 0, 0}, 0x81, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static DamageTable D_80A80DAC = {
    {
        0xF0,
        0xF0,
        0,
        0xE2,
        0xE1,
        0xE1,
        0,
        0xE1,
        0xE1,
        0xF0,
        0xF0,
        0xE2,
        0xE2,
        0x42,
        0xE1,
        0xE1,
        0xE1,
        0xE2,
        0xF0,
        0,
        0,
        0xF0,
        0xE1,
        0xE1,
        0xF0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ? D_80A80DCC;                                /* unable to generate initializer */
static ? D_80A80DD8;                                /* unable to generate initializer */
static ? D_80A80DE4;                                /* unable to generate initializer */
static ? D_80A80DEA;                                /* unable to generate initializer */
static ? D_80A80E0C;                                /* unable to generate initializer */
static ? D_80A80E48;                                /* unable to generate initializer */
static ? D_80A80E58;                                /* unable to generate initializer */
static ? D_80A80E60;                                /* unable to generate initializer */
static ? D_80A80E6C;                                /* unable to generate initializer */
static ? D_80A80E78;                                /* unable to generate initializer */
static s32 D_80A80EB4 = 0x3CA3D70A;                 /* const */

typedef struct ActorContext {
    /* 0x0000 */ Vec3f unk0;                        /* inferred */
    /* 0x0002 */ u8 unk2;                           /* overlap */
    /* 0x0003 */ u8 unk3;
    /* 0x0004 */ s8 unk4;
    /* 0x0005 */ u8 unk5;
    /* 0x0006 */ char pad6[0x5];                    /* maybe part of unk5[6]? */
    /* 0x000B */ s8 unkB;
    /* 0x000C */ s16 unkC;
    /* 0x000E */ u8 totalLoadedActors;
    /* 0x000F */ u8 undrawnActorCount;
    /* 0x0010 */ ActorListEntry actorList[12];
    /* 0x00A0 */ Actor *undrawnActors[32];
    /* 0x0120 */ TargetContext targetContext;
    /* 0x01B8 */ u32 switchFlags[4];
    /* 0x01C8 */ u32 chestFlags;
    /* 0x01CC */ u32 clearedRooms;
    /* 0x01D0 */ u32 clearedRoomsTemp;
    /* 0x01D4 */ u32 collectibleFlags[4];
    /* 0x01E4 */ TitleCardContext titleCtxt;
    /* 0x01F4 */ u8 unk1F4;
    /* 0x01F5 */ u8 unk1F5;
    /* 0x01F6 */ char pad1F6[0x2];                  /* maybe part of unk1F5[3]? */
    /* 0x01F8 */ f32 unk1F8;
    /* 0x01FC */ Vec3f unk1FC;
    /* 0x0208 */ char pad208[0x48];                 /* maybe part of unk1FC[7]? */
    /* 0x0250 */ void *unk250;
    /* 0x0254 */ u32 unk254[5];
    /* 0x0268 */ u8 unk268;
    /* 0x0269 */ char pad269[0xF];                  /* maybe part of unk268[16]? */
    /* 0x0278 */ u16 unk278;
    /* 0x027A */ char pad27A[0xA];                  /* maybe part of unk278[6]? */
} ActorContext;                                     /* size 0x284 */

typedef struct EnEgol {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x8A];                 /* maybe part of unk188[24]? */
    /* 0x0218 */ Vec3s unk218;                      /* inferred */
    /* 0x021E */ char pad21E[0x8A];                 /* maybe part of unk218[24]? */
    /* 0x02A8 */ void (*actionFunc)(EnEgol *, GlobalContext *);
    /* 0x02AC */ Path *unk2AC;                      /* inferred */
    /* 0x02B0 */ char pad2B0[0x2];
    /* 0x02B2 */ s16 unk2B2;                        /* inferred */
    /* 0x02B4 */ s16 unk2B4;                        /* inferred */
    /* 0x02B6 */ s16 unk2B6;                        /* inferred */
    /* 0x02B8 */ char pad2B8[0x2];                  /* maybe part of unk2B6[2]? */
    /* 0x02BA */ s16 unk2BA;                        /* inferred */
    /* 0x02BC */ s16 unk2BC;                        /* inferred */
    /* 0x02BE */ char pad2BE[0x2];                  /* maybe part of unk2BC[2]? */
    /* 0x02C0 */ Vec3f unk2C0;                      /* inferred */
    /* 0x02CC */ char pad2CC[0x86];
    /* 0x0352 */ s16 unk352;                        /* inferred */
    /* 0x0354 */ s32 unk354;                        /* inferred */
    /* 0x0358 */ u8 unk358;                         /* inferred */
    /* 0x0359 */ char pad359[0x3];                  /* maybe part of unk358[4]? */
    /* 0x035C */ f32 unk35C;                        /* inferred */
    /* 0x0360 */ f32 unk360;                        /* inferred */
    /* 0x0364 */ f32 unk364;                        /* inferred */
    /* 0x0368 */ char pad368[0x4];                  /* maybe part of unk364[2]? */
    /* 0x036C */ f32 unk36C;                        /* inferred */
    /* 0x0370 */ f32 unk370;                        /* inferred */
    /* 0x0374 */ s16 unk374;                        /* inferred */
    /* 0x0376 */ s16 unk376;                        /* inferred */
    /* 0x0378 */ s16 unk378;                        /* inferred */
    /* 0x037A */ char pad37A[0x6];                  /* maybe part of unk378[4]? */
    /* 0x0380 */ s32 unk380;                        /* inferred */
    /* 0x0384 */ s16 unk384;                        /* inferred */
    /* 0x0386 */ char pad386[0x2];                  /* maybe part of unk384[2]? */
    /* 0x0388 */ s32 unk388;                        /* inferred */
    /* 0x038C */ s32 unk38C;                        /* inferred */
    /* 0x0390 */ char pad390[0xC];                  /* maybe part of unk38C[4]? */
    /* 0x039C */ Vec3f unk39C;                      /* inferred */
    /* 0x03A8 */ Vec3f unk3A8;                      /* inferred */
    /* 0x03B4 */ Vec3f unk3B4;                      /* inferred */
    /* 0x03C0 */ Vec3f unk3C0;                      /* inferred */
    /* 0x03CC */ char pad3CC[0x48];                 /* maybe part of unk3C0[7]? */
    /* 0x0414 */ s16 unk414;                        /* inferred */
    /* 0x0416 */ s16 unk416;                        /* inferred */
    /* 0x0418 */ char pad418[0x2];                  /* maybe part of unk416[2]? */
    /* 0x041A */ s16 unk41A;                        /* inferred */
    /* 0x041C */ s16 unk41C;                        /* inferred */
    /* 0x041E */ char pad41E[0xE];                  /* maybe part of unk41C[8]? */
    /* 0x042C */ s16 unk42C;                        /* inferred */
    /* 0x042E */ char pad42E[0x2];                  /* maybe part of unk42C[2]? */
    /* 0x0430 */ u32 unk430;                        /* inferred */
    /* 0x0434 */ char pad434[0x1770];               /* maybe part of unk430[1501]? */
    /* 0x1BA4 */ ColliderJntSph unk1BA4;            /* inferred */
    /* 0x1BC4 */ ColliderJntSphElement unk1BC4;     /* inferred */
    /* 0x1C04 */ char pad1C04[0x140];               /* maybe part of unk1BC4[6]? */
    /* 0x1D44 */ ColliderJntSph unk1D44;            /* inferred */
    /* 0x1D64 */ ColliderJntSphElement unk1D64;     /* inferred */
    /* 0x1DA4 */ ColliderQuad unk1DA4;              /* inferred */
    /* 0x1E24 */ char pad1E24[0x4C];
} EnEgol;                                           /* size 0x1E70 */

void func_80A7C990(Actor *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->unk354 = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80A80E0C + (arg1 * 4)));
    temp_v1 = arg0->unk354;
    arg0->unk35C = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80A80E0C + (temp_v1 * 4)), 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_80A80E48 + temp_v1), 0.0f);
}

void func_80A7CA18(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3) {
    Vec3f sp4C;
    void *sp48;
    SkelAnime *sp3C;
    SkelAnime *temp_a0;
    s32 temp_v0;
    void *temp_a2;
    s16 phi_v1;

    temp_a0 = arg0 + 0x144;
    sp3C = temp_a0;
    if ((func_801378B8(temp_a0, arg2) != 0) || (func_801378B8(temp_a0, arg3) != 0)) {
        temp_a2 = arg1->actorCtx.actorList[2].first;
        sp48 = temp_a2;
        Audio_PlayActorSound2(arg0, 0x3A06U);
        temp_v0 = 4 - (s32) (fabsf(temp_a2->world.pos.y - arg0->world.pos.y) * 0.02f);
        phi_v1 = (s16) temp_v0;
        if (temp_v0 >= 5) {
            phi_v1 = 4;
        } else if (temp_v0 <= 0) {
            phi_v1 = 1;
        }
        if (temp_a2->unkA74 != 0x1000000) {
            func_800BC848(arg0, arg1, phi_v1, 2);
        }
        if (func_801378B8(sp3C, arg2) != 0) {
            Math_Vec3f_Copy(&sp4C, arg0 + 0x3D8);
            sp4C.y = arg0->floorHeight;
            func_800BBDAC(arg1, arg0, &sp4C, 0.0f, 0xA, 6.0f, (s16) 0x32, (s16) 0x1E, (u8) 1);
            return;
        }
        Math_Vec3f_Copy(&sp4C, arg0 + 0x3E4);
        sp4C.y = arg0->floorHeight;
        func_800BBDAC(arg1, arg0, &sp4C, 0.0f, 0xA, 6.0f, (s16) 0x32, (s16) 0x1E, (u8) 1);
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_80A7CBC4(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg1->actorCtx.actorList[6].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_2:
        if (phi_v0->id != 0x19F) {
            goto block_10;
        }
        if (((s32) phi_v0->colChkInfo.health > 0) && ((temp_f12 = phi_v0->world.pos.x, temp_f18 = phi_v0->world.pos.z, temp_f2 = arg2 - temp_f12, temp_f14 = phi_v0->world.pos.y, temp_f16 = arg4 - temp_f18, temp_f20 = arg5 - temp_f12, temp_f26 = arg3 - temp_f14, temp_f28 = arg6 - temp_f14, temp_f22 = arg7 - temp_f18, (sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16)) < 40.0f)) || (sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22)) < 40.0f)) && ((sqrtf(temp_f26 * temp_f26) < 40.0f) || (sqrtf(temp_f28 * temp_f28) < 40.0f))) {
            phi_v0->colChkInfo.health = 0;
            Audio_PlayActorSound2(arg0, 0x2810U);
            return;
        }
block_10:
        temp_v0_2 = phi_v0->next;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            // Duplicate return node #11. Try simplifying control flow for better match
            return;
        }
        goto loop_2;
    }
}

void func_80A7CD08(Actor *arg0) {
    Path *temp_a0;
    s16 temp_a1;
    void *temp_a2;

    if (arg0->unk352 != -1) {
        temp_a0 = arg0->unk2AC;
        temp_a2 = arg0 + 0x408;
        if (temp_a0 != 0) {
            temp_a1 = arg0->unk2B0;
            arg0 = arg0;
            if (func_8013D68C(temp_a0, temp_a1, temp_a2) == 0) {
                Actor_MarkForDeath(arg0);
            }
        }
    }
}

void EnEgol_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEgol *this = (EnEgol *) thisx;
    s16 temp_f6;
    s16 temp_t0;

    this->actor.gravity = -2.0f;
    Actor_SetScale(&this->actor, 0.015f);
    this->actor.colChkInfo.damageTable = &D_80A80DAC;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 60.0f);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.hintId = 0x4A;
    this->actor.colChkInfo.health = 8;
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06009664, &D_0600EE4C, &this->unk188, &this->unk218, 0x18);
    Collider_InitAndSetJntSph(globalCtx, &this->unk1BA4, &this->actor, &D_80A80D3C, &this->unk1BC4);
    Collider_InitAndSetJntSph(globalCtx, &this->unk1D44, &this->actor, &D_80A80D4C, &this->unk1D64);
    Collider_InitAndSetQuad(globalCtx, &this->unk1DA4, &this->actor, &D_80A80D5C);
    this->unk352 = this->actor.params & 0x3F;
    if (this->unk352 == 0x3F) {
        this->unk352 = -1;
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_f6 = this->actor.world.rot.x;
    this->actor.world.rot.x = 0;
    this->unk360 = (f32) temp_f6 * 20.0f;
    if (this->unk360 < 0.0f) {
        this->unk360 = 200.0f;
    }
    temp_t0 = this->actor.world.rot.z;
    this->actor.world.rot.z = 0;
    this->unk364 = (f32) temp_t0 * 20.0f;
    if (this->unk364 < 0.0f) {
        this->unk364 = 200.0f;
    }
    this->unk2AC = func_8013D648(globalCtx, this->unk352, 0x3F);
    this->unk1D44.elements->dim.modelSphere.radius = 0x1A;
    this->unk1D44.elements->dim.scale = 1.0f;
    this->unk1D44.elements->dim.modelSphere.center.x = 0x1F4;
    this->unk1D44.elements->dim.modelSphere.center.y = 0;
    this->unk1D44.elements->dim.modelSphere.center.z = 0;
    this->unk1BA4.elements->dim.modelSphere.radius = 0x14;
    this->unk1BA4.elements->dim.scale = 1.0f;
    this->unk1BA4.elements->dim.modelSphere.center.x = 0x708;
    this->unk1BA4.elements->dim.modelSphere.center.y = 0x64;
    this->unk1BA4.elements->dim.modelSphere.center.z = 0;
    this->unk1BA4.elements->unk6E = 0x14;
    this->unk1BA4.elements->unk78 = 1.0f;
    this->unk1BA4.elements->unk68 = 0x708;
    this->unk1BA4.elements->unk6A = 0x64;
    this->unk1BA4.elements->unk6C = 0;
    this->unk1BA4.elements->unkAE = 0x23;
    this->unk1BA4.elements->unkB8 = 1.0f;
    this->unk1BA4.elements->unkA8 = 0x3E8;
    this->unk1BA4.elements->unkAA = -0x1F4;
    this->unk1BA4.elements->unkAC = 0;
    this->unk1BA4.elements->unkEE = 0x19;
    this->unk1BA4.elements->unkF8 = 1.0f;
    this->unk1BA4.elements->unkE8 = 0xC8;
    this->unk1BA4.elements->unkEA = 0xC8;
    this->unk1BA4.elements->unkEC = 0;
    this->unk1BA4.elements->unk12E = 0x19;
    this->unk1BA4.elements->unk138 = 1.0f;
    this->unk1BA4.elements->unk128 = 0x12C;
    this->unk1BA4.elements->unk12A = 0xC8;
    this->unk1BA4.elements->unk12C = 0;
    this->unk1BA4.elements->unk16E = 0x25;
    this->unk1BA4.elements->unk178 = 1.0f;
    this->unk1BA4.elements->unk168 = 0x834;
    this->unk1BA4.elements->unk16A = -0x12C;
    this->unk1BA4.elements->unk16C = 0;
    this->unk2BA = ((s32) this->actor.params >> 6) & 0x7F;
    if (this->unk2BA == 0x7F) {
        this->unk2BA = -1;
    }
    if (((s32) this->unk2BA >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->unk2BA) != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    func_80A7D140(this);
}

void EnEgol_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEgol *this = (EnEgol *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk1BA4);
    Collider_DestroyJntSph(globalCtx, &this->unk1D44);
    Collider_DestroyQuad(globalCtx, &this->unk1DA4);
}

void func_80A7D140(EnEgol *arg0) {
    arg0->actor.flags |= 0x8000000;
    arg0->unk2B2 = 0;
    arg0->actionFunc = func_80A7D168;
}

void func_80A7D168(EnEgol *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->actor.shape.rot.y - arg0->actor.yawTowardsPlayer;
    if (arg0->unk35C <= arg0->unk144.animCurrentFrame) {
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((phi_v1 < 0x3000) && (arg0->actor.xzDistToPlayer < arg0->unk360)) {
            func_80A7D1E4();
        }
    }
}

void func_80A7D1E4(Actor *arg0) {
    func_80A7C990(NULL);
    arg0->flags &= 0xF7FFFFFF;
    arg0->unk2B2 = 1;
    Audio_PlayActorSound2(arg0, 0x3A07U);
    arg0->unk2A8 = func_80A7D240;
}

void func_80A7D240(void *arg0, ? arg1) {
    if (arg0->unk35C <= arg0->unk15C) {
        func_80A7D27C();
    }
}

void func_80A7D27C(Actor *arg0) {
    func_80A7C990((Actor *)1);
    arg0->unk37C = 0;
    func_80A7CD08(arg0);
    arg0->unk2B2 = 2;
    arg0->unk2A8 = func_80A7D2C4;
}

void func_80A7D2C4(Actor *arg0, GlobalContext *arg1) {
    s16 sp6E;
    f32 sp68;
    void *sp64;
    Vec3f sp58;
    SkelAnime *sp38;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_t2;
    u8 *temp_v1_2;
    s32 phi_v0;
    s32 phi_v0_2;

    sp6E = arg0->world.rot.y - arg0->yawTowardsPlayer;
    sp68 = arg0->unk15C;
    sp64 = arg1->actorCtx.actorList[2].first;
    Math_SmoothStepToS(arg0 + 0x2B8, 0, 1, 0x3E8, (s16) 0);
    Math_Vec3f_Copy(&sp58, &D_801D15B0);
    if ((arg0->unk35C <= sp68) && (temp_t2 = arg0->unk37C + 1, arg0->unk37C = temp_t2, (temp_t2 > 0)) && (arg0->unk37C = 0, (arg0->unk364 < arg0->xzDistToPlayer))) {
        func_80A7DAAC(arg0);
        return;
    }
    temp_a0 = arg0 + 0x144;
    if ((arg0->world.pos.y - 50.0f) <= sp64->world.pos.y) {
        sp38 = temp_a0;
        if (func_801378B8(temp_a0, 24.0f) != 0) {
            Math_Vec3f_Copy(&sp58, arg0 + 0x3E4);
            sp58.y = arg0->floorHeight + 2.0f;
            func_80A80508(arg0, &sp58, &D_801D15BC, (s16 *)0x64, 0.005f, 0);
        }
        if (func_801378B8(sp38, 9.0f) != 0) {
            Math_Vec3f_Copy(&sp58, arg0 + 0x3D8);
            sp58.y = arg0->floorHeight + 2.0f;
            func_80A80508(arg0, &sp58, &D_801D15BC, (s16 *)0x64, 0.005f, 0);
        }
    }
    phi_v0 = (s32) sp6E;
    if ((s32) sp6E < 0) {
        phi_v0 = -(s32) sp6E;
    }
    if ((phi_v0 < 0x3000) && (arg0->xzDistToPlayer < 100.0f)) {
        func_80A7E478(arg0);
        return;
    }
    temp_f0 = arg0->unk15C;
    if ((temp_f0 != 0.0f) && (!(temp_f0 >= 9.0f) || !(temp_f0 <= 15.0f)) && (!(temp_f0 >= 24.0f) || !(temp_f0 <= 29.0f))) {
        Math_ApproachF(arg0 + 0x24, arg0->unk408, 0.5f, fabsf(Math_SinS(arg0->world.rot.y) * 4.0f));
        Math_ApproachF(arg0 + 0x2C, arg0->unk410, 0.5f, fabsf(Math_CosS(arg0->world.rot.y) * 4.0f));
    }
    Math_SmoothStepToS(arg0 + 0x32, Math_Vec3f_Yaw(arg0 + 0x24, arg0 + 0x408), 1, 0x7D0, (s16) 0);
    func_80A7CA18(arg0, arg1, 9.0f, 24.0f);
    temp_v1 = (arg0->world.rot.y - arg0->yawTowardsPlayer) + 0x8000;
    phi_v0_2 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v0_2 = -(s32) temp_v1;
    }
    if (phi_v0_2 < 0x2000) {
        arg0->unk2B0 = (s16) (arg0->unk2B0 - 1);
        if ((s32) arg0->unk2B0 < 0) {
            arg0->unk2B0 = 0;
        }
        func_80A7E2E8(arg0);
        return;
    }
    temp_f2 = arg0->world.pos.x - arg0->unk408;
    temp_f12 = arg0->world.pos.z - arg0->unk410;
    if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 4.0f) {
        temp_v1_2 = arg0->unk2AC;
        if (temp_v1_2 != 0) {
            arg0->unk2B0 = (s16) (arg0->unk2B0 + 1);
            temp_v0 = arg0->unk2B0;
            if ((s32) temp_v0 >= (s32) *temp_v1_2) {
                arg0->unk2B0 = (s16) (temp_v0 - 2);
                if ((s32) arg0->unk2B0 < 0) {
                    arg0->unk2B0 = 0;
                }
                func_80A7E2E8((bitwise Actor *) temp_f12, arg0);
            }
            func_80A7CD08(arg0);
        }
    }
    if (arg0->wallBgId != 0x32) {
        func_80A7CBC4(arg0, arg1, subroutine_arg2, arg0->unk3E8, arg0->unk3EC, arg0->unk3D8, arg0->unk3DC, arg0->unk3E0);
    }
}

void func_80A7D710(Actor *arg0) {
    func_80A7C990(arg0, 0xB);
    arg0->unk37C = 0;
    func_80A7CD08(arg0);
    arg0->world.rot.y = Math_Vec3f_Yaw(&arg0->world.pos, arg0 + 0x408);
    arg0->shape.rot.y = arg0->world.rot.y + 0x8000;
    arg0->unk2B2 = 3;
    arg0->unk2A8 = func_80A7D780;
}

void func_80A7D780(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp44;
    void *sp40;
    Actor *sp2C;
    Actor *temp_a0;
    PosRot *temp_a0_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    void *temp_t0;
    s32 phi_v1;

    temp_v0 = arg0->world.rot.y - arg0->yawTowardsPlayer;
    temp_t0 = arg1->actorCtx.actorList[2].first;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    } else {
        phi_v1 = (s32) temp_v0;
    }
    if ((phi_v1 < 0x3000) && (fabsf(arg0->world.pos.y - temp_t0->world.pos.y) < 50.0f) && (arg0->xzDistToPlayer < 100.0f) && (temp_t0->unkD5C == 0)) {
        sp40 = temp_t0;
        func_800B8D50(arg1, arg0, 2.0f, (s16) ((s32) randPlusMinusPoint5Scaled(8192.0f) + arg0->world.rot.y), 5.0f, 0x10U);
    }
    sp40 = arg1->actorCtx.actorList[2].first;
    Math_Vec3f_Copy(&sp44, &D_801D15B0);
    temp_a0 = arg0 + 0x144;
    if ((arg0->world.pos.y - 50.0f) <= arg1->actorCtx.actorList[2].first->world.pos.y) {
        sp2C = temp_a0;
        if (func_801378B8((SkelAnime *) temp_a0, 5.0f) != 0) {
            Math_Vec3f_Copy(&sp44, arg0 + 0x3E4);
            sp44.y = arg0->floorHeight + 2.0f;
            func_80A80508(arg0, &sp44, &D_801D15BC, (s16 *)0x64, 0.005f, 0);
        }
        if (func_801378B8((SkelAnime *) sp2C, 0.0f) != 0) {
            Math_Vec3f_Copy(&sp44, arg0 + 0x3D8);
            sp44.y = arg0->floorHeight + 2.0f;
            func_80A80508(arg0, &sp44, &D_801D15BC, (s16 *)0x64, 0.005f, 0);
        }
    }
    temp_a0_2 = &arg0->world;
    temp_f0 = Math_SinS(arg0->world.rot.y) * 10.0f;
    sp2C = (Actor *) temp_a0_2;
    Math_ApproachF(&temp_a0_2->pos.x, arg0->unk408, 0.5f, fabsf(temp_f0));
    Math_ApproachF(&arg0->world.pos.z, arg0->unk410, 0.5f, fabsf(Math_CosS(arg0->world.rot.y) * 10.0f));
    Math_SmoothStepToS(&arg0->world.rot.y, Math_Vec3f_Yaw(&temp_a0_2->pos, arg0 + 0x408), 1, 0x7D0, (s16) 0);
    Math_SmoothStepToS(&arg0->shape.rot.y, (s16) (arg0->world.rot.y + 0x8000), 1, 0x7D0, (s16) 0);
    func_80A7CA18(arg0, arg1, 5.0f, 0.0f);
    temp_f2 = arg0->world.pos.x - arg0->unk408;
    temp_f12 = arg0->world.pos.z - arg0->unk410;
    if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 4.0f) {
        arg0->unk2B0 = (s16) (arg0->unk2B0 - 1);
        if ((s32) arg0->unk2B0 < 0) {
            arg0->unk2B0 = 0;
            func_80A7E2E8((bitwise Actor *) temp_f12, arg0);
        }
        func_80A7CD08(arg0);
    }
}

void func_80A7DAAC(Actor *arg0) {
    func_80A7C990((Actor *)7);
    arg0->unk378 = 0;
    arg0->unk37C = 0;
    arg0->unk2B2 = 4;
    arg0->unk2A8 = func_80A7DAF0;
}

void func_80A7DAF0(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp90;
    CollisionPoly *sp88;
    Vec3f sp7C;
    u32 sp78;
    s16 sp74;
    s16 sp70;
    f32 sp6C;
    f32 sp68;
    Actor *sp54;
    ActorContext *sp48;
    Vec3f *sp40;
    Vec3f *sp3C;
    Vec3f *temp_s0;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_5;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_4;
    s16 temp_v1;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 phi_v0;
    f32 phi_f2;
    s16 phi_v1;
    s32 phi_s0;
    f32 phi_f0;
    f32 phi_f2_2;
    s32 phi_s0_2;

    temp_v1 = arg0->world.rot.y - arg0->yawTowardsPlayer;
    phi_v0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    }
    if ((phi_v0 < 0x3000) && (arg0->xzDistToPlayer < 100.0f)) {
        arg0->unk380 = 0;
        arg0->unk388 = 0;
        arg0->unk378 = 0;
        arg0->unk42C = 0;
        Math_Vec3f_Copy(arg0 + 0x3B4, &D_801D15B0);
        Math_Vec3f_Copy(arg0 + 0x3C0, &D_801D15B0);
        temp_s0 = arg0 + 0x3A8;
        Math_Vec3f_Copy(arg0 + 0x1DF0, temp_s0);
        Math_Vec3f_Copy(arg0 + 0x1E08, temp_s0);
        Math_Vec3f_Copy(arg0 + 0x1DE4, temp_s0);
        Math_Vec3f_Copy(arg0 + 0x1DFC, temp_s0);
        func_80A7E478(arg0);
        return;
    }
    if (arg0->xzDistToPlayer < arg0->unk364) {
        arg0->unk380 = 0;
        arg0->unk388 = 0;
        arg0->unk378 = 0;
        arg0->unk42C = 0;
        Math_Vec3f_Copy(arg0 + 0x3B4, &D_801D15B0);
        Math_Vec3f_Copy(arg0 + 0x3C0, &D_801D15B0);
        temp_s0_2 = arg0 + 0x3A8;
        Math_Vec3f_Copy(arg0 + 0x1DF0, temp_s0_2);
        Math_Vec3f_Copy(arg0 + 0x1E08, temp_s0_2);
        Math_Vec3f_Copy(arg0 + 0x1DE4, temp_s0_2);
        Math_Vec3f_Copy(arg0 + 0x1DFC, temp_s0_2);
        func_80A7D27C(arg0);
        return;
    }
    if (arg0->unk380 != 0) {
        temp_v1_2 = arg0->unk388;
        if (temp_v1_2 != 0) {
            if (temp_v1_2 != 1) {
                if (temp_v1_2 != 2) {

                } else {
                    Math_ApproachF(arg0 + 0x370, 1.0f, 0.5f, 1.0f);
                    if (arg0->unk2B4 == 0) {
                        arg0->unk388 = 0;
                        arg0->unk42C = 3;
                        arg0->unk380 = 0;
                        arg0->unk370 = 0.0f;
                    }
                }
            } else {
                Math_ApproachF(arg0 + 0x370, 8.0f, 0.5f, 2.5f);
                if (arg0->unk2B4 == 0) {
                    arg0->unk2B4 = 0xA;
                    arg0->unk388 = (s32) (arg0->unk388 + 1);
                }
            }
        } else {
            arg0->unk2B4 = 0xA;
            arg0->unk388 = (s32) (temp_v1_2 + 1);
        }
        arg0->unk384 = (s16) (arg0->unk384 + 0x7D0);
    }
    if ((arg0->unk42C != 0) || (arg0->unk37C != 0)) {
        Math_SmoothStepToS(arg0 + 0x2B8, -0x2710, 5, 0x1F4, (s16) 5);
    } else {
        Math_SmoothStepToS(arg0 + 0x2B8, 0, 5, 0x1F4, (s16) 5);
    }
    temp_v0 = arg0->unk42C;
    if (temp_v0 == 0) {
        temp_v0_2 = arg0->unk37C;
        if (temp_v0_2 >= 3) {
            func_80A7D27C(arg0);
            return;
        }
        arg0->unk41A = (s16) *(&D_80A80E58 + (temp_v0_2 * 2));
        arg0->unk3C8 = 0.0f;
        arg0->unk3BC = 0.0f;
        if (temp_v0_2 == 0) {
            arg0->unk42C = 1;
        } else {
            arg0->unk42C = 3;
            arg0->unk3C0 = 0.03f;
            arg0->unk3C4 = 0.03f;
        }
        arg0->unk37C = (s32) (arg0->unk37C + 1);
        return;
    }
    if ((s32) temp_v0 >= 3) {
        Audio_PlayActorSound2(arg0, 0x311BU);
        if (arg0->unk42C != 0) {
            func_80A7CBC4(arg0, arg1, subroutine_arg2, arg0->unk1DE8, arg0->unk1DEC, arg0->unk1DF0, arg0->unk1DF4, arg0->unk1DF8);
        }
        if ((arg0->unk378 == 0) && (func_800C55C4(&arg1->colCtx, arg0 + 0x1E08, arg0 + 0x1DF0, &sp7C, &sp88, 0U, 1U, 0U, 1U, &sp78) != 0)) {
            sp54 = arg1->actorCtx.actorList[2].first;
            sp6C = (f32) sp88->normal.x * 0.00003051851f;
            temp_f16 = (f32) sp88->normal.y * 0.00003051851f;
            sp68 = temp_f16;
            sp70 = (s16) (s32) ((-func_80086B30(-((f32) sp88->normal.z * 0.00003051851f) * temp_f16, 1.0f) * 32768.0f) / 3.1415927f);
            sp74 = (s16) (s32) ((func_80086B30(-sp6C * temp_f16, 1.0f) * 32768.0f) / 3.1415927f);
            temp_f12 = arg0->world.pos.y;
            temp_f2 = sp54->world.pos.y;
            phi_f2 = temp_f2;
            if ((temp_f12 - 50.0f) <= temp_f2) {
                func_80A80508((bitwise Actor *) temp_f12, (Vec3f *) arg0, (Vec3s *) &sp7C, &sp70, 1.4e-43f, 0x3CA3D70A, 0);
                phi_f2 = sp54->world.pos.y;
            }
            temp_v0_3 = 4 - (s32) (fabsf(phi_f2 - arg0->world.pos.y) * 0.02f);
            phi_v1 = (s16) temp_v0_3;
            if (temp_v0_3 >= 5) {
                phi_v1 = 4;
            } else if (temp_v0_3 <= 0) {
                phi_v1 = 1;
            }
            if (sp54->unkA74 != 0x1000000) {
                func_800BC848((bitwise Actor *) arg0->world.pos.y, (GlobalContext *) arg0, (s16) arg1, phi_v1, 2);
            }
            Audio_PlayActorSound2(arg0, 0x2802U);
            func_800B31BC(arg1, &sp7C, 0x28, -2, 0xFF, 0x14);
            func_800BBFB0(arg1, &sp7C, 6.0f, 2, (s16) 0x78, (s16) 0x14, (u8) 1);
            temp_f0 = arg0->world.pos.y - 50.0f;
            temp_f2_2 = sp54->world.pos.y;
            phi_f0 = temp_f0;
            phi_f2_2 = temp_f2_2;
            if ((temp_f0 <= temp_f2_2) && (arg0->floorBgId == 0x32)) {
                Math_Vec3f_Copy(&sp90, &sp7C);
                sp90.x += Math_SinS(arg0->world.rot.y) * 60.0f;
                temp_f6 = Math_CosS(arg0->world.rot.y) * 60.0f;
                sp48 = &arg1->actorCtx;
                sp90.z += temp_f6;
                phi_s0 = 0;
                do {
                    Actor_Spawn(sp48, arg1, 0x18E, sp90.x, sp90.y, sp90.z, (s16) 0, (s16) (s32) arg0->world.rot.y, (s16) 0, (s16) 1);
                    temp_s0_3 = phi_s0 + 1;
                    phi_s0 = temp_s0_3;
                } while (temp_s0_3 != 3);
                phi_f0 = arg0->world.pos.y - 50.0f;
                phi_f2_2 = sp54->world.pos.y;
            }
            phi_s0_2 = 0;
            if (phi_f0 <= phi_f2_2) {
                do {
                    func_80A80508(arg0, &sp7C, &D_801D15BC, (s16 *)0x1E, (Rand_ZeroFloat(1.0f) * 0.1f) + 0.2f, 3);
                    temp_s0_4 = phi_s0_2 + 1;
                    phi_s0_2 = temp_s0_4;
                } while (temp_s0_4 != 0xA);
            }
            arg0->unk378 = 1;
        }
        temp_v0_4 = arg0->unk378;
        if (temp_v0_4 != 0) {
            arg0->unk378 = (s16) (temp_v0_4 + 1);
            if ((s32) arg0->unk378 >= 5) {
                arg0->unk42C = 0;
                sp3C = arg0 + 0x1DE4;
                sp40 = arg0 + 0x1E08;
                sp48 = arg0 + 0x1DF0;
                Math_Vec3f_Copy(arg0 + 0x3B4, &D_801D15B0);
                Math_Vec3f_Copy(arg0 + 0x3C0, &D_801D15B0);
                temp_s0_5 = arg0 + 0x3A8;
                Math_Vec3f_Copy(&sp48->unk0, temp_s0_5);
                Math_Vec3f_Copy(sp40, temp_s0_5);
                Math_Vec3f_Copy(sp3C, temp_s0_5);
                Math_Vec3f_Copy(arg0 + 0x1DFC, temp_s0_5);
                arg0->unk378 = 0;
            }
        }
        Math_ApproachF(arg0 + 0x3B4, arg0->unk3C0, 0.5f, 0.5f);
        Math_ApproachF(arg0 + 0x3B8, arg0->unk3C4, 0.5f, 0.5f);
        Math_ApproachF(arg0 + 0x3BC, arg0->unk3C8, 0.5f, 0.5f);
    }
}

void func_80A7E2E8(Actor *arg0) {
    if (arg0->unk358 == 0) {
        func_80A7C990((Actor *)7);
    } else {
        func_80A7C990((Actor *)0xA);
    }
    arg0->unk2B2 = 0xC;
    arg0->unk2A8 = func_80A7E344;
}

void func_80A7E344(Actor *arg0) {
    s32 sp34;
    f32 sp30;
    s16 sp2E;
    s16 temp_v0;
    u8 temp_t1;
    s32 phi_v0;
    s32 phi_v1;

    sp34 = 0;
    sp30 = arg0->unk15C;
    func_80A7CA18(arg0, (GlobalContext *)0x41E00000, 13.0f);
    if (arg0->unk358 != 0) {
        sp34 = sp34;
        Math_SmoothStepToS(&arg0->shape.rot.y, arg0->home.rot.y, 5, 0xBB8, (s16) 5);
        arg0->world.rot.y = arg0->shape.rot.y;
        sp2E = arg0->world.rot.y - arg0->home.rot.y;
    }
    phi_v1 = sp34;
    if (arg0->unk358 == 0) {
        phi_v1 = 1;
    } else {
        phi_v0 = (s32) sp2E;
        if ((s32) sp2E < 0) {
            phi_v0 = -(s32) sp2E;
        }
        if (phi_v0 < 0x64) {
            temp_v0 = arg0->home.rot.y;
            arg0->shape.rot.y = temp_v0;
            arg0->world.rot.y = temp_v0;
            phi_v1 = 1;
        }
    }
    if ((phi_v1 != 0) && (arg0->unk35C <= sp30)) {
        temp_t1 = arg0->unk358 ^ 1;
        arg0->unk358 = temp_t1;
        if ((temp_t1 & 0xFF) == 0) {
            func_80A7C990(arg0, 0xC);
            Audio_PlayActorSound2(arg0, 0x3A08U);
            arg0->unk37C = 0;
            arg0->unk2A8 = func_80A7D168;
            return;
        }
        func_80A7D710(arg0);
        // Duplicate return node #13. Try simplifying control flow for better match
    }
}

void func_80A7E478(Actor *arg0) {
    func_80A7C990((Actor *)2);
    arg0->unk2B2 = 5;
    arg0->unk2A8 = func_80A7E4B4;
}

void func_80A7E4B4(Actor *arg0, GlobalContext *arg1) {
    f32 sp74;
    Vec3f sp5C;
    f32 sp58;
    PosRot *sp4C;
    PosRot *temp_a1;
    f32 temp_f0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s16 phi_v0;
    s32 phi_s0;

    sp74 = arg0->unk15C;
    Math_SmoothStepToS(arg0 + 0x2B8, 0, 1, 0x3E8, (s16) 0);
    if (func_801378B8(arg0 + 0x144, 17.0f) != 0) {
        sp58 = fabsf(arg1->actorCtx.actorList[2].first->unk28 - arg0->world.pos.y);
        Audio_PlayActorSound2(arg0, 0x2802U);
        temp_v1 = 4 - (s32) (sp58 * 0.02f);
        phi_v0 = (s16) temp_v1;
        if (temp_v1 >= 5) {
            phi_v0 = 4;
        } else if (temp_v1 <= 0) {
            phi_v0 = 1;
        }
        func_800BC848(arg0, arg1, phi_v0, 2);
        temp_a1 = &arg0->world;
        if (arg0->floorBgId == 0x32) {
            sp4C = temp_a1;
            Math_Vec3f_Copy(&sp5C, &temp_a1->pos);
            sp5C.x += Math_SinS(arg0->world.rot.y) * 60.0f;
            sp5C.y = arg0->floorHeight;
            sp5C.z += Math_CosS(arg0->world.rot.y) * 60.0f;
            temp_v0 = Rand_S16Offset(1, 3);
            temp_s1 = temp_v0;
            phi_s0 = 0;
            if (temp_v0 > 0) {
                do {
                    Actor_Spawn(&arg1->actorCtx, arg1, 0x18E, sp5C.x, sp5C.y, sp5C.z, (s16) 0, (s16) (s32) arg0->world.rot.y, (s16) 0, (s16) 0);
                    temp_s0 = phi_s0 + 1;
                    phi_s0 = temp_s0;
                } while (temp_s0 < temp_s1);
            }
            func_800BBDAC(arg1, arg0, &sp5C, 30.0f, 0x1E, 10.0f, (s16) 0x64, (s16) 0x1E, (u8) 1);
            Math_Vec3f_Copy(&sp5C, &sp4C->pos);
            sp5C.x += Math_SinS(arg0->world.rot.y) * 55.0f;
            sp5C.y = arg0->floorHeight + 2.0f;
            sp5C.z += Math_CosS(arg0->world.rot.y) * 55.0f;
            func_80A80508(arg0, &sp5C, &D_801D15BC, (s16 *)0x64, 0.03f, 0);
        }
        func_80A7CBC4(arg0, arg1, subroutine_arg2, arg0->unk400, arg0->unk404, arg0->unk3F0, arg0->unk3F4, arg0->unk3F8);
    }
    if (arg0->unk35C <= sp74) {
        func_80A7E924(arg0);
        return;
    }
    temp_f0 = arg0->unk15C;
    if ((temp_f0 <= 17.0f) && (temp_f0 >= 10.0f)) {
        CollisionCheck_SetAT(arg1, &arg1->colChkCtx, arg0 + 0x1BA4);
    }
}

void func_80A7E7EC(EnEgol *arg0) {
    arg0->unk1BA4.elements->unk2E = 0x28;
    arg0->unk1BA4.elements->unk6E = 0x28;
    arg0->unk38C = 0;
    arg0->unk2B2 = 6;
    arg0->actionFunc = func_80A7E820;
}

void func_80A7E820(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    void *temp_v0;

    sp2C = arg0->unk15C;
    Math_SmoothStepToS(arg0 + 0x2B8, 0, 1, 0x3E8, (s16) 0);
    if (arg0->unk35C <= sp2C) {
        arg0->unk1BC0->unk2E = 0x14;
        arg0->unk1BC0->unk6E = 0x14;
        func_80A7D27C(arg0);
        return;
    }
    if (arg0->unk38C == 0) {
        temp_v0 = arg0->unk1BC0;
        if (((temp_v0->unk15 & 2) != 0) || ((temp_v0->unk55 & 2) != 0)) {
            arg0->unk38C = 1;
            func_800B8D50(arg1, arg0, 10.0f, arg0->home.rot.y, 10.0f, 0U);
        }
        if ((arg0->unk1BB4 & 4) == 0) {
            CollisionCheck_SetAT(arg1, &arg1->colChkCtx, arg0 + 0x1BA4);
        }
    }
}

void func_80A7E924(Actor *arg0) {
    func_80A7C990((Actor *)3);
    arg0->unk378 = 0;
    arg0->unk1D60->unk14 = 1;
    arg0->unk2B2 = 7;
    arg0->unk2A8 = func_80A7E970;
}

void func_80A7E970(void *arg0, ? arg1) {
    if (arg0->unk35C <= arg0->unk15C) {
        arg0->unk378 = (s16) (arg0->unk378 + 1);
        if ((s32) arg0->unk378 >= 0x15) {
            arg0->unk1D60->unk14 = 2;
            func_80A7EB14();
        }
    }
}

void func_80A7E9D0(Actor *arg0) {
    func_80A7C990((Actor *)9);
    arg0->unk378 = 0;
    arg0->unk1D60->unk14 = 1;
    arg0->unk1BC0->unk2E = 0;
    arg0->unk1BC0->unk6E = 0;
    arg0->unk2B2 = 8;
    arg0->unk2A8 = func_80A7EA28;
}

void func_80A7EA28(void *arg0, ? arg1) {
    if (arg0->unk35C <= arg0->unk15C) {
        arg0->unk378 = (s16) (arg0->unk378 + 1);
        if ((s32) arg0->unk378 >= 0x51) {
            arg0->unk1D60->unk14 = 2;
            func_80A7EA88();
        }
    }
}

void func_80A7EA88(void *arg0) {
    arg0->unk1BC0->unk2E = 0x14;
    arg0->unk1BC0->unk6E = 0x14;
    func_80A7C990((Actor *)0xA);
    arg0->unk2B2 = 9;
    arg0->unk2A8 = func_80A7EAD8;
}

void func_80A7EAD8(void *arg0, ? arg1) {
    if (arg0->unk35C <= arg0->unk15C) {
        func_80A7D27C();
    }
}

void func_80A7EB14(void *arg0) {
    func_80A7C990((Actor *)4);
    arg0->unk378 = 0;
    arg0->unk2B2 = 0xA;
    arg0->unk2A8 = func_80A7EB54;
}

void func_80A7EB54(void *arg0, ? arg1) {
    if (arg0->unk35C <= arg0->unk15C) {
        func_80A7D27C();
    }
}

void func_80A7EB90(Actor *arg0) {
    func_80A7C990((Actor *)5);
    arg0->unk1BC0->unk2E = 0x14;
    arg0->unk1BC0->unk6E = 0x14;
    arg0->unk2B2 = 0xB;
    arg0->unk2A8 = func_80A7EBDC;
}

void func_80A7EBDC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    u32 temp_t0;
    u32 temp_t8;

    if (arg0->unk35C <= arg0->unk15C) {
        temp_a1 = arg0;
        if ((s32) arg0->colChkInfo.health > 0) {
            func_80A7D27C(arg0, temp_a1, arg0, arg1);
            return;
        }
        arg0 = arg0;
        Enemy_StartFinishingBlow(arg1, temp_a1);
        Audio_PlayActorSound2(arg0, 0x3846U);
        arg0->unk2A8 = func_80A7EC84;
        temp_t8 = arg0->flags | 0x8000000;
        temp_t0 = temp_t8 & ~1;
        arg0->flags = temp_t8;
        arg0->flags = temp_t0;
        arg0->flags = temp_t0 | 0x100000;
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_80A7EC84(Actor *arg0, ? arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) == 0) {
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
    arg0->unk1E28 = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
    arg0->unk1E30 = 60.0f;
    func_80A7C990(arg0, 6);
    arg0->unk2B2 = 0xD;
    arg0->unk2A8 = func_80A7ED14;
    arg0->shape.shadowScale = 0.0f;
}

void func_80A7ED14(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp90;
    PosRot *temp_s4;
    Vec3f *temp_s0;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_a1;
    s32 temp_s0_2;
    s32 phi_s0;

    temp_s0 = arg0 + 0x1E34;
    temp_f20 = arg0->unk15C;
    arg0->unk1E38 = 60.0f;
    arg0->unk1E34 = 0.0f;
    arg0->unk1E3C = 260.0f;
    Math_Vec3f_Copy(&sp90, temp_s0);
    temp_s4 = arg0 + 0x24;
    OLib_DbCameraVec3fSum(temp_s4, &sp90, temp_s0, 1);
    arg0->unk1E44 = (f32) (arg0->world.pos.y + 70.0f);
    arg0->unk1E40 = (f32) arg0->world.pos.x;
    arg0->unk1E48 = (f32) arg0->world.pos.z;
    Math_ApproachF(arg0 + 0x1E2C, arg0->unk1E30, 0.3f, 10.0f);
    Play_CameraSetAtEye(arg1, arg0->unk1E28, arg0 + 0x1E40, temp_s0);
    func_80169940(arg1, arg0->unk1E28, arg0->unk1E2C);
    if ((arg0->unk2B2 == 0xE) && (arg0->unk2B4 == 1)) {
        temp_a1 = arg0->unk2BA;
        if ((s32) temp_a1 >= 0) {
            Actor_SetSwitchFlag(arg1, (s32) temp_a1);
        }
        ActorCutscene_Stop((s16) arg0->cutscene);
        Actor_MarkForDeath(arg0);
        return;
    }
    if (func_801378B8(arg0 + 0x144, 46.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x2802U);
        func_800BC848(arg0, arg1, 0xA, 5);
    }
    if ((arg0->unk35C <= temp_f20) && (arg0->unk2B2 != 0xE)) {
        Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        arg0->unk2B4 = 0x1E;
        Audio_PlayActorSound2(arg0, 0x180EU);
        arg0->unk2B2 = 0xE;
        phi_s0 = 0;
        do {
            temp_f20_2 = Rand_ZeroFloat(20.0f);
            func_80A80508(arg0, &temp_s4->pos, &D_801D15BC, (s16 *) (s16) (s32) (temp_f20_2 + 10.0f), (Rand_ZeroFloat(1.0f) * 0.02f) + 0.01f, (phi_s0 & 1) + 1);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0x14);
    }
}

void func_80A7EFB8(Actor *arg0, GlobalContext *arg1) {
    s16 sp6E;
    s32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    Vec3f *sp50;
    Vec3f *sp4C;
    Vec3f *sp48;
    Vec3f *sp44;
    Vec3f *sp40;
    Vec3f *sp3C;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u8 temp_t2;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_v0;

    sp68 = 0;
    sp6E = arg0->world.rot.y - arg0->yawTowardsPlayer;
    if (arg0->unk2B2 == 4) {
        temp_v0 = arg0->unk1DB4;
        temp_t2 = temp_v0 & 0xFFFD;
        if ((temp_v0 & 4) != 0) {
            arg0->unk1DB4 = temp_t2;
            arg0->unk1DB4 = (u8) (temp_t2 & 0xFFFB);
            arg0->unk378 = 0;
            arg0->unk42C = 0;
            Math_Vec3f_Copy(arg0 + 0x3B4, &D_801D15B0);
            Math_Vec3f_Copy(arg0 + 0x3C0, &D_801D15B0);
            temp_a1 = arg0 + 0x3A8;
            sp48 = temp_a1;
            Math_Vec3f_Copy(arg0 + 0x1DF0, temp_a1);
            Math_Vec3f_Copy(arg0 + 0x1E08, temp_a1);
            Math_Vec3f_Copy(arg0 + 0x1DE4, temp_a1);
            Math_Vec3f_Copy(arg0 + 0x1DFC, temp_a1);
            func_80A7D27C(arg0);
        }
    }
    if ((arg0->unk1D60->unk16 & 2) != 0) {
        sp68 = 2;
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 != 4) {
            if (temp_v0_2 != 0xE) {

            } else {
                temp_v0_3 = arg0->unk2B2;
                if ((temp_v0_3 == 7) || (temp_v0_3 == 8)) {
                    sp68 = 1;
                }
            }
        } else {
            phi_v0 = (s32) sp6E;
            if ((s32) sp6E < 0) {
                phi_v0 = -(s32) sp6E;
            }
            if (phi_v0 < 0x3000) {
                temp_v0_4 = arg0->unk2B2;
                if ((temp_v0_4 == 8) || (temp_v0_4 == 7)) {
                    Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                    arg0->unk2BC = 0x14;
                    sp68 = 1;
                } else if (((s32) temp_v0_4 >= 2) && ((s32) temp_v0_4 < 0xA) && (arg0->unk358 == 0)) {
                    sp68 = 0;
                    arg0->unk380 = 0;
                    arg0->unk388 = 0;
                    arg0->unk378 = 0;
                    arg0->unk42C = 0;
                    sp3C = arg0 + 0x1DFC;
                    sp40 = arg0 + 0x1DE4;
                    sp44 = arg0 + 0x1E08;
                    sp48 = arg0 + 0x3A8;
                    sp4C = arg0 + 0x1DF0;
                    sp50 = arg0 + 0x3C0;
                    Math_Vec3f_Copy(arg0 + 0x3B4, &D_801D15B0);
                    Math_Vec3f_Copy(sp50, &D_801D15B0);
                    Math_Vec3f_Copy(sp4C, sp48);
                    Math_Vec3f_Copy(sp44, sp48);
                    Math_Vec3f_Copy(sp40, sp48);
                    Math_Vec3f_Copy(sp3C, sp48);
                    func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x28);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                    func_80A7E9D0(arg0);
                }
            }
        }
    }
    if (sp68 == 1) {
        Actor_ApplyDamage(arg0);
        temp_a2 = arg0 + 0x39C;
        sp50 = temp_a2;
        CollisionCheck_BlueBlood(arg1, NULL, temp_a2);
        CollisionCheck_BlueBlood(arg1, NULL, temp_a2);
        CollisionCheck_BlueBlood(arg1, NULL, temp_a2);
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x19);
        Audio_PlayActorSound2(arg0, 0x3847U);
        func_80A7EB90(arg0);
        return;
    }
    if (sp68 == 2) {
        sp5C = (f32) arg0->unk1D60->unkE;
        sp60 = (f32) arg0->unk1D60->unk10;
        sp64 = (f32) arg0->unk1D60->unk12;
        Audio_PlayActorSound2(arg0, 0x1806U);
        EffectSsHitMark_SpawnFixedScale(arg1, 3, (Vec3f *) &sp5C);
        CollisionCheck_SpawnShieldParticlesMetal(arg1, (Vec3f *) &sp5C);
    }
}

void EnEgol_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEgol *this = (EnEgol *) thisx;
    Actor *sp58;
    PosRot *sp40;
    Vec3f *sp3C;
    ColliderQuadDim *sp38;
    Vec3f *sp34;
    Vec3f *sp30;
    Vec3f *sp2C;
    Actor *temp_v0_8;
    CollisionCheckContext *temp_a1_5;
    PosRot *temp_a1_4;
    Vec3f *temp_a1_2;
    Vec3f *temp_a1_3;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s32 phi_v0;
    s32 phi_v0_2;

    sp58 = globalCtx->actorCtx.actorList[2].first;
    temp_v1 = this->unk2B2;
    if ((temp_v1 != 6) && (temp_v1 != 3) && ((s32) temp_v1 < 0xD)) {
        temp_v0 = this->actor.yawTowardsPlayer;
        temp_a1 = this->actor.shape.rot.y - temp_v0;
        temp_a0 = (this->actor.world.rot.y - temp_v0) + 0x8000;
        if ((s32) temp_a1 < 0) {
            phi_v0 = -(s32) temp_a1;
        } else {
            phi_v0 = (s32) temp_a1;
        }
        if (phi_v0 >= 0x1889) {
            phi_v0_2 = (s32) temp_a0;
            if ((s32) temp_a0 < 0) {
                phi_v0_2 = -(s32) temp_a0;
            }
            if ((phi_v0_2 >= 0x2001) && (this->actor.xzDistToPlayer < 100.0f)) {
                if ((s32) temp_a1 < 0) {
                    if (this->unk354 != 0xD) {
                        func_80A7C990(&this->actor, 0xD);
                    }
                } else if (this->unk354 != 0xE) {
                    func_80A7C990(&this->actor, 0xE);
                }
                this->unk380 = 0;
                this->unk388 = 0;
                this->unk378 = 0;
                this->unk42C = 0;
                Math_Vec3f_Copy(&this->unk3B4, &D_801D15B0);
                Math_Vec3f_Copy(&this->unk3C0, &D_801D15B0);
                temp_a1_2 = &this->unk3A8;
                sp3C = temp_a1_2;
                Math_Vec3f_Copy(&this->unk1DA4.dim.quad[1], temp_a1_2);
                Math_Vec3f_Copy(&this->unk1DA4.dim.quad[3], temp_a1_2);
                Math_Vec3f_Copy(this->unk1DA4.dim.quad, temp_a1_2);
                Math_Vec3f_Copy(&this->unk1DA4.dim.quad[2], temp_a1_2);
                func_80A7E7EC(this);
            }
        }
    }
    if (this->unk2B2 != 0) {
        SkelAnime_FrameUpdateMatrix(&this->unk144);
    }
    temp_v0_2 = this->unk42C;
    if (temp_v0_2 == 0) {
        Math_ApproachZeroF(&this->unk36C, 0.5f, 0.5f);
    } else if ((s32) temp_v0_2 >= 3) {
        Math_ApproachF(&this->unk36C, 1.0f, 0.5f, 0.5f);
    }
    Actor_SetScale(&this->actor, 0.015f);
    temp_v1_2 = this->unk2B2;
    if ((temp_v1_2 != 0xC) && (temp_v1_2 != 3)) {
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
    temp_v0_3 = this->unk2B4;
    this->unk430 += 0xC;
    if (temp_v0_3 != 0) {
        this->unk2B4 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk2B6;
    if (temp_v0_4 != 0) {
        this->unk2B6 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk2BC;
    if (temp_v0_5 != 0) {
        this->unk2BC = temp_v0_5 - 1;
    }
    func_80A80750(this, globalCtx);
    this->actionFunc(this, globalCtx);
    temp_a1_3 = &this->unk39C;
    sp3C = temp_a1_3;
    Math_Vec3f_Copy(&this->actor.focus.pos, temp_a1_3);
    temp_v1_3 = this->unk2B2;
    this->actor.focus.rot.x = this->actor.world.rot.x;
    this->actor.focus.rot.y = this->actor.world.rot.y;
    this->actor.focus.rot.z = this->actor.world.rot.z;
    if ((temp_v1_3 != 7) && (temp_v1_3 != 0) && (temp_v1_3 != 3) && (temp_v1_3 != 1) && (temp_v1_3 != 4) && (temp_v1_3 != 8) && (temp_v1_3 != 0xB) && (temp_v1_3 != 0xD)) {
        temp_a1_4 = &sp58->world;
        sp40 = temp_a1_4;
        this->unk414 = Math_Vec3f_Pitch(sp3C, &temp_a1_4->pos);
        this->unk416 = (s16) -Math_Vec3f_Yaw(sp3C, &temp_a1_4->pos);
        temp_v1_4 = this->unk414;
        this->unk416 += this->actor.world.rot.y;
        if ((s32) temp_v1_4 >= 0x7D1) {
            this->unk414 = 0x7D0;
        } else if ((s32) temp_v1_4 < -0x7D0) {
            this->unk414 = -0x7D0;
        }
        temp_v0_6 = this->unk416;
        if ((s32) temp_v0_6 >= 0x1771) {
            this->unk416 = 0x1770;
        } else if ((s32) temp_v0_6 < -0x1770) {
            this->unk416 = -0x1770;
        }
    } else {
        this->unk416 = 0;
        this->unk414 = this->unk416;
    }
    temp_v0_7 = this->unk2B6;
    if (temp_v0_7 == 0) {
        temp_v1_5 = this->unk2B2;
        if (((temp_v1_5 == 2) || (temp_v1_5 == 4)) && (this->unk358 == 0)) {
            temp_v0_8 = func_800BC270(globalCtx, &this->actor, 80.0f, 0x138B0);
            if ((temp_v0_8 != 0) && ((temp_v0_8->id != 0xF) || (temp_v0_8->params != 5))) {
                this->unk376 = 0xFA0;
                this->unk2B6 = 0x14;
                if (this->unk2B2 == 4) {
                    this->unk380 = 0;
                    this->unk388 = 0;
                    this->unk378 = 0;
                    this->unk42C = 0;
                    sp2C = &this->unk3C0;
                    sp30 = &this->unk1DA4.dim.quad[1];
                    sp34 = &this->unk1DA4.dim.quad[3];
                    sp38 = &this->unk1DA4.dim;
                    sp3C = &this->unk3A8;
                    sp40 = (PosRot *) &this->unk1DA4.dim.quad[2];
                    Math_Vec3f_Copy(&this->unk3B4, &D_801D15B0);
                    Math_Vec3f_Copy(sp2C, &D_801D15B0);
                    Math_Vec3f_Copy(sp30, sp3C);
                    Math_Vec3f_Copy(sp34, sp3C);
                    Math_Vec3f_Copy(sp38->quad, sp3C);
                    Math_Vec3f_Copy(&sp40->pos, sp3C);
                    func_80A7D27C(&this->actor);
                }
            }
        } else {
            goto block_60;
        }
    } else if (temp_v0_7 == 1) {
block_60:
        this->unk376 = 0;
    }
    Math_SmoothStepToS(&this->unk374, this->unk376, 1, 0x7D0, (s16) 0);
    func_80A7EFB8(&this->actor, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 50.0f, 50.0f, 0x1DU);
    temp_v1_6 = this->unk2B2;
    if (temp_v1_6 != 0xE) {
        if ((temp_v1_6 != 0xB) || (temp_v1_6 != 0xD)) {
            temp_a1_5 = &globalCtx->colChkCtx;
            sp40 = (PosRot *) temp_a1_5;
            CollisionCheck_SetAC(globalCtx, temp_a1_5, &this->unk1D44.base);
            CollisionCheck_SetAC(globalCtx, temp_a1_5, &this->unk1BA4.base);
        }
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk1BA4.base);
    }
    if ((s32) this->unk42C >= 7) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->unk1DA4.base);
    }
}

s32 func_80A7F8E8(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 *sp18;
    GraphicsContext *temp_t0;
    s16 temp_v0;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 *temp_v0_5;
    s32 *temp_v0_6;
    s32 temp_lo;
    void *temp_v0_2;
    void *temp_v1;
    s32 phi_a1;

    if (arg1 == 3) {
        arg4->z += arg5->unk2B8;
    }
    if (arg1 == 0xA) {
        arg4->z += arg5->unk374;
    }
    if (arg1 == 0xB) {
        arg4->z += -(s32) arg5->unk374;
    }
    if (arg1 == 0xC) {
        arg4->y += arg5->unk416;
        arg4->z += arg5->unk414;
    }
    phi_a1 = 0;
    if (arg1 == 0xF) {
        temp_v0 = arg5->unk2B2;
        temp_t0 = *arg0;
        if ((temp_v0 == 0xB) || (temp_v0 == 0xD)) {
            phi_a1 = 2;
        } else if ((temp_v0 == 8) || (temp_v0 == 7)) {
            phi_a1 = 1;
        }
        temp_lo = phi_a1 * 3;
        temp_v0_2 = temp_lo + &D_80A80DCC;
        temp_v1 = temp_lo + &D_80A80DD8;
        arg5->unk420 = (s16) temp_v0_2->unk0;
        arg5->unk422 = (s16) temp_v0_2->unk1;
        arg5->unk424 = (s16) temp_v0_2->unk2;
        arg5->unk426 = (s16) temp_v1->unk0;
        arg5->unk428 = (s16) temp_v1->unk1;
        arg5->unk42A = (s16) temp_v1->unk2;
        temp_v0_3 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->unk4 = 0;
        temp_v0_3->unk0 = 0xE7000000;
        temp_v0_4 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->unk0 = 0xFA0000FF;
        temp_v0_4->unk4 = (s32) ((arg5->unk421 << 0x18) | (arg5->unk423 << 0x10) | (arg5->unk425 << 8) | 0xFF);
        temp_v0_5 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->unk0 = 0xFB000000;
        temp_v0_5->unk4 = (s32) ((arg5->unk427 << 0x18) | (arg5->unk429 << 0x10) | (arg5->unk42B << 8) | 0xFF);
        temp_v0_6 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->unk0 = 0xDB060024;
        sp18 = temp_v0_6;
        sp18->unk4 = func_8012CB28(*arg0, 0U, arg5->unk430);
    }
    return 0;
}

void func_80A7FAFC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp60;
    Vec3f sp54;
    f32 sp50;
    Vec3f sp48;
    Vec3f sp3C;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 phi_f20;
    f32 phi_f20_2;

    sp60.x = D_80A80E60.unk0;
    sp60.y = D_80A80E60.unk4;
    sp60.z = D_80A80E60.unk8;
    sp54.x = D_80A80E6C.unk0;
    sp54.y = D_80A80E6C.unk4;
    sp54.z = D_80A80E6C.unk8;
    if (arg1 == 6) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x3F0);
    }
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x3FC);
    }
    if (arg1 == 0xD) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x39C);
    }
    if ((arg1 == 0xD) && ((s32) arg4->unk42C >= 3)) {
        sp48.x = D_80A80E78.unk0;
        sp48.y = D_80A80E78.unk4;
        sp48.z = D_80A80E78.unk8;
        SysMatrix_MultiplyVector3fByState(&sp54, arg4 + 0x3A8);
        temp_f10 = Math_SinS((s16) (arg4->world.rot.y + 0x4000)) * arg4->unk3B4 * 77.0f;
        arg4->unk1E0C = (f32) arg4->unk3AC;
        arg4->unk1E08 = (f32) (temp_f10 + arg4->unk3A8);
        arg4->unk1E10 = (f32) ((Math_CosS((s16) (arg4->world.rot.y + 0x4000)) * arg4->unk3B4 * 77.0f) + arg4->unk3B0);
        temp_f16 = Math_SinS((s16) (arg4->world.rot.y + 0xC000)) * arg4->unk3B4 * 77.0f;
        arg4->unk1E00 = (f32) arg4->unk3AC;
        arg4->unk1DFC = (f32) (temp_f16 + arg4->unk3A8);
        temp_f20 = arg4->unk3BC;
        arg4->unk1E04 = (f32) ((Math_CosS((s16) (arg4->world.rot.y + 0xC000)) * arg4->unk3B4 * 77.0f) + arg4->unk3B0);
        phi_f20 = temp_f20;
        phi_f20_2 = temp_f20;
        if ((arg4->floorHeight < (arg4->unk1E0C + 20.0f)) && (temp_f20 < 10.0f)) {
loop_10:
            SysMatrix_StatePush();
            Matrix_RotateY(arg4->world.rot.y, 0U);
            SysMatrix_InsertXRotation_s(arg4->unk41A, 1);
            sp50 = phi_f20 * 700.0f;
            SysMatrix_MultiplyVector3fByState(&sp48, &sp3C);
            SysMatrix_StatePop();
            temp_f20_2 = phi_f20 + 0.01f;
            phi_f20 = temp_f20_2;
            phi_f20_2 = temp_f20_2;
            if (arg4->floorHeight < (arg4->unk1E0C + sp3C.y + 20.0f)) {
                if (temp_f20_2 < 10.0f) {
                    goto loop_10;
                }
            }
        }
        arg4->unk3C8 = phi_f20_2;
        SysMatrix_StatePush();
        Matrix_RotateY(arg4->world.rot.y, 0U);
        SysMatrix_InsertXRotation_s(arg4->unk41A, 1);
        sp48.z = arg4->unk3BC * 700.0f;
        SysMatrix_MultiplyVector3fByState(&sp48, &sp3C);
        SysMatrix_StatePop();
        arg4->unk1DF0 = (f32) (arg4->unk1E08 + sp3C.x);
        arg4->unk1DF4 = (f32) (arg4->unk1E0C + sp3C.y);
        arg4->unk1DF8 = (f32) (arg4->unk1E10 + sp3C.z);
        arg4->unk1DE4 = (f32) (arg4->unk1DFC + sp3C.x);
        arg4->unk1DE8 = (f32) (arg4->unk1E00 + sp3C.y);
        arg4->unk1DEC = (f32) (arg4->unk1E04 + sp3C.z);
        Collider_SetQuadVertices(arg4 + 0x1DA4, arg4 + 0x1DE4, arg4 + 0x1DF0, arg4 + 0x1DFC, arg4 + 0x1E08);
        arg4->unk42C = 7;
    }
    if ((arg1 == 0xD) && (arg4->unk42C == 1)) {
        arg4->unk380 = 1;
        arg4->unk42C = 2;
        arg4->unk3C0 = 0.03f;
        arg4->unk3C4 = 0.03f;
    }
    if (arg1 == 0x13) {
        SysMatrix_MultiplyVector3fByState(&sp60, arg4 + 0x3D8);
    }
    if (arg1 == 0x16) {
        SysMatrix_MultiplyVector3fByState(&sp60, arg4 + 0x3E4);
    }
    if ((arg1 == 3) || (arg1 == 4) || (arg1 == 5) || (arg1 == 6) || (arg1 == 7) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xA) || (arg1 == 0xB) || (arg1 == 0x10) || (arg1 == 0x12) || (arg1 == 0x15)) {
        SysMatrix_GetStateTranslation(arg4 + (arg4->unk350 * 0xC) + 0x2C0);
        arg4->unk350 = (s16) (arg4->unk350 + 1);
        if ((s32) arg4->unk350 >= 0xC) {
            arg4->unk350 = 0;
        }
    }
    Collider_UpdateSpheres(arg1, arg4 + 0x1BA4);
    Collider_UpdateSpheres(arg1, arg4 + 0x1D44);
}

void EnEgol_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnEgol *this = (EnEgol *) thisx;
    ? *sp54;
    MtxF *sp50;
    ? *temp_s0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    f32 temp_f12_2;
    s16 temp_v0;
    f32 phi_f20;
    ? *phi_s0;
    f32 phi_f22;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    if (this->unk2B2 != 0xE) {
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060094E4));
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_80A7F8E8, func_80A7FAFC, &this->actor);
        temp_s2->polyOpa.p = func_801660B8(globalCtx, temp_s2->polyOpa.p);
    }
    temp_v0 = this->unk2BC;
    if (temp_v0 != 0) {
        func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk2C0, 0xC, 0.8f, 0.8f, (f32) temp_v0 * 0.05f, (u8) 0x14);
    }
    if ((s32) this->unk42C >= 3) {
        this->unk41C = this->actor.world.rot.y;
        temp_v0_2 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060020;
        temp_v0_2->words.w1 = func_8012CB28(globalCtx->state.gfxCtx, 0U, this->unk430);
        temp_v0_3 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0;
        temp_v0_3->words.w0 = 0xE7000000;
        temp_v0_4 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = -1;
        temp_v0_4->words.w0 = 0xFA000000;
        SysMatrix_InsertTranslation(this->unk3A8.x, this->unk3A8.y, this->unk3A8.z, 0);
        SysMatrix_InsertRotation(this->unk41A, this->unk41C, 0, 1);
        Matrix_Scale(this->unk3B4.x, this->unk3B4.y, this->unk3B4.z, 1);
        temp_v0_5 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_6 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = (u32) &D_060041F0;
    }
    if (((this->unk2B2 == 4) && ((s32) this->unk42C >= 3)) || (this->unk380 != 0)) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_7->words.w1 = (u32) &D_04023348;
        if (this->unk380 == 0) {
            temp_v0_8 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xFB000000;
            temp_v0_8->words.w1 = 0x9BFFFF80;
            SysMatrix_InsertTranslation(this->unk39C.x, this->unk39C.y, this->unk39C.z, 0);
            temp_f12 = this->unk36C;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            sp50 = &globalCtx->mf_187FC;
            sp54 = &D_04023428;
            phi_f20 = 10.0f;
            phi_s0 = &D_80A80DE4;
            phi_f22 = 80.0f;
            do {
                SysMatrix_StatePush();
                Matrix_Scale(phi_f20, phi_f20, phi_f20, 1);
                SysMatrix_NormalizeXYZ(sp50);
                temp_v1 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v1 + 8;
                temp_v1->words.w0 = 0xFA000000;
                temp_v1->words.w1 = (phi_s0->unk2 << 8) | (phi_s0->unk0 << 0x18) | (phi_s0->unk1 << 0x10) | ((u32) phi_f22 & 0xFF);
                temp_v0_9 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_9 + 8;
                temp_v0_9->words.w0 = 0xDA380003;
                temp_v0_9->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_10 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_10 + 8;
                temp_v0_10->words.w0 = 0xDE000000;
                temp_v0_10->words.w1 = (u32) sp54;
                SysMatrix_StatePop();
                temp_s0 = phi_s0 + 3;
                phi_f20 = 3.0f;
                phi_s0 = temp_s0;
                phi_f22 = 200.0f;
            } while (temp_s0 != &D_80A80DEA);
        } else {
            temp_v0_11 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_11 + 8;
            temp_v0_11->words.w1 = 0x9BFFFF80;
            temp_v0_11->words.w0 = 0xFB000000;
            SysMatrix_InsertTranslation(this->unk39C.x, this->unk39C.y, this->unk39C.z, 0);
            temp_f12_2 = this->unk370;
            Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
            SysMatrix_StatePush();
            Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
            SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
            SysMatrix_InsertZRotation_s(this->unk384, 1);
            temp_v0_12 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_12 + 8;
            temp_v0_12->words.w1 = -1;
            temp_v0_12->words.w0 = 0xFA000000;
            temp_v0_13 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_13 + 8;
            temp_v0_13->words.w0 = 0xDA380003;
            temp_v0_13->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_14 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_14 + 8;
            temp_v0_14->words.w0 = 0xDE000000;
            temp_v0_14->words.w1 = (u32) &D_04023428;
            SysMatrix_StatePop();
        }
    }
    func_80A80904(this, globalCtx);
}

void func_80A80508(Actor *arg0, Vec3f *arg1, Vec3s *arg2, s16 arg3, f32 arg4, s16 arg5) {
    s16 temp_s1;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_s1;

    phi_s0 = arg0 + 0x434;
    phi_s1 = 0;
loop_1:
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 1U;
        phi_s0->unk38 = arg4;
        phi_s0->unk4 = (s32) arg1->x;
        phi_s0->unk8 = (s32) arg1->y;
        phi_s0->unkC = (s32) arg1->z;
        phi_s0->unk10 = 0xFF;
        phi_s0->unk14 = arg5;
        phi_s0->unk12 = arg3;
        phi_s0->unk30 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk32 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        temp_v0 = phi_s0->unk14;
        phi_s0->unk34 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        if ((temp_v0 == 1) || (temp_v0 == 2)) {
            phi_s0->unk28 = -1.0f;
            phi_s0->unk18 = (f32) ((Rand_ZeroOne() - 0.5f) * 4.0f);
            phi_s0->unk1C = (f32) ((Rand_ZeroOne() * 10.0f) + 10.0f);
            phi_s0->unk20 = (f32) ((Rand_ZeroOne() - 0.5f) * 4.0f);
            return;
        }
        if (temp_v0 == 3) {
            phi_s0->unk28 = -1.0f;
            phi_s0->unk18 = (f32) ((Rand_ZeroOne() - 0.5f) * 0.5f);
            phi_s0->unk1C = (f32) ((Rand_ZeroOne() * 5.0f) + 5.0f);
            phi_s0->unk20 = (f32) ((Rand_ZeroOne() - 0.5f) * 0.5f);
            phi_s0->unk12 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f);
            return;
        }
        if (temp_v0 == 0) {
            phi_s0->unk32 = 0;
            phi_s0->unk30 = (s16) arg2->x;
            phi_s0->unk34 = (s16) arg2->z;
            return;
        }
        goto block_9;
    }
block_9:
    temp_s1 = phi_s1 + 1;
    phi_s0 += 0x3C;
    phi_s1 = temp_s1;
    if ((s32) temp_s1 >= 0x64) {
        return;
    }
    goto loop_1;
}

void func_80A80750(EnEgol *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f8;
    s16 temp_a1;
    s16 temp_a1_2;
    s32 temp_v1;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x434;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (phi_v0->unk0 != 0) {
            if (arg0->unk2B2 == 0xD) {
                phi_v0->unk12 = 0;
            }
            if (phi_v0->unk14 != 0) {
                temp_f0 = phi_v0->unk1C;
                phi_v0->unk4 = (f32) (phi_v0->unk4 + phi_v0->unk18);
                phi_v0->unk30 = (s16) (phi_v0->unk30 + 0x100);
                phi_v0->unk34 = (s16) (phi_v0->unk34 + 0x130);
                phi_v0->unk8 = (f32) (phi_v0->unk8 + temp_f0);
                phi_v0->unkC = (f32) (phi_v0->unkC + phi_v0->unk20);
                phi_v0->unk1C = (f32) (temp_f0 + phi_v0->unk28);
            }
            temp_a1 = phi_v0->unk12;
            if (temp_a1 != 0) {
                phi_v0->unk12 = (s16) (temp_a1 - 1);
            } else if (phi_v0->unk14 == 0) {
                phi_v0->unk10 = (s16) (phi_v0->unk10 - 0xA);
                if ((s32) phi_v0->unk10 < 0xA) {
                    goto block_11;
                }
            } else {
block_11:
                phi_v0->unk0 = 0U;
            }
        }
        temp_v0 = phi_v0 + 0x3C;
        if (phi_v0->unk3C != 0) {
            if (arg0->unk2B2 == 0xD) {
                temp_v0->unk12 = 0;
            }
            if (temp_v0->unk14 != 0) {
                temp_f0_2 = temp_v0->unk1C;
                temp_f8 = temp_v0->unk8 + temp_f0_2;
                temp_v0->unk4 = (f32) (temp_v0->unk4 + temp_v0->unk18);
                temp_v0->unk34 = (s16) (temp_v0->unk34 + 0x130);
                temp_v0->unk30 = (s16) (temp_v0->unk30 + 0x100);
                temp_v0->unk1C = (f32) (temp_f0_2 + temp_v0->unk28);
                temp_v0->unkC = (f32) (temp_v0->unkC + temp_v0->unk20);
                temp_v0->unk8 = temp_f8;
            }
            temp_a1_2 = temp_v0->unk12;
            if (temp_a1_2 != 0) {
                temp_v0->unk12 = (s16) (temp_a1_2 - 1);
            } else if (temp_v0->unk14 == 0) {
                temp_v0->unk10 = (s16) (temp_v0->unk10 - 0xA);
                if ((s32) temp_v0->unk10 < 0xA) {
                    goto block_22;
                }
            } else {
block_22:
                temp_v0->unk0 = 0;
            }
        }
        phi_v0 = temp_v0 + 0x3C;
    } while (temp_v1 != 0x64);
}

void func_80A80904(EnEgol *arg0, GlobalContext *arg1) {
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_s5;
    s16 temp_v0;
    void *phi_s2;
    s16 phi_s5;

    temp_a0 = arg1->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s2 = arg0 + 0x434;
    phi_s5 = 0;
    do {
        if (phi_s2->unk0 != 0) {
            SysMatrix_StatePush();
            SysMatrix_InsertTranslation(phi_s2->unk4, phi_s2->unk8, phi_s2->unkC, 0);
            SysMatrix_InsertXRotation_s(phi_s2->unk30, 1);
            Matrix_RotateY(phi_s2->unk32, 1U);
            SysMatrix_InsertZRotation_s(phi_s2->unk34, 1);
            temp_f12 = phi_s2->unk38;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0 = phi_s2->unk14;
            if (temp_v0 != 0) {
                if ((temp_v0 != 1) && (temp_v0 != 2)) {
                    if (temp_v0 != 3) {

                    } else {
                        temp_v0_2 = temp_s0->polyOpa.p;
                        temp_s0->polyOpa.p = temp_v0_2 + 8;
                        temp_v0_2->words.w1 = 0;
                        temp_v0_2->words.w0 = 0xE7000000;
                        temp_v0_3 = temp_s0->polyOpa.p;
                        temp_s0->polyOpa.p = temp_v0_3 + 8;
                        temp_v0_3->words.w1 = -1;
                        temp_v0_3->words.w0 = 0xFA000080;
                        temp_v0_4 = temp_s0->polyOpa.p;
                        temp_s0->polyOpa.p = temp_v0_4 + 8;
                        temp_v0_4->words.w0 = 0xDA380003;
                        temp_v0_4->words.w1 = Matrix_NewMtx(temp_s0);
                        temp_v0_5 = temp_s0->polyOpa.p;
                        temp_s0->polyOpa.p = temp_v0_5 + 8;
                        temp_v0_5->words.w1 = -1;
                        temp_v0_5->words.w0 = 0xFB000000;
                        temp_v0_6 = temp_s0->polyOpa.p;
                        temp_s0->polyOpa.p = temp_v0_6 + 8;
                        temp_v0_6->words.w1 = (u32) &D_06001918;
                        temp_v0_6->words.w0 = 0xDE000000;
                    }
                } else {
                    temp_v0_7 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = temp_v0_7 + 8;
                    temp_v0_7->words.w1 = 0;
                    temp_v0_7->words.w0 = 0xE7000000;
                    temp_v0_8 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = temp_v0_8 + 8;
                    temp_v0_8->words.w1 = -1;
                    temp_v0_8->words.w0 = 0xFA000080;
                    temp_v0_9 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = temp_v0_9 + 8;
                    temp_v0_9->words.w0 = 0xDA380003;
                    temp_v0_9->words.w1 = Matrix_NewMtx(temp_s0);
                    temp_v0_10 = temp_s0->polyOpa.p;
                    temp_s0->polyOpa.p = temp_v0_10 + 8;
                    temp_v0_10->words.w0 = 0xFB000000;
                    temp_v0_10->words.w1 = (phi_s2->unk10 & 0xFF) | ~0xFF;
                    if (phi_s2->unk14 == 1) {
                        temp_v0_11 = temp_s0->polyOpa.p;
                        temp_s0->polyOpa.p = temp_v0_11 + 8;
                        temp_v0_11->words.w1 = (u32) &D_06001170;
                        temp_v0_11->words.w0 = 0xDE000000;
                    } else {
                        temp_v0_12 = temp_s0->polyOpa.p;
                        temp_s0->polyOpa.p = temp_v0_12 + 8;
                        temp_v0_12->words.w1 = (u32) &D_060013B0;
                        temp_v0_12->words.w0 = 0xDE000000;
                    }
                }
            } else {
                temp_v0_13 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_13 + 8;
                temp_v0_13->words.w1 = 0x9B9B9BFF;
                temp_v0_13->words.w0 = 0xFA000080;
                SysMatrix_InsertTranslation(0.0f, 50.0f, 0.0f, 1);
                temp_v0_14 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_14 + 8;
                temp_v0_14->words.w0 = 0xDA380003;
                temp_v0_14->words.w1 = Matrix_NewMtx(temp_s0);
                temp_v0_15 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_15 + 8;
                temp_v0_15->words.w0 = 0xFB000000;
                temp_v0_15->words.w1 = (phi_s2->unk10 & 0xFF) | ~0xFF;
                temp_v0_16 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_16 + 8;
                temp_v0_16->words.w1 = (u32) &D_06000040;
                temp_v0_16->words.w0 = 0xDE000000;
            }
            SysMatrix_StatePop();
        }
        temp_s5 = phi_s5 + 1;
        phi_s2 += 0x3C;
        phi_s5 = temp_s5;
    } while ((s32) temp_s5 < 0x64);
}

