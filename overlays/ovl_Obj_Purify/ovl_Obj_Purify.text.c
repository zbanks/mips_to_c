void func_80A84CD0(f32 arg0);                       /* static */
s32 func_80A84CF8(ObjPurify *arg0);                 /* static */
void func_80A84EAC(ObjPurify *arg0);                /* static */
void func_80A84EC0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A84FA0(Actor *arg0);                    /* static */
void func_80A84FB4(ObjPurify *arg0, ? arg1);        /* static */
void func_80A84FEC(Actor *arg0);                    /* static */
void func_80A85010(ObjPurify *arg0, ? arg1);        /* static */
void func_80A85048(ObjPurify *arg0);                /* static */
void func_80A85074(ObjPurify *arg0, GlobalContext *arg1); /* static */
void func_80A850B0(void *arg0);                     /* static */
void func_80A850E8(Actor *arg0, ? arg1);            /* static */
void func_80A8515C(Actor *arg0);                    /* static */
void func_80A85194(s32 arg0, ? arg1);               /* static */
void func_80A851C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A85304(void *arg0, GlobalContext *arg1); /* static */
static ? D_80A85480;                                /* unable to generate initializer */
static ? D_80A854A0;                                /* unable to generate initializer */

typedef struct ObjPurify {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(ObjPurify *, GlobalContext *);
    /* 0x0160 */ s32 unk160;                        /* inferred */
    /* 0x0164 */ s16 unk164;                        /* inferred */
    /* 0x0166 */ s16 unk166;                        /* inferred */
    /* 0x0168 */ char pad168[0x8];                  /* maybe part of unk166[5]? */
} ObjPurify;                                        /* size 0x170 */

void func_80A84CD0(f32 arg0) {
    SysMatrix_GetCurrentState()->mf[3][1] = arg0;
}

s32 func_80A84CF8(ObjPurify *arg0) {
    if ((((arg0->actor.params & 0xF) * 0x28) + &D_80A85480)->unk24 == 0) {
        if ((gSaveContext.weekEventReg[12] & 1) != 0) {
            return 1;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return 0;
    }
    if ((gSaveContext.weekEventReg[20] & 2) != 0) {
        return 1;
    }
    return 0;
}

void ObjPurify_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjPurify *this = (ObjPurify *) thisx;
    s16 *sp24;
    s32 sp20;
    s16 *temp_v1;
    s16 temp_v0;

    temp_v0 = this->actor.params;
    temp_v1 = ((temp_v0 & 0xF) * 0x28) + &D_80A85480;
    sp20 = ((s32) temp_v0 >> 0xC) & 1;
    sp24 = temp_v1;
    Actor_SetScale(&this->actor, temp_v1->unk4);
    if (sp20 == 1) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    }
    this->unk166 = Object_GetIndex(&globalCtx->objectCtx, *sp24);
    if ((s32) this->unk166 < 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (sp20 == 0) {
        func_80A84EAC(this);
        return;
    }
    if (func_80A84CF8(this) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    func_80A84EAC(this);
}

void ObjPurify_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjPurify *this = (ObjPurify *) thisx;
    if ((((s32) this->actor.params >> 0xC) & 1) == 1) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_80A84EAC(ObjPurify *arg0) {
    arg0->actionFunc = func_80A84EC0;
}

void func_80A84EC0(Actor *arg0, GlobalContext *arg1) {
    s32 sp28;
    s32 sp24;
    s16 temp_v0;

    if (Object_IsLoaded(arg1 + 0x17D88, (s32) arg0->unk166) != 0) {
        temp_v0 = arg0->params;
        sp28 = ((s32) temp_v0 >> 0xC) & 1;
        sp24 = temp_v0 & 0xF;
        arg0->objBankIndex = (s8) arg0->unk166;
        Actor_SetObjectSegment(arg1, arg0);
        if (sp28 == 1) {
            BgCheck3_LoadMesh(arg1, (DynaPolyActor *) arg0, *(&D_80A854A0 + (sp24 * 0x28)));
            func_80A84FA0(arg0);
            return;
        }
        if (func_80A84CF8((ObjPurify *) arg0) != 0) {
            func_80A8515C(arg0);
            return;
        }
        func_80A84FEC(arg0);
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void func_80A84FA0(Actor *arg0) {
    arg0->unk15C = func_80A84FB4;
}

void func_80A84FB4(ObjPurify *arg0, ? arg1) {
    if (func_80A84CF8(arg0) != 0) {
        Actor_MarkForDeath(&arg0->actor);
    }
}

void func_80A84FEC(Actor *arg0) {
    arg0->draw = func_80A851C8;
    arg0->unk160 = 0;
    arg0->unk15C = func_80A85010;
}

void func_80A85010(ObjPurify *arg0, ? arg1) {
    if (func_80A84CF8(arg0) != 0) {
        func_80A85048(arg0);
    }
}

void func_80A85048(ObjPurify *arg0) {
    arg0->actor.draw = func_80A851C8;
    arg0->unk160 = 0;
    arg0->actionFunc = func_80A85074;
    arg0->unk164 = 0x1E;
}

void func_80A85074(ObjPurify *arg0, GlobalContext *arg1) {
    arg0->unk164 += -1;
    if ((s32) arg0->unk164 <= 0) {
        func_80A850B0();
    }
}

void func_80A850B0(void *arg0) {
    f32 temp_f0;

    temp_f0 = arg0->unkC;
    arg0->unk13C = func_80A85304;
    arg0->unk16C = (f32) (temp_f0 - 90.0f);
    arg0->unk15C = func_80A850E8;
    arg0->unk168 = temp_f0;
}

void func_80A850E8(Actor *arg0, ? arg1) {
    Actor *temp_a3;
    f32 temp_f8;

    temp_a3 = arg0;
    temp_f8 = temp_a3->home.pos.y - 90.0f;
    arg0 = temp_a3;
    Math_StepToF(temp_a3 + 0x168, temp_f8, 0.9f);
    if (Math_StepToF(arg0 + 0x16C, arg0->home.pos.y, 0.9f) != 0) {
        func_80A8515C(arg0);
    }
}

void func_80A8515C(Actor *arg0) {
    arg0->flags &= -0x11;
    arg0->draw = func_80A851C8;
    arg0->unk160 = 1;
    arg0->unk15C = func_80A85194;
}

void func_80A85194(s32 arg0, ? arg1) {

}

void ObjPurify_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjPurify *this = (ObjPurify *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80A851C8(Actor *arg0, GlobalContext *arg1) {
    u32 sp40;
    u32 sp3C;
    Gfx *sp2C;
    Gfx *sp24;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s0;
    void *temp_a2;
    void *temp_v0;

    temp_v0 = ((arg0->params & 0xF) * 0x28) + &D_80A85480 + (arg0->unk160 * 4);
    sp40 = temp_v0->unk8;
    sp3C = temp_v0->unk10;
    temp_a2 = temp_v0->unk18;
    temp_s0 = arg1->state.gfxCtx;
    if (temp_a2 != 0) {
        AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(temp_a2));
    }
    if (sp40 != 0) {
        func_8012C28C(arg1->state.gfxCtx);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp2C = temp_v0_2;
        sp2C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = sp40;
    }
    if (sp3C != 0) {
        func_8012C2DC(arg1->state.gfxCtx);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        sp24 = temp_v0_4;
        sp24->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = sp3C;
    }
}

void func_80A85304(void *arg0, GlobalContext *arg1) {
    void *sp74;
    s32 sp70;
    s32 sp6C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s32 *temp_s2;
    s32 temp_s0;
    void *temp_s3;
    s32 *phi_s2;

    sp74 = ((arg0->unk1C & 0xF) * 0x28) + &D_80A85480;
    if (arg0->unk16C < arg0->unk168) {
        sp6C = 1;
        sp70 = 0;
    } else {
        sp6C = 0;
        sp70 = 1;
    }
    temp_a0 = arg1->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = &sp6C;
    do {
        temp_s0 = *phi_s2 * 4;
        temp_s3 = sp74 + temp_s0;
        AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(temp_s3->unk18));
        func_80A84CD0((arg0 + temp_s0)->unk168);
        temp_v0 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s2 = phi_s2 + 4;
        temp_s1->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = temp_s3->unk10;
        phi_s2 = temp_s2;
    } while (temp_s2 != &sp74);
}

