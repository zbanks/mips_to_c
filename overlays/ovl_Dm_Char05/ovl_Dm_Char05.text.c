void func_80AAC5A0(SkelAnime *arg0, ? *arg1, s32 arg2, u8); /* static */
void func_80AAC63C(DmChar05 *arg0, GlobalContext *arg1); /* static */
void func_80AAC6E4(DmChar05 *arg0, GlobalContext *arg1); /* static */
void func_80AAC770(DmChar05 *arg0, GlobalContext *arg1); /* static */
void func_80AAC7FC(DmChar05 *arg0, GlobalContext *arg1); /* static */
void func_80AAC888(DmChar05 *arg0, ? arg1);         /* static */
void func_80AACF04(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AAD3F8(Actor *arg0, GlobalContext *arg1, GlobalContext *, Actor *); /* static */
void func_80AAD450(Actor *arg0, GlobalContext *arg1, GlobalContext *, Actor *); /* static */
void func_80AAD4A8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AAD964(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80AAD980(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void func_80AAD998(Actor *arg0, GlobalContext *arg1, DmChar05 *, GlobalContext *); /* static */
void func_80AADA90(Actor *arg0, GlobalContext *arg1, DmChar05 *, GlobalContext *); /* static */
void func_80AADB4C(Actor *arg0, GlobalContext *arg1, DmChar05 *, GlobalContext *); /* static */
void func_80AADC00(Actor *arg0, GlobalContext *arg1, DmChar05 *, GlobalContext *); /* static */
void func_80AADD9C(GlobalContext *arg0, Actor *arg1); /* static */
void func_80AADE78(GlobalContext *arg0, Actor *arg1); /* static */
void func_80AADF54(GlobalContext *arg0, Actor *arg1); /* static */
void func_80AAE030(GlobalContext *arg0, DmChar05 *arg1, DmChar05 *, GlobalContext *); /* static */
void func_80AAE114(GlobalContext *arg0, DmChar05 *arg1, DmChar05 *, GlobalContext *); /* static */
extern FlexSkeletonHeader D_060001D0;
extern SkeletonHeader D_060010B0;
extern SkeletonHeader D_060013D0;
extern Gfx D_06001E70;
extern SkeletonHeader D_060042B0;
static ? D_80AAE260;                                /* unable to generate initializer */
static ? D_80AAE278;                                /* unable to generate initializer */
static ? D_80AAE2A8;                                /* unable to generate initializer */
static ? D_80AAE2C0;                                /* unable to generate initializer */
static ? D_80AAE2F0;                                /* unable to generate initializer */
static ? D_80AAE300;                                /* unable to generate initializer */

typedef struct DmChar05 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(DmChar05 *, GlobalContext *);
    /* 0x018C */ s16 unk18C;                        /* inferred */
    /* 0x018E */ u8 unk18E;                         /* inferred */
    /* 0x018F */ u8 unk18F;                         /* inferred */
    /* 0x0190 */ f32 unk190;                        /* inferred */
    /* 0x0194 */ f32 unk194;                        /* inferred */
    /* 0x0198 */ f32 unk198;                        /* inferred */
    /* 0x019C */ u32 unk19C;                        /* inferred */
    /* 0x01A0 */ u32 unk1A0;                        /* inferred */
    /* 0x01A4 */ u32 unk1A4;                        /* inferred */
    /* 0x01A8 */ s32 unk1A8;                        /* inferred */
    /* 0x01AC */ s32 unk1AC;                        /* inferred */
    /* 0x01B0 */ s32 unk1B0;                        /* inferred */
    /* 0x01B4 */ u8 unk1B4;                         /* inferred */
    /* 0x01B5 */ char pad1B5[0x3];                  /* maybe part of unk1B4[4]? */
} DmChar05;                                         /* size 0x1B8 */

void func_80AAC5A0(SkelAnime *arg0, ? *arg1, s32 arg2) {
    f32 temp_f0;
    void *temp_s0;
    f32 phi_f2;

    temp_s0 = arg1 + ((arg2 & 0xFFFF) * 0x18);
    temp_f0 = temp_s0->unkC;
    if (temp_f0 < 0.0f) {
        phi_f2 = (f32) SkelAnime_GetFrameCount(temp_s0->unk0);
    } else {
        phi_f2 = temp_f0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, phi_f2, (u8) (s32) temp_s0->unk10, temp_s0->unk14);
}

void func_80AAC63C(DmChar05 *arg0, GlobalContext *arg1) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;

    ActorShape_Init(arg0 + 0xBC, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = arg0 + 0x144;
    sp30 = temp_a1;
    SkelAnime_Init(arg1, temp_a1, &D_060010B0, NULL, NULL, NULL, 0);
    if (arg0->actor.params == 0) {
        func_80AAC5A0(sp30, &D_80AAE260, 0);
    } else {
        func_80AAC5A0(sp30, &D_80AAE278, 0);
    }
    arg0->actionFunc = func_80AACC48;
}

void func_80AAC6E4(DmChar05 *arg0, GlobalContext *arg1) {
    SkelAnime *sp28;
    SkelAnime *temp_a1;

    ActorShape_Init(arg0 + 0xBC, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = arg0 + 0x144;
    sp28 = temp_a1;
    SkelAnime_Init(arg1, temp_a1, &D_060042B0, NULL, NULL, NULL, 0);
    func_80AAC5A0(sp28, &D_80AAE278, 0);
    arg0->actionFunc = func_80AACC48;
}

void func_80AAC770(DmChar05 *arg0, GlobalContext *arg1) {
    SkelAnime *sp28;
    SkelAnime *temp_a1;

    ActorShape_Init(arg0 + 0xBC, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = arg0 + 0x144;
    sp28 = temp_a1;
    SkelAnime_InitSV(arg1, temp_a1, &D_060001D0, NULL, NULL, NULL, 0);
    func_80AAC5A0(sp28, &D_80AAE2A8, 0);
    arg0->actionFunc = func_80AACC48;
}

void func_80AAC7FC(DmChar05 *arg0, GlobalContext *arg1) {
    SkelAnime *sp28;
    SkelAnime *temp_a1;

    ActorShape_Init(arg0 + 0xBC, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = arg0 + 0x144;
    sp28 = temp_a1;
    SkelAnime_Init(arg1, temp_a1, &D_060013D0, NULL, NULL, NULL, 0);
    func_80AAC5A0(sp28, &D_80AAE2C0, 0);
    arg0->actionFunc = func_80AACC48;
}

void func_80AAC888(DmChar05 *arg0, ? arg1) {
    arg0->actionFunc = func_80AACA98;
}

void DmChar05_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmChar05 *this = (DmChar05 *) thisx;
    u16 temp_t8;

    temp_t8 = (u16) this->actor.params;
    this->unk18C = 0;
    this->unk18E = 0;
    this->unk19C = 0;
    this->unk1A0 = 0;
    this->unk1A4 = 0;
    this->unk1A8 = 0;
    this->unk1AC = 0x64;
    this->unk1B0 = 0x3E8;
    this->unk1B4 = 0;
    switch (temp_t8) {
    case 0:
        func_80AAC63C(this);
        break;
    case 1:
        func_80AAC6E4(this);
        break;
    case 2:
        func_80AAC770(this);
        break;
    case 3:
        func_80AAC7FC(this);
        break;
    case 4:
        func_80AAC888(this);
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        this->actionFunc = func_80AACBE4;
        break;
    }
    Actor_SetScale(&this->actor, 0.01f);
}

void DmChar05_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmChar05 *this = (DmChar05 *) thisx;

}

void func_80AAC990(DmChar05 *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x119);
    if (temp_v0 >= 0) {
        this->unk18F = (s8) temp_v0;
        this->actionFunc = func_80AAC9DC;
    }
}

void func_80AAC9DC(DmChar05 *this, GlobalContext *globalCtx) {
    u32 temp_v0;
    void *temp_v1;

    this = this;
    if (func_800EE29C(globalCtx, 0x6DU) != 0) {
        this = this;
        temp_v0 = func_800EE200(globalCtx, 0x6DU);
        temp_v1 = globalCtx + (temp_v0 * 4);
        if (globalCtx->csCtx.npcActions[temp_v0]->unk0 == 4) {
            this->unk18E = 1;
            this->unk190 = (f32) temp_v1->unk1F4C->unkC;
            this->unk194 = (f32) temp_v1->unk1F4C->unk10;
            this->unk198 = (f32) temp_v1->unk1F4C->unk14;
        }
    }
}

void func_80AACA98(DmChar05 *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x282);
    if (temp_v0 >= 0) {
        this->unk18F = (s8) temp_v0;
        this->actionFunc = func_80AACAE4;
    }
}

void func_80AACAE4(DmChar05 *this, GlobalContext *globalCtx) {
    u32 sp24;
    CsCmdActorAction *temp_v1;
    u32 temp_v0;
    u32 phi_a3;

    this = this;
    if (func_800EE29C(globalCtx, 0x234U) != 0) {
        this = this;
        temp_v0 = func_800EE200(globalCtx, 0x234U);
        temp_v1 = globalCtx->csCtx.npcActions[temp_v0];
        phi_a3 = temp_v0;
        if (temp_v1->unk0 == 2) {
            if (globalCtx->csCtx.frames == temp_v1->startFrame) {
                this = this;
                sp24 = temp_v0;
                Item_Give(globalCtx, 0x3FU);
                phi_a3 = sp24;
            }
            this->unk18E = 1;
            this->unk190 = (f32) globalCtx->csCtx.npcActions[phi_a3]->unkC;
            this->unk194 = (f32) globalCtx->csCtx.npcActions[phi_a3]->unk10;
            this->unk198 = (f32) globalCtx->csCtx.npcActions[phi_a3]->unk14;
            return;
        }
        this->unk18E = 0;
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void func_80AACBE4(DmChar05 *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    s32 temp_v0;

    temp_a1 = *(&D_80AAE2F0 + ((this->actor.params - 5) * 2));
    this = this;
    temp_v0 = Object_GetIndex(&globalCtx->objectCtx, temp_a1);
    if (temp_v0 >= 0) {
        this->unk18F = (s8) temp_v0;
        this->actionFunc = func_80AACD0C;
    }
}

void func_80AACC48(DmChar05 *this, GlobalContext *globalCtx) {
    if (this->unk1B4 != 0) {
        this->actionFunc = func_80AACC6C;
    }
}

void func_80AACC6C(DmChar05 *this, GlobalContext *globalCtx) {
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;

    temp_v0 = this->unk19C;
    if (temp_v0 < 0xF7U) {
        this->unk19C = temp_v0 + 8;
    }
    temp_v0_2 = this->unk1A0;
    if (temp_v0_2 < 0xF7U) {
        this->unk1A0 = temp_v0_2 + 8;
    }
    temp_v0_3 = this->unk1A4;
    if (temp_v0_3 < 0xF7U) {
        this->unk1A4 = temp_v0_3 + 8;
        return;
    }
    this->unk19C = 0xFF;
    this->unk1A0 = 0xFF;
    this->unk1A4 = 0xFF;
    this->actionFunc = func_80AACCD4;
}

void func_80AACCD4(DmChar05 *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = this->unk1AC;
    if (temp_v0 < 0x3CF) {
        this->unk1AC = temp_v0 + 0x19;
        return;
    }
    this->unk1AC = 0x3E4;
    this->actionFunc = func_80AACD0C;
}

void func_80AACD0C(DmChar05 *this, GlobalContext *globalCtx) {

}

void func_80AACD1C(DmChar05 *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x11A);
    if (temp_v0 >= 0) {
        this->unk18F = (s8) temp_v0;
        this->actionFunc = func_80AACD68;
    }
}

void func_80AACD68(DmChar05 *this, GlobalContext *globalCtx) {
    s32 temp_t8;
    void *temp_v1;

    this = this;
    if (func_800EE29C(globalCtx, 0x1D9U) != 0) {
        this = this;
        temp_t8 = func_800EE200(globalCtx, 0x1D9U) * 4;
        this->unk18E = 1;
        temp_v1 = globalCtx + temp_t8;
        this->unk190 = (f32) temp_v1->unk1F4C->unkC;
        this->unk194 = (f32) temp_v1->unk1F4C->unk10;
        this->unk198 = (f32) temp_v1->unk1F4C->unk14;
    }
}

void func_80AACE10(DmChar05 *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x20B);
    if (temp_v0 >= 0) {
        this->unk18F = (s8) temp_v0;
        this->actionFunc = func_80AACE5C;
    }
}

void func_80AACE5C(DmChar05 *this, GlobalContext *globalCtx) {
    s32 temp_t8;
    void *temp_v1;

    this = this;
    if (func_800EE29C(globalCtx, 0x206U) != 0) {
        this = this;
        temp_t8 = func_800EE200(globalCtx, 0x206U) * 4;
        this->unk18E = 1;
        temp_v1 = globalCtx + temp_t8;
        this->unk190 = (f32) temp_v1->unk1F4C->unkC;
        this->unk194 = (f32) temp_v1->unk1F4C->unk10;
        this->unk198 = (f32) temp_v1->unk1F4C->unk14;
    }
}

void func_80AACF04(Actor *arg0, GlobalContext *arg1) {
    u8 sp2F;
    u32 sp28;
    Actor *sp20;
    Actor *temp_a0;
    s16 temp_a2;
    s16 temp_v0_2;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t6;
    s32 temp_t7;
    u16 temp_a2_2;
    u16 temp_t0_2;
    u16 temp_t1;
    u16 temp_t4;
    u32 temp_v0;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    u8 phi_a3;
    u8 phi_a3_2;
    u8 phi_a3_3;
    u8 phi_a3_4;

    temp_a2 = arg0->params;
    phi_a3 = 1U;
    phi_a3_2 = 1U;
    phi_a3_3 = 1U;
    phi_a3_4 = 1U;
    if (temp_a2 != 0) {
        if (temp_a2 != 1) {
            if (temp_a2 != 2) {
                if (temp_a2 != 3) {
                    return;
                }
                sp2F = 1;
                if (func_800EE29C(arg1, 0x22FU) != 0) {
                    sp2F = 1;
                    temp_v0 = func_800EE200(arg1, 0x22FU);
                    temp_t2 = temp_v0 * 4;
                    sp28 = temp_v0;
                    temp_v1 = (arg1 + temp_t2)->unk1F4C;
                    if (arg1->csCtx.frames == temp_v1->unk2) {
                        temp_a2_2 = temp_v1->unk0;
                        if (temp_a2_2 != 1) {
                            if (temp_a2_2 != 2) {
                                if (temp_a2_2 != 3) {
                                    if (temp_a2_2 != 4) {
                                        phi_a3 = 0U;
                                    } else {
                                        arg0->unk18C = 5;
                                    }
                                } else {
                                    arg0->unk18C = 5;
                                }
                            } else {
                                arg0->unk18C = 4;
                            }
                        } else {
                            phi_a3 = 0U;
                        }
                        if (phi_a3 != 0) {
                            func_80AAC5A0(arg0 + 0x144, (arg0->unk18C * 0x18) + &D_80AAE260, 0, phi_a3);
                        }
                    }
                    if (arg1->csCtx.npcActions[sp28]->unk0 != 4) {
                        func_800EDF24(arg0, arg1, sp28);
                    } else {
                        func_800EDE34(arg0, arg1, (s32) sp28);
                    }
                }
                temp_a0 = arg0 + 0x144;
                sp20 = temp_a0;
                if (func_801378B8((SkelAnime *) temp_a0, arg0->unk154) != 0) {
                    temp_v0_2 = arg0->unk18C;
                    if (temp_v0_2 == 4) {
                        arg0->unk18C = (s16) (temp_v0_2 + 1);
                        func_80AAC5A0((SkelAnime *) temp_a0, (arg0->unk18C * 0x18) + &D_80AAE260, 0);
                    }
                }
                // Duplicate return node #63. Try simplifying control flow for better match
                return;
            }
            sp2F = 1;
            if (func_800EE29C(arg1, 0x206U) != 0) {
                sp2F = 1;
                temp_v0_3 = func_800EE200(arg1, 0x206U);
                temp_t0 = temp_v0_3 * 4;
                sp28 = temp_v0_3;
                temp_v1_2 = (arg1 + temp_t0)->unk1F4C;
                if (arg1->csCtx.frames == temp_v1_2->unk2) {
                    temp_t4 = temp_v1_2->unk0;
                    switch (temp_t4) { // switch 3
                    case 1: // switch 3
                    default: // switch 3
                        phi_a3_2 = 0U;
                        break;
                    case 2: // switch 3
                        arg0->unk18C = 3;
                        break;
                    case 3: // switch 3
                        arg0->unk18C = 2;
                        break;
                    case 4: // switch 3
                        Item_Give(arg1, 0x41U);
                        arg0->unk188 = func_80AACE10;
                        phi_a3_2 = 0U;
                        break;
                    case 5: // switch 3
                        sp2F = 0;
                        Actor_MarkForDeath(arg0);
                        phi_a3_2 = sp2F;
                        break;
                    }
                    if (phi_a3_2 != 0) {
                        func_80AAC5A0((SkelAnime *) (arg0 + 0x144), (arg0->unk18C * 0x18) + &D_80AAE260, 0, phi_a3_2);
                    }
                }
                func_800EDF24(arg0, arg1, sp28);
                return;
            }
            // Duplicate return node #63. Try simplifying control flow for better match
            return;
        }
        sp2F = 1;
        if (func_800EE29C(arg1, 0x1D9U) != 0) {
            sp2F = 1;
            temp_v0_4 = func_800EE200(arg1, 0x1D9U);
            temp_t7 = temp_v0_4 * 4;
            sp28 = temp_v0_4;
            temp_v1_3 = (arg1 + temp_t7)->unk1F4C;
            if (arg1->csCtx.frames == temp_v1_3->unk2) {
                temp_t1 = temp_v1_3->unk0;
                switch (temp_t1) { // switch 2
                case 1: // switch 2
                default: // switch 2
                    phi_a3_3 = 0U;
                    break;
                case 2: // switch 2
                    arg0->unk18C = 1;
                    arg0->unk1B4 = 1;
                    break;
                case 3: // switch 2
                    arg0->unk18C = 1;
                    break;
                case 4: // switch 2
                    Item_Give(arg1, 0x34U);
                    arg0->unk188 = func_80AACD1C;
                    phi_a3_3 = 0U;
                    break;
                case 5: // switch 2
                    sp2F = 0;
                    Actor_MarkForDeath(arg0);
                    phi_a3_3 = sp2F;
                    break;
                }
                if (phi_a3_3 != 0) {
                    func_80AAC5A0((SkelAnime *) (arg0 + 0x144), (arg0->unk18C * 0x18) + &D_80AAE260, 0, phi_a3_3);
                }
            }
            func_800EDF24(arg0, arg1, sp28);
            return;
        }
        // Duplicate return node #63. Try simplifying control flow for better match
        return;
    }
    sp2F = 1;
    if (func_800EE29C(arg1, 0x6DU) != 0) {
        sp2F = 1;
        temp_v0_5 = func_800EE200(arg1, 0x6DU);
        temp_t6 = temp_v0_5 * 4;
        sp28 = temp_v0_5;
        temp_v1_4 = (arg1 + temp_t6)->unk1F4C;
        if (arg1->csCtx.frames == temp_v1_4->unk2) {
            temp_t0_2 = temp_v1_4->unk0;
            switch (temp_t0_2) { // switch 1
            case 1: // switch 1
            default: // switch 1
                phi_a3_4 = 0U;
                break;
            case 2: // switch 1
                arg0->unk1B4 = 1;
                break;
            case 3: // switch 1
                arg0->unk18C = 0;
                break;
            case 4: // switch 1
                Item_Give(arg1, 0x33U);
                arg0->unk188 = func_80AAC990;
                phi_a3_4 = 0U;
                break;
            case 5: // switch 1
                sp2F = 0;
                Actor_MarkForDeath(arg0);
                phi_a3_4 = sp2F;
                break;
            }
            if (phi_a3_4 != 0) {
                func_80AAC5A0((SkelAnime *) (arg0 + 0x144), (arg0->unk18C * 0x18) + &D_80AAE260, 0, phi_a3_4);
            }
        }
        func_800EDF24(arg0, arg1, sp28);
    }
}

void func_80AAD3F8(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    s32 phi_v0;

    temp_v0 = arg1->csCtx.frames;
    phi_v0 = (s32) temp_v0;
    if (temp_v0 == 0x1EA) {
        arg1 = arg1;
        Audio_PlayActorSound2(arg0, 0x3A8DU);
        phi_v0 = (s32) arg1->csCtx.frames;
    }
    if (phi_v0 >= 0x227) {
        Audio_PlayActorSound2(arg0, 0x329FU);
    }
}

void func_80AAD450(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    s32 phi_v0;

    temp_v0 = arg1->csCtx.frames;
    phi_v0 = (s32) temp_v0;
    if (temp_v0 == 0x106) {
        arg1 = arg1;
        Audio_PlayActorSound2(arg0, 0x3A8DU);
        phi_v0 = (s32) arg1->csCtx.frames;
    }
    if (phi_v0 >= 0x13F) {
        Audio_PlayActorSound2(arg0, 0x329FU);
    }
}

void func_80AAD4A8(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp18;
    Actor *temp_a0_8;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_4;
    GlobalContext *temp_a0_5;
    GlobalContext *temp_a0_6;
    GlobalContext *temp_a0_7;
    SkelAnime *temp_a0_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_4;
    u16 temp_v0_3;

    temp_v0 = arg0->params;
    if (temp_v0 == 0) {
        temp_a0 = arg1;
        arg1 = arg1;
        arg0 = arg0;
        if ((func_800EE29C(temp_a0, 0x6DU) != 0) && (temp_a0_2 = arg1, arg1 = arg1, temp_a0_3 = arg0 + 0x144, (arg1->csCtx.npcActions[func_800EE200(temp_a0_2, 0x6DU)]->unk0 == 3))) {
            sp18 = temp_a0_3;
            if ((func_801378B8(temp_a0_3, 14.0f) != 0) || (func_801378B8(temp_a0_3, 15.0f) != 0)) {
                Audio_PlayActorSound2(arg0, 0x185FU);
                return;
            }
            if (func_801378B8(sp18, 19.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x1860U);
                return;
            }
            // Duplicate return node #37. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #37. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 1) {
        temp_a0_4 = arg1;
        arg1 = arg1;
        arg0 = arg0;
        if ((func_800EE29C(temp_a0_4, 0x1D9U) != 0) && (temp_a0_5 = arg1, arg1 = arg1, (arg1->csCtx.npcActions[func_800EE200(temp_a0_5, 0x1D9U)]->unk0 == 3)) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 5.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x1861U);
            return;
        }
        // Duplicate return node #37. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 2) {
        temp_a0_6 = arg1;
        arg1 = arg1;
        arg0 = arg0;
        if ((func_800EE29C(temp_a0_6, 0x206U) != 0) && (temp_a0_7 = arg1, arg1 = arg1, temp_a0_8 = arg0 + 0x144, (arg1->csCtx.npcActions[func_800EE200(temp_a0_7, 0x206U)]->unk0 == 2))) {
            sp18 = (SkelAnime *) temp_a0_8;
            if (func_801378B8((SkelAnime *) temp_a0_8, 7.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x185FU);
            }
            if (func_801378B8(sp18, 14.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x1860U);
            }
            if (func_801378B8(sp18, 18.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x1860U);
                return;
            }
            // Duplicate return node #37. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #37. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 3) {
        temp_v0_2 = arg1->sceneNum;
        if (temp_v0_2 == 0x19) {
            if (gSaveContext.sceneSetupIndex == 2) {
                temp_v0_3 = arg1->csCtx.unk_12;
                if (temp_v0_3 == 0) {
                    func_80AAD3F8(arg0, arg1, arg1, arg0);
                    return;
                }
                if (temp_v0_3 == 1) {
                    func_80AAD450(arg0, arg1, arg1, arg0);
                    return;
                }
                // Duplicate return node #37. Try simplifying control flow for better match
                return;
            }
            // Duplicate return node #37. Try simplifying control flow for better match
            return;
        }
        if (temp_v0_2 == 8) {
            temp_v0_4 = gSaveContext.sceneSetupIndex;
            if (temp_v0_4 == 9) {
                if ((arg1->csCtx.unk_12 == 0) && (arg1->csCtx.frames == 0xFF)) {
                    Audio_PlayActorSound2(arg0, 0x3A8DU);
                    return;
                }
                // Duplicate return node #37. Try simplifying control flow for better match
                return;
            }
            if ((temp_v0_4 == 0xB) && (arg1->csCtx.frames == 0x73)) {
                Audio_PlayActorSound2(arg0, 0x3AD3U);
            }
            // Duplicate return node #37. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #37. Try simplifying control flow for better match
    }
}

void DmChar05_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmChar05 *this = (DmChar05 *) thisx;
    func_80AACF04(&this->actor, globalCtx);
    if (func_800EE29C(globalCtx, 0x6DU) != 0) {
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x6DU)]->unk0 == 3) {
            SkelAnime_FrameUpdateMatrix(&this->unk144);
        }
    } else if (func_800EE29C(globalCtx, 0x1D9U) != 0) {
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x1D9U)]->unk0 == 3) {
            SkelAnime_FrameUpdateMatrix(&this->unk144);
        }
    } else if (func_800EE29C(globalCtx, 0x206U) != 0) {
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x206U)]->unk0 == 2) {
            SkelAnime_FrameUpdateMatrix(&this->unk144);
        }
    } else if (func_800EE29C(globalCtx, 0x22FU) != 0) {
        if ((globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x22FU)]->unk0 == 2) || (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x22FU)]->unk0 == 3)) {
            SkelAnime_FrameUpdateMatrix(&this->unk144);
        }
        if (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x22FU)]->unk0 == 4) {
            this->actor.world.rot.y += 0x258;
            this->actor.shape.rot.y += 0x258;
        }
    }
    this->actionFunc(this, globalCtx);
    func_80AAD4A8(&this->actor, globalCtx);
}

s32 func_80AAD964(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80AAD980(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void func_80AAD998(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp30;
    GraphicsContext *temp_a0;
    u8 temp_v0;

    temp_v0 = arg0->unk18E;
    if (temp_v0 == 0) {
        if ((func_800EE29C(arg1, 0x6DU) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, 0x6DU)]->unk0 != 1)) {
            temp_a0 = arg1->state.gfxCtx;
            sp30 = temp_a0;
            func_8012C28C(temp_a0);
            sp30->polyOpa.p = Gfx_SetFog(sp30->polyOpa.p, arg0->unk19C, arg0->unk1A0, arg0->unk1A4, arg0->unk1A8, arg0->unk1AC, arg0->unk1B0);
            SkelAnime_Draw(arg1, arg0->unk148, arg0->unk164, func_80AAD964, func_80AAD980, arg0);
            return;
        }
        // Duplicate return node #6. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 1) {
        func_80AADD9C(arg1, arg0);
    }
}

void func_80AADA90(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk18E;
    if (temp_v0 == 0) {
        if ((func_800EE29C(arg1, 0x1D9U) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, 0x1D9U)]->unk0 != 1)) {
            func_8012C28C(arg1->state.gfxCtx);
            SkelAnime_Draw(arg1, arg0->unk148, arg0->unk164, func_80AAD964, func_80AAD980, arg0);
            return;
        }
        // Duplicate return node #6. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 1) {
        func_80AADE78(arg1, arg0);
    }
}

void func_80AADB4C(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk18E;
    if (temp_v0 == 0) {
        if ((func_800EE29C(arg1, 0x206U) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, 0x206U)]->unk0 != 1)) {
            func_8012C28C(arg1->state.gfxCtx);
            SkelAnime_DrawSV(arg1, arg0->unk148, arg0->unk164, (s32) arg0->unk146, NULL, NULL, arg0);
            return;
        }
        // Duplicate return node #6. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 1) {
        func_80AADF54(arg1, arg0);
    }
}

void func_80AADC00(Actor *arg0, GlobalContext *arg1) {
    u32 sp2C;
    s32 temp_t6;
    u16 temp_v1;
    u32 temp_v0;

    if (func_800EE29C(arg1, 0x22FU) != 0) {
        temp_v0 = func_800EE200(arg1, 0x22FU);
        temp_t6 = temp_v0 * 4;
        sp2C = temp_v0;
        temp_v1 = *(arg1 + temp_t6)->unk1F4C;
        if ((temp_v1 != 1) && (temp_v1 != 4)) {
            func_8012C28C(arg1->state.gfxCtx);
            SkelAnime_Draw(arg1, arg0->unk148, arg0->unk164, func_80AAD964, func_80AAD980, arg0);
        }
        if (arg1->csCtx.npcActions[sp2C]->unk0 == 4) {
            SysMatrix_InsertTranslation(-600.0f, 0.0f, 0.0f, 1);
            func_800BDFC0(arg1, &D_06001E70);
        }
    }
}

void DmChar05_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmChar05 *this = (DmChar05 *) thisx;
    u16 temp_t6;

    temp_t6 = (u16) this->actor.params;
    switch (temp_t6) {
    case 0:
        func_80AAD998(&this->actor, globalCtx, this, globalCtx);
        return;
    case 1:
        func_80AADA90(&this->actor, globalCtx, this, globalCtx);
        return;
    case 2:
        func_80AADB4C(&this->actor, globalCtx, this, globalCtx);
        return;
    case 3:
        func_80AADC00(&this->actor, globalCtx, this, globalCtx);
        return;
    case 4:
        func_80AAE030(globalCtx, this, this, globalCtx);
        return;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        func_80AAE114(globalCtx, this, this, globalCtx);
        // fallthrough
    default:
        return;
    }
}

void func_80AADD9C(GlobalContext *arg0, Actor *arg1) {
    if (arg1->unk18F == arg1->objBankIndex) {
        SysMatrix_InsertTranslation(arg1->unk190, arg1->unk194, arg1->unk198, 0);
        SysMatrix_InsertRotation(0, (s16) (arg0->gameplayFrames * 0x3E8), 0, 1);
        Matrix_Scale(0.2f, 0.2f, 0.2f, 1);
        GetItem_Draw(arg0, 0x44);
    }
    if (Object_IsLoaded(&arg0->objectCtx, (s32) arg1->unk18F) != 0) {
        arg1->objBankIndex = (s8) arg1->unk18F;
    }
}

void func_80AADE78(GlobalContext *arg0, Actor *arg1) {
    if (arg1->unk18F == arg1->objBankIndex) {
        SysMatrix_InsertTranslation(arg1->unk190, arg1->unk194, arg1->unk198, 0);
        SysMatrix_InsertRotation(0, (s16) (arg0->gameplayFrames * 0x3E8), 0, 1);
        Matrix_Scale(0.2f, 0.2f, 0.2f, 1);
        GetItem_Draw(arg0, 0x45);
    }
    if (Object_IsLoaded(&arg0->objectCtx, (s32) arg1->unk18F) != 0) {
        arg1->objBankIndex = (s8) arg1->unk18F;
    }
}

void func_80AADF54(GlobalContext *arg0, Actor *arg1) {
    if (arg1->unk18F == arg1->objBankIndex) {
        SysMatrix_InsertTranslation(arg1->unk190, arg1->unk194, arg1->unk198, 0);
        SysMatrix_InsertRotation(0, (s16) (arg0->gameplayFrames * 0x3E8), 0, 1);
        Matrix_Scale(0.2f, 0.2f, 0.2f, 1);
        GetItem_Draw(arg0, 0x6B);
    }
    if (Object_IsLoaded(&arg0->objectCtx, (s32) arg1->unk18F) != 0) {
        arg1->objBankIndex = (s8) arg1->unk18F;
    }
}

void func_80AAE030(GlobalContext *arg0, DmChar05 *arg1) {
    if (arg1->unk18E != 0) {
        if (arg1->unk18F == arg1->actor.objBankIndex) {
            SysMatrix_InsertTranslation(arg1->unk190, arg1->unk194, arg1->unk198, 0);
            SysMatrix_InsertRotation(0, (s16) (arg0->gameplayFrames * 0x3E8), 0, 1);
            Matrix_Scale(0.2f, 0.2f, 0.2f, 1);
            GetItem_Draw(arg0, 3);
        }
        if (Object_IsLoaded(&arg0->objectCtx, (s32) arg1->unk18F) != 0) {
            arg1->actor.objBankIndex = (s8) arg1->unk18F;
        }
    }
}

void func_80AAE114(GlobalContext *arg0, DmChar05 *arg1) {
    s32 sp34;
    ? sp24;

    sp24.unk0 = (s32) D_80AAE300.unk0;
    sp24.unk4 = (s32) D_80AAE300.unk4;
    sp24.unkC = (s32) D_80AAE300.unkC;
    sp24.unk8 = (s32) D_80AAE300.unk8;
    sp34 = arg1->actor.params - 5;
    if (arg1->unk18F == arg1->actor.objBankIndex) {
        SysMatrix_InsertTranslation(arg1->actor.world.pos.x, arg1->actor.world.pos.y, arg1->actor.world.pos.z, 0);
        SysMatrix_InsertRotation(0, (s16) (arg0->gameplayFrames * 0x3E8), 0, 1);
        Matrix_Scale(0.2f, 0.2f, 0.2f, 1);
        GetItem_Draw(arg0, (sp + (sp34 * 2))->unk24);
    }
    if (Object_IsLoaded(&arg0->objectCtx, (s32) arg1->unk18F) != 0) {
        arg1->actor.objBankIndex = (s8) arg1->unk18F;
    }
}

