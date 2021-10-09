static ? dirBindFuncs;                              /* unable to generate initializer */
static ? posBindFuncs;                              /* unable to generate initializer */
LightsBuffer sLightsBuffer;

typedef struct Lights {
    /* 0x0000 */ u8 enablePosLights;
    /* 0x0001 */ u8 numLights;
    /* 0x0002 */ s16 unk2;                          /* inferred */
    /* 0x0003 */ s8 unk3;                           /* overlap; inferred */
    /* 0x0004 */ s16 unk4;                          /* inferred */
    /* 0x0005 */ u8 unk5;                           /* overlap; inferred */
    /* 0x0006 */ s16 unk6;                          /* inferred */
    /* 0x0007 */ u8 unk7;                           /* overlap; inferred */
    /* 0x0008 */ Lightsn l;
} Lights;                                           /* size 0x80 */

void Lights_PointSetInfo(LightInfo *info, s16 x, s16 y, s16 z, u8 r, u8 g, u8 b, s16 radius, s32 type) {
    Lights *self = (Lights *) info;
    self->enablePosLights = (u8) type;
    self->unk2 = x;
    self->unk4 = y;
    self->unk6 = z;
    Lights_PointSetColorAndRadius((LightInfo *) self, r, g, b, (s16) (s32) radius);
}

void Lights_PointNoGlowSetInfo(LightInfo *info, s16 x, s16 y, s16 z, u8 r, u8 g, u8 b, s16 radius) {
    Lights *self = (Lights *) info;
    Lights_PointSetInfo((LightInfo *) self, x, y, z, (u8) (s32) r, (u8) (s32) g, (u8) (s32) b, (s16) (s32) radius, 0);
}

void Lights_PointGlowSetInfo(LightInfo *info, s16 x, s16 y, s16 z, u8 r, u8 g, u8 b, s16 radius) {
    Lights *self = (Lights *) info;
    Lights_PointSetInfo((LightInfo *) self, x, y, z, (u8) (s32) r, (u8) (s32) g, (u8) (s32) b, (s16) (s32) radius, 2);
}

void Lights_PointSetColorAndRadius(LightInfo *info, u8 r, u8 g, u8 b, s16 radius) {
    Lights *self = (Lights *) info;
    self->l.a.l.col[0] = r & 0xFF;
    self->l.a.l.col[1] = g & 0xFF;
    self->l.a.l.col[2] = b & 0xFF;
    self->unkC = radius;
}

void Lights_PointSetPosition(LightInfo *info, s16 x, s16 y, s16 z) {
    Lights *self = (Lights *) info;
    self->unk2 = x;
    self->unk4 = y;
    self->unk6 = z;
}

void Lights_DirectionalSetInfo(LightInfo *info, s8 x, s8 y, s8 z, u8 r, u8 g, u8 b) {
    Lights *self = (Lights *) info;
    self->enablePosLights = 1;
    self->unk2 = x;
    self->unk3 = y;
    self->unk4 = z;
    self->unk5 = r;
    self->unk6 = g;
    self->unk7 = b;
}

void Lights_Reset(Lights *lights, u8 r, u8 g, u8 b) {
    Lights *self = (Lights *) lights;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3;

    temp_a3 = b & 0xFF;
    temp_a2 = g & 0xFF;
    temp_a1 = r & 0xFF;
    self->l.a.l.colc[0] = temp_a1;
    self->l.a.l.col[0] = temp_a1;
    self->l.a.l.colc[1] = temp_a2;
    self->l.a.l.col[1] = temp_a2;
    self->l.a.l.colc[2] = temp_a3;
    self->l.a.l.col[2] = temp_a3;
    self->numLights = 0;
}

void Lights_Draw(Lights *lights, GraphicsContext *gfxCtx) {
    Lights *self = (Lights *) lights;
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
    gfxCtx->polyOpa.p = temp_t1 + 8;
    temp_t1->words.w0 = 0xDB020000;
    temp_t1->words.w1 = self->numLights * 0x18;
    temp_t1_2 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_t1_2 + 8;
    temp_t1_2->words.w0 = 0xDB020000;
    temp_t1_2->words.w1 = self->numLights * 0x18;
    phi_a3 = 0x18;
    phi_v0 = (u32) self->l.l;
    phi_v1 = 0;
    phi_v1_2 = 0;
    if ((s32) self->numLights > 0) {
        do {
            temp_t1_3 = gfxCtx->polyOpa.p;
            temp_a3 = phi_a3 + 0x18;
            temp_v1 = phi_v1 + 1;
            gfxCtx->polyOpa.p = temp_t1_3 + 8;
            temp_t0 = (((temp_a3 / 8) & 0xFF) << 8) | 0xDC080000 | 0xA;
            temp_t1_3->words.w0 = temp_t0;
            temp_t1_3->words.w1 = phi_v0;
            temp_t1_4 = gfxCtx->polyXlu.p;
            gfxCtx->polyXlu.p = temp_t1_4 + 8;
            temp_t1_4->words.w1 = phi_v0;
            temp_t1_4->words.w0 = temp_t0;
            phi_a3 = temp_a3;
            phi_v0 += 0x10;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
        } while (temp_v1 < (s32) self->numLights);
    }
    temp_t1_5 = gfxCtx->polyOpa.p;
    temp_v1_2 = &self->l;
    gfxCtx->polyOpa.p = temp_t1_5 + 8;
    temp_t0_2 = ((((s32) ((phi_v1_2 * 0x18) + 0x18 + 0x18) / 8) & 0xFF) << 8) | 0xDC080000 | 0xA;
    temp_t1_5->words.w0 = temp_t0_2;
    temp_t1_5->words.w1 = (u32) temp_v1_2;
    temp_t1_6 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_t1_6 + 8;
    temp_t1_6->words.w1 = (u32) temp_v1_2;
    temp_t1_6->words.w0 = temp_t0_2;
}

Light *Lights_FindSlot(Lights *lights) {
    Lights *self = (Lights *) lights;
    u8 temp_v1;

    temp_v1 = self->numLights;
    if ((s32) temp_v1 >= 7) {
        return NULL;
    }
    self->numLights = temp_v1 + 1;
    return self + (temp_v1 * 0x10) + 0x10;
}

void Lights_BindPointWithReference(Lights *lights, LightParams *params, Vec3f *pos) {
    Lights *self = (Lights *) lights;
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
                temp_v0_2 = Lights_FindSlot(self);
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
    Lights *self = (Lights *) lights;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Vec3f sp20;
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
        SkinMatrix_Vec3fMtxFMultXYZ(&globalCtx->projectionMatrix, (Vec3f *) temp_a1, &sp20);
        if ((-temp_f2 < sp20.z) && (sp20.z < (600.0f + temp_f2)) && ((fabsf(sp20.x) - temp_f2) < 400.0f) && ((fabsf(sp20.y) - temp_f2) < 400.0f)) {
            params = params;
            sp38 = temp_f2;
            temp_v0 = Lights_FindSlot(self);
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
    Lights *self = (Lights *) lights;
    Light *temp_v0;
    u8 temp_t1;
    u8 temp_t7;
    u8 temp_t9;

    temp_v0 = Lights_FindSlot(self);
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
    Lights *self = (Lights *) lights;
    LightNode *temp_s0;
    LightNode *temp_s0_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    LightNode *phi_s0;
    LightNode *phi_s0_2;

    phi_s0 = listHead;
    phi_s0_2 = listHead;
    if (listHead != 0) {
        if ((refPos == 0) && (self->enablePosLights == 1)) {
            do {
                temp_v0 = phi_s0->info;
                *(&posBindFuncs + (*temp_v0 * 4))(self, temp_v0 + 2, globalCtx);
                temp_s0 = phi_s0->next;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0);
            return;
        }
        do {
            temp_v0_2 = phi_s0_2->info;
            *(&dirBindFuncs + (*temp_v0_2 * 4))(self, temp_v0_2 + 2, refPos);
            temp_s0_2 = phi_s0_2->next;
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != 0);
        // Duplicate return node #8. Try simplifying control flow for better match
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
    Lights *self = (Lights *) light;
    if (self != 0) {
        sLightsBuffer.numOccupied += -1;
        *self = 0;
        sLightsBuffer.searchIndex = (s32) ((s32) ((self - &sLightsBuffer) - 8) / 0xC) / 0xC;
    }
}

void LightContext_Init(GlobalContext *globalCtx, LightContext *lightCtx) {
    LightContext *self = (LightContext *) globalCtx;
    LightContext_InitList((GlobalContext *) self, lightCtx);
    LightContext_SetAmbientColor(lightCtx, 0x50U, 0x50U, 0x50U);
    func_80102544(lightCtx, 0U, 0U, 0U, (s16) 0x3E4, (s16) 0x3200);
    bzero((void *) &sLightsBuffer, 0x188);
}

void LightContext_SetAmbientColor(LightContext *lightCtx, u8 r, u8 g, u8 b) {
    LightContext *self = (LightContext *) lightCtx;
    self->ambient.r = r & 0xFF;
    self->ambient.g = g & 0xFF;
    self->ambient.b = b & 0xFF;
}

void func_80102544(LightContext *lightCtx, u8 a1, u8 a2, u8 a3, s16 numLights, s16 sp16) {
    lightCtx->unk7 = a1 & 0xFF;
    lightCtx->unk8 = a2 & 0xFF;
    lightCtx->unk9 = a3 & 0xFF;
    lightCtx->unkA = numLights;
    lightCtx->unkC = sp16;
}

Lights *LightContext_NewLights(LightContext *lightCtx, GraphicsContext *gfxCtx) {
    LightContext *self = (LightContext *) lightCtx;
    return Lights_New(gfxCtx, self->ambient.r, self->ambient.g, self->ambient.b);
}

void LightContext_InitList(GlobalContext *globalCtx, LightContext *lightCtx) {
    LightContext *self = (LightContext *) globalCtx;
    lightCtx->listHead = NULL;
}

void LightContext_DestroyList(GlobalContext *globalCtx, LightContext *lightCtx) {
    LightContext *self = (LightContext *) globalCtx;
    LightNode *temp_s1;
    LightNode *temp_s1_2;
    LightNode *phi_s1;

    temp_s1 = lightCtx->listHead;
    phi_s1 = temp_s1;
    if (temp_s1 != 0) {
        do {
            LightContext_RemoveLight((GlobalContext *) self, lightCtx, phi_s1);
            temp_s1_2 = lightCtx->listHead->next;
            lightCtx->listHead = temp_s1_2;
            phi_s1 = temp_s1_2;
        } while (temp_s1_2 != 0);
    }
}

LightNode *LightContext_InsertLight(GlobalContext *globalCtx, LightContext *lightCtx, LightInfo *info) {
    LightContext *self = (LightContext *) globalCtx;
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
    LightContext *self = (LightContext *) globalCtx;
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
    Lights *self = (Lights *) gfxCtx;
    Lights *temp_s0;
    s32 temp_v1;
    s8 temp_a1;
    s8 temp_a2;
    s8 temp_a3;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_a3 = ambientB & 0xFF;
    temp_a2 = ambientG & 0xFF;
    temp_a1 = ambientR & 0xFF;
    temp_s0 = self->unk2B4 - 0x80;
    self->unk2B4 = temp_s0;
    temp_s0->l.a.l.col[0] = temp_a1;
    temp_s0->l.a.l.colc[0] = temp_a1;
    temp_s0->l.a.l.col[1] = temp_a2;
    temp_s0->l.a.l.colc[1] = temp_a2;
    temp_s0->l.a.l.col[2] = temp_a3;
    temp_s0->l.a.l.colc[2] = temp_a3;
    temp_s0->enablePosLights = 0;
    temp_s0->numLights = numLights;
    phi_v1_2 = 0;
    if (((s32) numLights > 0) && (((numLights & 1) == 0) || (temp_s0->l.l[0].l.col[0] = r, temp_s0->l.l[0].l.colc[0] = r, temp_s0->l.l[0].l.col[1] = g, temp_s0->l.l[0].l.colc[1] = g, temp_s0->l.l[0].l.col[2] = b, temp_s0->l.l[0].l.colc[2] = b, temp_s0->l.l[0].l.dir[0] = x, temp_s0->l.l[0].l.dir[1] = y, temp_s0->l.l[0].l.dir[2] = z, phi_v1_2 = 1, (numLights != 1)))) {
        phi_v0 = temp_s0 + (phi_v1_2 * 0x10);
        phi_v1 = phi_v1_2;
        do {
            temp_v1 = phi_v1 + 2;
            phi_v0->unk24 = r;
            phi_v0->unk20 = r;
            phi_v0->unk25 = g;
            phi_v0->unk21 = g;
            phi_v0->unk26 = b;
            phi_v0->unk22 = b;
            phi_v0->unk28 = x;
            phi_v0->unk29 = y;
            phi_v0->unk2A = z;
            temp_v0 = phi_v0 + 0x20;
            temp_v0->unk-C = r;
            temp_v0->unk-10 = r;
            temp_v0->unk-B = g;
            temp_v0->unk-F = g;
            temp_v0->unk-A = b;
            temp_v0->unk-E = b;
            temp_v0->unk-8 = x;
            temp_v0->unk-7 = y;
            temp_v0->unk-6 = z;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
        } while (temp_v1 != numLights);
    }
    Lights_Draw(temp_s0, (GraphicsContext *) self);
    return temp_s0;
}

Lights *Lights_New(GraphicsContext *gfxCtx, u8 ambientR, u8 ambientG, u8 ambientB) {
    Lights *self = (Lights *) gfxCtx;
    Lights *temp_v0;
    s8 temp_a1;
    s8 temp_a2;
    s8 temp_a3;

    temp_a3 = ambientB & 0xFF;
    temp_a2 = ambientG & 0xFF;
    temp_a1 = ambientR & 0xFF;
    temp_v0 = self->unk2B4 - 0x80;
    self->unk2B4 = temp_v0;
    temp_v0->l.a.l.col[0] = temp_a1;
    temp_v0->l.a.l.colc[0] = temp_a1;
    temp_v0->l.a.l.col[1] = temp_a2;
    temp_v0->l.a.l.colc[1] = temp_a2;
    temp_v0->l.a.l.col[2] = temp_a3;
    temp_v0->l.a.l.colc[2] = temp_a3;
    temp_v0->enablePosLights = 0;
    temp_v0->numLights = 0;
    return temp_v0;
}

void Lights_GlowCheck(GlobalContext *globalCtx) {
    Lights *self = (Lights *) globalCtx;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    Vec3f sp88;
    f32 sp84;
    f32 *temp_a1;
    f32 temp_f12;
    f32 temp_f2;
    u8 *temp_v0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s1_2;
    void *phi_s1;

    temp_s1 = self->unk818;
    phi_s1 = temp_s1;
    if (temp_s1 != 0) {
        do {
            temp_v0 = phi_s1->unk0;
            temp_s0 = temp_v0 + 2;
            if (*temp_v0 == 2) {
                temp_a1 = &sp94;
                sp94 = (f32) temp_s0->unk0;
                sp98 = (f32) temp_s0->unk2;
                sp9C = (f32) temp_s0->unk4;
                func_800B4EDC((GlobalContext *) self, (Vec3f *) temp_a1, &sp88, &sp84);
                temp_s0->unk9 = 0;
                if (sp88.z > 1.0f) {
                    temp_f2 = sp88.x * sp84;
                    if (fabsf(temp_f2) < 1.0f) {
                        temp_f12 = sp88.y * sp84;
                        if ((fabsf(temp_f12) < 1.0f) && (((s32) (sp88.z * sp84 * 16352.0f) + 0x3FE0) < func_80178A94((s32) ((temp_f2 * 160.0f) + 160.0f), (s32) ((temp_f12 * -120.0f) + 120.0f)))) {
                            temp_s0->unk9 = 1;
                        }
                    }
                }
            }
            temp_s1_2 = phi_s1->unk8;
            phi_s1 = temp_s1_2;
        } while (temp_s1_2 != 0);
    }
}

void Lights_DrawGlow(GlobalContext *globalCtx) {
    Lights *self = (Lights *) globalCtx;
    GraphicsContext *sp50;
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    Gfx *temp_v0_2;
    GraphicsContext *temp_v0;
    f32 temp_f0;
    f32 temp_f20;
    u8 *temp_v1;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_v0_3;
    void *phi_s3;
    Gfx *phi_s0;
    Gfx *phi_s0_2;

    temp_s3 = self->unk818;
    phi_s3 = temp_s3;
    if (temp_s3 != 0) {
        temp_v0 = self->unk0;
        sp50 = temp_v0;
        temp_v0_2 = func_8012C7FC(temp_v0->polyXlu.p);
        temp_v0_2->words.w1 = 0x80;
        temp_v0_2->words.w0 = 0xE3001803;
        temp_s0 = temp_v0_2 + 8;
        temp_s0->words.w0 = 0xFCFF97FF;
        temp_s0->words.w1 = 0xFF2DFEFF;
        temp_s0_2 = temp_s0 + 8;
        temp_s0_2->words.w1 = (u32) D_04029CB0;
        temp_s0_2->words.w0 = 0xDE000000;
        phi_s0 = temp_s0_2 + 8;
        do {
            temp_v1 = phi_s3->unk0;
            temp_v0_3 = temp_v1 + 2;
            phi_s0_2 = phi_s0;
            if ((*temp_v1 == 2) && (temp_v0_3->unk9 != 0)) {
                temp_s0_3 = phi_s0 + 8;
                temp_f0 = (f32) temp_v0_3->unkA;
                temp_f20 = temp_f0 * temp_f0 * 0.000002f;
                phi_s0->words.w0 = 0xFA000000;
                phi_s0->words.w1 = (temp_v0_3->unk8 << 8) | (temp_v0_3->unk6 << 0x18) | (temp_v0_3->unk7 << 0x10) | 0x32;
                SysMatrix_InsertTranslation((f32) temp_v0_3->unk0, (f32) temp_v0_3->unk2, (f32) temp_v0_3->unk4, 0);
                Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
                temp_s0_3->unk0 = 0xDA380003;
                temp_s0_4 = temp_s0_3 + 8;
                temp_s0_3->unk4 = Matrix_NewMtx(self->unk0);
                temp_s0_4->unk0 = 0xDE000000U;
                temp_s0_4->unk4 = D_04029CF0;
                phi_s0_2 = temp_s0_4 + 8;
            }
            temp_s3_2 = phi_s3->unk8;
            phi_s3 = temp_s3_2;
            phi_s0 = phi_s0_2;
        } while (temp_s3_2 != 0);
        sp50->polyXlu.p = phi_s0_2;
    }
}

