typedef struct ObjOcarinalift {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjOcarinalift *, GlobalContext *);
    /* 0x160 */ f32 unk160;                         /* inferred */
    /* 0x164 */ s32 unk164;                         /* inferred */
    /* 0x168 */ s32 unk168;                         /* inferred */
    /* 0x16C */ s32 unk16C;                         /* inferred */
    /* 0x170 */ void *unk170;                       /* inferred */
    /* 0x174 */ char pad174[0x2];
    /* 0x176 */ s16 unk176;                         /* inferred */
} ObjOcarinalift;                                   /* size = 0x178 */

struct _mips2c_stack_ObjOcarinalift_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjOcarinalift_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjOcarinalift_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjOcarinalift_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC94C0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC9680 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC96A4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC96B4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC96D0 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad2C[0x8];                     /* maybe part of sp28[3]? */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0xC];                     /* maybe part of sp34[4]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80AC99C0 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC99D4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AC9A68 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC9A7C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC9AB8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC9AE0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC9B48 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC9B5C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AC9C20 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC9C48 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 func_800B8718(DynaPolyActor *, GlobalContext *); /* extern */
? func_800B8804(DynaPolyActor *, GlobalContext *, ?); /* extern */
s32 func_800B886C(ObjOcarinalift *, GlobalContext *, GlobalContext *); /* extern */
void func_80AC94C0(ObjOcarinalift *arg0, s32 arg1); /* static */
void func_80AC9680(ObjOcarinalift *arg0);           /* static */
void func_80AC96A4(s32 arg0, ? arg1);               /* static */
void func_80AC96B4(ObjOcarinalift *arg0);           /* static */
void func_80AC96D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC99C0(Actor *arg0, s32);               /* static */
void func_80AC99D4(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80AC9A68(Actor *arg0, s32);               /* static */
void func_80AC9A7C(void *arg0, ? arg1);             /* static */
void func_80AC9AB8(ObjOcarinalift *arg0, s32);      /* static */
void func_80AC9AE0(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80AC9B48(DynaPolyActor *arg0);            /* static */
void func_80AC9B5C(ObjOcarinalift *arg0, GlobalContext *arg1); /* static */
void func_80AC9C20(ObjOcarinalift *arg0);           /* static */
void func_80AC9C48(Actor *arg0, ? arg1);            /* static */
extern Gfx D_06001DB0;
extern Gfx D_06001E40;
extern CollisionHeader D_060048D0;
static InitChainEntry D_80AC9D70[8];                /* unable to generate initializer */

void func_80AC94C0(ObjOcarinalift *arg0, s32 arg1) {
    Math_Vec3s_ToVec3f(arg0 + 0x24, arg0->unk170 + (arg1 * 6));
}

void ObjOcarinalift_Init(ObjOcarinalift *this, GlobalContext *globalCtx) {
    Path *temp_v0;
    s16 temp_v1;
    ObjOcarinalift *this = (ObjOcarinalift *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80AC9D70);
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.z = 0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060048D0);
    this->unk160 = (f32) this->actor.home.rot.z * 0.1f;
    if (this->unk160 < 0.01f) {
        func_80AC9680(this);
        return;
    }
    temp_v1 = this->actor.params;
    this->unk168 = ((s32) temp_v1 >> 7) & 0x1F;
    temp_v0 = &globalCtx->setupPathList[temp_v1 & 0x7F];
    this->unk16C = 1;
    this->unk164 = temp_v0->count - 1;
    this->unk170 = Lib_SegmentedToVirtual((void *) temp_v0->points);
    func_80AC94C0(this, this->unk168);
    if (((((s32) this->actor.params >> 0xC) & 3) != 1) && (Flags_GetSwitch(globalCtx, this->actor.home.rot.x & 0x7F) != 0)) {
        func_80AC96B4(this);
        return;
    }
    func_80AC9AB8(this);
}

void ObjOcarinalift_Destroy(ObjOcarinalift *this, GlobalContext *globalCtx) {
    ObjOcarinalift *this = (ObjOcarinalift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80AC9680(ObjOcarinalift *arg0) {
    arg0->actor.flags &= -0x11;
    arg0->actionFunc = func_80AC96A4;
}

void func_80AC96A4(ObjOcarinalift *arg0, GlobalContext *arg1) {

}

void func_80AC96B4(ObjOcarinalift *arg0) {
    arg0->actionFunc = func_80AC96D0;
    arg0->actor.speedXZ = 0.0f;
}

void func_80AC96D0(Actor *arg0, GlobalContext *arg1) {
    ? sp48;
    f32 sp44;
    s32 sp34;
    Vec3f *sp28;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;
    void *temp_v0;
    void *temp_v1_2;
    f32 phi_f0;
    f32 phi_f12;

    func_800B9010(arg0, 0x2103U);
    Math_Vec3s_ToVec3f((Vec3f *) &sp48, arg0->unk170 + (arg0->unk168 * 6) + (arg0->unk16C * 6));
    temp_a2 = &arg0->velocity;
    sp28 = temp_a2;
    Math_Vec3f_Diff((Vec3f *) &sp48, (Vec3f *) &arg0->world, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp28);
    temp_f2 = arg0->unk160;
    if ((temp_f0 < (temp_f2 * 8.0f)) && (temp_f2 > 2.0f)) {
        phi_f0 = ((temp_f2 - 2.0f) * 0.1f) + 2.0f;
        phi_f12 = temp_f2 * 0.03f;
    } else {
        phi_f0 = temp_f2;
        phi_f12 = temp_f2 * 0.16f;
    }
    sp44 = temp_f0;
    Math_StepToF(&arg0->speedXZ, phi_f0, phi_f12);
    temp_f0_2 = arg0->speedXZ;
    if ((temp_f0_2 + 0.05f) < temp_f0) {
        Math_Vec3f_Scale(sp28, temp_f0_2 / temp_f0);
        arg0->world.pos.x += arg0->velocity.x;
        arg0->world.pos.y += arg0->velocity.y;
        arg0->world.pos.z += arg0->velocity.z;
        return;
    }
    sp34 = 1;
    temp_v1 = arg0->unk168 + arg0->unk16C;
    arg0->unk168 = temp_v1;
    temp_a0 = arg0->unk164;
    temp_a1 = ((s32) arg0->params >> 0xC) & 3;
    arg0->speedXZ *= 0.4f;
    if (((temp_v1 >= temp_a0) && (arg0->unk16C > 0)) || ((temp_v1 <= 0) && (arg0->unk16C < 0))) {
        if (temp_a1 == 0) {
            arg0->unk16C = (s32) -arg0->unk16C;
            arg0->unk174 = 0xA;
            func_80AC9A68(arg0, temp_a1);
        } else {
            temp_v1_2 = arg0->unk170 + (temp_a0 * 6);
            if (arg0->unk16C > 0) {
                arg0->unk168 = 0;
            } else {
                arg0->unk168 = temp_a0;
            }
            temp_v0 = arg0->unk170;
            if ((temp_v1_2->unk0 != temp_v0->unk0) || (temp_v1_2->unk2 != temp_v0->unk2) || (temp_v1_2->unk4 != temp_v0->unk4)) {
                func_80AC99C0(arg0, temp_a1);
                func_800C62BC(arg1, arg1 + 0x880, arg0->unk144);
                sp34 = 0;
            } else if ((temp_a1 == 1) && ((((s32) arg0->params >> 7) & 0x1F) == arg0->unk168)) {
                func_80AC9AB8((ObjOcarinalift *) arg0, temp_a1);
            }
        }
    } else if ((temp_a1 == 1) && ((((s32) arg0->params >> 7) & 0x1F) == temp_v1)) {
        func_80AC9AB8((ObjOcarinalift *) arg0, temp_a1);
    }
    if (sp34 != 0) {
        func_80AC94C0((ObjOcarinalift *) arg0, arg0->unk168);
    }
}

void func_80AC99C0(Actor *arg0) {
    arg0->unk15C = func_80AC99D4;
}

void func_80AC99D4(DynaPolyActor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    if (func_800CAF70(arg0) == 0) {
        func_80AC94C0((ObjOcarinalift *) arg0, arg0->unk168);
        func_800C6314(arg1, arg1 + 0x880, arg0->bgId);
        temp_v0 = arg0->actor.params;
        if (((((s32) temp_v0 >> 0xC) & 3) == 1) && ((((s32) temp_v0 >> 7) & 0x1F) == arg0->unk168)) {
            func_80AC9AB8((ObjOcarinalift *) arg0);
            return;
        }
        func_80AC96B4((ObjOcarinalift *) arg0);
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_80AC9A68(Actor *arg0) {
    arg0->unk15C = func_80AC9A7C;
}

void func_80AC9A7C(void *arg0, ? arg1) {
    arg0->unk174 = (s16) (arg0->unk174 - 1);
    if ((s32) arg0->unk174 <= 0) {
        func_80AC96B4();
    }
}

void func_80AC9AB8(ObjOcarinalift *arg0) {
    arg0->actor.flags |= 0xA000001;
    arg0->actionFunc = func_80AC9AE0;
}

void func_80AC9AE0(DynaPolyActor *arg0, GlobalContext *arg1) {
    if (func_800B8718(arg0, arg1) != 0) {
        func_80152434(arg1, 1U);
        func_80AC9B48(arg0);
        return;
    }
    if (func_800CAF70(arg0) != 0) {
        func_800B8804(arg0, arg1, 0x42200000);
    }
}

void func_80AC9B48(DynaPolyActor *arg0) {
    arg0->unk15C = func_80AC9B5C;
}

void func_80AC9B5C(ObjOcarinalift *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a1;
    GlobalContext *temp_a2;
    u16 temp_v1;

    temp_a2 = arg1;
    temp_a1 = temp_a2;
    arg1 = temp_a2;
    if (func_800B886C(arg0, temp_a1, temp_a2) != 0) {
        temp_v1 = arg1->msgCtx.unk1202A;
        if (temp_v1 == 4) {
            if (arg1->msgCtx.unk1202E == 0) {
                if ((((s32) arg0->actor.params >> 0xC) & 3) != 1) {
                    Actor_SetSwitchFlag(arg1, arg0->actor.home.rot.x & 0x7F);
                }
                ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
                func_80AC9C20(arg0);
                return;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return;
        }
        if ((s32) temp_v1 >= 2) {
            arg1->msgCtx.unk1202A = 4;
        }
        func_80AC9AB8(arg0);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80AC9C20(ObjOcarinalift *arg0) {
    arg0->actor.flags &= 0xF5FFFFFE;
    arg0->actionFunc = func_80AC9C48;
}

void func_80AC9C48(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = arg0->cutscene;
    arg0 = arg0;
    temp_a1 = arg0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->cutscene;
        arg0 = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, temp_a1);
        arg0->unk176 = 0x32;
        func_80AC96B4((ObjOcarinalift *) arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->cutscene);
}

void ObjOcarinalift_Update(ObjOcarinalift *this, GlobalContext *globalCtx) {
    ObjOcarinalift *temp_a2;
    s16 temp_v0;
    ObjOcarinalift *this = (ObjOcarinalift *) thisx;

    temp_a2 = this;
    this = temp_a2;
    temp_a2->actionFunc(temp_a2, globalCtx);
    Actor_SetHeight((Actor *) this, 10.0f);
    temp_v0 = this->unk176;
    if ((s32) temp_v0 > 0) {
        this->unk176 = temp_v0 - 1;
        if (this->unk176 == 0) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
        }
    }
}

void ObjOcarinalift_Draw(ObjOcarinalift *this, GlobalContext *globalCtx) {
    ObjOcarinalift *this = (ObjOcarinalift *) thisx;
    func_800BDFC0(globalCtx, &D_06001E40);
    func_800BE03C(globalCtx, &D_06001DB0);
}
