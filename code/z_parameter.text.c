CRASHED

typedef struct GlobalContext {
    /* 0x00000 */ GameState state;
    /* 0x000A4 */ s16 sceneNum;
    /* 0x000A6 */ u8 sceneConfig;
    /* 0x000A7 */ char pad_A7[0x9];                 /* maybe part of sceneConfig[10]? */
    /* 0x000B0 */ void *sceneSegment;
    /* 0x000B4 */ char pad_B4[0x4];
    /* 0x000B8 */ View view;
    /* 0x00220 */ Camera mainCamera;
    /* 0x00398 */ Camera subCameras[3];
    /* 0x00800 */ Camera *cameraPtrs[4];
    /* 0x00810 */ s16 activeCamera;
    /* 0x00812 */ s16 nextCamera;
    /* 0x00814 */ SoundContext soundCtx;
    /* 0x00817 */ char pad_817[0x1];
    /* 0x00818 */ LightContext lightCtx;
    /* 0x00828 */ FrameAdvanceContext frameAdvCtx;
    /* 0x00830 */ CollisionContext colCtx;
    /* 0x01CA0 */ ActorContext actorCtx;
    /* 0x01F24 */ CutsceneContext csCtx;
    /* 0x01F78 */ SoundSource soundSources[16];
    /* 0x02138 */ EffFootmark footprintInfo[100];
    /* 0x046B8 */ SramContext sramCtx;
    /* 0x046E0 */ SkyboxContext skyboxCtx;
    /* 0x04908 */ MessageContext msgCtx;
    /* 0x169E8 */ InterfaceContext interfaceCtx;
    /* 0x16D30 */ PauseContext pauseCtx;
    /* 0x17000 */ GameOverContext gameOverCtx;
    /* 0x17002 */ char pad_17002[0x2];
    /* 0x17004 */ EnvironmentContext envCtx;
    /* 0x17104 */ AnimationContext animationCtx;
    /* 0x17D88 */ ObjectContext objectCtx;
    /* 0x186E0 */ RoomContext roomCtx;
    /* 0x18760 */ DoorContext doorCtx;
    /* 0x18768 */ void (*playerInit)(Player *, GlobalContext *, FlexSkeletonHeader *);
    /* 0x1876C */ void (*playerUpdate)(Player *, GlobalContext *, Input *);
    /* 0x18770 */ void *unk_18770;
    /* 0x18774 */ s32 (*startPlayerFishing)(GlobalContext *);
    /* 0x18778 */ s32 (*grabPlayer)(GlobalContext *, Player *);
    /* 0x1877C */ s32 (*startPlayerCutscene)(GlobalContext *, Player *, s32);
    /* 0x18780 */ void (*func_18780)(Player *, GlobalContext *);
    /* 0x18784 */ s32 (*damagePlayer)(GlobalContext *, s32);
    /* 0x18788 */ void (*talkWithPlayer)(GlobalContext *, Actor *);
    /* 0x1878C */ void (*unk_1878C)(GlobalContext *);
    /* 0x18790 */ void (*unk_18790)(GlobalContext *, s16, Actor *);
    /* 0x18794 */ void *unk_18794;
    /* 0x18798 */ s32 (*setPlayerTalkAnim)(GlobalContext *, void *, s32);
    /* 0x1879C */ s16 unk_1879C[10];
    /* 0x187B0 */ MtxF projectionMatrix;
    /* 0x187F0 */ Vec3f unk_187F0;
    /* 0x187FC */ MtxF mf_187FC;
    /* 0x1883C */ Mtx *unk_1883C;
    /* 0x18840 */ u32 gameplayFrames;
    /* 0x18844 */ u8 unk_18844;
    /* 0x18845 */ u8 unk_18845;
    /* 0x18846 */ s16 numSetupActors;
    /* 0x18848 */ u8 numRooms;
    /* 0x18849 */ char pad_18849[0x3];              /* maybe part of numRooms[4]? */
    /* 0x1884C */ RomFile *roomList;
    /* 0x18850 */ ActorEntry *linkActorEntry;
    /* 0x18854 */ ActorEntry *setupActorList;
    /* 0x18858 */ void *unk_18858;
    /* 0x1885C */ EntranceEntry *setupEntranceList;
    /* 0x18860 */ u16 *setupExitList;
    /* 0x18864 */ Path *setupPathList;
    /* 0x18868 */ void *unk_18868;
    /* 0x1886C */ AnimatedMaterial *sceneMaterialAnims;
    /* 0x18870 */ void *specialEffects;
    /* 0x18874 */ u8 skyboxId;
    /* 0x18875 */ s8 sceneLoadFlag;
    /* 0x18876 */ s16 unk_18876;
    /* 0x18878 */ s16 bgCoverAlpha;
    /* 0x1887A */ u16 nextEntranceIndex;
    /* 0x1887C */ s8 unk_1887C;
    /* 0x1887D */ s8 unk_1887D;
    /* 0x1887E */ s8 unk_1887E;
    /* 0x1887F */ u8 unk_1887F;
    /* 0x18880 */ u8 unk_18880;
    /* 0x18881 */ char pad_18881[0x3];              /* maybe part of unk_18880[4]? */
    /* 0x18884 */ CollisionCheckContext colChkCtx;
    /* 0x18B20 */ u16 envFlags[20];
    /* 0x18B48 */ u8 curSpawn;
    /* 0x18B49 */ u8 unk_18B49;
    /* 0x18B4A */ u8 unk_18B4A;
    /* 0x18B4B */ char pad_18B4B[0x1];
    /* 0x18B4C */ PreRender pauseBgPreRender;
    /* 0x18B9C */ char pad_18B9C[0x2B8];            /* maybe part of pauseBgPreRender[9]? */
    /* 0x18E54 */ SceneTableEntry *loadedScene;
    /* 0x18E58 */ char pad_18E58[0x4];
    /* 0x18E5C */ s32 unk_18E5C;                    /* inferred */
    /* 0x18E60 */ char pad_18E60[0x3F8];            /* maybe part of unk_18E5C[255]? */
} GlobalContext;                                    /* size = 0x19258 */

typedef struct {
    /* 0x00000 */ View view;
    /* 0x00168 */ Font font;
    /* 0x11EF4 */ char pad_11EF4[0x10];
    /* 0x11F04 */ u16 unk11F04;
    /* 0x11F06 */ char pad_11F06[0x4];              /* maybe part of unk11F04[3]? */
    /* 0x11F0A */ u8 unk11F0A;
    /* 0x11F0B */ char pad_11F0B[0x5];              /* maybe part of unk11F0A[6]? */
    /* 0x11F10 */ s32 unk11F10;
    /* 0x11F14 */ char pad_11F14[0xE];              /* maybe part of unk11F10[4]? */
    /* 0x11F22 */ u8 unk11F22;
    /* 0x11F23 */ char pad_11F23[0xFD];             /* maybe part of unk11F22[254]? */
    /* 0x12020 */ u8 unk12020;
    /* 0x12021 */ u8 choiceIndex;
    /* 0x12022 */ char pad_12022[0x1];
    /* 0x12023 */ s8 unk12023;
    /* 0x12024 */ char pad_12024[0x6];              /* maybe part of unk12023[7]? */
    /* 0x1202A */ u16 unk1202A;
    /* 0x1202C */ u16 unk_1202C;                    /* inferred */
    /* 0x1202E */ u16 unk1202E;
    /* 0x12030 */ char pad_12030[0x14];             /* maybe part of unk1202E[11]? */
    /* 0x12044 */ s16 unk12044;
    /* 0x12046 */ char pad_12046[0x24];             /* maybe part of unk12044[19]? */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ char pad_12070[0x8];              /* maybe part of unk1206C[3]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad_12080[0x31];             /* maybe part of bankRupees[13]? */
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad_120B2[0x2E];             /* maybe part of unk120B1[47]? */
} MessageContext;                                   /* size = 0x120E0 */

struct _mips2c_stack_Interface_ChangeAlpha {};      /* size 0x0 */

struct _mips2c_stack_Parameter_AddMagic {};         /* size 0x0 */

struct _mips2c_stack_func_8010CB80 {};              /* size 0x0 */

struct _mips2c_stack_func_8010CD98 {};              /* size 0x0 */

struct _mips2c_stack_func_8010CFBC {};              /* size 0x0 */

struct _mips2c_stack_func_8010D2D4 {};              /* size 0x0 */

struct _mips2c_stack_func_8010D480 {
    /* 0x00 */ void *sp0;                           /* inferred */
    /* 0x04 */ void *sp4;                           /* inferred */
    /* 0x08 */ char pad_8[0x30];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8010D7D0 {};              /* size 0x0 */

struct _mips2c_stack_func_8010D9F4 {};              /* size 0x0 */

struct _mips2c_stack_func_8010DC58 {};              /* size 0x0 */

struct _mips2c_stack_func_8010DE38 {};              /* size 0x0 */

struct _mips2c_stack_func_8010E028 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8010E968 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8010E9F0 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ char pad_8[0x8];
};                                                  /* size = 0x10 */

struct _mips2c_stack_func_8010EA9C {
    /* 0x0 */ s32 sp0;                              /* inferred */
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_8010EB50 {};              /* size 0x0 */

struct _mips2c_stack_func_8010EBA0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8010EC54 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s16 sp1C;                            /* inferred */
    /* 0x1E */ s16 sp1E;                            /* inferred */
    /* 0x20 */ s16 sp20;                            /* inferred */
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];                    /* maybe part of sp22[3]? */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8010EE74 {
    /* 0x00 */ char pad_0[0x1A];
    /* 0x1A */ s16 sp1A;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8010EF9C {};              /* size 0x0 */

struct _mips2c_stack_func_8010F0D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8010F1A8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x2];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80110038 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SaveContext *sp1C;                   /* inferred */
    /* 0x20 */ char pad_20[0x8];                    /* maybe part of sp1C[3]? */
    /* 0x28 */ InterfaceContext *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0x44];                   /* maybe part of sp28[18]? */
    /* 0x70 */ s16 sp70;                            /* inferred */
    /* 0x72 */ s16 sp72;                            /* inferred */
    /* 0x74 */ SaveContext *sp74;                   /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80111CB4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0xC];                    /* maybe part of sp18[4]? */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_801129E4 {};              /* size 0x0 */

struct _mips2c_stack_func_80112AF4 {};              /* size 0x0 */

struct _mips2c_stack_func_80112AFC {};              /* size 0x0 */

struct _mips2c_stack_func_80112B40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80112BE4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80112C0C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80114978 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801149A0 {};              /* size 0x0 */

struct _mips2c_stack_func_80114A9C {};              /* size 0x0 */

struct _mips2c_stack_func_80114B84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80114CA0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80114E90 {};              /* size 0x0 */

struct _mips2c_stack_func_80114F2C {};              /* size 0x0 */

struct _mips2c_stack_func_80114FD0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80115130 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0xA];                    /* maybe part of sp18[3]? */
    /* 0x26 */ u8 sp26;                             /* inferred */
    /* 0x27 */ char pad_27[0x1];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801152B8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_801153C8 {};              /* size 0x0 */

struct _mips2c_stack_func_80115428 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ OSMesgQueue *sp34;                   /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8011552C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ InterfaceContext *sp1C;              /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801155B4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ OSMesgQueue *sp2C;                   /* inferred */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ char pad_34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80115764 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80115844 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ OSMesgQueue *sp2C;                   /* inferred */
    /* 0x30 */ InterfaceContext *sp30;              /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80115908 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801159EC {};              /* size 0x0 */

struct _mips2c_stack_func_801159c0 {};              /* size 0x0 */

struct _mips2c_stack_func_80115A14 {};              /* size 0x0 */

struct _mips2c_stack_func_80115D5C {};              /* size 0x0 */

struct _mips2c_stack_func_80115DB4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80116088 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80116114 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ char pad_C[0x28];                    /* maybe part of sp8[11]? */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ char pad_36[0x2];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80116348 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80116918 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ char pad_50[0x8C];                   /* maybe part of sp4C[36]? */
    /* 0xDC */ GraphicsContext *spDC;               /* inferred */
    /* 0xE0 */ char pad_E0[0x2];
    /* 0xE2 */ s16 spE2;                            /* inferred */
    /* 0xE4 */ char pad_E4[0x4];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80116FD8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_801170B8 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80117100 {
    /* 0x000 */ char pad_0[0x4C];
    /* 0x04C */ void *sp4C;                         /* inferred */
    /* 0x050 */ char pad_50[0xA6];                  /* maybe part of sp4C[42]? */
    /* 0x0F6 */ s16 spF6;                           /* inferred */
    /* 0x0F8 */ char pad_F8[0x8];                   /* maybe part of spF6[5]? */
    /* 0x100 */ void *sp100;                        /* inferred */
    /* 0x104 */ char pad_104[0x4];
};                                                  /* size = 0x108 */

struct _mips2c_stack_func_80117A20 {};              /* size 0x0 */

struct _mips2c_stack_func_80117BD0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x1C];                   /* maybe part of sp30[8]? */
    /* 0x50 */ GraphicsContext *sp50;               /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80118084 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x98];                   /* maybe part of sp18[39]? */
    /* 0xB4 */ GraphicsContext *spB4;               /* inferred */
    /* 0xB8 */ void *spB8;                          /* inferred */
    /* 0xBC */ char pad_BC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80118890 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ GraphicsContext **sp1C;              /* inferred */
    /* 0x20 */ char pad_20[0x40];                   /* maybe part of sp1C[17]? */
    /* 0x60 */ GraphicsContext *sp60;               /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80118BA4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x30];                   /* maybe part of sp34[13]? */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ char pad_6C[0x16];                   /* maybe part of sp68[6]? */
    /* 0x82 */ s16 sp82;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80119030 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x68];                   /* maybe part of sp1C[27]? */
    /* 0x88 */ GraphicsContext *sp88;               /* inferred */
    /* 0x8C */ char pad_8C[0xC];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80119610 {
    /* 0x000 */ char pad_0[0x5C];
    /* 0x05C */ s32 sp5C;                           /* inferred */
    /* 0x060 */ s32 sp60;                           /* inferred */
    /* 0x064 */ RSPMatrix *sp64;                    /* inferred */
    /* 0x068 */ s32 *sp68;                          /* inferred */
    /* 0x06C */ u32 sp6C;                           /* inferred */
    /* 0x070 */ InterfaceContext *sp70;             /* inferred */
    /* 0x074 */ char pad_74[0x4C];                  /* maybe part of sp70[20]? */
    /* 0x0C0 */ Gfx *spC0;                          /* inferred */
    /* 0x0C4 */ char pad_C4[0x1C];                  /* maybe part of spC0[8]? */
    /* 0x0E0 */ Gfx *spE0;                          /* inferred */
    /* 0x0E4 */ char pad_E4[0xC];                   /* maybe part of spE0[4]? */
    /* 0x0F0 */ Gfx *spF0;                          /* inferred */
    /* 0x0F4 */ char pad_F4[0x10];                  /* maybe part of spF0[5]? */
    /* 0x104 */ Gfx *sp104;                         /* inferred */
    /* 0x108 */ char pad_108[0x38];                 /* maybe part of sp104[15]? */
    /* 0x140 */ Gfx *sp140;                         /* inferred */
    /* 0x144 */ char pad_144[0x68];                 /* maybe part of sp140[27]? */
    /* 0x1AC */ s16 sp1AC;                          /* inferred */
    /* 0x1AE */ s16 sp1AE;                          /* inferred */
    /* 0x1B0 */ s16 sp1B0;                          /* inferred */
    /* 0x1B2 */ s16 sp1B2;                          /* inferred */
    /* 0x1B4 */ s16 sp1B4;                          /* inferred */
    /* 0x1B6 */ s16 sp1B6;                          /* inferred */
    /* 0x1B8 */ s16 sp1B8;                          /* inferred */
    /* 0x1BA */ s16 sp1BA;                          /* inferred */
    /* 0x1BC */ char pad_1BC[0xA];                  /* maybe part of sp1BA[6]? */
    /* 0x1C6 */ s16 sp1C6;                          /* inferred */
    /* 0x1C8 */ char pad_1C8[0x4];                  /* maybe part of sp1C6[3]? */
    /* 0x1CC */ f32 sp1CC;                          /* inferred */
    /* 0x1D0 */ f32 sp1D0;                          /* inferred */
    /* 0x1D4 */ char pad_1D4[0x4];
    /* 0x1D8 */ f32 sp1D8;                          /* inferred */
    /* 0x1DC */ char pad_1DC[0xA];                  /* maybe part of sp1D8[3]? */
    /* 0x1E6 */ s16 sp1E6;                          /* inferred */
    /* 0x1E8 */ char pad_1E8[0x8];
};                                                  /* size = 0x1F0 */

struct _mips2c_stack_func_8011B4E0 {};              /* size 0x0 */

struct _mips2c_stack_func_8011B5C0 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ char pad_8[0x28];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8011B9E0 {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8011BF70 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8011C4C4 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_8011C808 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8011C898 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8011CA64 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ u32 sp38;                            /* inferred */
    /* 0x3C */ u32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x10];                   /* maybe part of sp3C[5]? */
    /* 0x50 */ void *sp50;                          /* inferred */
    /* 0x54 */ char pad_54[0xC];                    /* maybe part of sp50[4]? */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ u32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ u32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];                    /* maybe part of sp6C[3]? */
    /* 0x78 */ u32 sp78;                            /* inferred */
    /* 0x7C */ u32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x46];                   /* maybe part of sp7C[18]? */
    /* 0xC6 */ s16 spC6;                            /* inferred */
    /* 0xC8 */ s32 spC8;                            /* inferred */
    /* 0xCC */ u32 spCC;                            /* inferred */
    /* 0xD0 */ u32 spD0;                            /* inferred */
    /* 0xD4 */ u32 spD4;                            /* inferred */
    /* 0xD8 */ char pad_D8[0x10];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_8011E3B4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ u32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ u32 sp44;                            /* inferred */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ u32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x30];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_8011E730 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ GraphicsContext *sp34;               /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8011F0E0 {
    /* 0x000 */ char pad_0[0x4C];
    /* 0x04C */ u32 sp4C;                           /* inferred */
    /* 0x050 */ void *sp50;                         /* inferred */
    /* 0x054 */ char pad_54[0x118];                 /* maybe part of sp50[71]? */
    /* 0x16C */ Gfx *sp16C;                         /* inferred */
    /* 0x170 */ char pad_170[0x118];                /* maybe part of sp16C[71]? */
    /* 0x288 */ Gfx *sp288;                         /* inferred */
    /* 0x28C */ char pad_28C[0x2C];                 /* maybe part of sp288[12]? */
    /* 0x2B8 */ s16 sp2B8;                          /* inferred */
    /* 0x2BA */ s16 sp2BA;                          /* inferred */
    /* 0x2BC */ s16 sp2BC;                          /* inferred */
    /* 0x2BE */ s16 sp2BE;                          /* inferred */
    /* 0x2C0 */ f32 sp2C0;                          /* inferred */
    /* 0x2C4 */ char pad_2C4[0x4];
    /* 0x2C8 */ s16 sp2C8;                          /* inferred */
    /* 0x2CA */ s16 sp2CA;                          /* inferred */
    /* 0x2CC */ s16 sp2CC;                          /* inferred */
    /* 0x2CE */ s16 sp2CE;                          /* inferred */
    /* 0x2D0 */ Gfx *sp2D0;                         /* inferred */
    /* 0x2D4 */ void *sp2D4;                        /* inferred */
    /* 0x2D8 */ char pad_2D8[0x8];
};                                                  /* size = 0x2E0 */

struct _mips2c_stack_func_80120F90 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ OSMesgQueue *sp30;                   /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80121064 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_801210E0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ InterfaceContext *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0xC];                    /* maybe part of sp20[4]? */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80121F94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80121FC4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ TwoHeadArena *sp18;                  /* inferred */
    /* 0x1C */ u32 sp1C;                            /* inferred */
    /* 0x20 */ u8 *sp20;                            /* inferred */
    /* 0x24 */ InterfaceContext *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x18];
};                                                  /* size = 0x40 */

s32 func_800FE4A8();                                /* extern */
? func_8010A410();                                  /* extern */
? func_8010A430(GlobalContext *);                   /* extern */
? func_8010A54C(GraphicsContext **);                /* extern */
? func_8010A580(GlobalContext *);                   /* extern */
s32 func_801234D4(GlobalContext *);                 /* extern */
s32 func_801242DC(GlobalContext *, SaveContext *, u8, s16); /* extern */
? func_801663C4(s32, u64 *, ?, SaveContext *);      /* extern */
? func_80166644(u64 *, s32, ?, SaveContext *);      /* extern */
? func_80174F7C(void (*)(s32), ?);                  /* extern */
? func_80174F9C(void (*)(s32), ?);                  /* extern */
? func_80178E3C(u8 *, s32, void *, ?);              /* extern */
u32 func_80182CBC();                                /* extern */
u32 func_80182CCC();                                /* extern */
s32 func_801A5100(s32, SaveContext *);              /* extern */
void Parameter_AddMagic(s32 arg0, s16 arg1);        /* static */
void *func_8010CB80(void *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9); /* static */
Gfx *func_8010CD98(Gfx *arg0, u8 *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9); /* static */
Gfx *func_8010CFBC(Gfx *arg0, ? *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9, s16 argA, s16 argB, s16 argC, s16 argD); /* static */
Gfx *func_8010D2D4(Gfx *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, u16 arg5, u16 arg6, s16 arg7, s16 arg8, s16 arg9, s16 argA); /* static */
Gfx *func_8010D480(Gfx *arg0, ? *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9, s16 argA, s16 argB, s16 argC, s16 argD, s32 argE, s32 argF); /* static */
Gfx *func_8010D7D0(Gfx *arg0, void *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9); /* static */
Gfx *func_8010D9F4(Gfx *arg0, ? *arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s32 arg9, s32 argA, s32 argB, u16 argC, u16 argD); /* static */
Gfx *func_8010DC58(Gfx *arg0, ? *arg1, s16 arg2, s16 arg3, u16 arg4); /* static */
Gfx *func_8010DE38(Gfx *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, u16 arg5); /* static */
void func_8010E028(GraphicsContext **arg0, Gfx *, GraphicsContext **); /* static */
void func_8010E968(s32 arg0);                       /* static */
void func_8010EA9C(s16 arg0, s16 arg1);             /* static */
void func_8010EB50(s32 arg0);                       /* static */
void func_8010EBA0(s16 arg0, s16 arg1, void *, u8); /* static */
s32 func_8010EC54(s16 arg0);                        /* static */
void func_8010EE74(GlobalContext *arg0, s32 arg1);  /* static */
void func_8010EF9C(s16 arg0, s16 arg1, s16);        /* static */
void func_8010F0D4(s16 arg0, s16 arg1, s16 arg2);   /* static */
void func_8010F1A8(GlobalContext *arg0, s16 arg1);  /* static */
void func_80110038(GlobalContext *arg0, SaveContext *); /* static */
void func_80111CB4(GlobalContext *arg0, s32, SaveContext *); /* static */
void func_801129E4(void *arg0);                     /* static */
void func_80112AF4();                               /* static */
void func_80112BE4(GlobalContext *arg0, s32 arg1);  /* static */
void func_80112C0C(GlobalContext *arg0, s32 arg1);  /* static */
s32 func_801143CC(s32);                             /* static */
void func_801149A0(s16 arg0, s16 arg1);             /* static */
void func_80114A9C(s16 arg0);                       /* static */
? func_80114B84(GlobalContext *arg0, s32 arg1, u8 arg2); /* static */
void func_80114CA0(GlobalContext *arg0);            /* static */
void func_80114FD0(GlobalContext *arg0, u8 arg1, u8 arg2); /* static */
? func_80115130(GlobalContext *arg0);               /* static */
void func_801152B8(GlobalContext *arg0, s16 arg1, s16 arg2); /* static */
void func_801153C8(void *arg0, s32 arg1);           /* static */
void func_80115428(InterfaceContext *arg0, u16 arg1, s16 arg2, GlobalContext *); /* static */
void func_801155B4(void *arg0, s16 arg1);           /* static */
void func_80115764(void *arg0, s32 arg1);           /* static */
void func_80115D5C(s32 arg0);                       /* static */
? func_80115DB4(void *arg0, s16 arg1, s16 arg2);    /* static */
void func_80116088();                               /* static */
void func_80116114(SaveContext *, GlobalContext *); /* static */
void func_80116348(GlobalContext *arg0, GameInfo **); /* static */
void func_80116918(GraphicsContext **arg0, Gfx *);  /* static */
void func_80116FD8(GraphicsContext **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4); /* static */
void func_801170B8(View *arg0, GraphicsContext **, GraphicsContext *); /* static */
void func_80117100(GraphicsContext **arg0);         /* static */
void func_80117A20(GraphicsContext **arg0, s32 arg1, s16 arg2, GraphicsContext *); /* static */
void func_80117BD0(GraphicsContext **arg0, s16 arg1, s16 arg2, GraphicsContext *); /* static */
void func_80118084(GraphicsContext **arg0);         /* static */
void func_80118890(GraphicsContext **arg0);         /* static */
void func_80118BA4(GraphicsContext **arg0);         /* static */
void func_80119030(GraphicsContext **arg0);         /* static */
void func_80119610(GlobalContext *arg0);            /* static */
void func_8011B5C0(GlobalContext *arg0);            /* static */
void func_8011B9E0(GlobalContext *arg0);            /* static */
void func_8011BF70(GlobalContext *arg0);            /* static */
void func_8011C4C4(GraphicsContext **arg0);         /* static */
void func_8011C898(u32 arg0, u32 arg1, ? *arg2);    /* static */
void func_8011CA64(GlobalContext *arg0);            /* static */
void func_8011E3B4(GlobalContext *arg0, GameInfo **); /* static */
void func_8011E730(GraphicsContext **arg0);         /* static */
void func_8011F0E0(GraphicsContext **arg0);         /* static */
void func_80120F90(GlobalContext *arg0, s32 arg1, GlobalContext *); /* static */
void func_80121064(GlobalContext *arg0, GameInfo **); /* static */
void func_801210E0(GlobalContext *arg0);            /* static */
void func_80121F94();                               /* static */
extern ? D_02000A00;
extern ? D_02000BE0;
extern u8 D_02000D60;
extern u8 D_02000E60;
extern ? D_02000F60;
extern u8 D_02002360;
extern ? D_02002DE0;
extern ? D_020031E0;
extern ? D_020038A0;
extern ? D_02003FA0;
extern ? D_020042A0;
extern ? D_020043A0;
extern ? D_02004420;
extern ? D_020044A0;
extern ? D_02004AA0;
extern ? D_02004DA0;
extern ? D_02004E20;
extern ? D_02004FA0;
extern u8 D_02004FE0;
extern ? D_020054E0;
extern ? D_02005720;
extern ? D_02005960;
extern ? D_02005F60;
extern ? D_020063C0;
extern ? D_02006B20;
extern ? D_08095AC0;
extern ? D_0E0002E0;
static ? D_801ABAB0;                                /* unable to generate initializer */
static u8 D_801BF6C0[222] = {
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    2,
    0,
    0,
    0,
    3,
    0,
    0,
    0,
    4,
    0,
    0,
    0,
    5,
    0,
    0,
    0,
    6,
    0,
    0,
    0,
    7,
    0,
    0,
    0,
    8,
    0,
    0,
    0,
    9,
    0,
    0,
    0,
    0xA,
    0x10,
    0x30,
    0xC1,
    0xB,
    0,
    0x3F,
    0,
    0xC,
    0,
    0,
    0,
    0xD,
    0x10,
    0x30,
    0xC1,
    0xE,
    0,
    0,
    0,
    0xF,
    0,
    0,
    0,
    0x10,
    0,
    0x33,
    0,
    0x11,
    0x10,
    0x30,
    0xC1,
    0x12,
    0x10,
    0x30,
    0xC1,
    0x13,
    0,
    0,
    0,
    0x14,
    0,
    0,
    0,
    0x15,
    0x10,
    0x30,
    0xC1,
    0x16,
    0,
    0,
    0,
    0x17,
    0x10,
    0x30,
    0xC1,
    0x18,
    0,
    0,
    0,
    0x19,
    0,
    0x3F,
    0xF0,
    0x1A,
    0,
    0,
    0,
    0x1B,
    0,
    0,
    0,
    0x1C,
    0,
    0,
    0,
    0x1D,
    0,
    0,
    0,
    0x1E,
    0x10,
    0x30,
    1,
    0x1F,
    0,
    0,
    0,
    0x20,
    0x10,
    0x30,
    0xC1,
    0x21,
    0,
    0,
    0,
    0x22,
    0,
    0,
    0,
    0x23,
    0,
    0,
    0,
    0x24,
    0x10,
    0x30,
    0xC1,
    0x25,
    0,
    0,
    0,
    0x26,
    0,
    0,
    0,
    0x27,
    0,
    0x30,
    0,
    0x28,
    0,
    0x30,
    0,
    0x29,
    0,
    3,
    0xC0,
    0x2A,
    0,
    0x3F,
    0,
    0x2B,
    0,
    0,
    0,
    0x2C,
    0,
    0x30,
    0xC0,
    0x2D,
    0,
    0,
    0,
    0x2E,
    0,
    0x30,
    0xC1,
    0x2F,
    0,
    0x30,
    0xC1,
    0x30,
    0,
    0x30,
    0,
    0x31,
    0,
    0,
    0,
    0x32,
    0,
    0,
    0,
    0x33,
    0,
    0,
    0xC0,
    0x34,
    0,
    0x30,
    0xC1,
    0x35,
    0,
    0,
    0,
    0x36,
    0,
    0,
    0,
    0x37,
    0,
};
static s16 D_801BF884 = 0;
static s16 D_801BF888 = 0;
static s16 D_801BF88C = 0;
static ? D_801BF890;                                /* unable to generate initializer */
static u16 D_801BF898 = 0;
static u16 D_801BF89C = 0;
static s16 D_801BF8A0 = 0xFF;
static s16 D_801BF8A4 = 0xFF;
static s16 D_801BF8A8 = 0xFF;
static s16 D_801BF8AC = 2;
static s16 D_801BF8B0[22] = {1, 0, 8, 8, 9, 9, 6, 6, 6, 6, 1, 1, 1, 7, 7, 7, 7, 8, 8, 9, 9, 0};
static s16 D_801BF8DC = 0;
static s16 D_801BF8E0 = 0;
static s16 D_801BF8E4 = 0;
static ? D_801BF8E8;                                /* unable to generate initializer */
static s32 D_801BF8F0 = 0;
static ? D_801BF8F8;                                /* unable to generate initializer */
static ? D_801BF8FC;                                /* unable to generate initializer */
static ? D_801BF930;                                /* unable to generate initializer */
static ? D_801BF934;                                /* unable to generate initializer */
static u8 D_801BF968 = 0;
static u8 D_801BF96C = 0;
static s16 D_801BF970 = 0x63;
static s16 D_801BF974 = 0;
static s16 D_801BF978 = 0xA;
static s16 D_801BF97C = 0xFF;
static f32 D_801BF980 = 1.0f;
static ? D_801BF988;                                /* unable to generate initializer */
static s16 D_801BF9B0 = 0;
static ? D_801BF9B4;                                /* unable to generate initializer */
static ? D_801BF9BC;                                /* unable to generate initializer */
static ? D_801BF9C4;                                /* unable to generate initializer */
static ? D_801BF9C8;                                /* unable to generate initializer */
static ? D_801BF9CC;                                /* unable to generate initializer */
static s16 D_801BF9D4 = 0xA7;
static s16 D_801BF9D6 = 0xE3;
static s16 D_801BF9D8 = 0xF9;
static s16 D_801BF9DA = 0x10F;
static s16 D_801BF9DC = 0x11;
static s16 D_801BF9DE = 0x12;
static s16 D_801BF9E0 = 0x22;
static s16 D_801BF9E2 = 0x12;
static s16 D_801BF9E4 = 0x23F;
static s16 D_801BF9E6 = 0x26C;
static s16 D_801BF9E8 = 0x26C;
static s16 D_801BF9EA = 0x26C;
static s16 D_801BF9EC = 0;
static s16 D_801BF9F0 = 0;
static s16 D_801BF9F4 = 0;
static s16 D_801BF9F8 = 0;
static s16 D_801BF9FC = 0xF;
static s16 D_801BFA00 = 0;
static ? D_801BFA04;                                /* unable to generate initializer */
static ? D_801BFA1C;                                /* unable to generate initializer */
static ? D_801BFA34;                                /* unable to generate initializer */
static ? D_801BFA4C;                                /* unable to generate initializer */
static ? D_801BFA64;                                /* unable to generate initializer */
static ? D_801BFA74;                                /* unable to generate initializer */
static s32 D_801BFA84[11] = {
    0,
    0x5000A,
    0x14001E,
    0xA001E,
    0x280032,
    0x14000A,
    0x10005,
    0x10005,
    0xA0014,
    0x320064,
    0xC80000,
};
static ? D_801BFAB0;                                /* unable to generate initializer */
static ? D_801BFAB8;                                /* unable to generate initializer */
static ? D_801BFAC4;                                /* unable to generate initializer */
static ? D_801BFACC;                                /* unable to generate initializer */
static ? D_801BFAD4;                                /* unable to generate initializer */
static s16 D_801BFAF4 = 0x1D;
static s16 D_801BFAF6 = 0x1B;
static s16 D_801BFAF8 = 0x1B;
static s16 D_801BFAFA = 0x1B;
static ? D_801BFAFC;                                /* unable to generate initializer */
static ? D_801BFB04;                                /* unable to generate initializer */
static ? D_801BFB0C;                                /* unable to generate initializer */
static ? D_801BFB14;                                /* unable to generate initializer */
static ? D_801BFB1C;                                /* unable to generate initializer */
static ? D_801BFB24;                                /* unable to generate initializer */
static s16 D_801BFB2C = 0xFF;
static s16 D_801BFB30 = 0;
static s16 D_801BFB34 = 0;
static ? D_801BFB38;                                /* unable to generate initializer */
static ? D_801BFB6C;                                /* unable to generate initializer */
static s16 D_801BFBCC = 0;
static s16 D_801BFBD0 = 0x9B;
static s16 D_801BFBD4 = 0xFF;
static s16 D_801BFBD8 = 0;
static s16 D_801BFBDC = 0;
static s16 D_801BFBE0 = 0;
static s16 D_801BFBE4 = 0xF;
static s16 D_801BFBE8 = 0;
static ? D_801BFBEC;                                /* unable to generate initializer */
static ? D_801BFBF0;                                /* unable to generate initializer */
static ? D_801BFBF4;                                /* unable to generate initializer */
static ? D_801BFBF8;                                /* unable to generate initializer */
static ? D_801BFBFC;                                /* unable to generate initializer */
static ? D_801BFC00;                                /* unable to generate initializer */
static ? D_801BFC04;                                /* unable to generate initializer */
static ? D_801BFC08;                                /* unable to generate initializer */
static ? D_801BFC0C;                                /* unable to generate initializer */
static ? D_801BFC10;                                /* unable to generate initializer */
static ? D_801BFC14;                                /* unable to generate initializer */
static ? D_801BFC40;                                /* unable to generate initializer */
static ? D_801BFC50;                                /* unable to generate initializer */
static ? D_801BFC60;                                /* unable to generate initializer */
static ? D_801BFC62;                                /* unable to generate initializer */
static ? D_801BFC64;                                /* unable to generate initializer */
static ? D_801BFC6C;                                /* unable to generate initializer */
static ? D_801BFC7C;                                /* unable to generate initializer */
static ? D_801BFC8C;                                /* unable to generate initializer */
static ? D_801BFC98;                                /* unable to generate initializer */
static ? D_801BFCA8;                                /* unable to generate initializer */
static ? D_801BFCB8;                                /* unable to generate initializer */
static ? D_801BFCC4;                                /* unable to generate initializer */
static s16 D_801BFCE4 = 0;
static ? D_801BFCE8;                                /* unable to generate initializer */
static s16 D_801BFCEC = 0;
static ? D_801BFCEE;                                /* unable to generate initializer */
static s16 D_801BFCF0 = 0;
static s16 D_801BFCF2 = 0;
static s16 D_801BFCF8 = 0x63;
static ? D_801BFCFC;                                /* unable to generate initializer */
static ? D_801BFD0C;                                /* unable to generate initializer */
static ? D_801BFD1C;                                /* unable to generate initializer */
static ? D_801BFD24;                                /* unable to generate initializer */
static ? D_801BFD2C;                                /* unable to generate initializer */
static ? D_801BFD40;                                /* unable to generate initializer */
static ? D_801BFD54;                                /* unable to generate initializer */
static ? D_801BFD64;                                /* unable to generate initializer */
static ? D_801BFD6C;                                /* unable to generate initializer */
static ? D_801BFD84;                                /* unable to generate initializer */
static ? D_801BFD8C;                                /* unable to generate initializer */
static u8 D_801BFD94 = 0;
static s16 D_801BFD98 = 0;
static Input D_801F5850[4];
static s32 D_801FBB90;
static ? D_801E3BB0;                                /* unable to generate initializer; const */
u32 D_801C2410[144] = {
    0,
    0,
    0,
    0,
    0x101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0,
    0,
    0,
    0x10000,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x100,
    0,
    0,
    0x101,
    0x1000000,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x1000000,
    0,
    0,
    0x10100,
    0x101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010000,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x100,
    0,
    1,
    1,
    0x1000000,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x1010101,
    0x1010101,
    0x1010101,
    0x10101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1010101,
    0x1000000,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};
RSPMatrix D_801D1DE0 = {
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};
s32 D_801DB4A4 = 0;
u32 gBitFlags[32] = {
    1,
    2,
    4,
    8,
    0x10,
    0x20,
    0x40,
    0x80,
    0x100,
    0x200,
    0x400,
    0x800,
    0x1000,
    0x2000,
    0x4000,
    0x8000,
    0x10000,
    0x20000,
    0x40000,
    0x80000,
    0x100000,
    0x200000,
    0x400000,
    0x800000,
    0x1000000,
    0x2000000,
    0x4000000,
    0x8000000,
    0x10000000,
    0x20000000,
    0x40000000,
    0x80000000,
};
u16 gEquipMasks[4] = {0xF, 0xF0, 0xF00, 0xF000};
u8 gEquipShifts[4] = {0, 4, 8, 0xC};
GameInfo *gGameInfo;
void *gItemIcons[131] = {
    (void *)0x8000000,
    (void *)0x8001000,
    (void *)0x8002000,
    (void *)0x8003000,
    (void *)0x8004000,
    (void *)0x8005000,
    (void *)0x8006000,
    (void *)0x8007000,
    (void *)0x8008000,
    (void *)0x8009000,
    (void *)0x800A000,
    (void *)0x800B000,
    (void *)0x800C000,
    (void *)0x800D000,
    (void *)0x800E000,
    (void *)0x800F000,
    (void *)0x8010000,
    (void *)0x8011000,
    (void *)0x8012000,
    (void *)0x8013000,
    (void *)0x8014000,
    (void *)0x8015000,
    (void *)0x8016000,
    (void *)0x8017000,
    (void *)0x8018000,
    (void *)0x8019000,
    (void *)0x801A000,
    (void *)0x801B000,
    (void *)0x801C000,
    (void *)0x801D000,
    (void *)0x801E000,
    (void *)0x801F000,
    (void *)0x8020000,
    (void *)0x8021000,
    (void *)0x8022000,
    (void *)0x8023000,
    (void *)0x8024000,
    (void *)0x8025000,
    (void *)0x8026000,
    (void *)0x8027000,
    (void *)0x8028000,
    (void *)0x8029000,
    (void *)0x802A000,
    (void *)0x802B000,
    (void *)0x802C000,
    (void *)0x802D000,
    (void *)0x802E000,
    (void *)0x802F000,
    (void *)0x8030000,
    (void *)0x8031000,
    (void *)0x8032000,
    (void *)0x8033000,
    (void *)0x8034000,
    (void *)0x8035000,
    (void *)0x8036000,
    (void *)0x8037000,
    (void *)0x8038000,
    (void *)0x8039000,
    (void *)0x803A000,
    (void *)0x803B000,
    (void *)0x803C000,
    (void *)0x803D000,
    (void *)0x803E000,
    (void *)0x803F000,
    (void *)0x8040000,
    (void *)0x8041000,
    (void *)0x8042000,
    (void *)0x8043000,
    (void *)0x8044000,
    (void *)0x8045000,
    (void *)0x8046000,
    (void *)0x8047000,
    (void *)0x8048000,
    (void *)0x8049000,
    (void *)0x804A000,
    (void *)0x804B000,
    (void *)0x804C000,
    (void *)0x804D000,
    (void *)0x804E000,
    (void *)0x804F000,
    (void *)0x8050000,
    (void *)0x8051000,
    (void *)0x8052000,
    (void *)0x8053000,
    (void *)0x8054000,
    (void *)0x8055000,
    (void *)0x8056000,
    (void *)0x8057000,
    (void *)0x8058000,
    (void *)0x8059000,
    (void *)0x805A000,
    (void *)0x805B000,
    (void *)0x805C000,
    (void *)0x805D000,
    (void *)0x805E000,
    (void *)0x805F000,
    (void *)0x8060000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8061000,
    (void *)0x9000000,
    (void *)0x9000900,
    (void *)0x9001200,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x8062000,
    (void *)0x9003600,
    (void *)0x9004800,
    (void *)0x9003F00,
    (void *)0x9005100,
    (void *)0x9005A00,
    (void *)0x9006300,
    (void *)0x9006C00,
    (void *)0x8062180,
    (void *)0x8062A80,
    (void *)0x8063380,
    (void *)0x20028A0,
    (void *)0x20025A0,
    (void *)0x20027A0,
    (void *)0x20026A0,
    (void *)0x20024A0,
};
u8 gItemSlots[80] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    0xA,
    0xB,
    0xC,
    0xD,
    0xE,
    0xF,
    0x10,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    5,
    5,
    5,
    5,
    5,
    0xB,
    0xB,
    0x11,
    0x11,
    0x11,
    0x1D,
    0x23,
    0x29,
    0x2F,
    0x28,
    0x26,
    0x19,
    0x20,
    0x1E,
    0x2C,
    0x24,
    0x25,
    0x18,
    0x27,
    0x1C,
    0x2B,
    0x21,
    0x2A,
    0x2D,
    0x1B,
    0x1F,
    0x1A,
    0x22,
    0x2E,
    1,
    1,
    1,
    0,
    0,
    0,
};
SaveContext gSaveContext;
u32 gSegments[16];
u16 gUpgradeCapacities[7][4] = {
    {0, 0x14, 0x1E, 0x28},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0x63, 0xC8, 0x1F4, 0x1F4},
    {0, 0x1E, 0x28, 0x32},
    {0, 0xA, 0x14, 0x1E},
    {0, 0x14, 0x1E, 0x28},
};
u32 gUpgradeMasks[8] = {7, 0x38, 0x1C0, 0xE00, 0x3000, 0x1C000, 0xE0000, 0x700000};
u8 gUpgradeShifts[16] = {0, 3, 6, 9, 0xC, 0xE, 0x11, 0x14, 0, 0, 0, 0x1E, 0, 0x28, 0, 0x32};

void *func_8010CB80(void *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9) {
    s32 temp_t0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    s32 phi_t1;
    s32 phi_t2;
    s32 phi_a1;

    arg0->unk_0 = 0xFD100000;
    arg0->unk_4 = arg1;
    temp_a0_2 = arg0 + 8;
    temp_a0_2->unk_0 = 0xF5100000;
    temp_a0_2->unk_4 = 0x7000000;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_3->unk_0 = 0xE6000000;
    temp_a0_3->unk_4 = 0;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_4->unk_0 = 0xF3000000;
    temp_a0_5 = temp_a0_4 + 8;
    temp_v1 = (arg2 * arg3) - 1;
    if (temp_v1 < 0x7FF) {
        phi_a1 = temp_v1;
    } else {
        phi_a1 = 0x7FF;
    }
    temp_v1_2 = arg2 * 2;
    temp_t0 = temp_v1_2 / 8;
    if (temp_t0 <= 0) {
        phi_t1 = 1;
    } else {
        phi_t1 = temp_t0;
    }
    if (temp_t0 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t0;
    }
    temp_a0_4->unk_4 = (s32) ((((s32) (phi_t1 + 0x7FF) / phi_t2) & 0xFFF) | 0x7000000 | ((phi_a1 & 0xFFF) << 0xC));
    temp_a0_5->unk_0 = 0xE7000000;
    temp_a0_5->unk_4 = 0;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_6->unk_0 = (s32) (((((s32) (temp_v1_2 + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
    temp_a0_6->unk_4 = 0;
    temp_a0_7 = temp_a0_6 + 8;
    temp_a0_7->unk_0 = 0xF2000000;
    temp_a0_7->unk_4 = (s32) (((((arg2 - 1) * 4) & 0xFFF) << 0xC) | (((arg3 - 1) * 4) & 0xFFF));
    temp_a0_8 = temp_a0_7 + 8;
    temp_a0_8->unk_0 = (s32) (((((arg4 + arg6) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((arg5 + arg7) * 4) & 0xFFF));
    temp_a0_8->unk_4 = (s32) ((((arg4 * 4) & 0xFFF) << 0xC) | ((arg5 * 4) & 0xFFF));
    temp_a0_9 = temp_a0_8 + 8;
    temp_a0_9->unk_0 = 0xE1000000;
    temp_a0_9->unk_4 = 0;
    temp_a0 = temp_a0_9 + 8;
    temp_a0->unk_0 = 0xF1000000;
    temp_a0->unk_4 = (s32) ((arg8 << 0x10) | arg9);
    return temp_a0 + 8;
}

Gfx *func_8010CD98(Gfx *arg0, u8 *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9) {
    s32 temp_t0;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    s32 phi_t1;
    s32 phi_t2;
    s32 phi_a1;

    arg0->words.w0 = 0xFD700000;
    arg0->words.w1 = arg1;
    temp_a0_2 = arg0 + 8;
    temp_a0_2->unk_0 = 0xF5700000;
    temp_a0_2->unk_4 = 0x7000000;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_3->unk_0 = 0xE6000000;
    temp_a0_3->unk_4 = 0;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_4->unk_0 = 0xF3000000;
    temp_a0_5 = temp_a0_4 + 8;
    temp_v1 = ((s32) ((arg2 * arg3) + 1) >> 1) - 1;
    if (temp_v1 < 0x7FF) {
        phi_a1 = temp_v1;
    } else {
        phi_a1 = 0x7FF;
    }
    temp_t0 = (s32) arg2 / 8;
    if (temp_t0 <= 0) {
        phi_t1 = 1;
    } else {
        phi_t1 = temp_t0;
    }
    if (temp_t0 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t0;
    }
    temp_a0_4->unk_4 = (s32) ((((s32) (phi_t1 + 0x7FF) / phi_t2) & 0xFFF) | 0x7000000 | ((phi_a1 & 0xFFF) << 0xC));
    temp_a0_5->unk_0 = 0xE7000000;
    temp_a0_5->unk_4 = 0;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_6->unk_0 = (s32) (((((s32) (arg2 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000);
    temp_a0_6->unk_4 = 0;
    temp_a0_7 = temp_a0_6 + 8;
    temp_a0_7->unk_0 = 0xF2000000;
    temp_a0_7->unk_4 = (s32) (((((arg2 - 1) * 4) & 0xFFF) << 0xC) | (((arg3 - 1) * 4) & 0xFFF));
    temp_a0_8 = temp_a0_7 + 8;
    temp_a0_8->unk_0 = (s32) (((((arg4 + arg6) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((arg5 + arg7) * 4) & 0xFFF));
    temp_a0_8->unk_4 = (s32) ((((arg4 * 4) & 0xFFF) << 0xC) | ((arg5 * 4) & 0xFFF));
    temp_a0_9 = temp_a0_8 + 8;
    temp_a0_9->unk_0 = 0xE1000000;
    temp_a0_9->unk_4 = 0;
    temp_a0 = temp_a0_9 + 8;
    temp_a0->unk_0 = 0xF1000000;
    temp_a0->unk_4 = (s32) ((arg8 << 0x10) | arg9);
    return temp_a0 + 8;
}

Gfx *func_8010CFBC(Gfx *arg0, ? *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9, s16 argA, s16 argB, s16 argC, s16 argD) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_16;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    s16 phi_v0;
    s32 phi_t1;
    s32 phi_t2;
    s32 phi_a1;

    temp_a0_2 = arg0 + 8;
    phi_v0 = argD;
    if ((s32) argD >= 0x65) {
        phi_v0 = 0x64;
    }
    arg0->words.w0 = 0xE7000000;
    arg0->words.w1 = 0;
    temp_a0_2->unk_4 = (s32) (phi_v0 & 0xFF);
    temp_a0_2->unk_0 = 0xFA000000;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_3->unk_0 = 0xFD700000;
    temp_a0_3->unk_4 = arg1;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_4->unk_0 = 0xF5700000;
    temp_a0_4->unk_4 = 0x7000000;
    temp_a0_5 = temp_a0_4 + 8;
    temp_a0_5->unk_0 = 0xE6000000;
    temp_a0_5->unk_4 = 0;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_6->unk_0 = 0xF3000000;
    temp_a0_7 = temp_a0_6 + 8;
    temp_v1 = ((s32) ((arg2 * arg3) + 1) >> 1) - 1;
    if (temp_v1 < 0x7FF) {
        phi_a1 = temp_v1;
    } else {
        phi_a1 = 0x7FF;
    }
    temp_t0 = (s32) arg2 / 8;
    if (temp_t0 <= 0) {
        phi_t1 = 1;
    } else {
        phi_t1 = temp_t0;
    }
    if (temp_t0 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t0;
    }
    temp_a0_6->unk_4 = (s32) ((((s32) (phi_t1 + 0x7FF) / phi_t2) & 0xFFF) | 0x7000000 | ((phi_a1 & 0xFFF) << 0xC));
    temp_a0_7->unk_0 = 0xE7000000U;
    temp_a0_7->unk_4 = 0;
    temp_a0_8 = temp_a0_7 + 8;
    temp_a0_8->unk_0 = (s32) (((((s32) (arg2 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000);
    temp_a0_8->unk_4 = 0;
    temp_a0_9 = temp_a0_8 + 8;
    temp_a0_9->unk_0 = 0xF2000000;
    temp_a0_9->unk_4 = (s32) (((((arg2 - 1) * 4) & 0xFFF) << 0xC) | (((arg3 - 1) * 4) & 0xFFF));
    temp_a0_10 = temp_a0_9 + 8;
    temp_a1 = arg4 * 4;
    temp_v0 = (arg4 + arg6) * 4;
    temp_v1_2 = (arg5 + arg7) * 4;
    temp_a0_10->unk_0 = (s32) ((((temp_v0 + 8) & 0xFFF) << 0xC) | 0xE4000000 | ((temp_v1_2 + 8) & 0xFFF));
    temp_a2 = arg5 * 4;
    temp_a0_10->unk_4 = (s32) ((((temp_a1 + 8) & 0xFFF) << 0xC) | ((temp_a2 + 8) & 0xFFF));
    temp_a0_11 = temp_a0_10 + 8;
    temp_a0_11->unk_0 = 0xE1000000;
    temp_a0_11->unk_4 = 0;
    temp_a0_12 = temp_a0_11 + 8;
    temp_a0_12->unk_0 = 0xF1000000;
    temp_a0_13 = temp_a0_12 + 8;
    temp_a3 = (arg8 << 0x10) | arg9;
    temp_a0_12->unk_4 = temp_a3;
    temp_a0_13->unk_0 = 0xE7000000U;
    temp_a0_13->unk_4 = 0;
    temp_a0_14 = temp_a0_13 + 8;
    temp_a0_14->unk_0 = 0xFA000000;
    temp_a0_15 = temp_a0_14 + 8;
    temp_a0_14->unk_4 = (s32) ((argA << 0x18) | ((argB & 0xFF) << 0x10) | ((argC & 0xFF) << 8) | (argD & 0xFF));
    temp_a0_15->unk_0 = (s32) (((temp_v0 & 0xFFF) << 0xC) | 0xE4000000 | (temp_v1_2 & 0xFFF));
    temp_a0_15->unk_4 = (s32) (((temp_a1 & 0xFFF) << 0xC) | (temp_a2 & 0xFFF));
    temp_a0_16 = temp_a0_15 + 8;
    temp_a0_16->unk_0 = 0xE1000000;
    temp_a0_16->unk_4 = 0;
    temp_a0 = temp_a0_16 + 8;
    temp_a0->unk_0 = 0xF1000000;
    temp_a0->unk_4 = temp_a3;
    return temp_a0 + 8;
}

Gfx *func_8010D2D4(Gfx *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, u16 arg5, u16 arg6, s16 arg7, s16 arg8, s16 arg9, s16 argA) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    s16 phi_v0;

    temp_a0_2 = arg0 + 8;
    phi_v0 = argA;
    if ((s32) argA >= 0x65) {
        phi_v0 = 0x64;
    }
    arg0->words.w0 = 0xE7000000;
    arg0->words.w1 = 0;
    temp_a0_2->unk_4 = (s32) (phi_v0 & 0xFF);
    temp_a0_2->unk_0 = 0xFA000000;
    temp_a0_3 = temp_a0_2 + 8;
    temp_v0 = (arg1 + arg3) * 4;
    temp_v1 = (arg2 + arg4) * 4;
    temp_a0_3->unk_0 = (s32) ((((temp_v0 + 8) & 0xFFF) << 0xC) | 0xE4000000 | ((temp_v1 + 8) & 0xFFF));
    temp_a0_4 = temp_a0_3 + 8;
    temp_a1 = arg1 * 4;
    temp_a2 = arg2 * 4;
    temp_a0_3->unk_4 = (s32) ((((temp_a1 + 8) & 0xFFF) << 0xC) | ((temp_a2 + 8) & 0xFFF));
    temp_a0_4->unk_0 = 0xE1000000;
    temp_a0_4->unk_4 = 0;
    temp_a0_5 = temp_a0_4 + 8;
    temp_a0_5->unk_0 = 0xF1000000;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a3 = (arg5 << 0x10) | arg6;
    temp_a0_5->unk_4 = temp_a3;
    temp_a0_6->unk_0 = 0xE7000000U;
    temp_a0_6->unk_4 = 0;
    temp_a0_7 = temp_a0_6 + 8;
    temp_a0_7->unk_0 = 0xFA000000;
    temp_a0_8 = temp_a0_7 + 8;
    temp_a0_7->unk_4 = (s32) ((arg7 << 0x18) | ((arg8 & 0xFF) << 0x10) | ((arg9 & 0xFF) << 8) | (argA & 0xFF));
    temp_a0_8->unk_0 = (s32) (((temp_v0 & 0xFFF) << 0xC) | 0xE4000000 | (temp_v1 & 0xFFF));
    temp_a0_8->unk_4 = (s32) (((temp_a1 & 0xFFF) << 0xC) | (temp_a2 & 0xFFF));
    temp_a0_9 = temp_a0_8 + 8;
    temp_a0_9->unk_0 = 0xE1000000;
    temp_a0_9->unk_4 = 0;
    temp_a0 = temp_a0_9 + 8;
    temp_a0->unk_0 = 0xF1000000;
    temp_a0->unk_4 = temp_a3;
    return temp_a0 + 8;
}

Gfx *func_8010D480(Gfx *arg0, ? *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9, s16 argA, s16 argB, s16 argC, s16 argD, s32 argE, s32 argF) {
    void *sp4;
    void *sp0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_16;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    s16 phi_v0;
    s32 phi_t2;
    s32 phi_t3;
    s32 phi_t0;

    temp_a0_2 = arg0 + 8;
    phi_v0 = argD;
    if ((s32) argD >= 0x65) {
        phi_v0 = 0x64;
    }
    arg0->words.w0 = 0xE7000000;
    arg0->words.w1 = 0;
    temp_a0_2->unk_4 = (s32) (phi_v0 & 0xFF);
    temp_a0_2->unk_0 = 0xFA000000;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_3->unk_0 = 0xFD700000;
    temp_a0_3->unk_4 = arg1;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_4->unk_0 = 0xF5700000;
    temp_v0 = (argE & 0xF) * 0x10;
    temp_a0_4->unk_4 = (s32) (temp_v0 | 0x7000100);
    temp_a0_5 = temp_a0_4 + 8;
    temp_a0_5->unk_0 = 0xE6000000;
    temp_a0_5->unk_4 = 0;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_6->unk_0 = 0xF3000000;
    temp_a0_7 = temp_a0_6 + 8;
    temp_a1 = ((s32) ((arg2 * arg3) + 1) >> 1) - 1;
    if (temp_a1 < 0x7FF) {
        phi_t0 = temp_a1;
    } else {
        phi_t0 = 0x7FF;
    }
    temp_t1 = (s32) arg2 / 8;
    if (temp_t1 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t1;
    }
    if (temp_t1 <= 0) {
        phi_t3 = 1;
    } else {
        phi_t3 = temp_t1;
    }
    temp_a0_6->unk_4 = (s32) ((((s32) (phi_t2 + 0x7FF) / phi_t3) & 0xFFF) | 0x7000000 | ((phi_t0 & 0xFFF) << 0xC));
    temp_a0_7->unk_0 = 0xE7000000U;
    temp_a0_7->unk_4 = 0;
    temp_a0_8 = temp_a0_7 + 8;
    temp_a0_8->unk_4 = (s32) (temp_v0 | 0x100);
    temp_a0_8->unk_0 = (s32) (((((s32) (arg2 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000);
    temp_a0_9 = temp_a0_8 + 8;
    temp_a0_9->unk_0 = 0xF2000000;
    temp_a0_9->unk_4 = (s32) (((((arg2 - 1) * 4) & 0xFFF) << 0xC) | (((arg3 - 1) * 4) & 0xFFF));
    temp_a0_10 = temp_a0_9 + 8;
    temp_a1_2 = arg4 * 4;
    temp_v0_2 = (arg4 + arg6) * 4;
    temp_v1 = (arg5 + arg7) * 4;
    temp_a0_10->unk_0 = (s32) ((((temp_v0_2 + 8) & 0xFFF) << 0xC) | 0xE4000000 | ((temp_v1 + 8) & 0xFFF));
    temp_a2 = arg5 * 4;
    temp_a0_10->unk_4 = (s32) ((((temp_a1_2 + 8) & 0xFFF) << 0xC) | ((temp_a2 + 8) & 0xFFF));
    temp_a0_11 = temp_a0_10 + 8;
    temp_a0_11->unk_0 = 0xE1000000;
    temp_a0_12 = temp_a0_11 + 8;
    temp_a3 = argF << 0x10;
    temp_a0_11->unk_4 = temp_a3;
    sp4 = temp_a0_12;
    temp_a0_13 = temp_a0_12 + 8;
    sp4->unk_0 = 0xF1000000;
    temp_t0 = (arg8 << 0x10) | arg9;
    sp4->unk_4 = temp_t0;
    sp0 = temp_a0_13;
    temp_a0_14 = temp_a0_13 + 8;
    sp0->unk_0 = 0xE7000000U;
    sp0->unk_4 = 0;
    temp_a0_14->unk_0 = 0xFA000000;
    temp_a0_15 = temp_a0_14 + 8;
    temp_a0_14->unk_4 = (s32) ((argA << 0x18) | ((argB & 0xFF) << 0x10) | ((argC & 0xFF) << 8) | (argD & 0xFF));
    temp_a0_15->unk_0 = (s32) (((temp_v0_2 & 0xFFF) << 0xC) | 0xE4000000 | (temp_v1 & 0xFFF));
    temp_a0_15->unk_4 = (s32) (((temp_a1_2 & 0xFFF) << 0xC) | (temp_a2 & 0xFFF));
    temp_a0_16 = temp_a0_15 + 8;
    temp_a0_16->unk_0 = 0xE1000000;
    temp_a0_16->unk_4 = temp_a3;
    temp_a0 = temp_a0_16 + 8;
    temp_a0->unk_0 = 0xF1000000;
    temp_a0->unk_4 = temp_t0;
    return temp_a0 + 8;
}

Gfx *func_8010D7D0(Gfx *arg0, void *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9) {
    s32 temp_t0;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    s32 phi_t1;
    s32 phi_t2;
    s32 phi_a1;

    arg0->words.w0 = 0xFD900000;
    arg0->words.w1 = arg1;
    temp_a0_2 = arg0 + 8;
    temp_a0_2->unk_0 = 0xF5900000;
    temp_a0_2->unk_4 = 0x7000000;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_3->unk_0 = 0xE6000000;
    temp_a0_3->unk_4 = 0;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_4->unk_0 = 0xF3000000;
    temp_a0_5 = temp_a0_4 + 8;
    temp_v1 = ((s32) ((arg2 * arg3) + 1) >> 1) - 1;
    if (temp_v1 < 0x7FF) {
        phi_a1 = temp_v1;
    } else {
        phi_a1 = 0x7FF;
    }
    temp_t0 = (s32) arg2 / 8;
    if (temp_t0 <= 0) {
        phi_t1 = 1;
    } else {
        phi_t1 = temp_t0;
    }
    if (temp_t0 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t0;
    }
    temp_a0_4->unk_4 = (s32) ((((s32) (phi_t1 + 0x7FF) / phi_t2) & 0xFFF) | 0x7000000 | ((phi_a1 & 0xFFF) << 0xC));
    temp_a0_5->unk_0 = 0xE7000000;
    temp_a0_5->unk_4 = 0;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_6->unk_0 = (s32) (((((s32) (arg2 + 7) >> 3) & 0x1FF) << 9) | 0xF5880000);
    temp_a0_6->unk_4 = 0;
    temp_a0_7 = temp_a0_6 + 8;
    temp_a0_7->unk_0 = 0xF2000000;
    temp_a0_7->unk_4 = (s32) (((((arg2 - 1) * 4) & 0xFFF) << 0xC) | (((arg3 - 1) * 4) & 0xFFF));
    temp_a0_8 = temp_a0_7 + 8;
    temp_a0_8->unk_0 = (s32) (((((arg4 + arg6) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((arg5 + arg7) * 4) & 0xFFF));
    temp_a0_8->unk_4 = (s32) ((((arg4 * 4) & 0xFFF) << 0xC) | ((arg5 * 4) & 0xFFF));
    temp_a0_9 = temp_a0_8 + 8;
    temp_a0_9->unk_0 = 0xE1000000;
    temp_a0_9->unk_4 = 0;
    temp_a0 = temp_a0_9 + 8;
    temp_a0->unk_0 = 0xF1000000;
    temp_a0->unk_4 = (s32) ((arg8 << 0x10) | arg9);
    return temp_a0 + 8;
}

Gfx *func_8010D9F4(Gfx *arg0, ? *arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s32 arg9, s32 argA, s32 argB, u16 argC, u16 argD) {
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    s32 phi_t3;
    s32 phi_t4;
    s32 phi_t2;

    temp_t0 = (arg2 & 7) << 0x15;
    arg0->words.w0 = temp_t0 | 0xFD000000 | 0x100000;
    arg0->words.w1 = arg1;
    temp_a0_2 = arg0 + 8;
    temp_v0 = temp_t0 | 0xF5000000;
    temp_a0_2->unk_0 = (s32) (temp_v0 | 0x100000);
    temp_a0_3 = temp_a0_2 + 8;
    temp_v1 = (arg9 & 3) << 8;
    temp_a1 = (argA & 0xF) * 0x10;
    temp_a0_2->unk_4 = (s32) (temp_v1 | 0x7000000 | temp_a1);
    temp_a0_3->unk_0 = 0xE6000000;
    temp_a0_3->unk_4 = 0;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_4->unk_0 = 0xF3000000;
    temp_a0_5 = temp_a0_4 + 8;
    temp_t1 = ((s32) ((arg3 * arg4) + 3) >> 2) - 1;
    if (temp_t1 < 0x7FF) {
        phi_t2 = temp_t1;
    } else {
        phi_t2 = 0x7FF;
    }
    temp_t1_2 = (s32) arg3 / 0x10;
    if (temp_t1_2 <= 0) {
        phi_t3 = 1;
    } else {
        phi_t3 = temp_t1_2;
    }
    if (temp_t1_2 <= 0) {
        phi_t4 = 1;
    } else {
        phi_t4 = temp_t1_2;
    }
    temp_a0_4->unk_4 = (s32) ((((s32) (phi_t3 + 0x7FF) / phi_t4) & 0xFFF) | 0x7000000 | ((phi_t2 & 0xFFF) << 0xC));
    temp_a0_5->unk_0 = 0xE7000000;
    temp_a0_5->unk_4 = 0;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_6->unk_4 = (s32) (temp_v1 | temp_a1);
    temp_a0_6->unk_0 = (s32) (temp_v0 | ((((s32) (((s32) arg3 >> 1) + 7) >> 3) & 0x1FF) << 9));
    temp_a0_7 = temp_a0_6 + 8;
    temp_a0_7->unk_0 = 0xF2000000;
    temp_a0_7->unk_4 = (s32) (((((arg3 - 1) * 4) & 0xFFF) << 0xC) | (((arg4 - 1) * 4) & 0xFFF));
    temp_a0_8 = temp_a0_7 + 8;
    temp_a0_8->unk_0 = (s32) (((((arg5 + arg7) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((arg6 + arg8) * 4) & 0xFFF));
    temp_a0_8->unk_4 = (s32) ((((arg5 * 4) & 0xFFF) << 0xC) | ((arg6 * 4) & 0xFFF));
    temp_a0_9 = temp_a0_8 + 8;
    temp_a0_9->unk_0 = 0xE1000000;
    temp_a0 = temp_a0_9 + 8;
    temp_a0_9->unk_4 = (s32) (argB << 0x10);
    temp_a0->unk_0 = 0xF1000000;
    temp_a0->unk_4 = (s32) ((argC << 0x10) | argD);
    return temp_a0 + 8;
}

Gfx *func_8010DC58(Gfx *arg0, ? *arg1, s16 arg2, s16 arg3, u16 arg4) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    s32 phi_t2;
    s32 phi_t3;
    s32 phi_t0;

    arg0->words.w0 = 0xFD700000;
    arg0->words.w1 = arg1;
    temp_a0_2 = arg0 + 8;
    temp_a0_2->unk_0 = 0xF5700000;
    temp_a0_2->unk_4 = 0x7000000;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_3->unk_0 = 0xE6000000;
    temp_a0_3->unk_4 = 0;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_4->unk_0 = 0xF3000000;
    temp_a0_5 = temp_a0_4 + 8;
    temp_a1 = ((s32) ((arg2 * arg3) + 1) >> 1) - 1;
    phi_t0 = 0x7FF;
    if (temp_a1 < 0x7FF) {
        phi_t0 = temp_a1;
    }
    temp_t1 = (s32) arg2 / 8;
    if (temp_t1 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t1;
    }
    if (temp_t1 <= 0) {
        phi_t3 = 1;
    } else {
        phi_t3 = temp_t1;
    }
    temp_a0_4->unk_4 = (s32) ((((s32) (phi_t2 + 0x7FF) / phi_t3) & 0xFFF) | 0x7000000 | ((phi_t0 & 0xFFF) << 0xC));
    temp_a0_5->unk_0 = 0xE7000000;
    temp_a0_5->unk_4 = 0;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_6->unk_0 = (s32) (((((s32) (arg2 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000);
    temp_a0_6->unk_4 = 0;
    temp_a0_7 = temp_a0_6 + 8;
    temp_a0_7->unk_0 = 0xF2000000;
    temp_a0_7->unk_4 = (s32) (((((arg2 - 1) * 4) & 0xFFF) << 0xC) | (((arg3 - 1) * 4) & 0xFFF));
    temp_a0 = temp_a0_7 + 8;
    temp_a1_2 = arg4 * 2;
    temp_a2 = (temp_a1_2 & 0xFF) << 0x10;
    temp_a3 = (temp_a1_2 + 6) & 0xFF;
    temp_a0->unk_4 = (s32) (temp_a2 | (temp_a3 << 8) | ((temp_a1_2 + 2) & 0xFF));
    temp_a0->unk_0 = (s32) (temp_a2 | (((temp_a1_2 + 4) & 0xFF) << 8) | temp_a3 | 0x7000000);
    return temp_a0 + 8;
}

Gfx *func_8010DE38(Gfx *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, u16 arg5) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    s32 phi_t2;
    s32 phi_t3;
    s32 phi_t1;

    temp_v1 = (arg2 & 7) << 0x15;
    arg0->words.w0 = temp_v1 | 0xFD000000 | 0x100000;
    arg0->words.w1 = arg1;
    temp_a0_2 = arg0 + 8;
    temp_a2 = temp_v1 | 0xF5000000;
    temp_a0_2->unk_0 = (s32) (temp_a2 | 0x100000);
    temp_a0_2->unk_4 = 0x7000000;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_3->unk_0 = 0xE6000000;
    temp_a0_3->unk_4 = 0;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_4->unk_0 = 0xF3000000;
    temp_a0_5 = temp_a0_4 + 8;
    temp_t0 = ((s32) ((arg3 * arg4) + 3) >> 2) - 1;
    phi_t1 = 0x7FF;
    if (temp_t0 < 0x7FF) {
        phi_t1 = temp_t0;
    }
    temp_t0_2 = (s32) arg3 / 0x10;
    if (temp_t0_2 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t0_2;
    }
    if (temp_t0_2 <= 0) {
        phi_t3 = 1;
    } else {
        phi_t3 = temp_t0_2;
    }
    temp_a0_4->unk_4 = (s32) ((((s32) (phi_t2 + 0x7FF) / phi_t3) & 0xFFF) | 0x7000000 | ((phi_t1 & 0xFFF) << 0xC));
    temp_a0_5->unk_0 = 0xE7000000;
    temp_a0_5->unk_4 = 0;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_6->unk_0 = (s32) (temp_a2 | ((((s32) (((s32) arg3 >> 1) + 7) >> 3) & 0x1FF) << 9));
    temp_a0_6->unk_4 = 0;
    temp_a0_7 = temp_a0_6 + 8;
    temp_a0_7->unk_0 = 0xF2000000;
    temp_a0_7->unk_4 = (s32) (((((arg3 - 1) * 4) & 0xFFF) << 0xC) | (((arg4 - 1) * 4) & 0xFFF));
    temp_a0 = temp_a0_7 + 8;
    temp_a1 = arg5 * 2;
    temp_a2_2 = (temp_a1 & 0xFF) << 0x10;
    temp_a3 = (temp_a1 + 6) & 0xFF;
    temp_a0->unk_4 = (s32) (temp_a2_2 | (temp_a3 << 8) | ((temp_a1 + 2) & 0xFF));
    temp_a0->unk_0 = (s32) (temp_a2_2 | (((temp_a1 + 4) & 0xFF) << 8) | temp_a3 | 0x7000000);
    return temp_a0 + 8;
}

void func_8010E028(GraphicsContext **arg0) {
    GraphicsContext *temp_v1;
    GraphicsContext *temp_v1_21;
    s16 *temp_t0;
    s16 *temp_t3;
    s16 temp_a1_10;
    s16 temp_a1_12;
    s16 temp_a1_13;
    s16 temp_a1_2;
    s16 temp_a1_4;
    s16 temp_a1_5;
    s16 temp_a1_7;
    s16 temp_a1_8;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_ra;
    s16 temp_t1;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_v0_5;
    s16 temp_v1_10;
    s16 temp_v1_11;
    s16 temp_v1_12;
    s16 temp_v1_13;
    s16 temp_v1_14;
    s16 temp_v1_15;
    s16 temp_v1_16;
    s16 temp_v1_17;
    s16 temp_v1_18;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s16 temp_v1_8;
    s32 temp_a1_6;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    u16 temp_a1;
    u16 temp_a1_11;
    u16 temp_v1_19;
    u8 temp_a1_3;
    u8 temp_a1_9;
    u8 temp_v0_10;
    u8 temp_v1_20;
    u8 temp_v1_9;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_16;
    void *temp_a0_17;
    void *temp_a0_18;
    void *temp_a0_19;
    void *temp_a0_20;
    void *temp_a0_21;
    void *temp_a0_22;
    void *temp_a0_23;
    void *temp_a0_24;
    void *temp_a0_25;
    void *temp_a0_26;
    void *temp_a0_27;
    void *temp_a0_28;
    void *temp_a0_29;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_a2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_9;
    s16 phi_t1;
    s16 phi_t2;
    s16 phi_t0;
    s16 phi_t2_2;
    s16 phi_t1_2;
    s16 phi_v1;
    void *phi_t6;
    s32 phi_v0;
    s16 phi_ra;

    temp_v1 = arg0->unk_0;
    temp_v0 = temp_v1->polyOpa.d - 0x6C0;
    temp_v1->polyOpa.d = temp_v0;
    arg0->unk_16B50 = temp_v0;
    temp_a2 = arg0 + 0x169E8;
    phi_t1 = 0;
    phi_t2 = 0;
    phi_t1_2 = 0;
    do {
        temp_a3 = phi_t1 * 2;
        temp_v1_2 = *(&D_801BFA04 + temp_a3);
        temp_v0_2 = phi_t2 * 0x10;
        (temp_a2->unk_168 + temp_v0_2)->unk_20 = temp_v1_2;
        temp_t0 = &D_801BFA1C + temp_a3;
        temp_t3 = &D_801BFA4C + temp_a3;
        *(temp_a2->unk_168 + temp_v0_2) = temp_v1_2;
        temp_t2 = phi_t2 + 4;
        temp_a0 = temp_a2->unk_168 + temp_v0_2;
        temp_v1_3 = *temp_t0 + temp_a0->unk_0;
        temp_a0->unk_30 = temp_v1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_10 = temp_v1_3;
        temp_v1_4 = *(&D_801BFA34 + temp_a3);
        (temp_a2->unk_168 + temp_v0_2)->unk_12 = temp_v1_4;
        (temp_a2->unk_168 + temp_v0_2)->unk_2 = temp_v1_4;
        temp_a0_2 = temp_a2->unk_168 + temp_v0_2;
        temp_v1_5 = temp_a0_2->unk_2 - *temp_t3;
        temp_a0_2->unk_32 = temp_v1_5;
        (temp_a2->unk_168 + temp_v0_2)->unk_22 = temp_v1_5;
        (temp_a2->unk_168 + temp_v0_2)->unk_34 = 0;
        temp_a0_3 = temp_a2->unk_168 + temp_v0_2;
        temp_v1_6 = temp_a0_3->unk_34;
        temp_a0_3->unk_24 = temp_v1_6;
        (temp_a2->unk_168 + temp_v0_2)->unk_14 = temp_v1_6;
        (temp_a2->unk_168 + temp_v0_2)->unk_4 = temp_v1_6;
        (temp_a2->unk_168 + temp_v0_2)->unk_36 = 0;
        temp_a0_4 = temp_a2->unk_168 + temp_v0_2;
        temp_a1 = temp_a0_4->unk_36;
        temp_a0_4->unk_26 = temp_a1;
        (temp_a2->unk_168 + temp_v0_2)->unk_16 = temp_a1;
        (temp_a2->unk_168 + temp_v0_2)->unk_6 = temp_a1;
        (temp_a2->unk_168 + temp_v0_2)->unk_28 = 0;
        temp_a0_5 = temp_a2->unk_168 + temp_v0_2;
        temp_a1_2 = temp_a0_5->unk_28;
        temp_a0_5->unk_1A = temp_a1_2;
        (temp_a2->unk_168 + temp_v0_2)->unk_A = temp_a1_2;
        (temp_a2->unk_168 + temp_v0_2)->unk_8 = temp_a1_2;
        temp_v1_7 = *temp_t0 << 5;
        (temp_a2->unk_168 + temp_v0_2)->unk_38 = temp_v1_7;
        (temp_a2->unk_168 + temp_v0_2)->unk_18 = temp_v1_7;
        temp_v1_8 = *temp_t3 << 5;
        (temp_a2->unk_168 + temp_v0_2)->unk_3A = temp_v1_8;
        (temp_a2->unk_168 + temp_v0_2)->unk_2A = temp_v1_8;
        (temp_a2->unk_168 + temp_v0_2)->unk_3E = 0xFFU;
        temp_a0_6 = temp_a2->unk_168 + temp_v0_2;
        temp_a1_3 = temp_a0_6->unk_3E;
        temp_a0_6->unk_2E = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_1E = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_E = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_3D = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_2D = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_1D = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_D = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_3C = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_2C = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_1C = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_C = temp_a1_3;
        (temp_a2->unk_168 + temp_v0_2)->unk_3F = 0xFFU;
        temp_a0_7 = temp_a2->unk_168 + temp_v0_2;
        temp_v1_9 = temp_a0_7->unk_3F;
        temp_a0_7->unk_2F = temp_v1_9;
        (temp_a2->unk_168 + temp_v0_2)->unk_1F = temp_v1_9;
        (temp_a2->unk_168 + temp_v0_2)->unk_F = temp_v1_9;
        phi_t1 = (s16) (phi_t1 + 1);
        phi_t2 = temp_t2;
        phi_t2_2 = temp_t2;
    } while ((s32) temp_t2 < 0x2C);
    arg0 = arg0;
    temp_a2->unk_168->unk_3A = 0x400;
    temp_v0_3 = temp_a2->unk_168;
    temp_a1_4 = temp_v0_3->unk_3A;
    temp_v0_3->unk_2A = temp_a1_4;
    temp_a2->unk_168->unk_38 = temp_a1_4;
    temp_a2->unk_168->unk_18 = temp_a1_4;
    temp_a2->unk_168->unk_7A = 0x400;
    temp_v0_4 = temp_a2->unk_168;
    temp_a1_5 = temp_v0_4->unk_7A;
    temp_v0_4->unk_6A = temp_a1_5;
    temp_a2->unk_168->unk_78 = temp_a1_5;
    temp_a2->unk_168->unk_58 = temp_a1_5;
    phi_t0 = 2;
    phi_ra = 0;
    do {
loop_4:
        temp_v0_5 = temp_a2->unk_288;
        temp_a3_2 = phi_t1_2 * 2;
        if ((temp_v0_5 == 1) || ((temp_v0_5 == 3) && (temp_a2->unk_28A == 6))) {
            temp_v1_15 = -0x10 - (*(&D_801BFA64 + temp_a3_2) - phi_t0);
            temp_v0_8 = phi_t2_2 * 0x10;
            (temp_a2->unk_168 + temp_v0_8)->unk_20 = temp_v1_15;
            *(temp_a2->unk_168 + temp_v0_8) = temp_v1_15;
            temp_a0_12 = temp_a2->unk_168 + temp_v0_8;
            temp_v1_16 = temp_a0_12->unk_0 + 0x20;
            temp_a0_12->unk_30 = temp_v1_16;
            (temp_a2->unk_168 + temp_v0_8)->unk_10 = temp_v1_16;
            temp_v1_17 = (*(&D_801BFA74 + temp_a3_2) - phi_t0) + 0x10;
            (temp_a2->unk_168 + temp_v0_8)->unk_12 = temp_v1_17;
            (temp_a2->unk_168 + temp_v0_8)->unk_2 = temp_v1_17;
            temp_a0_13 = temp_a2->unk_168 + temp_v0_8;
            temp_v1_18 = temp_a0_13->unk_2 - 0x21;
            temp_a0_13->unk_32 = temp_v1_18;
            phi_v1 = temp_v1_18;
            phi_t6 = temp_a2->unk_168 + temp_v0_8;
            phi_v0 = temp_v0_8;
            goto block_12;
        }
        if ((temp_v0_5 == 2) || (temp_v0_5 == 3)) {
            temp_v1_12 = -0x10 - ((temp_a2 + (phi_t1_2 * 2))->unk_2AA - phi_t0);
            temp_v0_7 = phi_t2_2 * 0x10;
            (temp_a2->unk_168 + temp_v0_7)->unk_20 = temp_v1_12;
            temp_a3_4 = 0x10 - phi_t0;
            *(temp_a2->unk_168 + temp_v0_7) = temp_v1_12;
            temp_a0_10 = temp_a2->unk_168 + temp_v0_7;
            temp_v1_13 = temp_a0_10->unk_0 + 0x20;
            temp_a0_10->unk_30 = temp_v1_13;
            (temp_a2->unk_168 + temp_v0_7)->unk_10 = temp_v1_13;
            (temp_a2->unk_168 + temp_v0_7)->unk_12 = temp_a3_4;
            (temp_a2->unk_168 + temp_v0_7)->unk_2 = temp_a3_4;
            temp_a0_11 = temp_a2->unk_168 + temp_v0_7;
            temp_v1_14 = temp_a0_11->unk_2 - 0x21;
            temp_a0_11->unk_32 = temp_v1_14;
            (temp_a2->unk_168 + temp_v0_7)->unk_22 = temp_v1_14;
            phi_v0 = temp_v0_7;
        } else {
            temp_v0_6 = phi_t2_2 * 0x10;
            temp_a1_6 = -(s32) (0xD8 - phi_t0);
            (temp_a2->unk_168 + temp_v0_6)->unk_20 = (s16) temp_a1_6;
            temp_a3_3 = 0x18 - phi_t0;
            *(temp_a2->unk_168 + temp_v0_6) = (s16) temp_a1_6;
            temp_a0_8 = temp_a2->unk_168 + temp_v0_6;
            temp_v1_10 = temp_a0_8->unk_0 + 0x20;
            temp_a0_8->unk_30 = temp_v1_10;
            (temp_a2->unk_168 + temp_v0_6)->unk_10 = temp_v1_10;
            (temp_a2->unk_168 + temp_v0_6)->unk_12 = temp_a3_3;
            (temp_a2->unk_168 + temp_v0_6)->unk_2 = temp_a3_3;
            temp_a0_9 = temp_a2->unk_168 + temp_v0_6;
            temp_v1_11 = temp_a0_9->unk_2 - 0x21;
            temp_a0_9->unk_32 = temp_v1_11;
            phi_v1 = temp_v1_11;
            phi_t6 = temp_a2->unk_168 + temp_v0_6;
            phi_v0 = temp_v0_6;
block_12:
            phi_t6->unk_22 = phi_v1;
        }
        temp_t1 = phi_t1_2 + 1;
        (temp_a2->unk_168 + phi_v0)->unk_34 = 0;
        temp_t2_2 = phi_t2_2 + 4;
        temp_a0_14 = temp_a2->unk_168 + phi_v0;
        temp_a1_7 = temp_a0_14->unk_34;
        temp_a0_14->unk_24 = temp_a1_7;
        (temp_a2->unk_168 + phi_v0)->unk_14 = temp_a1_7;
        (temp_a2->unk_168 + phi_v0)->unk_4 = temp_a1_7;
        (temp_a2->unk_168 + phi_v0)->unk_36 = 0;
        temp_a0_15 = temp_a2->unk_168 + phi_v0;
        temp_v1_19 = temp_a0_15->unk_36;
        temp_a0_15->unk_26 = temp_v1_19;
        (temp_a2->unk_168 + phi_v0)->unk_16 = temp_v1_19;
        (temp_a2->unk_168 + phi_v0)->unk_6 = temp_v1_19;
        (temp_a2->unk_168 + phi_v0)->unk_28 = 0;
        temp_a0_16 = temp_a2->unk_168 + phi_v0;
        temp_a1_8 = temp_a0_16->unk_28;
        temp_a0_16->unk_1A = temp_a1_8;
        (temp_a2->unk_168 + phi_v0)->unk_A = temp_a1_8;
        (temp_a2->unk_168 + phi_v0)->unk_8 = temp_a1_8;
        (temp_a2->unk_168 + phi_v0)->unk_38 = 0x400;
        temp_a0_17 = temp_a2->unk_168 + phi_v0;
        temp_a0_17->unk_18 = (s16) temp_a0_17->unk_38;
        (temp_a2->unk_168 + phi_v0)->unk_3A = 0x420;
        temp_a0_18 = temp_a2->unk_168 + phi_v0;
        temp_a0_18->unk_2A = (s16) temp_a0_18->unk_3A;
        (temp_a2->unk_168 + phi_v0)->unk_3E = 0xFFU;
        temp_a0_19 = temp_a2->unk_168 + phi_v0;
        temp_a1_9 = temp_a0_19->unk_3E;
        temp_a0_19->unk_2E = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_1E = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_E = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_3D = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_2D = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_1D = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_D = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_3C = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_2C = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_1C = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_C = temp_a1_9;
        (temp_a2->unk_168 + phi_v0)->unk_3F = 0xFFU;
        temp_a0_20 = temp_a2->unk_168 + phi_v0;
        temp_v1_20 = temp_a0_20->unk_3F;
        temp_a0_20->unk_2F = temp_v1_20;
        (temp_a2->unk_168 + phi_v0)->unk_1F = temp_v1_20;
        (temp_a2->unk_168 + phi_v0)->unk_F = temp_v1_20;
        phi_t2_2 = temp_t2_2;
        phi_t1_2 = temp_t1;
        phi_t2_2 = temp_t2_2;
        if ((s32) temp_t1 < 8) {
            goto loop_4;
        }
        temp_ra = phi_ra + 1;
        phi_t0 = (s16) (phi_t0 - 2);
        phi_ra = temp_ra;
    } while ((s32) temp_ra < 2);
    temp_v1_21 = arg0->unk_0;
    temp_v0_9 = temp_v1_21->polyOpa.d - 0x40;
    temp_v1_21->polyOpa.d = temp_v0_9;
    temp_a2->unk_16C = temp_v0_9;
    temp_v0_9->unk_20 = -8;
    temp_a0_21 = temp_a2->unk_16C;
    temp_a0_21->unk_0 = (s16) temp_a0_21->unk_20;
    temp_a2->unk_16C->unk_30 = 8;
    temp_a0_22 = temp_a2->unk_16C;
    temp_a0_22->unk_10 = (s16) temp_a0_22->unk_30;
    temp_a2->unk_16C->unk_12 = 8;
    temp_a0_23 = temp_a2->unk_16C;
    temp_a0_23->unk_2 = (s16) temp_a0_23->unk_12;
    temp_a2->unk_16C->unk_32 = -8;
    temp_a0_24 = temp_a2->unk_16C;
    temp_a0_24->unk_22 = (s16) temp_a0_24->unk_32;
    temp_a2->unk_16C->unk_34 = 0;
    temp_a0_25 = temp_a2->unk_16C;
    temp_a1_10 = temp_a0_25->unk_34;
    temp_a0_25->unk_24 = temp_a1_10;
    temp_a2->unk_16C->unk_14 = temp_a1_10;
    temp_a2->unk_16C->texture.s = temp_a1_10;
    temp_a2->unk_16C->unk_36 = 0U;
    temp_a0_26 = temp_a2->unk_16C;
    temp_a1_11 = temp_a0_26->unk_36;
    temp_a0_26->unk_26 = temp_a1_11;
    temp_a2->unk_16C->unk_16 = temp_a1_11;
    temp_a2->unk_16C->texture.t = temp_a1_11;
    temp_a2->unk_16C->unk_28 = 0;
    temp_a0_27 = temp_a2->unk_16C;
    temp_a1_12 = temp_a0_27->unk_28;
    temp_a0_27->unk_1A = temp_a1_12;
    temp_a2->unk_16C->unk_A = temp_a1_12;
    temp_a2->unk_16C->unk_8 = temp_a1_12;
    temp_a2->unk_16C->unk_3A = 0x200;
    temp_a0_28 = temp_a2->unk_16C;
    temp_a1_13 = temp_a0_28->unk_3A;
    temp_a0_28->unk_38 = temp_a1_13;
    temp_a2->unk_16C->unk_2A = temp_a1_13;
    temp_a2->unk_16C->unk_18 = temp_a1_13;
    temp_a2->unk_16C->unk_3F = 0xFFU;
    temp_a0_29 = temp_a2->unk_16C;
    temp_v0_10 = temp_a0_29->unk_3F;
    temp_a0_29->unk_2F = temp_v0_10;
    temp_a2->unk_16C->unk_1F = temp_v0_10;
    temp_a2->unk_16C->unk_F = temp_v0_10;
    temp_a2->unk_16C->unk_3E = temp_v0_10;
    temp_a2->unk_16C->unk_2E = temp_v0_10;
    temp_a2->unk_16C->unk_1E = temp_v0_10;
    temp_a2->unk_16C->unk_E = temp_v0_10;
    temp_a2->unk_16C->unk_3D = temp_v0_10;
    temp_a2->unk_16C->unk_2D = temp_v0_10;
    temp_a2->unk_16C->unk_1D = temp_v0_10;
    temp_a2->unk_16C->unk_D = temp_v0_10;
    temp_a2->unk_16C->unk_3C = temp_v0_10;
    temp_a2->unk_16C->unk_2C = temp_v0_10;
    temp_a2->unk_16C->unk_1C = temp_v0_10;
    temp_a2->unk_16C->unk_C = temp_v0_10;
}

void func_8010E968(s32 arg0) {
    s32 sp1C;
    s32 temp_a0;
    s32 temp_a0_2;
    u32 temp_v1;
    u64 temp_ret;

    func_80175E68(D_801F5850, 0);
    temp_a0 = ~(D_801F5850->cur.button | 0xFFFF7FFF);
    temp_a0_2 = temp_a0 == 0;
    if ((temp_a0_2 != *D_801BFA84) && (temp_a0_2 != 0)) {
        sp1C = temp_a0_2;
        temp_ret = osGetTime();
        temp_v1 = (u32) temp_ret;
        gSaveContext.unk_3DC8 = temp_ret;
        gSaveContext.unk_3DCC = temp_v1;
        gSaveContext.unk_3DD0[0] = 0xF;
    }
    *D_801BFA84 = temp_a0 == 0;
}

void func_8010E9F0(s16 arg0, s16 arg1) {
    s32 sp4;
    s32 sp0;
    s32 temp_t0;
    s32 temp_t2;
    void *temp_v1;
    void *phi_v0;

    gSaveContext.timerX[arg0] = 0x73;
    gSaveContext.timerY[arg0] = 0x50;
    temp_t0 = arg1 * 0x64;
    D_801BF8E0 = 0;
    temp_v1 = &gSaveContext + (arg0 * 8);
    temp_t2 = temp_t0 >> 0x1F;
    sp0 = temp_t2;
    gSaveContext.unk_3DE0[arg0] = temp_t2;
    temp_v1->unk_3DE4 = temp_t0;
    sp4 = temp_t0;
    gSaveContext.unk_3E18[arg0] = temp_t2;
    temp_v1->unk_3E1C = temp_t0;
    if ((temp_t2 != 0) || (phi_v0 = &gSaveContext + arg0, (temp_t0 != 0))) {
        gSaveContext.unk_3DD7[arg0] = 0;
        phi_v0 = &gSaveContext + arg0;
    } else {
        gSaveContext.unk_3DD7[arg0] = 1;
    }
    phi_v0->unk_3DD0 = 1;
}

void func_8010EA9C(s16 arg0, s16 arg1) {
    s32 sp4;
    s32 sp0;
    s32 temp_t0;
    s32 temp_t8;

    gSaveContext.timerX[0] = 0x73;
    gSaveContext.timerY[0] = 0x50;
    temp_t8 = arg0 * 0x64;
    D_801BF8E4 = arg1;
    temp_t0 = temp_t8 >> 0x1F;
    gSaveContext.unk_3DE0 = temp_t0;
    gSaveContext.unk_3DE4 = temp_t8;
    sp0 = temp_t0;
    gSaveContext.unk_3E18 = temp_t0;
    gSaveContext.unk_3E1C = temp_t8;
    sp4 = temp_t8;
    if ((temp_t0 != 0) || (temp_t8 != 0)) {
        gSaveContext.unk_3DD7[0] = 0;
    } else {
        gSaveContext.unk_3DD7[0] = 1;
    }
    gSaveContext.unk_3DD0[0] = 0xD;
    gSaveContext.unk_3E8C = 0;
    gSaveContext.unk_3E88 = 0;
    gSaveContext.unk_3EC4 = 0;
    gSaveContext.unk_3EC0 = 0;
}

void func_8010EB50(s32 arg0) {
    if (gSaveContext.unk_3DD0[6] != 0) {
        if ((gSaveContext.eventInf[1] & 1) != 0) {
            gSaveContext.unk_3E14 = 0xEF;
            gSaveContext.unk_3E10 = 0;
            return;
        }
        gSaveContext.unk_3E10 = 0;
        gSaveContext.unk_3E14 = 1;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_8010EBA0(s16 arg0, s16 arg1) {
    void *sp24;
    s32 sp1C;
    s32 sp18;
    s32 temp_t0;
    s32 temp_t9;
    u32 temp_v1;
    u64 temp_ret;
    void *temp_a2;

    gSaveContext.unk_101A[arg1] = 1;
    temp_a2 = &gSaveContext + (arg1 * 8);
    temp_t9 = arg0 * 0x64;
    temp_t0 = temp_t9 >> 0x1F;
    sp18 = temp_t0;
    gSaveContext.unk_1080[arg1] = temp_t0;
    sp1C = temp_t9;
    temp_a2->unk_1084 = temp_t9;
    gSaveContext.unk_1050[arg1] = temp_t0;
    temp_a2->unk_1054 = temp_t9;
    sp24 = temp_a2;
    temp_ret = osGetTime();
    temp_v1 = (u32) temp_ret;
    gSaveContext.unk_1020[arg1] = temp_ret;
    temp_a2->unk_1024 = temp_v1;
    temp_a2->unk_10B4 = 0;
    gSaveContext.unk_10B0[arg1] = 0;
    D_801BF8F0 = 0;
    D_801BF8F0 = 0;
}

s32 func_8010EC54(s16 arg0) {
    u32 sp2C;
    s32 sp28;
    s16 sp22;
    s16 sp20;
    s16 sp1E;
    s16 sp1C;
    s16 temp_a0;
    s16 temp_t0;
    s16 temp_t1;
    s16 temp_t2;
    s16 temp_t3;
    s16 temp_t7;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t9;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_a1_3;
    u32 temp_a1_4;
    u32 temp_a1_5;

    temp_a1 = *(&gSaveContext + 0x3DE4 + (arg0 * 8));
    temp_a0_2 = gSaveContext.unk_3DE0[arg0];
    sp2C = temp_a1;
    sp28 = temp_a0_2;
    temp_t0 = (s16) (u32) __ull_div((u64) temp_a0_2, (u64) temp_a1, 0U, 0x8CA0U);
    temp_t6 = temp_t0 * 0x8CA0;
    temp_a1_2 = sp2C - temp_t6;
    temp_a0_3 = (sp28 - (temp_t6 >> 0x1F)) - (sp2C < (u32) temp_t6);
    sp28 = temp_a0_3;
    sp2C = temp_a1_2;
    sp1C = temp_t0;
    temp_t1 = (s16) (u32) __ull_div((u64) temp_a0_3, (u64) temp_a1_2, 0U, 0x1770U);
    temp_t8 = temp_t1 * 0x1770;
    temp_a1_3 = sp2C - temp_t8;
    temp_a0_4 = (sp28 - (temp_t8 >> 0x1F)) - (sp2C < (u32) temp_t8);
    sp28 = temp_a0_4;
    sp2C = temp_a1_3;
    sp1E = temp_t1;
    temp_t2 = (s16) (u32) __ull_div((u64) temp_a0_4, (u64) temp_a1_3, 0U, 0x3E8U);
    temp_t6_2 = temp_t2 * 0x3E8;
    temp_a1_4 = sp2C - temp_t6_2;
    temp_a0_5 = (sp28 - (temp_t6_2 >> 0x1F)) - (sp2C < (u32) temp_t6_2);
    sp28 = temp_a0_5;
    sp2C = temp_a1_4;
    sp20 = temp_t2;
    temp_t3 = (s16) (u32) __ull_div((u64) temp_a0_5, (u64) temp_a1_4, 0U, 0x64U);
    temp_t8_2 = temp_t3 * 0x64;
    temp_a1_5 = sp2C - temp_t8_2;
    temp_a0_6 = (sp28 - (temp_t8_2 >> 0x1F)) - (sp2C < (u32) temp_t8_2);
    sp28 = temp_a0_6;
    sp2C = temp_a1_5;
    sp22 = temp_t3;
    temp_a0 = (s16) (u32) __ull_div((u64) temp_a0_6, (u64) temp_a1_5, 0U, 0xAU);
    temp_t6_3 = temp_a0 * 0xA;
    temp_t7 = sp2C - temp_t6_3;
    sp28 = (sp28 - (temp_t6_3 >> 0x1F)) - (sp2C < (u32) temp_t6_3);
    temp_t9 = temp_t7 | (temp_t0 << 0x14) | (temp_t1 << 0x10);
    sp2C = (u32) temp_t7;
    return temp_t9 | (temp_t2 << 0xC) | (temp_t3 << 8) | (temp_a0 * 0x10);
}

void func_8010EE74(GlobalContext *arg0, s32 arg1) {
    s16 sp1A;
    s16 temp_a3;
    s16 temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    s16 phi_a3;
    s16 phi_a3_2;

    temp_v0 = arg1 - 1;
    phi_a3 = temp_v0;
    if (((s32) temp_v0 < 0) || ((s32) temp_v0 >= 3)) {
        phi_a3 = 0;
    }
    sp1A = 0;
    DmaMgr_SendRequest0(arg0->interfaceCtx.doActionSegment + 0x780, (u32) ((phi_a3 * 0x510) + _week_staticSegmentRomStart), 0x510U);
    phi_a3_2 = sp1A;
    do {
        temp_v0_2 = &gSaveContext + (phi_a3_2 * 0x1C);
        temp_a3 = phi_a3_2 + 1;
        temp_v1 = &gSaveContext + (phi_a3_2 * 0x14);
        temp_v0_2->unk_F8 = (s32) temp_v1->unk_3F68;
        temp_v0_2->unk_FC = (s32) temp_v1->unk_3F6C;
        temp_v0_2->unk_100 = (s32) temp_v1->unk_3F70;
        temp_v0_2->unk_104 = (s32) temp_v1->unk_3F74;
        temp_v0_2->unk_108 = (s32) temp_v1->unk_3F78;
        phi_a3_2 = temp_a3;
    } while ((s32) temp_a3 < 0x78);
}

void Interface_ChangeAlpha(u16 param_1) {
    u16 temp_a0;

    temp_a0 = param_1 & 0xFFFF;
    if (temp_a0 != gSaveContext.unk_3F22) {
        gSaveContext.unk_3F22 = temp_a0;
        gSaveContext.unk_3F20 = temp_a0;
        gSaveContext.unk_3F24 = 1;
    }
}

void func_8010EF9C(s16 arg0, s16 arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg0 + 0x169E8;
    phi_v0 = temp_v0;
    if ((gSaveContext.buttonStatus[0] == 0xFF) || (gSaveContext.unk_1015 == 0xFF)) {
        if (temp_v0->unk_268 != 0x46) {
            temp_v0->unk_268 = 0x46;
        }
    } else {
        temp_v0_2 = arg0 + 0x169E8;
        phi_v0 = temp_v0_2;
        if (temp_v0_2->unk_268 != 0xFF) {
            temp_v0_2->unk_268 = arg1;
        }
    }
    if (gSaveContext.buttonStatus[1] == 0xFF) {
        if (phi_v0->unk_26A != 0x46) {
            phi_v0->unk_26A = 0x46;
        }
    } else if (phi_v0->unk_26A != 0xFF) {
        phi_v0->unk_26A = arg1;
    }
    if (gSaveContext.buttonStatus[2] == 0xFF) {
        if (phi_v0->unk_26C != 0x46) {
            phi_v0->unk_26C = 0x46;
        }
    } else if (phi_v0->unk_26C != 0xFF) {
        phi_v0->unk_26C = arg1;
    }
    if (gSaveContext.buttonStatus[3] == 0xFF) {
        if (phi_v0->unk_26E != 0x46) {
            phi_v0->unk_26E = 0x46;
        }
    } else if (phi_v0->unk_26E != 0xFF) {
        phi_v0->unk_26E = arg1;
    }
    if (gSaveContext.buttonStatus[4] == 0xFF) {
        if (phi_v0->unk_266 != 0x46) {
            phi_v0->unk_266 = 0x46;
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    }
    if (phi_v0->unk_266 != 0xFF) {
        phi_v0->unk_266 = arg1;
    }
}

void func_8010F0D4(s16 arg0, s16 arg1, s16 arg2) {
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    void *temp_v0;

    temp_v0 = arg0 + 0x169E8;
    if (gSaveContext.unk_3F1E != 0) {
        func_8010EF9C(arg2, arg2);
        return;
    }
    temp_v1 = temp_v0->unk_268;
    if ((temp_v1 != 0) && ((s32) arg1 < (s32) temp_v1)) {
        temp_v0->unk_268 = arg1;
    }
    temp_v1_2 = temp_v0->unk_266;
    if ((temp_v1_2 != 0) && ((s32) arg1 < (s32) temp_v1_2)) {
        temp_v0->unk_266 = arg1;
    }
    temp_v1_3 = temp_v0->unk_26A;
    if ((temp_v1_3 != 0) && ((s32) arg1 < (s32) temp_v1_3)) {
        temp_v0->unk_26A = arg1;
    }
    temp_v1_4 = temp_v0->unk_26C;
    if ((temp_v1_4 != 0) && ((s32) arg1 < (s32) temp_v1_4)) {
        temp_v0->unk_26C = arg1;
    }
    temp_v1_5 = temp_v0->unk_26E;
    if ((temp_v1_5 != 0) && ((s32) arg1 < (s32) temp_v1_5)) {
        temp_v0->unk_26E = arg1;
    }
}

void func_8010F1A8(GlobalContext *arg0, s16 arg1) {
    s16 sp22;
    void *sp1C;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_15;
    s16 temp_v0_16;
    s16 temp_v0_17;
    s16 temp_v0_18;
    s16 temp_v0_19;
    s16 temp_v0_20;
    s16 temp_v0_21;
    s16 temp_v0_22;
    s16 temp_v0_23;
    s16 temp_v0_24;
    s16 temp_v0_25;
    s16 temp_v0_26;
    s16 temp_v0_27;
    s16 temp_v0_28;
    s16 temp_v0_29;
    s16 temp_v0_2;
    s16 temp_v0_30;
    s16 temp_v0_31;
    s16 temp_v0_32;
    s16 temp_v0_33;
    s16 temp_v0_34;
    s16 temp_v0_35;
    s16 temp_v0_36;
    s16 temp_v0_37;
    s16 temp_v0_38;
    s16 temp_v0_39;
    s16 temp_v0_3;
    s16 temp_v0_40;
    s16 temp_v0_41;
    s16 temp_v0_42;
    s16 temp_v0_43;
    s16 temp_v0_44;
    s16 temp_v0_45;
    s16 temp_v0_46;
    s16 temp_v0_47;
    s16 temp_v0_48;
    s16 temp_v0_49;
    s16 temp_v0_4;
    s16 temp_v0_50;
    s16 temp_v0_51;
    s16 temp_v0_52;
    s16 temp_v0_53;
    s16 temp_v0_54;
    s16 temp_v0_55;
    s16 temp_v0_56;
    s16 temp_v0_57;
    s16 temp_v0_58;
    s16 temp_v0_59;
    s16 temp_v0_5;
    s16 temp_v0_60;
    s16 temp_v0_61;
    s16 temp_v0_62;
    s16 temp_v0_63;
    s16 temp_v0_64;
    s16 temp_v0_65;
    s16 temp_v0_66;
    s16 temp_v0_67;
    s16 temp_v0_68;
    s16 temp_v0_69;
    s16 temp_v0_6;
    s16 temp_v0_70;
    s16 temp_v0_71;
    s16 temp_v0_72;
    s16 temp_v0_73;
    s16 temp_v0_74;
    s16 temp_v0_75;
    s16 temp_v0_76;
    s16 temp_v0_77;
    s16 temp_v0_78;
    s16 temp_v0_79;
    s16 temp_v0_7;
    s16 temp_v0_80;
    s16 temp_v0_81;
    s16 temp_v0_82;
    s16 temp_v0_83;
    s16 temp_v0_84;
    s16 temp_v0_85;
    s16 temp_v0_86;
    s16 temp_v0_8;
    s16 temp_v0_9;
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_16;
    void *temp_v1_17;
    void *temp_v1_18;
    void *temp_v1_19;
    void *temp_v1_20;
    void *temp_v1_21;
    void *temp_v1_22;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;
    void *phi_v1;
    void *phi_v1_2;
    GlobalContext *phi_a0;
    s16 phi_t0;

    temp_a1 = arg1;
    temp_v0 = gSaveContext.unk_3F20;
    temp_a3 = 0xFF - temp_a1;
    phi_a0 = arg0;
    phi_t0 = 0xFF;
    switch (temp_v0) {
    case 1:
    case 2:
    case 8:
        if (temp_v0 == 8) {
            temp_v1 = arg0 + 0x169E8;
            phi_v1 = temp_v1;
            if (temp_v1->unk_268 != 0xFF) {
                temp_v1->unk_268 = temp_a3;
            }
        } else {
            temp_v1_2 = arg0 + 0x169E8;
            temp_v0_2 = temp_v1_2->unk_268;
            phi_v1 = temp_v1_2;
            if ((temp_v0_2 != 0) && ((s32) temp_a1 < (s32) temp_v0_2)) {
                temp_v1_2->unk_268 = temp_a1;
            }
        }
        temp_v0_3 = phi_v1->unk_266;
        if ((temp_v0_3 != 0) && ((s32) temp_a1 < (s32) temp_v0_3)) {
            phi_v1->unk_266 = temp_a1;
        }
        temp_v0_4 = phi_v1->unk_26A;
        if ((temp_v0_4 != 0) && ((s32) temp_a1 < (s32) temp_v0_4)) {
            phi_v1->unk_26A = temp_a1;
        }
        temp_v0_5 = phi_v1->unk_26C;
        if ((temp_v0_5 != 0) && ((s32) temp_a1 < (s32) temp_v0_5)) {
            phi_v1->unk_26C = temp_a1;
        }
        temp_v0_6 = phi_v1->unk_26E;
        if ((temp_v0_6 != 0) && ((s32) temp_a1 < (s32) temp_v0_6)) {
            phi_v1->unk_26E = temp_a1;
        }
        temp_v0_7 = phi_v1->unk_270;
        if ((temp_v0_7 != 0) && ((s32) temp_a1 < (s32) temp_v0_7)) {
            phi_v1->unk_270 = temp_a1;
        }
        temp_v0_8 = phi_v1->unk_272;
        if ((temp_v0_8 != 0) && ((s32) temp_a1 < (s32) temp_v0_8)) {
            phi_v1->unk_272 = temp_a1;
        }
        temp_v0_9 = phi_v1->unk_274;
        if ((temp_v0_9 != 0) && ((s32) temp_a1 < (s32) temp_v0_9)) {
            phi_v1->unk_274 = temp_a1;
        }
        break;
    case 3:
        temp_v1_3 = arg0 + 0x169E8;
        temp_v0_10 = temp_v1_3->unk_266;
        temp_a2 = temp_a3;
        if ((temp_v0_10 != 0) && ((s32) temp_a1 < (s32) temp_v0_10)) {
            temp_v1_3->unk_266 = temp_a1;
        }
        sp1C = temp_v1_3;
        arg1 = temp_a1;
        sp22 = temp_a3;
        func_8010F0D4(temp_a1, temp_a2, temp_a3);
        temp_v0_11 = temp_v1_3->unk_272;
        phi_v1_2 = temp_v1_3;
        phi_a0 = arg0;
        if ((temp_v0_11 != 0) && ((s32) arg1 < (s32) temp_v0_11)) {
            temp_v1_3->unk_272 = arg1;
        }
        temp_v0_12 = temp_v1_3->unk_274;
        if ((temp_v0_12 != 0) && ((s32) arg1 < (s32) temp_v0_12)) {
            temp_v1_3->unk_274 = arg1;
        }
        if (temp_v1_3->unk_270 != 0xFF) {
block_377:
            phi_v1_2->unk_270 = temp_a3;
            phi_a0 = arg0;
            phi_t0 = 0xFF;
        }
        break;
    case 4:
        temp_v1_4 = arg0 + 0x169E8;
        temp_v0_13 = temp_v1_4->unk_268;
        if ((temp_v0_13 != 0) && ((s32) temp_a1 < (s32) temp_v0_13)) {
            temp_v1_4->unk_268 = temp_a1;
        }
        temp_v0_14 = temp_v1_4->unk_266;
        if ((temp_v0_14 != 0) && ((s32) temp_a1 < (s32) temp_v0_14)) {
            temp_v1_4->unk_266 = temp_a1;
        }
        temp_v0_15 = temp_v1_4->unk_26A;
        if ((temp_v0_15 != 0) && ((s32) temp_a1 < (s32) temp_v0_15)) {
            temp_v1_4->unk_26A = temp_a1;
        }
        temp_v0_16 = temp_v1_4->unk_26C;
        if ((temp_v0_16 != 0) && ((s32) temp_a1 < (s32) temp_v0_16)) {
            temp_v1_4->unk_26C = temp_a1;
        }
        temp_v0_17 = temp_v1_4->unk_26E;
        if ((temp_v0_17 != 0) && ((s32) temp_a1 < (s32) temp_v0_17)) {
            temp_v1_4->unk_26E = temp_a1;
        }
        temp_v0_18 = temp_v1_4->unk_270;
        if ((temp_v0_18 != 0) && ((s32) temp_a1 < (s32) temp_v0_18)) {
            temp_v1_4->unk_270 = temp_a1;
        }
        temp_v0_19 = temp_v1_4->unk_272;
        if ((temp_v0_19 != 0) && ((s32) temp_a1 < (s32) temp_v0_19)) {
            temp_v1_4->unk_272 = temp_a1;
        }
        temp_v0_20 = temp_v1_4->unk_274;
        if ((temp_v0_20 != 0) && ((s32) temp_a1 < (s32) temp_v0_20)) {
            temp_v1_4->unk_274 = temp_a1;
        }
        if (temp_v1_4->unk_266 != 0xFF) {
            temp_v1_4->unk_266 = temp_a3;
        }
        break;
    case 5:
        arg1 = temp_a1;
        sp22 = temp_a3;
        func_8010F0D4(temp_a1, temp_a3, temp_a3);
        temp_v1_5 = arg0 + 0x169E8;
        temp_v0_21 = temp_v1_5->unk_274;
        phi_a0 = arg0;
        if ((temp_v0_21 != 0) && ((s32) arg1 < (s32) temp_v0_21)) {
            temp_v1_5->unk_274 = arg1;
        }
        if (temp_v1_5->unk_266 != 0xFF) {
            temp_v1_5->unk_266 = temp_a3;
        }
        if (temp_v1_5->unk_270 != 0xFF) {
            temp_v1_5->unk_270 = temp_a3;
        }
        if (temp_v1_5->unk_272 != 0xFF) {
            temp_v1_5->unk_272 = temp_a3;
        }
        break;
    case 6:
        sp22 = temp_a3;
        func_8010F0D4(temp_a1, temp_a3, temp_a3);
        temp_v1_6 = arg0 + 0x169E8;
        phi_a0 = arg0;
        if (temp_v1_6->unk_266 != 0xFF) {
            temp_v1_6->unk_266 = temp_a3;
        }
        if (temp_v1_6->unk_270 != 0xFF) {
            temp_v1_6->unk_270 = temp_a3;
        }
        if (temp_v1_6->unk_272 != 0xFF) {
            temp_v1_6->unk_272 = temp_a3;
        }
        if (arg0->sceneNum == 8) {
            if ((s32) temp_v1_6->unk_274 < 0xAA) {
                temp_v1_6->unk_274 = temp_a3;
            } else {
                temp_v1_6->unk_274 = 0xAA;
            }
        } else if (temp_v1_6->unk_274 != 0xFF) {
            temp_v1_6->unk_274 = temp_a3;
        }
        break;
    case 7:
        temp_v1_7 = arg0 + 0x169E8;
        temp_v0_22 = temp_v1_7->unk_274;
        if ((temp_v0_22 != 0) && ((s32) temp_a1 < (s32) temp_v0_22)) {
            temp_v1_7->unk_274 = temp_a1;
        }
        sp1C = temp_v1_7;
        sp22 = temp_a3;
        func_8010EF9C(temp_a3, (s16) &gSaveContext, temp_a3);
        phi_a0 = arg0;
        if (temp_v1_7->unk_270 != 0xFF) {
            temp_v1_7->unk_270 = temp_a3;
        }
        if (temp_v1_7->unk_272 != 0xFF) {
            temp_v1_7->unk_272 = temp_a3;
        }
        break;
    case 9:
        temp_v1_8 = arg0 + 0x169E8;
        temp_v0_23 = temp_v1_8->unk_268;
        phi_v1_2 = temp_v1_8;
        if ((temp_v0_23 != 0) && ((s32) temp_a1 < (s32) temp_v0_23)) {
            temp_v1_8->unk_268 = temp_a1;
        }
        temp_v0_24 = temp_v1_8->unk_266;
        if ((temp_v0_24 != 0) && ((s32) temp_a1 < (s32) temp_v0_24)) {
            temp_v1_8->unk_266 = temp_a1;
        }
        temp_v0_25 = temp_v1_8->unk_26A;
        if ((temp_v0_25 != 0) && ((s32) temp_a1 < (s32) temp_v0_25)) {
            temp_v1_8->unk_26A = temp_a1;
        }
        temp_v0_26 = temp_v1_8->unk_26C;
        if ((temp_v0_26 != 0) && ((s32) temp_a1 < (s32) temp_v0_26)) {
            temp_v1_8->unk_26C = temp_a1;
        }
        temp_v0_27 = temp_v1_8->unk_26E;
        if ((temp_v0_27 != 0) && ((s32) temp_a1 < (s32) temp_v0_27)) {
            temp_v1_8->unk_26E = temp_a1;
        }
        temp_v0_28 = temp_v1_8->unk_274;
        if ((temp_v0_28 != 0) && ((s32) temp_a1 < (s32) temp_v0_28)) {
            temp_v1_8->unk_274 = temp_a1;
        }
        if (temp_v1_8->unk_272 != 0xFF) {
            temp_v1_8->unk_272 = temp_a3;
        }
        if (temp_v1_8->unk_270 != 0xFF) {
            goto block_377;
        }
        break;
    case 10:
        temp_v1_9 = arg0 + 0x169E8;
        temp_v0_29 = temp_v1_9->unk_266;
        if ((temp_v0_29 != 0) && ((s32) temp_a1 < (s32) temp_v0_29)) {
            temp_v1_9->unk_266 = temp_a1;
        }
        temp_v0_30 = temp_v1_9->unk_26A;
        if ((temp_v0_30 != 0) && ((s32) temp_a1 < (s32) temp_v0_30)) {
            temp_v1_9->unk_26A = temp_a1;
        }
        temp_v0_31 = temp_v1_9->unk_26C;
        if ((temp_v0_31 != 0) && ((s32) temp_a1 < (s32) temp_v0_31)) {
            temp_v1_9->unk_26C = temp_a1;
        }
        temp_v0_32 = temp_v1_9->unk_26E;
        if ((temp_v0_32 != 0) && ((s32) temp_a1 < (s32) temp_v0_32)) {
            temp_v1_9->unk_26E = temp_a1;
        }
        temp_v0_33 = temp_v1_9->unk_270;
        if ((temp_v0_33 != 0) && ((s32) temp_a1 < (s32) temp_v0_33)) {
            temp_v1_9->unk_270 = temp_a1;
        }
        temp_v0_34 = temp_v1_9->unk_272;
        if ((temp_v0_34 != 0) && ((s32) temp_a1 < (s32) temp_v0_34)) {
            temp_v1_9->unk_272 = temp_a1;
        }
        temp_v0_35 = temp_v1_9->unk_274;
        if ((temp_v0_35 != 0) && ((s32) temp_a1 < (s32) temp_v0_35)) {
            temp_v1_9->unk_274 = temp_a1;
        }
        if (temp_v1_9->unk_268 != 0xFF) {
            temp_v1_9->unk_268 = temp_a3;
        }
        break;
    case 11:
        temp_v1_10 = arg0 + 0x169E8;
        temp_v0_36 = temp_v1_10->unk_268;
        phi_v1_2 = temp_v1_10;
        if ((temp_v0_36 != 0) && ((s32) temp_a1 < (s32) temp_v0_36)) {
            temp_v1_10->unk_268 = temp_a1;
        }
        temp_v0_37 = temp_v1_10->unk_266;
        if ((temp_v0_37 != 0) && ((s32) temp_a1 < (s32) temp_v0_37)) {
            temp_v1_10->unk_266 = temp_a1;
        }
        temp_v0_38 = temp_v1_10->unk_26A;
        if ((temp_v0_38 != 0) && ((s32) temp_a1 < (s32) temp_v0_38)) {
            temp_v1_10->unk_26A = temp_a1;
        }
        temp_v0_39 = temp_v1_10->unk_26C;
        if ((temp_v0_39 != 0) && ((s32) temp_a1 < (s32) temp_v0_39)) {
            temp_v1_10->unk_26C = temp_a1;
        }
        temp_v0_40 = temp_v1_10->unk_26E;
        if ((temp_v0_40 != 0) && ((s32) temp_a1 < (s32) temp_v0_40)) {
            temp_v1_10->unk_26E = temp_a1;
        }
        temp_v0_41 = temp_v1_10->unk_274;
        if ((temp_v0_41 != 0) && ((s32) temp_a1 < (s32) temp_v0_41)) {
            temp_v1_10->unk_274 = temp_a1;
        }
        temp_v0_42 = temp_v1_10->unk_272;
        if ((temp_v0_42 != 0) && ((s32) temp_a1 < (s32) temp_v0_42)) {
            temp_v1_10->unk_272 = temp_a1;
        }
        if (temp_v1_10->unk_270 != 0xFF) {
            goto block_377;
        }
        break;
    case 12:
        temp_v1_11 = arg0 + 0x169E8;
        if (temp_v1_11->unk_266 != 0xFF) {
            temp_v1_11->unk_266 = temp_a3;
        }
        if ((gSaveContext.buttonStatus[0] == 0xFF) || (gSaveContext.unk_1015 == 0xFF)) {
            if (temp_v1_11->unk_268 != 0x46) {
                temp_v1_11->unk_268 = 0x46;
            }
        } else if (temp_v1_11->unk_268 != 0xFF) {
            temp_v1_11->unk_268 = temp_a3;
        }
        if (temp_v1_11->unk_274 != 0xFF) {
            temp_v1_11->unk_274 = temp_a3;
        }
        temp_v0_43 = temp_v1_11->unk_26A;
        if ((temp_v0_43 != 0) && ((s32) temp_a1 < (s32) temp_v0_43)) {
            temp_v1_11->unk_26A = temp_a1;
        }
        temp_v0_44 = temp_v1_11->unk_26C;
        if ((temp_v0_44 != 0) && ((s32) temp_a1 < (s32) temp_v0_44)) {
            temp_v1_11->unk_26C = temp_a1;
        }
        temp_v0_45 = temp_v1_11->unk_26E;
        if ((temp_v0_45 != 0) && ((s32) temp_a1 < (s32) temp_v0_45)) {
            temp_v1_11->unk_26E = temp_a1;
        }
        temp_v0_46 = temp_v1_11->unk_272;
        if ((temp_v0_46 != 0) && ((s32) temp_a1 < (s32) temp_v0_46)) {
            temp_v1_11->unk_272 = temp_a1;
        }
        temp_v0_47 = temp_v1_11->unk_270;
        if ((temp_v0_47 != 0) && ((s32) temp_a1 < (s32) temp_v0_47)) {
            temp_v1_11->unk_270 = temp_a1;
        }
        break;
    case 13:
        arg1 = temp_a1;
        sp22 = temp_a3;
        func_8010F0D4(temp_a1, temp_a3, temp_a3);
        temp_v1_12 = arg0 + 0x169E8;
        temp_v0_48 = temp_v1_12->unk_274;
        phi_v1_2 = temp_v1_12;
        phi_a0 = arg0;
        if ((temp_v0_48 != 0) && ((s32) arg1 < (s32) temp_v0_48)) {
            temp_v1_12->unk_274 = arg1;
        }
        temp_v0_49 = temp_v1_12->unk_266;
        if ((temp_v0_49 != 0) && ((s32) arg1 < (s32) temp_v0_49)) {
            temp_v1_12->unk_266 = arg1;
        }
        if (temp_v1_12->unk_272 != 0xFF) {
            temp_v1_12->unk_272 = temp_a3;
        }
        if (temp_v1_12->unk_270 != 0xFF) {
            goto block_377;
        }
        break;
    case 14:
        temp_v1_13 = arg0 + 0x169E8;
        temp_v0_50 = temp_v1_13->unk_268;
        phi_v1_2 = temp_v1_13;
        if ((temp_v0_50 != 0) && ((s32) temp_a1 < (s32) temp_v0_50)) {
            temp_v1_13->unk_268 = temp_a1;
        }
        temp_v0_51 = temp_v1_13->unk_266;
        if ((temp_v0_51 != 0) && ((s32) temp_a1 < (s32) temp_v0_51)) {
            temp_v1_13->unk_266 = temp_a1;
        }
        temp_v0_52 = temp_v1_13->unk_274;
        if ((temp_v0_52 != 0) && ((s32) temp_a1 < (s32) temp_v0_52)) {
            temp_v1_13->unk_274 = temp_a1;
        }
        if (temp_v1_13->unk_26A != 0xFF) {
            temp_v1_13->unk_26A = temp_a3;
        }
        if (temp_v1_13->unk_26C != 0xFF) {
            temp_v1_13->unk_26C = temp_a3;
        }
        if (temp_v1_13->unk_26E != 0xFF) {
            temp_v1_13->unk_26E = temp_a3;
        }
        if (temp_v1_13->unk_272 != 0xFF) {
            temp_v1_13->unk_272 = temp_a3;
        }
        if (temp_v1_13->unk_270 != 0xFF) {
            goto block_377;
        }
        break;
    case 15:
        temp_v1_14 = arg0 + 0x169E8;
        temp_v0_53 = temp_v1_14->unk_274;
        phi_v1_2 = temp_v1_14;
        if ((temp_v0_53 != 0) && ((s32) temp_a1 < (s32) temp_v0_53)) {
            temp_v1_14->unk_274 = temp_a1;
        }
        if (temp_v1_14->unk_268 != 0xFF) {
            temp_v1_14->unk_268 = temp_a3;
        }
        if (temp_v1_14->unk_266 != 0xFF) {
            temp_v1_14->unk_266 = temp_a3;
        }
        if (temp_v1_14->unk_26A != 0xFF) {
            temp_v1_14->unk_26A = temp_a3;
        }
        if (temp_v1_14->unk_26C != 0xFF) {
            temp_v1_14->unk_26C = temp_a3;
        }
        if (temp_v1_14->unk_26E != 0xFF) {
            temp_v1_14->unk_26E = temp_a3;
        }
        if (temp_v1_14->unk_272 != 0xFF) {
            temp_v1_14->unk_272 = temp_a3;
        }
        if (temp_v1_14->unk_270 != 0xFF) {
            goto block_377;
        }
        break;
    case 16:
        temp_v1_15 = arg0 + 0x169E8;
        temp_v0_54 = temp_v1_15->unk_274;
        if ((temp_v0_54 != 0) && ((s32) temp_a1 < (s32) temp_v0_54)) {
            temp_v1_15->unk_274 = temp_a1;
        }
        temp_v0_55 = temp_v1_15->unk_272;
        if ((temp_v0_55 != 0) && ((s32) temp_a1 < (s32) temp_v0_55)) {
            temp_v1_15->unk_272 = temp_a1;
        }
        temp_v0_56 = temp_v1_15->unk_270;
        if ((temp_v0_56 != 0) && ((s32) temp_a1 < (s32) temp_v0_56)) {
            temp_v1_15->unk_270 = temp_a1;
        }
        if (temp_v1_15->unk_268 != 0xFF) {
            temp_v1_15->unk_268 = temp_a3;
        }
        if (temp_v1_15->unk_266 != 0xFF) {
            temp_v1_15->unk_266 = temp_a3;
        }
        if (temp_v1_15->unk_26A != 0xFF) {
            temp_v1_15->unk_26A = temp_a3;
        }
        if (temp_v1_15->unk_26C != 0xFF) {
            temp_v1_15->unk_26C = temp_a3;
        }
        if (temp_v1_15->unk_26E != 0xFF) {
            temp_v1_15->unk_26E = temp_a3;
        }
        break;
    case 17:
        temp_v1_16 = arg0 + 0x169E8;
        temp_v0_57 = temp_v1_16->unk_266;
        if ((temp_v0_57 != 0) && ((s32) temp_a1 < (s32) temp_v0_57)) {
            temp_v1_16->unk_266 = temp_a1;
        }
        temp_v0_58 = temp_v1_16->unk_26A;
        if ((temp_v0_58 != 0) && ((s32) temp_a1 < (s32) temp_v0_58)) {
            temp_v1_16->unk_26A = temp_a1;
        }
        temp_v0_59 = temp_v1_16->unk_26C;
        if ((temp_v0_59 != 0) && ((s32) temp_a1 < (s32) temp_v0_59)) {
            temp_v1_16->unk_26C = temp_a1;
        }
        temp_v0_60 = temp_v1_16->unk_26E;
        if ((temp_v0_60 != 0) && ((s32) temp_a1 < (s32) temp_v0_60)) {
            temp_v1_16->unk_26E = temp_a1;
        }
        temp_v0_61 = temp_v1_16->unk_272;
        if ((temp_v0_61 != 0) && ((s32) temp_a1 < (s32) temp_v0_61)) {
            temp_v1_16->unk_272 = temp_a1;
        }
        temp_v0_62 = temp_v1_16->unk_270;
        if ((temp_v0_62 != 0) && ((s32) temp_a1 < (s32) temp_v0_62)) {
            temp_v1_16->unk_270 = temp_a1;
        }
        if (temp_v1_16->unk_268 != 0xFF) {
            temp_v1_16->unk_268 = temp_a3;
        }
        if (temp_v1_16->unk_274 != 0xFF) {
            temp_v1_16->unk_274 = temp_a3;
        }
        break;
    case 18:
        temp_v1_17 = arg0 + 0x169E8;
        temp_v0_63 = temp_v1_17->unk_268;
        if ((temp_v0_63 != 0) && ((s32) temp_a1 < (s32) temp_v0_63)) {
            temp_v1_17->unk_268 = temp_a1;
        }
        temp_v0_64 = temp_v1_17->unk_266;
        if ((temp_v0_64 != 0) && ((s32) temp_a1 < (s32) temp_v0_64)) {
            temp_v1_17->unk_266 = temp_a1;
        }
        temp_v0_65 = temp_v1_17->unk_26A;
        if ((temp_v0_65 != 0) && ((s32) temp_a1 < (s32) temp_v0_65)) {
            temp_v1_17->unk_26A = temp_a1;
        }
        temp_v0_66 = temp_v1_17->unk_26C;
        if ((temp_v0_66 != 0) && ((s32) temp_a1 < (s32) temp_v0_66)) {
            temp_v1_17->unk_26C = temp_a1;
        }
        temp_v0_67 = temp_v1_17->unk_26E;
        if ((temp_v0_67 != 0) && ((s32) temp_a1 < (s32) temp_v0_67)) {
            temp_v1_17->unk_26E = temp_a1;
        }
        if (temp_v1_17->unk_270 != 0xFF) {
            temp_v1_17->unk_270 = temp_a3;
        }
        if (temp_v1_17->unk_272 != 0xFF) {
            temp_v1_17->unk_272 = temp_a3;
        }
        if (temp_v1_17->unk_274 != 0xFF) {
            temp_v1_17->unk_274 = temp_a3;
        }
        break;
    case 19:
        temp_v1_18 = arg0 + 0x169E8;
        temp_v0_68 = temp_v1_18->unk_268;
        phi_v1_2 = temp_v1_18;
        if ((temp_v0_68 != 0) && ((s32) temp_a1 < (s32) temp_v0_68)) {
            temp_v1_18->unk_268 = temp_a1;
        }
        temp_v0_69 = temp_v1_18->unk_26A;
        if ((temp_v0_69 != 0) && ((s32) temp_a1 < (s32) temp_v0_69)) {
            temp_v1_18->unk_26A = temp_a1;
        }
        temp_v0_70 = temp_v1_18->unk_26C;
        if ((temp_v0_70 != 0) && ((s32) temp_a1 < (s32) temp_v0_70)) {
            temp_v1_18->unk_26C = temp_a1;
        }
        temp_v0_71 = temp_v1_18->unk_26E;
        if ((temp_v0_71 != 0) && ((s32) temp_a1 < (s32) temp_v0_71)) {
            temp_v1_18->unk_26E = temp_a1;
        }
        if (temp_v1_18->unk_266 != 0xFF) {
            temp_v1_18->unk_266 = temp_a3;
        }
        if (temp_v1_18->unk_274 != 0xFF) {
            temp_v1_18->unk_274 = temp_a3;
        }
        if (temp_v1_18->unk_272 != 0xFF) {
            temp_v1_18->unk_272 = temp_a3;
        }
        if (temp_v1_18->unk_270 != 0xFF) {
            goto block_377;
        }
        break;
    case 20:
        temp_v1_19 = arg0 + 0x169E8;
        temp_v0_72 = temp_v1_19->unk_266;
        if ((temp_v0_72 != 0) && ((s32) temp_a1 < (s32) temp_v0_72)) {
            temp_v1_19->unk_266 = temp_a1;
        }
        temp_v0_73 = temp_v1_19->unk_26A;
        if ((temp_v0_73 != 0) && ((s32) temp_a1 < (s32) temp_v0_73)) {
            temp_v1_19->unk_26A = temp_a1;
        }
        temp_v0_74 = temp_v1_19->unk_26C;
        if ((temp_v0_74 != 0) && ((s32) temp_a1 < (s32) temp_v0_74)) {
            temp_v1_19->unk_26C = temp_a1;
        }
        temp_v0_75 = temp_v1_19->unk_26E;
        if ((temp_v0_75 != 0) && ((s32) temp_a1 < (s32) temp_v0_75)) {
            temp_v1_19->unk_26E = temp_a1;
        }
        temp_v0_76 = temp_v1_19->unk_274;
        if ((temp_v0_76 != 0) && ((s32) temp_a1 < (s32) temp_v0_76)) {
            temp_v1_19->unk_274 = temp_a1;
        }
        temp_v0_77 = temp_v1_19->unk_270;
        if ((temp_v0_77 != 0) && ((s32) temp_a1 < (s32) temp_v0_77)) {
            temp_v1_19->unk_270 = temp_a1;
        }
        if (temp_v1_19->unk_268 != 0xFF) {
            temp_v1_19->unk_268 = temp_a3;
        }
        if (temp_v1_19->unk_272 != 0xFF) {
            temp_v1_19->unk_272 = temp_a3;
        }
        break;
    case 21:
        temp_v1_20 = arg0 + 0x169E8;
        if (temp_v1_20->unk_266 != 0xFF) {
            temp_v1_20->unk_266 = temp_a3;
        }
        if (temp_v1_20->unk_268 != 0xFF) {
            temp_v1_20->unk_268 = temp_a3;
        }
        temp_v0_78 = temp_v1_20->unk_26A;
        if ((temp_v0_78 != 0) && ((s32) temp_a1 < (s32) temp_v0_78)) {
            temp_v1_20->unk_26A = temp_a1;
        }
        temp_v0_79 = temp_v1_20->unk_26C;
        if ((temp_v0_79 != 0) && ((s32) temp_a1 < (s32) temp_v0_79)) {
            temp_v1_20->unk_26C = temp_a1;
        }
        temp_v0_80 = temp_v1_20->unk_26E;
        if ((temp_v0_80 != 0) && ((s32) temp_a1 < (s32) temp_v0_80)) {
            temp_v1_20->unk_26E = temp_a1;
        }
        temp_v0_81 = temp_v1_20->unk_274;
        if ((temp_v0_81 != 0) && ((s32) temp_a1 < (s32) temp_v0_81)) {
            temp_v1_20->unk_274 = temp_a1;
        }
        temp_v0_82 = temp_v1_20->unk_272;
        if ((temp_v0_82 != 0) && ((s32) temp_a1 < (s32) temp_v0_82)) {
            temp_v1_20->unk_272 = temp_a1;
        }
        temp_v0_83 = temp_v1_20->unk_270;
        if ((temp_v0_83 != 0) && ((s32) temp_a1 < (s32) temp_v0_83)) {
            temp_v1_20->unk_270 = temp_a1;
        }
        break;
    case 22:
        temp_v1_21 = arg0 + 0x169E8;
        temp_v0_84 = temp_v1_21->unk_26A;
        phi_v1_2 = temp_v1_21;
        if ((temp_v0_84 != 0) && ((s32) temp_a1 < (s32) temp_v0_84)) {
            temp_v1_21->unk_26A = temp_a1;
        }
        temp_v0_85 = temp_v1_21->unk_26C;
        if ((temp_v0_85 != 0) && ((s32) temp_a1 < (s32) temp_v0_85)) {
            temp_v1_21->unk_26C = temp_a1;
        }
        temp_v0_86 = temp_v1_21->unk_26E;
        if ((temp_v0_86 != 0) && ((s32) temp_a1 < (s32) temp_v0_86)) {
            temp_v1_21->unk_26E = temp_a1;
        }
        if (temp_v1_21->unk_268 != 0xFF) {
            temp_v1_21->unk_268 = temp_a3;
        }
        if (temp_v1_21->unk_266 != 0xFF) {
            temp_v1_21->unk_266 = temp_a3;
        }
        if (temp_v1_21->unk_274 != 0xFF) {
            temp_v1_21->unk_274 = temp_a3;
        }
        if (temp_v1_21->unk_272 != 0xFF) {
            temp_v1_21->unk_272 = temp_a3;
        }
        if (temp_v1_21->unk_270 != 0xFF) {
            goto block_377;
        }
        break;
    }
    if (phi_a0->roomCtx.currRoom.unk3 == 1) {
        temp_v1_22 = phi_a0 + 0x169E8;
        if ((s32) temp_v1_22->unk_274 >= 0xFF) {
            temp_v1_22->unk_274 = phi_t0;
        }
    }
}

void func_80110038(GlobalContext *arg0, u8 arg2) {
    SaveContext *sp74;
    s16 sp72;
    s16 sp70;
    InterfaceContext *sp28;
    SaveContext *sp1C;
    SaveContext *temp_a1;
    SaveContext *temp_a1_2;
    s16 temp_a3;
    s16 temp_a3_10;
    s16 temp_a3_2;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_a3_5;
    s16 temp_a3_6;
    s16 temp_a3_7;
    s16 temp_a3_8;
    s16 temp_a3_9;
    s16 temp_v0_24;
    s32 temp_v0_15;
    u16 temp_v0_19;
    u8 temp_a0;
    u8 temp_a1_4;
    u8 temp_t1;
    u8 temp_t6;
    u8 temp_t8;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_11;
    u8 temp_v0_12;
    u8 temp_v0_13;
    u8 temp_v0_14;
    u8 temp_v0_16;
    u8 temp_v0_17;
    u8 temp_v0_18;
    u8 temp_v0_20;
    u8 temp_v0_21;
    u8 temp_v0_22;
    u8 temp_v0_23;
    u8 temp_v0_25;
    u8 temp_v0_26;
    u8 temp_v0_27;
    u8 temp_v0_28;
    u8 temp_v0_29;
    u8 temp_v0_2;
    u8 temp_v0_30;
    u8 temp_v0_31;
    u8 temp_v0_32;
    u8 temp_v0_33;
    u8 temp_v0_34;
    u8 temp_v0_35;
    u8 temp_v0_36;
    u8 temp_v0_37;
    u8 temp_v0_38;
    u8 temp_v0_39;
    u8 temp_v0_3;
    u8 temp_v0_40;
    u8 temp_v0_41;
    u8 temp_v0_42;
    u8 temp_v0_43;
    u8 temp_v0_44;
    u8 temp_v0_45;
    u8 temp_v0_46;
    u8 temp_v0_47;
    u8 temp_v0_48;
    u8 temp_v0_49;
    u8 temp_v0_4;
    u8 temp_v0_50;
    u8 temp_v0_51;
    u8 temp_v0_52;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
    void *temp_a1_10;
    void *temp_a1_11;
    void *temp_a1_12;
    void *temp_a1_13;
    void *temp_a1_14;
    void *temp_a1_15;
    void *temp_a1_16;
    void *temp_a1_17;
    void *temp_a1_3;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_a1_9;
    s16 phi_a3;
    u8 phi_a2;
    void *phi_a1;
    s16 phi_a3_2;
    s16 phi_a3_3;
    s16 phi_a3_4;
    u8 phi_a2_2;
    u8 phi_a0;
    u8 phi_v0;
    void *phi_a1_2;
    s16 phi_a3_5;
    u8 phi_a2_3;
    u8 phi_a0_2;
    void *phi_a1_3;
    s16 phi_a3_6;
    u8 phi_a2_4;
    s16 phi_a3_7;
    s16 phi_t3;
    u8 phi_a2_5;
    u8 phi_a2_6;
    s16 phi_t3_2;
    SaveContext *phi_t0;
    u8 phi_a2_7;
    u8 phi_v1;
    u8 phi_a2_8;
    u8 phi_a2_9;
    u8 phi_a2_10;
    s16 phi_a3_8;
    s32 phi_t2;
    SaveContext *phi_t0_2;
    u8 phi_a2_11;
    SaveContext *phi_a1_4;
    s16 phi_t3_3;
    u8 phi_a2_12;
    u8 phi_a0_3;
    s32 phi_t4;
    s16 phi_t3_4;
    SaveContext *phi_t0_3;
    s16 phi_a3_9;
    u8 phi_a2_13;
    void *phi_a1_5;
    u8 phi_a2_14;
    u8 phi_v1_2;
    u8 phi_a0_4;
    u8 phi_a2_15;
    u8 phi_a2_16;
    u8 phi_a1_6;
    u8 phi_a2_17;
    u8 phi_a2_18;
    u8 phi_a2_19;
    u8 phi_v1_3;
    u8 phi_a0_5;
    u8 phi_a2_20;
    u8 phi_a2_21;
    SaveContext *phi_t0_4;
    SaveContext *phi_t1;
    SaveContext *phi_t0_5;
    s16 phi_a3_10;
    s32 phi_t2_2;
    u8 phi_a2_22;
    s32 phi_t4_2;
    u8 phi_a2_23;
    u8 phi_a2_24;
    u8 phi_a2_25;
    u8 phi_a2_26;
    u8 phi_a0_6;
    u8 phi_v0_2;
    u8 phi_v0_3;
    u8 phi_v0_4;
    u8 phi_a2_27;
    u8 phi_a0_7;
    u8 phi_v0_5;
    u8 phi_v0_6;
    u8 phi_v0_7;
    u8 phi_a2_28;
    u8 phi_a0_8;
    u8 phi_a2_29;
    u8 phi_a0_9;
    u8 phi_a2_30;
    u8 phi_a2_31;
    u8 phi_a2_32;
    u8 phi_a0_10;
    u8 phi_v0_8;
    u8 phi_v0_9;
    u8 phi_v0_10;
    u8 phi_v0_11;
    u8 phi_v0_12;
    u8 phi_v0_13;
    u8 phi_a2_33;
    u8 phi_a0_11;
    u8 phi_v0_14;
    u8 phi_v0_15;
    u8 phi_v0_16;
    u8 phi_v0_17;
    u8 phi_v0_18;
    u8 phi_v0_19;
    void *phi_a1_7;
    s16 phi_t3_5;
    SaveContext *phi_t0_6;
    u8 phi_v1_4;
    u8 phi_v1_5;
    u8 phi_v1_6;
    u8 phi_v1_7;
    u8 phi_v1_8;
    u8 phi_v1_9;
    s16 phi_t3_6;
    u8 phi_v1_10;
    u8 phi_v1_11;
    u8 phi_v1_12;
    u8 phi_v1_13;
    u8 phi_v1_14;
    u8 phi_v1_15;
    u8 phi_v1_16;
    u8 phi_v1_17;
    u8 phi_v1_18;
    u8 phi_v1_19;
    u8 phi_v1_20;
    u8 phi_v1_21;
    u8 phi_v1_22;
    u8 phi_v1_23;
    u8 phi_v1_24;
    u8 phi_v1_25;
    u8 phi_v1_26;
    u8 phi_v1_27;
    u8 phi_v1_28;
    u8 phi_v1_29;
    u8 phi_v1_30;
    u8 phi_v1_31;
    u8 phi_v1_32;
    u8 phi_v1_33;
    u8 phi_v1_34;
    u8 phi_v1_35;
    u8 phi_v1_36;
    u8 phi_v1_37;
    u8 phi_v1_38;
    u8 phi_v1_39;
    u8 phi_v1_40;
    u8 phi_v1_41;
    u8 phi_v1_42;
    u8 phi_v1_43;
    u8 phi_v1_44;
    u8 phi_v1_45;
    u8 phi_v1_46;
    u8 phi_v1_47;
    u8 phi_v1_48;
    u8 phi_v1_49;
    s16 phi_t3_7;
    s16 phi_t3_8;
    s16 phi_t3_9;
    s16 phi_t3_10;
    s16 phi_t3_11;
    s16 phi_t3_12;
    s16 phi_t3_13;
    s16 phi_t3_14;
    s16 phi_t3_15;
    s16 phi_t3_16;
    s16 phi_t3_17;
    s16 phi_t3_18;

    temp_a1 = arg0->actorCtx.actorList[2].first;
    phi_t3 = 0;
    phi_t3_2 = 0;
    phi_t0 = &gSaveContext;
    phi_a2_9 = arg2;
    phi_t3_5 = 0;
    phi_t0_6 = &gSaveContext;
    phi_t3_3 = 0;
    phi_t3_3 = 0;
    phi_t3_3 = 0;
    phi_t3_3 = 0;
    phi_t3_7 = 0;
    phi_t3_9 = 0;
    phi_t3_6 = 0;
    phi_t3_16 = 0;
    phi_t3_18 = 0;
    if ((gSaveContext.eventInf[4] & 2) != 0) {
        phi_a3 = 1;
        do {
            phi_t3_13 = phi_t3_18;
            phi_t3_13 = phi_t3_18;
            if (phi_a3 == 0) {
                temp_v0 = gSaveContext.playerForm;
                if (temp_v0 == 4) {
                    phi_v1_4 = 0U;
                } else {
                    phi_v1_4 = temp_v0;
                }
                phi_a2 = (&gSaveContext + (phi_v1_4 * 4) + phi_a3)->unk_4C;
                phi_a1 = &gSaveContext + phi_a3;
            } else {
                phi_a2 = gSaveContext.equips.buttonItems[0][phi_a3];
                phi_a1 = &gSaveContext + phi_a3;
            }
            if (((phi_a2 & 0xFF) != 0xD) || (arg0->msgCtx.unk11F22 != 0)) {
                if (phi_a1->unk_3F18 == 0) {
                    phi_t3_13 = 1;
                }
                phi_a1->unk_3F18 = 0xFFU;
            } else {
                if (phi_a1->unk_3F18 == 0xFF) {
                    phi_t3_13 = 1;
                }
                phi_a1->unk_3F18 = 0U;
            }
            temp_a3 = phi_a3 + 1;
            phi_a3 = temp_a3;
            phi_t3_5 = phi_t3_13;
            phi_t3_5 = phi_t3_13;
            phi_t3_18 = phi_t3_13;
        } while ((s32) temp_a3 < 4);
        if (D_801BF884 == 0) {
            if (gSaveContext.buttonStatus[0] != 0xFF) {
                phi_t3_5 = 1;
            }
            gSaveContext.buttonStatus[0] = 0xFF;
        } else {
            if (gSaveContext.buttonStatus[0] == 0xFF) {
                phi_t3_5 = 1;
            }
            gSaveContext.buttonStatus[0] = 0;
        }
    } else {
        phi_a3_2 = 1;
        phi_a3_3 = 1;
        phi_a3_4 = 1;
        phi_a3_5 = 1;
        phi_a3_6 = 1;
        phi_a3_7 = 1;
        phi_a3_8 = 1;
        phi_a3_9 = 1;
        phi_a3_10 = 1;
        if ((gSaveContext.weekEventReg[90] & 0x20) != 0) {
            do {
                if (gSaveContext.buttonStatus[phi_a3_2] == 0) {
                    gSaveContext.buttonStatus[phi_a3_2] = 0xFF;
                }
                temp_a3_2 = phi_a3_2 + 1;
                phi_a3_2 = temp_a3_2;
            } while ((s32) temp_a3_2 < 4);
            sp70 = 0;
            Interface_ChangeAlpha(8U);
            phi_t0_6 = &gSaveContext;
        } else if ((gSaveContext.weekEventReg[82] & 8) != 0) {
            do {
                if (gSaveContext.buttonStatus[phi_a3_3] == 0) {
                    gSaveContext.buttonStatus[phi_a3_3] = 0xFF;
                }
                temp_a3_3 = phi_a3_3 + 1;
                phi_a3_3 = temp_a3_3;
            } while ((s32) temp_a3_3 < 4);
            sp70 = 0;
            Interface_ChangeAlpha(0x16U);
            phi_t0_6 = &gSaveContext;
        } else if ((gSaveContext.weekEventReg[84] & 0x20) != 0) {
            if (temp_a1->unk_153 == 0x15) {
                do {
                    if (phi_a3_4 == 0) {
                        temp_v0_2 = gSaveContext.playerForm;
                        if (temp_v0_2 == 4) {
                            phi_v1_5 = 0U;
                        } else {
                            phi_v1_5 = temp_v0_2;
                        }
                        phi_a2_2 = (&gSaveContext + (phi_v1_5 * 4) + phi_a3_4)->unk_4C;
                        phi_a1_2 = &gSaveContext + phi_a3_4;
                    } else {
                        phi_a2_2 = gSaveContext.equips.buttonItems[0][phi_a3_4];
                        phi_a1_2 = &gSaveContext + phi_a3_4;
                    }
                    if ((phi_a2_2 & 0xFF) != 0x35) {
                        if (phi_a3_4 == 0) {
                            temp_v0_3 = gSaveContext.playerForm;
                            if (temp_v0_3 == 4) {
                                phi_v1_6 = 0U;
                            } else {
                                phi_v1_6 = temp_v0_3;
                            }
                            phi_a0 = (&gSaveContext + (phi_v1_6 * 4) + phi_a3_4)->unk_4C;
                        } else {
                            phi_a0 = phi_a1_2->unk_4C;
                        }
                        if ((phi_a0 & 0xFF) >= 0x12) {
                            if (phi_a3_4 == 0) {
                                temp_v0_4 = gSaveContext.playerForm;
                                if (temp_v0_4 == 4) {
                                    phi_v1_7 = 0U;
                                } else {
                                    phi_v1_7 = temp_v0_4;
                                }
                                phi_v0 = (&gSaveContext + (phi_v1_7 * 4) + phi_a3_4)->unk_4C;
                            } else {
                                phi_v0 = phi_a1_2->unk_4C;
                            }
                            if ((phi_v0 & 0xFF) < 0x28) {
                                goto block_60;
                            }
                            goto block_62;
                        }
block_62:
                        if (phi_a1_2->unk_3F18 != 0xFF) {
                            phi_a1_2->unk_3F18 = 0xFFU;
                            phi_t3_7 = 1;
                        }
                    } else {
block_60:
                        if (phi_a1_2->unk_3F18 == 0xFF) {
                            phi_a1_2->unk_3F18 = 0U;
                            phi_t3_7 = 1;
                        }
                    }
                    temp_a3_4 = phi_a3_4 + 1;
                    phi_a3_4 = temp_a3_4;
                    phi_t3_5 = phi_t3_7;
                } while ((s32) temp_a3_4 < 4);
            } else {
                do {
                    phi_t3_8 = phi_t3_16;
                    phi_t3_8 = phi_t3_16;
                    if (phi_a3_5 == 0) {
                        temp_v0_5 = gSaveContext.playerForm;
                        if (temp_v0_5 == 4) {
                            phi_v1_8 = 0U;
                        } else {
                            phi_v1_8 = temp_v0_5;
                        }
                        phi_a2_3 = (&gSaveContext + (phi_v1_8 * 4) + phi_a3_5)->unk_4C;
                        phi_a1_3 = &gSaveContext + phi_a3_5;
                    } else {
                        phi_a2_3 = gSaveContext.equips.buttonItems[0][phi_a3_5];
                        phi_a1_3 = &gSaveContext + phi_a3_5;
                    }
                    if ((phi_a2_3 & 0xFF) >= 0x32) {
                        if (phi_a3_5 == 0) {
                            temp_v0_6 = gSaveContext.playerForm;
                            if (temp_v0_6 == 4) {
                                phi_v1_9 = 0U;
                            } else {
                                phi_v1_9 = temp_v0_6;
                            }
                            phi_a0_2 = (&gSaveContext + (phi_v1_9 * 4) + phi_a3_5)->unk_4C;
                        } else {
                            phi_a0_2 = phi_a1_3->unk_4C;
                        }
                        if ((phi_a0_2 & 0xFF) < 0x35) {
                            if (phi_a1_3->unk_3F18 != 0xFF) {
                                phi_t3_8 = 1;
                            }
                            phi_a1_3->unk_3F18 = 0xFFU;
                        } else {
                            goto block_84;
                        }
                    } else {
block_84:
                        if (phi_a1_3->unk_3F18 == 0xFF) {
                            phi_t3_8 = 1;
                        }
                        phi_a1_3->unk_3F18 = 0U;
                    }
                    temp_a3_5 = phi_a3_5 + 1;
                    phi_a3_5 = temp_a3_5;
                    phi_t3_5 = phi_t3_8;
                    phi_t3_16 = phi_t3_8;
                } while ((s32) temp_a3_5 < 4);
            }
        } else if ((arg0->sceneNum == 8) && (gSaveContext.sceneSetupIndex == 6)) {
            do {
                if (gSaveContext.buttonStatus[phi_a3_6] == 0) {
                    phi_t3_9 = 1;
                }
                temp_a3_6 = phi_a3_6 + 1;
                gSaveContext.buttonStatus[phi_a3_6] = 0xFF;
                phi_a3_6 = temp_a3_6;
                phi_t3_5 = phi_t3_9;
            } while ((s32) temp_a3_6 < 4);
        } else if ((gSaveContext.eventInf[3] & 0x10) != 0) {
            if (temp_a1->roomInf[86][5] & 0x1000000) {
                if (gSaveContext.inventory.items[9] == 9) {
                    temp_v0_7 = gSaveContext.playerForm;
                    if (temp_v0_7 == 4) {
                        phi_a2_4 = 0U;
                    } else {
                        phi_a2_4 = temp_v0_7;
                    }
                    (&gSaveContext + (phi_a2_4 * 4))->unk_4C = 9;
                    sp70 = 0;
                    func_80112B40(arg0, 0);
                } else {
                    gSaveContext.buttonStatus[0] = 0xFF;
                    phi_t3 = 1;
                }
            } else {
                if (gSaveContext.buttonStatus[0] == 0xFF) {
                    gSaveContext.buttonStatus[0] = 0;
                    phi_t3_6 = 1;
                }
                do {
                    if (gSaveContext.buttonStatus[phi_a3_7] == 0) {
                        phi_t3_6 = 1;
                    }
                    temp_a3_7 = phi_a3_7 + 1;
                    gSaveContext.buttonStatus[phi_a3_7] = 0xFF;
                    phi_a3_7 = temp_a3_7;
                    phi_t3 = phi_t3_6;
                } while ((s32) temp_a3_7 < 4);
            }
            phi_t3_5 = phi_t3;
            phi_t0_6 = &gSaveContext;
            if ((phi_t3 != 0) || (gSaveContext.unk_3F22 != 0xC)) {
                gSaveContext.unk_3F22 = 0;
                sp70 = 0;
                Interface_ChangeAlpha(0xCU);
                phi_t3_5 = sp70;
                phi_t0_6 = &gSaveContext;
            }
        } else if (temp_a1->roomInf[86][5] & 0x1000000) {
            if (gSaveContext.inventory.items[9] == 9) {
                temp_v0_8 = gSaveContext.playerForm;
                if (temp_v0_8 == 4) {
                    phi_a2_5 = 0U;
                } else {
                    phi_a2_5 = temp_v0_8;
                }
                if ((&gSaveContext + (phi_a2_5 * 4))->unk_4C != 9) {
                    if (temp_v0_8 == 4) {
                        phi_a2_6 = 0U;
                    } else {
                        phi_a2_6 = temp_v0_8;
                    }
                    (&gSaveContext + (phi_a2_6 * 4))->unk_4C = 9;
                    func_80112B40(arg0, 0);
                    gSaveContext.buttonStatus[0] = 0;
                    goto block_125;
                }
            } else if (gSaveContext.buttonStatus[0] == 0) {
                gSaveContext.buttonStatus[0] = 0xFF;
block_125:
                phi_t3_2 = 1;
                phi_t0 = &gSaveContext;
            }
            phi_t3_5 = phi_t3_2;
            phi_t0_6 = phi_t0;
            if (phi_t3_2 != 0) {
                phi_t0->buttonStatus[1] = 0xFF;
                phi_t0->buttonStatus[2] = 0xFF;
                phi_t0->buttonStatus[3] = 0xFF;
            }
        } else if (gSaveContext.magicAcquired == 0) {
            temp_v0_9 = gSaveContext.playerForm;
            if (temp_v0_9 == 4) {
                phi_a2_7 = 0U;
            } else {
                phi_a2_7 = temp_v0_9;
            }
            phi_a2_9 = phi_a2_7;
            if (phi_a2_7 == 3) {
                if (temp_v0_9 == 4) {
                    phi_v1 = 0U;
                } else {
                    phi_v1 = temp_v0_9;
                }
                if ((&gSaveContext + (phi_v1 * 4))->unk_4C == 9) {
                    if (temp_v0_9 == 4) {
                        phi_a2_8 = 0U;
                    } else {
                        phi_a2_8 = temp_v0_9;
                    }
                    (&gSaveContext + (phi_a2_8 * 4))->unk_4C = 0xFD;
                    gSaveContext.buttonStatus[0] = 0xFF;
                } else {
                    goto block_141;
                }
            } else {
                goto block_141;
            }
        } else {
block_141:
            sp74 = temp_a1;
            sp70 = 0;
            phi_t2 = 4;
            phi_t2_2 = 4;
            phi_t2 = 4;
            phi_t2_2 = 4;
            if ((func_801242DC(arg0, temp_a1, phi_a2_9, 1) >= 2) && (sp70 = 0, phi_t0_2 = &gSaveContext, ((func_801242DC(arg0) < 5) != 0))) {
                temp_v0_10 = gSaveContext.playerForm;
                if (temp_v0_10 == 4) {
                    phi_a2_10 = 0U;
                } else {
                    phi_a2_10 = temp_v0_10;
                }
                if (phi_a2_10 != 2) {
                    temp_v0_11 = sp74->unk_153;
                    if ((temp_v0_11 == 0x12) && (sp74->unk_B60 == 0)) {
                        if (gSaveContext.unk_1015 == 0xFF) {
                            phi_t3_3 = 1;
                        }
                        gSaveContext.unk_1015 = 0;
                    } else if ((arg0->interfaceCtx.unk_21E == 0x18) && (temp_v0_11 == 0x12)) {
                        if (gSaveContext.unk_1015 != 0xFF) {
                            gSaveContext.unk_1015 = 0xFF;
                            phi_t3_3 = 1;
                        }
                    } else {
                        if (gSaveContext.buttonStatus[0] != 0xFF) {
                            phi_t3_3 = 1;
                        }
                        gSaveContext.buttonStatus[0] = 0xFF;
                    }
                } else {
                    if (gSaveContext.buttonStatus[0] == 0xFF) {
                        phi_t3_3 = 1;
                    }
                    gSaveContext.buttonStatus[0] = 0;
                }
                phi_t4 = 0xFF;
                do {
                    phi_t3_4 = phi_t3_3;
                    phi_t0_3 = phi_t0_2;
                    if (phi_a3_8 == 0) {
                        temp_v0_12 = phi_t0_2->playerForm;
                        if (phi_t2 == temp_v0_12) {
                            phi_v1_10 = 0U;
                        } else {
                            phi_v1_10 = temp_v0_12;
                        }
                        phi_a2_11 = (phi_t0_2 + (phi_v1_10 * 4) + phi_a3_8)->unk_4C;
                        phi_a1_4 = phi_t0_2 + phi_a3_8;
                    } else {
                        temp_a1_2 = phi_t0_2 + phi_a3_8;
                        phi_a2_11 = temp_a1_2->equips.buttonItems[0][0];
                        phi_a1_4 = temp_a1_2;
                    }
                    if ((phi_a2_11 & 0xFF) != 0x34) {
                        sp1C = phi_a1_4;
                        sp72 = phi_a3_8;
                        sp70 = phi_t3_3;
                        phi_t0_3 = &gSaveContext;
                        phi_t4 = 0xFF;
                        phi_t3_4 = phi_t3_3;
                        phi_t3_4 = phi_t3_3;
                        phi_t3_4 = phi_t3_3;
                        if (func_801242DC(arg0, phi_a1_4, phi_a2_11, phi_a3_8) == 2) {
                            if (phi_a3_8 == 0) {
                                temp_v0_13 = gSaveContext.playerForm;
                                if (temp_v0_13 == 4) {
                                    phi_v1_11 = 0U;
                                } else {
                                    phi_v1_11 = temp_v0_13;
                                }
                                phi_a2_12 = (&gSaveContext + (phi_v1_11 * 4) + phi_a3_8)->unk_4C;
                            } else {
                                phi_a2_12 = phi_a1_4->equips.buttonItems[0][0];
                            }
                            if ((phi_a2_12 & 0xFF) >= 0x12) {
                                if (phi_a3_8 == 0) {
                                    temp_v0_14 = gSaveContext.playerForm;
                                    if (temp_v0_14 == 4) {
                                        phi_v1_12 = 0U;
                                    } else {
                                        phi_v1_12 = temp_v0_14;
                                    }
                                    phi_a0_3 = (&gSaveContext + (phi_v1_12 * 4) + phi_a3_8)->unk_4C;
                                } else {
                                    phi_a0_3 = phi_a1_4->equips.buttonItems[0][0];
                                }
                                if ((phi_a0_3 & 0xFF) >= 0x28) {
                                    goto block_186;
                                }
                                if (phi_a1_4->buttonStatus[0] == 0xFF) {
                                    phi_t3_4 = 1;
                                }
                                phi_a1_4->buttonStatus[0] = 0;
                            } else {
block_186:
                                if (phi_a1_4->buttonStatus[0] == 0) {
                                    phi_t3_4 = 1;
                                }
                                phi_a1_4->buttonStatus[0] = 0xFF;
                            }
                        } else {
                            if (phi_a1_4->buttonStatus[0] == 0) {
                                phi_t3_4 = 1;
                            }
                            phi_a1_4->buttonStatus[0] = 0xFF;
                        }
                    } else if (phi_t4 == phi_a1_4->buttonStatus[0]) {
                        phi_a1_4->buttonStatus[0] = 0;
                        phi_t3_4 = 1;
                    }
                    temp_a3_8 = phi_a3_8 + 1;
                    phi_a3_8 = temp_a3_8;
                    phi_t0_2 = phi_t0_3;
                    phi_t3_3 = phi_t3_4;
                    phi_t3_5 = phi_t3_4;
                    phi_t0_6 = phi_t0_3;
                } while ((s32) temp_a3_8 < 4);
                if (phi_t3_4 != 0) {
                    phi_t0_3->unk_3F22 = 0;
                }
                if ((arg0->sceneLoadFlag == 0) && (arg0->unk_18B4A == 0)) {
                    sp70 = phi_t3_4;
                    phi_t3_5 = phi_t3_4;
                    phi_t0_6 = &gSaveContext;
                    if (ActorCutscene_GetCurrentIndex() == -1) {
                        sp70 = phi_t3_4;
                        Interface_ChangeAlpha(0x32U);
                        phi_t3_5 = phi_t3_4;
                        phi_t0_6 = &gSaveContext;
                    }
                }
            } else {
                temp_v0_15 = sp74->roomInf[86][3];
                phi_t0_4 = &gSaveContext;
                phi_t1 = sp74;
                phi_t0_5 = &gSaveContext;
                phi_t2_2 = 4;
                phi_t3_5 = 0;
                phi_t0_6 = &gSaveContext;
                phi_t2_2 = 4;
                phi_t3_11 = 0;
                phi_t3_14 = 0;
                phi_t3_17 = 0;
                if (temp_v0_15 & 0x200000) {
                    do {
                        phi_t3_10 = phi_t3_17;
                        phi_t3_10 = phi_t3_17;
                        if (phi_a3_9 == 0) {
                            temp_v0_16 = gSaveContext.playerForm;
                            if (temp_v0_16 == 4) {
                                phi_v1_13 = 0U;
                            } else {
                                phi_v1_13 = temp_v0_16;
                            }
                            phi_a2_13 = (&gSaveContext + (phi_v1_13 * 4) + phi_a3_9)->unk_4C;
                            phi_a1_5 = &gSaveContext + phi_a3_9;
                        } else {
                            temp_a1_3 = &gSaveContext + phi_a3_9;
                            phi_a2_13 = temp_a1_3->unk_4C;
                            phi_a1_5 = temp_a1_3;
                        }
                        if ((phi_a2_13 & 0xFF) != 0xE) {
                            if (phi_a1_5->unk_3F18 == 0) {
                                phi_t3_10 = 1;
                            }
                            phi_a1_5->unk_3F18 = 0xFFU;
                        } else {
                            if (phi_a1_5->unk_3F18 == 0xFF) {
                                phi_t3_10 = 1;
                            }
                            phi_a1_5->unk_3F18 = 0U;
                        }
                        temp_a3_9 = phi_a3_9 + 1;
                        phi_a3_9 = temp_a3_9;
                        phi_t3_5 = phi_t3_10;
                        phi_t3_17 = phi_t3_10;
                    } while ((s32) temp_a3_9 < 4);
                    if (gSaveContext.buttonStatus[0] != 0xFF) {
                        gSaveContext.buttonStatus[0] = 0xFF;
                        phi_t3_5 = 1;
                    }
                } else if ((temp_v0_15 & 0x2000) != 0) {
                    if (gSaveContext.buttonStatus[0] != 0xFF) {
                        gSaveContext.buttonStatus[0] = 0xFF;
                        gSaveContext.buttonStatus[1] = 0xFF;
                        gSaveContext.buttonStatus[2] = 0xFF;
                        gSaveContext.buttonStatus[3] = 0xFF;
                        sp70 = 1;
                        Interface_ChangeAlpha(0x32U);
                        phi_t3_5 = 1;
                        phi_t0_6 = &gSaveContext;
                    }
                } else {
                    sp28 = &arg0->interfaceCtx;
                    if ((arg0->interfaceCtx.unk_21E == 0x18) && (sp74->unk_153 == 0x12) && (sp74->unk_B60 != 0)) {
                        if (gSaveContext.unk_1015 != 0xFF) {
                            gSaveContext.unk_1015 = 0xFF;
                            phi_t3_11 = 1;
                        }
                        phi_t4_2 = 0xFF;
                    } else {
                        if (gSaveContext.unk_1015 == 0xFF) {
                            gSaveContext.unk_1015 = 0;
                            phi_t3_14 = 1;
                        }
                        temp_v0_17 = sp28->restrictions.bButton;
                        phi_t3_11 = phi_t3_14;
                        phi_t3_11 = phi_t3_14;
                        phi_t3_11 = phi_t3_14;
                        phi_t3_11 = phi_t3_14;
                        phi_t3_11 = phi_t3_14;
                        if (temp_v0_17 == 0) {
                            temp_v0_18 = gSaveContext.playerForm;
                            if (temp_v0_18 == 4) {
                                phi_a2_14 = 0U;
                            } else {
                                phi_a2_14 = temp_v0_18;
                            }
                            if ((&gSaveContext + (phi_a2_14 * 4))->unk_4C != 1) {
                                if (temp_v0_18 == 4) {
                                    phi_v1_2 = 0U;
                                } else {
                                    phi_v1_2 = temp_v0_18;
                                }
                                if ((&gSaveContext + (phi_v1_2 * 4))->unk_4C != 6) {
                                    if (temp_v0_18 == 4) {
                                        phi_a0_4 = 0U;
                                    } else {
                                        phi_a0_4 = temp_v0_18;
                                    }
                                    if ((&gSaveContext + (phi_a0_4 * 4))->unk_4C == 7) {
                                        goto block_246;
                                    }
                                    if (temp_v0_18 == 4) {
                                        phi_a2_15 = 0U;
                                    } else {
                                        phi_a2_15 = temp_v0_18;
                                    }
                                    if ((&gSaveContext + (phi_a2_15 * 4))->unk_4C == 0xFF) {
                                        if (sp28->unk_21E != 0) {
                                            if (gSaveContext.buttonStatus[0] == 0xFF) {
                                                gSaveContext.buttonStatus[0] = 0;
                                                phi_t4_2 = 0xFF;
                                                phi_t3_11 = 1;
                                            } else {
                                                goto block_267;
                                            }
                                        } else {
                                            if (gSaveContext.buttonStatus[0] != 0xFF) {
                                                gSaveContext.buttonStatus[0] = 0xFF;
                                                phi_t3_11 = 1;
                                            }
block_267:
                                            phi_t4_2 = 0xFF;
                                        }
                                    } else {
                                        if (temp_v0_18 == 4) {
                                            phi_a2_16 = 0U;
                                        } else {
                                            phi_a2_16 = temp_v0_18;
                                        }
                                        if ((&gSaveContext + (phi_a2_16 * 4))->unk_4C == 0xFF) {
                                            if (gSaveContext.buttonStatus[0] != 0xFF) {
                                                gSaveContext.buttonStatus[0] = 0xFF;
                                                phi_t3_11 = 1;
                                            }
                                            phi_t4_2 = 0xFF;
                                        } else {
                                            if (gSaveContext.buttonStatus[0] == 0xFF) {
                                                gSaveContext.buttonStatus[0] = 0;
                                                phi_t3_11 = 1;
                                            }
                                            goto block_277;
                                        }
                                    }
                                } else {
                                    goto block_246;
                                }
                            } else {
block_246:
                                temp_v0_19 = *gEquipMasks;
                                temp_a0 = *gEquipShifts;
                                if (((s32) (gSaveContext.equips.equipment & temp_v0_19) >> temp_a0) == 0) {
                                    gSaveContext.buttonStatus[0] = 0xFF;
                                }
                                temp_a1_4 = gSaveContext.buttonStatus[0];
                                phi_a1_6 = temp_a1_4;
                                if (temp_a1_4 == 0) {
                                    temp_t9 = ((s32) (gSaveContext.equips.equipment & temp_v0_19) >> temp_a0) + 0x4C;
                                    gSaveContext.buttonStatus[0] = temp_t9;
                                    phi_a1_6 = temp_t9 & 0xFF;
                                }
                                temp_v0_20 = gSaveContext.playerForm;
                                if (temp_v0_20 == 4) {
                                    phi_a2_17 = 0U;
                                } else {
                                    phi_a2_17 = temp_v0_20;
                                }
                                (&gSaveContext + (phi_a2_17 * 4))->unk_4C = phi_a1_6;
                                temp_v0_21 = gSaveContext.playerForm;
                                if (temp_v0_21 == 4) {
                                    phi_a2_18 = 0U;
                                } else {
                                    phi_a2_18 = temp_v0_21;
                                }
                                phi_t3_11 = 1;
                                if ((&gSaveContext + (phi_a2_18 * 4))->unk_4C != 0xFF) {
                                    sp70 = 1;
                                    func_80112B40(arg0, 0);
                                    phi_t1 = sp74;
                                    phi_t0_5 = &gSaveContext;
                                    phi_t4_2 = 0xFF;
                                    phi_t3_11 = 1;
                                } else {
block_277:
                                    phi_t4_2 = 0xFF;
                                }
                            }
                        } else {
                            phi_t4_2 = 0xFF;
                            if (temp_v0_17 != 0) {
                                temp_v0_22 = gSaveContext.playerForm;
                                if (temp_v0_22 == 4) {
                                    phi_a2_19 = 0U;
                                } else {
                                    phi_a2_19 = temp_v0_22;
                                }
                                if ((&gSaveContext + (phi_a2_19 * 4))->unk_4C != 1) {
                                    if (temp_v0_22 == 4) {
                                        phi_v1_3 = 0U;
                                    } else {
                                        phi_v1_3 = temp_v0_22;
                                    }
                                    if ((&gSaveContext + (phi_v1_3 * 4))->unk_4C != 6) {
                                        if (temp_v0_22 == 4) {
                                            phi_a0_5 = 0U;
                                        } else {
                                            phi_a0_5 = temp_v0_22;
                                        }
                                        if ((&gSaveContext + (phi_a0_5 * 4))->unk_4C == 7) {
                                            goto block_291;
                                        }
                                    } else {
                                        goto block_291;
                                    }
                                } else {
block_291:
                                    phi_t3_11 = 1;
                                    if (((s32) (gSaveContext.equips.equipment & *gEquipMasks) >> *gEquipShifts) == 0) {
                                        gSaveContext.buttonStatus[0] = 0xFF;
                                    }
                                    if (gSaveContext.playerForm == 4) {
                                        phi_a2_20 = 0U;
                                    } else {
                                        phi_a2_20 = gSaveContext.playerForm;
                                    }
                                    (&gSaveContext + (phi_a2_20 * 4))->unk_4C = (u8) gSaveContext.buttonStatus[0];
                                    temp_v0_23 = gSaveContext.playerForm;
                                    if (temp_v0_23 == 4) {
                                        phi_a2_21 = 0U;
                                    } else {
                                        phi_a2_21 = temp_v0_23;
                                    }
                                    if ((&gSaveContext + (phi_a2_21 * 4))->unk_4C != 0xFF) {
                                        sp70 = 1;
                                        func_80112B40(arg0, 0);
                                        phi_t0_4 = &gSaveContext;
                                    }
                                }
                                phi_t1 = sp74;
                                phi_t0_5 = phi_t0_4;
                                phi_t4_2 = 0xFF;
                                if (phi_t0_4->buttonStatus[0] != 0xFF) {
                                    phi_t0_4->buttonStatus[0] = 0xFF;
                                    phi_t3_11 = 1;
                                }
                            }
                        }
                    }
                    phi_t3_5 = phi_t3_11;
                    phi_t0_6 = phi_t0_5;
                    phi_t3_15 = phi_t3_11;
                    if (phi_t1->unk_14B == phi_t0_5->playerForm) {
                        do {
                            temp_t1 = phi_t0_5->playerForm;
                            phi_t3_12 = phi_t3_15;
                            phi_t3_12 = phi_t3_15;
                            phi_t3_12 = phi_t3_15;
                            phi_t3_12 = phi_t3_15;
                            if (phi_a3_10 == 0) {
                                if (phi_t2_2 == temp_t1) {
                                    phi_v1_14 = 0U;
                                } else {
                                    phi_v1_14 = temp_t1;
                                }
                                phi_a2_22 = (phi_t0_5 + (phi_v1_14 * 4) + phi_a3_10)->unk_4C;
                            } else {
                                phi_a2_22 = (phi_t0_5 + phi_a3_10)->unk_4C;
                            }
                            temp_a1_5 = phi_t0_5 + phi_a3_10;
                            if (*(D_801C2410 + ((temp_t1 * 0x72) + (phi_a2_22 & 0xFF))) == 0) {
                                if (phi_t4_2 != temp_a1_5->unk_3F18) {
                                    temp_a1_5->unk_3F18 = 0xFFU;
                                    phi_t3_12 = 1;
                                }
                            } else {
                                temp_a1_6 = phi_t0_5 + phi_a3_10;
                                if (sp74->unk_0 != 0) {
                                    if (phi_t4_2 != temp_a1_6->unk_3F18) {
                                        temp_a1_6->unk_3F18 = 0xFFU;
                                        phi_t3_12 = 1;
                                    }
                                } else if (sp74->unk_153 == 0x14) {
                                    temp_a1_7 = phi_t0_5 + phi_a3_10;
                                    phi_a1_7 = temp_a1_7;
                                    if (phi_a3_10 == 0) {
                                        if (phi_t2_2 == temp_t1) {
                                            phi_v1_15 = 0U;
                                        } else {
                                            phi_v1_15 = temp_t1;
                                        }
                                        phi_a2_23 = (phi_t0_5 + (phi_v1_15 * 4) + phi_a3_10)->unk_4C;
                                    } else {
                                        phi_a2_23 = temp_a1_7->unk_4C;
                                    }
                                    if ((phi_a2_23 & 0xFF) != 0x49) {
                                        if (phi_t4_2 != temp_a1_7->unk_3F18) {
                                            temp_a1_7->unk_3F18 = 0xFFU;
                                            phi_t3_12 = 1;
                                        }
                                    } else if (phi_t4_2 == temp_a1_7->unk_3F18) {
                                        goto block_607;
                                    }
                                } else {
                                    if (phi_a3_10 == 0) {
                                        if (phi_t2_2 == temp_t1) {
                                            phi_v1_16 = 0U;
                                        } else {
                                            phi_v1_16 = temp_t1;
                                        }
                                        phi_a2_24 = (phi_t0_5 + (phi_v1_16 * 4) + phi_a3_10)->unk_4C;
                                    } else {
                                        phi_a2_24 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                    }
                                    if ((phi_a2_24 & 0xFF) == 0x49) {
                                        temp_a1_8 = phi_t0_5 + phi_a3_10;
                                        phi_a1_7 = temp_a1_8;
                                        if (arg0->sceneNum != 0x36) {
                                            if (phi_t4_2 != temp_a1_8->unk_3F18) {
                                                temp_a1_8->unk_3F18 = 0xFFU;
                                                phi_t3_12 = 1;
                                            }
                                        } else if (phi_t4_2 == temp_a1_8->unk_3F18) {
                                            goto block_607;
                                        }
                                    } else {
                                        if (phi_a3_10 == 0) {
                                            if (phi_t2_2 == temp_t1) {
                                                phi_v1_17 = 0U;
                                            } else {
                                                phi_v1_17 = temp_t1;
                                            }
                                            phi_a2_25 = (phi_t0_5 + (phi_v1_17 * 4) + phi_a3_10)->unk_4C;
                                        } else {
                                            phi_a2_25 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                        }
                                        if ((phi_a2_25 & 0xFF) == 0x35) {
                                            temp_a1_9 = phi_t0_5 + phi_a3_10;
                                            temp_v0_24 = arg0->sceneNum;
                                            phi_a1_7 = temp_a1_9;
                                            if ((temp_v0_24 != 0x1F) && (temp_v0_24 != 0x44) && (temp_v0_24 != 0x5F) && (temp_v0_24 != 0x36) && (temp_v0_24 != 0xB)) {
                                                if (phi_t4_2 != temp_a1_9->unk_3F18) {
                                                    temp_a1_9->unk_3F18 = 0xFFU;
                                                    phi_t3_12 = 1;
                                                }
                                            } else if (phi_t4_2 == temp_a1_9->unk_3F18) {
                                                goto block_607;
                                            }
                                        } else {
                                            temp_v0_25 = sp28->restrictions.tradeItems;
                                            if (temp_v0_25 != 0) {
                                                if (phi_a3_10 == 0) {
                                                    if (phi_t2_2 == temp_t1) {
                                                        phi_v1_18 = 0U;
                                                    } else {
                                                        phi_v1_18 = temp_t1;
                                                    }
                                                    phi_a2_26 = (phi_t0_5 + (phi_v1_18 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_a2_26 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_a2_26 & 0xFF) >= 0x28) {
                                                    if (phi_a3_10 == 0) {
                                                        if (phi_t2_2 == temp_t1) {
                                                            phi_v1_19 = 0U;
                                                        } else {
                                                            phi_v1_19 = temp_t1;
                                                        }
                                                        phi_a0_6 = (phi_t0_5 + (phi_v1_19 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_a0_6 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    if ((phi_a0_6 & 0xFF) >= 0x31) {
                                                        goto block_372;
                                                    }
                                                    goto block_393;
                                                }
block_372:
                                                if (phi_a3_10 == 0) {
                                                    if (phi_t2_2 == temp_t1) {
                                                        phi_v1_20 = 0U;
                                                    } else {
                                                        phi_v1_20 = temp_t1;
                                                    }
                                                    phi_v0_2 = (phi_t0_5 + (phi_v1_20 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_v0_2 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_v0_2 & 0xFF) >= 0x12) {
                                                    if (phi_a3_10 == 0) {
                                                        if (phi_t2_2 == temp_t1) {
                                                            phi_v1_21 = 0U;
                                                        } else {
                                                            phi_v1_21 = temp_t1;
                                                        }
                                                        phi_v0_3 = (phi_t0_5 + (phi_v1_21 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_v0_3 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    if ((phi_v0_3 & 0xFF) >= 0x28) {
                                                        goto block_386;
                                                    }
                                                    goto block_393;
                                                }
block_386:
                                                if (phi_a3_10 == 0) {
                                                    if (phi_t2_2 == temp_t1) {
                                                        phi_v1_22 = 0U;
                                                    } else {
                                                        phi_v1_22 = temp_t1;
                                                    }
                                                    phi_v0_4 = (phi_t0_5 + (phi_v1_22 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_v0_4 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_v0_4 & 0xFF) == 0) {
block_393:
                                                    temp_a1_10 = phi_t0_5 + phi_a3_10;
                                                    if (temp_a1_10->unk_3F18 == 0) {
                                                        phi_t3_12 = 1;
                                                    }
                                                    temp_a1_10->unk_3F18 = 0xFFU;
                                                }
                                            } else if (temp_v0_25 == 0) {
                                                if (phi_a3_10 == 0) {
                                                    if (phi_t2_2 == temp_t1) {
                                                        phi_v1_23 = 0U;
                                                    } else {
                                                        phi_v1_23 = temp_t1;
                                                    }
                                                    phi_a2_27 = (phi_t0_5 + (phi_v1_23 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_a2_27 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_a2_27 & 0xFF) >= 0x28) {
                                                    if (phi_a3_10 == 0) {
                                                        if (phi_t2_2 == temp_t1) {
                                                            phi_v1_24 = 0U;
                                                        } else {
                                                            phi_v1_24 = temp_t1;
                                                        }
                                                        phi_a0_7 = (phi_t0_5 + (phi_v1_24 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_a0_7 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    if ((phi_a0_7 & 0xFF) >= 0x31) {
                                                        goto block_411;
                                                    }
                                                    goto block_432;
                                                }
block_411:
                                                if (phi_a3_10 == 0) {
                                                    if (phi_t2_2 == temp_t1) {
                                                        phi_v1_25 = 0U;
                                                    } else {
                                                        phi_v1_25 = temp_t1;
                                                    }
                                                    phi_v0_5 = (phi_t0_5 + (phi_v1_25 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_v0_5 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_v0_5 & 0xFF) >= 0x12) {
                                                    if (phi_a3_10 == 0) {
                                                        if (phi_t2_2 == temp_t1) {
                                                            phi_v1_26 = 0U;
                                                        } else {
                                                            phi_v1_26 = temp_t1;
                                                        }
                                                        phi_v0_6 = (phi_t0_5 + (phi_v1_26 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_v0_6 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    if ((phi_v0_6 & 0xFF) >= 0x28) {
                                                        goto block_425;
                                                    }
                                                    goto block_432;
                                                }
block_425:
                                                if (phi_a3_10 == 0) {
                                                    if (phi_t2_2 == temp_t1) {
                                                        phi_v1_27 = 0U;
                                                    } else {
                                                        phi_v1_27 = temp_t1;
                                                    }
                                                    phi_v0_7 = (phi_t0_5 + (phi_v1_27 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_v0_7 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_v0_7 & 0xFF) == 0) {
block_432:
                                                    temp_a1_11 = phi_t0_5 + phi_a3_10;
                                                    if (phi_t4_2 == temp_a1_11->unk_3F18) {
                                                        phi_t3_12 = 1;
                                                    }
                                                    temp_a1_11->unk_3F18 = 0U;
                                                }
                                            }
                                            temp_v0_26 = sp28->restrictions.unk_317;
                                            if (temp_v0_26 != 0) {
                                                if (phi_a3_10 == 0) {
                                                    temp_v0_27 = phi_t0_5->playerForm;
                                                    if (phi_t2_2 == temp_v0_27) {
                                                        phi_v1_28 = 0U;
                                                    } else {
                                                        phi_v1_28 = temp_v0_27;
                                                    }
                                                    phi_a2_28 = (phi_t0_5 + (phi_v1_28 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_a2_28 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_a2_28 & 0xFF) >= 0x32) {
                                                    if (phi_a3_10 == 0) {
                                                        temp_v0_28 = phi_t0_5->playerForm;
                                                        if (phi_t2_2 == temp_v0_28) {
                                                            phi_v1_29 = 0U;
                                                        } else {
                                                            phi_v1_29 = temp_v0_28;
                                                        }
                                                        phi_a0_8 = (phi_t0_5 + (phi_v1_29 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_a0_8 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    temp_a1_12 = phi_t0_5 + phi_a3_10;
                                                    if ((phi_a0_8 & 0xFF) < 0x4A) {
                                                        temp_v0_29 = temp_a1_12->unk_3F18;
                                                        temp_a1_12->unk_3F18 = 0xFFU;
                                                        if (temp_v0_29 == 0) {
                                                            goto block_468;
                                                        }
                                                    }
                                                }
                                            } else if (temp_v0_26 == 0) {
                                                if (phi_a3_10 == 0) {
                                                    temp_v0_30 = phi_t0_5->playerForm;
                                                    if (phi_t2_2 == temp_v0_30) {
                                                        phi_v1_30 = 0U;
                                                    } else {
                                                        phi_v1_30 = temp_v0_30;
                                                    }
                                                    phi_a2_29 = (phi_t0_5 + (phi_v1_30 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_a2_29 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_a2_29 & 0xFF) >= 0x32) {
                                                    if (phi_a3_10 == 0) {
                                                        temp_v0_31 = phi_t0_5->playerForm;
                                                        if (phi_t2_2 == temp_v0_31) {
                                                            phi_v1_31 = 0U;
                                                        } else {
                                                            phi_v1_31 = temp_v0_31;
                                                        }
                                                        phi_a0_9 = (phi_t0_5 + (phi_v1_31 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_a0_9 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    temp_a1_13 = phi_t0_5 + phi_a3_10;
                                                    if ((phi_a0_9 & 0xFF) < 0x4A) {
                                                        temp_t6 = temp_a1_13->unk_3F18;
                                                        temp_a1_13->unk_3F18 = 0U;
                                                        if (phi_t4_2 == temp_t6) {
block_468:
                                                            phi_t3_12 = 1;
                                                        }
                                                    }
                                                }
                                            }
                                            temp_v0_32 = sp28->restrictions.pictographBox;
                                            if (temp_v0_32 != 0) {
                                                if (phi_a3_10 == 0) {
                                                    temp_v0_33 = phi_t0_5->playerForm;
                                                    if (phi_t2_2 == temp_v0_33) {
                                                        phi_v1_32 = 0U;
                                                    } else {
                                                        phi_v1_32 = temp_v0_33;
                                                    }
                                                    phi_a2_30 = (phi_t0_5 + (phi_v1_32 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_a2_30 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                temp_a1_14 = phi_t0_5 + phi_a3_10;
                                                if ((phi_a2_30 & 0xFF) == 0xD) {
                                                    temp_v0_34 = temp_a1_14->unk_3F18;
                                                    temp_a1_14->unk_3F18 = 0xFFU;
                                                    if (temp_v0_34 == 0) {
                                                        goto block_488;
                                                    }
                                                }
                                            } else if (temp_v0_32 == 0) {
                                                if (phi_a3_10 == 0) {
                                                    temp_v0_35 = phi_t0_5->playerForm;
                                                    if (phi_t2_2 == temp_v0_35) {
                                                        phi_v1_33 = 0U;
                                                    } else {
                                                        phi_v1_33 = temp_v0_35;
                                                    }
                                                    phi_a2_31 = (phi_t0_5 + (phi_v1_33 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_a2_31 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                temp_a1_15 = phi_t0_5 + phi_a3_10;
                                                if ((phi_a2_31 & 0xFF) == 0xD) {
                                                    temp_t8 = temp_a1_15->unk_3F18;
                                                    temp_a1_15->unk_3F18 = 0U;
                                                    if (phi_t4_2 == temp_t8) {
block_488:
                                                        phi_t3_12 = 1;
                                                    }
                                                }
                                            }
                                            temp_v0_36 = sp28->restrictions.all;
                                            if (temp_v0_36 != 0) {
                                                if (phi_a3_10 == 0) {
                                                    temp_v0_37 = phi_t0_5->playerForm;
                                                    if (phi_t2_2 == temp_v0_37) {
                                                        phi_v1_34 = 0U;
                                                    } else {
                                                        phi_v1_34 = temp_v0_37;
                                                    }
                                                    phi_a2_32 = (phi_t0_5 + (phi_v1_34 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_a2_32 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_a2_32 & 0xFF) >= 0x28) {
                                                    if (phi_a3_10 == 0) {
                                                        temp_v0_38 = phi_t0_5->playerForm;
                                                        if (phi_t2_2 == temp_v0_38) {
                                                            phi_v1_35 = 0U;
                                                        } else {
                                                            phi_v1_35 = temp_v0_38;
                                                        }
                                                        phi_a0_10 = (phi_t0_5 + (phi_v1_35 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_a0_10 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    if ((phi_a0_10 & 0xFF) >= 0x31) {
                                                        goto block_504;
                                                    }
                                                } else {
block_504:
                                                    if (phi_a3_10 == 0) {
                                                        temp_v0_39 = phi_t0_5->playerForm;
                                                        if (phi_t2_2 == temp_v0_39) {
                                                            phi_v1_36 = 0U;
                                                        } else {
                                                            phi_v1_36 = temp_v0_39;
                                                        }
                                                        phi_v0_8 = (phi_t0_5 + (phi_v1_36 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_v0_8 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    if ((phi_v0_8 & 0xFF) >= 0x12) {
                                                        if (phi_a3_10 == 0) {
                                                            temp_v0_40 = phi_t0_5->playerForm;
                                                            if (phi_t2_2 == temp_v0_40) {
                                                                phi_v1_37 = 0U;
                                                            } else {
                                                                phi_v1_37 = temp_v0_40;
                                                            }
                                                            phi_v0_9 = (phi_t0_5 + (phi_v1_37 * 4) + phi_a3_10)->unk_4C;
                                                        } else {
                                                            phi_v0_9 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                        }
                                                        if ((phi_v0_9 & 0xFF) >= 0x28) {
                                                            goto block_518;
                                                        }
                                                    } else {
block_518:
                                                        if (phi_a3_10 == 0) {
                                                            temp_v0_41 = phi_t0_5->playerForm;
                                                            if (phi_t2_2 == temp_v0_41) {
                                                                phi_v1_38 = 0U;
                                                            } else {
                                                                phi_v1_38 = temp_v0_41;
                                                            }
                                                            phi_v0_10 = (phi_t0_5 + (phi_v1_38 * 4) + phi_a3_10)->unk_4C;
                                                        } else {
                                                            phi_v0_10 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                        }
                                                        if ((phi_v0_10 & 0xFF) != 0) {
                                                            if (phi_a3_10 == 0) {
                                                                temp_v0_42 = phi_t0_5->playerForm;
                                                                if (phi_t2_2 == temp_v0_42) {
                                                                    phi_v1_39 = 0U;
                                                                } else {
                                                                    phi_v1_39 = temp_v0_42;
                                                                }
                                                                phi_v0_11 = (phi_t0_5 + (phi_v1_39 * 4) + phi_a3_10)->unk_4C;
                                                            } else {
                                                                phi_v0_11 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                            }
                                                            if ((phi_v0_11 & 0xFF) >= 0x32) {
                                                                if (phi_a3_10 == 0) {
                                                                    temp_v0_43 = phi_t0_5->playerForm;
                                                                    if (phi_t2_2 == temp_v0_43) {
                                                                        phi_v1_40 = 0U;
                                                                    } else {
                                                                        phi_v1_40 = temp_v0_43;
                                                                    }
                                                                    phi_v0_12 = (phi_t0_5 + (phi_v1_40 * 4) + phi_a3_10)->unk_4C;
                                                                } else {
                                                                    phi_v0_12 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                                }
                                                                if ((phi_v0_12 & 0xFF) >= 0x4A) {
                                                                    goto block_539;
                                                                }
                                                            } else {
block_539:
                                                                if (phi_a3_10 == 0) {
                                                                    temp_v0_44 = phi_t0_5->playerForm;
                                                                    if (phi_t2_2 == temp_v0_44) {
                                                                        phi_v1_41 = 0U;
                                                                    } else {
                                                                        phi_v1_41 = temp_v0_44;
                                                                    }
                                                                    phi_v0_13 = (phi_t0_5 + (phi_v1_41 * 4) + phi_a3_10)->unk_4C;
                                                                } else {
                                                                    phi_v0_13 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                                }
                                                                temp_a1_16 = phi_t0_5 + phi_a3_10;
                                                                if (((phi_v0_13 & 0xFF) != 0xD) && (temp_a1_16->unk_3F18 == 0)) {
                                                                    temp_a1_16->unk_3F18 = 0xFFU;
                                                                    phi_t3_12 = 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else if (temp_v0_36 == 0) {
                                                if (phi_a3_10 == 0) {
                                                    temp_v0_45 = phi_t0_5->playerForm;
                                                    if (phi_t2_2 == temp_v0_45) {
                                                        phi_v1_42 = 0U;
                                                    } else {
                                                        phi_v1_42 = temp_v0_45;
                                                    }
                                                    phi_a2_33 = (phi_t0_5 + (phi_v1_42 * 4) + phi_a3_10)->unk_4C;
                                                } else {
                                                    phi_a2_33 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                }
                                                if ((phi_a2_33 & 0xFF) >= 0x28) {
                                                    if (phi_a3_10 == 0) {
                                                        temp_v0_46 = phi_t0_5->playerForm;
                                                        if (phi_t2_2 == temp_v0_46) {
                                                            phi_v1_43 = 0U;
                                                        } else {
                                                            phi_v1_43 = temp_v0_46;
                                                        }
                                                        phi_a0_11 = (phi_t0_5 + (phi_v1_43 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_a0_11 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    if ((phi_a0_11 & 0xFF) >= 0x31) {
                                                        goto block_563;
                                                    }
                                                } else {
block_563:
                                                    if (phi_a3_10 == 0) {
                                                        temp_v0_47 = phi_t0_5->playerForm;
                                                        if (phi_t2_2 == temp_v0_47) {
                                                            phi_v1_44 = 0U;
                                                        } else {
                                                            phi_v1_44 = temp_v0_47;
                                                        }
                                                        phi_v0_14 = (phi_t0_5 + (phi_v1_44 * 4) + phi_a3_10)->unk_4C;
                                                    } else {
                                                        phi_v0_14 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                    }
                                                    if ((phi_v0_14 & 0xFF) >= 0x12) {
                                                        if (phi_a3_10 == 0) {
                                                            temp_v0_48 = phi_t0_5->playerForm;
                                                            if (phi_t2_2 == temp_v0_48) {
                                                                phi_v1_45 = 0U;
                                                            } else {
                                                                phi_v1_45 = temp_v0_48;
                                                            }
                                                            phi_v0_15 = (phi_t0_5 + (phi_v1_45 * 4) + phi_a3_10)->unk_4C;
                                                        } else {
                                                            phi_v0_15 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                        }
                                                        if ((phi_v0_15 & 0xFF) >= 0x28) {
                                                            goto block_577;
                                                        }
                                                    } else {
block_577:
                                                        if (phi_a3_10 == 0) {
                                                            temp_v0_49 = phi_t0_5->playerForm;
                                                            if (phi_t2_2 == temp_v0_49) {
                                                                phi_v1_46 = 0U;
                                                            } else {
                                                                phi_v1_46 = temp_v0_49;
                                                            }
                                                            phi_v0_16 = (phi_t0_5 + (phi_v1_46 * 4) + phi_a3_10)->unk_4C;
                                                        } else {
                                                            phi_v0_16 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                        }
                                                        if ((phi_v0_16 & 0xFF) != 0) {
                                                            if (phi_a3_10 == 0) {
                                                                temp_v0_50 = phi_t0_5->playerForm;
                                                                if (phi_t2_2 == temp_v0_50) {
                                                                    phi_v1_47 = 0U;
                                                                } else {
                                                                    phi_v1_47 = temp_v0_50;
                                                                }
                                                                phi_v0_17 = (phi_t0_5 + (phi_v1_47 * 4) + phi_a3_10)->unk_4C;
                                                            } else {
                                                                phi_v0_17 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                            }
                                                            if ((phi_v0_17 & 0xFF) >= 0x32) {
                                                                if (phi_a3_10 == 0) {
                                                                    temp_v0_51 = phi_t0_5->playerForm;
                                                                    if (phi_t2_2 == temp_v0_51) {
                                                                        phi_v1_48 = 0U;
                                                                    } else {
                                                                        phi_v1_48 = temp_v0_51;
                                                                    }
                                                                    phi_v0_18 = (phi_t0_5 + (phi_v1_48 * 4) + phi_a3_10)->unk_4C;
                                                                } else {
                                                                    phi_v0_18 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                                }
                                                                if ((phi_v0_18 & 0xFF) >= 0x4A) {
                                                                    goto block_598;
                                                                }
                                                            } else {
block_598:
                                                                if (phi_a3_10 == 0) {
                                                                    temp_v0_52 = phi_t0_5->playerForm;
                                                                    if (phi_t2_2 == temp_v0_52) {
                                                                        phi_v1_49 = 0U;
                                                                    } else {
                                                                        phi_v1_49 = temp_v0_52;
                                                                    }
                                                                    phi_v0_19 = (phi_t0_5 + (phi_v1_49 * 4) + phi_a3_10)->unk_4C;
                                                                } else {
                                                                    phi_v0_19 = (phi_t0_5 + phi_a3_10)->unk_4C;
                                                                }
                                                                temp_a1_17 = phi_t0_5 + phi_a3_10;
                                                                phi_a1_7 = temp_a1_17;
                                                                if (((phi_v0_19 & 0xFF) != 0xD) && (phi_t4_2 == temp_a1_17->unk_3F18)) {
block_607:
                                                                    phi_a1_7->unk_3F18 = 0;
                                                                    phi_t3_12 = 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            temp_a3_10 = phi_a3_10 + 1;
                            phi_a3_10 = temp_a3_10;
                            phi_t3_5 = phi_t3_12;
                            phi_t3_15 = phi_t3_12;
                        } while ((s32) temp_a3_10 < 4);
                    }
                }
            }
        }
    }
    if ((phi_t3_5 != 0) && (arg0->activeCamera == 0) && (arg0->sceneLoadFlag == 0) && (arg0->unk_18B4A == 0)) {
        phi_t0_6->unk_3F22 = 0;
        Interface_ChangeAlpha(0x32U);
    }
}

void func_80111CB4(GlobalContext *arg0) {
    void *sp30;
    s32 sp28;
    void *sp18;
    InterfaceContext *temp_v0_7;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_8;
    s32 temp_v0_9;
    u16 temp_v0_16;
    u16 temp_v0_5;
    u8 temp_v0_10;
    u8 temp_v0_11;
    u8 temp_v0_12;
    u8 temp_v0_13;
    u8 temp_v0_14;
    u8 temp_v0_15;
    u8 temp_v0_17;
    u8 temp_v1;
    void *temp_t0;
    void *temp_t7;
    void *temp_v0_4;
    void *temp_v0_6;
    s32 phi_a0;
    s32 phi_a0_2;
    s32 phi_a0_3;
    s32 phi_a1;
    u8 phi_a1_2;
    u8 phi_a1_3;
    u8 phi_a0_4;
    u8 phi_v1;
    u8 phi_a1_4;
    u8 phi_a1_5;
    u8 phi_a1_6;
    u8 phi_a1_7;
    u8 phi_a1_8;
    u8 phi_a1_9;
    SaveContext *phi_a3;
    void *phi_t0;
    void *phi_t0_2;
    SaveContext *phi_a3_2;
    SaveContext *phi_a3_3;
    u8 phi_v0;
    u8 phi_a1_10;
    u8 phi_a1_11;
    u8 phi_a1_12;
    u8 phi_a1_13;
    u8 phi_a1_14;
    s32 phi_t1;
    SaveContext *phi_a3_4;
    s8 phi_v1_2;
    void *phi_t0_3;
    SaveContext *phi_a3_5;

    temp_t7 = arg0->actorCtx.actorList[2].first;
    sp28 = 0;
    sp30 = temp_t7;
    phi_a3 = &gSaveContext;
    phi_a3_2 = &gSaveContext;
    phi_a3_5 = &gSaveContext;
    if (gSaveContext.cutscene < 0xFFF0) {
        gSaveContext.unk_3F1E = 0;
        temp_v0 = temp_t7->unk_A6C & 0x800000;
        if ((temp_v0 != 0) || ((gSaveContext.weekEventReg[8] & 1) != 0) || ((temp_a0 = gSaveContext.eventInf[4] & 2, phi_a0_2 = temp_a0, (temp_a0 == 0)) && ((s32) arg0->unk_1887C >= 2))) {
            if ((temp_v0 != 0) && (sp30->unk_153 == 0x12) && (gSaveContext.unk_1015 == 0xFF)) {
                sp28 = 1;
                gSaveContext.unk_1015 = 0;
            }
            temp_v0_10 = gSaveContext.playerForm;
            phi_a1_2 = temp_v0_10;
            phi_v0 = temp_v0_10;
            phi_t1 = 0xFF;
            if (temp_v0_10 == 4) {
                phi_a1_2 = 0U;
            }
            if ((&gSaveContext + (phi_a1_2 * 4))->unk_4C != 0xFF) {
                if ((sp30->unk_14B == 3) && ((gSaveContext.weekEventReg[8] & 1) != 0)) {
                    gSaveContext.unk_3F1E = 1;
                    if (arg0->sceneNum == 0x11) {
                        if (gSaveContext.buttonStatus[0] == 0xFF) {
                            gSaveContext.buttonStatus[0] = 0;
                            gSaveContext.buttonStatus[1] = 0xFF;
                            gSaveContext.buttonStatus[2] = 0xFF;
                            gSaveContext.buttonStatus[3] = 0xFF;
                        }
                    } else if (gSaveContext.buttonStatus[0] == 0xFF) {
                        gSaveContext.buttonStatus[0] = 0;
                        gSaveContext.buttonStatus[1] = 0;
                        gSaveContext.buttonStatus[2] = 0;
                        gSaveContext.buttonStatus[3] = 0;
                    }
                    Interface_ChangeAlpha(0x14U);
                    goto block_165;
                }
                temp_t0 = arg0 + 0x18000;
                phi_t0 = temp_t0;
                phi_t0_2 = temp_t0;
                if (temp_v0_10 == 4) {
                    phi_a1_3 = 0U;
                } else {
                    phi_a1_3 = temp_v0_10;
                }
                if ((&gSaveContext + (phi_a1_3 * 4))->unk_4C != 1) {
                    phi_a0_4 = temp_v0_10;
                    if (temp_v0_10 == 4) {
                        phi_a0_4 = 0U;
                    }
                    if ((&gSaveContext + (phi_a0_4 * 4))->unk_4C != 6) {
                        phi_v1 = temp_v0_10;
                        if (temp_v0_10 == 4) {
                            phi_v1 = 0U;
                        }
                        if ((&gSaveContext + (phi_v1 * 4))->unk_4C != 7) {
                            gSaveContext.unk_3F1E = 1;
                            if (temp_v0_10 == 4) {
                                phi_a1_4 = 0U;
                            } else {
                                phi_a1_4 = temp_v0_10;
                            }
                            gSaveContext.buttonStatus[1] = 0;
                            gSaveContext.buttonStatus[2] = 0;
                            gSaveContext.buttonStatus[3] = 0;
                            gSaveContext.buttonStatus[0] = (&gSaveContext + (phi_a1_4 * 4))->unk_4C;
                            if (arg0->sceneNum == 0x11) {
                                temp_hi = (s32) gSaveContext.day % 5;
                                if (temp_hi == 1) {
                                    temp_v0_11 = gSaveContext.playerForm;
                                    phi_a1_5 = temp_v0_11;
                                    if (temp_v0_11 == 4) {
                                        phi_a1_5 = 0U;
                                    }
                                    (&gSaveContext + (phi_a1_5 * 4))->unk_4C = 7;
                                } else if (temp_hi == 2) {
                                    temp_v0_12 = gSaveContext.playerForm;
                                    phi_a1_6 = temp_v0_12;
                                    if (temp_v0_12 == 4) {
                                        phi_a1_6 = 0U;
                                    }
                                    (&gSaveContext + (phi_a1_6 * 4))->unk_4C = 6;
                                } else {
                                    temp_v0_13 = gSaveContext.playerForm;
                                    phi_a1_7 = temp_v0_13;
                                    if (temp_v0_13 == 4) {
                                        phi_a1_7 = 0U;
                                    }
                                    (&gSaveContext + (phi_a1_7 * 4))->unk_4C = 1U;
                                }
                                sp18 = temp_t0;
                                func_80112B40(arg0, 0);
                                gSaveContext.buttonStatus[1] = 0xFF;
                                gSaveContext.buttonStatus[2] = 0xFF;
                                gSaveContext.buttonStatus[3] = 0xFF;
                                phi_t0_2 = temp_t0;
                            } else {
                                temp_v0_14 = gSaveContext.playerForm;
                                phi_a1_8 = temp_v0_14;
                                if (temp_v0_14 == 4) {
                                    phi_a1_8 = 0U;
                                }
                                (&gSaveContext + (phi_a1_8 * 4))->unk_4C = 1U;
                                phi_a1_9 = (u8) 0;
                                if ((s32) arg0->unk_1887C >= 2) {
                                    sp18 = temp_t0;
                                    func_80112B40(arg0, 0);
                                    goto block_55;
                                }
                                if (gSaveContext.inventory.items[1] == 0xFF) {
                                    temp_v0_15 = gSaveContext.playerForm;
                                    phi_a1_9 = temp_v0_15;
                                    if (temp_v0_15 == 4) {

                                    }
                                    (&gSaveContext + (phi_a1_9 * 4))->unk_4C = 0xFF;
                                } else {
                                    sp18 = temp_t0;
                                    func_80112B40(arg0, 0);
block_55:
                                    phi_a3 = &gSaveContext;
                                    phi_t0 = arg0 + 0x18000;
                                }
                                phi_a3->buttonStatus[1] = 0xFF;
                                phi_a3->buttonStatus[2] = 0xFF;
                                phi_a3->buttonStatus[3] = 0xFF;
                                sp18 = phi_t0;
                                Interface_ChangeAlpha(6U);
                                phi_t0_2 = phi_t0;
                            }
                            phi_a3_2 = &gSaveContext;
                        }
                    }
                }
                phi_a3_3 = phi_a3_2;
                if (phi_t0_2->unk_B4A != 0) {
                    Interface_ChangeAlpha(1U);
                    goto block_165;
                }
                if ((phi_a3_2->minigameState == 1) && (phi_a3_2->entranceIndex == 0x6400) && (sp18 = phi_t0_2, phi_a3_3 = &gSaveContext, (func_800EE1D8(arg0) != 0)) && (phi_t0_2->unk_875 == 0)) {
                    Interface_ChangeAlpha(0xCU);
                    goto block_165;
                }
                temp_v0_16 = phi_a3_3->minigameState;
                phi_a3_5 = phi_a3_3;
                if ((temp_v0_16 == 1) && ((phi_a3_3->eventInf[3] & 0x20) != 0)) {
                    Interface_ChangeAlpha(0x11U);
                    goto block_165;
                }
                if (((phi_a3_3->weekEventReg[82] & 8) == 0) && (temp_v0_16 == 1)) {
                    Interface_ChangeAlpha(8U);
                    goto block_165;
                }
                if ((s32) phi_t0_2->unk_87C >= 2) {
                    Interface_ChangeAlpha(8U);
                    goto block_165;
                }
                if ((phi_a3_3->weekEventReg[8] & 1) != 0) {
                    phi_a3_3->buttonStatus[1] = 0xFF;
                    phi_a3_3->buttonStatus[2] = 0xFF;
                    phi_a3_3->buttonStatus[3] = 0xFF;
                    Interface_ChangeAlpha(0xCU);
                    goto block_165;
                }
                if (sp30->unk_A6C & 0x800000) {
                    Interface_ChangeAlpha(0xCU);
                    goto block_165;
                }
            } else {
                if (sp30->unk_A6C & 0x800000) {
                    sp18 = arg0 + 0x18000;
                    Interface_ChangeAlpha(0xCU);
                    phi_v0 = gSaveContext.playerForm;
                }
                phi_t1 = 0xFF;
                phi_a3_4 = &gSaveContext;
                phi_t0_3 = arg0 + 0x18000;
                if (arg0->sceneNum == 0x11) {
                    temp_hi_2 = (s32) gSaveContext.day % 5;
                    if (temp_hi_2 == 1) {
                        phi_a1_10 = phi_v0;
                        if (phi_v0 == 4) {
                            phi_a1_10 = 0U;
                        }
                        (&gSaveContext + (phi_a1_10 * 4))->unk_4C = 7;
                    } else if (temp_hi_2 == 2) {
                        if (phi_v0 == 4) {
                            phi_a1_11 = 0U;
                        } else {
                            phi_a1_11 = phi_v0;
                        }
                        (&gSaveContext + (phi_a1_11 * 4))->unk_4C = 6;
                    } else {
                        phi_a1_12 = phi_v0;
                        if (phi_v0 == 4) {
                            phi_a1_12 = 0U;
                        }
                        (&gSaveContext + (phi_a1_12 * 4))->unk_4C = 1;
                    }
                    gSaveContext.buttonStatus[1] = 0xFF;
                    gSaveContext.buttonStatus[2] = 0xFF;
                    gSaveContext.buttonStatus[3] = 0xFF;
                } else {
                    phi_a1_13 = phi_v0;
                    if (phi_v0 == 4) {
                        phi_a1_13 = 0U;
                    }
                    (&gSaveContext + (phi_a1_13 * 4))->unk_4C = 1;
                }
                phi_a1_14 = (u8) 0;
                phi_v1_2 = 0xFFU;
                if ((s32) (arg0 + 0x18000)->unk_87C >= 2) {
                    sp18 = arg0 + 0x18000;
                    func_80112B40(arg0, 0);
                    goto block_103;
                }
                if (gSaveContext.inventory.items[1] == 0xFF) {
                    temp_v0_17 = gSaveContext.playerForm;
                    phi_a1_14 = temp_v0_17;
                    if (temp_v0_17 == 4) {

                    }
                    (&gSaveContext + (phi_a1_14 * 4))->unk_4C = 0xFFU;
                } else {
                    sp18 = arg0 + 0x18000;
                    func_80112B40(arg0, 0);
block_103:
                    phi_a3_4 = &gSaveContext;
                    phi_v1_2 = 0xFFU;
                    phi_t0_3 = arg0 + 0x18000;
                }
                if (phi_t1 == phi_a3_4->buttonStatus[0]) {
                    phi_a3_4->buttonStatus[0] = 0;
                    sp28 = 1;
                }
                phi_a3_4->buttonStatus[1] = phi_v1_2;
                phi_a3_4->buttonStatus[2] = phi_v1_2;
                phi_a3_4->buttonStatus[3] = phi_v1_2;
                sp18 = phi_t0_3;
                Interface_ChangeAlpha(6U);
                if (phi_t0_3->unk_B4A != 0) {
                    Interface_ChangeAlpha(1U);
                    goto block_165;
                }
                if ((gSaveContext.minigameState == 1) && (gSaveContext.entranceIndex == 0x6400) && (sp18 = phi_t0_3, (func_800EE1D8(arg0) != 0)) && (phi_t0_3->unk_875 == 0)) {
                    Interface_ChangeAlpha(0xCU);
                    goto block_165;
                }
                phi_a3_5 = &gSaveContext;
                if (gSaveContext.minigameState == 1) {
                    Interface_ChangeAlpha(8U);
                    goto block_165;
                }
                if ((s32) phi_t0_3->unk_87C >= 2) {
                    Interface_ChangeAlpha(8U);
                    goto block_165;
                }
                if ((gSaveContext.weekEventReg[8] & 1) != 0) {
                    gSaveContext.buttonStatus[1] = 0xFF;
                    gSaveContext.buttonStatus[2] = 0xFF;
                    gSaveContext.buttonStatus[3] = 0xFF;
                    Interface_ChangeAlpha(0xCU);
                    goto block_165;
                }
                if (sp30->unk_A6C & 0x800000) {
                    Interface_ChangeAlpha(0xCU);
                    goto block_165;
                }
            }
        } else {
            temp_v0_2 = D_801BF884;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 == 1) {
                    temp_v1 = arg0->actorCtx.unk5;
                    if ((temp_v1 & 4) == 0) {
                        temp_v0_3 = arg0->unk_18E5C;
                        if (temp_v0_3 != 0) {
                            phi_a0 = temp_v0_3;
                        } else {
                            phi_a0 = D_801FBB90;
                        }
                        func_801663C4(phi_a0, gSaveContext.pictoPhoto, 0x4600, &gSaveContext);
                        temp_v0_4 = arg0 + 0x169E8;
                        temp_v0_4->unk_224 = 0;
                        temp_v0_4->unk_222 = (s16) temp_v0_4->unk_224;
                        sp28 = 1;
                        D_801BF884 = 0;
                        phi_a3_5 = &gSaveContext;
                    } else {
                        temp_v0_5 = arg0->state.input[0].press.button;
                        if (~(temp_v0_5 | ~0x4000) == 0) {
                            arg0->actorCtx.unk5 = temp_v1 & 0xFFFB;
                            temp_v0_6 = arg0 + 0x169E8;
                            temp_v0_6->unk_224 = 0;
                            temp_v0_6->unk_222 = (s16) temp_v0_6->unk_224;
                            sp28 = 1;
                            D_801BF884 = 0;
                        } else if (~(temp_v0_5 | 0xFFFF7FFF) != 0) {
                            phi_a3_5 = &gSaveContext;
                            if (func_801A5100(temp_a0, &gSaveContext) == 1) {
                                phi_a0_2 = gSaveContext.eventInf[4] & 2;
                                goto block_133;
                            }
                        } else {
block_133:
                            phi_a3_5 = &gSaveContext;
                            if ((phi_a0_2 == 0) || ((phi_a0_2 != 0) && (phi_a3_5 = &gSaveContext, (ActorCutscene_GetCurrentIndex() == -1)))) {
                                play_sound(0x4850U);
                                gGameInfo->data[185] = 1;
                                arg0->unk_18845 = 1;
                                D_801BF884 = 2;
                                D_801BF888 = 1;
                                phi_a3_5 = &gSaveContext;
                            }
                        }
                    }
                } else if ((s32) temp_v0_2 >= 2) {
                    phi_a3_5 = &gSaveContext;
                    if (func_80152498(arg0 + 0x4908) == 4) {
                        phi_a3_5 = &gSaveContext;
                        if (func_80147624(arg0) != 0) {
                            arg0->unk_18845 = 0;
                            sp30->unk_A6C = (s32) (sp30->unk_A6C & ~0x200);
                            func_801477B4(arg0);
                            if (arg0->msgCtx.choiceIndex != 0) {
                                func_8019F230();
                                func_80115844(arg0, 0x12);
                                Interface_ChangeAlpha(0x15U);
                                D_801BF884 = 1;
                                gSaveContext.inventory.questItems &= -1 - *(gBitFlags + 0x64);
                                phi_a3_5 = &gSaveContext;
                            } else {
                                func_8019F208();
                                temp_v0_7 = &arg0->interfaceCtx;
                                temp_v0_7->unk_224 = 0;
                                temp_v0_7->unk_222 = temp_v0_7->unk_224;
                                sp28 = 1;
                                Interface_ChangeAlpha(0x32U);
                                D_801BF884 = 0;
                                if (D_801BF888 != 0) {
                                    temp_v0_8 = arg0->unk_18E5C;
                                    if (temp_v0_8 != 0) {
                                        phi_a0_3 = temp_v0_8;
                                    } else {
                                        phi_a0_3 = D_801FBB90;
                                    }
                                    func_801663C4(phi_a0_3, gSaveContext.pictoPhoto, 0x4600, &gSaveContext);
                                    func_8013A240(arg0);
                                }
                                arg0->actorCtx.unk5 &= 0xFFFB;
                                gSaveContext.inventory.questItems |= *(gBitFlags + 0x64);
                                D_801BF888 = 0;
                                phi_a3_5 = &gSaveContext;
                            }
                        }
                    }
                }
            } else {
                if ((gSaveContext.minigameState == 1) && (gSaveContext.entranceIndex == 0x8E10) && (arg0->sceneLoadFlag == 0) && (arg0->unk_18B4A == 0)) {
                    gSaveContext.buttonStatus[1] = 0xFF;
                    gSaveContext.buttonStatus[2] = 0xFF;
                    gSaveContext.buttonStatus[3] = 0xFF;
                    Interface_ChangeAlpha(0xCU);
                    goto block_165;
                }
                if ((gSaveContext.entranceIndex == 0xD010) && (arg0->sceneLoadFlag == 0) && (arg0->unk_18B4A == 0)) {
                    gSaveContext.buttonStatus[1] = 0xFF;
                    gSaveContext.buttonStatus[2] = 0xFF;
                    gSaveContext.buttonStatus[3] = 0xFF;
                    Interface_ChangeAlpha(0x16U);
                    goto block_165;
                }
                if ((arg0->actorCtx.unk5 & 4) != 0) {
                    if ((*(gBitFlags + 0x64) & gSaveContext.inventory.questItems) == 0) {
                        func_80115844(arg0, 0x12);
                        Interface_ChangeAlpha(0x15U);
                        D_801BF884 = 1;
                        phi_a3_5 = &gSaveContext;
                    } else {
                        temp_v0_9 = arg0->unk_18E5C;
                        if (temp_v0_9 != 0) {
                            phi_a1 = temp_v0_9;
                        } else {
                            phi_a1 = D_801FBB90;
                        }
                        func_80166644(gSaveContext.pictoPhoto, phi_a1, 0x4600, &gSaveContext);
                        arg0->unk_18845 = 1;
                        D_801BF884 = 2;
                        phi_a3_5 = &gSaveContext;
                    }
                } else {
                    func_80110038(arg0, &gSaveContext);
block_165:
                    phi_a3_5 = &gSaveContext;
                }
            }
        }
    }
    if (sp28 != 0) {
        phi_a3_5->unk_3F22 = 0;
        if ((arg0->sceneLoadFlag == 0) && (arg0->unk_18B4A == 0)) {
            Interface_ChangeAlpha(0x32U);
        }
    }
}

void func_801129E4(void *arg0) {
    s16 temp_v0;
    u8 *temp_a1;
    u8 temp_a2;
    void *temp_v0_2;
    u8 phi_a2;
    u8 *phi_a1;
    s16 phi_v0;

    phi_a2 = *D_801BF6C0;
    phi_a1 = D_801BF6C0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    if (arg0->unk_A5 == phi_a2) {
        temp_v0_2 = arg0 + 0x169E8;
        temp_v0_2->unk_30E = (s8) ((s32) (phi_a1->unk_1 & 0xC0) >> 6);
        temp_v0_2->unk_30F = (s8) ((s32) (phi_a1->unk_1 & 0x30) >> 4);
        temp_v0_2->unk_310 = (s8) ((s32) (phi_a1->unk_1 & 0xC) >> 2);
        temp_v0_2->unk_311 = (s8) (phi_a1->unk_1 & 3);
        temp_v0_2->unk_312 = (s8) ((s32) (phi_a1->unk_2 & 0xC0) >> 6);
        temp_v0_2->unk_313 = (s8) ((s32) (phi_a1->unk_2 & 0x30) >> 4);
        temp_v0_2->unk_314 = (s8) ((s32) (phi_a1->unk_2 & 0xC) >> 2);
        temp_v0_2->unk_315 = (s8) (phi_a1->unk_2 & 3);
        temp_v0_2->unk_316 = (s8) ((s32) (phi_a1->unk_3 & 0xC0) >> 6);
        temp_v0_2->unk_317 = (s8) ((s32) (phi_a1->unk_3 & 0x30) >> 4);
        temp_v0_2->unk_318 = (s8) ((s32) (phi_a1->unk_3 & 0xC) >> 2);
        temp_v0_2->unk_319 = (s8) (phi_a1->unk_3 & 3);
        return;
    }
    temp_a1 = D_801BF6C0 + (temp_v0 * 4);
    temp_a2 = *temp_a1;
    phi_a2 = temp_a2;
    phi_a1 = temp_a1;
    phi_v0 = temp_v0;
    if (temp_a2 == 0xFF) {
        return;
    }
    goto loop_1;
}

void func_80112AF4(void) {

}

void func_80112AFC(GlobalContext *globalCtx) {
    gSaveContext.minigameState = 1;
    gSaveContext.minigameScore = 0;
    gSaveContext.unk_3F3C = 0;
    D_801BF88C = 0;
    globalCtx->interfaceCtx.unk_262 = 0;
    globalCtx->interfaceCtx.unk_25E = 0;
    globalCtx->interfaceCtx.unk_25C = 0;
    globalCtx->interfaceCtx.hbaAmmo = 0x14;
}

void func_80112B40(GlobalContext *globalCtx, s32 arg1) {
    u8 temp_v0;
    u8 phi_v0;
    u8 phi_v1;

    if ((u8) arg1 == 0) {
        temp_v0 = gSaveContext.playerForm;
        phi_v1 = temp_v0;
        if (temp_v0 == 4) {
            phi_v1 = 0U;
        }
        phi_v0 = (&gSaveContext + (phi_v1 * 4) + (u8) arg1)->unk_4C;
    } else {
        phi_v0 = gSaveContext.equips.buttonItems[0][(u8) arg1];
    }
    func_80178E3C(_icon_item_static_testSegmentRomStart, phi_v0 & 0xFF, globalCtx->interfaceCtx.iconItemSegment + ((u8) arg1 << 0xC), 0x1000);
}

void func_80112BE4(GlobalContext *arg0, s32 arg1) {
    func_80112B40(arg0, arg1 & 0xFF);
}

void func_80112C0C(GlobalContext *arg0, s32 arg1) {
    s32 temp_a1;
    u8 temp_a3;
    u8 temp_v1;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;
    u8 phi_v0_4;
    u8 phi_v0_5;
    u8 phi_v0_6;
    u8 phi_v0_7;
    u8 phi_v0_8;
    u8 phi_v0_9;
    u8 phi_v0_10;
    u8 phi_v0_11;
    u8 phi_v0_12;
    SaveContext *phi_a2;

    temp_a1 = arg1 & 0xFFFF;
    if (temp_a1 != 0) {
        temp_v1 = gSaveContext.playerForm;
        phi_v0 = temp_v1;
        phi_a2 = &gSaveContext;
        if (temp_v1 == 4) {
            phi_v0 = 0U;
        }
        if ((&gSaveContext + (phi_v0 * 4))->unk_4C != 1) {
            phi_v0_2 = temp_v1;
            if (temp_v1 == 4) {
                phi_v0_2 = 0U;
            }
            if ((&gSaveContext + (phi_v0_2 * 4))->unk_4C != 6) {
                phi_v0_3 = temp_v1;
                if (temp_v1 == 4) {
                    phi_v0_3 = 0U;
                }
                if ((&gSaveContext + (phi_v0_3 * 4))->unk_4C != 7) {
                    phi_v0_4 = temp_v1;
                    if (temp_v1 == 4) {
                        phi_v0_4 = 0U;
                    }
                    if (((&gSaveContext + (phi_v0_4 * 4))->unk_4C == 0x5C) || (temp_a3 = gSaveContext.buttonStatus[0], (temp_a3 == 0xFF))) {
                        goto block_14;
                    }
                    phi_v0_5 = temp_v1;
                    if (temp_v1 == 4) {
                        phi_v0_5 = 0U;
                    }
                    if ((&gSaveContext + (phi_v0_5 * 4))->unk_4C == 0xFF) {
                        phi_v0_6 = temp_v1;
                        if (temp_v1 == 4) {
                            phi_v0_6 = 0U;
                        }
                        if ((&gSaveContext + (phi_v0_6 * 4))->unk_4C != 0xFF) {
                            if (temp_v1 == 4) {
                                phi_v0_7 = 0U;
                            } else {
                                phi_v0_7 = temp_v1;
                            }
                            (&gSaveContext + (phi_v0_7 * 4))->unk_4C = temp_a3;
                            func_80112B40(arg0, 0);
                            goto block_40;
                        }
                    }
                } else {
                    goto block_14;
                }
            } else {
                goto block_14;
            }
        } else {
block_14:
            phi_v0_8 = temp_v1;
            if (temp_v1 == 4) {
                phi_v0_8 = 0U;
            }
            if ((&gSaveContext + (phi_v0_8 * 4))->unk_4C != 1) {
                phi_v0_9 = temp_v1;
                if (temp_v1 == 4) {
                    phi_v0_9 = 0U;
                }
                if ((&gSaveContext + (phi_v0_9 * 4))->unk_4C != 6) {
                    phi_v0_10 = temp_v1;
                    if (temp_v1 == 4) {
                        phi_v0_10 = 0U;
                    }
                    if ((&gSaveContext + (phi_v0_10 * 4))->unk_4C != 7) {
                        phi_v0_11 = temp_v1;
                        if (temp_v1 == 4) {
                            phi_v0_11 = 0U;
                        }
                        if ((&gSaveContext + (phi_v0_11 * 4))->unk_4C == 0x5C) {
                            goto block_26;
                        }
                    } else {
                        goto block_26;
                    }
                } else {
                    goto block_26;
                }
            } else {
block_26:
                if (temp_v1 == 4) {
                    phi_v0_12 = 0U;
                } else {
                    phi_v0_12 = temp_v1;
                }
                (&gSaveContext + (phi_v0_12 * 4))->unk_4C = (u8) gSaveContext.buttonStatus[0];
                func_80112B40(arg0, 0);
block_40:
                phi_a2 = &gSaveContext;
            }
        }
        phi_a2->buttonStatus[0] = 0;
        phi_a2->buttonStatus[1] = 0;
        phi_a2->buttonStatus[2] = 0;
        phi_a2->buttonStatus[3] = 0;
        Interface_ChangeAlpha(7U);
        return;
    }
    gSaveContext.buttonStatus[0] = 0;
    gSaveContext.buttonStatus[1] = 0;
    gSaveContext.buttonStatus[2] = 0;
    gSaveContext.buttonStatus[3] = 0;
    func_80111CB4(arg0, temp_a1, &gSaveContext);
}

/*
Failed to decompile function Item_Give:

Label L80113154 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

/*
Failed to decompile function func_801143CC:

Label L8011449C refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

s32 func_80114978(s32 arg0) {
    return func_801143CC(arg0 & 0xFF);
}

void func_801149A0(s16 arg0, s16 arg1) {
    s16 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    s16 phi_v0;
    u8 phi_a1;
    u8 phi_a1_2;
    u8 phi_a1_3;
    u8 phi_a0;

    gSaveContext.inventory.items[arg1] = 0xFF;
    phi_v0 = 1;
    do {
        if (phi_v0 == 0) {
            temp_v1 = gSaveContext.playerForm;
            phi_a0 = temp_v1;
            if (temp_v1 == 4) {
                phi_a0 = 0U;
            }
            phi_a1 = (&gSaveContext + (phi_a0 * 4) + phi_v0)->unk_4C;
        } else {
            phi_a1 = gSaveContext.equips.buttonItems[0][phi_v0];
        }
        if (arg0 == (phi_a1 & 0xFF)) {
            if (phi_v0 == 0) {
                temp_v1_2 = gSaveContext.playerForm;
                phi_a1_2 = temp_v1_2;
                if (temp_v1_2 == 4) {
                    phi_a1_2 = 0U;
                }
                (&gSaveContext + (phi_a1_2 * 4) + phi_v0)->unk_4C = 0xFFU;
            } else {
                gSaveContext.equips.buttonItems[0][phi_v0] = 0xFF;
            }
            if (phi_v0 == 0) {
                temp_v1_3 = gSaveContext.playerForm;
                phi_a1_3 = temp_v1_3;
                if (temp_v1_3 == 4) {
                    phi_a1_3 = 0U;
                }
                (&gSaveContext + (phi_a1_3 * 4) + phi_v0)->unk_5C = 0xFFU;
            } else {
                gSaveContext.equips.cButtonSlots[0][phi_v0] = 0xFF;
            }
        }
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
    } while ((s32) temp_v0 < 4);
}

void func_80114A9C(s16 arg0) {
    s16 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    s16 phi_v0;
    u8 phi_a1;
    u8 phi_a1_2;
    u8 phi_a1_3;
    u8 phi_a0;

    phi_v0 = 1;
    do {
        if (phi_v0 == 0) {
            temp_v1 = gSaveContext.playerForm;
            phi_a0 = temp_v1;
            if (temp_v1 == 4) {
                phi_a0 = 0U;
            }
            phi_a1 = (&gSaveContext + (phi_a0 * 4) + phi_v0)->unk_4C;
        } else {
            phi_a1 = gSaveContext.equips.buttonItems[0][phi_v0];
        }
        if (arg0 == (phi_a1 & 0xFF)) {
            if (phi_v0 == 0) {
                temp_v1_2 = gSaveContext.playerForm;
                phi_a1_2 = temp_v1_2;
                if (temp_v1_2 == 4) {
                    phi_a1_2 = 0U;
                }
                (&gSaveContext + (phi_a1_2 * 4) + phi_v0)->unk_4C = 0xFFU;
            } else {
                gSaveContext.equips.buttonItems[0][phi_v0] = 0xFF;
            }
            if (phi_v0 == 0) {
                temp_v1_3 = gSaveContext.playerForm;
                phi_a1_3 = temp_v1_3;
                if (temp_v1_3 == 4) {
                    phi_a1_3 = 0U;
                }
                (&gSaveContext + (phi_a1_3 * 4) + phi_v0)->unk_5C = 0xFFU;
            } else {
                gSaveContext.equips.cButtonSlots[0][phi_v0] = 0xFF;
            }
        }
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
    } while ((s32) temp_v0 < 4);
}

? func_80114B84(GlobalContext *arg0, s32 arg1, u8 arg2) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a3_2;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_a3;
    s32 phi_a2;
    u8 phi_a0;
    u8 phi_a0_2;
    s32 phi_a3_2;
    u8 phi_v1;

    temp_a1 = arg1 & 0xFF;
    phi_a3 = 0;
loop_1:
    temp_a3 = (phi_a3 + 1) & 0xFF;
    phi_a3 = temp_a3;
    if (temp_a1 == gSaveContext.inventory.items[phi_a3]) {
        gSaveContext.inventory.items[phi_a3] = arg2;
        phi_a2 = 1;
        phi_a3_2 = 1;
loop_3:
        if (phi_a2 == 0) {
            temp_v0 = gSaveContext.playerForm;
            phi_v1 = temp_v0;
            if (temp_v0 == 4) {
                phi_v1 = 0U;
            }
            phi_a0 = (&gSaveContext + (phi_v1 * 4) + phi_a3_2)->unk_4C;
        } else {
            phi_a0 = gSaveContext.equips.buttonItems[0][phi_a3_2];
        }
        if (temp_a1 == (phi_a0 & 0xFF)) {
            if (phi_a2 == 0) {
                temp_v0_2 = gSaveContext.playerForm;
                phi_a0_2 = temp_v0_2;
                if (temp_v0_2 == 4) {
                    phi_a0_2 = 0U;
                }
                (&gSaveContext + (phi_a0_2 * 4) + phi_a3_2)->unk_4C = arg2;
            } else {
                gSaveContext.equips.buttonItems[0][phi_a3_2] = arg2;
            }
            func_80112B40(arg0, phi_a3_2 & 0xFF);
            return 1;
        }
        temp_a3_2 = (phi_a3_2 + 1) & 0xFF;
        phi_a2 = temp_a3_2;
        phi_a3_2 = temp_a3_2;
        if (temp_a3_2 >= 4) {
            return 1;
        }
        goto loop_3;
    }
    if (temp_a3 >= 0x18) {
        return 0;
    }
    goto loop_1;
}

void func_80114CA0(GlobalContext *arg0) {
    s32 temp_s0;
    u16 temp_a0;
    u16 temp_v0_2;
    u8 temp_t0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    void *temp_v0;
    u8 phi_a1;
    s32 phi_a1_2;
    u8 phi_a1_3;
    u8 phi_a1_4;
    u8 phi_a1_5;
    u8 phi_a1_6;
    s32 phi_a0;
    s32 phi_a3;
    SaveContext *phi_a2;
    u8 phi_a1_7;
    u8 phi_v1;
    s32 phi_s0;
    u8 phi_v0;
    u8 phi_v0_2;

    temp_v1 = gSaveContext.playerForm;
    phi_a1 = temp_v1;
    phi_a3 = 4;
    phi_a2 = &gSaveContext;
    phi_s0 = 0;
    phi_a3 = 4;
    if (temp_v1 == 4) {
        phi_a1 = 0U;
    }
    if (phi_a1 == 0) {
        temp_v0 = arg0 + 0x169E8;
        temp_v0->unk_21C = 0;
        temp_v0->unk_21E = 0;
        temp_v1_2 = gSaveContext.playerForm;
        if (((s32) temp_v1_2 > 0) && ((s32) temp_v1_2 < 4)) {
            phi_a1_2 = 1;
        } else {
            phi_a1_2 = (s32) temp_v1_2 >> 1;
        }
        if (phi_a1_2 == 0) {
            phi_a1_3 = temp_v1_2;
            if (temp_v1_2 == 4) {
                phi_a1_3 = 0U;
            }
            (&gSaveContext + (phi_a1_3 * 4))->unk_4C = 0x50;
        } else {
            phi_a1_4 = temp_v1_2;
            if (temp_v1_2 == 4) {
                phi_a1_4 = 0U;
            }
            if ((&gSaveContext + (phi_a1_4 * 4))->unk_4C == 0x50) {
                temp_v0_2 = gSaveContext.equips.equipment;
                temp_a0 = *gEquipMasks;
                temp_t0 = *gEquipShifts;
                if (((s32) (temp_v0_2 & temp_a0) >> temp_t0) == 0) {
                    phi_a1_5 = temp_v1_2;
                    if (temp_v1_2 == 4) {
                        phi_a1_5 = 0U;
                    }
                    (&gSaveContext + (phi_a1_5 * 4))->unk_4C = 0xFF;
                } else {
                    if (temp_v1_2 == 4) {
                        phi_a1_6 = 0U;
                    } else {
                        phi_a1_6 = temp_v1_2;
                    }
                    (&gSaveContext + (phi_a1_6 * 4))->unk_4C = (s8) (((s32) (temp_v0_2 & temp_a0) >> temp_t0) + 0x4C);
                }
            }
        }
    }
    phi_a0 = 0;
    do {
        if (phi_a0 == 0) {
            temp_v1_3 = phi_a2->playerForm;
            phi_v0 = temp_v1_3;
            if (phi_a3 == temp_v1_3) {
                phi_v0 = 0U;
            }
            phi_a1_7 = (phi_a2 + (phi_v0 * 4) + phi_s0)->unk_4C;
        } else {
            phi_a1_7 = (phi_a2 + phi_s0)->unk_4C;
        }
        if ((phi_a1_7 & 0xFF) != 0xFF) {
            if (phi_a0 == 0) {
                temp_v1_4 = phi_a2->playerForm;
                phi_v0_2 = temp_v1_4;
                if (phi_a3 == temp_v1_4) {
                    phi_v0_2 = 0U;
                }
                phi_v1 = (phi_a2 + (phi_v0_2 * 4) + phi_s0)->unk_4C;
            } else {
                phi_v1 = (phi_a2 + phi_s0)->unk_4C;
            }
            if ((phi_v1 & 0xFF) != 0xFD) {
                func_80112B40(arg0, phi_s0 & 0xFF);
                phi_a2 = &gSaveContext;
            }
        }
        temp_s0 = (phi_s0 + 1) & 0xFF;
        phi_a0 = temp_s0;
        phi_s0 = temp_s0;
    } while (temp_s0 <= 0);
}

s32 func_80114E90(void) {
    u32 *temp_v1;

    if (gSaveContext.inventory.items[18] == 0x12) {
        return 1;
    }
    if (gSaveContext.inventory.items[19] == 0x12) {
        return 1;
    }
    temp_v1 = &gSaveContext.unk_14;
    if (temp_v1->unk_70 == 0x12) {
        return 1;
    }
    if (temp_v1->unk_71 == 0x12) {
        return 1;
    }
    if (temp_v1->unk_72 == 0x12) {
        return 1;
    }
    if (temp_v1->unk_73 == 0x12) {
        return 1;
    }
    return 0;
}

s32 func_80114F2C(s32 arg0) {
    s32 temp_a0;
    u32 *temp_a0_2;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 == gSaveContext.inventory.items[18]) {
        return 1;
    }
    if (temp_a0 == gSaveContext.inventory.items[19]) {
        return 1;
    }
    temp_a0_2 = &gSaveContext.unk_14;
    if (temp_a0 == temp_a0_2->unk_70) {
        return 1;
    }
    if (temp_a0 == temp_a0_2->unk_71) {
        return 1;
    }
    if (temp_a0 == temp_a0_2->unk_72) {
        return 1;
    }
    if (temp_a0 == temp_a0_2->unk_73) {
        return 1;
    }
    return 0;
}

void func_80114FD0(GlobalContext *arg0, u8 arg1, u8 arg2) {
    s32 sp24;
    void *sp1C;
    u8 temp_a3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 phi_v1;
    u8 phi_v1_2;
    void *phi_a2;
    u8 phi_v1_3;
    u8 phi_a0;
    u8 phi_a0_2;

    temp_a3 = arg2 & 0xFF;
    if (temp_a3 == 0) {
        temp_v0 = gSaveContext.playerForm;
        phi_a2 = &gSaveContext + temp_a3;
        phi_a0 = temp_v0;
        if (temp_v0 == 4) {
            phi_a0 = 0U;
        }
        phi_v1 = (&gSaveContext + (phi_a0 * 4) + temp_a3)->unk_5C;
    } else {
        phi_v1 = gSaveContext.equips.cButtonSlots[0][temp_a3];
        phi_a2 = &gSaveContext + temp_a3;
    }
    (&gSaveContext + (phi_v1 & 0xFF))->unk_70 = arg1;
    if (temp_a3 == 0) {
        temp_v0_2 = gSaveContext.playerForm;
        phi_v1_2 = temp_v0_2;
        if (temp_v0_2 == 4) {
            phi_v1_2 = 0U;
        }
        (&gSaveContext + (phi_v1_2 * 4) + temp_a3)->unk_4C = arg1;
    } else {
        phi_a2->unk_4C = arg1;
    }
    sp1C = phi_a2;
    arg2 = temp_a3;
    sp24 = (s32) temp_a3;
    func_80112B40(arg0, temp_a3 & 0xFF);
    arg0->pauseCtx.unk_25E[0] = (u16) arg1;
    phi_a2->unk_3F18 = 0;
    if (arg1 == 0x20) {
        if (temp_a3 == 0) {
            temp_v0_3 = gSaveContext.playerForm;
            phi_a0_2 = temp_v0_3;
            if (temp_v0_3 == 4) {
                phi_a0_2 = 0U;
            }
            phi_v1_3 = (&gSaveContext + (phi_a0_2 * 4) + arg2)->unk_5C;
        } else {
            phi_v1_3 = phi_a2->unk_5C;
        }
        func_8010EBA0(0x3C, (s16) ((phi_v1_3 & 0xFF) - 0x12), phi_a2, arg2);
    }
}

? func_80115130(GlobalContext *arg0) {
    u8 sp26;
    s32 sp18;
    s32 temp_a1;
    s32 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_t0;
    s32 phi_v1;
    s32 phi_a2;
    u8 phi_a0;
    u8 phi_a0_2;
    u8 phi_a1;
    void *phi_t0;
    s32 phi_v0;
    u8 phi_v0_2;
    u8 phi_a0_3;

    phi_v1 = 0;
    phi_v0 = 0;
    phi_v0_2 = (u8) 0;
loop_1:
    temp_t0 = gItemSlots[0x16] + &gSaveContext + phi_v1;
    phi_t0 = temp_t0;
    if (temp_t0->unk_70 == 0x16) {
        phi_a2 = 1;
        phi_a1 = 1U;
loop_3:
        if (phi_a2 == 0) {
            temp_v1 = gSaveContext.playerForm;
            phi_v0_2 = temp_v1;
            if (temp_v1 == 4) {

            }
            phi_a0 = (&gSaveContext + (phi_v0_2 * 4) + phi_a1)->unk_4C;
        } else {
            phi_a0 = gSaveContext.equips.buttonItems[0][phi_a1];
        }
        if ((phi_a0 & 0xFF) == 0x16) {
            if (phi_a2 == 0) {
                temp_v1_2 = gSaveContext.playerForm;
                phi_a0_2 = temp_v1_2;
                if (temp_v1_2 == 4) {
                    phi_a0_2 = 0U;
                }
                (&gSaveContext + (phi_a0_2 * 4) + phi_a1)->unk_4C = 0x12;
            } else {
                gSaveContext.equips.buttonItems[0][phi_a1] = 0x12;
            }
            sp26 = phi_a1;
            sp18 = phi_a2;
            func_80112B40(arg0, (s32) phi_a1);
            if (phi_a2 == 0) {
                temp_v1_3 = gSaveContext.playerForm;
                phi_a0_3 = temp_v1_3;
                if (temp_v1_3 == 4) {
                    phi_a0_3 = 0U;
                }
                phi_t0 = (&gSaveContext + (phi_a0_3 * 4) + phi_a1)->unk_5C + &gSaveContext;
            } else {
                phi_t0 = gSaveContext.equips.cButtonSlots[0][phi_a1] + &gSaveContext;
            }
        } else {
            temp_a1 = (phi_a1 + 1) & 0xFF;
            phi_a2 = temp_a1;
            phi_a1 = (u8) temp_a1;
            if (temp_a1 < 4) {
                goto loop_3;
            }
        }
        phi_t0->unk_70 = 0x12;
        return 1;
    }
    temp_v0 = (phi_v0 + 1) & 0xFF;
    phi_v1 = temp_v0;
    phi_v0 = temp_v0;
    if (temp_v0 >= 6) {
        return 0;
    }
    goto loop_1;
}

void func_801152B8(GlobalContext *arg0, s16 arg1, s16 arg2) {
    s16 temp_s0;
    u8 temp_v0;
    u8 temp_v0_2;
    s16 phi_s0;
    u8 phi_v1;
    u8 phi_v1_2;
    u8 phi_a0;

    gSaveContext.inventory.items[arg1] = (u8) arg2;
    phi_s0 = 1;
    do {
        if (phi_s0 == 0) {
            temp_v0 = gSaveContext.playerForm;
            phi_a0 = temp_v0;
            if (temp_v0 == 4) {
                phi_a0 = 0U;
            }
            phi_v1 = (&gSaveContext + (phi_a0 * 4) + phi_s0)->unk_5C;
        } else {
            phi_v1 = gSaveContext.equips.cButtonSlots[0][phi_s0];
        }
        if (arg1 == (phi_v1 & 0xFF)) {
            if (phi_s0 == 0) {
                temp_v0_2 = gSaveContext.playerForm;
                phi_v1_2 = temp_v0_2;
                if (temp_v0_2 == 4) {
                    phi_v1_2 = 0U;
                }
                (&gSaveContext + (phi_v1_2 * 4) + phi_s0)->unk_4C = (s8) arg2;
            } else {
                gSaveContext.equips.buttonItems[0][phi_s0] = (u8) arg2;
            }
            func_80112B40(arg0, phi_s0 & 0xFF);
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 4);
}

void func_801153C8(void *arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_v0;
    void *temp_v1;
    s32 *phi_v1;
    s32 phi_v0;
    void *phi_v1_2;
    s32 phi_v0_2;

    phi_v0 = 0;
    phi_v0_2 = 0;
    if (arg1 != 0) {
        temp_a3 = arg1 & 3;
        if (temp_a3 != 0) {
            phi_v1 = arg0 + (0 * 4);
            do {
                temp_v0 = phi_v0 + 1;
                *phi_v1 = 0;
                phi_v1 += 4;
                phi_v0 = temp_v0;
                phi_v0_2 = temp_v0;
            } while (temp_a3 != temp_v0);
            if (temp_v0 != arg1) {
                goto block_5;
            }
        } else {
block_5:
            phi_v1_2 = arg0 + (phi_v0_2 * 4);
            do {
                temp_v1 = phi_v1_2 + 0x10;
                temp_v1->unk_-C = 0;
                temp_v1->unk_-8 = 0;
                temp_v1->unk_-4 = 0;
                temp_v1->unk_-10 = 0;
                phi_v1_2 = temp_v1;
            } while (temp_v1 != ((arg1 * 4) + arg0));
        }
    }
}

void func_80115428(InterfaceContext *arg0, u16 arg1, s16 arg2) {
    s32 sp38;
    OSMesgQueue *sp34;
    OSMesgQueue *temp_a0;
    s32 temp_a1;
    s32 phi_v0;

    temp_a1 = arg1 & 0xFFFF;
    phi_v0 = temp_a1;
    if (temp_a1 >= 0x2A) {
        phi_v0 = 0xA;
    }
    if (phi_v0 != 0xA) {
        temp_a0 = arg0 + 0x1E4;
        sp34 = temp_a0;
        sp38 = phi_v0;
        osCreateMesgQueue(temp_a0, arg0 + 0x1FC, 1);
        DmaMgr_SendRequestImpl(arg0 + 0x184, arg0->doActionSegment + (arg2 * 0x180), (u32) ((phi_v0 * 0x180) + _do_action_staticSegmentRomStart), 0x180U, 0, sp34, NULL);
        osRecvMesg(temp_a0, NULL, 1);
        return;
    }
    *(gSegments + 0x24) = arg0->doActionSegment + 0x80000000;
    func_801153C8(Lib_SegmentedToVirtual(*(&D_801BFAB0 + (arg2 * 4))), 0x60);
}

void func_8011552C(GlobalContext *globalCtx, s16 arg1) {
    InterfaceContext *sp1C;
    GlobalContext *temp_a3;
    InterfaceContext *temp_a0;
    u16 temp_a1;

    temp_a1 = arg1 & 0xFFFF;
    temp_a3 = globalCtx;
    temp_a0 = &temp_a3->interfaceCtx;
    if (temp_a1 != temp_a3->interfaceCtx.unk_214) {
        temp_a0->unk_214 = temp_a1;
        temp_a0->unk_210 = 1;
        temp_a0->unk_218 = 0.0f;
        globalCtx = temp_a3;
        sp1C = temp_a0;
        func_80115428(temp_a0, temp_a1, 1, temp_a3);
        if (globalCtx->pauseCtx.state != 0) {
            temp_a0->unk_210 = 3;
        }
    }
}

void func_801155B4(void *arg0, s16 arg1) {
    void *sp30;
    OSMesgQueue *sp2C;
    OSMesgQueue *temp_a0;
    u8 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;
    u8 phi_v0_4;
    u8 phi_v0_5;

    temp_v1 = gSaveContext.playerForm;
    phi_v0 = temp_v1;
    if (temp_v1 == 4) {
        phi_v0 = 0U;
    }
    if ((s32) (&gSaveContext + (phi_v0 * 4))->unk_4C >= 0x4D) {
        phi_v0_2 = temp_v1;
        if (temp_v1 == 4) {
            phi_v0_2 = 0U;
        }
        if ((s32) (&gSaveContext + (phi_v0_2 * 4))->unk_4C >= 0x50) {
            goto block_6;
        }
        goto block_12;
    }
block_6:
    phi_v0_3 = temp_v1;
    if (temp_v1 == 4) {
        phi_v0_3 = 0U;
    }
    if ((&gSaveContext + (phi_v0_3 * 4))->unk_4C != 0xFF) {
        phi_v0_4 = temp_v1;
        if (temp_v1 == 4) {
            phi_v0_4 = 0U;
        }
        if ((&gSaveContext + (phi_v0_4 * 4))->unk_4C == 9) {
            goto block_12;
        }
        temp_v0 = arg0 + 0x169E8;
        temp_v0->unk_21C = 0;
        temp_v0->unk_21E = 0;
        return;
    }
block_12:
    if (temp_v1 == 4) {
        phi_v0_5 = 0U;
    } else {
        phi_v0_5 = temp_v1;
    }
    if ((phi_v0_5 == 3) && (gSaveContext.magicAcquired == 0)) {
        arg0->unk_16C06 = 0xFD;
        return;
    }
    temp_v0_2 = arg0 + 0x169E8;
    temp_v0_2->unk_21E = arg1;
    temp_a0 = temp_v0_2 + 0x1E4;
    if (temp_v0_2->unk_21E != 0xA) {
        sp30 = temp_v0_2;
        sp2C = temp_a0;
        osCreateMesgQueue(temp_a0, temp_v0_2 + 0x1FC, 1);
        DmaMgr_SendRequestImpl(temp_v0_2 + 0x184, temp_v0_2->unk_174 + 0x600, (u32) ((arg1 * 0x180) + _do_action_staticSegmentRomStart), 0x180U, 0, sp2C, NULL);
        osRecvMesg(temp_a0, NULL, 1);
    }
    (arg0 + 0x169E8)->unk_21C = 1;
}

void func_80115764(void *arg0, s32 arg1) {
    void *sp20;
    s32 sp1C;
    s32 temp_a1;
    void *temp_v0;
    void *temp_v0_2;

    temp_a1 = arg1 & 0xFFFF;
    if (((temp_a1 == 0x2A) || (temp_a1 == 0x2B)) && (temp_v0 = arg0 + 0x169E8, (temp_v0->unk_220 == 0)) && (arg0->unk_1F2C == 0)) {
        if (temp_a1 == 0x2B) {
            sp20 = temp_v0;
            sp1C = temp_a1;
            play_sound(0x6843U);
        }
        if ((arg1 & 0xFFFF) == 0x2A) {
            sp20 = arg0 + 0x169E8;
            func_8019FDC8((void *) &D_801DB4A4, 0x685FU, 0x20);
        }
        (arg0 + 0x169E8)->unk_220 = 1;
        D_801BF898 = 0;
        D_801BF89C = 0xA;
        return;
    }
    if (temp_a1 == 0x2C) {
        temp_v0_2 = arg0 + 0x169E8;
        if (temp_v0_2->unk_220 != 0) {
            temp_v0_2->unk_220 = 0;
        }
    }
}

void func_80115844(GlobalContext *globalCtx, s16 param_2) {
    InterfaceContext *sp30;
    OSMesgQueue *sp2C;
    InterfaceContext *temp_v0;
    OSMesgQueue *temp_a0;
    OSMesgQueue *temp_v1;
    void **temp_a1;

    globalCtx->interfaceCtx.unk_224 = param_2;
    temp_a0 = &globalCtx->interfaceCtx.loadQueue;
    temp_a1 = &globalCtx->interfaceCtx.loadMsg;
    globalCtx = globalCtx;
    osCreateMesgQueue(temp_a0, temp_a1, 1);
    temp_v0 = &globalCtx->interfaceCtx;
    temp_v1 = &temp_v0->loadQueue;
    sp2C = temp_v1;
    sp30 = temp_v0;
    DmaMgr_SendRequestImpl(&temp_v0->dmaRequest_184, (void *) (temp_v0->doActionSegment + 0x480), (u32) ((param_2 * 0x180) + _do_action_staticSegmentRomStart), 0x180U, 0, temp_v1, NULL);
    osRecvMesg(sp2C, NULL, 1);
    temp_v0->unk_222 = 1;
}

void func_80115908(GlobalContext *globalCtx, u8 param_2) {
    s16 temp_a2;
    s16 phi_a1;

    phi_a1 = (s16) param_2;
    if ((s32) (s16) param_2 > 0) {
        (s16) param_2 = (s16) param_2;
        play_sound(0x480BU);
        phi_a1 = (s16) param_2;
    } else if ((gSaveContext.doubleDefense != 0) && ((s32) (s16) param_2 < 0)) {
        phi_a1 = (s16) ((s32) (s16) param_2 >> 1);
    }
    temp_a2 = gSaveContext.healthCapacity;
    gSaveContext.health += phi_a1;
    if ((s32) temp_a2 < (s32) (s16) gSaveContext.health) {
        gSaveContext.health = temp_a2;
    }
    if ((s32) gSaveContext.health <= 0) {
        gSaveContext.health = 0;
    }
}

void func_801159c0(s16 param_1) {
    gSaveContext.healthCapacity += param_1 * 0x10;
}

void func_801159EC(s16 arg0) {
    gSaveContext.rupeeAccumulator += arg0;
}

void func_80115A14(s32 arg0, s16 arg1) {
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_a0_3;
    s8 temp_a0_4;
    s8 temp_a0_5;
    s8 temp_a0_6;
    u16 temp_a2;
    u16 temp_a2_2;
    u16 temp_a2_3;
    u16 temp_a2_4;
    u16 temp_a2_5;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_t4_2;
    u8 temp_t5;
    u8 temp_t6;

    if ((s16) arg0 == 8) {
        temp_t6 = gItemSlots[8];
        gSaveContext.inventory.ammo[temp_t6] += arg1;
        temp_a0 = gSaveContext.inventory.ammo[temp_t6];
        temp_a2 = (*(gUpgradeCapacities + 0x28))[(u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x18)) >> gUpgradeShifts[6]];
        if ((s32) temp_a0 >= (s32) temp_a2) {
            gSaveContext.inventory.ammo[temp_t6] = (s8) temp_a2;
            return;
        }
        if ((s32) temp_a0 < 0) {
            gSaveContext.inventory.ammo[temp_t6] = 0;
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    if ((s16) arg0 == 9) {
        temp_t5 = gItemSlots[9];
        gSaveContext.inventory.ammo[temp_t5] += arg1;
        temp_a0_2 = gSaveContext.inventory.ammo[temp_t5];
        temp_a2_2 = (*(gUpgradeCapacities + 0x30))[(u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x1C)) >> gUpgradeShifts[7]];
        if ((s32) temp_a0_2 >= (s32) temp_a2_2) {
            gSaveContext.inventory.ammo[temp_t5] = (s8) temp_a2_2;
            return;
        }
        if ((s32) temp_a0_2 < 0) {
            gSaveContext.inventory.ammo[temp_t5] = 0;
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    if ((s16) arg0 == 7) {
        temp_t4 = gItemSlots[7];
        gSaveContext.inventory.ammo[temp_t4] += arg1;
        temp_a2_3 = (*gUpgradeCapacities)[(u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 4)) >> gUpgradeShifts[1]];
        temp_a0_3 = gSaveContext.inventory.ammo[temp_t4];
        if ((s32) temp_a0_3 >= (s32) temp_a2_3) {
            gSaveContext.inventory.ammo[temp_t4] = (s8) temp_a2_3;
            return;
        }
        if ((s32) temp_a0_3 < 0) {
            gSaveContext.inventory.ammo[temp_t4] = 0;
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    if ((s16) arg0 == 1) {
        temp_t3 = gItemSlots[1];
        gSaveContext.inventory.ammo[temp_t3] += arg1;
        temp_a2_4 = *(gUpgradeShifts + 8 + (((u32) (gSaveContext.inventory.upgrades & *gUpgradeMasks) >> *gUpgradeShifts) * 2));
        temp_a0_4 = gSaveContext.inventory.ammo[temp_t3];
        if ((s32) temp_a0_4 >= (s32) temp_a2_4) {
            gSaveContext.inventory.ammo[temp_t3] = (s8) temp_a2_4;
            return;
        }
        if ((s32) temp_a0_4 < 0) {
            gSaveContext.inventory.ammo[temp_t3] = 0;
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    if ((s16) arg0 == 6) {
        temp_t2 = gItemSlots[6];
        gSaveContext.inventory.ammo[temp_t2] += arg1;
        temp_a0_5 = gSaveContext.inventory.ammo[temp_t2];
        temp_a2_5 = (*gUpgradeCapacities)[(u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 4)) >> gUpgradeShifts[1]];
        if ((s32) temp_a0_5 >= (s32) temp_a2_5) {
            gSaveContext.inventory.ammo[temp_t2] = (s8) temp_a2_5;
            return;
        }
        if ((s32) temp_a0_5 < 0) {
            gSaveContext.inventory.ammo[temp_t2] = 0;
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    if ((s16) arg0 == 0xA) {
        temp_t1 = gItemSlots[0xA];
        gSaveContext.inventory.ammo[temp_t1] += arg1;
        return;
    }
    if ((s16) arg0 == 0xC) {
        temp_t4_2 = gItemSlots[0xC];
        gSaveContext.inventory.ammo[temp_t4_2] += arg1;
        temp_a0_6 = gSaveContext.inventory.ammo[temp_t4_2];
        if ((s32) temp_a0_6 > 0) {
            gSaveContext.inventory.ammo[temp_t4_2] = 1;
            return;
        }
        if ((s32) temp_a0_6 < 0) {
            gSaveContext.inventory.ammo[temp_t4_2] = 0;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
    }
}

void Parameter_AddMagic(s32 arg0, s16 arg1) {
    if ((s32) gSaveContext.magic < (s32) gSaveContext.unk_3F2E) {
        gSaveContext.unk_3F2A = 1;
        gSaveContext.unk_3F34 += arg1;
    }
}

void func_80115D5C(s32 arg0) {
    s16 temp_v0;

    temp_v0 = gSaveContext.unk_3F28;
    if ((temp_v0 != 8) && (temp_v0 != 9)) {
        D_801BF8A8 = 0xFF;
        D_801BF8A4 = D_801BF8A8;
        D_801BF8A0 = D_801BF8A4;
        gSaveContext.unk_3F28 = 0;
    }
}

? func_80115DB4(void *arg0, s16 arg1, s16 arg2) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s8 temp_a0;
    s16 phi_a1;
    s16 phi_a1_2;
    s16 phi_a1_3;

    phi_a1 = arg1;
    phi_a1_2 = arg1;
    phi_a1_3 = arg1;
    if (gSaveContext.magicAcquired == 0) {
        return 0;
    }
    temp_a0 = gSaveContext.magic;
    if ((temp_a0 - arg1) < 0) {
        if (gSaveContext.unk_3F2E != 0) {
            play_sound(0x4806U);
        }
        return 0;
    }
    switch (arg2) {
    case 0:
    case 2:
        temp_v0 = gSaveContext.unk_3F28;
        if ((temp_v0 == 0) || (temp_v0 == 7)) {
            if (temp_v0 == 7) {
                arg0->unk_1CA3 = 0;
            }
            if ((gSaveContext.weekEventReg[14] & 8) != 0) {
                phi_a1 = 0;
            }
            gSaveContext.unk_3F32 = phi_a1;
            gSaveContext.unk_3F28 = 1;
            return 1;
        }
        play_sound(0x4806U);
        return 0;
    case 1:
        temp_v0_2 = gSaveContext.unk_3F28;
        if ((temp_v0_2 == 0) || (temp_v0_2 == 7)) {
            if (temp_v0_2 == 7) {
                arg0->unk_1CA3 = 0;
            }
            if ((gSaveContext.weekEventReg[14] & 8) != 0) {
                phi_a1_2 = 0;
            }
            gSaveContext.unk_3F32 = phi_a1_2;
            gSaveContext.unk_3F28 = 6;
            return 1;
        }
        play_sound(0x4806U);
        return 0;
    case 3:
        temp_v0_3 = gSaveContext.unk_3F28;
        if (temp_v0_3 == 0) {
            if (temp_a0 != 0) {
                arg0->unk_16C40 = 0x50;
                gSaveContext.unk_3F28 = 7;
                return 1;
            }
            return 0;
        }
        if (temp_v0_3 == 7) {
            return 1;
        }
        return 0;
    case 4:
        temp_v0_4 = gSaveContext.unk_3F28;
        if ((temp_v0_4 == 0) || (temp_v0_4 == 7)) {
            if (temp_v0_4 == 7) {
                arg0->unk_1CA3 = 0;
            }
            gSaveContext.unk_3F32 = arg1;
            gSaveContext.unk_3F28 = 4;
            return 1;
        }
        play_sound(0x4806U);
        return 0;
    case 5:
        if (temp_a0 != 0) {
            arg0->unk_16C40 = 0xA;
            gSaveContext.unk_3F28 = 0xA;
            return 1;
        }
        return 0;
    case 6:
        temp_v0_5 = gSaveContext.unk_3F28;
        if (temp_v0_5 == 0) {
            if (temp_a0 != 0) {
                arg0->unk_16C40 = (s16) gGameInfo->data[1385];
                gSaveContext.unk_3F28 = 0xC;
                return 1;
            }
            return 0;
        }
        if (temp_v0_5 == 0xC) {
            return 1;
        }
        return 0;
    case 7:
        temp_v0_6 = gSaveContext.unk_3F28;
        if ((temp_v0_6 == 0) || (temp_v0_6 == 7)) {
            if (temp_v0_6 == 7) {
                arg0->unk_1CA3 = 0;
            }
            if ((gSaveContext.weekEventReg[14] & 8) != 0) {
                phi_a1_3 = 0;
            }
            gSaveContext.magic -= phi_a1_3;
            return 1;
        }
        play_sound(0x4806U);
    default:
        return 0;
    }
}

void func_80116088(void) {
    s16 temp_a0;

    if (gSaveContext.unk_3F2A != 0) {
        gSaveContext.magic += 4;
        play_sound(0x401FU);
        temp_a0 = gSaveContext.unk_3F2E;
        if ((s32) gSaveContext.magic >= (s32) temp_a0) {
            gSaveContext.magic = (s8) temp_a0;
            gSaveContext.unk_3F34 = 0;
            goto block_5;
        }
        gSaveContext.unk_3F34 += -4;
        if ((s32) gSaveContext.unk_3F34 <= 0) {
            gSaveContext.unk_3F34 = 0;
block_5:
            gSaveContext.unk_3F2A = 0;
        }
    }
}

void func_80116114(void) {
    s16 sp34;
    s32 sp8;
    s32 sp4;
    s32 sp0;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_t3;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_t7;
    s16 temp_t8_2;
    s16 temp_v1;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t2;
    s32 temp_t6;
    s32 temp_t8;
    void *temp_v0;
    s32 phi_t1;
    s32 phi_t1_2;
    s32 phi_t1_3;

    temp_a1 = *D_801BF8B0;
    temp_a2 = temp_a1 * 2;
    temp_v1 = D_801BF8A0;
    temp_v0 = (*(&D_801BFAC4 + temp_a2) * 6) + &D_801BFAB8;
    temp_a0 = temp_v0->unk_0;
    temp_t2 = temp_v1 - temp_a0;
    if (temp_t2 < 0) {
        phi_t1_2 = -temp_t2;
    } else {
        phi_t1_2 = temp_t2;
    }
    temp_t3 = D_801BF8AC;
    temp_t4 = D_801BF8A4;
    temp_t5 = temp_v0->unk_2;
    temp_lo = phi_t1_2 / (s32) temp_t3;
    temp_t8 = temp_t4 - temp_t5;
    sp8 = temp_t8;
    if (temp_t8 < 0) {
        phi_t1 = -temp_t8;
    } else {
        phi_t1 = sp8;
    }
    temp_t7 = D_801BF8A8;
    temp_t8_2 = temp_v0->unk_4;
    sp34 = (s16) (phi_t1 / (s32) temp_t3);
    temp_t6 = temp_t7 - temp_t8_2;
    sp0 = temp_t6;
    sp8 = (s32) temp_t7;
    sp4 = (s32) temp_t8_2;
    if (temp_t6 < 0) {
        phi_t1_3 = -temp_t6;
    } else {
        phi_t1_3 = sp0;
    }
    temp_lo_2 = phi_t1_3 / (s32) temp_t3;
    if ((s32) temp_v1 >= (s32) temp_a0) {
        D_801BF8A0 = temp_v1 - (s16) temp_lo;
    } else {
        D_801BF8A0 = temp_v1 + (s16) temp_lo;
    }
    if ((s32) temp_t4 >= (s32) temp_t5) {
        D_801BF8A4 = temp_t4 - sp34;
    } else {
        D_801BF8A4 = temp_t4 + sp34;
    }
    if (sp8 >= sp4) {
        D_801BF8A8 = sp8 - (s16) temp_lo_2;
    } else {
        D_801BF8A8 = sp8 + (s16) temp_lo_2;
    }
    D_801BF8AC = temp_t3 - 1;
    if (D_801BF8AC == 0) {
        D_801BF8A0 = temp_a0;
        D_801BF8A4 = temp_t5;
        D_801BF8A8 = (s16) sp4;
        D_801BF8AC = *(&D_801BFACC + temp_a2);
        *D_801BF8B0 = temp_a1 + 1;
        if ((s32) *D_801BF8B0 >= 4) {
            *D_801BF8B0 = 0;
        }
    }
}

void func_80116348(GlobalContext *arg0) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a2;
    GlobalContext *temp_a2_2;
    GlobalContext *temp_a2_3;
    InterfaceContext *temp_v0_3;
    InterfaceContext *temp_v0_4;
    s16 temp_t8;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    void *temp_v0_2;
    SaveContext *phi_a1;
    GlobalContext *phi_a2;
    GlobalContext *phi_a2_2;
    GlobalContext *phi_a2_3;
    SaveContext *phi_a1_2;
    SaveContext *phi_a1_3;
    SaveContext *phi_a1_4;
    SaveContext *phi_a1_5;

    temp_a2 = arg0;
    phi_a2 = temp_a2;
    if ((gSaveContext.weekEventReg[14] & 8) != 0) {
        arg0 = temp_a2;
        func_80116114(&gSaveContext, temp_a2);
        phi_a2 = arg0;
    }
    temp_t8 = gSaveContext.unk_3F28;
    phi_a1 = &gSaveContext;
    phi_a1_2 = &gSaveContext;
    phi_a1_3 = &gSaveContext;
    phi_a1_4 = &gSaveContext;
    phi_a1_5 = &gSaveContext;
    switch (temp_t8) {
    case 8:
        temp_v0 = gSaveContext.unk_3F2E;
        temp_v1 = gSaveContext.magicLevel * 0x30;
        if (temp_v1 != temp_v0) {
            if ((s32) temp_v0 < (s32) temp_v1) {
                gSaveContext.unk_3F2E = temp_v0 + 0x10;
                if ((s32) temp_v1 < (s32) gSaveContext.unk_3F2E) {
                    gSaveContext.unk_3F2E = temp_v1;
                    return;
                }
                /* Duplicate return node #81. Try simplifying control flow for better match */
                return;
            }
            gSaveContext.unk_3F2E = temp_v0 - 0x10;
            if ((s32) temp_v1 >= (s32) gSaveContext.unk_3F2E) {
                gSaveContext.unk_3F2E = temp_v1;
                return;
            }
            return;
        }
        gSaveContext.unk_3F28 = 9;
        return;
    case 9:
        gSaveContext.magic += 0x10;
        if ((gSaveContext.gameMode == 0) && (gSaveContext.sceneSetupIndex < 4)) {
            play_sound(0x401FU);
            phi_a1 = &gSaveContext;
        }
        temp_v1_2 = phi_a1->unk_3F30;
        phi_a1_5 = phi_a1;
        if ((s32) phi_a1->magic >= (s32) temp_v1_2) {
            phi_a1->magic = (s8) temp_v1_2;
        default:
block_80:
            phi_a1_5->unk_3F28 = 0;
        }
        /* Duplicate return node #81. Try simplifying control flow for better match */
        return;
    case 1:
        D_801BF8AC = 2;
        gSaveContext.unk_3F28 = 2;
        return;
    case 2:
        if ((gSaveContext.weekEventReg[14] & 8) == 0) {
            gSaveContext.magic -= gSaveContext.unk_3F32;
            if ((s32) gSaveContext.magic <= 0) {
                gSaveContext.magic = 0;
            }
            D_801BF8A8 = 0xFF;
            D_801BF8A4 = D_801BF8A8;
            gSaveContext.unk_3F28 = 3;
            D_801BF8A0 = D_801BF8A4;
        }
        /* fallthrough */
    case 3:
    case 4:
    case 6:
        if ((gSaveContext.weekEventReg[14] & 8) == 0) {
            func_80116114();
            return;
        }
        /* Duplicate return node #81. Try simplifying control flow for better match */
        return;
    case 5:
        D_801BF8A8 = 0xFF;
        D_801BF8A4 = D_801BF8A8;
        D_801BF8A0 = D_801BF8A4;
        goto block_80;
    case 7:
        if ((phi_a2->pauseCtx.state == 0) && (phi_a2->pauseCtx.debugState == 0) && (phi_a2->msgCtx.unk11F22 == 0) && (phi_a2->gameOverCtx.state == 0) && (phi_a2->sceneLoadFlag == 0) && (phi_a2->unk_18B4A == 0) && (arg0 = phi_a2, temp_a2_2 = arg0, phi_a2_3 = temp_a2_2, phi_a1_2 = &gSaveContext, (func_801690CC(phi_a2) == 0))) {
            temp_a0 = temp_a2_2;
            if ((gSaveContext.magic == 0) || ((arg0 = temp_a2_2, temp_a2_3 = arg0, phi_a2_2 = temp_a2_3, ((func_801242DC(temp_a0, &gSaveContext, (u8) temp_a2_2) < 2) == 0)) && (temp_a0_2 = temp_a2_3, arg0 = temp_a2_3, phi_a2_2 = arg0, phi_a2_3 = arg0, ((func_801242DC(temp_a0_2, &gSaveContext, (u8) temp_a2_3) < 5) != 0))) || ((phi_a2_3 = phi_a2_2, phi_a1_2 = &gSaveContext, (gSaveContext.equips.buttonItems[0][1] != 0xE)) && (gSaveContext.equips.buttonItems[0][2] != 0xE) && (gSaveContext.equips.buttonItems[0][3] != 0xE)) || (phi_a2_2->actorCtx.unk3 == 0)) {
                phi_a2_3->actorCtx.unk3 = 0;
                play_sound(0x482BU);
                D_801BF8A8 = 0xFF;
                D_801BF8A4 = D_801BF8A8;
                gSaveContext.unk_3F28 = 0;
                D_801BF8A0 = D_801BF8A4;
                return;
            }
            temp_v0_2 = phi_a2_2 + 0x169E8;
            temp_v0_2->unk_258 = (s16) (temp_v0_2->unk_258 - 1);
            if (temp_v0_2->unk_258 == 0) {
                if ((gSaveContext.weekEventReg[14] & 8) == 0) {
                    gSaveContext.magic += -1;
                }
                temp_v0_2->unk_258 = 0x50;
            }
            goto block_43;
        }
block_43:
        if ((phi_a1_2->weekEventReg[14] & 8) == 0) {
            func_80116114();
            return;
        }
        /* Duplicate return node #81. Try simplifying control flow for better match */
        return;
    case 10:
        if ((gSaveContext.weekEventReg[14] & 8) == 0) {
            gSaveContext.magic += -2;
        }
        if ((s32) gSaveContext.magic <= 0) {
            gSaveContext.magic = 0;
        }
        gSaveContext.unk_3F28 = 0xB;
        /* fallthrough */
    case 11:
        if ((phi_a2->pauseCtx.state == 0) && (phi_a2->pauseCtx.debugState == 0) && (phi_a2->msgCtx.unk11F22 == 0) && (phi_a2->gameOverCtx.state == 0) && (phi_a2->sceneLoadFlag == 0) && (phi_a2->unk_18B4A == 0)) {
            arg0 = phi_a2;
            phi_a1_3 = &gSaveContext;
            if (func_801690CC(phi_a2) == 0) {
                temp_v0_3 = &arg0->interfaceCtx;
                temp_v0_3->unk_258 += -1;
                if (temp_v0_3->unk_258 == 0) {
                    if ((gSaveContext.weekEventReg[14] & 8) == 0) {
                        gSaveContext.magic += -1;
                    }
                    if ((s32) gSaveContext.magic <= 0) {
                        gSaveContext.magic = 0;
                    }
                    temp_v0_3->unk_258 = 0xA;
                }
            }
        }
        if ((phi_a1_3->weekEventReg[14] & 8) == 0) {
            func_80116114();
            return;
        }
        /* Duplicate return node #81. Try simplifying control flow for better match */
        return;
    case 12:
        if ((phi_a2->pauseCtx.state == 0) && (phi_a2->pauseCtx.debugState == 0) && (phi_a2->msgCtx.unk11F22 == 0) && (phi_a2->gameOverCtx.state == 0) && (phi_a2->sceneLoadFlag == 0) && (phi_a2->unk_18B4A == 0)) {
            arg0 = phi_a2;
            phi_a1_4 = &gSaveContext;
            if (func_801690CC(phi_a2) == 0) {
                temp_v0_4 = &arg0->interfaceCtx;
                temp_v0_4->unk_258 += -1;
                if (temp_v0_4->unk_258 == 0) {
                    if ((gSaveContext.weekEventReg[14] & 8) == 0) {
                        gSaveContext.magic += -1;
                    }
                    if ((s32) gSaveContext.magic <= 0) {
                        gSaveContext.magic = 0;
                    }
                    temp_v0_4->unk_258 = gGameInfo->data[1385];
                }
            }
        }
        if ((phi_a1_4->weekEventReg[14] & 8) == 0) {
            func_80116114();
            return;
        }
        /* Duplicate return node #81. Try simplifying control flow for better match */
        return;
    }
}

void func_80116918(GraphicsContext **arg0) {
    s16 spE2;
    GraphicsContext *spDC;
    void *sp4C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_2;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_35;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a1;
    s32 temp_a2;
    u32 temp_a3;
    void *temp_t1;
    s16 phi_t2;

    temp_a1 = *arg0;
    if (gSaveContext.magicLevel != 0) {
        if ((s32) gSaveContext.healthCapacity >= 0xA1) {
            phi_t2 = 0x2A;
        } else {
            phi_t2 = 0x22;
        }
        spDC = temp_a1;
        spE2 = phi_t2;
        func_8012C654(temp_a1);
        temp_v0 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFB000000;
        temp_v0->words.w1 = 0x643232FF;
        temp_t1 = arg0 + 0x169E8;
        spE2 = phi_t2;
        sp4C = temp_t1;
        spDC = temp_a1;
        temp_v0_2 = func_8010CFBC(temp_a1->overlay.p, &D_02004DA0, 8, 0x10, (s16) 0x12, (s16) (s32) phi_t2, (s16) 8, (s16) 0x10, (u16) 0x400, (u16) 0x400, (s16) (s32) D_801BF8A0, (s16) (s32) D_801BF8A4, (s16) (s32) D_801BF8A8, (s16) (s32) temp_t1->unk_272);
        temp_a1->overlay.p = temp_v0_2;
        temp_v0_3 = func_8010CFBC(temp_v0_2, &D_02004E20, 0x18, 0x10, (s16) 0x1A, (s16) (s32) phi_t2, (s16) (s32) gSaveContext.unk_3F2E, (s16) 0x10, (u16) 0x400, (u16) 0x400, (s16) (s32) D_801BF8A0, (s16) (s32) D_801BF8A4, (s16) (s32) D_801BF8A8, (s16) (s32) temp_t1->unk_272);
        temp_a1->overlay.p = temp_v0_3;
        temp_a1->overlay.p = func_8010D480(temp_v0_3, &D_02004DA0, 8, 0x10, (s16) (gSaveContext.unk_3F2E + 0x1A), (s16) (s32) phi_t2, (s16) 8, (s16) 0x10, (u16) 0x400, (u16) 0x400, (s16) (s32) D_801BF8A0, (s16) (s32) D_801BF8A4, (s16) (s32) D_801BF8A8, (s16) (s32) temp_t1->unk_272, 3, 0x100);
        temp_v0_4 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0;
        temp_v0_4->words.w0 = 0xE7000000;
        temp_v0_5 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0x55FEF77B;
        temp_v0_5->words.w0 = 0xFC30FE61;
        temp_v0_6 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0xFF;
        temp_v0_6->words.w0 = 0xFB000000;
        if (gSaveContext.unk_3F28 == 4) {
            temp_v0_7 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xFA000000;
            temp_v0_7->words.w1 = (temp_t1->unk_272 & 0xFF) | 0xFAFA0000;
            temp_v0_8 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xFD900000;
            temp_v0_8->words.w1 = (u32) &D_02004FA0;
            temp_v0_9 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = 0x7000000;
            temp_v0_9->words.w0 = 0xF5900000;
            temp_v0_10 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_10 + 8;
            temp_v0_10->words.w1 = 0;
            temp_v0_10->words.w0 = 0xE6000000;
            temp_v0_11 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_11 + 8;
            temp_v0_11->words.w1 = 0x703F800;
            temp_v0_11->words.w0 = 0xF3000000;
            temp_v0_12 = temp_a1->overlay.p;
            temp_a2 = ((phi_t2 + 0xA) * 4) & 0xFFF;
            temp_a1->overlay.p = temp_v0_12 + 8;
            temp_v0_12->words.w1 = 0;
            temp_v0_12->words.w0 = 0xE7000000;
            temp_v0_13 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_13 + 8;
            temp_v0_13->words.w1 = 0;
            temp_v0_13->words.w0 = 0xF5800200;
            temp_v0_14 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_14 + 8;
            temp_v0_14->words.w0 = 0xF2000000;
            temp_v0_14->words.w1 = 0x3C03C;
            temp_v0_15 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_15 + 8;
            temp_a3 = (((phi_t2 + 3) * 4) & 0xFFF) | 0x68000;
            temp_v0_15->words.w1 = temp_a3;
            temp_v0_15->words.w0 = ((((gSaveContext.magic + 0x1A) * 4) & 0xFFF) << 0xC) | 0xE4000000 | temp_a2;
            temp_v0_16 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_16 + 8;
            temp_v0_16->words.w1 = 0;
            temp_v0_16->words.w0 = 0xE1000000;
            temp_v0_17 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_17 + 8;
            temp_v0_17->words.w1 = 0x4000400;
            temp_v0_17->words.w0 = 0xF1000000;
            temp_v0_18 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_18 + 8;
            temp_v0_18->words.w1 = 0;
            temp_v0_18->words.w0 = 0xE7000000;
            if ((gSaveContext.weekEventReg[14] & 8) != 0) {
                temp_v0_19 = temp_a1->overlay.p;
                temp_a1->overlay.p = temp_v0_19 + 8;
                temp_v0_19->words.w0 = 0xFA000000;
                temp_v0_19->words.w1 = (temp_t1->unk_272 & 0xFF) | 0xC800;
            } else {
                temp_v0_20 = temp_a1->overlay.p;
                temp_a1->overlay.p = temp_v0_20 + 8;
                temp_v0_20->words.w0 = 0xFA000000;
                temp_v0_20->words.w1 = (temp_t1->unk_272 & 0xFF) | 0xC80000;
            }
            temp_v0_21 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_21 + 8;
            temp_v0_21->words.w1 = temp_a3;
            temp_v0_21->words.w0 = (((((gSaveContext.magic - gSaveContext.unk_3F32) + 0x1A) * 4) & 0xFFF) << 0xC) | 0xE4000000 | temp_a2;
            temp_v0_22 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_22 + 8;
            temp_v0_22->words.w1 = 0;
            temp_v0_22->words.w0 = 0xE1000000;
            temp_v0_23 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_23 + 8;
            temp_v0_23->words.w1 = 0x4000400;
            temp_v0_23->words.w0 = 0xF1000000;
            return;
        }
        if ((gSaveContext.weekEventReg[14] & 8) != 0) {
            temp_v0_24 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_24 + 8;
            temp_v0_24->words.w0 = 0xFA000000;
            temp_v0_24->words.w1 = (temp_t1->unk_272 & 0xFF) | 0xC800;
        } else {
            temp_v0_25 = temp_a1->overlay.p;
            temp_a1->overlay.p = temp_v0_25 + 8;
            temp_v0_25->words.w0 = 0xFA000000;
            temp_v0_25->words.w1 = (temp_t1->unk_272 & 0xFF) | 0xC80000;
        }
        temp_v0_26 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_26 + 8;
        temp_v0_26->words.w0 = 0xFD900000;
        temp_v0_26->words.w1 = (u32) &D_02004FA0;
        temp_v0_27 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_27 + 8;
        temp_v0_27->words.w1 = 0x7000000;
        temp_v0_27->words.w0 = 0xF5900000;
        temp_v0_28 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_28 + 8;
        temp_v0_28->words.w1 = 0;
        temp_v0_28->words.w0 = 0xE6000000;
        temp_v0_29 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_29 + 8;
        temp_v0_29->words.w1 = 0x703F800;
        temp_v0_29->words.w0 = 0xF3000000;
        temp_v0_30 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_30 + 8;
        temp_v0_30->words.w1 = 0;
        temp_v0_30->words.w0 = 0xE7000000;
        temp_v0_31 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_31 + 8;
        temp_v0_31->words.w1 = 0;
        temp_v0_31->words.w0 = 0xF5800200;
        temp_v0_32 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_32 + 8;
        temp_v0_32->words.w0 = 0xF2000000;
        temp_v0_32->words.w1 = 0x3C03C;
        temp_v0_33 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_33 + 8;
        temp_v0_33->words.w0 = ((((gSaveContext.magic + 0x1A) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_t2 + 0xA) * 4) & 0xFFF);
        temp_v0_33->words.w1 = (((phi_t2 + 3) * 4) & 0xFFF) | 0x68000;
        temp_v0_34 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_34 + 8;
        temp_v0_34->words.w1 = 0;
        temp_v0_34->words.w0 = 0xE1000000;
        temp_v0_35 = temp_a1->overlay.p;
        temp_a1->overlay.p = temp_v0_35 + 8;
        temp_v0_35->words.w1 = 0x4000400;
        temp_v0_35->words.w0 = 0xF1000000;
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_80116FD8(GraphicsContext **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    View *temp_s0;

    temp_s0 = arg0 + 0x169E8;
    sp48 = 0.0f;
    sp44 = 0.0f;
    sp40 = 0.0f;
    sp38 = 0.0f;
    sp34 = 0.0f;
    sp30 = 0.0f;
    sp28 = 0.0f;
    sp3C = -1.0f;
    sp2C = 1.0f;
    View_SetViewOrientation(temp_s0, (Vec3f *) &sp40, (Vec3f *) &sp34, (Vec3f *) &sp28);
    temp_s0->unk_200 = arg1;
    temp_s0->unk_204 = arg2;
    temp_s0->unk_208 = arg3;
    temp_s0->unk_20C = arg4;
    View_SetViewport(temp_s0, temp_s0 + 0x200);
    func_8013F0D0(temp_s0, 60.0f, 10.0f, 60.0f);
    func_8013FD74(temp_s0);
}

void func_801170B8(View *arg0) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;

    sp24 = 0x140;
    sp1C = 0xF0;
    sp18 = 0;
    sp20 = 0;
    View_SetViewport(arg0, (Viewport *) &sp18);
    func_8013FBC8(arg0);
}

void func_80117100(GraphicsContext **arg0) {
    void *sp100;
    s16 spF6;
    void *sp4C;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_21;
    Gfx *temp_v1_22;
    Gfx *temp_v1_23;
    Gfx *temp_v1_24;
    Gfx *temp_v1_25;
    Gfx *temp_v1_26;
    Gfx *temp_v1_27;
    Gfx *temp_v1_28;
    Gfx *temp_v1_29;
    Gfx *temp_v1_2;
    Gfx *temp_v1_30;
    Gfx *temp_v1_31;
    Gfx *temp_v1_32;
    Gfx *temp_v1_33;
    Gfx *temp_v1_34;
    Gfx *temp_v1_35;
    Gfx *temp_v1_36;
    Gfx *temp_v1_37;
    Gfx *temp_v1_38;
    Gfx *temp_v1_39;
    Gfx *temp_v1_40;
    Gfx *temp_v1_4;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_a3_3;
    s16 temp_t1;
    s16 temp_v0;
    s16 temp_v1_41;
    s32 temp_t0;
    s32 temp_v0_2;
    s32 temp_v0_7;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_6;
    u16 temp_t6;
    u16 temp_v0_5;
    u16 temp_v1_7;
    u8 temp_v0_6;
    void *temp_s0;
    void *temp_t4;
    s16 phi_t1;
    u32 phi_t0;
    s16 phi_t1_2;
    SaveContext *phi_t3;
    u8 phi_v0;
    u32 phi_t5;
    void *phi_t4;
    s32 phi_t2;
    u8 phi_v1;

    sp100 = arg0->unk_1CCC;
    temp_s0 = arg0->unk_0;
    temp_v1 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v1 + 8;
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xE7000000;
    temp_v1_2 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0xFF2FFFFF;
    temp_v1_2->words.w0 = 0xFC119623;
    temp_v0 = D_801BFAF4;
    temp_v1_3 = (D_801BF9E4 * 2) & 0xFFFF;
    temp_t4 = arg0 + 0x169E8;
    sp4C = temp_t4;
    temp_s0->overlay.p = func_8010CFBC(temp_s0->overlay.p, &D_02000F60, 0x20, 0x20, (s16) (s32) D_801BF9D4, (s16) (s32) D_801BF9DC, (s16) (s32) temp_v0, (s16) (s32) temp_v0, (u16) temp_v1_3, (u16) temp_v1_3, (s16) 0x64, (s16) 0xFF, (s16) 0x78, (s16) (s32) temp_t4->unk_268);
    temp_v1_4 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v1_4 + 8;
    temp_v1_4->words.w1 = 0;
    temp_v1_4->words.w0 = 0xE7000000;
    temp_a3 = D_801BFAF6;
    temp_v0_2 = (D_801BF9E6 * 2) & 0xFFFF;
    sp4C = temp_t4;
    temp_v0_3 = func_8010D2D4(temp_s0->overlay.p, D_801BF9D6, D_801BF9DE, temp_a3, (s16) (s32) temp_a3, (u16) temp_v0_2, (u16) temp_v0_2, (s16) 0xFF, (s16) 0xF0, (s16) 0, (s16) (s32) temp_t4->unk_26A);
    temp_s0->overlay.p = temp_v0_3;
    temp_a3_2 = D_801BFAF8;
    temp_v1_5 = (D_801BF9E8 * 2) & 0xFFFF;
    temp_v0_4 = func_8010D2D4(temp_v0_3, D_801BF9D8, D_801BF9E0, temp_a3_2, (s16) (s32) temp_a3_2, (u16) temp_v1_5, (u16) temp_v1_5, (s16) 0xFF, (s16) 0xF0, (s16) 0, (s16) (s32) temp_t4->unk_26C);
    temp_s0->overlay.p = temp_v0_4;
    temp_a3_3 = D_801BFAFA;
    temp_v1_6 = (D_801BF9EA * 2) & 0xFFFF;
    temp_s0->overlay.p = func_8010D2D4(temp_v0_4, D_801BF9DA, D_801BF9E2, temp_a3_3, (s16) (s32) temp_a3_3, (u16) temp_v1_6, (u16) temp_v1_6, (s16) 0xFF, (s16) 0xF0, (s16) 0, (s16) (s32) temp_t4->unk_26E);
    temp_v1_7 = arg0->unk_16F1C;
    phi_t0 = 0xE7000000U;
    if ((((s32) temp_v1_7 < 8) || ((s32) temp_v1_7 >= 0x13)) && ((arg0->unk_16F1C != 0) || (arg0->unk_16F1E != 0))) {
        sp4C = temp_t4;
        temp_s0->overlay.p = func_8010D2D4(temp_s0->overlay.p, 0x88, 0x11, 0x16, (s16) 0x16, (u16) 0x5B6, (u16) 0x5B6, (s16) 0xFF, (s16) 0x82, (s16) 0x3C, (s16) (s32) temp_t4->unk_276);
        temp_v1_8 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_8 + 8;
        temp_v1_8->words.w1 = 0;
        temp_v1_8->words.w0 = 0xE7000000;
        temp_v1_9 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_9 + 8;
        temp_v1_9->words.w0 = 0xFA000000;
        temp_v1_9->words.w1 = (temp_t4->unk_276 & 0xFF) | ~0xFF;
        temp_v1_10 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_10 + 8;
        temp_v1_10->words.w1 = 0;
        temp_v1_10->words.w0 = 0xFB000000;
        temp_v1_11 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_11 + 8;
        temp_v1_11->words.w0 = 0xFC309661;
        temp_v1_11->words.w1 = 0x552EFF7F;
        temp_v1_12 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_12 + 8;
        temp_v1_12->words.w0 = 0xFD700000;
        temp_v1_12->words.w1 = temp_t4->unk_174 + 0x300;
        temp_v1_13 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_13 + 8;
        temp_v1_13->words.w1 = 0x7000000;
        temp_v1_13->words.w0 = 0xF5700000;
        temp_v1_14 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_14 + 8;
        temp_v1_14->words.w1 = 0;
        temp_v1_14->words.w0 = 0xE6000000;
        temp_v1_15 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_15 + 8;
        temp_v1_15->words.w1 = 0x70BF2AB;
        temp_v1_15->words.w0 = 0xF3000000;
        temp_v1_16 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_16 + 8;
        temp_v1_16->words.w1 = 0;
        temp_v1_16->words.w0 = 0xE7000000;
        temp_v1_17 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_17 + 8;
        temp_v1_17->words.w1 = 0;
        temp_v1_17->words.w0 = 0xF5600600;
        temp_v1_18 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_18 + 8;
        temp_v1_18->words.w0 = 0xF2000000;
        temp_v1_18->words.w1 = 0xBC03C;
        temp_v1_19 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_19 + 8;
        temp_v1_19->words.w0 = 0xE42D409C;
        temp_v1_19->words.w1 = 0x1F8054;
        temp_v1_20 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_20 + 8;
        temp_v1_20->words.w1 = 0;
        temp_v1_20->words.w0 = 0xE1000000;
        temp_v1_21 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_v1_21 + 8;
        temp_v1_21->words.w1 = 0x4A604A6;
        temp_v1_21->words.w0 = 0xF1000000;
    }
    phi_t0 = 0xE7000000U;
    phi_t0 = 0xE7000000U;
    phi_t5 = 0xFA000000U;
    phi_t5 = 0xFA000000U;
    phi_t4 = arg0 + 0x169E8;
    if (((arg0 + 0x169E8)->unk_220 != 0) && (arg0->unk_16F1C == 0) && (arg0->unk_16F1E == 0) && (arg0->unk_1F2C == 0) && (D_801BF884 == 0)) {
        if (D_801BF898 == 0) {
            temp_v1_22 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_22 + 8;
            temp_v1_22->words.w1 = 0;
            temp_v1_22->words.w0 = 0xE7000000;
            temp_v0_5 = gSaveContext.unk_3F22;
            if ((temp_v0_5 == 1) || (temp_v0_5 == 2) || (temp_v0_5 == 5) || (arg0->unk_1682A != 0)) {
                phi_t1 = 0;
            } else if (sp100->unk_A6C & 0x200000) {
                phi_t1 = 0x46;
            } else {
                phi_t1 = (arg0 + 0x169E8)->unk_266;
            }
            sp4C = arg0 + 0x169E8;
            spF6 = phi_t1;
            temp_s0->overlay.p = func_8010D2D4(temp_s0->overlay.p, 0xFE, 0x10, 0x10, (s16) 0x10, (u16) 0x800, (u16) 0x800, (s16) 0xFF, (s16) 0xF0, (s16) 0, (s16) (s32) phi_t1);
            temp_v1_23 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_23 + 8;
            temp_v1_23->words.w1 = 0;
            temp_v1_23->words.w0 = 0xE7000000;
            temp_v1_24 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_24 + 8;
            temp_v1_24->words.w1 = (phi_t1 & 0xFF) | ~0xFF;
            temp_v1_24->words.w0 = 0xFA000000;
            temp_v1_25 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_25 + 8;
            temp_v1_25->words.w1 = 0;
            temp_v1_25->words.w0 = 0xFB000000;
            temp_v1_26 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_26 + 8;
            temp_v1_26->words.w0 = 0xFC309661;
            temp_v1_26->words.w1 = 0x552EFF7F;
            temp_v1_27 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_27 + 8;
            temp_v1_27->words.w0 = 0xFD700000;
            temp_v1_27->words.w1 = *(&D_801BFAD4 + (gSaveContext.language * 4));
            temp_v1_28 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_28 + 8;
            temp_v1_28->words.w1 = 0x7000000;
            temp_v1_28->words.w0 = 0xF5700000;
            temp_v1_29 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_29 + 8;
            temp_v1_29->words.w1 = 0;
            temp_v1_29->words.w0 = 0xE6000000;
            temp_v1_30 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_30 + 8;
            temp_v1_30->words.w1 = 0x705F400;
            temp_v1_30->words.w0 = 0xF3000000;
            temp_v1_31 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_31 + 8;
            temp_v1_31->words.w1 = 0;
            temp_v1_31->words.w0 = 0xE7000000;
            temp_v1_32 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_32 + 8;
            temp_v1_32->words.w1 = 0;
            temp_v1_32->words.w0 = 0xF5600400;
            temp_v1_33 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_33 + 8;
            temp_v1_33->words.w0 = 0xF2000000;
            temp_v1_33->words.w1 = 0x7C02C;
            temp_v1_34 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_34 + 8;
            temp_v1_34->words.w0 = 0xE445C078;
            temp_v1_34->words.w1 = 0x3DC048;
            temp_v1_35 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_35 + 8;
            temp_v1_35->words.w1 = 0;
            temp_v1_35->words.w0 = 0xE1000000;
            temp_v1_36 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v1_36 + 8;
            temp_v1_36->words.w1 = 0x4000400;
            temp_v1_36->words.w0 = 0xF1000000;
        }
        temp_t6 = D_801BF89C - 1;
        D_801BF89C = temp_t6;
        phi_t5 = 0xFA000000U;
        phi_t4 = arg0 + 0x169E8;
        if ((temp_t6 & 0xFFFF) == 0) {
            D_801BF89C = 0xA;
            D_801BF898 ^= 1;
        }
    }
    temp_v1_37 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v1_37 + 8;
    temp_v1_37->words.w1 = 0;
    temp_v1_37->words.w0 = phi_t0;
    phi_t1_2 = 1;
    phi_t3 = &gSaveContext;
    phi_t2 = 0xFFF00000;
    phi_t2 = 0xFFF00000;
    do {
        if (phi_t1_2 == 0) {
            temp_v0_6 = phi_t3->playerForm;
            phi_v1 = temp_v0_6;
            if (temp_v0_6 == 4) {
                phi_v1 = 0U;
            }
            phi_v0 = (phi_t3 + (phi_v1 * 4) + phi_t1_2)->unk_4C;
        } else {
            phi_v0 = (phi_t3 + phi_t1_2)->unk_4C;
        }
        if ((phi_v0 & 0xFF) >= 0xF1) {
            if (phi_t1_2 == 1) {
                temp_v1_38 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v1_38 + 8;
                temp_v1_38->words.w0 = phi_t5;
                temp_v1_38->words.w1 = (phi_t4->unk_26A & 0xFF) | phi_t2;
            } else if (phi_t1_2 == 2) {
                temp_v1_39 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v1_39 + 8;
                temp_v1_39->words.w0 = phi_t5;
                temp_v1_39->words.w1 = (phi_t4->unk_26C & 0xFF) | phi_t2;
            } else {
                temp_v1_40 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v1_40 + 8;
                temp_v1_40->words.w0 = phi_t5;
                temp_v1_40->words.w1 = (phi_t4->unk_26E & 0xFF) | phi_t2;
            }
            temp_v0_7 = phi_t1_2 * 2;
            temp_v1_41 = *(&D_801BFAF4 + temp_v0_7);
            temp_t0 = (*(&D_801BF9E4 + temp_v0_7) * 2) & 0xFFFF;
            sp4C = phi_t4;
            spF6 = phi_t1_2;
            temp_s0->overlay.p = func_8010CD98(temp_s0->overlay.p, (phi_t1_2 << 0xA) + 0x400 + &D_02000F60, 0x20, 0x20, (s16) (s32) *(&D_801BF9D4 + temp_v0_7), (s16) (s32) *(&D_801BF9DC + temp_v0_7), (s16) (s32) temp_v1_41, (s16) (s32) temp_v1_41, (u16) temp_t0, (u16) temp_t0);
            phi_t3 = &gSaveContext;
        }
        temp_t1 = phi_t1_2 + 1;
        phi_t1_2 = temp_t1;
        phi_t4 = phi_t4;
    } while ((s32) temp_t1 < 4);
}

void func_80117A20(GraphicsContext **arg0, s32 arg1, s16 arg2) {
    GraphicsContext *temp_v1;
    s16 *temp_t0;
    s16 *temp_t1;
    s16 temp_a3;
    s32 temp_a1;
    s32 temp_a2;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    temp_v1 = *arg0;
    temp_v0 = temp_v1->overlay.p;
    temp_v1->overlay.p = temp_v0 + 8;
    temp_v0->words.w1 = arg1;
    temp_v0->words.w0 = 0xFD180000;
    temp_v0_2 = temp_v1->overlay.p;
    temp_v1->overlay.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x7000000;
    temp_v0_2->words.w0 = 0xF5180000;
    temp_v0_3 = temp_v1->overlay.p;
    temp_v1->overlay.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE6000000;
    temp_v0_4 = temp_v1->overlay.p;
    temp_v1->overlay.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = 0x73FF080;
    temp_v0_4->words.w0 = 0xF3000000;
    temp_v0_5 = temp_v1->overlay.p;
    temp_v1->overlay.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = 0;
    temp_v0_5->words.w0 = 0xE7000000;
    temp_v0_6 = temp_v1->overlay.p;
    temp_v1->overlay.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0;
    temp_v0_6->words.w0 = 0xF5181000;
    temp_v0_7 = temp_v1->overlay.p;
    temp_v1->overlay.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0x7C07C;
    temp_v0_7->words.w0 = 0xF2000000;
    temp_v0_8 = temp_v1->overlay.p;
    temp_a1 = arg2 * 2;
    temp_v1->overlay.p = temp_v0_8 + 8;
    temp_a3 = *(&D_801BFAFC + temp_a1);
    temp_t0 = &(&D_801BF9DC)[arg2];
    temp_t1 = &(&D_801BF9D4)[arg2];
    temp_v0_8->words.w0 = (((temp_a3 + *temp_t0) * 4) & 0xFFF) | 0xE4000000 | ((((*temp_t1 + temp_a3) * 4) & 0xFFF) << 0xC);
    temp_v0_8->words.w1 = ((*temp_t0 * 4) & 0xFFF) | (((*temp_t1 * 4) & 0xFFF) << 0xC);
    temp_v0_9 = temp_v1->overlay.p;
    temp_v1->overlay.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xE1000000;
    temp_v0_10 = temp_v1->overlay.p;
    temp_v1->overlay.p = temp_v0_10 + 8;
    temp_v0_10->words.w0 = 0xF1000000;
    temp_a2 = (*(&D_801BF9BC + temp_a1) * 2) & 0xFFFF;
    temp_v0_10->words.w1 = temp_a2 | (temp_a2 << 0x10);
}

void func_80117BD0(GraphicsContext **arg0, s16 arg1, s16 arg2) {
    GraphicsContext *sp50;
    s32 sp30;
    Gfx *temp_v0_2;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_t1;
    s32 temp_a0;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_v0_7;
    s32 temp_v1;
    s8 temp_v0_3;
    u16 temp_a1;
    u16 temp_a1_2;
    u8 *temp_a3;
    u8 *temp_v0_4;
    u8 temp_v0;
    u8 phi_v1;
    s32 phi_v0;
    u16 phi_a1;
    u16 phi_a1_2;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v0_2;
    s32 phi_v1_4;
    u8 phi_a0;
    s32 phi_v0_3;

    temp_t1 = arg0->unk_0;
    if (arg1 == 0) {
        temp_v0 = gSaveContext.playerForm;
        phi_a0 = temp_v0;
        if (temp_v0 == 4) {
            phi_a0 = 0U;
        }
        phi_v1 = (&gSaveContext + (phi_a0 * 4) + arg1)->unk_4C;
    } else {
        phi_v1 = gSaveContext.equips.buttonItems[0][arg1];
    }
    temp_a0 = phi_v1 & 0xFF;
    phi_v0 = phi_v1 & 0xFF;
    if ((temp_a0 == 8) || (temp_a0 == 9) || (temp_a0 == 6) || (temp_a0 == 1) || ((temp_a0 >= 0x4A) && (temp_a0 < 0x4D)) || (temp_a0 == 7) || (temp_a0 == 0xC) || (temp_a0 == 0xA) || (temp_a0 == 0xD)) {
        if ((temp_a0 >= 0x4A) && (temp_a0 < 0x4D)) {
            phi_v0 = 1;
        }
        temp_a3 = &gItemSlots[phi_v0];
        phi_a1 = (&gSaveContext + *temp_a3)->unk_A0 & 0xFFFF;
        if (phi_v0 == 0xD) {
            phi_a1 = 1U;
            if ((*(gBitFlags + 0x64) & gSaveContext.inventory.questItems) == 0) {
                phi_a1 = 0U;
            }
        }
        temp_v0_2 = temp_t1->overlay.p;
        temp_t1->overlay.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0;
        temp_v0_2->words.w0 = 0xE7000000;
        phi_a1_2 = phi_a1;
        if ((arg1 == 0) && (gSaveContext.minigameState == 1)) {
            temp_a1 = arg0->unk_16C48;
            phi_a1_2 = temp_a1;
            phi_v1_2 = (s32) temp_a1;
        } else if ((arg1 == 0) && (temp_v0_3 = arg0->unk_1887C, (((s32) temp_v0_3 < 2) == 0))) {
            temp_a1_2 = (temp_v0_3 - 1) & 0xFFFF;
            phi_a1_2 = temp_a1_2;
            phi_v1_2 = (s32) temp_a1_2;
        } else if (((phi_v0 == 1) && ((&gSaveContext + *temp_a3)->unk_A0 == *(gUpgradeShifts + 8 + (((u32) (gSaveContext.inventory.upgrades & gUpgradeMasks->unk_0) >> gUpgradeShifts->unk_0) * 2)))) || ((temp_v0_4 = gUpgradeShifts + 8, (phi_v0 == 6)) && ((&gSaveContext + *temp_a3)->unk_A0 == (temp_v0_4 + (((u32) (gSaveContext.inventory.upgrades & gUpgradeMasks->unk_4) >> gUpgradeShifts->unk_1) * 2))->unk_8)) || ((phi_v0 == 8) && ((&gSaveContext + *temp_a3)->unk_A0 == (temp_v0_4 + (((u32) (gSaveContext.inventory.upgrades & gUpgradeMasks->unk_18) >> gUpgradeShifts->unk_6) * 2))->unk_30)) || ((phi_v0 == 9) && ((&gSaveContext + *temp_a3)->unk_A0 == (temp_v0_4 + (((u32) (gSaveContext.inventory.upgrades & gUpgradeMasks->unk_1C) >> gUpgradeShifts->unk_7) * 2))->unk_38)) || ((phi_v0 == 7) && ((&gSaveContext + *temp_a3)->unk_A0 == (temp_v0_4 + (((u32) (gSaveContext.inventory.upgrades & gUpgradeMasks->unk_4) >> gUpgradeShifts->unk_1) * 2))->unk_8)) || ((phi_v0 == 0xC) && (phi_a1 == 1)) || ((phi_v1_2 = (s32) phi_a1, (phi_v0 == 0xD)) && (phi_a1 == 1)) || ((phi_v0 == 0xA) && (phi_a1 == 0x14))) {
            temp_v0_5 = temp_t1->overlay.p;
            temp_t1->overlay.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xFA000000;
            temp_v0_5->words.w1 = (arg2 & 0xFF) | 0x78FF0000;
            phi_v1_2 = (s32) phi_a1;
        }
        phi_v1_3 = phi_v1_2;
        phi_v1_4 = phi_v1_2;
        if (phi_a1_2 == 0) {
            temp_v0_6 = temp_t1->overlay.p;
            temp_t1->overlay.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (arg2 & 0xFF) | 0x64646400;
            temp_v0_6->words.w0 = 0xFA000000;
        }
        phi_v0_2 = 0;
        phi_v0_3 = 0;
        if (phi_v1_2 >= 0xA) {
            do {
                temp_v1 = (phi_v1_3 - 0xA) & 0xFFFF;
                temp_v0_7 = (phi_v0_3 + 1) & 0xFF;
                phi_v1_3 = temp_v1;
                phi_v0_2 = temp_v0_7;
                phi_v1_4 = temp_v1;
                phi_v0_3 = temp_v0_7;
            } while (temp_v1 >= 0xA);
        }
        if (phi_v0_2 != 0) {
            temp_t0 = arg1 * 2;
            sp50 = temp_t1;
            sp30 = phi_v1_4;
            temp_t1->overlay.p = func_8010CD98(temp_t1->overlay.p, (phi_v0_2 << 6) + &D_02004AA0, 8, 8, (s16) (s32) *(&D_801BFB04 + temp_t0), (s16) (s32) *(&D_801BFB0C + temp_t0), (s16) 8, (s16) 8, (u16) 0x400, (u16) 0x400);
        }
        temp_t0_2 = arg1 * 2;
        sp50 = arg0->unk_0;
        arg0->unk_0->overlay.p = func_8010CD98(arg0->unk_0->overlay.p, (phi_v1_4 << 6) + &D_02004AA0, 8, 8, (s16) (*(&D_801BFB04 + temp_t0_2) + 6), (s16) (s32) *(&D_801BFB0C + temp_t0_2), (s16) 8, (s16) 8, (u16) 0x400, (u16) 0x400);
    }
}

void func_80118084(GraphicsContext **arg0) {
    void *spB8;
    GraphicsContext *spB4;
    void *sp18;
    GraphicsContext *temp_a3;
    s16 temp_a0;
    s16 temp_v0_38;
    s16 temp_v0_6;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    u16 temp_v0_39;
    u8 temp_v0_34;
    u8 temp_v0_35;
    u8 temp_v0_7;
    void *temp_t1;
    void *temp_t2;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_19;
    void *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_23;
    void *temp_v0_24;
    void *temp_v0_25;
    void *temp_v0_26;
    void *temp_v0_27;
    void *temp_v0_28;
    void *temp_v0_29;
    void *temp_v0_2;
    void *temp_v0_30;
    void *temp_v0_31;
    void *temp_v0_32;
    void *temp_v0_33;
    void *temp_v0_36;
    void *temp_v0_37;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_8;
    void *temp_v0_9;
    u8 phi_v1;
    u8 phi_v1_2;
    u8 phi_v1_3;
    u8 phi_v1_4;
    u8 phi_v1_5;

    temp_t2 = arg0->unk_1CCC;
    temp_a3 = arg0->unk_0;
    temp_v0 = temp_a3->overlay.p;
    temp_a3->overlay.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = temp_a3->overlay.p;
    temp_a3->overlay.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_t1 = arg0 + 0x169E8;
    temp_v0_2->words.w1 = (temp_t1->unk_268 & 0xFF) | ~0xFF;
    temp_v0_3 = temp_a3->overlay.p;
    temp_a3->overlay.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0xFF2FFFFF;
    temp_v0_3->words.w0 = 0xFC119623;
    temp_a0 = temp_t1->unk_222;
    if ((temp_a0 == 0) && (temp_t2->unk_A74 & 0x1000000)) {
        if (gSaveContext.buttonStatus[0] != 0xFF) {
            sp18 = temp_t1;
            spB4 = temp_a3;
            func_80117A20(arg0, temp_t1->unk_178, 0, temp_a3);
            temp_v0_4 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = 0;
            temp_v0_4->words.w0 = 0xE7000000;
            temp_v0_5 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = 0x552EFF7F;
            temp_v0_5->words.w0 = 0xFC309661;
            func_80117BD0(arg0, 0, temp_t1->unk_268, temp_a3);
            return;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return;
    }
    temp_v0_6 = temp_t1->unk_21C;
    if ((temp_v0_6 != 0) || (temp_a0 != 0)) {
        if (temp_v0_6 != 0) {
            temp_v0_7 = gSaveContext.playerForm;
            phi_v1 = temp_v0_7;
            if (temp_v0_7 == 4) {
                phi_v1 = 0U;
            }
            if ((s32) (&gSaveContext + (phi_v1 * 4))->unk_4C >= 0x4D) {
                phi_v1_2 = temp_v0_7;
                if (temp_v0_7 == 4) {
                    phi_v1_2 = 0U;
                }
                if ((s32) (&gSaveContext + (phi_v1_2 * 4))->unk_4C >= 0x50) {
                    goto block_13;
                }
                goto block_37;
            }
block_13:
            phi_v1_3 = temp_v0_7;
            if (temp_v0_7 == 4) {
                phi_v1_3 = 0U;
            }
            if ((&gSaveContext + (phi_v1_3 * 4))->unk_4C != 0xFF) {
                phi_v1_4 = temp_v0_7;
                if (temp_v0_7 == 4) {
                    phi_v1_4 = 0U;
                }
                if ((&gSaveContext + (phi_v1_4 * 4))->unk_4C != 9) {
                    goto block_19;
                }
                goto block_37;
            }
            goto block_37;
        }
block_37:
        if (temp_a0 != 0) {
            temp_v0_8 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_8 + 8;
            temp_v0_8->words.w1 = 0;
            temp_v0_8->words.w0 = 0xE7000000;
            temp_v0_9 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = 0x552EFF7F;
            temp_v0_9->words.w0 = 0xFC309661;
            temp_v0_10 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_10 + 8;
            temp_v0_10->words.w0 = 0xFA000000;
            temp_v0_10->words.w1 = (temp_t1->unk_268 & 0xFF) | ~0xFF;
            temp_v0_11 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_11 + 8;
            temp_v0_11->words.w0 = 0xFD700000;
            temp_v0_11->words.w1 = temp_t1->unk_174 + 0x480;
            temp_v0_12 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_12 + 8;
            temp_v0_12->words.w1 = 0x7000000;
            temp_v0_12->words.w0 = 0xF5700000;
            temp_v0_13 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_13 + 8;
            temp_v0_13->words.w1 = 0;
            temp_v0_13->words.w0 = 0xE6000000;
            temp_v0_14 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_14 + 8;
            temp_v0_14->words.w1 = 0x70BF2AB;
            temp_v0_14->words.w0 = 0xF3000000;
            temp_v0_15 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_15 + 8;
            temp_v0_15->words.w1 = 0;
            temp_v0_15->words.w0 = 0xE7000000;
            temp_v0_16 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_16 + 8;
            temp_v0_16->words.w1 = 0;
            temp_v0_16->words.w0 = 0xF5600600;
            temp_v0_17 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_17 + 8;
            temp_v0_17->words.w1 = 0xBC03C;
            temp_v0_17->words.w0 = 0xF2000000;
            D_801BF9B0 = (s16) (s32) (1024.0f / (*(&D_801BF9B4 + (gSaveContext.language * 4)) / 100.0f));
            temp_v0_18 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_18 + 8;
            temp_v1 = gSaveContext.language * 2;
            temp_v0_18->words.w0 = (((*(&D_801BF9C8 + temp_v1) + 0x10) * 4) & 0xFFF) | 0xE4000000 | ((((*(&D_801BF9C4 + temp_v1) + 0x30) * 4) & 0xFFF) << 0xC);
            temp_v1_2 = gSaveContext.language * 2;
            temp_v0_18->words.w1 = ((*(&D_801BF9C8 + temp_v1_2) * 4) & 0xFFF) | (((*(&D_801BF9C4 + temp_v1_2) * 4) & 0xFFF) << 0xC);
            temp_v0_19 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_19 + 8;
            temp_v0_19->words.w1 = 0;
            temp_v0_19->words.w0 = 0xE1000000;
            temp_v0_20 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_20 + 8;
            temp_v0_20->words.w0 = 0xF1000000;
            temp_a0_2 = D_801BF9B0 & 0xFFFF;
            temp_v0_20->words.w1 = (temp_a0_2 << 0x10) | temp_a0_2;
            return;
        }
        if (temp_t1->unk_21E != 0xA) {
            temp_v0_21 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_21 + 8;
            temp_v0_21->words.w1 = 0;
            temp_v0_21->words.w0 = 0xE7000000;
            temp_v0_22 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_22 + 8;
            temp_v0_22->words.w1 = 0x552EFF7F;
            temp_v0_22->words.w0 = 0xFC309661;
            temp_v0_23 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_23 + 8;
            temp_v0_23->words.w0 = 0xFA000000;
            temp_v0_23->words.w1 = (temp_t1->unk_268 & 0xFF) | ~0xFF;
            temp_v0_24 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_24 + 8;
            temp_v0_24->words.w0 = 0xFD700000;
            temp_v0_24->words.w1 = temp_t1->unk_174 + 0x600;
            temp_v0_25 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_25 + 8;
            temp_v0_25->words.w1 = 0x7000000;
            temp_v0_25->words.w0 = 0xF5700000;
            temp_v0_26 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_26 + 8;
            temp_v0_26->words.w1 = 0;
            temp_v0_26->words.w0 = 0xE6000000;
            temp_v0_27 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_27 + 8;
            temp_v0_27->words.w1 = 0x70BF2AB;
            temp_v0_27->words.w0 = 0xF3000000;
            temp_v0_28 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_28 + 8;
            temp_v0_28->words.w1 = 0;
            temp_v0_28->words.w0 = 0xE7000000;
            temp_v0_29 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_29 + 8;
            temp_v0_29->words.w1 = 0;
            temp_v0_29->words.w0 = 0xF5600600;
            temp_v0_30 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_30 + 8;
            temp_v0_30->words.w1 = 0xBC03C;
            temp_v0_30->words.w0 = 0xF2000000;
            D_801BF9B0 = (s16) (s32) (1024.0f / (*(&D_801BF9B4 + (gSaveContext.language * 4)) / 100.0f));
            temp_v0_31 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_31 + 8;
            temp_v1_3 = gSaveContext.language * 2;
            temp_v0_31->words.w0 = (((*(&D_801BF9C8 + temp_v1_3) + 0x10) * 4) & 0xFFF) | 0xE4000000 | ((((*(&D_801BF9C4 + temp_v1_3) + 0x30) * 4) & 0xFFF) << 0xC);
            temp_v1_4 = gSaveContext.language * 2;
            temp_v0_31->words.w1 = ((*(&D_801BF9C8 + temp_v1_4) * 4) & 0xFFF) | (((*(&D_801BF9C4 + temp_v1_4) * 4) & 0xFFF) << 0xC);
            temp_v0_32 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_32 + 8;
            temp_v0_32->words.w1 = 0;
            temp_v0_32->words.w0 = 0xE1000000;
            temp_v0_33 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_33 + 8;
            temp_v0_33->words.w0 = 0xF1000000;
            temp_a0_3 = D_801BF9B0 & 0xFFFF;
            temp_v0_33->words.w1 = (temp_a0_3 << 0x10) | temp_a0_3;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return;
    }
block_19:
    temp_v0_34 = temp_t2->unk_14B;
    if ((temp_v0_34 == 0) || (temp_v0_34 == 4)) {
        temp_v0_35 = gSaveContext.playerForm;
        phi_v1_5 = temp_v0_35;
        if (temp_v0_35 == 4) {
            phi_v1_5 = 0U;
        }
        if (((&gSaveContext + (phi_v1_5 * 4))->unk_4C != 0xFF) && ((spB8 = temp_t2, sp18 = temp_t1, spB4 = temp_a3, func_80117A20(arg0, temp_t1->unk_178, 0, temp_a3), ((temp_t2->unk_A6C << 8) < 0)) || ((gSaveContext.weekEventReg[8] & 1) != 0) || ((s32) arg0->unk_1887C >= 2)) && (temp_v0_36 = temp_a3->overlay.p, temp_a3->overlay.p = temp_v0_36 + 8, temp_v0_36->words.w1 = 0, temp_v0_36->words.w0 = 0xE7000000, temp_v0_37 = temp_a3->overlay.p, temp_a3->overlay.p = temp_v0_37 + 8, temp_v0_37->words.w1 = 0x552EFF7F, temp_v0_37->words.w0 = 0xFC309661, temp_v0_38 = arg0->unk_A4, (temp_v0_38 != 0x20)) && (temp_v0_38 != 0x24) && (temp_v0_38 != 0x11) && ((temp_v0_39 = gSaveContext.minigameState, (temp_v0_39 != 1)) || (gSaveContext.entranceIndex != 0x6400)) && ((temp_v0_39 != 1) || ((gSaveContext.eventInf[3] & 0x20) == 0)) && (((gSaveContext.weekEventReg[31] & 0x80) == 0) || (arg0->unk_1887C != 0x64))) {
            func_80117BD0(arg0, 0, temp_t1->unk_268, temp_a3);
            return;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
    }
}

void func_80118890(GraphicsContext **arg0) {
    GraphicsContext *sp60;
    GraphicsContext **sp1C;
    GraphicsContext **temp_t0;
    GraphicsContext **temp_t0_2;
    GraphicsContext **temp_t0_3;
    GraphicsContext *temp_a3;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    temp_a3 = *arg0;
    temp_v0 = temp_a3->overlay.p;
    temp_a3->overlay.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    if ((s32) gSaveContext.equips.buttonItems[0][1] < 0xF0) {
        temp_v0_2 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_t0 = arg0 + 0x169E8;
        temp_v0_2->words.w1 = (temp_t0->unk_26A & 0xFF) | ~0xFF;
        temp_v0_3 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0xFF2FFFFF;
        temp_v0_3->words.w0 = 0xFC119623;
        sp1C = temp_t0;
        sp60 = temp_a3;
        func_80117A20(arg0, temp_t0->unk_178 + 0x1000, 1, temp_a3);
        temp_v0_4 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0;
        temp_v0_4->words.w0 = 0xE7000000;
        temp_v0_5 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFC309661;
        temp_v0_5->words.w1 = 0x552EFF7F;
        sp60 = temp_a3;
        func_80117BD0(arg0, 1, temp_t0->unk_26A, temp_a3);
    }
    temp_v0_6 = (*arg0)->overlay.p;
    (*arg0)->overlay.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0;
    temp_v0_6->words.w0 = 0xE7000000;
    if ((s32) gSaveContext.equips.buttonItems[0][2] < 0xF0) {
        temp_t0_2 = arg0 + 0x169E8;
        temp_v0_7 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xFA000000;
        temp_v0_7->words.w1 = (temp_t0_2->unk_26C & 0xFF) | ~0xFF;
        temp_v0_8 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0xFF2FFFFF;
        temp_v0_8->words.w0 = 0xFC119623;
        sp1C = temp_t0_2;
        sp60 = *arg0;
        func_80117A20(arg0, temp_t0_2->unk_178 + 0x2000, 2, *arg0);
        temp_v0_9 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = 0;
        temp_v0_9->words.w0 = 0xE7000000;
        temp_v0_10 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xFC309661;
        temp_v0_10->words.w1 = 0x552EFF7F;
        sp60 = *arg0;
        func_80117BD0(arg0, 2, temp_t0_2->unk_26C, *arg0);
    }
    temp_v0_11 = (*arg0)->overlay.p;
    (*arg0)->overlay.p = temp_v0_11 + 8;
    temp_v0_11->words.w1 = 0;
    temp_v0_11->words.w0 = 0xE7000000;
    if ((s32) gSaveContext.equips.buttonItems[0][3] < 0xF0) {
        temp_t0_3 = arg0 + 0x169E8;
        temp_v0_12 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_12 + 8;
        temp_v0_12->words.w0 = 0xFA000000;
        temp_v0_12->words.w1 = (temp_t0_3->unk_26E & 0xFF) | ~0xFF;
        temp_v0_13 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_13 + 8;
        temp_v0_13->words.w1 = 0xFF2FFFFF;
        temp_v0_13->words.w0 = 0xFC119623;
        sp1C = temp_t0_3;
        sp60 = *arg0;
        func_80117A20(arg0, temp_t0_3->unk_178 + 0x3000, 3, *arg0);
        temp_v0_14 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_14 + 8;
        temp_v0_14->words.w1 = 0;
        temp_v0_14->words.w0 = 0xE7000000;
        temp_v0_15 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_15 + 8;
        temp_v0_15->words.w0 = 0xFC309661;
        temp_v0_15->words.w1 = 0x552EFF7F;
        func_80117BD0(arg0, 3, temp_t0_3->unk_26E, *arg0);
    }
}

void func_80118BA4(GraphicsContext **arg0) {
    s16 sp82;
    Gfx *sp68;
    Gfx *sp34;
    void *sp2C;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a1;
    GraphicsContext *temp_s0;
    s16 temp_v0;
    s16 temp_v0_12;
    s16 temp_v0_17;
    s16 temp_v0_24;
    s16 temp_v0_2;
    void *temp_v0_6;
    s16 phi_v0;
    Gfx *phi_v0_2;

    temp_v0 = arg0->unk_16C4E;
    temp_a1 = arg0->unk_0;
    temp_s0 = temp_a1;
    phi_v0 = temp_v0;
    if ((s32) temp_v0 >= 0x65) {
        phi_v0 = 0x64;
    }
    temp_a0 = temp_a1;
    sp82 = phi_v0;
    arg0 = arg0;
    func_8012C8D4(temp_a0);
    temp_v0_2 = gGameInfo->data[1375];
    func_80116FD8(arg0, temp_v0_2 + 0x19, temp_v0_2 + 0x46, 0xC0, 0xED);
    temp_v0_3 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xD9FFF9FF;
    temp_v0_4 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFC119623;
    temp_v0_4->words.w1 = 0xFF2FFFFF;
    temp_v0_5 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = 1;
    temp_v0_5->words.w0 = 0xE2001E01;
    SysMatrix_InsertTranslation(0.0f, 0.0f, -38.0f, 0);
    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
    temp_v0_6 = arg0 + 0x169E8;
    sp2C = temp_v0_6;
    SysMatrix_RotateStateAroundXAxis(temp_v0_6->unk_218 / 10000.0f);
    temp_v0_7 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xDA380003;
    sp68 = temp_v0_7;
    sp68->words.w1 = Matrix_NewMtx(arg0->unk_0);
    temp_v0_8 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xE7000000;
    temp_v0_9 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0x1004008;
    temp_v0_9->words.w1 = sp2C->unk_168 + 0x40;
    temp_v0_10 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_10 + 8;
    temp_v0_10->words.w0 = 0xFA000000;
    temp_v0_10->words.w1 = sp82 & 0xFF;
    temp_s0->overlay.p = func_8010DC58(temp_s0->overlay.p, &D_02000F60, 0x20, 0x20, (u16) 0);
    temp_v0_11 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_11 + 8;
    temp_v0_11->words.w1 = 0;
    temp_v0_11->words.w0 = 0xE7000000;
    temp_v0_12 = gGameInfo->data[1375];
    func_80116FD8(arg0, temp_v0_12 + 0x17, temp_v0_12 + 0x44, 0xBE, 0xEB);
    temp_v0_13 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_13 + 8;
    temp_v0_13->words.w0 = 0x1004008;
    temp_v0_13->words.w1 = sp2C->unk_168;
    temp_v0_14 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_14 + 8;
    temp_v0_14->words.w0 = 0xFA000000;
    temp_v0_14->words.w1 = (sp2C->unk_266 & 0xFF) | 0x64C8FF00;
    temp_v0_15 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_15 + 8;
    temp_v0_15->words.w1 = 0x602;
    temp_v0_15->words.w0 = 0x7000406;
    temp_v0_16 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_16 + 8;
    temp_v0_16->words.w1 = 0;
    temp_v0_16->words.w0 = 0xE7000000;
    temp_v0_17 = gGameInfo->data[1375];
    func_80116FD8(arg0, temp_v0_17 + 0x17, temp_v0_17 + 0x44, 0xBE, 0xEB);
    temp_v0_18 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_18 + 8;
    temp_v0_18->words.w1 = 0x400;
    temp_v0_18->words.w0 = 0xD9FFFFFF;
    temp_v0_19 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_19 + 8;
    temp_v0_19->words.w0 = 0xFC309661;
    temp_v0_19->words.w1 = 0x552EFF7F;
    temp_v0_20 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_20 + 8;
    temp_v0_20->words.w0 = 0xFA000000;
    temp_v0_20->words.w1 = (sp2C->unk_266 & 0xFF) | ~0xFF;
    temp_v0_21 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_21 + 8;
    temp_v0_21->words.w1 = 0;
    temp_v0_21->words.w0 = 0xFB000000;
    SysMatrix_InsertTranslation(0.0f, 0.0f, *(&D_801BF9CC + (gSaveContext.language * 4)) / 10.0f, 0);
    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
    SysMatrix_RotateStateAroundXAxis(sp2C->unk_218 / 10000.0f);
    temp_v0_22 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_22 + 8;
    temp_v0_22->words.w0 = 0xDA380003;
    sp34 = temp_v0_22;
    sp34->words.w1 = Matrix_NewMtx(arg0->unk_0);
    temp_v0_23 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_23 + 8;
    temp_v0_23->words.w0 = 0x1004008;
    temp_v0_23->words.w1 = sp2C->unk_168 + 0x80;
    temp_v0_24 = sp2C->unk_210;
    if (((s32) temp_v0_24 < 2) || (temp_v0_24 == 3)) {
        phi_v0_2 = func_8010DE38(temp_s0->overlay.p, sp2C->unk_174, 3, 0x30, (s16) 0x10, (u16) 0);
    } else {
        phi_v0_2 = func_8010DE38(temp_s0->overlay.p, sp2C->unk_174 + 0x180, 3, 0x30, (s16) 0x10, (u16) 0);
    }
    temp_s0->overlay.p = phi_v0_2;
}

void func_80119030(GraphicsContext **arg0) {
    GraphicsContext *sp88;
    void *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_9;
    GraphicsContext **temp_a2;
    GraphicsContext *temp_a3;
    View *temp_a0;
    s16 temp_t0;
    s16 temp_v0_19;
    s16 temp_v0_20;
    s16 temp_v0_21;
    s16 temp_v0_22;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a2_2;
    s32 temp_lo;
    s32 temp_lo_2;
    u16 temp_v0_2;
    u16 temp_v1_3;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;

    temp_a2 = arg0;
    temp_a3 = *temp_a2;
    temp_v0 = temp_a3->overlay.p;
    temp_a3->overlay.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_a0 = temp_a2 + 0x169E8;
    arg0 = temp_a2;
    sp88 = temp_a3;
    func_801170B8(temp_a0, temp_a2, temp_a3);
    temp_a1 = arg0 + 0x16D30;
    if ((temp_a1->unk_1EC == 6) && ((temp_v0_2 = temp_a1->unk_200, (temp_v0_2 == 3)) || (temp_v0_2 == 0xF))) {
        temp_v0_3 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060020;
        temp_v0_3->words.w1 = temp_a1->unk_168;
        sp88 = temp_a3;
        sp1C = temp_a1;
        func_8012C8D4(*arg0);
        temp_v0_4 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFC119623;
        temp_v0_4->words.w1 = 0xFF2FFFFF;
        temp_v0_5 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 1;
        temp_v0_5->words.w0 = 0xE2001E01;
        temp_v0_6 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        temp_v0_6->words.w1 = (u32) &D_801D1DE0;
        temp_lo = (s32) temp_a1->unk_278 / 0xA;
        temp_a1->unk_1A8->unk_120 = (s16) temp_lo;
        temp_a1->unk_1A8->unk_100 = (s16) temp_lo;
        temp_v1 = temp_a1->unk_1A8;
        temp_v0_7 = temp_v1->unk_100 + ((s32) temp_a1->unk_2BA / 0xA);
        temp_v1->unk_130 = temp_v0_7;
        temp_a1->unk_1A8->unk_110 = temp_v0_7;
        temp_lo_2 = (s32) temp_a1->unk_27A / 0xA;
        temp_a1->unk_1A8->unk_112 = (s16) temp_lo_2;
        temp_a1->unk_1A8->unk_102 = (s16) temp_lo_2;
        temp_v1_2 = temp_a1->unk_1A8;
        temp_v0_8 = temp_v1_2->unk_102 - ((s32) temp_a1->unk_2BA / 0xA);
        temp_v1_2->unk_132 = temp_v0_8;
        temp_a1->unk_1A8->unk_122 = temp_v0_8;
        temp_v1_3 = temp_a1->unk_272;
        if ((s32) temp_v1_3 < 0xB5) {
            temp_v0_9 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_9 + 8;
            temp_v0_9->words.w0 = 0xFA000000;
            temp_v0_9->words.w1 = (temp_a1->unk_27C & 0xFF) | ~0xFF;
            temp_v0_10 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_10 + 8;
            temp_v0_10->words.w0 = 0x1004008;
            temp_v0_10->words.w1 = (u32) (temp_a1->unk_1A8 + 0x100);
            temp_v0_11 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_11 + 8;
            temp_v0_11->words.w0 = 0xFD180000;
            temp_v0_11->words.w1 = (u32) gItemIcons[temp_a1->unk_272];
            temp_v0_12 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_12 + 8;
            temp_v0_12->words.w1 = 0x7000000;
            temp_v0_12->words.w0 = 0xF5180000;
            temp_v0_13 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_13 + 8;
            temp_v0_13->words.w1 = 0;
            temp_v0_13->words.w0 = 0xE6000000;
            temp_v0_14 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_14 + 8;
            temp_v0_14->words.w1 = 0x73FF080;
            temp_v0_14->words.w0 = 0xF3000000;
            temp_v0_15 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_15 + 8;
            temp_v0_15->words.w1 = 0;
            temp_v0_15->words.w0 = 0xE7000000;
            temp_v0_16 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_16 + 8;
            temp_v0_16->words.w1 = 0;
            temp_v0_16->words.w0 = 0xF5181000;
            temp_v0_17 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_17 + 8;
            temp_v0_17->words.w1 = 0x7C07C;
            temp_v0_17->words.w0 = 0xF2000000;
        } else {
            temp_v0_18 = temp_a3->overlay.p;
            temp_a0_2 = (s16) (temp_v1_3 - 0xB5) * 2;
            temp_a3->overlay.p = temp_v0_18 + 8;
            temp_v0_18->words.w0 = 0xFA000000;
            temp_v0_18->words.w1 = ((*(&D_801BFB24 + temp_a0_2) & 0xFF) << 8) | (*(&D_801BFB14 + temp_a0_2) << 0x18) | ((*(&D_801BFB1C + temp_a0_2) & 0xFF) << 0x10) | (temp_a1->unk_27C & 0xFF);
            temp_t0 = temp_a1->unk_27C;
            if (((s32) temp_t0 > 0) && ((s32) temp_t0 < 0xFF)) {
                temp_v1_4 = temp_a1->unk_1A8;
                temp_a2_2 = (s32) ((s32) temp_t0 / 8) / 2;
                temp_v0_19 = temp_v1_4->unk_100 - (s16) temp_a2_2;
                temp_v1_4->unk_120 = temp_v0_19;
                temp_a0_3 = (s16) temp_a2_2 * 2;
                temp_a1->unk_1A8->unk_100 = temp_v0_19;
                temp_v1_5 = temp_a1->unk_1A8;
                temp_v0_20 = temp_v1_5->unk_100 + temp_a0_3 + 0x20;
                temp_v1_5->unk_130 = temp_v0_20;
                temp_a1->unk_1A8->unk_110 = temp_v0_20;
                temp_v1_6 = temp_a1->unk_1A8;
                temp_v0_21 = temp_v1_6->unk_102 + (s16) temp_a2_2;
                temp_v1_6->unk_112 = temp_v0_21;
                temp_a1->unk_1A8->unk_102 = temp_v0_21;
                temp_v1_7 = temp_a1->unk_1A8;
                temp_v0_22 = (temp_v1_7->unk_102 - temp_a0_3) - 0x20;
                temp_v1_7->unk_132 = temp_v0_22;
                temp_a1->unk_1A8->unk_122 = temp_v0_22;
            }
            temp_v0_23 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_23 + 8;
            temp_v0_23->words.w0 = 0x1004008;
            temp_v0_23->words.w1 = (u32) (temp_a1->unk_1A8 + 0x100);
            temp_v0_24 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_24 + 8;
            temp_v0_24->words.w1 = (u32) &D_08095AC0;
            temp_v0_24->words.w0 = 0xFD700000;
            temp_v0_25 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_25 + 8;
            temp_v0_25->words.w1 = 0x7000000;
            temp_v0_25->words.w0 = 0xF5700000;
            temp_v0_26 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_26 + 8;
            temp_v0_26->words.w1 = 0;
            temp_v0_26->words.w0 = 0xE6000000;
            temp_v0_27 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_27 + 8;
            temp_v0_27->words.w1 = 0x71FF200;
            temp_v0_27->words.w0 = 0xF3000000;
            temp_v0_28 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_28 + 8;
            temp_v0_28->words.w1 = 0;
            temp_v0_28->words.w0 = 0xE7000000;
            temp_v0_29 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_29 + 8;
            temp_v0_29->words.w1 = 0;
            temp_v0_29->words.w0 = 0xF5680800;
            temp_v0_30 = temp_a3->overlay.p;
            temp_a3->overlay.p = temp_v0_30 + 8;
            temp_v0_30->words.w1 = 0x7C07C;
            temp_v0_30->words.w0 = 0xF2000000;
        }
        temp_v0_31 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v0_31 + 8;
        temp_v0_31->words.w1 = 0x602;
        temp_v0_31->words.w0 = 0x7000406;
    }
}

void func_80119610(GlobalContext *arg0) {
    s16 sp1E6;
    f32 sp1D8;
    f32 sp1D0;
    f32 sp1CC;
    s16 sp1C6;
    s16 sp1BA;
    s16 sp1B8;
    s16 sp1B6;
    s16 sp1B4;
    s16 sp1B2;
    s16 sp1B0;
    s16 sp1AE;
    s16 sp1AC;
    Gfx *sp140;
    Gfx *sp104;
    Gfx *spF0;
    Gfx *spE0;
    Gfx *spC0;
    InterfaceContext *sp70;
    u32 sp6C;
    u32 *sp68;
    RSPMatrix *sp64;
    s32 sp60;
    s32 sp5C;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_13;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_29;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_35;
    Gfx *temp_v0_36;
    Gfx *temp_v0_37;
    Gfx *temp_v0_38;
    Gfx *temp_v0_39;
    Gfx *temp_v0_40;
    Gfx *temp_v0_41;
    Gfx *temp_v0_42;
    Gfx *temp_v0_43;
    Gfx *temp_v0_44;
    Gfx *temp_v0_45;
    Gfx *temp_v0_46;
    Gfx *temp_v0_47;
    Gfx *temp_v0_48;
    Gfx *temp_v0_49;
    Gfx *temp_v0_50;
    Gfx *temp_v0_51;
    Gfx *temp_v0_52;
    Gfx *temp_v0_53;
    Gfx *temp_v0_54;
    Gfx *temp_v0_55;
    Gfx *temp_v0_56;
    Gfx *temp_v0_57;
    Gfx *temp_v0_58;
    Gfx *temp_v0_59;
    Gfx *temp_v0_5;
    Gfx *temp_v0_60;
    Gfx *temp_v0_61;
    Gfx *temp_v0_62;
    Gfx *temp_v0_63;
    Gfx *temp_v0_64;
    Gfx *temp_v0_66;
    Gfx *temp_v0_67;
    Gfx *temp_v0_68;
    Gfx *temp_v0_69;
    Gfx *temp_v0_6;
    Gfx *temp_v0_70;
    Gfx *temp_v0_71;
    Gfx *temp_v0_72;
    Gfx *temp_v0_73;
    Gfx *temp_v0_74;
    Gfx *temp_v0_75;
    Gfx *temp_v0_76;
    Gfx *temp_v0_77;
    Gfx *temp_v0_7;
    Gfx *temp_v0_83;
    Gfx *temp_v0_84;
    Gfx *temp_v0_85;
    Gfx *temp_v0_86;
    Gfx *temp_v0_87;
    Gfx *temp_v0_88;
    Gfx *temp_v0_8;
    Gfx *temp_v0_93;
    Gfx *temp_v0_94;
    Gfx *temp_v0_95;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s0;
    InterfaceContext *temp_v1;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s16 temp_a0_8;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_5;
    s16 temp_a1_6;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_a3;
    s16 temp_ra_4;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t0_3;
    s16 temp_t0_4;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_t2_2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_t6;
    s16 temp_t8;
    s16 temp_v0_28;
    s16 temp_v0_3;
    s16 temp_v0_89;
    s16 temp_v0_90;
    s16 temp_v0_91;
    s16 temp_v0_92;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_a3_2;
    s32 temp_f8;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_hi_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_t1_3;
    s32 temp_t2;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_16;
    s32 temp_v0_17;
    s32 temp_v0_18;
    s32 temp_v0_19;
    s32 temp_v0_4;
    s32 temp_v0_79;
    s32 temp_v0_80;
    s32 temp_v0_81;
    s32 temp_v0_82;
    s32 temp_v0_96;
    u16 temp_a1_4;
    u16 temp_v0_12;
    u16 temp_v0_2;
    u16 temp_v0_78;
    u32 *temp_v0_65;
    u32 temp_a1_7;
    u32 temp_ra;
    u32 temp_ra_2;
    u32 temp_ra_3;
    u8 temp_v0;
    u8 phi_v0;
    s32 phi_v1;
    s16 phi_a0;
    s32 phi_v1_2;
    s32 phi_a1;
    s16 phi_t5;
    s16 phi_t3;
    s16 phi_t0;
    s16 phi_a2;
    s16 phi_t0_2;
    s16 phi_t0_3;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    s32 phi_v1_6;
    s16 phi_a1_2;
    s16 phi_v0_2;
    s16 phi_v1_7;
    s16 phi_v0_3;
    s16 phi_v1_8;
    s16 phi_v0_4;
    s16 phi_v1_9;
    s16 phi_t0_4;
    s32 phi_v1_10;
    s32 phi_t5_2;
    s32 phi_v1_11;
    s32 phi_v1_12;
    s32 phi_v1_13;
    s32 phi_v1_14;

    temp_s0 = arg0->state.gfxCtx;
    temp_v1 = arg0 + 0x14908;
    if (gGameInfo->data[15] != 0) {
        temp_v0 = temp_v1->unk_1F22;
        phi_v0 = temp_v0;
        if (temp_v0 != 0) {
            if ((arg0->actorCtx.unk5 & 2) != 0) {
                sp70 = temp_v1;
                if (func_801690CC(arg0) != 0) {
                    phi_v0 = temp_v1->unk_1F22;
                    goto block_5;
                }
                goto block_9;
            }
block_5:
            if ((phi_v0 == 0) || ((temp_v0_2 = (arg0 + 0x14908)->unk_1F04, (((s32) temp_v0_2 < 0x100) == 0)) && ((s32) temp_v0_2 < 0x201)) || (gSaveContext.gameMode == 3)) {
                goto block_9;
            }
        } else {
block_9:
            if ((FrameAdvance_IsEnabled(arg0) == 0) && (func_800FE4A8() == 0) && (gSaveContext.day < 4)) {
                if (gSaveContext.unk_3F22 == 0x32) {
                    if (func_801234D4(arg0) != 0) {
                        D_801BFB2C = 0x50;
                        D_801BFB34 = 0x14;
                        D_801BFB30 = 5;
                    } else {
                        temp_v0_3 = D_801BFB34;
                        if (temp_v0_3 != 0) {
                            D_801BFB34 = temp_v0_3 - 1;
                        } else {
                            temp_a0 = D_801BFB30;
                            if (temp_a0 != 0) {
                                temp_t8 = D_801BFB2C;
                                temp_v0_4 = temp_t8 - 0xFF;
                                phi_v1 = temp_v0_4;
                                if (temp_v0_4 < 0) {
                                    phi_v1 = 0xFF - temp_t8;
                                }
                                temp_t6 = D_801BFB2C + (s16) (phi_v1 / (s32) temp_a0);
                                D_801BFB2C = temp_t6;
                                if ((s32) temp_t6 >= 0xFF) {
                                    D_801BFB2C = 0xFF;
                                    goto block_30;
                                }
                            } else {
                                if ((arg0->actorCtx.unk5 & 2) != 0) {
                                    D_801BFB2C = 0xFF;
                                } else {
                                    D_801BFB2C = arg0->interfaceCtx.bAlpha;
                                }
                                D_801BFB34 = 0;
                                goto block_30;
                            }
                        }
                    }
                } else {
                    if ((arg0->actorCtx.unk5 & 2) != 0) {
                        D_801BFB2C = 0xFF;
                    } else {
                        D_801BFB2C = arg0->interfaceCtx.bAlpha;
                    }
                    D_801BFB34 = 0;
block_30:
                    D_801BFB30 = 0;
                }
                if ((arg0->pauseCtx.state == 0) && (arg0->pauseCtx.debugState == 0)) {
                    sp70 = &arg0->interfaceCtx;
                    func_8012C654(arg0->state.gfxCtx);
                    temp_v0_5 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_5 + 8;
                    temp_v0_5->words.w1 = 1;
                    temp_v0_5->words.w0 = 0xE2001E01;
                    temp_v0_6 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_6 + 8;
                    temp_v0_6->words.w0 = 0xE200001C;
                    temp_v0_6->words.w1 = 0x504240;
                    temp_v0_7 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_7 + 8;
                    temp_v0_7->words.w0 = 0xFA000000;
                    temp_ra = D_801BFB2C & 0xFF;
                    temp_v0_7->words.w1 = temp_ra | 0x82828200;
                    temp_v0_8 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_8 + 8;
                    temp_v0_8->words.w0 = 0xFCFF97FF;
                    temp_v0_8->words.w1 = 0xFF2DFEFF;
                    sp6C = temp_ra;
                    temp_s0->overlay.p = func_8010D9F4(temp_s0->overlay.p, &D_02005F60, 4, 0x40, (s16) 0x23, (s16) 0x60, (s16) 0xB4, (s16) 0x80, (s16) 0x23, 1, 6, 0, (u16) 0x400, (u16) 0x400);
                    temp_v0_9 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_9 + 8;
                    temp_v0_9->words.w1 = 0;
                    temp_v0_9->words.w0 = 0xE7000000;
                    temp_v0_10 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_10 + 8;
                    temp_v0_10->words.w1 = temp_ra | ~0xFF;
                    temp_v0_10->words.w0 = 0xFA000000;
                    temp_v0_11 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_11 + 8;
                    temp_v0_11->words.w0 = 0xFCFF97FF;
                    temp_v0_11->words.w1 = 0xFF2DFEFF;
                    sp6C = temp_ra;
                    temp_s0->overlay.p = func_8010D9F4(temp_s0->overlay.p, &D_02005960, 4, 0x40, (s16) 0x32, (s16) 0x60, (s16) 0xA8, (s16) 0x80, (s16) 0x32, 1, 6, 0, (u16) 0x400, (u16) 0x400);
                    temp_hi = (s32) gSaveContext.day % 5;
                    if ((temp_hi >= 4) || ((temp_hi == 3) && (temp_v0_12 = gSaveContext.time, (((s32) temp_v0_12 < 5) == 0)) && ((s32) temp_v0_12 < 0x4000))) {
                        func_8012C8D4(arg0->state.gfxCtx);
                        temp_v0_45 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_45 + 8;
                        temp_v0_45->words.w0 = 0xDA380003;
                        sp64 = &D_801D1DE0;
                        temp_v0_45->words.w1 = (u32) &D_801D1DE0;
                    } else {
                        temp_v0_13 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_13 + 8;
                        temp_v0_13->words.w1 = 0;
                        temp_v0_13->words.w0 = 0xE7000000;
                        if (gSaveContext.unk_14 == -2) {
                            temp_t2 = D_801BFBE8 * 2;
                            temp_a0_2 = D_801BFBCC;
                            temp_t0 = *(&D_801BFBEC + temp_t2);
                            temp_v0_14 = temp_a0_2 - temp_t0;
                            if (temp_v0_14 < 0) {
                                phi_v1_10 = -temp_v0_14;
                            } else {
                                phi_v1_10 = temp_v0_14;
                            }
                            if ((s32) temp_a0_2 >= (s32) temp_t0) {
                                temp_a1 = D_801BFBE4;
                                phi_a0 = (s16) (temp_a0_2 - (s16) (phi_v1_10 / (s32) temp_a1));
                                phi_a1 = (s32) temp_a1;
                            } else {
                                temp_a1_2 = D_801BFBE4;
                                phi_a0 = (s16) (temp_a0_2 + (s16) (phi_v1_10 / (s32) temp_a1_2));
                                phi_a1 = (s32) temp_a1_2;
                            }
                            temp_t5 = D_801BFBD0;
                            temp_a2 = *(&D_801BFBF0 + temp_t2);
                            temp_v0_15 = temp_t5 - temp_a2;
                            if (temp_v0_15 < 0) {
                                phi_v1_11 = -temp_v0_15;
                            } else {
                                phi_v1_11 = temp_v0_15;
                            }
                            if ((s32) temp_t5 >= (s32) temp_a2) {
                                D_801BFBCC = phi_a0;
                                phi_t5_2 = (temp_t5 - (s16) (phi_v1_11 / phi_a1)) << 0x10;
                            } else {
                                D_801BFBCC = phi_a0;
                                phi_t5_2 = (temp_t5 + (s16) (phi_v1_11 / phi_a1)) << 0x10;
                            }
                            temp_a3 = D_801BFBD4;
                            temp_a0_3 = *(&D_801BFBF4 + temp_t2);
                            temp_v0_16 = temp_a3 - temp_a0_3;
                            phi_t5 = (s16) (phi_t5_2 >> 0x10);
                            if (temp_v0_16 < 0) {
                                phi_v1_2 = -temp_v0_16;
                            } else {
                                phi_v1_2 = temp_v0_16;
                            }
                            if ((s32) temp_a3 >= (s32) temp_a0_3) {
                                D_801BFBD4 = temp_a3 - (s16) (phi_v1_2 / phi_a1);
                                sp5C = (s32) temp_a0_3;
                                sp60 = (s32) temp_a2;
                            } else {
                                D_801BFBD4 = temp_a3 + (s16) (phi_v1_2 / phi_a1);
                                sp5C = (s32) temp_a0_3;
                                sp60 = (s32) temp_a2;
                            }
                            sp64 = (RSPMatrix *) temp_t0;
                            temp_t3 = D_801BFBD8;
                            temp_t4 = *(&D_801BFBF8 + temp_t2);
                            temp_v0_17 = temp_t3 - temp_t4;
                            if (temp_v0_17 < 0) {
                                phi_v1_12 = -temp_v0_17;
                            } else {
                                phi_v1_12 = temp_v0_17;
                            }
                            if ((s32) temp_t3 >= (s32) temp_t4) {
                                phi_t3 = (s16) (temp_t3 - (s16) (phi_v1_12 / phi_a1));
                            } else {
                                phi_t3 = (s16) (temp_t3 + (s16) (phi_v1_12 / phi_a1));
                            }
                            temp_t0_2 = D_801BFBDC;
                            temp_t1 = *(&D_801BFBFC + temp_t2);
                            temp_v0_18 = temp_t0_2 - temp_t1;
                            if (temp_v0_18 < 0) {
                                phi_v1_13 = -temp_v0_18;
                            } else {
                                phi_v1_13 = temp_v0_18;
                            }
                            if ((s32) temp_t0_2 >= (s32) temp_t1) {
                                phi_t0 = (s16) (temp_t0_2 - (s16) (phi_v1_13 / phi_a1));
                            } else {
                                phi_t0 = (s16) (temp_t0_2 + (s16) (phi_v1_13 / phi_a1));
                            }
                            temp_a2_2 = D_801BFBE0;
                            temp_a0_4 = *(&D_801BFC00 + temp_t2);
                            temp_v0_19 = temp_a2_2 - temp_a0_4;
                            if (temp_v0_19 < 0) {
                                phi_v1_14 = -temp_v0_19;
                            } else {
                                phi_v1_14 = temp_v0_19;
                            }
                            if ((s32) temp_a2_2 >= (s32) temp_a0_4) {
                                phi_a2 = (s16) (temp_a2_2 - (s16) (phi_v1_14 / phi_a1));
                            } else {
                                phi_a2 = (s16) (temp_a2_2 + (s16) (phi_v1_14 / phi_a1));
                            }
                            temp_a1_3 = phi_a1 - 1;
                            D_801BFBE4 = temp_a1_3;
                            if (temp_a1_3 == 0) {
                                D_801BFBCC = (s16) sp64;
                                D_801BFBE8 = D_801BFBE8 ^ 1;
                                D_801BFBE4 = 0xF;
                                D_801BFBD4 = unksp5E;
                                phi_t5 = unksp62;
                                phi_t3 = temp_t4;
                                phi_t0 = temp_t1;
                                phi_a2 = temp_a0_4;
                            }
                            temp_v0_20 = temp_s0->overlay.p;
                            temp_s0->overlay.p = temp_v0_20 + 8;
                            temp_v0_20->words.w0 = 0xFC309661;
                            temp_v0_20->words.w1 = 0x552EFF7F;
                            temp_v0_21 = temp_s0->overlay.p;
                            temp_s0->overlay.p = temp_v0_21 + 8;
                            temp_v0_21->words.w0 = 0xFA000000;
                            temp_v0_21->words.w1 = (D_801BFBCC << 0x18) | ((phi_t5 & 0xFF) << 0x10) | 0xFF00 | temp_ra;
                            D_801BFBD0 = phi_t5;
                            temp_v0_22 = temp_s0->overlay.p;
                            temp_s0->overlay.p = temp_v0_22 + 8;
                            temp_v0_22->words.w0 = 0xFB000000;
                            temp_v0_22->words.w1 = (phi_t3 << 0x18) | ((phi_t0 & 0xFF) << 0x10) | ((phi_a2 & 0xFF) << 8);
                            D_801BFBE0 = phi_a2;
                            D_801BFBDC = phi_t0;
                            D_801BFBD8 = phi_t3;
                        } else {
                            temp_v0_23 = temp_s0->overlay.p;
                            temp_s0->overlay.p = temp_v0_23 + 8;
                            temp_v0_23->words.w0 = 0xFC119623;
                            temp_v0_23->words.w1 = 0xFF2FFFFF;
                            temp_v0_24 = temp_s0->overlay.p;
                            temp_s0->overlay.p = temp_v0_24 + 8;
                            temp_v0_24->words.w0 = 0xFA000000;
                            temp_v0_24->words.w1 = temp_ra | 0xAA6400;
                        }
                        sp6C = temp_ra;
                        temp_s0->overlay.p = func_8010CD98(temp_s0->overlay.p, &D_02004FE0, 0x28, 0x20, (s16) 0x8C, (s16) 0xBE, (s16) 0x28, (s16) 0x20, (u16) 0x400, (u16) 0x400);
                        temp_v0_25 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_25 + 8;
                        temp_v0_25->words.w1 = 0;
                        temp_v0_25->words.w0 = 0xE7000000;
                        temp_v0_26 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_26 + 8;
                        temp_v0_26->words.w1 = temp_ra | ~0x64FF;
                        temp_v0_26->words.w0 = 0xFA000000;
                        temp_s0->overlay.p = func_8010CD98(temp_s0->overlay.p, sp70->doActionSegment + 0x780, 0x30, 0x1B, (s16) 0x89, (s16) 0xC0, (s16) 0x30, (s16) 0x1B, (u16) 0x400, (u16) 0x400);
                        temp_v0_27 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_27 + 8;
                        temp_v0_27->words.w1 = 0;
                        temp_v0_27->words.w0 = 0xE7000000;
                        temp_v0_28 = D_801BF974;
                        if (temp_v0_28 != 0) {
                            D_801BF97C += 0xB;
                            D_801BF980 += 0.02f;
                        } else {
                            D_801BF980 -= 0.02f;
                            D_801BF97C += -0xB;
                        }
                        D_801BF978 += -1;
                        if (D_801BF978 == 0) {
                            D_801BF978 = 0xA;
                            D_801BF974 = temp_v0_28 ^ 1;
                        }
                        temp_f2 = (f32) gSaveContext.time * 1.3183594f;
                        temp_f2_2 = temp_f2 - ((f32) (s16) (s32) (temp_f2 / 3600.0f) * 3600.0f);
                        sp1D0 = temp_f2_2;
                        func_8012C8D4(arg0->state.gfxCtx);
                        temp_v0_29 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_29 + 8;
                        temp_v0_29->words.w0 = 0xDA380003;
                        temp_v0_29->words.w1 = (u32) &D_801D1DE0;
                        if (D_801BFB2C != 0xFF) {
                            temp_v0_30 = temp_s0->overlay.p;
                            temp_s0->overlay.p = temp_v0_30 + 8;
                            temp_v0_30->words.w0 = 0xFA000000;
                            temp_v0_30->words.w1 = (D_801BFB2C & 0xFF) | 0xFFFF6E00;
                        } else {
                            temp_v0_31 = temp_s0->overlay.p;
                            temp_s0->overlay.p = temp_v0_31 + 8;
                            temp_v0_31->words.w0 = 0xFA000000;
                            temp_v0_31->words.w1 = (D_801BF97C & 0xFF) | 0xFFFF6E00;
                        }
                        temp_v0_32 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_32 + 8;
                        temp_v0_32->words.w0 = 0xFC119623;
                        temp_v0_32->words.w1 = 0xFF2FFFFF;
                        temp_v0_33 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_33 + 8;
                        temp_v0_33->words.w1 = 1;
                        temp_v0_33->words.w0 = 0xE2001E01;
                        temp_v0_34 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_34 + 8;
                        temp_v0_34->words.w0 = 0xE200001C;
                        temp_v0_34->words.w1 = 0x504240;
                        sp64 = &D_801D1DE0;
                        sp1D0 = temp_f2_2;
                        SysMatrix_InsertTranslation(0.0f, -86.0f, 0.0f, 0);
                        Matrix_Scale(1.0f, 1.0f, D_801BF980, 1);
                        SysMatrix_InsertZRotation_f(-(temp_f2_2 * 0.0175f) / 10.0f, 1);
                        temp_v0_35 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_35 + 8;
                        temp_v0_35->words.w0 = 0xDA380003;
                        sp140 = temp_v0_35;
                        sp140->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                        temp_v0_36 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_36 + 8;
                        temp_v0_36->words.w0 = 0x1004008;
                        temp_v0_36->words.w1 = (u32) (sp70->actionVtx + 0xC0);
                        temp_v0_37 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_37 + 8;
                        temp_v0_37->words.w1 = (u32) &D_020063C0;
                        temp_v0_37->words.w0 = 0xFD900000;
                        temp_v0_38 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_38 + 8;
                        temp_v0_38->words.w1 = 0x7000000;
                        temp_v0_38->words.w0 = 0xF5900000;
                        temp_v0_39 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_39 + 8;
                        temp_v0_39->words.w1 = 0;
                        temp_v0_39->words.w0 = 0xE6000000;
                        temp_v0_40 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_40 + 8;
                        temp_v0_40->words.w1 = 0x703F800;
                        temp_v0_40->words.w0 = 0xF3000000;
                        temp_v0_41 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_41 + 8;
                        temp_v0_41->words.w1 = 0;
                        temp_v0_41->words.w0 = 0xE7000000;
                        temp_v0_42 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_42 + 8;
                        temp_v0_42->words.w1 = 0;
                        temp_v0_42->words.w0 = 0xF5800200;
                        temp_v0_43 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_43 + 8;
                        temp_v0_43->words.w0 = 0xF2000000;
                        temp_v0_43->words.w1 = 0x3C03C;
                        temp_v0_44 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_44 + 8;
                        temp_v0_44->words.w1 = 0x602;
                        temp_v0_44->words.w0 = 0x7000406;
                    }
                    temp_v0_46 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_46 + 8;
                    temp_v0_46->words.w1 = 0;
                    temp_v0_46->words.w0 = 0xE7000000;
                    temp_v0_47 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_47 + 8;
                    temp_v0_47->words.w0 = 0xED19026C;
                    temp_v0_47->words.w1 = ((s32) ((f32) gGameInfo->data[1388] * 4.0f) & 0xFFF) | 0x370000;
                    temp_a1_4 = gSaveContext.time;
                    phi_t0_2 = 0;
                    phi_t0_4 = 0;
loop_89:
                    phi_t0_3 = phi_t0_2;
                    if ((temp_a1_4 & 0xFFFF) >= (s32) (&D_801BFB38 + (phi_t0_2 * 2))->unk_2) {
                        temp_t0_3 = phi_t0_2 + 1;
                        phi_t0_2 = temp_t0_3;
                        phi_t0_3 = temp_t0_3;
                        if ((s32) temp_t0_3 < 0x19) {
                            goto loop_89;
                        }
                    }
                    sp68 = (u32 *) (s16) temp_a1_4;
                    sp1C6 = phi_t0_3;
                    sp1D8 = Math_SinS((s16) temp_a1_4) * -40.0f;
                    temp_f14 = Math_CosS(unksp6A) * -34.0f;
                    temp_v0_48 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_48 + 8;
                    temp_v0_48->words.w1 = 0;
                    temp_v0_48->words.w0 = 0xE7000000;
                    temp_v0_49 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_49 + 8;
                    temp_v0_49->words.w1 = 0xFF2FFFFF;
                    temp_v0_49->words.w0 = 0xFC119623;
                    temp_v0_50 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_50 + 8;
                    temp_v0_50->words.w0 = 0xFA000000;
                    temp_v0_50->words.w1 = (D_801BFB2C & 0xFF) | 0xFF646E00;
                    sp1C6 = phi_t0_3;
                    SysMatrix_InsertTranslation(sp1D8, temp_f14, 0.0f, 0);
                    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
                    temp_v0_51 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_51 + 8;
                    temp_v0_51->words.w0 = 0xDA380003;
                    sp1C6 = phi_t0_3;
                    sp104 = temp_v0_51;
                    sp104->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                    temp_v0_52 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_52 + 8;
                    temp_v0_52->words.w0 = 0x1004008;
                    temp_v0_52->words.w1 = (u32) (sp70->actionVtx + 0x100);
                    sp1C6 = phi_t0_3;
                    temp_s0->overlay.p = func_8010DC58(temp_s0->overlay.p, &D_02005720, 0x18, 0x18, (u16) 0);
                    sp1D8 = Math_SinS(unksp6A) * 40.0f;
                    temp_f14_2 = Math_CosS(unksp6A) * 34.0f;
                    temp_v0_53 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_53 + 8;
                    temp_v0_53->words.w1 = 0;
                    temp_v0_53->words.w0 = 0xE7000000;
                    temp_v0_54 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_54 + 8;
                    temp_v0_54->words.w1 = 0xFF2FFFFF;
                    temp_v0_54->words.w0 = 0xFC119623;
                    temp_v0_55 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_55 + 8;
                    temp_v0_55->words.w0 = 0xFA000000;
                    temp_v0_55->words.w1 = (D_801BFB2C & 0xFF) | 0xFFFF3700;
                    sp1C6 = phi_t0_3;
                    SysMatrix_InsertTranslation(sp1D8, temp_f14_2, 0.0f, 0);
                    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
                    temp_v0_56 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_56 + 8;
                    temp_v0_56->words.w0 = 0xDA380003;
                    sp1C6 = phi_t0_3;
                    spF0 = temp_v0_56;
                    spF0->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                    temp_v0_57 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_57 + 8;
                    temp_v0_57->words.w0 = 0x1004008;
                    temp_v0_57->words.w1 = (u32) (sp70->actionVtx + 0x140);
                    sp1C6 = phi_t0_3;
                    temp_s0->overlay.p = func_8010DC58(temp_s0->overlay.p, &D_020054E0, 0x18, 0x18, (u16) 0);
                    temp_v0_58 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_58 + 8;
                    temp_v0_58->words.w1 = 0;
                    temp_v0_58->words.w0 = 0xE7000000;
                    temp_v0_59 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_59 + 8;
                    temp_v0_59->words.w0 = 0xED19026C;
                    temp_v0_59->words.w1 = ((s32) ((f32) gGameInfo->data[1389] * 4.0f) & 0xFFF) | 0x370000;
                    sp1CC = (f32) gSaveContext.time * 0.000096131f;
                    sp1C6 = phi_t0_3;
                    SysMatrix_InsertTranslation(0.0f, (f32) gGameInfo->data[1387] / 10.0f, 0.0f, 0);
                    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
                    SysMatrix_InsertZRotation_f(-(sp1CC - 3.15f), 1);
                    temp_v0_60 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_60 + 8;
                    temp_v0_60->words.w0 = 0xDA380003;
                    sp1C6 = phi_t0_3;
                    spE0 = temp_v0_60;
                    spE0->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                    temp_v0_61 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_61 + 8;
                    temp_v0_61->words.w1 = 0;
                    temp_v0_61->words.w0 = 0xE7000000;
                    temp_v0_62 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_62 + 8;
                    temp_v0_62->words.w1 = 0xFF2DFEFF;
                    temp_v0_62->words.w0 = 0xFCFF97FF;
                    temp_v0_63 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_63 + 8;
                    temp_v0_63->words.w0 = 0xFA000000;
                    temp_ra_2 = D_801BFB2C & 0xFF;
                    temp_v0_63->words.w1 = temp_ra_2;
                    temp_v0_64 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_64 + 8;
                    temp_v0_64->words.w0 = 0x1008010;
                    temp_v0_64->words.w1 = (u32) (sp70->actionVtx + 0x180);
                    sp6C = temp_ra_2;
                    temp_v0_65 = (phi_t0_3 * 4) + &D_801BFB6C;
                    sp68 = temp_v0_65;
                    temp_s0->overlay.p = func_8010DE38(temp_s0->overlay.p, *temp_v0_65, 4, 0x10, (s16) 0xB, (u16) 0);
                    temp_v0_66 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_66 + 8;
                    temp_v0_66->words.w1 = 0;
                    temp_v0_66->words.w0 = 0xE7000000;
                    temp_v0_67 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_67 + 8;
                    temp_v0_67->words.w1 = temp_ra_2 | ~0x64FF;
                    temp_v0_67->words.w0 = 0xFA000000;
                    temp_v0_68 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_68 + 8;
                    temp_v0_68->words.w0 = 0x7080C0E;
                    temp_v0_68->words.w1 = 0x80E0A;
                    SysMatrix_InsertTranslation(0.0f, (f32) gGameInfo->data[1387] / 10.0f, 0.0f, 0);
                    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
                    SysMatrix_InsertZRotation_f(-sp1CC, 1);
                    temp_v0_69 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_69 + 8;
                    temp_v0_69->words.w0 = 0xDA380003;
                    spC0 = temp_v0_69;
                    spC0->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                    temp_v0_70 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_70 + 8;
                    temp_v0_70->words.w1 = 0;
                    temp_v0_70->words.w0 = 0xE7000000;
                    temp_v0_71 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_71 + 8;
                    temp_v0_71->words.w1 = 0xFF2DFEFF;
                    temp_v0_71->words.w0 = 0xFCFF97FF;
                    temp_v0_72 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_72 + 8;
                    temp_v0_72->words.w0 = 0xFA000000;
                    temp_ra_3 = D_801BFB2C & 0xFF;
                    temp_v0_72->words.w1 = temp_ra_3;
                    temp_v0_73 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_73 + 8;
                    temp_v0_73->words.w0 = 0x1008010;
                    temp_v0_73->words.w1 = (u32) (sp70->actionVtx + 0x200);
                    sp6C = temp_ra_3;
                    temp_s0->overlay.p = func_8010DE38(temp_s0->overlay.p, *sp68, 4, 0x10, (s16) 0xB, (u16) 0);
                    temp_v0_74 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_74 + 8;
                    temp_v0_74->words.w1 = 0;
                    temp_v0_74->words.w0 = 0xE7000000;
                    temp_v0_75 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_75 + 8;
                    temp_v0_75->words.w1 = temp_ra_3 | ~0x64FF;
                    temp_v0_75->words.w0 = 0xFA000000;
                    temp_v0_76 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_76 + 8;
                    temp_v0_76->words.w0 = 0x7080C0E;
                    temp_v0_76->words.w1 = 0x80E0A;
                    temp_v0_77 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_77 + 8;
                    temp_v0_77->words.w0 = 0xDE000000;
                    temp_v0_77->words.w1 = (u32) &D_0E0001C8;
                    temp_hi_2 = (s32) gSaveContext.day % 5;
                    if ((temp_hi_2 >= 4) || ((temp_hi_2 == 3) && (temp_v0_78 = gSaveContext.time, (((s32) temp_v0_78 < 5) == 0)) && ((s32) temp_v0_78 < 0x4000))) {
                        if ((s32) gSaveContext.time >= 0x3555) {
                            temp_ra_4 = D_801BFA00;
                            temp_a3_2 = temp_ra_4 * 2;
                            temp_t3_2 = *(&D_801BFC04 + temp_a3_2);
                            temp_a0_5 = D_801BF9EC;
                            temp_v0_79 = temp_a0_5 - temp_t3_2;
                            if (temp_v0_79 < 0) {
                                phi_v1_3 = -temp_v0_79;
                            } else {
                                phi_v1_3 = temp_v0_79;
                            }
                            temp_a2_3 = D_801BF9FC;
                            temp_lo = phi_v1_3 / (s32) temp_a2_3;
                            if ((s32) temp_a0_5 >= (s32) temp_t3_2) {
                                D_801BF9EC = temp_a0_5 - (s16) temp_lo;
                            } else {
                                D_801BF9EC = temp_a0_5 + (s16) temp_lo;
                            }
                            temp_a0_6 = D_801BF9F0;
                            temp_t2_2 = *(&D_801BFC08 + temp_a3_2);
                            temp_v0_80 = temp_a0_6 - temp_t2_2;
                            if (temp_v0_80 < 0) {
                                phi_v1_4 = -temp_v0_80;
                            } else {
                                phi_v1_4 = temp_v0_80;
                            }
                            temp_lo_2 = phi_v1_4 / (s32) temp_a2_3;
                            if ((s32) temp_a0_6 >= (s32) temp_t2_2) {
                                D_801BF9F0 = temp_a0_6 - (s16) temp_lo_2;
                            } else {
                                D_801BF9F0 = temp_a0_6 + (s16) temp_lo_2;
                            }
                            temp_a0_7 = D_801BF9F4;
                            temp_t1_2 = *(&D_801BFC0C + temp_a3_2);
                            temp_v0_81 = temp_a0_7 - temp_t1_2;
                            phi_v1_5 = temp_v0_81;
                            if (temp_v0_81 < 0) {
                                phi_v1_5 = -temp_v0_81;
                            }
                            temp_lo_3 = phi_v1_5 / (s32) temp_a2_3;
                            if ((s32) temp_a0_7 >= (s32) temp_t1_2) {
                                D_801BF9F4 = temp_a0_7 - (s16) temp_lo_3;
                            } else {
                                D_801BF9F4 = temp_a0_7 + (s16) temp_lo_3;
                            }
                            temp_a0_8 = D_801BF9F8;
                            temp_a1_5 = *(&D_801BFC10 + temp_a3_2);
                            temp_v0_82 = temp_a0_8 - temp_a1_5;
                            phi_v1_6 = temp_v0_82;
                            if (temp_v0_82 < 0) {
                                phi_v1_6 = -temp_v0_82;
                            }
                            temp_lo_4 = phi_v1_6 / (s32) temp_a2_3;
                            if ((s32) temp_a0_8 >= (s32) temp_a1_5) {
                                D_801BF9F8 = temp_a0_8 - (s16) temp_lo_4;
                            } else {
                                D_801BF9F8 = temp_a0_8 + (s16) temp_lo_4;
                            }
                            D_801BF9FC = temp_a2_3 - 1;
                            if (D_801BF9FC == 0) {
                                D_801BF9EC = temp_t3_2;
                                D_801BF9F0 = temp_t2_2;
                                D_801BF9F4 = temp_t1_2;
                                D_801BF9F8 = temp_a1_5;
                                D_801BF9FC = 6;
                                D_801BFA00 = temp_ra_4 ^ 1;
                            }
                        }
                        temp_a1_6 = D_801BFB2C;
                        phi_a1_2 = temp_a1_6;
                        if (temp_a1_6 != 0) {
                            phi_a1_2 = 0xFF;
                        }
                        sp1C6 = 0;
                        sp1E6 = phi_a1_2;
                        func_8012C654(arg0->state.gfxCtx);
                        temp_v0_83 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_83 + 8;
                        temp_v0_83->words.w0 = 0xDA380003;
                        temp_t1_3 = phi_a1_2 & 0xFF;
                        temp_v0_83->words.w1 = (u32) sp64;
                        temp_v0_84 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_84 + 8;
                        temp_v0_84->words.w1 = 1;
                        temp_v0_84->words.w0 = 0xE2001E01;
                        temp_v0_85 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_85 + 8;
                        temp_v0_85->words.w0 = 0xE200001C;
                        temp_v0_85->words.w1 = 0x504240;
                        temp_v0_86 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_86 + 8;
                        temp_v0_86->words.w0 = 0xFC309661;
                        temp_v0_86->words.w1 = 0x552EFF7F;
                        temp_v0_87 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_87 + 8;
                        temp_v0_87->words.w0 = 0xFA000000;
                        temp_v0_87->words.w1 = temp_t1_3 | ~0x3CFF;
                        temp_v0_88 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_88 + 8;
                        temp_v0_88->words.w0 = 0xFB000000;
                        temp_v0_88->words.w1 = (D_801BF9F0 << 0x18) | ((D_801BF9F4 & 0xFF) << 0x10) | ((D_801BF9F8 & 0xFF) << 8);
                        sp70 = (InterfaceContext *) temp_t1_3;
                        sp1C6 = 0;
                        temp_s0->overlay.p = func_8010D9F4(temp_s0->overlay.p, &D_02006B20, 3, 0x50, (s16) 0xD, (s16) 0x77, (s16) 0xCA, (s16) 0x50, (s16) 0xD, 0, 0, 0, (u16) 0x400, (u16) 0x400);
                        temp_a1_7 = (-(s32) (((s32) gSaveContext.day % 5) << 0x10) - ((gSaveContext.time - 0x4000) & 0xFFFF)) + 0x40000;
                        sp1AC = 0;
                        temp_f0 = (f32) temp_a1_7 * 0.021972656f;
                        temp_f8 = (s32) (temp_f0 / 60.0f);
                        sp1AE = (s16) temp_f8;
                        sp1B0 = (s16) temp_f8;
                        phi_v1_7 = 0;
                        phi_v1_8 = 0;
                        phi_v1_9 = 0;
                        if ((s32) sp1AE >= 0xA) {
                            phi_v0_2 = sp1AE;
                            do {
                                temp_v0_89 = phi_v0_2 - 0xA;
                                temp_v1_2 = phi_v1_7 + 1;
                                phi_v0_2 = temp_v0_89;
                                phi_v1_7 = temp_v1_2;
                            } while ((s32) temp_v0_89 >= 0xA);
                            sp1AC = temp_v1_2;
                            sp1AE = temp_v0_89;
                        }
                        temp_hi_3 = (s32) temp_f0 % 0x3C;
                        sp1B4 = (s16) temp_hi_3;
                        sp1B2 = 0;
                        phi_v0_3 = (s16) temp_hi_3;
                        if ((s32) (s16) temp_hi_3 >= 0xA) {
                            do {
                                temp_v0_90 = phi_v0_3 - 0xA;
                                temp_v1_3 = phi_v1_8 + 1;
                                phi_v0_3 = temp_v0_90;
                                phi_v1_8 = temp_v1_3;
                            } while ((s32) temp_v0_90 >= 0xA);
                            sp1B2 = temp_v1_3;
                            sp1B4 = temp_v0_90;
                        }
                        temp_v0_91 = temp_a1_7 - (u32) (((f32) (s16) temp_hi_3 * 45.511112f) + ((f32) sp1B0 * 2730.6667f));
                        sp1BA = temp_v0_91;
                        sp1B8 = 0;
                        phi_v0_4 = temp_v0_91;
                        if ((s32) temp_v0_91 >= 0xA) {
                            do {
                                temp_v0_92 = phi_v0_4 - 0xA;
                                temp_v1_4 = phi_v1_9 + 1;
                                phi_v0_4 = temp_v0_92;
                                phi_v1_9 = temp_v1_4;
                            } while ((s32) temp_v0_92 >= 0xA);
                            sp1B8 = temp_v1_4;
                            sp1BA = temp_v0_92;
                        }
                        sp1B0 = 0xA;
                        sp1B6 = 0xA;
                        temp_v0_93 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_93 + 8;
                        temp_v0_93->words.w1 = 0;
                        temp_v0_93->words.w0 = 0xE7000000;
                        temp_v0_94 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_94 + 8;
                        temp_v0_94->words.w0 = 0xFA000000;
                        temp_v0_94->words.w1 = (D_801BF9EC << 0x18) | temp_t1_3;
                        temp_v0_95 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_95 + 8;
                        temp_v0_95->words.w0 = 0xFB000000;
                        temp_v0_95->words.w1 = D_801BF9EC << 0x18;
                        do {
                            temp_v0_96 = phi_t0_4 * 2;
                            sp1C6 = phi_t0_4;
                            temp_s0->overlay.p = func_8010D7D0(temp_s0->overlay.p, *(&D_801BFC14 + ((sp + temp_v0_96)->unk_1AC * 4)), 8, 8, (s16) (s32) *(&D_801BFC40 + temp_v0_96), (s16) 0xCD, (s16) 8, (s16) 8, (u16) 0x400, (u16) 0x400);
                            temp_t0_4 = phi_t0_4 + 1;
                            phi_t0_4 = temp_t0_4;
                        } while ((s32) temp_t0_4 < 8);
                    }
                }
            }
        }
    }
}

void func_8011B4E0(GlobalContext *globalCtx, s32 arg1) {
    InterfaceContext *temp_v0;
    s16 temp_a2;
    s16 phi_a2;

    temp_v0 = &globalCtx->interfaceCtx;
    globalCtx->interfaceCtx.unk_286 = 1;
    globalCtx->interfaceCtx.unk_288 = (s16) arg1;
    globalCtx->interfaceCtx.unk_2FC[0] = 0xFF;
    globalCtx->interfaceCtx.unk_2FC[1] = 0xA5;
    globalCtx->interfaceCtx.unk_2FC[2] = 0x37;
    globalCtx->interfaceCtx.unk_2FC[3] = 0xFF;
    globalCtx->interfaceCtx.unk_30A = 0x14;
    globalCtx->interfaceCtx.unk_308 = 0;
    globalCtx->interfaceCtx.unk_304 = 1;
    globalCtx->interfaceCtx.unk_30C = 0;
    phi_a2 = 0;
    do {
        temp_v0->unk_2AA[phi_a2] = 0;
        temp_v0->unk_29A[phi_a2] = 0;
        temp_v0->unk_28A[phi_a2] = temp_v0->unk_2AA[phi_a2];
        if (temp_v0->unk_288 == 1) {
            temp_v0->unk_2BC[phi_a2] = 140.0f;
            temp_v0->unk_2DC[phi_a2] = 100.0f;
        } else {
            temp_v0->unk_2DC[phi_a2] = 200.0f;
            temp_v0->unk_2BC[phi_a2] = 200.0f;
        }
        temp_a2 = phi_a2 + 1;
        phi_a2 = temp_a2;
    } while ((s32) temp_a2 < 8);
    temp_v0->unk_28A[0] = 1;
}

void func_8011B5C0(GlobalContext *arg0) {
    s32 sp4;
    s16 temp_a3_2;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_t1;
    s16 temp_t3;
    s16 temp_t4;
    s16 temp_t7_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t0_3;
    s32 temp_t1_2;
    s32 temp_t5;
    u16 temp_t7;
    u16 temp_t8;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t2;
    void *temp_v1;
    s16 phi_v0;
    s32 phi_a3;
    s32 phi_a3_2;
    s32 phi_a3_3;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_a1;
    s16 phi_a1_2;

    temp_v1 = arg0 + 0x169E8;
    phi_v0 = 0;
    phi_v0_3 = 0;
    if ((s32) arg0->interfaceCtx.unk_304 > 0) {
        do {
            temp_a3 = phi_v0 * 2;
            temp_t0 = temp_v1 + temp_a3;
            temp_t1 = temp_t0->unk_28A;
            temp_v0 = phi_v0 + 1;
            phi_v0 = temp_v0;
            if (temp_t1 == 1) {
                temp_t0->unk_28A = 2;
                temp_t0->unk_29A = (u16) (*(&D_801BFC50 + temp_a3) + 0xA000);
            } else if (temp_t1 == 2) {
                temp_t7 = temp_t0->unk_29A - 0x800;
                temp_t0->unk_29A = temp_t7;
                if ((temp_t7 & 0xFFFF) == *(&D_801BFC50 + temp_a3)) {
                    temp_t0->unk_28A = 3;
                }
            } else if (temp_t1 == 4) {
                temp_t8 = temp_t0->unk_29A - 0x800;
                temp_t0->unk_29A = temp_t8;
                if ((temp_t8 & 0xFFFF) == ((*(&D_801BFC50 + temp_a3) - 0x8000) & 0xFFFF)) {
                    temp_t0->unk_28A = 0;
                }
            }
        } while ((s32) temp_v0 < (s32) temp_v1->unk_304);
    }
    temp_a3_2 = temp_v1->unk_304;
    temp_t0_2 = temp_v1 + (temp_a3_2 * 2);
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    phi_a1_2 = 0;
    if ((temp_t0_2->unk_28A == 0) && ((s32) temp_a3_2 < 8)) {
        temp_t0_2->unk_28A = 1;
        (temp_v1 + (temp_v1->unk_304 * 4))->unk_2BC = 140.0f;
        (temp_v1 + (temp_v1->unk_304 * 4))->unk_2DC = 100.0f;
        temp_a2 = temp_v1->unk_304 * 2;
        (temp_v1 + temp_a2)->unk_29A = (s16) (*(&D_801BFC50 + temp_a2) + 0xA000);
        temp_v1->unk_304 = (s16) (temp_v1->unk_304 + 1);
    }
    if ((temp_v1->unk_304 == 8) && (temp_v1->unk_298 == 3)) {
        temp_t3 = temp_v1->unk_2FC;
        temp_t2 = (temp_v1->unk_308 * 6) + &D_801BFC60;
        temp_t4 = temp_t2->unk_0;
        temp_t0_3 = temp_t3 - temp_t4;
        phi_a3 = temp_t0_3;
        if (temp_t0_3 < 0) {
            phi_a3 = -temp_t0_3;
        }
        temp_t7_2 = temp_v1->unk_30A;
        temp_lo = phi_a3 / (s32) temp_t7_2;
        sp4 = (s32) temp_t7_2;
        temp_t1_2 = temp_v1->unk_2FE - temp_t2->unk_2;
        if (temp_t1_2 < 0) {
            phi_a3_2 = -temp_t1_2;
        } else {
            phi_a3_2 = temp_t1_2;
        }
        temp_lo_2 = phi_a3_2 / sp4;
        temp_t5 = temp_v1->unk_300 - temp_t2->unk_4;
        if (temp_t5 < 0) {
            phi_a3_3 = -temp_t5;
        } else {
            phi_a3_3 = temp_t5;
        }
        temp_lo_3 = phi_a3_3 / sp4;
        if ((s32) temp_t3 >= (s32) temp_t4) {
            temp_v1->unk_2FC = (s16) (temp_t3 - (s16) temp_lo);
        } else {
            temp_v1->unk_2FC = (s16) (temp_t3 + (s16) temp_lo);
        }
        temp_a3_3 = temp_v1->unk_2FE;
        if ((s32) temp_a3_3 >= (s32) *(&D_801BFC62 + (temp_v1->unk_308 * 6))) {
            temp_v1->unk_2FE = (s16) (temp_a3_3 - (s16) temp_lo_2);
        } else {
            temp_v1->unk_2FE = (s16) (temp_a3_3 + (s16) temp_lo_2);
        }
        temp_a3_4 = temp_v1->unk_300;
        if ((s32) temp_a3_4 >= (s32) *(&D_801BFC64 + (temp_v1->unk_308 * 6))) {
            temp_v1->unk_300 = (s16) (temp_a3_4 - (s16) temp_lo_3);
        } else {
            temp_v1->unk_300 = (s16) (temp_a3_4 + (s16) temp_lo_3);
        }
        temp_v1->unk_30A = (s16) (temp_v1->unk_30A - 1);
        if (temp_v1->unk_30A == 0) {
            temp_v1->unk_30A = 0x14;
            temp_v1->unk_30C = (s16) (temp_v1->unk_30C + 1);
            temp_v1->unk_308 = (s16) (temp_v1->unk_308 ^ 1);
            if (temp_v1->unk_30C == 6) {
                do {
                    temp_v0_2 = phi_v0_2 + 1;
                    (temp_v1 + (phi_v0_2 * 2))->unk_28A = 4;
                    phi_v0_2 = temp_v0_2;
                } while ((s32) temp_v0_2 < 8);
            }
        }
    }
    do {
        temp_v0_3 = phi_v0_3 + 1;
        phi_v0_3 = temp_v0_3;
        phi_a1 = phi_a1_2;
        if ((temp_v1 + (phi_v0_3 * 2))->unk_28A == 0) {
            phi_a1 = (s16) (phi_a1_2 + 1);
        }
        phi_a1_2 = phi_a1;
    } while ((s32) temp_v0_3 < 8);
    if (phi_a1 == 8) {
        temp_v1->unk_286 = 0;
    }
}

void func_8011B9E0(GlobalContext *arg0) {
    s16 temp_a0_4;
    s16 temp_a1;
    s16 temp_a3;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_t0;
    s16 temp_t1;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_7;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_t2;
    s32 temp_v0_5;
    s32 temp_v0_6;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1_5;
    void *temp_v1_6;
    s16 phi_v1;
    s32 phi_a0;
    s32 phi_a0_2;
    s16 phi_t6;
    s16 phi_v1_2;
    s16 phi_v1_3;
    s32 phi_a0_3;
    s32 phi_a0_4;
    s32 phi_a0_5;
    s16 phi_v1_4;

    temp_a2 = arg0 + 0x169E8;
    phi_v1 = 0;
    phi_v1_2 = 0;
    phi_v1_3 = 0;
    phi_v1_4 = 0;
    if ((s32) arg0->interfaceCtx.unk_304 > 0) {
        do {
            temp_a0 = phi_v1 * 2;
            temp_v0 = temp_a2 + temp_a0;
            temp_a1 = temp_v0->unk_28A;
            if (temp_a1 == 1) {
                temp_v0->unk_29A = (u16) (phi_v1 << 0xD);
                temp_a0_2 = temp_a2 + (phi_v1 * 4);
                temp_a0_2->unk_2BC = 200.0f;
                temp_a0_2->unk_2DC = 200.0f;
                temp_v0->unk_2AA = 0;
                temp_v0->unk_28A = 2;
            } else if (temp_a1 == 2) {
                temp_a0_3 = temp_a2 + (phi_v1 * 4);
                temp_v0->unk_29A = (u16) (temp_v0->unk_29A - 0x800);
                temp_a0_3->unk_2BC = (f32) (temp_a0_3->unk_2BC - 8.0f);
                temp_a0_3->unk_2DC = (f32) (temp_a0_3->unk_2DC - 8.0f);
                if (temp_a0_3->unk_2BC <= 0.0f) {
                    temp_a0_3->unk_2DC = 0.0f;
                    temp_a0_3->unk_2BC = 0.0f;
                    temp_v0->unk_28A = 3;
                    if (phi_v1 == 7) {
                        temp_a2->unk_298 = 4;
                        temp_v0_2 = temp_a2->unk_298;
                        temp_a2->unk_30A = 5;
                        temp_a2->unk_296 = temp_v0_2;
                        temp_a2->unk_294 = temp_v0_2;
                        temp_a2->unk_292 = temp_v0_2;
                        temp_a2->unk_290 = temp_v0_2;
                        temp_a2->unk_28E = temp_v0_2;
                        temp_a2->unk_28C = temp_v0_2;
                        temp_a2->unk_28A = temp_v0_2;
                    }
                }
            } else if (temp_a1 == 4) {
                temp_s0 = temp_v0->unk_2AA;
                temp_s3 = *(&D_801BFC6C + temp_a0);
                temp_a1_2 = temp_s0 - temp_s3;
                phi_a0 = temp_a1_2;
                if (temp_a1_2 < 0) {
                    phi_a0 = -temp_a1_2;
                }
                temp_lo = phi_a0 / (s32) temp_a2->unk_30A;
                if ((s32) temp_s0 >= (s32) temp_s3) {
                    phi_t6 = temp_s0 - (s16) temp_lo;
                    goto block_20;
                }
                temp_v0->unk_2AA = (s16) (temp_s0 + (s16) temp_lo);
            } else if (temp_a1 == 6) {
                temp_s3_2 = *(&D_801BFC7C + temp_a0);
                temp_s0_2 = temp_v0->unk_2AA;
                temp_a1_3 = temp_s0_2 - temp_s3_2;
                phi_a0_2 = temp_a1_3;
                if (temp_a1_3 < 0) {
                    phi_a0_2 = -temp_a1_3;
                }
                temp_lo_2 = phi_a0_2 / (s32) temp_a2->unk_30A;
                if ((s32) temp_s0_2 >= (s32) temp_s3_2) {
                    temp_v0->unk_2AA = (s16) (temp_s0_2 - (s16) temp_lo_2);
                } else {
                    phi_t6 = temp_s0_2 + (s16) temp_lo_2;
block_20:
                    temp_v0->unk_2AA = phi_t6;
                }
            }
            temp_v1 = phi_v1 + 1;
            phi_v1 = temp_v1;
        } while ((s32) temp_v1 < (s32) temp_a2->unk_304);
    }
    temp_v0_3 = temp_a2->unk_28A;
    if ((temp_v0_3 == 4) || (temp_v0_3 == 6)) {
        if (temp_v0_3 == 6) {
            temp_v1_2 = temp_a2->unk_302;
            temp_a2->unk_302 = (s16) (temp_v1_2 - (s16) ((s32) temp_v1_2 / (s32) temp_a2->unk_30A));
        }
        temp_a2->unk_30A = (s16) (temp_a2->unk_30A - 1);
        if (temp_a2->unk_30A == 0) {
            if (temp_a2->unk_28A == 4) {
                do {
                    temp_v1_3 = phi_v1_2 + 1;
                    (temp_a2 + (phi_v1_2 * 2))->unk_28A = 5;
                    phi_v1_2 = temp_v1_3;
                } while ((s32) temp_v1_3 < 8);
                temp_a2->unk_30A = 0x14;
            } else {
                do {
                    temp_v1_4 = phi_v1_3 + 1;
                    (temp_a2 + (phi_v1_3 * 2))->unk_28A = 0;
                    phi_v1_3 = temp_v1_4;
                } while ((s32) temp_v1_4 < 8);
                temp_a2->unk_286 = 0;
            }
        }
    }
    temp_v0_4 = temp_a2->unk_304;
    temp_v1_5 = temp_a2 + (temp_v0_4 * 2);
    if ((temp_v1_5->unk_28A == 0) && ((s32) temp_v0_4 < 8)) {
        temp_v1_5->unk_28A = 1;
        temp_a2->unk_304 = (s16) (temp_a2->unk_304 + 1);
    }
    if ((temp_a2->unk_304 == 8) && (temp_a2->unk_298 == 5)) {
        temp_t0 = temp_a2->unk_2FC;
        temp_a3 = temp_a2->unk_30A;
        temp_v1_6 = &D_801BFC8C + (temp_a2->unk_308 * 6);
        temp_t1 = temp_v1_6->unk_0;
        temp_v0_5 = temp_t0 - temp_t1;
        phi_a0_3 = temp_v0_5;
        if (temp_v0_5 < 0) {
            phi_a0_3 = -temp_v0_5;
        }
        temp_lo_3 = phi_a0_3 / (s32) temp_a3;
        temp_v0_6 = temp_a2->unk_2FE - temp_v1_6->unk_2;
        if (temp_v0_6 < 0) {
            phi_a0_4 = -temp_v0_6;
        } else {
            phi_a0_4 = temp_v0_6;
        }
        temp_lo_4 = phi_a0_4 / (s32) temp_a3;
        temp_t2 = temp_a2->unk_300 - temp_v1_6->unk_4;
        if (temp_t2 < 0) {
            phi_a0_5 = -temp_t2;
        } else {
            phi_a0_5 = temp_t2;
        }
        temp_lo_5 = phi_a0_5 / (s32) temp_a3;
        if ((s32) temp_t0 >= (s32) temp_t1) {
            temp_a2->unk_2FC = (s16) (temp_t0 - (s16) temp_lo_3);
        } else {
            temp_a2->unk_2FC = (s16) (temp_t0 + (s16) temp_lo_3);
        }
        temp_a0_4 = temp_a2->unk_2FE;
        if ((s32) temp_a0_4 >= (s32) (&D_801BFC8C + (temp_a2->unk_308 * 6))->unk_2) {
            temp_a2->unk_2FE = (s16) (temp_a0_4 - (s16) temp_lo_4);
        } else {
            temp_a2->unk_2FE = (s16) (temp_a0_4 + (s16) temp_lo_4);
        }
        temp_v0_7 = temp_a2->unk_300;
        if ((s32) temp_v0_7 >= (s32) (&D_801BFC8C + (temp_a2->unk_308 * 6))->unk_4) {
            temp_a2->unk_300 = (s16) (temp_v0_7 - (s16) temp_lo_5);
        } else {
            temp_a2->unk_300 = (s16) (temp_v0_7 + (s16) temp_lo_5);
        }
        temp_a2->unk_30A = (s16) (temp_a2->unk_30A - 1);
        if (temp_a2->unk_30A == 0) {
            temp_a2->unk_30A = 0x14;
            temp_a2->unk_30C = (s16) (temp_a2->unk_30C + 1);
            temp_a2->unk_308 = (s16) (temp_a2->unk_308 ^ 1);
            if (temp_a2->unk_30C == 6) {
                do {
                    temp_v1_7 = phi_v1_4 + 1;
                    (temp_a2 + (phi_v1_4 * 2))->unk_28A = 6;
                    phi_v1_4 = temp_v1_7;
                } while ((s32) temp_v1_7 < 8);
                temp_a2->unk_30A = 5;
            }
        }
    }
}

void func_8011BF70(GlobalContext *arg0) {
    s16 temp_a0_3;
    s16 temp_a2;
    s16 temp_s3;
    s16 temp_s4;
    s16 temp_t2;
    s16 temp_t3;
    s16 temp_t4;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_6;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_a0;
    s32 temp_a0_4;
    s32 temp_a2_4;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_t5;
    s32 temp_v0_4;
    s32 temp_v0_5;
    u16 temp_t9;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_5;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_7;
    s16 phi_v1;
    s32 phi_a0;
    s16 phi_v1_2;
    s32 phi_a0_2;
    s32 phi_a0_3;
    s32 phi_a0_4;
    s16 phi_v1_3;
    s16 phi_v1_4;
    s16 phi_t1;
    s16 phi_v1_5;
    s16 phi_t1_2;

    temp_a1 = arg0 + 0x169E8;
    phi_v1 = 0;
    phi_v1_4 = 0;
    phi_v1_5 = 0;
    if ((s32) arg0->interfaceCtx.unk_304 > 0) {
        do {
            temp_a0 = phi_v1 * 2;
            temp_v0 = temp_a1 + temp_a0;
            temp_a2 = temp_v0->unk_28A;
            if (temp_a2 == 1) {
                temp_v0->unk_29A = (u16) (phi_v1 << 0xD);
                temp_a2_2 = temp_a1 + (phi_v1 * 4);
                temp_a2_2->unk_2BC = 200.0f;
                temp_a2_2->unk_2DC = 200.0f;
                temp_v0->unk_2AA = 0;
                temp_v0->unk_28A = 2;
            } else if (temp_a2 == 2) {
                temp_a2_3 = temp_a1 + (phi_v1 * 4);
                temp_v0->unk_29A = (u16) (temp_v0->unk_29A - 0x800);
                temp_a2_3->unk_2BC = (f32) (temp_a2_3->unk_2BC - 8.0f);
                temp_a2_3->unk_2DC = (f32) (temp_a2_3->unk_2DC - 8.0f);
                if (temp_a2_3->unk_2BC <= 0.0f) {
                    temp_a2_3->unk_2DC = 0.0f;
                    temp_a2_3->unk_2BC = 0.0f;
                    temp_v0->unk_28A = 3;
                    if (phi_v1 == 7) {
                        temp_a1->unk_298 = 4;
                        temp_v0_2 = temp_a1->unk_298;
                        temp_a1->unk_30A = 5;
                        temp_a1->unk_296 = temp_v0_2;
                        temp_a1->unk_294 = temp_v0_2;
                        temp_a1->unk_292 = temp_v0_2;
                        temp_a1->unk_290 = temp_v0_2;
                        temp_a1->unk_28E = temp_v0_2;
                        temp_a1->unk_28C = temp_v0_2;
                        temp_a1->unk_28A = temp_v0_2;
                    }
                }
            } else if (temp_a2 == 4) {
                temp_s4 = temp_v0->unk_2AA;
                temp_s3 = *(&D_801BFC98 + temp_a0);
                temp_a2_4 = temp_s4 - temp_s3;
                phi_a0 = temp_a2_4;
                if (temp_a2_4 < 0) {
                    phi_a0 = -temp_a2_4;
                }
                temp_lo = phi_a0 / (s32) temp_a1->unk_30A;
                if ((s32) temp_s4 >= (s32) temp_s3) {
                    temp_v0->unk_2AA = (s16) (temp_s4 - (s16) temp_lo);
                } else {
                    temp_v0->unk_2AA = (s16) (temp_s4 + (s16) temp_lo);
                }
            } else if (temp_a2 == 6) {
                temp_t9 = temp_v0->unk_29A - 0x800;
                temp_v0->unk_29A = temp_t9;
                if ((temp_t9 & 0xFFFF) == ((*(&D_801BFCA8 + temp_a0) - 0x8000) & 0xFFFF)) {
                    temp_v0->unk_28A = 0;
                }
            }
            temp_v1 = phi_v1 + 1;
            phi_v1 = temp_v1;
        } while ((s32) temp_v1 < (s32) temp_a1->unk_304);
    }
    phi_v1_2 = 0;
    phi_v1_5 = 0;
    phi_t1_2 = 0;
    if (temp_a1->unk_28A == 4) {
        temp_a1->unk_30A = (s16) (temp_a1->unk_30A - 1);
        if (temp_a1->unk_30A == 0) {
            do {
                temp_v1_2 = phi_v1_2 + 1;
                (temp_a1 + (phi_v1_2 * 2))->unk_28A = 5;
                phi_v1_2 = temp_v1_2;
            } while ((s32) temp_v1_2 < 8);
            temp_a1->unk_30A = 0x14;
        }
    }
    temp_v0_3 = temp_a1->unk_304;
    temp_a0_2 = temp_a1 + (temp_v0_3 * 2);
    phi_v1_3 = phi_v1_5;
    phi_v1_4 = phi_v1_5;
    if ((temp_a0_2->unk_28A == 0) && ((s32) temp_v0_3 < 8)) {
        temp_a0_2->unk_28A = 1;
        temp_a1->unk_304 = (s16) (temp_a1->unk_304 + 1);
    }
    if ((temp_a1->unk_304 == 8) && (temp_a1->unk_298 == 5)) {
        temp_t3 = temp_a1->unk_2FC;
        temp_t2 = temp_a1->unk_30A;
        temp_t0 = &D_801BFCB8 + (temp_a1->unk_308 * 6);
        temp_t4 = temp_t0->unk_0;
        temp_v0_4 = temp_t3 - temp_t4;
        phi_a0_2 = temp_v0_4;
        if (temp_v0_4 < 0) {
            phi_a0_2 = -temp_v0_4;
        }
        temp_lo_2 = phi_a0_2 / (s32) temp_t2;
        temp_v0_5 = temp_a1->unk_2FE - temp_t0->unk_2;
        if (temp_v0_5 < 0) {
            phi_a0_3 = -temp_v0_5;
        } else {
            phi_a0_3 = temp_v0_5;
        }
        temp_lo_3 = phi_a0_3 / (s32) temp_t2;
        temp_t5 = temp_a1->unk_300 - temp_t0->unk_4;
        if (temp_t5 < 0) {
            phi_a0_4 = -temp_t5;
        } else {
            phi_a0_4 = temp_t5;
        }
        temp_lo_4 = phi_a0_4 / (s32) temp_t2;
        if ((s32) temp_t3 >= (s32) temp_t4) {
            temp_a1->unk_2FC = (s16) (temp_t3 - (s16) temp_lo_2);
        } else {
            temp_a1->unk_2FC = (s16) (temp_t3 + (s16) temp_lo_2);
        }
        temp_a0_3 = temp_a1->unk_2FE;
        if ((s32) temp_a0_3 >= (s32) (&D_801BFCB8 + (temp_a1->unk_308 * 6))->unk_2) {
            temp_a1->unk_2FE = (s16) (temp_a0_3 - (s16) temp_lo_3);
        } else {
            temp_a1->unk_2FE = (s16) (temp_a0_3 + (s16) temp_lo_3);
        }
        temp_v0_6 = temp_a1->unk_300;
        if ((s32) temp_v0_6 >= (s32) (&D_801BFCB8 + (temp_a1->unk_308 * 6))->unk_4) {
            temp_a1->unk_300 = (s16) (temp_v0_6 - (s16) temp_lo_4);
        } else {
            temp_a1->unk_300 = (s16) (temp_v0_6 + (s16) temp_lo_4);
        }
        temp_a1->unk_30A = (s16) (temp_a1->unk_30A - 1);
        if (temp_a1->unk_30A == 0) {
            temp_a1->unk_30A = 0x14;
            temp_a1->unk_30C = (s16) (temp_a1->unk_30C + 1);
            temp_a1->unk_308 = (s16) (temp_a1->unk_308 ^ 1);
            if (temp_a1->unk_30C == 6) {
                do {
                    temp_a2_5 = temp_a1 + (phi_v1_3 * 4);
                    temp_a0_4 = phi_v1_3 * 2;
                    temp_v1_3 = phi_v1_3 + 1;
                    temp_a2_5->unk_2BC = 140.0f;
                    temp_a2_5->unk_2DC = 100.0f;
                    temp_v0_7 = temp_a1 + temp_a0_4;
                    temp_v0_7->unk_28A = 6;
                    temp_v0_7->unk_29A = (u16) *(&D_801BFCA8 + temp_a0_4);
                    phi_v1_3 = temp_v1_3;
                } while ((s32) temp_v1_3 < 8);
                temp_a1->unk_30A = 5;
            }
        }
    }
    do {
        temp_v1_4 = phi_v1_4 + 1;
        phi_v1_4 = temp_v1_4;
        phi_t1 = phi_t1_2;
        if ((temp_a1 + (phi_v1_4 * 2))->unk_28A == 0) {
            phi_t1 = (s16) (phi_t1_2 + 1);
        }
        phi_t1_2 = phi_t1;
    } while ((s32) temp_v1_4 < 8);
    if (phi_t1 == 8) {
        temp_a1->unk_286 = 0;
    }
}

void func_8011C4C4(GraphicsContext **arg0) {
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f22;
    f32 temp_f24;
    s16 temp_s6;
    s32 temp_s2_2;
    s32 temp_s4;
    u32 *temp_s5;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    s16 phi_s6;
    s16 phi_s7;

    temp_a0 = *arg0;
    temp_s0 = temp_a0;
    func_8012C8D4(temp_a0);
    temp_v0 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = (u32) &D_801D1DE0;
    temp_v0_2 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFCFF97FF;
    temp_v0_2->words.w1 = 0xFF2DFEFF;
    temp_s3 = arg0 + 0x169E8;
    phi_s6 = 0;
    phi_s7 = 0;
    do {
        temp_s1 = temp_s3 + (phi_s6 * 2);
        if (temp_s1->unk_28A != 0) {
            temp_s4 = phi_s6 * 4;
            temp_s2 = temp_s3 + temp_s4;
            temp_f24 = temp_s2->unk_2BC * Math_SinS(temp_s1->unk_29A);
            temp_f22 = temp_s2->unk_2DC * Math_CosS(temp_s1->unk_29A);
            temp_v0_3 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0;
            temp_v0_3->words.w0 = 0xE7000000;
            temp_v0_4 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFA000000;
            temp_v0_4->words.w1 = temp_s3->unk_302 & 0xFF;
            SysMatrix_InsertTranslation(temp_f24, temp_f22, 0.0f, 0);
            Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
            temp_v0_5 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(*arg0);
            temp_v0_6 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0x1004008;
            temp_s2_2 = phi_s7 * 0x10;
            temp_v0_6->words.w1 = temp_s3->unk_168 + temp_s2_2 + 0x2C0;
            temp_s5 = temp_s4 + &D_801BFCC4;
            temp_s0->overlay.p = func_8010DE38(temp_s0->overlay.p, *temp_s5, 4, 0x20, (s16) 0x21, (u16) 0);
            temp_v0_7 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = 0;
            temp_v0_7->words.w0 = 0xE7000000;
            temp_v0_8 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xFA000000;
            temp_v0_8->words.w1 = (temp_s3->unk_302 & 0xFF) | (temp_s3->unk_2FC << 0x18) | ((temp_s3->unk_2FE & 0xFF) << 0x10) | ((temp_s3->unk_300 & 0xFF) << 8);
            SysMatrix_InsertTranslation(temp_f24, temp_f22, 0.0f, 0);
            Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
            temp_v0_9 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v0_9 + 8;
            temp_v0_9->words.w0 = 0xDA380003;
            temp_v0_9->words.w1 = Matrix_NewMtx(*arg0);
            temp_v0_10 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_v0_10 + 8;
            temp_v0_10->words.w0 = 0x1004008;
            temp_v0_10->words.w1 = temp_s3->unk_168 + temp_s2_2 + 0x4C0;
            temp_s0->overlay.p = func_8010DE38(temp_s0->overlay.p, *temp_s5, 4, 0x20, (s16) 0x21, (u16) 0);
        }
        temp_s6 = phi_s6 + 1;
        phi_s6 = temp_s6;
        phi_s7 = (s16) (phi_s7 + 4);
    } while ((s32) temp_s6 < 8);
}

void func_8011C808(GlobalContext *globalCtx) {
    if ((globalCtx->actorCtx.unk5 & 2) != 0) {
        globalCtx = globalCtx;
        func_801A89A8(0xE0000100);
    }
    gSaveContext.day = 4;
    gSaveContext.daysElapsed = (u32) 4;
    gSaveContext.time = 0x400A;
    globalCtx->nextEntranceIndex = 0x54C0;
    gSaveContext.nextCutsceneIndex = 0;
    globalCtx->sceneLoadFlag = 0x14;
    globalCtx->unk_1887F = 3;
}

void func_8011C898(u32 arg0, u32 arg1, ? *arg2) {
    u32 sp24;
    u32 sp20;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t8;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_a1_3;
    u32 temp_a1_4;
    u32 temp_t6;
    u32 temp_t7;

    sp20 = arg0;
    sp24 = arg1;
    arg2->unk_0 = (s16) (u32) __ull_div((u64) arg0, (u64) arg1, 0U, 0x8CA0U);
    temp_t2 = arg2->unk_0 * 0x8CA0;
    temp_a0 = (sp20 - (temp_t2 >> 0x1F)) - (sp24 < (u32) temp_t2);
    temp_a1 = sp24 - temp_t2;
    sp24 = temp_a1;
    sp20 = temp_a0;
    arg2->unk_2 = (s16) (u32) __ull_div((u64) temp_a0, (u64) temp_a1, 0U, 0x1770U);
    temp_t0 = arg2->unk_2 * 0x1770;
    temp_a0_2 = (sp20 - (temp_t0 >> 0x1F)) - (sp24 < (u32) temp_t0);
    temp_a1_2 = sp24 - temp_t0;
    sp24 = temp_a1_2;
    sp20 = temp_a0_2;
    arg2->unk_6 = (s16) (u32) __ull_div((u64) temp_a0_2, (u64) temp_a1_2, 0U, 0x3E8U);
    temp_t8 = arg2->unk_6 * 0x3E8;
    temp_a0_3 = (sp20 - (temp_t8 >> 0x1F)) - (sp24 < (u32) temp_t8);
    temp_a1_3 = sp24 - temp_t8;
    sp24 = temp_a1_3;
    sp20 = temp_a0_3;
    arg2->unk_8 = (s16) (u32) __ull_div((u64) temp_a0_3, (u64) temp_a1_3, 0U, 0x64U);
    temp_t2_2 = arg2->unk_8 * 0x64;
    temp_a0_4 = (sp20 - (temp_t2_2 >> 0x1F)) - (sp24 < (u32) temp_t2_2);
    temp_a1_4 = sp24 - temp_t2_2;
    sp24 = temp_a1_4;
    sp20 = temp_a0_4;
    arg2->unk_C = (s16) (u32) __ull_div((u64) temp_a0_4, (u64) temp_a1_4, 0U, 0xAU);
    temp_t0_2 = arg2->unk_C * 0xA;
    temp_t6 = (sp20 - (temp_t0_2 >> 0x1F)) - (sp24 < (u32) temp_t0_2);
    temp_t7 = sp24 - temp_t0_2;
    sp24 = temp_t7;
    sp20 = temp_t6;
    arg2->unk_E = (s16) temp_t7;
}

void func_8011CA64(GlobalContext *arg0) {
    u32 spD4;
    u32 spD0;
    u32 spCC;
    s32 spC8;
    s16 spC6;
    u32 sp7C;
    u32 sp78;
    u32 sp6C;
    s32 sp68;
    u32 sp64;
    s32 sp60;
    void *sp50;
    u32 sp3C;
    u32 sp38;
    GameInfo *temp_a0_2;
    GameInfo *temp_a0_3;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    InterfaceContext *temp_v1_7;
    s16 temp_a1;
    s16 temp_a1_11;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a1_5;
    s16 temp_a1_6;
    s16 temp_a1_7;
    s16 temp_a1_8;
    s16 temp_a1_9;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_t0;
    s16 temp_t0_10;
    s16 temp_t0_11;
    s16 temp_t0_12;
    s16 temp_t0_6;
    s16 temp_t0_8;
    s16 temp_t5_2;
    s16 temp_t5_3;
    s16 temp_t6_7;
    s16 temp_t7_11;
    s16 temp_t7_14;
    s16 temp_t8_3;
    s16 temp_t8_7;
    s16 temp_t9_12;
    s16 temp_t9_13;
    s16 temp_v0_11;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_3;
    s16 temp_v0_9;
    s16 temp_v1_10;
    s16 temp_v1_11;
    s32 *temp_at_2;
    s32 *temp_at_4;
    s32 *temp_at_5;
    s32 *temp_at_6;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t0_4;
    s32 temp_t0_5;
    s32 temp_t0_7;
    s32 temp_t0_9;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t6_5;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t8_4;
    s32 temp_t8_6;
    s32 temp_v0_26;
    s32 temp_v0_32;
    s32 temp_v0_33;
    s32 temp_v0_34;
    s32 temp_v0_7;
    s64 temp_ret_13;
    s64 temp_ret_17;
    s64 temp_ret_21;
    s64 temp_ret_25;
    s64 temp_ret_2;
    u16 temp_v1_2;
    u32 *temp_at;
    u32 *temp_at_3;
    u32 temp_a0_4;
    u32 temp_a1_10;
    u32 temp_t6_4;
    u32 temp_t6_6;
    u32 temp_t6_8;
    u32 temp_t7;
    u32 temp_t7_10;
    u32 temp_t7_12;
    u32 temp_t7_13;
    u32 temp_t7_15;
    u32 temp_t7_16;
    u32 temp_t7_2;
    u32 temp_t7_3;
    u32 temp_t7_4;
    u32 temp_t7_5;
    u32 temp_t7_6;
    u32 temp_t7_7;
    u32 temp_t7_8;
    u32 temp_t7_9;
    u32 temp_t8_5;
    u32 temp_t9;
    u32 temp_t9_10;
    u32 temp_t9_11;
    u32 temp_t9_2;
    u32 temp_t9_3;
    u32 temp_t9_4;
    u32 temp_t9_5;
    u32 temp_t9_6;
    u32 temp_t9_7;
    u32 temp_t9_8;
    u32 temp_t9_9;
    u32 temp_v1_12;
    u32 temp_v1_13;
    u32 temp_v1_14;
    u32 temp_v1_15;
    u32 temp_v1_16;
    u32 temp_v1_17;
    u32 temp_v1_18;
    u32 temp_v1_19;
    u32 temp_v1_20;
    u32 temp_v1_21;
    u32 temp_v1_22;
    u32 temp_v1_23;
    u32 temp_v1_24;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u32 temp_v1_5;
    u32 temp_v1_8;
    u32 temp_v1_9;
    u64 temp_ret;
    u64 temp_ret_10;
    u64 temp_ret_11;
    u64 temp_ret_12;
    u64 temp_ret_14;
    u64 temp_ret_15;
    u64 temp_ret_16;
    u64 temp_ret_18;
    u64 temp_ret_19;
    u64 temp_ret_20;
    u64 temp_ret_22;
    u64 temp_ret_23;
    u64 temp_ret_24;
    u64 temp_ret_26;
    u64 temp_ret_27;
    u64 temp_ret_28;
    u64 temp_ret_3;
    u64 temp_ret_4;
    u64 temp_ret_5;
    u64 temp_ret_6;
    u64 temp_ret_7;
    u64 temp_ret_8;
    u64 temp_ret_9;
    u64 temp_v0_12;
    u64 temp_v0_15;
    u64 temp_v0_4;
    u64 temp_v0_6;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_21;
    u8 temp_v0_2;
    u8 temp_v0_5;
    u8 temp_v0_8;
    u8 temp_v1;
    u8 temp_v1_6;
    void *temp_a0;
    void *temp_s1;
    void *temp_t1;
    void *temp_t1_10;
    void *temp_t1_11;
    void *temp_t1_2;
    void *temp_t1_3;
    void *temp_t1_4;
    void *temp_t1_5;
    void *temp_t1_6;
    void *temp_t1_7;
    void *temp_t1_8;
    void *temp_t1_9;
    s16 phi_t0;
    s16 phi_v0;
    s16 phi_t0_2;
    s16 phi_a3;
    void *phi_t2;
    u8 phi_v1;
    s16 phi_a1;
    s16 phi_a1_2;
    void *phi_t1;
    s16 phi_a1_3;
    void *phi_t1_2;
    ? *phi_a2;
    void *phi_t1_3;
    s16 phi_a1_4;
    s16 phi_t0_3;
    s16 phi_t0_4;
    s16 phi_t0_5;
    void *phi_a2_2;

    temp_s1 = arg0->state.gfxCtx;
    if ((arg0->pauseCtx.state == 0) && (arg0->pauseCtx.debugState == 0) && (arg0->gameOverCtx.state == 0) && ((temp_v1 = arg0->msgCtx.unk11F22, (temp_v1 == 0)) || ((temp_v1 != 0) && (temp_v1_2 = (arg0 + 0x10000 + 0x4908)->unk_1F04, (((s32) temp_v1_2 < 0x1BB2) == 0)) && ((s32) temp_v1_2 < 0x1BB7))) && ((arg0->actorCtx.actorList[2].first->unk_A6C & 0x200) == 0) && (arg0->sceneLoadFlag == 0) && (arg0->unk_18B4A == 0) && (sp50 = arg0 + 0x18000, (func_801690CC(arg0) == 0))) {
        if (D_801BF968 != 0) {
            temp_ret = osGetTime();
            temp_v1_3 = (u32) temp_ret;
            phi_t0 = 0;
            do {
                if (gSaveContext.unk_3DD0[phi_t0] == 4) {
                    temp_a0 = &gSaveContext + (phi_t0 * 8);
                    temp_t7 = temp_a0->unk_3EC4 + temp_v1_3;
                    temp_t9 = D_801BF8E8.unk_4;
                    temp_t6 = (((temp_t7 < temp_v1_3) + gSaveContext.unk_3EC0[phi_t0] + temp_ret) - D_801BF8E8.unk_0) - (temp_t7 < temp_t9);
                    temp_a0->unk_3EC4 = (s32) (temp_t7 - temp_t9);
                    gSaveContext.unk_3EC0[phi_t0] = temp_t6;
                }
                temp_t0 = phi_t0 + 1;
                phi_t0 = temp_t0;
            } while ((s32) temp_t0 < 7);
            D_801BF968 = 0;
        }
        D_801BF970 = 0x63;
        phi_v0 = 0;
loop_18:
        if (gSaveContext.unk_3DD0[phi_v0] != 0) {
            D_801BF970 = phi_v0;
            temp_a1 = D_801BF970;
            phi_a1 = temp_a1;
            phi_a1_2 = temp_a1;
            phi_a2_2 = &gSaveContext + temp_a1;
            phi_a1 = temp_a1;
            phi_a1_2 = temp_a1;
            if (temp_a1 == 0) {
                temp_v0 = gSaveContext.unk_3DD0[0];
                if (temp_v0 != 0xD) {
                    if (temp_v0 != 0xE) {
                        if (temp_v0 != 0xF) {
                            if (temp_v0 != 0x10) {

                            }
                        } else {
                            spCC = gSaveContext.unk_3DCC;
                            temp_t9_2 = gSaveContext.unk_3EC4;
                            spC8 = gSaveContext.unk_3DC8;
                            temp_t8 = gSaveContext.unk_3EC0;
                            sp64 = gSaveContext.unk_3E54;
                            sp6C = temp_t9_2;
                            sp60 = gSaveContext.unk_3E50;
                            sp68 = temp_t8;
                            temp_t7_2 = spCC - sp64;
                            temp_ret_2 = __ll_mul((((spC8 - sp60) - (spCC < sp64)) - temp_t8) - (temp_t7_2 < temp_t9_2), temp_t7_2 - temp_t9_2, 0, 0x40);
                            temp_ret_3 = __ull_div(temp_ret_2, (u64) (u32) (u64) temp_ret_2, 0U, 0xBB8U);
                            temp_ret_4 = __ull_div(temp_ret_3, (u64) (u32) temp_ret_3, 0U, 0x2710U);
                            temp_v1_4 = (u32) temp_ret_4;
                            gSaveContext.unk_3DE0 = temp_ret_4;
                            gSaveContext.unk_3DE4 = temp_v1_4;
                            gSaveContext.unk_3DD0[0] = 0x10;
                            func_80174F9C(func_8010E968, 0);
                            goto block_96;
                        }
                    }
                } else {
                    if (gSaveContext.unk_3DD7[0] != 0) {
                        temp_ret_5 = osGetTime();
                        temp_v1_5 = (u32) temp_ret_5;
                        gSaveContext.unk_3E50 = temp_ret_5;
                        gSaveContext.unk_3E54 = temp_v1_5;
                    }
                    gSaveContext.unk_3DD0[0] = 0xE;
                    *D_801BFA84 = 1;
                    func_80174F7C(func_8010E968, 0);
                    goto block_96;
                }
            } else {
                temp_v1_6 = gSaveContext.unk_3DD0[temp_a1];
                phi_v1 = temp_v1_6;
                switch (temp_v1_6) {
                case 1:
                case 9:
                    temp_v1_7 = &arg0->interfaceCtx;
                    D_801BFCE4 = 0x14;
                    if (temp_v1_7->unk_280 != 0) {
                        gSaveContext.timerX[temp_a1] = 0x1A;
                        if (temp_v1_7->magicAlpha != 0xFF) {
                            gSaveContext.timerY[temp_a1] = 0x16;
                        } else if ((s32) gSaveContext.healthCapacity >= 0xA1) {
                            gSaveContext.timerY[temp_a1] = 0x36;
                        } else {
                            gSaveContext.timerY[temp_a1] = 0x2E;
                        }
                        temp_v0_2 = temp_v1_7->unk_280;
                        if ((temp_v0_2 == 8) || (temp_v0_2 == 0x1E)) {
                            if (gSaveContext.unk_3DD0[temp_a1] == 1) {
                                gSaveContext.unk_3DD0[temp_a1] = 4;
                            } else {
                                gSaveContext.unk_3DD0[temp_a1] = 0xB;
                                temp_ret_6 = osGetTime();
                                temp_v1_8 = (u32) temp_ret_6;
                                temp_t0_2 = D_801BF970 * 8;
                                temp_at = &D_801BF8FC + temp_t0_2;
                                *temp_at = temp_ret_6;
                                *temp_at = temp_v1_8;
                                temp_at_2 = &D_801BF930 + temp_t0_2;
                                *temp_at_2 = 0;
                                *temp_at_2 = 0;
                            }
                            temp_ret_7 = osGetTime();
                            temp_v1_9 = (u32) temp_ret_7;
                            temp_a1_2 = D_801BF970;
                            temp_t1 = &gSaveContext + (temp_a1_2 * 8);
                            gSaveContext.unk_3E50[temp_a1_2] = temp_ret_7;
                            temp_t1->unk_3E54 = temp_v1_9;
                            gSaveContext.unk_3E88[temp_a1_2] = 0;
                            temp_t1->unk_3E8C = 0;
                            temp_t1->unk_3EC4 = 0;
                            gSaveContext.unk_3EC0[temp_a1_2] = 0;
                            phi_a1_2 = temp_a1_2;
                        }
                    } else {
                        gSaveContext.unk_3DD0[temp_a1] = 2;
                    }
                    break;
                case 2:
                    temp_a3 = D_801BFCE4 - 1;
                    D_801BFCE4 = temp_a3;
                    if (temp_a3 == 0) {
                        gSaveContext.unk_3DD0[temp_a1] = 3;
                        D_801BFCE4 = 0x14;
                    }
                    break;
                case 3:
                    if (temp_a1 == 3) {
                        temp_a0_2 = gGameInfo;
                        temp_v1_10 = gSaveContext.timerX[temp_a1];
                        temp_a3_2 = D_801BFCE4;
                        temp_v0_3 = gSaveContext.timerY[temp_a1];
                        gSaveContext.timerX[temp_a1] = temp_v1_10 - (s16) ((s32) (temp_v1_10 - temp_a0_2->data[1425]) / (s32) temp_a3_2);
                        gSaveContext.timerY[temp_a1] = temp_v0_3 - (s16) ((s32) (temp_v0_3 - temp_a0_2->data[1424]) / (s32) temp_a3_2);
                        phi_a3 = temp_a3_2;
                        phi_t2 = &gSaveContext + (temp_a1 * 2);
                    } else {
                        temp_a3_3 = D_801BFCE4;
                        temp_v1_11 = gSaveContext.timerX[temp_a1];
                        gSaveContext.timerX[temp_a1] = temp_v1_11 - (s16) ((s32) (temp_v1_11 - 0x1A) / (s32) temp_a3_3);
                        phi_a3 = temp_a3_3;
                        phi_t2 = &gSaveContext + (temp_a1 * 2);
                        if ((s32) gSaveContext.healthCapacity >= 0xA1) {
                            phi_t0_2 = (s16) ((s32) (gSaveContext.timerY[temp_a1] - 0x36) / (s32) temp_a3_3);
                        } else {
                            phi_t0_2 = (s16) ((s32) (gSaveContext.timerY[temp_a1] - 0x2E) / (s32) temp_a3_3);
                        }
                        gSaveContext.timerY[temp_a1] -= phi_t0_2;
                    }
                    temp_a3_4 = phi_a3 - 1;
                    D_801BFCE4 = temp_a3_4;
                    if (temp_a3_4 == 0) {
                        D_801BFCE4 = 0x14;
                        if (temp_a1 == 3) {
                            phi_t2->unk_3F06 = (s16) gGameInfo->data[1424];
                        } else {
                            phi_t2->unk_3EF8 = 0x1A;
                            if ((s32) gSaveContext.healthCapacity >= 0xA1) {
                                phi_t2->unk_3F06 = 0x36;
                            } else {
                                phi_t2->unk_3F06 = 0x2E;
                            }
                        }
                        gSaveContext.unk_3DD0[temp_a1] = 4;
                        temp_ret_8 = osGetTime();
                        temp_v1_12 = (u32) temp_ret_8;
                        temp_a1_3 = D_801BF970;
                        temp_t1_2 = &gSaveContext + (temp_a1_3 * 8);
                        gSaveContext.unk_3E50[temp_a1_3] = temp_ret_8;
                        temp_t1_2->unk_3E54 = temp_v1_12;
                        gSaveContext.unk_3E88[temp_a1_3] = 0;
                        temp_t1_2->unk_3E8C = 0;
                        temp_t1_2->unk_3EC4 = 0;
                        gSaveContext.unk_3EC0[temp_a1_3] = 0;
                        phi_a2_2 = &gSaveContext + temp_a1_3;
                        phi_a1 = temp_a1_3;
                    }
                    phi_v1 = phi_a2_2->unk_3DD0;
                    /* fallthrough */
                case 4:
                    phi_a1_2 = phi_a1;
                    if ((phi_v1 == 4) && (phi_a1 == 3)) {
                        temp_a0_3 = gGameInfo;
                        gSaveContext.timerX[3] = temp_a0_3->data[1425];
                        gSaveContext.timerY[3] = temp_a0_3->data[1424];
                    }
                    break;
                case 10:
                    temp_ret_9 = osGetTime();
                    temp_v1_13 = (u32) temp_ret_9;
                    temp_a1_4 = D_801BF970;
                    temp_t0_3 = temp_a1_4 * 8;
                    temp_at_3 = &D_801BF8FC + temp_t0_3;
                    *temp_at_3 = temp_ret_9;
                    *temp_at_3 = temp_v1_13;
                    temp_at_4 = &D_801BF930 + temp_t0_3;
                    *temp_at_4 = 0;
                    *temp_at_4 = 0;
                    gSaveContext.unk_3DD0[temp_a1_4] = 0xB;
                    /* fallthrough */
                case 11:
                    temp_ret_10 = osGetTime();
                    temp_v1_14 = (u32) temp_ret_10;
                    temp_a1_5 = D_801BF970;
                    temp_t0_4 = temp_a1_5 * 8;
                    temp_t7_3 = *(&D_801BF8FC + temp_t0_4);
                    temp_t8_2 = (temp_ret_10 - *(&D_801BF8F8 + temp_t0_4)) - (temp_v1_14 < temp_t7_3);
                    temp_at_5 = &D_801BF930 + temp_t0_4;
                    *temp_at_5 = temp_v1_14 - temp_t7_3;
                    *temp_at_5 = temp_t8_2;
                    phi_a1_2 = temp_a1_5;
                    break;
                case 12:
                    temp_ret_11 = osGetTime();
                    temp_v1_15 = (u32) temp_ret_11;
                    temp_a1_6 = D_801BF970;
                    temp_t0_5 = temp_a1_6 * 8;
                    temp_t1_3 = &gSaveContext + temp_t0_5;
                    temp_t9_3 = temp_t1_3->unk_3EC4 + temp_v1_15;
                    temp_t7_4 = *(&D_801BF8FC + temp_t0_5);
                    gSaveContext.unk_3EC0[temp_a1_6] = (s32) ((((temp_t9_3 < temp_v1_15) + gSaveContext.unk_3EC0[temp_a1_6] + temp_ret_11) - *(&D_801BF8F8 + temp_t0_5)) - (temp_t9_3 < temp_t7_4));
                    temp_t1_3->unk_3EC4 = (s32) (temp_t9_3 - temp_t7_4);
                    temp_at_6 = &D_801BF934 + temp_t0_5;
                    *temp_at_6 = 0;
                    *temp_at_6 = 0;
                    gSaveContext.unk_3DD0[temp_a1_6] = 4;
                    phi_a1_2 = temp_a1_6;
                    break;
                case 8:
                    temp_t1_4 = &gSaveContext + (temp_a1 * 8);
                    temp_t5 = ((s32) gSaveContext.health >> 1) * 0x64;
                    gSaveContext.unk_3DE0[temp_a1] = (s32) (temp_t5 >> 0x1F);
                    temp_t1_4->unk_3DE4 = temp_t5;
                    gSaveContext.unk_3DD7[temp_a1] = 0;
                    temp_t1_4->unk_3E1C = (s32) temp_t1_4->unk_3DE4;
                    gSaveContext.unk_3E18[temp_a1] = (s32) gSaveContext.unk_3DE0[temp_a1];
                    gSaveContext.unk_3DD0[temp_a1] = 3;
                    D_801BFCE4 = 0x14;
                    break;
                case 5:
                    temp_ret_12 = osGetTime();
                    temp_v0_4 = temp_ret_12;
                    temp_v1_16 = (u32) temp_ret_12;
                    temp_t8_3 = D_801BF970;
                    temp_t1_5 = &gSaveContext + (temp_t8_3 * 8);
                    temp_t7_5 = temp_t1_5->unk_3E54;
                    temp_t6_2 = gSaveContext.unk_3E50[temp_t8_3];
                    sp64 = temp_t7_5;
                    sp68 = gSaveContext.unk_3EC0[temp_t8_3];
                    sp6C = temp_t1_5->unk_3EC4;
                    temp_t9_4 = temp_v1_16 - temp_t7_5;
                    sp60 = temp_t6_2;
                    temp_ret_13 = __ll_mul((((temp_v0_4 - temp_t6_2) - (temp_v1_16 < temp_t7_5)) - sp68) - (temp_t9_4 < sp6C), temp_t9_4 - sp6C, 0, 0x40);
                    temp_ret_14 = __ull_div(temp_ret_13, (u64) (u32) (u64) temp_ret_13, 0U, 0xBB8U);
                    temp_ret_15 = __ull_div(temp_ret_14, (u64) (u32) temp_ret_14, 0U, 0x2710U);
                    temp_v1_17 = (u32) temp_ret_15;
                    temp_a1_7 = D_801BF970;
                    gSaveContext.unk_3E88[temp_a1_7] = temp_ret_15;
                    (&gSaveContext + (temp_a1_7 * 8))->unk_3E8C = temp_v1_17;
                    gSaveContext.unk_3DD0[temp_a1_7] = 0;
                    phi_a1_2 = temp_a1_7;
                    if (temp_a1_7 == 3) {
                        gSaveContext.day = 4;
                        if ((arg0->sceneNum == 0x19) && (gSaveContext.sceneSetupIndex == 3)) {
                            arg0->nextEntranceIndex = 0x5410;
                            gSaveContext.nextCutsceneIndex = 0xFFF0;
                            arg0->sceneLoadFlag = 0x14;
                        } else {
                            func_8011C808(arg0);
                        }
                        goto block_96;
                    }
                    temp_v0_5 = gSaveContext.unk_3DD0[6];
                    if (temp_v0_5 != 0) {
                        gSaveContext.timerX[6] = 0x73;
                        gSaveContext.timerY[6] = 0x50;
                        if ((s32) temp_v0_5 < 0xB) {
                            gSaveContext.unk_3DD0[6] = 3;
                        }
                    }
                    break;
                case 6:
                    temp_ret_16 = osGetTime();
                    temp_v0_6 = temp_ret_16;
                    temp_v1_18 = (u32) temp_ret_16;
                    temp_t5_2 = D_801BF970;
                    temp_t1_6 = &gSaveContext + (temp_t5_2 * 8);
                    temp_t7_6 = temp_t1_6->unk_3E54;
                    temp_t6_3 = gSaveContext.unk_3E50[temp_t5_2];
                    sp64 = temp_t7_6;
                    sp68 = gSaveContext.unk_3EC0[temp_t5_2];
                    sp6C = temp_t1_6->unk_3EC4;
                    temp_t9_5 = temp_v1_18 - temp_t7_6;
                    sp60 = temp_t6_3;
                    temp_ret_17 = __ll_mul((((temp_v0_6 - temp_t6_3) - (temp_v1_18 < temp_t7_6)) - sp68) - (temp_t9_5 < sp6C), temp_t9_5 - sp6C, 0, 0x40);
                    temp_ret_18 = __ull_div(temp_ret_17, (u64) (u32) (u64) temp_ret_17, 0U, 0xBB8U);
                    temp_ret_19 = __ull_div(temp_ret_18, (u64) (u32) temp_ret_18, 0U, 0x2710U);
                    temp_v0_7 = temp_ret_19;
                    temp_v1_19 = (u32) temp_ret_19;
                    temp_a1_8 = D_801BF970;
                    temp_t1_7 = &gSaveContext + (temp_a1_8 * 8);
                    gSaveContext.unk_3E88[temp_a1_8] = temp_v0_7;
                    temp_t1_7->unk_3E8C = temp_v1_19;
                    phi_a1_2 = temp_a1_8;
                    if ((gSaveContext.minigameState == 1) && (gSaveContext.entranceIndex == 0x6400)) {
                        if ((temp_v0_7 != 0) || (temp_v1_19 >= 0x2EE0U)) {
                            temp_t1_7->unk_3E8C = 0x2EE0U;
                            gSaveContext.unk_3E88[temp_a1_8] = 0;
                            temp_t1_7->unk_3DE4 = 0x2EE0;
                            goto block_88;
                        }
                    } else if (((gSaveContext.eventInf[3] & 0x10) != 0) && (arg0->sceneNum == 0x1E) && ((gSaveContext.unk_3E88[temp_a1_8] != 0) || ((u32) temp_t1_7->unk_3E8C >= 0x2EE0U))) {
                        temp_t1_7->unk_3DE4 = 0x2EE0;
block_88:
                        gSaveContext.unk_3DE0[temp_a1_8] = 0;
                    }
                    gSaveContext.unk_3DD0[temp_a1_8] = 7;
                    temp_v0_8 = gSaveContext.unk_3DD0[6];
                    if (temp_v0_8 != 0) {
                        gSaveContext.timerX[6] = 0x73;
                        gSaveContext.timerY[6] = 0x50;
                        if ((s32) temp_v0_8 < 0xB) {
                            gSaveContext.unk_3DD0[6] = 3;
                        }
                        gSaveContext.unk_3DD0[temp_a1_8] = 0;
                    }
                    break;
                }
            }
        } else {
            temp_v0_9 = phi_v0 + 1;
            phi_v0 = temp_v0_9;
            if ((s32) temp_v0_9 >= 7) {
block_96:
                phi_a1_2 = D_801BF970;
            } else {
                goto loop_18;
            }
        }
        phi_a1_3 = phi_a1_2;
        if ((phi_a1_2 != 0x63) && (temp_v0_10 = gSaveContext.unk_3DD0[phi_a1_2], (temp_v0_10 != 0))) {
            if (gSaveContext.unk_3DD7[phi_a1_2] == 0) {
                D_801BFCE8.unk_C = 0;
                temp_v0_11 = D_801BFCE8.unk_C;
                D_801BFCE8.unk_A = 0xA;
                D_801BFCE8.unk_8 = temp_v0_11;
                D_801BFCE8.unk_6 = temp_v0_11;
                D_801BFCE8.unk_2 = temp_v0_11;
                D_801BFCE8.unk_0 = temp_v0_11;
                D_801BFCE8.unk_4 = (s16) D_801BFCE8.unk_A;
                if ((temp_v0_10 == 4) || (temp_v0_10 == 0xA) || (temp_v0_10 == 0xB) || (temp_v0_10 == 0xE)) {
                    temp_ret_20 = osGetTime();
                    temp_v0_12 = temp_ret_20;
                    temp_v1_20 = (u32) temp_ret_20;
                    temp_t0_6 = D_801BF970;
                    temp_t0_7 = temp_t0_6 * 8;
                    temp_t1_9 = &gSaveContext + temp_t0_7;
                    temp_t9_6 = temp_t1_9->unk_3EC4;
                    temp_t8_4 = gSaveContext.unk_3EC0[temp_t0_6];
                    sp6C = temp_t1_9->unk_3E54;
                    temp_t7_7 = temp_v1_20 - temp_t9_6;
                    sp64 = temp_t9_6;
                    sp68 = gSaveContext.unk_3E50[temp_t0_6];
                    sp60 = temp_t8_4;
                    temp_t9_7 = *(&D_801BF934 + temp_t0_7);
                    temp_t7_8 = temp_t7_7 - temp_t9_7;
                    temp_ret_21 = __ll_mul((((((temp_v0_12 - temp_t8_4) - (temp_v1_20 < temp_t9_6)) - *(&D_801BF930 + temp_t0_7)) - (temp_t7_7 < temp_t9_7)) - sp68) - (temp_t7_8 < sp6C), temp_t7_8 - sp6C, 0, 0x40);
                    temp_ret_22 = __ull_div(temp_ret_21, (u64) (u32) (u64) temp_ret_21, 0U, 0xBB8U);
                    temp_ret_23 = __ull_div(temp_ret_22, (u64) (u32) temp_ret_22, 0U, 0x2710U);
                    temp_v1_21 = (u32) temp_ret_23;
                    temp_a1_9 = D_801BF970;
                    spD0 = temp_ret_23;
                    spD4 = temp_v1_21;
                    phi_t1 = &gSaveContext + (temp_a1_9 * 8);
                    phi_a1_3 = temp_a1_9;
                } else {
                    temp_t1_8 = &gSaveContext + (phi_a1_2 * 8);
                    phi_t1 = temp_t1_8;
                    if (temp_v0_10 == 7) {
                        spD0 = gSaveContext.unk_3E88[phi_a1_2];
                        spD4 = temp_t1_8->unk_3E8C;
                    } else {
                        spD4 = 0;
                        spD0 = 0;
                    }
                }
                phi_t1_2 = phi_t1;
                phi_a2 = &D_801BFCE8;
                phi_t1_2 = phi_t1;
                phi_a2 = &D_801BFCE8;
                if ((spD0 == 0) && (spD4 == 0)) {
                    temp_t7_9 = phi_t1->unk_3E1C;
                    phi_t1->unk_3DE4 = (s32) (temp_t7_9 - spD4);
                    phi_t1->unk_3DE0 = (s32) ((phi_t1->unk_3E18 - spD0) - (temp_t7_9 < spD4));
                } else {
                    temp_t6_4 = phi_t1->unk_3E18;
                    temp_t7_10 = phi_t1->unk_3E1C;
                    sp38 = temp_t6_4;
                    sp3C = temp_t7_10;
                    if ((temp_t6_4 >= spD0) && ((spD0 < temp_t6_4) || (temp_t7_10 >= spD4))) {
                        if ((spD0 >= temp_t6_4) && ((temp_t6_4 < spD0) || (spD4 >= temp_t7_10))) {
                            phi_t1->unk_3DE4 = 0;
                            phi_t1->unk_3DE0 = 0;
                        } else {
                            phi_t1->unk_3DE0 = (s32) ((sp38 - spD0) - (sp3C < spD4));
                            phi_t1->unk_3DE4 = (s32) (sp3C - spD4);
                        }
                    } else {
                        phi_t1->unk_3DE4 = 0;
                        phi_t1->unk_3DE0 = 0;
                        gSaveContext.unk_3DD0[phi_a1_3] = 5;
                        if (D_801BF8E0 != 0) {
                            gSaveContext.health = 0;
                            sp50->unk_784(arg0, -2 - gSaveContext.health, &D_801BFCE8);
                            phi_t1_2 = &gSaveContext + (D_801BF970 * 8);
                            phi_a2 = &D_801BFCE8;
                        }
                        D_801BF8E0 = 0;
                    }
                }
                temp_a0_4 = phi_t1_2->unk_3DE0;
                temp_a1_10 = phi_t1_2->unk_3DE4;
                sp78 = temp_a0_4;
                sp7C = temp_a1_10;
                func_8011C898(temp_a0_4, temp_a1_10, phi_a2);
                temp_t7_11 = D_801BF970;
                temp_t8_5 = gSaveContext.unk_3DE0[temp_t7_11];
                temp_t9_8 = (&gSaveContext + (temp_t7_11 * 8))->unk_3DE4;
                sp38 = temp_t8_5;
                sp3C = temp_t9_8;
                if ((temp_t8_5 != 0) || (temp_t9_8 >= 0x1771U)) {
                    temp_v0_14 = D_801BFCF0;
                    if ((D_801BFCF8 != temp_v0_14) && (temp_v0_14 == 1)) {
                        play_sound(0x4804U);
                        D_801BFCF8 = D_801BFCF0;
                    }
                } else if ((sp38 != 0) || (sp3C >= 0x3E9U)) {
                    temp_v0_13 = D_801BFCF0;
                    if ((D_801BFCF8 != temp_v0_13) && ((temp_v0_13 & 1) != 0)) {
                        play_sound(0x4819U);
                        D_801BFCF8 = D_801BFCF0;
                    }
                } else if (D_801BFCF8 != D_801BFCF0) {
                    play_sound(0x481AU);
                    D_801BFCF8 = D_801BFCF0;
                }
            } else {
                D_801BFCF0 = 0;
                D_801BFCF0 = 0;
                D_801BFCE8.unk_0 = 0;
                D_801BFCE8.unk_0 = 0;
                D_801BFCE8.unk_0 = 0;
                D_801BFCF2 = 0xA;
                D_801BFCEC = D_801BFCF2;
                if ((temp_v0_10 == 4) || (temp_v0_10 == 0xE)) {
                    temp_ret_24 = osGetTime();
                    temp_v0_15 = temp_ret_24;
                    temp_v1_22 = (u32) temp_ret_24;
                    temp_t0_8 = D_801BF970;
                    temp_t0_9 = temp_t0_8 * 8;
                    temp_t1_11 = &gSaveContext + temp_t0_9;
                    temp_t7_12 = temp_t1_11->unk_3EC4;
                    temp_t6_5 = gSaveContext.unk_3EC0[temp_t0_8];
                    temp_t8_6 = gSaveContext.unk_3E50[temp_t0_8];
                    temp_t9_9 = temp_t1_11->unk_3E54;
                    sp64 = temp_t7_12;
                    sp60 = temp_t6_5;
                    sp68 = temp_t8_6;
                    sp6C = temp_t9_9;
                    temp_t9_10 = temp_v1_22 - temp_t9_9;
                    temp_t9_11 = temp_t9_10 - temp_t7_12;
                    temp_t7_13 = *(&D_801BF934 + temp_t0_9);
                    temp_ret_25 = __ll_mul((((((temp_v0_15 - temp_t8_6) - (temp_v1_22 < temp_t9_9)) - temp_t6_5) - (temp_t9_10 < temp_t7_12)) - *(&D_801BF930 + temp_t0_9)) - (temp_t9_11 < temp_t7_13), temp_t9_11 - temp_t7_13, 0, 0x40);
                    temp_ret_26 = __ull_div(temp_ret_25, (u64) (u32) (u64) temp_ret_25, 0U, 0xBB8U);
                    temp_ret_27 = __ull_div(temp_ret_26, (u64) (u32) temp_ret_26, 0U, 0x2710U);
                    temp_v1_23 = (u32) temp_ret_27;
                    spD0 = temp_ret_27;
                    spD4 = temp_v1_23;
                    phi_t1_3 = &gSaveContext + (D_801BF970 * 8);
                } else {
                    temp_t1_10 = &gSaveContext + (phi_a1_2 * 8);
                    phi_t1_3 = temp_t1_10;
                    if (temp_v0_10 == 7) {
                        spD0 = gSaveContext.unk_3E88[phi_a1_2];
                        spD4 = temp_t1_10->unk_3E8C;
                    } else if (phi_a1_2 == 0) {
                        spD0 = gSaveContext.unk_3DE0[phi_a1_2];
                        spD4 = temp_t1_10->unk_3DE4;
                    } else {
                        spD4 = 0;
                        spD0 = 0;
                    }
                }
                if ((gSaveContext.minigameState == 1) && (gSaveContext.entranceIndex == 0x6400)) {
                    if ((spD0 != 0) || (spD4 >= 0x2EE0U)) {
                        spD4 = 0x2EE0;
                        goto block_152;
                    }
                } else if (((gSaveContext.eventInf[3] & 0x10) != 0) && (arg0->sceneNum == 0x1E) && ((spD0 != 0) || (spD4 >= 0x2EE0U))) {
                    spD4 = 0x2EE0;
block_152:
                    spD0 = 0;
                }
                phi_t1_3->unk_3DE0 = spD0;
                phi_t1_3->unk_3DE4 = spD4;
                func_8011C898(spD0, spD4, &D_801BFCE8);
                if ((gSaveContext.minigameState == 1) && (gSaveContext.entranceIndex == 0x6400)) {
                    temp_t9_12 = D_801BF970;
                    if (((gSaveContext.unk_3DE0[temp_t9_12] != 0) || ((u32) (&gSaveContext + (temp_t9_12 * 8))->unk_3DE4 >= 0x2AF9U)) && (D_801BFCF8 != D_801BFCF0)) {
                        play_sound(0x481AU);
                        D_801BFCF8 = D_801BFCF0;
                    }
                } else if (((gSaveContext.eventInf[3] & 0x10) != 0) && (arg0->sceneNum == 0x1E)) {
                    temp_t7_14 = D_801BF970;
                    temp_t6_6 = gSaveContext.unk_3DE0[temp_t7_14];
                    temp_t7_15 = (&gSaveContext + (temp_t7_14 * 8))->unk_3DE4;
                    sp78 = temp_t6_6;
                    sp7C = temp_t7_15;
                    if ((temp_t6_6 >= 0U) && ((temp_t6_6 > 0U) || ((u32) ((&gSaveContext + (((s32) gSaveContext.day % 5) * 4))->unk_E68 - 0x384) < temp_t7_15)) && (D_801BFCF8 != D_801BFCF0)) {
                        play_sound(0x481AU);
                        D_801BFCF8 = D_801BFCF0;
                    }
                }
            }
            temp_v0_16 = temp_s1->overlay.p;
            temp_s1->overlay.p = temp_v0_16 + 8;
            temp_v0_16->words.w1 = 0;
            temp_v0_16->words.w0 = 0xE7000000;
            temp_v0_17 = temp_s1->overlay.p;
            temp_s1->overlay.p = temp_v0_17 + 8;
            temp_v0_17->words.w1 = -1;
            temp_v0_17->words.w0 = 0xFA000000;
            temp_v0_18 = temp_s1->overlay.p;
            temp_s1->overlay.p = temp_v0_18 + 8;
            temp_v0_18->words.w1 = 0;
            temp_v0_18->words.w0 = 0xFB000000;
            temp_t6_7 = D_801BF970;
            temp_s1->overlay.p = func_8010CD98(temp_s1->overlay.p, &D_02002360, 0x10, 0x10, (s16) (s32) gSaveContext.timerX[temp_t6_7], (s16) (gSaveContext.timerY[temp_t6_7] + 2), (s16) 0x10, (s16) 0x10, (u16) 0x400, (u16) 0x400);
            temp_v0_19 = temp_s1->overlay.p;
            temp_s1->overlay.p = temp_v0_19 + 8;
            temp_v0_19->words.w1 = 0;
            temp_v0_19->words.w0 = 0xE7000000;
            temp_v0_20 = temp_s1->overlay.p;
            temp_s1->overlay.p = temp_v0_20 + 8;
            temp_v0_20->words.w0 = 0xFCFF97FF;
            temp_v0_20->words.w1 = 0xFF2DFEFF;
            temp_a1_11 = D_801BF970;
            phi_a1_4 = temp_a1_11;
            if (((temp_a1_11 == 0) && (gSaveContext.unk_3DD0[0] == 0xE) && (D_801BF8E4 == 0) && (gSaveContext.unk_3DE0 == 0) && ((u32) gSaveContext.unk_3DE4 < 0x12CU)) || (D_801BF8E4 == 2) || ((s32) gSaveContext.unk_3DD0[temp_a1_11] < 0xD)) {
                temp_v0_21 = gSaveContext.unk_3DD0[temp_a1_11];
                if (temp_v0_21 != 0) {
                    if (temp_a1_11 == 2) {
                        if (((gSaveContext.unk_3DE0[temp_a1_11] == 0) && ((&gSaveContext + (temp_a1_11 * 8))->unk_3DE4 == 0)) || (temp_v0_21 == 4)) {
                            temp_v0_23 = temp_s1->overlay.p;
                            temp_s1->overlay.p = temp_v0_23 + 8;
                            temp_v0_23->words.w1 = 0xFF3200FF;
                            temp_v0_23->words.w0 = 0xFA000000;
                        } else {
                            temp_v0_22 = temp_s1->overlay.p;
                            temp_s1->overlay.p = temp_v0_22 + 8;
                            temp_v0_22->words.w1 = -1;
                            temp_v0_22->words.w0 = 0xFA000000;
                        }
                        phi_a1_4 = D_801BF970;
                    } else {
                        if ((gSaveContext.minigameState == 1) && (gSaveContext.entranceIndex == 0x6400)) {
                            if ((gSaveContext.unk_3DE0[temp_a1_11] != 0) || ((u32) (&gSaveContext + (temp_a1_11 * 8))->unk_3DE4 >= 0x2AF8U)) {
                                temp_v0_25 = temp_s1->overlay.p;
                                temp_s1->overlay.p = temp_v0_25 + 8;
                                temp_v0_25->words.w1 = 0xFF3200FF;
                                temp_v0_25->words.w0 = 0xFA000000;
                            } else {
                                temp_v0_24 = temp_s1->overlay.p;
                                temp_s1->overlay.p = temp_v0_24 + 8;
                                temp_v0_24->words.w1 = -1;
                                temp_v0_24->words.w0 = 0xFA000000;
                            }
                        } else if (((gSaveContext.eventInf[3] & 0x10) != 0) && (arg0->sceneNum == 0x1E)) {
                            temp_v0_26 = gSaveContext.day;
                            temp_t6_8 = gSaveContext.unk_3DE0[temp_a1_11];
                            temp_t7_16 = (&gSaveContext + (temp_a1_11 * 8))->unk_3DE4;
                            sp78 = temp_t6_8;
                            sp7C = temp_t7_16;
                            if ((temp_t6_8 >= 0U) && ((temp_t6_8 > 0U) || (temp_t7_16 >= (u32) (&gSaveContext + ((temp_v0_26 % 5) * 4))->unk_E68))) {
                                temp_v0_27 = temp_s1->overlay.p;
                                temp_s1->overlay.p = temp_v0_27 + 8;
                                temp_v0_27->words.w1 = 0xFF3200FF;
                                temp_v0_27->words.w0 = 0xFA000000;
                            } else if ((sp78 >= 0U) && ((sp78 > 0U) || (sp7C >= (u32) ((&gSaveContext + ((temp_v0_26 % 5) * 4))->unk_E68 - 0x384)))) {
                                temp_v0_28 = temp_s1->overlay.p;
                                temp_s1->overlay.p = temp_v0_28 + 8;
                                temp_v0_28->words.w1 = 0xFFFF00FF;
                                temp_v0_28->words.w0 = 0xFA000000;
                            } else {
                                temp_v0_29 = temp_s1->overlay.p;
                                temp_s1->overlay.p = temp_v0_29 + 8;
                                temp_v0_29->words.w1 = -1;
                                temp_v0_29->words.w0 = 0xFA000000;
                            }
                        } else if ((gSaveContext.unk_3DE0[temp_a1_11] == 0) && ((u32) (&gSaveContext + (temp_a1_11 * 8))->unk_3DE4 < 0x3E8U) && (gSaveContext.unk_3DD7[temp_a1_11] == 0) && (temp_v0_21 != 0xB)) {
                            temp_v0_30 = temp_s1->overlay.p;
                            temp_s1->overlay.p = temp_v0_30 + 8;
                            temp_v0_30->words.w1 = 0xFF3200FF;
                            temp_v0_30->words.w0 = 0xFA000000;
                        } else {
                            temp_v0_31 = temp_s1->overlay.p;
                            temp_s1->overlay.p = temp_v0_31 + 8;
                            temp_v0_31->words.w1 = -1;
                            temp_v0_31->words.w0 = 0xFA000000;
                        }
                        phi_a1_4 = D_801BF970;
                    }
                }
                phi_t0_3 = 0;
                phi_t0_4 = 0;
                phi_t0_5 = 0;
                if (phi_a1_4 == 0) {
                    if (D_801BF8E4 == 2) {
                        do {
                            temp_t5_3 = D_801BF970;
                            temp_v0_32 = phi_t0_3 * 2;
                            spC6 = phi_t0_3;
                            temp_s1->overlay.p = func_8010D7D0(temp_s1->overlay.p, (*(&D_801BFCEE + temp_v0_32) << 7) + &D_020044A0, 8, 0x10, (s16) (*(&D_801BFCFC + temp_v0_32) + gSaveContext.timerX[temp_t5_3]), (s16) (s32) gSaveContext.timerY[temp_t5_3], (s16) (s32) *(&D_801BFD0C + temp_v0_32), (s16) 0xFA, (u16) 0x370, (u16) 0x370);
                            temp_t0_10 = phi_t0_3 + 1;
                            phi_t0_3 = temp_t0_10;
                        } while ((s32) temp_t0_10 < 4);
                        return;
                    }
                    do {
                        temp_t8_7 = D_801BF970;
                        temp_v0_33 = phi_t0_4 * 2;
                        spC6 = phi_t0_4;
                        temp_s1->overlay.p = func_8010D7D0(temp_s1->overlay.p, (*(&D_801BFCEE + temp_v0_33) << 7) + &D_020044A0, 8, 0x10, (s16) (*(&D_801BFCFC + temp_v0_33) + gSaveContext.timerX[temp_t8_7]), (s16) (s32) gSaveContext.timerY[temp_t8_7], (s16) (s32) *(&D_801BFD0C + temp_v0_33), (s16) 0xFA, (u16) 0x370, (u16) 0x370);
                        temp_t0_11 = phi_t0_4 + 1;
                        phi_t0_4 = temp_t0_11;
                    } while ((s32) temp_t0_11 < 5);
                    return;
                }
                do {
                    temp_t9_13 = D_801BF970;
                    temp_v0_34 = phi_t0_5 * 2;
                    spC6 = phi_t0_5;
                    temp_s1->overlay.p = func_8010D7D0(temp_s1->overlay.p, (*(&D_801BFCE8 + temp_v0_34) << 7) + &D_020044A0, 8, 0x10, (s16) (*(&D_801BFCFC + temp_v0_34) + gSaveContext.timerX[temp_t9_13]), (s16) (s32) gSaveContext.timerY[temp_t9_13], (s16) (s32) *(&D_801BFD0C + temp_v0_34), (s16) 0xFA, (u16) 0x370, (u16) 0x370);
                    temp_t0_12 = phi_t0_5 + 1;
                    phi_t0_5 = temp_t0_12;
                } while ((s32) temp_t0_12 < 8);
                return;
            }
            /* Duplicate return node #218. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #218. Try simplifying control flow for better match */
        return;
    }
    if (D_801BF968 == 0) {
        temp_ret_28 = osGetTime();
        temp_v1_24 = (u32) temp_ret_28;
        D_801BF8E8.unk_0 = temp_ret_28;
        D_801BF8E8.unk_4 = temp_v1_24;
        D_801BF968 = 1;
    }
}

void func_8011E3B4(GlobalContext *arg0) {
    u32 sp4C;
    s32 sp48;
    u32 sp44;
    s32 sp40;
    u32 sp34;
    u32 sp30;
    s16 temp_a1;
    s16 temp_s1;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t8;
    s64 temp_ret_4;
    u16 temp_v0;
    u32 temp_t1;
    u32 temp_t1_2;
    u32 temp_t2_2;
    u32 temp_t3;
    u32 temp_t5;
    u32 temp_t9;
    u32 temp_t9_2;
    u32 temp_t9_3;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u64 temp_a0_2;
    u64 temp_ret;
    u64 temp_ret_2;
    u64 temp_ret_3;
    u64 temp_ret_5;
    u64 temp_ret_6;
    u64 temp_v0_2;
    void *temp_a0;
    void *temp_s0;
    s16 phi_a1;
    s16 phi_s1;

    if ((arg0->pauseCtx.state == 0) && (arg0->pauseCtx.debugState == 0) && (arg0->gameOverCtx.state == 0) && ((arg0->msgCtx.unk11F22 == 0) || ((temp_v0 = (arg0 + 0x10000 + 0x4908)->unk_1F04, (((s32) temp_v0 < 0x100) == 0)) && ((s32) temp_v0 < 0x201)) || (((s32) temp_v0 >= 0x1BB2) && ((s32) temp_v0 < 0x1BB7))) && (arg0->sceneLoadFlag == 0) && (arg0->unk_18B4A == 0) && (func_801690CC(arg0) == 0)) {
        if (D_801BF96C != 0) {
            temp_ret = osGetTime();
            temp_v1 = (u32) temp_ret;
            phi_a1 = 0;
            do {
                temp_a0 = &gSaveContext + (phi_a1 * 8);
                if (gSaveContext.unk_101A[phi_a1] == 1) {
                    temp_t9 = temp_a0->unk_10B4 + temp_v1;
                    temp_t1 = D_801BF8F0.unk_4;
                    temp_t2 = (((temp_t9 < temp_v1) + gSaveContext.unk_10B0[phi_a1] + temp_ret) - D_801BF8F0.unk_0) - (temp_t9 < temp_t1);
                    temp_a0->unk_10B4 = (s32) (temp_t9 - temp_t1);
                    gSaveContext.unk_10B0[phi_a1] = temp_t2;
                }
                temp_a1 = phi_a1 + 1;
                phi_a1 = temp_a1;
            } while ((s32) temp_a1 < 6);
            D_801BF96C = 0;
        }
        D_801BF970 = 0x63;
        phi_s1 = 0;
        do {
            if (gSaveContext.unk_101A[phi_s1] == 1) {
                temp_ret_2 = osGetTime();
                temp_v1_2 = (u32) temp_ret_2;
                temp_s0 = &gSaveContext + (phi_s1 * 8);
                temp_t8 = gSaveContext.unk_10B0[phi_s1];
                temp_t9_2 = temp_s0->unk_10B4;
                temp_t0 = gSaveContext.unk_1020[phi_s1];
                temp_t1_2 = temp_s0->unk_1024;
                temp_t5 = temp_v1_2 - temp_t9_2;
                temp_a0_2 = (((temp_ret_2 - temp_t8) - (temp_v1_2 < temp_t9_2)) - temp_t0) - (temp_t5 < temp_t1_2);
                sp40 = temp_t8;
                sp44 = temp_t9_2;
                sp48 = temp_t0;
                sp4C = temp_t1_2;
                temp_ret_3 = __ull_div(temp_a0_2, temp_t5 - temp_t1_2, 0U, 0x2710U);
                temp_ret_4 = __ll_mul(temp_ret_3, (s64) (u32) temp_ret_3, 0, 0x40);
                temp_ret_5 = __ull_div(temp_ret_4, (u64) (u32) (u64) temp_ret_4, 0U, 0xBB8U);
                temp_v0_2 = temp_ret_5;
                temp_v1_3 = (u32) temp_ret_5;
                if ((temp_v0_2 == 0) && (temp_v1_3 == 0)) {
                    temp_t9_3 = temp_s0->unk_1054;
                    temp_s0->unk_1084 = (s32) (temp_t9_3 - temp_v1_3);
                    gSaveContext.unk_1080[phi_s1] = (s32) ((gSaveContext.unk_1050[phi_s1] - temp_v0_2) - (temp_t9_3 < temp_v1_3));
                } else {
                    temp_t2_2 = gSaveContext.unk_1050[phi_s1];
                    temp_t3 = temp_s0->unk_1054;
                    sp30 = temp_t2_2;
                    sp34 = temp_t3;
                    if ((temp_t2_2 >= (u32) temp_v0_2) && (((u32) temp_v0_2 < temp_t2_2) || (temp_t3 >= temp_v1_3))) {
                        if (((u32) temp_v0_2 >= temp_t2_2) && ((temp_t2_2 < (u32) temp_v0_2) || (temp_v1_3 >= temp_t3))) {
                            temp_s0->unk_1084 = 0;
                            gSaveContext.unk_1080[phi_s1] = 0;
                        } else {
                            temp_s0->unk_1084 = (s32) (sp34 - temp_v1_3);
                            gSaveContext.unk_1080[phi_s1] = (s32) ((sp30 - temp_v0_2) - (sp34 < temp_v1_3));
                        }
                    } else {
                        temp_s0->unk_1084 = 0;
                        gSaveContext.unk_1080[phi_s1] = 0;
                        if ((&gSaveContext + phi_s1)->unk_82 == 0x20) {
                            func_801152B8(arg0, (s16) (phi_s1 + 0x12), 0x1F);
                            func_801518B0(arg0, 0xFAU, NULL);
                        }
                        gSaveContext.unk_101A[phi_s1] = 0;
                    }
                }
            }
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while ((s32) temp_s1 < 6);
        return;
    }
    if (D_801BF96C == 0) {
        temp_ret_6 = osGetTime();
        temp_v1_4 = (u32) temp_ret_6;
        D_801BF8F0.unk_0 = temp_ret_6;
        D_801BF8F0.unk_4 = temp_v1_4;
        D_801BF96C = 1;
    }
}

void func_8011E730(GraphicsContext **arg0) {
    s16 sp42;
    s16 sp40;
    s16 sp3E;
    s16 sp3C;
    GraphicsContext *sp34;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_21;
    Gfx *temp_v1_22;
    Gfx *temp_v1_23;
    Gfx *temp_v1_24;
    Gfx *temp_v1_25;
    Gfx *temp_v1_26;
    Gfx *temp_v1_27;
    Gfx *temp_v1_28;
    Gfx *temp_v1_29;
    Gfx *temp_v1_2;
    Gfx *temp_v1_30;
    Gfx *temp_v1_31;
    Gfx *temp_v1_32;
    Gfx *temp_v1_33;
    Gfx *temp_v1_34;
    Gfx *temp_v1_35;
    Gfx *temp_v1_36;
    Gfx *temp_v1_37;
    Gfx *temp_v1_38;
    Gfx *temp_v1_39;
    Gfx *temp_v1_3;
    Gfx *temp_v1_40;
    Gfx *temp_v1_41;
    Gfx *temp_v1_42;
    Gfx *temp_v1_43;
    Gfx *temp_v1_44;
    Gfx *temp_v1_45;
    Gfx *temp_v1_46;
    Gfx *temp_v1_47;
    Gfx *temp_v1_48;
    Gfx *temp_v1_49;
    Gfx *temp_v1_4;
    Gfx *temp_v1_50;
    Gfx *temp_v1_51;
    Gfx *temp_v1_52;
    Gfx *temp_v1_53;
    Gfx *temp_v1_54;
    Gfx *temp_v1_55;
    Gfx *temp_v1_56;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    GraphicsContext *temp_a0;
    s16 temp_a0_2;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0;
    void *temp_t3;
    void *temp_v1_57;
    void *temp_v1_58;
    s32 phi_t0;
    s16 phi_t2;
    s32 phi_v0;
    s32 phi_t2_2;
    s32 phi_a0;
    s32 phi_a1;
    s32 phi_t0_2;
    s16 phi_v1;
    s16 phi_t2_3;
    GraphicsContext *phi_t1;

    temp_a0 = arg0->unk_0;
    sp34 = temp_a0;
    func_8012C654(temp_a0);
    phi_t1 = sp34;
    if (arg0->unk_16F1C == 0) {
        temp_t3 = arg0 + 0x169E8;
        if (arg0->unk_16F1E == 0) {
            phi_t0 = 1;
            if (temp_t3->unk_212 == 8) {
                temp_v1 = sp34->overlay.p;
                sp34->overlay.p = temp_v1 + 8;
                temp_v1->words.w1 = (u32) &D_02002DE0;
                temp_v1->words.w0 = 0xFD180000;
                temp_v1_2 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_2 + 8;
                temp_v1_2->words.w1 = 0x7000000;
                temp_v1_2->words.w0 = 0xF5180000;
                temp_v1_3 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_3 + 8;
                temp_v1_3->words.w1 = 0;
                temp_v1_3->words.w0 = 0xE6000000;
                temp_v1_4 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_4 + 8;
                temp_v1_4->words.w1 = 0x70FF100;
                temp_v1_4->words.w0 = 0xF3000000;
                temp_v1_5 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_5 + 8;
                temp_v1_5->words.w1 = 0;
                temp_v1_5->words.w0 = 0xE7000000;
                temp_v1_6 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_6 + 8;
                temp_v1_6->words.w1 = 0;
                temp_v1_6->words.w0 = 0xF5180800;
                temp_v1_7 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_7 + 8;
                temp_v1_7->words.w0 = 0xF2000000;
                temp_v1_7->words.w1 = 0x3C03C;
                phi_t2 = 0x6E;
                if (temp_t3->unk_280 != 0) {
                    phi_v0 = 0xC8;
                } else {
                    sp3C = 0x38;
                    phi_v0 = 0x38;
                }
                do {
                    temp_v0 = temp_t3->unk_25A;
                    temp_a0_2 = phi_t2 + 0x10;
                    if ((temp_v0 == 0) || ((s32) temp_v0 < phi_t0)) {
                        temp_v1_9 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_9 + 8;
                        temp_v1_9->words.w0 = 0xFA000000;
                        temp_v1_9->words.w1 = (temp_t3->unk_266 & 0xFF) | 0x96FF00;
                    } else {
                        temp_v1_8 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_8 + 8;
                        temp_v1_8->words.w0 = 0xFA000000;
                        temp_v1_8->words.w1 = (temp_t3->unk_266 & 0xFF) | ~0xFF;
                    }
                    temp_v1_10 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_10 + 8;
                    temp_v1_10->words.w0 = (((temp_a0_2 * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_v0 + 0x10) * 4) & 0xFFF);
                    temp_v1_10->words.w1 = (((phi_t2 * 4) & 0xFFF) << 0xC) | ((phi_v0 * 4) & 0xFFF);
                    temp_v1_11 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_11 + 8;
                    temp_v1_11->words.w1 = 0;
                    temp_v1_11->words.w0 = 0xE1000000;
                    temp_v1_12 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_12 + 8;
                    temp_v1_12->words.w1 = 0x4000400;
                    temp_v1_12->words.w0 = 0xF1000000;
                    temp_t0 = phi_t0 + 1;
                    phi_t0 = (s32) temp_t0;
                    phi_t2 = temp_a0_2;
                } while ((s32) temp_t0 < 7);
            }
            if (gSaveContext.minigameState == 1) {
                temp_v1_13 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_13 + 8;
                temp_v1_13->words.w1 = 0;
                temp_v1_13->words.w0 = 0xE7000000;
                temp_v1_14 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_14 + 8;
                temp_v1_14->words.w0 = 0xFC309661;
                temp_v1_14->words.w1 = 0x552EFF7F;
                phi_t2_2 = 0x14;
                phi_a0 = 0x18;
                phi_a1 = 0x10;
                if ((s32) gSaveContext.healthCapacity >= 0xA1) {
                    sp3C = 0x4B;
                } else {
                    sp3C = 0x43;
                }
                phi_t0_2 = 0;
                if (gSaveContext.entranceIndex == 0x8E10) {
                    temp_v1_15 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_15 + 8;
                    temp_v1_15->words.w0 = 0xFA000000;
                    temp_v1_15->words.w1 = (temp_t3->unk_268 & 0xFF) | ~0xFF;
                    temp_v1_16 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_16 + 8;
                    temp_v1_16->words.w1 = 0xFF;
                    temp_v1_16->words.w0 = 0xFB000000;
                    temp_v1_17 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_17 + 8;
                    temp_v1_17->words.w0 = 0xFD180000;
                    temp_v1_17->words.w1 = (u32) &D_020038A0;
                    temp_v1_18 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_18 + 8;
                    temp_v1_18->words.w1 = 0x7000000;
                    temp_v1_18->words.w0 = 0xF5180000;
                    temp_v1_19 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_19 + 8;
                    temp_v1_19->words.w1 = 0;
                    temp_v1_19->words.w0 = 0xE6000000;
                    temp_v1_20 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_20 + 8;
                    temp_v1_20->words.w1 = 0x717F0AB;
                    temp_v1_20->words.w0 = 0xF3000000;
                    temp_v1_21 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_21 + 8;
                    temp_v1_21->words.w1 = 0;
                    temp_v1_21->words.w0 = 0xE7000000;
                    temp_v1_22 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_22 + 8;
                    temp_v1_22->words.w1 = 0;
                    temp_v1_22->words.w0 = 0xF5180C00;
                    temp_v1_23 = sp34->overlay.p;
                    sp34->overlay.p = temp_v1_23 + 8;
                    temp_v1_23->words.w0 = 0xF2000000;
                    temp_v1_23->words.w1 = 0x5C03C;
                } else {
                    temp_v0_2 = arg0->unk_A4;
                    if (temp_v0_2 == 0x54) {
                        temp_v1_24 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_24 + 8;
                        temp_v1_24->words.w0 = 0xFA000000;
                        temp_v1_24->words.w1 = (temp_t3->unk_268 & 0xFF) | 0xFF8C3200;
                        temp_v1_25 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_25 + 8;
                        temp_v1_25->words.w1 = 0xFF;
                        temp_v1_25->words.w0 = 0xFB000000;
                        temp_v1_26 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_26 + 8;
                        temp_v1_26->words.w0 = 0xFD700000;
                        temp_v1_26->words.w1 = (u32) &D_02000BE0;
                        temp_v1_27 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_27 + 8;
                        temp_v1_27->words.w1 = 0x7000000;
                        temp_v1_27->words.w0 = 0xF5700000;
                        temp_v1_28 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_28 + 8;
                        temp_v1_28->words.w1 = 0;
                        temp_v1_28->words.w0 = 0xE6000000;
                        temp_v1_29 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_29 + 8;
                        temp_v1_29->words.w1 = 0x70BF2AB;
                        temp_v1_29->words.w0 = 0xF3000000;
                        temp_v1_30 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_30 + 8;
                        temp_v1_30->words.w1 = 0;
                        temp_v1_30->words.w0 = 0xE7000000;
                        temp_v1_31 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_31 + 8;
                        temp_v1_31->words.w1 = 0;
                        temp_v1_31->words.w0 = 0xF5680600;
                        temp_v1_32 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_32 + 8;
                        temp_v1_32->words.w0 = 0xF2000000;
                        temp_v1_32->words.w1 = 0x5C03C;
                    } else if (temp_v0_2 == 0x37) {
                        temp_v1_33 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_33 + 8;
                        temp_v1_33->words.w0 = 0xFA000000;
                        temp_v1_33->words.w1 = (temp_t3->unk_268 & 0xFF) | 0xFF644B00;
                        temp_v1_34 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_34 + 8;
                        temp_v1_34->words.w0 = 0xFB000000;
                        temp_v1_34->words.w1 = 0x373700FF;
                        temp_v1_35 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_35 + 8;
                        temp_v1_35->words.w0 = 0xFD700000;
                        temp_v1_35->words.w1 = (u32) &D_02000A00;
                        temp_v1_36 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_36 + 8;
                        temp_v1_36->words.w1 = 0x7000000;
                        temp_v1_36->words.w0 = 0xF5700000;
                        temp_v1_37 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_37 + 8;
                        temp_v1_37->words.w1 = 0;
                        temp_v1_37->words.w0 = 0xE6000000;
                        temp_v1_38 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_38 + 8;
                        temp_v1_38->words.w1 = 0x70EF400;
                        temp_v1_38->words.w0 = 0xF3000000;
                        temp_v1_39 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_39 + 8;
                        temp_v1_39->words.w1 = 0;
                        temp_v1_39->words.w0 = 0xE7000000;
                        temp_v1_40 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_40 + 8;
                        temp_v1_40->words.w1 = 0;
                        temp_v1_40->words.w0 = 0xF5680400;
                        temp_v1_41 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_41 + 8;
                        temp_v1_41->words.w0 = 0xF2000000;
                        temp_v1_41->words.w1 = 0x3C074;
                        phi_t2_2 = 0x18;
                        phi_a0 = 0x10;
                        phi_a1 = 0x1E;
                    } else {
                        temp_v1_42 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_42 + 8;
                        temp_v1_42->words.w0 = 0xFA000000;
                        temp_v1_42->words.w1 = (temp_t3->unk_268 & 0xFF) | ~0xFF;
                        temp_v1_43 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_43 + 8;
                        temp_v1_43->words.w1 = 0xFF;
                        temp_v1_43->words.w0 = 0xFB000000;
                        temp_v1_44 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_44 + 8;
                        temp_v1_44->words.w0 = 0xFD100000;
                        temp_v1_44->words.w1 = (u32) &D_02003FA0;
                        temp_v1_45 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_45 + 8;
                        temp_v1_45->words.w1 = 0x7000000;
                        temp_v1_45->words.w0 = 0xF5100000;
                        temp_v1_46 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_46 + 8;
                        temp_v1_46->words.w1 = 0;
                        temp_v1_46->words.w0 = 0xE6000000;
                        temp_v1_47 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_47 + 8;
                        temp_v1_47->words.w1 = 0x717F156;
                        temp_v1_47->words.w0 = 0xF3000000;
                        temp_v1_48 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_48 + 8;
                        temp_v1_48->words.w1 = 0;
                        temp_v1_48->words.w0 = 0xE7000000;
                        temp_v1_49 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_49 + 8;
                        temp_v1_49->words.w1 = 0;
                        temp_v1_49->words.w0 = 0xF5100C00;
                        temp_v1_50 = sp34->overlay.p;
                        sp34->overlay.p = temp_v1_50 + 8;
                        temp_v1_50->words.w0 = 0xF2000000;
                        temp_v1_50->words.w1 = 0x5C03C;
                    }
                }
                temp_v1_51 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_51 + 8;
                temp_v1_51->words.w0 = ((((phi_t2_2 + phi_a0) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((sp3C + phi_a1) * 4) & 0xFFF);
                temp_v1_51->words.w1 = (((phi_t2_2 * 4) & 0xFFF) << 0xC) | ((sp3C * 4) & 0xFFF);
                temp_v1_52 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_52 + 8;
                temp_v1_52->words.w1 = 0;
                temp_v1_52->words.w0 = 0xE1000000;
                temp_v1_53 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_53 + 8;
                temp_v1_53->words.w1 = 0x4000400;
                temp_v1_53->words.w0 = 0xF1000000;
                temp_v1_54 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_54 + 8;
                temp_v1_54->words.w1 = 0;
                temp_v1_54->words.w0 = 0xE7000000;
                temp_v1_55 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_55 + 8;
                temp_v1_55->words.w0 = 0xFA000000;
                temp_v1_55->words.w1 = (temp_t3->unk_268 & 0xFF) | ~0xFF;
                temp_v1_56 = sp34->overlay.p;
                sp34->overlay.p = temp_v1_56 + 8;
                temp_v1_56->words.w0 = 0xFCFF97FF;
                temp_v1_56->words.w1 = 0xFF2DFEFF;
                phi_v1 = 0;
                if (arg0->unk_A4 == 0x37) {
                    phi_t2_3 = (s16) (phi_t2_2 + 0x14);
                    if ((s32) gSaveContext.healthCapacity >= 0xA1) {
                        sp3C = 0x57;
                    } else {
                        sp3C = 0x4F;
                    }
                } else {
                    phi_t2_3 = (s16) (phi_t2_2 + 0x1A);
                }
                do {
                    temp_v0_3 = *(&D_801BF890 + (phi_t0_2 * 2));
                    if ((temp_v0_3 != 0) || (phi_v1 != 0) || (phi_t0_2 >= 3)) {
                        sp3E = phi_t2_3;
                        sp34 = phi_t1;
                        sp42 = (s16) phi_t0_2;
                        sp40 = phi_v1;
                        phi_t1->overlay.p = func_8010D7D0(phi_t1->overlay.p, (temp_v0_3 << 7) + &D_020044A0, 8, 0x10, (s16) (s32) phi_t2_3, (s16) (sp3C - 2), (s16) 9, (s16) 0xFA, (u16) 0x370, (u16) 0x370);
                        phi_v1 = (s16) (phi_v1 + 1);
                        phi_t2_3 = (s16) (phi_t2_3 + 9);
                    }
                    temp_t0_2 = phi_t0_2 + 1;
                    phi_t0_2 = (s32) temp_t0_2;
                    phi_t1 = phi_t1;
                } while ((s32) temp_t0_2 < 4);
                temp_v1_57 = phi_t1->overlay.p;
                phi_t1->overlay.p = temp_v1_57 + 8;
                temp_v1_57->words.w1 = 0;
                temp_v1_57->words.w0 = 0xE7000000;
                temp_v1_58 = phi_t1->overlay.p;
                phi_t1->overlay.p = temp_v1_58 + 8;
                temp_v1_58->words.w0 = 0xFC119623;
                temp_v1_58->words.w1 = 0xFF2FFFFF;
            }
        }
    }
}

void func_8011F0E0(GraphicsContext **arg0) {
    void *sp2D4;
    Gfx *sp2D0;
    s16 sp2CE;
    s16 sp2CC;
    s16 sp2CA;
    s16 sp2C8;
    f32 sp2C0;
    s16 sp2BE;
    s16 sp2BC;
    s16 sp2BA;
    s16 sp2B8;
    Gfx *sp288;
    Gfx *sp16C;
    void *sp50;
    u32 sp4C;
    GameInfo *temp_v0_20;
    GameInfo *temp_v0_21;
    GameInfo *temp_v0_22;
    GameInfo *temp_v0_23;
    GameInfo *temp_v0_24;
    GameInfo *temp_v0_25;
    GameInfo *temp_v0_26;
    GameInfo *temp_v0_27;
    GameInfo *temp_v0_28;
    GameInfo *temp_v0_29;
    GameInfo *temp_v0_30;
    GameInfo *temp_v0_31;
    Gfx **temp_a0_2;
    Gfx *temp_a1;
    Gfx *temp_a1_100;
    Gfx *temp_a1_101;
    Gfx *temp_a1_102;
    Gfx *temp_a1_103;
    Gfx *temp_a1_104;
    Gfx *temp_a1_105;
    Gfx *temp_a1_106;
    Gfx *temp_a1_107;
    Gfx *temp_a1_108;
    Gfx *temp_a1_109;
    Gfx *temp_a1_10;
    Gfx *temp_a1_110;
    Gfx *temp_a1_111;
    Gfx *temp_a1_112;
    Gfx *temp_a1_113;
    Gfx *temp_a1_114;
    Gfx *temp_a1_115;
    Gfx *temp_a1_116;
    Gfx *temp_a1_117;
    Gfx *temp_a1_118;
    Gfx *temp_a1_119;
    Gfx *temp_a1_11;
    Gfx *temp_a1_120;
    Gfx *temp_a1_121;
    Gfx *temp_a1_122;
    Gfx *temp_a1_123;
    Gfx *temp_a1_124;
    Gfx *temp_a1_125;
    Gfx *temp_a1_126;
    Gfx *temp_a1_127;
    Gfx *temp_a1_128;
    Gfx *temp_a1_129;
    Gfx *temp_a1_12;
    Gfx *temp_a1_130;
    Gfx *temp_a1_131;
    Gfx *temp_a1_132;
    Gfx *temp_a1_133;
    Gfx *temp_a1_134;
    Gfx *temp_a1_135;
    Gfx *temp_a1_136;
    Gfx *temp_a1_137;
    Gfx *temp_a1_138;
    Gfx *temp_a1_139;
    Gfx *temp_a1_13;
    Gfx *temp_a1_140;
    Gfx *temp_a1_141;
    Gfx *temp_a1_142;
    Gfx *temp_a1_143;
    Gfx *temp_a1_144;
    Gfx *temp_a1_145;
    Gfx *temp_a1_146;
    Gfx *temp_a1_14;
    Gfx *temp_a1_15;
    Gfx *temp_a1_16;
    Gfx *temp_a1_17;
    Gfx *temp_a1_18;
    Gfx *temp_a1_19;
    Gfx *temp_a1_20;
    Gfx *temp_a1_21;
    Gfx *temp_a1_22;
    Gfx *temp_a1_23;
    Gfx *temp_a1_24;
    Gfx *temp_a1_25;
    Gfx *temp_a1_26;
    Gfx *temp_a1_27;
    Gfx *temp_a1_28;
    Gfx *temp_a1_29;
    Gfx *temp_a1_2;
    Gfx *temp_a1_30;
    Gfx *temp_a1_31;
    Gfx *temp_a1_32;
    Gfx *temp_a1_33;
    Gfx *temp_a1_34;
    Gfx *temp_a1_35;
    Gfx *temp_a1_36;
    Gfx *temp_a1_37;
    Gfx *temp_a1_38;
    Gfx *temp_a1_39;
    Gfx *temp_a1_3;
    Gfx *temp_a1_40;
    Gfx *temp_a1_41;
    Gfx *temp_a1_42;
    Gfx *temp_a1_43;
    Gfx *temp_a1_44;
    Gfx *temp_a1_45;
    Gfx *temp_a1_46;
    Gfx *temp_a1_47;
    Gfx *temp_a1_48;
    Gfx *temp_a1_49;
    Gfx *temp_a1_4;
    Gfx *temp_a1_50;
    Gfx *temp_a1_51;
    Gfx *temp_a1_52;
    Gfx *temp_a1_53;
    Gfx *temp_a1_54;
    Gfx *temp_a1_55;
    Gfx *temp_a1_56;
    Gfx *temp_a1_57;
    Gfx *temp_a1_58;
    Gfx *temp_a1_59;
    Gfx *temp_a1_5;
    Gfx *temp_a1_60;
    Gfx *temp_a1_61;
    Gfx *temp_a1_62;
    Gfx *temp_a1_63;
    Gfx *temp_a1_64;
    Gfx *temp_a1_65;
    Gfx *temp_a1_66;
    Gfx *temp_a1_67;
    Gfx *temp_a1_68;
    Gfx *temp_a1_69;
    Gfx *temp_a1_6;
    Gfx *temp_a1_70;
    Gfx *temp_a1_71;
    Gfx *temp_a1_72;
    Gfx *temp_a1_73;
    Gfx *temp_a1_74;
    Gfx *temp_a1_75;
    Gfx *temp_a1_76;
    Gfx *temp_a1_77;
    Gfx *temp_a1_78;
    Gfx *temp_a1_79;
    Gfx *temp_a1_7;
    Gfx *temp_a1_80;
    Gfx *temp_a1_81;
    Gfx *temp_a1_82;
    Gfx *temp_a1_83;
    Gfx *temp_a1_84;
    Gfx *temp_a1_85;
    Gfx *temp_a1_86;
    Gfx *temp_a1_87;
    Gfx *temp_a1_88;
    Gfx *temp_a1_89;
    Gfx *temp_a1_8;
    Gfx *temp_a1_90;
    Gfx *temp_a1_91;
    Gfx *temp_a1_92;
    Gfx *temp_a1_93;
    Gfx *temp_a1_94;
    Gfx *temp_a1_95;
    Gfx *temp_a1_96;
    Gfx *temp_a1_97;
    Gfx *temp_a1_98;
    Gfx *temp_a1_99;
    Gfx *temp_a1_9;
    Gfx *temp_v1;
    Gfx *temp_v1_12;
    GraphicsContext **temp_a0;
    GraphicsContext **temp_a3;
    GraphicsContext *temp_a0_6;
    GraphicsContext *temp_s0;
    View *temp_s1;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_t0;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_t4;
    s16 temp_v0_10;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_19;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_6;
    s16 temp_v1_8;
    s16 temp_v1_9;
    s32 temp_v0_11;
    s32 temp_v0_2;
    s32 temp_v0_32;
    s32 temp_v0_33;
    s32 temp_v1_10;
    s32 temp_v1_13;
    s32 temp_v1_4;
    s32 temp_v1_7;
    s8 temp_v1_5;
    u8 temp_v1_11;
    void *temp_v0;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_3;
    void *temp_v0_4;
    s16 phi_v1;
    s16 phi_v0;
    s16 phi_t2;
    s8 phi_v1_2;
    s16 phi_v0_2;
    s16 phi_t2_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s16 phi_v1_3;
    s32 phi_v0_5;
    s32 phi_v0_6;
    s16 phi_a0;
    u32 phi_t3;
    s16 phi_t4;
    s16 phi_t2_3;
    s16 phi_t1;
    s16 phi_t0;
    Gfx *phi_a1;
    s32 phi_v0_7;
    s32 phi_a0_2;
    GraphicsContext **phi_a3;
    s32 phi_a0_3;
    s16 phi_t0_2;
    s16 phi_a2;
    s16 phi_v0_8;
    s16 phi_v1_4;

    temp_a3 = arg0;
    sp2D4 = temp_a3->unk_1CCC;
    temp_s0 = temp_a3->unk_0;
    temp_a1 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_a1 + 8;
    temp_s1 = temp_a3 + 0x169E8;
    temp_a1->words.w0 = 0xDB060008;
    temp_a1->words.w1 = temp_s1->unk_170;
    temp_a1_2 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_a1_2 + 8;
    temp_a1_2->words.w0 = 0xDB060024;
    temp_v0 = temp_a3 + 0x16D30;
    temp_a0 = temp_a3;
    temp_a1_2->words.w1 = temp_s1->unk_174;
    temp_a1_3 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_a1_3 + 8;
    temp_a1_3->words.w0 = 0xDB060020;
    temp_a1_3->words.w1 = temp_s1->unk_178;
    temp_a1_4 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_a1_4 + 8;
    temp_a1_4->words.w0 = 0xDB06002C;
    temp_a1_4->words.w1 = temp_s1->unk_17C;
    arg0 = temp_a3;
    if (temp_v0->unk_1EE == 0) {
        sp50 = temp_v0;
        arg0 = temp_a3;
        func_8010E028(temp_a0, temp_a1_4, temp_a3);
        func_801170B8(temp_s1);
        if (temp_s1->unk_31C == 2) {
            temp_a1_5 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_5 + 8;
            temp_a1_5->words.w0 = 0xDB06001C;
            temp_a1_5->words.w1 = temp_s1->unk_33C;
            func_8012C628(arg0->unk_0);
            temp_v1 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v1 + 8;
            temp_v1->words.w1 = 0;
            temp_v1->words.w0 = 0xE3001201;
            temp_a1_6 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_6 + 8;
            temp_a1_6->words.w0 = 0xFA000000;
            temp_a0_2 = &sp2D0;
            temp_a1_6->words.w1 = (sp50->unk_224 & 0xFF) | ~0xFF;
            temp_a1_7 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_7 + 8;
            temp_a1_7->words.w0 = 0xE1000000;
            temp_a1_7->words.w1 = (u32) (&D_801E3BB0 - 0x80000000);
            temp_a1_8 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_8 + 8;
            temp_a1_8->words.w1 = (u32) (&D_801ABAB0 - 0x80000000);
            temp_a1_8->words.w0 = 0xDD0007FF;
            sp2D0 = temp_s0->overlay.p;
            temp_v0_2 = temp_s1->unk_31B * 4;
            func_80172758(temp_a0_2, *(&D_801BFD84 + temp_v0_2), *(&D_801BFD8C + temp_v0_2), 0x140U, (u16) 0xF0, (u8) 2, (u8) 1, (u16) 0x8000, (u16) 0x100, 0.0f, 0.0f, 1.0f, 1.0f, 0U);
            temp_s0->overlay.p = sp2D0;
            temp_a1_9 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_9 + 8;
            temp_a1_9->words.w0 = 0xE1000000;
            sp288 = temp_a1_9;
            sp288->words.w1 = func_80182CCC();
            temp_a1_10 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_10 + 8;
            temp_a1_10->words.w0 = 0xDD0007FF;
            sp288 = temp_a1_10;
            sp288->words.w1 = func_80182CBC();
            temp_a1_11 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_11 + 8;
            temp_a1_11->words.w1 = 0;
            temp_a1_11->words.w0 = 0xE7000000;
            temp_a1_12 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_12 + 8;
            temp_a1_12->words.w1 = 0x504240;
            temp_a1_12->words.w0 = 0xE200001C;
            temp_a1_13 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_13 + 8;
            temp_a1_13->words.w0 = 0xFCFFFFFF;
            temp_a1_13->words.w1 = 0xFFFDF6FB;
            temp_a1_14 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_14 + 8;
            temp_a1_14->words.w0 = 0xFA000000;
            temp_a1_14->words.w1 = gGameInfo->data[1435] & 0xFF;
            temp_a1_15 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_15 + 8;
            temp_a1_15->words.w1 = 0;
            temp_a1_15->words.w0 = 0xF65003C0;
        }
        LifeMeter_Draw((GlobalContext *) arg0);
        func_8012C654(arg0->unk_0);
        temp_a1_16 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_16 + 8;
        temp_a1_16->words.w0 = 0xFA000000;
        temp_v0_3 = (((u32) (gSaveContext.inventory.upgrades & gUpgradeMasks->unk_10) >> gUpgradeShifts->unk_4) * 6) + &D_801BFD2C;
        temp_a1_16->words.w1 = ((temp_v0_3->unk_4 & 0xFF) << 8) | (temp_v0_3->unk_0 << 0x18) | ((temp_v0_3->unk_2 & 0xFF) << 0x10) | (temp_s1->unk_272 & 0xFF);
        temp_a1_17 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_17 + 8;
        temp_a1_17->words.w0 = 0xFB000000;
        temp_v0_4 = (((u32) (gSaveContext.inventory.upgrades & gUpgradeMasks->unk_10) >> gUpgradeShifts->unk_4) * 6) + &D_801BFD40;
        temp_a1_17->words.w1 = ((temp_v0_4->unk_4 & 0xFF) << 8) | (temp_v0_4->unk_0 << 0x18) | ((temp_v0_4->unk_2 & 0xFF) << 0x10) | 0xFF;
        temp_s0->overlay.p = func_8010CD98(temp_s0->overlay.p, &D_02000E60, 0x10, 0x10, (s16) 0x1A, (s16) 0xCE, (s16) 0x10, (s16) 0x10, (u16) 0x400, (u16) 0x400);
        temp_a0_3 = arg0->unk_A4;
        if ((s32) temp_a0_3 >= 0x29) {
            if (temp_a0_3 != 0x49) {

            } else {
                goto block_8;
            }
            goto block_23;
        }
        switch (temp_a0_3) {
        case 22:
        case 24:
        case 27:
        case 33:
block_8:
            if ((s32) gSaveContext.inventory.dungeonKeys[gSaveContext.mapIndex] >= 0) {
                temp_a1_48 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_48 + 8;
                temp_a1_48->words.w1 = 0;
                temp_a1_48->words.w0 = 0xE7000000;
                temp_a1_49 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_49 + 8;
                temp_a1_49->words.w0 = 0xFA000000;
                temp_a1_49->words.w1 = (temp_s1->unk_272 & 0xFF) | 0xC8E6FF00;
                temp_a1_50 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_50 + 8;
                temp_a1_50->words.w1 = 0x14FF;
                temp_a1_50->words.w0 = 0xFB000000;
                temp_s0->overlay.p = func_8010CD98(temp_s0->overlay.p, &D_02000D60, 0x10, 0x10, (s16) 0x1A, (s16) 0xBE, (s16) 0x10, (s16) 0x10, (u16) 0x400, (u16) 0x400);
                temp_a1_51 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_51 + 8;
                temp_a1_51->words.w1 = 0;
                temp_a1_51->words.w0 = 0xE7000000;
                temp_a1_52 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_52 + 8;
                temp_a1_52->words.w0 = 0xFCFF97FF;
                temp_a1_52->words.w1 = 0xFF2DFEFF;
                temp_v1_5 = gSaveContext.inventory.dungeonKeys[gSaveContext.mapIndex];
                sp2BE = (s16) temp_v1_5;
                phi_v1_2 = temp_v1_5;
                phi_v0_2 = 0;
                phi_t2_2 = 0x2A;
                phi_v0_8 = 0;
                if ((s32) temp_v1_5 >= 0xA) {
                    do {
                        temp_v1_6 = phi_v1_2 - 0xA;
                        temp_v0_7 = phi_v0_8 + 1;
                        phi_v1_2 = (s8) temp_v1_6;
                        phi_v0_2 = temp_v0_7;
                        phi_v0_8 = temp_v0_7;
                    } while ((s32) temp_v1_6 >= 0xA);
                    sp2BE = temp_v1_6;
                }
                sp2BC = phi_v0_2;
                if (phi_v0_2 != 0) {
                    temp_a1_53 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_53 + 8;
                    temp_a1_53->words.w1 = 0;
                    temp_a1_53->words.w0 = 0xE7000000;
                    temp_a1_54 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_54 + 8;
                    temp_a1_54->words.w0 = 0xFA000000;
                    temp_a1_54->words.w1 = temp_s1->unk_272 & 0xFF;
                    temp_s0->overlay.p = func_8010D7D0(temp_s0->overlay.p, (sp2BC << 7) + &D_020044A0, 8, 0x10, (s16) 0x2B, (s16) 0xBF, (s16) 8, (s16) 0x10, (u16) 0x400, (u16) 0x400);
                    temp_a1_55 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_55 + 8;
                    temp_a1_55->words.w1 = 0;
                    temp_a1_55->words.w0 = 0xE7000000;
                    temp_a1_56 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_56 + 8;
                    temp_a1_56->words.w0 = 0xFA000000;
                    temp_a1_56->words.w1 = (temp_s1->unk_272 & 0xFF) | ~0xFF;
                    temp_a1_57 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_57 + 8;
                    temp_a1_57->words.w0 = 0xE40C8338;
                    temp_a1_57->words.w1 = 0xA82F8;
                    temp_a1_58 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_58 + 8;
                    temp_a1_58->words.w1 = 0;
                    temp_a1_58->words.w0 = 0xE1000000;
                    temp_a1_59 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_59 + 8;
                    temp_a1_59->words.w1 = 0x4000400;
                    temp_a1_59->words.w0 = 0xF1000000;
                    phi_t2_2 = 0x32;
                }
                temp_a1_60 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_60 + 8;
                temp_a1_60->words.w1 = 0;
                temp_a1_60->words.w0 = 0xE7000000;
                temp_a1_61 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_61 + 8;
                temp_a1_61->words.w0 = 0xFA000000;
                temp_a1_61->words.w1 = temp_s1->unk_272 & 0xFF;
                sp2CA = phi_t2_2;
                temp_s0->overlay.p = func_8010D7D0(temp_s0->overlay.p, (sp2BE << 7) + &D_020044A0, 8, 0x10, (s16) (phi_t2_2 + 1), (s16) 0xBF, (s16) 8, (s16) 0x10, (u16) 0x400, (u16) 0x400);
                temp_a1_62 = temp_s0->overlay.p;
                temp_v1_7 = phi_t2_2 * 4;
                temp_s0->overlay.p = temp_a1_62 + 8;
                temp_a1_62->words.w1 = 0;
                temp_a1_62->words.w0 = 0xE7000000;
                temp_a1_63 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_63 + 8;
                temp_a1_63->words.w0 = 0xFA000000;
                temp_a1_63->words.w1 = (temp_s1->unk_272 & 0xFF) | ~0xFF;
                temp_a1_64 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_64 + 8;
                temp_a1_64->words.w1 = ((temp_v1_7 & 0xFFF) << 0xC) | 0x2F8;
                temp_a1_64->words.w0 = (((temp_v1_7 + 0x20) & 0xFFF) << 0xC) | 0xE4000000 | 0x338;
                temp_a1_65 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_65 + 8;
                temp_a1_65->words.w1 = 0;
                temp_a1_65->words.w0 = 0xE1000000;
                temp_a1_66 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_66 + 8;
                temp_a1_66->words.w1 = 0x4000400;
                temp_a1_66->words.w0 = 0xF1000000;
            }
        default:
block_23:
            break;
        case 39:
        case 40:
            temp_a1_18 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_18 + 8;
            temp_a1_18->words.w1 = 0;
            temp_a1_18->words.w0 = 0xE7000000;
            temp_a1_19 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_19 + 8;
            temp_a1_19->words.w0 = 0xFC119623;
            temp_a1_19->words.w1 = 0xFF2FFFFF;
            temp_a1_20 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_20 + 8;
            temp_a1_20->words.w0 = 0xFA000000;
            temp_a1_20->words.w1 = (temp_s1->unk_272 & 0xFF) | ~0xFF;
            temp_a1_21 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_21 + 8;
            temp_a1_21->words.w1 = 0xFF;
            temp_a1_21->words.w0 = 0xFB000000;
            temp_a1_22 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_22 + 8;
            temp_a1_22->words.w1 = (u32) &D_020031E0;
            temp_a1_22->words.w0 = 0xFD180000;
            temp_a1_23 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_23 + 8;
            temp_a1_23->words.w1 = 0x7000000;
            temp_a1_23->words.w0 = 0xF5180000;
            temp_a1_24 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_24 + 8;
            temp_a1_24->words.w1 = 0;
            temp_a1_24->words.w0 = 0xE6000000;
            temp_a1_25 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_25 + 8;
            temp_a1_25->words.w1 = 0x723F0AB;
            temp_a1_25->words.w0 = 0xF3000000;
            temp_a1_26 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_26 + 8;
            temp_a1_26->words.w1 = 0;
            temp_a1_26->words.w0 = 0xE7000000;
            temp_a1_27 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_27 + 8;
            temp_a1_27->words.w1 = 0;
            temp_a1_27->words.w0 = 0xF5180C00;
            temp_a1_28 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_28 + 8;
            temp_a1_28->words.w0 = 0xF2000000;
            temp_a1_28->words.w1 = 0x5C05C;
            temp_a1_29 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_29 + 8;
            temp_a1_29->words.w0 = 0xE40B0334;
            temp_a1_29->words.w1 = 0x502EC;
            temp_a1_30 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_30 + 8;
            temp_a1_30->words.w1 = 0;
            temp_a1_30->words.w0 = 0xE1000000;
            temp_a1_31 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_31 + 8;
            temp_a1_31->words.w1 = 0x4000400;
            temp_a1_31->words.w0 = 0xF1000000;
            temp_a1_32 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_32 + 8;
            temp_a1_32->words.w1 = 0;
            temp_a1_32->words.w0 = 0xE7000000;
            temp_a1_33 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_33 + 8;
            temp_a1_33->words.w0 = 0xFCFF97FF;
            temp_a1_33->words.w1 = 0xFF2DFEFF;
            sp2BC = 0;
            temp_v0_5 = func_8012F22C(arg0->unk_A4);
            temp_v1_2 = temp_v0_5;
            sp2BE = temp_v1_2;
            if ((s32) temp_v1_2 >= 0xA) {
                phi_v1 = temp_v1_2;
                phi_v0 = sp2BC;
                do {
                    temp_v1_3 = phi_v1 - 0xA;
                    temp_v0_6 = phi_v0 + 1;
                    phi_v1 = temp_v1_3;
                    phi_v0 = temp_v0_6;
                } while ((s32) temp_v1_3 >= 0xA);
                sp2BE = temp_v1_3;
                sp2BC = temp_v0_6;
            }
            phi_t2 = 0x2A;
            if (sp2BC != 0) {
                temp_a1_34 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_34 + 8;
                temp_a1_34->words.w1 = 0;
                temp_a1_34->words.w0 = 0xE7000000;
                temp_a1_35 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_35 + 8;
                temp_a1_35->words.w0 = 0xFA000000;
                temp_a1_35->words.w1 = temp_s1->unk_272 & 0xFF;
                temp_s0->overlay.p = func_8010D7D0(temp_s0->overlay.p, (sp2BC << 7) + &D_020044A0, 8, 0x10, (s16) 0x2B, (s16) 0xBF, (s16) 8, (s16) 0x10, (u16) 0x400, (u16) 0x400);
                temp_a1_36 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_36 + 8;
                temp_a1_36->words.w1 = 0;
                temp_a1_36->words.w0 = 0xE7000000;
                temp_a1_37 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_37 + 8;
                temp_a1_37->words.w0 = 0xFA000000;
                temp_a1_37->words.w1 = (temp_s1->unk_272 & 0xFF) | ~0xFF;
                temp_a1_38 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_38 + 8;
                temp_a1_38->words.w0 = 0xE40C8338;
                temp_a1_38->words.w1 = 0xA82F8;
                temp_a1_39 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_39 + 8;
                temp_a1_39->words.w1 = 0;
                temp_a1_39->words.w0 = 0xE1000000;
                temp_a1_40 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_40 + 8;
                temp_a1_40->words.w1 = 0x4000400;
                temp_a1_40->words.w0 = 0xF1000000;
                phi_t2 = 0x32;
            }
            temp_a1_41 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_41 + 8;
            temp_a1_41->words.w1 = 0;
            temp_a1_41->words.w0 = 0xE7000000;
            temp_a1_42 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_42 + 8;
            temp_a1_42->words.w0 = 0xFA000000;
            temp_a1_42->words.w1 = temp_s1->unk_272 & 0xFF;
            sp2CA = phi_t2;
            temp_s0->overlay.p = func_8010D7D0(temp_s0->overlay.p, (sp2BE << 7) + &D_020044A0, 8, 0x10, (s16) (phi_t2 + 1), (s16) 0xBF, (s16) 8, (s16) 0x10, (u16) 0x400, (u16) 0x400);
            temp_a1_43 = temp_s0->overlay.p;
            temp_v1_4 = phi_t2 * 4;
            temp_s0->overlay.p = temp_a1_43 + 8;
            temp_a1_43->words.w1 = 0;
            temp_a1_43->words.w0 = 0xE7000000;
            temp_a1_44 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_44 + 8;
            temp_a1_44->words.w0 = 0xFA000000;
            temp_a1_44->words.w1 = (temp_s1->unk_272 & 0xFF) | ~0xFF;
            temp_a1_45 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_45 + 8;
            temp_a1_45->words.w1 = ((temp_v1_4 & 0xFFF) << 0xC) | 0x2F8;
            temp_a1_45->words.w0 = (((temp_v1_4 + 0x20) & 0xFFF) << 0xC) | 0xE4000000 | 0x338;
            temp_a1_46 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_46 + 8;
            temp_a1_46->words.w1 = 0;
            temp_a1_46->words.w0 = 0xE1000000;
            temp_a1_47 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_47 + 8;
            temp_a1_47->words.w1 = 0x4000400;
            temp_a1_47->words.w0 = 0xF1000000;
            break;
        }
        temp_a1_67 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_67 + 8;
        temp_a1_67->words.w1 = 0;
        temp_a1_67->words.w0 = 0xE7000000;
        temp_a1_68 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_68 + 8;
        temp_a1_68->words.w0 = 0xFCFF97FF;
        temp_a1_68->words.w1 = 0xFF2DFEFF;
        temp_v0_8 = gSaveContext.rupees;
        phi_v0_3 = (s32) temp_v0_8;
        phi_v1_3 = 0;
        phi_a0 = 0;
        phi_t2_3 = 0x2A;
        if (((s32) temp_v0_8 >= 0x2710) || ((s32) temp_v0_8 < 0)) {
            phi_v0_3 = (s32) (s16) (temp_v0_8 & 0xDDD);
        }
        sp2B8 = 0;
        phi_v0_4 = phi_v0_3;
        phi_v0_5 = phi_v0_3;
        if (phi_v0_3 >= 0x64) {
            do {
                temp_v0_9 = phi_v0_4 - 0x64;
                temp_v1_8 = phi_v1_3 + 1;
                phi_v0_4 = (s32) temp_v0_9;
                phi_v1_3 = temp_v1_8;
                phi_v0_5 = (s32) temp_v0_9;
            } while ((s32) temp_v0_9 >= 0x64);
            sp2B8 = temp_v1_8;
        }
        sp2BC = (s16) phi_v0_5;
        sp2BA = 0;
        phi_v0_6 = phi_v0_5;
        if (phi_v0_5 >= 0xA) {
            do {
                temp_v0_10 = phi_v0_6 - 0xA;
                temp_a0_4 = phi_a0 + 1;
                phi_v0_6 = (s32) temp_v0_10;
                phi_a0 = temp_a0_4;
            } while ((s32) temp_v0_10 >= 0xA);
            sp2BA = temp_a0_4;
            sp2BC = temp_v0_10;
        }
        temp_v1_9 = temp_s1->unk_272;
        temp_v0_11 = ((u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x10)) >> gUpgradeShifts[4]) * 2;
        temp_t4 = *(&D_801BFD24 + temp_v0_11);
        phi_t4 = temp_t4;
        phi_t0 = *(&D_801BFD1C + temp_v0_11);
        phi_v1_4 = temp_v1_9;
        if ((s32) temp_v1_9 >= 0xB5) {
            phi_v1_4 = 0xB4;
        }
        phi_t1 = 0;
        phi_a1 = temp_a1_68;
        if ((s32) temp_t4 > 0) {
            phi_t3 = phi_v1_4 & 0xFF;
            do {
                temp_a1_69 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_69 + 8;
                temp_a1_69->words.w1 = 0;
                temp_a1_69->words.w0 = 0xE7000000;
                temp_a1_70 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_70 + 8;
                temp_a1_70->words.w1 = phi_t3;
                temp_a1_70->words.w0 = 0xFA000000;
                sp2C8 = phi_t4;
                sp4C = phi_t3;
                sp2CA = phi_t2_3;
                sp2CE = phi_t1;
                sp2CC = phi_t0;
                temp_s0->overlay.p = func_8010D7D0(temp_s0->overlay.p, ((sp + (phi_t0 * 2))->unk_2B8 << 7) + &D_020044A0, 8, 0x10, (s16) (phi_t2_3 + 1), (s16) 0xCF, (s16) 8, (s16) 0x10, (u16) 0x400, (u16) 0x400);
                temp_a1_71 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_71 + 8;
                temp_a1_71->words.w1 = 0;
                temp_a1_71->words.w0 = 0xE7000000;
                temp_v0_12 = gSaveContext.rupees;
                temp_t1 = phi_t1 + 1;
                temp_v1_10 = phi_t2_3 * 4;
                if (temp_v0_12 == (*(gUpgradeCapacities + 0x18))[(u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x10)) >> gUpgradeShifts[4]]) {
                    temp_a1_72 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_72 + 8;
                    temp_a1_72->words.w0 = 0xFA000000;
                    temp_a1_72->words.w1 = (temp_s1->unk_272 & 0xFF) | 0x78FF0000;
                } else if (temp_v0_12 != 0) {
                    temp_a1_73 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_73 + 8;
                    temp_a1_73->words.w0 = 0xFA000000;
                    temp_a1_73->words.w1 = (temp_s1->unk_272 & 0xFF) | ~0xFF;
                } else {
                    temp_a1_74 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_74 + 8;
                    temp_a1_74->words.w0 = 0xFA000000;
                    temp_a1_74->words.w1 = (temp_s1->unk_272 & 0xFF) | 0x64646400;
                }
                temp_a1_75 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_75 + 8;
                temp_a1_75->words.w1 = ((temp_v1_10 & 0xFFF) << 0xC) | 0x338;
                temp_a1_75->words.w0 = (((temp_v1_10 + 0x20) & 0xFFF) << 0xC) | 0xE4000000 | 0x378;
                temp_a1_76 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_76 + 8;
                temp_a1_76->words.w1 = 0;
                temp_a1_76->words.w0 = 0xE1000000;
                temp_a1_77 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_77 + 8;
                temp_a1_77->words.w1 = 0x4000400;
                temp_a1_77->words.w0 = 0xF1000000;
                phi_t2_3 = (s16) (phi_t2_3 + 8);
                phi_t1 = temp_t1;
                phi_t0 = (s16) (phi_t0 + 1);
                phi_a1 = temp_a1_77;
            } while ((s32) temp_t1 < (s32) phi_t4);
        }
        func_80116918(arg0, phi_a1);
        func_8010A54C(arg0);
        temp_v0_13 = gGameInfo->data[190];
        if ((temp_v0_13 != 2) && (temp_v0_13 != 3)) {
            func_800B5208((TargetContext *) (arg0 + 0x1DC0), (GlobalContext *) arg0);
        }
        func_8012C654(arg0->unk_0);
        func_80117100(arg0);
        if (sp2D4->unk_14B == gSaveContext.playerForm) {
            func_80118084(arg0);
        }
        func_80118890(arg0);
        func_80118BA4(arg0);
        func_80119030(arg0);
        if ((arg0->unk_16F1C == 0) && (arg0->unk_16F1E == 0)) {
            temp_v1_11 = temp_s1->unk_280;
            if ((temp_v1_11 != 0) && ((s32) temp_v1_11 < 0x14)) {
                if ((temp_v1_11 & 1) == 0) {
                    temp_t1_2 = ((s32) temp_v1_11 >> 1) - 1;
                    sp2C0 = (f32) temp_s1->unk_284 / 100.0f;
                    if (temp_t1_2 == 3) {
                        temp_s1->unk_168->unk_2A0 = -0x14;
                        temp_v0_14 = temp_s1->unk_168;
                        temp_v0_14->unk_280 = (s16) temp_v0_14->unk_2A0;
                        temp_v0_15 = temp_s1->unk_168;
                        temp_a0_5 = temp_v0_15->unk_280 + 0x28;
                        temp_v0_15->unk_2B0 = temp_a0_5;
                        temp_s1->unk_168->unk_290 = temp_a0_5;
                        temp_s1->unk_168->unk_2B8 = 0x500;
                        temp_v0_16 = temp_s1->unk_168;
                        temp_v0_16->unk_298 = (s16) temp_v0_16->unk_2B8;
                    }
                    temp_s1->unk_168->unk_2BA = 0x400;
                    temp_v0_17 = temp_s1->unk_168;
                    temp_v0_17->unk_2AA = (s16) temp_v0_17->unk_2BA;
                    sp2CE = temp_t1_2;
                    func_8012C8D4(arg0->unk_0);
                    temp_a1_78 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_78 + 8;
                    temp_a1_78->words.w0 = 0xFC119623;
                    temp_a1_78->words.w1 = 0xFF2FFFFF;
                    temp_a1_79 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_79 + 8;
                    temp_a1_79->words.w1 = 1;
                    temp_a1_79->words.w0 = 0xE2001E01;
                    temp_a1_80 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_80 + 8;
                    temp_v0_18 = (temp_t1_2 * 6) + &D_801BFD6C;
                    temp_a1_80->words.w0 = 0xFA000000;
                    temp_a1_80->words.w1 = ((temp_v0_18->unk_4 & 0xFF) << 8) | (temp_v0_18->unk_0 << 0x18) | ((temp_v0_18->unk_2 & 0xFF) << 0x10) | (temp_s1->unk_282 & 0xFF);
                    sp2CE = temp_t1_2;
                    SysMatrix_InsertTranslation(0.0f, -40.0f, 0.0f, 0);
                    Matrix_Scale(sp2C0, sp2C0, 0.0f, 1);
                    temp_a1_81 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_81 + 8;
                    temp_a1_81->words.w0 = 0xDA380003;
                    sp2CE = temp_t1_2;
                    sp16C = temp_a1_81;
                    sp16C->words.w1 = Matrix_NewMtx(arg0->unk_0);
                    temp_a1_82 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_a1_82 + 8;
                    temp_a1_82->words.w0 = 0x1004008;
                    temp_a1_82->words.w1 = (u32) (temp_s1->unk_168 + 0x280);
                    temp_s0->overlay.p = func_8010DC58(temp_s0->overlay.p, *(&D_801BFD54 + (temp_t1_2 * 4)), *(&D_801BFD64 + (temp_t1_2 * 2)), 0x20, (u16) 0);
                }
            } else {
                func_80119610((GlobalContext *) arg0);
            }
        }
        if (temp_s1->unk_286 != 0) {
            func_8011C4C4(arg0);
        }
        func_8011E730(arg0);
        func_8011CA64((GlobalContext *) arg0);
    }
    temp_v0_19 = D_801BF884;
    phi_v0_7 = (s32) temp_v0_19;
    if (temp_v0_19 == 1) {
        temp_a0_6 = arg0->unk_0;
        arg0 = arg0;
        func_8012C654(temp_a0_6);
        temp_a1_83 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_83 + 8;
        temp_a1_83->words.w1 = 1;
        temp_a1_83->words.w0 = 0xE2001E01;
        temp_a1_84 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_84 + 8;
        temp_a1_84->words.w0 = 0xE200001C;
        temp_a1_84->words.w1 = 0x504240;
        temp_a1_85 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_85 + 8;
        temp_a1_85->words.w0 = 0xFC119623;
        temp_a1_85->words.w1 = 0xFF2FFFFF;
        temp_a1_86 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_86 + 8;
        temp_a1_86->words.w1 = -0x6401;
        temp_a1_86->words.w0 = 0xFA000000;
        temp_a1_87 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_87 + 8;
        temp_a1_87->words.w0 = 0xFD700000;
        temp_a1_87->words.w1 = (u32) &D_020043A0;
        temp_a1_88 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_88 + 8;
        temp_a1_88->words.w0 = 0xF5700000;
        temp_a1_88->words.w1 = 0x7050140;
        temp_a1_89 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_89 + 8;
        temp_a1_89->words.w1 = 0;
        temp_a1_89->words.w0 = 0xE6000000;
        temp_a1_90 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_90 + 8;
        temp_a1_90->words.w1 = 0x703F800;
        temp_a1_90->words.w0 = 0xF3000000;
        temp_a1_91 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_91 + 8;
        temp_a1_91->words.w1 = 0;
        temp_a1_91->words.w0 = 0xE7000000;
        temp_a1_92 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_92 + 8;
        temp_a1_92->words.w0 = 0xF5600200;
        temp_a1_92->words.w1 = 0x50140;
        temp_a1_93 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_93 + 8;
        temp_a1_93->words.w0 = 0xF2000000;
        temp_a1_93->words.w1 = 0x3C03C;
        temp_a1_94 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_94 + 8;
        temp_v0_20 = gGameInfo;
        temp_a1_94->words.w0 = (((temp_v0_20->data[609] * 4) + 0x40) & 0xFFF) | 0xE4000000 | ((((temp_v0_20->data[608] * 4) + 0x40) & 0xFFF) << 0xC);
        temp_v0_21 = gGameInfo;
        temp_a1_94->words.w1 = ((temp_v0_21->data[609] * 4) & 0xFFF) | (((temp_v0_21->data[608] * 4) & 0xFFF) << 0xC);
        temp_a1_95 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_95 + 8;
        temp_a1_95->words.w1 = 0;
        temp_a1_95->words.w0 = 0xE1000000;
        temp_a1_96 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_96 + 8;
        temp_a1_96->words.w1 = 0x4000400;
        temp_a1_96->words.w0 = 0xF1000000;
        temp_a1_97 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_97 + 8;
        temp_v0_22 = gGameInfo;
        temp_a1_97->words.w0 = (((temp_v0_22->data[611] * 4) + 0x40) & 0xFFF) | 0xE4000000 | ((((temp_v0_22->data[610] * 4) + 0x40) & 0xFFF) << 0xC);
        temp_v0_23 = gGameInfo;
        temp_a1_97->words.w1 = ((temp_v0_23->data[611] * 4) & 0xFFF) | (((temp_v0_23->data[610] * 4) & 0xFFF) << 0xC);
        temp_a1_98 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_98 + 8;
        temp_a1_98->words.w1 = 0x2000000;
        temp_a1_98->words.w0 = 0xE1000000;
        temp_a1_99 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_99 + 8;
        temp_a1_99->words.w1 = 0x4000400;
        temp_a1_99->words.w0 = 0xF1000000;
        temp_a1_100 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_100 + 8;
        temp_v0_24 = gGameInfo;
        temp_a1_100->words.w0 = (((temp_v0_24->data[613] * 4) + 0x40) & 0xFFF) | 0xE4000000 | ((((temp_v0_24->data[612] * 4) + 0x40) & 0xFFF) << 0xC);
        temp_v0_25 = gGameInfo;
        temp_a1_100->words.w1 = ((temp_v0_25->data[613] * 4) & 0xFFF) | (((temp_v0_25->data[612] * 4) & 0xFFF) << 0xC);
        temp_a1_101 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_101 + 8;
        temp_a1_101->words.w1 = 0x200;
        temp_a1_101->words.w0 = 0xE1000000;
        temp_a1_102 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_102 + 8;
        temp_a1_102->words.w1 = 0x4000400;
        temp_a1_102->words.w0 = 0xF1000000;
        temp_a1_103 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_103 + 8;
        temp_v0_26 = gGameInfo;
        temp_a1_103->words.w0 = (((temp_v0_26->data[615] * 4) + 0x40) & 0xFFF) | 0xE4000000 | ((((temp_v0_26->data[614] * 4) + 0x40) & 0xFFF) << 0xC);
        temp_v0_27 = gGameInfo;
        temp_a1_103->words.w1 = ((temp_v0_27->data[615] * 4) & 0xFFF) | (((temp_v0_27->data[614] * 4) & 0xFFF) << 0xC);
        temp_a1_104 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_104 + 8;
        temp_a1_104->words.w1 = 0x2000200;
        temp_a1_104->words.w0 = 0xE1000000;
        temp_a1_105 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_105 + 8;
        temp_a1_105->words.w1 = 0x4000400;
        temp_a1_105->words.w0 = 0xF1000000;
        temp_a1_106 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_106 + 8;
        temp_a1_106->words.w1 = (u32) &D_020042A0;
        temp_a1_106->words.w0 = 0xFD900000;
        temp_a1_107 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_107 + 8;
        temp_a1_107->words.w1 = 0x7000000;
        temp_a1_107->words.w0 = 0xF5900000;
        temp_a1_108 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_108 + 8;
        temp_a1_108->words.w1 = 0;
        temp_a1_108->words.w0 = 0xE6000000;
        temp_a1_109 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_109 + 8;
        temp_a1_109->words.w1 = 0x707F400;
        temp_a1_109->words.w0 = 0xF3000000;
        temp_a1_110 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_110 + 8;
        temp_a1_110->words.w1 = 0;
        temp_a1_110->words.w0 = 0xE7000000;
        temp_a1_111 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_111 + 8;
        temp_a1_111->words.w1 = 0;
        temp_a1_111->words.w0 = 0xF5800400;
        temp_a1_112 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_112 + 8;
        temp_a1_112->words.w1 = 0x7C03C;
        temp_a1_112->words.w0 = 0xF2000000;
        temp_a1_113 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_113 + 8;
        temp_v0_28 = gGameInfo;
        temp_a1_113->words.w0 = (((temp_v0_28->data[617] * 4) + 0x40) & 0xFFF) | 0xE4000000 | ((((temp_v0_28->data[616] * 4) + 0x80) & 0xFFF) << 0xC);
        temp_v0_29 = gGameInfo;
        temp_a1_113->words.w1 = ((temp_v0_29->data[617] * 4) & 0xFFF) | (((temp_v0_29->data[616] * 4) & 0xFFF) << 0xC);
        temp_a1_114 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_114 + 8;
        temp_a1_114->words.w1 = 0;
        temp_a1_114->words.w0 = 0xE1000000;
        temp_a1_115 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_115 + 8;
        temp_a1_115->words.w1 = 0x4000400;
        temp_a1_115->words.w0 = 0xF1000000;
        temp_a1_116 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_116 + 8;
        temp_a1_116->words.w0 = 0xFD900000;
        temp_a1_116->words.w1 = (u32) &D_02004420;
        temp_a1_117 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_117 + 8;
        temp_a1_117->words.w1 = 0x7000000;
        temp_a1_117->words.w0 = 0xF5900000;
        temp_a1_118 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_118 + 8;
        temp_a1_118->words.w1 = 0;
        temp_a1_118->words.w0 = 0xE6000000;
        temp_a1_119 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_119 + 8;
        temp_a1_119->words.w1 = 0x703F400;
        temp_a1_119->words.w0 = 0xF3000000;
        temp_a1_120 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_120 + 8;
        temp_a1_120->words.w1 = 0;
        temp_a1_120->words.w0 = 0xE7000000;
        temp_a1_121 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_121 + 8;
        temp_a1_121->words.w1 = 0;
        temp_a1_121->words.w0 = 0xF5800400;
        temp_a1_122 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_122 + 8;
        temp_a1_122->words.w1 = 0x7C01C;
        temp_a1_122->words.w0 = 0xF2000000;
        temp_a1_123 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_123 + 8;
        temp_v0_30 = gGameInfo;
        temp_a1_123->words.w0 = (((temp_v0_30->data[619] * 4) + 0x20) & 0xFFF) | 0xE4000000 | ((((temp_v0_30->data[618] * 4) + 0x80) & 0xFFF) << 0xC);
        temp_v0_31 = gGameInfo;
        temp_a1_123->words.w1 = ((temp_v0_31->data[619] * 4) & 0xFFF) | (((temp_v0_31->data[618] * 4) & 0xFFF) << 0xC);
        temp_a1_124 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_124 + 8;
        temp_a1_124->words.w1 = 0;
        temp_a1_124->words.w0 = 0xE1000000;
        temp_a1_125 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_125 + 8;
        temp_a1_125->words.w1 = 0x4000400;
        temp_a1_125->words.w0 = 0xF1000000;
        phi_v0_7 = (s32) D_801BF884;
    }
    phi_a3 = (GraphicsContext **) (SaveContext *) arg0;
    if (phi_v0_7 >= 2) {
        if (((SaveContext *) arg0->unk_1CA5 & 4) == 0) {
            temp_v0_32 = (SaveContext *) arg0->unk_18E5C;
            if (temp_v0_32 != 0) {
                phi_a0_2 = temp_v0_32;
            } else {
                phi_a0_2 = D_801FBB90;
            }
            func_801663C4(phi_a0_2, gSaveContext.pictoPhoto, 0x4600, (SaveContext *) arg0);
            temp_s1->unk_224 = 0;
            temp_s1->unk_222 = (s16) temp_s1->unk_224;
            D_801BF884 = 0;
            gSaveContext.unk_3F22 = 0;
            Interface_ChangeAlpha(0x32U);
        } else {
            if (phi_v0_7 == 2) {
                D_801BF884 = 3;
                arg0 = (GraphicsContext **) (SaveContext *) arg0;
                func_801518B0((GlobalContext *) (SaveContext *) arg0, 0xF8U, NULL);
                Interface_ChangeAlpha(1U);
                sp2D4->unk_A6C = (s32) (sp2D4->unk_A6C | 0x200);
                phi_a3 = arg0;
            }
            temp_a1_126 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_126 + 8;
            temp_a1_126->words.w1 = 0;
            temp_a1_126->words.w0 = 0xE7000000;
            temp_a1_127 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_127 + 8;
            temp_a1_127->words.w0 = 0xE200001C;
            temp_a1_127->words.w1 = 0x504240;
            temp_a1_128 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_128 + 8;
            temp_a1_128->words.w0 = 0xFCFFFFFF;
            temp_a1_128->words.w1 = 0xFFFDF6FB;
            temp_a1_129 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_129 + 8;
            temp_a1_129->words.w0 = 0xFA000000;
            temp_a1_129->words.w1 = 0xC8C8C8FA;
            temp_a1_130 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_130 + 8;
            temp_a1_130->words.w0 = 0xF63EC25C;
            temp_a1_130->words.w1 = 0x118058;
            arg0 = phi_a3;
            func_8012C654(*phi_a3);
            temp_a1_131 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_131 + 8;
            temp_a1_131->words.w0 = 0xE200001C;
            temp_a1_131->words.w1 = 0xF0A4000;
            temp_a1_132 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_132 + 8;
            temp_a1_132->words.w1 = -0x805;
            temp_a1_132->words.w0 = 0xFC11FE23;
            temp_a1_133 = temp_s0->overlay.p;
            temp_s0->overlay.p = temp_a1_133 + 8;
            temp_a1_133->words.w0 = 0xFA000000;
            temp_a1_133->words.w1 = 0xFAA0A0FF;
            phi_t0_2 = 0;
            phi_a2 = 0x1F;
            do {
                temp_v1_12 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v1_12 + 8;
                temp_v1_12->words.w0 = 0xFD900000;
                temp_v0_33 = arg0->unk_18E5C;
                temp_t0 = phi_t0_2 + 1;
                if (temp_v0_33 != 0) {
                    phi_a0_3 = temp_v0_33;
                } else {
                    phi_a0_3 = D_801FBB90;
                }
                temp_v1_12->words.w1 = phi_a0_3 + (phi_t0_2 * 0x500);
                temp_a1_134 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_134 + 8;
                temp_a1_134->words.w1 = 0x7000000;
                temp_a1_134->words.w0 = 0xF5900000;
                temp_a1_135 = temp_s0->overlay.p;
                temp_v1_13 = phi_a2 * 4;
                temp_s0->overlay.p = temp_a1_135 + 8;
                temp_a1_135->words.w1 = 0;
                temp_a1_135->words.w0 = 0xE6000000;
                temp_a1_136 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_136 + 8;
                temp_a1_136->words.w1 = 0x727F067;
                temp_a1_136->words.w0 = 0xF3000000;
                temp_a1_137 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_137 + 8;
                temp_a1_137->words.w1 = 0;
                temp_a1_137->words.w0 = 0xE7000000;
                temp_a1_138 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_138 + 8;
                temp_a1_138->words.w1 = 0;
                temp_a1_138->words.w0 = 0xF5882800;
                temp_a1_139 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_139 + 8;
                temp_a1_139->words.w1 = 0x27C01C;
                temp_a1_139->words.w0 = 0xF2000000;
                temp_a1_140 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_140 + 8;
                temp_a1_140->words.w1 = 0x140000 | (temp_v1_13 & 0xFFF);
                temp_a1_140->words.w0 = 0xE43C0000 | ((temp_v1_13 + 0x20) & 0xFFF);
                temp_a1_141 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_141 + 8;
                temp_a1_141->words.w1 = 0;
                temp_a1_141->words.w0 = 0xE1000000;
                temp_a1_142 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_a1_142 + 8;
                temp_a1_142->words.w1 = 0x4000400;
                temp_a1_142->words.w0 = 0xF1000000;
                phi_t0_2 = temp_t0;
                phi_a2 = (s16) (phi_a2 + 8);
            } while ((s32) temp_t0 < 0xE);
        }
    }
    if (temp_s1->unk_264 != 0) {
        temp_a1_143 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_143 + 8;
        temp_a1_143->words.w1 = 0;
        temp_a1_143->words.w0 = 0xE7000000;
        temp_a1_144 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_144 + 8;
        temp_a1_144->words.w1 = (u32) &D_801BF988;
        temp_a1_144->words.w0 = 0xDE000000;
        temp_a1_145 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_145 + 8;
        temp_a1_145->words.w0 = 0xFA000000;
        temp_a1_145->words.w1 = temp_s1->unk_264 & 0xFF;
        temp_a1_146 = temp_s0->overlay.p;
        temp_s0->overlay.p = temp_a1_146 + 8;
        temp_a1_146->words.w1 = (u32) &D_0E0002E0;
        temp_a1_146->words.w0 = 0xDE000000;
    }
}

void func_80120F90(GlobalContext *arg0, s32 arg1) {
    OSMesgQueue *sp30;
    OSMesgQueue *temp_a0;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;

    temp_v0 = arg0->interfaceCtx.unk_31C;
    temp_s0 = arg0 + 0x169E8;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return;
        }
        goto block_5;
    }
    temp_a0 = temp_s0 + 0x320;
    if (temp_s0->unk_33C != 0) {
        sp30 = temp_a0;
        osCreateMesgQueue(temp_a0, temp_s0 + 0x338, 1);
        DmaMgr_SendRequestImpl(temp_s0 + 0x184, temp_s0->unk_33C, temp_s0->unk_340, temp_s0->unk_344, 0, sp30, NULL);
        temp_s0->unk_31C = 1;
block_5:
        temp_s0_2 = arg0 + 0x169E8;
        if (osRecvMesg(temp_s0_2 + 0x320, NULL, arg1) == 0) {
            temp_s0_2->unk_31C = 2;
        }
    }
}

void func_80121064(GlobalContext *arg0) {
    void *sp18;
    u32 temp_a0;
    void *temp_v1;

    arg0->interfaceCtx.unk_340 = _story_staticSegmentRomStart;
    arg0->interfaceCtx.unk_344 = _story_staticSegmentRomEnd - _story_staticSegmentRomStart;
    if (arg0->interfaceCtx.unk_33C == 0) {
        temp_v1 = arg0 + 0x169E8;
        temp_a0 = temp_v1->unk_344;
        arg0 = arg0;
        sp18 = temp_v1;
        temp_v1->unk_33C = zelda_malloc(temp_a0);
    }
    func_80120F90(arg0, 0, arg0);
}

void func_801210E0(GlobalContext *arg0) {
    void *sp34;
    s16 sp32;
    s16 sp30;
    InterfaceContext *sp20;
    void *sp1C;
    GameInfo *temp_v0_15;
    GameInfo *temp_v0_19;
    GameInfo *temp_v0_20;
    GameInfo *temp_v0_21;
    GameInfo *temp_v0_22;
    GameInfo *temp_v0_9;
    InterfaceContext *temp_a3;
    InterfaceContext *temp_a3_2;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_5;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_8;
    s32 temp_v1_9;
    s8 temp_t2;
    u16 temp_a0_2;
    u16 temp_a1_4;
    u16 temp_a1_5;
    u16 temp_t3;
    u16 temp_t4;
    u16 temp_t6;
    u16 temp_t7_2;
    u16 temp_t8;
    u16 temp_t8_2;
    u16 temp_v0;
    u16 temp_v0_14;
    u16 temp_v0_16;
    u16 temp_v1_4;
    u8 *temp_v0_8;
    u8 temp_t7;
    u8 temp_v0_17;
    u8 temp_v0_18;
    u8 temp_v0_6;
    u8 temp_v1_6;
    u8 temp_v1_7;
    void *temp_a0_3;
    s16 phi_a1;
    s16 phi_a2;
    InterfaceContext *phi_a3;
    s16 phi_a1_2;
    s16 phi_a1_3;
    InterfaceContext *phi_a3_2;
    s16 phi_v1;
    InterfaceContext *phi_a3_3;
    u16 phi_v1_2;
    u8 phi_t7;
    u16 phi_a1_4;
    u16 phi_a1_5;
    GameInfo **phi_a1_6;
    SaveContext *phi_t0;
    InterfaceContext *phi_a3_4;
    SaveContext *phi_t0_2;
    u8 phi_v0;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    s32 phi_v1_6;
    s32 phi_v1_7;
    GameInfo **phi_a1_7;
    SaveContext *phi_t0_3;

    sp1C = arg0 + 0x10000;
    sp34 = arg0->actorCtx.actorList[2].first;
    if ((arg0->pauseCtx.state == 0) && (arg0->pauseCtx.debugState == 0) && (arg0->gameOverCtx.state == 0)) {
        func_80111CB4(arg0);
    }
    temp_v0 = gSaveContext.unk_3F20;
    if ((s32) temp_v0 >= 0x33) {
        if (temp_v0 != 0x34) {

        } else {
            gSaveContext.unk_3F20 = 1;
            func_8010F1A8(arg0, 0);
            gSaveContext.unk_3F20 = 0;
        }
        goto block_44;
    }
    if ((s32) temp_v0 >= 0x17) {
        if (temp_v0 != 0x32) {
            goto block_44;
        }
        temp_a1 = 0xFF - (gSaveContext.unk_3F24 << 5);
        phi_a1 = temp_a1;
        if ((s32) temp_a1 < 0) {
            phi_a1 = 0;
        }
        temp_v0_2 = 0xFF - phi_a1;
        phi_a2 = temp_v0_2;
        if ((s32) temp_v0_2 >= 0xFF) {
            phi_a2 = 0xFF;
        }
        sp30 = phi_a2;
        func_8010EF9C((s16) arg0, phi_a2, phi_a2);
        if (gSaveContext.buttonStatus[5] == 0xFF) {
            temp_a3 = &arg0->interfaceCtx;
            phi_a3 = temp_a3;
            if (temp_a3->startAlpha != 0x46) {
                temp_a3->startAlpha = 0x46;
            }
        } else {
            temp_a3_2 = &arg0->interfaceCtx;
            phi_a3 = temp_a3_2;
            if (temp_a3_2->startAlpha != 0xFF) {
                temp_a3_2->startAlpha = phi_a2;
            }
        }
        phi_a3_2 = phi_a3;
        if (phi_a3->healthAlpha != 0xFF) {
            phi_a3->healthAlpha = phi_a2;
        }
        if (phi_a3->magicAlpha != 0xFF) {
            phi_a3->magicAlpha = phi_a2;
        }
        if (arg0->sceneNum == 8) {
            if ((s32) phi_a3->minimapAlpha < 0xAA) {
                goto block_40;
            }
            phi_a3->minimapAlpha = 0xAA;
        } else if (phi_a3->minimapAlpha != 0xFF) {
block_40:
            phi_a3->minimapAlpha = phi_a2;
        }
        gSaveContext.unk_3F24 += 1;
        if (phi_a2 == 0xFF) {
            gSaveContext.unk_3F20 = 0;
        }
    } else {
        switch (temp_v0) {                          /* switch 1 */
        case 1:                                     /* switch 1 */
        case 2:                                     /* switch 1 */
        case 8:                                     /* switch 1 */
            temp_a1_2 = 0xFF - (gSaveContext.unk_3F24 << 5);
            phi_a1_2 = temp_a1_2;
            if ((s32) temp_a1_2 < 0) {
                phi_a1_2 = 0;
            }
            sp32 = phi_a1_2;
            func_8010F1A8(arg0, phi_a1_2);
            gSaveContext.unk_3F24 += 2;
            if (phi_a1_2 == 0) {
                gSaveContext.unk_3F20 = 0;
            }
            break;
        case 3:                                     /* switch 1 */
        case 4:                                     /* switch 1 */
        case 5:                                     /* switch 1 */
        case 6:                                     /* switch 1 */
        case 7:                                     /* switch 1 */
        case 9:                                     /* switch 1 */
        case 10:                                    /* switch 1 */
        case 11:                                    /* switch 1 */
        case 12:                                    /* switch 1 */
        case 13:                                    /* switch 1 */
        case 14:                                    /* switch 1 */
        case 15:                                    /* switch 1 */
        case 16:                                    /* switch 1 */
        case 17:                                    /* switch 1 */
        case 18:                                    /* switch 1 */
        case 19:                                    /* switch 1 */
        case 20:                                    /* switch 1 */
        case 21:                                    /* switch 1 */
        case 22:                                    /* switch 1 */
            temp_a1_3 = 0xFF - (gSaveContext.unk_3F24 << 5);
            phi_a1_3 = temp_a1_3;
            if ((s32) temp_a1_3 < 0) {
                phi_a1_3 = 0;
            }
            sp32 = phi_a1_3;
            func_8010F1A8(arg0, phi_a1_3);
            gSaveContext.unk_3F24 += 1;
            if (phi_a1_3 == 0) {
                gSaveContext.unk_3F20 = 0;
            }
            break;
        default:                                    /* switch 1 */
block_44:
            break;
        }
        phi_a3_2 = arg0 + 0x169E8;
    }
    sp20 = phi_a3_2;
    func_8010A580(arg0);
    temp_v0_3 = gSaveContext.healthAccumulator;
    phi_a3_3 = phi_a3_2;
    if (temp_v0_3 != 0) {
        gSaveContext.healthAccumulator = temp_v0_3 - 4;
        gSaveContext.health += 4;
        temp_v1 = gSaveContext.health;
        phi_v1 = temp_v1;
        if ((temp_v1 & 0xF) < 4) {
            sp20 = phi_a3_2;
            play_sound(0x480BU);
            phi_v1 = gSaveContext.health;
        }
        temp_a0 = gSaveContext.healthCapacity;
        phi_a3_3 = phi_a3_2;
        if ((s32) phi_v1 >= (s32) temp_a0) {
            gSaveContext.health = temp_a0;
            gSaveContext.healthAccumulator = 0;
        }
    }
    sp20 = phi_a3_3;
    LifeMeter_UpdateSizeAndBeep(arg0);
    D_801BF8DC = func_801242DC(arg0);
    if (D_801BF8DC == 1) {
        if (((s32) (gSaveContext.equips.equipment & *(gEquipMasks + 4)) >> gEquipShifts[2]) == 2) {
            D_801BF8DC = 0;
        }
    } else {
        sp20 = phi_a3_3;
        if (func_801242DC(arg0) >= 2) {
            sp20 = phi_a3_3;
            if ((func_801242DC(arg0) < 5) && (((s32) (gSaveContext.equips.equipment & *(gEquipMasks + 4)) >> gEquipShifts[2]) == 3)) {
                D_801BF8DC = 0;
            }
        }
    }
    sp20 = phi_a3_3;
    LifeMeter_UpdateColors(arg0);
    temp_v0_4 = gSaveContext.rupeeAccumulator;
    if (temp_v0_4 != 0) {
        if ((s32) temp_v0_4 > 0) {
            temp_a0_2 = (*(gUpgradeCapacities + 0x18))[(u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x10)) >> gUpgradeShifts[4]];
            temp_v1_2 = gSaveContext.rupees;
            if ((s32) temp_v1_2 < (s32) temp_a0_2) {
                gSaveContext.rupeeAccumulator = temp_v0_4 - 1;
                gSaveContext.rupees = temp_v1_2 + 1;
                sp20 = phi_a3_3;
                play_sound(0x482FU);
            } else {
                gSaveContext.rupees = (s16) temp_a0_2;
                goto block_69;
            }
        } else {
            temp_v1_3 = gSaveContext.rupees;
            if (temp_v1_3 != 0) {
                if ((s32) temp_v0_4 < -0x31) {
                    gSaveContext.rupees = temp_v1_3 - 0xA;
                    gSaveContext.rupeeAccumulator = temp_v0_4 + 0xA;
                    if ((s32) gSaveContext.rupees < 0) {
                        gSaveContext.rupees = 0;
                    }
                    sp20 = phi_a3_3;
                    play_sound(0x482FU);
                } else {
                    gSaveContext.rupeeAccumulator = temp_v0_4 + 1;
                    gSaveContext.rupees = temp_v1_3 - 1;
                    sp20 = phi_a3_3;
                    play_sound(0x482FU);
                }
            } else {
block_69:
                gSaveContext.rupeeAccumulator = 0;
            }
        }
    }
    temp_v1_4 = sp1C->unk_6F1C;
    phi_v1_2 = temp_v1_4;
    phi_t0_3 = &gSaveContext;
    if ((temp_v1_4 == 0) && (sp1C->unk_6F1E == 0) && (phi_a3_3->unk_286 != 0)) {
        temp_v0_5 = phi_a3_3->unk_288;
        if (temp_v0_5 == 1) {
            sp20 = phi_a3_3;
            func_8011B5C0(arg0);
            phi_v1_2 = sp1C->unk_6F1C;
            phi_t0_3 = &gSaveContext;
        } else if (temp_v0_5 == 2) {
            sp20 = phi_a3_3;
            func_8011B9E0(arg0);
            phi_v1_2 = sp1C->unk_6F1C;
            phi_t0_3 = &gSaveContext;
        } else if (temp_v0_5 == 3) {
            sp20 = phi_a3_3;
            func_8011BF70(arg0);
            phi_v1_2 = sp1C->unk_6F1C;
            phi_t0_3 = &gSaveContext;
        }
    }
    if ((phi_v1_2 == 0) && (sp1C->unk_6F1E == 0)) {
        temp_v0_6 = phi_a3_3->unk_280;
        if (temp_v0_6 != 0) {
            switch (temp_v0_6) {                    /* switch 2 */
            case 1:                                 /* switch 2 */
            case 3:                                 /* switch 2 */
            case 5:                                 /* switch 2 */
            case 7:                                 /* switch 2 */
                temp_t7 = temp_v0_6 + 1;
                phi_a3_3->unk_282 = 0xFF;
                phi_a3_3->unk_284 = 0x64;
                phi_a3_3->unk_280 = temp_t7;
                if ((temp_t7 & 0xFF) == 8) {
                    phi_a3_3->unk_284 = 0xA0;
                    sp20 = phi_a3_3;
                    play_sound(0x4835U);
                    phi_t0_3 = &gSaveContext;
                } else {
                    sp20 = phi_a3_3;
                    play_sound(0x481AU);
                    phi_t0_3 = &gSaveContext;
                }
                break;
            case 2:                                 /* switch 2 */
            case 4:                                 /* switch 2 */
            case 6:                                 /* switch 2 */
                phi_a3_3->unk_282 += -0xA;
                phi_a3_3->unk_284 += 3;
                if ((s32) phi_a3_3->unk_282 < 0x16) {
                    phi_t7 = phi_a3_3->unk_280 + 1;
block_93:
                    phi_a3_3->unk_280 = phi_t7;
                }
                break;
            case 8:                                 /* switch 2 */
                phi_a3_3->unk_282 += -0xA;
                if ((s32) phi_a3_3->unk_282 < 0x97) {
                    phi_a3_3->unk_280 = 0x1E;
                }
                break;
            case 20:                                /* switch 2 */
                phi_a3_3->unk_282 = 0;
                phi_a3_3->unk_280 = temp_v0_6 + 1;
                break;
            case 21:                                /* switch 2 */
                phi_a3_3->unk_282 += 1;
                phi_t7 = 0x1EU;
                if ((s32) phi_a3_3->unk_282 >= 0x12) {
                    goto block_93;
                }
                break;
            }
        }
    }
    temp_v0_7 = phi_a3_3->unk_210;
    phi_t0 = phi_t0_3;
    phi_a3_4 = phi_a3_3;
    phi_t0 = phi_t0_3;
    phi_a3_4 = phi_a3_3;
    phi_t0 = phi_t0_3;
    phi_t0 = phi_t0_3;
    if (temp_v0_7 != 1) {
        if (temp_v0_7 != 2) {
            if (temp_v0_7 != 3) {
                if (temp_v0_7 != 4) {

                } else {
                    phi_a3_3->unk_218 += 10466.667f;
                    if (phi_a3_3->unk_218 >= 0.0f) {
                        temp_t7_2 = phi_a3_3->unk_214;
                        phi_a3_3->unk_218 = 0.0f;
                        phi_a3_3->unk_210 = 0;
                        temp_a1_4 = temp_t7_2 & 0xFFFF;
                        phi_a3_3->unk_212 = temp_t7_2;
                        phi_a1_4 = temp_a1_4;
                        if ((temp_a1_4 == 0x2A) || (temp_a1_4 == 0x2B)) {
                            phi_a1_4 = 0xAU;
                        }
                        sp20 = phi_a3_3;
                        func_80115428(phi_a3_3, phi_a1_4, 0, (GlobalContext *) phi_a3_3);
                        phi_t0 = &gSaveContext;
                    }
                    phi_a3_4 = phi_a3_3;
                }
            } else {
                phi_a3_3->unk_218 += 10466.667f;
                if (phi_a3_3->unk_218 >= 15700.0f) {
                    phi_a3_3->unk_210 = 2;
                    phi_a3_3->unk_218 = -15700.0f;
                }
            }
        } else {
            phi_a3_3->unk_218 += 10466.667f;
            if (phi_a3_3->unk_218 >= 0.0f) {
                temp_t3 = phi_a3_3->unk_214;
                phi_a3_3->unk_218 = 0.0f;
                temp_a1_5 = temp_t3 & 0xFFFF;
                phi_a3_3->unk_210 = 0;
                phi_a3_3->unk_212 = temp_t3;
                phi_a1_5 = temp_a1_5;
                if ((temp_a1_5 == 0x2A) || (temp_a1_5 == 0x2B)) {
                    phi_a1_5 = 0xAU;
                }
                sp20 = phi_a3_3;
                func_80115428(phi_a3_3, phi_a1_5, 0, (GlobalContext *) phi_a3_3);
                phi_t0 = &gSaveContext;
            }
            phi_a3_4 = phi_a3_3;
        }
        goto block_120;
    }
    phi_a3_3->unk_218 += 10466.667f;
    if (phi_a3_3->unk_218 >= 15700.0f) {
        phi_a3_3->unk_210 = 2;
        phi_a3_3->unk_218 = -15700.0f;
        temp_v0_8 = &arg0->msgCtx.font.fontBuf[34328];
        if ((temp_v0_8->unk_1F22 != 0) && (temp_v0_8->unk_2006 == 0x26)) {
            gGameInfo->data[1375] = -0xE;
            phi_a1_6 = &gGameInfo;
        } else {
            gGameInfo->data[1375] = 0;
            goto block_104;
        }
    } else {
block_104:
block_120:
        phi_a1_6 = &gGameInfo;
    }
    phi_t0_2 = phi_t0;
    phi_a1_7 = phi_a1_6;
    if ((sp34->unk_A6C & 0x200) == 0) {
        temp_v0_9 = *phi_a1_6;
        temp_v1_5 = temp_v0_9->data[1348];
        if (temp_v1_5 == 1) {
            if (phi_t0->magicAcquired == 0) {
                phi_t0->magicAcquired = 1;
            }
            phi_t0->doubleMagic = 1;
            phi_t0->magic = 0x60;
            phi_t0->magicLevel = 0;
            goto block_130;
        }
        if (temp_v1_5 == -1) {
            if (phi_t0->magicAcquired == 0) {
                phi_t0->magicAcquired = 1;
            }
            phi_t0->doubleMagic = 0;
            phi_t0->magic = 0x30;
            phi_t0->magicLevel = 0;
block_130:
            temp_v0_9->data[1348] = 0;
        }
        if ((phi_t0->magicAcquired != 0) && (phi_t0->magicLevel == 0)) {
            temp_t2 = phi_t0->magic;
            phi_t0->magic = 0;
            phi_t0->magicLevel = phi_t0->doubleMagic + 1;
            phi_t0->unk_3F28 = 8;
            phi_t0->equips.buttonItems[3][0] = 9;
            phi_t0->unk_3F30 = (s16) temp_t2;
        }
        sp20 = phi_a3_4;
        func_80116348(arg0, phi_a1_6);
        func_80116088();
        phi_t0_2 = &gSaveContext;
        phi_a1_7 = &gGameInfo;
    }
    temp_v1_6 = phi_t0_2->unk_3DD0[5];
    if (temp_v1_6 == 0) {
        temp_v0_10 = D_801BF8DC;
        if ((temp_v0_10 == 1) || (temp_v0_10 == 4)) {
            temp_v1_7 = phi_t0_2->playerForm;
            phi_v0 = temp_v1_7;
            if (temp_v1_7 == 4) {
                phi_v0 = 0U;
            }
            if ((phi_v0 != 2) && (sp1C->unk_7000 == 0) && (((s32) phi_t0_2->health >> 1) != 0)) {
                phi_t0_2->unk_3DD0[5] = 8;
                phi_t0_2->timerX[5] = 0x73;
                phi_t0_2->timerY[5] = 0x50;
                D_801BF8E0 = 1;
                phi_t0_2->unk_3DD7[5] = 0;
            }
        }
    } else {
        temp_v0_11 = D_801BF8DC;
        if (((temp_v0_11 == 0) || (temp_v0_11 == 3)) && ((s32) temp_v1_6 < 5)) {
            phi_t0_2->unk_3DD0[5] = 0;
        }
    }
    if (phi_t0_2->minigameState == 1) {
        gSaveContext.minigameScore = phi_t0_2->minigameScore + phi_a3_4->unk_25C;
        gSaveContext.unk_3F3C = phi_t0_2->unk_3F3C + phi_a3_4->unk_25E;
        phi_a3_4->unk_25C = 0;
        phi_a3_4->unk_25E = 0;
        temp_v0_12 = D_801BF88C;
        if (temp_v0_12 == 0) {
            if ((s32) phi_t0_2->minigameScore >= 0x3E8) {
                D_801BF88C = temp_v0_12 + 1;
            }
        } else if ((temp_v0_12 == 1) && ((s32) phi_t0_2->minigameScore >= 0x5DC)) {
            D_801BF88C = temp_v0_12 + 1;
        }
        temp_t8 = phi_t0_2->minigameScore;
        temp_v1_8 = temp_t8 & 0xFFFF;
        D_801BF890.unk_2 = 0U;
        D_801BF890.unk_0 = 0U;
        D_801BF890.unk_4 = 0U;
        D_801BF890.unk_6 = temp_t8;
        phi_v1_3 = temp_v1_8;
        phi_v1_4 = temp_v1_8;
        if (temp_v1_8 >= 0x3E8) {
            do {
                temp_t6 = phi_v1_3 - 0x3E8;
                temp_v1_9 = temp_t6 & 0xFFFF;
                D_801BF890.unk_0 = (u16) (D_801BF890.unk_0 + 1);
                D_801BF890.unk_6 = temp_t6;
                phi_v1_3 = temp_v1_9;
                phi_v1_4 = temp_v1_9;
            } while (temp_v1_9 >= 0x3E8);
        }
        phi_v1_5 = phi_v1_4;
        phi_v1_6 = phi_v1_4;
        if (phi_v1_4 >= 0x64) {
            do {
                temp_t4 = phi_v1_5 - 0x64;
                temp_v1_10 = temp_t4 & 0xFFFF;
                D_801BF890.unk_2 = (u16) (D_801BF890.unk_2 + 1);
                D_801BF890.unk_6 = temp_t4;
                phi_v1_5 = temp_v1_10;
                phi_v1_6 = temp_v1_10;
            } while (temp_v1_10 >= 0x64);
        }
        phi_v1_7 = phi_v1_6;
        if (phi_v1_6 >= 0xA) {
            do {
                temp_t8_2 = phi_v1_7 - 0xA;
                temp_v1_11 = temp_t8_2 & 0xFFFF;
                D_801BF890.unk_4 = (u16) (D_801BF890.unk_4 + 1);
                D_801BF890.unk_6 = temp_t8_2;
                phi_v1_7 = temp_v1_11;
            } while (temp_v1_11 >= 0xA);
        }
    }
    temp_v0_13 = phi_t0_2->unk_3F58;
    if (temp_v0_13 != 0) {
        if ((arg0->msgCtx.unk_1202C != 0x39) && (temp_v0_13 == 1)) {
            arg0->msgCtx.unk1202A = 4;
        }
        if (sp1C->unk_7006 != 0) {
            if (phi_t0_2->unk_3F58 != 2) {
                D_801BFD94 = 0;
                temp_v0_14 = phi_t0_2->time;
                if (((s32) temp_v0_14 >= 0x4000) && ((s32) temp_v0_14 < 0xC001)) {
                    D_801BFD94 = 1;
                }
                temp_v0_15 = *phi_a1_7;
                phi_t0_2->unk_3F58 = 2;
                D_801BFD98 = temp_v0_15->data[15];
                temp_v0_15->data[15] = 0x190;
            } else if (D_801BFD94 == 0) {
                temp_v0_16 = phi_t0_2->time;
                if (((s32) temp_v0_16 >= 0x4000) && ((s32) temp_v0_16 < 0xC001)) {
                    phi_t0_2->unk_3F58 = 0;
                    (*phi_a1_7)->data[15] = D_801BFD98;
                    arg0->msgCtx.unk1202A = 4;
                }
            } else if ((s32) phi_t0_2->time >= 0xC001) {
                phi_t0_2->unk_3F58 = 0;
                (*phi_a1_7)->data[15] = D_801BFD98;
                arg0->msgCtx.unk1202A = 4;
            }
        } else {
            phi_t0_2->unk_3F58 = 3;
        }
    }
    sp20 = phi_a3_4;
    func_8011E3B4(arg0, phi_a1_7);
    temp_v0_17 = phi_a3_4->unk_31A;
    if (temp_v0_17 != 0) {
        if (temp_v0_17 == 1) {
            phi_a3_4->unk_31C = 0;
            phi_a3_4->unk_31A = 2;
            gGameInfo->data[1435] = 0;
        }
        sp20 = phi_a3_4;
        func_80121064(arg0, &gGameInfo);
        temp_v0_18 = phi_a3_4->unk_31A;
        if (temp_v0_18 == 3) {
            temp_a0_3 = phi_a3_4->unk_33C;
            phi_a3_4->unk_31A = 0;
            phi_a3_4->unk_31C = 0;
            if (temp_a0_3 != 0) {
                sp20 = phi_a3_4;
                zelda_free(temp_a0_3);
                phi_a3_4->unk_33C = NULL;
                return;
            }
            /* Duplicate return node #193. Try simplifying control flow for better match */
            return;
        }
        if (temp_v0_18 == 4) {
            goto block_192;
        }
        if (temp_v0_18 == 5) {
            temp_v0_19 = gGameInfo;
            temp_v0_19->data[1435] += 0xA;
            temp_v0_20 = gGameInfo;
            if ((s32) temp_v0_20->data[1435] >= 0xFA) {
                temp_v0_20->data[1435] = 0xFF;
                goto block_192;
            }
        } else if (temp_v0_18 == 6) {
            temp_v0_21 = gGameInfo;
            temp_v0_21->data[1435] += -0xA;
            temp_v0_22 = gGameInfo;
            if ((s32) temp_v0_22->data[1435] < 0) {
                temp_v0_22->data[1435] = 0;
block_192:
                phi_a3_4->unk_31A = 2;
            }
        }
        /* Duplicate return node #193. Try simplifying control flow for better match */
    }
}

void func_80121F94(void) {
    func_8010A410();
    func_80174F9C(func_8010E968, 0);
}

void func_80121FC4(GlobalContext *globalCtx) {
    InterfaceContext *sp24;
    u8 *sp20;
    u32 sp1C;
    TwoHeadArena *sp18;
    InterfaceContext *temp_a0;
    TwoHeadArena *temp_a0_2;
    s16 temp_v0_6;
    s32 temp_v0_3;
    u32 temp_a2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 temp_a0_5;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t2;
    u8 temp_t2_2;
    u8 temp_t4;
    u8 temp_t4_2;
    u8 temp_t6;
    u8 temp_v0_4;
    u8 temp_v1;
    void *temp_v0_5;
    u8 phi_v1;
    u8 phi_v1_2;
    u8 phi_v0;
    SaveContext *phi_a3;
    SaveContext *phi_a3_2;
    SaveContext *phi_a3_3;
    s32 phi_a2;
    SaveContext *phi_a3_4;

    temp_a0 = &globalCtx->interfaceCtx;
    sp24 = temp_a0;
    bzero((void *) temp_a0, 0x348);
    gSaveContext.unk_3F58 = 0;
    gSaveContext.unk_3F20 = 0;
    gSaveContext.unk_3F22 = 0;
    View_Init((View *) temp_a0, globalCtx->state.gfxCtx);
    sp24->unk_258 = 0x10;
    sp24->unkTimer = 0xC8;
    temp_a2 = _parameter_staticSegmentRomEnd - _parameter_staticSegmentRomStart;
    temp_a0_2 = &globalCtx->state.heap;
    sp18 = temp_a0_2;
    sp1C = temp_a2;
    sp20 = _parameter_staticSegmentRomStart;
    temp_v0 = THA_AllocEndAlign16(temp_a0_2, temp_a2);
    temp_a0_3 = temp_v0;
    sp24->parameterSegment = temp_v0;
    DmaMgr_SendRequest0((void *) temp_a0_3, (u32) sp20, temp_a2);
    temp_v0_2 = THA_AllocEndAlign16(temp_a0_2, 0xC90U);
    temp_a0_4 = temp_v0_2;
    sp24->doActionSegment = temp_v0_2;
    DmaMgr_SendRequest0((void *) temp_a0_4, (u32) _do_action_staticSegmentRomStart, 0x300U);
    DmaMgr_SendRequest0((void *) (sp24->doActionSegment + 0x300), (u32) (_do_action_staticSegmentRomStart + 0x480), 0x180U);
    func_8010EE74(globalCtx, (s32) gSaveContext.day % 5);
    sp24->iconItemSegment = THA_AllocEndAlign16(temp_a0_2, 0x4000U);
    temp_a0_5 = gSaveContext.playerForm;
    phi_a3 = &gSaveContext;
    phi_a2 = 4;
    phi_a2 = 4;
    phi_a2 = 4;
    if (temp_a0_5 == 4) {
        phi_v1 = 0U;
    } else {
        phi_v1 = temp_a0_5;
    }
    if ((s32) (&gSaveContext + (phi_v1 * 4))->unk_4C < 0xF0) {
        func_80112B40(globalCtx, 0);
        goto block_12;
    }
    phi_v1_2 = temp_a0_5;
    if (temp_a0_5 == 4) {
        phi_v1_2 = 0U;
    }
    if ((&gSaveContext + (phi_v1_2 * 4))->unk_4C != 0xFF) {
        phi_v0 = temp_a0_5;
        if (temp_a0_5 == 4) {
            phi_v0 = 0U;
        }
        if ((&gSaveContext + (phi_v0 * 4))->unk_4C != 0xFD) {
            func_80112B40(globalCtx, 0);
block_12:
            phi_a3 = &gSaveContext;
        }
    }
    phi_a3_2 = phi_a3;
    phi_a2 = 4;
    if ((s32) phi_a3->equips.buttonItems[0][1] < 0xF0) {
        func_80112B40(globalCtx, 1);
        phi_a3_2 = &gSaveContext;
    }
    phi_a3_3 = phi_a3_2;
    if ((s32) phi_a3_2->equips.buttonItems[0][2] < 0xF0) {
        func_80112B40(globalCtx, 2);
        phi_a3_3 = &gSaveContext;
    }
    phi_a3_4 = phi_a3_3;
    if ((s32) phi_a3_3->equips.buttonItems[0][3] < 0xF0) {
        func_80112B40(globalCtx, 3);
        phi_a3_4 = &gSaveContext;
    }
    temp_v1 = phi_a3_4->unk_3DD0[4];
    if (((phi_a2 == temp_v1) || (phi_a2 == phi_a3_4->unk_3DD0[6])) && ((temp_v0_3 = phi_a3_4->respawnFlag, (temp_v0_3 == -1)) || (temp_v0_3 == 1)) && (phi_a2 == temp_v1)) {
        phi_a3_4->unk_3DD0[4] = 1;
        phi_a3_4->timerX[4] = 0x73;
        phi_a3_4->timerY[4] = 0x50;
    }
    LifeMeter_Init(globalCtx);
    func_8010A430(globalCtx);
    gSaveContext.minigameState = 3;
    sp24->unk_2FC[0] = 0xFF;
    sp24->unk_2FC[1] = 0xA5;
    sp24->unk_2FC[2] = 0x37;
    temp_v0_4 = gSaveContext.eventInf[3];
    if ((temp_v0_4 & 0x10) != 0) {
        gSaveContext.eventInf[3] = temp_v0_4 & 0xEF;
        gSaveContext.unk_3DD0[4] = 0;
    }
    gSaveContext.unk_3DE8 = 0;
    gSaveContext.unk_3DD0[1] = 0;
    gSaveContext.unk_3DEC = 0;
    gSaveContext.unk_3E20 = 0;
    gSaveContext.unk_3E24 = 0;
    gSaveContext.unk_3E5C = 0;
    gSaveContext.unk_3E58 = 0;
    gSaveContext.unk_3E94 = 0;
    gSaveContext.unk_3E90 = 0;
    gSaveContext.unk_3ECC = 0;
    gSaveContext.unk_3EC8 = 0;
    if (gSaveContext.unk_3DD0[0] == 7) {
        gSaveContext.unk_3DD0[0] = 0;
    }
    temp_v0_5 = &gSaveContext + 3;
    if (gSaveContext.unk_3DD0[1] == 7) {
        gSaveContext.unk_3DD0[1] = 0;
    }
    if (gSaveContext.unk_3DD0[2] == 7) {
        gSaveContext.unk_3DD0[2] = 0;
    }
    if (gSaveContext.unk_3DD0[3] == 7) {
        gSaveContext.unk_3DD0[3] = 0;
    }
    if (temp_v0_5->unk_3DD1 == 7) {
        temp_v0_5->unk_3DD1 = 0U;
    }
    if (temp_v0_5->unk_3DD2 == 7) {
        temp_v0_5->unk_3DD2 = 0U;
    }
    if (temp_v0_5->unk_3DD3 == 7) {
        temp_v0_5->unk_3DD3 = 0U;
    }
    D_801BF884 = 0;
    D_801BF888 = 0;
    temp_v0_6 = globalCtx->sceneNum;
    if ((temp_v0_6 != 0x1F) && (temp_v0_6 != 0x44) && (temp_v0_6 != 0x5F) && (temp_v0_6 != 0x36) && (temp_v0_6 != 0xB) && (temp_v0_6 != 0x1B) && (temp_v0_6 != 0x21) && (temp_v0_6 != 0x49) && (temp_v0_6 != 0x16) && (temp_v0_6 != 0x18) && (temp_v0_6 != 0x2A) && (temp_v0_6 != 0x3F) && (temp_v0_6 != 0x47) && (temp_v0_6 != 0x66)) {
        temp_t0 = gSaveContext.eventInf[5] & 0xF7;
        temp_t2 = temp_t0 & 0xEF;
        gSaveContext.eventInf[5] = temp_t0;
        temp_t4 = temp_t2 & 0xDF;
        gSaveContext.eventInf[5] = temp_t2;
        temp_t0_2 = gSaveContext.eventInf[6] & 0xFE;
        gSaveContext.eventInf[5] = temp_t4;
        temp_t6 = temp_t4 & 0xBF;
        temp_t2_2 = temp_t0_2 & 0xFD;
        gSaveContext.eventInf[6] = temp_t0_2;
        temp_t4_2 = temp_t2_2 & 0xFB;
        gSaveContext.eventInf[6] = temp_t2_2;
        gSaveContext.eventInf[5] = temp_t6;
        gSaveContext.eventInf[6] = temp_t4_2;
        gSaveContext.eventInf[5] = temp_t6 & 0x7F;
        gSaveContext.eventInf[6] = temp_t4_2 & 0xF7;
    }
    D_801BF9F8 = 0;
    D_801BF9F4 = D_801BF9F8;
    D_801BF9F0 = D_801BF9F4;
    D_801BF9EC = D_801BF9F0;
    D_801BF9FC = 0xF;
    D_801BFA00 = 0;
}
