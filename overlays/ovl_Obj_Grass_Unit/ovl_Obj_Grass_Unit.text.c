struct _mips2c_stack_ObjGrassUnit_Init {
    /* 0x00 */ char pad0[0x73];
    /* 0x73 */ s8 sp73;                             /* inferred */
    /* 0x74 */ char pad74[0x8];                     /* maybe part of sp73[9]? */
    /* 0x7C */ s32 sp7C;                            /* inferred */
    /* 0x80 */ CollisionPoly *sp80;                 /* inferred */
    /* 0x84 */ char pad84[0x10];                    /* maybe part of sp80[5]? */
    /* 0x94 */ Actor *sp94;                         /* inferred */
    /* 0x98 */ char pad98[0x8];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_809ABDE0 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809ABE54 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809ABEC4 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809ABF38 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

s32 func_800C9EBC(s32, s32, s32, f32 *, ? *, ? *);  /* extern */
s32 func_809ABDE0(ObjGrassUnit *arg0, GlobalContext *arg1); /* static */
s32 func_809ABE54(ObjGrassUnit *arg0, GlobalContext *arg1); /* static */
s32 func_809ABEC4(ObjGrassUnit *arg0, GlobalContext *arg1); /* static */
s32 func_809ABF38(GlobalContext *arg0, Vec3f *arg1); /* static */
static ? D_809AC408;                                /* unable to generate initializer */
static Actor *D_809AC418 = NULL;
static Actor *D_809AC41C = NULL;
static Actor *D_809AC420 = NULL;
static s32 D_809AC424 = 0;

s32 func_809ABDE0(ObjGrassUnit *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x10B, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) -1);
    D_809AC418 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0->room = arg0->actor.room;
        return 1;
    }
    return 0;
}

s32 func_809ABE54(ObjGrassUnit *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x10C, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    D_809AC41C = temp_v0;
    if (temp_v0 != 0) {
        temp_v0->room = arg0->actor.room;
        return 1;
    }
    return 0;
}

s32 func_809ABEC4(ObjGrassUnit *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x10C, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 1);
    D_809AC420 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0->room = arg0->actor.room;
        return 1;
    }
    return 0;
}

s32 func_809ABF38(GlobalContext *arg0, Vec3f *arg1) {
    ? sp34;
    f32 sp30;
    ? sp2C;

    if ((func_800C9EBC(arg0 + 0x830, arg1->x, arg1->z, &sp30, &sp34, &sp2C) != 0) && (arg1->y < sp30)) {
        return 1;
    }
    return 0;
}

void ObjGrassUnit_Init(ObjGrassUnit *this, GlobalContext *globalCtx) {
    Actor *sp94;
    CollisionPoly *sp80;
    s32 sp7C;
    s8 sp73;
    Actor *temp_v0;
    Actor *temp_v1;
    CollisionContext *temp_s7;
    Vec3f *temp_s0;
    f32 temp_f0;
    s16 temp_v1_2;
    s32 temp_s4;
    void *temp_s1;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s6;
    s32 phi_s5;
    s32 phi_s4;
    Actor *phi_a1;
    f32 phi_f20;
    f32 phi_f20_2;
    f32 phi_f20_3;
    ObjGrassUnit *this = (ObjGrassUnit *) thisx;

    sp73 = ((s32) this->actor.params >> 8) & 0x1F;
    if ((D_809AC418 == 0) && (func_809ABDE0(this, globalCtx) == 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((D_809AC41C == 0) && (func_809ABE54(this, globalCtx) != 0)) {
        D_809AC41C->unk190 = (Actor *) D_809AC418;
    }
    if ((D_809AC420 == 0) && (func_809ABEC4(this, globalCtx) != 0)) {
        D_809AC420->unk190 = (Actor *) D_809AC418;
    }
    temp_v0 = D_809AC418;
    if ((D_809AC424 == 0) && (temp_v0 != 0)) {
        temp_v1 = D_809AC41C;
        if ((temp_v1 != 0) && (D_809AC420 != 0)) {
            D_809AC424 = 1;
            temp_v0->unk3298 = temp_v1;
            D_809AC418->unk329C = (Actor *) D_809AC420;
            D_809AC41C->unk190 = (Actor *) D_809AC418;
            D_809AC420->unk190 = (Actor *) D_809AC418;
        }
    }
    temp_v1_2 = D_809AC418->unk2944;
    phi_a1 = D_809AC418;
    if ((s32) temp_v1_2 >= 0x28) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_s2 = D_809AC418 + (temp_v1_2 << 8);
    temp_s2->unk240 = 0;
    temp_s6 = ((this->actor.params & 1) * 8) + &D_809AC408;
    temp_s2_2 = temp_s2 + 0x144;
    phi_s4 = 0;
    phi_f20 = 0.0f;
    phi_f20_3 = 0.0f;
    if (temp_s6->unk0 > 0) {
        temp_s7 = &globalCtx->colCtx;
        sp94 = D_809AC418;
        phi_s5 = 0;
        do {
            temp_s1 = temp_s6->unk4 + phi_s5;
            temp_s0 = temp_s2_2 + (temp_s2_2->unkFC * 0x14) + 0xC;
            temp_s0->x = (Math_CosS((s16) (this->actor.home.rot.y + temp_s1->unk4)) * temp_s1->unk0) + this->actor.home.pos.x;
            temp_s0->y = this->actor.home.pos.y + 100.0f;
            temp_s0->z = (Math_SinS((s16) (this->actor.home.rot.y + temp_s1->unk4)) * temp_s1->unk0) + this->actor.home.pos.z;
            temp_f0 = func_800C411C(temp_s7, &sp80, &sp7C, (Actor *) this, temp_s0);
            temp_s0->y = temp_f0;
            phi_f20_2 = phi_f20_3;
            if ((fabsf(temp_f0 - this->actor.home.pos.y) < 80.0f) && (temp_s0->y > -32000.0f)) {
                temp_s2_2->unkFC = (s16) (temp_s2_2->unkFC + 1);
                temp_s0->unkC = (s16) (Rand_Next() >> 0x10);
                temp_s0->unkE = sp73;
                if (func_809ABF38(globalCtx, temp_s0) != 0) {
                    temp_s0->unkF = (u8) (temp_s0->unkF | 8);
                }
                phi_f20_2 = phi_f20_3 + temp_s0->y;
            }
            temp_s4 = phi_s4 + 1;
            phi_s5 += 8;
            phi_s4 = temp_s4;
            phi_f20 = phi_f20_2;
            phi_f20_3 = phi_f20_2;
        } while (temp_s4 < temp_s6->unk0);
        phi_a1 = sp94;
    }
    if ((s32) temp_s2_2->unkFC > 0) {
        phi_a1->unk2944 = (s16) (phi_a1->unk2944 + 1);
        temp_s2_2->unk0 = (f32) this->actor.home.pos.x;
        temp_s2_2->unk4 = (f32) (phi_f20 / (f32) temp_s2_2->unkFC);
        temp_s2_2->unk8 = (f32) this->actor.home.pos.z;
    }
    Actor_MarkForDeath((Actor *) this);
}
