s32 gScreenHeight = 0xF0;
s32 gScreenWidth = 0x140;



void View_ViewportToVp(Vp *dest, Viewport *src) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = src->rightX - src->leftX;
    temp_v1 = src->bottomY - src->topY;
    dest->vp.vscale[0] = temp_v0 * 2;
    dest->vp.vscale[1] = temp_v1 * 2;
    dest->vp.vscale[2] = 0x1FF;
    dest->vp.vscale[3] = 0;
    dest->vp.vtrans[0] = ((src->leftX * 2) + temp_v0) * 2;
    dest->vp.vtrans[2] = 0x1FF;
    dest->vp.vtrans[3] = 0;
    dest->vp.vtrans[1] = ((src->topY * 2) + temp_v1) * 2;
    if ((src->leftX == 0) && (src->rightX == 0x240) && (src->topY == 0)) {

    }
}

void View_Init(View *view, GraphicsContext *gfxCtx) {
    view->gfxCtx = gfxCtx;
    view->viewport.topY = 0;
    view->viewport.bottomY = 0xF0;
    view->viewport.leftX = 0;
    view->viewport.rightX = 0x140;
    view->magic = 0x56494557;
    view->unk164 = 0;
    view->flags = 7;
    view->scale = 1.0f;
    view->up.y = 1.0f;
    view->fovy = 60.0f;
    view->eye.x = 0.0f;
    view->eye.y = 0.0f;
    view->at.x = 0.0f;
    view->up.x = 0.0f;
    view->up.z = 0.0f;
    view->zNear = 10.0f;
    view->zFar = 12800.0f;
    view->eye.z = -1.0f;
    View_InitCameraQuake(view);
}

void View_SetViewOrientation(View *view, Vec3f *eye, Vec3f *at, Vec3f *up) {
    f32 temp_f0;

    if (at->x == eye->x) {
        temp_f0 = eye->z;
        if (at->z == temp_f0) {
            eye->z = temp_f0 + 0.1f;
            up->z = 0.0f;
            up->x = 0.0f;
            up->y = 1.0f;
        }
    }
    view->eye.x = eye->x;
    view->eye.y = eye->y;
    view->eye.z = eye->z;
    view->at.x = at->x;
    view->at.y = at->y;
    view->at.z = at->z;
    view->up.x = up->x;
    view->up.y = up->y;
    view->flags |= 1;
    view->up.z = up->z;
}

void func_8013F050(View *view, Vec3f *eye, Vec3f *at, Vec3f *up) {
    view->eye.x = eye->x;
    view->eye.y = eye->y;
    view->eye.z = eye->z;
    view->at.x = at->x;
    view->at.y = at->y;
    view->at.z = at->z;
    view->up.x = up->x;
    view->up.y = up->y;
    view->up.z = up->z;
}

void View_SetScale(View *view, f32 scale) {
    view->scale = scale;
    view->flags |= 4;
}

void View_GetScale(View *view, f32 *scale) {
    *scale = view->scale;
}

void func_8013F0D0(View *view, f32 fovy, f32 zNear, f32 zFar) {
    view->fovy = fovy;
    view->zNear = zNear;
    view->flags |= 4;
    view->zFar = zFar;
}

void func_8013F100(View *view, f32 *fovy, f32 *zNear, f32 *zFar) {
    *fovy = view->fovy;
    *zNear = view->zNear;
    *zFar = view->zFar;
}

void func_8013F120(View *view, f32 fovy, f32 zNear, f32 zFar) {
    view->fovy = fovy;
    view->zNear = zNear;
    view->flags |= 8;
    view->zFar = zFar;
    view->scale = 1.0f;
}

void func_8013F15C(View *view, f32 *fovy, f32 *zNear, f32 *zFar) {
    *fovy = view->fovy;
    *zNear = view->zNear;
    *zFar = view->zFar;
}

void View_SetViewport(View *view, Viewport *viewport) {
    view->viewport.topY = viewport->topY;
    view->viewport.bottomY = viewport->bottomY;
    view->viewport.leftX = viewport->leftX;
    view->flags |= 2;
    view->viewport.rightX = viewport->rightX;
}

void View_GetViewport(View *view, Viewport *viewport) {
    viewport->topY = view->viewport.topY;
    viewport->bottomY = view->viewport.bottomY;
    viewport->leftX = view->viewport.leftX;
    viewport->rightX = view->viewport.rightX;
}

void View_WriteScissor(Gfx **gfx, s32 ulx, s32 uly, s32 lrx, s32 lry) {
    Gfx *temp_v0;

    temp_v0 = *gfx;
    temp_v0->words.w0 = (((s32) ((f32) ulx * 4.0f) & 0xFFF) << 0xC) | 0xED000000 | ((s32) ((f32) uly * 4.0f) & 0xFFF);
    temp_v0->words.w1 = (((s32) ((f32) lrx * 4.0f) & 0xFFF) << 0xC) | ((s32) ((f32) lry * 4.0f) & 0xFFF);
    *gfx = temp_v0 + 8;
}

void View_SyncAndWriteScissor(View *view, Gfx **gfx) {
    Gfx *sp34;
    s32 sp30;
    Gfx *temp_t9;

    sp34 = *gfx;
    temp_t9 = sp34;
    sp30 = view->viewport.leftX;
    sp34 = temp_t9 + 8;
    temp_t9->words.w1 = 0;
    temp_t9->words.w0 = 0xE7000000;
    View_WriteScissor(&sp34, sp30, view->viewport.topY, view->viewport.rightX, view->viewport.bottomY);
    *gfx = sp34;
}

void View_SetScissorForLetterbox(View *view) {
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    Gfx *sp38;
    Gfx *sp30;
    Gfx **temp_a0;
    Gfx **temp_a0_2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_s0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_v0;
    s32 phi_v1;

    temp_s0 = view->gfxCtx;
    view = view;
    temp_v0 = ShrinkWindow_GetLetterboxMagnitude();
    phi_v1 = temp_v0;
    if (temp_v0 < 0) {
        phi_v1 = 0;
    } else if (temp_v0 >= 0x79) {
        phi_v1 = 0x78;
    }
    sp58 = view->viewport.leftX;
    temp_a2 = view->viewport.topY + phi_v1;
    temp_a3 = view->viewport.rightX - 0;
    temp_t0 = view->viewport.bottomY - phi_v1;
    temp_v1 = temp_s0->polyOpa.p;
    temp_a0 = &sp38;
    temp_s0->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xE7000000;
    sp4C = temp_t0;
    sp50 = temp_a3;
    sp54 = temp_a2;
    sp38 = temp_s0->polyOpa.p;
    View_WriteScissor(temp_a0, sp58, temp_a2, temp_a3, temp_t0);
    temp_s0->polyOpa.p = sp38;
    temp_v1_2 = temp_s0->polyXlu.p;
    temp_a0_2 = &sp30;
    temp_s0->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0;
    temp_v1_2->words.w0 = 0xE7000000;
    sp30 = temp_s0->polyXlu.p;
    View_WriteScissor(temp_a0_2, sp58, temp_a2, temp_a3, temp_t0);
    temp_s0->polyXlu.p = sp30;
}

s32 View_SetQuakeRotation(View *view, f32 x, f32 y, f32 z) {
    view->quakeRot.x = x;
    view->quakeRot.y = y;
    view->quakeRot.z = z;
    return 1;
}

s32 View_SetQuakeScale(View *view, f32 x, f32 y, f32 z) {
    view->quakeScale.x = x;
    view->quakeScale.y = y;
    view->quakeScale.z = z;
    return 1;
}

s32 View_SetQuakeSpeed(View *view, f32 speed) {
    view->quakeSpeed = speed;
    return 1;
}

s32 View_InitCameraQuake(View *view) {
    view->quakeRot.x = 0.0f;
    view->quakeScale.x = 1.0f;
    view->quakeRot.y = 0.0f;
    view->quakeRot.z = 0.0f;
    view->quakeScale.y = 1.0f;
    view->quakeScale.z = 1.0f;
    view->currQuakeRot.x = view->quakeRot.x;
    view->currQuakeScale.x = view->quakeScale.x;
    view->quakeSpeed = 0.0f;
    view->currQuakeRot.z = view->quakeRot.z;
    view->currQuakeRot.y = view->quakeRot.y;
    view->currQuakeScale.z = view->quakeScale.z;
    view->currQuakeScale.y = view->quakeScale.y;
    return 1;
}

s32 View_ClearQuake(View *view) {
    view->quakeRot.x = 0.0f;
    view->quakeRot.y = 0.0f;
    view->quakeRot.z = 0.0f;
    view->quakeScale.x = 1.0f;
    view->quakeScale.y = 1.0f;
    view->quakeScale.z = 1.0f;
    view->quakeSpeed = 1.0f;
    return 1;
}

s32 View_SetQuake(View *view, ? rot, ? rot_unk4, ? rot_unk8, ? scale, ? scale_unk4, ? scale_unk8, f32 speed) {
    view->quakeRot.x = rot.unk0;
    view->quakeRot.y = rot.unk4;
    view->quakeRot.z = rot.unk8;
    view->quakeScale.x = scale.unk0;
    view->quakeScale.y = scale.unk4;
    view->quakeScale.z = scale.unk8;
    view->quakeSpeed = speed;
    return 1;
}

s32 View_StepQuake(View *view, RSPMatrix *matrix) {
    MtxF sp28;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f0 = view->quakeSpeed;
    if (temp_f0 == 0.0f) {
        return 0;
    }
    if (temp_f0 == 1.0f) {
        view->currQuakeRot.x = view->quakeRot.x;
        view->currQuakeScale.x = view->quakeScale.x;
        view->quakeSpeed = 0.0f;
        view->currQuakeRot.y = view->quakeRot.y;
        view->currQuakeRot.z = view->quakeRot.z;
        view->currQuakeScale.z = view->quakeScale.z;
        view->currQuakeScale.y = view->quakeScale.y;
    } else {
        temp_f2 = view->currQuakeRot.x;
        temp_f12 = view->currQuakeRot.y;
        temp_f14 = view->currQuakeRot.z;
        temp_f16 = view->currQuakeScale.x;
        temp_f2_2 = view->currQuakeScale.y;
        view->currQuakeRot.x = temp_f2 + ((view->quakeRot.x - temp_f2) * temp_f0);
        temp_f12_2 = view->currQuakeScale.z;
        view->currQuakeRot.y = temp_f12 + ((view->quakeRot.y - temp_f12) * temp_f0);
        view->currQuakeRot.z = temp_f14 + ((view->quakeRot.z - temp_f14) * temp_f0);
        view->currQuakeScale.x = temp_f16 + ((view->quakeScale.x - temp_f16) * temp_f0);
        view->currQuakeScale.y = temp_f2_2 + ((view->quakeScale.y - temp_f2_2) * temp_f0);
        view->currQuakeScale.z = temp_f12_2 + ((view->quakeScale.z - temp_f12_2) * temp_f0);
    }
    SysMatrix_FromRSPMatrix(matrix, &sp28);
    SysMatrix_SetCurrentState(&sp28);
    SysMatrix_RotateStateAroundXAxis(view->currQuakeRot.x);
    SysMatrix_InsertYRotation_f(view->currQuakeRot.y, 1);
    SysMatrix_InsertZRotation_f(view->currQuakeRot.z, 1);
    Matrix_Scale(view->currQuakeScale.x, view->currQuakeScale.y, view->currQuakeScale.z, 1);
    SysMatrix_InsertZRotation_f(-view->currQuakeRot.z, 1);
    SysMatrix_InsertYRotation_f(-view->currQuakeRot.y, 1);
    SysMatrix_RotateStateAroundXAxis(-view->currQuakeRot.x);
    SysMatrix_GetStateAsRSPMatrix(matrix);
    return 1;
}

void View_RenderView(View *view, s32 uParm2) {
    if ((((view->flags & uParm2) | (uParm2 >> 4)) & 8) != 0) {
        View_RenderToOrthographicMatrix(view);
        return;
    }
    View_RenderToPerspectiveMatrix(view);
}

s32 View_RenderToPerspectiveMatrix(View *view) {
    Gfx *temp_s2;
    Gfx *temp_s2_2;
    Gfx *temp_s2_3;
    Gfx *temp_t4;
    Gfx *temp_t6;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s1;
    View *temp_t5;
    View *temp_t7;
    f32 temp_f12;
    Gfx *phi_t6;
    View *phi_t7;
    Gfx *phi_t4;
    View *phi_t5;

    temp_s1 = view->gfxCtx;
    temp_s2 = temp_s1->polyOpa.d - 0x10;
    temp_s1->polyOpa.d = temp_s2;
    View_ViewportToVp((Vp *) temp_s2, &view->viewport);
    view->unk50 = (u32) temp_s2->words.w0;
    view->unk54 = (u32) temp_s2->words.w1;
    view->unk58 = (s32) temp_s2->unk8;
    view->unk5C = (s32) temp_s2->unkC;
    View_SetScissorForLetterbox(view);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = (u32) temp_s2;
    temp_v0->words.w0 = 0xDC080008;
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) temp_s2;
    temp_v0_2->words.w0 = 0xDC080008;
    temp_s2_2 = temp_s1->polyOpa.d - 0x40;
    temp_s1->polyOpa.d = temp_s2_2;
    view->projectionPtr = (Mtx *) temp_s2_2;
    guPerspective((Mtx *) temp_s2_2, &view->normal, view->fovy, (f32) (view->viewport.rightX - view->viewport.leftX) / (f32) (view->viewport.bottomY - view->viewport.topY), view->zNear, view->zFar, view->scale);
    phi_t6 = temp_s2_2;
    phi_t7 = view;
    do {
        temp_t6 = phi_t6 + 0xC;
        temp_t7 = phi_t7 + 0xC;
        temp_t7->unk54 = (s32) phi_t6->words.w0;
        temp_t7->unk58 = (s32) temp_t6->unk-8;
        temp_t7->unk5C = (s32) temp_t6->unk-4;
        phi_t6 = temp_t6;
        phi_t7 = temp_t7;
    } while (temp_t6 != (temp_s2_2 + 0x3C));
    temp_t7->projection.m[0][0] = temp_t6->words.w0;
    View_StepQuake(view, (RSPMatrix *) temp_s2_2);
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB0E0000;
    temp_v0_3->words.w1 = (u32) view->normal;
    temp_v0_4 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) temp_s2_2;
    temp_v0_4->words.w0 = 0xDA380007;
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDB0E0000;
    temp_v0_5->words.w1 = (u32) view->normal;
    temp_v0_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = (u32) temp_s2_2;
    temp_v0_6->words.w0 = 0xDA380007;
    temp_s2_3 = temp_s1->polyOpa.d - 0x40;
    temp_s1->polyOpa.d = temp_s2_3;
    view->viewingPtr = (Mtx *) temp_s2_3;
    if ((view->at.x == view->eye.x) && (view->at.y == view->eye.y)) {
        temp_f12 = view->eye.z;
        if (view->at.z == temp_f12) {
            view->eye.z = temp_f12 + 2.0f;
        }
    }
    guLookAt((Mtx *) temp_s2_3, view->eye.x, view->eye.y, view->eye.z, view->at.x, view->at.y, view->at.z, view->up.x, view->up.y, view->up.z);
    phi_t4 = temp_s2_3;
    phi_t5 = view;
    do {
        temp_t4 = phi_t4 + 0xC;
        temp_t5 = phi_t5 + 0xC;
        temp_t5->projection.m[3][1] = phi_t4->words.w0;
        temp_t5->projection.m[3][2] = temp_t4->unk-8;
        temp_t5->projection.m[3][3] = temp_t4->unk-4;
        phi_t4 = temp_t4;
        phi_t5 = temp_t5;
    } while (temp_t4 != (temp_s2_3 + 0x3C));
    temp_t5->viewing.m[0][0] = temp_t4->words.w0;
    temp_v0_7 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) temp_s2_3;
    temp_v0_7->words.w0 = 0xDA380005;
    temp_v0_8 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = (u32) temp_s2_3;
    temp_v0_8->words.w0 = 0xDA380005;
    return 1;
}

s32 View_RenderToOrthographicMatrix(View *view) {
    Gfx *temp_s1;
    Gfx *temp_s1_2;
    Gfx *temp_t5;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    GraphicsContext *temp_s0;
    View *temp_t6;
    f32 temp_f0;
    f32 temp_f2;
    Gfx *phi_t5;
    View *phi_t6;

    temp_s0 = view->gfxCtx;
    temp_s1 = temp_s0->polyOpa.d - 0x10;
    temp_s0->polyOpa.d = temp_s1;
    View_ViewportToVp((Vp *) temp_s1, &view->viewport);
    view->unk50 = (u32) temp_s1->words.w0;
    view->unk54 = (u32) temp_s1->words.w1;
    view->unk58 = (s32) temp_s1->unk8;
    view->unk5C = (s32) temp_s1->unkC;
    View_SetScissorForLetterbox(view);
    temp_v1 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = (u32) temp_s1;
    temp_v1->words.w0 = 0xDC080008;
    temp_v1_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = (u32) temp_s1;
    temp_v1_2->words.w0 = 0xDC080008;
    temp_v1_3 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v1_3 + 8;
    temp_v1_3->words.w1 = (u32) temp_s1;
    temp_v1_3->words.w0 = 0xDC080008;
    temp_s1_2 = temp_s0->polyOpa.d - 0x40;
    temp_s0->polyOpa.d = temp_s1_2;
    view->projectionPtr = (Mtx *) temp_s1_2;
    temp_f0 = (f32) gScreenWidth;
    temp_f2 = (f32) gScreenHeight;
    guOrtho((Mtx *) temp_s1_2, temp_f0 * -0.5f, temp_f0 * 0.5f, temp_f2 * -0.5f, temp_f2 * 0.5f, view->zNear, view->zFar, view->scale);
    phi_t5 = temp_s1_2;
    phi_t6 = view;
    do {
        temp_t5 = phi_t5 + 0xC;
        temp_t6 = phi_t6 + 0xC;
        temp_t6->unk54 = (s32) phi_t5->words.w0;
        temp_t6->unk58 = (s32) temp_t5->unk-8;
        temp_t6->unk5C = (s32) temp_t5->unk-4;
        phi_t5 = temp_t5;
        phi_t6 = temp_t6;
    } while (temp_t5 != (temp_s1_2 + 0x3C));
    temp_t6->projection.m[0][0] = temp_t5->words.w0;
    temp_v1_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v1_4 + 8;
    temp_v1_4->words.w1 = (u32) temp_s1_2;
    temp_v1_4->words.w0 = 0xDA380007;
    temp_v1_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v1_5 + 8;
    temp_v1_5->words.w1 = (u32) temp_s1_2;
    temp_v1_5->words.w0 = 0xDA380007;
    return 1;
}

s32 func_8013FBC8(View *view) {
    Gfx *sp4C;
    Gfx **temp_a0;
    Gfx *temp_s2;
    Gfx *temp_s2_2;
    Gfx *temp_t9;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s0;
    View *temp_t0;
    f32 temp_f0;
    f32 temp_f2;
    Gfx *phi_t9;
    View *phi_t0;

    temp_s0 = view->gfxCtx;
    temp_s2 = temp_s0->polyOpa.d - 0x10;
    temp_s0->polyOpa.d = temp_s2;
    View_ViewportToVp((Vp *) temp_s2, &view->viewport);
    view->unk50 = (u32) temp_s2->words.w0;
    view->unk54 = (u32) temp_s2->words.w1;
    view->unk58 = (s32) temp_s2->unk8;
    view->unk5C = (s32) temp_s2->unkC;
    temp_v0 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_a0 = &sp4C;
    sp4C = temp_s0->overlay.p;
    View_WriteScissor(temp_a0, view->viewport.leftX, view->viewport.topY, view->viewport.rightX, view->viewport.bottomY);
    temp_s0->overlay.p = sp4C;
    temp_v0_2 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) temp_s2;
    temp_v0_2->words.w0 = 0xDC080008;
    temp_s2_2 = temp_s0->polyOpa.d - 0x40;
    temp_s0->polyOpa.d = temp_s2_2;
    view->projectionPtr = (Mtx *) temp_s2_2;
    temp_f0 = (f32) gScreenWidth;
    temp_f2 = (f32) gScreenHeight;
    guOrtho((Mtx *) temp_s2_2, temp_f0 * -0.5f, temp_f0 * 0.5f, temp_f2 * -0.5f, temp_f2 * 0.5f, view->zNear, view->zFar, view->scale);
    phi_t9 = temp_s2_2;
    phi_t0 = view;
    do {
        temp_t9 = phi_t9 + 0xC;
        temp_t0 = phi_t0 + 0xC;
        temp_t0->unk54 = (s32) phi_t9->words.w0;
        temp_t0->unk58 = (s32) temp_t9->unk-8;
        temp_t0->unk5C = (s32) temp_t9->unk-4;
        phi_t9 = temp_t9;
        phi_t0 = temp_t0;
    } while (temp_t9 != (temp_s2_2 + 0x3C));
    temp_t0->projection.m[0][0] = temp_t9->words.w0;
    temp_v0_3 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) temp_s2_2;
    temp_v0_3->words.w0 = 0xDA380007;
    return 1;
}

s32 func_8013FD74(View *view) {
    Gfx *sp64;
    Gfx **temp_a0;
    Gfx *temp_s2;
    Gfx *temp_s2_2;
    Gfx *temp_s2_3;
    Gfx *temp_t1;
    Gfx *temp_t2_2;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s1;
    View *temp_t2;
    View *temp_t9;
    f32 temp_f12;
    Gfx *phi_t1;
    View *phi_t2;
    Gfx *phi_t2_2;
    View *phi_t9;

    temp_s1 = view->gfxCtx;
    temp_s2 = temp_s1->polyOpa.d - 0x10;
    temp_s1->polyOpa.d = temp_s2;
    View_ViewportToVp((Vp *) temp_s2, &view->viewport);
    view->unk50 = (u32) temp_s2->words.w0;
    view->unk54 = (u32) temp_s2->words.w1;
    view->unk58 = (s32) temp_s2->unk8;
    view->unk5C = (s32) temp_s2->unkC;
    temp_v0 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_a0 = &sp64;
    sp64 = temp_s1->overlay.p;
    View_WriteScissor(temp_a0, view->viewport.leftX, view->viewport.topY, view->viewport.rightX, view->viewport.bottomY);
    temp_s1->overlay.p = sp64;
    temp_v0_2 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) temp_s2;
    temp_v0_2->words.w0 = 0xDC080008;
    temp_s2_2 = temp_s1->polyOpa.d - 0x40;
    temp_s1->polyOpa.d = temp_s2_2;
    view->projectionPtr = (Mtx *) temp_s2_2;
    guPerspective((Mtx *) temp_s2_2, &view->normal, view->fovy, (f32) (view->viewport.rightX - view->viewport.leftX) / (f32) (view->viewport.bottomY - view->viewport.topY), view->zNear, view->zFar, view->scale);
    phi_t1 = temp_s2_2;
    phi_t2 = view;
    do {
        temp_t1 = phi_t1 + 0xC;
        temp_t2 = phi_t2 + 0xC;
        temp_t2->unk54 = (s32) phi_t1->words.w0;
        temp_t2->unk58 = (s32) temp_t1->unk-8;
        temp_t2->unk5C = (s32) temp_t1->unk-4;
        phi_t1 = temp_t1;
        phi_t2 = temp_t2;
    } while (temp_t1 != (temp_s2_2 + 0x3C));
    temp_t2->projection.m[0][0] = temp_t1->words.w0;
    temp_v0_3 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB0E0000;
    temp_v0_3->words.w1 = (u32) view->normal;
    temp_v0_4 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) temp_s2_2;
    temp_v0_4->words.w0 = 0xDA380007;
    temp_s2_3 = temp_s1->polyOpa.d - 0x40;
    temp_s1->polyOpa.d = temp_s2_3;
    view->viewingPtr = (Mtx *) temp_s2_3;
    if ((view->at.x == view->eye.x) && (view->at.y == view->eye.y)) {
        temp_f12 = view->eye.z;
        if (view->at.z == temp_f12) {
            view->eye.z = temp_f12 + 2.0f;
        }
    }
    guLookAt((Mtx *) temp_s2_3, view->eye.x, view->eye.y, view->eye.z, view->at.x, view->at.y, view->at.z, view->up.x, view->up.y, view->up.z);
    phi_t2_2 = temp_s2_3;
    phi_t9 = view;
    do {
        temp_t2_2 = phi_t2_2 + 0xC;
        temp_t9 = phi_t9 + 0xC;
        temp_t9->projection.m[3][1] = phi_t2_2->words.w0;
        temp_t9->projection.m[3][2] = temp_t2_2->unk-8;
        temp_t9->projection.m[3][3] = temp_t2_2->unk-4;
        phi_t2_2 = temp_t2_2;
        phi_t9 = temp_t9;
    } while (temp_t2_2 != (temp_s2_3 + 0x3C));
    temp_t9->viewing.m[0][0] = temp_t2_2->words.w0;
    temp_v0_5 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) temp_s2_3;
    temp_v0_5->words.w0 = 0xDA380005;
    return 1;
}

s32 func_80140024(View *view) {
    Mtx *temp_t6;
    Mtx *temp_t6_2;
    Mtx *temp_t9;
    Mtx *temp_v1;
    Mtx *phi_t6;
    Mtx *phi_t9;

    guLookAt(view->viewingPtr, view->eye.x, view->eye.y, view->eye.z, view->at.x, view->at.y, view->at.z, view->up.x, view->up.y, view->up.z);
    temp_t6 = view->viewingPtr;
    temp_v1 = &view->unkE0;
    phi_t6 = temp_t6;
    phi_t9 = temp_v1;
    do {
        temp_t6_2 = phi_t6 + 0xC;
        temp_t9 = phi_t9 + 0xC;
        temp_t9->unk-C = (s32) phi_t6->m[0][0];
        temp_t9->unk-8 = (s32) temp_t6_2->unk-8;
        temp_t9->unk-4 = (s32) temp_t6_2->unk-4;
        phi_t6 = temp_t6_2;
        phi_t9 = temp_t9;
    } while (temp_t6_2 != &temp_t6->m[3][3]);
    temp_t9->m[0][0] = temp_t6_2->m[0][0];
    view->viewingPtr = temp_v1;
    return 1;
}

s32 func_801400CC(View *view, Gfx **gfxp) {
    Gfx *sp4C;
    GraphicsContext *sp48;
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    Gfx *temp_t0;
    Gfx *temp_t0_2;
    Gfx *temp_t7;
    GraphicsContext *temp_v1;
    View *temp_t8;
    f32 temp_f0;
    f32 temp_f2;
    Gfx *phi_t7;
    View *phi_t8;

    sp4C = *gfxp;
    temp_v1 = view->gfxCtx;
    temp_s0 = temp_v1->polyOpa.d - 0x10;
    temp_v1->polyOpa.d = temp_s0;
    sp48 = temp_v1;
    View_ViewportToVp((Vp *) temp_s0, &view->viewport);
    view->unk50 = (u32) temp_s0->words.w0;
    view->unk54 = (u32) temp_s0->words.w1;
    view->unk58 = (s32) temp_s0->unk8;
    view->unk5C = (s32) temp_s0->unkC;
    View_SyncAndWriteScissor(view, &sp4C);
    temp_t0 = sp4C;
    sp4C = temp_t0 + 8;
    temp_t0->words.w1 = (u32) temp_s0;
    temp_t0->words.w0 = 0xDC080008;
    temp_s0_2 = temp_v1->polyOpa.d - 0x40;
    temp_v1->polyOpa.d = temp_s0_2;
    view->projectionPtr = (Mtx *) temp_s0_2;
    temp_f0 = (f32) gScreenWidth;
    temp_f2 = (f32) gScreenHeight;
    guOrtho((Mtx *) temp_s0_2, temp_f0 * -0.5f, temp_f0 * 0.5f, temp_f2 * -0.5f, temp_f2 * 0.5f, view->zNear, view->zFar, view->scale);
    phi_t7 = temp_s0_2;
    phi_t8 = view;
    do {
        temp_t7 = phi_t7 + 0xC;
        temp_t8 = phi_t8 + 0xC;
        temp_t8->unk54 = (s32) phi_t7->words.w0;
        temp_t8->unk58 = (s32) temp_t7->unk-8;
        temp_t8->unk5C = (s32) temp_t7->unk-4;
        phi_t7 = temp_t7;
        phi_t8 = temp_t8;
    } while (temp_t7 != (temp_s0_2 + 0x3C));
    temp_t8->projection.m[0][0] = temp_t7->words.w0;
    temp_t0_2 = sp4C;
    sp4C = temp_t0_2 + 8;
    temp_t0_2->words.w1 = (u32) temp_s0_2;
    temp_t0_2->words.w0 = 0xDA380007;
    *gfxp = sp4C;
    return 1;
}

