typedef struct ObjJgGakki {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ ColliderCylinder unk_188;           /* inferred */
} ObjJgGakki;                                       /* size = 0x1D4 */

struct _mips2c_stack_ObjJgGakki_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjJgGakki_Draw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjJgGakki_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_ObjJgGakki_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern AnimationHeaderCommon D_0601B1E8;
extern SkeletonHeader D_0601B210;

void ObjJgGakki_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp34;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    ObjJgGakki *this = (ObjJgGakki *) thisx;

    temp_f0 = (f32) SkelAnime_GetFrameCount(&D_0601B1E8);
    sp34 = temp_f0;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk_144;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_0601B210, NULL, NULL, NULL, 0);
    temp_v0 = globalCtx->sceneNum;
    if ((temp_v0 == 8) && (gSaveContext.sceneSetupIndex == 7) && (globalCtx->csCtx.unk_12 == 0)) {
        SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_0601B1E8, 1.0f, temp_f0, temp_f0, (u8) 2, 0.0f);
    } else if ((temp_v0 == 0x5D) || (temp_v0 == 0x50)) {
        SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_0601B1E8, 1.0f, 0.0f, temp_f0, (u8) 2, 0.0f);
    } else {
        Actor_MarkForDeath((Actor *) this);
    }
    Actor_SetScale((Actor *) this, 0.01f);
}

void ObjJgGakki_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgGakki *this = (ObjJgGakki *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_188);
}

void ObjJgGakki_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgGakki *this = (ObjJgGakki *) thisx;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
}

void ObjJgGakki_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgGakki *this = (ObjJgGakki *) thisx;
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, NULL, NULL, (Actor *) this);
}
