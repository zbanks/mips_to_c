extern Gfx D_06000360;
extern CollisionHeader D_06001428;
static InitChainEntry D_80BB4D90;                   /* unable to generate initializer */

typedef struct ObjYasi {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
} ObjYasi;                                          /* size 0x15C */

void ObjYasi_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjYasi *this = (ObjYasi *) thisx;
    Actor_ProcessInitChain(&this->actor, &D_80BB4D90);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001428);
    this->actor.home.rot.y = 0;
    if ((this->actor.params & 1) != 0) {
        this->actor.scale.x = 0.2f;
        this->actor.scale.z = 0.2f;
    }
}

void ObjYasi_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjYasi *this = (ObjYasi *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void ObjYasi_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjYasi *this = (ObjYasi *) thisx;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f18;
    s16 temp_v0;
    ObjYasi *phi_a3;

    phi_a3 = this;
    if (this->actor.home.rot.z != 0) {
        if ((s32) this->actor.params < 0) {
            this = this;
            if (Rand_ZeroOne() < 0.5f) {
                sp1C = this->actor.world.pos.x;
                sp20 = this->actor.world.pos.y + 280.0f;
                temp_f18 = this->actor.world.pos.z;
                this = this;
                sp24 = temp_f18;
                Item_DropCollectible(globalCtx, (Vec3f *) &sp1C, 0xCU);
            }
        }
        this->actor.home.rot.x = 0x190;
        this->actor.home.rot.z = 0;
        this->actor.home.rot.y = globalCtx->actorCtx.actorList[2].first->shape.rot.y;
        phi_a3 = this;
    }
    temp_v0 = phi_a3->actor.shape.rot.x;
    temp_f0 = (f32) temp_v0;
    phi_a3->actor.home.rot.x -= (s16) (s32) (temp_f0 * 0.1f);
    phi_a3->actor.shape.rot.x = temp_v0 + (phi_a3->actor.home.rot.x - (s32) (temp_f0 * 0.08f));
}

void ObjYasi_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjYasi *this = (ObjYasi *) thisx;
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    if (this->actor.shape.rot.x != 0) {
        Matrix_RotateY(this->actor.home.rot.y, 1U);
        SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
        Matrix_RotateY((s16) (this->actor.shape.rot.y - this->actor.home.rot.y), 1U);
    } else {
        Matrix_RotateY(this->actor.shape.rot.y, 1U);
    }
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    func_800BDFC0(globalCtx, &D_06000360);
}

