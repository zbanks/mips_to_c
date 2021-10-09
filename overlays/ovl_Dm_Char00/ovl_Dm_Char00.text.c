void func_80AA5580(SkelAnime *arg0, ? *arg1, s32 arg2, Actor *); /* static */
void func_80AA561C(Actor *arg0, void *arg1);        /* static */
void func_80AA5720(Actor *arg0, void *arg1);        /* static */
void func_80AA575C(Actor *arg0, void *arg1);        /* static */
void func_80AA5890(Actor *arg0, void *arg1);        /* static */
void func_80AA58CC(Actor *arg0, void *arg1);        /* static */
void func_80AA5950(s32 arg0, ? arg1);               /* static */
void func_80AA5960(Actor *arg0, void *arg1);        /* static */
void func_80AA59E4(Actor *arg0, void *arg1);        /* static */
void func_80AA5A6C(Actor *arg0, void *arg1);        /* static */
void func_80AA5AF4(Actor *arg0, void *arg1);        /* static */
void func_80AA5BF8(Actor *arg0, void *arg1);        /* static */
void func_80AA5CD4(Actor *arg0, void *arg1);        /* static */
void func_80AA5D10(Actor *arg0, void *arg1);        /* static */
void func_80AA5D6C(Actor *arg0, void *arg1);        /* static */
void func_80AA5DC8(Actor *arg0, void *arg1);        /* static */
void func_80AA5E2C(Actor *arg0, void *arg1);        /* static */
void func_80AA5EBC(DmChar00 *arg1, GlobalContext *); /* static */
void func_80AA62FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AA67F8(DmChar00 *, GlobalContext *);    /* static */
void func_80AA695C(DmChar00 *, GlobalContext *);    /* static */
s32 func_80AA6A6C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
extern SkeletonHeader D_0402AF58;
static ? D_80AA6FB0;                                /* unable to generate initializer */
static ? D_80AA77A8;                                /* unable to generate initializer */
static ? D_80AA77D8;                                /* unable to generate initializer */
static Vec3f D_80AA7808 = {0.0f, 0.0f, 0.0f};

typedef struct DmChar00 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x54];                 /* maybe part of unk188[15]? */
    /* 0x01E2 */ Vec3s unk1E2;                      /* inferred */
    /* 0x01E8 */ char pad1E8[0x54];                 /* maybe part of unk1E2[15]? */
    /* 0x023C */ void (*actionFunc)(DmChar00 *, GlobalContext *);
    /* 0x0240 */ f32 unk240;                        /* inferred */
    /* 0x0244 */ f32 unk244;                        /* inferred */
    /* 0x0248 */ f32 unk248;                        /* inferred */
    /* 0x024C */ f32 unk24C;                        /* inferred */
    /* 0x0250 */ f32 unk250;                        /* inferred */
    /* 0x0254 */ f32 unk254;                        /* inferred */
    /* 0x0258 */ f32 unk258;                        /* inferred */
    /* 0x025C */ s32 unk25C;                        /* inferred */
    /* 0x0260 */ s8 unk260;                         /* inferred */
    /* 0x0261 */ u8 unk261;                         /* inferred */
    /* 0x0262 */ u16 unk262;                        /* inferred */
} DmChar00;                                         /* size 0x264 */

void func_80AA5580(SkelAnime *arg0, ? *arg1, s32 arg2) {
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

void func_80AA561C(Actor *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0->params == 0) {
        temp_v0 = arg1->unk1F34 + 0x14;
        if ((temp_v0 != 0x1F7) && (temp_v0 != 0x39E) && (temp_v0 != 0x3D3) && (temp_v0 != 0x4C6) && (temp_v0 != 0x692)) {
            if (temp_v0 != 0x742) {
                if (temp_v0 != 0x7FB) {
                    if (temp_v0 == 0x892) {
                        goto block_9;
                    }
                    // Duplicate return node #22. Try simplifying control flow for better match
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x2925U);
                return;
            }
            Audio_PlayActorSound2(arg0, 0x2872U);
            return;
        }
block_9:
        Audio_PlayActorSound2(arg0, 0x281BU);
        return;
    }
    temp_v0_2 = arg1->unk1F34 + 0x14;
    if ((temp_v0_2 != 0x1F7) && (temp_v0_2 != 0x39E) && (temp_v0_2 != 0x3D3) && (temp_v0_2 != 0x4D2) && (temp_v0_2 != 0x697)) {
        if (temp_v0_2 != 0x7FB) {
            if ((temp_v0_2 == 0x892) || (temp_v0_2 == 0x8A2)) {
                goto block_20;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        }
        Audio_PlayActorSound2(arg0, 0x2926U);
        return;
    }
block_20:
    Audio_PlayActorSound2(arg0, 0x2924U);
}

void func_80AA5720(Actor *arg0, void *arg1) {
    if ((arg0->params == 0) && (arg1->unk1F34 == 0x1F9)) {
        Audio_PlayActorSound2(arg0, 0x2927U);
    }
}

void func_80AA575C(Actor *arg0, void *arg1) {
    u16 temp_v0;

    if (arg0->params == 0) {
        temp_v0 = arg1->unk1F34;
        if ((s32) temp_v0 >= 0x32E) {
            if ((s32) temp_v0 >= 0x389) {
                if (temp_v0 != 0x3CC) {
                    return;
                }
                goto block_19;
            }
            switch (temp_v0) { // switch 1
            case 904: // switch 1
                Audio_PlayActorSound2(arg0, 0x2935U);
                return;
            }
        } else {
            if ((s32) temp_v0 >= 0x307) {
                if (temp_v0 != 0x32D) {
                    return;
                }
block_19:
                Audio_PlayActorSound2(arg0, 0x2936U);
                return;
            }
            if ((s32) temp_v0 >= 0x209) {
                if (temp_v0 != 0x306) {
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x2925U);
                return;
            }
            switch (temp_v0) { // switch 2
            case 474: // switch 2
            case 489: // switch 2
            case 495: // switch 2
            case 505: // switch 2
            case 854: // switch 1
            case 860: // switch 1
            case 866: // switch 1
            case 872: // switch 1
            case 877: // switch 1
            case 882: // switch 1
            case 887: // switch 1
                Audio_PlayActorSound2(arg0, 0x2872U);
                return;
            case 520: // switch 2
                Audio_PlayActorSound2(arg0, 0x2934U);
                return;
            }
        }
    } else {
        if (arg1->unk1F34 == 0x294) {
            Audio_PlayActorSound2(arg0, 0x2926U);
        }
    default: // switch 2
    default: // switch 1
    }
}

void func_80AA5890(Actor *arg0, void *arg1) {
    if ((arg0->params == 0) && (arg1->unk1F34 == 0x14)) {
        Audio_PlayActorSound2(arg0, 0x281BU);
    }
}

void func_80AA58CC(Actor *arg0, void *arg1) {
    u16 temp_v0;

    if (arg0->params == 0) {
        if (arg1->unk1F34 == 0x238) {
            Audio_PlayActorSound2(arg0, 0x2925U);
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    temp_v0 = arg1->unk1F34;
    if ((temp_v0 != 0x177) && (temp_v0 != 0x1DF)) {
        if (temp_v0 != 0x216) {
            return;
        }
        Audio_PlayActorSound2(arg0, 0x2872U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x2924U);
}

void func_80AA5950(s32 arg0, ? arg1) {

}

void func_80AA5960(Actor *arg0, void *arg1) {
    u16 temp_v0;

    if (arg0->params == 0) {
        if (arg1->unk1F34 == 0x118) {
            Audio_PlayActorSound2(arg0, 0x2925U);
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    temp_v0 = arg1->unk1F34;
    if ((temp_v0 != 0x57) && (temp_v0 != 0xBE)) {
        if (temp_v0 != 0xF4) {
            return;
        }
        Audio_PlayActorSound2(arg0, 0x2872U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x2924U);
}

void func_80AA59E4(Actor *arg0, void *arg1) {
    u16 temp_v0;

    if (arg0->params == 0) {
        temp_v0 = arg1->unk1F34;
        if (temp_v0 != 0x7D) {
            if (temp_v0 != 0x728) {
                return;
            }
            Audio_PlayActorSound2(arg0, 0x281BU);
            Audio_PlayActorSound2(arg0, 0x4832U);
            return;
        }
        Audio_PlayActorSound2(arg0, 0x281BU);
        return;
    }
    if (arg1->unk1F34 == 0x7D) {
        Audio_PlayActorSound2(arg0, 0x2924U);
    }
}

void func_80AA5A6C(Actor *arg0, void *arg1) {
    u16 temp_v0;

    if (arg0->params == 0) {
        temp_v0 = arg1->unk1F34;
        if (temp_v0 != 0x2C) {
            if (temp_v0 != 0x37B) {
                return;
            }
            Audio_PlayActorSound2(arg0, 0x281BU);
            Audio_PlayActorSound2(arg0, 0x4832U);
            return;
        }
        Audio_PlayActorSound2(arg0, 0x281BU);
        return;
    }
    if (arg1->unk1F34 == 0x2C) {
        Audio_PlayActorSound2(arg0, 0x2924U);
    }
}

void func_80AA5AF4(Actor *arg0, void *arg1) {
    u16 temp_v0;
    u16 temp_v1;
    s32 phi_v1;
    Actor *phi_a0;

    phi_a0 = arg0;
    if (arg0->params == 0) {
        temp_v0 = arg1->unk1F34;
        if ((temp_v0 != 0x160) && (temp_v0 != 0x191)) {
            if (temp_v0 != 0x1B8) {
                if (temp_v0 != 0x226) {
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x2936U);
                return;
            }
            Audio_PlayActorSound2(arg0, 0x281BU);
            return;
        }
        Audio_PlayActorSound2(arg0, 0x281BU);
        return;
    }
    temp_v1 = arg1->unk1F34;
    phi_v1 = (s32) temp_v1;
    if ((temp_v1 != 0x16A) && (temp_v1 != 0x191)) {
        if (temp_v1 != 0x1C6) {

        } else {
            arg1 = arg1;
            Audio_PlayActorSound2(arg0, 0x2924U);
            goto block_15;
        }
    } else {
        arg1 = arg1;
        Audio_PlayActorSound2(arg0, 0x2924U);
block_15:
        phi_v1 = (s32) arg1->unk1F34;
        phi_a0 = arg0;
    }
    if ((phi_v1 >= 0x1F4) && (phi_v1 < 0x25A)) {
        Audio_PlayActorSound2(phi_a0, 0x219AU);
    }
}

void func_80AA5BF8(Actor *arg0, void *arg1) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (arg0->params == 0) {
        temp_v0 = arg1->unk1F34;
        if (temp_v0 != 0x2FA) {
            if (temp_v0 != 0x31D) {

            } else {
                Audio_PlayActorSound2(arg0, 0x281BU);
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x29C0U);
        }
    } else {
        temp_v0_2 = arg1->unk1F34;
        if (temp_v0_2 != 0x2FA) {
            if (temp_v0_2 != 0x31D) {

            } else {
                Audio_PlayActorSound2(arg0, 0x2924U);
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x29C1U);
        }
    }
    if ((arg0->unk261 == 0x35) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 16.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x2924U);
    }
}

void func_80AA5CD4(Actor *arg0, void *arg1) {
    if ((arg0->params != 0) && (arg1->unk1F34 == 0x1D3)) {
        Audio_PlayActorSound2(arg0, 0x2924U);
    }
}

void func_80AA5D10(Actor *arg0, void *arg1) {
    u16 temp_v0;

    if (arg0->params == 0) {
        temp_v0 = arg1->unk1F34;
        if (temp_v0 != 8) {
            if (temp_v0 != 0x82) {
                return;
            }
            Audio_PlayActorSound2(arg0, 0x285FU);
            // Duplicate return node #6. Try simplifying control flow for better match
            return;
        }
        Audio_PlayActorSound2(arg0, 0x2925U);
    }
}

void func_80AA5D6C(Actor *arg0, void *arg1) {
    u16 temp_v0;

    if (arg0->params == 0) {
        temp_v0 = arg1->unk1F34;
        if (temp_v0 != 2) {
            if (temp_v0 != 0x1F) {
                if (temp_v0 == 0xA6) {
                    goto block_4;
                }
                // Duplicate return node #6. Try simplifying control flow for better match
                return;
            }
            Audio_PlayActorSound2(arg0, 0x2925U);
            // Duplicate return node #6. Try simplifying control flow for better match
            return;
        }
block_4:
        Audio_PlayActorSound2(arg0, 0x281BU);
    }
}

void func_80AA5DC8(Actor *arg0, void *arg1) {
    u16 temp_v0;

    if (arg0->params == 0) {
        temp_v0 = arg1->unk1F34;
        if (temp_v0 != 0x82) {
            if ((temp_v0 == 0xE9) || (temp_v0 == 0x19F) || (temp_v0 == 0x251)) {
                Audio_PlayActorSound2(arg0, 0x281BU);
                return;
            }
            // Duplicate return node #7. Try simplifying control flow for better match
            return;
        }
        Audio_PlayActorSound2(arg0, 0x285FU);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_80AA5E2C(Actor *arg0, void *arg1) {
    u16 temp_v0;

    if (arg0->params == 1) {
        temp_v0 = arg1->unk1F34;
        if (temp_v0 != 0x20) {
            if (temp_v0 != 0x2A) {
                if (temp_v0 != 0xC0) {
                    if (temp_v0 != 0xD7) {
                        return;
                    }
                    Audio_PlayActorSound2(arg0, 0x2999U);
                    // Duplicate return node #10. Try simplifying control flow for better match
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x2936U);
                return;
            }
            Audio_PlayActorSound2(arg0, 0x2924U);
            return;
        }
        Audio_PlayActorSound2(arg0, 0x281BU);
    }
}

void func_80AA5EBC(DmChar00 *arg1) {
    s16 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_6;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_7;
    u16 temp_v0_8;

    if (arg1->unk1F2C != 0) {
        temp_v0 = arg1->unkA4;
        if ((s32) temp_v0 >= 0x64) {
            if (temp_v0 != 0x65) {
                return;
            }
            if (gSaveContext.sceneSetupIndex == 1) {
                func_80AA561C();
                return;
            }
            // Duplicate return node #49. Try simplifying control flow for better match
            return;
        }
        if ((s32) temp_v0 >= 0x2E) {
            if (temp_v0 != 0x63) {
                return;
            }
            if ((gSaveContext.sceneSetupIndex == 0) && (arg1->unk1F36 == 0)) {
                func_80AA5D10();
                return;
            }
            // Duplicate return node #49. Try simplifying control flow for better match
            return;
        }
        switch (temp_v0) {
        case 26:
            if (gSaveContext.sceneSetupIndex == 0) {
                temp_v0_2 = arg1->unk1F36;
                if (temp_v0_2 == 0) {
                    func_80AA5720();
                    return;
                }
                if (temp_v0_2 == 1) {
                    func_80AA575C();
                    return;
                }
                if (temp_v0_2 == 2) {
                    func_80AA5890();
                    return;
                }
                // Duplicate return node #49. Try simplifying control flow for better match
                return;
            }
            // Duplicate return node #49. Try simplifying control flow for better match
            return;
        case 25:
            temp_v0_3 = gSaveContext.sceneSetupIndex;
            if (temp_v0_3 == 0) {
                temp_v0_4 = arg1->unk1F36;
                if (temp_v0_4 == 0) {
                    func_80AA58CC();
                    return;
                }
                if (temp_v0_4 == 1) {
                    func_80AA5950();
                    return;
                }
                if (temp_v0_4 == 2) {
                    func_80AA5960();
                    return;
                }
                // Duplicate return node #49. Try simplifying control flow for better match
                return;
            }
            if (temp_v0_3 == 2) {
                temp_v0_5 = arg1->unk1F36;
                if (temp_v0_5 == 0) {
                    func_80AA59E4();
                    return;
                }
                if (temp_v0_5 == 1) {
                    func_80AA5A6C();
                    return;
                }
                // Duplicate return node #49. Try simplifying control flow for better match
                return;
            }
            // Duplicate return node #49. Try simplifying control flow for better match
            return;
        case 45:
            temp_v0_6 = gSaveContext.sceneSetupIndex;
            if (temp_v0_6 == 3) {
                temp_v0_7 = arg1->unk1F36;
                if (temp_v0_7 == 0) {
                    func_80AA5AF4();
                    return;
                }
                if (temp_v0_7 == 2) {
                    func_80AA5E2C();
                    return;
                }
                // Duplicate return node #49. Try simplifying control flow for better match
                return;
            }
            if (temp_v0_6 == 7) {
                temp_v0_8 = arg1->unk1F36;
                if (temp_v0_8 == 0) {
                    func_80AA5BF8();
                    return;
                }
                if (temp_v0_8 == 1) {
                    func_80AA5CD4();
                    return;
                }
                // Duplicate return node #49. Try simplifying control flow for better match
                return;
            }
            // Duplicate return node #49. Try simplifying control flow for better match
            return;
        case 27:
            if ((gSaveContext.sceneSetupIndex == 0) && (arg1->unk1F36 == 1)) {
                func_80AA5DC8();
                return;
            }
            // Duplicate return node #49. Try simplifying control flow for better match
            return;
        case 35:
            if ((gSaveContext.sceneSetupIndex == 0) && (arg1->unk1F36 == 0)) {
                func_80AA5D6C();
            }
            // Duplicate return node #49. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void DmChar00_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmChar00 *this = (DmChar00 *) thisx;
    ActorShape *sp34;
    SkelAnime *sp30;
    ActorShape *temp_a0;
    SkelAnime *temp_a1;
    void *temp_t1;
    void *temp_t6;

    if ((globalCtx->sceneNum == 0x65) && (func_800EE2F4(globalCtx) == 0)) {
        Actor_MarkForDeath(&this->actor);
    }
    temp_t1 = (this->actor.params * 0x10) + &D_80AA77A8;
    this->unk240 = temp_t1->unk0;
    this->unk244 = temp_t1->unk4;
    temp_t6 = (this->actor.params * 0x10) + &D_80AA77D8;
    this->unk248 = temp_t1->unk8;
    this->unk24C = temp_t1->unkC;
    temp_a0 = &this->actor.shape;
    this->unk250 = temp_t6->unk0;
    this->unk254 = temp_t6->unk4;
    this->unk258 = temp_t6->unk8;
    this->unk25C = temp_t6->unkC;
    this->unk260 = 0x63;
    this->unk262 = this->actor.params << 0xB;
    this->actor.targetArrowOffset = 3000.0f;
    sp34 = temp_a0;
    ActorShape_Init(temp_a0, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_0402AF58, (AnimationHeader *) &D_04029140, &this->unk188, &this->unk1E2, 7);
    ActorShape_Init(temp_a0, 0.0f, NULL, 15.0f);
    func_80AA5580(sp30, &D_80AA6FB0, 0);
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_80AA67F8;
}

void DmChar00_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmChar00 *this = (DmChar00 *) thisx;

}

void func_80AA62FC(Actor *arg0, GlobalContext *arg1) {
    u16 sp26;
    u32 sp20;
    SkelAnime *sp18;
    Actor *temp_a0_2;
    Actor *temp_a3;
    s16 temp_a1;
    s32 temp_t7;
    s8 temp_t0;
    s8 temp_t7_2;
    u16 temp_a1_2;
    u16 temp_a1_3;
    u16 temp_t2;
    u32 temp_v0;
    u8 temp_t2_2;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_v1;
    SkelAnime *phi_a0;

    temp_a1 = arg0->params;
    arg0 = arg0;
    temp_a1_2 = (temp_a1 + 0x71) & 0xFFFF;
    sp26 = temp_a1_2;
    if (func_800EE29C(arg1, (u32) temp_a1_2) != 0) {
        arg0 = arg0;
        temp_v0 = func_800EE200(arg1, (u32) temp_a1_2);
        temp_t7 = temp_v0 * 4;
        sp20 = temp_v0;
        temp_v1 = arg1 + temp_t7;
        temp_a0 = temp_v1->unk1F4C;
        if (arg1->csCtx.frames == temp_a0->unk2) {
            temp_a1_3 = temp_a0->unk0;
            if (arg0->unk260 != temp_a1_3) {
                arg0->unk260 = (u8) temp_a1_3;
                temp_t2 = temp_v1->unk1F4C->unk0;
                switch (temp_t2) { // switch 1
                case 1: // switch 1
                default: // switch 1
                    arg0->unk261 = 0U;
                    break;
                case 2: // switch 1
                    arg0->unk261 = 2U;
                    break;
                case 3: // switch 1
                    arg0->unk261 = 3U;
                    break;
                case 4: // switch 1
                    arg0->unk261 = 4U;
                    break;
                case 5: // switch 1
                    arg0->unk261 = 5U;
                    break;
                case 6: // switch 1
                    arg0->unk261 = 6U;
                    break;
                case 7: // switch 1
                    arg0->unk261 = 7U;
                    break;
                case 8: // switch 1
                    arg0->unk261 = 0x14U;
                    break;
                case 9: // switch 1
                    arg0->unk261 = 0x15U;
                    break;
                case 10: // switch 1
                    arg0->unk261 = 0xEU;
                    break;
                case 11: // switch 1
                    arg0->unk261 = 0xFU;
                    break;
                case 12: // switch 1
                    arg0->unk261 = 0x12U;
                    break;
                case 13: // switch 1
                    arg0->unk261 = 0x19U;
                    break;
                case 14: // switch 1
                    arg0->unk261 = 0x1BU;
                    break;
                case 15: // switch 1
                    arg0->unk261 = 0x18U;
                    break;
                case 16: // switch 1
                    arg0->unk261 = 0xAU;
                    break;
                case 17: // switch 1
                    arg0->unk261 = 0xCU;
                    break;
                case 18: // switch 1
                    arg0->unk261 = 0xDU;
                    break;
                case 19: // switch 1
                    arg0->unk261 = 0x1DU;
                    break;
                case 20: // switch 1
                    arg0->unk261 = 0x1FU;
                    break;
                case 21: // switch 1
                    arg0->unk261 = 0x21U;
                    break;
                case 22: // switch 1
                    temp_a0_2 = arg0;
                    arg0 = arg0;
                    Actor_MarkForDeath(temp_a0_2);
                    break;
                case 23: // switch 1
                    arg0->unk261 = 0x23U;
                    break;
                case 24: // switch 1
                    arg0->unk261 = 0x25U;
                    break;
                case 25: // switch 1
                    arg0->unk261 = 0x27U;
                    break;
                case 26: // switch 1
                    arg0->unk261 = 0x29U;
                    break;
                case 27: // switch 1
                    arg0->unk261 = 0x2DU;
                    break;
                case 28: // switch 1
                    arg0->unk261 = 0x2EU;
                    break;
                case 30: // switch 1
                    arg0->unk261 = 0x30U;
                    break;
                case 31: // switch 1
                    arg0->unk261 = 0x32U;
                    break;
                case 32: // switch 1
                    arg0->unk261 = 0x34U;
                    break;
                case 33: // switch 1
                    arg0->unk261 = 0x35U;
                    break;
                case 35: // switch 1
                    arg0->unk261 = 0x37U;
                    break;
                case 36: // switch 1
                    arg0->unk261 = 0x39U;
                    break;
                case 37: // switch 1
                    arg0->unk261 = 0x3AU;
                    break;
                case 38: // switch 1
                    arg0->unk261 = 0x3BU;
                    break;
                case 39: // switch 1
                    arg0->unk261 = 0x3DU;
                    break;
                case 40: // switch 1
                    arg0->unk261 = 0x3EU;
                    break;
                case 41: // switch 1
                    arg0->unk261 = 0x40U;
                    break;
                case 42: // switch 1
                    arg0->unk261 = 0x42U;
                    break;
                case 43: // switch 1
                    arg0->unk261 = 0x44U;
                    break;
                case 44: // switch 1
                    arg0->unk261 = 0x45U;
                    break;
                case 45: // switch 1
                    arg0->unk261 = 0x46U;
                    break;
                case 46: // switch 1
                    arg0->unk261 = 0x43U;
                    break;
                case 47: // switch 1
                    arg0->unk261 = 0x47U;
                    break;
                case 48: // switch 1
                    arg0->unk261 = 0x49U;
                    break;
                case 49: // switch 1
                    arg0->unk261 = 0x4AU;
                    break;
                case 50: // switch 1
                    arg0->unk261 = 0x4BU;
                    break;
                case 51: // switch 1
                    arg0->unk261 = 0x4DU;
                    break;
                case 52: // switch 1
                    arg0->unk261 = 0x4EU;
                    break;
                case 53: // switch 1
                    arg0->unk261 = 0x4FU;
                    break;
                case 54: // switch 1
                    arg0->unk261 = 0x50U;
                    break;
                case 55: // switch 1
                    arg0->unk261 = 0x52U;
                    break;
                case 56: // switch 1
                    arg0->unk261 = 0x53U;
                    break;
                }
                arg0 = arg0;
                func_80AA5580((SkelAnime *) (arg0 + 0x144), (arg0->unk261 * 0x18) + &D_80AA6FB0, 0, arg0);
            }
        }
        sp18 = arg0 + 0x144;
        arg0 = arg0;
        func_800EDF24(arg0, arg1, sp20);
        phi_a0 = sp18;
    } else {
        arg0->unk260 = 0x63U;
        phi_a0 = (SkelAnime *) (arg0 + 0x144);
    }
    arg0 = arg0;
    sp18 = phi_a0;
    temp_a3 = arg0;
    if (func_801378B8(phi_a0, arg0->unk154) != 0) {
        temp_v0_2 = temp_a3->unk261;
        switch (temp_v0_2) { // switch 2
        case 4: // switch 2
        case 5: // switch 2
            temp_t2_2 = temp_v0_2 + 4;
            temp_a3->unk261 = temp_t2_2;
            arg0 = temp_a3;
            func_80AA5580(phi_a0, ((temp_t2_2 & 0xFF) * 0x18) + &D_80AA6FB0, 0, temp_a3);
            arg0->unk15C = 37.0f;
            return;
        case 14: // switch 2
        case 15: // switch 2
        case 20: // switch 2
        case 21: // switch 2
            temp_t7_2 = temp_v0_2 + 2;
            temp_a3->unk261 = temp_t7_2;
            func_80AA5580(phi_a0, ((temp_t7_2 & 0xFF) * 0x18) + &D_80AA6FB0, 0, temp_a3);
            return;
        case 10: // switch 2
        case 18: // switch 2
        case 25: // switch 2
        case 27: // switch 2
        case 29: // switch 2
        case 31: // switch 2
        case 33: // switch 2
        case 35: // switch 2
        case 37: // switch 2
        case 39: // switch 2
        case 43: // switch 2
        case 46: // switch 2
        case 48: // switch 2
        case 50: // switch 2
        case 53: // switch 2
        case 55: // switch 2
        case 59: // switch 2
        case 62: // switch 2
        case 64: // switch 2
        case 66: // switch 2
        case 71: // switch 2
        case 75: // switch 2
        case 80: // switch 2
        case 83: // switch 2
            temp_t0 = temp_v0_2 + 1;
            temp_a3->unk261 = temp_t0;
            func_80AA5580(phi_a0, ((temp_t0 & 0xFF) * 0x18) + &D_80AA6FB0, 0, temp_a3);
            return;
        case 45: // switch 2
            temp_a3->unk261 = 0x13;
            func_80AA5580(phi_a0, ((0x13 & 0xFF) * 0x18) + &D_80AA6FB0, 0, temp_a3);
            return;
        case 70: // switch 2
        case 77: // switch 2
            temp_a3->unk261 = 0;
            func_80AA5580(phi_a0, ((0 & 0xFF) * 0x18) + &D_80AA6FB0, 0, temp_a3);
            // Duplicate return node #71. Try simplifying control flow for better match
            return;
        }
    } else {
    default: // switch 2
    }
}

void func_80AA67F8(DmChar00 *arg0, GlobalContext *arg1) {
    Actor *sp2C;

    sp2C = arg1->actorCtx.actorList[2].first;
    if ((arg1->csCtx.state == 0) && (gSaveContext.sceneSetupIndex == 0) && (arg1->csCtx.unk_12 == 1)) {
        if (arg0->unk261 != 0x2A) {
            arg0->unk261 = 0x2A;
            func_80AA5580(&arg0->unk144, ((0x2AU & 0xFF) * 0x18) + &D_80AA6FB0, 0);
        }
        Math_SmoothStepToF(&arg0->actor.world.pos.x, 0.0f, 0.5f, 0.5f, 0.001f);
        Math_SmoothStepToF(&arg0->actor.world.pos.y, 30.0f, 0.5f, 0.5f, 0.001f);
        Math_SmoothStepToF(&arg0->actor.world.pos.z, -560.0f, 0.5f, 20.0f, 0.001f);
        if (sp2C->world.pos.z < -625.0f) {
            arg0->unk261 = 0x2B;
            func_80AA5580(&arg0->unk144, ((0x2BU & 0xFF) * 0x18) + &D_80AA6FB0, 0);
            arg0->actionFunc = func_80AA695C;
            arg0->unk144.animPlaybackSpeed = 1.5f;
        }
    }
}

void func_80AA695C(DmChar00 *arg0, GlobalContext *arg1) {
    if (arg0->unk261 == 0x2C) {
        Math_SmoothStepToF(&arg0->actor.world.pos.x, 0.0f, 0.5f, 0.5f, 0.001f);
        Math_SmoothStepToF(&arg0->actor.world.pos.y, 30.0f, 0.5f, 0.5f, 0.001f);
        Math_SmoothStepToF(&arg0->actor.world.pos.z, -680.0f, 0.5f, 10.0f, 0.001f);
    }
}

void DmChar00_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmChar00 *this = (DmChar00 *) thisx;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    this->actionFunc(this, globalCtx);
    this->unk262 += 1;
    func_80AA5EBC(this, globalCtx);
    func_80AA62FC(&this->actor, globalCtx);
}

s32 func_80AA6A6C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 sp28;
    Vec3f sp1C;

    if (arg1 == 6) {
        sp28 = ((Math_SinS((s16) (arg5->unk262 << 0xC)) * 0.1f) + 1.0f) * 0.012f * (arg5->unk58 * 124.99999f);
        SysMatrix_MultiplyVector3fByState(&D_80AA7808, &sp1C);
        SysMatrix_InsertTranslation(sp1C.x, sp1C.y, sp1C.z, 0);
        Matrix_Scale(sp28, sp28, sp28, 1);
    }
    return 0;
}

void DmChar00_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmChar00 *this = (DmChar00 *) thisx;
    GraphicsContext *sp58;
    Gfx *sp34;
    Gfx *temp_a3;
    Gfx *temp_t5;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a2;
    s32 temp_a0_2;
    s32 phi_a0;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_a3 = temp_a2->polyOpa.d - 0x20;
    temp_a2->polyOpa.d = temp_a3;
    if ((globalCtx->csCtx.state != 0) || ((globalCtx->sceneNum == 0x1A) && (gSaveContext.sceneSetupIndex == 0) && (globalCtx->roomCtx.currRoom.num == 0) && (globalCtx->csCtx.unk_12 == 1) && (this->actor.params == 0))) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp34 = temp_a3;
        sp58 = temp_a0;
        func_8012C94C(temp_a0);
        temp_a0_2 = (this->unk262 * 0x32) & 0x1FF;
        phi_a0 = temp_a0_2;
        if (temp_a0_2 >= 0x100) {
            phi_a0 = 0x1FF - temp_a0_2;
        }
        temp_v0 = sp58->polyXlu.p;
        sp58->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = (u32) temp_a3;
        temp_v0->words.w0 = 0xDB060020;
        temp_v0_2 = temp_a3 + 8;
        temp_a3->words.w0 = 0xE7000000;
        temp_a3->words.w1 = 0;
        temp_v0_2->words.w0 = 0xFA000001;
        temp_v0_3 = temp_v0_2 + 8;
        temp_v0_2->words.w1 = ((u32) this->unk240 << 0x18) | (((u32) this->unk244 & 0xFF) << 0x10) | (((u32) this->unk248 & 0xFF) << 8) | ((u32) (this->unk24C * 1.0f) & 0xFF);
        temp_v0_3->words.w0 = 0xE200001C;
        temp_v0_3->words.w1 = 0xC184B50;
        temp_v0_4 = temp_v0_3 + 8;
        temp_v0_4->words.w0 = 0xDF000000;
        temp_v0_4->words.w1 = 0;
        temp_v0_5 = sp58->polyXlu.p;
        sp58->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_5->words.w1 = ((s32) this->unk250 << 0x18) | (((s32) this->unk254 & 0xFF) << 0x10) | (((s32) this->unk258 & 0xFF) << 8) | ((s32) ((f32) phi_a0 * 1.0f) & 0xFF);
        temp_v0_6 = sp58->polyXlu.p;
        sp58->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0x40;
        temp_v0_6->words.w0 = 0xE3001803;
        temp_t5 = sp58->polyXlu.p;
        sp58 = sp58;
        sp58->polyXlu.p = SkelAnime_Draw2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, func_80AA6A6C, NULL, &this->actor, temp_t5);
    }
}

