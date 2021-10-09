typedef struct ObjRotlift {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ ? unk15C;                           /* inferred */
    /* 0x15C */ char pad15C[0x8];
} ObjRotlift;                                       /* size = 0x164 */

struct _mips2c_stack_ObjRotlift_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjRotlift_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjRotlift_Init {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_ObjRotlift_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B95E20 {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

void func_80B95E20(ObjRotlift *arg0);               /* static */
static ? D_80B96160;                                /* unable to generate initializer */
static InitChainEntry D_80B96178[6];                /* unable to generate initializer */

void func_80B95E20(ObjRotlift *arg0) {
    s32 temp_s3;
    void *temp_s0;
    void **phi_s2;
    f32 phi_f20;
    s32 phi_s3;

    phi_s2 = arg0 + 0x15C;
    phi_f20 = 300.0f;
    phi_s3 = 0;
    do {
        temp_s0 = *phi_s2;
        if (temp_s0->unk138 == 0) {
            *phi_s2 = NULL;
        } else {
            temp_s0->unk24 = (f32) ((Math_SinS(arg0->actor.shape.rot.y) * phi_f20) + arg0->actor.world.pos.x);
            temp_s0->unk28 = (f32) (arg0->actor.world.pos.y + (380.0f * arg0->actor.scale.y));
            temp_s0->unk2C = (f32) ((Math_CosS(arg0->actor.shape.rot.y) * phi_f20) + arg0->actor.world.pos.z);
            temp_s0->unkBE = (s16) arg0->actor.shape.rot.y;
        }
        temp_s3 = phi_s3 + 1;
        phi_s2 += 4;
        phi_f20 -= 600.0f;
        phi_s3 = temp_s3;
    } while (temp_s3 != 2);
}

void ObjRotlift_Init(ObjRotlift *this, GlobalContext *globalCtx) {
    s32 sp54;
    ? *temp_s2;
    s32 temp_s1;
    void *temp_s1_2;
    s32 phi_s1;
    s32 phi_v0;
    ? *phi_s2;
    ObjRotlift *this = (ObjRotlift *) thisx;

    sp54 = this->actor.params & 1;
    Actor_ProcessInitChain((Actor *) this, D_80B96178);
    phi_s1 = 0;
    phi_s2 = &this->unk15C;
    if (sp54 == 0) {
        do {
            if (((this->actor.params & 0x4000) == 0) || (phi_v0 = 0x100, (phi_s1 != 0))) {
                phi_v0 = 0;
            }
            temp_s1 = phi_s1 + 1;
            temp_s2 = phi_s2 + 4;
            temp_s2->unk-4 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x183, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, phi_v0);
            phi_s1 = temp_s1;
            phi_s2 = temp_s2;
        } while (temp_s1 != 2);
        func_80B95E20(this);
    }
    BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
    temp_s1_2 = (sp54 * 0xC) + &D_80B96160;
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, temp_s1_2->unk8);
    temp_s1_2->unk4 = Lib_SegmentedToVirtual(temp_s1_2->unk4);
}

void ObjRotlift_Destroy(ObjRotlift *this, GlobalContext *globalCtx) {
    ObjRotlift *this = (ObjRotlift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void ObjRotlift_Update(ObjRotlift *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;
    ObjRotlift *this = (ObjRotlift *) thisx;

    temp_v0 = this->actor.params;
    phi_v0 = (s32) temp_v0;
    if ((temp_v0 & 1) == 0) {
        func_80B95E20();
        phi_v0 = (s32) this->actor.params;
    }
    if (phi_v0 >= 0) {
        phi_v0_2 = -0xC8;
    } else {
        phi_v0_2 = 0xC8;
    }
    this->actor.shape.rot.y += phi_v0_2;
}

void ObjRotlift_Draw(ObjRotlift *this, GlobalContext *globalCtx) {
    void *sp1C;
    void *temp_v0;
    ObjRotlift *this = (ObjRotlift *) thisx;

    temp_v0 = ((this->actor.params & 1) * 0xC) + &D_80B96160;
    sp1C = temp_v0;
    AnimatedMat_Draw(globalCtx, temp_v0->unk4);
    func_800BDFC0(globalCtx, temp_v0->unk0);
}
