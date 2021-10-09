? func_801388E4(void ***, ? *, s32, s32);           /* extern */
void func_80137970(MtxF *arg0, u32 arg1, u16 *arg2, s32 arg3, Vec3f *arg4); /* static */
void func_80137B34(GraphicsContext *arg0, void ***arg1, s32 arg2, s32 arg3); /* static */
void func_80137EBC(GraphicsContext *arg0, void ***arg1, s32 arg2, s32 arg3, s32 arg4); /* static */
void func_80137F58(GraphicsContext *arg0, void ***arg1, s32 arg2, u32 arg3, s32); /* static */
void func_80138050(s32 arg0, GraphicsContext **arg1, void ***arg2, ? (*arg3)(s32, GraphicsContext **, void ***), s32 (*arg4)(s32, GraphicsContext **, s32, void ***), s32 arg5, s32 arg6, s32 arg7); /* static */
void func_80138228(GraphicsContext **arg4);         /* static */
void func_80138258(s32 arg4, GraphicsContext **arg5); /* static */
void func_8013828C(s32 arg4, GraphicsContext **arg5, void ***arg6); /* static */
void func_801382C4(s32 arg4, GraphicsContext **arg5, void ***arg6, ? (*arg7)(s32, GraphicsContext **, void ***)); /* static */
void func_80138300(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3); /* static */
void func_8013835C(void *arg0, s32 arg1, s32 arg2, Vec3f *arg3); /* static */
static ? D_801F5AC0;
RSPMatrix D_801D1DE0 = {
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};



void func_80137970(MtxF *arg0, u32 arg1, u16 *arg2, s32 arg3, Vec3f *arg4) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    Vec3f sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 *temp_a1;
    void *temp_s0;
    void *temp_s1;
    void *phi_s0;

    sp5C = arg0->mf[3][0];
    sp60 = arg0->mf[3][1];
    sp64 = arg0->mf[3][2];
    arg0->mf[3][0] = 0.0f;
    arg0->mf[3][1] = 0.0f;
    arg0->mf[3][2] = 0.0f;
    phi_s0 = (void *) arg1;
    if (arg1 < (u32) ((*arg2 * 0xA) + arg1)) {
        do {
            temp_s1 = (phi_s0->unk0 * 0x10) + arg3;
            temp_a1 = &sp44;
            temp_s1->unk0 = (s16) (s32) arg4->x;
            temp_s1->unk2 = (s16) (s32) arg4->y;
            temp_s1->unk4 = (s16) (s32) arg4->z;
            sp44 = (f32) phi_s0->unk6;
            sp48 = (f32) phi_s0->unk7;
            sp4C = (f32) phi_s0->unk8;
            SkinMatrix_Vec3fMtxFMultXYZ(arg0, (Vec3f *) temp_a1, &sp50);
            temp_s0 = phi_s0 + 0xA;
            temp_s1->unkC = (s8) (s32) sp50.x;
            temp_s1->unkD = (s8) (s32) sp50.y;
            temp_s1->unkE = (s8) (s32) sp50.z;
            phi_s0 = temp_s0;
        } while ((u32) temp_s0 < (u32) ((*arg2 * 0xA) + arg1));
    }
    arg0->mf[3][0] = sp5C;
    arg0->mf[3][1] = sp60;
    arg0->mf[3][2] = sp64;
}

void func_80137B34(GraphicsContext *arg0, void ***arg1, s32 arg2, s32 arg3) {
    u8 *spDC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s32 spBC;
    Vec3f spAC;
    Vec3f spA0;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    void *sp64;
    f32 *temp_a1_2;
    f32 *temp_a1_3;
    f32 *temp_a1_4;
    f32 temp_f20;
    f32 temp_f6;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_at;
    u16 *temp_s6_2;
    u16 temp_v1;
    u8 *temp_a1;
    u8 temp_t1;
    void *temp_fp;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s2;
    void *temp_s3;
    void *temp_s6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1_2;
    u16 *phi_s6;
    void *phi_s0;
    f32 phi_f6;
    u8 *phi_a1;

    temp_v0 = Lib_SegmentedToVirtual(Lib_SegmentedToVirtual(*(Lib_SegmentedToVirtual(*arg1->unk0) + (arg2 * 4)))->unkC);
    temp_s2 = temp_v0;
    temp_v0_2 = Lib_SegmentedToVirtual(temp_v0->unk4);
    temp_a1 = arg1->unk48 + (arg2 * 0xC);
    temp_s6 = temp_v0_2;
    spBC = (temp_a1 + (*temp_a1 * 4))->unk4;
    temp_a0 = temp_s2->unk2 * 0x10;
    phi_a1 = temp_a1;
    if ((u32) temp_v0_2 < (u32) (temp_a0 + temp_v0_2)) {
        sp64 = temp_a0 + temp_v0_2;
        spDC = temp_a1;
        phi_s6 = (u16 *) temp_s6;
        do {
            temp_fp = Lib_SegmentedToVirtual(phi_s6->unk8);
            temp_v0_3 = Lib_SegmentedToVirtual(phi_s6->unkC);
            temp_v1 = phi_s6->unk2;
            temp_s3 = temp_v0_3;
            if (temp_v1 == 1) {
                temp_a1_2 = &sp80;
                sp80 = (f32) temp_s3->unk2;
                sp84 = (f32) temp_s3->unk4;
                sp88 = (f32) temp_s3->unk6;
                SkinMatrix_Vec3fMtxFMultXYZ(&D_801F5AC0 + (temp_s3->unk0 << 6), (Vec3f *) temp_a1_2, &spAC);
            } else {
                temp_s0 = temp_v0_3;
                phi_s0 = temp_s0;
                if (arg3 != 0) {
                    temp_a1_3 = &sp74;
                    temp_s0_2 = (phi_s6->unk4 * 0xA) + temp_s3;
                    sp74 = (f32) temp_s0_2->unk2;
                    sp78 = (f32) temp_s0_2->unk4;
                    sp7C = (f32) temp_s0_2->unk6;
                    SkinMatrix_Vec3fMtxFMultXYZ(&D_801F5AC0 + (temp_s0_2->unk0 << 6), (Vec3f *) temp_a1_3, &spAC);
                } else {
                    temp_a0_2 = temp_v1 * 0xA;
                    temp_at = (u32) temp_v0_3 < (u32) (temp_a0_2 + temp_v0_3);
                    spAC.x = 0.0f;
                    spAC.y = 0.0f;
                    spAC.z = 0.0f;
                    if (temp_at != 0) {
                        do {
                            temp_t1 = phi_s0->unk8;
                            temp_f6 = (f32) temp_t1;
                            phi_f6 = temp_f6;
                            if ((s32) temp_t1 < 0) {
                                phi_f6 = temp_f6 + 4294967296.0f;
                            }
                            temp_f20 = phi_f6 * 0.01f;
                            temp_a1_4 = &spC0;
                            spC0 = (f32) phi_s0->unk2;
                            spC4 = (f32) phi_s0->unk4;
                            spC8 = (f32) phi_s0->unk6;
                            SkinMatrix_Vec3fMtxFMultXYZ(&D_801F5AC0 + (phi_s0->unk0 << 6), (Vec3f *) temp_a1_4, &spA0);
                            temp_s0_3 = phi_s0 + 0xA;
                            spAC.x += spA0.x * temp_f20;
                            spAC.y += spA0.y * temp_f20;
                            spAC.z += spA0.z * temp_f20;
                            phi_s0 = temp_s0_3;
                        } while ((u32) temp_s0_3 < (u32) (temp_a0_2 + temp_s3));
                    }
                }
            }
            func_80137970(&D_801F5AC0 + (*(temp_s3 + (phi_s6->unk4 * 0xA)) << 6), (u32) temp_fp, phi_s6, spBC, &spAC);
            temp_s6_2 = phi_s6 + 0x10;
            phi_s6 = temp_s6_2;
        } while ((u32) temp_s6_2 < (u32) sp64);
        phi_a1 = spDC;
    }
    temp_v1_2 = arg0->polyOpa.p;
    arg0->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xDB060020;
    temp_v1_2->words.w1 = (phi_a1 + (*phi_a1 * 4))->unk4;
    *phi_a1 = *phi_a1 == 0;
}

void func_80137EBC(GraphicsContext *arg0, void ***arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *sp1C;
    void *temp_v0;
    void *temp_v1;
    void *phi_t0;

    temp_v0 = Lib_SegmentedToVirtual(Lib_SegmentedToVirtual(*(Lib_SegmentedToVirtual(**arg1) + (arg2 * 4)))->unkC);
    phi_t0 = temp_v0;
    if ((arg4 & 1) == 0) {
        sp1C = temp_v0;
        func_80137B34(arg0, arg1, arg2, arg3);
        phi_t0 = sp1C;
    }
    temp_v1 = arg0->polyOpa.p;
    arg0->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = phi_t0->unk8;
}

void func_80137F58(GraphicsContext *arg0, void ***arg1, s32 arg2, u32 arg3) {
    u32 sp24;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Mtx *temp_v0;
    u32 phi_t0;

    sp24 = arg3;
    phi_t0 = arg3;
    if (arg3 == 0) {
        phi_t0 = Lib_SegmentedToVirtual(*(Lib_SegmentedToVirtual(**arg1) + (arg2 * 4)))->unkC;
    }
    if (phi_t0 != 0) {
        sp24 = phi_t0;
        temp_v0 = SkinMatrix_MtxFToNewMtx(arg0, (arg2 << 6) + &D_801F5AC0);
        if (temp_v0 != 0) {
            temp_v1 = arg0->polyOpa.p;
            arg0->polyOpa.p = temp_v1 + 8;
            temp_v1->words.w1 = (u32) temp_v0;
            temp_v1->words.w0 = 0xDA380000;
            temp_v1_2 = arg0->polyOpa.p;
            arg0->polyOpa.p = temp_v1_2 + 8;
            temp_v1_2->words.w1 = phi_t0;
            temp_v1_2->words.w0 = 0xDE000000;
            temp_v1_3 = arg0->polyOpa.p;
            arg0->polyOpa.p = temp_v1_3 + 8;
            temp_v1_3->words.w1 = 0x40;
            temp_v1_3->words.w0 = 0xD8380002;
            temp_v1_4 = arg0->polyOpa.p;
            arg0->polyOpa.p = temp_v1_4 + 8;
            temp_v1_4->words.w1 = 0;
            temp_v1_4->words.w0 = 0xE7000000;
        }
    }
}

void func_80138050(s32 arg0, GraphicsContext **arg1, void ***arg2, ? (*arg3)(s32, GraphicsContext **, void ***), s32 (*arg4)(s32, GraphicsContext **, s32, void ***), s32 arg5, s32 arg6, s32 arg7) {
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    GraphicsContext *temp_s5;
    Mtx *temp_v0;
    s32 temp_s1;
    s32 temp_v1;
    s32 phi_s1;
    void *phi_s2;
    s32 phi_s0;

    temp_s5 = *arg1;
    if ((arg7 & 1) == 0) {
        func_801388E4(arg2, &D_801F5AC0, arg0, arg5);
    }
    if ((arg7 & 2) == 0) {
        temp_a0 = temp_s5->polyOpa.p;
        temp_s5->polyOpa.p = temp_a0 + 8;
        temp_a0->words.w1 = &D_801D1DE0;
        temp_a0->words.w0 = 0xDA380003;
        temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s5, arg2 + 4);
        if (temp_v0 != 0) {
            temp_a0_2 = temp_s5->polyOpa.p;
            temp_s5->polyOpa.p = temp_a0_2 + 8;
            temp_a0_2->words.w1 = (u32) temp_v0;
            temp_a0_2->words.w0 = 0xDA380003;
            goto block_5;
        }
    } else {
block_5:
        phi_s1 = 0;
        phi_s2 = Lib_SegmentedToVirtual((*arg2)->unk0);
        if ((s32) (*arg2)->unk4 > 0) {
            do {
                phi_s0 = 1;
                if (arg4 != 0) {
                    phi_s0 = arg4(arg0, arg1, phi_s1, arg2);
                }
                temp_v1 = Lib_SegmentedToVirtual(*phi_s2)->unk8;
                if ((temp_v1 == 4) && (phi_s0 != 0)) {
                    func_80137EBC(temp_s5, arg2, phi_s1, arg6, arg7);
                } else if ((temp_v1 == 0xB) && (phi_s0 != 0)) {
                    func_80137F58(temp_s5, arg2, phi_s1, 0U, arg7);
                }
                temp_s1 = phi_s1 + 1;
                phi_s1 = temp_s1;
                phi_s2 += 4;
            } while (temp_s1 < (s32) (*arg2)->unk4);
        }
        if (arg3 != 0) {
            arg3(arg0, arg1, arg2);
        }
    }
}

void func_80138228(GraphicsContext **arg4) {
    func_80138050(0, arg4, NULL, NULL);
}

void func_80138258(s32 arg4, GraphicsContext **arg5) {
    func_80138050(arg4, arg5, NULL, NULL);
}

void func_8013828C(s32 arg4, GraphicsContext **arg5, void ***arg6) {
    func_80138050(arg4, arg5, arg6, NULL);
}

void func_801382C4(s32 arg4, GraphicsContext **arg5, void ***arg6, ? (*arg7)(s32, GraphicsContext **, void ***)) {
    func_80138050(arg4, arg5, arg6, arg7);
}

void func_80138300(s32 arg0, s32 arg1, Vec3f *arg2, Vec3f *arg3) {
    MtxF sp18;

    SkinMatrix_MtxFMtxFMult(arg0 + 4, (arg1 << 6) + &D_801F5AC0, &sp18);
    SkinMatrix_Vec3fMtxFMultXYZ(&sp18, arg2, arg3);
}

void func_8013835C(void *arg0, s32 arg1, s32 arg2, Vec3f *arg3) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 *temp_a1;
    u8 *temp_v1;
    void *temp_v0;

    temp_v1 = arg0->unk48;
    temp_a1 = &sp24;
    temp_v0 = (temp_v1 + (arg1 * 0xC) + (*temp_v1 * 4))->unk4 + (arg2 * 0x10);
    sp24 = (f32) temp_v0->unk0;
    sp28 = (f32) temp_v0->unk2;
    sp2C = (f32) temp_v0->unk4;
    SkinMatrix_Vec3fMtxFMultXYZ(arg0 + 4, (Vec3f *) temp_a1, arg3);
}

