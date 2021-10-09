struct _mips2c_stack_BgCheck2_AttachToMesh {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ DynaPolyActor *sp1C;                 /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgCheck2_UpdateActorAttachedToMesh {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ DynaPolyActor *sp20;                 /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgCheck2_UpdateActorPosition {
    /* 0x000 */ char pad_0[0x34];
    /* 0x034 */ PosRot *sp34;                       /* inferred */
    /* 0x038 */ ? sp38;                             /* inferred */
    /* 0x038 */ char pad_38[0xC];
    /* 0x044 */ ? sp44;                             /* inferred */
    /* 0x044 */ char pad_44[0xC];
    /* 0x050 */ ? sp50;                             /* inferred */
    /* 0x050 */ char pad_50[0x40];
    /* 0x090 */ ? sp90;                             /* inferred */
    /* 0x090 */ char pad_90[0x40];
    /* 0x0D0 */ ? spD0;                             /* inferred */
    /* 0x0D0 */ char pad_D0[0x40];
};                                                  /* size = 0x110 */

struct _mips2c_stack_BgCheck2_UpdateActorYRotation {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void BgCheck2_UpdateActorPosition(CollisionContext *colCtx, s32 index, Actor *actor) {
    ? spD0;
    ? sp90;
    ? sp50;
    ? sp44;
    ? sp38;
    PosRot *sp34;
    PosRot *temp_a1;

    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        sp34 = colCtx + (index * 0x64);
        SkinMatrix_SetScaleRotateYRPTranslate((MtxF *) &spD0, colCtx->dyna.bgActors[index].prevTransform.scale.x, colCtx->dyna.bgActors[index].prevTransform.scale.y, colCtx->dyna.bgActors[index].prevTransform.scale.z, (s16) (s32) colCtx->dyna.bgActors[index].prevTransform.rot.x, (s16) (s32) colCtx->dyna.bgActors[index].prevTransform.rot.y, (s16) (s32) colCtx->dyna.bgActors[index].prevTransform.rot.z, colCtx->dyna.bgActors[index].prevTransform.pos.x, colCtx->dyna.bgActors[index].prevTransform.pos.y, colCtx->dyna.bgActors[index].prevTransform.pos.z);
        if (SkinMatrix_Invert((MtxF *) &spD0, (MtxF *) &sp90) != 2) {
            SkinMatrix_SetScaleRotateYRPTranslate((MtxF *) &sp50, colCtx->dyna.bgActors[index].curTransform.scale.x, colCtx->dyna.bgActors[index].curTransform.scale.y, colCtx->dyna.bgActors[index].curTransform.scale.z, (s16) (s32) colCtx->dyna.bgActors[index].curTransform.rot.x, (s16) (s32) colCtx->dyna.bgActors[index].curTransform.rot.y, (s16) (s32) colCtx->dyna.bgActors[index].curTransform.rot.z, colCtx->dyna.bgActors[index].curTransform.pos.x, colCtx->dyna.bgActors[index].curTransform.pos.y, colCtx->dyna.bgActors[index].curTransform.pos.z);
            temp_a1 = &actor->world;
            sp34 = temp_a1;
            SkinMatrix_Vec3fMtxFMultXYZ((MtxF *) &sp90, (Vec3f *) temp_a1, (Vec3f *) &sp38);
            SkinMatrix_Vec3fMtxFMultXYZ((MtxF *) &sp50, (Vec3f *) &sp38, (Vec3f *) &sp44);
            sp34->pos.x = sp44.unk_0;
            sp34->pos.y = sp44.unk_4;
            sp34->pos.z = sp44.unk_8;
        }
    }
}

void BgCheck2_UpdateActorYRotation(CollisionContext *colCtx, s32 index, Actor *actor) {
    s16 temp_v1;

    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        temp_v1 = colCtx->dyna.bgActors[index].curTransform.rot.y - colCtx->dyna.bgActors[index].prevTransform.rot.y;
        if (actor->id == 0) {
            actor->unk_AD4 = (s16) (actor->unk_AD4 + temp_v1);
        }
        actor->shape.rot.y += temp_v1;
        actor->world.rot.y += temp_v1;
    }
}

void BgCheck2_AttachToMesh(CollisionContext *colCtx, Actor *actor, s32 index) {
    DynaPolyActor *sp1C;
    DynaPolyActor *temp_v0;
    u32 temp_v0_2;
    u32 phi_v0;

    if (BgCheck_IsActorMeshIndexValid(index) != 0) {
        temp_v0 = BgCheck_GetActorOfMesh(colCtx, index);
        if (temp_v0 != 0) {
            sp1C = temp_v0;
            func_800CAE88(temp_v0);
            temp_v0_2 = actor->flags;
            phi_v0 = temp_v0_2;
            if ((temp_v0_2 & 0x4000000) == 0x4000000) {
                func_800CAF24(sp1C);
                phi_v0 = actor->flags;
            }
            if ((phi_v0 & 0x20000) == 0x20000) {
                func_800CAF38(sp1C);
            }
        }
    }
}

u32 BgCheck2_UpdateActorAttachedToMesh(CollisionContext *colCtx, s32 index, Actor *actor) {
    u32 sp24;
    DynaPolyActor *sp20;
    DynaPolyActor *temp_ret;
    DynaPolyActor *temp_v0_2;
    u16 temp_v0;

    sp24 = 0;
    if (BgCheck_IsActorMeshIndexValid(index) == 0) {
        return 0U;
    }
    temp_v0 = colCtx->dyna.bgActorFlags[index];
    if (((temp_v0 & 2) != 0) || ((temp_v0 & 1) == 0)) {
        return 0U;
    }
    temp_ret = BgCheck_GetActorOfMesh(colCtx, index);
    temp_v0_2 = temp_ret;
    if (temp_v0_2 == 0) {
        return 0U;
    }
    if ((temp_v0_2->unk154 & 1) != 0) {
        sp20 = temp_v0_2;
        BgCheck2_UpdateActorPosition(colCtx, index, actor);
        sp24 = 1;
    }
    if ((temp_ret->unk154 & 2) != 0) {
        sp24 = 1;
        BgCheck2_UpdateActorYRotation(colCtx, index, actor);
    }
    return sp24;
}
