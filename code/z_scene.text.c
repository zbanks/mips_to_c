struct _mips2c_stack_Door_InitContext {};           /* size 0x0 */

struct _mips2c_stack_Entrance_CreateIndex {};       /* size 0x0 */

struct _mips2c_stack_Entrance_CreateIndexFromSpawn {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Object_GetIndex {};            /* size 0x0 */

struct _mips2c_stack_Object_InitBank {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Object_IsLoaded {};            /* size 0x0 */

struct _mips2c_stack_Object_LoadAll {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Object_Spawn {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ u32 sp18;                            /* inferred */
    /* 0x1C */ u32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Object_UpdateBank {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_Scene_HeaderCmd09 {};          /* size 0x0 */

struct _mips2c_stack_Scene_HeaderCmd1D {};          /* size 0x0 */

struct _mips2c_stack_Scene_HeaderCmdActorCutsceneCamList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdActorCutsceneList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdActorList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdAltHeaderList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdAnimatedMaterials {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdColHeader {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Scene_HeaderCmdCutsceneList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdEchoSetting {}; /* size 0x0 */

struct _mips2c_stack_Scene_HeaderCmdEntranceList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdEnvLightSettings {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdExitList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdLightList {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Scene_HeaderCmdMesh {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdMiniMap {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdMiniMapCompassInfo {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdObjectList {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_Scene_HeaderCmdPathList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdRoomBehavior {}; /* size 0x0 */

struct _mips2c_stack_Scene_HeaderCmdRoomList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdSetAreaVisitedFlag {}; /* size 0x0 */

struct _mips2c_stack_Scene_HeaderCmdSkyboxDisables {}; /* size 0x0 */

struct _mips2c_stack_Scene_HeaderCmdSkyboxSettings {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdSoundSettings {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdSpawnList {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ ObjectContext *sp28;                 /* inferred */
    /* 0x2C */ char pad2C[0x8];                     /* maybe part of sp28[3]? */
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_Scene_HeaderCmdSpecialFiles {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdTimeSettings {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Scene_HeaderCmdTransiActorList {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Scene_HeaderCmdWindSettings {}; /* size 0x0 */

struct _mips2c_stack_Scene_LoadAreaTextures {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ u32 sp18;                            /* inferred */
    /* 0x1C */ u32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Scene_ProcessHeader {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Scene_SetExitFade {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8012F73C {};              /* size 0x0 */

void func_80160AF8(Actor *thisx, GlobalContext *globalCtx); /* extern */
void func_80160B40(Actor *thisx, GlobalContext *globalCtx); /* extern */
void func_80160B80(Actor *thisx, GlobalContext *globalCtx); /* extern */
void func_80160BC0(Actor *thisx, GlobalContext *globalCtx); /* extern */
extern void ArmsHook_SetupAction;
extern void BgCtowerGear_Splash;
extern void BgIkanaShutter_AllSwitchesPressed;
extern void BgKin2Fence_CheckHitMask;
extern void DmChar07_SetupAction;
extern void DoorAna_SetupAction;
extern void DoorSpiral_SetupAction;
extern void EnClearTag_CreateDebrisEffect;
extern void EnFg_UpdateAnimation;
extern void EnFsn_TestItemSelected;
extern void EnGirlA_SetupAction;
extern void EnMaYts_UpdateEyes;
extern void EnOkarinaEffect_SetupAction;
extern void EnOssan_SetupAction;
extern void EnSob1_ChangeAnim;
extern void EnSuttari_UpdateCollider;
extern void EnTrt_ChangeAnim;
extern void EnWeatherTag_SetupAction;
extern void ObjHgdoor_SetChild;
extern void ObjKibako2_ContainsSkulltula;
extern void ObjLightswitch_InitCollider;
extern void ObjMakeoshihiki_GetChildSpawnPointIndex;
extern void ObjTokeiStep_SetSysMatrix;
extern void TGSw_ActionDecider;
extern void func_80862B70;
extern void func_80867BD0;
extern void func_8087B730;
extern void func_8089F4E0;
extern void func_808A08F0;
extern void func_808A5050;
extern void func_808B53C0;
extern void func_808C3C00;
extern void func_808D78D0;
extern void func_808D8940;
extern void func_808DE5C0;
extern void func_808E2600;
extern void func_808F30B0;
extern void func_808F8AA0;
extern void func_808FC6C0;
extern void func_80917290;
extern void func_80918B40;
extern void func_80919F30;
extern void func_8091A8A0;
extern void func_8091C0A0;
extern void func_8091D630;
extern void func_809275C0;
extern void func_8092C5C0;
extern void func_8092E510;
extern void func_809349E0;
extern void func_80936CF0;
extern void func_809393B0;
extern void func_8093ABD0;
extern void func_8093D3C0;
extern void func_8093E8A0;
extern void func_8094DEE0;
extern void func_80952C50;
extern void func_80953A90;
extern void func_80954960;
extern void func_809592E0;
extern void func_8095A510;
extern void func_8095D6E0;
extern void func_80960CF0;
extern void func_809616E0;
extern void func_809679D0;
extern void func_80989140;
extern void func_8098CA20;
extern void func_8098CE40;
extern void func_8098F040;
extern void func_8098F800;
extern void func_809947B0;
extern void func_80997A90;
extern void func_8099C290;
extern void func_8099E790;
extern void func_8099FA40;
extern void func_809A0F20;
extern void func_809A1BB0;
extern void func_809A33E0;
extern void func_809A41C0;
extern void func_809A4E00;
extern void func_809A9110;
extern void func_809AAE60;
extern void func_809ABDE0;
extern void func_809B1550;
extern void func_809B20F0;
extern void func_809C10B0;
extern void func_809C64C0;
extern void func_809CB290;
extern void func_809CC060;
extern void func_809CF350;
extern void func_809D0530;
extern void func_809DA1D0;
extern void func_809E2760;
extern void func_809EC040;
extern void func_809EE4E0;
extern void func_809F2120;
extern void func_809F4980;
extern void func_80A10FD0;
extern void func_80A16D40;
extern void func_80A1A500;
extern void func_80A1B3D0;
extern void func_80A1DA50;
extern void func_80A21150;
extern void func_80A22D40;
extern void func_80A23090;
extern void func_80A29A80;
extern void func_80A2E960;
extern void func_80A33B00;
extern void func_80A34700;
extern void func_80A35510;
extern void func_80A38190;
extern void func_80A389A0;
extern void func_80A396B0;
extern void func_80A3C4E0;
extern void func_80A3D680;
extern void func_80A3E7E0;
extern void func_80A41D70;
extern void func_80A4CA90;
extern void func_80A4FDD0;
extern void func_80A50D40;
extern void func_80A514F0;
extern void func_80A52530;
extern void func_80A53BE0;
extern void func_80A587A0;
extern void func_80A5B160;
extern void func_80A66570;
extern void func_80A687A0;
extern void func_80A6BF90;
extern void func_80A711D0;
extern void func_80A7C990;
extern void func_80A811D0;
extern void func_80A84CD0;
extern void func_80A85620;
extern void func_80A90730;
extern void func_80A94A30;
extern void func_80A9ACD0;
extern void func_80A9FDB0;
extern void func_80AA5580;
extern void func_80AAAE30;
extern void func_80AAB4A0;
extern void func_80AABC40;
extern void func_80AAC5A0;
extern void func_80AAF050;
extern void func_80AB1E10;
extern void func_80AB2790;
extern void func_80AB4D10;
extern void func_80ABBFC0;
extern void func_80ABDCA0;
extern void func_80AC94C0;
extern void func_80ACAB10;
extern void func_80ACB6A0;
extern void func_80ACC470;
extern void func_80AD0830;
extern void func_80AD3380;
extern void func_80AD9240;
extern void func_80ADADD0;
extern void func_80ADE230;
extern void func_80ADFCA0;
extern void func_80AE1650;
extern void func_80AE6130;
extern void func_80AE9A20;
extern void func_80AEC460;
extern void func_80AF3910;
extern void func_80AF3F70;
extern void func_80AF6DE0;
extern void func_80AF7B40;
extern void func_80AFC960;
extern void func_80AFD380;
extern void func_80AFD990;
extern void func_80B01990;
extern void func_80B02CD0;
extern void func_80B0F5E0;
extern void func_80B12430;
extern void func_80B15790;
extern void func_80B22C00;
extern void func_80B23D50;
extern void func_80B24630;
extern void func_80B28370;
extern void func_80B2B830;
extern void func_80B2FB10;
extern void func_80B31590;
extern void func_80B34F70;
extern void func_80B38E20;
extern void func_80B3AC50;
extern void func_80B3CA20;
extern void func_80B3DFF0;
extern void func_80B40080;
extern void func_80B439B0;
extern void func_80B50410;
extern void func_80B53840;
extern void func_80B5B2E0;
extern void func_80B6E020;
extern void func_80B6EFA0;
extern void func_80B6FB30;
extern void func_80B708C0;
extern void func_80B73A90;
extern void func_80B76030;
extern void func_80B77770;
extern void func_80B7EA60;
extern void func_80B7F730;
extern void func_80B802E0;
extern void func_80B823B0;
extern void func_80B83C80;
extern void func_80B91F20;
extern void func_80B93310;
extern void func_80B95E20;
extern void func_80B965D0;
extern void func_80B9AF50;
extern void func_80B9B6E0;
extern void func_80B9C450;
extern void func_80BA15A0;
extern void func_80BA36C0;
extern void func_80BA5400;
extern void func_80BA8820;
extern void func_80BB16D0;
extern void func_80BB85A0;
extern void func_80BBCA80;
extern void func_80BBFDB0;
extern void func_80BC1900;
extern void func_80BC3980;
extern void func_80BC47B0;
extern void func_80BCABF0;
extern void func_80BCD000;
extern void func_80BD2A30;
extern void func_80BD4720;
extern void func_80BD5E00;
extern void func_80BD6910;
extern void func_80BDC270;
extern void func_80BDE1A0;
extern void func_80BE04E0;
extern void func_80BE1C80;
extern void func_80BE2260;
extern void func_80BE4930;
extern void func_80BE61D0;
extern void func_80BEC240;
extern void func_80BECBE0;
extern void func_80BF1150;
extern void func_80BF3920;
extern void func_80BFD2E0;
extern void func_80C07C80;
extern void func_80C09ED0;
extern void func_80C0A740;
extern void func_80C0B290;
extern void func_80C18240;
extern void func_80C18B90;
extern void func_80C192A0;
extern void func_80C1ADC0;
extern void func_80C1BD90;
extern void func_80C1C410;
extern void func_80C1D410;
extern void func_80C1DED0;
extern void func_80C1E290;
extern void func_80C22350;
extern void func_80C24360;
extern void func_80C25360;
extern void func_80C258A0;
extern void func_80C25D40;
static ? sceneHeaderFuncTable;                      /* unable to generate initializer */
static ? sceneTextureFiles;                         /* unable to generate initializer */
static ? tatlMessageFiles;                          /* unable to generate initializer */
ActorInit En_A_Obj_InitVars = {
    0x26,
    6,
    9,
    1,
    0x194,
    ((void (*)(Actor *, GlobalContext *)) EnAObj_Init),
    ((void (*)(Actor *, GlobalContext *)) EnAObj_Destroy),
    ((void (*)(Actor *, GlobalContext *)) EnAObj_Update),
    ((void (*)(Actor *, GlobalContext *)) EnAObj_Draw),
};
ActorInit En_Item00_InitVars = {
    0xE,
    8,
    0,
    1,
    0x1A8,
    EnItem00_Init,
    EnItem00_Destroy,
    EnItem00_Update,
    EnItem00_Draw,
};
ActorInit Player_InitVars = {
    0,
    2,
    0x86200039,
    1,
    0xD78,
    func_80160AF8,
    func_80160B40,
    func_80160B80,
    func_80160BC0,
};
ActorOverlay gActorOverlayTable[690] = {
    {0, 0, NULL, NULL, NULL, &Player_InitVars, NULL, 0, 0},
    {
        (u32) _ovl_En_TestSegmentRomStart,
        (u32) _ovl_En_GirlASegmentRomStart,
        &func_80862B70,
        &EnGirlA_SetupAction,
        NULL,
        &En_Test_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_GirlASegmentRomStart,
        (u32) _ovl_En_PartSegmentRomStart,
        &EnGirlA_SetupAction,
        (void *) EnPart_Init,
        NULL,
        &En_GirlA_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PartSegmentRomStart,
        (u32) _ovl_En_LightSegmentRomStart,
        (void *) EnPart_Init,
        (void *) EnLight_Init,
        NULL,
        &En_Part_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_LightSegmentRomStart,
        (u32) _ovl_En_DoorSegmentRomStart,
        (void *) EnLight_Init,
        (void *) EnDoor_Init,
        NULL,
        &En_Light_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DoorSegmentRomStart,
        (u32) _ovl_En_BoxSegmentRomStart,
        (void *) EnDoor_Init,
        &func_80867BD0,
        NULL,
        &En_Door_InitVars,
        NULL,
        2,
        0,
    },
    {
        (u32) _ovl_En_BoxSegmentRomStart,
        (u32) _ovl_En_PametfrogSegmentRomStart,
        &func_80867BD0,
        (void *) EnPametfrog_Init,
        NULL,
        &En_Box_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PametfrogSegmentRomStart,
        (u32) _ovl_En_OkutaSegmentRomStart,
        (void *) EnPametfrog_Init,
        (void *) EnOkuta_Init,
        NULL,
        &En_Pametfrog_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_OkutaSegmentRomStart,
        (u32) _ovl_En_BomSegmentRomStart,
        (void *) EnOkuta_Init,
        (void *) EnBom_Init,
        NULL,
        &En_Okuta_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BomSegmentRomStart,
        (u32) _ovl_En_WallmasSegmentRomStart,
        (void *) EnBom_Init,
        (void *) EnWallmas_Init,
        NULL,
        &En_Bom_InitVars,
        NULL,
        2,
        0,
    },
    {
        (u32) _ovl_En_WallmasSegmentRomStart,
        (u32) _ovl_En_DodongoSegmentRomStart,
        (void *) EnWallmas_Init,
        (void *) EnDodongo_Init,
        NULL,
        &En_Wallmas_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DodongoSegmentRomStart,
        (u32) _ovl_En_FireflySegmentRomStart,
        (void *) EnDodongo_Init,
        (void *) EnFirefly_Init,
        NULL,
        &En_Dodongo_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_FireflySegmentRomStart,
        (u32) _ovl_En_HorseSegmentRomStart,
        (void *) EnFirefly_Init,
        &func_8087B730,
        NULL,
        &En_Firefly_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HorseSegmentRomStart,
        (u32) _ovl_En_ArrowSegmentRomStart,
        &func_8087B730,
        (void *) EnArrow_Init,
        NULL,
        &En_Horse_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, &En_Item00_InitVars, NULL, 0, 0},
    {
        (u32) _ovl_En_ArrowSegmentRomStart,
        (u32) _ovl_En_ElfSegmentRomStart,
        (void *) EnArrow_Init,
        (void *) EnElf_SetupAction,
        NULL,
        &En_Arrow_InitVars,
        NULL,
        2,
        0,
    },
    {
        (u32) _ovl_En_ElfSegmentRomStart,
        (u32) _ovl_En_NiwSegmentRomStart,
        (void *) EnElf_SetupAction,
        (void *) EnNiw_Init,
        NULL,
        &En_Elf_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_NiwSegmentRomStart,
        (u32) _ovl_En_TiteSegmentRomStart,
        (void *) EnNiw_Init,
        (void *) EnTite_Init,
        NULL,
        &En_Niw_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TiteSegmentRomStart,
        (u32) _ovl_En_PeehatSegmentRomStart,
        (void *) EnTite_Init,
        (void *) EnPeehat_Init,
        NULL,
        &En_Tite_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_PeehatSegmentRomStart,
        (u32) _ovl_En_HollSegmentRomStart,
        (void *) EnPeehat_Init,
        (void *) EnHoll_SetupAction,
        NULL,
        &En_Peehat_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ButteSegmentRomStart,
        (u32) _ovl_En_FishSegmentRomStart,
        &func_8091C0A0,
        &func_8091D630,
        NULL,
        &En_Butte_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_InsectSegmentRomStart,
        (u32) _ovl_En_ButteSegmentRomStart,
        &func_8091A8A0,
        &func_8091C0A0,
        NULL,
        &En_Insect_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_FishSegmentRomStart,
        (u32) _ovl_Item_EtceteraSegmentRomStart,
        &func_8091D630,
        (void *) ItemEtcetera_SetupAction,
        NULL,
        &En_Fish_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HollSegmentRomStart,
        (u32) _ovl_En_DinofosSegmentRomStart,
        (void *) EnHoll_SetupAction,
        (void *) EnDinofos_Init,
        NULL,
        &En_Holl_InitVars,
        NULL,
        2,
        0,
    },
    {
        (u32) _ovl_En_DinofosSegmentRomStart,
        (u32) _ovl_En_HataSegmentRomStart,
        (void *) EnDinofos_Init,
        (void *) EnHata_Init,
        NULL,
        &En_Dinofos_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HataSegmentRomStart,
        (u32) _ovl_En_Zl1SegmentRomStart,
        (void *) EnHata_Init,
        (void *) EnZl1_Init,
        NULL,
        &En_Hata_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Zl1SegmentRomStart,
        (u32) _ovl_En_ViewerSegmentRomStart,
        (void *) EnZl1_Init,
        (void *) EnViewer_SetupAction,
        NULL,
        &En_Zl1_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ViewerSegmentRomStart,
        (u32) _ovl_En_BubbleSegmentRomStart,
        (void *) EnViewer_SetupAction,
        &func_8089F4E0,
        NULL,
        &En_Viewer_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BubbleSegmentRomStart,
        (u32) _ovl_Door_ShutterSegmentRomStart,
        &func_8089F4E0,
        &func_808A08F0,
        NULL,
        &En_Bubble_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Door_ShutterSegmentRomStart,
        (u32) _ovl_En_BoomSegmentRomStart,
        &func_808A08F0,
        (void *) EnBoom_SetupAction,
        NULL,
        &Door_Shutter_InitVars,
        NULL,
        2,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_BoomSegmentRomStart,
        (u32) _ovl_En_Torch2SegmentRomStart,
        (void *) EnBoom_SetupAction,
        (void *) EnTorch2_Init,
        NULL,
        &En_Boom_InitVars,
        NULL,
        2,
        0,
    },
    {
        (u32) _ovl_En_Torch2SegmentRomStart,
        (u32) _ovl_En_MinifrogSegmentRomStart,
        (void *) EnTorch2_Init,
        (void *) EnMinifrog_Init,
        NULL,
        &En_Torch2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_MinifrogSegmentRomStart,
        (u32) _ovl_En_StSegmentRomStart,
        (void *) EnMinifrog_Init,
        &func_808A5050,
        NULL,
        &En_Minifrog_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_StSegmentRomStart,
        (u32) _ovl_Obj_WturnSegmentRomStart,
        &func_808A5050,
        (void *) ObjWturn_Init,
        NULL,
        &En_St_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, &En_A_Obj_InitVars, NULL, 0, 0},
    {
        (u32) _ovl_Obj_WturnSegmentRomStart,
        (u32) _ovl_En_River_SoundSegmentRomStart,
        (void *) ObjWturn_Init,
        (void *) EnRiverSound_Init,
        NULL,
        &Obj_Wturn_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_River_SoundSegmentRomStart,
        (u32) _ovl_En_OssanSegmentRomStart,
        (void *) EnRiverSound_Init,
        &EnOssan_SetupAction,
        NULL,
        &En_River_Sound_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_OssanSegmentRomStart,
        (u32) _ovl_En_FamosSegmentRomStart,
        &EnOssan_SetupAction,
        (void *) EnFamos_Init,
        NULL,
        &En_Ossan_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_FamosSegmentRomStart,
        (u32) _ovl_En_BombfSegmentRomStart,
        (void *) EnFamos_Init,
        (void *) EnBombf_SetupAction,
        NULL,
        &En_Famos_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_BombfSegmentRomStart,
        (u32) _ovl_En_AmSegmentRomStart,
        (void *) EnBombf_SetupAction,
        (void *) EnAm_Init,
        NULL,
        &En_Bombf_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_AmSegmentRomStart,
        (u32) _ovl_En_DekubabaSegmentRomStart,
        (void *) EnAm_Init,
        (void *) EnDekubaba_Init,
        NULL,
        &En_Am_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DekubabaSegmentRomStart,
        (u32) _ovl_En_M_Fire1SegmentRomStart,
        (void *) EnDekubaba_Init,
        (void *) EnMFire1_Init,
        NULL,
        &En_Dekubaba_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_M_Fire1SegmentRomStart,
        (u32) _ovl_En_M_ThunderSegmentRomStart,
        (void *) EnMFire1_Init,
        &func_808B53C0,
        NULL,
        &En_M_Fire1_InitVars,
        NULL,
        2,
        0,
    },
    {
        (u32) _ovl_En_M_ThunderSegmentRomStart,
        (u32) _ovl_Bg_BreakwallSegmentRomStart,
        &func_808B53C0,
        (void *) BgBreakwall_SetupAction,
        NULL,
        &En_M_Thunder_InitVars,
        NULL,
        2,
        0,
    },
    {
        (u32) _ovl_Bg_BreakwallSegmentRomStart,
        (u32) _ovl_Door_Warp1SegmentRomStart,
        (void *) BgBreakwall_SetupAction,
        (void *) DoorWarp1_SetupAction,
        NULL,
        &Bg_Breakwall_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Door_Warp1SegmentRomStart,
        (u32) _ovl_Obj_SyokudaiSegmentRomStart,
        (void *) DoorWarp1_SetupAction,
        (void *) ObjSyokudai_Init,
        NULL,
        &Door_Warp1_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_SyokudaiSegmentRomStart,
        (u32) _ovl_Item_B_HeartSegmentRomStart,
        (void *) ObjSyokudai_Init,
        (void *) ItemBHeart_Init,
        NULL,
        &Obj_Syokudai_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Item_B_HeartSegmentRomStart,
        (u32) _ovl_En_DekunutsSegmentRomStart,
        (void *) ItemBHeart_Init,
        (void *) EnDekunuts_Init,
        NULL,
        &Item_B_Heart_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DekunutsSegmentRomStart,
        (u32) _ovl_En_BbfallSegmentRomStart,
        (void *) EnDekunuts_Init,
        (void *) EnBbfall_Init,
        NULL,
        &En_Dekunuts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BbfallSegmentRomStart,
        (u32) _ovl_Arms_HookSegmentRomStart,
        (void *) EnBbfall_Init,
        &ArmsHook_SetupAction,
        NULL,
        &En_Bbfall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Arms_HookSegmentRomStart,
        (u32) _ovl_En_BbSegmentRomStart,
        &ArmsHook_SetupAction,
        (void *) EnBb_Init,
        NULL,
        &Arms_Hook_InitVars,
        NULL,
        2,
        0,
    },
    {
        (u32) _ovl_En_BbSegmentRomStart,
        (u32) _ovl_Bg_Keikoku_SprSegmentRomStart,
        (void *) EnBb_Init,
        (void *) BgKeikokuSpr_Init,
        NULL,
        &En_Bb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Keikoku_SprSegmentRomStart,
        (u32) _ovl_En_Wood02SegmentRomStart,
        (void *) BgKeikokuSpr_Init,
        &func_808C3C00,
        NULL,
        &Bg_Keikoku_Spr_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Wood02SegmentRomStart,
        (u32) _ovl_En_DeathSegmentRomStart,
        &func_808C3C00,
        (void *) EnDeath_Init,
        NULL,
        &En_Wood02_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_DeathSegmentRomStart,
        (u32) _ovl_En_MinideathSegmentRomStart,
        (void *) EnDeath_Init,
        (void *) EnMinideath_Init,
        NULL,
        &En_Death_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_MinideathSegmentRomStart,
        (u32) _ovl_En_VmSegmentRomStart,
        (void *) EnMinideath_Init,
        (void *) EnVm_Init,
        NULL,
        &En_Minideath_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_VmSegmentRomStart,
        (u32) _ovl_Demo_EffectSegmentRomStart,
        (void *) EnVm_Init,
        (void *) DemoEffect_Init,
        NULL,
        &En_Vm_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Demo_EffectSegmentRomStart,
        (u32) _ovl_Demo_KankyoSegmentRomStart,
        (void *) DemoEffect_Init,
        (void *) DemoKankyo_SetupAction,
        NULL,
        &Demo_Effect_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Demo_KankyoSegmentRomStart,
        (u32) _ovl_En_FloormasSegmentRomStart,
        (void *) DemoKankyo_SetupAction,
        (void *) EnFloormas_Init,
        NULL,
        &Demo_Kankyo_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_FloormasSegmentRomStart,
        (u32) _ovl_En_RdSegmentRomStart,
        (void *) EnFloormas_Init,
        (void *) EnRd_Init,
        NULL,
        &En_Floormas_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_RdSegmentRomStart,
        (u32) _ovl_Bg_F40_FliftSegmentRomStart,
        (void *) EnRd_Init,
        (void *) BgF40Flift_Init,
        NULL,
        &En_Rd_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_F40_FliftSegmentRomStart,
        (u32) _ovl_Obj_MureSegmentRomStart,
        (void *) BgF40Flift_Init,
        &func_808D78D0,
        NULL,
        &Bg_F40_Flift_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Obj_MureSegmentRomStart,
        (u32) _ovl_En_SwSegmentRomStart,
        &func_808D78D0,
        &func_808D8940,
        NULL,
        &Obj_Mure_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SwSegmentRomStart,
        (u32) _ovl_Object_KankyoSegmentRomStart,
        &func_808D8940,
        (void *) ObjectKankyo_SetupAction,
        NULL,
        &En_Sw_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Object_KankyoSegmentRomStart,
        (u32) _ovl_En_Horse_Link_ChildSegmentRomStart,
        (void *) ObjectKankyo_SetupAction,
        &func_808DE5C0,
        NULL,
        &Object_Kankyo_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Horse_Link_ChildSegmentRomStart,
        (u32) _ovl_Door_AnaSegmentRomStart,
        &func_808DE5C0,
        &DoorAna_SetupAction,
        NULL,
        &En_Horse_Link_Child_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Door_AnaSegmentRomStart,
        (u32) _ovl_En_Encount1SegmentRomStart,
        &DoorAna_SetupAction,
        (void *) EnEncount1_Init,
        NULL,
        &Door_Ana_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Encount1SegmentRomStart,
        (u32) _ovl_Demo_Tre_LgtSegmentRomStart,
        (void *) EnEncount1_Init,
        (void *) DemoTreLgt_Init,
        NULL,
        &En_Encount1_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Demo_Tre_LgtSegmentRomStart,
        (u32) _ovl_En_Encount2SegmentRomStart,
        (void *) DemoTreLgt_Init,
        (void *) EnEncount2_Init,
        NULL,
        &Demo_Tre_Lgt_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Encount2SegmentRomStart,
        (u32) _ovl_En_Fire_RockSegmentRomStart,
        (void *) EnEncount2_Init,
        (void *) EnFireRock_Init,
        NULL,
        &En_Encount2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Fire_RockSegmentRomStart,
        (u32) _ovl_Bg_Ctower_RotSegmentRomStart,
        (void *) EnFireRock_Init,
        (void *) BgCtowerRot_Init,
        NULL,
        &En_Fire_Rock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Ctower_RotSegmentRomStart,
        (u32) _ovl_Mir_RaySegmentRomStart,
        (void *) BgCtowerRot_Init,
        &func_808E2600,
        NULL,
        &Bg_Ctower_Rot_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Mir_RaySegmentRomStart,
        (u32) _ovl_En_SbSegmentRomStart,
        &func_808E2600,
        (void *) EnSb_Init,
        NULL,
        &Mir_Ray_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_SbSegmentRomStart,
        (u32) _ovl_En_BigslimeSegmentRomStart,
        (void *) EnSb_Init,
        (void *) EnBigslime_Init,
        NULL,
        &En_Sb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BigslimeSegmentRomStart,
        (u32) _ovl_En_KarebabaSegmentRomStart,
        (void *) EnBigslime_Init,
        (void *) EnKarebaba_Init,
        NULL,
        &En_Bigslime_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KarebabaSegmentRomStart,
        (u32) _ovl_En_InSegmentRomStart,
        (void *) EnKarebaba_Init,
        &func_808F30B0,
        NULL,
        &En_Karebaba_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_InSegmentRomStart,
        (u32) _ovl_En_Bom_ChuSegmentRomStart,
        &func_808F30B0,
        (void *) EnBomChu_Init,
        NULL,
        &En_In_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_RuSegmentRomStart,
        (u32) _ovl_En_ElfgrpSegmentRomStart,
        &func_80A389A0,
        &func_80A396B0,
        NULL,
        &En_Ru_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Bom_ChuSegmentRomStart,
        (u32) _ovl_En_Horse_Game_CheckSegmentRomStart,
        (void *) EnBomChu_Init,
        &func_808F8AA0,
        NULL,
        &En_Bom_Chu_InitVars,
        NULL,
        2,
        0,
    },
    {
        (u32) _ovl_En_Horse_Game_CheckSegmentRomStart,
        (u32) _ovl_En_RrSegmentRomStart,
        &func_808F8AA0,
        (void *) EnRr_Init,
        NULL,
        &En_Horse_Game_Check_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_RrSegmentRomStart,
        (u32) _ovl_En_FrSegmentRomStart,
        (void *) EnRr_Init,
        (void *) EnFr_Init,
        NULL,
        &En_Rr_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_FrSegmentRomStart,
        (u32) _ovl_En_FishingSegmentRomStart,
        (void *) EnFr_Init,
        &func_808FC6C0,
        NULL,
        &En_Fr_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_FishingSegmentRomStart,
        (u32) _ovl_Obj_OshihikiSegmentRomStart,
        &func_808FC6C0,
        &func_80917290,
        NULL,
        &En_Fishing_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_OshihikiSegmentRomStart,
        (u32) _ovl_Eff_DustSegmentRomStart,
        &func_80917290,
        &func_80918B40,
        NULL,
        &Obj_Oshihiki_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Eff_DustSegmentRomStart,
        (u32) _ovl_Bg_UmajumpSegmentRomStart,
        &func_80918B40,
        &func_80919F30,
        NULL,
        &Eff_Dust_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_UmajumpSegmentRomStart,
        (u32) _ovl_En_InsectSegmentRomStart,
        &func_80919F30,
        &func_8091A8A0,
        NULL,
        &Bg_Umajump_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Arrow_FireSegmentRomStart,
        (u32) _ovl_Arrow_IceSegmentRomStart,
        (void *) ArrowFire_SetupAction,
        (void *) ArrowIce_SetupAction,
        NULL,
        &Arrow_Fire_InitVars,
        NULL,
        1,
        0,
    },
    {
        (u32) _ovl_Arrow_IceSegmentRomStart,
        (u32) _ovl_Arrow_LightSegmentRomStart,
        (void *) ArrowIce_SetupAction,
        (void *) ArrowLight_SetupAction,
        NULL,
        &Arrow_Ice_InitVars,
        NULL,
        1,
        0,
    },
    {
        (u32) _ovl_Arrow_LightSegmentRomStart,
        (u32) _ovl_Obj_KibakoSegmentRomStart,
        (void *) ArrowLight_SetupAction,
        (void *) ObjKibako_SpawnCollectible,
        NULL,
        &Arrow_Light_InitVars,
        NULL,
        1,
        0,
    },
    {
        (u32) _ovl_Item_EtceteraSegmentRomStart,
        (u32) _ovl_Arrow_FireSegmentRomStart,
        (void *) ItemEtcetera_SetupAction,
        (void *) ArrowFire_SetupAction,
        NULL,
        &Item_Etcetera_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_KibakoSegmentRomStart,
        (u32) _ovl_Obj_TsuboSegmentRomStart,
        (void *) ObjKibako_SpawnCollectible,
        &func_809275C0,
        NULL,
        &Obj_Kibako_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_TsuboSegmentRomStart,
        (u32) _ovl_En_IkSegmentRomStart,
        &func_809275C0,
        (void *) EnIk_Init,
        NULL,
        &Obj_Tsubo_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_IkSegmentRomStart,
        (u32) _ovl_Demo_ShdSegmentRomStart,
        (void *) EnIk_Init,
        (void *) DemoShd_Init,
        NULL,
        &En_Ik_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Demo_ShdSegmentRomStart,
        (u32) _ovl_En_DnsSegmentRomStart,
        (void *) DemoShd_Init,
        &func_8092C5C0,
        NULL,
        &Demo_Shd_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DnsSegmentRomStart,
        (u32) _ovl_Elf_MsgSegmentRomStart,
        &func_8092C5C0,
        (void *) ElfMsg_SetupAction,
        NULL,
        &En_Dns_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Elf_MsgSegmentRomStart,
        (u32) _ovl_En_HonotrapSegmentRomStart,
        (void *) ElfMsg_SetupAction,
        &func_8092E510,
        NULL,
        &Elf_Msg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HonotrapSegmentRomStart,
        (u32) _ovl_En_Tubo_TrapSegmentRomStart,
        &func_8092E510,
        (void *) EnTuboTrap_Init,
        NULL,
        &En_Honotrap_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Tubo_TrapSegmentRomStart,
        (u32) _ovl_Obj_Ice_PolySegmentRomStart,
        (void *) EnTuboTrap_Init,
        (void *) ObjIcePoly_Init,
        NULL,
        &En_Tubo_Trap_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Ice_PolySegmentRomStart,
        (u32) _ovl_En_FzSegmentRomStart,
        (void *) ObjIcePoly_Init,
        (void *) EnFz_Init,
        NULL,
        &Obj_Ice_Poly_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_FzSegmentRomStart,
        (u32) _ovl_En_KusaSegmentRomStart,
        (void *) EnFz_Init,
        &func_809349E0,
        NULL,
        &En_Fz_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KusaSegmentRomStart,
        (u32) _ovl_Obj_BeanSegmentRomStart,
        &func_809349E0,
        &func_80936CF0,
        NULL,
        &En_Kusa_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_BeanSegmentRomStart,
        (u32) _ovl_Obj_BombiwaSegmentRomStart,
        &func_80936CF0,
        &func_809393B0,
        NULL,
        &Obj_Bean_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_BombiwaSegmentRomStart,
        (u32) _ovl_Obj_SwitchSegmentRomStart,
        &func_809393B0,
        &func_8093ABD0,
        NULL,
        &Obj_Bombiwa_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_SwitchSegmentRomStart,
        (u32) _ovl_Obj_LiftSegmentRomStart,
        &func_8093ABD0,
        &func_8093D3C0,
        NULL,
        &Obj_Switch_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Obj_LiftSegmentRomStart,
        (u32) _ovl_Obj_HsblockSegmentRomStart,
        &func_8093D3C0,
        (void *) ObjHsblock_SetupAction,
        NULL,
        &Obj_Lift_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_HsblockSegmentRomStart,
        (u32) _ovl_En_Okarina_TagSegmentRomStart,
        (void *) ObjHsblock_SetupAction,
        (void *) EnOkarinaTag_Destroy,
        NULL,
        &Obj_Hsblock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Okarina_TagSegmentRomStart,
        (u32) _ovl_En_GoroiwaSegmentRomStart,
        (void *) EnOkarinaTag_Destroy,
        &func_8093E8A0,
        NULL,
        &En_Okarina_Tag_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_GoroiwaSegmentRomStart,
        (u32) _ovl_En_DaikuSegmentRomStart,
        &func_8093E8A0,
        (void *) EnDaiku_Init,
        NULL,
        &En_Goroiwa_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_DaikuSegmentRomStart,
        (u32) _ovl_En_NwcSegmentRomStart,
        (void *) EnDaiku_Init,
        (void *) EnNwc_Init,
        NULL,
        &En_Daiku_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_NwcSegmentRomStart,
        (u32) _ovl_Item_InboxSegmentRomStart,
        (void *) EnNwc_Init,
        (void *) ItemInbox_Init,
        NULL,
        &En_Nwc_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Item_InboxSegmentRomStart,
        (u32) _ovl_En_Ge1SegmentRomStart,
        (void *) ItemInbox_Init,
        (void *) EnGe1_Init,
        NULL,
        &Item_Inbox_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ge1SegmentRomStart,
        (u32) _ovl_Obj_BlockstopSegmentRomStart,
        (void *) EnGe1_Init,
        (void *) ObjBlockstop_Init,
        NULL,
        &En_Ge1_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_BlockstopSegmentRomStart,
        (u32) _ovl_En_SdaSegmentRomStart,
        (void *) ObjBlockstop_Init,
        (void *) EnSda_Init,
        NULL,
        &Obj_Blockstop_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SdaSegmentRomStart,
        (u32) _ovl_En_Clear_TagSegmentRomStart,
        (void *) EnSda_Init,
        &EnClearTag_CreateDebrisEffect,
        NULL,
        &En_Sda_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Clear_TagSegmentRomStart,
        (u32) _ovl_En_GmSegmentRomStart,
        &EnClearTag_CreateDebrisEffect,
        &func_8094DEE0,
        NULL,
        &En_Clear_Tag_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_GmSegmentRomStart,
        (u32) _ovl_En_MsSegmentRomStart,
        &func_8094DEE0,
        (void *) EnMs_Init,
        NULL,
        &En_Gm_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_MsSegmentRomStart,
        (u32) _ovl_En_HsSegmentRomStart,
        (void *) EnMs_Init,
        &func_80952C50,
        NULL,
        &En_Ms_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HsSegmentRomStart,
        (u32) _ovl_Bg_IngateSegmentRomStart,
        &func_80952C50,
        &func_80953A90,
        NULL,
        &En_Hs_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_IngateSegmentRomStart,
        (u32) _ovl_En_KanbanSegmentRomStart,
        &func_80953A90,
        &func_80954960,
        NULL,
        &Bg_Ingate_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KanbanSegmentRomStart,
        (u32) _ovl_En_Attack_NiwSegmentRomStart,
        &func_80954960,
        (void *) EnAttackNiw_Init,
        NULL,
        &En_Kanban_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Attack_NiwSegmentRomStart,
        (u32) _ovl_En_MkSegmentRomStart,
        (void *) EnAttackNiw_Init,
        &func_809592E0,
        NULL,
        &En_Attack_Niw_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_MkSegmentRomStart,
        (u32) _ovl_En_OwlSegmentRomStart,
        &func_809592E0,
        &func_8095A510,
        NULL,
        &En_Mk_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_OwlSegmentRomStart,
        (u32) _ovl_En_IshiSegmentRomStart,
        &func_8095A510,
        &func_8095D6E0,
        NULL,
        &En_Owl_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_IshiSegmentRomStart,
        (u32) _ovl_Obj_HanaSegmentRomStart,
        &func_8095D6E0,
        (void *) ObjHana_Init,
        NULL,
        &En_Ishi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_HanaSegmentRomStart,
        (u32) _ovl_Obj_LightswitchSegmentRomStart,
        (void *) ObjHana_Init,
        &ObjLightswitch_InitCollider,
        NULL,
        &Obj_Hana_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_LightswitchSegmentRomStart,
        (u32) _ovl_Obj_Mure2SegmentRomStart,
        &ObjLightswitch_InitCollider,
        &func_80960CF0,
        NULL,
        &Obj_Lightswitch_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Mure2SegmentRomStart,
        (u32) _ovl_En_FuSegmentRomStart,
        &func_80960CF0,
        &func_809616E0,
        NULL,
        &Obj_Mure2_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_FuSegmentRomStart,
        (u32) _ovl_En_StreamSegmentRomStart,
        &func_809616E0,
        (void *) EnStream_SetupAction,
        NULL,
        &En_Fu_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_StreamSegmentRomStart,
        (u32) _ovl_En_MmSegmentRomStart,
        (void *) EnStream_SetupAction,
        (void *) EnMm_SetupAction,
        NULL,
        &En_Stream_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_MmSegmentRomStart,
        (u32) _ovl_En_Weather_TagSegmentRomStart,
        (void *) EnMm_SetupAction,
        &EnWeatherTag_SetupAction,
        NULL,
        &En_Mm_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Weather_TagSegmentRomStart,
        (u32) _ovl_En_AniSegmentRomStart,
        &EnWeatherTag_SetupAction,
        &func_809679D0,
        NULL,
        &En_Weather_Tag_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_AniSegmentRomStart,
        (u32) _ovl_En_JsSegmentRomStart,
        &func_809679D0,
        (void *) EnJs_Init,
        NULL,
        &En_Ani_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_JsSegmentRomStart,
        (u32) _ovl_En_Okarina_EffectSegmentRomStart,
        (void *) EnJs_Init,
        &EnOkarinaEffect_SetupAction,
        NULL,
        &En_Js_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Okarina_EffectSegmentRomStart,
        (u32) _ovl_En_MagSegmentRomStart,
        &EnOkarinaEffect_SetupAction,
        (void *) EnMag_Init,
        NULL,
        &En_Okarina_Effect_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_MagSegmentRomStart,
        (u32) _ovl_Elf_Msg2SegmentRomStart,
        (void *) EnMag_Init,
        (void *) ElfMsg2_SetupAction,
        NULL,
        &En_Mag_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Elf_Msg2SegmentRomStart,
        (u32) _ovl_Bg_F40_SwliftSegmentRomStart,
        (void *) ElfMsg2_SetupAction,
        (void *) BgF40Swlift_Init,
        NULL,
        &Elf_Msg2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_F40_SwliftSegmentRomStart,
        (u32) _ovl_En_KakasiSegmentRomStart,
        (void *) BgF40Swlift_Init,
        (void *) EnKakasi_Destroy,
        NULL,
        &Bg_F40_Swlift_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_KakasiSegmentRomStart,
        (u32) _ovl_Obj_MakeoshihikiSegmentRomStart,
        (void *) EnKakasi_Destroy,
        &ObjMakeoshihiki_GetChildSpawnPointIndex,
        NULL,
        &En_Kakasi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_MakeoshihikiSegmentRomStart,
        (u32) _ovl_Oceff_SpotSegmentRomStart,
        &ObjMakeoshihiki_GetChildSpawnPointIndex,
        (void *) OceffSpot_SetupAction,
        NULL,
        &Obj_Makeoshihiki_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Oceff_SpotSegmentRomStart,
        (u32) _ovl_En_TorchSegmentRomStart,
        (void *) OceffSpot_SetupAction,
        (void *) EnTorch_Init,
        NULL,
        &Oceff_Spot_InitVars,
        NULL,
        1,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_TorchSegmentRomStart,
        (u32) _ovl_Shot_SunSegmentRomStart,
        (void *) EnTorch_Init,
        (void *) ShotSun_Init,
        NULL,
        &En_Torch_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Shot_SunSegmentRomStart,
        (u32) _ovl_Obj_RoomtimerSegmentRomStart,
        (void *) ShotSun_Init,
        (void *) ObjRoomtimer_Init,
        NULL,
        &Shot_Sun_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Obj_RoomtimerSegmentRomStart,
        (u32) _ovl_En_SshSegmentRomStart,
        (void *) ObjRoomtimer_Init,
        (void *) EnSsh_SetupAction,
        NULL,
        &Obj_Roomtimer_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SshSegmentRomStart,
        (u32) _ovl_Oceff_WipeSegmentRomStart,
        (void *) EnSsh_SetupAction,
        (void *) OceffWipe_Init,
        NULL,
        &En_Ssh_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Oceff_WipeSegmentRomStart,
        (u32) _ovl_Effect_Ss_DustSegmentRomStart,
        (void *) OceffWipe_Init,
        (void *) EffectSsDust_Init,
        NULL,
        &Oceff_Wipe_InitVars,
        NULL,
        1,
        0,
    },
    {
        (u32) _ovl_Oceff_StormSegmentRomStart,
        (u32) _ovl_Obj_DemoSegmentRomStart,
        (void *) OceffStorm_SetupAction,
        (void *) ObjDemo_Init,
        NULL,
        &Oceff_Storm_InitVars,
        NULL,
        1,
        0,
    },
    {
        (u32) _ovl_Obj_DemoSegmentRomStart,
        (u32) _ovl_En_MinislimeSegmentRomStart,
        (void *) ObjDemo_Init,
        (void *) EnMinislime_Init,
        NULL,
        &Obj_Demo_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_MinislimeSegmentRomStart,
        (u32) _ovl_En_NutsballSegmentRomStart,
        (void *) EnMinislime_Init,
        (void *) EnNutsball_Init,
        NULL,
        &En_Minislime_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_NutsballSegmentRomStart,
        (u32) _ovl_Oceff_Wipe2SegmentRomStart,
        (void *) EnNutsball_Init,
        (void *) OceffWipe2_Init,
        NULL,
        &En_Nutsball_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Oceff_Wipe2SegmentRomStart,
        (u32) _ovl_Oceff_Wipe3SegmentRomStart,
        (void *) OceffWipe2_Init,
        (void *) OceffWipe3_Init,
        NULL,
        &Oceff_Wipe2_InitVars,
        NULL,
        1,
        0,
    },
    {
        (u32) _ovl_Oceff_Wipe3SegmentRomStart,
        (u32) _ovl_En_DgSegmentRomStart,
        (void *) OceffWipe3_Init,
        &func_80989140,
        NULL,
        &Oceff_Wipe3_InitVars,
        NULL,
        1,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_DgSegmentRomStart,
        (u32) _ovl_En_SiSegmentRomStart,
        &func_80989140,
        &func_8098CA20,
        NULL,
        &En_Dg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SiSegmentRomStart,
        (u32) _ovl_Obj_CombSegmentRomStart,
        &func_8098CA20,
        &func_8098CE40,
        NULL,
        &En_Si_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_CombSegmentRomStart,
        (u32) _ovl_Obj_Kibako2SegmentRomStart,
        &func_8098CE40,
        &ObjKibako2_ContainsSkulltula,
        NULL,
        &Obj_Comb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Kibako2SegmentRomStart,
        (u32) _ovl_En_Hs2SegmentRomStart,
        &ObjKibako2_ContainsSkulltula,
        (void *) EnHs2_Init,
        NULL,
        &Obj_Kibako2_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Hs2SegmentRomStart,
        (u32) _ovl_Obj_Mure3SegmentRomStart,
        (void *) EnHs2_Init,
        &func_8098F040,
        NULL,
        &En_Hs2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Mure3SegmentRomStart,
        (u32) _ovl_En_TgSegmentRomStart,
        &func_8098F040,
        &func_8098F800,
        NULL,
        &Obj_Mure3_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TgSegmentRomStart,
        (u32) _ovl_En_WfSegmentRomStart,
        &func_8098F800,
        (void *) EnWf_Init,
        NULL,
        &En_Tg_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_WfSegmentRomStart,
        (u32) _ovl_En_SkbSegmentRomStart,
        (void *) EnWf_Init,
        &func_809947B0,
        NULL,
        &En_Wf_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SkbSegmentRomStart,
        (u32) _ovl_En_GsSegmentRomStart,
        &func_809947B0,
        &func_80997A90,
        NULL,
        &En_Skb_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_GsSegmentRomStart,
        (u32) _ovl_Obj_SoundSegmentRomStart,
        &func_80997A90,
        (void *) ObjSound_Init,
        NULL,
        &En_Gs_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_SoundSegmentRomStart,
        (u32) _ovl_En_CrowSegmentRomStart,
        (void *) ObjSound_Init,
        (void *) EnCrow_Init,
        NULL,
        &Obj_Sound_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_CrowSegmentRomStart,
        (u32) _ovl_En_CowSegmentRomStart,
        (void *) EnCrow_Init,
        &func_8099C290,
        NULL,
        &En_Crow_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_CowSegmentRomStart,
        (u32) _ovl_Oceff_Wipe4SegmentRomStart,
        &func_8099C290,
        (void *) OceffWipe4_Init,
        NULL,
        &En_Cow_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Oceff_Wipe4SegmentRomStart,
        (u32) _ovl_En_ZoSegmentRomStart,
        (void *) OceffWipe4_Init,
        &func_8099E790,
        NULL,
        &Oceff_Wipe4_InitVars,
        NULL,
        1,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_ZoSegmentRomStart,
        (u32) _ovl_Effect_Ss_Ice_SmokeSegmentRomStart,
        &func_8099E790,
        (void *) EffectSsIceSmoke_Init,
        NULL,
        &En_Zo_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_MakekinsutaSegmentRomStart,
        (u32) _ovl_En_Ge3SegmentRomStart,
        &func_8099FA40,
        (void *) EnGe3_Init,
        NULL,
        &Obj_Makekinsuta_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ge3SegmentRomStart,
        (u32) _ovl_Obj_HamishiSegmentRomStart,
        (void *) EnGe3_Init,
        &func_809A0F20,
        NULL,
        &En_Ge3_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Obj_HamishiSegmentRomStart,
        (u32) _ovl_En_Zl4SegmentRomStart,
        &func_809A0F20,
        &func_809A1BB0,
        NULL,
        &Obj_Hamishi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Zl4SegmentRomStart,
        (u32) _ovl_En_Mm2SegmentRomStart,
        &func_809A1BB0,
        (void *) EnMm2_Init,
        NULL,
        &En_Zl4_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Mm2SegmentRomStart,
        (u32) _ovl_Door_SpiralSegmentRomStart,
        (void *) EnMm2_Init,
        &DoorSpiral_SetupAction,
        NULL,
        &En_Mm2_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Door_SpiralSegmentRomStart,
        (u32) _ovl_Obj_PzlblockSegmentRomStart,
        &DoorSpiral_SetupAction,
        &func_809A33E0,
        NULL,
        &Door_Spiral_InitVars,
        NULL,
        2,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Obj_PzlblockSegmentRomStart,
        (u32) _ovl_Obj_TogeSegmentRomStart,
        &func_809A33E0,
        &func_809A41C0,
        NULL,
        &Obj_Pzlblock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_TogeSegmentRomStart,
        (u32) _ovl_Obj_ArmosSegmentRomStart,
        &func_809A41C0,
        &func_809A4E00,
        NULL,
        &Obj_Toge_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Obj_ArmosSegmentRomStart,
        (u32) _ovl_Obj_BoyoSegmentRomStart,
        &func_809A4E00,
        (void *) ObjBoyo_Init,
        NULL,
        &Obj_Armos_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_BoyoSegmentRomStart,
        (u32) _ovl_En_GrasshopperSegmentRomStart,
        (void *) ObjBoyo_Init,
        (void *) EnGrasshopper_Init,
        NULL,
        &Obj_Boyo_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_GrasshopperSegmentRomStart,
        (u32) _ovl_Obj_GrassSegmentRomStart,
        (void *) EnGrasshopper_Init,
        &func_809A9110,
        NULL,
        &En_Grasshopper_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Obj_GrassSegmentRomStart,
        (u32) _ovl_Obj_Grass_CarrySegmentRomStart,
        &func_809A9110,
        &func_809AAE60,
        NULL,
        &Obj_Grass_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Grass_CarrySegmentRomStart,
        (u32) _ovl_Obj_Grass_UnitSegmentRomStart,
        &func_809AAE60,
        &func_809ABDE0,
        NULL,
        &Obj_Grass_Carry_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Grass_UnitSegmentRomStart,
        (u32) _ovl_Bg_Fire_WallSegmentRomStart,
        &func_809ABDE0,
        (void *) BgFireWall_Init,
        NULL,
        &Obj_Grass_Unit_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Bg_Fire_WallSegmentRomStart,
        (u32) _ovl_En_BuSegmentRomStart,
        (void *) BgFireWall_Init,
        (void *) EnBu_Init,
        NULL,
        &Bg_Fire_Wall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BuSegmentRomStart,
        (u32) _ovl_En_Encount3SegmentRomStart,
        (void *) EnBu_Init,
        (void *) EnEncount3_Init,
        NULL,
        &En_Bu_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Encount3SegmentRomStart,
        (u32) _ovl_En_JsoSegmentRomStart,
        (void *) EnEncount3_Init,
        (void *) EnJso_Init,
        NULL,
        &En_Encount3_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_JsoSegmentRomStart,
        (u32) _ovl_Obj_ChikuwaSegmentRomStart,
        (void *) EnJso_Init,
        &func_809B1550,
        NULL,
        &En_Jso_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_ChikuwaSegmentRomStart,
        (u32) _ovl_En_KnightSegmentRomStart,
        &func_809B1550,
        &func_809B20F0,
        NULL,
        &Obj_Chikuwa_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KnightSegmentRomStart,
        (u32) _ovl_En_Warp_tagSegmentRomStart,
        &func_809B20F0,
        (void *) EnWarptag_Init,
        NULL,
        &En_Knight_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Warp_tagSegmentRomStart,
        (u32) _ovl_En_Aob_01SegmentRomStart,
        (void *) EnWarptag_Init,
        &func_809C10B0,
        NULL,
        &En_Warp_tag_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Aob_01SegmentRomStart,
        (u32) _ovl_En_Boj_01SegmentRomStart,
        &func_809C10B0,
        (void *) EnBoj01_Init,
        NULL,
        &En_Aob_01_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Boj_01SegmentRomStart,
        (u32) _ovl_En_Boj_02SegmentRomStart,
        (void *) EnBoj01_Init,
        (void *) EnBoj02_Init,
        NULL,
        &En_Boj_01_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Boj_02SegmentRomStart,
        (u32) _ovl_En_Boj_03SegmentRomStart,
        (void *) EnBoj02_Init,
        (void *) EnBoj03_Init,
        NULL,
        &En_Boj_02_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Boj_03SegmentRomStart,
        (u32) _ovl_En_Encount4SegmentRomStart,
        (void *) EnBoj03_Init,
        (void *) EnEncount4_Init,
        NULL,
        &En_Boj_03_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Encount4SegmentRomStart,
        (u32) _ovl_En_Bom_Bowl_ManSegmentRomStart,
        (void *) EnEncount4_Init,
        (void *) EnBomBowlMan_Init,
        NULL,
        &En_Encount4_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Bom_Bowl_ManSegmentRomStart,
        (u32) _ovl_En_Syateki_ManSegmentRomStart,
        (void *) EnBomBowlMan_Init,
        &func_809C64C0,
        NULL,
        &En_Bom_Bowl_Man_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Syateki_ManSegmentRomStart,
        (u32) _ovl_Bg_IcicleSegmentRomStart,
        &func_809C64C0,
        (void *) BgIcicle_Init,
        NULL,
        &En_Syateki_Man_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Bg_IcicleSegmentRomStart,
        (u32) _ovl_En_Syateki_CrowSegmentRomStart,
        (void *) BgIcicle_Init,
        (void *) EnSyatekiCrow_Init,
        NULL,
        &Bg_Icicle_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Syateki_CrowSegmentRomStart,
        (u32) _ovl_En_Boj_04SegmentRomStart,
        (void *) EnSyatekiCrow_Init,
        (void *) EnBoj04_Init,
        NULL,
        &En_Syateki_Crow_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Boj_04SegmentRomStart,
        (u32) _ovl_En_Cne_01SegmentRomStart,
        (void *) EnBoj04_Init,
        &func_809CB290,
        NULL,
        &En_Boj_04_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Cne_01SegmentRomStart,
        (u32) _ovl_En_Bba_01SegmentRomStart,
        &func_809CB290,
        &func_809CC060,
        NULL,
        &En_Cne_01_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Bba_01SegmentRomStart,
        (u32) _ovl_En_Bji_01SegmentRomStart,
        &func_809CC060,
        (void *) func_809CCDE0,
        NULL,
        &En_Bba_01_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Bji_01SegmentRomStart,
        (u32) _ovl_Bg_SpdwebSegmentRomStart,
        (void *) func_809CCDE0,
        (void *) BgSpdweb_Init,
        NULL,
        &En_Bji_01_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_SpdwebSegmentRomStart,
        (u32) _ovl_En_Mt_tagSegmentRomStart,
        (void *) BgSpdweb_Init,
        &func_809CF350,
        NULL,
        &Bg_Spdweb_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Mt_tagSegmentRomStart,
        (u32) _ovl_Boss_01SegmentRomStart,
        &func_809CF350,
        &func_809D0530,
        NULL,
        &En_Mt_tag_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Boss_01SegmentRomStart,
        (u32) _ovl_Boss_02SegmentRomStart,
        &func_809D0530,
        &func_809DA1D0,
        NULL,
        &Boss_01_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Boss_02SegmentRomStart,
        (u32) _ovl_Boss_03SegmentRomStart,
        &func_809DA1D0,
        &func_809E2760,
        NULL,
        &Boss_02_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Boss_03SegmentRomStart,
        (u32) _ovl_Boss_04SegmentRomStart,
        &func_809E2760,
        &func_809EC040,
        NULL,
        &Boss_03_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Boss_04SegmentRomStart,
        (u32) _ovl_Boss_05SegmentRomStart,
        &func_809EC040,
        &func_809EE4E0,
        NULL,
        &Boss_04_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Boss_05SegmentRomStart,
        (u32) _ovl_Boss_06SegmentRomStart,
        &func_809EE4E0,
        &func_809F2120,
        NULL,
        &Boss_05_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Boss_06SegmentRomStart,
        (u32) _ovl_Boss_07SegmentRomStart,
        &func_809F2120,
        &func_809F4980,
        NULL,
        &Boss_06_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Boss_07SegmentRomStart,
        (u32) _ovl_Bg_Dy_YoseizoSegmentRomStart,
        &func_809F4980,
        (void *) BgDyYoseizo_Init,
        NULL,
        &Boss_07_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Dy_YoseizoSegmentRomStart,
        (u32) _ovl_En_Boj_05SegmentRomStart,
        (void *) BgDyYoseizo_Init,
        (void *) EnBoj05_Init,
        NULL,
        &Bg_Dy_Yoseizo_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Boj_05SegmentRomStart,
        (u32) _ovl_En_Sob1SegmentRomStart,
        (void *) EnBoj05_Init,
        &EnSob1_ChangeAnim,
        NULL,
        &En_Boj_05_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Sob1SegmentRomStart,
        (u32) _ovl_En_GoSegmentRomStart,
        &EnSob1_ChangeAnim,
        &func_80A10FD0,
        NULL,
        &En_Sob1_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_GoSegmentRomStart,
        (u32) _ovl_En_RafSegmentRomStart,
        &func_80A10FD0,
        &func_80A16D40,
        NULL,
        &En_Go_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_RafSegmentRomStart,
        (u32) _ovl_Obj_FunenSegmentRomStart,
        &func_80A16D40,
        (void *) ObjFunen_Init,
        NULL,
        &En_Raf_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_FunenSegmentRomStart,
        (u32) _ovl_Obj_RailliftSegmentRomStart,
        (void *) ObjFunen_Init,
        (void *) ObjRaillift_UpdatePosition,
        NULL,
        &Obj_Funen_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_RailliftSegmentRomStart,
        (u32) _ovl_Bg_Numa_HanaSegmentRomStart,
        (void *) ObjRaillift_UpdatePosition,
        &func_80A1A500,
        NULL,
        &Obj_Raillift_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Numa_HanaSegmentRomStart,
        (u32) _ovl_Obj_FlowerpotSegmentRomStart,
        &func_80A1A500,
        &func_80A1B3D0,
        NULL,
        &Bg_Numa_Hana_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_FlowerpotSegmentRomStart,
        (u32) _ovl_Obj_SpinyrollSegmentRomStart,
        &func_80A1B3D0,
        &func_80A1DA50,
        NULL,
        &Obj_Flowerpot_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_SpinyrollSegmentRomStart,
        (u32) _ovl_Dm_HinaSegmentRomStart,
        &func_80A1DA50,
        (void *) DmHina_Init,
        NULL,
        &Obj_Spinyroll_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_HinaSegmentRomStart,
        (u32) _ovl_En_Syateki_WfSegmentRomStart,
        (void *) DmHina_Init,
        (void *) EnSyatekiWf_Init,
        NULL,
        &Dm_Hina_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Syateki_WfSegmentRomStart,
        (u32) _ovl_Obj_SkateblockSegmentRomStart,
        (void *) EnSyatekiWf_Init,
        &func_80A21150,
        NULL,
        &En_Syateki_Wf_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_SkateblockSegmentRomStart,
        (u32) _ovl_Effect_En_Ice_BlockSegmentRomStart,
        &func_80A21150,
        &func_80A22D40,
        NULL,
        &Obj_Skateblock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_IceblockSegmentRomStart,
        (u32) _ovl_En_BigpametSegmentRomStart,
        &func_80A23090,
        (void *) EnBigpamet_Init,
        NULL,
        &Obj_Iceblock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BigpametSegmentRomStart,
        (u32) _ovl_Bg_Dblue_MovebgSegmentRomStart,
        (void *) EnBigpamet_Init,
        &func_80A29A80,
        NULL,
        &En_Bigpamet_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Syateki_DekunutsSegmentRomStart,
        (u32) _ovl_Elf_Msg3SegmentRomStart,
        (void *) EnSyatekiDekunuts_Init,
        (void *) ElfMsg3_SetupAction,
        NULL,
        &En_Syateki_Dekunuts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Elf_Msg3SegmentRomStart,
        (u32) _ovl_En_FgSegmentRomStart,
        (void *) ElfMsg3_SetupAction,
        &EnFg_UpdateAnimation,
        NULL,
        &Elf_Msg3_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_FgSegmentRomStart,
        (u32) _ovl_Dm_RavineSegmentRomStart,
        &EnFg_UpdateAnimation,
        (void *) DmRavine_Init,
        NULL,
        &En_Fg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_RavineSegmentRomStart,
        (u32) _ovl_Dm_SaSegmentRomStart,
        (void *) DmRavine_Init,
        &func_80A2E960,
        NULL,
        &Dm_Ravine_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_SaSegmentRomStart,
        (u32) _ovl_En_SlimeSegmentRomStart,
        &func_80A2E960,
        (void *) EnSlime_Init,
        NULL,
        &Dm_Sa_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SlimeSegmentRomStart,
        (u32) _ovl_En_PrSegmentRomStart,
        (void *) EnSlime_Init,
        (void *) EnPr_Init,
        NULL,
        &En_Slime_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PrSegmentRomStart,
        (u32) _ovl_Obj_ToudaiSegmentRomStart,
        (void *) EnPr_Init,
        &func_80A33B00,
        NULL,
        &En_Pr_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_ToudaiSegmentRomStart,
        (u32) _ovl_Obj_EntotuSegmentRomStart,
        &func_80A33B00,
        &func_80A34700,
        NULL,
        &Obj_Toudai_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_EntotuSegmentRomStart,
        (u32) _ovl_Obj_BellSegmentRomStart,
        &func_80A34700,
        &func_80A35510,
        NULL,
        &Obj_Entotu_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_BellSegmentRomStart,
        (u32) _ovl_En_Syateki_OkutaSegmentRomStart,
        &func_80A35510,
        (void *) EnSyatekiOkuta_Init,
        NULL,
        &Obj_Bell_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Syateki_OkutaSegmentRomStart,
        (u32) _ovl_Obj_ShutterSegmentRomStart,
        (void *) EnSyatekiOkuta_Init,
        (void *) ObjShutter_Init,
        NULL,
        &En_Syateki_Okuta_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Obj_ShutterSegmentRomStart,
        (u32) _ovl_Dm_ZlSegmentRomStart,
        (void *) ObjShutter_Init,
        &func_80A38190,
        NULL,
        &Obj_Shutter_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_ZlSegmentRomStart,
        (u32) _ovl_En_RuSegmentRomStart,
        &func_80A38190,
        &func_80A389A0,
        NULL,
        &Dm_Zl_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ElfgrpSegmentRomStart,
        (u32) _ovl_Dm_TsgSegmentRomStart,
        &func_80A396B0,
        (void *) DmTsg_Init,
        NULL,
        &En_Elfgrp_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_TsgSegmentRomStart,
        (u32) _ovl_En_BaguoSegmentRomStart,
        (void *) DmTsg_Init,
        (void *) EnBaguo_Init,
        NULL,
        &Dm_Tsg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BaguoSegmentRomStart,
        (u32) _ovl_Obj_VspinyrollSegmentRomStart,
        (void *) EnBaguo_Init,
        &func_80A3C4E0,
        NULL,
        &En_Baguo_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_VspinyrollSegmentRomStart,
        (u32) _ovl_Obj_SmorkSegmentRomStart,
        &func_80A3C4E0,
        &func_80A3D680,
        NULL,
        &Obj_Vspinyroll_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_SmorkSegmentRomStart,
        (u32) _ovl_En_Test2SegmentRomStart,
        &func_80A3D680,
        (void *) EnTest2_Init,
        NULL,
        &Obj_Smork_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Test2SegmentRomStart,
        (u32) _ovl_En_Test3SegmentRomStart,
        (void *) EnTest2_Init,
        &func_80A3E7E0,
        NULL,
        &En_Test2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Test3SegmentRomStart,
        (u32) _ovl_En_Test4SegmentRomStart,
        &func_80A3E7E0,
        &func_80A41D70,
        NULL,
        &En_Test3_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Test4SegmentRomStart,
        (u32) _ovl_En_BatSegmentRomStart,
        &func_80A41D70,
        (void *) EnBat_Init,
        NULL,
        &En_Test4_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BatSegmentRomStart,
        (u32) _ovl_En_SekihiSegmentRomStart,
        (void *) EnBat_Init,
        (void *) EnSekihi_Init,
        NULL,
        &En_Bat_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SekihiSegmentRomStart,
        (u32) _ovl_En_WizSegmentRomStart,
        (void *) EnSekihi_Init,
        (void *) EnWiz_Init,
        NULL,
        &En_Sekihi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_WizSegmentRomStart,
        (u32) _ovl_En_Wiz_BrockSegmentRomStart,
        (void *) EnWiz_Init,
        (void *) EnWizBrock_Init,
        NULL,
        &En_Wiz_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Wiz_BrockSegmentRomStart,
        (u32) _ovl_En_Wiz_FireSegmentRomStart,
        (void *) EnWizBrock_Init,
        (void *) EnWizFire_Init,
        NULL,
        &En_Wiz_Brock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Wiz_FireSegmentRomStart,
        (u32) _ovl_Eff_ChangeSegmentRomStart,
        (void *) EnWizFire_Init,
        (void *) EffChange_Init,
        NULL,
        &En_Wiz_Fire_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Eff_ChangeSegmentRomStart,
        (u32) _ovl_Dm_StatueSegmentRomStart,
        (void *) EffChange_Init,
        (void *) DmStatue_Init,
        NULL,
        &Eff_Change_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_StatueSegmentRomStart,
        (u32) _ovl_Obj_FireshieldSegmentRomStart,
        (void *) DmStatue_Init,
        &func_80A4CA90,
        NULL,
        &Dm_Statue_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_FireshieldSegmentRomStart,
        (u32) _ovl_Bg_LadderSegmentRomStart,
        &func_80A4CA90,
        (void *) BgLadder_Init,
        NULL,
        &Obj_Fireshield_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_LadderSegmentRomStart,
        (u32) _ovl_En_MkkSegmentRomStart,
        (void *) BgLadder_Init,
        (void *) EnMkk_Init,
        NULL,
        &Bg_Ladder_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_MkkSegmentRomStart,
        (u32) _ovl_Demo_GetitemSegmentRomStart,
        (void *) EnMkk_Init,
        (void *) DemoGetitem_Init,
        NULL,
        &En_Mkk_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Demo_GetitemSegmentRomStart,
        (u32) _ovl_En_DnbSegmentRomStart,
        (void *) DemoGetitem_Init,
        &func_80A4FDD0,
        NULL,
        &Demo_Getitem_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_DnbSegmentRomStart,
        (u32) _ovl_En_DnhSegmentRomStart,
        &func_80A4FDD0,
        &func_80A50D40,
        NULL,
        &En_Dnb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DnhSegmentRomStart,
        (u32) _ovl_En_DnkSegmentRomStart,
        &func_80A50D40,
        &func_80A514F0,
        NULL,
        &En_Dnh_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DnkSegmentRomStart,
        (u32) _ovl_En_DnqSegmentRomStart,
        &func_80A514F0,
        &func_80A52530,
        NULL,
        &En_Dnk_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DnqSegmentRomStart,
        (u32) _ovl_Bg_Keikoku_SakuSegmentRomStart,
        &func_80A52530,
        (void *) BgKeikokuSaku_Init,
        NULL,
        &En_Dnq_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Bg_Keikoku_SakuSegmentRomStart,
        (u32) _ovl_Obj_HugebombiwaSegmentRomStart,
        (void *) BgKeikokuSaku_Init,
        &func_80A53BE0,
        NULL,
        &Bg_Keikoku_Saku_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_HugebombiwaSegmentRomStart,
        (u32) _ovl_En_Firefly2SegmentRomStart,
        &func_80A53BE0,
        (void *) EnFirefly2_Init,
        NULL,
        &Obj_Hugebombiwa_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Firefly2SegmentRomStart,
        (u32) _ovl_En_RatSegmentRomStart,
        (void *) EnFirefly2_Init,
        (void *) EnRat_Init,
        NULL,
        &En_Firefly2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_RatSegmentRomStart,
        (u32) _ovl_En_Water_EffectSegmentRomStart,
        (void *) EnRat_Init,
        &func_80A587A0,
        NULL,
        &En_Rat_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Water_EffectSegmentRomStart,
        (u32) _ovl_En_Kusa2SegmentRomStart,
        &func_80A587A0,
        &func_80A5B160,
        NULL,
        &En_Water_Effect_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Kusa2SegmentRomStart,
        (u32) _ovl_Bg_Spout_FireSegmentRomStart,
        &func_80A5B160,
        (void *) BgSpoutFire_Init,
        NULL,
        &En_Kusa2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Spout_FireSegmentRomStart,
        (u32) _ovl_En_Dy_ExtraSegmentRomStart,
        (void *) BgSpoutFire_Init,
        (void *) EnDyExtra_Destroy,
        NULL,
        &Bg_Spout_Fire_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Bg_Dblue_MovebgSegmentRomStart,
        (u32) _ovl_En_Syateki_DekunutsSegmentRomStart,
        &func_80A29A80,
        (void *) EnSyatekiDekunuts_Init,
        NULL,
        &Bg_Dblue_Movebg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Dy_ExtraSegmentRomStart,
        (u32) _ovl_En_BalSegmentRomStart,
        (void *) EnDyExtra_Destroy,
        (void *) EnBal_Init,
        NULL,
        &En_Dy_Extra_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BalSegmentRomStart,
        (u32) _ovl_En_Ginko_ManSegmentRomStart,
        (void *) EnBal_Init,
        (void *) EnGinkoMan_Init,
        NULL,
        &En_Bal_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ginko_ManSegmentRomStart,
        (u32) _ovl_En_Warp_UzuSegmentRomStart,
        (void *) EnGinkoMan_Init,
        (void *) EnWarpUzu_Init,
        NULL,
        &En_Ginko_Man_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Warp_UzuSegmentRomStart,
        (u32) _ovl_Obj_DrifticeSegmentRomStart,
        (void *) EnWarpUzu_Init,
        &func_80A66570,
        NULL,
        &En_Warp_Uzu_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_DrifticeSegmentRomStart,
        (u32) _ovl_En_Look_NutsSegmentRomStart,
        &func_80A66570,
        (void *) EnLookNuts_Init,
        NULL,
        &Obj_Driftice_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Look_NutsSegmentRomStart,
        (u32) _ovl_En_Mushi2SegmentRomStart,
        (void *) EnLookNuts_Init,
        &func_80A687A0,
        NULL,
        &En_Look_Nuts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Mushi2SegmentRomStart,
        (u32) _ovl_En_FallSegmentRomStart,
        &func_80A687A0,
        &func_80A6BF90,
        NULL,
        &En_Mushi2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_FallSegmentRomStart,
        (u32) _ovl_En_Mm3SegmentRomStart,
        &func_80A6BF90,
        (void *) EnMm3_Init,
        NULL,
        &En_Fall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Mm3SegmentRomStart,
        (u32) _ovl_Bg_Crace_MovebgSegmentRomStart,
        (void *) EnMm3_Init,
        (void *) BgCraceMovebg_Init,
        NULL,
        &En_Mm3_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Crace_MovebgSegmentRomStart,
        (u32) _ovl_En_DnoSegmentRomStart,
        (void *) BgCraceMovebg_Init,
        &func_80A711D0,
        NULL,
        &Bg_Crace_Movebg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DnoSegmentRomStart,
        (u32) _ovl_En_Pr2SegmentRomStart,
        &func_80A711D0,
        (void *) EnPr2_Init,
        NULL,
        &En_Dno_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Pr2SegmentRomStart,
        (u32) _ovl_En_PrzSegmentRomStart,
        (void *) EnPr2_Init,
        (void *) EnPrz_Init,
        NULL,
        &En_Pr2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PrzSegmentRomStart,
        (u32) _ovl_En_Jso2SegmentRomStart,
        (void *) EnPrz_Init,
        (void *) EnJso2_Init,
        NULL,
        &En_Prz_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Jso2SegmentRomStart,
        (u32) _ovl_Obj_EtceteraSegmentRomStart,
        (void *) EnJso2_Init,
        (void *) ObjEtcetera_Init,
        NULL,
        &En_Jso2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_EtceteraSegmentRomStart,
        (u32) _ovl_En_EgolSegmentRomStart,
        (void *) ObjEtcetera_Init,
        &func_80A7C990,
        NULL,
        &Obj_Etcetera_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_EgolSegmentRomStart,
        (u32) _ovl_Obj_MineSegmentRomStart,
        &func_80A7C990,
        &func_80A811D0,
        NULL,
        &En_Egol_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_MineSegmentRomStart,
        (u32) _ovl_Obj_PurifySegmentRomStart,
        &func_80A811D0,
        &func_80A84CD0,
        NULL,
        &Obj_Mine_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_PurifySegmentRomStart,
        (u32) _ovl_En_TruSegmentRomStart,
        &func_80A84CD0,
        &func_80A85620,
        NULL,
        &Obj_Purify_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TruSegmentRomStart,
        (u32) _ovl_En_TrtSegmentRomStart,
        &func_80A85620,
        &EnTrt_ChangeAnim,
        NULL,
        &En_Tru_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TrtSegmentRomStart,
        (u32) _ovl_En_Test5SegmentRomStart,
        &EnTrt_ChangeAnim,
        (void *) EnTest5_SetupAction,
        NULL,
        &En_Trt_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Test5SegmentRomStart,
        (u32) _ovl_En_Test6SegmentRomStart,
        (void *) EnTest5_SetupAction,
        &func_80A90730,
        NULL,
        &En_Test5_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Test6SegmentRomStart,
        (u32) _ovl_En_AzSegmentRomStart,
        &func_80A90730,
        &func_80A94A30,
        NULL,
        &En_Test6_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_AzSegmentRomStart,
        (u32) _ovl_En_EstoneSegmentRomStart,
        &func_80A94A30,
        (void *) EnEstone_Init,
        NULL,
        &En_Az_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_EstoneSegmentRomStart,
        (u32) _ovl_Bg_Hakugin_PostSegmentRomStart,
        (void *) EnEstone_Init,
        &func_80A9ACD0,
        NULL,
        &En_Estone_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Hakugin_PostSegmentRomStart,
        (u32) _ovl_Dm_OpstageSegmentRomStart,
        &func_80A9ACD0,
        (void *) DmOpstage_SetupAction,
        NULL,
        &Bg_Hakugin_Post_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_OpstageSegmentRomStart,
        (u32) _ovl_Dm_StkSegmentRomStart,
        (void *) DmOpstage_SetupAction,
        &func_80A9FDB0,
        NULL,
        &Dm_Opstage_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_StkSegmentRomStart,
        (u32) _ovl_Dm_Char00SegmentRomStart,
        &func_80A9FDB0,
        &func_80AA5580,
        NULL,
        &Dm_Stk_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char00SegmentRomStart,
        (u32) _ovl_Dm_Char01SegmentRomStart,
        &func_80AA5580,
        (void *) DmChar01_Init,
        NULL,
        &Dm_Char00_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char01SegmentRomStart,
        (u32) _ovl_Dm_Char02SegmentRomStart,
        (void *) DmChar01_Init,
        &func_80AAAE30,
        NULL,
        &Dm_Char01_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char02SegmentRomStart,
        (u32) _ovl_Dm_Char03SegmentRomStart,
        &func_80AAAE30,
        &func_80AAB4A0,
        NULL,
        &Dm_Char02_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char03SegmentRomStart,
        (u32) _ovl_Dm_Char04SegmentRomStart,
        &func_80AAB4A0,
        &func_80AABC40,
        NULL,
        &Dm_Char03_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char04SegmentRomStart,
        (u32) _ovl_Dm_Char05SegmentRomStart,
        &func_80AABC40,
        &func_80AAC5A0,
        NULL,
        &Dm_Char04_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char05SegmentRomStart,
        (u32) _ovl_Dm_Char06SegmentRomStart,
        &func_80AAC5A0,
        (void *) DmChar06_SetupAction,
        NULL,
        &Dm_Char05_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char06SegmentRomStart,
        (u32) _ovl_Dm_Char07SegmentRomStart,
        (void *) DmChar06_SetupAction,
        &DmChar07_SetupAction,
        NULL,
        &Dm_Char06_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char07SegmentRomStart,
        (u32) _ovl_Dm_Char08SegmentRomStart,
        &DmChar07_SetupAction,
        &func_80AAF050,
        NULL,
        &Dm_Char07_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char08SegmentRomStart,
        (u32) _ovl_Dm_Char09SegmentRomStart,
        &func_80AAF050,
        &func_80AB1E10,
        NULL,
        &Dm_Char08_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_Char09SegmentRomStart,
        (u32) _ovl_Obj_TokeidaiSegmentRomStart,
        &func_80AB1E10,
        &func_80AB2790,
        NULL,
        &Dm_Char09_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_TokeidaiSegmentRomStart,
        (u32) _ovl_En_MnkSegmentRomStart,
        &func_80AB2790,
        &func_80AB4D10,
        NULL,
        &Obj_Tokeidai_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_MnkSegmentRomStart,
        (u32) _ovl_En_EgblockSegmentRomStart,
        &func_80AB4D10,
        (void *) EnEgblock_Init,
        NULL,
        &En_Mnk_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_EgblockSegmentRomStart,
        (u32) _ovl_En_Guard_NutsSegmentRomStart,
        (void *) EnEgblock_Init,
        (void *) EnGuardNuts_Init,
        NULL,
        &En_Egblock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Guard_NutsSegmentRomStart,
        (u32) _ovl_Bg_Hakugin_BombwallSegmentRomStart,
        (void *) EnGuardNuts_Init,
        &func_80ABBFC0,
        NULL,
        &En_Guard_Nuts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Hakugin_BombwallSegmentRomStart,
        (u32) _ovl_Obj_Tokei_TobiraSegmentRomStart,
        &func_80ABBFC0,
        (void *) ObjTokeiTobira_Init,
        NULL,
        &Bg_Hakugin_Bombwall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Tokei_TobiraSegmentRomStart,
        (u32) _ovl_Bg_Hakugin_ElvpoleSegmentRomStart,
        (void *) ObjTokeiTobira_Init,
        (void *) BgHakuginElvpole_Init,
        NULL,
        &Obj_Tokei_Tobira_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Hakugin_ElvpoleSegmentRomStart,
        (u32) _ovl_En_Ma4SegmentRomStart,
        (void *) BgHakuginElvpole_Init,
        &func_80ABDCA0,
        NULL,
        &Bg_Hakugin_Elvpole_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ma4SegmentRomStart,
        (u32) _ovl_En_TwigSegmentRomStart,
        &func_80ABDCA0,
        (void *) EnTwig_Init,
        NULL,
        &En_Ma4_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TwigSegmentRomStart,
        (u32) _ovl_En_Po_FusenSegmentRomStart,
        (void *) EnTwig_Init,
        (void *) EnPoFusen_Init,
        NULL,
        &En_Twig_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Po_FusenSegmentRomStart,
        (u32) _ovl_En_Door_EtcSegmentRomStart,
        (void *) EnPoFusen_Init,
        (void *) EnDoorEtc_Init,
        NULL,
        &En_Po_Fusen_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Door_EtcSegmentRomStart,
        (u32) _ovl_En_BigokutaSegmentRomStart,
        (void *) EnDoorEtc_Init,
        (void *) EnBigokuta_Init,
        NULL,
        &En_Door_Etc_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BigokutaSegmentRomStart,
        (u32) _ovl_Bg_IcefloeSegmentRomStart,
        (void *) EnBigokuta_Init,
        (void *) BgIcefloe_Init,
        NULL,
        &En_Bigokuta_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_IcefloeSegmentRomStart,
        (u32) _ovl_fbdemo_triforceSegmentRomStart,
        (void *) BgIcefloe_Init,
        (void *) TransitionTriforce_Start,
        NULL,
        &Bg_Icefloe_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_OcarinaliftSegmentRomStart,
        (u32) _ovl_En_Time_TagSegmentRomStart,
        &func_80AC94C0,
        (void *) EnTimeTag_Init,
        NULL,
        &Obj_Ocarinalift_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Time_TagSegmentRomStart,
        (u32) _ovl_Bg_Open_ShutterSegmentRomStart,
        (void *) EnTimeTag_Init,
        &func_80ACAB10,
        NULL,
        &En_Time_Tag_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Open_ShutterSegmentRomStart,
        (u32) _ovl_Bg_Open_SpotSegmentRomStart,
        &func_80ACAB10,
        (void *) BgOpenSpot_Init,
        NULL,
        &Bg_Open_Shutter_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Open_SpotSegmentRomStart,
        (u32) _ovl_Bg_Fu_KaitenSegmentRomStart,
        (void *) BgOpenSpot_Init,
        (void *) BgFuKaiten_Init,
        NULL,
        &Bg_Open_Spot_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Fu_KaitenSegmentRomStart,
        (u32) _ovl_Obj_AquaSegmentRomStart,
        (void *) BgFuKaiten_Init,
        &func_80ACB6A0,
        NULL,
        &Bg_Fu_Kaiten_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_AquaSegmentRomStart,
        (u32) _ovl_En_ElforgSegmentRomStart,
        &func_80ACB6A0,
        &func_80ACC470,
        NULL,
        &Obj_Aqua_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ElforgSegmentRomStart,
        (u32) _ovl_En_ElfbubSegmentRomStart,
        &func_80ACC470,
        (void *) EnElfbub_Init,
        NULL,
        &En_Elforg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ElfbubSegmentRomStart,
        (u32) _ovl_En_Fu_MatoSegmentRomStart,
        (void *) EnElfbub_Init,
        (void *) EnFuMato_Init,
        NULL,
        &En_Elfbub_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Fu_MatoSegmentRomStart,
        (u32) _ovl_En_Fu_KagoSegmentRomStart,
        (void *) EnFuMato_Init,
        (void *) EnFuKago_Init,
        NULL,
        &En_Fu_Mato_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Fu_KagoSegmentRomStart,
        (u32) _ovl_En_OsnSegmentRomStart,
        (void *) EnFuKago_Init,
        &func_80AD0830,
        NULL,
        &En_Fu_Kago_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_OsnSegmentRomStart,
        (u32) _ovl_Bg_Ctower_GearSegmentRomStart,
        &func_80AD0830,
        &BgCtowerGear_Splash,
        NULL,
        &En_Osn_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Ctower_GearSegmentRomStart,
        (u32) _ovl_En_Trt2SegmentRomStart,
        &BgCtowerGear_Splash,
        &func_80AD3380,
        NULL,
        &Bg_Ctower_Gear_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Trt2SegmentRomStart,
        (u32) _ovl_Obj_Tokei_StepSegmentRomStart,
        &func_80AD3380,
        &ObjTokeiStep_SetSysMatrix,
        NULL,
        &En_Trt2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Tokei_StepSegmentRomStart,
        (u32) _ovl_Bg_LotusSegmentRomStart,
        &ObjTokeiStep_SetSysMatrix,
        (void *) BgLotus_Init,
        NULL,
        &Obj_Tokei_Step_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_LotusSegmentRomStart,
        (u32) _ovl_En_KameSegmentRomStart,
        (void *) BgLotus_Init,
        (void *) EnKame_Init,
        NULL,
        &Bg_Lotus_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KameSegmentRomStart,
        (u32) _ovl_Obj_Takaraya_WallSegmentRomStart,
        (void *) EnKame_Init,
        &func_80AD9240,
        NULL,
        &En_Kame_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Takaraya_WallSegmentRomStart,
        (u32) _ovl_Bg_Fu_MizuSegmentRomStart,
        &func_80AD9240,
        (void *) BgFuMizu_Init,
        NULL,
        &Obj_Takaraya_Wall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Fu_MizuSegmentRomStart,
        (u32) _ovl_En_SellnutsSegmentRomStart,
        (void *) BgFuMizu_Init,
        &func_80ADADD0,
        NULL,
        &Bg_Fu_Mizu_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SellnutsSegmentRomStart,
        (u32) _ovl_Bg_Dkjail_IvySegmentRomStart,
        &func_80ADADD0,
        &func_80ADE230,
        NULL,
        &En_Sellnuts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Dkjail_IvySegmentRomStart,
        (u32) _ovl_Obj_VisiblockSegmentRomStart,
        &func_80ADE230,
        (void *) ObjVisiblock_Init,
        NULL,
        &Bg_Dkjail_Ivy_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Obj_VisiblockSegmentRomStart,
        (u32) _ovl_En_TakarayaSegmentRomStart,
        (void *) ObjVisiblock_Init,
        (void *) EnTakaraya_Init,
        NULL,
        &Obj_Visiblock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TakarayaSegmentRomStart,
        (u32) _ovl_En_TsnSegmentRomStart,
        (void *) EnTakaraya_Init,
        &func_80ADFCA0,
        NULL,
        &En_Takaraya_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TsnSegmentRomStart,
        (u32) _ovl_En_Ds2nSegmentRomStart,
        &func_80ADFCA0,
        &func_80AE1650,
        NULL,
        &En_Tsn_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ds2nSegmentRomStart,
        (u32) _ovl_En_FsnSegmentRomStart,
        &func_80AE1650,
        &EnFsn_TestItemSelected,
        NULL,
        &En_Ds2n_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_FsnSegmentRomStart,
        (u32) _ovl_En_ShnSegmentRomStart,
        &EnFsn_TestItemSelected,
        &func_80AE6130,
        NULL,
        &En_Fsn_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ShnSegmentRomStart,
        (u32) _ovl_En_Stop_heishiSegmentRomStart,
        &func_80AE6130,
        (void *) EnStopheishi_Init,
        NULL,
        &En_Shn_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_Stop_heishiSegmentRomStart,
        (u32) _ovl_Obj_BigicicleSegmentRomStart,
        (void *) EnStopheishi_Init,
        (void *) ObjBigicicle_Init,
        NULL,
        &En_Stop_heishi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_BigicicleSegmentRomStart,
        (u32) _ovl_En_Lift_NutsSegmentRomStart,
        (void *) ObjBigicicle_Init,
        &func_80AE9A20,
        NULL,
        &Obj_Bigicicle_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Lift_NutsSegmentRomStart,
        (u32) _ovl_En_TkSegmentRomStart,
        &func_80AE9A20,
        &func_80AEC460,
        NULL,
        &En_Lift_Nuts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TkSegmentRomStart,
        (u32) _ovl_Bg_Market_StepSegmentRomStart,
        &func_80AEC460,
        (void *) BgMarketStep_Init,
        NULL,
        &En_Tk_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_Bg_Market_StepSegmentRomStart,
        (u32) _ovl_Obj_LupygameliftSegmentRomStart,
        (void *) BgMarketStep_Init,
        (void *) ObjLupygamelift_Init,
        NULL,
        &Bg_Market_Step_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_LupygameliftSegmentRomStart,
        (u32) _ovl_En_Test7SegmentRomStart,
        (void *) ObjLupygamelift_Init,
        (void *) EnTest7_SetupAction,
        NULL,
        &Obj_Lupygamelift_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Test7SegmentRomStart,
        (u32) _ovl_Obj_LightblockSegmentRomStart,
        (void *) EnTest7_SetupAction,
        &func_80AF3910,
        NULL,
        &En_Test7_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_LightblockSegmentRomStart,
        (u32) _ovl_Mir_Ray2SegmentRomStart,
        &func_80AF3910,
        &func_80AF3F70,
        NULL,
        &Obj_Lightblock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Mir_Ray2SegmentRomStart,
        (u32) _ovl_En_WdhandSegmentRomStart,
        &func_80AF3F70,
        (void *) EnWdhand_Init,
        NULL,
        &Mir_Ray2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_WdhandSegmentRomStart,
        (u32) _ovl_En_GamelupySegmentRomStart,
        (void *) EnWdhand_Init,
        (void *) EnGamelupy_Init,
        NULL,
        &En_Wdhand_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_GamelupySegmentRomStart,
        (u32) _ovl_Bg_Danpei_MovebgSegmentRomStart,
        (void *) EnGamelupy_Init,
        &func_80AF6DE0,
        NULL,
        &En_Gamelupy_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Danpei_MovebgSegmentRomStart,
        (u32) _ovl_En_SnowwdSegmentRomStart,
        &func_80AF6DE0,
        (void *) EnSnowwd_Init,
        NULL,
        &Bg_Danpei_Movebg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SnowwdSegmentRomStart,
        (u32) _ovl_En_PmSegmentRomStart,
        (void *) EnSnowwd_Init,
        &func_80AF7B40,
        NULL,
        &En_Snowwd_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PmSegmentRomStart,
        (u32) _ovl_En_GakufuSegmentRomStart,
        &func_80AF7B40,
        &func_80AFC960,
        NULL,
        &En_Pm_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_GakufuSegmentRomStart,
        (u32) _ovl_Elf_Msg4SegmentRomStart,
        &func_80AFC960,
        &func_80AFD380,
        NULL,
        &En_Gakufu_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Elf_Msg4SegmentRomStart,
        (u32) _ovl_Elf_Msg5SegmentRomStart,
        &func_80AFD380,
        &func_80AFD990,
        NULL,
        &Elf_Msg4_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Elf_Msg5SegmentRomStart,
        (u32) _ovl_En_Col_ManSegmentRomStart,
        &func_80AFD990,
        (void *) EnColMan_Init,
        NULL,
        &Elf_Msg5_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Col_ManSegmentRomStart,
        (u32) _ovl_En_Talk_GibudSegmentRomStart,
        (void *) EnColMan_Init,
        (void *) EnTalkGibud_Init,
        NULL,
        &En_Col_Man_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Talk_GibudSegmentRomStart,
        (u32) _ovl_En_GiantSegmentRomStart,
        (void *) EnTalkGibud_Init,
        &func_80B01990,
        NULL,
        &En_Talk_Gibud_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_GiantSegmentRomStart,
        (u32) _ovl_Obj_SnowballSegmentRomStart,
        &func_80B01990,
        &func_80B02CD0,
        NULL,
        &En_Giant_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_SnowballSegmentRomStart,
        (u32) _ovl_Boss_HakuginSegmentRomStart,
        &func_80B02CD0,
        (void *) BossHakugin_Init,
        NULL,
        &Obj_Snowball_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Boss_HakuginSegmentRomStart,
        (u32) _ovl_En_Gb2SegmentRomStart,
        (void *) BossHakugin_Init,
        &func_80B0F5E0,
        NULL,
        &Boss_Hakugin_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Gb2SegmentRomStart,
        (u32) _ovl_En_OnpumanSegmentRomStart,
        &func_80B0F5E0,
        (void *) EnOnpuman_Init,
        NULL,
        &En_Gb2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_OnpumanSegmentRomStart,
        (u32) _ovl_Bg_Tobira01SegmentRomStart,
        (void *) EnOnpuman_Init,
        &func_80B12430,
        NULL,
        &En_Onpuman_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Tobira01SegmentRomStart,
        (u32) _ovl_En_Tag_ObjSegmentRomStart,
        &func_80B12430,
        (void *) EnTagObj_Init,
        NULL,
        &Bg_Tobira01_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Tag_ObjSegmentRomStart,
        (u32) _ovl_Obj_DhouseSegmentRomStart,
        (void *) EnTagObj_Init,
        (void *) ObjDhouse_Init,
        NULL,
        &En_Tag_Obj_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_DhouseSegmentRomStart,
        (u32) _ovl_Obj_HakaisiSegmentRomStart,
        (void *) ObjDhouse_Init,
        (void *) ObjHakaisi_Init,
        NULL,
        &Obj_Dhouse_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_HakaisiSegmentRomStart,
        (u32) _ovl_Bg_Hakugin_SwitchSegmentRomStart,
        (void *) ObjHakaisi_Init,
        &func_80B15790,
        NULL,
        &Obj_Hakaisi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Hakugin_SwitchSegmentRomStart,
        (u32) _ovl_En_SnowmanSegmentRomStart,
        &func_80B15790,
        (void *) EnSnowman_Init,
        NULL,
        &Bg_Hakugin_Switch_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_SnowmanSegmentRomStart,
        (u32) _ovl_TG_SwSegmentRomStart,
        (void *) EnSnowman_Init,
        &TGSw_ActionDecider,
        NULL,
        &En_Snowman_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_TG_SwSegmentRomStart,
        (u32) _ovl_En_Po_SistersSegmentRomStart,
        &TGSw_ActionDecider,
        (void *) EnPoSisters_Init,
        NULL,
        &TG_Sw_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Po_SistersSegmentRomStart,
        (u32) _ovl_En_PpSegmentRomStart,
        (void *) EnPoSisters_Init,
        (void *) EnPp_Init,
        NULL,
        &En_Po_Sisters_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PpSegmentRomStart,
        (u32) _ovl_En_HakurockSegmentRomStart,
        (void *) EnPp_Init,
        (void *) EnHakurock_Init,
        NULL,
        &En_Pp_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HakurockSegmentRomStart,
        (u32) _ovl_En_HanabiSegmentRomStart,
        (void *) EnHakurock_Init,
        &func_80B22C00,
        NULL,
        &En_Hakurock_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HanabiSegmentRomStart,
        (u32) _ovl_Obj_DowsingSegmentRomStart,
        &func_80B22C00,
        &func_80B23D50,
        NULL,
        &En_Hanabi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_DowsingSegmentRomStart,
        (u32) _ovl_Obj_WindSegmentRomStart,
        &func_80B23D50,
        (void *) ObjWind_Init,
        NULL,
        &Obj_Dowsing_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_WindSegmentRomStart,
        (u32) _ovl_En_RacedogSegmentRomStart,
        (void *) ObjWind_Init,
        &func_80B24630,
        NULL,
        &Obj_Wind_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_RacedogSegmentRomStart,
        (u32) _ovl_En_Kendo_JsSegmentRomStart,
        &func_80B24630,
        (void *) EnKendoJs_Init,
        NULL,
        &En_Racedog_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Kendo_JsSegmentRomStart,
        (u32) _ovl_Bg_BotihasiraSegmentRomStart,
        (void *) EnKendoJs_Init,
        (void *) BgBotihasira_Init,
        NULL,
        &En_Kendo_Js_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_BotihasiraSegmentRomStart,
        (u32) _ovl_En_Fish2SegmentRomStart,
        (void *) BgBotihasira_Init,
        &func_80B28370,
        NULL,
        &Bg_Botihasira_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Fish2SegmentRomStart,
        (u32) _ovl_En_PstSegmentRomStart,
        &func_80B28370,
        &func_80B2B830,
        NULL,
        &En_Fish2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PstSegmentRomStart,
        (u32) _ovl_En_PohSegmentRomStart,
        &func_80B2B830,
        (void *) EnPoh_Init,
        NULL,
        &En_Pst_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PohSegmentRomStart,
        (u32) _ovl_Obj_SpidertentSegmentRomStart,
        (void *) EnPoh_Init,
        &func_80B2FB10,
        NULL,
        &En_Poh_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_SpidertentSegmentRomStart,
        (u32) _ovl_En_ZoraeggSegmentRomStart,
        &func_80B2FB10,
        &func_80B31590,
        NULL,
        &Obj_Spidertent_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ZoraeggSegmentRomStart,
        (u32) _ovl_En_KbtSegmentRomStart,
        &func_80B31590,
        (void *) EnKbt_Init,
        NULL,
        &En_Zoraegg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KbtSegmentRomStart,
        (u32) _ovl_En_GgSegmentRomStart,
        (void *) EnKbt_Init,
        &func_80B34F70,
        NULL,
        &En_Kbt_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_GgSegmentRomStart,
        (u32) _ovl_En_MarutaSegmentRomStart,
        &func_80B34F70,
        (void *) EnMaruta_Init,
        NULL,
        &En_Gg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_MarutaSegmentRomStart,
        (u32) _ovl_Obj_Snowball2SegmentRomStart,
        (void *) EnMaruta_Init,
        &func_80B38E20,
        NULL,
        &En_Maruta_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Snowball2SegmentRomStart,
        (u32) _ovl_En_Gg2SegmentRomStart,
        &func_80B38E20,
        &func_80B3AC50,
        NULL,
        &Obj_Snowball2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Gg2SegmentRomStart,
        (u32) _ovl_Obj_GhakaSegmentRomStart,
        &func_80B3AC50,
        (void *) func_80B3C260,
        NULL,
        &En_Gg2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_GhakaSegmentRomStart,
        (u32) _ovl_En_DnpSegmentRomStart,
        (void *) func_80B3C260,
        &func_80B3CA20,
        NULL,
        &Obj_Ghaka_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DnpSegmentRomStart,
        (u32) _ovl_En_DaiSegmentRomStart,
        &func_80B3CA20,
        &func_80B3DFF0,
        NULL,
        &En_Dnp_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DaiSegmentRomStart,
        (u32) _ovl_Bg_Goron_OyuSegmentRomStart,
        &func_80B3DFF0,
        &func_80B40080,
        NULL,
        &En_Dai_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Goron_OyuSegmentRomStart,
        (u32) _ovl_En_KgySegmentRomStart,
        &func_80B40080,
        (void *) EnKgy_Init,
        NULL,
        &Bg_Goron_Oyu_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KgySegmentRomStart,
        (u32) _ovl_En_InvadepohSegmentRomStart,
        (void *) EnKgy_Init,
        &func_80B439B0,
        NULL,
        &En_Kgy_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_InvadepohSegmentRomStart,
        (u32) _ovl_En_GkSegmentRomStart,
        &func_80B439B0,
        &func_80B50410,
        NULL,
        &En_Invadepoh_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_GkSegmentRomStart,
        (u32) _ovl_En_AnSegmentRomStart,
        &func_80B50410,
        &func_80B53840,
        NULL,
        &En_Gk_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_AnSegmentRomStart,
        (u32) _ovl_En_BeeSegmentRomStart,
        &func_80B53840,
        (void *) EnBee_Init,
        NULL,
        &En_An_InitVars,
        NULL,
        0,
        0,
    },
    {0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0},
    {
        (u32) _ovl_En_BeeSegmentRomStart,
        (u32) _ovl_En_OtSegmentRomStart,
        (void *) EnBee_Init,
        &func_80B5B2E0,
        NULL,
        &En_Bee_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_OtSegmentRomStart,
        (u32) _ovl_En_DragonSegmentRomStart,
        &func_80B5B2E0,
        (void *) EnDragon_Init,
        NULL,
        &En_Ot_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DragonSegmentRomStart,
        (u32) _ovl_Obj_DoraSegmentRomStart,
        (void *) EnDragon_Init,
        (void *) ObjDora_Init,
        NULL,
        &En_Dragon_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_DoraSegmentRomStart,
        (u32) _ovl_En_BigpoSegmentRomStart,
        (void *) ObjDora_Init,
        (void *) EnBigpo_Init,
        NULL,
        &Obj_Dora_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BigpoSegmentRomStart,
        (u32) _ovl_Obj_Kendo_KanbanSegmentRomStart,
        (void *) EnBigpo_Init,
        (void *) ObjKendoKanban_Init,
        NULL,
        &En_Bigpo_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Kendo_KanbanSegmentRomStart,
        (u32) _ovl_Obj_HarikoSegmentRomStart,
        (void *) ObjKendoKanban_Init,
        (void *) ObjHariko_Init,
        NULL,
        &Obj_Kendo_Kanban_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_HarikoSegmentRomStart,
        (u32) _ovl_En_SthSegmentRomStart,
        (void *) ObjHariko_Init,
        (void *) EnSth_Init,
        NULL,
        &Obj_Hariko_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SthSegmentRomStart,
        (u32) _ovl_Bg_Sinkai_KabeSegmentRomStart,
        (void *) EnSth_Init,
        (void *) BgSinkaiKabe_Init,
        NULL,
        &En_Sth_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Sinkai_KabeSegmentRomStart,
        (u32) _ovl_Bg_Haka_CurtainSegmentRomStart,
        (void *) BgSinkaiKabe_Init,
        (void *) BgHakaCurtain_Init,
        NULL,
        &Bg_Sinkai_Kabe_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Haka_CurtainSegmentRomStart,
        (u32) _ovl_Bg_Kin2_BombwallSegmentRomStart,
        (void *) BgHakaCurtain_Init,
        &func_80B6E020,
        NULL,
        &Bg_Haka_Curtain_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Kin2_BombwallSegmentRomStart,
        (u32) _ovl_Bg_Kin2_FenceSegmentRomStart,
        &func_80B6E020,
        &BgKin2Fence_CheckHitMask,
        NULL,
        &Bg_Kin2_Bombwall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Kin2_FenceSegmentRomStart,
        (u32) _ovl_Bg_Kin2_PictureSegmentRomStart,
        &BgKin2Fence_CheckHitMask,
        &func_80B6EFA0,
        NULL,
        &Bg_Kin2_Fence_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Kin2_PictureSegmentRomStart,
        (u32) _ovl_Bg_Kin2_ShelfSegmentRomStart,
        &func_80B6EFA0,
        &func_80B6FB30,
        NULL,
        &Bg_Kin2_Picture_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Kin2_ShelfSegmentRomStart,
        (u32) _ovl_En_Rail_SkbSegmentRomStart,
        &func_80B6FB30,
        &func_80B708C0,
        NULL,
        &Bg_Kin2_Shelf_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Rail_SkbSegmentRomStart,
        (u32) _ovl_En_JgSegmentRomStart,
        &func_80B708C0,
        &func_80B73A90,
        NULL,
        &En_Rail_Skb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_JgSegmentRomStart,
        (u32) _ovl_En_Tru_MtSegmentRomStart,
        &func_80B73A90,
        &func_80B76030,
        NULL,
        &En_Jg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Tru_MtSegmentRomStart,
        (u32) _ovl_Obj_UmSegmentRomStart,
        &func_80B76030,
        &func_80B77770,
        NULL,
        &En_Tru_Mt_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_UmSegmentRomStart,
        (u32) _ovl_En_Neo_ReebaSegmentRomStart,
        &func_80B77770,
        (void *) EnNeoReeba_Init,
        NULL,
        &Obj_Um_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Neo_ReebaSegmentRomStart,
        (u32) _ovl_Bg_Mbar_ChairSegmentRomStart,
        (void *) EnNeoReeba_Init,
        (void *) BgMbarChair_Init,
        NULL,
        &En_Neo_Reeba_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Mbar_ChairSegmentRomStart,
        (u32) _ovl_Bg_Ikana_BlockSegmentRomStart,
        (void *) BgMbarChair_Init,
        &func_80B7EA60,
        NULL,
        &Bg_Mbar_Chair_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Ikana_BlockSegmentRomStart,
        (u32) _ovl_Bg_Ikana_MirrorSegmentRomStart,
        &func_80B7EA60,
        &func_80B7F730,
        NULL,
        &Bg_Ikana_Block_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Ikana_MirrorSegmentRomStart,
        (u32) _ovl_Bg_Ikana_RotaryroomSegmentRomStart,
        &func_80B7F730,
        &func_80B802E0,
        NULL,
        &Bg_Ikana_Mirror_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Ikana_RotaryroomSegmentRomStart,
        (u32) _ovl_Bg_Dblue_BalanceSegmentRomStart,
        &func_80B802E0,
        &func_80B823B0,
        NULL,
        &Bg_Ikana_Rotaryroom_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Dblue_BalanceSegmentRomStart,
        (u32) _ovl_Bg_Dblue_WaterfallSegmentRomStart,
        &func_80B823B0,
        &func_80B83C80,
        NULL,
        &Bg_Dblue_Balance_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Dblue_WaterfallSegmentRomStart,
        (u32) _ovl_En_KaizokuSegmentRomStart,
        &func_80B83C80,
        (void *) EnKaizoku_Init,
        NULL,
        &Bg_Dblue_Waterfall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KaizokuSegmentRomStart,
        (u32) _ovl_En_Ge2SegmentRomStart,
        (void *) EnKaizoku_Init,
        (void *) EnGe2_Init,
        NULL,
        &En_Kaizoku_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ge2SegmentRomStart,
        (u32) _ovl_En_Ma_YtsSegmentRomStart,
        (void *) EnGe2_Init,
        &EnMaYts_UpdateEyes,
        NULL,
        &En_Ge2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ma_YtsSegmentRomStart,
        (u32) _ovl_En_Ma_YtoSegmentRomStart,
        &EnMaYts_UpdateEyes,
        (void *) EnMaYto_Init,
        NULL,
        &En_Ma_Yts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ma_YtoSegmentRomStart,
        (u32) _ovl_Obj_Tokei_TurretSegmentRomStart,
        (void *) EnMaYto_Init,
        (void *) ObjTokeiTurret_Init,
        NULL,
        &En_Ma_Yto_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Tokei_TurretSegmentRomStart,
        (u32) _ovl_Bg_Dblue_ElevatorSegmentRomStart,
        (void *) ObjTokeiTurret_Init,
        &func_80B91F20,
        NULL,
        &Obj_Tokei_Turret_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Dblue_ElevatorSegmentRomStart,
        (u32) _ovl_Obj_WarpstoneSegmentRomStart,
        &func_80B91F20,
        (void *) ObjWarpstone_SetupAction,
        NULL,
        &Bg_Dblue_Elevator_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_WarpstoneSegmentRomStart,
        (u32) _ovl_En_ZogSegmentRomStart,
        (void *) ObjWarpstone_SetupAction,
        &func_80B93310,
        NULL,
        &Obj_Warpstone_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ZogSegmentRomStart,
        (u32) _ovl_Obj_RotliftSegmentRomStart,
        &func_80B93310,
        &func_80B95E20,
        NULL,
        &En_Zog_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_RotliftSegmentRomStart,
        (u32) _ovl_Obj_Jg_GakkiSegmentRomStart,
        &func_80B95E20,
        (void *) ObjJgGakki_Init,
        NULL,
        &Obj_Rotlift_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Jg_GakkiSegmentRomStart,
        (u32) _ovl_Bg_Inibs_MovebgSegmentRomStart,
        (void *) ObjJgGakki_Init,
        (void *) BgInibsMovebg_Init,
        NULL,
        &Obj_Jg_Gakki_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Inibs_MovebgSegmentRomStart,
        (u32) _ovl_En_ZotSegmentRomStart,
        (void *) BgInibsMovebg_Init,
        &func_80B965D0,
        NULL,
        &Bg_Inibs_Movebg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ZotSegmentRomStart,
        (u32) _ovl_Obj_TreeSegmentRomStart,
        &func_80B965D0,
        (void *) ObjTree_Init,
        NULL,
        &En_Zot_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_TreeSegmentRomStart,
        (u32) _ovl_Obj_Y2liftSegmentRomStart,
        (void *) ObjTree_Init,
        (void *) ObjY2lift_Init,
        NULL,
        &Obj_Tree_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Y2liftSegmentRomStart,
        (u32) _ovl_Obj_Y2shutterSegmentRomStart,
        (void *) ObjY2lift_Init,
        (void *) ObjY2shutter_Init,
        NULL,
        &Obj_Y2lift_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Y2shutterSegmentRomStart,
        (u32) _ovl_Obj_BoatSegmentRomStart,
        (void *) ObjY2shutter_Init,
        &func_80B9AF50,
        NULL,
        &Obj_Y2shutter_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_BoatSegmentRomStart,
        (u32) _ovl_Obj_TaruSegmentRomStart,
        &func_80B9AF50,
        &func_80B9B6E0,
        NULL,
        &Obj_Boat_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_TaruSegmentRomStart,
        (u32) _ovl_Obj_HunsuiSegmentRomStart,
        &func_80B9B6E0,
        &func_80B9C450,
        NULL,
        &Obj_Taru_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_HunsuiSegmentRomStart,
        (u32) _ovl_En_Jc_MatoSegmentRomStart,
        &func_80B9C450,
        (void *) EnJcMato_CheckForHit,
        NULL,
        &Obj_Hunsui_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Jc_MatoSegmentRomStart,
        (u32) _ovl_Mir_Ray3SegmentRomStart,
        (void *) EnJcMato_CheckForHit,
        (void *) MirRay3_Init,
        NULL,
        &En_Jc_Mato_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Mir_Ray3SegmentRomStart,
        (u32) _ovl_En_ZobSegmentRomStart,
        (void *) MirRay3_Init,
        (void *) EnZob_Init,
        NULL,
        &Mir_Ray3_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ZobSegmentRomStart,
        (u32) _ovl_Elf_Msg6SegmentRomStart,
        (void *) EnZob_Init,
        &func_80BA15A0,
        NULL,
        &En_Zob_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Elf_Msg6SegmentRomStart,
        (u32) _ovl_Obj_NozokiSegmentRomStart,
        &func_80BA15A0,
        (void *) ObjNozoki_SetupAction,
        NULL,
        &Elf_Msg6_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_NozokiSegmentRomStart,
        (u32) _ovl_En_TotoSegmentRomStart,
        (void *) ObjNozoki_SetupAction,
        &func_80BA36C0,
        NULL,
        &Obj_Nozoki_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TotoSegmentRomStart,
        (u32) _ovl_En_RailgibudSegmentRomStart,
        &func_80BA36C0,
        &func_80BA5400,
        NULL,
        &En_Toto_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_RailgibudSegmentRomStart,
        (u32) _ovl_En_BabaSegmentRomStart,
        &func_80BA5400,
        &func_80BA8820,
        NULL,
        &En_Railgibud_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BabaSegmentRomStart,
        (u32) _ovl_En_SuttariSegmentRomStart,
        &func_80BA8820,
        &EnSuttari_UpdateCollider,
        NULL,
        &En_Baba_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_SuttariSegmentRomStart,
        (u32) _ovl_En_ZodSegmentRomStart,
        &EnSuttari_UpdateCollider,
        (void *) EnZod_Init,
        NULL,
        &En_Suttari_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ZodSegmentRomStart,
        (u32) _ovl_En_KujiyaSegmentRomStart,
        (void *) EnZod_Init,
        (void *) EnKujiya_Init,
        NULL,
        &En_Zod_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KujiyaSegmentRomStart,
        (u32) _ovl_En_GegSegmentRomStart,
        (void *) EnKujiya_Init,
        &func_80BB16D0,
        NULL,
        &En_Kujiya_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_GegSegmentRomStart,
        (u32) _ovl_Obj_KinokoSegmentRomStart,
        &func_80BB16D0,
        (void *) ObjKinoko_Init,
        NULL,
        &En_Geg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_KinokoSegmentRomStart,
        (u32) _ovl_Obj_YasiSegmentRomStart,
        (void *) ObjKinoko_Init,
        (void *) ObjYasi_Init,
        NULL,
        &Obj_Kinoko_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_YasiSegmentRomStart,
        (u32) _ovl_En_Tanron1SegmentRomStart,
        (void *) ObjYasi_Init,
        (void *) EnTanron1_Init,
        NULL,
        &Obj_Yasi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Tanron1SegmentRomStart,
        (u32) _ovl_En_Tanron2SegmentRomStart,
        (void *) EnTanron1_Init,
        (void *) EnTanron2_Init,
        NULL,
        &En_Tanron1_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Tanron2SegmentRomStart,
        (u32) _ovl_En_Tanron3SegmentRomStart,
        (void *) EnTanron2_Init,
        &func_80BB85A0,
        NULL,
        &En_Tanron2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Tanron3SegmentRomStart,
        (u32) _ovl_Obj_ChanSegmentRomStart,
        &func_80BB85A0,
        (void *) ObjChan_Init,
        NULL,
        &En_Tanron3_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_ChanSegmentRomStart,
        (u32) _ovl_En_ZosSegmentRomStart,
        (void *) ObjChan_Init,
        (void *) EnZos_Init,
        NULL,
        &Obj_Chan_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ZosSegmentRomStart,
        (u32) _ovl_En_S_GoroSegmentRomStart,
        (void *) EnZos_Init,
        &func_80BBCA80,
        NULL,
        &En_Zos_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_S_GoroSegmentRomStart,
        (u32) _ovl_En_NbSegmentRomStart,
        &func_80BBCA80,
        &func_80BBFDB0,
        NULL,
        &En_S_Goro_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_NbSegmentRomStart,
        (u32) _ovl_En_JaSegmentRomStart,
        &func_80BBFDB0,
        &func_80BC1900,
        NULL,
        &En_Nb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_JaSegmentRomStart,
        (u32) _ovl_Bg_F40_BlockSegmentRomStart,
        &func_80BC1900,
        &func_80BC3980,
        NULL,
        &En_Ja_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_F40_BlockSegmentRomStart,
        (u32) _ovl_Bg_F40_SwitchSegmentRomStart,
        &func_80BC3980,
        &func_80BC47B0,
        NULL,
        &Bg_F40_Block_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_F40_SwitchSegmentRomStart,
        (u32) _ovl_En_Po_ComposerSegmentRomStart,
        &func_80BC47B0,
        (void *) EnPoComposer_Init,
        NULL,
        &Bg_F40_Switch_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Po_ComposerSegmentRomStart,
        (u32) _ovl_En_GuruguruSegmentRomStart,
        (void *) EnPoComposer_Init,
        (void *) EnGuruguru_Init,
        NULL,
        &En_Po_Composer_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_GuruguruSegmentRomStart,
        (u32) _ovl_Oceff_Wipe5SegmentRomStart,
        (void *) EnGuruguru_Init,
        (void *) OceffWipe5_Init,
        NULL,
        &En_Guruguru_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Oceff_Wipe5SegmentRomStart,
        (u32) _ovl_En_Stone_heishiSegmentRomStart,
        (void *) OceffWipe5_Init,
        (void *) EnStoneheishi_Init,
        NULL,
        &Oceff_Wipe5_InitVars,
        NULL,
        1,
        0,
    },
    {
        (u32) _ovl_En_Stone_heishiSegmentRomStart,
        (u32) _ovl_Oceff_Wipe6SegmentRomStart,
        (void *) EnStoneheishi_Init,
        (void *) OceffWipe6_Init,
        NULL,
        &En_Stone_heishi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Oceff_Wipe6SegmentRomStart,
        (u32) _ovl_En_ScopenutsSegmentRomStart,
        (void *) OceffWipe6_Init,
        &func_80BCABF0,
        NULL,
        &Oceff_Wipe6_InitVars,
        NULL,
        1,
        0,
    },
    {
        (u32) _ovl_En_ScopenutsSegmentRomStart,
        (u32) _ovl_En_ScopecrowSegmentRomStart,
        &func_80BCABF0,
        &func_80BCD000,
        NULL,
        &En_Scopenuts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ScopecrowSegmentRomStart,
        (u32) _ovl_Oceff_Wipe7SegmentRomStart,
        &func_80BCD000,
        (void *) OceffWipe7_Init,
        NULL,
        &En_Scopecrow_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Oceff_Wipe7SegmentRomStart,
        (u32) _ovl_Eff_Kamejima_WaveSegmentRomStart,
        (void *) OceffWipe7_Init,
        (void *) EffKamejimaWave_Init,
        NULL,
        &Oceff_Wipe7_InitVars,
        NULL,
        1,
        0,
    },
    {
        (u32) _ovl_Eff_Kamejima_WaveSegmentRomStart,
        (u32) _ovl_En_HgSegmentRomStart,
        (void *) EffKamejimaWave_Init,
        (void *) EnHg_Init,
        NULL,
        &Eff_Kamejima_Wave_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HgSegmentRomStart,
        (u32) _ovl_En_HgoSegmentRomStart,
        (void *) EnHg_Init,
        (void *) EnHgo_Init,
        NULL,
        &En_Hg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HgoSegmentRomStart,
        (u32) _ovl_En_ZovSegmentRomStart,
        (void *) EnHgo_Init,
        (void *) EnZov_Init,
        NULL,
        &En_Hgo_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ZovSegmentRomStart,
        (u32) _ovl_En_AhSegmentRomStart,
        (void *) EnZov_Init,
        &func_80BD2A30,
        NULL,
        &En_Zov_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_AhSegmentRomStart,
        (u32) _ovl_Obj_HgdoorSegmentRomStart,
        &func_80BD2A30,
        &ObjHgdoor_SetChild,
        NULL,
        &En_Ah_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_HgdoorSegmentRomStart,
        (u32) _ovl_Bg_Ikana_BombwallSegmentRomStart,
        &ObjHgdoor_SetChild,
        &func_80BD4720,
        NULL,
        &Obj_Hgdoor_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Ikana_BombwallSegmentRomStart,
        (u32) _ovl_Bg_Ikana_RaySegmentRomStart,
        &func_80BD4720,
        (void *) BgIkanaRay_Init,
        NULL,
        &Bg_Ikana_Bombwall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Ikana_RaySegmentRomStart,
        (u32) _ovl_Bg_Ikana_ShutterSegmentRomStart,
        (void *) BgIkanaRay_Init,
        &BgIkanaShutter_AllSwitchesPressed,
        NULL,
        &Bg_Ikana_Ray_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Ikana_ShutterSegmentRomStart,
        (u32) _ovl_Bg_Haka_BombwallSegmentRomStart,
        &BgIkanaShutter_AllSwitchesPressed,
        &func_80BD5E00,
        NULL,
        &Bg_Ikana_Shutter_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Haka_BombwallSegmentRomStart,
        (u32) _ovl_Bg_Haka_TombSegmentRomStart,
        &func_80BD5E00,
        (void *) BgHakaTomb_Init,
        NULL,
        &Bg_Haka_Bombwall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Haka_TombSegmentRomStart,
        (u32) _ovl_En_Sc_RuppeSegmentRomStart,
        (void *) BgHakaTomb_Init,
        &func_80BD6910,
        NULL,
        &Bg_Haka_Tomb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Sc_RuppeSegmentRomStart,
        (u32) _ovl_Bg_Iknv_DoukutuSegmentRomStart,
        &func_80BD6910,
        (void *) BgIknvDoukutu_Init,
        NULL,
        &En_Sc_Ruppe_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Iknv_DoukutuSegmentRomStart,
        (u32) _ovl_Bg_Iknv_ObjSegmentRomStart,
        (void *) BgIknvDoukutu_Init,
        (void *) BgIknvObj_Init,
        NULL,
        &Bg_Iknv_Doukutu_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Iknv_ObjSegmentRomStart,
        (u32) _ovl_En_PameraSegmentRomStart,
        (void *) BgIknvObj_Init,
        (void *) EnPamera_Init,
        NULL,
        &Bg_Iknv_Obj_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PameraSegmentRomStart,
        (u32) _ovl_Obj_HsStumpSegmentRomStart,
        (void *) EnPamera_Init,
        (void *) ObjHsStump_Init,
        NULL,
        &En_Pamera_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_HsStumpSegmentRomStart,
        (u32) _ovl_En_Hidden_NutsSegmentRomStart,
        (void *) ObjHsStump_Init,
        (void *) EnHiddenNuts_Init,
        NULL,
        &Obj_HsStump_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Hidden_NutsSegmentRomStart,
        (u32) _ovl_En_ZowSegmentRomStart,
        (void *) EnHiddenNuts_Init,
        &func_80BDC270,
        NULL,
        &En_Hidden_Nuts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ZowSegmentRomStart,
        (u32) _ovl_En_TalkSegmentRomStart,
        &func_80BDC270,
        (void *) EnTalk_Init,
        NULL,
        &En_Zow_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TalkSegmentRomStart,
        (u32) _ovl_En_AlSegmentRomStart,
        (void *) EnTalk_Init,
        &func_80BDE1A0,
        NULL,
        &En_Talk_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_AlSegmentRomStart,
        (u32) _ovl_En_TabSegmentRomStart,
        &func_80BDE1A0,
        &func_80BE04E0,
        NULL,
        &En_Al_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_TabSegmentRomStart,
        (u32) _ovl_En_NimotsuSegmentRomStart,
        &func_80BE04E0,
        &func_80BE1C80,
        NULL,
        &En_Tab_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_NimotsuSegmentRomStart,
        (u32) _ovl_En_Hit_TagSegmentRomStart,
        &func_80BE1C80,
        (void *) EnHitTag_Init,
        NULL,
        &En_Nimotsu_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Hit_TagSegmentRomStart,
        (u32) _ovl_En_RuppecrowSegmentRomStart,
        (void *) EnHitTag_Init,
        &func_80BE2260,
        NULL,
        &En_Hit_Tag_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_RuppecrowSegmentRomStart,
        (u32) _ovl_En_Tanron4SegmentRomStart,
        &func_80BE2260,
        (void *) EnTanron4_Init,
        NULL,
        &En_Ruppecrow_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Tanron4SegmentRomStart,
        (u32) _ovl_En_Tanron5SegmentRomStart,
        (void *) EnTanron4_Init,
        &func_80BE4930,
        NULL,
        &En_Tanron4_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Tanron5SegmentRomStart,
        (u32) _ovl_En_Tanron6SegmentRomStart,
        &func_80BE4930,
        (void *) EnTanron6_Init,
        NULL,
        &En_Tanron5_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Tanron6SegmentRomStart,
        (u32) _ovl_En_Daiku2SegmentRomStart,
        (void *) EnTanron6_Init,
        &func_80BE61D0,
        NULL,
        &En_Tanron6_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Daiku2SegmentRomStart,
        (u32) _ovl_En_MutoSegmentRomStart,
        &func_80BE61D0,
        (void *) EnMuto_Init,
        NULL,
        &En_Daiku2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_MutoSegmentRomStart,
        (u32) _ovl_En_BaisenSegmentRomStart,
        (void *) EnMuto_Init,
        (void *) EnBaisen_Init,
        NULL,
        &En_Muto_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BaisenSegmentRomStart,
        (u32) _ovl_En_HeishiSegmentRomStart,
        (void *) EnBaisen_Init,
        (void *) EnHeishi_Init,
        NULL,
        &En_Baisen_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_HeishiSegmentRomStart,
        (u32) _ovl_En_Demo_heishiSegmentRomStart,
        (void *) EnHeishi_Init,
        (void *) EnDemoheishi_Init,
        NULL,
        &En_Heishi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Demo_heishiSegmentRomStart,
        (u32) _ovl_En_DtSegmentRomStart,
        (void *) EnDemoheishi_Init,
        (void *) EnDt_Init,
        NULL,
        &En_Demo_heishi_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DtSegmentRomStart,
        (u32) _ovl_En_ChaSegmentRomStart,
        (void *) EnDt_Init,
        (void *) EnCha_Init,
        NULL,
        &En_Dt_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ChaSegmentRomStart,
        (u32) _ovl_Obj_DinnerSegmentRomStart,
        (void *) EnCha_Init,
        (void *) ObjDinner_Init,
        NULL,
        &En_Cha_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_DinnerSegmentRomStart,
        (u32) _ovl_Eff_LastdaySegmentRomStart,
        (void *) ObjDinner_Init,
        (void *) EffLastday_Init,
        NULL,
        &Obj_Dinner_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Eff_LastdaySegmentRomStart,
        (u32) _ovl_Bg_Ikana_DharmaSegmentRomStart,
        (void *) EffLastday_Init,
        &func_80BEC240,
        NULL,
        &Eff_Lastday_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Ikana_DharmaSegmentRomStart,
        (u32) _ovl_En_AkindonutsSegmentRomStart,
        &func_80BEC240,
        &func_80BECBE0,
        NULL,
        &Bg_Ikana_Dharma_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_AkindonutsSegmentRomStart,
        (u32) _ovl_Eff_StkSegmentRomStart,
        &func_80BECBE0,
        (void *) EffStk_Init,
        NULL,
        &En_Akindonuts_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Eff_StkSegmentRomStart,
        (u32) _ovl_En_IgSegmentRomStart,
        (void *) EffStk_Init,
        &func_80BF1150,
        NULL,
        &Eff_Stk_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_IgSegmentRomStart,
        (u32) _ovl_En_RgSegmentRomStart,
        &func_80BF1150,
        &func_80BF3920,
        NULL,
        &En_Ig_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_RgSegmentRomStart,
        (u32) _ovl_En_OskSegmentRomStart,
        &func_80BF3920,
        (void *) EnOsk_Init,
        NULL,
        &En_Rg_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_OskSegmentRomStart,
        (u32) _ovl_En_Sth2SegmentRomStart,
        (void *) EnOsk_Init,
        (void *) EnSth2_Init,
        NULL,
        &En_Osk_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Sth2SegmentRomStart,
        (u32) _ovl_En_YbSegmentRomStart,
        (void *) EnSth2_Init,
        (void *) EnYb_Init,
        NULL,
        &En_Sth2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_YbSegmentRomStart,
        (u32) _ovl_En_RzSegmentRomStart,
        (void *) EnYb_Init,
        (void *) EnRz_Init,
        NULL,
        &En_Yb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_RzSegmentRomStart,
        (u32) _ovl_En_ScopecoinSegmentRomStart,
        (void *) EnRz_Init,
        (void *) func_80BFCFA0,
        NULL,
        &En_Rz_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ScopecoinSegmentRomStart,
        (u32) _ovl_En_BjtSegmentRomStart,
        (void *) func_80BFCFA0,
        &func_80BFD2E0,
        NULL,
        &En_Scopecoin_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BjtSegmentRomStart,
        (u32) _ovl_En_BomjimaSegmentRomStart,
        &func_80BFD2E0,
        (void *) EnBomjima_Init,
        NULL,
        &En_Bjt_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BomjimaSegmentRomStart,
        (u32) _ovl_En_BomjimbSegmentRomStart,
        (void *) EnBomjima_Init,
        (void *) EnBomjimb_Init,
        NULL,
        &En_Bomjima_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BomjimbSegmentRomStart,
        (u32) _ovl_En_BombersSegmentRomStart,
        (void *) EnBomjimb_Init,
        (void *) EnBombers_Init,
        NULL,
        &En_Bomjimb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BombersSegmentRomStart,
        (u32) _ovl_En_Bombers2SegmentRomStart,
        (void *) EnBombers_Init,
        (void *) EnBombers2_Init,
        NULL,
        &En_Bombers_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Bombers2SegmentRomStart,
        (u32) _ovl_En_BombalSegmentRomStart,
        (void *) EnBombers2_Init,
        (void *) EnBombal_Init,
        NULL,
        &En_Bombers2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BombalSegmentRomStart,
        (u32) _ovl_Obj_Moon_StoneSegmentRomStart,
        (void *) EnBombal_Init,
        (void *) ObjMoonStone_Init,
        NULL,
        &En_Bombal_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Moon_StoneSegmentRomStart,
        (u32) _ovl_Obj_Mu_PictSegmentRomStart,
        (void *) ObjMoonStone_Init,
        (void *) ObjMuPict_Init,
        NULL,
        &Obj_Moon_Stone_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Mu_PictSegmentRomStart,
        (u32) _ovl_Bg_IkninsideSegmentRomStart,
        (void *) ObjMuPict_Init,
        (void *) BgIkninside_Init,
        NULL,
        &Obj_Mu_Pict_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_IkninsideSegmentRomStart,
        (u32) _ovl_Eff_ZorabandSegmentRomStart,
        (void *) BgIkninside_Init,
        (void *) EffZoraband_Init,
        NULL,
        &Bg_Ikninside_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Eff_ZorabandSegmentRomStart,
        (u32) _ovl_Obj_Kepn_KoyaSegmentRomStart,
        (void *) EffZoraband_Init,
        (void *) ObjKepnKoya_Init,
        NULL,
        &Eff_Zoraband_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Kepn_KoyaSegmentRomStart,
        (u32) _ovl_Obj_UsiyaneSegmentRomStart,
        (void *) ObjKepnKoya_Init,
        &func_80C07C80,
        NULL,
        &Obj_Kepn_Koya_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_UsiyaneSegmentRomStart,
        (u32) _ovl_En_NnhSegmentRomStart,
        &func_80C07C80,
        (void *) EnNnh_Init,
        NULL,
        &Obj_Usiyane_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_NnhSegmentRomStart,
        (u32) _ovl_Obj_KzsakuSegmentRomStart,
        (void *) EnNnh_Init,
        (void *) ObjKzsaku_Init,
        NULL,
        &En_Nnh_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_KzsakuSegmentRomStart,
        (u32) _ovl_Obj_Milk_BinSegmentRomStart,
        (void *) ObjKzsaku_Init,
        (void *) ObjMilkBin_Init,
        NULL,
        &Obj_Kzsaku_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Milk_BinSegmentRomStart,
        (u32) _ovl_En_KitanSegmentRomStart,
        (void *) ObjMilkBin_Init,
        (void *) EnKitan_Init,
        NULL,
        &Obj_Milk_Bin_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_KitanSegmentRomStart,
        (u32) _ovl_Bg_Astr_BombwallSegmentRomStart,
        (void *) EnKitan_Init,
        &func_80C09ED0,
        NULL,
        &En_Kitan_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Astr_BombwallSegmentRomStart,
        (u32) _ovl_Bg_Iknin_SusceilSegmentRomStart,
        &func_80C09ED0,
        &func_80C0A740,
        NULL,
        &Bg_Astr_Bombwall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Iknin_SusceilSegmentRomStart,
        (u32) _ovl_En_BsbSegmentRomStart,
        &func_80C0A740,
        &func_80C0B290,
        NULL,
        &Bg_Iknin_Susceil_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BsbSegmentRomStart,
        (u32) _ovl_En_RecepgirlSegmentRomStart,
        &func_80C0B290,
        (void *) EnRecepgirl_Init,
        NULL,
        &En_Bsb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_RecepgirlSegmentRomStart,
        (u32) _ovl_En_ThiefbirdSegmentRomStart,
        (void *) EnRecepgirl_Init,
        (void *) EnThiefbird_Init,
        NULL,
        &En_Recepgirl_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_ThiefbirdSegmentRomStart,
        (u32) _ovl_En_Jgame_TsnSegmentRomStart,
        (void *) EnThiefbird_Init,
        (void *) EnJgameTsn_Init,
        NULL,
        &En_Thiefbird_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Jgame_TsnSegmentRomStart,
        (u32) _ovl_Obj_Jgame_LightSegmentRomStart,
        (void *) EnJgameTsn_Init,
        (void *) ObjJgameLight_Init,
        NULL,
        &En_Jgame_Tsn_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_Jgame_LightSegmentRomStart,
        (u32) _ovl_Obj_YadoSegmentRomStart,
        (void *) ObjJgameLight_Init,
        (void *) ObjYado_Init,
        NULL,
        &Obj_Jgame_Light_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_YadoSegmentRomStart,
        (u32) _ovl_Demo_SyotenSegmentRomStart,
        (void *) ObjYado_Init,
        (void *) DemoSyoten_Init,
        NULL,
        &Obj_Yado_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Demo_SyotenSegmentRomStart,
        (u32) _ovl_Demo_MoonendSegmentRomStart,
        (void *) DemoSyoten_Init,
        (void *) DemoMoonend_Init,
        NULL,
        &Demo_Syoten_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Demo_MoonendSegmentRomStart,
        (u32) _ovl_Bg_LbfshotSegmentRomStart,
        (void *) DemoMoonend_Init,
        (void *) BgLbfshot_Init,
        NULL,
        &Demo_Moonend_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_LbfshotSegmentRomStart,
        (u32) _ovl_Bg_Last_BwallSegmentRomStart,
        (void *) BgLbfshot_Init,
        &func_80C18240,
        NULL,
        &Bg_Lbfshot_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Bg_Last_BwallSegmentRomStart,
        (u32) _ovl_En_AndSegmentRomStart,
        &func_80C18240,
        &func_80C18B90,
        NULL,
        &Bg_Last_Bwall_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_AndSegmentRomStart,
        (u32) _ovl_En_Invadepoh_DemoSegmentRomStart,
        &func_80C18B90,
        &func_80C192A0,
        NULL,
        &En_And_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Invadepoh_DemoSegmentRomStart,
        (u32) _ovl_Obj_DanpeiliftSegmentRomStart,
        &func_80C192A0,
        &func_80C1ADC0,
        NULL,
        &En_Invadepoh_Demo_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_DanpeiliftSegmentRomStart,
        (u32) _ovl_En_Fall2SegmentRomStart,
        &func_80C1ADC0,
        (void *) EnFall2_Init,
        NULL,
        &Obj_Danpeilift_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Fall2SegmentRomStart,
        (u32) _ovl_Dm_AlSegmentRomStart,
        (void *) EnFall2_Init,
        &func_80C1BD90,
        NULL,
        &En_Fall2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_AlSegmentRomStart,
        (u32) _ovl_Dm_AnSegmentRomStart,
        &func_80C1BD90,
        &func_80C1C410,
        NULL,
        &Dm_Al_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_AnSegmentRomStart,
        (u32) _ovl_Dm_AhSegmentRomStart,
        &func_80C1C410,
        &func_80C1D410,
        NULL,
        &Dm_An_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_AhSegmentRomStart,
        (u32) _ovl_Dm_NbSegmentRomStart,
        &func_80C1D410,
        &func_80C1DED0,
        NULL,
        &Dm_Ah_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_NbSegmentRomStart,
        (u32) _ovl_En_DrsSegmentRomStart,
        &func_80C1DED0,
        &func_80C1E290,
        NULL,
        &Dm_Nb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_DrsSegmentRomStart,
        (u32) _ovl_En_Ending_HeroSegmentRomStart,
        &func_80C1E290,
        (void *) EnEndingHero_Init,
        NULL,
        &En_Drs_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ending_HeroSegmentRomStart,
        (u32) _ovl_Dm_BalSegmentRomStart,
        (void *) EnEndingHero_Init,
        (void *) DmBal_Init,
        NULL,
        &En_Ending_Hero_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_BalSegmentRomStart,
        (u32) _ovl_En_PaperSegmentRomStart,
        (void *) DmBal_Init,
        (void *) EnPaper_Init,
        NULL,
        &Dm_Bal_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_PaperSegmentRomStart,
        (u32) _ovl_En_Hint_SkbSegmentRomStart,
        (void *) EnPaper_Init,
        (void *) EnHintSkb_Init,
        NULL,
        &En_Paper_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Hint_SkbSegmentRomStart,
        (u32) _ovl_Dm_TagSegmentRomStart,
        (void *) EnHintSkb_Init,
        &func_80C22350,
        NULL,
        &En_Hint_Skb_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_TagSegmentRomStart,
        (u32) _ovl_En_BhSegmentRomStart,
        &func_80C22350,
        (void *) EnBh_Init,
        NULL,
        &Dm_Tag_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_BhSegmentRomStart,
        (u32) _ovl_En_Ending_Hero2SegmentRomStart,
        (void *) EnBh_Init,
        (void *) EnEndingHero2_Init,
        NULL,
        &En_Bh_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ending_Hero2SegmentRomStart,
        (u32) _ovl_En_Ending_Hero3SegmentRomStart,
        (void *) EnEndingHero2_Init,
        (void *) EnEndingHero3_Init,
        NULL,
        &En_Ending_Hero2_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ending_Hero3SegmentRomStart,
        (u32) _ovl_En_Ending_Hero4SegmentRomStart,
        (void *) EnEndingHero3_Init,
        (void *) EnEndingHero4_Init,
        NULL,
        &En_Ending_Hero3_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ending_Hero4SegmentRomStart,
        (u32) _ovl_En_Ending_Hero5SegmentRomStart,
        (void *) EnEndingHero4_Init,
        (void *) EnEndingHero5_Init,
        NULL,
        &En_Ending_Hero4_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ending_Hero5SegmentRomStart,
        (u32) _ovl_En_Ending_Hero6SegmentRomStart,
        (void *) EnEndingHero5_Init,
        (void *) EnEndingHero6_Init,
        NULL,
        &En_Ending_Hero5_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Ending_Hero6SegmentRomStart,
        (u32) _ovl_Dm_GmSegmentRomStart,
        (void *) EnEndingHero6_Init,
        &func_80C24360,
        NULL,
        &En_Ending_Hero6_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Dm_GmSegmentRomStart,
        (u32) _ovl_Obj_SwprizeSegmentRomStart,
        &func_80C24360,
        &func_80C25360,
        NULL,
        &Dm_Gm_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_SwprizeSegmentRomStart,
        (u32) _ovl_En_Invisible_RuppeSegmentRomStart,
        &func_80C25360,
        &func_80C258A0,
        NULL,
        &Obj_Swprize_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_Invisible_RuppeSegmentRomStart,
        (u32) _ovl_Obj_EndingSegmentRomStart,
        &func_80C258A0,
        (void *) ObjEnding_Init,
        NULL,
        &En_Invisible_Ruppe_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_Obj_EndingSegmentRomStart,
        (u32) _ovl_En_RsnSegmentRomStart,
        (void *) ObjEnding_Init,
        &func_80C25D40,
        NULL,
        &Obj_Ending_InitVars,
        NULL,
        0,
        0,
    },
    {
        (u32) _ovl_En_RsnSegmentRomStart,
        (u32) _ovl_En_RsnSegmentRomEnd,
        &func_80C25D40,
        (void *) _ovl_En_RsnSegmentEnd,
        NULL,
        &En_Rsn_InitVars,
        NULL,
        0,
        0,
    },
};
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
GameInfo *gGameInfo;
s16 gLinkFormObjectIndexes[8] = {0x10, 0x14C, 0x14D, 0x154, 0x11, 0, 0, 0x283};
SaveContext gSaveContext;
u16 gScenesPerRegion[11][27] = {
    {
        0x37,
        0x2F,
        0x3C,
        0x25,
        0x38,
        0x3B,
        0x14,
        0x23,
        0x4A,
        0x28,
        0xFFFF,
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
        0,
    },
    {
        0x33,
        0x4C,
        0xFFFF,
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        0x35,
        0x22,
        0x10,
        0x42,
        0x41,
        0x6A,
        0xFFFF,
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
        0,
        0,
        0,
        0,
        0,
    },
    {
        0x2B,
        0x3E,
        0x64,
        0x52,
        0xFFFF,
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        0x45,
        0,
        0x57,
        0xA,
        0x46,
        0x27,
        0xFFFF,
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
        0,
        0,
        0,
        0,
        0,
    },
    {
        0x2D,
        0x29,
        0x1C,
        0x40,
        0x24,
        0x53,
        0x6C,
        0x20,
        0x11,
        0x17,
        0x61,
        0x12,
        0x15,
        0x6D,
        0x68,
        0xD,
        0x34,
        0x54,
        0x2E,
        0x39,
        0x6E,
        0x6F,
        0x63,
        0x19,
        0x70,
        0x1E,
        0xFFFF,
    },
    {
        0x50,
        0x5A,
        0x2C,
        0x5C,
        0x5B,
        0x6B,
        0x4E,
        0x5D,
        0x5E,
        0xFFFF,
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
        0,
        0,
    },
    {
        0x43,
        0x30,
        0xFFFF,
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        0x1D,
        0x56,
        0x13,
        0x4F,
        0x55,
        0x60,
        0x4B,
        0x51,
        0xC,
        0xFFFF,
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
        0,
        0,
    },
    {
        0x4D,
        0x48,
        0x32,
        0x3D,
        0xFFFF,
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        0x58,
        0x59,
        0xFFFF,
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
u32 gSegments[16];
RomFile objectFileTable[643] = {
    {0, 0},
    {(u32) _gameplay_keepSegmentRomStart, (u32) _gameplay_keepSegmentRomEnd},
    {
        (u32) _gameplay_field_keepSegmentRomStart,
        (u32) _gameplay_field_keepSegmentRomEnd,
    },
    {
        (u32) _gameplay_dangeon_keepSegmentRomStart,
        (u32) _gameplay_dangeon_keepSegmentRomEnd,
    },
    {(u32) _object_nbSegmentRomStart, (u32) _object_nbSegmentRomEnd},
    {(u32) _object_okutaSegmentRomStart, (u32) _object_okutaSegmentRomEnd},
    {(u32) _object_crowSegmentRomStart, (u32) _object_crowSegmentRomEnd},
    {(u32) _object_ahSegmentRomStart, (u32) _object_ahSegmentRomEnd},
    {(u32) _object_dy_objSegmentRomStart, (u32) _object_dy_objSegmentRomEnd},
    {
        (u32) _object_wallmasterSegmentRomStart,
        (u32) _object_wallmasterSegmentRomEnd,
    },
    {(u32) _object_dodongoSegmentRomStart, (u32) _object_dodongoSegmentRomEnd},
    {(u32) _object_fireflySegmentRomStart, (u32) _object_fireflySegmentRomEnd},
    {(u32) _object_boxSegmentRomStart, (u32) _object_boxSegmentRomEnd},
    {(u32) _object_alSegmentRomStart, (u32) _object_alSegmentRomEnd},
    {(u32) _object_bubbleSegmentRomStart, (u32) _object_bubbleSegmentRomEnd},
    {(u32) _object_niwSegmentRomStart, (u32) _object_niwSegmentRomEnd},
    {(u32) _object_link_boySegmentRomStart, (u32) _object_link_boySegmentRomEnd},
    {
        (u32) _object_link_childSegmentRomStart,
        (u32) _object_link_childSegmentRomEnd,
    },
    {(u32) _object_titeSegmentRomStart, (u32) _object_titeSegmentRomEnd},
    {(u32) _object_tabSegmentRomStart, (u32) _object_tabSegmentRomEnd},
    {(u32) _object_phSegmentRomStart, (u32) _object_phSegmentRomEnd},
    {(u32) _object_andSegmentRomStart, (u32) _object_andSegmentRomEnd},
    {(u32) _object_msmoSegmentRomStart, (u32) _object_msmoSegmentRomEnd},
    {(u32) _object_dinofosSegmentRomStart, (u32) _object_dinofosSegmentRomEnd},
    {(u32) _object_drsSegmentRomStart, (u32) _object_drsSegmentRomEnd},
    {(u32) _object_zl1SegmentRomStart, (u32) _object_zl1SegmentRomEnd},
    {(u32) _object_an4SegmentRomStart, (u32) _object_an4SegmentRomEnd},
    {0, 0},
    {(u32) _object_test3SegmentRomStart, (u32) _object_test3SegmentRomEnd},
    {(u32) _object_famosSegmentRomStart, (u32) _object_famosSegmentRomEnd},
    {0, 0},
    {0, 0},
    {(u32) _object_stSegmentRomStart, (u32) _object_stSegmentRomEnd},
    {0, 0},
    {(u32) _object_thiefbirdSegmentRomStart, (u32) _object_thiefbirdSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_bombfSegmentRomStart, (u32) _object_bombfSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_amSegmentRomStart, (u32) _object_amSegmentRomEnd},
    {(u32) _object_dekubabaSegmentRomStart, (u32) _object_dekubabaSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_warp1SegmentRomStart, (u32) _object_warp1SegmentRomEnd},
    {(u32) _object_b_heartSegmentRomStart, (u32) _object_b_heartSegmentRomEnd},
    {(u32) _object_dekunutsSegmentRomStart, (u32) _object_dekunutsSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_bbSegmentRomStart, (u32) _object_bbSegmentRomEnd},
    {(u32) _object_deathSegmentRomStart, (u32) _object_deathSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_f40_objSegmentRomStart, (u32) _object_f40_objSegmentRomEnd},
    {
        (u32) _object_po_composerSegmentRomStart,
        (u32) _object_po_composerSegmentRomEnd,
    },
    {0, 0},
    {(u32) _object_hataSegmentRomStart, (u32) _object_hataSegmentRomEnd},
    {0, 0},
    {(u32) _object_wood02SegmentRomStart, (u32) _object_wood02SegmentRomEnd},
    {0, 0},
    {0, 0},
    {(u32) _object_trapSegmentRomStart, (u32) _object_trapSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_vmSegmentRomStart, (u32) _object_vmSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {
        (u32) _object_efc_star_fieldSegmentRomStart,
        (u32) _object_efc_star_fieldSegmentRomEnd,
    },
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_rdSegmentRomStart, (u32) _object_rdSegmentRomEnd},
    {
        (u32) _object_yukimura_objSegmentRomStart,
        (u32) _object_yukimura_objSegmentRomEnd,
    },
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {
        (u32) _object_horse_link_childSegmentRomStart,
        (u32) _object_horse_link_childSegmentRomEnd,
    },
    {0, 0},
    {0, 0},
    {(u32) _object_syokudaiSegmentRomStart, (u32) _object_syokudaiSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_efc_twSegmentRomStart, (u32) _object_efc_twSegmentRomEnd},
    {0, 0},
    {(u32) _object_gi_keySegmentRomStart, (u32) _object_gi_keySegmentRomEnd},
    {(u32) _object_mir_raySegmentRomStart, (u32) _object_mir_raySegmentRomEnd},
    {
        (u32) _object_ctower_rotSegmentRomStart,
        (u32) _object_ctower_rotSegmentRomEnd,
    },
    {0, 0},
    {(u32) _object_bdoorSegmentRomStart, (u32) _object_bdoorSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_sbSegmentRomStart, (u32) _object_sbSegmentRomEnd},
    {(u32) _object_gi_melodySegmentRomStart, (u32) _object_gi_melodySegmentRomEnd},
    {(u32) _object_gi_heartSegmentRomStart, (u32) _object_gi_heartSegmentRomEnd},
    {
        (u32) _object_gi_compassSegmentRomStart,
        (u32) _object_gi_compassSegmentRomEnd,
    },
    {
        (u32) _object_gi_bosskeySegmentRomStart,
        (u32) _object_gi_bosskeySegmentRomEnd,
    },
    {0, 0},
    {(u32) _object_gi_nutsSegmentRomStart, (u32) _object_gi_nutsSegmentRomEnd},
    {0, 0},
    {(u32) _object_gi_heartsSegmentRomStart, (u32) _object_gi_heartsSegmentRomEnd},
    {
        (u32) _object_gi_arrowcaseSegmentRomStart,
        (u32) _object_gi_arrowcaseSegmentRomEnd,
    },
    {
        (u32) _object_gi_bombpouchSegmentRomStart,
        (u32) _object_gi_bombpouchSegmentRomEnd,
    },
    {(u32) _object_inSegmentRomStart, (u32) _object_inSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_os_animeSegmentRomStart, (u32) _object_os_animeSegmentRomEnd},
    {(u32) _object_gi_bottleSegmentRomStart, (u32) _object_gi_bottleSegmentRomEnd},
    {(u32) _object_gi_stickSegmentRomStart, (u32) _object_gi_stickSegmentRomEnd},
    {(u32) _object_gi_mapSegmentRomStart, (u32) _object_gi_mapSegmentRomEnd},
    {(u32) _object_oF1d_mapSegmentRomStart, (u32) _object_oF1d_mapSegmentRomEnd},
    {(u32) _object_ru2SegmentRomStart, (u32) _object_ru2SegmentRomEnd},
    {0, 0},
    {
        (u32) _object_gi_magicpotSegmentRomStart,
        (u32) _object_gi_magicpotSegmentRomEnd,
    },
    {(u32) _object_gi_bomb_1SegmentRomStart, (u32) _object_gi_bomb_1SegmentRomEnd},
    {0, 0},
    {(u32) _object_ma2SegmentRomStart, (u32) _object_ma2SegmentRomEnd},
    {(u32) _object_gi_purseSegmentRomStart, (u32) _object_gi_purseSegmentRomEnd},
    {0, 0},
    {0, 0},
    {(u32) _object_rrSegmentRomStart, (u32) _object_rrSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_gi_arrowSegmentRomStart, (u32) _object_gi_arrowSegmentRomEnd},
    {(u32) _object_gi_bomb_2SegmentRomStart, (u32) _object_gi_bomb_2SegmentRomEnd},
    {0, 0},
    {0, 0},
    {
        (u32) _object_gi_shield_2SegmentRomStart,
        (u32) _object_gi_shield_2SegmentRomEnd,
    },
    {
        (u32) _object_gi_hookshotSegmentRomStart,
        (u32) _object_gi_hookshotSegmentRomEnd,
    },
    {
        (u32) _object_gi_ocarinaSegmentRomStart,
        (u32) _object_gi_ocarinaSegmentRomEnd,
    },
    {(u32) _object_gi_milkSegmentRomStart, (u32) _object_gi_milkSegmentRomEnd},
    {(u32) _object_ma1SegmentRomStart, (u32) _object_ma1SegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_nySegmentRomStart, (u32) _object_nySegmentRomEnd},
    {(u32) _object_frSegmentRomStart, (u32) _object_frSegmentRomEnd},
    {0, 0},
    {0, 0},
    {(u32) _object_gi_bowSegmentRomStart, (u32) _object_gi_bowSegmentRomEnd},
    {
        (u32) _object_gi_glassesSegmentRomStart,
        (u32) _object_gi_glassesSegmentRomEnd,
    },
    {(u32) _object_gi_liquidSegmentRomStart, (u32) _object_gi_liquidSegmentRomEnd},
    {(u32) _object_aniSegmentRomStart, (u32) _object_aniSegmentRomEnd},
    {
        (u32) _object_gi_shield_3SegmentRomStart,
        (u32) _object_gi_shield_3SegmentRomEnd,
    },
    {0, 0},
    {0, 0},
    {(u32) _object_gi_beanSegmentRomStart, (u32) _object_gi_beanSegmentRomEnd},
    {(u32) _object_gi_fishSegmentRomStart, (u32) _object_gi_fishSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {
        (u32) _object_gi_longswordSegmentRomStart,
        (u32) _object_gi_longswordSegmentRomEnd,
    },
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_zoSegmentRomStart, (u32) _object_zoSegmentRomEnd},
    {0, 0},
    {(u32) _object_umajumpSegmentRomStart, (u32) _object_umajumpSegmentRomEnd},
    {0, 0},
    {0, 0},
    {
        (u32) _object_mastergolonSegmentRomStart,
        (u32) _object_mastergolonSegmentRomEnd,
    },
    {
        (u32) _object_masterzooraSegmentRomStart,
        (u32) _object_masterzooraSegmentRomEnd,
    },
    {(u32) _object_aobSegmentRomStart, (u32) _object_aobSegmentRomEnd},
    {(u32) _object_ikSegmentRomStart, (u32) _object_ikSegmentRomEnd},
    {(u32) _object_ahgSegmentRomStart, (u32) _object_ahgSegmentRomEnd},
    {(u32) _object_cneSegmentRomStart, (u32) _object_cneSegmentRomEnd},
    {0, 0},
    {0, 0},
    {(u32) _object_an3SegmentRomStart, (u32) _object_an3SegmentRomEnd},
    {(u32) _object_bjiSegmentRomStart, (u32) _object_bjiSegmentRomEnd},
    {(u32) _object_bbaSegmentRomStart, (u32) _object_bbaSegmentRomEnd},
    {(u32) _object_an2SegmentRomStart, (u32) _object_an2SegmentRomEnd},
    {0, 0},
    {(u32) _object_an1SegmentRomStart, (u32) _object_an1SegmentRomEnd},
    {(u32) _object_bojSegmentRomStart, (u32) _object_bojSegmentRomEnd},
    {(u32) _object_fzSegmentRomStart, (u32) _object_fzSegmentRomEnd},
    {(u32) _object_bobSegmentRomStart, (u32) _object_bobSegmentRomEnd},
    {(u32) _object_ge1SegmentRomStart, (u32) _object_ge1SegmentRomEnd},
    {
        (u32) _object_yabusame_pointSegmentRomStart,
        (u32) _object_yabusame_pointSegmentRomEnd,
    },
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_d_hsblockSegmentRomStart, (u32) _object_d_hsblockSegmentRomEnd},
    {(u32) _object_d_liftSegmentRomStart, (u32) _object_d_liftSegmentRomEnd},
    {(u32) _object_mamenokiSegmentRomStart, (u32) _object_mamenokiSegmentRomEnd},
    {(u32) _object_goroiwaSegmentRomStart, (u32) _object_goroiwaSegmentRomEnd},
    {(u32) _object_toryoSegmentRomStart, (u32) _object_toryoSegmentRomEnd},
    {(u32) _object_daikuSegmentRomStart, (u32) _object_daikuSegmentRomEnd},
    {(u32) _object_nwcSegmentRomStart, (u32) _object_nwcSegmentRomEnd},
    {(u32) _object_gmSegmentRomStart, (u32) _object_gmSegmentRomEnd},
    {(u32) _object_msSegmentRomStart, (u32) _object_msSegmentRomEnd},
    {(u32) _object_hsSegmentRomStart, (u32) _object_hsSegmentRomEnd},
    {0, 0},
    {
        (u32) _object_lightswitchSegmentRomStart,
        (u32) _object_lightswitchSegmentRomEnd,
    },
    {(u32) _object_kusaSegmentRomStart, (u32) _object_kusaSegmentRomEnd},
    {(u32) _object_tsuboSegmentRomStart, (u32) _object_tsuboSegmentRomEnd},
    {0, 0},
    {0, 0},
    {(u32) _object_kanbanSegmentRomStart, (u32) _object_kanbanSegmentRomEnd},
    {(u32) _object_owlSegmentRomStart, (u32) _object_owlSegmentRomEnd},
    {(u32) _object_mkSegmentRomStart, (u32) _object_mkSegmentRomEnd},
    {(u32) _object_fuSegmentRomStart, (u32) _object_fuSegmentRomEnd},
    {
        (u32) _object_gi_ki_tan_maskSegmentRomStart,
        (u32) _object_gi_ki_tan_maskSegmentRomEnd,
    },
    {0, 0},
    {(u32) _object_gi_mask18SegmentRomStart, (u32) _object_gi_mask18SegmentRomEnd},
    {
        (u32) _object_gi_rabit_maskSegmentRomStart,
        (u32) _object_gi_rabit_maskSegmentRomEnd,
    },
    {
        (u32) _object_gi_truth_maskSegmentRomStart,
        (u32) _object_gi_truth_maskSegmentRomEnd,
    },
    {0, 0},
    {(u32) _object_streamSegmentRomStart, (u32) _object_streamSegmentRomEnd},
    {(u32) _object_mmSegmentRomStart, (u32) _object_mmSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_jsSegmentRomStart, (u32) _object_jsSegmentRomEnd},
    {(u32) _object_csSegmentRomStart, (u32) _object_csSegmentRomEnd},
    {0, 0},
    {0, 0},
    {
        (u32) _object_gi_soldoutSegmentRomStart,
        (u32) _object_gi_soldoutSegmentRomEnd,
    },
    {0, 0},
    {(u32) _object_magSegmentRomStart, (u32) _object_magSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {
        (u32) _object_gi_golonmaskSegmentRomStart,
        (u32) _object_gi_golonmaskSegmentRomEnd,
    },
    {
        (u32) _object_gi_zoramaskSegmentRomStart,
        (u32) _object_gi_zoramaskSegmentRomEnd,
    },
    {0, 0},
    {0, 0},
    {(u32) _object_kaSegmentRomStart, (u32) _object_kaSegmentRomEnd},
    {0, 0},
    {(u32) _object_zgSegmentRomStart, (u32) _object_zgSegmentRomEnd},
    {0, 0},
    {
        (u32) _object_gi_m_arrowSegmentRomStart,
        (u32) _object_gi_m_arrowSegmentRomEnd,
    },
    {(u32) _object_ds2SegmentRomStart, (u32) _object_ds2SegmentRomEnd},
    {0, 0},
    {(u32) _object_fishSegmentRomStart, (u32) _object_fishSegmentRomEnd},
    {(u32) _object_gi_sutaruSegmentRomStart, (u32) _object_gi_sutaruSegmentRomEnd},
    {0, 0},
    {(u32) _object_sshSegmentRomStart, (u32) _object_sshSegmentRomEnd},
    {(u32) _object_bigslimeSegmentRomStart, (u32) _object_bigslimeSegmentRomEnd},
    {(u32) _object_bgSegmentRomStart, (u32) _object_bgSegmentRomEnd},
    {(u32) _object_bombiwaSegmentRomStart, (u32) _object_bombiwaSegmentRomEnd},
    {(u32) _object_hintnutsSegmentRomStart, (u32) _object_hintnutsSegmentRomEnd},
    {(u32) _object_rsSegmentRomStart, (u32) _object_rsSegmentRomEnd},
    {0, 0},
    {(u32) _object_glaSegmentRomStart, (u32) _object_glaSegmentRomEnd},
    {0, 0},
    {(u32) _object_geldbSegmentRomStart, (u32) _object_geldbSegmentRomEnd},
    {0, 0},
    {(u32) _object_dogSegmentRomStart, (u32) _object_dogSegmentRomEnd},
    {(u32) _object_kibako2SegmentRomStart, (u32) _object_kibako2SegmentRomEnd},
    {(u32) _object_dnsSegmentRomStart, (u32) _object_dnsSegmentRomEnd},
    {(u32) _object_dnkSegmentRomStart, (u32) _object_dnkSegmentRomEnd},
    {0, 0},
    {(u32) _object_gi_insectSegmentRomStart, (u32) _object_gi_insectSegmentRomEnd},
    {0, 0},
    {(u32) _object_gi_ghostSegmentRomStart, (u32) _object_gi_ghostSegmentRomEnd},
    {(u32) _object_gi_soulSegmentRomStart, (u32) _object_gi_soulSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_gi_rupySegmentRomStart, (u32) _object_gi_rupySegmentRomEnd},
    {(u32) _object_muSegmentRomStart, (u32) _object_muSegmentRomEnd},
    {(u32) _object_wfSegmentRomStart, (u32) _object_wfSegmentRomEnd},
    {(u32) _object_skbSegmentRomStart, (u32) _object_skbSegmentRomEnd},
    {(u32) _object_gsSegmentRomStart, (u32) _object_gsSegmentRomEnd},
    {(u32) _object_psSegmentRomStart, (u32) _object_psSegmentRomEnd},
    {(u32) _object_omoya_objSegmentRomStart, (u32) _object_omoya_objSegmentRomEnd},
    {(u32) _object_cowSegmentRomStart, (u32) _object_cowSegmentRomEnd},
    {0, 0},
    {
        (u32) _object_gi_sword_1SegmentRomStart,
        (u32) _object_gi_sword_1SegmentRomEnd,
    },
    {0, 0},
    {0, 0},
    {(u32) _object_zl4SegmentRomStart, (u32) _object_zl4SegmentRomEnd},
    {
        (u32) _object_link_goronSegmentRomStart,
        (u32) _object_link_goronSegmentRomEnd,
    },
    {(u32) _object_link_zoraSegmentRomStart, (u32) _object_link_zoraSegmentRomEnd},
    {
        (u32) _object_grasshopperSegmentRomStart,
        (u32) _object_grasshopperSegmentRomEnd,
    },
    {(u32) _object_boyoSegmentRomStart, (u32) _object_boyoSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_fwallSegmentRomStart, (u32) _object_fwallSegmentRomEnd},
    {(u32) _object_link_nutsSegmentRomStart, (u32) _object_link_nutsSegmentRomEnd},
    {(u32) _object_jsoSegmentRomStart, (u32) _object_jsoSegmentRomEnd},
    {(u32) _object_knightSegmentRomStart, (u32) _object_knightSegmentRomEnd},
    {(u32) _object_icicleSegmentRomStart, (u32) _object_icicleSegmentRomEnd},
    {(u32) _object_spdwebSegmentRomStart, (u32) _object_spdwebSegmentRomEnd},
    {0, 0},
    {(u32) _object_boss01SegmentRomStart, (u32) _object_boss01SegmentRomEnd},
    {(u32) _object_boss02SegmentRomStart, (u32) _object_boss02SegmentRomEnd},
    {(u32) _object_boss03SegmentRomStart, (u32) _object_boss03SegmentRomEnd},
    {(u32) _object_boss04SegmentRomStart, (u32) _object_boss04SegmentRomEnd},
    {(u32) _object_boss05SegmentRomStart, (u32) _object_boss05SegmentRomEnd},
    {(u32) _object_boss07SegmentRomStart, (u32) _object_boss07SegmentRomStart},
    {(u32) _object_boss07SegmentRomStart, (u32) _object_boss07SegmentRomEnd},
    {(u32) _object_rafSegmentRomStart, (u32) _object_rafSegmentRomEnd},
    {(u32) _object_funenSegmentRomStart, (u32) _object_funenSegmentRomEnd},
    {(u32) _object_railliftSegmentRomStart, (u32) _object_railliftSegmentRomEnd},
    {(u32) _object_numa_objSegmentRomStart, (u32) _object_numa_objSegmentRomEnd},
    {(u32) _object_flowerpotSegmentRomStart, (u32) _object_flowerpotSegmentRomEnd},
    {(u32) _object_spinyrollSegmentRomStart, (u32) _object_spinyrollSegmentRomEnd},
    {(u32) _object_ice_blockSegmentRomStart, (u32) _object_ice_blockSegmentRomEnd},
    {0, 0},
    {
        (u32) _object_keikoku_demoSegmentRomStart,
        (u32) _object_keikoku_demoSegmentRomEnd,
    },
    {(u32) _object_slimeSegmentRomStart, (u32) _object_slimeSegmentRomEnd},
    {(u32) _object_prSegmentRomStart, (u32) _object_prSegmentRomEnd},
    {(u32) _object_f52_objSegmentRomStart, (u32) _object_f52_objSegmentRomEnd},
    {(u32) _object_f53_objSegmentRomStart, (u32) _object_f53_objSegmentRomEnd},
    {0, 0},
    {(u32) _object_kibakoSegmentRomStart, (u32) _object_kibakoSegmentRomEnd},
    {(u32) _object_sekSegmentRomStart, (u32) _object_sekSegmentRomEnd},
    {(u32) _object_gmoSegmentRomStart, (u32) _object_gmoSegmentRomEnd},
    {(u32) _object_batSegmentRomStart, (u32) _object_batSegmentRomEnd},
    {(u32) _object_sekihilSegmentRomStart, (u32) _object_sekihilSegmentRomEnd},
    {(u32) _object_sekihigSegmentRomStart, (u32) _object_sekihigSegmentRomEnd},
    {(u32) _object_sekihinSegmentRomStart, (u32) _object_sekihinSegmentRomEnd},
    {(u32) _object_sekihizSegmentRomStart, (u32) _object_sekihizSegmentRomEnd},
    {0, 0},
    {(u32) _object_wizSegmentRomStart, (u32) _object_wizSegmentRomEnd},
    {(u32) _object_ladderSegmentRomStart, (u32) _object_ladderSegmentRomEnd},
    {(u32) _object_mkkSegmentRomStart, (u32) _object_mkkSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {
        (u32) _object_keikoku_objSegmentRomStart,
        (u32) _object_keikoku_objSegmentRomEnd,
    },
    {
        (u32) _object_sichitai_objSegmentRomStart,
        (u32) _object_sichitai_objSegmentRomEnd,
    },
    {
        (u32) _object_dekucity_ana_objSegmentRomStart,
        (u32) _object_dekucity_ana_objSegmentRomEnd,
    },
    {(u32) _object_ratSegmentRomStart, (u32) _object_ratSegmentRomEnd},
    {
        (u32) _object_water_effectSegmentRomStart,
        (u32) _object_water_effectSegmentRomEnd,
    },
    {0, 0},
    {
        (u32) _object_dblue_objectSegmentRomStart,
        (u32) _object_dblue_objectSegmentRomEnd,
    },
    {(u32) _object_balSegmentRomStart, (u32) _object_balSegmentRomEnd},
    {(u32) _object_warp_uzuSegmentRomStart, (u32) _object_warp_uzuSegmentRomEnd},
    {(u32) _object_drifticeSegmentRomStart, (u32) _object_drifticeSegmentRomEnd},
    {(u32) _object_fallSegmentRomStart, (u32) _object_fallSegmentRomEnd},
    {
        (u32) _object_hanareyama_objSegmentRomStart,
        (u32) _object_hanareyama_objSegmentRomEnd,
    },
    {
        (u32) _object_crace_objectSegmentRomStart,
        (u32) _object_crace_objectSegmentRomEnd,
    },
    {(u32) _object_dnqSegmentRomStart, (u32) _object_dnqSegmentRomEnd},
    {
        (u32) _object_obj_tokeidaiSegmentRomStart,
        (u32) _object_obj_tokeidaiSegmentRomEnd,
    },
    {(u32) _object_egSegmentRomStart, (u32) _object_egSegmentRomEnd},
    {(u32) _object_truSegmentRomStart, (u32) _object_truSegmentRomEnd},
    {(u32) _object_trtSegmentRomStart, (u32) _object_trtSegmentRomEnd},
    {
        (u32) _object_hakugin_objSegmentRomStart,
        (u32) _object_hakugin_objSegmentRomEnd,
    },
    {
        (u32) _object_horse_game_checkSegmentRomStart,
        (u32) _object_horse_game_checkSegmentRomEnd,
    },
    {(u32) _object_stkSegmentRomStart, (u32) _object_stkSegmentRomEnd},
    {0, 0},
    {0, 0},
    {(u32) _object_mnkSegmentRomStart, (u32) _object_mnkSegmentRomEnd},
    {
        (u32) _object_gi_bottle_redSegmentRomStart,
        (u32) _object_gi_bottle_redSegmentRomEnd,
    },
    {
        (u32) _object_tokei_tobiraSegmentRomStart,
        (u32) _object_tokei_tobiraSegmentRomEnd,
    },
    {(u32) _object_azSegmentRomStart, (u32) _object_azSegmentRomEnd},
    {(u32) _object_twigSegmentRomStart, (u32) _object_twigSegmentRomEnd},
    {
        (u32) _object_dekucity_objSegmentRomStart,
        (u32) _object_dekucity_objSegmentRomEnd,
    },
    {(u32) _object_po_fusenSegmentRomStart, (u32) _object_po_fusenSegmentRomEnd},
    {(u32) _object_racetsuboSegmentRomStart, (u32) _object_racetsuboSegmentRomEnd},
    {(u32) _object_haSegmentRomStart, (u32) _object_haSegmentRomEnd},
    {(u32) _object_bigokutaSegmentRomStart, (u32) _object_bigokutaSegmentRomEnd},
    {(u32) _object_open_objSegmentRomStart, (u32) _object_open_objSegmentRomEnd},
    {(u32) _object_fu_kaitenSegmentRomStart, (u32) _object_fu_kaitenSegmentRomEnd},
    {(u32) _object_fu_matoSegmentRomStart, (u32) _object_fu_matoSegmentRomEnd},
    {(u32) _object_mtorideSegmentRomStart, (u32) _object_mtorideSegmentRomEnd},
    {(u32) _object_osnSegmentRomStart, (u32) _object_osnSegmentRomEnd},
    {
        (u32) _object_tokei_stepSegmentRomStart,
        (u32) _object_tokei_stepSegmentRomEnd,
    },
    {(u32) _object_lotusSegmentRomStart, (u32) _object_lotusSegmentRomEnd},
    {(u32) _object_tlSegmentRomStart, (u32) _object_tlSegmentRomEnd},
    {
        (u32) _object_dkjail_objSegmentRomStart,
        (u32) _object_dkjail_objSegmentRomEnd,
    },
    {(u32) _object_visiblockSegmentRomStart, (u32) _object_visiblockSegmentRomEnd},
    {(u32) _object_tsnSegmentRomStart, (u32) _object_tsnSegmentRomEnd},
    {(u32) _object_ds2nSegmentRomStart, (u32) _object_ds2nSegmentRomEnd},
    {(u32) _object_fsnSegmentRomStart, (u32) _object_fsnSegmentRomEnd},
    {(u32) _object_shnSegmentRomStart, (u32) _object_shnSegmentRomEnd},
    {(u32) _object_bigicicleSegmentRomStart, (u32) _object_bigicicleSegmentRomEnd},
    {(u32) _object_gi_bottle_15SegmentRomStart, (u32) _object_tkSegmentRomStart},
    {(u32) _object_tkSegmentRomStart, (u32) _object_tkSegmentRomEnd},
    {
        (u32) _object_market_objSegmentRomStart,
        (u32) _object_market_objSegmentRomEnd,
    },
    {
        (u32) _object_gi_reserve00SegmentRomStart,
        (u32) _object_gi_reserve00SegmentRomEnd,
    },
    {
        (u32) _object_gi_reserve01SegmentRomStart,
        (u32) _object_gi_reserve01SegmentRomEnd,
    },
    {
        (u32) _object_lightblockSegmentRomStart,
        (u32) _object_lightblockSegmentRomEnd,
    },
    {
        (u32) _object_takaraya_objectsSegmentRomStart,
        (u32) _object_takaraya_objectsSegmentRomEnd,
    },
    {(u32) _object_wdhandSegmentRomStart, (u32) _object_wdhandSegmentRomEnd},
    {(u32) _object_sdnSegmentRomStart, (u32) _object_sdnSegmentRomEnd},
    {(u32) _object_snowwdSegmentRomStart, (u32) _object_snowwdSegmentRomEnd},
    {(u32) _object_giantSegmentRomStart, (u32) _object_giantSegmentRomEnd},
    {(u32) _object_combSegmentRomStart, (u32) _object_combSegmentRomEnd},
    {(u32) _object_hanaSegmentRomStart, (u32) _object_hanaSegmentRomEnd},
    {
        (u32) _object_boss_hakuginSegmentRomStart,
        (u32) _object_boss_hakuginSegmentRomEnd,
    },
    {
        (u32) _object_meganeana_objSegmentRomStart,
        (u32) _object_meganeana_objSegmentRomEnd,
    },
    {
        (u32) _object_gi_nutsmaskSegmentRomStart,
        (u32) _object_gi_nutsmaskSegmentRomEnd,
    },
    {(u32) _object_stk2SegmentRomStart, (u32) _object_stk2SegmentRomEnd},
    {
        (u32) _object_spot11_objSegmentRomStart,
        (u32) _object_spot11_objSegmentRomEnd,
    },
    {
        (u32) _object_danpei_objectSegmentRomStart,
        (u32) _object_danpei_objectSegmentRomEnd,
    },
    {(u32) _object_dhouseSegmentRomStart, (u32) _object_dhouseSegmentRomEnd},
    {(u32) _object_hakaisiSegmentRomStart, (u32) _object_hakaisiSegmentRomEnd},
    {(u32) _object_poSegmentRomStart, (u32) _object_poSegmentRomEnd},
    {(u32) _object_snowmanSegmentRomStart, (u32) _object_snowmanSegmentRomEnd},
    {
        (u32) _object_po_sistersSegmentRomStart,
        (u32) _object_po_sistersSegmentRomEnd,
    },
    {(u32) _object_ppSegmentRomStart, (u32) _object_ppSegmentRomEnd},
    {
        (u32) _object_goronswitchSegmentRomStart,
        (u32) _object_goronswitchSegmentRomEnd,
    },
    {(u32) _object_delfSegmentRomStart, (u32) _object_delfSegmentRomEnd},
    {
        (u32) _object_botihasiraSegmentRomStart,
        (u32) _object_botihasiraSegmentRomEnd,
    },
    {
        (u32) _object_gi_bigbombSegmentRomStart,
        (u32) _object_gi_bigbombSegmentRomEnd,
    },
    {(u32) _object_pstSegmentRomStart, (u32) _object_pstSegmentRomEnd},
    {(u32) _object_bsmaskSegmentRomStart, (u32) _object_bsmaskSegmentRomEnd},
    {
        (u32) _object_spidertentSegmentRomStart,
        (u32) _object_spidertentSegmentRomEnd,
    },
    {(u32) _object_zoraeggSegmentRomStart, (u32) _object_zoraeggSegmentRomEnd},
    {(u32) _object_kbtSegmentRomStart, (u32) _object_kbtSegmentRomEnd},
    {(u32) _object_ggSegmentRomStart, (u32) _object_ggSegmentRomEnd},
    {(u32) _object_marutaSegmentRomStart, (u32) _object_marutaSegmentRomEnd},
    {(u32) _object_ghakaSegmentRomStart, (u32) _object_ghakaSegmentRomEnd},
    {(u32) _object_oyuSegmentRomStart, (u32) _object_oyuSegmentRomEnd},
    {(u32) _object_dnpSegmentRomStart, (u32) _object_dnpSegmentRomEnd},
    {(u32) _object_daiSegmentRomStart, (u32) _object_daiSegmentRomEnd},
    {(u32) _object_kgySegmentRomStart, (u32) _object_kgySegmentRomEnd},
    {(u32) _object_fbSegmentRomStart, (u32) _object_fbSegmentRomEnd},
    {(u32) _object_taisouSegmentRomStart, (u32) _object_taisouSegmentRomEnd},
    {
        (u32) _object_mask_bu_sanSegmentRomStart,
        (u32) _object_mask_bu_sanSegmentRomEnd,
    },
    {
        (u32) _object_mask_ki_tanSegmentRomStart,
        (u32) _object_mask_ki_tanSegmentRomEnd,
    },
    {
        (u32) _object_mask_rabitSegmentRomStart,
        (u32) _object_mask_rabitSegmentRomEnd,
    },
    {(u32) _object_mask_skjSegmentRomStart, (u32) _object_mask_skjSegmentRomEnd},
    {
        (u32) _object_mask_bakuretuSegmentRomStart,
        (u32) _object_mask_bakuretuSegmentRomEnd,
    },
    {
        (u32) _object_mask_truthSegmentRomStart,
        (u32) _object_mask_truthSegmentRomEnd,
    },
    {(u32) _object_gkSegmentRomStart, (u32) _object_gkSegmentRomEnd},
    {(u32) _object_haka_objSegmentRomStart, (u32) _object_haka_objSegmentRomEnd},
    {
        (u32) _object_mask_goronSegmentRomStart,
        (u32) _object_mask_goronSegmentRomEnd,
    },
    {(u32) _object_mask_zoraSegmentRomStart, (u32) _object_mask_zoraSegmentRomEnd},
    {(u32) _object_mask_nutsSegmentRomStart, (u32) _object_mask_nutsSegmentRomEnd},
    {(u32) _object_mask_boySegmentRomStart, (u32) _object_mask_boySegmentRomEnd},
    {(u32) _object_dntSegmentRomStart, (u32) _object_dntSegmentRomEnd},
    {(u32) _object_yukiyamaSegmentRomStart, (u32) _object_yukiyamaSegmentRomEnd},
    {(u32) _object_icefloeSegmentRomStart, (u32) _object_icefloeSegmentRomEnd},
    {
        (u32) _object_gi_gold_dustSegmentRomStart,
        (u32) _object_gi_gold_dustSegmentRomEnd,
    },
    {
        (u32) _object_gi_bottle_16SegmentRomStart,
        (u32) _object_gi_bottle_16SegmentRomEnd,
    },
    {
        (u32) _object_gi_bottle_22SegmentRomStart,
        (u32) _object_gi_bottle_22SegmentRomEnd,
    },
    {(u32) _object_beeSegmentRomStart, (u32) _object_beeSegmentRomEnd},
    {(u32) _object_otSegmentRomStart, (u32) _object_otSegmentRomEnd},
    {(u32) _object_utuboSegmentRomStart, (u32) _object_utuboSegmentRomEnd},
    {(u32) _object_doraSegmentRomStart, (u32) _object_doraSegmentRomEnd},
    {(u32) _object_gi_loachSegmentRomStart, (u32) _object_gi_loachSegmentRomEnd},
    {
        (u32) _object_gi_seahorseSegmentRomStart,
        (u32) _object_gi_seahorseSegmentRomEnd,
    },
    {(u32) _object_bigpoSegmentRomStart, (u32) _object_bigpoSegmentRomEnd},
    {(u32) _object_harikoSegmentRomStart, (u32) _object_harikoSegmentRomEnd},
    {(u32) _object_dnoSegmentRomStart, (u32) _object_dnoSegmentRomEnd},
    {
        (u32) _object_sinkai_kabeSegmentRomStart,
        (u32) _object_sinkai_kabeSegmentRomEnd,
    },
    {(u32) _object_kin2_objSegmentRomStart, (u32) _object_kin2_objSegmentRomEnd},
    {(u32) _object_ishiSegmentRomStart, (u32) _object_ishiSegmentRomEnd},
    {
        (u32) _object_hakugin_demoSegmentRomStart,
        (u32) _object_hakugin_demoSegmentRomEnd,
    },
    {(u32) _object_jgSegmentRomStart, (u32) _object_jgSegmentRomEnd},
    {
        (u32) _object_gi_sword_2SegmentRomStart,
        (u32) _object_gi_sword_2SegmentRomEnd,
    },
    {
        (u32) _object_gi_sword_3SegmentRomStart,
        (u32) _object_gi_sword_3SegmentRomEnd,
    },
    {
        (u32) _object_gi_sword_4SegmentRomStart,
        (u32) _object_gi_sword_4SegmentRomEnd,
    },
    {(u32) _object_umSegmentRomStart, (u32) _object_umSegmentRomEnd},
    {
        (u32) _object_mask_gibudoSegmentRomStart,
        (u32) _object_mask_gibudoSegmentRomEnd,
    },
    {(u32) _object_mask_jsonSegmentRomStart, (u32) _object_mask_jsonSegmentRomEnd},
    {
        (u32) _object_mask_kerfaySegmentRomStart,
        (u32) _object_mask_kerfaySegmentRomEnd,
    },
    {
        (u32) _object_mask_bigelfSegmentRomStart,
        (u32) _object_mask_bigelfSegmentRomEnd,
    },
    {(u32) _object_rbSegmentRomStart, (u32) _object_rbSegmentRomEnd},
    {(u32) _object_mbar_objSegmentRomStart, (u32) _object_mbar_objSegmentRomEnd},
    {(u32) _object_ikana_objSegmentRomStart, (u32) _object_ikana_objSegmentRomEnd},
    {(u32) _object_kzSegmentRomStart, (u32) _object_kzSegmentRomEnd},
    {
        (u32) _object_tokei_turretSegmentRomStart,
        (u32) _object_tokei_turretSegmentRomEnd,
    },
    {(u32) _object_zogSegmentRomStart, (u32) _object_zogSegmentRomEnd},
    {(u32) _object_rotliftSegmentRomStart, (u32) _object_rotliftSegmentRomEnd},
    {
        (u32) _object_posthouse_objSegmentRomStart,
        (u32) _object_posthouse_objSegmentRomEnd,
    },
    {(u32) _object_gi_mask09SegmentRomStart, (u32) _object_gi_mask09SegmentRomEnd},
    {(u32) _object_gi_mask14SegmentRomStart, (u32) _object_gi_mask14SegmentRomEnd},
    {(u32) _object_gi_mask15SegmentRomStart, (u32) _object_gi_mask15SegmentRomEnd},
    {
        (u32) _object_inibs_objectSegmentRomStart,
        (u32) _object_inibs_objectSegmentRomEnd,
    },
    {(u32) _object_treeSegmentRomStart, (u32) _object_treeSegmentRomEnd},
    {
        (u32) _object_kaizoku_objSegmentRomStart,
        (u32) _object_kaizoku_objSegmentRomEnd,
    },
    {
        (u32) _object_gi_reserve_b_00SegmentRomStart,
        (u32) _object_gi_reserve_b_00SegmentRomEnd,
    },
    {
        (u32) _object_gi_reserve_c_00SegmentRomStart,
        (u32) _object_gi_reserve_c_00SegmentRomEnd,
    },
    {(u32) _object_zobSegmentRomStart, (u32) _object_zobSegmentRomEnd},
    {(u32) _object_milkbarSegmentRomStart, (u32) _object_milkbarSegmentRomEnd},
    {(u32) _object_dmaskSegmentRomStart, (u32) _object_dmaskSegmentRomEnd},
    {
        (u32) _object_mask_kyojinSegmentRomStart,
        (u32) _object_mask_kyojinSegmentRomEnd,
    },
    {
        (u32) _object_gi_reserve_c_01SegmentRomStart,
        (u32) _object_gi_reserve_c_01SegmentRomEnd,
    },
    {(u32) _object_zodSegmentRomStart, (u32) _object_zodSegmentRomEnd},
    {(u32) _object_kumo30SegmentRomStart, (u32) _object_kumo30SegmentRomEnd},
    {(u32) _object_obj_yasiSegmentRomStart, (u32) _object_obj_yasiSegmentRomEnd},
    {
        (u32) _object_mask_romernySegmentRomStart,
        (u32) _object_mask_romernySegmentRomEnd,
    },
    {(u32) _object_tanron1SegmentRomStart, (u32) _object_tanron1SegmentRomEnd},
    {(u32) _object_tanron2SegmentRomStart, (u32) _object_tanron2SegmentRomEnd},
    {(u32) _object_tanron3SegmentRomStart, (u32) _object_tanron3SegmentRomEnd},
    {
        (u32) _object_gi_magicmushroomSegmentRomStart,
        (u32) _object_gi_magicmushroomSegmentRomEnd,
    },
    {(u32) _object_obj_chanSegmentRomStart, (u32) _object_obj_chanSegmentRomEnd},
    {(u32) _object_gi_mask10SegmentRomStart, (u32) _object_gi_mask10SegmentRomEnd},
    {(u32) _object_zosSegmentRomStart, (u32) _object_zosSegmentRomEnd},
    {
        (u32) _object_mask_posthatSegmentRomStart,
        (u32) _object_mask_posthatSegmentRomEnd,
    },
    {
        (u32) _object_f40_switchSegmentRomStart,
        (u32) _object_f40_switchSegmentRomEnd,
    },
    {(u32) _object_lodmoonSegmentRomStart, (u32) _object_lodmoonSegmentRomEnd},
    {(u32) _object_troSegmentRomStart, (u32) _object_troSegmentRomEnd},
    {(u32) _object_gi_mask12SegmentRomStart, (u32) _object_gi_mask12SegmentRomEnd},
    {(u32) _object_gi_mask23SegmentRomStart, (u32) _object_gi_mask23SegmentRomEnd},
    {
        (u32) _object_gi_bottle_21SegmentRomStart,
        (u32) _object_gi_bottle_21SegmentRomEnd,
    },
    {(u32) _object_gi_cameraSegmentRomStart, (u32) _object_gi_cameraSegmentRomEnd},
    {(u32) _object_kamejimaSegmentRomStart, (u32) _object_kamejimaSegmentRomEnd},
    {(u32) _object_harfgibudSegmentRomStart, (u32) _object_harfgibudSegmentRomEnd},
    {(u32) _object_zovSegmentRomStart, (u32) _object_zovSegmentRomEnd},
    {(u32) _object_hgdoorSegmentRomStart, (u32) _object_hgdoorSegmentRomEnd},
    {0, 0},
    {0, 0},
    {0, 0},
    {(u32) _object_dor01SegmentRomStart, (u32) _object_dor01SegmentRomEnd},
    {(u32) _object_dor02SegmentRomStart, (u32) _object_dor02SegmentRomEnd},
    {(u32) _object_dor03SegmentRomStart, (u32) _object_dor03SegmentRomEnd},
    {(u32) _object_dor04SegmentRomStart, (u32) _object_dor04SegmentRomEnd},
    {(u32) _object_last_objSegmentRomStart, (u32) _object_last_objSegmentRomEnd},
    {
        (u32) _object_redead_objSegmentRomStart,
        (u32) _object_redead_objSegmentRomEnd,
    },
    {
        (u32) _object_ikninside_objSegmentRomStart,
        (u32) _object_ikninside_objSegmentRomEnd,
    },
    {(u32) _object_iknv_objSegmentRomStart, (u32) _object_iknv_objSegmentRomEnd},
    {(u32) _object_pameraSegmentRomStart, (u32) _object_pameraSegmentRomEnd},
    {(u32) _object_hsstumpSegmentRomStart, (u32) _object_hsstumpSegmentRomEnd},
    {(u32) _object_zmSegmentRomStart, (u32) _object_zmSegmentRomEnd},
    {(u32) _object_big_fwallSegmentRomStart, (u32) _object_big_fwallSegmentRomEnd},
    {(u32) _object_secom_objSegmentRomStart, (u32) _object_secom_objSegmentRomEnd},
    {(u32) _object_hunsuiSegmentRomStart, (u32) _object_hunsuiSegmentRomEnd},
    {(u32) _object_uchSegmentRomStart, (u32) _object_uchSegmentRomEnd},
    {(u32) _object_tanron4SegmentRomStart, (u32) _object_tanron4SegmentRomEnd},
    {(u32) _object_tanron5SegmentRomStart, (u32) _object_tanron5SegmentRomEnd},
    {(u32) _object_dtSegmentRomStart, (u32) _object_dtSegmentRomEnd},
    {(u32) _object_gi_mask03SegmentRomStart, (u32) _object_gi_mask03SegmentRomEnd},
    {(u32) _object_chaSegmentRomStart, (u32) _object_chaSegmentRomEnd},
    {
        (u32) _object_obj_dinnerSegmentRomStart,
        (u32) _object_obj_dinnerSegmentRomEnd,
    },
    {
        (u32) _object_gi_reserve_b_01SegmentRomStart,
        (u32) _object_gi_reserve_b_01SegmentRomEnd,
    },
    {(u32) _object_lastdaySegmentRomStart, (u32) _object_lastdaySegmentRomEnd},
    {(u32) _object_baiSegmentRomStart, (u32) _object_baiSegmentRomEnd},
    {(u32) _object_in2SegmentRomStart, (u32) _object_in2SegmentRomEnd},
    {(u32) _object_ikn_demoSegmentRomStart, (u32) _object_ikn_demoSegmentRomEnd},
    {(u32) _object_ybSegmentRomStart, (u32) _object_ybSegmentRomEnd},
    {(u32) _object_rzSegmentRomStart, (u32) _object_rzSegmentRomEnd},
    {
        (u32) _object_mask_zachoSegmentRomStart,
        (u32) _object_mask_zachoSegmentRomEnd,
    },
    {
        (u32) _object_gi_fieldmapSegmentRomStart,
        (u32) _object_gi_fieldmapSegmentRomEnd,
    },
    {
        (u32) _object_mask_stoneSegmentRomStart,
        (u32) _object_mask_stoneSegmentRomEnd,
    },
    {(u32) _object_bjtSegmentRomStart, (u32) _object_bjtSegmentRomEnd},
    {(u32) _object_taruSegmentRomStart, (u32) _object_taruSegmentRomEnd},
    {(u32) _object_moonstonSegmentRomStart, (u32) _object_moonstonSegmentRomEnd},
    {(u32) _object_mask_breeSegmentRomStart, (u32) _object_mask_breeSegmentRomEnd},
    {
        (u32) _object_gi_scheduleSegmentRomStart,
        (u32) _object_gi_scheduleSegmentRomEnd,
    },
    {
        (u32) _object_gi_stonemaskSegmentRomStart,
        (u32) _object_gi_stonemaskSegmentRomEnd,
    },
    {(u32) _object_zorabandSegmentRomStart, (u32) _object_zorabandSegmentRomEnd},
    {(u32) _object_kepn_koyaSegmentRomStart, (u32) _object_kepn_koyaSegmentRomEnd},
    {
        (u32) _object_obj_usiyaneSegmentRomStart,
        (u32) _object_obj_usiyaneSegmentRomEnd,
    },
    {(u32) _object_gi_mask05SegmentRomStart, (u32) _object_gi_mask05SegmentRomEnd},
    {(u32) _object_gi_mask11SegmentRomStart, (u32) _object_gi_mask11SegmentRomEnd},
    {(u32) _object_gi_mask20SegmentRomStart, (u32) _object_gi_mask20SegmentRomEnd},
    {(u32) _object_nnhSegmentRomStart, (u32) _object_nnhSegmentRomEnd},
    {(u32) _object_mask_geroSegmentRomStart, (u32) _object_mask_geroSegmentRomEnd},
    {
        (u32) _object_mask_yofukasiSegmentRomStart,
        (u32) _object_mask_yofukasiSegmentRomEnd,
    },
    {
        (u32) _object_mask_meotoSegmentRomStart,
        (u32) _object_mask_meotoSegmentRomEnd,
    },
    {
        (u32) _object_mask_dancerSegmentRomStart,
        (u32) _object_mask_dancerSegmentRomEnd,
    },
    {(u32) _object_kzsakuSegmentRomStart, (u32) _object_kzsakuSegmentRomEnd},
    {
        (u32) _object_obj_milk_binSegmentRomStart,
        (u32) _object_obj_milk_binSegmentRomEnd,
    },
    {
        (u32) _object_random_objSegmentRomStart,
        (u32) _object_random_objSegmentRomEnd,
    },
    {(u32) _object_kujiyaSegmentRomStart, (u32) _object_kujiyaSegmentRomEnd},
    {(u32) _object_kitanSegmentRomStart, (u32) _object_kitanSegmentRomEnd},
    {(u32) _object_gi_mask06SegmentRomStart, (u32) _object_gi_mask06SegmentRomEnd},
    {(u32) _object_gi_mask16SegmentRomStart, (u32) _object_gi_mask16SegmentRomEnd},
    {(u32) _object_astr_objSegmentRomStart, (u32) _object_astr_objSegmentRomEnd},
    {(u32) _object_bsbSegmentRomStart, (u32) _object_bsbSegmentRomEnd},
    {(u32) _object_fall2SegmentRomStart, (u32) _object_fall2SegmentRomEnd},
    {(u32) _object_sthSegmentRomStart, (u32) _object_sthSegmentRomEnd},
    {(u32) _object_gi_mssaSegmentRomStart, (u32) _object_gi_mssaSegmentRomEnd},
    {(u32) _object_smtowerSegmentRomStart, (u32) _object_smtowerSegmentRomEnd},
    {(u32) _object_gi_mask21SegmentRomStart, (u32) _object_gi_mask21SegmentRomEnd},
    {(u32) _object_yado_objSegmentRomStart, (u32) _object_yado_objSegmentRomEnd},
    {(u32) _object_syotenSegmentRomStart, (u32) _object_syotenSegmentRomEnd},
    {(u32) _object_moonendSegmentRomStart, (u32) _object_moonendSegmentRomEnd},
    {(u32) _object_obSegmentRomStart, (u32) _object_obSegmentRomEnd},
    {
        (u32) _object_gi_bottle_04SegmentRomStart,
        (u32) _object_gi_bottle_04SegmentRomEnd,
    },
    {
        (u32) _object_obj_danpeiliftSegmentRomStart,
        (u32) _object_obj_danpeiliftSegmentRomEnd,
    },
    {(u32) _object_wdor01SegmentRomStart, (u32) _object_wdor01SegmentRomEnd},
    {(u32) _object_wdor02SegmentRomStart, (u32) _object_wdor02SegmentRomEnd},
    {(u32) _object_wdor03SegmentRomStart, (u32) _object_wdor03SegmentRomEnd},
    {(u32) _object_stk3SegmentRomStart, (u32) _object_stk3SegmentRomEnd},
    {
        (u32) _object_kinsta1_objSegmentRomStart,
        (u32) _object_kinsta1_objSegmentRomEnd,
    },
    {
        (u32) _object_kinsta2_objSegmentRomStart,
        (u32) _object_kinsta2_objSegmentRomEnd,
    },
    {(u32) _object_bhSegmentRomStart, (u32) _object_bhSegmentRomEnd},
    {(u32) _object_wdor04SegmentRomStart, (u32) _object_wdor04SegmentRomEnd},
    {(u32) _object_wdor05SegmentRomStart, (u32) _object_wdor05SegmentRomEnd},
    {(u32) _object_gi_mask17SegmentRomStart, (u32) _object_gi_mask17SegmentRomEnd},
    {(u32) _object_gi_mask22SegmentRomStart, (u32) _object_gi_mask22SegmentRomEnd},
    {(u32) _object_lbfshotSegmentRomStart, (u32) _object_lbfshotSegmentRomEnd},
    {(u32) _object_fusenSegmentRomStart, (u32) _object_fusenSegmentRomEnd},
    {
        (u32) _object_ending_objSegmentRomStart,
        (u32) _object_ending_objSegmentRomEnd,
    },
    {(u32) _object_gi_mask13SegmentRomStart, (u32) _object_gi_mask13SegmentRomEnd},
};

s32 Object_Spawn(ObjectContext *objectCtx, s16 id) {
    u32 sp1C;
    u32 sp18;
    RomFile *temp_v0;
    s8 temp_v1;
    u32 temp_a2;
    u32 temp_t2;
    u32 temp_t3;
    u8 temp_t7;
    u8 temp_v1_2;
    void *temp_a0;

    temp_v0 = &objectFileTable[id];
    objectCtx->status[objectCtx->num].id = id;
    temp_t3 = temp_v0->vromEnd;
    temp_t2 = temp_v0->vromStart;
    temp_a2 = temp_t3 - temp_t2;
    sp18 = temp_t2;
    if (temp_a2 != 0) {
        temp_a0 = objectCtx->status[objectCtx->num].segment;
        objectCtx = objectCtx;
        sp1C = temp_a2;
        DmaMgr_SendRequest0(temp_a0, temp_t2, temp_a2);
    }
    temp_v1_2 = objectCtx->num;
    if ((s32) temp_v1_2 < 0x22) {
        (objectCtx + (temp_v1_2 * 0x44))->unk54 = (s32) (((objectCtx + (temp_v1_2 * 0x44))->unk10 + (temp_t3 - temp_t2) + 0xF) & ~0xF);
    }
    temp_t7 = objectCtx->num + 1;
    temp_v1 = temp_t7 & 0xFF;
    objectCtx->num = temp_t7;
    objectCtx->spawnedObjectCount = temp_v1;
    return temp_v1 - 1;
}

void Object_InitBank(GameState *gamestate, ObjectContext *objectCtx) {
    u32 sp24;
    s16 temp_v0;
    s32 temp_t8;
    s32 temp_v1;
    u8 temp_v0_3;
    void *temp_v0_2;
    s32 *phi_v0;
    s32 phi_v1;
    u32 phi_a3;

    temp_v0 = gamestate->unkA4;
    phi_v1 = 3;
    if ((temp_v0 == 0x6F) || (temp_v0 == 0x6C) || (temp_v0 == 0x6E) || (temp_v0 == 0x6D)) {
        phi_a3 = 0x17E800U;
    } else if (temp_v0 == 0x15) {
        phi_a3 = 0x18B000U;
    } else if (temp_v0 == 0x2D) {
        phi_a3 = 0x16F800U;
    } else {
        phi_a3 = 0x159000U;
    }
    objectCtx->num = 0;
    objectCtx->spawnedObjectCount = 0;
    objectCtx->mainKeepIndex = 0;
    objectCtx->subKeepIndex = 0;
    objectCtx->status[0].id = 0;
    objectCtx->status[1].id = 0;
    objectCtx->status[2].id = 0;
    phi_v0 = &objectCtx->status[2].loadQueue.msgCount;
    do {
        temp_v1 = phi_v1 + 4;
        phi_v0->unkC = 0;
        phi_v0->unk50 = 0;
        phi_v0->unk94 = 0;
        phi_v0->unkD8 = 0;
        phi_v0 += 0x110;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x23);
    objectCtx = objectCtx;
    sp24 = phi_a3;
    temp_v0_2 = THA_AllocEndAlign16(&gamestate->heap, phi_a3);
    objectCtx->spaceStart = temp_v0_2;
    objectCtx->status[0].segment = temp_v0_2;
    objectCtx->spaceEnd = temp_v0_2 + phi_a3;
    temp_v0_3 = Object_Spawn(objectCtx, 1);
    temp_t8 = (temp_v0_3 & 0xFF) * 0x44;
    objectCtx->mainKeepIndex = temp_v0_3;
    *(gSegments + 0x10) = (objectCtx + temp_t8)->unk10 + 0x80000000;
}

void Object_UpdateBank(ObjectContext *objectCtx) {
    OSMesgQueue *temp_s2;
    s16 temp_v0;
    s32 temp_s4;
    u32 temp_s3;
    u8 temp_v1;
    void *temp_s1;
    ObjectStatus *phi_s0;
    s32 phi_s4;
    s32 phi_v1;

    temp_v1 = objectCtx->num;
    phi_s0 = objectCtx->status;
    phi_s4 = 0;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 > 0) {
        do {
            temp_v0 = phi_s0->id;
            if ((s32) temp_v0 < 0) {
                if (phi_s0->dmaReq.vromAddr == 0) {
                    temp_s1 = objectFileTable + ((s32) temp_v0 * -8);
                    temp_s2 = phi_s0 + 0x28;
                    temp_s3 = temp_s1->unk4 - temp_s1->unk0;
                    if (temp_s3 == 0) {
                        phi_s0->id = 0;
                    } else {
                        osCreateMesgQueue(temp_s2, phi_s0 + 0x40, 1);
                        DmaMgr_SendRequestImpl(phi_s0 + 8, phi_s0->segment, temp_s1->unk0, temp_s3, 0, temp_s2, NULL);
                    }
                } else if (osRecvMesg(phi_s0 + 0x28, NULL, 0) == 0) {
                    phi_s0->id = (s16) -(s32) temp_v0;
                }
                phi_v1 = (s32) objectCtx->num;
            }
            temp_s4 = phi_s4 + 1;
            phi_s0 += 0x44;
            phi_s4 = temp_s4;
        } while (temp_s4 < phi_v1);
    }
}

s32 Object_GetIndex(ObjectContext *objectCtx, s16 id) {
    s16 temp_a0;
    s32 temp_v1;
    u8 temp_v0;
    ObjectContext *phi_a1;
    s16 phi_a2;
    s32 phi_v1;

    temp_v0 = objectCtx->num;
    phi_a1 = objectCtx;
    phi_v1 = 0;
    if ((s32) temp_v0 > 0) {
loop_1:
        temp_a0 = phi_a1->status[0].id;
        phi_a2 = temp_a0;
        if ((s32) temp_a0 < 0) {
            phi_a2 = (s16) -(s32) temp_a0;
        }
        if (phi_a2 == id) {
            return phi_v1;
        }
        temp_v1 = phi_v1 + 1;
        phi_a1 += 0x44;
        phi_v1 = temp_v1;
        if (temp_v1 >= (s32) temp_v0) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return -1;
        }
        goto loop_1;
    }
    return -1;
}

s32 Object_IsLoaded(ObjectContext *objectCtx, s32 index) {
    if ((s32) objectCtx->status[index].id > 0) {
        return 1;
    }
    return 0;
}

void Object_LoadAll(ObjectContext *objectCtx) {
    ObjectContext *temp_s0;
    RomFile *temp_v0;
    u32 temp_a1;
    u32 temp_a2;
    u8 temp_a3;
    u8 temp_a3_2;
    ObjectContext *phi_s0;
    u32 phi_v0;
    u8 phi_a3;

    temp_a3 = objectCtx->num;
    phi_s0 = objectCtx;
    phi_a3 = temp_a3;
    if ((s32) temp_a3 > 0) {
        do {
            temp_v0 = &objectFileTable[phi_s0->status[0].id];
            temp_a1 = temp_v0->vromStart;
            temp_a2 = temp_v0->vromEnd - temp_a1;
            if (temp_a2 == 0) {
                phi_v0 = (u32) ((phi_a3 * 0x44) + objectCtx);
            } else {
                DmaMgr_SendRequest0(phi_s0->status[0].segment, temp_a1, temp_a2);
                temp_a3_2 = objectCtx->num;
                phi_v0 = (u32) ((temp_a3_2 * 0x44) + objectCtx);
                phi_a3 = temp_a3_2;
            }
            temp_s0 = phi_s0 + 0x44;
            phi_s0 = temp_s0;
        } while ((u32) temp_s0 < phi_v0);
    }
}

void *func_8012F73C(ObjectContext *objectCtx, s32 iParm2, s16 id) {
    RomFile *temp_a3;

    objectCtx->status[iParm2].id = (s16) -(s32) id;
    objectCtx->status[iParm2].dmaReq.vromAddr = 0;
    temp_a3 = &objectFileTable[id];
    return (void *) ((s32) (objectCtx->status[iParm2].segment + (temp_a3->vromEnd - temp_a3->vromStart) + 0xF) & ~0xF);
}

void Scene_HeaderCmdSpawnList(GlobalContext *globalCtx, SceneCmd *cmd) {
    void *sp34;
    ObjectContext *sp28;
    void *sp24;
    ObjectContext *temp_a0;
    s16 temp_a1;
    s32 temp_v0;

    globalCtx->linkActorEntry = (globalCtx->setupEntranceList[globalCtx->curSpawn].spawn * 0x10) + Lib_SegmentedToVirtual((void *) cmd->base.data2);
    if ((((s32) (globalCtx->linkActorEntry->params & 0xF00) >> 8) == 0xC) || ((gSaveContext.respawnFlag == 2) && (gSaveContext.respawn[1].playerParams == 0xCFF))) {
        Object_Spawn(&globalCtx->objectCtx, 0x192);
        return;
    }
    temp_a0 = &globalCtx->objectCtx;
    sp28 = temp_a0;
    temp_v0 = Object_Spawn(temp_a0, 0x11);
    sp34 = globalCtx->objectCtx.status[globalCtx->objectCtx.num].segment;
    globalCtx->objectCtx.num = (u8) temp_v0;
    globalCtx->objectCtx.spawnedObjectCount = (u8) temp_v0;
    temp_a1 = gLinkFormObjectIndexes[gSaveContext.playerForm];
    gActorOverlayTable->initInfo->objectId = temp_a1;
    sp24 = globalCtx + 0x10000;
    Object_Spawn(temp_a0, temp_a1);
    globalCtx->objectCtx.status[globalCtx->objectCtx.num].segment = sp34;
}

void Scene_HeaderCmdActorList(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->numSetupActors = (s16) cmd->base.data1;
    globalCtx = globalCtx;
    globalCtx->setupActorList = Lib_SegmentedToVirtual((void *) cmd->base.data2);
    globalCtx->actorCtx.unkC = 0;
}

void Scene_HeaderCmdActorCutsceneCamList(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->unk_18858 = Lib_SegmentedToVirtual((void *) cmd->base.data2);
}

void Scene_HeaderCmdColHeader(GlobalContext *globalCtx, SceneCmd *cmd) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = Lib_SegmentedToVirtual((void *) cmd->base.data2);
    temp_s0 = temp_v0;
    temp_s0->unk10 = Lib_SegmentedToVirtual(temp_v0->unk10);
    temp_a0 = temp_s0->unk1C;
    temp_s0->unk18 = Lib_SegmentedToVirtual(temp_s0->unk18);
    if (temp_a0 != 0) {
        temp_s0->unk1C = Lib_SegmentedToVirtual(temp_a0);
    }
    temp_a0_2 = temp_s0->unk20;
    if (temp_a0_2 != 0) {
        temp_s0->unk20 = Lib_SegmentedToVirtual(temp_a0_2);
    }
    temp_a0_3 = temp_s0->unk28;
    if (temp_a0_3 != 0) {
        temp_s0->unk28 = Lib_SegmentedToVirtual(temp_a0_3);
    }
    BgCheck_Init(&globalCtx->colCtx, globalCtx, (CollisionHeader *) temp_s0);
}

void Scene_HeaderCmdRoomList(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->numRooms = cmd->base.data1;
    globalCtx->roomList = Lib_SegmentedToVirtual((void *) cmd->base.data2);
}

void Scene_HeaderCmdEntranceList(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->setupEntranceList = Lib_SegmentedToVirtual((void *) cmd->base.data2);
}

void Scene_HeaderCmdSpecialFiles(GlobalContext *globalCtx, SceneCmd *cmd) {
    ObjectContext *temp_a0;
    s16 temp_a1;
    u32 temp_v0;
    u8 temp_v0_2;

    temp_v0 = cmd->base.data2;
    temp_a0 = &globalCtx->objectCtx;
    if (temp_v0 != 0) {
        temp_a1 = (s16) temp_v0;
        globalCtx = globalCtx;
        cmd = cmd;
        globalCtx->objectCtx.subKeepIndex = Object_Spawn(temp_a0, temp_a1);
        *(gSegments + 0x14) = (u32) (globalCtx->objectCtx.status[globalCtx->objectCtx.subKeepIndex].segment + 0x80000000);
    }
    temp_v0_2 = cmd->base.data1;
    if (temp_v0_2 != 0) {
        globalCtx = globalCtx;
        globalCtx->unk_18868 = Play_LoadScene(globalCtx, (temp_v0_2 * 8) - 8 + &tatlMessageFiles);
    }
}

void Scene_HeaderCmdRoomBehavior(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->roomCtx.currRoom.unk3 = cmd->base.data1;
    globalCtx->roomCtx.currRoom.unk2 = (u8) cmd->base.data2;
    globalCtx->roomCtx.currRoom.unk5 = ((u32) cmd->base.data2 >> 8) & 1;
    globalCtx->msgCtx.unk12044 = ((u32) cmd->base.data2 >> 0xA) & 1;
    globalCtx->roomCtx.currRoom.enablePosLights = ((u32) cmd->base.data2 >> 0xB) & 1;
    globalCtx->envCtx.unk_E2 = ((u32) cmd->base.data2 >> 0xC) & 1;
}

void Scene_HeaderCmdMesh(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->roomCtx.currRoom.mesh = Lib_SegmentedToVirtual((void *) cmd->base.data2);
}

void Scene_HeaderCmdObjectList(GlobalContext *globalCtx, SceneCmd *cmd) {
    ObjectStatus *temp_s5;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v1;
    u8 temp_a0;
    u8 temp_s1;
    void *temp_v0;
    ObjectStatus *phi_s6;
    void *phi_s2;
    s32 phi_s1;
    s32 phi_a0;
    ObjectStatus *phi_v0;
    s32 phi_v1;
    s32 phi_s1_2;
    s32 phi_a0_2;
    s32 phi_s3;
    s32 phi_s1_3;
    void *phi_s2_2;
    s32 phi_s4;
    s32 phi_s3_2;
    u8 phi_s1_4;
    void *phi_s2_3;
    ObjectStatus *phi_s5;
    s32 phi_s3_3;
    s32 phi_s1_5;
    s32 phi_s3_4;
    s32 phi_s4_2;
    s32 phi_s4_3;

    temp_v0 = Lib_SegmentedToVirtual((void *) cmd->base.data2);
    temp_s1 = globalCtx->objectCtx.spawnedObjectCount;
    temp_a0 = globalCtx->objectCtx.num;
    temp_s4 = temp_s1 * 0x44;
    temp_s5 = &globalCtx->objectCtx.status[temp_s1];
    phi_s6 = temp_s5;
    phi_s2 = temp_v0;
    phi_s1 = (s32) temp_s1;
    phi_a0 = (s32) temp_a0;
    phi_s3 = 0;
    phi_s5 = temp_s5;
    phi_s1_5 = (s32) temp_s1;
    phi_s2_2 = temp_v0;
    phi_s4 = temp_s4;
    phi_s3_4 = 0;
    phi_s4_3 = temp_s4;
    if ((s32) temp_s1 < (s32) temp_a0) {
        do {
            phi_v0 = phi_s5;
            phi_v1 = phi_s1;
            phi_s1_2 = phi_s1;
            phi_a0_2 = phi_a0;
            phi_s2_3 = phi_s2;
            phi_s3_3 = phi_s3_4;
            phi_s4_2 = phi_s4_3;
            if (phi_s6->id != *phi_s2) {
                if (phi_s1 < phi_a0) {
                    do {
                        phi_v0->id = 0;
                        temp_v1 = phi_v1 + 1;
                        phi_v0 += 0x44;
                        phi_v1 = temp_v1;
                    } while (temp_v1 < (s32) globalCtx->objectCtx.num);
                }
                globalCtx->objectCtx.num = (u8) phi_s1;
                func_800BA6FC(globalCtx, &globalCtx->actorCtx);
                phi_a0_2 = (s32) globalCtx->objectCtx.num;
            } else {
                phi_s1_2 = phi_s1 + 1;
                phi_s6 += 0x44;
                phi_s2_3 = phi_s2 + 2;
                phi_s3_3 = phi_s3_4 + 1;
                phi_s5 += 0x44;
                phi_s4_2 = phi_s4_3 + 0x44;
            }
            phi_s2 = phi_s2_3;
            phi_s1 = phi_s1_2;
            phi_a0 = phi_a0_2;
            phi_s3 = phi_s3_3;
            phi_s1_5 = phi_s1_2;
            phi_s2_2 = phi_s2_3;
            phi_s4 = phi_s4_2;
            phi_s3_4 = phi_s3_3;
            phi_s4_3 = phi_s4_2;
        } while (phi_s1_2 < phi_a0_2);
    }
    phi_s1_3 = phi_s1_5;
    phi_s3_2 = phi_s3;
    phi_s1_4 = (u8) phi_s1_5;
    if (phi_s3 < (s32) cmd->base.data1) {
        do {
            temp_s1_2 = phi_s1_3 + 1;
            phi_s1_3 = temp_s1_2;
            phi_s1_4 = (u8) temp_s1_2;
            if (phi_s1_3 < 0x22) {
                (globalCtx + phi_s4)->unk17DDC = func_8012F73C(&globalCtx->objectCtx, phi_s1_3, *phi_s2_2);
            }
            temp_s3 = phi_s3_2 + 1;
            phi_s2_2 += 2;
            phi_s4 += 0x44;
            phi_s3_2 = temp_s3;
        } while (temp_s3 < (s32) cmd->base.data1);
    }
    globalCtx->objectCtx.num = phi_s1_4;
}

void Scene_HeaderCmdLightList(GlobalContext *globalCtx, SceneCmd *cmd) {
    s32 temp_s1;
    LightInfo *phi_s0;
    s32 phi_s1;

    phi_s0 = Lib_SegmentedToVirtual((void *) cmd->base.data2);
    phi_s1 = 0;
    if ((s32) cmd->base.data1 > 0) {
        do {
            LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, phi_s0);
            temp_s1 = phi_s1 + 1;
            phi_s0 += 0xE;
            phi_s1 = temp_s1;
        } while (temp_s1 < (s32) cmd->base.data1);
    }
}

void Scene_HeaderCmdPathList(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->setupPathList = Lib_SegmentedToVirtual((void *) cmd->base.data2);
}

void Scene_HeaderCmdTransiActorList(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->doorCtx.numTransitionActors = cmd->base.data1;
    globalCtx = globalCtx;
    globalCtx->doorCtx.transitionActorList = Lib_SegmentedToVirtual((void *) cmd->base.data2);
    func_80105818(globalCtx, (u32) globalCtx->doorCtx.numTransitionActors, globalCtx->doorCtx.transitionActorList);
}

void Door_InitContext(GameState *gamestate, DoorContext *doorCtx) {
    doorCtx->numTransitionActors = 0;
}

void Scene_HeaderCmdEnvLightSettings(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->envCtx.numLightSettings = cmd->base.data1;
    globalCtx->envCtx.lightSettingsList = Lib_SegmentedToVirtual((void *) cmd->base.data2);
}

s32 Scene_LoadAreaTextures(GlobalContext *globalCtx, s32 fileIndex) {
    u32 sp1C;
    u32 sp18;
    u32 temp_a2;
    u32 temp_a3;
    void *temp_v0;
    s32 phi_v0;

    temp_v0 = (fileIndex * 8) + &sceneTextureFiles;
    temp_a3 = temp_v0->unk0;
    temp_a2 = temp_v0->unk4 - temp_a3;
    phi_v0 = (s32) temp_v0;
    if (temp_a2 != 0) {
        sp18 = temp_a2;
        sp1C = temp_a3;
        globalCtx->roomCtx.unk74 = THA_AllocEndAlign16(&globalCtx->state.heap, temp_a2);
        phi_v0 = DmaMgr_SendRequest0(globalCtx->roomCtx.unk74, sp1C, temp_a2);
    }
    return phi_v0;
}

void Scene_HeaderCmdSkyboxSettings(GlobalContext *globalCtx, SceneCmd *cmd) {
    u8 temp_v0;

    globalCtx->skyboxId = (u8) cmd->windSettings.west & 3;
    temp_v0 = (u8) cmd->windSettings.vertical;
    globalCtx->envCtx.unk_18 = temp_v0;
    globalCtx->envCtx.unk_17 = temp_v0;
    globalCtx->envCtx.unk_1E = (u8) cmd->windSettings.south;
    Scene_LoadAreaTextures(globalCtx, (s32) cmd->base.data1);
}

void Scene_HeaderCmdSkyboxDisables(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->envCtx.unk_15 = (u8) cmd->windSettings.west;
    globalCtx->envCtx.unk_16 = (u8) cmd->windSettings.vertical;
}

void Scene_HeaderCmdTimeSettings(GlobalContext *globalCtx, SceneCmd *cmd) {
    void *sp18;
    f32 temp_f16;
    s32 temp_v0_3;
    u16 temp_t8;
    u32 temp_t7;
    u8 temp_a0;
    u8 temp_v0;
    u8 temp_v0_2;
    f32 phi_f16;

    temp_v0 = (u8) cmd->windSettings.west;
    if (temp_v0 != 0xFF) {
        temp_a0 = (u8) cmd->windSettings.vertical;
        if (temp_a0 != 0xFF) {
            temp_f16 = (f32) temp_a0;
            phi_f16 = temp_f16;
            if ((s32) temp_a0 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            temp_t7 = (u32) ((((f32) temp_v0 + (phi_f16 / 60.0f)) * 60.0f) / 0.021972656f);
            gSaveContext.time = (u16) temp_t7;
            gSaveContext.environmentTime = (u16) temp_t7;
        }
    }
    temp_v0_2 = (u8) cmd->windSettings.south;
    if (temp_v0_2 != 0xFF) {
        globalCtx->envCtx.unk_2 = (u16) temp_v0_2;
    } else {
        globalCtx->envCtx.unk_2 = 0;
    }
    if ((gSaveContext.inventory.items[0] == 0xFF) && (globalCtx->envCtx.unk_2 != 0)) {
        globalCtx->envCtx.unk_2 = 5;
    }
    if (gSaveContext.unk_3F58 == 0) {
        gGameInfo->data[15] = (s16) globalCtx->envCtx.unk_2;
    }
    sp18 = globalCtx + 0x10000;
    globalCtx = globalCtx;
    globalCtx->envCtx.unk_4 = -(Math_SinS((s16) (gSaveContext.time - 0x8000)) * 120.0f) * 25.0f;
    globalCtx->envCtx.unk_8 = Math_CosS((s16) (gSaveContext.time - 0x8000)) * 120.0f * 25.0f;
    globalCtx->envCtx.unk_C = Math_CosS((s16) (gSaveContext.time - 0x8000)) * 20.0f * 25.0f;
    if ((sp18->unk7006 == 0) && (gSaveContext.cutscene < 0xFFF0)) {
        temp_t8 = gSaveContext.time;
        temp_v0_3 = temp_t8 & 0xFFFF;
        gSaveContext.environmentTime = temp_t8;
        if ((temp_v0_3 >= 0x2AAA) && (temp_v0_3 < 0x4555)) {
            gSaveContext.environmentTime = 0x3555;
            return;
        }
        if ((temp_v0_3 >= 0x4555) && (temp_v0_3 < 0x5555)) {
            gSaveContext.environmentTime = 0x5555;
            return;
        }
        if ((temp_v0_3 >= 0xAAAA) && (temp_v0_3 < 0xB555)) {
            gSaveContext.environmentTime = 0xB555;
            return;
        }
        if ((temp_v0_3 >= 0xC000) && (temp_v0_3 < 0xCAAA)) {
            gSaveContext.environmentTime = 0xCAAA;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
    }
}

void Scene_HeaderCmdWindSettings(GlobalContext *globalCtx, SceneCmd *cmd) {
    f32 temp_f6;
    u8 temp_t6;
    f32 phi_f6;

    globalCtx->envCtx.windDir.x = (s16) cmd->windSettings.west;
    globalCtx->envCtx.windDir.y = (s16) cmd->windSettings.vertical;
    globalCtx->envCtx.windDir.z = (s16) cmd->windSettings.south;
    temp_t6 = cmd->windSettings.clothIntensity;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    globalCtx->envCtx.windSpeed = phi_f6;
}

void Scene_HeaderCmdExitList(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->setupExitList = Lib_SegmentedToVirtual((void *) cmd->base.data2);
}

void Scene_HeaderCmd09(GlobalContext *globalCtx, SceneCmd *cmd) {

}

void Scene_HeaderCmdSoundSettings(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->soundCtx.seqIndex = cmd->windSettings.clothIntensity;
    globalCtx->soundCtx.nightSeqIndex = (u8) cmd->windSettings.south;
    if ((gSaveContext.seqIndex == 0xFF) || (func_801A8A50(0) == 0x57)) {
        audio_setBGM((u32) cmd->base.data1);
    }
}

void Scene_HeaderCmdEchoSetting(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->roomCtx.currRoom.echo = (s8) cmd->windSettings.clothIntensity;
}

void Scene_HeaderCmdAltHeaderList(GlobalContext *globalCtx, SceneCmd *cmd) {
    void *temp_a0;

    if (gSaveContext.sceneSetupIndex != 0) {
        temp_a0 = (Lib_SegmentedToVirtual((void *) cmd->base.data2) + (gSaveContext.sceneSetupIndex * 4))->unk-4;
        if (temp_a0 != 0) {
            Scene_ProcessHeader(globalCtx, Lib_SegmentedToVirtual(temp_a0));
            cmd->unk8 = 0x14;
        }
    }
}

void Scene_HeaderCmdCutsceneList(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->csCtx.sceneCsCount = cmd->base.data1;
    globalCtx->csCtx.sceneCsList = Lib_SegmentedToVirtual((void *) cmd->base.data2);
}

void Scene_HeaderCmdActorCutsceneList(GlobalContext *globalCtx, SceneCmd *cmd) {
    ActorCutscene_Init(globalCtx, Lib_SegmentedToVirtual((void *) cmd->base.data2), (s32) cmd->base.data1);
}

void Scene_HeaderCmdMiniMap(GlobalContext *globalCtx, SceneCmd *cmd) {
    func_80104CF4(globalCtx);
    func_8010549C(globalCtx, (void *) cmd->base.data2);
}

void Scene_HeaderCmd1D(GlobalContext *globalCtx, SceneCmd *cmd) {

}

void Scene_HeaderCmdMiniMapCompassInfo(GlobalContext *globalCtx, SceneCmd *cmd) {
    func_8010565C(globalCtx, cmd->base.data1, (void *) cmd->base.data2);
}

void Scene_HeaderCmdSetAreaVisitedFlag(GlobalContext *globalCtx, SceneCmd *cmd) {
    s16 temp_v1;
    u16 *temp_a1;
    u32 temp_v0;
    u16 (*phi_a1)[27];
    s16 phi_v0;
    s16 phi_v1;
    s16 phi_v1_2;
    s16 phi_v0_2;
    s32 phi_v1_3;

    phi_a1 = gScenesPerRegion;
    phi_v0 = 0;
    phi_v1 = 0;
    phi_v0_2 = 0;
loop_1:
    phi_v1_2 = phi_v1;
    phi_v0_2 = phi_v0;
    if ((*(phi_a1 + (phi_v0 * 2)) != 0xFFFF) || (temp_v1 = phi_v1 + 1, phi_v1_2 = temp_v1, phi_v1_3 = (s32) temp_v1, (temp_v1 != 0xB))) {
        temp_a1 = gScenesPerRegion[phi_v1_2];
        phi_a1 = (u16 (*)[27]) temp_a1;
        phi_v1 = phi_v1_2;
        phi_v1_3 = (s32) phi_v1_2;
        if (globalCtx->sceneNum != temp_a1[phi_v0_2]) {
            phi_v0 = (s16) (phi_v0_2 + 1);
            goto loop_1;
        }
    }
    if (phi_v1_3 < 0xB) {
        temp_v0 = gSaveContext.mapsVisited;
        gSaveContext.mapsVisited = gBitFlags[phi_v1_3] | temp_v0 | temp_v0;
    }
}

void Scene_HeaderCmdAnimatedMaterials(GlobalContext *globalCtx, SceneCmd *cmd) {
    globalCtx->sceneMaterialAnims = Lib_SegmentedToVirtual((void *) cmd->base.data2);
}

void Scene_SetExitFade(GlobalContext *globalCtx) {
    globalCtx->unk_1887F = Entrance_GetTransitionFlags(globalCtx->nextEntranceIndex) & 0x7F;
}

s32 Scene_ProcessHeader(GlobalContext *globalCtx, SceneCmd *header) {
    u8 temp_v0;
    SceneCmd *phi_s0;

    phi_s0 = header;
loop_1:
    temp_v0 = phi_s0->base.code;
    if (temp_v0 != 0x14) {
        if ((u32) temp_v0 < 0x1FU) {
            *(&sceneHeaderFuncTable + (temp_v0 * 4))(globalCtx, phi_s0);
        }
        phi_s0 += 8;
        goto loop_1;
    }
    return 0;
}

u16 Entrance_CreateIndex(s32 sceneIndex, s32 spawnIndex, s32 sceneSetup) {
    return ((sceneIndex << 9) | (spawnIndex * 0x10) | sceneSetup) & 0xFFFF;
}

u16 Entrance_CreateIndexFromSpawn(s32 spawnIndex) {
    return Entrance_CreateIndex((s32) ((u32) gSaveContext.entranceIndex >> 9), spawnIndex, 0);
}
