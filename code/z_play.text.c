typedef struct ActorContext {
    /* 0x000 */ u8 unk_0;                           /* inferred */
    /* 0x001 */ char pad_1[0x1];
    /* 0x002 */ u8 unk2;
    /* 0x003 */ u8 unk3;
    /* 0x004 */ s8 unk4;
    /* 0x005 */ u8 unk5;
    /* 0x006 */ char pad_6[0x5];                    /* maybe part of unk5[6]? */
    /* 0x00B */ s8 unkB;
    /* 0x00C */ s16 unkC;
    /* 0x00E */ u8 totalLoadedActors;
    /* 0x00F */ u8 undrawnActorCount;
    /* 0x010 */ ActorListEntry actorList[12];
    /* 0x0A0 */ Actor *undrawnActors[32];
    /* 0x120 */ TargetContext targetContext;
    /* 0x1B8 */ u32 switchFlags[4];
    /* 0x1C8 */ u32 chestFlags;
    /* 0x1CC */ u32 clearedRooms;
    /* 0x1D0 */ u32 clearedRoomsTemp;
    /* 0x1D4 */ u32 collectibleFlags[4];
    /* 0x1E4 */ TitleCardContext titleCtxt;
    /* 0x1F4 */ u8 unk1F4;
    /* 0x1F5 */ u8 unk1F5;
    /* 0x1F6 */ char pad_1F6[0x2];                  /* maybe part of unk1F5[3]? */
    /* 0x1F8 */ f32 unk1F8;
    /* 0x1FC */ Vec3f unk1FC;
    /* 0x208 */ char pad_208[0x48];                 /* maybe part of unk1FC[7]? */
    /* 0x250 */ void *unk250;
    /* 0x254 */ u32 unk254[5];
    /* 0x268 */ u8 unk268;
    /* 0x269 */ char pad_269[0xF];                  /* maybe part of unk268[16]? */
    /* 0x278 */ u16 unk278;
    /* 0x27A */ char pad_27A[0xA];                  /* maybe part of unk278[6]? */
} ActorContext;                                     /* size = 0x284 */

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
    /* 0x18B9C */ char pad_18B9C[0x5C];             /* maybe part of pauseBgPreRender[2]? */
    /* 0x18BF8 */ ? unk_18BF8;                      /* inferred */
    /* 0x18BF8 */ char pad_18BF8[0x22C];
    /* 0x18E24 */ ? (*unk_18E24)(? *);              /* inferred */
    /* 0x18E28 */ char pad_18E28[0x20];             /* maybe part of unk_18E24[9]? */
    /* 0x18E48 */ ? unk_18E48;                      /* inferred */
    /* 0x18E48 */ char pad_18E48[0xC];
    /* 0x18E54 */ SceneTableEntry *loadedScene;
    /* 0x18E58 */ s32 unk_18E58;                    /* inferred */
    /* 0x18E5C */ s32 unk_18E5C;                    /* inferred */
    /* 0x18E60 */ s32 unk_18E60;                    /* inferred */
    /* 0x18E64 */ s32 unk_18E64;                    /* inferred */
    /* 0x18E68 */ s32 unk_18E68;                    /* inferred */
    /* 0x18E6C */ char pad_18E6C[0x3EC];            /* maybe part of unk_18E68[252]? */
} GlobalContext;                                    /* size = 0x19258 */

typedef struct GraphicsContext {
    /* 0x000 */ Gfx *polyOpaBuffer;
    /* 0x004 */ Gfx *polyXluBuffer;
    /* 0x008 */ char pad_8[0x8];                    /* maybe part of polyXluBuffer[3]? */
    /* 0x010 */ Gfx *overlayBuffer;
    /* 0x014 */ char pad_14[0x44];                  /* maybe part of overlayBuffer[18]? */
    /* 0x058 */ OSMesgQueue *unk58;
    /* 0x05C */ OSMesgQueue unk5C;
    /* 0x074 */ char pad_74[0x12C];                 /* maybe part of unk5C[13]? */
    /* 0x1A0 */ Gfx *unk1A0;
    /* 0x1A4 */ TwoHeadGfxArena unk1A4;
    /* 0x1B4 */ Gfx *unk1B4;
    /* 0x1B8 */ TwoHeadGfxArena unk1B8;
    /* 0x1C8 */ char pad_1C8[0xAC];                 /* maybe part of unk1B8[11]? */
    /* 0x274 */ OSViMode *unk274;
    /* 0x278 */ void *zbuffer;
    /* 0x27C */ char pad_27C[0x1C];                 /* maybe part of zbuffer[8]? */
    /* 0x298 */ TwoHeadGfxArena overlay;
    /* 0x2A8 */ TwoHeadGfxArena polyOpa;
    /* 0x2B8 */ TwoHeadGfxArena polyXlu;
    /* 0x2C8 */ s32 displaylistCounter;
    /* 0x2CC */ void *framebuffer;
    /* 0x2D0 */ s32 pad2D0;
    /* 0x2D4 */ u32 viConfigFeatures;
    /* 0x2D8 */ char pad_2D8[0x2];
    /* 0x2DA */ s8 unk_2DA;                         /* inferred */
    /* 0x2DB */ u8 framebufferCounter;
    /* 0x2DC */ s32 unk_2DC;                        /* inferred */
    /* 0x2E0 */ s32 unk_2E0;                        /* inferred */
    /* 0x2E4 */ f32 viConfigXScale;
    /* 0x2E8 */ f32 viConfigYScale;
    /* 0x2EC */ char pad_2EC[0x4];
} GraphicsContext;                                  /* size = 0x2F0 */

typedef struct {
    /* 0x00 */ RomFile segment;
    /* 0x08 */ u16 titleTextId;
    /* 0x0A */ u8 unk_A;
    /* 0x0B */ u8 drawConfig;
    /* 0x0C */ u8 unk_C;
    /* 0x0D */ s8 unk_D;                            /* inferred */
    /* 0x0E */ char pad_E[0x2];                     /* maybe part of unk_D[3]? */
} SceneTableEntry;                                  /* size = 0x10 */

typedef struct {
    /* 0x000 */ u32 magic;
    /* 0x004 */ GraphicsContext *gfxCtx;
    /* 0x008 */ Viewport viewport;
    /* 0x018 */ f32 fovy;
    /* 0x01C */ f32 zNear;
    /* 0x020 */ f32 zFar;
    /* 0x024 */ f32 scale;
    /* 0x028 */ Vec3f eye;
    /* 0x034 */ Vec3f at;
    /* 0x040 */ Vec3f up;
    /* 0x04C */ char pad_4C[0x4];
    /* 0x050 */ Vp vp;
    /* 0x060 */ Mtx projection;
    /* 0x0A0 */ Mtx viewing;
    /* 0x0E0 */ Mtx unkE0;
    /* 0x120 */ Mtx *projectionPtr;
    /* 0x124 */ Mtx *viewingPtr;
    /* 0x128 */ Vec3f quakeRot;
    /* 0x134 */ Vec3f quakeScale;
    /* 0x140 */ f32 quakeSpeed;
    /* 0x144 */ Vec3f currQuakeRot;
    /* 0x150 */ Vec3f currQuakeScale;
    /* 0x15C */ u16 normal;
    /* 0x15E */ char pad_15E[0x2];
    /* 0x160 */ u32 flags;
    /* 0x164 */ s32 unk_164;                        /* inferred */
} View;                                             /* size = 0x168 */

struct _mips2c_stack_FrameAdvance_IsEnabled {};     /* size 0x0 */

struct _mips2c_stack_Play_CameraSetAtEye {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Play_Fini {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Play_GetActiveCameraIndex {};  /* size 0x0 */

struct _mips2c_stack_Play_GetCamera {};             /* size 0x0 */

struct _mips2c_stack_Play_Init {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ CollisionContext *sp3C;              /* inferred */
    /* 0x40 */ Camera *sp40;                        /* inferred */
    /* 0x44 */ View *sp44;                          /* inferred */
    /* 0x48 */ Camera *sp48;                        /* inferred */
    /* 0x4C */ PreRender *sp4C;                     /* inferred */
    /* 0x50 */ char pad_50[0x10];                   /* maybe part of sp4C[5]? */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x23];                   /* maybe part of sp60[9]? */
    /* 0x87 */ u8 sp87;                             /* inferred */
    /* 0x88 */ char pad_88[0x8];                    /* maybe part of sp87[9]? */
    /* 0x90 */ Actor *sp90;                         /* inferred */
    /* 0x94 */ s32 sp94;                            /* inferred */
    /* 0x98 */ char pad_98[0x8];                    /* maybe part of sp94[3]? */
    /* 0xA0 */ GraphicsContext *spA0;               /* inferred */
    /* 0xA4 */ char pad_A4[0x4];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_Play_LoadScene {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ u32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Play_SceneInit {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SceneTableEntry *sp1C;               /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Play_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Input *sp24;                         /* inferred */
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x18];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_convert_scene_number_among_shared_scenes {}; /* size 0x0 */

struct _mips2c_stack_func_80165460 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ PreRender *sp1C;                     /* inferred */
    /* 0x20 */ char pad_20[0x10];                   /* maybe part of sp1C[5]? */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80165608 {};              /* size 0x0 */

struct _mips2c_stack_func_80165630 {};              /* size 0x0 */

struct _mips2c_stack_func_80165658 {};              /* size 0x0 */

struct _mips2c_stack_func_8016566C {};              /* size 0x0 */

struct _mips2c_stack_func_80165690 {};              /* size 0x0 */

struct _mips2c_stack_func_801656A4 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80165DB8 {};              /* size 0x0 */

struct _mips2c_stack_func_80165DCC {};              /* size 0x0 */

struct _mips2c_stack_func_80165DF0 {};              /* size 0x0 */

struct _mips2c_stack_func_80165E04 {};              /* size 0x0 */

struct _mips2c_stack_func_80165E1C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80165E7C {};              /* size 0x0 */

struct _mips2c_stack_func_80165EC0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80166060 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801660B8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_801663C4 {};              /* size 0x0 */

struct _mips2c_stack_func_80166644 {};              /* size 0x0 */

struct _mips2c_stack_func_801668B4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80166968 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80166B30 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? *sp18;                             /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x34];                   /* maybe part of sp1C[14]? */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0xA];                    /* maybe part of sp54[3]? */
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80167814 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Input *sp30;                         /* inferred */
    /* 0x34 */ CollisionCheckContext *sp34;         /* inferred */
    /* 0x38 */ RoomContext *sp38;                   /* inferred */
    /* 0x3C */ AnimationContext *sp3C;              /* inferred */
    /* 0x40 */ CutsceneContext *sp40;               /* inferred */
    /* 0x44 */ void *sp44;                          /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x8];
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x8];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80167DE4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80167F0C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x10];                   /* maybe part of sp18[5]? */
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80168090 {
    /* 0x000 */ char pad_0[0x34];
    /* 0x034 */ SkyboxContext *sp34;                /* inferred */
    /* 0x038 */ View *sp38;                         /* inferred */
    /* 0x03C */ void *sp3C;                         /* inferred */
    /* 0x040 */ void *sp40;                         /* inferred */
    /* 0x044 */ MtxF *sp44;                         /* inferred */
    /* 0x048 */ MtxF *sp48;                         /* inferred */
    /* 0x04C */ ? sp4C;                             /* inferred */
    /* 0x04C */ char pad_4C[0x24];
    /* 0x070 */ Gfx *sp70;                          /* inferred */
    /* 0x074 */ Gfx *sp74;                          /* inferred */
    /* 0x078 */ f32 sp78;                           /* inferred */
    /* 0x07C */ f32 sp7C;                           /* inferred */
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ char pad_84[0x8];                   /* maybe part of sp80[3]? */
    /* 0x08C */ Gfx *sp8C;                          /* inferred */
    /* 0x090 */ Gfx *sp90;                          /* inferred */
    /* 0x094 */ char pad_94[0x4];
    /* 0x098 */ s32 sp98;                           /* inferred */
    /* 0x09C */ s32 sp9C;                           /* inferred */
    /* 0x0A0 */ s32 spA0;                           /* inferred */
    /* 0x0A4 */ s32 spA4;                           /* inferred */
    /* 0x0A8 */ ? spA8;                             /* inferred */
    /* 0x0A8 */ char pad_A8[0x160];
    /* 0x208 */ s32 sp208;                          /* inferred */
    /* 0x20C */ char pad_20C[0x8];                  /* maybe part of sp208[3]? */
    /* 0x214 */ Gfx *sp214;                         /* inferred */
    /* 0x218 */ Gfx *sp218;                         /* inferred */
    /* 0x21C */ char pad_21C[0x3F];                 /* maybe part of sp218[16]? */
    /* 0x25B */ u8 sp25B;                           /* inferred */
    /* 0x25C */ f32 sp25C;                          /* inferred */
    /* 0x260 */ f32 sp260;                          /* inferred */
    /* 0x264 */ f32 sp264;                          /* inferred */
    /* 0x268 */ Lights *sp268;                      /* inferred */
    /* 0x26C */ char pad_26C[0x4];
};                                                  /* size = 0x270 */

struct _mips2c_stack_func_80168DAC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801690CC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169100 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_801691F0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8016927C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801692C4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80169474 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_801694DC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x2];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80169590 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169600 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80169668 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8016981C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80169940 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169988 {};              /* size 0x0 */

struct _mips2c_stack_func_801699D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169A50 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Camera *sp1C;                        /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80169AC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169AFC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80169BC4 {};              /* size 0x0 */

struct _mips2c_stack_func_80169BF8 {};              /* size 0x0 */

struct _mips2c_stack_func_80169C64 {};              /* size 0x0 */

struct _mips2c_stack_func_80169C84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169D40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169DCC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169E6C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80169ECC {};              /* size 0x0 */

struct _mips2c_stack_func_80169EFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169F78 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169FDC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80169FFC {};              /* size 0x0 */

struct _mips2c_stack_func_8016A02C {};              /* size 0x0 */

struct _mips2c_stack_func_8016A0AC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ CollisionContext *sp24;              /* inferred */
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ CollisionPoly *sp38;                 /* inferred */
    /* 0x3C */ WaterBox *sp3C;                      /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8016A168 {};              /* size 0x0 */

struct _mips2c_stack_func_8016A178 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8016A268 {};              /* size 0x0 */

? ActorCutscene_ClearWaiting();                     /* extern */
? ActorCutscene_Update();                           /* extern */
? Actor_Init(GameState *, PreRender *, s32);        /* extern */
? MainHeap_Cleanup();                               /* extern */
? ShrinkWindow_Init();                              /* extern */
? TransitionFade_Destroy(? *);                      /* extern */
? TransitionFade_Draw(? *, Gfx **);                 /* extern */
? TransitionFade_SetColor(PreRender *, ?);          /* extern */
? TransitionFade_SetType(PreRender *, ?);           /* extern */
? TransitionFade_Start(PreRender *);                /* extern */
? TransitionFade_Update(? *, u8);                   /* extern */
? func_800BA9B4(ActorContext *, GlobalContext *);   /* extern */
f32 func_800C40B4(CollisionContext *, CollisionPoly **, ? *, f32 *); /* extern */
s32 func_800C9EBC(void *, s32, s32, f32 *, s32 *, ? *); /* extern */
s32 func_800CA6D8(void *, s32);                     /* extern */
? func_800DE308(Camera *, s16, s16, GlobalContext *); /* extern */
s32 func_800DFD78(Camera *, ?, Vec3f *, s32);       /* extern */
? func_800DFF18(Camera *, ?);                       /* extern */
? func_800E007C(Camera *, Camera *, s16, GlobalContext *); /* extern */
? func_800E01B8(f32 *, Camera *);                   /* extern */
? func_800E9470();                                  /* extern */
? func_800F5CD0(u8, EnvironmentContext *, SkyboxContext *); /* extern */
? func_800F6834(GlobalContext *, s32);              /* extern */
? func_800F694C(GlobalContext *);                   /* extern */
? func_800F8CD4(GlobalContext *, EnvironmentContext *, LightContext *, PauseContext *, MessageContext *, GameOverContext *, GraphicsContext *); /* extern */
? func_800F9728(GlobalContext *, EnvironmentContext *, View *, GraphicsContext *, f32, s32, s32); /* extern */
? func_800FA9FC(GlobalContext *, View *, GraphicsContext *); /* extern */
? func_800FB758(GameState *);                       /* extern */
? func_800FBCBC(GlobalContext *);                   /* extern */
? func_800FC444(GraphicsContext *, u8, u8, u8, s32, s32); /* extern */
? func_800FC64C(GlobalContext *, u8);               /* extern */
s32 func_800FD768();                                /* extern */
? func_800FE390(GlobalContext *);                   /* extern */
? func_800FE3E0(GlobalContext *);                   /* extern */
s32 func_800FE590(GlobalContext *);                 /* extern */
? func_8010C1B0(s32, GameInfo *, s32);              /* extern */
? func_801129E4(GameState *);                       /* extern */
? func_80115D5C(GameState *);                       /* extern */
? func_8011F0E0(GlobalContext *);                   /* extern */
? func_801210E0(GlobalContext *);                   /* extern */
? func_80121F94(GlobalContext *);                   /* extern */
? func_80122660(void *);                            /* extern */
s32 func_80122670(FrameAdvanceContext *, Input *);  /* extern */
? func_8013EE48(?);                                 /* extern */
? func_80140EA0(void *);                            /* extern */
? func_80141778(void *, Gfx **, s32, GraphicsContext *); /* extern */
? func_801435A0(SkyboxContext *, f32, f32, f32);    /* extern */
? func_80143668(SkyboxContext *, GraphicsContext *, s16, u8, f32, f32, f32); /* extern */
? func_80143A04(SkyboxContext *);                   /* extern */
? func_80156758(GlobalContext *);                   /* extern */
? func_8016388C();                                  /* extern */
? func_80163A58(GlobalContext *);                   /* extern */
? func_80163C0C(GlobalContext *);                   /* extern */
? func_80163C90(void *);                            /* extern */
? func_80163D80(void *, GlobalContext *);           /* extern */
? func_8016424C(? *);                               /* extern */
s32 func_801642D8(? *, ?, ?);                       /* extern */
? func_8016454C(? *, Gfx **);                       /* extern */
? func_801647AC(? *);                               /* extern */
? func_8016F1A8(s8 *, GraphicsContext *);           /* extern */
? func_8016FC78(s8 *);                              /* extern */
? func_8016FC98(s8 *);                              /* extern */
? func_80178750();                                  /* extern */
? func_80178818();                                  /* extern */
? func_801A3EC0(?);                                 /* extern */
? func_801A4058(?);                                 /* extern */
? func_801A41C8(?);                                 /* extern */
? func_801AA68C(GlobalContext *);                   /* extern */
void *get_zbuffer();                                /* extern */
void Play_SceneInit(GlobalContext *arg0, s32 arg1, s32 arg2); /* static */
s16 convert_scene_number_among_shared_scenes(s16 arg0, GlobalContext *); /* static */
void func_80165460(void **arg0);                    /* static */
void func_80165608();                               /* static */
void func_80165630();                               /* static */
void func_80165658(s16 arg0);                       /* static */
void func_8016566C(s16 arg0);                       /* static */
void func_80165690();                               /* static */
void func_801656A4(u8 *arg0, u16 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7); /* static */
void func_80165DB8(s16 arg0);                       /* static */
void func_80165DCC(s16 arg0);                       /* static */
void func_80165DF0();                               /* static */
void func_80165E04();                               /* static */
void func_80165E1C(PreRender *arg0);                /* static */
u8 func_80165E7C(GlobalContext *arg0, u8 arg1, GlobalContext *, void *); /* static */
void func_80165EC0(GlobalContext *arg0, u32 arg1);  /* static */
void func_80166060(GlobalContext *arg0);            /* static */
void func_801663C4(u8 *arg0, s8 *arg1, s32 arg2);   /* static */
void func_80166644(u8 *arg0, void *arg1, s32 arg2); /* static */
f32 func_801668B4(Vec3f *arg0, s32 *arg1, s32 *arg2); /* static */
void func_80167F0C(GlobalContext *arg0);            /* static */
f32 func_80169100(? *arg0, MtxF *arg1, CollisionPoly **arg2, ? *arg3, f32 *arg4); /* static */
void func_801691F0(CollisionPoly **arg2);           /* static */
void func_801692C4(GameState *arg0, s8 arg1);       /* static */
void func_80169668(GlobalContext *arg0);            /* static */
s32 func_8016981C(void *arg0, s16 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4); /* static */
s32 func_80169940(s32 arg0, s16 arg1, ? arg2);      /* static */
? func_80169988(void *arg0, s16 arg1, s16 arg2);    /* static */
void func_80169A50(void *arg0, s16 arg1, Actor *arg2, s16 arg3); /* static */
void func_80169AC0(GlobalContext *arg0, s16 arg1, s16 arg2); /* static */
s16 func_80169BC4(s32 arg0, s16 arg1);              /* static */
? func_80169BF8(s32 arg0, s16 arg1, s16 arg2);      /* static */
u16 func_80169C64(void *arg0, s32 arg1);            /* static */
void func_80169C84(void *arg0, s32 arg1);           /* static */
void func_80169ECC(void *arg0);                     /* static */
void func_80169F78(void *arg0);                     /* static */
void func_80169FDC();                               /* static */
s32 func_80169FFC(void *arg0);                      /* static */
? func_8016A02C(void *arg0, void *arg1, s16 *arg2); /* static */
? func_8016A0AC(GlobalContext *arg0, void *arg1);   /* static */
s32 func_8016A168();                                /* static */
void func_8016A178(s32 arg0, s16 arg1);             /* static */
void func_8016A268(s32 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5); /* static */
static u8 D_801D0D54 = 0;
static s16 D_801D0D58 = 0xFFFF;
static s16 D_801D0D5C = 0;
static s16 D_801D0D64[11] = {
    0xFFFD,
    0xFFFE,
    0xFFFC,
    0xFFFB,
    0xFFF9,
    0xFFF5,
    0xFFF8,
    0xFFF7,
    0xFFFA,
    0xFFF0,
    0,
};
static s16 D_801F6C10;
static ? D_801F6C30;
static u16 *D_801F6D0C;
static void D_801F6D18;
static void D_801F6D38;
static void *D_801F6D4C;
static s8 D_801F6D50[172];
static u8 D_801F6DFD;
static s32 D_801FBB90;
static u8 D_801FBBD4;
s32 D_801D0D50 = 0;
Input *D_801D0D60 = NULL;
Input D_801F6C18;
s32 D_801F6D10;
Color_RGBA8 D_801F6D30;
u8 D_801F6DFC;
OSViMode *D_801FBB88;
s16 D_801FBBCC;
s16 D_801FBBCE;
u8 D_80780000[17920];
u8 D_80784600[352768];
GameInfo *gGameInfo;
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
SceneTableEntry gSceneTable[113];                   /* unable to generate initializer */
u32 gSegments[16];
u16 *gZBufferPtr;

void func_80165460(void **arg0) {
    void *sp3C;
    s32 sp38;
    Gfx *sp34;
    Gfx *sp30;
    PreRender *sp1C;
    GameInfo *temp_v1;
    Gfx *temp_a0;
    Gfx *temp_t8;
    PreRender *temp_a0_2;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_t0;
    void *temp_v1_2;
    u8 phi_v0;
    s32 phi_a2;
    PreRender *phi_a0;

    temp_v1 = gGameInfo;
    temp_t0 = arg0->unk_0;
    if (temp_v1->data[189] != 0) {
        temp_v0 = D_801F6DFD;
        phi_v0 = temp_v0;
        phi_a2 = (s32) temp_v1->data[188];
        if (temp_v0 == 0) {
            D_801F6DFD = 1;
            phi_v0 = 1U & 0xFF;
        }
    } else if (temp_v1->data[187] != 0) {
        temp_v0_2 = D_801F6DFD;
        phi_v0 = temp_v0_2;
        phi_a2 = (s32) temp_v1->data[186];
        if (temp_v0_2 == 0) {
            D_801F6DFD = 1;
            phi_v0 = 1U & 0xFF;
        }
    } else {
        D_801F6DFD = 0;
        phi_v0 = 0 & 0xFF;
        phi_a2 = 0;
    }
    if (phi_v0 != 0) {
        temp_a0 = temp_t0->unk_2B0;
        sp3C = temp_t0;
        arg0 = arg0;
        sp38 = phi_a2;
        sp30 = temp_a0;
        sp34 = Graph_GfxPlusOne(temp_a0);
        temp_v1_2 = temp_t0->unk_2A0;
        temp_t0->unk_2A0 = (void *) (temp_v1_2 + 8);
        temp_v1_2->unk_0 = 0xDE000000;
        temp_v1_2->unk_4 = sp34;
        arg0->unk_18B5C = (s32) temp_t0->unk_2CC;
        arg0->unk_18B60 = (s32) arg0->unk_18E64;
        if (D_801F6DFD == 2) {
            temp_a0_2 = arg0 + 0x18B4C;
            sp1C = temp_a0_2;
            sp3C = temp_t0;
            func_80170AE0(temp_a0_2, &sp34, phi_a2);
            phi_a0 = temp_a0_2;
        } else {
            D_801F6DFD = 2;
            phi_a0 = arg0 + 0x18B4C;
        }
        sp3C = arg0->unk_0;
        func_801705B4(phi_a0, &sp34);
        temp_t8 = sp34;
        sp34 = temp_t8 + 8;
        temp_t8->words.w1 = 0;
        temp_t8->words.w0 = 0xDF000000;
        sp3C = arg0->unk_0;
        Graph_BranchDlist(sp30, sp34);
        arg0->unk_0->unk_2B0 = sp34;
    }
}

void func_80165608(void) {
    gGameInfo->data[187] = 0;
    gGameInfo->data[189] = 0;
    D_801F6DFD = 0;
}

void func_80165630(void) {
    gGameInfo->data[187] = 0;
    gGameInfo->data[189] = 0;
    D_801F6DFD = 0;
}

void func_80165658(s16 arg0) {
    gGameInfo->data[186] = arg0;
}

void func_8016566C(s16 arg0) {
    gGameInfo->data[186] = arg0;
    gGameInfo->data[187] = 1;
}

void func_80165690(void) {
    gGameInfo->data[187] = 0;
}

void func_801656A4(u8 *arg0, u16 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_t5_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    u16 *temp_v0_2;
    u16 *temp_v0_3;
    u16 temp_t2_10;
    u16 temp_t2_11;
    u16 temp_t2_12;
    u16 temp_t2_13;
    u16 temp_t2_14;
    u16 temp_t2_3;
    u16 temp_t2_4;
    u16 temp_t2_5;
    u16 temp_t2_6;
    u16 temp_t2_7;
    u16 temp_t2_8;
    u16 temp_t2_9;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_t1_4;
    u8 *temp_t2;
    u8 *temp_t2_2;
    u8 *temp_t3;
    u8 *temp_t3_2;
    void *temp_v0;
    u16 *phi_v0;
    u8 *phi_t2;
    s32 phi_v1;
    void *phi_v0_2;
    u8 *phi_t2_2;
    s32 phi_v1_2;
    s32 phi_a2;
    u16 *phi_v0_3;
    u8 *phi_t3;
    s32 phi_v1_3;
    u16 *phi_v0_4;
    u8 *phi_t3_2;
    s32 phi_v1_4;
    s32 phi_a2_2;
    u16 *phi_v0_5;
    u8 *phi_s2;
    s32 phi_v1_5;
    u16 *phi_v0_6;
    u8 *phi_s2_2;
    s32 phi_v1_6;
    s32 phi_a2_3;
    void *phi_v0_7;
    u8 *phi_t1;
    s32 phi_v1_7;
    s32 phi_a2_4;
    u8 *phi_t2_3;
    s32 phi_v1_8;
    u8 *phi_t3_3;
    s32 phi_v1_9;
    u8 *phi_s2_3;
    s32 phi_v1_10;
    u8 *phi_t1_2;

    if (arg7 != 4) {
        if (arg7 != 5) {
            if (arg7 != 8) {
                if (arg7 != 0x10) {
                    return;
                }
                phi_a2 = arg4;
                phi_t2_3 = arg0;
                if (arg6 >= arg4) {
                    do {
                        phi_t2 = phi_t2_3;
                        phi_v1 = arg3;
                        phi_v1_8 = arg3;
                        phi_t2_2 = phi_t2_3;
                        if (arg5 >= arg3) {
                            temp_t5 = ((arg5 - arg3) + 1) & 3;
                            temp_t1 = arg1 + (phi_a2 * arg2 * 2);
                            if (temp_t5 != 0) {
                                phi_v0 = temp_t1 + (arg3 * 2);
                                do {
                                    temp_v1 = phi_v1 + 1;
                                    temp_t2 = phi_t2 + 2;
                                    temp_t2->unk_-2 = (u16) *phi_v0;
                                    phi_v0 += 2;
                                    phi_t2 = temp_t2;
                                    phi_v1 = temp_v1;
                                    phi_v1_8 = temp_v1;
                                    phi_t2_2 = temp_t2;
                                    phi_t2_3 = temp_t2;
                                } while ((temp_t5 + arg3) != temp_v1);
                                if ((arg5 + 1) != temp_v1) {
                                    goto block_41;
                                }
                            } else {
block_41:
                                phi_v0_2 = temp_t1 + (phi_v1_8 * 2);
                                phi_v1_2 = phi_v1_8;
                                do {
                                    temp_v1_2 = phi_v1_2 + 4;
                                    temp_t2_2 = phi_t2_2 + 8;
                                    temp_t2_2->unk_-8 = (u16) phi_v0_2->unk_0;
                                    temp_v0 = phi_v0_2 + 8;
                                    temp_t2_2->unk_-6 = (u16) phi_v0_2->unk_2;
                                    temp_t2_2->unk_-4 = (u16) temp_v0->unk_-4;
                                    temp_t2_2->unk_-2 = (u16) temp_v0->unk_-2;
                                    phi_v0_2 = temp_v0;
                                    phi_t2_2 = temp_t2_2;
                                    phi_v1_2 = temp_v1_2;
                                    phi_t2_3 = temp_t2_2;
                                } while ((arg5 + 1) != temp_v1_2);
                            }
                        }
                        temp_a2 = phi_a2 + 1;
                        phi_a2 = temp_a2;
                    } while ((arg6 + 1) != temp_a2);
                }
                /* Duplicate return node #44. Try simplifying control flow for better match */
                return;
            }
            phi_a2_2 = arg4;
            phi_t3_3 = arg0;
            if (arg6 >= arg4) {
                do {
                    phi_t3 = phi_t3_3;
                    phi_v1_3 = arg3;
                    phi_v1_9 = arg3;
                    phi_t3_2 = phi_t3_3;
                    if (arg5 >= arg3) {
                        temp_t5_2 = ((arg5 - arg3) + 1) & 3;
                        temp_t1_2 = arg1 + (phi_a2_2 * arg2 * 2);
                        if (temp_t5_2 != 0) {
                            phi_v0_3 = temp_t1_2 + (arg3 * 2);
                            do {
                                temp_t2_3 = *phi_v0_3;
                                temp_v1_3 = phi_v1_3 + 1;
                                temp_t3 = phi_t3 + 1;
                                temp_t3->unk_-1 = (s8) ((u32) ((((((u32) temp_t2_3 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_3 >> 6) & 0x1F) * 4) + (((u32) temp_t2_3 >> 1) & 0x1F)) * 0xFF) / 0xD9U);
                                phi_v0_3 += 2;
                                phi_t3 = temp_t3;
                                phi_v1_3 = temp_v1_3;
                                phi_v1_9 = temp_v1_3;
                                phi_t3_2 = temp_t3;
                                phi_t3_3 = temp_t3;
                            } while ((temp_t5_2 + arg3) != temp_v1_3);
                            if ((arg5 + 1) != temp_v1_3) {
                                goto block_30;
                            }
                        } else {
block_30:
                            phi_v0_4 = temp_t1_2 + (phi_v1_9 * 2);
                            phi_v1_4 = phi_v1_9;
                            do {
                                temp_t2_4 = *phi_v0_4;
                                temp_v1_4 = phi_v1_4 + 4;
                                temp_t3_2 = phi_t3_2 + 4;
                                temp_v0_2 = phi_v0_4 + 8;
                                temp_t3_2->unk_-4 = (s8) ((u32) ((((((u32) temp_t2_4 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_4 >> 6) & 0x1F) * 4) + (((u32) temp_t2_4 >> 1) & 0x1F)) * 0xFF) / 0xD9U);
                                temp_t2_5 = temp_v0_2->unk_-6;
                                temp_t3_2->unk_-3 = (s8) ((u32) ((((((u32) temp_t2_5 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_5 >> 6) & 0x1F) * 4) + (((u32) temp_t2_5 >> 1) & 0x1F)) * 0xFF) / 0xD9U);
                                temp_t2_6 = temp_v0_2->unk_-4;
                                temp_t3_2->unk_-2 = (s8) ((u32) ((((((u32) temp_t2_6 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_6 >> 6) & 0x1F) * 4) + (((u32) temp_t2_6 >> 1) & 0x1F)) * 0xFF) / 0xD9U);
                                temp_t2_7 = temp_v0_2->unk_-2;
                                temp_t3_2->unk_-1 = (s8) ((u32) ((((((u32) temp_t2_7 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_7 >> 6) & 0x1F) * 4) + (((u32) temp_t2_7 >> 1) & 0x1F)) * 0xFF) / 0xD9U);
                                phi_v0_4 = temp_v0_2;
                                phi_t3_2 = temp_t3_2;
                                phi_v1_4 = temp_v1_4;
                                phi_t3_3 = temp_t3_2;
                            } while ((arg5 + 1) != temp_v1_4);
                        }
                    }
                    temp_a2_2 = phi_a2_2 + 1;
                    phi_a2_2 = temp_a2_2;
                } while ((arg6 + 1) != temp_a2_2);
                return;
            }
            /* Duplicate return node #44. Try simplifying control flow for better match */
            return;
        }
        phi_a2_3 = arg4;
        phi_s2_3 = arg0;
        if (arg6 >= arg4) {
            do {
                phi_s2 = phi_s2_3;
                phi_v1_5 = arg3;
                phi_v1_10 = arg3;
                phi_s2_2 = phi_s2_3;
                if (arg5 >= arg3) {
                    temp_t5_3 = ((arg5 - arg3) + 1) & 3;
                    temp_t1_3 = arg1 + (phi_a2_3 * arg2 * 2);
                    if (temp_t5_3 != 0) {
                        phi_v0_5 = temp_t1_3 + (arg3 * 2);
                        do {
                            temp_t2_8 = *phi_v0_5;
                            temp_v1_5 = phi_v1_5 + 1;
                            temp_s2 = phi_s2 + 1;
                            temp_s2->unk_-1 = (s8) (((u32) ((((((u32) temp_t2_8 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_8 >> 6) & 0x1F) * 4) + (((u32) temp_t2_8 >> 1) & 0x1F)) * 0xFF) / 0xD9U) & 0xF8);
                            phi_v0_5 += 2;
                            phi_s2 = temp_s2;
                            phi_v1_5 = temp_v1_5;
                            phi_v1_10 = temp_v1_5;
                            phi_s2_2 = temp_s2;
                            phi_s2_3 = temp_s2;
                        } while ((temp_t5_3 + arg3) != temp_v1_5);
                        if ((arg5 + 1) != temp_v1_5) {
                            goto block_19;
                        }
                    } else {
block_19:
                        phi_v0_6 = temp_t1_3 + (phi_v1_10 * 2);
                        phi_v1_6 = phi_v1_10;
                        do {
                            temp_t2_9 = *phi_v0_6;
                            temp_v1_6 = phi_v1_6 + 4;
                            temp_s2_2 = phi_s2_2 + 4;
                            temp_v0_3 = phi_v0_6 + 8;
                            temp_s2_2->unk_-4 = (s8) (((u32) ((((((u32) temp_t2_9 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_9 >> 6) & 0x1F) * 4) + (((u32) temp_t2_9 >> 1) & 0x1F)) * 0xFF) / 0xD9U) & 0xF8);
                            temp_t2_10 = temp_v0_3->unk_-6;
                            temp_s2_2->unk_-3 = (s8) (((u32) ((((((u32) temp_t2_10 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_10 >> 6) & 0x1F) * 4) + (((u32) temp_t2_10 >> 1) & 0x1F)) * 0xFF) / 0xD9U) & 0xF8);
                            temp_t2_11 = temp_v0_3->unk_-4;
                            temp_s2_2->unk_-2 = (s8) (((u32) ((((((u32) temp_t2_11 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_11 >> 6) & 0x1F) * 4) + (((u32) temp_t2_11 >> 1) & 0x1F)) * 0xFF) / 0xD9U) & 0xF8);
                            temp_t2_12 = temp_v0_3->unk_-2;
                            temp_s2_2->unk_-1 = (s8) (((u32) ((((((u32) temp_t2_12 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_12 >> 6) & 0x1F) * 4) + (((u32) temp_t2_12 >> 1) & 0x1F)) * 0xFF) / 0xD9U) & 0xF8);
                            phi_v0_6 = temp_v0_3;
                            phi_s2_2 = temp_s2_2;
                            phi_v1_6 = temp_v1_6;
                            phi_s2_3 = temp_s2_2;
                        } while ((arg5 + 1) != temp_v1_6);
                    }
                }
                temp_a2_3 = phi_a2_3 + 1;
                phi_a2_3 = temp_a2_3;
            } while ((arg6 + 1) != temp_a2_3);
            return;
        }
        /* Duplicate return node #44. Try simplifying control flow for better match */
        return;
    }
    phi_a2_4 = arg4;
    phi_t1_2 = arg0;
    if (arg6 >= arg4) {
        do {
            phi_t1 = phi_t1_2;
            phi_v1_7 = arg3;
            if (arg5 >= arg3) {
                phi_v0_7 = arg1 + (phi_a2_4 * arg2 * 2) + (arg3 * 2);
                do {
                    temp_t2_13 = phi_v0_7->unk_0;
                    temp_v1_7 = phi_v1_7 + 2;
                    temp_t2_14 = phi_v0_7->unk_2;
                    temp_t1_4 = phi_t1 + 1;
                    temp_t1_4->unk_-1 = (s8) ((((u32) ((((((u32) temp_t2_13 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_13 >> 6) & 0x1F) * 4) + (((u32) temp_t2_13 >> 1) & 0x1F)) * 0xF) / 0xD9U) * 0x10) | ((u32) ((((((u32) temp_t2_14 >> 0xB) & 0x1F) * 2) + ((((u32) temp_t2_14 >> 6) & 0x1F) * 4) + (((u32) temp_t2_14 >> 1) & 0x1F)) * 0xF) / 0xD9U));
                    phi_v0_7 += 4;
                    phi_t1 = temp_t1_4;
                    phi_v1_7 = temp_v1_7;
                    phi_t1_2 = temp_t1_4;
                } while (arg5 >= temp_v1_7);
            }
            temp_a2_4 = phi_a2_4 + 1;
            phi_a2_4 = temp_a2_4;
        } while ((arg6 + 1) != temp_a2_4);
    }
}

void func_80165DB8(s16 arg0) {
    gGameInfo->data[188] = arg0;
}

void func_80165DCC(s16 arg0) {
    gGameInfo->data[188] = arg0;
    gGameInfo->data[189] = 1;
}

void func_80165DF0(void) {
    gGameInfo->data[189] = 0;
}

void func_80165E04(void) {
    gGameInfo->data[185] = 1;
}

void func_80165E1C(PreRender *arg0) {
    PreRender_ApplyFilters(arg0);
    func_801656A4(D_80780000, arg0->fbufSave, 0x140, 0x50, 0x40, 0xEF, 0xAF, 8);
}

u8 func_80165E7C(GlobalContext *arg0, u8 arg1) {
    u8 phi_v1;

    phi_v1 = arg1;
    if (arg1 == 0x14) {
        phi_v1 = 2U;
        if (gSaveContext.isNight == 0) {
            phi_v1 = 3U;
        }
    }
    if (phi_v1 != arg1) {
        arg0->unk_1887F = phi_v1;
    }
    return phi_v1;
}

void func_80165EC0(GlobalContext *arg0, u32 arg1) {
    s32 sp20;
    void *sp1C;
    void *temp_a0;
    void *temp_a3;
    s16 phi_v1;
    void *phi_a3;
    s8 phi_v0;

    temp_a3 = arg0 + 0x18BF0;
    temp_a0 = temp_a3;
    sp1C = temp_a3;
    arg0 = arg0;
    bzero(temp_a0, 0x258);
    phi_v1 = (s16) arg1;
    phi_a3 = temp_a3;
    phi_v0 = (s8) -1;
    if ((arg1 & 0x40) != 0) {
        phi_v0 = 3;
    } else if ((arg1 & 0x78) == 0x20) {
        phi_v0 = 4;
    } else if ((arg1 & 0x60) == 0) {
        switch (arg1) {
        case 1:
            phi_v0 = 1;
            break;
        case 0:
        case 8:
            phi_v0 = 2;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 13:
        case 17:
        case 18:
        case 19:
            phi_v0 = 0;
            break;
        case 9:
        case 10:
            arg0->unk_18B4A = 4;
            break;
        case 11:
            arg0->unk_18B4A = 0xA;
            break;
        case 12:
            arg0->unk_18B4A = 7;
            break;
        case 14:
            arg0->unk_18B4A = 0xC;
            break;
        case 15:
            arg0->unk_18B4A = 0xE;
            break;
        case 16:
            arg0->unk_18B4A = 0x10;
            break;
        case 21:
            phi_v0 = 5;
            break;
        case 22:
            phi_v0 = 6;
            break;
        default:
            sp20 = -1;
            sp1C = temp_a3;
            __assert("../z_play.c", 0x58CU);
            goto block_20;
        }
    } else {
        sp20 = -1;
        sp1C = temp_a3;
        __assert("../z_play.c", 0x58FU);
block_20:
        phi_v1 = (s16) arg1;
        phi_a3 = sp1C;
        phi_v0 = (s8) -1;
    }
    phi_a3->unk_0 = phi_v1;
    phi_a3->unk_2 = phi_v0;
    if (phi_v0 != -1) {
        func_80163C90(phi_a3);
    }
}

void func_80166060(GlobalContext *arg0) {
    GlobalContext *temp_a1;
    void *temp_a0;
    GlobalContext *phi_a1;

    temp_a1 = arg0;
    phi_a1 = temp_a1;
    if (temp_a1->unk_18BF2 != -1) {
        temp_a0 = temp_a1 + 0x18BF0;
        arg0 = temp_a1;
        func_80163D80(temp_a0, temp_a1);
        phi_a1 = arg0;
    }
    phi_a1->unk_18BF0 = -1;
}

Gfx *func_801660B8(GlobalContext *globalCtx, Gfx *gfx) {
    s32 temp_f16;
    s32 phi_v1;

    temp_f16 = (s32) ((f32) globalCtx->lightCtx.unkC * 0.078125f);
    phi_v1 = temp_f16;
    if (temp_f16 < 0x3E9) {
        phi_v1 = 0x3E8;
    }
    return Gfx_SetFogWithSync(gfx, (s32) globalCtx->lightCtx.unk7, (s32) globalCtx->lightCtx.unk8, (s32) globalCtx->lightCtx.unk9, 0, (s32) globalCtx->lightCtx.unkA, phi_v1);
}

void Play_Fini(GlobalContext *globalCtx) {
    GraphicsContext *sp20;
    GameInfo *temp_v0;
    GraphicsContext *temp_v1;
    u8 temp_v0_2;
    GameInfo *phi_v0;
    u8 phi_v0_2;

    temp_v1 = globalCtx->state.gfxCtx;
    if (D_801F6DFC != 0) {
        sp20 = temp_v1;
        func_8010C1B0();
        func_80178750();
        temp_v1->framebuffer = get_framebuffer((s32) temp_v1->framebufferCounter % 2);
        temp_v1->zbuffer = get_zbuffer();
        temp_v1->unk274 = D_801FBB88;
        temp_v1->viConfigFeatures = gViConfigFeatures;
        temp_v1->viConfigXScale = gViConfigXScale;
        temp_v1->unk_2DA = 1;
        temp_v1->viConfigYScale = gViConfigYScale;
        D_801F6DFC = 0;
    }
    func_8016FC98(D_801F6D50);
    globalCtx->state.gfxCtx->unk_2DC = 0;
    globalCtx->state.gfxCtx->unk_2E0 = 0;
    func_80165630();
    temp_v0 = gGameInfo;
    phi_v0 = temp_v0;
    if (temp_v0->data[190] != 0) {
        PreRender_ApplyFiltersSlowlyDestroy(&globalCtx->pauseBgPreRender);
        gGameInfo->data[190] = 0;
        phi_v0 = gGameInfo;
    }
    phi_v0->data[185] = 0;
    PreRender_Destroy(&globalCtx->pauseBgPreRender);
    globalCtx->unk_18E58 = 0;
    globalCtx->unk_18E5C = 0;
    globalCtx->unk_18E60 = 0;
    globalCtx->unk_18E64 = 0;
    globalCtx->unk_18E68 = 0;
    Effect_DestroyAll(globalCtx);
    EffectSS_Clear(globalCtx);
    CollisionCheck_DestroyContext(globalCtx, &globalCtx->colChkCtx);
    if (D_801F6D10 == 3) {
        func_8016424C(&D_801F6C30);
        D_801F6D10 = 0;
    }
    if ((globalCtx->unk_18B4A == 3) || (D_801D0D54 != 0)) {
        globalCtx->unk_18E24(&globalCtx->unk_18BF8);
        func_80166060(globalCtx);
        globalCtx->unk_18B4A = 0;
    }
    ShrinkWindow_Fini();
    TransitionFade_Destroy(&globalCtx->unk_18E48);
    func_80141900(&D_801F6D18);
    func_80140EA0(D_801F6D4C);
    temp_v0_2 = gSaveContext.weekEventReg[92];
    D_801F6D4C = NULL;
    phi_v0_2 = temp_v0_2;
    if ((temp_v0_2 & 0x80) != 0) {
        func_800BA9B4(&globalCtx->actorCtx, globalCtx);
        phi_v0_2 = gSaveContext.weekEventReg[92];
    }
    gSaveContext.weekEventReg[92] = phi_v0_2 & 0x7F;
    func_80121F94(globalCtx);
    func_80163A38(globalCtx);
    func_8016388C();
    MainHeap_Cleanup();
}

void func_801663C4(u8 *arg0, s8 *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t2_3;
    s32 temp_t2_4;
    s32 temp_t2_5;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_lo_3;
    u32 temp_lo_4;
    u32 temp_lo_5;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    s32 phi_a3;
    s8 phi_t0;
    u8 *phi_v0;
    s8 *phi_v1;
    s32 phi_t1;
    s32 phi_a3_2;
    s8 phi_t0_2;
    u8 *phi_v0_2;
    s8 *phi_v1_2;
    s32 phi_a1;
    s32 phi_t0_3;
    s8 *phi_v1_3;
    s32 phi_a1_2;
    s32 phi_t0_4;
    s8 *phi_v1_4;
    s32 phi_a1_3;
    s32 phi_t0_5;
    s8 *phi_v1_5;
    s32 phi_t1_2;
    s32 phi_a3_3;
    s8 phi_t0_6;
    s8 *phi_v1_6;
    s32 phi_a1_4;
    s8 phi_t0_7;
    s8 *phi_v1_7;
    s32 phi_a1_5;
    s8 phi_t0_8;
    s8 *phi_v1_8;

    phi_a3 = 8;
    phi_t0 = 0;
    phi_v0 = arg0;
    phi_v1 = arg1;
    phi_t1 = 0;
    phi_a3_3 = 8;
    phi_t0_6 = 0;
    phi_v1_6 = arg1;
    phi_a3_2 = 8;
    phi_t0_2 = 0;
    phi_v0_2 = arg0;
    phi_v1_2 = arg1;
    phi_t1_2 = 0;
    if (arg2 != 0) {
        temp_a0 = arg2 & 3;
        if (temp_a0 != 0) {
            do {
                temp_t2 = phi_a3 - 5;
                temp_v0 = phi_v0 + 1;
                temp_t1 = phi_t1 + 1;
                temp_lo = (u32) ((*phi_v0 * 0x1F) + 0x80) / 0xFFU;
                phi_v0 = temp_v0;
                phi_t1 = temp_t1;
                phi_a1_4 = temp_t2;
                phi_v1_7 = phi_v1;
                phi_v0_2 = temp_v0;
                phi_t1_2 = temp_t1;
                if (phi_a3 >= 6) {
                    phi_t0_7 = phi_t0 | (temp_lo << temp_t2);
                } else {
                    *phi_v1 = phi_t0 | (temp_lo >> -temp_t2);
                    temp_a1 = temp_t2 + 8;
                    phi_a1_4 = temp_a1;
                    phi_t0_7 = temp_lo << temp_a1;
                    phi_v1_7 = phi_v1 + 1;
                }
                phi_a3 = phi_a1_4;
                phi_t0 = phi_t0_7;
                phi_v1 = phi_v1_7;
                phi_a3_3 = phi_a1_4;
                phi_t0_6 = phi_t0_7;
                phi_v1_6 = phi_v1_7;
                phi_a3_2 = phi_a1_4;
                phi_t0_2 = phi_t0_7;
                phi_v1_2 = phi_v1_7;
            } while (temp_a0 != temp_t1);
            if (temp_t1 != arg2) {
                goto block_8;
            }
        } else {
block_8:
            do {
                temp_t2_2 = phi_a3_2 - 5;
                temp_t1_2 = phi_t1_2 + 4;
                temp_v0_2 = phi_v0_2 + 1;
                temp_lo_2 = (u32) ((*phi_v0_2 * 0x1F) + 0x80) / 0xFFU;
                phi_a1 = temp_t2_2;
                phi_v1_3 = phi_v1_2;
                phi_t1_2 = temp_t1_2;
                if (phi_a3_2 >= 6) {
                    phi_t0_3 = phi_t0_2 | (temp_lo_2 << temp_t2_2);
                } else {
                    *phi_v1_2 = phi_t0_2 | (temp_lo_2 >> -temp_t2_2);
                    temp_a1_2 = temp_t2_2 + 8;
                    phi_a1 = temp_a1_2;
                    phi_t0_3 = temp_lo_2 << temp_a1_2;
                    phi_v1_3 = phi_v1_2 + 1;
                }
                temp_t2_3 = phi_a1 - 5;
                temp_v0_3 = temp_v0_2 + 1;
                temp_lo_3 = (u32) ((*temp_v0_2 * 0x1F) + 0x80) / 0xFFU;
                phi_a1_2 = temp_t2_3;
                phi_v1_4 = phi_v1_3;
                if (phi_a1 >= 6) {
                    phi_t0_4 = phi_t0_3 | (temp_lo_3 << temp_t2_3);
                } else {
                    *phi_v1_3 = phi_t0_3 | (temp_lo_3 >> -temp_t2_3);
                    temp_a1_3 = temp_t2_3 + 8;
                    phi_a1_2 = temp_a1_3;
                    phi_t0_4 = temp_lo_3 << temp_a1_3;
                    phi_v1_4 = phi_v1_3 + 1;
                }
                temp_t2_4 = phi_a1_2 - 5;
                temp_v0_4 = temp_v0_3 + 1;
                temp_lo_4 = (u32) ((*temp_v0_3 * 0x1F) + 0x80) / 0xFFU;
                phi_a1_3 = temp_t2_4;
                phi_v1_5 = phi_v1_4;
                if (phi_a1_2 >= 6) {
                    phi_t0_5 = phi_t0_4 | (temp_lo_4 << temp_t2_4);
                } else {
                    *phi_v1_4 = phi_t0_4 | (temp_lo_4 >> -temp_t2_4);
                    temp_a1_4 = temp_t2_4 + 8;
                    phi_a1_3 = temp_a1_4;
                    phi_t0_5 = temp_lo_4 << temp_a1_4;
                    phi_v1_5 = phi_v1_4 + 1;
                }
                temp_t2_5 = phi_a1_3 - 5;
                temp_lo_5 = (u32) ((*temp_v0_4 * 0x1F) + 0x80) / 0xFFU;
                phi_v0_2 = temp_v0_4 + 1;
                phi_a1_5 = temp_t2_5;
                phi_v1_8 = phi_v1_5;
                if (phi_a1_3 >= 6) {
                    phi_t0_8 = phi_t0_5 | (temp_lo_5 << temp_t2_5);
                } else {
                    *phi_v1_5 = phi_t0_5 | (temp_lo_5 >> -temp_t2_5);
                    temp_a1_5 = temp_t2_5 + 8;
                    phi_a1_5 = temp_a1_5;
                    phi_t0_8 = temp_lo_5 << temp_a1_5;
                    phi_v1_8 = phi_v1_5 + 1;
                }
                phi_a3_2 = phi_a1_5;
                phi_t0_2 = phi_t0_8;
                phi_v1_2 = phi_v1_8;
                phi_a3_3 = phi_a1_5;
                phi_t0_6 = phi_t0_8;
                phi_v1_6 = phi_v1_8;
            } while (temp_t1_2 != arg2);
        }
    }
    if (phi_a3_3 < 8) {
        *phi_v1_6 = phi_t0_6;
    }
}

void func_80166644(u8 *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_t1;
    s32 temp_t1_2;
    u8 *temp_t0;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_a3_3;
    u8 temp_a3_4;
    u8 temp_a3_5;
    u8 temp_a3_6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    s32 phi_v1;
    u32 phi_t2;
    void *phi_v0;
    s32 phi_t1;
    s32 phi_v1_2;
    u32 phi_t2_2;
    void *phi_v0_2;
    s32 phi_a0;
    u32 phi_t2_3;
    s32 phi_a0_2;
    u32 phi_t2_4;
    s32 phi_a0_3;
    u32 phi_t2_5;
    s32 phi_t1_2;
    s32 phi_a0_4;
    u32 phi_a3;
    u8 *phi_t0;
    s32 phi_a0_5;
    u32 phi_a3_2;
    u8 *phi_t0_2;
    u32 phi_a3_3;
    u8 *phi_t0_3;
    u32 phi_a3_4;
    u8 *phi_t0_4;
    u32 phi_a3_5;
    u8 *phi_t0_5;
    u32 phi_a3_6;
    u8 *phi_t0_6;

    temp_a3 = *arg0;
    temp_t0 = arg0 + 1;
    phi_v1 = 8;
    phi_v0 = arg1;
    phi_t1 = 0;
    phi_a3 = (u32) temp_a3;
    phi_t0 = temp_t0;
    phi_v1_2 = 8;
    phi_v0_2 = arg1;
    phi_t1_2 = 0;
    phi_a3_2 = (u32) temp_a3;
    phi_t0_2 = temp_t0;
    if (arg2 != 0) {
        temp_a0 = arg2 & 3;
        if (temp_a0 != 0) {
            do {
                temp_a1 = phi_v1 - 5;
                phi_a0_4 = temp_a1;
                phi_a3_6 = phi_a3;
                phi_t0_6 = phi_t0;
                if (phi_v1 >= 6) {
                    phi_t2 = phi_a3 >> temp_a1;
                } else {
                    temp_a3_2 = *phi_t0;
                    temp_a0_2 = temp_a1 + 8;
                    phi_t2 = (phi_a3 << -temp_a1) | ((u32) temp_a3_2 >> temp_a0_2);
                    phi_a0_4 = temp_a0_2;
                    phi_a3_6 = (u32) temp_a3_2;
                    phi_t0_6 = phi_t0 + 1;
                }
                temp_t1 = phi_t1 + 1;
                temp_v0 = phi_v0 + 1;
                temp_v0->unk_-1 = (s8) ((u32) ((phi_t2 & 0x1F) * 0xFF) / 0x1FU);
                phi_v1 = phi_a0_4;
                phi_v0 = temp_v0;
                phi_t1 = temp_t1;
                phi_a3 = phi_a3_6;
                phi_t0 = phi_t0_6;
                phi_v1_2 = phi_a0_4;
                phi_v0_2 = temp_v0;
                phi_t1_2 = temp_t1;
                phi_a3_2 = phi_a3_6;
                phi_t0_2 = phi_t0_6;
            } while (temp_a0 != temp_t1);
            if (temp_t1 != arg2) {
                goto block_8;
            }
        } else {
block_8:
            do {
                temp_a1_2 = phi_v1_2 - 5;
                phi_a0 = temp_a1_2;
                phi_a3_3 = phi_a3_2;
                phi_t0_3 = phi_t0_2;
                if (phi_v1_2 >= 6) {
                    phi_t2_2 = phi_a3_2 >> temp_a1_2;
                } else {
                    temp_a3_3 = *phi_t0_2;
                    temp_a0_3 = temp_a1_2 + 8;
                    phi_t2_2 = (phi_a3_2 << -temp_a1_2) | ((u32) temp_a3_3 >> temp_a0_3);
                    phi_a0 = temp_a0_3;
                    phi_a3_3 = (u32) temp_a3_3;
                    phi_t0_3 = phi_t0_2 + 1;
                }
                temp_a1_3 = phi_a0 - 5;
                temp_v0_2 = phi_v0_2 + 1;
                temp_v0_2->unk_-1 = (s8) ((u32) ((phi_t2_2 & 0x1F) * 0xFF) / 0x1FU);
                phi_a0_2 = temp_a1_3;
                phi_a3_4 = phi_a3_3;
                phi_t0_4 = phi_t0_3;
                if (phi_a0 >= 6) {
                    phi_t2_3 = phi_a3_3 >> temp_a1_3;
                } else {
                    temp_a3_4 = *phi_t0_3;
                    temp_a0_4 = temp_a1_3 + 8;
                    phi_t2_3 = (phi_a3_3 << -temp_a1_3) | ((u32) temp_a3_4 >> temp_a0_4);
                    phi_a0_2 = temp_a0_4;
                    phi_a3_4 = (u32) temp_a3_4;
                    phi_t0_4 = phi_t0_3 + 1;
                }
                temp_a1_4 = phi_a0_2 - 5;
                temp_v0_3 = temp_v0_2 + 1;
                temp_v0_3->unk_-1 = (s8) ((u32) ((phi_t2_3 & 0x1F) * 0xFF) / 0x1FU);
                phi_a0_3 = temp_a1_4;
                phi_a3_5 = phi_a3_4;
                phi_t0_5 = phi_t0_4;
                if (phi_a0_2 >= 6) {
                    phi_t2_4 = phi_a3_4 >> temp_a1_4;
                } else {
                    temp_a3_5 = *phi_t0_4;
                    temp_a0_5 = temp_a1_4 + 8;
                    phi_t2_4 = (phi_a3_4 << -temp_a1_4) | ((u32) temp_a3_5 >> temp_a0_5);
                    phi_a0_3 = temp_a0_5;
                    phi_a3_5 = (u32) temp_a3_5;
                    phi_t0_5 = phi_t0_4 + 1;
                }
                temp_a1_5 = phi_a0_3 - 5;
                temp_v0_4 = temp_v0_3 + 1;
                temp_v0_4->unk_-1 = (s8) ((u32) ((phi_t2_4 & 0x1F) * 0xFF) / 0x1FU);
                phi_a0_5 = temp_a1_5;
                phi_a3_2 = phi_a3_5;
                phi_t0_2 = phi_t0_5;
                if (phi_a0_3 >= 6) {
                    phi_t2_5 = phi_a3_5 >> temp_a1_5;
                } else {
                    temp_a3_6 = *phi_t0_5;
                    temp_a0_6 = temp_a1_5 + 8;
                    phi_t2_5 = (phi_a3_5 << -temp_a1_5) | ((u32) temp_a3_6 >> temp_a0_6);
                    phi_a0_5 = temp_a0_6;
                    phi_a3_2 = (u32) temp_a3_6;
                    phi_t0_2 = phi_t0_5 + 1;
                }
                temp_t1_2 = phi_t1_2 + 4;
                temp_v0_5 = temp_v0_4 + 1;
                temp_v0_5->unk_-1 = (s8) ((u32) ((phi_t2_5 & 0x1F) * 0xFF) / 0x1FU);
                phi_v1_2 = phi_a0_5;
                phi_v0_2 = temp_v0_5;
                phi_t1_2 = temp_t1_2;
            } while (temp_t1_2 != arg2);
        }
    }
}

f32 func_801668B4(Vec3f *arg0, s32 *arg1, s32 *arg2) {
    f32 sp38;
    s32 sp34;
    ? sp30;
    void *sp2C;
    f32 *temp_t7;
    void *temp_a1;

    temp_a1 = arg0 + 0x830;
    temp_t7 = &sp38;
    sp38 = arg0->unk_1CCC->unk_28;
    sp2C = temp_a1;
    if (func_800C9EBC(temp_a1, arg1->unk_0, arg1->unk_8, temp_t7, &sp34, &sp30) == 0) {
        return -32000.0f;
    }
    if (sp38 < arg1->unk_4) {
        return -32000.0f;
    }
    *arg2 = func_800CA6D8(sp2C, sp34);
    return sp38;
}

void func_80166968(GlobalContext *globalCtx, Camera *camera) {
    s32 sp28;
    Actor *sp24;
    Camera *temp_a3;
    Vec3f *temp_a1;
    s16 temp_t1;
    s16 temp_t6;
    s16 temp_t7;
    s16 temp_v0;

    temp_a3 = camera;
    temp_a1 = &temp_a3->eye;
    sp24 = globalCtx->actorCtx.actorList[2].first;
    temp_t7 = temp_a3->flags2;
    camera = temp_a3;
    D_801D0D5C = temp_t7 & 0x100;
    if (func_801668B4(temp_a1, &sp28, (s32 *) temp_a3) != -32000.0f) {
        if (D_801D0D5C == 0) {
            Camera_SetFlags(camera, 0x100);
            D_801D0D58 = -1;
            Quake2_SetType(0x10);
            Quake2_SetCountdown(0x50);
        }
        func_801A3EC0(0x20);
        func_800F6834(globalCtx, sp28);
        temp_t1 = D_801D0D58;
        if ((temp_t1 == -1) || (Quake_GetCountdown(temp_t1) == 0xA)) {
            temp_v0 = Quake_Add(camera, 5U);
            D_801D0D58 = temp_v0;
            if (temp_v0 != 0) {
                Quake_SetSpeed(D_801D0D58, 0x226);
                Quake_SetQuakeValues(D_801D0D58, 1, 1, 0xB4, (s16) 0);
                Quake_SetCountdown(D_801D0D58, 0x3E8);
            }
        }
        if ((sp24->unk_A74 & 0x8000) != 0) {
            Quake2_SetType(8);
            Quake2_ClearType(4);
            return;
        }
        Quake2_SetType(4);
        Quake2_ClearType(8);
        return;
    }
    if (D_801D0D5C != 0) {
        Camera_ClearFlags(camera, 0x100);
    }
    Quake2_ClearType(4);
    Quake2_ClearType(0x10);
    Quake2_ClearType(8);
    temp_t6 = D_801D0D58;
    if (temp_t6 != 0) {
        Quake_RemoveFromIdx(temp_t6);
    }
    func_800F694C(globalCtx);
    func_801A3EC0(0);
}

void func_80166B30(GlobalContext *globalCtx) {
    s16 sp62;
    s32 sp54;
    void *sp1C;
    ? *sp18;
    ? (*temp_v0_6)(? *, s32, GlobalContext *);
    ? *temp_a0;
    ? *temp_a0_3;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_4;
    GlobalContext *temp_a0_5;
    GlobalContext *temp_a2;
    GlobalContext *temp_a2_2;
    GlobalContext *temp_a2_3;
    s16 temp_t5;
    s16 temp_t7;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v1;
    s32 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_v0;
    u8 temp_v0_5;
    u8 temp_v0_9;
    void *temp_a3;
    void *temp_a3_2;
    GlobalContext *phi_a2;
    GlobalContext *phi_a2_2;
    GlobalContext *phi_a2_3;
    void *phi_a3;
    s16 phi_v1;
    u8 phi_v0;
    void *phi_a3_2;
    u8 phi_v0_2;
    s32 phi_a1;
    GlobalContext *phi_a2_4;
    GlobalContext *phi_a2_5;
    ? phi_a1_2;
    u8 phi_v0_3;
    GlobalContext *phi_a2_6;
    void *phi_a3_3;
    void *phi_at;
    GlobalContext *phi_a2_7;
    void *phi_v1_2;

    temp_a3 = globalCtx + 0x18000;
    temp_v0 = globalCtx->unk_18B4A;
    phi_a2_3 = globalCtx;
    phi_a3 = temp_a3;
    phi_v0_3 = temp_v0;
    phi_a2_6 = globalCtx;
    phi_a3_3 = temp_a3;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {

                } else {
                    temp_a0 = &globalCtx->unk_18BF8;
                    sp18 = temp_a0;
                    globalCtx = globalCtx;
                    sp1C = temp_a3;
                    temp_a2 = globalCtx;
                    phi_a2 = temp_a2;
                    phi_a2_2 = temp_a2;
                    if (temp_a3->unk_E40(temp_a0) != 0) {
                        phi_v1_2 = sp1C;
                        if (sp1C->unk_875 != -0x14) {
                            if (sp1C->unk_BF0 == 0x15) {
                                D_801D0D54 = 0;
                            }
                            temp_v0_2 = gSaveContext.gameMode;
                            if (temp_v0_2 == 4) {
                                temp_a2->state.running = 0;
                                temp_a2->state.nextGameStateInit = Opening_Init;
                                temp_a2->state.nextGameStateSize = 0x210;
                            } else if (temp_v0_2 != 2) {
                                temp_a2->state.running = 0;
                                temp_a2->state.nextGameStateInit = Play_Init;
                                temp_a2->state.nextGameStateSize = 0x19258;
                                gSaveContext.entranceIndex = (u32) sp1C->unk_87A;
                                if (gSaveContext.minigameState == 1) {
                                    gSaveContext.minigameState = 3;
                                }
                            } else {
                                temp_a2->state.running = 0;
                                temp_a2->state.nextGameStateInit = FileChoose_Init;
                                temp_a2->state.nextGameStateSize = 0x24558;
                            }
                        } else {
                            if (sp1C->unk_BF0 == 0x15) {
                                D_801D0D54 = 1;
                            } else {
                                globalCtx = temp_a2;
                                sp1C->unk_E24(sp18);
                                func_80166060(globalCtx);
                                phi_a2 = globalCtx;
                            }
                            phi_a2->unk_18B4A = 0;
                            phi_a2_2 = phi_a2;
                            phi_v1_2 = sp1C;
                            if (D_801F6D10 == 3) {
                                globalCtx = phi_a2;
                                func_8016424C(&D_801F6C30);
                                D_801F6D10 = 0;
                                Game_SetFramerateDivisor((GameState *) globalCtx, 3);
                                phi_a2_2 = globalCtx;
                                phi_v1_2 = sp1C;
                            }
                        }
                        phi_a2_2->sceneLoadFlag = 0;
                        phi_a2_6 = phi_a2_2;
                    } else {
                        temp_a1 = temp_a2->state.framerateDivisor;
                        globalCtx = temp_a2;
                        sp1C->unk_E28(sp18, temp_a1, temp_a2);
                        phi_v1_2 = sp1C;
                        phi_a2_6 = globalCtx;
                    }
                    phi_v0_3 = phi_v1_2->unk_B4A;
                    phi_a3_3 = sp1C;
                }
            } else {
                goto block_30;
            }
        } else {
            sp1C = temp_a3;
            if (temp_a3->unk_875 != -0x14) {
                sp62 = 0;
                globalCtx = globalCtx;
                sp1C = temp_a3;
                Interface_ChangeAlpha(1U);
                temp_v0_3 = gSaveContext.nextCutsceneIndex;
                if ((s32) temp_v0_3 >= 0xFFF0) {
                    sp62 = (temp_v0_3 & 0xF) + 1;
                }
                globalCtx = globalCtx;
                if ((((Entrance_GetTransitionFlags((sp1C->unk_87A + sp62) & 0xFFFF) & 0x8000) == 0) || ((temp_v0_4 = sp1C->unk_87A, (temp_v0_4 == 0x3210)) && ((gSaveContext.weekEventReg[33] & 0x80) == 0)) || ((temp_v0_4 == 0x7A10) && ((gSaveContext.weekEventReg[20] & 2) == 0)) || ((temp_v0_4 == 0x5420) && ((gSaveContext.weekEventReg[55] & 0x80) == 0)) || ((temp_v0_4 == 0xA010) && ((gSaveContext.weekEventReg[52] & 0x20) == 0))) && ((temp_a0_2 = globalCtx, globalCtx = globalCtx, (func_800FE590(temp_a0_2) == 0)) || (globalCtx = globalCtx, (Entrance_GetSceneNum((sp1C->unk_87A + sp62) & 0xFFFF) < 0)) || (globalCtx = globalCtx, (func_801A8A50(0) != 0x57)))) {
                    globalCtx = globalCtx;
                    func_801A4058(0x14);
                    gSaveContext.seqIndex = 0xFF;
                    gSaveContext.nightSeqIndex = 0xFF;
                }
                globalCtx = globalCtx;
                if (func_800FD768() != 0) {
                    globalCtx = globalCtx;
                    func_801A4058(0x14);
                    gSaveContext.seqIndex = 0xFF;
                    gSaveContext.nightSeqIndex = 0xFF;
                }
                globalCtx = globalCtx;
                if (func_800FE590(globalCtx) != 0) {
                    globalCtx = globalCtx;
                    if (Entrance_GetSceneNum((sp1C->unk_87A + sp62) & 0xFFFF) >= 0) {
                        globalCtx = globalCtx;
                        if (func_801A8A50(0) == 0x57) {
                            globalCtx = globalCtx;
                            func_801A41C8(0x14);
                        }
                    }
                }
            }
            temp_a3_2 = sp1C;
            phi_a2_7 = globalCtx;
            if (D_801D0D54 == 0) {
                temp_a1_2 = temp_a3_2->unk_87F;
                sp1C = temp_a3_2;
                globalCtx = globalCtx;
                func_80165EC0(globalCtx, func_80165E7C(globalCtx, temp_a1_2, globalCtx, temp_a3_2));
                phi_a2_7 = globalCtx;
            }
            temp_v0_5 = temp_a3_2->unk_B4A;
            phi_a2_3 = phi_a2_7;
            phi_a3 = temp_a3_2;
            phi_v0_3 = temp_v0_5;
            phi_a2_6 = phi_a2_7;
            phi_a3_3 = temp_a3_2;
            if ((s32) temp_v0_5 < 4) {
block_30:
                temp_a0_3 = phi_a2_3 + 0x18BF8;
                sp18 = temp_a0_3;
                globalCtx = phi_a2_3;
                sp1C = phi_a3;
                phi_a3->unk_E20(temp_a0_3);
                temp_a2_2 = globalCtx;
                temp_v1 = phi_a3->unk_BF0;
                phi_v1 = temp_v1;
                phi_a3_2 = phi_a3;
                phi_a2_4 = temp_a2_2;
                if ((temp_v1 & 0x60) != 0) {
                    globalCtx = temp_a2_2;
                    phi_a3->unk_E34(sp18, temp_v1 | 0x80, temp_a2_2, phi_a3);
                    phi_v1 = sp1C->unk_BF0;
                    phi_a3_2 = sp1C;
                    phi_a2_4 = globalCtx;
                }
                if ((phi_v1 == 8) || (phi_v0 = 0xEU, (phi_v1 == 9))) {
                    phi_v0 = 0x1CU;
                }
                gSaveContext.unk_3F51 = phi_v0;
                temp_t5 = phi_a3_2->unk_BF0;
                switch (temp_t5) {                  /* switch 1 */
                case 4:                             /* switch 1 */
                case 5:                             /* switch 1 */
                    phi_v0_2 = 0x14U;
                    break;
                case 6:                             /* switch 1 */
                case 7:                             /* switch 1 */
                    phi_v0_2 = 0x96U;
                    break;
                case 17:                            /* switch 1 */
                    phi_v0_2 = 2U;
                    break;
                default:                            /* switch 1 */
                    phi_v0_2 = 0x3CU;
                    break;
                }
                gSaveContext.fadeDuration = phi_v0_2;
                temp_t7 = phi_a3_2->unk_BF0;
                switch (temp_t7) {                  /* switch 2 */
                case 3:                             /* switch 2 */
                case 5:                             /* switch 2 */
                case 7:                             /* switch 2 */
                case 13:                            /* switch 2 */
                case 17:                            /* switch 2 */
                    phi_a1 = 0xA0A0A0FF;
                    break;
                case 18:                            /* switch 2 */
                    phi_a1 = 0x8C8C64FF;
                    break;
                case 19:                            /* switch 2 */
                    phi_a1 = 0x46646EFF;
                    break;
                default:                            /* switch 2 */
                    phi_a1 = 0xFF;
                    break;
                }
                sp54 = phi_a1;
                globalCtx = phi_a2_4;
                phi_a3_2->unk_E38(sp18, phi_a1, phi_a2_4, phi_a3_2);
                temp_a2_3 = globalCtx;
                temp_v0_6 = sp1C->unk_E3C;
                phi_a2_5 = temp_a2_3;
                if (temp_v0_6 != 0) {
                    globalCtx = temp_a2_3;
                    temp_v0_6(sp18, phi_a1, temp_a2_3);
                    phi_a2_5 = globalCtx;
                }
                phi_a1_2 = 2;
                if (sp1C->unk_875 == -0x14) {
                    phi_a1_2 = 1;
                }
                globalCtx = phi_a2_5;
                sp1C->unk_E34(sp18, phi_a1_2, phi_a2_5);
                sp1C->unk_E30(sp18);
                phi_a2_6 = globalCtx;
                if (sp1C->unk_BF0 == 0xD) {
                    globalCtx->unk_18B4A = 0xB;
                } else {
                    globalCtx->unk_18B4A = 3;
                }
                phi_v0_3 = sp1C->unk_B4A;
                phi_a3_3 = sp1C;
            }
        }
        switch (phi_v0_3) {                         /* switch 3 */
        case 4:                                     /* switch 3 */
            D_801F6C10 = 0;
            phi_a2_6->envCtx.unk_E5 = 1;
            phi_a2_6->envCtx.unk_E6[0] = 0xA0;
            phi_a2_6->envCtx.unk_E6[1] = 0xA0;
            phi_a2_6->envCtx.unk_E6[2] = 0xA0;
            if (phi_a3_3->unk_875 != -0x14) {
                phi_a2_6->envCtx.unk_E6[3] = 0;
                phi_a2_6->unk_18B4A = 5;
                return;
            }
            phi_a2_6->envCtx.unk_E6[3] = 0xFF;
            phi_a2_6->unk_18B4A = 6;
            return;
        case 5:                                     /* switch 3 */
            phi_a2_6->envCtx.unk_E6[3] = (u8) (u32) (((f32) D_801F6C10 / 20.0f) * 255.0f);
            temp_v0_7 = D_801F6C10;
            if ((s32) temp_v0_7 >= 0x14) {
                phi_a2_6->state.running = 0;
                phi_a2_6->state.nextGameStateInit = Play_Init;
                phi_a2_6->state.nextGameStateSize = 0x19258;
                gSaveContext.entranceIndex = (u32) phi_a3_3->unk_87A;
                phi_a2_6->sceneLoadFlag = 0;
                phi_at = phi_a2_6 + 0x20000;
block_110:
                phi_at->unk_-74B6 = 0;
                /* Duplicate return node #111. Try simplifying control flow for better match */
                return;
            }
            D_801F6C10 = temp_v0_7 + 1;
            return;
        case 6:                                     /* switch 3 */
            phi_a2_6->envCtx.unk_E6[3] = (u8) (u32) ((1.0f - ((f32) D_801F6C10 / 20.0f)) * 255.0f);
            temp_v0_8 = D_801F6C10;
            if ((s32) temp_v0_8 >= 0x14) {
                D_801F6D10 = 0;
                globalCtx = phi_a2_6;
                Game_SetFramerateDivisor((GameState *) phi_a2_6, 3);
                globalCtx->sceneLoadFlag = 0;
                globalCtx->unk_18B4A = 0;
                globalCtx->envCtx.unk_E5 = 0;
                return;
            }
            D_801F6C10 = temp_v0_8 + 1;
            return;
        case 7:                                     /* switch 3 */
            D_801F6C10 = 0;
            phi_a2_6->envCtx.unk_E5 = 1;
            phi_a2_6->envCtx.unk_E6[0] = 0xAA;
            phi_a2_6->envCtx.unk_E6[1] = 0xA0;
            phi_a2_6->envCtx.unk_E6[2] = 0x96;
            if (phi_a3_3->unk_875 != -0x14) {
                phi_a2_6->envCtx.unk_E6[3] = 0;
                phi_a2_6->unk_18B4A = 5;
                return;
            }
            phi_a2_6->envCtx.unk_E6[3] = 0xFF;
            phi_a2_6->unk_18B4A = 6;
            return;
        case 10:                                    /* switch 3 */
            if (phi_a3_3->unk_875 != -0x14) {
                phi_a2_6->state.running = 0;
                phi_a2_6->state.nextGameStateSize = 0x19258;
                phi_a2_6->state.nextGameStateInit = Play_Init;
                gSaveContext.entranceIndex = (u32) phi_a3_3->unk_87A;
                phi_a2_6->sceneLoadFlag = 0;
                phi_at = phi_a2_6 + 0x20000;
            } else {
                D_801F6D10 = 0;
                globalCtx = phi_a2_6;
                Game_SetFramerateDivisor((GameState *) phi_a2_6, 3);
                globalCtx->sceneLoadFlag = 0;
                phi_at = globalCtx + 0x20000;
            }
            goto block_110;
        case 11:                                    /* switch 3 */
            if (gSaveContext.unk_3F48 != 0) {
                phi_a2_6->unk_18B4A = 3;
                return;
            }
            /* Duplicate return node #111. Try simplifying control flow for better match */
            return;
        case 12:                                    /* switch 3 */
            if (phi_a3_3->unk_875 != -0x14) {
                phi_a2_6->envCtx.unk_EA = 1;
                phi_a2_6->unk_18B4A = 0xD;
                return;
            }
            phi_a2_6->envCtx.unk_EA = 2;
            phi_a2_6->envCtx.unk_EB = 0xFF;
            phi_a2_6->envCtx.unk_EC = 0xFF;
            phi_a2_6->unk_18B4A = 0xD;
            return;
        case 13:                                    /* switch 3 */
            globalCtx = phi_a2_6;
            sp1C = phi_a3_3;
            func_8019F128(0x20C0U);
            if (sp1C->unk_875 == -0x14) {
                temp_a0_4 = globalCtx;
                if ((s32) globalCtx->envCtx.unk_EB < 0x6E) {
                    D_801F6D10 = 0;
                    globalCtx = globalCtx;
                    Game_SetFramerateDivisor((GameState *) temp_a0_4, 3);
                    globalCtx->sceneLoadFlag = 0;
                    phi_at = globalCtx + 0x20000;
                    goto block_110;
                }
            } else if (globalCtx->envCtx.unk_EC == 0xFF) {
                globalCtx->state.running = 0;
                globalCtx->state.nextGameStateSize = 0x19258;
                globalCtx->state.nextGameStateInit = Play_Init;
                gSaveContext.entranceIndex = (u32) sp1C->unk_87A;
                globalCtx->sceneLoadFlag = 0;
                phi_at = globalCtx + 0x20000;
                goto block_110;
            }
            /* Duplicate return node #111. Try simplifying control flow for better match */
            return;
        case 14:                                    /* switch 3 */
            if (phi_a3_3->unk_875 == -0x14) {
                phi_a2_6->envCtx.unk_EA = 4;
                phi_a2_6->envCtx.unk_EB = 0xFF;
                phi_a2_6->envCtx.unk_EC = 0xFF;
                phi_a2_6->unk_18B4A = 0xF;
                return;
            }
            phi_a2_6->unk_18B4A = 0xC;
            return;
        case 15:                                    /* switch 3 */
            globalCtx = phi_a2_6;
            sp1C = phi_a3_3;
            func_8019F128(0x20C0U);
            if (sp1C->unk_875 == -0x14) {
                temp_a0_5 = globalCtx;
                if ((s32) globalCtx->envCtx.unk_EB <= 0) {
                    D_801F6D10 = 0;
                    globalCtx = globalCtx;
                    Game_SetFramerateDivisor((GameState *) temp_a0_5, 3);
                    globalCtx->sceneLoadFlag = 0;
                    phi_at = globalCtx + 0x20000;
                    goto block_110;
                }
            }
            /* Duplicate return node #111. Try simplifying control flow for better match */
            return;
        case 16:                                    /* switch 3 */
            D_801F6C10 = 0;
            phi_a2_6->envCtx.unk_E5 = 1;
            phi_a2_6->envCtx.unk_E6[0] = 0;
            phi_a2_6->envCtx.unk_E6[1] = 0;
            phi_a2_6->envCtx.unk_E6[2] = 0;
            phi_a2_6->envCtx.unk_E6[3] = 0xFF;
            phi_a2_6->unk_18B4A = 0x11;
            return;
        case 17:                                    /* switch 3 */
            temp_v0_9 = gSaveContext.unk_3F48;
            if (temp_v0_9 != 0) {
                phi_a2_6->envCtx.unk_E6[3] = temp_v0_9;
                if ((s32) gSaveContext.unk_3F48 < 0x65) {
                    D_801F6D10 = 0;
                    globalCtx = phi_a2_6;
                    Game_SetFramerateDivisor((GameState *) phi_a2_6, 3);
                    globalCtx->sceneLoadFlag = 0;
                    phi_at = globalCtx + 0x20000;
                    goto block_110;
                }
            }
            /* Duplicate return node #111. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:                                        /* switch 3 */
    }
}

void func_80167814(GlobalContext *globalCtx) {
    s32 sp5C;
    s32 sp54;
    s32 sp50;
    ? sp48;
    void *sp44;
    CutsceneContext *sp40;
    AnimationContext *sp3C;
    RoomContext *sp38;
    CollisionCheckContext *sp34;
    Input *sp30;
    AnimationContext *temp_a0;
    Camera *temp_a1_5;
    CollisionCheckContext *temp_a1_3;
    CutsceneContext *temp_a1_4;
    GameInfo *temp_a2;
    Input *temp_a1;
    RoomContext *temp_a1_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_4;
    u16 temp_v1_2;
    u8 temp_t2;
    u8 temp_v0;
    u8 temp_v1_3;
    s32 phi_v0;
    s32 phi_v1;
    s16 phi_a2;
    s16 phi_a2_2;

    sp5C = 0;
    sp44 = globalCtx + 0x10000;
    gSegments->unk_10 = (void *) (globalCtx->objectCtx.status[globalCtx->objectCtx.mainKeepIndex].segment + 0x80000000);
    gSegments->unk_14 = (void *) (globalCtx->objectCtx.status[globalCtx->objectCtx.subKeepIndex].segment + 0x80000000);
    gSegments->unk_8 = (void *) (globalCtx->sceneSegment + 0x80000000);
    temp_a2 = gGameInfo;
    if (temp_a2->data[185] == 2) {
        temp_a2->data[185] = 3;
        func_8010C1B0(0x80000000, temp_a2, 0x44);
        func_80165E1C(&globalCtx->pauseBgPreRender);
        gGameInfo->data[185] = 0;
    }
    Actor_SetMovementScale((s32) globalCtx->state.framerateDivisor);
    temp_a1 = &globalCtx->state.input[1];
    sp30 = temp_a1;
    if (func_80122670(&globalCtx->frameAdvCtx, temp_a1) != 0) {
        sp40 = globalCtx + 0x18000;
        if ((globalCtx->unk_18B4A == 0) && (globalCtx->sceneLoadFlag != 0)) {
            globalCtx->unk_18B4A = 1;
        }
        temp_v1 = D_801F6D10;
        if (temp_v1 != 0) {
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {

                } else {
                    func_801647AC(&D_801F6C30);
                }
            } else if (func_801642D8(&D_801F6C30, 0xA, 7) == 0) {
                D_801F6D10 = 0;
            } else {
                D_801F6D0C = gZBufferPtr;
                D_801F6D10 = 3;
                Game_SetFramerateDivisor((GameState *) globalCtx, 1);
            }
        }
        func_80166B30(globalCtx);
        if (D_801F6D10 != 3) {
            if ((gSaveContext.gameMode == 0) && ((temp_v0 = sp44->unk_682A, (temp_v0 == 0)) || ((temp_v1_2 = sp44->unk_680C, (temp_v1_2 == 0xFF)) && (temp_v0 == 0x42) && (sp44->unk_6928 == 0x41)) || (((s32) temp_v1_2 >= 0x100) && ((s32) temp_v1_2 < 0x201))) && (sp44->unk_7000 == 0)) {
                func_800F4C0C(globalCtx);
            }
            temp_a0 = &globalCtx->animationCtx;
            temp_v0_2 = sp44->unk_6F1C != 0;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 == 0) {
                phi_v0 = sp44->unk_6F1E != 0;
            }
            sp5C = phi_v0;
            sp50 = phi_v0;
            sp3C = temp_a0;
            SkelAnime_AnimationCtxReset(temp_a0);
            Object_UpdateBank(&globalCtx->objectCtx);
            if ((phi_v0 == 0) && (gGameInfo->data[936] == 0)) {
                globalCtx->gameplayFrames = sp40->unk_840 + 1;
                func_8013EE48(1);
                temp_v1_3 = globalCtx->actorCtx.unk_0;
                if ((temp_v1_3 != 0) && (temp_t2 = temp_v1_3 - 1, globalCtx->actorCtx.unk_0 = temp_t2, (((s32) temp_v1_3 < 5) != 0))) {
                    temp_v0_3 = temp_t2 & 0xFF;
                    if ((temp_v0_3 > 0) && ((temp_v0_3 & 1) != 0)) {
                        globalCtx->envCtx.unk_E5 = 1;
                        sp44->unk_70EC = 0x96;
                        sp44->unk_70EB = 0x96;
                        sp44->unk_70EA = 0x96;
                        sp44->unk_70ED = 0x50;
                    } else {
                        globalCtx->envCtx.unk_E5 = 0;
                    }
                    sp38 = &globalCtx->roomCtx;
                } else {
                    temp_a1_2 = &globalCtx->roomCtx;
                    sp38 = temp_a1_2;
                    Room_HandleLoadCallbacks(globalCtx, temp_a1_2);
                    temp_a1_3 = &globalCtx->colChkCtx;
                    sp34 = temp_a1_3;
                    CollisionCheck_AT(globalCtx, temp_a1_3);
                    CollisionCheck_OC(globalCtx, temp_a1_3);
                    CollisionCheck_Damage(globalCtx, temp_a1_3);
                    CollisionCheck_ClearContext(globalCtx, temp_a1_3);
                    if (sp40->unk_845 == 0) {
                        Actor_UpdateAll(globalCtx, &globalCtx->actorCtx);
                    }
                    temp_a1_4 = &globalCtx->csCtx;
                    sp40 = temp_a1_4;
                    Cutscene_StepCutscene1(globalCtx, temp_a1_4);
                    Cutscene_StepCutscene2(globalCtx, temp_a1_4);
                    Effect_UpdateAll(globalCtx);
                    EffectSS_UpdateAllParticles(globalCtx);
                    EffFootmark_Update(globalCtx);
                }
            } else {
                func_8013EE48(0);
                sp38 = &globalCtx->roomCtx;
            }
            Room_nop8012D510(globalCtx, (Room *) sp38, (void *) sp30, 0);
            Room_nop8012D510(globalCtx, &globalCtx->roomCtx.prevRoom, (void *) sp30, 1);
            func_80143A04(&globalCtx->skyboxCtx);
            if ((sp44->unk_6F1C != 0) || (sp44->unk_6F1E != 0)) {
                func_80163A58(globalCtx);
            } else if (sp44->unk_7000 != 0) {
                func_801AA68C(globalCtx);
            }
            func_8015680C(globalCtx);
            func_801210E0(globalCtx);
            func_80135EE8(globalCtx, sp3C);
            func_800F03C0(globalCtx);
            ShrinkWindow_Step((s32) globalCtx->state.framerateDivisor);
            TransitionFade_Update(&globalCtx->unk_18E48, globalCtx->state.framerateDivisor);
        }
    }
    if ((sp5C == 0) || (D_801D0D50 != 0)) {
        globalCtx->nextCamera = globalCtx->activeCamera;
        phi_v1 = 0;
        phi_a2 = globalCtx->nextCamera;
        do {
            phi_a2_2 = phi_a2;
            if (phi_v1 != phi_a2) {
                temp_a1_5 = globalCtx->cameraPtrs[phi_v1];
                if (temp_a1_5 != 0) {
                    sp54 = phi_v1;
                    Camera_Update((Vec3s *) &sp48, temp_a1_5);
                    phi_a2_2 = globalCtx->nextCamera;
                }
            }
            temp_v1_4 = phi_v1 + 1;
            phi_v1 = temp_v1_4;
            phi_a2 = phi_a2_2;
        } while (temp_v1_4 != 4);
        Camera_Update((Vec3s *) &sp48, globalCtx->cameraPtrs[phi_a2_2]);
    }
    if (sp5C == 0) {
        func_80166968(globalCtx, globalCtx->cameraPtrs[globalCtx->nextCamera]);
        Quake2_Update();
    }
    func_800F8CD4(globalCtx, &globalCtx->envCtx, &globalCtx->lightCtx, &globalCtx->pauseCtx, &globalCtx->msgCtx, &globalCtx->gameOverCtx, globalCtx->state.gfxCtx);
    if (globalCtx->sramCtx.status != 0) {
        if (gSaveContext.isOwlSave != 0) {
            func_80147198(&globalCtx->sramCtx);
            return;
        }
        func_80147068(&globalCtx->sramCtx);
        /* Duplicate return node #59. Try simplifying control flow for better match */
    }
}

void func_80167DE4(GlobalContext *globalCtx) {
    u16 temp_v0;
    u8 temp_v1;
    u8 phi_v1;

    temp_v1 = D_801F6DFC;
    phi_v1 = temp_v1;
    if (temp_v1 == 0) {
        if (globalCtx->pauseCtx.unk_1F0 != 0) {
            D_801F6DFC = 1;
            *D_801F6D50 = 0;
            phi_v1 = D_801F6DFC;
        }
    } else {
        temp_v0 = globalCtx->state.input[0].press.button;
        if ((~(temp_v0 | ~0x20) == 0) || (~(temp_v0 | ~0x4000) == 0) || (~(temp_v0 | ~0x1000) == 0) || (gIrqMgrResetStatus != 0)) {
            D_801F6DFC = 0;
            globalCtx->pauseCtx.unk_1F0 = 0;
            *D_801F6D50 = 0;
            globalCtx->msgCtx.unk11F10 = 0;
            globalCtx->msgCtx.unk11F22 = 0;
            globalCtx->msgCtx.unk11F04 = 0;
            globalCtx->msgCtx.unk12023 = 0;
            globalCtx = globalCtx;
            play_sound(0x480AU);
            phi_v1 = D_801F6DFC;
        }
    }
    if (phi_v1 != 0) {
        globalCtx = globalCtx;
        func_8016F5A8(globalCtx, D_801F6D50, globalCtx + 0x14);
        func_8015680C(globalCtx);
        return;
    }
    func_80167814(globalCtx);
}

void func_80167F0C(GlobalContext *arg0) {
    Gfx *sp34;
    Gfx *sp30;
    GraphicsContext *sp2C;
    void *sp18;
    Gfx *temp_a0;
    Gfx *temp_t0;
    Gfx *temp_v1;
    GraphicsContext *temp_a3;

    if ((arg0->pauseCtx.state != 0) || (arg0->pauseCtx.debugState != 0)) {
        sp18 = arg0 + 0x10000;
        func_80163C0C(arg0);
    }
    if (gSaveContext.gameMode == 0) {
        sp18 = arg0 + 0x10000;
        func_8011F0E0(arg0);
    }
    if ((((arg0 + 0x10000)->unk_6F1C == 0) && ((arg0 + 0x10000)->unk_6F1E == 0)) || ((arg0 + 0x10000)->unk_680C != 0xFF)) {
        sp18 = arg0 + 0x10000;
        func_80156758(arg0);
    }
    if ((arg0 + 0x10000)->unk_7000 != 0) {
        func_801AA624(arg0);
    }
    if (gSaveContext.unk_3F60 != 0) {
        temp_a3 = arg0->state.gfxCtx;
        D_801F6D4C->unk_4 = (f32) (gSaveContext.unk_3F64 / 1000.0f);
        temp_a0 = temp_a3->polyOpa.p;
        sp2C = temp_a3;
        sp30 = temp_a0;
        sp34 = Graph_GfxPlusOne(temp_a0);
        temp_v1 = temp_a3->overlay.p;
        temp_a3->overlay.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1->words.w1 = (u32) sp34;
        sp2C = temp_a3;
        func_80141778(D_801F6D4C, &sp34, arg0->unk_18E60, temp_a3);
        temp_t0 = sp34;
        sp34 = temp_t0 + 8;
        temp_t0->words.w1 = 0;
        temp_t0->words.w0 = 0xDF000000;
        sp2C = temp_a3;
        Graph_BranchDlist(temp_a0, sp34);
        temp_a3->polyOpa.p = sp34;
    }
}

void func_80168090(GlobalContext *globalCtx) {
    Lights *sp268;
    f32 sp264;
    f32 sp260;
    f32 sp25C;
    u8 sp25B;
    Gfx *sp218;
    Gfx *sp214;
    s32 sp208;
    ? spA8;
    s32 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    Gfx *sp90;
    Gfx *sp8C;
    f32 sp78;
    Gfx *sp74;
    Gfx *sp70;
    ? sp4C;
    MtxF *sp48;
    MtxF *sp44;
    void *sp40;
    void *sp3C;
    View *sp38;
    SkyboxContext *sp34;
    GameInfo *temp_v1_2;
    GameInfo *temp_v1_3;
    GameInfo *temp_v1_4;
    GameInfo *temp_v1_5;
    GameInfo *temp_v1_6;
    Gfx **temp_a1_2;
    Gfx *temp_a0_2;
    Gfx *temp_a0_5;
    Gfx *temp_t0;
    Gfx *temp_t4;
    Gfx *temp_t7;
    Gfx *temp_v0_10;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_20;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    GraphicsContext *temp_s1;
    GraphicsContext *temp_v0_11;
    Lights *temp_v0_18;
    MtxF *temp_a1;
    MtxF *temp_a3;
    PreRender *temp_a0_3;
    SkyboxContext *temp_a2;
    View *temp_a0;
    f32 *temp_t0_2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_17;
    s16 temp_v0_19;
    u8 temp_a0_4;
    u8 temp_a1_3;
    u8 temp_v0_16;
    s32 phi_v0;
    f32 phi_f0;

    temp_s1 = globalCtx->state.gfxCtx;
    sp25B = 0;
    temp_v0 = gGameInfo->data[190];
    phi_v0 = (s32) temp_v0;
    if ((s32) temp_v0 >= 4) {
        PreRender_ApplyFiltersSlowlyDestroy(&globalCtx->pauseBgPreRender);
        gGameInfo->data[190] = 0;
        phi_v0 = (s32) gGameInfo->data[190];
    }
    if ((phi_v0 < 2) && (D_801F6D10 < 2)) {
        if ((globalCtx->skyboxCtx.skyboxShouldDraw != 0) || (globalCtx->roomCtx.currRoom.mesh->type0.type == 1)) {
            sp40 = globalCtx + 0x18000;
            func_8012CF0C(temp_s1, 0, 1, 0U, (u8) 0, (u8) 0);
        } else {
            sp40 = globalCtx + 0x18000;
            func_8012CF0C(temp_s1, 1, 1, globalCtx->lightCtx.unk7, (u8) (s32) globalCtx->lightCtx.unk8, (u8) (s32) globalCtx->lightCtx.unk9);
        }
    } else {
        func_8012CF0C(temp_s1, 0, 0, 0U, (u8) 0, (u8) 0);
        sp40 = globalCtx + 0x18000;
    }
    gSegments->unk_10 = (void *) (globalCtx->objectCtx.status[globalCtx->objectCtx.mainKeepIndex].segment + 0x80000000);
    gSegments->unk_14 = (void *) (globalCtx->objectCtx.status[globalCtx->objectCtx.subKeepIndex].segment + 0x80000000);
    gSegments->unk_8 = (void *) (globalCtx->sceneSegment + 0x80000000);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060010;
    temp_v0_2->words.w1 = (u32) globalCtx->objectCtx.status[globalCtx->objectCtx.mainKeepIndex].segment;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060010;
    temp_v0_3->words.w1 = (u32) globalCtx->objectCtx.status[globalCtx->objectCtx.mainKeepIndex].segment;
    temp_v0_4 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060010;
    temp_v0_4->words.w1 = (u32) globalCtx->objectCtx.status[globalCtx->objectCtx.mainKeepIndex].segment;
    temp_v0_5 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDB060014;
    temp_v0_5->words.w1 = (u32) globalCtx->objectCtx.status[globalCtx->objectCtx.subKeepIndex].segment;
    temp_v0_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDB060014;
    temp_v0_6->words.w1 = (u32) globalCtx->objectCtx.status[globalCtx->objectCtx.subKeepIndex].segment;
    temp_v0_7 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xDB060014;
    temp_v0_7->words.w1 = (u32) globalCtx->objectCtx.status[globalCtx->objectCtx.subKeepIndex].segment;
    temp_v0_8 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_8 + 8;
    temp_v0_8->words.w0 = 0xDB060008;
    temp_v0_8->words.w1 = (u32) globalCtx->sceneSegment;
    temp_v0_9 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0xDB060008;
    temp_v0_9->words.w1 = (u32) globalCtx->sceneSegment;
    temp_v0_10 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0_10 + 8;
    temp_v0_10->words.w0 = 0xDB060008;
    temp_v0_10->words.w1 = (u32) globalCtx->sceneSegment;
    sp3C = globalCtx + 0x10000;
    ShrinkWindow_Draw((GlobalContext *) temp_s1);
    temp_s1->polyOpa.p = func_801660B8(globalCtx, temp_s1->polyOpa.p);
    temp_s1->polyXlu.p = func_801660B8(globalCtx, temp_s1->polyXlu.p);
    temp_a0 = &globalCtx->view;
    temp_f0 = (f32) globalCtx->lightCtx.unkC;
    phi_f0 = temp_f0;
    if (temp_f0 > 12800.0f) {
        phi_f0 = 12800.0f;
    }
    sp38 = temp_a0;
    func_8013F0D0(temp_a0, globalCtx->view.fovy, globalCtx->view.zNear, phi_f0);
    View_RenderView(temp_a0, 0xF);
    temp_a1 = &globalCtx->mf_187FC;
    sp48 = temp_a1;
    SysMatrix_FromRSPMatrix((RSPMatrix *) &globalCtx->view.viewing, temp_a1);
    temp_a3 = &globalCtx->projectionMatrix;
    sp44 = temp_a3;
    SysMatrix_FromRSPMatrix((RSPMatrix *) &globalCtx->view.projection, temp_a3);
    globalCtx->unk_187F0.x = sp40->unk_7B0;
    globalCtx->unk_187F0.y = sp40->unk_7C4;
    globalCtx->unk_187F0.z = -sp40->unk_7D8;
    SkinMatrix_MtxFMtxFMult(sp44, temp_a1, sp44);
    sp40->unk_808 = 0.0f;
    sp40->unk_818 = 0.0f;
    sp40->unk_828 = 0.0f;
    sp40->unk_82C = 0.0f;
    sp40->unk_830 = 0.0f;
    sp40->unk_834 = 0.0f;
    SysMatrix_TransposeXYZ(sp48);
    temp_v0_11 = globalCtx->state.gfxCtx;
    temp_v1 = temp_v0_11->polyOpa.d - 0x80;
    temp_v0_11->polyOpa.d = temp_v1;
    globalCtx->unk_1883C = (Mtx *) temp_v1;
    SysMatrix_ToRSPMatrix(sp48, sp40->unk_83C);
    SysMatrix_InsertYRotation_f((f32) (s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000) * 0.0000958738f, 0);
    SysMatrix_GetStateAsRSPMatrix(sp40->unk_83C + 0x40);
    temp_v0_12 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_12 + 8;
    temp_v0_12->words.w0 = 0xDB060004;
    temp_v0_12->words.w1 = (u32) sp40->unk_83C;
    temp_v0_13 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_13 + 8;
    temp_v0_13->words.w0 = 0xDB060004;
    temp_v0_13->words.w1 = (u32) sp40->unk_83C;
    temp_v0_14 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0_14 + 8;
    temp_v0_14->words.w0 = 0xDB060004;
    temp_v0_14->words.w1 = (u32) sp40->unk_83C;
    temp_a0_2 = temp_s1->polyOpa.p;
    sp214 = temp_a0_2;
    sp218 = Graph_GfxPlusOne(temp_a0_2);
    temp_v0_15 = temp_s1->overlay.p;
    temp_s1->overlay.p = temp_v0_15 + 8;
    temp_v0_15->words.w0 = 0xDE000000;
    temp_v0_15->words.w1 = (u32) sp218;
    temp_v0_16 = sp40->unk_B4A;
    if ((temp_v0_16 == 3) || (temp_v0_16 == 0xB) || (D_801D0D54 != 0)) {
        View_Init((View *) &spA8, temp_s1);
        sp208 = 0xA;
        spA4 = 0x140;
        sp9C = 0xF0;
        sp98 = 0;
        spA0 = 0;
        View_SetViewport((View *) &spA8, (Viewport *) &sp98);
        func_801400CC((View *) &spA8, &sp218);
        sp40->unk_E2C(&globalCtx->unk_18BF8, &sp218);
    }
    TransitionFade_Draw(&globalCtx->unk_18E48, &sp218);
    if (D_801F6D30.a != 0) {
        D_801F6D18.unk_8 = (s32) D_801F6D30.unk_0;
        VisMono_Draw(&D_801F6D18, &sp218, MIPS2C_ERROR(Read from unset register $a2));
    }
    temp_t0 = sp218;
    sp218 = temp_t0 + 8;
    temp_t0->words.w1 = 0;
    temp_t0->words.w0 = 0xDF000000;
    Graph_BranchDlist(sp214, sp218);
    temp_s1->polyOpa.p = sp218;
    if (D_801F6D10 == 3) {
        temp_a1_2 = &sp90;
        sp90 = temp_s1->polyOpa.p;
        func_8016454C(&D_801F6C30, temp_a1_2);
        temp_s1->polyOpa.p = sp90;
        sp25B = 1;
        goto block_66;
    }
    temp_a0_3 = &globalCtx->pauseBgPreRender;
    sp44 = (MtxF *) temp_a0_3;
    PreRender_SetValues(temp_a0_3, (u32) D_801FBBCC, (u32) D_801FBBCE, temp_s1->framebuffer, temp_s1->zbuffer);
    temp_v0_17 = gGameInfo->data[190];
    if (temp_v0_17 == 2) {
        func_8010C1B0();
        if (gSaveContext.unk_3F60 == 0) {
            PreRender_ApplyFiltersSlowlyInit((PreRender *) sp44);
        }
        gGameInfo->data[190] = 3;
        temp_v1_2 = gGameInfo;
        temp_v1_2->data[129] |= 1;
    } else {
        if (temp_v0_17 == 3) {
            sp8C = temp_s1->polyOpa.p;
            if (sp40->unk_B99 == 2) {
                func_80170B28((PreRender *) sp44, &sp8C);
            } else {
                func_80170798((PreRender *) sp44, &sp8C);
            }
            temp_t7 = sp8C;
            sp8C = temp_t7 + 8;
            temp_t7->words.w0 = 0xDE000000;
            temp_t7->words.w1 = (u32) &D_0E000140;
            temp_s1->polyOpa.p = sp8C;
            sp25B = 1;
            goto block_66;
        }
        if (sp40->unk_844 == 0) {
            temp_a0_4 = sp40->unk_874;
            if ((temp_a0_4 != 0) && (sp3C->unk_7019 == 0)) {
                if ((temp_a0_4 == 1) || (temp_a0_4 == 3)) {
                    temp_a2 = &globalCtx->skyboxCtx;
                    sp34 = temp_a2;
                    func_800F5CD0(temp_a0_4, &globalCtx->envCtx, temp_a2);
                    func_80143668(sp34, temp_s1, (s16) sp40->unk_874, sp3C->unk_7017, globalCtx->view.eye.x, globalCtx->view.eye.y, globalCtx->view.eye.z);
                } else if (globalCtx->skyboxCtx.skyboxShouldDraw == 0) {
                    func_80143668(&globalCtx->skyboxCtx, temp_s1, (s16) temp_a0_4, 0U, globalCtx->view.eye.x, globalCtx->view.eye.y, globalCtx->view.eye.z);
                }
            }
            func_800FE390(globalCtx);
            temp_v0_18 = LightContext_NewLights(&globalCtx->lightCtx, temp_s1);
            if ((sp40->unk_6E6 != 0) || (gGameInfo->data[573] != 0)) {
                temp_v0_18->enablePosLights = 1;
            }
            sp268 = temp_v0_18;
            Lights_BindAll(temp_v0_18, globalCtx->lightCtx.listHead, NULL, globalCtx);
            Lights_Draw(temp_v0_18, temp_s1);
            Scene_ExecuteDrawConfig(globalCtx);
            if (sp40->unk_758 != 0) {
                sp48 = (MtxF *)3;
                Room_Draw(globalCtx, (Room *) &globalCtx->roomCtx, (u32) (MtxF *)3);
                Room_Draw(globalCtx, &globalCtx->roomCtx.prevRoom, (u32) (MtxF *)3);
            }
            if (globalCtx->skyboxCtx.skyboxShouldDraw != 0) {
                sp34 = &globalCtx->skyboxCtx;
                func_800E01B8(&sp78, globalCtx->cameraPtrs[globalCtx->activeCamera]);
                func_80143668(sp34, temp_s1, (s16) sp40->unk_874, 0U, globalCtx->view.eye.x + sp78, globalCtx->view.eye.y + sp7C, globalCtx->view.eye.z + sp80);
            }
            if (sp3C->unk_70F7 != 0) {
                func_800FA9FC(globalCtx, sp38, temp_s1);
            }
        }
        func_800FC444(temp_s1, 0U, 0U, 0U, (s32) sp40->unk_878, 1);
        Actor_DrawAll(globalCtx, &globalCtx->actorCtx);
        if (sp3C->unk_701A == 0) {
            temp_t0_2 = &sp25C;
            sp25C = globalCtx->view.eye.x + sp3C->unk_7008;
            sp260 = globalCtx->view.eye.y + sp3C->unk_700C;
            sp264 = globalCtx->view.eye.z + sp3C->unk_7010;
            func_800F9728(globalCtx, &globalCtx->envCtx, sp38, temp_s1, temp_t0_2->unk_0, temp_t0_2->unk_4, temp_t0_2->unk_8);
        }
        func_800FBCBC(globalCtx);
        temp_v1_3 = gGameInfo;
        if (temp_v1_3->data[544] != 0) {
            func_800FC444(temp_s1, temp_v1_3->unk_457, temp_v1_3->unk_459, temp_v1_3->unk_45B, (s32) temp_v1_3->data[548], 3);
        }
        if (sp3C->unk_70E9 == 1) {
            func_800FC444(temp_s1, sp3C->unk_70EA, sp3C->unk_70EB, sp3C->unk_70EC, (s32) sp3C->unk_70ED, 3);
        }
        temp_a1_3 = sp3C->unk_70EE;
        if (temp_a1_3 != 0) {
            func_800FC64C(globalCtx, temp_a1_3);
        }
        temp_v0_19 = sp40->unk_876;
        if (temp_v0_19 != 0) {
            func_800FC444(temp_s1, 0U, 0U, 0U, (s32) temp_v0_19, 3);
        }
        DebugDisplay_DrawObjects(globalCtx);
        func_80165460((void **) globalCtx);
        temp_v1_4 = gGameInfo;
        if ((temp_v1_4->data[190] == 1) || (D_801F6D10 == 1) || (temp_v1_4->data[185] == 1)) {
            temp_a0_5 = temp_s1->polyOpa.p;
            sp70 = temp_a0_5;
            sp74 = Graph_GfxPlusOne(temp_a0_5);
            temp_v0_20 = temp_s1->overlay.p;
            temp_s1->overlay.p = temp_v0_20 + 8;
            temp_v0_20->words.w0 = 0xDE000000;
            temp_v0_20->words.w1 = (u32) sp74;
            globalCtx->pauseBgPreRender.fbuf = (u16 *) temp_s1->framebuffer;
            temp_v1_5 = gGameInfo;
            if (temp_v1_5->data[190] == 1) {
                temp_v1_5->data[190] = 2;
                globalCtx->pauseBgPreRender.fbufSave = (u16 *) temp_s1->zbuffer;
                globalCtx->pauseBgPreRender.cvgSave = sp40->unk_E58;
            } else if (temp_v1_5->data[185] == 1) {
                temp_v1_5->data[185] = 2;
                globalCtx->pauseBgPreRender.fbufSave = (u16 *) temp_s1->zbuffer;
                globalCtx->pauseBgPreRender.cvgSave = sp40->unk_E58;
            } else {
                D_801F6D10 = 2;
                globalCtx->pauseBgPreRender.fbufSave = (u16 *) temp_s1->zbuffer;
                globalCtx->pauseBgPreRender.cvgSave = NULL;
            }
            func_801705B4((PreRender *) sp44, &sp74);
            if (sp40->unk_B64 != 0) {
                func_80170730((PreRender *) sp44, &sp74);
            }
            temp_t4 = sp74;
            sp74 = temp_t4 + 8;
            temp_t4->words.w1 = 0;
            temp_t4->words.w0 = 0xDF000000;
            Graph_BranchDlist(sp70, sp74);
            temp_s1->polyOpa.p = sp74;
            globalCtx->unk_18B49 = 2;
            temp_v1_6 = gGameInfo;
            temp_v1_6->data[129] |= 1;
        } else {
block_66:
            func_80167F0C(globalCtx);
        }
    }
    if ((globalCtx->view.unk_164 != 0) && (D_801D0D50 == 0)) {
        Camera_Update((Vec3s *) &sp4C, globalCtx->cameraPtrs[globalCtx->activeCamera]);
        func_80140024(sp38);
        globalCtx->view.unk_164 = 0;
        if ((sp40->unk_874 != 0) && (sp3C->unk_7019 == 0)) {
            func_801435A0(&globalCtx->skyboxCtx, globalCtx->view.eye.x, globalCtx->view.eye.y, globalCtx->view.eye.z);
        }
    }
    if (sp25B == 0) {
        func_800FE3E0(globalCtx);
    }
}

void func_80168DAC(GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    GraphicsContext *temp_s0;
    GraphicsContext *temp_v0;
    u8 temp_v1;
    u8 phi_v1;

    temp_v0 = globalCtx->state.gfxCtx;
    sp24 = temp_v0;
    temp_v1 = D_801F6DFC;
    temp_s0 = temp_v0;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
        if (D_801FBBD4 != 1) {
            func_8010C1B0();
            func_80178818();
            temp_s0->framebuffer = get_framebuffer((s32) temp_s0->framebufferCounter % 2);
            temp_s0->zbuffer = get_zbuffer();
            temp_s0->unk274 = D_801FBB88;
            temp_s0->viConfigFeatures = gViConfigFeatures;
            temp_s0->viConfigXScale = gViConfigXScale;
            temp_s0->unk_2DA = 1;
            temp_s0->viConfigYScale = gViConfigYScale;
            goto block_5;
        }
    } else if (D_801FBBD4 != 0) {
        func_8010C1B0();
        func_80178750();
        temp_s0->framebuffer = get_framebuffer((s32) temp_s0->framebufferCounter % 2);
        temp_s0->zbuffer = get_zbuffer();
        temp_s0->unk274 = D_801FBB88;
        temp_s0->viConfigFeatures = gViConfigFeatures;
        temp_s0->viConfigXScale = gViConfigXScale;
        temp_s0->unk_2DA = 1;
        temp_s0->viConfigYScale = gViConfigYScale;
block_5:
        phi_v1 = D_801F6DFC;
    }
    if ((phi_v1 != 0) && ((gGameInfo->data[98] != 2) || (gZBufferPtr == 0))) {
        func_8016F1A8(D_801F6D50, sp24);
        func_80156758(globalCtx);
        return;
    }
    func_80168090(globalCtx);
}

void Play_Update(GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    ? sp28;
    Input *sp24;
    GraphicsContext *temp_v1;
    Input *temp_v0;

    temp_v0 = globalCtx->state.input;
    D_801D0D60 = temp_v0;
    sp24 = temp_v0;
    func_800E9470();
    temp_v1 = globalCtx->state.gfxCtx;
    globalCtx->state.gfxCtx = NULL;
    sp24 = temp_v0;
    sp40 = temp_v1;
    func_80167DE4(globalCtx);
    globalCtx->state.gfxCtx = temp_v1;
    sp28.unk_0 = (s32) (unaligned s32) temp_v0->unk_0;
    sp28.unk_4 = (s32) (unaligned s32) temp_v0->cur.errno;
    sp28.unk_8 = (s32) (unaligned s32) temp_v0->prev.stick_x;
    sp28.unk_C = (s32) (unaligned s32) temp_v0->unk_C;
    sp28.unk_10 = (s32) (unaligned s32) temp_v0->press.errno;
    sp28.unk_14 = (s32) (unaligned s32) temp_v0->rel.stick_x;
    temp_v0->unk_0 = (unaligned s32) D_801F6C18.unk_0;
    temp_v0->cur.errno = (unaligned s32) D_801F6C18.unk_4;
    temp_v0->prev.stick_x = (unaligned s32) D_801F6C18.unk_8;
    temp_v0->unk_C = (unaligned s32) D_801F6C18.unk_C;
    temp_v0->press.errno = (unaligned s32) D_801F6C18.unk_10;
    temp_v0->rel.stick_x = (unaligned s32) D_801F6C18.unk_14;
    sp24 = temp_v0;
    func_80168DAC(globalCtx);
    temp_v0->unk_0 = (unaligned s32) sp28.unk_0;
    temp_v0->cur.errno = (unaligned s32) sp28.unk_4;
    temp_v0->prev.stick_x = (unaligned s32) sp28.unk_8;
    temp_v0->unk_C = (unaligned s32) sp28.unk_C;
    temp_v0->press.errno = (unaligned s32) sp28.unk_10;
    temp_v0->rel.stick_x = (unaligned s32) sp28.unk_14;
    ActorCutscene_Update();
    ActorCutscene_ClearWaiting();
}

s32 func_801690CC(GlobalContext *globalCtx) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = globalCtx->csCtx.state != 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        phi_v0 = func_801233E4(globalCtx) != 0;
    }
    return phi_v0;
}

f32 func_80169100(? *arg0, MtxF *arg1, CollisionPoly **arg2, ? *arg3, f32 *arg4) {
    f32 sp2C;
    f32 temp_f0;
    f32 temp_ret;

    temp_ret = func_800C40B4(arg0 + 0x830, arg2, arg3, arg4);
    temp_f0 = temp_ret;
    if (temp_f0 > -32000.0f) {
        sp2C = temp_f0;
        func_800C0094(*arg2, arg4->unk_0, temp_f0, arg4->unk_8, arg1);
    } else {
        arg1->mf[1][0] = 0.0f;
        arg1->mf[0][2] = 0.0f;
        arg1->mf[0][1] = 0.0f;
        arg1->mf[0][0] = 0.0f;
        arg1->mf[2][3] = 0.0f;
        arg1->mf[2][0] = 0.0f;
        arg1->mf[1][3] = 0.0f;
        arg1->mf[0][3] = 0.0f;
        arg1->mf[2][2] = 0.0f;
        arg1->mf[2][1] = 0.0f;
        arg1->mf[1][2] = 0.0f;
        arg1->mf[1][1] = 1.0f;
        arg1->mf[3][0] = arg4->unk_0;
        arg1->mf[3][1] = arg4->unk_4;
        arg1->mf[3][3] = 1.0f;
        arg1->mf[3][2] = arg4->unk_8;
    }
    return temp_ret;
}

void func_801691F0(CollisionPoly **arg2) {
    ? sp24;
    ? sp20;

    func_80169100(&sp24, (MtxF *) &sp20, arg2);
}

void *Play_LoadScene(GlobalContext *globalCtx, RomFile *entry) {
    u32 sp1C;
    void *sp18;
    u32 temp_a1;
    u32 temp_t6;
    u32 temp_t7;
    void *temp_v0;

    temp_t6 = entry->vromEnd;
    temp_t7 = entry->vromStart;
    entry = entry;
    temp_a1 = temp_t6 - temp_t7;
    sp1C = temp_a1;
    temp_v0 = THA_AllocEndAlign16(&globalCtx->state.heap, temp_a1);
    sp18 = temp_v0;
    DmaMgr_SendRequest0(temp_v0, entry->vromStart, sp1C);
    return temp_v0;
}

void func_8016927C(GlobalContext *globalCtx, s16 sParm2) {
    func_801434E4((GameState *) globalCtx, &globalCtx->skyboxCtx, sParm2);
    Kankyo_Init(globalCtx, &globalCtx->envCtx);
}

void func_801692C4(GameState *arg0, s8 arg1) {
    arg0->unk_18B48 = arg1;
    arg0->unk_18850 = 0;
    arg0->unk_18858 = 0;
    arg0->unk_1885C = 0;
    arg0->unk_18860 = 0;
    arg0->unk_18868 = 0;
    arg0->unk_18864 = 0;
    arg0->unk_1886C = 0;
    arg0->unk_18754 = 0;
    arg0->unk_18846 = 0;
    Object_InitBank(arg0, arg0 + 0x17D88);
    LightContext_Init((GlobalContext *) arg0, arg0 + 0x818);
    Door_InitContext(arg0, arg0 + 0x18760);
    Room_Init((GlobalContext *) arg0, arg0 + 0x186E0);
    gSaveContext.worldMapArea = 0;
    Scene_ProcessHeader((GlobalContext *) arg0, arg0->unk_B0);
    func_8016927C((GlobalContext *) arg0, (s16) arg0->unk_18874);
}

void Play_SceneInit(GlobalContext *arg0, s32 arg1, s32 arg2) {
    SceneTableEntry *sp1C;
    SceneTableEntry *temp_a1;

    temp_a1 = &gSceneTable[arg1];
    temp_a1->unk_D = 0;
    arg0->loadedScene = temp_a1;
    arg0->sceneNum = (s16) arg1;
    arg0->sceneConfig = temp_a1->drawConfig;
    sp1C = temp_a1;
    arg0->sceneSegment = Play_LoadScene(arg0, (RomFile *) temp_a1);
    sp1C->unk_D = 0;
    *(gSegments + 8) = (u32) (arg0->sceneSegment + 0x80000000);
    func_801692C4((GameState *) arg0, (s8) arg2);
    Room_AllocateAndLoad(arg0, &arg0->roomCtx);
}

void func_80169474(GlobalContext *globalCtx, Vec3f *v1, Vec3f *v2) {
    f32 sp1C;

    func_800B4EDC(globalCtx, v1, v2, &sp1C);
    v2->x = (v2->x * sp1C * 160.0f) + 160.0f;
    v2->y = 120.0f - (v2->y * sp1C * 120.0f);
}

s32 func_801694DC(GlobalContext *globalCtx) {
    s16 sp1E;
    void *sp18;
    Camera *temp_a0;
    s16 temp_v1;
    s16 phi_v1;
    s16 phi_v1_2;

    phi_v1 = 1;
loop_1:
    phi_v1_2 = phi_v1;
    if (globalCtx->cameraPtrs[phi_v1] != 0) {
        temp_v1 = phi_v1 + 1;
        phi_v1 = temp_v1;
        phi_v1_2 = temp_v1;
        if ((s32) temp_v1 < 4) {
            goto loop_1;
        }
    }
    if (phi_v1_2 == 4) {
        return -1;
    }
    temp_a0 = globalCtx + (phi_v1_2 * 0x178) + 0x220;
    globalCtx->cameraPtrs[phi_v1_2] = temp_a0;
    sp18 = globalCtx + (phi_v1_2 * 4);
    sp1E = phi_v1_2;
    Camera_Init(temp_a0, &globalCtx->view, &globalCtx->colCtx, globalCtx);
    globalCtx->cameraPtrs[phi_v1_2]->thisIdx = sp1E;
    return (s32) sp1E;
}

s32 Play_GetActiveCameraIndex(GlobalContext *globalCtx) {
    return (s32) globalCtx->activeCamera;
}

void func_80169590(GlobalContext *globalCtx, s16 param_2, s16 param_3) {
    s16 phi_v0;

    if (param_2 == -1) {
        phi_v0 = globalCtx->activeCamera;
    } else {
        phi_v0 = param_2;
    }
    if (param_3 == 7) {
        globalCtx->activeCamera = phi_v0;
    }
    func_800DE308(globalCtx->cameraPtrs[phi_v0], param_3, param_3, globalCtx);
}

void func_80169600(GlobalContext *globalCtx, s16 param_2) {
    void *sp18;
    Camera *temp_a0;
    s16 phi_v0;

    if (param_2 == -1) {
        phi_v0 = globalCtx->activeCamera;
    } else {
        phi_v0 = param_2;
    }
    temp_a0 = globalCtx->cameraPtrs[phi_v0];
    if (temp_a0 != 0) {
        sp18 = globalCtx + (phi_v0 * 4);
        func_800DE308(temp_a0, 0x100, (s16) globalCtx);
        globalCtx->cameraPtrs[phi_v0] = NULL;
    }
}

void func_80169668(GlobalContext *arg0) {
    s16 temp_s0;
    s16 phi_s0;

    phi_s0 = 1;
    do {
        if ((arg0 + (phi_s0 * 4))->unk_800 != 0) {
            func_80169600(arg0, phi_s0);
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 4);
    arg0->activeCamera = 0;
}

Camera *Play_GetCamera(GlobalContext *globalCtx, s16 index) {
    s16 phi_v1;

    if (index == -1) {
        phi_v1 = globalCtx->activeCamera;
    } else {
        phi_v1 = index;
    }
    return globalCtx->cameraPtrs[phi_v1];
}

s32 Play_CameraSetAtEye(GlobalContext *globalCtx, s16 camId, Vec3f *at, Vec3f *eye) {
    s32 sp24;
    Camera *temp_s0;
    Player *temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s16 phi_v0;

    if (camId == -1) {
        phi_v0 = globalCtx->activeCamera;
    } else {
        phi_v0 = camId;
    }
    temp_s0 = globalCtx->cameraPtrs[phi_v0];
    temp_v1_2 = func_800DFD78(temp_s0, 1, at) * 2;
    sp24 = temp_v1_2;
    temp_v1_3 = temp_v1_2 | func_800DFD78(temp_s0, 2, eye);
    sp24 = temp_v1_3;
    temp_v0 = temp_s0->player;
    temp_v1 = temp_v1_3;
    temp_s0->dist = Math3D_Distance(at, eye);
    if (temp_v0 != 0) {
        temp_s0->posOffset.x = at->x - temp_v0->actor.world.pos.x;
        temp_s0->posOffset.y = at->y - temp_v0->actor.world.pos.y;
        temp_s0->posOffset.z = at->z - temp_v0->actor.world.pos.z;
    } else {
        temp_s0->posOffset.z = 0.0f;
        temp_s0->posOffset.y = 0.0f;
        temp_s0->posOffset.x = 0.0f;
    }
    temp_s0->atLERPStepScale = 0.01f;
    return temp_v1;
}

s32 func_8016981C(void *arg0, s16 arg1, Vec3f *arg2, Vec3f *arg3, Vec3f *arg4) {
    Camera *temp_s0;
    Player *temp_v0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s16 phi_v0;

    if (arg1 == -1) {
        phi_v0 = arg0->unk_810;
    } else {
        phi_v0 = arg1;
    }
    temp_s0 = (arg0 + (phi_v0 * 4))->unk_800;
    temp_s1_2 = func_800DFD78(temp_s0, 1, arg2) * 2;
    temp_s1_3 = (temp_s1_2 | func_800DFD78(temp_s0, 2, arg3)) * 2;
    temp_s1 = temp_s1_3 | func_800DFD78(temp_s0, 4, arg4);
    temp_v0 = temp_s0->player;
    temp_s0->dist = Math3D_Distance(arg2, arg3);
    if (temp_v0 != 0) {
        temp_s0->posOffset.x = arg2->x - temp_v0->actor.world.pos.x;
        temp_s0->posOffset.y = arg2->y - temp_v0->actor.world.pos.y;
        temp_s0->posOffset.z = arg2->z - temp_v0->actor.world.pos.z;
    } else {
        temp_s0->posOffset.z = 0.0f;
        temp_s0->posOffset.y = 0.0f;
        temp_s0->posOffset.x = 0.0f;
    }
    temp_s0->atLERPStepScale = 0.01f;
    return temp_s1;
}

s32 func_80169940(s32 arg0, s16 arg1, ? arg2) {
    return func_800DFD78((arg0 + (arg1 * 4))->unk_800, 0x20, (Vec3f *) &arg2, arg0) & 1;
}

? func_80169988(void *arg0, s16 arg1, s16 arg2) {
    s16 phi_v1;

    if (arg1 == -1) {
        phi_v1 = arg0->unk_810;
    } else {
        phi_v1 = arg1;
    }
    (arg0 + (phi_v1 * 4))->unk_800->unk_15A = arg2;
    return 1;
}

void func_801699D4(GlobalContext *globalCtx, s16 arg1, s16 arg2) {
    s16 phi_v0;
    s16 phi_v1;

    if (arg2 == -1) {
        phi_v1 = globalCtx->activeCamera;
    } else {
        phi_v1 = arg2;
    }
    if (arg1 == -1) {
        phi_v0 = globalCtx->activeCamera;
    } else {
        phi_v0 = arg1;
    }
    func_800E007C(globalCtx->cameraPtrs[phi_v0], globalCtx->cameraPtrs[phi_v1], arg2, globalCtx);
}

void func_80169A50(void *arg0, s16 arg1, Actor *arg2, s16 arg3) {
    Camera *sp1C;
    Camera *temp_a0;
    s16 phi_v0;

    if (arg1 == -1) {
        phi_v0 = arg0->unk_810;
    } else {
        phi_v0 = arg1;
    }
    temp_a0 = (arg0 + (phi_v0 * 4))->unk_800;
    sp1C = temp_a0;
    func_800DE0EC(temp_a0, arg2);
    func_800DFAC8(temp_a0, arg3);
}

void func_80169AC0(GlobalContext *arg0, s16 arg1, s16 arg2) {
    func_800DFAC8(Play_GetCamera(arg0, arg1), arg2);
}

void func_80169AFC(GlobalContext *globalCtx, s16 camId, s16 arg2) {
    Camera *temp_v0;
    s16 temp_s0;
    s16 phi_a1;
    s16 phi_s0;

    if (camId == -1) {
        phi_a1 = globalCtx->activeCamera;
    } else {
        phi_a1 = camId;
    }
    func_80169600(globalCtx, phi_a1);
    phi_s0 = 1;
    do {
        if (globalCtx->cameraPtrs[phi_s0] != 0) {
            func_80169600(globalCtx, phi_s0);
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 4);
    if ((s32) arg2 <= 0) {
        func_80169590(globalCtx, 0, 7);
        globalCtx->cameraPtrs[0]->timer = 0;
        temp_v0 = globalCtx->cameraPtrs[0];
        temp_v0->childCamIdx = temp_v0->timer;
    }
}

s16 func_80169BC4(s32 arg0, s16 arg1) {
    void *temp_v1;

    temp_v1 = (arg0 + (arg1 * 4))->unk_800;
    if (temp_v1 != 0) {
        return temp_v1->unk_130;
    }
    return -1;
}

? func_80169BF8(s32 arg0, s16 arg1, s16 arg2) {
    void *temp_v0;

    temp_v0 = (arg0 + (arg1 * 4))->unk_800;
    if (temp_v0 != 0) {
        return 0;
    }
    if (arg2 != temp_v0->unk_130) {
        return 0;
    }
    if (temp_v0->unk_140 != 7) {
        return 2;
    }
    return 1;
}

u16 func_80169C64(void *arg0, s32 arg1) {
    return *(arg0->unk_18858 + (arg1 * 8));
}

void func_80169C84(void *arg0, s32 arg1) {
    Lib_SegmentedToVirtual((arg0->unk_18858 + (arg1 * 8))->unk_4);
}

s16 convert_scene_number_among_shared_scenes(s16 arg0) {
    if (arg0 == 0x18) {
        return 0x16;
    }
    if (arg0 == 0) {
        return 0x45;
    }
    if (arg0 == 0x5A) {
        return 0x50;
    }
    if (arg0 == 0x48) {
        return 0x4D;
    }
    if (arg0 == 0x5E) {
        return 0x5D;
    }
    if (arg0 == 0x59) {
        return 0x58;
    }
    return arg0;
}

void func_80169D40(GlobalContext *globalCtx) {
    GlobalContext *temp_a1;
    s16 temp_a0;
    s16 temp_a2;
    void *temp_v1;
    void *phi_a0;

    temp_a1 = globalCtx;
    temp_a0 = temp_a1->sceneNum;
    globalCtx = temp_a1;
    temp_v1 = &gSaveContext + (convert_scene_number_among_shared_scenes(temp_a0, temp_a1) * 0x14);
    temp_v1->unk_3F68 = (u32) globalCtx->actorCtx.chestFlags;
    temp_v1->unk_3F6C = (u32) globalCtx->actorCtx.switchFlags[0];
    temp_v1->unk_3F70 = (u32) globalCtx->actorCtx.switchFlags[1];
    temp_a2 = globalCtx->sceneNum;
    phi_a0 = temp_v1 + 0x3F68;
    if (temp_a2 == 0x18) {
        phi_a0 = &gSaveContext + (temp_a2 * 0x14) + 0x3F68;
    }
    phi_a0->unk_10 = (u32) globalCtx->actorCtx.collectibleFlags[0];
    phi_a0->unk_C = (u32) globalCtx->actorCtx.clearedRooms;
}

void func_80169DCC(GlobalContext *globalCtx, s32 arg1, u16 arg2, s32 arg3, s32 arg4, Vec3f *arg5, s16 arg6) {
    gSaveContext.respawn[arg1].entranceIndex = Entrance_CreateIndex((s32) arg2 >> 9, 0, arg2 & 0xF);
    gSaveContext.respawn[arg1].roomIndex = (u8) arg3;
    gSaveContext.respawn[arg1].pos.x = arg5->x;
    gSaveContext.respawn[arg1].pos.y = arg5->y;
    gSaveContext.respawn[arg1].yaw = arg6;
    gSaveContext.respawn[arg1].playerParams = (s16) arg4;
    gSaveContext.respawn[arg1].pos.z = arg5->z;
    gSaveContext.respawn[arg1].tempSwchFlags = globalCtx->actorCtx.switchFlags[2];
    gSaveContext.respawn[arg1].unk_18 = globalCtx->actorCtx.collectibleFlags[1];
    gSaveContext.respawn[arg1].tempCollectFlags = globalCtx->actorCtx.collectibleFlags[2];
}

void func_80169E6C(GlobalContext *globalCtx, s32 param_1, s32 param_2) {
    Actor *temp_v1;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (globalCtx->sceneNum != 7) {
        func_80169DCC(globalCtx, param_1, gSaveContext.entranceIndex & 0xFFFF, (s32) globalCtx->roomCtx.currRoom.num, param_2, (Vec3f *) &temp_v1->world, (s16) (s32) temp_v1->shape.rot.y);
    }
}

void func_80169ECC(void *arg0) {
    if (arg0->unk_A4 == 0x4F) {
        arg0->unk_1887A = 0x2060;
        gSaveContext.respawnFlag = -7;
    }
}

void func_80169EFC(GlobalContext *globalCtx) {
    gSaveContext.respawn[0].tempSwchFlags = globalCtx->actorCtx.switchFlags[2];
    gSaveContext.respawn[0].unk_18 = globalCtx->actorCtx.collectibleFlags[1];
    gSaveContext.respawn[0].tempCollectFlags = globalCtx->actorCtx.collectibleFlags[2];
    globalCtx->nextEntranceIndex = gSaveContext.respawn[0].entranceIndex;
    gSaveContext.respawnFlag = 1;
    func_80169ECC();
    globalCtx->sceneLoadFlag = 0x14;
    globalCtx->unk_1887F = 2;
}

void func_80169F78(void *arg0) {
    arg0->unk_1887A = (u16) gSaveContext.respawn[2].entranceIndex;
    gSaveContext.respawnFlag = -1;
    func_80169ECC();
    arg0->unk_18875 = 0x14;
    arg0->unk_1887F = 2;
}

void func_80169FDC(void) {
    func_80169F78();
}

s32 func_80169FFC(void *arg0) {
    return *arg0->unk_186E8 != 1;
}

s32 FrameAdvance_IsEnabled(GlobalContext *globalCtx) {
    return globalCtx->frameAdvCtx.enabled != 0;
}

? func_8016A02C(void *arg0, void *arg1, s16 *arg2) {
    s8 temp_v1;
    void *temp_v0;

    if (arg1->unk_2 != 0xA) {
        return 0;
    }
    temp_v0 = arg0->unk_18764 + (((s32) arg1->unk_1C >> 0xA) * 0x10);
    temp_v1 = temp_v0->unk_0;
    if (temp_v1 == temp_v0->unk_2) {
        return 0;
    }
    if (temp_v1 == arg1->unk_3) {
        *arg2 = arg1->unk_BE;
        return 1;
    }
    *arg2 = arg1->unk_BE + 0x8000;
    return 1;
}

? func_8016A0AC(GlobalContext *arg0, void *arg1) {
    WaterBox *sp3C;
    CollisionPoly *sp38;
    f32 sp30;
    f32 sp2C;
    ? sp28;
    CollisionContext *sp24;
    CollisionContext *temp_a1;

    temp_a1 = arg0 + 0x830;
    sp2C.unk_0 = arg1->unk_0;
    sp2C.unk_4 = (f32) arg1->unk_4;
    sp2C.unk_8 = (s32) arg1->unk_8;
    sp24 = temp_a1;
    if ((func_800CA1AC(arg0, temp_a1, sp2C, sp34, &sp30, &sp3C) == 1) && (arg1->unk_4 < sp30) && (func_800C40B4(sp24, &sp38, &sp28, &sp2C) != -32000.0f)) {
        return 1;
    }
    return 0;
}

s32 func_8016A168(void) {
    return D_801D0D50;
}

void func_8016A178(s32 arg0, s16 arg1) {
    ActorCutscene *temp_v0;
    s16 temp_s0;
    s16 temp_v1;
    s32 temp_s4;
    s16 *phi_s3;
    s16 phi_s0;
    s16 *phi_s1;
    s32 phi_s4;

    phi_s3 = arg0 + 0x1879C;
    phi_s1 = D_801D0D64;
    phi_s4 = 0;
    do {
        *phi_s3 = -1;
        phi_s0 = arg1;
        if (arg1 != -1) {
loop_2:
            temp_v0 = ActorCutscene_GetCutscene(phi_s0);
            temp_v1 = temp_v0->unk4;
            if (temp_v1 == *phi_s1) {
                if ((temp_v1 == -3) && (temp_v0->priority == 0x2BC)) {
                    temp_v0->priority = 0x226;
                }
                *phi_s3 = phi_s0;
            } else {
                temp_s0 = temp_v0->additionalCutscene;
                phi_s0 = temp_s0;
                if (temp_s0 != -1) {
                    goto loop_2;
                }
            }
        }
        temp_s4 = phi_s4 + 1;
        phi_s3 += 2;
        phi_s1 += 2;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0xA);
}

void func_8016A268(s32 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5) {
    gGameInfo->data[544] = arg1;
    gGameInfo->data[545] = arg2 & 0xFF;
    gGameInfo->data[546] = arg3 & 0xFF;
    gGameInfo->data[547] = (s16) arg4;
    gGameInfo->data[548] = (s16) arg5;
}

void Play_Init(GameState *thisx) {
    GraphicsContext *spA0;
    s32 sp94;
    Actor *sp90;
    u8 sp87;
    s32 sp60;
    PreRender *sp4C;
    Camera *sp48;
    View *sp44;
    Camera *sp40;
    CollisionContext *sp3C;
    Actor *temp_a1_4;
    Camera *temp_a0_3;
    CollisionContext *temp_a1_3;
    CollisionContext *temp_a2;
    GameState *temp_v0_3;
    PreRender *temp_a0_5;
    PreRender *temp_a0_6;
    PreRender *temp_a1_2;
    PreRender *temp_t0;
    TwoHeadArena *temp_a0_7;
    View *temp_a0_2;
    View *temp_a0_4;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_11;
    s32 temp_v0_7;
    s32 temp_v0_8;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v0_9;
    u32 temp_a2_2;
    u32 temp_a2_3;
    u32 temp_v1_2;
    u8 temp_v0_10;
    u8 temp_v0_13;
    u8 temp_v1;
    void *temp_v0_12;
    s32 phi_a0;
    s32 phi_a0_2;
    GameState *phi_v0;
    s32 phi_a1;
    Camera *phi_a0_3;
    PreRender *phi_t0;

    temp_v0 = gSaveContext.respawnFlag;
    spA0 = thisx->gfxCtx;
    if ((temp_v0 == -4) || (temp_v0 == -0x63)) {
        temp_v1 = gSaveContext.eventInf[2];
        if ((temp_v1 & 0x80) != 0) {
            gSaveContext.eventInf[2] = temp_v1 & 0x7F;
            thisx->running = 0;
            thisx->nextGameStateSize = 0x248;
            thisx->nextGameStateInit = Daytelop_Init;
            return;
        }
        gSaveContext.unk_3CA7 = 1;
        if (temp_v0 == -0x63) {
            gSaveContext.respawnFlag = 2;
        }
        goto block_7;
    }
    gSaveContext.unk_3CA7 = 0;
block_7:
    temp_v1_2 = gSaveContext.entranceIndex;
    if (temp_v1_2 == -1) {
        gSaveContext.entranceIndex = 0;
        thisx->running = 0;
        thisx->nextGameStateSize = 0x210;
        thisx->nextGameStateInit = Opening_Init;
        return;
    }
    temp_v0_2 = gSaveContext.nextCutsceneIndex;
    if ((temp_v0_2 == 0xFFEF) || (temp_v0_2 == 0xFFF0)) {
        temp_a0 = (s32) temp_v1_2 >> 9;
        phi_a0 = temp_a0;
        if ((gSaveContext.weekEventReg[33] & 0x80) != 0) {
            if (temp_a0 == 0x4D) {
                phi_a0 = 0x57;
            } else if (temp_a0 == 0x4A) {
                phi_a0 = 0x45;
            } else if (temp_a0 == 0x5A) {
                phi_a0 = 0x5B;
            } else if ((temp_a0 == 0x59) || (temp_a0 == 0x58) || (temp_a0 == 0x19) || (temp_a0 == 0x2F) || (temp_a0 == 0x68)) {
                gSaveContext.nextCutsceneIndex = 0xFFF0;
            }
        }
        phi_a0_2 = phi_a0;
        if ((gSaveContext.weekEventReg[20] & 2) != 0) {
            if (phi_a0 == 0x42) {
                phi_a0_2 = 6;
            } else if (phi_a0 == 0x43) {
                gSaveContext.nextCutsceneIndex = 0xFFF1;
            }
        }
        if (((gSaveContext.weekEventReg[52] & 0x20) != 0) && (phi_a0_2 == 0x10)) {
            gSaveContext.nextCutsceneIndex = 0xFFF2;
        }
        if (((gSaveContext.weekEventReg[55] & 0x80) != 0) && ((phi_a0_2 == 0x34) || (phi_a0_2 == 0x35))) {
            gSaveContext.nextCutsceneIndex = 0xFFF0;
        }
        if ((gSaveContext.inventory.items[*gItemSlots] != 0) && (phi_a0_2 == 0x2A) && (temp_v1_2 != 0x54A0)) {
            gSaveContext.nextCutsceneIndex = 0xFFF4;
        }
        gSaveContext.entranceIndex = Entrance_CreateIndex(phi_a0_2, ((s32) temp_v1_2 >> 4) & 0x1F, temp_v1_2 & 0xF);
    }
    Game_ResizeHeap(thisx, 0U);
    func_80163804((GlobalContext *) thisx);
    ShrinkWindow_Init();
    temp_a0_2 = thisx + 0xB8;
    sp44 = temp_a0_2;
    View_Init(temp_a0_2, spA0);
    func_801A3EC0(0);
    Quake_Init();
    Quake2_Init((GlobalContext *) thisx);
    phi_v0 = thisx;
    phi_a1 = 0;
    do {
        temp_a1 = phi_a1 + 1;
        temp_v0_3 = phi_v0 + 4;
        temp_v0_3->unk_7FC = 0;
        phi_v0 = temp_v0_3;
        phi_a1 = temp_a1;
    } while (temp_a1 < 4);
    temp_a0_3 = thisx + 0x220;
    temp_a2 = thisx + 0x830;
    sp3C = temp_a2;
    sp40 = temp_a0_3;
    Camera_Init(temp_a0_3, sp44, temp_a2, (GlobalContext *) thisx);
    func_800DE308(temp_a0_3, 7);
    phi_a0_3 = thisx + 0x398;
    phi_t0 = NULL;
    do {
        sp48 = phi_a0_3;
        sp4C = phi_t0;
        Camera_Init(phi_a0_3, sp44, sp3C, (GlobalContext *) thisx);
        func_800DE308(phi_a0_3, 0x100);
        temp_t0 = phi_t0 + 0x178;
        phi_a0_3 += 0x178;
        phi_t0 = temp_t0;
    } while (temp_t0 != 0x468);
    thisx->unk_800 = sp40;
    sp40->uid = 0;
    thisx->unk_810 = 0;
    func_800DFF18(sp40, 0x7F);
    Sram_Alloc(thisx, thisx + 0x46B8);
    func_801AAAA0((GlobalContext *) thisx);
    Message_Init((GlobalContext *) thisx);
    func_801AA610((GlobalContext *) thisx);
    func_800F0390((GlobalContext *) thisx);
    EffFootmark_Init((GlobalContext *) thisx);
    Effect_Init((GlobalContext *) thisx);
    EffectSS_Init((GlobalContext *) thisx, 0x64);
    CollisionCheck_InitContext((GlobalContext *) thisx, thisx + 0x18884);
    temp_a0_4 = thisx + 0x17104;
    sp44 = temp_a0_4;
    SkelAnime_AnimationCtxReset((AnimationContext *) temp_a0_4);
    Cutscene_Init((GlobalContext *) thisx, thisx + 0x1F24);
    temp_v0_4 = gSaveContext.nextCutsceneIndex;
    if (temp_v0_4 != 0xFFEF) {
        gSaveContext.cutscene = (s32) temp_v0_4;
        gSaveContext.nextCutsceneIndex = 0xFFEF;
    }
    if (gSaveContext.cutscene == 0xFFFD) {
        gSaveContext.cutscene = 0;
    }
    temp_v0_5 = gSaveContext.nextDayTime;
    if (temp_v0_5 != 0xFFFF) {
        gSaveContext.time = temp_v0_5;
        gSaveContext.environmentTime = temp_v0_5;
    }
    temp_v0_6 = gSaveContext.time;
    if (((s32) temp_v0_6 >= 0xC000) || ((s32) temp_v0_6 < 0x4555)) {
        gSaveContext.isNight = 1;
    } else {
        gSaveContext.isNight = 0;
    }
    nop_800EDDB0((GlobalContext *) thisx);
    temp_v0_7 = gSaveContext.gameMode;
    if (((temp_v0_7 != 0) && (temp_v0_7 != 1)) || (gSaveContext.cutscene >= 0xFFF0)) {
        gSaveContext.unk_3DC0 = 0;
        func_80115D5C(thisx);
        temp_t8 = gSaveContext.cutscene;
        gSaveContext.cutscene = 0;
        gSaveContext.sceneSetupIndex = (temp_t8 & 0xF) + 1;
    } else {
        gSaveContext.sceneSetupIndex = 0;
    }
    temp_v0_8 = gSaveContext.sceneSetupIndex;
    sp87 = (u8) temp_v0_8;
    sp60 = Entrance_GetSceneNumAbsolute((temp_v0_8 + gSaveContext.entranceIndex) & 0xFFFF);
    Play_SceneInit((GlobalContext *) thisx, sp60, Entrance_GetSpawnNum((gSaveContext.sceneSetupIndex + gSaveContext.entranceIndex) & 0xFFFF));
    func_801639EC((GlobalContext *) thisx);
    func_80121FC4((GlobalContext *) thisx);
    temp_v0_9 = gSaveContext.nextDayTime;
    if (temp_v0_9 != 0xFFFF) {
        if (temp_v0_9 == 0x8000) {
            gSaveContext.day += 1;
            gSaveContext.daysElapsed += 1;
            gSaveContext.dogIsLost = 1;
            gSaveContext.nextDayTime = 0xFFFE;
        } else {
            gSaveContext.nextDayTime = 0xFFFD;
        }
    }
    func_80165608();
    gGameInfo->data[190] = 0;
    temp_a0_5 = thisx + 0x18B4C;
    gGameInfo->data[185] = 0;
    sp4C = temp_a0_5;
    PreRender_Init(temp_a0_5);
    PreRender_SetValuesSave(temp_a0_5, (u32) D_801FBBCC, (u32) D_801FBBCE, NULL, NULL, NULL);
    PreRender_SetValues(temp_a0_5, (u32) D_801FBBCC, (u32) D_801FBBCE, NULL, NULL);
    thisx->unk_18E64 = (s32) D_801FBB90;
    thisx->unk_18E5C = D_80780000;
    thisx->unk_18E68 = D_80784600;
    thisx->unk_18E58 = D_80784600;
    thisx->unk_18E60 = D_80784600;
    D_801F6D10 = 0;
    thisx->unk_18B4A = 0;
    D_801D0D54 = 0;
    func_80122660(thisx + 0x828);
    Rand_Seed((u32) osGetTime());
    SysMatrix_StateAlloc(thisx);
    thisx->main = (void (*)(GameState *)) Play_Update;
    thisx->destroy = (void (*)(GameState *)) Play_Fini;
    thisx->unk_18875 = -0x14;
    thisx->unk_18876 = 0;
    thisx->unk_18878 = 0;
    thisx->unk_18845 = 0;
    thisx->unk_18844 = 0;
    if (gSaveContext.gameMode != 1) {
        temp_v0_10 = gSaveContext.nextTransition;
        if (temp_v0_10 == 0xFF) {
            thisx->unk_1887F = (s8) ((Entrance_GetTransitionFlags((gSaveContext.entranceIndex + sp87) & 0xFFFF) >> 7) & 0x7F);
        } else {
            thisx->unk_1887F = temp_v0_10;
            gSaveContext.nextTransition = 0xFF;
        }
    } else {
        thisx->unk_1887F = 2;
    }
    temp_a0_6 = thisx + 0x18E48;
    sp4C = temp_a0_6;
    TransitionFade_Init((void *) temp_a0_6);
    TransitionFade_SetType(temp_a0_6, 3);
    TransitionFade_SetColor(temp_a0_6, 0xA0A0A0FF);
    TransitionFade_Start(temp_a0_6);
    func_801418B0(&D_801F6D18);
    D_801F6D30.a = 0;
    D_801F6D4C = &D_801F6D38;
    func_80140E80(&D_801F6D38);
    D_801F6D4C->unk_8 = 0.0f;
    D_801F6D4C->unk_0 = 1;
    D_801F6D4C->unk_C = 0;
    D_801F6D4C->unk_D = 0;
    D_801F6D4C->unk_E = 0;
    D_801F6D4C->unk_F = 0;
    D_801F6D4C->unk_10 = 0;
    D_801F6D4C->unk_11 = 0;
    D_801F6D4C->unk_12 = 0;
    D_801F6D4C->unk_13 = 0;
    func_800F12D0((GlobalContext *) thisx);
    temp_a0_7 = &thisx->heap;
    sp4C = (PreRender *) temp_a0_7;
    THA_GetSize(temp_a0_7);
    temp_v0_11 = THA_GetSize(temp_a0_7);
    sp94 = temp_v0_11;
    temp_v0_12 = THA_AllocEndAlign16(temp_a0_7, (u32) temp_v0_11);
    temp_a2_2 = (temp_v0_12 + 8) & ~0xF;
    MainHeap_Init(temp_a2_2, (sp94 - temp_a2_2) + temp_v0_12);
    temp_a1_2 = thisx + 0x1CA0;
    sp4C = temp_a1_2;
    sp48 = thisx + 0x18000;
    Actor_Init(thisx, temp_a1_2, thisx->unk_18850);
    temp_a1_3 = thisx + 0x186E0;
    sp3C = temp_a1_3;
    if (Room_HandleLoadCallbacks((GlobalContext *) thisx, (RoomContext *) temp_a1_3) == 0) {
        do {

        } while (Room_HandleLoadCallbacks((GlobalContext *) thisx, (RoomContext *) sp3C) == 0);
    }
    if ((((s32) gSaveContext.day % 5) != 0) && ((temp_v0_13 = sp48->unk_6E3, (temp_v0_13 == 1)) || (temp_v0_13 == 5))) {
        Actor_Spawn((ActorContext *) sp4C, (GlobalContext *) thisx, 0x15A, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    }
    temp_a1_4 = thisx->unk_1CCC;
    sp90 = temp_a1_4;
    func_800DE0EC(sp40, temp_a1_4);
    D_801D0D50 = 0;
    temp_a2_3 = temp_a1_4->params & 0xFF;
    if (temp_a2_3 != 0xFF) {
        func_800DFB14(sp40, temp_a2_3);
    }
    func_800F15D8(sp40);
    func_801129E4(thisx);
    func_800FB758(thisx);
    gSaveContext.seqIndex = thisx->unk_814;
    gSaveContext.nightSeqIndex = thisx->unk_815;
    func_80135EE8((GlobalContext *) thisx, (AnimationContext *) sp44);
    func_800EDBE0((GlobalContext *) thisx);
    gSaveContext.respawnFlag = 0;
    D_801F6DFC = 0;
    func_8016FC78(D_801F6D50);
}
