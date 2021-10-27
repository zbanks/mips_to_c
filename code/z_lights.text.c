struct _mips2c_stack_LightContext_DestroyList {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_LightContext_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_LightContext_InitList {};      /* size 0x0 */

struct _mips2c_stack_LightContext_InsertLight {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_LightContext_NewLights {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_LightContext_RemoveLight {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_LightContext_SetAmbientColor {}; /* size 0x0 */

struct _mips2c_stack_Lights_BindAll {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Lights_BindDirectional {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Lights_BindPoint {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_Lights_BindPointWithReference {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x8];                    /* maybe part of sp18[3]? */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_Lights_DirectionalSetInfo {};  /* size 0x0 */

struct _mips2c_stack_Lights_Draw {};                /* size 0x0 */

struct _mips2c_stack_Lights_DrawGlow {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ GraphicsContext *sp50;               /* inferred */
    /* 0x54 */ char pad_54[0xC];
};                                                  /* size = 0x60 */

struct _mips2c_stack_Lights_FindBufSlot {};         /* size 0x0 */

struct _mips2c_stack_Lights_FindSlot {};            /* size 0x0 */

struct _mips2c_stack_Lights_FreeNode {};            /* size 0x0 */

struct _mips2c_stack_Lights_GlowCheck {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x8];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_Lights_New {};                 /* size 0x0 */

struct _mips2c_stack_Lights_NewAndDraw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Lights_PointGlowSetInfo {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Lights_PointNoGlowSetInfo {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Lights_PointSetColorAndRadius {}; /* size 0x0 */

struct _mips2c_stack_Lights_PointSetInfo {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Lights_PointSetPosition {};    /* size 0x0 */

struct _mips2c_stack_Lights_Reset {};               /* size 0x0 */

struct _mips2c_stack_func_80102544 {};              /* size 0x0 */

static ? dirBindFuncs;                              /* unable to generate initializer */
static ? posBindFuncs;                              /* unable to generate initializer */
LightsBuffer sLightsBuffer;

void Lights_PointSetInfo(LightInfo *info, s16 x, s16 y, s16 z, u8 r, u8 g, u8 b, s16 radius, s32 type) {
    info->type = (u8) type;
    info->params.point.x = x;
    info->params.point.y = y;
    info->params.point.z = z;
    Lights_PointSetColorAndRadius(info, r, g, b, (s16) (s32) radius);
}

void Lights_PointNoGlowSetInfo(LightInfo *info, s16 x, s16 y, s16 z, u8 r, u8 g, u8 b, s16 radius) {
    Lights_PointSetInfo(info, x, y, z, (u8) (s32) r, (u8) (s32) g, (u8) (s32) b, (s16) (s32) radius, 0);
}

void Lights_PointGlowSetInfo(LightInfo *info, s16 x, s16 y, s16 z, u8 r, u8 g, u8 b, s16 radius) {
    Lights_PointSetInfo(info, x, y, z, (u8) (s32) r, (u8) (s32) g, (u8) (s32) b, (s16) (s32) radius, 2);
}

void Lights_PointSetColorAndRadius(LightInfo *info, u8 r, u8 g, u8 b, s16 radius) {
    info->params.point.color[0] = r & 0xFF;
    info->params.point.color[1] = g & 0xFF;
    info->params.point.color[2] = b & 0xFF;
    info->params.point.radius = radius;
}

void Lights_PointSetPosition(LightInfo *info, s16 x, s16 y, s16 z) {
    info->params.point.x = x;
    info->params.point.y = y;
    info->params.point.z = z;
}

void Lights_DirectionalSetInfo(LightInfo *info, s8 x, s8 y, s8 z, u8 r, u8 g, u8 b) {
    info->type = 1;
    info->params.dir.x = x;
    info->params.dir.y = y;
    info->params.dir.z = z;
    info->params.dir.color[0] = r;
    info->params.dir.color[1] = g;
    info->params.dir.color[2] = b;
}

void Lights_Reset(Lights *lights, u8 r, u8 g, u8 b) {
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3;

    temp_a3 = b & 0xFF;
    temp_a2 = g & 0xFF;
    temp_a1 = r & 0xFF;
    lights->l.a.l.colc[0] = temp_a1;
    lights->l.a.l.col[0] = temp_a1;
    lights->l.a.l.colc[1] = temp_a2;
    lights->l.a.l.col[1] = temp_a2;
    lights->l.a.l.colc[2] = temp_a3;
    lights->l.a.l.col[2] = temp_a3;
    lights->numLights = 0;
}

void Lights_Draw(Lights *lights, GraphicsContext *gfxCtx) {
    Gfx *temp_t1;
    Gfx *temp_t1_2;
    Gfx *temp_t1_3;
    Gfx *temp_t1_4;
    Gfx *temp_t1_5;
    Gfx *temp_t1_6;
    Lightsn *temp_v1_2;
    s32 temp_a3;
    s32 temp_v1;
    u32 temp_t0;
    u32 temp_t0_2;
    s32 phi_a3;
    u32 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_t1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = &temp_t1[1];
    temp_t1->words.w0 = 0xDB020000;
    temp_t1->words.w1 = lights->numLights * 0x18;
    temp_t1_2 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = &temp_t1_2[1];
    temp_t1_2->words.w0 = 0xDB020000;
    temp_t1_2->words.w1 = lights->numLights * 0x18;
    phi_a3 = 0x18;
    phi_v0 = (u32) lights->l.l;
    phi_v1 = 0;
    phi_v1_2 = 0;
    if ((s32) lights->numLights > 0) {
        do {
            temp_t1_3 = gfxCtx->polyOpa.p;
            temp_a3 = phi_a3 + 0x18;
            temp_v1 = phi_v1 + 1;
            gfxCtx->polyOpa.p = &temp_t1_3[1];
            temp_t0 = (((temp_a3 / 8) & 0xFF) << 8) | 0xDC080000 | 0xA;
            temp_t1_3->words.w0 = temp_t0;
            temp_t1_3->words.w1 = phi_v0;
            temp_t1_4 = gfxCtx->polyXlu.p;
            gfxCtx->polyXlu.p = &temp_t1_4[1];
            temp_t1_4->words.w1 = phi_v0;
            temp_t1_4->words.w0 = temp_t0;
            phi_a3 = temp_a3;
            phi_v0 += 0x10;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
        } while (temp_v1 < (s32) lights->numLights);
    }
    temp_t1_5 = gfxCtx->polyOpa.p;
    temp_v1_2 = &lights->l;
    gfxCtx->polyOpa.p = &temp_t1_5[1];
    temp_t0_2 = ((((s32) ((phi_v1_2 * 0x18) + 0x18 + 0x18) / 8) & 0xFF) << 8) | 0xDC080000 | 0xA;
    temp_t1_5->words.w0 = temp_t0_2;
    temp_t1_5->words.w1 = (u32) temp_v1_2;
    temp_t1_6 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = &temp_t1_6[1];
    temp_t1_6->words.w1 = (u32) temp_v1_2;
    temp_t1_6->words.w0 = temp_t0_2;
}

Light *Lights_FindSlot(Lights *lights) {
    u8 temp_v1;

    temp_v1 = lights->numLights;
    if ((s32) temp_v1 >= 7) {
        return NULL;
    }
    lights->numLights = temp_v1 + 1;
    return lights + (temp_v1 * 0x10) + 0x10;
}

void Lights_BindPointWithReference(Lights *lights, LightParams *params, Vec3f *pos) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp24;
    f32 sp18;
    Light *temp_v0_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    s16 temp_v0;
    u32 temp_t1;
    u32 temp_t5;
    u32 temp_t9_2;
    u8 temp_t3;
    u8 temp_t7;
    u8 temp_t9;
    f32 phi_f8;
    f32 phi_f8_2;
    f32 phi_f8_3;
    f32 phi_f2;

    if (pos != 0) {
        temp_v0 = params->point.radius;
        if ((s32) temp_v0 > 0) {
            temp_f14 = (f32) params->point.x - pos->x;
            temp_f16 = (f32) params->point.y - pos->y;
            temp_f18 = (f32) params->point.z - pos->z;
            temp_f2 = (f32) temp_v0;
            temp_f12 = (temp_f14 * temp_f14) + (temp_f16 * temp_f16) + (temp_f18 * temp_f18);
            if (temp_f12 < (temp_f2 * temp_f2)) {
                sp24 = temp_f2;
                sp18 = temp_f12;
                sp34 = temp_f14;
                sp30 = temp_f16;
                sp2C = temp_f18;
                temp_v0_2 = Lights_FindSlot(lights);
                if (temp_v0_2 != 0) {
                    temp_f0 = sqrtf(temp_f12);
                    temp_t9 = params->point.color[0];
                    temp_f8 = (f32) temp_t9;
                    temp_f2_2 = temp_f0 / temp_f2;
                    temp_f2_3 = 1.0f - (temp_f2_2 * temp_f2_2);
                    phi_f8 = temp_f8;
                    if ((s32) temp_t9 < 0) {
                        phi_f8 = temp_f8 + 4294967296.0f;
                    }
                    temp_t1 = (u32) (phi_f8 * temp_f2_3);
                    temp_v0_2->l.col[0] = (u8) temp_t1;
                    temp_v0_2->l.colc[0] = (u8) temp_t1;
                    temp_t3 = params->point.color[1];
                    temp_f8_2 = (f32) temp_t3;
                    phi_f8_2 = temp_f8_2;
                    if ((s32) temp_t3 < 0) {
                        phi_f8_2 = temp_f8_2 + 4294967296.0f;
                    }
                    temp_t5 = (u32) (phi_f8_2 * temp_f2_3);
                    temp_v0_2->l.col[1] = (u8) temp_t5;
                    temp_v0_2->l.colc[1] = (u8) temp_t5;
                    temp_t7 = params->point.color[2];
                    temp_f8_3 = (f32) temp_t7;
                    phi_f8_3 = temp_f8_3;
                    if ((s32) temp_t7 < 0) {
                        phi_f8_3 = temp_f8_3 + 4294967296.0f;
                    }
                    temp_t9_2 = (u32) (phi_f8_3 * temp_f2_3);
                    temp_v0_2->l.col[2] = (u8) temp_t9_2;
                    temp_v0_2->l.colc[2] = (u8) temp_t9_2;
                    if (temp_f0 < 1.0f) {
                        phi_f2 = 120.0f;
                    } else {
                        phi_f2 = 120.0f / temp_f0;
                    }
                    temp_v0_2->l.dir[0] = (s8) (s32) (temp_f14 * phi_f2);
                    temp_v0_2->l.dir[1] = (s8) (s32) (temp_f16 * phi_f2);
                    temp_v0_2->l.dir[2] = (s8) (s32) (temp_f18 * phi_f2);
                }
            }
        }
    }
}

void Lights_BindPoint(Lights *lights, LightParams *params, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp20;
    Light *temp_v0;
    f32 *temp_a1;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_t9;
    u8 temp_t1;
    u8 temp_t3;
    u8 temp_t5;
    f32 phi_f2;
    f32 phi_f0;

    temp_f2 = (f32) params->point.radius;
    if (temp_f2 > 0.0f) {
        temp_a1 = &sp2C;
        sp2C = (f32) params->point.x;
        sp30 = (f32) params->point.y;
        temp_t9 = params->point.z;
        sp38 = temp_f2;
        params = params;
        sp34 = (f32) temp_t9;
        SkinMatrix_Vec3fMtxFMultXYZ(&globalCtx->projectionMatrix, (Vec3f *) temp_a1, (Vec3f *) &sp20);
        if ((-temp_f2 < sp28) && (sp28 < (600.0f + temp_f2)) && ((fabsf(sp20) - temp_f2) < 400.0f) && ((fabsf(sp24) - temp_f2) < 400.0f)) {
            params = params;
            sp38 = temp_f2;
            temp_v0 = Lights_FindSlot(lights);
            if (temp_v0 != 0) {
                temp_f2_2 = 4500000.0f / (temp_f2 * temp_f2);
                phi_f2 = temp_f2_2;
                phi_f0 = 255.0f;
                if (temp_f2_2 > 255.0f) {
                    goto block_9;
                }
                phi_f0 = 20.0f;
                if (temp_f2_2 < 20.0f) {
block_9:
                    phi_f2 = phi_f0;
                }
                temp_t1 = params->point.color[0];
                temp_v0->l.col[0] = temp_t1;
                temp_v0->l.colc[0] = temp_t1;
                temp_t3 = params->point.color[1];
                temp_v0->l.col[1] = temp_t3;
                temp_v0->l.colc[1] = temp_t3;
                temp_t5 = params->point.color[2];
                temp_v0->l.col[2] = temp_t5;
                temp_v0->l.colc[2] = temp_t5;
                temp_v0->p.pos[0] = params->point.x;
                temp_v0->p.pos[1] = params->point.y;
                temp_v0->l.pad1 = 8;
                temp_v0->l.pad2 = 0xFF;
                temp_v0->p.unkE = (u8) (s32) phi_f2;
                temp_v0->p.pos[2] = params->point.z;
            }
        }
    }
}

void Lights_BindDirectional(Lights *lights, LightParams *params, void *unused) {
    Light *temp_v0;
    u8 temp_t1;
    u8 temp_t7;
    u8 temp_t9;

    temp_v0 = Lights_FindSlot(lights);
    if (temp_v0 != 0) {
        temp_t7 = params->dir.color[0];
        temp_v0->l.col[0] = temp_t7;
        temp_v0->l.colc[0] = temp_t7;
        temp_t9 = params->dir.color[1];
        temp_v0->l.col[1] = temp_t9;
        temp_v0->l.colc[1] = temp_t9;
        temp_t1 = params->dir.color[2];
        temp_v0->l.col[2] = temp_t1;
        temp_v0->l.colc[2] = temp_t1;
        temp_v0->l.dir[0] = params->dir.x;
        temp_v0->l.dir[1] = params->dir.y;
        temp_v0->l.pad1 = 0;
        temp_v0->l.dir[2] = params->dir.z;
    }
}

void Lights_BindAll(Lights *lights, LightNode *listHead, Vec3f *refPos, GlobalContext *globalCtx) {
    LightNode *temp_s0;
    LightNode *temp_s0_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    LightNode *phi_s0;
    LightNode *phi_s0_2;

    phi_s0 = listHead;
    phi_s0_2 = listHead;
    if (listHead != 0) {
        if ((refPos == 0) && (lights->enablePosLights == 1)) {
            do {
                temp_v0 = phi_s0->info;
                *(&posBindFuncs + (*temp_v0 * 4))(lights, temp_v0 + 2, globalCtx);
                temp_s0 = phi_s0->next;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0);
            return;
        }
        do {
            temp_v0_2 = phi_s0_2->info;
            *(&dirBindFuncs + (*temp_v0_2 * 4))(lights, temp_v0_2 + 2, refPos);
            temp_s0_2 = phi_s0_2->next;
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != 0);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

LightNode *Lights_FindBufSlot(void) {
    LightNode *temp_a0;
    s32 temp_t0;
    s32 temp_t6;
    s32 temp_v1;
    LightNode *phi_a0;
    LightNode *phi_a0_2;
    LightNode *phi_a0_3;

    temp_v1 = sLightsBuffer.numOccupied;
    if (temp_v1 >= 0x20) {
        return NULL;
    }
    temp_t6 = sLightsBuffer.searchIndex;
    temp_a0 = &sLightsBuffer.lights[temp_t6];
    phi_a0_2 = temp_a0;
    phi_a0_3 = temp_a0;
    if (sLightsBuffer.lights[temp_t6].info != 0) {
        do {
            temp_t0 = sLightsBuffer.searchIndex + 1;
            sLightsBuffer.searchIndex = temp_t0;
            if (temp_t0 < 0x20) {
                phi_a0 = phi_a0_3 + 0xC;
            } else {
                sLightsBuffer.searchIndex = 0;
                phi_a0 = sLightsBuffer.lights;
            }
            phi_a0_2 = phi_a0;
            phi_a0_3 = phi_a0;
        } while (phi_a0->info != 0);
    }
    sLightsBuffer.numOccupied = temp_v1 + 1;
    return phi_a0_2;
}

void Lights_FreeNode(LightNode *light) {
    if (light != 0) {
        sLightsBuffer.numOccupied += -1;
        light->info = NULL;
        sLightsBuffer.searchIndex = (s32) ((s32) ((light - &sLightsBuffer) - 8) / 0xC) / 0xC;
    }
}

void LightContext_Init(GlobalContext *globalCtx, LightContext *lightCtx) {
    LightContext_InitList(globalCtx, lightCtx);
    LightContext_SetAmbientColor(lightCtx, 0x50U, 0x50U, 0x50U);
    func_80102544(lightCtx, 0U, 0U, 0U, (s16) 0x3E4, (s16) 0x3200);
    bzero((void *) &sLightsBuffer, 0x188);
}

void LightContext_SetAmbientColor(LightContext *lightCtx, u8 r, u8 g, u8 b) {
    lightCtx->ambient.r = r & 0xFF;
    lightCtx->ambient.g = g & 0xFF;
    lightCtx->ambient.b = b & 0xFF;
}

void func_80102544(LightContext *lightCtx, u8 a1, u8 a2, u8 a3, s16 numLights, s16 sp16) {
    lightCtx->unk7 = a1 & 0xFF;
    lightCtx->unk8 = a2 & 0xFF;
    lightCtx->unk9 = a3 & 0xFF;
    lightCtx->unkA = numLights;
    lightCtx->unkC = sp16;
}

Lights *LightContext_NewLights(LightContext *lightCtx, GraphicsContext *gfxCtx) {
    return Lights_New(gfxCtx, lightCtx->ambient.r, lightCtx->ambient.g, lightCtx->ambient.b);
}

void LightContext_InitList(GlobalContext *globalCtx, LightContext *lightCtx) {
    lightCtx->listHead = NULL;
}

void LightContext_DestroyList(GlobalContext *globalCtx, LightContext *lightCtx) {
    LightNode *temp_s1;
    LightNode *temp_s1_2;
    LightNode *phi_s1;

    temp_s1 = lightCtx->listHead;
    phi_s1 = temp_s1;
    if (temp_s1 != 0) {
        do {
            LightContext_RemoveLight(globalCtx, lightCtx, phi_s1);
            temp_s1_2 = lightCtx->listHead->next;
            lightCtx->listHead = temp_s1_2;
            phi_s1 = temp_s1_2;
        } while (temp_s1_2 != 0);
    }
}

LightNode *LightContext_InsertLight(GlobalContext *globalCtx, LightContext *lightCtx, LightInfo *info) {
    LightNode *temp_v0;
    LightNode *temp_v1;

    temp_v0 = Lights_FindBufSlot();
    if (temp_v0 != 0) {
        temp_v0->prev = NULL;
        temp_v0->info = info;
        temp_v0->next = lightCtx->listHead;
        temp_v1 = lightCtx->listHead;
        if (temp_v1 != 0) {
            temp_v1->prev = temp_v0;
        }
        lightCtx->listHead = temp_v0;
    }
    return temp_v0;
}

void LightContext_RemoveLight(GlobalContext *globalCtx, LightContext *lightCtx, LightNode *light) {
    LightNode *temp_v0;
    LightNode *temp_v0_2;

    if (light != 0) {
        temp_v0 = light->prev;
        if (temp_v0 != 0) {
            temp_v0->next = light->next;
        } else {
            lightCtx->listHead = light->next;
        }
        temp_v0_2 = light->next;
        if (temp_v0_2 != 0) {
            temp_v0_2->prev = light->prev;
        }
        Lights_FreeNode(light);
    }
}

Lights *Lights_NewAndDraw(GraphicsContext *gfxCtx, u8 ambientR, u8 ambientG, u8 ambientB, u8 numLights, u8 r, u8 g, u8 b, s8 x, s8 y, s8 z) {
    Gfx *temp_s0;
    s32 temp_v1;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_a3 = ambientB & 0xFF;
    temp_a2 = ambientG & 0xFF;
    temp_a1 = ambientR & 0xFF;
    temp_s0 = gfxCtx->polyOpa.d - 0x80;
    gfxCtx->polyOpa.d = temp_s0;
    temp_s0[1].texture.cmd = temp_a1;
    temp_s0[1].tri.tri.flag = temp_a1;
    temp_s0[1].texture.lodscale = temp_a2;
    temp_s0[1].tri.tri.v[0] = temp_a2;
    temp_s0[1].texture.tile = temp_a3;
    temp_s0[1].tri.tri.v[1] = temp_a3;
    temp_s0->texture.cmd = 0;
    temp_s0->texture.lodscale = numLights;
    phi_v1_2 = 0;
    if (((s32) numLights > 0) && (((numLights & 1) == 0) || (temp_s0[2].texture.cmd = r, temp_s0[2].tri.tri.flag = r, temp_s0[2].texture.lodscale = g, temp_s0[2].tri.tri.v[0] = g, temp_s0[2].texture.tile = b, temp_s0[2].tri.tri.v[1] = b, temp_s0[3].texture.cmd = (u8) x, temp_s0[3].texture.lodscale = (u8) y, temp_s0[3].texture.tile = (u8) z, phi_v1_2 = 1, (numLights != 1)))) {
        phi_v0 = temp_s0 + (phi_v1_2 * 0x10);
        phi_v1 = phi_v1_2;
        do {
            temp_v1 = phi_v1 + 2;
            phi_v0->unk_24 = r;
            phi_v0->unk_20 = r;
            phi_v0->unk_25 = g;
            phi_v0->unk_21 = g;
            phi_v0->unk_26 = b;
            phi_v0->unk_22 = b;
            phi_v0->unk_28 = x;
            phi_v0->unk_29 = y;
            phi_v0->unk_2A = z;
            temp_v0 = phi_v0 + 0x20;
            temp_v0->unk_-C = r;
            temp_v0->unk_-10 = r;
            temp_v0->unk_-B = g;
            temp_v0->unk_-F = g;
            temp_v0->unk_-A = b;
            temp_v0->unk_-E = b;
            temp_v0->unk_-8 = x;
            temp_v0->unk_-7 = y;
            temp_v0->unk_-6 = z;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
        } while (temp_v1 != numLights);
    }
    Lights_Draw((Lights *) temp_s0, gfxCtx);
    return (Lights *) temp_s0;
}

Lights *Lights_New(GraphicsContext *gfxCtx, u8 ambientR, u8 ambientG, u8 ambientB) {
    Gfx *temp_v0;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3;

    temp_a3 = ambientB & 0xFF;
    temp_a2 = ambientG & 0xFF;
    temp_a1 = ambientR & 0xFF;
    temp_v0 = gfxCtx->polyOpa.d - 0x80;
    gfxCtx->polyOpa.d = temp_v0;
    temp_v0[1].texture.cmd = temp_a1;
    temp_v0[1].tri.tri.flag = temp_a1;
    temp_v0[1].texture.lodscale = temp_a2;
    temp_v0[1].tri.tri.v[0] = temp_a2;
    temp_v0[1].texture.tile = temp_a3;
    temp_v0[1].tri.tri.v[1] = temp_a3;
    temp_v0->texture.cmd = 0;
    temp_v0->texture.lodscale = 0;
    return (Lights *) temp_v0;
}

void Lights_GlowCheck(GlobalContext *globalCtx) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp88;
    f32 sp84;
    LightNode *temp_s1;
    LightNode *temp_s1_2;
    f32 *temp_a1;
    f32 temp_f12;
    f32 temp_f2;
    u8 *temp_v0;
    void *temp_s0;
    LightNode *phi_s1;

    temp_s1 = globalCtx->lightCtx.listHead;
    phi_s1 = temp_s1;
    if (temp_s1 != 0) {
        do {
            temp_v0 = phi_s1->info;
            temp_s0 = temp_v0 + 2;
            if (*temp_v0 == 2) {
                temp_a1 = &sp94;
                sp94 = (f32) temp_s0->unk_0;
                sp98 = (f32) temp_s0->unk_2;
                sp9C = (f32) temp_s0->unk_4;
                func_800B4EDC(globalCtx, (Vec3f *) temp_a1, (Vec3f *) &sp88, &sp84);
                temp_s0->unk_9 = 0;
                if (sp90 > 1.0f) {
                    temp_f2 = sp88 * sp84;
                    if (fabsf(temp_f2) < 1.0f) {
                        temp_f12 = sp8C * sp84;
                        if ((fabsf(temp_f12) < 1.0f) && (((s32) (sp90 * sp84 * 16352.0f) + 0x3FE0) < func_80178A94((s32) ((temp_f2 * 160.0f) + 160.0f), (s32) ((temp_f12 * -120.0f) + 120.0f)))) {
                            temp_s0->unk_9 = 1;
                        }
                    }
                }
            }
            temp_s1_2 = phi_s1->next;
            phi_s1 = temp_s1_2;
        } while (temp_s1_2 != 0);
    }
}

void Lights_DrawGlow(GlobalContext *globalCtx) {
    GraphicsContext *sp50;
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    Gfx *temp_v0_2;
    GraphicsContext *temp_v0;
    LightNode *temp_s3;
    LightNode *temp_s3_2;
    f32 temp_f0;
    f32 temp_f20;
    u8 *temp_v1;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_v0_3;
    LightNode *phi_s3;
    Gfx *phi_s0;
    Gfx *phi_s0_2;

    temp_s3 = globalCtx->lightCtx.listHead;
    phi_s3 = temp_s3;
    if (temp_s3 != 0) {
        temp_v0 = globalCtx->state.gfxCtx;
        sp50 = temp_v0;
        temp_v0_2 = func_8012C7FC(temp_v0->polyXlu.p);
        temp_v0_2->words.w1 = 0x80;
        temp_v0_2->words.w0 = 0xE3001803;
        temp_s0 = &temp_v0_2[1];
        temp_s0->words.w0 = 0xFCFF97FF;
        temp_s0->words.w1 = 0xFF2DFEFF;
        temp_s0_2 = &temp_s0[1];
        temp_s0_2->words.w1 = (u32) D_04029CB0;
        temp_s0_2->words.w0 = 0xDE000000;
        phi_s0 = &temp_s0_2[1];
        do {
            temp_v1 = phi_s3->info;
            temp_v0_3 = temp_v1 + 2;
            phi_s0_2 = phi_s0;
            if ((*temp_v1 == 2) && (temp_v0_3->unk_9 != 0)) {
                temp_s0_3 = phi_s0 + 8;
                temp_f0 = (f32) temp_v0_3->unk_A;
                temp_f20 = temp_f0 * temp_f0 * 0.000002f;
                phi_s0->words.w0 = 0xFA000000;
                phi_s0->words.w1 = (temp_v0_3->unk_8 << 8) | (temp_v0_3->unk_6 << 0x18) | (temp_v0_3->unk_7 << 0x10) | 0x32;
                SysMatrix_InsertTranslation((f32) temp_v0_3->unk_0, (f32) temp_v0_3->unk_2, (f32) temp_v0_3->unk_4, 0);
                Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
                temp_s0_3->unk_0 = 0xDA380003;
                temp_s0_4 = temp_s0_3 + 8;
                temp_s0_3->unk_4 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_s0_4->unk_0 = 0xDE000000U;
                temp_s0_4->unk_4 = D_04029CF0;
                phi_s0_2 = temp_s0_4 + 8;
            }
            temp_s3_2 = phi_s3->next;
            phi_s3 = temp_s3_2;
            phi_s0 = phi_s0_2;
        } while (temp_s3_2 != 0);
        sp50->polyXlu.p = phi_s0_2;
    }
}
