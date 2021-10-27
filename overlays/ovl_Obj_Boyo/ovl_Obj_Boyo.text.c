struct _mips2c_stack_ObjBoyo_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjBoyo_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjBoyo_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjBoyo_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809A5DC0 {};              /* size 0x0 */

struct _mips2c_stack_func_809A5DE0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A5E14 {};              /* size 0x0 */

struct _mips2c_stack_func_809A5E24 {};              /* size 0x0 */

void func_809A5DC0(void *arg0, void *arg1);         /* static */
void func_809A5DE0(Actor *arg0, Actor *arg1);       /* static */
void func_809A5E14(s32 arg0, void *arg1);           /* static */
s16 *func_809A5E24(ObjBoyo *arg0, GlobalContext *arg1, s32 *arg2); /* static */
extern Gfx D_06000300;
extern void D_06000E88;
static ColliderCylinderInit D_809A6170 = {
    {0xA, 0, 0xD, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0x1CBFFBE, 0, 0}, 0, 1, 1},
    {0x3C, 0x8C, 0, {0, 0, 0}},
};
static InitChainEntry D_809A619C[5];                /* unable to generate initializer */
static s16 D_809A61B4[14];                          /* unable to generate initializer */
static ? sBumperCollideInfo;                        /* unable to generate initializer */

void ObjBoyo_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    ObjBoyo *this = (ObjBoyo *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_809A619C);
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_809A6170);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    this->actor.colChkInfo.mass = 0xFF;
    this->unk_190 = Lib_SegmentedToVirtual(&D_06000E88);
}

void ObjBoyo_Destroy(Actor *thisx, GlobalContext *globalCtx2) {
    ObjBoyo *this = (ObjBoyo *) thisx;
    Collider_DestroyCylinder(globalCtx2, &this->collider);
}

void func_809A5DC0(void *arg0, void *arg1) {
    arg1->unk_B80 = 30.0f;
    arg1->unk_B84 = (s16) arg0->unk_92;
}

void func_809A5DE0(Actor *arg0, Actor *arg1) {
    arg1[2].velocity.y = 30.0f;
    arg1->unk_2F4 = Actor_YawBetweenActors(arg0, arg1);
}

void func_809A5E14(s32 arg0, void *arg1) {
    arg1->unk_1F0 = 0;
}

s16 *func_809A5E24(ObjBoyo *arg0, GlobalContext *arg1, s32 *arg2) {
    s16 *temp_v1;
    s32 temp_a1;
    s16 *phi_v0;
    s32 phi_a1;

    if ((arg0->collider.base.ocFlags2 & 1) != 0) {
        *arg2 = 0;
        return arg1->actorCtx.actorList[2].first;
    }
    phi_v0 = D_809A61B4;
    if ((arg0->collider.base.ocFlags1 & 2) != 0) {
        temp_v1 = arg0->collider.base.oc;
        phi_a1 = 1;
loop_4:
        if (*temp_v1 == *phi_v0) {
            *arg2 = phi_a1;
            return temp_v1;
        }
        temp_a1 = phi_a1 + 1;
        phi_v0 += 8;
        phi_a1 = temp_a1;
        if (temp_a1 == 3) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_4;
    }
    return NULL;
}

void ObjBoyo_Update(Actor *thisx, GlobalContext *globalCtx2) {
    s32 sp30;
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 temp_f2;
    s16 *temp_v0;
    s16 temp_v0_2;
    ObjBoyo *this = (ObjBoyo *) thisx;

    temp_v0 = func_809A5E24(this, globalCtx2, &sp30);
    if (temp_v0 != 0) {
        *(&sBumperCollideInfo + (sp30 * 8))(this, temp_v0);
        this->unk_194 = 0x64;
        this->unk_196 = 3;
        this->unk_1A4 = 0x3F40;
        this->unk_1A6 = 0x7D0;
        this->unk_1A8 = 0;
        this->unk_1AA = 0x2DF7;
        this->unk_1AC = 0x258;
        this->unk_19C = 0.03f;
        this->unk_1A0 = 0.03f;
        this->unk_198 = 0.01f;
    }
    temp_v0_2 = this->unk_194;
    if ((s32) temp_v0_2 > 0) {
        this->unk_1AA += this->unk_1AC;
        this->unk_1A8 += this->unk_1AA;
        this->unk_194 = temp_v0_2 - this->unk_196;
        temp_f2 = (Math_CosS((s16) (this->unk_1A8 + this->unk_1A4)) * (f32) this->unk_194 * this->unk_19C * this->unk_198) + 0.1f;
        this->actor.scale.z = temp_f2;
        this->actor.scale.x = temp_f2;
        this->actor.scale.y = (Math_CosS((s16) (this->unk_1A8 + this->unk_1A6)) * (f32) this->unk_194 * this->unk_1A0 * this->unk_198) + 0.1f;
    } else {
        Actor_SetScale((Actor *) this, 0.1f);
        if ((this->collider.base.acFlags & 2) != 0) {
            this->unk_194 = 0x1E;
            this->unk_196 = 2;
            this->unk_198 = 0.033333335f;
            this->unk_19C = 0.012f;
            this->unk_1A4 = 0x3F40;
            this->unk_1A6 = 0x7D0;
            this->unk_1A8 = 0;
            this->unk_1AA = 0x3A98;
            this->unk_1AC = 0x640;
            this->unk_1A0 = 0.006f;
        }
    }
    this->collider.base.acFlags &= 0xFFFD;
    this->collider.base.ocFlags1 &= 0xFFFD;
    this->collider.base.ocFlags2 &= 0xFFFE;
    temp_a1 = &globalCtx2->colChkCtx;
    temp_a2 = &this->collider;
    sp20 = temp_a2;
    sp24 = temp_a1;
    CollisionCheck_SetOC(globalCtx2, temp_a1, (Collider *) temp_a2);
    if (this->actor.xzDistToPlayer < 2000.0f) {
        CollisionCheck_SetAC(globalCtx2, temp_a1, (Collider *) temp_a2);
    }
}

void ObjBoyo_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjBoyo *this = (ObjBoyo *) thisx;
    AnimatedMat_Draw(globalCtx, this->unk_190);
    func_800BDFC0(globalCtx, &D_06000300);
}
