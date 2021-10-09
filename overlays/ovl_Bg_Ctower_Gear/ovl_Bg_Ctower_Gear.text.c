void BgCtowerGear_Splash(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06015F30;
extern ? D_060160A0;
extern CollisionHeader D_06016E70;
extern CollisionHeader D_06018588;
static ? D_80AD3270;                                /* unable to generate initializer */
static ? D_80AD32A0;                                /* unable to generate initializer */
static InitChainEntry D_80AD32C4;                   /* unable to generate initializer */
static InitChainEntry D_80AD32D0;                   /* unable to generate initializer */
static InitChainEntry D_80AD32DC;                   /* unable to generate initializer */
static ? D_80AD32E8;                                /* unable to generate initializer */



void BgCtowerGear_Splash(Actor *arg0, GlobalContext *arg1) {
    s32 sp88;
    Vec3f sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    s16 sp66;
    ? *temp_s1;
    Vec3f *temp_s3;
    Vec3f *temp_s3_2;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_s0_2;
    s32 temp_s4;
    s32 temp_t7;
    void *temp_s0;
    s32 phi_s4;
    ? *phi_s1;
    s32 phi_s0;

    temp_t7 = arg0->flags & 0x40;
    sp88 = temp_t7;
    sp66 = arg0->shape.rot.z & 0x1FFF;
    if ((temp_t7 != 0) && ((s32) sp66 < 0x1B58) && ((s32) sp66 >= 0x1388)) {
        Matrix_RotateY(arg0->home.rot.y, 0U);
        SysMatrix_InsertXRotation_s(arg0->home.rot.x, 1);
        SysMatrix_InsertZRotation_s(arg0->home.rot.z, 1);
        temp_s3 = &sp7C;
        phi_s4 = 0;
        do {
            if (Rand_Next() >= 0x40000000U) {
                temp_s0 = (phi_s4 * 0xC) + &D_80AD3270;
                temp_f6 = Rand_ZeroOne() * 30.0f;
                temp_a0 = &sp70;
                sp74 = temp_s0->unk4;
                sp78 = temp_s0->unk8;
                sp70 = temp_s0->unk0 - temp_f6;
                SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, temp_s3);
                sp7C.x += arg0->world.pos.x + ((Rand_ZeroOne() * 20.0f) - 10.0f);
                sp7C.y += arg0->world.pos.y;
                sp7C.z += arg0->world.pos.z + ((Rand_ZeroOne() * 20.0f) - 10.0f);
                EffectSsGSplash_Spawn(arg1, temp_s3, NULL, NULL, (s16) 0, (s16) ((Rand_Next() >> 0x19) + 0x154));
            }
            temp_s4 = phi_s4 + 1;
            phi_s4 = temp_s4;
        } while (temp_s4 != 4);
    }
    temp_s3_2 = &sp7C;
    if (((s32) sp66 < 0x1F4) && ((s32) sp66 >= 0)) {
        if (sp88 != 0) {
            Matrix_RotateY(arg0->home.rot.y, 0U);
            SysMatrix_InsertXRotation_s(arg0->home.rot.x, 1);
            SysMatrix_InsertZRotation_s(arg0->home.rot.z, 1);
            phi_s1 = &D_80AD32A0;
            do {
                phi_s0 = 0;
loop_12:
                temp_f8 = Rand_ZeroOne() * 10.0f;
                temp_a0_2 = &sp70;
                sp74 = phi_s1->unk4;
                sp78 = phi_s1->unk8;
                sp70 = temp_f8 + phi_s1->unk0;
                SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_2, temp_s3_2);
                sp7C.x += arg0->world.pos.x + ((Rand_ZeroOne() * 20.0f) - 10.0f);
                sp7C.y += arg0->world.pos.y;
                sp7C.z += arg0->world.pos.z + ((Rand_ZeroOne() * 20.0f) - 10.0f);
                EffectSsGSplash_Spawn(arg1, temp_s3_2, NULL, NULL, (s16) 0, (s16) ((Rand_Next() >> 0x19) + 0x118));
                temp_s0_2 = phi_s0 + 1;
                phi_s0 = temp_s0_2;
                if (temp_s0_2 != 2) {
                    goto loop_12;
                }
                temp_s1 = phi_s1 + 0xC;
                phi_s1 = temp_s1;
            } while (temp_s1 != &D_80AD32C4);
        }
        Audio_PlayActorSound2(arg0, 0x291BU);
    }
}

void BgCtowerGear_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerGear *this = (BgCtowerGear *) thisx;
    s32 temp_s1;

    temp_s1 = this->dyna.actor.params & 3;
    Actor_SetScale(&this->dyna.actor, 0.1f);
    if (temp_s1 == 1) {
        Actor_ProcessInitChain(&this->dyna.actor, &D_80AD32D0);
    } else if (temp_s1 == 3) {
        Actor_ProcessInitChain(&this->dyna.actor, &D_80AD32DC);
        this->dyna.actor.draw = NULL;
        this->dyna.actor.update = BgCtowerGear_UpdateOrgan;
    } else {
        Actor_ProcessInitChain(&this->dyna.actor, &D_80AD32C4);
    }
    if (temp_s1 == 2) {
        BcCheck3_BgActorInit(&this->dyna, 3);
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06018588);
        return;
    }
    if (temp_s1 == 3) {
        BcCheck3_BgActorInit(&this->dyna, 0);
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06016E70);
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
    }
}

void BgCtowerGear_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerGear *this = (BgCtowerGear *) thisx;
    s32 temp_v0;

    temp_v0 = this->dyna.actor.params & 3;
    if ((temp_v0 == 2) || (temp_v0 == 3)) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
    }
}

void BgCtowerGear_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerGear *this = (BgCtowerGear *) thisx;
    s32 temp_v0;

    temp_v0 = this->dyna.actor.params & 3;
    if (temp_v0 == 0) {
        this->dyna.actor.shape.rot.x += -0x1F4;
        return;
    }
    if (temp_v0 == 1) {
        this->dyna.actor.shape.rot.y += 0x1F4;
        func_800B9010(&this->dyna.actor, 0x2085U);
        return;
    }
    if (temp_v0 == 2) {
        this->dyna.actor.shape.rot.z += -0x1F4;
        BgCtowerGear_Splash();
    }
}

void BgCtowerGear_UpdateOrgan(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerGear *this = (BgCtowerGear *) thisx;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    u16 temp_v1;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    if (func_800EE29C(temp_a0, 0x68U) != 0) {
        temp_a0_2 = globalCtx;
        globalCtx = globalCtx;
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(temp_a0_2, 0x68U)]->unk0;
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {
                    return;
                }
                Actor_MarkForDeath(&this->dyna.actor);
                // Duplicate return node #8. Try simplifying control flow for better match
                return;
            }
            this->dyna.actor.draw = BgCtowerGear_DrawOrgan;
            func_800C6314(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
            return;
        }
        this->dyna.actor.draw = NULL;
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
    }
}

void BgCtowerGear_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerGear *this = (BgCtowerGear *) thisx;
    func_800BDFC0(globalCtx, *(&D_80AD32E8 + ((this->dyna.actor.params & 3) * 4)));
}

void BgCtowerGear_DrawOrgan(Actor *thisx, GlobalContext *globalCtx) {
    BgCtowerGear *this = (BgCtowerGear *) thisx;
    Gfx *sp2C;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp2C = temp_v0;
    sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_060160A0;
    temp_v0_2->words.w0 = 0xDE000000;
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp24 = temp_v0_3;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_06015F30;
    temp_v0_4->words.w0 = 0xDE000000;
}

