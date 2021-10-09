extern AnimationHeaderCommon D_0601B1E8;
extern SkeletonHeader D_0601B210;

typedef struct ObjJgGakki {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ ColliderCylinder unk188;           /* inferred */
} ObjJgGakki;                                       /* size 0x1D4 */

void ObjJgGakki_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgGakki *this = (ObjJgGakki *) thisx;
    f32 sp34;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    f32 temp_f0;
    s16 temp_v0;

    temp_f0 = (f32) SkelAnime_GetFrameCount(&D_0601B1E8);
    sp34 = temp_f0;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_0601B210, NULL, NULL, NULL, 0);
    temp_v0 = globalCtx->sceneNum;
    if ((temp_v0 == 8) && (gSaveContext.sceneSetupIndex == 7) && (globalCtx->csCtx.unk_12 == 0)) {
        SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_0601B1E8, 1.0f, temp_f0, temp_f0, (u8) 2, 0.0f);
    } else if ((temp_v0 == 0x5D) || (temp_v0 == 0x50)) {
        SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_0601B1E8, 1.0f, 0.0f, temp_f0, (u8) 2, 0.0f);
    } else {
        Actor_MarkForDeath(&this->actor);
    }
    Actor_SetScale(&this->actor, 0.01f);
}

void ObjJgGakki_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgGakki *this = (ObjJgGakki *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk188);
}

void ObjJgGakki_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgGakki *this = (ObjJgGakki *) thisx;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
}

void ObjJgGakki_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgGakki *this = (ObjJgGakki *) thisx;
    SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, NULL, NULL, &this->actor);
}

