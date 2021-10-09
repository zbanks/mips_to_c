CRASHED

typedef struct ActorContext {
    /* 0x000 */ char pad_0[0x2];
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
    /* 0x269 */ char pad_269[0x3];                  /* maybe part of unk268[4]? */
    /* 0x26C */ ? unk_26C;                          /* inferred */
    /* 0x26C */ char pad_26C[0x4];
    /* 0x270 */ ? unk_270;                          /* inferred */
    /* 0x270 */ char pad_270[0x4];
    /* 0x274 */ ? unk_274;                          /* inferred */
    /* 0x274 */ char pad_274[0x4];
    /* 0x278 */ u16 unk278;
    /* 0x27A */ char pad_27A[0x2];
    /* 0x27C */ ? unk_27C;                          /* inferred */
    /* 0x27C */ char pad_27C[0x4];
    /* 0x280 */ ? unk_280;                          /* inferred */
    /* 0x280 */ char pad_280[0x4];
} ActorContext;                                     /* size = 0x284 */

typedef struct {
    /* 0x00 */ Vec3s rot;
    /* 0x06 */ s16 face;
    /* 0x08 */ f32 yOffset;
    /* 0x0C */ void (*shadowDraw)(Actor *, Lights *, GlobalContext *);
    /* 0x10 */ f32 shadowScale;
    /* 0x14 */ u8 shadowAlpha;
    /* 0x15 */ u8 feetFloorFlags;
    /* 0x16 */ char pad_16[0x1];
    /* 0x17 */ s8 unk_17;                           /* inferred */
    /* 0x18 */ Vec3f feetPos[2];
} ActorShape;                                       /* size = 0x30 */

typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ u16 startFrame;
    /* 0x04 */ u16 endFrame;
    /* 0x06 */ u16 unk_6;                           /* inferred */
    /* 0x08 */ char pad_8[0x28];                    /* maybe part of unk_6[21]? */
} CsCmdActorAction;                                 /* size = 0x30 */

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
    /* 0x1202C */ char pad_1202C[0x2];
    /* 0x1202E */ u16 unk1202E;
    /* 0x12030 */ char pad_12030[0x14];             /* maybe part of unk1202E[11]? */
    /* 0x12044 */ s16 unk12044;
    /* 0x12046 */ char pad_12046[0x2];
    /* 0x12048 */ u8 unk_12048;                     /* inferred */
    /* 0x12049 */ char pad_12049[0x21];             /* maybe part of unk_12048[34]? */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ char pad_12070[0x8];              /* maybe part of unk1206C[3]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad_12080[0x31];             /* maybe part of bankRupees[13]? */
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad_120B2[0x2E];             /* maybe part of unk120B1[47]? */
} MessageContext;                                   /* size = 0x120E0 */

typedef struct Player {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s8 currentShield;
    /* 0x145 */ s8 currentBoots;
    /* 0x146 */ s8 heldItemButton;
    /* 0x147 */ s8 itemActionParam;
    /* 0x148 */ u8 heldItemId;
    /* 0x149 */ s8 prevBoots;
    /* 0x14A */ s8 heldItemActionParam;
    /* 0x14B */ u8 transformation;
    /* 0x14C */ u8 modelGroup;
    /* 0x14D */ u8 nextModelGroup;
    /* 0x14E */ s8 unk_14E;
    /* 0x14F */ u8 modelAnimType;
    /* 0x150 */ u8 leftHandType;
    /* 0x151 */ u8 rightHandType;
    /* 0x152 */ u8 sheathType;
    /* 0x153 */ u8 currentMask;
    /* 0x154 */ s8 unk_154;
    /* 0x155 */ u8 prevMask;
    /* 0x156 */ char pad_156[0x2];                  /* maybe part of prevMask[3]? */
    /* 0x158 */ Gfx **rightHandDLists;
    /* 0x15C */ Gfx **leftHandDLists;
    /* 0x160 */ Gfx **sheathDLists;
    /* 0x164 */ Gfx **waistDLists;
    /* 0x168 */ f32 unk_168;
    /* 0x16C */ f32 unk_16C;
    /* 0x170 */ f32 unk_170;
    /* 0x174 */ f32 unk_174;
    /* 0x178 */ f32 unk_178;
    /* 0x17C */ f32 unk_17C;
    /* 0x180 */ f32 unk_180;
    /* 0x184 */ f32 unk_184;
    /* 0x188 */ f32 unk_188;
    /* 0x18C */ f32 unk_18C;
    /* 0x190 */ f32 unk_190;
    /* 0x194 */ f32 unk_194;
    /* 0x198 */ f32 unk_198;
    /* 0x19C */ f32 unk_19C;
    /* 0x1A0 */ f32 unk_1A0;
    /* 0x1A4 */ f32 unk_1A4;
    /* 0x1A8 */ f32 unk_1A8;
    /* 0x1AC */ f32 unk_1AC;
    /* 0x1B0 */ f32 unk_1B0;
    /* 0x1B4 */ s16 unk_1B4;
    /* 0x1B6 */ char pad_1B6[0x2];
    /* 0x1B8 */ u8 giObjectLoading;
    /* 0x1B9 */ char pad_1B9[0x3];                  /* maybe part of giObjectLoading[4]? */
    /* 0x1BC */ DmaRequest giObjectDmaRequest;
    /* 0x1DC */ OSMesgQueue giObjectLoadQueue;
    /* 0x1F4 */ void *giObjectLoadMsg;
    /* 0x1F8 */ void *giObjectSegment;
    /* 0x1FC */ u8 maskObjectLoading;
    /* 0x1FD */ s8 maskId;
    /* 0x1FE */ char pad_1FE[0x2];                  /* maybe part of maskId[3]? */
    /* 0x200 */ DmaRequest maskDmaRequest;
    /* 0x220 */ OSMesgQueue maskObjectLoadQueue;
    /* 0x238 */ void *maskObjectLoadMsg;
    /* 0x23C */ void *maskObjectSegment;
    /* 0x240 */ SkelAnime skelAnime;
    /* 0x284 */ SkelAnime unk_284;
    /* 0x2C8 */ SkelAnime unk_2C8;
    /* 0x30C */ Vec3s jointTable[5];
    /* 0x32A */ Vec3s morphTable[5];
    /* 0x348 */ s16 eyeTexId;
    /* 0x34A */ s16 eyeAnimTimer;
    /* 0x34C */ Actor *leftHandActor;
    /* 0x350 */ PosRot leftHandWorld;
    /* 0x364 */ Actor *rightHandActor;
    /* 0x368 */ PosRot rightHandWorld;
    /* 0x37C */ s8 doorType;
    /* 0x37D */ s8 doorDirection;
    /* 0x37E */ s8 doorTimer;
    /* 0x37F */ s8 doorNext;
    /* 0x380 */ Actor *doorActor;
    /* 0x384 */ s16 unk_384;
    /* 0x386 */ u16 unk_386;
    /* 0x388 */ Actor *unk_388;
    /* 0x38C */ s16 unk_38C;
    /* 0x38E */ char pad_38E[0x2];
    /* 0x390 */ Actor *unk_390;
    /* 0x394 */ u8 unk_394;
    /* 0x395 */ u8 unk_395;
    /* 0x396 */ u8 unk_396;
    /* 0x397 */ u8 unk_397;
    /* 0x398 */ Actor *unk_398;
    /* 0x39C */ s16 unk_39C;
    /* 0x39E */ s16 unk_39E;
    /* 0x3A0 */ Vec3f unk_3A0;
    /* 0x3AC */ Vec3f unk_3AC;
    /* 0x3B8 */ u16 unk_3B8;
    /* 0x3BA */ s16 unk_3BA;
    /* 0x3BC */ s16 unk_3BC;
    /* 0x3BE */ char pad_3BE[0x2];
    /* 0x3C0 */ Vec3f unk_3C0;
    /* 0x3CC */ s16 unk_3CC;
    /* 0x3CE */ s8 unk_3CE;
    /* 0x3CF */ u8 unk_3CF;
    /* 0x3D0 */ s8 unk_3D0;                         /* inferred */
    /* 0x3D1 */ char pad_3D1[0x137];                /* maybe part of unk_3D0[312]? */
    /* 0x508 */ LightInfo unk_508;                  /* inferred */
    /* 0x516 */ char pad_516[0x2];
    /* 0x518 */ ColliderCylinder cylinder;
    /* 0x564 */ ColliderQuad swordQuads[2];
    /* 0x664 */ ColliderQuad shieldQuad;
    /* 0x6E4 */ ColliderCylinder shieldCylinder;
    /* 0x730 */ Actor *unk_730;
    /* 0x734 */ char pad_734[0x8];                  /* maybe part of unk_730[3]? */
    /* 0x73C */ s32 blureEffectIndex[3];
    /* 0x748 */ s32 unk_748;                        /* inferred */
    /* 0x74C */ char pad_74C[0xE4];                 /* maybe part of unk_748[58]? */
    /* 0x830 */ SkelAnime unk_830;                  /* inferred */
    /* 0x874 */ char pad_874[0x1F4];                /* maybe part of unk_830[8]? */
    /* 0xA68 */ PlayerAgeProperties *ageProperties;
    /* 0xA6C */ u32 stateFlags1;
    /* 0xA70 */ u32 stateFlags2;
    /* 0xA74 */ u32 stateFlags3;
    /* 0xA78 */ Actor *unk_A78;
    /* 0xA7C */ Actor *boomerangActor;
    /* 0xA80 */ Actor *tatlActor;
    /* 0xA84 */ s16 tatlTextId;
    /* 0xA86 */ s8 unk_A86;
    /* 0xA87 */ s8 unk_A87;
    /* 0xA88 */ Actor *targetActor;
    /* 0xA8C */ f32 targetActorDistance;
    /* 0xA90 */ Actor *unk_A90;
    /* 0xA94 */ f32 unk_A94;
    /* 0xA98 */ Actor *unk_A98;
    /* 0xA9C */ f32 unk_A9C;
    /* 0xAA0 */ f32 unk_AA0;
    /* 0xAA4 */ s8 unk_AA4;
    /* 0xAA5 */ u8 unk_AA5;
    /* 0xAA6 */ u16 unk_AA6;
    /* 0xAA8 */ s16 unk_AA8;
    /* 0xAAA */ s16 unk_AAA;
    /* 0xAAC */ Vec3s unk_AAC;
    /* 0xAB2 */ Vec3s unk_AB2;
    /* 0xAB8 */ f32 unk_AB8;
    /* 0xABC */ f32 unk_ABC;
    /* 0xAC0 */ f32 unk_AC0;
    /* 0xAC4 */ void *unk_AC4;
    /* 0xAC8 */ f32 unk_AC8;
    /* 0xACC */ s16 unk_ACC;
    /* 0xACE */ s8 unk_ACE;
    /* 0xACF */ u8 unk_ACF;
    /* 0xAD0 */ f32 linearVelocity;
    /* 0xAD4 */ s16 currentYaw;
    /* 0xAD6 */ s16 targetYaw;
    /* 0xAD8 */ u16 unk_AD8;
    /* 0xADA */ s8 swordAnimation;
    /* 0xADB */ s8 swordState;
    /* 0xADC */ s8 unk_ADC;
    /* 0xADD */ s8 unk_ADD;
    /* 0xADE */ u8 unk_ADE;
    /* 0xADF */ s8 unk_ADF[4];
    /* 0xAE3 */ s8 unk_AE3[4];
    /* 0xAE7 */ s8 unk_AE7;
    /* 0xAE8 */ s16 unk_AE8;
    /* 0xAEA */ char pad_AEA[0x2];
    /* 0xAEC */ f32 unk_AEC;
    /* 0xAF0 */ Vec3f unk_AF0[2];
    /* 0xB08 */ f32 unk_B08[8];
    /* 0xB28 */ s16 unk_B28;
    /* 0xB2A */ s8 unk_B2A;
    /* 0xB2B */ s8 unk_B2B;
    /* 0xB2C */ f32 windSpeed;
    /* 0xB30 */ s16 windAngleX;
    /* 0xB32 */ s16 windAngleY;
    /* 0xB34 */ f32 unk_B34;
    /* 0xB38 */ f32 unk_B38;
    /* 0xB3C */ f32 unk_B3C;
    /* 0xB40 */ f32 unk_B40;
    /* 0xB44 */ f32 unk_B44;
    /* 0xB48 */ f32 unk_B48;
    /* 0xB4C */ s16 unk_B4C;
    /* 0xB4E */ s16 unk_B4E;
    /* 0xB50 */ f32 unk_B50;
    /* 0xB54 */ f32 unk_B54;
    /* 0xB58 */ f32 unk_B58;
    /* 0xB5C */ u8 unk_B5C;
    /* 0xB5D */ u8 unk_B5D;
    /* 0xB5E */ u8 unk_B5E;
    /* 0xB5F */ u8 unk_B5F;
    /* 0xB60 */ u16 unk_B60;
    /* 0xB62 */ s16 unk_B62;
    /* 0xB64 */ u8 unk_B64;
    /* 0xB65 */ u8 unk_B65;
    /* 0xB66 */ u8 unk_B66;
    /* 0xB67 */ u8 unk_B67;
    /* 0xB68 */ s16 unk_B68;
    /* 0xB6A */ s16 unk_B6A;
    /* 0xB6C */ s16 unk_B6C;
    /* 0xB6E */ s16 unk_B6E;
    /* 0xB70 */ s16 unk_B70;
    /* 0xB72 */ u16 unk_B72;
    /* 0xB74 */ u8 unk_B74;
    /* 0xB75 */ u8 unk_B75;
    /* 0xB76 */ s16 unk_B76;
    /* 0xB78 */ f32 unk_B78;
    /* 0xB7C */ f32 unk_B7C;
    /* 0xB80 */ f32 unk_B80;
    /* 0xB84 */ s16 unk_B84;
    /* 0xB86 */ s16 unk_B86;
    /* 0xB88 */ s16 unk_B88;
    /* 0xB8A */ s16 unk_B8A;
    /* 0xB8C */ s16 unk_B8C;
    /* 0xB8E */ s16 unk_B8E;
    /* 0xB90 */ s16 unk_B90;
    /* 0xB92 */ s16 unk_B92;
    /* 0xB94 */ s16 unk_B94;
    /* 0xB96 */ s16 unk_B96;
    /* 0xB98 */ WeaponInfo swordInfo[3];
    /* 0xBEC */ Vec3f bodyPartsPos[18];
    /* 0xCC4 */ MtxF mf_CC4;
    /* 0xD04 */ MtxF shieldMf;
    /* 0xD44 */ u8 isBurning;
    /* 0xD45 */ u8 flameTimers[18];
    /* 0xD57 */ u8 unk_D57;
    /* 0xD58 */ void (*unk_D58)(GlobalContext *, Player *);
    /* 0xD5C */ s8 invincibilityTimer;
    /* 0xD5D */ u8 unk_D5D;
    /* 0xD5E */ u8 unk_D5E;
    /* 0xD5F */ u8 unk_D5F;
    /* 0xD60 */ f32 unk_D60;
    /* 0xD64 */ s16 unk_D64;
    /* 0xD66 */ u16 unk_D66;
    /* 0xD68 */ s16 unk_D68;
    /* 0xD6A */ s8 unk_D6A;
    /* 0xD6B */ u8 unk_D6B;
    /* 0xD6C */ Vec3f unk_D6C;
} Player;                                           /* size = 0xD78 */

typedef struct {
    /* 0x00 */ s8 num;
    /* 0x01 */ u8 unk1;
    /* 0x02 */ u8 unk2;
    /* 0x03 */ u8 unk3;
    /* 0x04 */ s8 echo;
    /* 0x05 */ u8 unk5;
    /* 0x06 */ u8 enablePosLights;
    /* 0x07 */ char pad_7[0x1];
    /* 0x08 */ RoomMesh *mesh;
    /* 0x0C */ void *segment;
    /* 0x10 */ s32 unk_10;                          /* inferred */
} Room;                                             /* size = 0x14 */

struct _mips2c_stack_func_8082DA90 {};              /* size 0x0 */

struct _mips2c_stack_func_8082DABC {};              /* size 0x0 */

struct _mips2c_stack_func_8082DAD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082DAFC {};              /* size 0x0 */

struct _mips2c_stack_func_8082DB18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082DB3C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082DB60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082DB90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082DBC0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082DC28 {};              /* size 0x0 */

struct _mips2c_stack_func_8082DC38 {};              /* size 0x0 */

struct _mips2c_stack_func_8082DC64 {};              /* size 0x0 */

struct _mips2c_stack_func_8082DCA0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082DD2C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8082DE14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082DE50 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082DE88 {};              /* size 0x0 */

struct _mips2c_stack_func_8082DF2C {};              /* size 0x0 */

struct _mips2c_stack_func_8082DF48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082DF8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E00C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082E078 {};              /* size 0x0 */

struct _mips2c_stack_func_8082E094 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E0CC {};              /* size 0x0 */

struct _mips2c_stack_func_8082E0F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E12C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E188 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E1BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E1F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E224 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8082E438 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082E4A4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082E514 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082E55C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082E5A8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082E5EC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082E634 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082E67C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E6D0 {};              /* size 0x0 */

struct _mips2c_stack_func_8082E6F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E784 {};              /* size 0x0 */

struct _mips2c_stack_func_8082E794 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E820 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082E920 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082E9C8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EA10 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8082EA38 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8082EA60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EA80 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EAC8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8082EAF0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8082EB18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EB38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EC9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082ECCC {};              /* size 0x0 */

struct _mips2c_stack_func_8082ECE0 {};              /* size 0x0 */

struct _mips2c_stack_func_8082ED20 {};              /* size 0x0 */

struct _mips2c_stack_func_8082ED94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EEA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EEE0 {};              /* size 0x0 */

struct _mips2c_stack_func_8082EF20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EF54 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EF9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082EFE4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082F02C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8082F09C {};              /* size 0x0 */

struct _mips2c_stack_func_8082F0E4 {};              /* size 0x0 */

struct _mips2c_stack_func_8082F164 {};              /* size 0x0 */

struct _mips2c_stack_func_8082F1AC {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ s16 sp44;                            /* inferred */
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];                    /* maybe part of sp46[3]? */
    /* 0x4C */ s32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8082F43C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082F470 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082F524 {};              /* size 0x0 */

struct _mips2c_stack_func_8082F594 {};              /* size 0x0 */

struct _mips2c_stack_func_8082F5A4 {};              /* size 0x0 */

struct _mips2c_stack_func_8082F5C0 {};              /* size 0x0 */

struct _mips2c_stack_func_8082F5FC {};              /* size 0x0 */

struct _mips2c_stack_func_8082F62C {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Actor *sp44;                         /* inferred */
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8082F7F4 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8082F8A0 {};              /* size 0x0 */

struct _mips2c_stack_func_8082F8BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082F938 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8082FA5C {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ u16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8082FB68 {};              /* size 0x0 */

struct _mips2c_stack_func_8082FBE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082FC24 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082FC60 {};              /* size 0x0 */

struct _mips2c_stack_func_8082FC78 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082FCC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8082FD0C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8082FDC4 {};              /* size 0x0 */

struct _mips2c_stack_func_8082FE0C {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];                    /* maybe part of sp3C[3]? */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808302CC {
    /* 0x00 */ char pad_0[0x37];
    /* 0x37 */ s8 sp37;                             /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x10];                   /* maybe part of sp38[5]? */
    /* 0x4C */ AnimationHeaderCommon *sp4C;         /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808304BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808305BC {};              /* size 0x0 */

struct _mips2c_stack_func_808306F8 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808308DC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808309CC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80830A58 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80830AE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80830B38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80830B88 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ AnimationHeaderCommon *sp34;         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80830CE8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80830D40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80830DF0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80830E30 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80830F9C {};              /* size 0x0 */

struct _mips2c_stack_func_80830FD4 {};              /* size 0x0 */

struct _mips2c_stack_func_80831010 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80831094 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80831124 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80831194 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8083133C {};              /* size 0x0 */

struct _mips2c_stack_func_808313A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808313F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80831454 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80831494 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8083172C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80831760 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808317C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80831814 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808318C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80831944 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80831F34 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80832090 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083213C {};              /* size 0x0 */

struct _mips2c_stack_func_8083216C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808323C0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80832444 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083249C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808324EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80832558 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80832578 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80832660 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80832754 {
    /* 0x00 */ char pad_0[0x36];
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80832888 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80832CAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80832F24 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80832F78 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80833058 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808331FC {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808332A0 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808333CC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s8 sp24;                             /* inferred */
    /* 0x25 */ s8 sp25;                             /* inferred */
    /* 0x26 */ char pad_26[0x2];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808334D4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ AnimationHeaderCommon *sp34;         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808335B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808335F4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80833728 {};              /* size 0x0 */

struct _mips2c_stack_func_8083375C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ ? *sp24;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80833864 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ LinkAnimationHeader **sp24;          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80833998 {};              /* size 0x0 */

struct _mips2c_stack_func_808339B4 {};              /* size 0x0 */

struct _mips2c_stack_func_808339D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80833A64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80833AA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80833B18 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 **sp28;                          /* inferred */
    /* 0x2C */ s32 *sp2C;                           /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808340AC {};              /* size 0x0 */

struct _mips2c_stack_func_808340D4 {};              /* size 0x0 */

struct _mips2c_stack_func_80834104 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80834140 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808341F4 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808344C0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80834534 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083456C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808345A8 {};              /* size 0x0 */

struct _mips2c_stack_func_808345C8 {};              /* size 0x0 */

struct _mips2c_stack_func_80834600 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ CollisionContext *sp38;              /* inferred */
    /* 0x3C */ char pad_3C[0x18];                   /* maybe part of sp38[7]? */
    /* 0x54 */ u32 sp54;                            /* inferred */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ Actor *sp5C;                         /* inferred */
    /* 0x60 */ Actor *sp60;                         /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80834CD0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80834D50 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80834DB8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80834DFC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ CollisionContext *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0x10];                   /* maybe part of sp28[5]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ CollisionPoly *sp4C;                 /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ s32 *sp58;                           /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80835324 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808353DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80835428 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808354A4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808355D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083562C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ CollisionContext *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ u32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80835BC8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80835BF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80835C64 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80835CD8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80835D2C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80835D58 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80835DF8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ CollisionPoly *sp2C;                 /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80835EAC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083604C {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x8];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80836258 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ CollisionPoly *sp54;                 /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ LinkAnimationHeader *sp60;           /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_808365DC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80836888 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083692C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80836988 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808369F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80836A5C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80836A98 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80836AD8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80836B3C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ AnimationHeaderCommon *sp34;         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80836C70 {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80836D8C {};              /* size 0x0 */

struct _mips2c_stack_func_80836DC0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80836EA0 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80836F10 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808370D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80837134 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ LinkAnimationHeader *sp2C;           /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808373A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808373F8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80837730 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ WaterBox *sp38;                      /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8083784C {};              /* size 0x0 */

struct _mips2c_stack_func_808378FC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083798C {};              /* size 0x0 */

struct _mips2c_stack_func_808379C0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ LinkAnimationHeader *sp20;           /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80837B60 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80837BD0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80837BF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80837C20 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80837C78 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80837CEC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80837DEC {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ? *sp44;                             /* inferred */
    /* 0x48 */ f32 *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0x8];                    /* maybe part of sp48[3]? */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x4];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ s32 sp8C;                            /* inferred */
    /* 0x90 */ CollisionPoly *sp90;                 /* inferred */
    /* 0x94 */ CollisionPoly *sp94;                 /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_808381A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808381F8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ CollisionPoly *sp34;                 /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8083827C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void (*sp2C)(Actor *, GlobalContext *); /* inferred */
    /* 0x30 */ void (*sp30)(Actor *, GlobalContext *); /* inferred */
    /* 0x34 */ char pad_34[0x10];                   /* maybe part of sp30[5]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ CollisionPoly *sp4C;                 /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ WaterBox *sp58;                      /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_8083868C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80838760 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808387A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80838830 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ OSMesgQueue *sp34;                   /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808388B8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808389BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80838A20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80838A90 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808391D8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ Player *sp24;                        /* inferred */
    /* 0x28 */ Player *sp28;                        /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80839518 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808395F0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808396B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80839770 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80839800 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80839860 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80839978 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80839A10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80839A84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80839B18 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80839CD8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ AnimationHeaderCommon *sp34;         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80839E3C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80839E74 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80839ED0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80839F98 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083A04C {};              /* size 0x0 */

struct _mips2c_stack_func_8083A0CC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083A114 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083A274 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ AnimationHeaderCommon *sp34;         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8083A4A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083A548 {};              /* size 0x0 */

struct _mips2c_stack_func_8083A580 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083A658 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083A6C0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083A794 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void (*sp24)(Actor *, GlobalContext *); /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083A844 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083A878 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ WaterBox *sp2C;                      /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083A98C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8083AD04 {};              /* size 0x0 */

struct _mips2c_stack_func_8083AD8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083ADB8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083ADF0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083AE38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083AECC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083AF30 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083AF8C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8083B030 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083B090 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083B0E4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083B1A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083B23C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083B29C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083B2E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083B32C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083B3B4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083B73C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083B798 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083B850 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083B8D0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083B930 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083BB4C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083BF54 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0x10];                   /* maybe part of sp38[5]? */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ void *sp60;                          /* inferred */
    /* 0x64 */ char pad_64[0x18];                   /* maybe part of sp60[7]? */
    /* 0x7C */ s32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_8083C62C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x2];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8083C6E8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x12];
    /* 0x46 */ s16 sp46;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8083C85C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083C8E8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ char pad_26[0x2];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8083CB04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083CB58 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083CBC4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083CCB4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? *sp20;                             /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8083CF68 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void (*sp24)(Player *, GlobalContext *); /* inferred */
    /* 0x28 */ void (*sp28)(Actor *, GlobalContext *); /* inferred */
    /* 0x2C */ char pad_2C[0x1A];                   /* maybe part of sp28[7]? */
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x6];                    /* maybe part of sp4C[2]? */
    /* 0x56 */ s16 sp56;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8083D168 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083D23C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u8 *sp24;                            /* inferred */
    /* 0x28 */ u8 *sp28;                            /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083D6DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083D738 {};              /* size 0x0 */

struct _mips2c_stack_func_8083D78C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083D860 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ LinkAnimationHeader *sp28;           /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 *sp3C;                           /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x18];                   /* maybe part of sp50[7]? */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ CollisionPoly *sp7C;                 /* inferred */
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ s32 sp84;                            /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_8083DCC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083DD1C {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ? *sp44;                             /* inferred */
    /* 0x48 */ char pad_48[0x10];                   /* maybe part of sp44[5]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ CollisionPoly *sp5C;                 /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ CollisionPoly *sp84;                 /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_8083DEE4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083DF38 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083DFC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083E14C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083E234 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083E28C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083E2F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083E354 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083E404 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083E514 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ u16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083E758 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083E7F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083E8E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083E958 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8083E9C4 {};              /* size 0x0 */

struct _mips2c_stack_func_8083EA44 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8083EBD0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ u32 sp40;                            /* inferred */
    /* 0x44 */ AnimationHeaderCommon *sp44;         /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8083EE60 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083F144 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083F190 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083F230 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083F27C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ LinkAnimationHeader *sp34;           /* inferred */
    /* 0x38 */ LinkAnimationHeader *sp38;           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8083F358 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083F57C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8083F828 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083F8A8 {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x10];                   /* maybe part of sp70[5]? */
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0xC];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0xC];                    /* maybe part of sp98[4]? */
    /* 0xA8 */ ? spA8;                              /* inferred */
    /* 0xA8 */ char pad_A8[0x10];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_8083FBC4 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8083FCF0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083FD80 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083FE38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083FE90 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8083FEF4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083FF30 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8083FFEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80840094 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808400CC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x7];                    /* maybe part of sp2C[2]? */
    /* 0x37 */ u8 sp37;                             /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808401F4 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ CollisionContext *sp44;              /* inferred */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ char pad_4C[0x8];                    /* maybe part of sp48[3]? */
    /* 0x54 */ u32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ s16 sp5C;                            /* inferred */
    /* 0x5E */ s16 sp5E;                            /* inferred */
    /* 0x60 */ s16 sp60;                            /* inferred */
    /* 0x62 */ char pad_62[0x2];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x4C];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ s32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ char pad_DC[0x4];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_80840770 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80840980 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808409A8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80840A30 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80840CD4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80840DEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80840E24 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80840E5C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80840EC0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80840F34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80840F90 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808411D4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808412A0 {};              /* size 0x0 */

struct _mips2c_stack_func_808412BC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80841358 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80841408 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808414E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80841528 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808415A0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808415E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80841624 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80841744 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084182C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80841A50 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80841AC4 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ PosRot *sp40;                        /* inferred */
    /* 0x44 */ LightInfo *sp44;                     /* inferred */
    /* 0x48 */ char pad_48[0x18];                   /* maybe part of sp44[7]? */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0xC];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80842510 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808425B4 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808426F0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ Actor *sp34;                         /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ Player *sp3C;                        /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808430E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80843178 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ CollisionContext *sp38;              /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
    /* 0x40 */ char pad_40[0xC];                    /* maybe part of sp3C[4]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ s32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ CollisionPoly *sp84;                 /* inferred */
    /* 0x88 */ char pad_88[0x4];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0x4];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ CollisionPoly *sp98;                 /* inferred */
    /* 0x9C */ char pad_9C[0x6];                    /* maybe part of sp98[2]? */
    /* 0xA2 */ s16 spA2;                            /* inferred */
    /* 0xA4 */ s32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ s32 spAC;                            /* inferred */
    /* 0xB0 */ u32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char pad_B8[0x4];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ CollisionPoly *spC0;                 /* inferred */
    /* 0xC4 */ char pad_C4[0x3];
    /* 0xC7 */ u8 spC7;                             /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_808442D8 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808445C4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808446F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80844784 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x14];                   /* maybe part of sp2C[6]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0xA];                    /* maybe part of sp5C[3]? */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80844D80 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0xC];
    /* 0x94 */ ? sp94;                              /* inferred */
    /* 0x94 */ char pad_94[0xC];
    /* 0xA0 */ ? spA0;                              /* inferred */
    /* 0xA0 */ char pad_A0[0xC];
    /* 0xAC */ ? spAC;                              /* inferred */
    /* 0xAC */ char pad_AC[0xC];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80844EF8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ CollisionCheckContext *sp34;         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x14];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_808460B8 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ? *sp38;                             /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ u16 sp44;                            /* inferred */
    /* 0x46 */ char pad_46[0xA];                    /* maybe part of sp44[6]? */
    /* 0x50 */ u16 sp50;                            /* inferred */
    /* 0x52 */ char pad_52[0x16];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_808463C0 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80846460 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80846528 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ void *sp44;                          /* inferred */
    /* 0x48 */ f32 *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0x18];                   /* maybe part of sp48[7]? */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];                    /* maybe part of sp64[3]? */
    /* 0x70 */ s16 sp70;                            /* inferred */
    /* 0x72 */ char pad_72[0x2];
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0x8];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ ? *sp84;                             /* inferred */
    /* 0x88 */ char pad_88[0x13];                   /* maybe part of sp84[5]? */
    /* 0x9B */ u8 sp9B;                             /* inferred */
    /* 0x9C */ char pad_9C[0x18];                   /* maybe part of sp9B[25]? */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ u8 spBC;                             /* inferred */
    /* 0xBD */ u8 spBD;                             /* inferred */
    /* 0xBE */ u8 spBE;                             /* inferred */
    /* 0xBF */ char pad_BF[0x5];                    /* maybe part of spBE[6]? */
    /* 0xC4 */ GraphicsContext *spC4;               /* inferred */
    /* 0xC8 */ char pad_C8[0x4];
    /* 0xCC */ Gfx *spCC;                           /* inferred */
    /* 0xD0 */ char pad_D0[0x8];                    /* maybe part of spCC[3]? */
    /* 0xD8 */ s32 spD8;                            /* inferred */
    /* 0xDC */ u32 *spDC;                           /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ ? **spE4;                            /* inferred */
    /* 0xE8 */ ? **spE8;                            /* inferred */
    /* 0xEC */ s32 spEC;                            /* inferred */
    /* 0xF0 */ char pad_F0[0x8];
};                                                  /* size = 0xF8 */

struct _mips2c_stack_func_808470D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80847190 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084748C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808475B4 {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ f32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_808477D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80847880 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80847994 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808479F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80847A50 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80847A94 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ CollisionPoly *sp50;                 /* inferred */
    /* 0x54 */ char pad_54[0x8];                    /* maybe part of sp50[3]? */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80847BF0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80847E2C {};              /* size 0x0 */

struct _mips2c_stack_func_80847ED4 {};              /* size 0x0 */

struct _mips2c_stack_func_80847F1C {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80847FF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80848048 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80848094 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 *sp24;                           /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808481CC {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80848250 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80848294 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808482E0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ u8 *sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808484CC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808484F0 {};              /* size 0x0 */

struct _mips2c_stack_func_80848570 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80848640 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ActorContext *sp3C;                  /* inferred */
    /* 0x40 */ char pad_40[0xC];                    /* maybe part of sp3C[4]? */
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80848780 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808487B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80848808 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084894C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80848A0C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ AnimationHeaderCommon *sp3C;         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80848AB0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80848B6C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80848BF4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80848E4C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80849054 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808490B4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ s16 *sp24;                           /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808491B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8084923C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808492C4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084933C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ActorContext *sp3C;                  /* inferred */
    /* 0x40 */ SkelAnime *sp40;                     /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80849570 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80849620 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808496AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808497A0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80849A9C {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0xE];                    /* maybe part of sp30[4]? */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80849DD0 {
    /* 0x00 */ char pad_0[0x3A];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80849FE0 {
    /* 0x00 */ char pad_0[0x3A];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8084A26C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0xA];                    /* maybe part of sp34[3]? */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8084A5C0 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084A794 {
    /* 0x00 */ char pad_0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084A884 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084A8E8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0xA];                    /* maybe part of sp2C[3]? */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8084AB4C {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084AC84 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp32[5]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8084AEEC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084AF9C {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8084B0EC {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8084B288 {
    /* 0x00 */ char pad_0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084B3B8 {
    /* 0x00 */ char pad_0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084B4A8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084B5C0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x2];
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ char pad_48[0x2];
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ s16 sp4C;                            /* inferred */
    /* 0x4E */ s16 sp4E;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8084BAA4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ AnimationHeaderCommon *sp38;         /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8084BBF0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ SkelAnime *sp18;                     /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084BC64 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084BE40 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084BF28 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8084BFDC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8084C124 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8084C16C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x2];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
    /* 0x40 */ char pad_40[0x2];
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8084C6EC {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x6];                    /* maybe part of sp30[2]? */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ s32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8084C94C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8084CA24 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8084CB58 {
    /* 0x00 */ char pad_0[0x36];
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8084CCEC {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084CE84 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0xA];                    /* maybe part of sp44[3]? */
    /* 0x52 */ s16 sp52;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ Player *sp58;                        /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x8];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_8084D18C {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0xA];                    /* maybe part of sp44[3]? */
    /* 0x52 */ s16 sp52;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ Player *sp58;                        /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8084D4EC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8084D770 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084D820 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0x14];                   /* maybe part of sp38[6]? */
    /* 0x50 */ TransitionActorEntry *sp50;          /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_8084E034 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8084E25C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8084E334 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8084E434 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8084E4E4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084E58C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8084E65C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084E724 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8084E980 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0xC];                    /* maybe part of sp34[4]? */
    /* 0x44 */ s32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8084ED9C {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084EE50 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8084EF9C {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0xA];                    /* maybe part of sp68[3]? */
    /* 0x76 */ s16 sp76;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_8084F1B8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0xA];                    /* maybe part of sp2C[3]? */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8084F3DC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8084F4E8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x1C];                   /* maybe part of sp34[8]? */
    /* 0x54 */ LinkAnimationHeader *sp54;           /* inferred */
    /* 0x58 */ AnimationHeaderCommon *sp58;         /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0xC];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ s32 sp78;                            /* inferred */
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0x14];
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ s32 sp94;                            /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_8084FC0C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ CollisionPoly *sp3C;                 /* inferred */
    /* 0x40 */ ? *sp40;                             /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8084FD7C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8084FE48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8084FE7C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x14];                   /* maybe part of sp2C[6]? */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808505D0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80850734 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80850854 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808508C8 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80850B18 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80850BA8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80850BF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80850D20 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80850D68 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s16 *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0xE];                    /* maybe part of sp28[4]? */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ char pad_3E[0x2];
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808513EC {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80851588 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808516B4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808519FC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80851B58 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80851BD4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80851C40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80851D30 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ f32 *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0xC];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80851EAC {};              /* size 0x0 */

struct _mips2c_stack_func_80851EC8 {};              /* size 0x0 */

struct _mips2c_stack_func_80851F18 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808521E0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80852290 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ char pad_3A[0x2];
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8085255C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808525C4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085269C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ void *sp3C;                          /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x1C];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80852B28 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ SkelAnime *sp3C;                     /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80852C04 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80852FD4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ SkelAnime *sp18;                     /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808530E0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80853194 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808534C0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80853754 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80853850 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ SkelAnime *sp40;                     /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ char pad_50[0xC];                    /* maybe part of sp4C[4]? */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80853A5C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80853CC0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80853D68 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ s16 sp44;                            /* inferred */
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ void *sp54;                          /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80854010 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808540A0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80854118 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8085421C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8085437C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085439C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80854430 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80854614 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808546D0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80854800 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808548B8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0xB];                    /* maybe part of sp28[3]? */
    /* 0x37 */ u8 sp37;                             /* inferred */
    /* 0x38 */ LinkAnimationHeader *sp38;           /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80854C70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80854CD0 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80854EFC {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ s16 sp70;                            /* inferred */
    /* 0x72 */ u8 sp72;                             /* inferred */
    /* 0x73 */ u8 sp73;                             /* inferred */
    /* 0x74 */ u8 sp74;                             /* inferred */
    /* 0x75 */ u8 sp75;                             /* inferred */
    /* 0x76 */ u8 sp76;                             /* inferred */
    /* 0x77 */ u8 sp77;                             /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_808550D0 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80855218 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808553F4 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ ? *sp4C;                             /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80855818 {
    /* 0x00 */ char pad_0[0x3E];
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80855A7C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80855AF4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80855B9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80855C28 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ AnimationHeaderCommon *sp34;         /* inferred */
    /* 0x38 */ char pad_38[0x6];                    /* maybe part of sp34[2]? */
    /* 0x3E */ s16 sp3E;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80855E08 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80855F9C {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80856000 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80856074 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80856110 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808561B0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808566C0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8085687C {};              /* size 0x0 */

struct _mips2c_stack_func_80856888 {};              /* size 0x0 */

struct _mips2c_stack_func_80856918 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ PosRot *sp3C;                        /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ s16 *sp44;                           /* inferred */
    /* 0x48 */ SkelAnime *sp48;                     /* inferred */
    /* 0x4C */ char pad_4C[0xC];                    /* maybe part of sp48[4]? */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0xA];                    /* maybe part of sp58[3]? */
    /* 0x66 */ s16 sp66;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x6];                    /* maybe part of sp6C[2]? */
    /* 0x76 */ s16 sp76;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_808573A4 {
    /* 0x00 */ char pad_0[0x3E];
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x2];
    /* 0x46 */ s16 sp46;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80857640 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808576BC {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808577E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80857950 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80857A44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80857AEC {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80857BE8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x18];                   /* maybe part of sp38[7]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x14];                   /* maybe part of sp54[6]? */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0xC];
    /* 0x7C */ s16 sp7C;                            /* inferred */
    /* 0x7E */ char pad_7E[0x2];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x2];
    /* 0x8E */ s16 sp8E;                            /* inferred */
    /* 0x90 */ s16 sp90;                            /* inferred */
    /* 0x92 */ s16 sp92;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ char pad_98[0x4];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ s32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x4];
    /* 0xC8 */ s16 spC8;                            /* inferred */
    /* 0xCA */ s16 spCA;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ char pad_D0[0x8];                    /* maybe part of spCC[3]? */
    /* 0xD8 */ s32 spD8;                            /* inferred */
    /* 0xDC */ s32 spDC;                            /* inferred */
    /* 0xE0 */ char pad_E0[0x2];
    /* 0xE2 */ s16 spE2;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80858C84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858CC8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80858D48 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80858DB4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858DDC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858DFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858E40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858E60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858E80 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858EA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858EC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858EFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858F1C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858F3C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858F5C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858F7C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858F9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858FBC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80858FE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859028 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859168 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808591BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859210 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859248 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085929C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859300 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80859414 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808594D0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ AnimationHeaderCommon *sp34;         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808595B8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085968C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859708 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085978C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859890 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80859990 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808599DC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80859A10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859A44 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80859AD0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80859AF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80859B28 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80859B54 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859BA8 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ char pad_8[0x18];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80859C60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859CA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859CE0 {};              /* size 0x0 */

struct _mips2c_stack_func_80859CFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859D44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859D70 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80859EBC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80859F4C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80859FCC {};              /* size 0x0 */

struct _mips2c_stack_func_80859FF4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A04C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x18];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8085A120 {};              /* size 0x0 */

struct _mips2c_stack_func_8085A144 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A19C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A1D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A24C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A2AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A330 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A364 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085A40C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A4A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A530 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8085A5DC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8085A66C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A6C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A710 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A768 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A7C0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8085A8C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085A940 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085AA10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085AA60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085AA84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085AACC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085AB58 {};              /* size 0x0 */

struct _mips2c_stack_func_8085ABA8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085AC9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085AD5C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085ADA0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ CsCmdActorAction *sp3C;              /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8085B08C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085B134 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ GlobalContext *sp1C;                 /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085B170 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085B1F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085B28C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085B384 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085B3E0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Player *sp1C;                        /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085B460 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8085B74C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ GlobalContext *sp1C;                 /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8085B820 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8085B854 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8085B930 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ LinkAnimationHeader *sp2C;           /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

? EffectSsBlast_SpawnWhiteShockwave(GlobalContext *, PosRot *, Vec3f *, Vec3f *); /* extern */
? EffectSsFhgFlash_SpawnShock(GlobalContext *, Actor *, f32 *, s16, s32); /* extern */
? EffectSsFireTail_SpawnFlameOnPlayer(f32, f32, GlobalContext *, f32, s16, f32); /* extern */
? EffectSsIcePiece_SpawnBurst(GlobalContext *, PosRot *, f32); /* extern */
? EffectSsStick_Spawn(GlobalContext *, void *, s16, Actor *); /* extern */
? Parameter_AddMagic(GlobalContext *, s16, SaveContext *); /* extern */
? func_800AEF44(void *);                            /* extern */
? func_800B648C(GlobalContext *, ?, ?, ?, PosRot *); /* extern */
s32 func_800B7118(Actor *, Actor *, GlobalContext *); /* extern */
s32 func_800B7128(Actor *, u16);                    /* extern */
? func_800B7170(GlobalContext *, Actor *);          /* extern */
? func_800B71DC(f32, f32, GlobalContext *, Actor *, Actor *, Actor *); /* extern */
s32 func_800B83F8(Actor *, Player *, s32, Player *); /* extern */
? func_800B90F4(GlobalContext *);                   /* extern */
? func_800BBAC0(s16 *, ?, ?, ?);                    /* extern */
? func_800C42A8(void *, void *, ? *, Actor *, void *); /* extern */
s32 func_800C4F84(f32, f32, CollisionContext *, ? *, PosRot *, f32, f32 *, s32 *, Player *); /* extern */
s32 func_800C5650(CollisionContext *, f32 *, ? *, f32 *, f32 *, CollisionPoly **, void *, s32, s32, s32 *, Actor *, Actor *, Actor *); /* extern */
s32 func_800C9C24(CollisionContext *, CollisionPoly *, u8, ?); /* extern */
s32 func_800C9D14(CollisionContext *, f32, s32);    /* extern */
s32 func_800C9DDC(CollisionContext *, CollisionPoly *, u8, Player *); /* extern */
? func_800DF840(Camera *, s16);                     /* extern */
s32 func_800DF86C(Camera *, ?);                     /* extern */
? func_800DFFAC(Camera *, Actor *, s8, ?, s32, s32, s32); /* extern */
? func_800E0238(Camera *);                          /* extern */
? func_800FAAB4(? *, s32);                          /* extern */
? func_800FD698(GlobalContext *, s16, s16, f32);    /* extern */
? func_80114CA0(GlobalContext *, s8);               /* extern */
s32 func_80115130(GlobalContext *);                 /* extern */
? func_801155B4(GlobalContext *, s16, s32, Player *); /* extern */
? func_80115764(GlobalContext *, ?);                /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
s32 func_80115DB4(GlobalContext *, u8, GlobalContext *, SaveContext *, ?); /* extern */
s32 func_801226E0(GlobalContext *, s8, s32, SaveContext *); /* extern */
? func_801229FC(Player *);                          /* extern */
? func_80122BA4(GlobalContext *, void *, ?, ?);     /* extern */
? func_80122C20(GlobalContext *, void *);           /* extern */
? func_80122D44(GlobalContext *, void *);           /* extern */
s32 func_80122ED8(s32);                             /* extern */
s32 func_80123420(Player *, Actor *, void (*)(Actor *, GlobalContext *)); /* extern */
s32 func_80123434(Player *, GlobalContext *);       /* extern */
s32 func_801234B0(Player *);                        /* extern */
s32 func_8012364C(GlobalContext *, Actor *, s32, s32); /* extern */
u8 func_80123960(GlobalContext *, s8);              /* extern */
? func_801239AC(Player *);                          /* extern */
? func_80123AA4(GlobalContext *, u8);               /* extern */
? func_80123BD4(GlobalContext *, u8);               /* extern */
? func_80123C58(GlobalContext *);                   /* extern */
? func_80123C90(GlobalContext *, Actor *, GameInfo **); /* extern */
? func_80123DC0(Player *);                          /* extern */
s32 func_80124020(Actor *);                         /* extern */
s32 func_801240DC(Actor *, Player *);               /* extern */
s32 func_80124110(Actor *, s8);                     /* extern */
s32 func_80124148(Actor *);                         /* extern */
s32 func_80124190(Actor *, Actor *, GlobalContext *); /* extern */
s32 func_801241B4(Player *, Player *, s32 (*)(Actor *, GlobalContext *)); /* extern */
s32 func_801241E0(Actor *, s8);                     /* extern */
s32 func_8012420C(Actor *);                         /* extern */
s32 func_80124258(Player *, Player *, GlobalContext *); /* extern */
s32 func_80124278(Actor *, s8);                     /* extern */
s32 func_801242B4(Player *, Player *, Player *, Player *); /* extern */
? func_80124420(Player *);                          /* extern */
? func_80124618(? *, f32, f32 *, f32 *);            /* extern */
? func_801246F4(s32, s32, u8, s32, s32, s32, s32, ? *, ? *, Actor *); /* extern */
? func_801253A4(GlobalContext *, Actor *);          /* extern */
? func_80165DCC(?);                                 /* extern */
? func_80165DF0();                                  /* extern */
? func_80169FDC(GlobalContext *);                   /* extern */
? func_8016A178(GlobalContext *, s8);               /* extern */
? func_8019C300(?);                                 /* extern */
? func_8019F638(Vec3f *, s32, f32, Actor *);        /* extern */
? func_8019F780(Vec3f *, s32, f32);                 /* extern */
? func_8019F830(void *, s32, Actor *, s32);         /* extern */
? func_8019FCB8(Vec3f *, ?, f32);                   /* extern */
? func_8019FD90(?, ?);                              /* extern */
? func_801A0184();                                  /* extern */
? func_801A01C4();                                  /* extern */
? func_801A3CF4(s8);                                /* extern */
? func_801A3E38(?);                                 /* extern */
? func_801A4058(?);                                 /* extern */
? func_801A41F8(?);                                 /* extern */
? func_801A75E8(s32);                               /* extern */
s32 func_8082DA90(GlobalContext *arg0, Actor *, void *, Player *); /* static */
void func_8082DABC(Actor *arg0, Actor *, s8);       /* static */
void func_8082DAD4(Actor *arg0, void *);            /* static */
s32 func_8082DAFC(GlobalContext *arg0, GlobalContext *, Player *); /* static */
void func_8082DB18(GlobalContext *arg0, Player *arg1, LinkAnimationHeader *arg2, GlobalContext *); /* static */
void func_8082DB3C(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, GlobalContext *); /* static */
void func_8082DB60(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, f32 *); /* static */
void func_8082DB90(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, f32 *); /* static */
void func_8082DBC0(GlobalContext *arg0, GlobalContext *arg1, AnimationHeaderCommon *arg2); /* static */
void func_8082DC28(Actor *arg0);                    /* static */
void func_8082DC38(Player *arg0, Actor *, GlobalContext *); /* static */
void func_8082DC64(GlobalContext *arg0, Player *arg1); /* static */
void func_8082DCA0(GlobalContext *arg0, Player *arg1, u8 *); /* static */
void func_8082DD2C(GlobalContext *arg0, Player *arg1, s32 *); /* static */
? func_8082DE14(GlobalContext *arg1, Player *, GlobalContext *, Actor *); /* static */
void func_8082DE50(GlobalContext *arg0, Player *arg1, GameInfo **); /* static */
s32 func_8082DE88(Actor *arg0, s32 arg1, s32 arg2); /* static */
void func_8082DF2C(GlobalContext *arg0);            /* static */
void func_8082DF48(Actor *arg0, Player *arg1, u8 arg2, u8 arg3, u8 arg4, s32 arg5); /* static */
void func_8082DF8C(Actor *arg0, u16 arg1, u16);     /* static */
void func_8082E00C(Actor *arg0);                    /* static */
s32 func_8082E078(Actor *arg0, s32 arg1);           /* static */
void func_8082E094(Actor *arg0, u16 arg1);          /* static */
s32 func_8082E0CC(Actor *arg0, s32 arg1, Actor *);  /* static */
void func_8082E0F4(Actor *arg0, u16 arg1);          /* static */
void func_8082E12C(Actor *arg0, f32 arg1);          /* static */
void func_8082E188(Actor *arg0, u16);               /* static */
void func_8082E1BC(Actor *arg0);                    /* static */
void func_8082E1F0(Actor *arg0, s32 arg1, u16);     /* static */
void func_8082E224(Actor *arg0, ? *arg1, SkelAnime *); /* static */
void func_8082E438(GlobalContext *arg0, Actor *arg1, AnimationHeaderCommon *arg2); /* static */
void func_8082E4A4(GlobalContext *arg0, Player *arg1, AnimationHeaderCommon *arg2); /* static */
void func_8082E514(GlobalContext *arg0, Player *arg1, LinkAnimationHeader *arg2); /* static */
void func_8082E55C(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, LinkAnimationHeader *); /* static */
void func_8082E5A8(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, GlobalContext *); /* static */
void func_8082E5EC(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2); /* static */
void func_8082E634(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, LinkAnimationHeader *); /* static */
s32 func_8082E67C(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2); /* static */
void func_8082E6D0(Actor *arg0);                    /* static */
void func_8082E6F8(Actor *arg0);                    /* static */
void func_8082E784(Actor *arg0, Actor *, AnimationHeaderCommon *, GlobalContext *); /* static */
void func_8082E794(Actor *arg0, Actor *, s32 *);    /* static */
void func_8082E820(Actor *arg0, s32 arg1);          /* static */
void func_8082E920(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
void func_8082E9C8(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, s32 arg3, f32 arg4); /* static */
void func_8082EA10(?);                              /* static */
void func_8082EA38(?);                              /* static */
void func_8082EA60();                               /* static */
void func_8082EA80(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, s32 arg3, f32 arg4); /* static */
void func_8082EAC8(?);                              /* static */
void func_8082EAF0(?);                              /* static */
void func_8082EB18(GlobalContext *, Actor *, s32 *); /* static */
void func_8082EB38(GlobalContext *arg0, Player *arg1); /* static */
void func_8082EC9C(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2); /* static */
s32 func_8082ECCC(Actor *arg0);                     /* static */
void func_8082ECE0(Player *arg0);                   /* static */
s32 *func_8082ED20(Actor *arg0, Actor *, LinkAnimationHeader *, GameInfo **); /* static */
s32 func_8082ED94(Player *arg0);                    /* static */
void func_8082EEA4(Player *arg1, s32);              /* static */
LinkAnimationHeader *func_8082EEE0(Player *arg0);   /* static */
s32 func_8082EF20(Actor *arg0, s32);                /* static */
s32 *func_8082EF54(Actor *arg0);                    /* static */
s32 *func_8082EF9C(Actor *arg0);                    /* static */
s32 *func_8082EFE4(Actor *arg0);                    /* static */
void func_8082F02C(GlobalContext *arg0, Color_RGB8 *arg1, f32 arg2); /* static */
void func_8082F09C(Actor *arg0, s32, s8);           /* static */
void func_8082F0E4(Actor *arg0, s32 arg1, s8 arg2, s32 arg3, ?); /* static */
void func_8082F164(Player *arg0, s32 arg1, Player *); /* static */
void func_8082F1AC(GlobalContext *arg0, Actor *arg1); /* static */
void func_8082F43C(GlobalContext *arg0, Actor *arg1, s32 (*arg2)(Actor *, GlobalContext *), Actor *); /* static */
void func_8082F470(GlobalContext *arg0, void *arg1); /* static */
s8 func_8082F524(Actor *arg0, s32 arg1, s32, s32);  /* static */
void func_8082F594(s32 arg0, ? arg1);               /* static */
void func_8082F5A4(s32 arg0, void *arg1);           /* static */
void func_8082F5C0(s32 arg0, void *arg1);           /* static */
void func_8082F5FC(Player *arg0, Actor *arg1);      /* static */
void func_8082F62C(GlobalContext *arg0, Player *arg1); /* static */
void func_8082F7F4(GlobalContext *arg0, Actor *arg1); /* static */
void func_8082F8A0(s32 arg0, void *arg1);           /* static */
void func_8082F8BC(GlobalContext *arg1, Player *arg2, s32); /* static */
void func_8082F938(Player *arg0, Actor *arg1, s32 arg2, s32 arg3, ?); /* static */
void func_8082FA5C(Player *arg0, Actor *arg1, s32 arg2); /* static */
s32 func_8082FB68(Player *arg0);                    /* static */
s32 func_8082FBE8(Player *arg0, s8, u32, Player *); /* static */
s32 func_8082FC24(Player *arg0);                    /* static */
void func_8082FC60(Actor *arg0);                    /* static */
s32 func_8082FC78(Actor *arg0, s32 arg1, s32);      /* static */
s32 func_8082FCC4(s32 arg1, s32 arg2, s32);         /* static */
s32 func_8082FD0C(s32 arg0, s32 arg1);              /* static */
s32 func_8082FDC4();                                /* static */
void func_8082FE0C(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_808302CC(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_808304BC(Actor *arg0, GlobalContext *arg1); /* static */
u16 func_808305BC(GlobalContext *arg0, Actor *arg1, s32 *arg2, s32 *arg3); /* static */
s32 func_808306F8(Actor *arg0, GlobalContext *arg1, s32 (*)(Actor *, GlobalContext *)); /* static */
void func_808308DC(GlobalContext *arg0, Actor *arg1, Actor *); /* static */
void func_808309CC(GlobalContext *arg0, Actor *arg1, Actor *); /* static */
AnimationHeaderCommon *func_80830A58(GlobalContext *arg0, Player *arg1); /* static */
void func_80830AE8(Actor *arg0);                    /* static */
void func_80830B38(Actor *arg0);                    /* static */
s32 func_80830B88(GlobalContext *arg0, Player *arg1, GlobalContext *); /* static */
void func_80830CE8(GlobalContext *arg1, Player *, Player *); /* static */
void func_80830D40(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80830DF0(Player *arg0, GlobalContext *);   /* static */
s32 func_80830E30(Actor *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
s32 func_80830F9C(GlobalContext *arg0, Actor *);    /* static */
s32 func_80830FD4(GlobalContext *arg0);             /* static */
s32 func_80831010(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
s32 func_80831094(Actor *arg0, GlobalContext *arg1, s32 (*)(Actor *, GlobalContext *), Player *); /* static */
s32 func_80831124(Actor *arg1, Player *);           /* static */
s32 func_80831194(GlobalContext *arg0, Player *arg1); /* static */
void func_8083133C(Player *arg0, s32, GlobalContext *, Player *); /* static */
s32 func_808313A8(GlobalContext *arg0, Player *arg1, Actor *arg2); /* static */
void func_808313F0(Player *arg0, GlobalContext *arg1); /* static */
void func_80831454(Actor *arg0);                    /* static */
s32 func_80831494(GlobalContext *arg0, Actor *arg1, void (*arg2)(Actor *, GlobalContext *), s32 arg3); /* static */
void func_8083172C(GlobalContext *arg1, Actor *, void (*)(Actor *, GlobalContext *), ?); /* static */
void func_80831760(GlobalContext *arg1, Player *, void (*)(Actor *, GlobalContext *), ?); /* static */
void func_808317C4(Player *arg0);                   /* static */
s32 func_80831814(Player *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_808318C0(GlobalContext *arg0);            /* static */
void func_80831944(GlobalContext *arg0, Actor *arg1); /* static */
? func_80831990(GlobalContext *, Actor *, s32, s32); /* static */
void func_80831F34(GlobalContext *arg0, Player *arg1, LinkAnimationHeader *arg2); /* static */
s32 func_80832090(Player *arg0);                    /* static */
s32 func_8083213C(Player *arg0);                    /* static */
s32 func_8083216C(Player *arg0, GlobalContext *arg1); /* static */
s32 func_808323C0(Actor *arg0, s16 arg1, Actor *);  /* static */
s32 func_80832444(Actor *arg0);                     /* static */
s32 func_8083249C(Actor *arg0);                     /* static */
void func_808324EC(GlobalContext *arg0, Actor *arg1, void (*arg2)(GlobalContext *, Actor *), s32 arg3); /* static */
void func_80832558(GlobalContext *, Actor *, void (*)(GlobalContext *, Actor *), Actor *); /* static */
void func_80832578(Player *arg0, GlobalContext *arg1); /* static */
s16 func_80832660(s16 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5); /* static */
s16 func_80832754(Actor *arg0, s32 arg1);           /* static */
void func_80832888(Player *arg0, GlobalContext *arg1); /* static */
s32 func_80832CAC(void *arg1, f32 *arg2, s16 *arg3, f32 arg4, s16 *, void *); /* static */
void func_80832F24(Actor *arg0);                    /* static */
s32 func_80832F78(s16 *arg0, f32 arg1, s16 *arg2, void *arg3, f32 *arg4); /* static */
s32 func_80833058(GlobalContext *arg0, Player *arg1, s8 *arg2, s8 *arg3, ?); /* static */
s32 func_808331FC(Player *arg0, s8 *arg1, SkelAnime *arg2, f32 arg3); /* static */
void func_808332A0(GlobalContext *arg0, Player *arg1, s32 arg2, s32 arg3); /* static */
s32 func_808333CC(Actor *arg0);                     /* static */
void func_808334D4(GlobalContext *arg0, Player *arg1); /* static */
void func_808335B0(GlobalContext *arg0, Actor *arg1, Actor *, GlobalContext *); /* static */
s8 func_808335F4(Player *arg0);                     /* static */
void func_80833728(Actor *arg0, s32 arg1, s32 arg2, s8 arg3); /* static */
void func_8083375C(Actor *arg0, s32 arg1);          /* static */
void func_80833864(GlobalContext *arg0, Actor *arg1, s32 arg2, ?); /* static */
void func_80833998(Actor *arg0, s8 arg1);           /* static */
void func_808339B4(Actor *arg0, s32 arg1, GameInfo **); /* static */
void func_808339D4(GlobalContext *arg0, Actor *arg1, s32 arg2, Player *); /* static */
void func_80833A64(Actor *arg0);                    /* static */
void func_80833AA0(Actor *arg0, GlobalContext *arg1, s16 *, void *); /* static */
void func_80833B18(GlobalContext *arg0, Actor *arg1, Actor *arg2, f32 arg3, f32 arg4, s16 arg5, s32 arg6); /* static */
s32 func_808340AC(u32 arg0, Player *, u8, u8);      /* static */
s32 func_808340D4(u32 arg0);                        /* static */
void func_80834104(GlobalContext *arg1, Actor *);   /* static */
void func_80834140(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2); /* static */
s32 func_808341F4(GlobalContext *arg0, Actor *arg1); /* static */
void func_808344C0(GlobalContext *arg0, Actor *arg1); /* static */
void func_80834534(GlobalContext *arg0, Actor *arg1, Actor *); /* static */
s32 func_8083456C(GlobalContext *arg1, Player *, Actor *); /* static */
void func_808345A8(Actor *arg0);                    /* static */
void func_808345C8();                               /* static */
s32 func_80834600(Player *arg0, GlobalContext *arg1); /* static */
void func_80834CD0(Actor *arg0, f32 arg1, u16 arg2, ?); /* static */
void func_80834D50(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, f32 arg3, u16 arg4, s32); /* static */
void func_80834DB8(LinkAnimationHeader *arg0, f32 arg1, GlobalContext *arg2, Actor *arg3, GlobalContext *); /* static */
? func_80834DFC(Player *arg0, GlobalContext *arg1); /* static */
void func_80835324(GlobalContext *arg0, Actor *arg1, f32 arg2, s16 arg3); /* static */
void func_808353DC(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80835428(GlobalContext *arg0, Actor *arg1); /* static */
void func_808354A4(GlobalContext *arg0, s32 arg1, s32 arg2, u32); /* static */
void func_808355D8(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, u32); /* static */
s32 func_8083562C(GlobalContext *arg0, Actor *arg1, CollisionPoly *arg2, s32 arg3); /* static */
void func_80835BC8(Actor *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 *); /* static */
void func_80835BF8(PosRot *arg0, s16 arg1, f32 arg2, Vec3f *arg3); /* static */
void func_80835C64(GlobalContext *arg0, Actor *arg1, Vec3f *arg2, Vec3f *arg3, s32 arg4); /* static */
void func_80835CD8(? *arg0, Actor *arg1, Vec3f *arg3, CollisionPoly **arg4, s32 *arg5, s32 *); /* static */
void func_80835D2C(GlobalContext *, Actor *, f32 *, ? *); /* static */
void func_80835D58(GlobalContext *arg0, Actor *arg1, ? *arg2, f32 *arg3, s32 *arg4, f32 *arg5); /* static */
s32 func_80835DF8(? *arg0, Actor *arg1, s32 *arg2, s32 *arg3); /* static */
void func_80835EAC(GlobalContext *arg0, Actor *arg1, Actor *arg2, Actor *); /* static */
void func_8083604C(GlobalContext *arg0, Actor *arg1, Actor *arg2, Actor *); /* static */
void func_80836258(GlobalContext *arg0, Actor *arg1, Actor *arg2, Actor *); /* static */
? func_808365DC(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80836888(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083692C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80836988(Player *arg0, GlobalContext *arg1, SkelAnime *); /* static */
void func_808369F4(Player *arg0, GlobalContext *arg1); /* static */
void func_80836A5C(Player *arg0, GlobalContext *, s16 *, ?); /* static */
void func_80836A98(Player *arg0, LinkAnimationHeader *arg1, GlobalContext *arg2, GlobalContext *); /* static */
void func_80836AD8(GlobalContext *arg1, Actor *);   /* static */
void func_80836B3C(GlobalContext *arg0, Actor *arg1, f32 arg2, Actor *); /* static */
void func_80836C70(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
void func_80836D8C(Actor *arg0, s16, void *);       /* static */
s32 func_80836DC0(GlobalContext *arg0, Actor *arg1); /* static */
void func_80836EA0(GlobalContext *arg0, s16 arg1, s16 arg2, s16 arg3); /* static */
s32 func_80836F10(GlobalContext *arg0, Actor *arg1, s16 *); /* static */
s32 func_808370D4(GlobalContext *arg1, Actor *);    /* static */
void func_80837134(GlobalContext *arg0, Actor *arg1, s16 *); /* static */
void func_808373A4(GlobalContext *arg1, LinkAnimationHeader *); /* static */
s32 func_808373F8(Actor *arg0, LinkAnimationHeader *arg1, u16 arg2); /* static */
s32 func_80837730(GlobalContext *arg0, Player *arg1, f32 arg2, s32 arg3, s32); /* static */
s32 func_8083784C(Player *arg0);                    /* static */
void func_808378FC(Actor *arg0, Player *arg1);      /* static */
s32 func_8083798C(Actor *arg0);                     /* static */
void func_808379C0(GlobalContext *arg0, Actor *arg1); /* static */
void func_80837B60(GlobalContext *arg0, Actor *arg1); /* static */
void func_80837BD0(GlobalContext *arg0, Actor *arg1); /* static */
void func_80837BF8(GlobalContext *arg0, Actor *arg1); /* static */
void func_80837C20(GlobalContext *arg0, Actor *arg1); /* static */
void func_80837C78(GlobalContext *arg0, Actor *arg1); /* static */
void func_80837CEC(GlobalContext *arg0, Actor *arg1, CollisionPoly *arg2, f32 arg3, LinkAnimationHeader *arg4); /* static */
s32 func_80837DEC(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_808381A0(Actor *arg0, LinkAnimationHeader *arg1, GlobalContext *arg2, LinkAnimationHeader *); /* static */
s32 func_808381F8(GlobalContext *arg0, Actor *arg1, void (*)(Actor *, GlobalContext *)); /* static */
void func_8083827C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083868C(GlobalContext *arg0, Actor *arg1); /* static */
void func_80838760(Actor *arg0, Actor *);           /* static */
s32 func_808387A0(GlobalContext *arg0, Actor *arg1); /* static */
void func_80838830(Player *arg0, s16 arg1, u8 *);   /* static */
void func_808388B8(GlobalContext *arg0, Player *arg1, s32 arg2); /* static */
void func_808389BC(GlobalContext *arg0, Player *arg1); /* static */
void func_80838A20(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80838A90(Actor *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
s32 func_808391D8(Player *arg0, GlobalContext *arg1, Vec3f *); /* static */
? func_80839518(Player *arg0, GlobalContext *arg1); /* static */
void func_808395F0(Actor *arg0, Actor *arg1, f32 arg3, f32 arg4, f32); /* static */
s32 func_808396B8(Actor *arg0, Actor *arg1);        /* static */
s32 func_80839770(Actor *arg0, Actor *arg1);        /* static */
s32 func_80839800(Actor *arg0, GlobalContext *arg1); /* static */
void func_80839860(Actor *arg0, GlobalContext *arg1, s8 arg2); /* static */
void func_80839978(GlobalContext *arg0, Actor *arg1, s32, s32); /* static */
void func_80839A10(GlobalContext *arg0, Actor *arg1, s32, s32); /* static */
s32 func_80839A84(GlobalContext *arg0, Actor *arg1); /* static */
? func_80839B18(Player *arg0, Actor *arg1);         /* static */
void func_80839CD8(Player *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80839E3C(Player *arg0, GlobalContext *arg1); /* static */
void func_80839E74(Actor *arg0, GlobalContext *arg1, Actor *, SkelAnime *); /* static */
void func_80839ED0(Player *arg0, GlobalContext *arg1); /* static */
s32 func_80839F98(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_8083A04C(Player *arg0);                   /* static */
? func_8083A0CC(void *arg0, ? arg1);                /* static */
s32 func_8083A114(Player *arg0, GlobalContext *arg1); /* static */
s32 func_8083A274(Player *arg0, GlobalContext *arg1); /* static */
s32 func_8083A4A4(Actor *arg0, f32 *arg1, s16 *arg2, f32 arg3, s16 *, ?); /* static */
void func_8083A548(Actor *arg0, Actor *, GlobalContext *); /* static */
s32 func_8083A580(Actor *arg0, GlobalContext *arg1); /* static */
? func_8083A658(GlobalContext *arg0, Player *arg1); /* static */
s32 func_8083A6C0(GlobalContext *arg0, Actor *arg1); /* static */
void func_8083A794(Player *arg0, GlobalContext *arg1); /* static */
void func_8083A844(Actor *arg0, s16 arg2, s16);     /* static */
s32 func_8083A878(GlobalContext *arg0, Actor *arg1, f32 arg2); /* static */
void func_8083A98C(void *arg0, GlobalContext *arg1); /* static */
void func_8083AD04(void *arg0, void *arg1);         /* static */
void func_8083AD8C(GlobalContext *arg0, Actor *arg1); /* static */
void func_8083ADB8(GlobalContext *arg1);            /* static */
void func_8083ADF0(void *arg1);                     /* static */
void func_8083AE38(void *arg1);                     /* static */
void func_8083AECC(Actor *arg0, s16 arg1, GlobalContext *arg2); /* static */
void func_8083AF30(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083AF8C(Actor *arg0, s16 arg1, GlobalContext *arg2); /* static */
void func_8083B030(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083B090(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083B0E4(GlobalContext *arg0, Actor *arg1, s16 arg2); /* static */
void func_8083B1A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083B23C(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_8083B29C(Actor *arg0, GlobalContext *);   /* static */
void func_8083B2E4(Actor *arg0, GlobalContext *);   /* static */
void func_8083B32C(GlobalContext *arg0, Player *arg1, f32 arg2); /* static */
s32 func_8083B3B4(GlobalContext *arg0, Actor *arg1, Input *arg2); /* static */
void func_8083B73C(GlobalContext *arg0, Actor *arg1, s16 arg2); /* static */
void func_8083B798(GlobalContext *arg0, GlobalContext *arg1, SkelAnime *); /* static */
void func_8083B850(GlobalContext *arg0, Player *arg1); /* static */
void func_8083B8D0(GlobalContext *arg1, Player *);  /* static */
void func_8083B930(GlobalContext *arg0, Player *arg1, s32 *); /* static */
void func_8083BB4C(GlobalContext *arg0, Actor *arg1); /* static */
void func_8083BF54(GlobalContext *arg0, Actor *arg1); /* static */
void func_8083C62C(Actor *arg0, s32 arg1);          /* static */
void func_8083C6E8(Actor *arg0, GlobalContext *arg1, u16, f32 *); /* static */
void func_8083C85C(Player *arg0);                   /* static */
void func_8083C8E8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083CB04(Player *arg0, f32 arg1, s16 arg2, f32 arg3, f32 arg4, s16 arg5); /* static */
void func_8083CB58(Player *arg1, s16 arg2, Player *, s16); /* static */
? func_8083CBC4(Player *arg0, f32 arg1, s16 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6); /* static */
? func_8083CCB4(Actor *arg0, GlobalContext *arg1);  /* static */
? func_8083CF68(GlobalContext *arg0, Player *arg1); /* static */
void func_8083D168(GlobalContext *arg0, Player *arg1, u8 *arg2); /* static */
s32 func_8083D23C(Player *arg0, GlobalContext *arg1); /* static */
void func_8083D6DC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8083D738(Player *arg0, Actor *arg1, u32, Player *); /* static */
? func_8083D78C(Player *arg0, GlobalContext *arg1); /* static */
s32 func_8083D860(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_8083DCC4(Actor *arg0, LinkAnimationHeader *arg1, GlobalContext *arg2); /* static */
? func_8083DD1C(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5); /* static */
void func_8083DEE4(GlobalContext *arg1, Player *);  /* static */
void func_8083DF38(Actor *arg0, LinkAnimationHeader *arg1, GlobalContext *arg2, Actor *); /* static */
? func_8083DFC4(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_8083E14C(GlobalContext *arg0, Player *arg1); /* static */
void func_8083E234(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083E28C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083E2F4(Actor *arg0, GlobalContext *);   /* static */
s32 func_8083E354(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8083E404(Actor *arg0, f32 arg1, s16 arg2, f32 *); /* static */
s32 func_8083E514(Actor *arg0, f32 *arg1, s16 *arg2, GlobalContext *arg3); /* static */
s32 func_8083E758(Player *arg0, f32 *arg1, s16 *arg2); /* static */
s32 func_8083E7F8(Actor *arg0, f32 *arg1, s16 *arg2, GlobalContext *arg3); /* static */
void func_8083E8E0(Actor *arg0, f32 arg1, s16 arg2); /* static */
void func_8083E958(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_8083E9C4(f32 arg0, f32 arg1, f32 arg2, f32 arg3); /* static */
void func_8083EA44(Actor *arg0, f32 arg1, f32, f32); /* static */
void func_8083EBD0(GlobalContext *arg0, Actor *arg1); /* static */
void func_8083EE60(Player *arg0, GlobalContext *arg1); /* static */
void func_8083F144(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8083F190(Player *arg0, f32 *arg1, s16 *arg2, Actor *arg3); /* static */
void func_8083F230(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083F27C(GlobalContext *arg0, Actor *arg1); /* static */
void func_8083F358(Player *arg0, s32 arg1, GlobalContext *arg2); /* static */
void func_8083F57C(Player *arg0, GlobalContext *arg1, GlobalContext *, void *, s32); /* static */
void func_8083F828(PosRot *arg0, ? *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
s32 func_8083F8A8(GameState *arg0, Actor *arg1, f32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7); /* static */
s32 func_8083FBC4(GlobalContext *arg0, GlobalContext *arg1, Actor *); /* static */
? func_8083FCF0(GlobalContext *arg1, Player *arg2, Actor *arg3, f32 arg4, f32); /* static */
? func_8083FD80(Player *arg0, GlobalContext *arg1); /* static */
s32 func_8083FE38(Actor *arg0, GlobalContext *arg1); /* static */
void func_8083FE90(GlobalContext *arg0, Player *arg1, u16 arg2); /* static */
void func_8083FEF4(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_8083FF30(GlobalContext *arg0, Actor *arg1); /* static */
? func_8083FFEC(GlobalContext *arg0, Actor *arg1);  /* static */
void func_80840094(GlobalContext *arg0, Actor *arg1); /* static */
void func_808400CC(GlobalContext *arg0, Player *arg1); /* static */
s32 func_808401F4(GlobalContext *arg0, Actor *arg1); /* static */
void func_80840770(GlobalContext *arg0, Actor *arg1, SkelAnime *); /* static */
void func_80840980(s32 arg1, ?);                    /* static */
void func_808409A8(GlobalContext *arg0, Player *arg1, f32 arg2, f32 arg3); /* static */
s32 func_80840A30(Actor *arg0, Actor *arg1, f32 *arg2, f32 arg3); /* static */
s32 func_80840CD4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80840DEC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80840E24(Actor *arg0, GlobalContext *arg1); /* static */
void func_80840E5C(Player *arg0, GlobalContext *arg1); /* static */
void func_80840EC0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80840F34(Actor *arg0);                    /* static */
s32 func_80840F90(GlobalContext *arg0, GlobalContext *arg1, void *arg2, Player *arg3, s16 arg4, s32 arg5); /* static */
s32 func_808411D4(GlobalContext *arg0, GlobalContext *arg1, Player **arg2, s32 arg3); /* static */
void func_808412A0(s32 arg0, void *arg1);           /* static */
void func_808412BC(GlobalContext *arg0, Actor *arg1); /* static */
void func_80841358(GlobalContext *arg0, Player *arg1, s32 arg2); /* static */
void func_80841408(GlobalContext *arg0, Actor *arg1); /* static */
void func_808414E0(GlobalContext *arg0, Actor *arg1); /* static */
void func_80841528(Actor *arg0, LinkAnimationHeader *arg1); /* static */
void func_808415A0(void *arg1);                     /* static */
void func_808415E4(void *arg1);                     /* static */
void func_80841624(GlobalContext *arg0, Actor *arg1); /* static */
void func_80841744(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_8084182C(Actor *arg0, GlobalContext *arg1, FlexSkeletonHeader *arg2); /* static */
void func_80841A50(GlobalContext *arg0, Actor *arg1); /* static */
void func_80841AC4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80842510(s16 *arg0);                      /* static */
void func_808425B4(Player *arg0);                   /* static */
void func_808426F0(GlobalContext *arg0, Player *arg1); /* static */
s32 func_808430E0(Player *arg0);                    /* static */
void func_80843178(GlobalContext *arg0, Player *arg1); /* static */
? func_80843EC0(GlobalContext *, Player *);         /* static */
void func_808442D8(GlobalContext *arg0, Actor *arg1); /* static */
void func_808445C4(GlobalContext *arg0, Actor *arg1); /* static */
void func_808446F4(GlobalContext *arg1, Player *);  /* static */
void func_80844784(GlobalContext *arg0, Actor *arg1); /* static */
void func_80844D80(GlobalContext *arg0, Player *arg1); /* static */
void func_80844EF8(Player *arg0, GlobalContext *arg1, Input *arg2); /* static */
void func_808460B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808463C0(void **arg0, Actor *arg1, s32 arg2, ? *arg3, ? *arg4); /* static */
void func_80846460(Actor *arg0);                    /* static */
void func_80846528(Actor *arg0, GlobalContext *arg1); /* static */
void func_808470D4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80847190(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
void func_8084748C(s16 *arg0, f32 *arg1, f32 arg2, s16 arg3); /* static */
void func_808475B4(s16 *arg0);                      /* static */
void func_808477D0(GlobalContext *arg0, Actor *arg1, Input *arg2, f32 arg3); /* static */
s32 func_80847880(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80847994(GlobalContext *arg0, Actor *arg1); /* static */
void func_808479F4(GlobalContext *arg0, Actor *arg1, f32 arg2); /* static */
void func_80847A50(Actor *arg0);                    /* static */
s32 func_80847A94(? *arg0, Actor *arg1, s32 arg2, f32 *arg3); /* static */
s32 func_80847BF0(Actor *arg0, ? *arg1);            /* static */
void func_80847E2C(Actor *arg0, f32 arg1, f32 arg2); /* static */
s32 func_80847ED4(Player *arg0);                    /* static */
void func_80847F1C(Player *arg0);                   /* static */
void func_80847FF8(f32 *arg0, s16 *arg2, s16 arg3, s16); /* static */
void func_80848048(GlobalContext *arg0, Actor *arg1); /* static */
? func_80848094(GlobalContext *arg0, Actor *arg1, f32 *arg2, s16 *arg3); /* static */
void func_808481CC(f32 *arg0, s16 *arg1, f32 arg2); /* static */
void func_80848250(GlobalContext *arg0, Actor *arg1, s32); /* static */
void func_80848294(GlobalContext *arg0, Actor *arg1, s32); /* static */
s32 func_808482E0(GlobalContext *arg0, Actor *arg1); /* static */
void func_808484CC(Actor *, ? *, Actor *);          /* static */
void func_808484F0(Player *arg0);                   /* static */
s32 func_80848570(Actor *arg0, GlobalContext *arg1); /* static */
void func_80848640(GlobalContext *arg0, Actor *arg1, Actor *, GlobalContext *); /* static */
s32 func_80848780(Player *arg0, GlobalContext *arg1); /* static */
? func_808487B8(Player *arg0, GlobalContext *arg1); /* static */
s32 func_80848808(Actor *arg0, GlobalContext *arg1); /* static */
? func_8084894C(Player *arg0, GlobalContext *arg1); /* static */
s32 func_80848A0C(Actor *arg0, GlobalContext *arg1); /* static */
? func_80848AB0(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_80848B6C(Player *arg0, Actor *arg1);       /* static */
s32 func_80848BF4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80848E4C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80849054(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808490B4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808491B4(Player *arg0, GlobalContext *arg1); /* static */
s32 func_8084923C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808492C4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8084933C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80849570(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80849620(Actor *arg0, GlobalContext *arg1); /* static */
void func_808496AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_808497A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80849A9C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80849DD0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80849FE0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084A26C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084A5C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084A794(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084A884(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084A8E8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084AB4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084AC84(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084AEEC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084AF9C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084B0EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084B288(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084B3B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084B4A8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084B5C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084BAA4(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084BBF0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084BC64(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084BE40(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084BF28(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084BFDC(Actor *arg0, GlobalContext *arg1); /* static */
? func_8084C124(GlobalContext *arg1, Player *);     /* static */
void func_8084C16C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084C6EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084C94C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084CA24(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084CB58(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084CCEC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084CE84(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084D18C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084D4EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084D770(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084D820(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084E034(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084E25C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084E334(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084E434(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084E4E4(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084E58C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084E65C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084E724(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084E980(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084ED9C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084EE50(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084EF9C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084F1B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084F3DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084F4E8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084FC0C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8084FD7C(GlobalContext *arg1, Actor *arg2, void *); /* static */
s32 func_8084FE48(Actor *arg0);                     /* static */
void func_8084FE7C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808505D0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80850734(GlobalContext *arg0, Player *arg1); /* static */
s32 func_80850854(GlobalContext *arg1, Actor *);    /* static */
void func_808508C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80850B18(Actor *arg0, GlobalContext *arg1); /* static */
void func_80850BA8(s16 *arg0);                      /* static */
void func_80850BF8(s16 *arg0, f32 arg1);            /* static */
void func_80850D20(GlobalContext *, s16 *);         /* static */
void func_80850D68(s16 *arg0, GlobalContext *arg1); /* static */
void func_808513EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80851588(Actor *arg0, GlobalContext *arg1); /* static */
void func_808516B4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808519FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80851B58(Actor *arg0, GlobalContext *arg1); /* static */
void func_80851BD4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80851C40(GlobalContext *arg0, Actor *arg1, GlobalContext *); /* static */
void func_80851D30(GlobalContext *arg0, Actor *arg1); /* static */
void func_80851EAC(Actor *arg0, GlobalContext *);   /* static */
void func_80851EC8(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80851F18(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_808521E0(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80852290(GlobalContext *arg0, Actor *arg1); /* static */
void func_8085255C(GlobalContext *arg1, Actor *, Actor *); /* static */
void func_808525C4(GlobalContext *arg0, Actor *arg1, Actor *); /* static */
void func_8085269C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80852B28(Actor *arg0, GlobalContext *arg1); /* static */
void func_80852C04(Actor *arg0, GlobalContext *arg1); /* static */
void func_80852FD4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808530E0(GlobalContext *arg0, Actor *arg1); /* static */
void func_80853194(Actor *arg0, GlobalContext *arg1); /* static */
void func_808534C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80853754(Actor *arg0, GlobalContext *arg1); /* static */
void func_80853850(Actor *arg0, GlobalContext *arg1); /* static */
void func_80853A5C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80853CC0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80853D68(Actor *arg0, GlobalContext *arg1); /* static */
void func_80854010(Actor *arg0, GlobalContext *arg1); /* static */
void func_808540A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80854118(Actor *arg0, GlobalContext *arg1); /* static */
void func_8085421C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8085437C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8085439C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80854430(Actor *arg0, GlobalContext *arg1); /* static */
void func_80854614(Actor *arg0, GlobalContext *arg1); /* static */
void func_808546D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80854800(Actor *arg0, GlobalContext *arg1); /* static */
void func_808548B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80854C70(Actor *arg0, GlobalContext *arg1); /* static */
void func_80854CD0(f32 arg0, u8 *arg2, u8 *arg3, u8 *arg4, void *arg5, void *arg6, void *arg7, void *arg8, void *arg9, void *argA, ? *argB, ? *argC, ? *); /* static */
void func_80854EFC(Actor *arg0, f32 arg1, s16 *arg2, void *); /* static */
void func_808550D0(Vec3f *arg1, f32 arg2, Actor *arg3, s32 arg4, s32); /* static */
void func_80855218(GlobalContext *arg0, Actor *arg1, ? **arg2); /* static */
void func_808553F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80855818(Actor *arg0, GlobalContext *arg1); /* static */
void func_80855A7C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80855AF4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80855B9C(Player *arg0, GlobalContext *arg1); /* static */
void func_80855C28(Actor *arg0, GlobalContext *arg1); /* static */
void func_80855E08(Actor *arg0, GlobalContext *arg1); /* static */
void func_80855F9C(f32 *arg0, s16 *arg1);           /* static */
void func_80856000(GlobalContext *arg0, f32 *arg1); /* static */
void func_80856074(GameState *arg0, Actor *arg1, Actor *); /* static */
void func_80856110(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg5, s16 arg6, s16 arg7); /* static */
void func_808561B0(Actor *arg0, GlobalContext *arg1); /* static */
void func_808566C0(GlobalContext *arg0, Actor *arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6); /* static */
void func_8085687C(Actor *arg0);                    /* static */
? func_80856888(f32 *arg0, f32 arg1, f32 arg2);     /* static */
void func_80856918(Actor *arg0, GlobalContext *arg1); /* static */
void func_808573A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80857640(Actor *arg0, Actor *arg1, s32 arg2); /* static */
void func_808576BC(GameState *arg0, Actor *arg1);   /* static */
void func_808577E0(Player *arg0);                   /* static */
s32 func_80857950(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80857A44(GlobalContext *arg0, Actor *arg1); /* static */
void func_80857AEC(GlobalContext *arg0, Player *arg1); /* static */
void func_80857BE8(Player *arg0, GlobalContext *arg1); /* static */
void func_80858C84(GlobalContext *arg0, Actor *arg1, AnimationHeaderCommon *arg2); /* static */
void func_80858CC8(GlobalContext *arg0, Actor *arg1, AnimationHeaderCommon *arg2); /* static */
void func_80858D48(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, Actor *); /* static */
void func_80858DB4(s32 arg0, Actor *arg1, ? arg2);  /* static */
void func_80858DDC();                               /* static */
void func_80858DFC(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2); /* static */
void func_80858E40(GlobalContext *, Player *, s32 *); /* static */
void func_80858E60();                               /* static */
void func_80858E80();                               /* static */
void func_80858EA0();                               /* static */
void func_80858EC0(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80858EFC();                               /* static */
void func_80858F1C();                               /* static */
void func_80858F3C();                               /* static */
void func_80858F5C();                               /* static */
void func_80858F7C();                               /* static */
void func_80858F9C();                               /* static */
void func_80858FBC(GlobalContext *arg0, Player *arg1, s32 arg2); /* static */
void func_80858FE8(Actor *arg0);                    /* static */
void func_80859028(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2); /* static */
void func_80859168(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2); /* static */
void func_808591BC(GlobalContext *arg0, Actor *arg1, s32 *arg2); /* static */
void func_80859210(GlobalContext *arg0, Actor *arg1, ? *arg2); /* static */
void func_80859248(Player *arg0);                   /* static */
void func_8085929C(GlobalContext *arg1, Actor *arg2, ?, GlobalContext *); /* static */
void func_80859300(GlobalContext *arg0, GlobalContext *arg1, ? arg2); /* static */
void func_80859414(GlobalContext *arg0, Player *arg1, ? arg2); /* static */
void func_808594D0(GlobalContext *arg0, Actor *arg1, ? arg2); /* static */
void func_808595B8(GlobalContext *arg0, Actor *arg1, ? arg2); /* static */
void func_8085968C(GlobalContext *arg0, Player *arg1, ? arg2); /* static */
void func_80859708(GlobalContext *arg0, void *arg1, ? arg2); /* static */
void func_8085978C(void *arg0, void *arg1, ? arg2); /* static */
void func_80859890(void *arg1, ? arg2);             /* static */
void func_80859990(s32 arg0, void *arg1, ? arg2);   /* static */
void func_808599DC(? arg2);                         /* static */
void func_80859A10(GlobalContext *arg0, Actor *arg1, ? arg2); /* static */
void func_80859A44(GlobalContext *arg0, Player *arg1, ? arg2); /* static */
void func_80859AD0();                               /* static */
void func_80859AF8(void *arg1);                     /* static */
void func_80859B28();                               /* static */
void func_80859B54(GlobalContext *arg1, ? arg2);    /* static */
void func_80859BA8(GlobalContext *arg0, Actor *arg1, void *arg2); /* static */
void func_80859C60(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
void func_80859CA0(Actor *arg1, Actor *arg2, s32, Actor *); /* static */
void func_80859CE0(GlobalContext *arg0, Actor *arg1, ? arg2); /* static */
void func_80859CFC(GlobalContext *arg0, Player *arg1, ? arg2); /* static */
void func_80859D44(GlobalContext *arg0, s32 arg1, ? arg2); /* static */
void func_80859D70(GlobalContext *arg0, Actor *arg1, ? arg2); /* static */
void func_80859EBC(GlobalContext *arg0, Player *arg1, s32 arg2); /* static */
void func_80859F4C(GlobalContext *arg0, Player *arg1, ? arg2); /* static */
void func_80859FCC(s32 arg0, void *arg1, ? arg2);   /* static */
void func_80859FF4(GlobalContext *arg0, void *arg1, ? arg2); /* static */
void func_8085A04C(GlobalContext *arg0, void *arg1, void *arg2); /* static */
void func_8085A120(s32 arg0, void *arg1, ? arg2);   /* static */
void func_8085A144(GlobalContext *arg0, void *arg1, ? arg2); /* static */
void func_8085A19C(GlobalContext *arg1, ? arg2);    /* static */
void func_8085A1D4(GlobalContext *arg0, void *arg1, ? arg2); /* static */
void func_8085A24C(GlobalContext *arg1, ? arg2);    /* static */
void func_8085A2AC(GlobalContext *arg0, Actor *arg1, ? arg2); /* static */
void func_8085A330(void *arg1, ? arg2);             /* static */
void func_8085A364(GlobalContext *arg0, Actor *arg1); /* static */
void func_8085A40C(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
void func_8085A4A4(GlobalContext *arg0, Player *arg1, ? arg2); /* static */
void func_8085A530(GlobalContext *arg0, s32 arg1, ? arg2); /* static */
void func_8085A5DC(GlobalContext *arg0, void *arg1, ? arg2); /* static */
void func_8085A66C(GlobalContext *arg0, Player *arg1, ? arg2); /* static */
void func_8085A6C0(GlobalContext *arg0, Player *arg1, s32 arg2); /* static */
void func_8085A710(GlobalContext *arg0, Player *arg1); /* static */
void func_8085A768(GlobalContext *arg0, Player *arg1, ? arg2); /* static */
void func_8085A7C0(GlobalContext *arg0, Actor *arg1, ? arg2); /* static */
void func_8085A8C4(void *arg0, void *arg1, ? arg2); /* static */
void func_8085A940(GlobalContext *arg0, void *arg1, ? arg2); /* static */
void func_8085AA10(GlobalContext *arg0, s32 arg1, ? arg2); /* static */
void func_8085AA60(? arg2);                         /* static */
void func_8085AA84(GlobalContext *arg0, void *arg1, ? arg2); /* static */
void func_8085AACC(GlobalContext *arg0, Player *arg1, s32 arg2, GlobalContext *); /* static */
void func_8085AB58(Actor *arg0, CsCmdActorAction *arg1); /* static */
void func_8085ABA8(Actor *arg0, CsCmdActorAction *arg1); /* static */
void func_8085AC9C(GlobalContext *arg1, Actor *arg3, CsCmdActorAction *, void *); /* static */
void func_8085AD5C(GlobalContext *arg2, Actor *, s32); /* static */
void func_8085ADA0(GlobalContext *arg0, Actor *arg1, ? arg2); /* static */
void func_8085B08C(Actor *arg0, GlobalContext *arg1); /* static */
? func_8085B134(GlobalContext *arg0);               /* static */
void func_8085B170(GlobalContext *arg0, Player *arg1); /* static */
? func_8085B1F0(GlobalContext *arg0, Player *arg1); /* static */
s32 func_8085B28C(GlobalContext *arg0, GlobalContext *arg1, s32 arg2, GlobalContext *); /* static */
void func_8085B384(Actor *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
s32 func_8085B3E0(GlobalContext *arg0, s8 arg1);    /* static */
void func_8085B460(GlobalContext *arg0, Actor *arg1, Player *); /* static */
void func_8085B74C(GlobalContext *arg0);            /* static */
void func_8085B820(void *arg0, s16 arg1);           /* static */
s32 func_8085B854(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
? func_8085B930(GlobalContext *arg0, Actor *arg1, s32 arg2); /* static */
extern ? D_0400CF48;
extern ? D_0400D028;
extern ? D_0400D030;
extern ? D_0400D090;
extern ? D_0400D0B8;
extern LinkAnimationHeader D_0400D0D0;
extern ? D_0400D108;
extern LinkAnimationHeader D_0400D420;
extern LinkAnimationHeader D_0400D4A8;
extern AnimationHeaderCommon D_0400D4B0;
extern AnimationHeaderCommon D_0400D4B8;
extern LinkAnimationHeader D_0400D4C0;
extern LinkAnimationHeader D_0400D4D8;
extern LinkAnimationHeader D_0400D4F0;
extern LinkAnimationHeader D_0400D4F8;
extern LinkAnimationHeader D_0400D5A8;
extern LinkAnimationHeader D_0400D5B0;
extern LinkAnimationHeader D_0400D8B0;
extern LinkAnimationHeader D_0400D9D8;
extern s32 D_0400DA60;
extern s32 D_0400DA68;
extern LinkAnimationHeader D_0400DAA0;
extern s32 D_0400DAD0;
extern LinkAnimationHeader D_0400DB68;
extern LinkAnimationHeader D_0400DC20;
extern LinkAnimationHeader D_0400DC28;
extern LinkAnimationHeader D_0400DC30;
extern AnimationHeaderCommon D_0400DC60;
extern s32 D_0400DC78;
extern LinkAnimationHeader D_0400DC80;
extern LinkAnimationHeader D_0400DC88;
extern LinkAnimationHeader D_0400DD10;
extern ? D_0400DD68;
extern LinkAnimationHeader D_0400DD70;
extern LinkAnimationHeader D_0400DD78;
extern LinkAnimationHeader D_0400DDF0;
extern ? D_0400DE48;
extern LinkAnimationHeader D_0400DE50;
extern LinkAnimationHeader D_0400DF98;
extern LinkAnimationHeader D_0400DFA8;
extern LinkAnimationHeader D_0400DFB0;
extern LinkAnimationHeader D_0400DFB8;
extern AnimationHeaderCommon D_0400DFC0;
extern s32 D_0400DFC8;
extern AnimationHeaderCommon D_0400DFD8;
extern AnimationHeaderCommon D_0400DFF0;
extern AnimationHeaderCommon D_0400E008;
extern LinkAnimationHeader D_0400E050;
extern LinkAnimationHeader D_0400E060;
extern LinkAnimationHeader D_0400E080;
extern LinkAnimationHeader D_0400E098;
extern ? D_0400E118;
extern s32 D_0400E260;
extern LinkAnimationHeader D_0400E278;
extern LinkAnimationHeader D_0400E298;
extern AnimationHeaderCommon D_0400E2A0;
extern AnimationHeaderCommon D_0400E2C8;
extern LinkAnimationHeader D_0400E2F0;
extern LinkAnimationHeader D_0400E2F8;
extern ? D_0400E330;
extern ? D_0400E348;
extern LinkAnimationHeader D_0400E3B0;
extern LinkAnimationHeader D_0400E3B8;
extern ? D_0400E430;
extern Gfx D_06008860;
extern ? D_0600BDD8;
extern ? D_0600C540;
extern ? D_060127B0;
extern void D_06013138;
extern ? D_060134D0;
extern void D_06014684;
extern FlexSkeletonHeader D_060177B8;
extern AnimationHeader D_060178D0;
extern s32 D_801BDA9C;
extern ? D_801BFE00;
extern ? D_801BFFB0;
extern ? D_801C03A0;
extern ? D_801C0490;
extern ? D_801C0850;
extern ? D_801C0860;
extern u8 D_801F4DE0;
extern ? func_801229EC;
extern ? func_80125D4C;
extern ? func_801262C8;
extern ? func_80128BD0;
static u8 D_8085B9F0[24] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0};
static u8 D_8085BA08[24] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
static u8 D_8085BA20[24] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0};
static ? D_8085BA38;                                /* unable to generate initializer */
static ? D_8085BE84;                                /* unable to generate initializer */
static ? D_8085BE9C;                                /* unable to generate initializer */
static ? D_8085BEB4;                                /* unable to generate initializer */
static ? D_8085BECC;                                /* unable to generate initializer */
static ? D_8085BEE4;                                /* unable to generate initializer */
static ? D_8085BEFC;                                /* unable to generate initializer */
static ? D_8085BF14;                                /* unable to generate initializer */
static ? D_8085BF44;                                /* unable to generate initializer */
static ? D_8085BF5C;                                /* unable to generate initializer */
static ? D_8085BF74;                                /* unable to generate initializer */
static ? D_8085BF8C;                                /* unable to generate initializer */
static ? D_8085BFA4;                                /* unable to generate initializer */
static ? D_8085BFBC;                                /* unable to generate initializer */
static ? D_8085BFD4;                                /* unable to generate initializer */
static ? D_8085BFEC;                                /* unable to generate initializer */
static ? D_8085C004;                                /* unable to generate initializer */
static ? D_8085C01C;                                /* unable to generate initializer */
static ? D_8085C034;                                /* unable to generate initializer */
static ? D_8085C04C;                                /* unable to generate initializer */
static ? D_8085C064;                                /* unable to generate initializer */
static ? D_8085C07C;                                /* unable to generate initializer */
static ? D_8085C094;                                /* unable to generate initializer */
static ? D_8085C0C4;                                /* unable to generate initializer */
static ? D_8085C0DC;                                /* unable to generate initializer */
static ? D_8085C0F4;                                /* unable to generate initializer */
static ? D_8085C10C;                                /* unable to generate initializer */
static ? D_8085C124;                                /* unable to generate initializer */
static ? D_8085C13C;                                /* unable to generate initializer */
static ? D_8085C154;                                /* unable to generate initializer */
static ? D_8085C16C;                                /* unable to generate initializer */
static ? D_8085C184;                                /* unable to generate initializer */
static ? D_8085C19C;                                /* unable to generate initializer */
static ? D_8085C1B4;                                /* unable to generate initializer */
static ? D_8085C1CC;                                /* unable to generate initializer */
static ? D_8085C1E4;                                /* unable to generate initializer */
static ? D_8085C1FC;                                /* unable to generate initializer */
static ? D_8085C214;                                /* unable to generate initializer */
static ? D_8085C22C;                                /* unable to generate initializer */
static ? D_8085C244;                                /* unable to generate initializer */
static ? D_8085C25C;                                /* unable to generate initializer */
static ? D_8085C274;                                /* unable to generate initializer */
static ? D_8085C28C;                                /* unable to generate initializer */
static ? D_8085C2A4;                                /* unable to generate initializer */
static ? D_8085C2A8;                                /* unable to generate initializer */
static ? D_8085C2AC;                                /* unable to generate initializer */
static ColliderCylinderInit D_8085C2EC = {
    {5, 0, 0x11, 0x39, 8, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0xC, 0x3C, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_8085C318 = {
    {9, 9, 0x15, 0, 8, 1},
    {2, {0x100000, 0, 2}, {0xD7CFFFFF, 0, 0}, 0, 1, 1},
    {0x19, 0x3C, 0, {0, 0, 0}},
};
static ColliderQuadInit D_8085C344 = {
    {0xA, 9, 0, 0, 8, 3},
    {2, {0, 0, 1}, {0xF7CFFFFF, 0, 0}, 1, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static ColliderQuadInit D_8085C394 = {
    {9, 9, 0x15, 0, 8, 3},
    {2, {0x100000, 0, 0}, {0xD7CFFFFF, 0, 0}, 1, 1, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static f32 D_8085C3E4 = 1.0f;
static f32 D_8085C3E8 = 1.0f;
static u16 D_8085C3EC[4] = {0x680F, 0x680E, 0x6811, 0x6808};
static ? D_8085C3F4;                                /* unable to generate initializer */
static s32 D_8085C84C = 0x400DF30;
static s32 D_8085C850[29] = {
    0x400DEE8,
    0x400DF40,
    0x400DEF8,
    0x400DF38,
    0x400DEF0,
    0x400DF38,
    0x400DEF0,
    0x400E100,
    0x400E0C0,
    0x400E100,
    0x400E0C0,
    0x400E100,
    0x400E0C0,
    0x400E0C8,
    0x400E0A0,
    0x400E0D0,
    0x400E0A8,
    0x400E0F0,
    0x400E0F0,
    0x400E0D8,
    0x400E0B0,
    0x400E0E0,
    0x400E0B8,
    0x400E0E8,
    0x400E0E8,
    0x400E0F8,
    0x400E0F8,
    0x400D0B0,
    0x400D0B0,
};
static ? D_8085C938;                                /* unable to generate initializer */
static ? D_8085C96C;                                /* unable to generate initializer */
static Color_RGB8 D_8085C98C[5] = {
    {0, 0, 0},
    {0xFF, 0xFF, 0x9B},
    {0x14, 0x14, 0x32},
    {0, 3, 0xAC},
    {0x13, 0x88, 0},
};
static ? D_8085C99C;                                /* unable to generate initializer */
static ? D_8085C9F0;                                /* unable to generate initializer */
static ? D_8085CB3C;                                /* unable to generate initializer */
static ? D_8085CC88;                                /* unable to generate initializer */
static ? D_8085CD00;                                /* unable to generate initializer */
static ? D_8085CD24;                                /* unable to generate initializer */
static ? D_8085CD30;                                /* unable to generate initializer */
static ? D_8085CE30;                                /* unable to generate initializer */
static ? D_8085CE60;                                /* unable to generate initializer */
static ? D_8085CF50;                                /* unable to generate initializer */
static ? D_8085CF58;                                /* unable to generate initializer */
static ? D_8085CF60;                                /* unable to generate initializer */
static ? D_8085CF68;                                /* unable to generate initializer */
static ? D_8085CF70;                                /* unable to generate initializer */
static ? D_8085CF78;                                /* unable to generate initializer */
static ? D_8085CF80;                                /* unable to generate initializer */
static ? D_8085CF84;                                /* unable to generate initializer */
static ? D_8085CF88;                                /* unable to generate initializer */
static u16 D_8085CFA8[3] = {0x4000, 2, 4};
static ? D_8085CFAE;                                /* unable to generate initializer */
static ? D_8085CFB8;                                /* unable to generate initializer */
static ? D_8085CFBC;                                /* unable to generate initializer */
static ? D_8085CFC4;                                /* unable to generate initializer */
static ? D_8085CFCC;                                /* unable to generate initializer */
static ? D_8085CFD4;                                /* unable to generate initializer */
static ? D_8085CFDC;                                /* unable to generate initializer */
static s8 D_8085CFE4[8] = {0xD, 2, 4, 9, 0xA, 0xB, 8, 0xF9};
static s8 D_8085CFEC[12] = {0xD, 1, 2, 5, 3, 4, 9, 0xA, 0xB, 7, 8, 0xFA};
static s8 D_8085CFF8[12] = {0xD, 1, 2, 3, 4, 9, 0xA, 0xB, 8, 7, 0xFA, 0};
static s8 D_8085D004[8] = {0xD, 2, 4, 9, 0xA, 0xB, 8, 0xF9};
static s8 D_8085D00C[12] = {0xD, 2, 4, 9, 0xA, 0xB, 0xC, 8, 0xF9, 0, 0, 0};
static s8 D_8085D018 = 0xF9;
static s8 D_8085D01C[12] = {0, 0xB, 1, 2, 3, 5, 4, 9, 8, 7, 0xFA, 0};
static s8 D_8085D028[12] = {0, 0xB, 1, 2, 3, 0xC, 5, 4, 9, 8, 7, 0xFA};
static s8 D_8085D034[16] = {0xD, 1, 2, 3, 0xC, 5, 4, 9, 0xA, 0xB, 8, 7, 0xFA, 0, 0, 0};
static s8 D_8085D044[4] = {0xA, 8, 0xF9, 0};
static s8 D_8085D048[8] = {0, 0xC, 5, 4, 0xF2, 0, 0, 0};
static s8 D_8085D050[4] = {0xD, 2, 0xFC, 0};
static ? D_8085D054;                                /* unable to generate initializer */
static ? D_8085D090;                                /* unable to generate initializer */
static ? D_8085D094;                                /* unable to generate initializer */
static ? D_8085D097;                                /* unable to generate initializer */
static ? D_8085D09C;                                /* unable to generate initializer */
static s32 *D_8085D0D4[4] = {(s32 *)0x400DCA0, (s32 *)0x400DC98, (s32 *)0x400DB00, (s32 *)0x400DAF8};
static s32 *D_8085D0E4[4] = {(s32 *)0x400DC90, (s32 *)0x400D418, (s32 *)0x400DAE8, (s32 *)0x400D3F0};
static s32 D_8085D0F4 = 0x20101;
static ? D_8085D0F8;                                /* unable to generate initializer */
static Vec3f D_8085D100 = {0.0f, 50.0f, 0.0f};
static Vec3f D_8085D10C;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D114 = 20.0f;
static ? D_8085D118;                                /* unable to generate initializer */
static ? D_8085D124;                                /* unable to generate initializer */
static Vec3f D_8085D130;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D134 = 0.0f;
static ? D_8085D13C;                                /* unable to generate initializer */
static Vec3f D_8085D148 = {0.0f, 50.0f, 0.0f};
static Vec3f D_8085D154 = {0.0f, 0.0f, 100.0f};
static ? D_8085D160;                                /* unable to generate initializer */
static ? D_8085D174;                                /* unable to generate initializer */
static ? D_8085D17C;                                /* unable to generate initializer */
static ? D_8085D190;                                /* unable to generate initializer */
static ? D_8085D1A4;                                /* unable to generate initializer */
static ? D_8085D1F8;                                /* unable to generate initializer */
static ? D_8085D200;                                /* unable to generate initializer */
static f32 D_8085D218[3] = {0.0f, 100.0f, 40.0f};
static ? D_8085D224;                                /* unable to generate initializer */
static ? D_8085D23C;                                /* unable to generate initializer */
static ? D_8085D252;                                /* unable to generate initializer */
static ? D_8085D25C;                                /* unable to generate initializer */
static ? D_8085D264;                                /* unable to generate initializer */
static Color_RGBA8 D_8085D26C = {0xFF, 0xFF, 0xFF, 0xFF};
static Vec3f D_8085D270 = {0.0f, 0.04f, 0.0f};
static Vec3f D_8085D27C;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D284 = 0.0f;
static Vec3f D_8085D288;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D28C = 0.0f;
static ? D_8085D294;                                /* unable to generate initializer */
static Vec3f D_8085D2A4 = {0.0f, 0.0f, 5.0f};
static ? D_8085D2B0;                                /* unable to generate initializer */
static Vec3f D_8085D2B4 = {-1.0f, 69.0f, 20.0f};
static InitChainEntry D_8085D2C0;                   /* unable to generate initializer */
static ? D_8085D2C4;                                /* unable to generate initializer */
static ? D_8085D2CC;                                /* unable to generate initializer */
static void D_8085D30C;                             /* unable to generate initializer */
static void D_8085D330;                             /* unable to generate initializer */
static s32 D_8085D338 = 0xF64;
static s32 D_8085D33C = 0x96;
static Vec3f D_8085D340 = {0.0f, 50.0f, 0.0f};
static ? D_8085D34C;                                /* unable to generate initializer */
static ? D_8085D354;                                /* unable to generate initializer */
static ? D_8085D358;                                /* unable to generate initializer */
static f32 D_8085D35C = 0.0f;
static f32 D_8085D360 = 0.0f;
static Vec3f D_8085D364 = {0.0f, 0.5f, 0.0f};
static Vec3f D_8085D370 = {0.0f, 0.5f, 0.0f};
static Color_RGBA8 D_8085D37C = {0xFF, 0xFF, 0x64, 0xFF};
static Color_RGBA8 D_8085D380 = {0xFF, 0x32, 0, 0};
static ? D_8085D384;                                /* unable to generate initializer */
static ? D_8085D3E0;                                /* unable to generate initializer */
static Color_RGBA8 D_8085D3F4 = {0x64, 0xFF, 0xFF, 0};
static Color_RGBA8 D_8085D3F8 = {0, 0x64, 0x64, 0};
static ? D_8085D3FC;                                /* unable to generate initializer */
static ? D_8085D404;                                /* unable to generate initializer */
static ? D_8085D410;                                /* unable to generate initializer */
static Vec3f D_8085D41C = {0.0f, 0.0f, -30.0f};
static ? D_8085D428;                                /* unable to generate initializer */
static ? D_8085D450;                                /* unable to generate initializer */
static ? D_8085D478;                                /* unable to generate initializer */
static ? D_8085D488;                                /* unable to generate initializer */
static ? D_8085D4B0;                                /* unable to generate initializer */
static ? D_8085D4E0;                                /* unable to generate initializer */
static ? D_8085D510;                                /* unable to generate initializer */
static ? D_8085D520;                                /* unable to generate initializer */
static ? D_8085D530;                                /* unable to generate initializer */
static ? D_8085D540;                                /* unable to generate initializer */
static ? *D_8085D550[3] = {&D_8085D488, &D_8085D4B0, &D_8085D4E0};
static ? *D_8085D55C[3] = {&D_8085D428, &D_8085D450, &D_8085D478};
static ? *D_8085D568[3] = {&D_8085D510, &D_8085D520, &D_8085D530};
static u32 D_8085D574[3] = {0x6009C48, 0x6009AB8, 0x6009DB8};
static Color_RGB8 D_8085D580 = {0xFF, 0xFF, 0xFF};
static Color_RGB8 D_8085D584 = {0x50, 0x50, 0xC8};
static ? D_8085D588;                                /* unable to generate initializer */
static ? D_8085D5A0;                                /* unable to generate initializer */
static ? D_8085D5B8;                                /* unable to generate initializer */
static Vec3f D_8085D5D0 = {0.0f, 0.0f, -30.0f};
static ? D_8085D5DC;                                /* unable to generate initializer */
static Actor D_8085D5E0;                            /* type too large by 320; unable to generate initializer */
static ? D_8085D5E4;                                /* unable to generate initializer */
static ? D_8085D5F0;                                /* unable to generate initializer */
static ? D_8085D5FA;                                /* unable to generate initializer */
static ? D_8085D604;                                /* unable to generate initializer */
static ? D_8085D60C;                                /* unable to generate initializer */
static ? D_8085D61C;                                /* unable to generate initializer */
static Vec3f D_8085D62C;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D630 = 0.0f;
static f32 D_8085D634 = 0.0f;
static Vec3f D_8085D638;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D640 = 0.0f;
static Vec3f D_8085D644;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D64C = 0.0f;
static ? D_8085D650;                                /* unable to generate initializer */
static ? D_8085D658;                                /* unable to generate initializer */
static f32 D_8085D660[3] = {0.0f, 26.800001f, -60.0f};
static ? D_8085D66C;                                /* unable to generate initializer */
static ? D_8085D674;                                /* unable to generate initializer */
static ? D_8085D67C;                                /* unable to generate initializer */
static ? D_8085D680;                                /* unable to generate initializer */
static ? D_8085D6A4;                                /* unable to generate initializer */
static ? D_8085D6D0;                                /* unable to generate initializer */
static ? D_8085D6DC;                                /* unable to generate initializer */
static ? D_8085D6E0;                                /* unable to generate initializer */
static ? D_8085D6E8;                                /* unable to generate initializer */
static ? D_8085D708;                                /* unable to generate initializer */
static ? D_8085D714;                                /* unable to generate initializer */
static ? D_8085D73C;                                /* unable to generate initializer */
static ? D_8085D74C;                                /* unable to generate initializer */
static ? D_8085D75C;                                /* unable to generate initializer */
static Vec3f D_8085D764;                            /* type too large by 3; unable to generate initializer */
static ? D_8085D76D;                                /* unable to generate initializer */
static Vec3f D_8085D770 = {0.0f, 0.0f, 2.0f};
static Vec3f D_8085D77C = {0.0f, 0.0f, -0.2f};
static Color_RGBA8 D_8085D788 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_8085D78C[2] = {{0xFF, 0xFF, 0xFF, 0xFF}, {1, 3, 2, 4}}; /* extra bytes: 2 */
static ? D_8085D797;                                /* unable to generate initializer */
static ? D_8085D798;                                /* unable to generate initializer */
static Vec3f D_8085D7EC = {0.0f, 0.0f, 5.0f};
static ? D_8085D7F8;                                /* unable to generate initializer */
static f32 D_8085D800 = 30.0f;
static ? D_8085D804;                                /* unable to generate initializer */
static ? D_8085D80C;                                /* unable to generate initializer */
static ? D_8085D838;                                /* unable to generate initializer */
static ? D_8085D840;                                /* unable to generate initializer */
static ? D_8085D844;                                /* unable to generate initializer */
static ? D_8085D848;                                /* unable to generate initializer */
static ? D_8085D8F0;                                /* unable to generate initializer */
static ? D_8085D904;                                /* unable to generate initializer */
static ? D_8085D908;                                /* unable to generate initializer */
static ? D_8085D910;                                /* unable to generate initializer */
static Vec3f D_8085D918;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D91C = 0.5f;
static Vec3f D_8085D924;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D928 = 0.5f;
static Color_RGBA8 D_8085D930 = {0xFF, 0xFF, 0x37, 0xFF};
static Color_RGBA8 D_8085D934 = {0x64, 0x32, 0, 0};
static s32 D_8085D938 = 0xFFC8C800;
static s32 D_8085D93C = 0xFFFF0000;
static Vec3f D_8085D940;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D948 = 0.0f;
static Vec3f D_8085D94C;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D954 = 0.0f;
static ? D_8085D958;                                /* unable to generate initializer */
static Vec3f D_8085D960 = {-30.0f, 50.0f, 0.0f};
static Vec3f D_8085D96C = {30.0f, 50.0f, 0.0f};
static f32 D_8085D978[3] = {-30.0f, 60.0f, 0.0f};
static f32 D_8085D984[3] = {30.0f, 60.0f, 0.0f};
static ? D_8085D990;                                /* unable to generate initializer */
static ? D_8085DA08;                                /* unable to generate initializer */
static ? D_8085DA14;                                /* unable to generate initializer */
static ? D_8085DA38;                                /* unable to generate initializer */
static ? D_8085DA48;                                /* unable to generate initializer */
static ? D_8085DA7C;                                /* unable to generate initializer */
static ? D_8085DA84;                                /* unable to generate initializer */
static ? D_8085DA88;                                /* unable to generate initializer */
static ? D_8085DA8C;                                /* unable to generate initializer */
static ? D_8085DA90;                                /* unable to generate initializer */
static ? D_8085DA94;                                /* unable to generate initializer */
static ? D_8085DEF4;                                /* unable to generate initializer */
static ? D_8085E354;                                /* unable to generate initializer */
static ? D_8085E368;                                /* unable to generate initializer */
static Color_RGBA8 D_8085E3A4 = {0xFF, 0xFF, 0xFF, 0};
static Color_RGBA8 D_8085E3A8 = {0, 0x80, 0x80, 0};
static Vec3f D_80862AF0;                            /* type too large by 8 */
static f32 D_80862AF4;
static f32 D_80862AF8;
static f32 D_80862AFC;
static s16 D_80862B00;
static s16 D_80862B02;
static s32 D_80862B04;
static u32 D_80862B08;
static u32 D_80862B0C;
static u32 D_80862B10;
static s16 D_80862B14;
static s16 D_80862B16;
static f32 D_80862B18;
static s32 D_80862B1C;
static s32 D_80862B20;
static s32 D_80862B24;
static s16 D_80862B28;
static s32 D_80862B2C;
static f32 D_80862B30;
static f32 D_80862B3C;
static u32 D_80862B40;
static Input *D_80862B44;
static s32 D_80862B48;
static s32 D_80862B4C;
static ? D_80862B50;
static s32 D_80862B6C;
static GlobalContext *D_8085E3B4 = (GlobalContext *)0x3F2AAAAB; /* const */
static GlobalContext *D_8085E3B8 = (GlobalContext *)0x3F2AAAAB; /* const */

s32 func_8082DA90(GlobalContext *arg0) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->sceneLoadFlag != 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        phi_v0 = arg0->unk_18B4A != 0;
    }
    return phi_v0;
}

void func_8082DABC(Actor *arg0) {
    arg0->unk_AD0 = 0.0f;
    arg0->speedXZ = 0.0f;
}

void func_8082DAD4(Actor *arg0) {
    func_8082DABC(arg0);
    arg0->unk_AA5 = 0;
}

s32 func_8082DAFC(GlobalContext *arg0) {
    return (arg0->actorCtx.actorList[2].first->unk_4 & 0x100) == 0x100;
}

void func_8082DB18(GlobalContext *arg0, Player *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnimDefaultStop(arg0, arg1 + 0x240, arg2);
}

void func_8082DB3C(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnimDefaultRepeat(arg0, arg1 + 0x240, arg2);
}

void func_8082DB60(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnimPlaybackRepeat(arg0, arg1 + 0x240, arg2, 0.6666667f);
}

void func_8082DB90(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnimPlaybackStop(arg0, arg1 + 0x240, arg2, 0.6666667f);
}

void func_8082DBC0(GlobalContext *arg0, GlobalContext *arg1, AnimationHeaderCommon *arg2) {
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) arg2, -0.6666667f, (f32) SkelAnime_GetFrameCount(arg2), 0.0f, (u8) 2, 0.0f);
}

void func_8082DC28(Actor *arg0) {
    arg0->unk_260->unk_8 = 0;
}

void func_8082DC38(Player *arg0) {
    arg0->stateFlags2 &= 0xFFFDFFFF;
    arg0->swordState = 0;
    arg0->swordInfo[2].active = 0;
    arg0->swordInfo[1].active = 0;
    arg0->swordInfo[0].active = 0;
}

void func_8082DC64(GlobalContext *arg0, Player *arg1) {
    s16 temp_v0;

    temp_v0 = arg1->unk_3BC;
    if ((temp_v0 != -1) && ((arg0 + (temp_v0 * 4))->unk_800 != 0)) {
        arg1->unk_3BC = -1;
    }
    arg1->stateFlags2 &= -0xC01;
}

void func_8082DCA0(GlobalContext *arg0, Player *arg1) {
    Actor *sp24;
    Actor *temp_v1;

    temp_v1 = arg1->leftHandActor;
    if (temp_v1 != 0) {
        sp24 = temp_v1;
        if (func_801240C8(arg1) == 0) {
            arg1->actor.child = NULL;
            arg1->leftHandActor = NULL;
            arg1->unk_388 = NULL;
            temp_v1->parent = NULL;
            arg1->stateFlags1 &= -0x801;
        }
    }
    if (func_80124258(arg1) >= 0) {
        func_8082F8BC(arg0, arg1, 0);
        arg1->heldItemId = 0xFE;
    }
}

void func_8082DD2C(GlobalContext *arg0, Player *arg1) {
    s32 temp_v0;

    temp_v0 = arg1->stateFlags1;
    if (((temp_v0 & 0x800) != 0) && (arg1->leftHandActor == 0)) {
        if (arg1->unk_388 != 0) {
            if (arg1->unk_384 == 0) {
                arg1->stateFlags1 = temp_v0 & ~0x800;
                arg1->unk_388 = NULL;
            }
        } else {
            arg1->stateFlags1 = temp_v0 & ~0x800;
        }
    }
    func_8082DC38(arg1);
    arg1->unk_AA5 = 0;
    func_8082DC64(arg0, arg1);
    func_800E0238(Play_GetCamera(arg0, 0));
    arg1->stateFlags1 &= 0xFFCF9FFB;
    arg1->stateFlags2 &= -0x91;
    arg1->unk_ADD = 0;
    arg1->unk_ADC = 0;
    arg1->actor.shape.rot.x = 0;
    arg1->actor.shape.rot.z = 0;
    arg1->unk_ABC = 0.0f;
    arg1->unk_AC0 = 0.0f;
}

? func_8082DE14(GlobalContext *arg1) {
    ? phi_v0;

    phi_v0 = 0;
    if ((s32) arg1->unk_147 >= 2) {
        func_80831990((GlobalContext *)0xFF);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_8082DE50(GlobalContext *arg0, Player *arg1) {
    func_8082DD2C(arg0, arg1);
    func_8082DCA0(arg0, arg1);
}

s32 func_8082DE88(Actor *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk_D64 - D_80862B00;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    } else {
        phi_v1 = (s32) temp_v0;
    }
    arg0->unk_AE8 = (s16) (arg0->unk_AE8 + arg1 + (s32) ((f32) phi_v1 * fabsf(D_80862AFC) * 0.0000025415802f));
    if ((D_80862B44->press.button & 0xC000) != 0) {
        arg0->unk_AE8 = (s16) (arg0->unk_AE8 + 5);
    }
    return ((s32) arg0->unk_AE8 < arg2) ^ 1;
}

void func_8082DF2C(GlobalContext *arg0) {
    if (arg0->actorCtx.unk_0 == 0) {
        arg0->actorCtx.unk_0 = 1;
    }
}

void func_8082DF48(Actor *arg0, Player *arg1, u8 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg1 == arg0->unk_1CCC) {
        func_8013ECE0((f32) arg5, arg2, arg3, arg4);
    }
}

void func_8082DF8C(Actor *arg0, u16 arg1) {
    s32 temp_a3;
    u8 temp_v0;
    u16 phi_v0;

    temp_a3 = arg1 & 0xFFFF;
    temp_v0 = arg0->unk_153;
    if (temp_v0 == 0x14) {
        func_8019F830(arg0 + 0xEC, temp_a3 & 0xFFFF, arg0, temp_a3);
        return;
    }
    if (arg0->id == 0) {
        if (temp_v0 == 0x13) {
            phi_v0 = 0xE0U;
        } else {
            phi_v0 = arg0->unk_A68->unk_92;
        }
        func_800B8E58(arg0, (phi_v0 + temp_a3) & 0xFFFF);
    }
}

void func_8082E00C(Actor *arg0) {
    s32 temp_s1;
    u16 *phi_s0;
    s32 phi_s1;

    phi_s0 = D_8085C3EC;
    phi_s1 = 0;
    do {
        func_801A75E8((*phi_s0 + arg0->unk_A68->unk_92) & 0xFFFF);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
}

s32 func_8082E078(Actor *arg0, s32 arg1) {
    return ((arg1 & 0xFFFF) + arg0->unk_B72) & 0xFFFF;
}

void func_8082E094(Actor *arg0, u16 arg1) {
    func_800B8E58(arg0, func_8082E078(arg0, arg1 & 0xFFFF) & 0xFFFF);
}

s32 func_8082E0CC(Actor *arg0, s32 arg1) {
    return ((arg1 & 0xFFFF) + arg0->unk_B72 + arg0->unk_A68->unk_94) & 0xFFFF;
}

void func_8082E0F4(Actor *arg0, u16 arg1) {
    func_800B8E58(arg0, func_8082E0CC(arg0, arg1 & 0xFFFF) & 0xFFFF);
}

void func_8082E12C(Actor *arg0, f32 arg1) {
    Actor *temp_a0;
    Actor *temp_a3;
    Actor *phi_a3;
    s32 phi_v1;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    phi_a3 = temp_a3;
    if (temp_a3->unk_153 == 0x14) {
        phi_v1 = 0x8CE;
    } else {
        arg0 = temp_a3;
        phi_a3 = arg0;
        phi_v1 = func_8082E0CC(temp_a0, 0x800, temp_a3);
    }
    func_8019F638(phi_a3 + 0xEC, phi_v1 & 0xFFFF, arg1, phi_a3);
}

void func_8082E188(Actor *arg0) {
    func_800B8E58(arg0, func_8082E0CC(arg0, 0x810) & 0xFFFF);
}

void func_8082E1BC(Actor *arg0) {
    func_800B8E58(arg0, func_8082E0CC(arg0, 0x820) & 0xFFFF);
}

void func_8082E1F0(Actor *arg0, s32 arg1) {
    func_800B8E58(arg0, arg1 & 0xFFFF);
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 8);
}

void func_8082E224(Actor *arg0, ? *arg1) {
    s16 temp_v0;
    s32 temp_v0_2;
    ? *phi_s2;
    s16 phi_s0;

    phi_s2 = arg1;
    do {
        temp_v0 = phi_s2->unk_2;
        phi_s0 = temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_s0 = (s16) -(s32) temp_v0;
        }
        temp_v0_2 = phi_s0 & 0x7800;
        if (func_80136A48(arg0 + 0x240, fabsf((f32) (phi_s0 & 0x7FF))) != 0) {
            if (temp_v0_2 == 0x800) {
                func_800B8E58(arg0, phi_s2->unk_0);
            } else if (temp_v0_2 == 0x1000) {
                func_8082E094(arg0, phi_s2->unk_0);
            } else if (temp_v0_2 == 0x1800) {
                func_8082E0F4(arg0, phi_s2->unk_0);
            } else if (temp_v0_2 == 0x2000) {
                func_8082DF8C(arg0, phi_s2->unk_0);
            } else if (temp_v0_2 == 0x2800) {
                func_8082E1BC(arg0);
            } else if (temp_v0_2 == 0x3000) {
                func_8082E12C(arg0, 6.0f);
            } else if (temp_v0_2 == 0x3800) {
                func_8082E188(arg0);
            } else if (temp_v0_2 == 0x4000) {
                func_8082E12C(arg0, 0.0f);
            } else if (temp_v0_2 == 0x4800) {
                func_8019F638(&arg0->projectedPos, (arg0->unk_A68->unk_94 + 0x80A) & 0xFFFF, 0.0f);
            } else if (temp_v0_2 == 0x5000) {
                func_800B8E58(arg0, (phi_s2->unk_0 + arg0->unk_A68->unk_94) & 0xFFFF);
            }
        }
        phi_s2 += 4;
    } while ((((s32) phi_s2->unk_2 < 0) ^ 1) != 0);
}

void func_8082E438(GlobalContext *arg0, Actor *arg1, AnimationHeaderCommon *arg2) {
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) arg2, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(arg2), (u8) 2, -6.0f);
}

void func_8082E4A4(GlobalContext *arg0, Player *arg1, AnimationHeaderCommon *arg2) {
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) arg2, 0.6666667f, 0.0f, (f32) SkelAnime_GetFrameCount(arg2), (u8) 2, -6.0f);
}

void func_8082E514(GlobalContext *arg0, Player *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, arg2, 1.0f, 0.0f, 0.0f, (u8) 0, -6.0f);
}

void func_8082E55C(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, arg2, 0.6666667f, 0.0f, 0.0f, (u8) 0, -6.0f);
}

void func_8082E5A8(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, arg2, 1.0f, 0.0f, 0.0f, (u8) 2, 0.0f);
}

void func_8082E5EC(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, arg2, 0.6666667f, 0.0f, 0.0f, (u8) 2, 0.0f);
}

void func_8082E634(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, arg2, 1.0f, 0.0f, 0.0f, (u8) 0, -16.0f);
}

s32 func_8082E67C(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    if (func_801360E0(arg0, arg1 + 0x240) != 0) {
        func_8082DB3C(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}

void func_8082E6D0(Actor *arg0) {
    arg0->unk_278 = (unaligned s32) arg0->unk_27E;
    arg0->unk_276 = (s16) arg0->shape.rot.y;
    arg0->unk_27C = (u16) arg0->unk_282;
}

void func_8082E6F8(Actor *arg0) {
    void *temp_v0;

    func_8082E6D0();
    temp_v0 = arg0->unk_A68;
    arg0->unk_278 = (s16) (s32) ((f32) arg0->unk_278 * temp_v0->unk_8);
    arg0->unk_27A = (s16) (s32) ((f32) arg0->unk_27A * temp_v0->unk_8);
    arg0->unk_27C = (s16) (s32) ((f32) arg0->unk_27C * temp_v0->unk_8);
}

void func_8082E784(Actor *arg0) {
    arg0->unk_260->unk_8 = 0;
}

void func_8082E794(Actor *arg0) {
    Actor *temp_a0;
    u8 temp_v0;

    if (arg0->unk_275 != 0) {
        func_8082DC28();
        temp_a0 = arg0;
        temp_a0->unk_260->unk_0 = (s16) temp_a0->unk_27E;
        temp_a0->unk_260->unk_4 = (s16) temp_a0->unk_282;
        temp_v0 = temp_a0->unk_275;
        if ((temp_v0 & 8) != 0) {
            if ((temp_v0 & 2) != 0) {
                temp_a0->unk_260->unk_2 = (s16) temp_a0->unk_27A;
            }
        } else {
            temp_a0->unk_260->unk_2 = (s16) temp_a0->unk_280;
        }
        arg0 = temp_a0;
        func_8082E6D0(temp_a0);
        arg0->unk_275 = 0U;
    }
}

void func_8082E820(Actor *arg0, s32 arg1) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    SkelAnime *temp_a0;
    f32 temp_f18;
    f32 temp_f8;
    s16 temp_a2;

    temp_a2 = arg0->shape.rot.y;
    arg0->unk_278 = (unaligned s32) arg0->unk_27E;
    arg0->unk_275 = (s8) arg1;
    temp_a0 = arg0 + 0x240;
    arg0->unk_27C = (u16) arg0->unk_282;
    arg0 = arg0;
    func_80137748(temp_a0, (Vec3f *) &sp1C, temp_a2);
    if ((arg1 & 1) != 0) {
        temp_f8 = sp1C * arg0->unk_A68->unk_8;
        sp1C = temp_f8;
        temp_f18 = sp24 * arg0->unk_A68->unk_8;
        sp24 = temp_f18;
        arg0->world.pos.x += temp_f8 * arg0->scale.x;
        arg0->world.pos.z += temp_f18 * arg0->scale.z;
    }
    if ((arg1 & 2) != 0) {
        if ((arg1 & 4) == 0) {
            sp20 *= arg0->unk_A68->unk_8;
        }
        arg0->world.pos.y += sp20 * arg0->scale.y;
    }
    func_8082DC28(arg0);
}

void func_8082E920(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    void *temp_t9;

    if ((arg2 & 0x200) != 0) {
        func_8082E6F8(arg1);
    } else if (((arg2 & 0x100) != 0) || (arg1->unk_275 != 0)) {
        func_8082E6D0(arg1);
    } else {
        temp_t9 = arg1->unk_260;
        arg1->unk_278 = (unaligned s32) temp_t9->unk_0;
        arg1->unk_276 = (s16) arg1->shape.rot.y;
        arg1->unk_27C = (u16) temp_t9->unk_4;
    }
    arg1->unk_275 = (s8) arg2;
    func_8082DABC(arg1, arg1, (s8) arg2);
    func_801358F4(arg0);
}

void func_8082E9C8(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, s32 arg3, f32 arg4) {
    SkelAnime_ChangeLinkAnimPlaybackStop(arg0, arg1 + 0x240, arg2, arg4);
    func_8082E920(arg0, arg1, arg3);
}

void func_8082EA10(void) {
    func_8082E9C8((GlobalContext *)0x3F800000);
}

void func_8082EA38(void) {
    func_8082E9C8((GlobalContext *)0x3F2AAAAB);
}

void func_8082EA60(void) {
    func_8082EA38(0x20C);
}

void func_8082EA80(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, s32 arg3, f32 arg4) {
    SkelAnime_ChangeLinkAnimPlaybackRepeat(arg0, arg1 + 0x240, arg2, arg4);
    func_8082E920(arg0, arg1, arg3);
}

void func_8082EAC8(void) {
    func_8082EA80((GlobalContext *)0x3F800000);
}

void func_8082EAF0(void) {
    func_8082EA80((GlobalContext *)0x3F2AAAAB);
}

void func_8082EB18(void) {
    func_8082EAF0(0x1C);
}

void func_8082EB38(GlobalContext *arg0, Player *arg1) {
    s8 phi_v1;
    s8 phi_v0;

    arg1->unk_D60 = D_80862AFC;
    arg1->unk_D64 = D_80862B00;
    arg1 = arg1;
    func_800FF3A0(&D_80862AFC, &D_80862B00, D_80862B44);
    if (D_80862AFC < 8.0f) {
        D_80862AFC = 0.0f;
    }
    arg1 = arg1;
    D_80862B02 = func_800DFC68((arg0 + (arg0->activeCamera * 4))->unk_800) + D_80862B00;
    arg1->unk_ADE = (u8) ((s32) (arg1->unk_ADE + 1) % 4);
    phi_v0 = -1;
    if (D_80862AFC < 55.0f) {
        phi_v1 = -1;
    } else {
        phi_v1 = (s8) ((s32) ((D_80862B00 + 0x2000) & 0xFFFF) >> 9);
        phi_v0 = (s8) ((s32) (((s16) (D_80862B02 - arg1->actor.shape.rot.y) + 0x2000) & 0xFFFF) >> 0xE);
    }
    (arg1 + arg1->unk_ADE)->unk_ADF = phi_v1;
    (arg1 + arg1->unk_ADE)->unk_AE3 = phi_v0;
}

void func_8082EC9C(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    SkelAnime_ChangeLinkAnimPlaybackStop(arg0, arg1 + 0x240, arg2, D_8085C3E4);
}

s32 func_8082ECCC(Actor *arg0) {
    return arg0->unk_A6C & 0x1000000;
}

void func_8082ECE0(Player *arg0) {
    s8 temp_v1;

    temp_v1 = ((arg0->unk_384 * 6) - 6 + &D_8085C3F4)->unk_2;
    if ((s32) temp_v1 < 0) {
        arg0->unk_B2A = (s8) -(s32) temp_v1;
        return;
    }
    arg0->unk_B2A = temp_v1;
}

s32 *func_8082ED20(Actor *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk_14B;
    if ((temp_v0 == 2) || (arg0->id != 0)) {
        return &D_0400E410;
    }
    if (temp_v0 == 1) {
        return &D_0400E260;
    }
    if (arg0->unk_153 == 0x13) {
        return &D_0400D0B0;
    }
    return *(&D_8085BE84 + (arg0->unk_14F * 4));
}

s32 func_8082ED94(Player *arg0) {
    Actor *temp_a1;
    Actor *temp_a1_2;
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;
    s32 phi_v1;

    temp_a1 = arg0->skelAnime.animCurrentSeg;
    if ((&D_0400DD58 != temp_a1) && (&D_0400DD68 != temp_a1) && ((temp_a1_2 = arg0->skelAnime.animCurrentSeg, (func_8082ED20(temp_a1) != temp_a1_2)) || (&D_0400D0B0 == temp_a1_2))) {
        if (temp_a1_2 == D_8085C84C) {
            return 1;
        }
        phi_v0 = D_8085C850 + 4;
        phi_v1 = 2;
        if (temp_a1_2 == *D_8085C850) {
            return 2;
        }
loop_8:
        if (temp_a1_2 == phi_v0->unk_0) {
            return phi_v1 + 1;
        }
        temp_v0 = phi_v0 + 4;
        if (temp_a1_2 == phi_v0->unk_4) {
            return phi_v1 + 2;
        }
        temp_v0_2 = temp_v0 + 4;
        if (temp_a1_2 == temp_v0->unk_4) {
            return phi_v1 + 3;
        }
        if (temp_a1_2 == temp_v0_2->unk_4) {
            return phi_v1 + 4;
        }
        temp_v1 = phi_v1 + 4;
        phi_v0 = temp_v0_2 + 4 + 4;
        phi_v1 = temp_v1;
        if (temp_v1 == 0x1E) {
            return 0;
        }
        goto loop_8;
    }
    return -1;
}

void func_8082EEA4(Player *arg1) {
    u8 temp_v0;

    temp_v0 = *(&D_8085C96C + arg1);
    if (temp_v0 != 0) {
        func_8082E224(*(&D_8085C938 + (temp_v0 * 4)));
    }
}

LinkAnimationHeader *func_8082EEE0(Player *arg0) {
    if (arg0->unk_B64 != 0) {
        return *(&D_8085BECC + (arg0->modelAnimType * 4));
    }
    return *(&D_8085BEB4 + (arg0->modelAnimType * 4));
}

s32 func_8082EF20(Actor *arg0) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = func_8082ECCC(arg0) != 0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = arg0->unk_ACC != 0;
    }
    return phi_v0;
}

s32 *func_8082EF54(Actor *arg0) {
    if (func_8082EF20(arg0) != 0) {
        return &D_0400D490;
    }
    return *(&D_8085BEFC + (arg0->unk_14F * 4));
}

s32 *func_8082EF9C(Actor *arg0) {
    if (func_8082EF20(arg0) != 0) {
        return &D_0400D488;
    }
    return *(&D_8085BEE4 + (arg0->unk_14F * 4));
}

s32 *func_8082EFE4(Actor *arg0) {
    if (func_800B7128(arg0) != 0) {
        return &D_0400D520;
    }
    return *(&D_8085C094 + (arg0->unk_14F * 4));
}

void func_8082F02C(GlobalContext *arg0, Color_RGB8 *arg1, f32 arg2) {
    func_800FD59C(arg0, arg1, arg2);
    func_800FD5E0(arg0, arg1 + 3, arg2);
    func_800FD654(arg0, arg1 + 6, arg2);
    func_800FD698(arg0, arg1->unk_A, arg1->unk_C, arg2);
}

void func_8082F09C(Actor *arg0) {
    arg0->unk_52C = 5;
    arg0->unk_528 = 0;
    arg0->unk_529 = 0x11;
    arg0->unk_52A = 0x39;
    arg0->unk_544 = 1;
    arg0->unk_530 = 0;
    arg0->unk_538 = 0xF7CFFFFF;
    arg0->unk_545 = 0;
    arg0->unk_558 = 0xC;
}

void func_8082F0E4(Actor *arg0, s32 arg1, s8 arg2, s32 arg3) {
    arg0->unk_528 = 9;
    if (arg3 >= 0x1F) {
        arg0->unk_52A = 0;
    } else {
        arg0->unk_52A = 0x39;
    }
    arg0->unk_544 = 2;
    arg0->unk_545 = 5;
    arg0->unk_558 = (s16) arg3;
    arg0->unk_530 = arg1;
    arg0->unk_535 = arg2;
    if ((arg1 & 0x400) != 0) {
        arg0->unk_529 = 0;
        return;
    }
    arg0->unk_52C = 0xA;
    arg0->unk_538 = 0xF7CFFFFF;
    if (arg1 & 0x80000) {
        arg0->unk_529 = 0;
        return;
    }
    arg0->unk_529 = 0x11;
}

void func_8082F164(Player *arg0, s32 arg1) {
    if ((arg0->transformation == 2) && (~(D_80862B44->cur.button | ~(arg1 & 0xFFFF)) == 0)) {
        arg0->stateFlags1 |= 0x10;
    }
}

void func_8082F1AC(GlobalContext *arg0, Actor *arg1) {
    s32 sp4C;
    s16 sp46;
    s16 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp34;
    s16 temp_v1_2;
    s32 temp_v0;
    s8 temp_v1;
    s32 phi_v1;
    s16 phi_v0;

    temp_v1 = gSaveContext.magic;
    sp4C = (s32) arg1->unk_B62;
    phi_v1 = (s32) temp_v1;
    if ((temp_v1 != 0) && ((arg1->unk_A6C & 0x10) != 0)) {
        if (gSaveContext.unk_3F28 == 0) {
            func_80115DB4(arg0, 0U, (GlobalContext *)5, &gSaveContext);
            phi_v1 = (s32) gSaveContext.magic;
        }
        if (phi_v1 >= 0x10) {
            phi_v0 = 0xFF;
        } else {
            phi_v0 = (s16) (s32) (((f32) phi_v1 / 16.0f) * 255.0f);
        }
        Math_StepToS(arg1 + 0xB62, phi_v0, 0x32);
    } else if ((Math_StepToS(arg1 + 0xB62, 0, 0x32) != 0) && (gSaveContext.unk_3F28 != 0)) {
        func_80115D5C(arg0);
    }
    temp_v1_2 = arg1->unk_B62;
    if ((temp_v1_2 != 0) || (sp4C != 0)) {
        temp_v0 = arg0->gameplayFrames;
        sp46 = temp_v0 * 0x1B58;
        sp44 = temp_v0 * 0x36B0;
        func_8082F02C(arg0, D_8085C98C, (f32) temp_v1_2 / 255.0f);
        sp34 = Math_SinS(sp44) * 40.0f;
        sp40 = Math_CosS(sp44) * 40.0f;
        sp3C = Math_SinS(sp46) * sp34;
        Lights_PointNoGlowSetInfo(arg1 + 0x508, (s16) (s32) (arg1->world.pos.x + sp40), (s16) (s32) (arg1->world.pos.y + sp3C), (s16) (s32) (arg1->world.pos.z + (Math_CosS(sp46) * sp34)), (u8) 0x64, (u8) 0xC8, (u8) 0xFF, (s16) 0x258);
        func_800B8E58(arg1, 0x1AFU);
        func_800B648C(arg0, 1, 2, 0x42C80000, &arg1->world);
    }
}

void func_8082F43C(GlobalContext *arg0, Actor *arg1, s32 (*arg2)(Actor *, GlobalContext *)) {
    arg1->unk_AC4 = arg2;
    arg1->unk_ACE = 0;
    arg1->unk_AC8 = 0.0f;
    func_8082E00C(arg1);
}

void func_8082F470(GlobalContext *arg0, void *arg1) {
    s32 sp1C;
    Player *temp_a3;
    s32 temp_v1;
    s32 *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_a3 = arg1->unk_248;
    arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xFEFFFFF7);
    phi_v0 = (arg1->unk_14F * 4) + &D_8085BE84;
    phi_v1 = 0;
loop_1:
    phi_v1_2 = phi_v1;
    if (temp_a3 != *phi_v0) {
        temp_v1 = phi_v1 + 1;
        phi_v0 += 0x18;
        phi_v1 = temp_v1;
        phi_v1_2 = temp_v1;
        if (temp_v1 != 0x2C) {
            goto loop_1;
        }
    }
    sp1C = phi_v1_2;
    func_8082F8BC(arg0, temp_a3);
    if (phi_v1_2 < 0x2C) {
        arg1->unk_248 = (Player *) *(&D_8085BE84 + ((phi_v1_2 * 6 * 4) + (arg1->unk_14F * 4)));
    }
}

s8 func_8082F524(Actor *arg0, s32 arg1) {
    if (arg1 >= 0xFD) {
        return 0;
    }
    if (arg1 == 0xFC) {
        return 1;
    }
    if (arg1 == 0x5C) {
        return 2;
    }
    if ((arg1 == 0x4D) && (arg0->unk_14B == 2)) {
        return 8;
    }
    return *(&D_8085C99C + arg1);
}

void func_8082F594(s32 arg0, ? arg1) {

}

void func_8082F5A4(s32 arg0, void *arg1) {
    arg1->unk_B28 = 0;
    arg1->unk_B0C = 1.0f;
}

void func_8082F5C0(s32 arg0, void *arg1) {
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 8);
    if (arg1->unk_147 == 0x12) {
        arg1->unk_B28 = -2;
    } else {
        arg1->unk_B28 = -1;
    }
    arg1->unk_ACC = 0;
}

void func_8082F5FC(Player *arg0, Actor *arg1) {
    arg0->leftHandActor = arg1;
    arg0->unk_388 = arg1;
    arg0->unk_384 = 0;
    arg0->leftHandWorld.rot.y = arg1->shape.rot.y - arg0->actor.shape.rot.y;
    arg0->stateFlags1 |= 0x800;
}

void func_8082F62C(GlobalContext *arg0, Player *arg1) {
    s32 sp4C;
    void *sp48;
    Actor *sp44;
    Actor *temp_a3;
    Actor *temp_v0_2;
    ActorContext *temp_a0;
    GlobalContext *temp_a2;
    GlobalContext *temp_a2_2;
    s32 temp_v0;
    s8 temp_v1;
    s8 temp_v1_2;
    void *temp_t1;
    s32 phi_v0;

    temp_a2 = arg0;
    if ((arg1->stateFlags1 & 0x800) != 0) {
        func_8082DE14(temp_a2, arg1, temp_a2);
        return;
    }
    arg0 = temp_a2;
    temp_v0 = func_80124258(arg1, arg1, temp_a2);
    temp_a2_2 = arg0;
    temp_t1 = (temp_v0 * 4) + &D_8085CD24;
    if ((temp_v0 == 1) && (gSaveContext.powderKegTimer == 0)) {
        gSaveContext.powderKegTimer = 0xC8;
    }
    if (temp_v0 == 1) {
        phi_v0 = 1;
    } else {
        phi_v0 = 0;
    }
    temp_a0 = temp_a2_2 + 0x1CA0;
    sp48 = temp_t1;
    sp4C = temp_v0;
    arg0 = temp_a2_2;
    temp_v0_2 = Actor_SpawnAsChild(temp_a0, (Actor *) arg1, temp_a2_2, temp_t1->unk_2, arg1->actor.world.pos.x, arg1->actor.world.pos.y, arg1->actor.world.pos.z, (s16) phi_v0, (s16) (s32) arg1->actor.shape.rot.y, (s16) 0, 0);
    temp_a3 = temp_v0_2;
    if (temp_v0_2 != 0) {
        if ((temp_v0 == 0) && (temp_v1 = arg0->unk_1887E, (temp_v1 != 0))) {
            arg0->unk_1887E = temp_v1 - 1;
            if (arg0->unk_1887E == 0) {
                arg0->unk_1887E = -1;
            }
        } else if ((temp_v0 == 2) && (temp_v1_2 = arg0->unk_1887D, (temp_v1_2 != 0))) {
            arg0->unk_1887D = temp_v1_2 - 1;
            if (arg0->unk_1887D == 0) {
                arg0->unk_1887D = -1;
            }
        } else {
            sp44 = temp_a3;
            func_80115A14((s32) temp_t1->unk_0, -1);
        }
        func_8082F5FC(arg1, temp_a3);
        return;
    }
    if (temp_v0 == 1) {
        gSaveContext.powderKegTimer = 0;
    }
}

void func_8082F7F4(GlobalContext *arg0, Actor *arg1) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    ActorContext *temp_a0;
    GlobalContext *temp_a2;

    temp_a2 = arg0;
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 8);
    arg1->unk_B28 = -3;
    arg1->unk_B48 = 0.0f;
    temp_a0 = temp_a2 + 0x1CA0;
    arg0 = temp_a2;
    temp_v0 = Actor_SpawnAsChild(temp_a0, arg1, temp_a2, 0x3D, arg1->world.pos.x, arg1->world.pos.y, arg1->world.pos.z, (s16) 0, (s16) (s32) arg1->shape.rot.y, (s16) 0, 0);
    arg1->unk_34C = temp_v0;
    if (temp_v0 == 0) {
        func_80831990(arg0, arg1, 0xFF);
        return;
    }
    temp_v0_2 = arg1->unk_34C;
    temp_v0_2->objBankIndex = arg1->objBankIndex;
    temp_v0_2->unk_208 = (u8) arg1->unk_14B;
}

void func_8082F8A0(s32 arg0, void *arg1) {
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x1000000);
}

void func_8082F8BC(GlobalContext *arg1, s8 arg2) {
    GlobalContext *temp_a3;

    temp_a3 = arg1;
    temp_a3->unk_147 = arg2;
    temp_a3->unk_14A = arg2;
    temp_a3->unk_A6C = (s32) (temp_a3->unk_A6C & 0xFEFFFFF7);
    temp_a3->colCtx.dyna.bgActors[6].prevTransform.pos.y = 0.0f;
    temp_a3->colCtx.dyna.bgActors[6].prevTransform.pos.z = 0.0f;
    temp_a3->unk_B28 = 0;
    temp_a3->unk_14C = (u8) temp_a3->unk_14D;
    arg1 = temp_a3;
    *(&D_8085CB3C + (arg2 * 4))(temp_a3, temp_a3);
    func_80123BD4(arg1, arg1->unk_14C);
}

void func_8082F938(Player *arg0, Actor *arg1, s32 arg2, s32 arg3) {
    void *sp1C;
    s32 temp_a2;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;
    void *phi_v1;
    void *phi_a0;
    void *phi_a1;
    s32 phi_a2;

    sp1C = Effect_GetParams(arg1->unk_73C);
    temp_v0 = Effect_GetParams(arg1->unk_740);
    phi_v1 = (arg2 * 0x10) + &D_8085CF88;
    phi_a0 = sp1C;
    phi_a1 = temp_v0;
    phi_a2 = 0;
    do {
        temp_a2 = phi_a2 + 2;
        temp_a0 = phi_a0 + 2;
        temp_a0->unk_18C = (u8) phi_v1->unk_0;
        temp_v1 = phi_v1 + 2;
        temp_a1 = phi_a1 + 2;
        temp_a0->unk_190 = (u8) phi_v1->unk_4;
        temp_a0->unk_194 = (u8) temp_v1->unk_6;
        temp_a0->unk_198 = (u8) temp_v1->unk_A;
        temp_a1->unk_18C = (u8) temp_v1->unk_-2;
        temp_a1->unk_190 = (u8) temp_v1->unk_2;
        temp_a1->unk_194 = (u8) temp_v1->unk_6;
        temp_a1->unk_198 = (u8) temp_v1->unk_A;
        temp_a0->unk_18D = (u8) temp_v1->unk_-1;
        temp_a0->unk_191 = (u8) temp_v1->unk_3;
        temp_a0->unk_195 = (u8) temp_v1->unk_7;
        temp_a0->unk_199 = (u8) temp_v1->unk_B;
        temp_a1->unk_18D = (u8) temp_v1->unk_-1;
        temp_a1->unk_191 = (u8) temp_v1->unk_3;
        temp_a1->unk_195 = (u8) temp_v1->unk_7;
        temp_a1->unk_199 = (u8) temp_v1->unk_B;
        phi_v1 = temp_v1;
        phi_a0 = temp_a0;
        phi_a1 = temp_a1;
        phi_a2 = temp_a2;
    } while (temp_a2 != 4);
    if (arg1->unk_14B == 3) {
        arg3 = 8;
    }
    sp1C->unk_19F = (s8) arg3;
    temp_v0->unk_19F = (s8) arg3;
}

void func_8082FA5C(Player *arg0, Actor *arg1, s32 arg2) {
    u16 sp26;
    s8 temp_v0;
    s8 temp_v0_2;
    s32 phi_a1;
    u16 phi_a2;

    if (arg1->unk_ADB == 0) {
        phi_a2 = 0x6800U;
        if (arg1->unk_14B == 1) {
            phi_a1 = 0x1857;
        } else {
            temp_v0 = arg1->unk_ADA;
            phi_a1 = 0;
            if ((s32) temp_v0 >= 0x1E) {
                phi_a2 = 0x6801U;
            } else if (temp_v0 == 0x1D) {
                phi_a1 = 0x1857;
            } else {
                phi_a1 = 0x1818;
                if ((s32) arg1->unk_ADD >= 3) {
                    phi_a2 = 0x6801U;
                } else {
                    phi_a1 = 0x1801;
                    if (arg1->unk_147 == 6) {
                        phi_a1 = 0x1812;
                    }
                }
            }
        }
        if (phi_a1 != 0) {
            sp26 = phi_a2;
            func_8082E1F0(arg1, phi_a1, phi_a2);
        }
        temp_v0_2 = arg1->unk_ADA;
        if (((s32) temp_v0_2 < 0x10) || ((s32) temp_v0_2 >= 0x16)) {
            func_8082DF8C(arg1, phi_a2 & 0xFFFF, phi_a2);
        }
        func_8082F938(arg0, arg1, 0, 4);
    }
    arg1->unk_ADB = (s8) arg2;
}

s32 func_8082FB68(Player *arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = arg0->unk_730;
    if ((temp_v0 != 0) && ((temp_v0->flags & 5) == 5)) {
        arg0->stateFlags3 |= 0x80000000;
        return 1;
    }
    temp_v0_2 = arg0->stateFlags3;
    if (temp_v0_2 & 0x80000000) {
        arg0->stateFlags3 = temp_v0_2 & 0x7FFFFFFF;
        if (arg0->linearVelocity == 0.0f) {
            arg0->currentYaw = arg0->actor.shape.rot.y;
        }
    }
    return 0;
}

s32 func_8082FBE8(Player *arg0) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = func_80123420(arg0) != 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        phi_v0 = func_80123434(arg0) != 0;
    }
    return phi_v0;
}

s32 func_8082FC24(Player *arg0) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = func_8082FB68(arg0) != 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        phi_v0 = func_80123434(arg0) != 0;
    }
    return phi_v0;
}

void func_8082FC60(Actor *arg0) {
    arg0->unk_B44 = 0.0f;
    arg0->unk_B40 = 0.0f;
}

s32 func_8082FC78(Actor *arg0, s32 arg1) {
    if ((arg1 < 0xFD) && (func_8082F524(arg0) == arg0->unk_14A)) {
        return 1;
    }
    return 0;
}

s32 func_8082FCC4(s32 arg1, s32 arg2) {
    if ((arg1 < 0xFD) && (func_8082F524() == arg2)) {
        return 1;
    }
    return 0;
}

s32 func_8082FD0C(s32 arg0, s32 arg1) {
    s32 temp_s0;
    u8 temp_v0;
    s32 phi_s0;
    u8 phi_v0;
    u8 phi_v1;

    phi_s0 = 1;
loop_1:
    if (phi_s0 == 0) {
        temp_v0 = gSaveContext.playerForm;
        phi_v1 = temp_v0;
        if (temp_v0 == 4) {
            phi_v1 = 0U;
        }
        phi_v0 = (&gSaveContext + (phi_v1 * 4) + phi_s0)->unk_4C;
    } else {
        phi_v0 = gSaveContext.equips.buttonItems[0][phi_s0];
    }
    if (func_8082FCC4(arg0, phi_v0 & 0xFF, arg1) != 0) {
        return phi_s0;
    }
    temp_s0 = phi_s0 + 1;
    phi_s0 = temp_s0;
    if (temp_s0 == 4) {
        return -1;
    }
    goto loop_1;
}

s32 func_8082FDC4(void) {
    s32 temp_v1;
    u16 *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    phi_v0 = D_8085CFA8;
    phi_v1 = 0;
loop_1:
    phi_v1_2 = phi_v1;
    if (~(~*phi_v0 | D_80862B44->press.button) != 0) {
        temp_v1 = phi_v1 + 1;
        phi_v0 += 2;
        phi_v1 = temp_v1;
        phi_v1_2 = temp_v1;
        if (temp_v1 != 4) {
            goto loop_1;
        }
    }
    return phi_v1_2;
}

void func_8082FE0C(Actor *arg0, GlobalContext *arg1) {
    s32 sp48;
    s32 sp3C;
    s32 sp38;
    Actor *temp_v0_7;
    s32 temp_a3;
    s32 temp_ret;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1_2;
    s8 temp_v1;
    u8 temp_v0;
    u8 temp_v0_3;
    s32 phi_a2;
    s32 phi_a0;
    s32 phi_a2_2;
    s32 phi_a1;
    s32 phi_a1_2;
    s32 phi_a1_3;
    s32 phi_a3;
    u16 *phi_v0;
    s32 phi_a3_2;
    s32 phi_a3_3;
    u8 phi_a1_4;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;

    if (((arg0->unk_A6C & 0x20000800) == 0) && ((arg0->unk_A70 << 6) >= 0) && ((arg0->unk_A74 * 4) >= 0) && (func_801240DC(arg0) == 0)) {
        if ((arg0->unk_14B == 4) && (temp_v0 = arg0->unk_153, (temp_v0 != 0))) {
            temp_ret = func_8082FD0C((s32) arg0, temp_v0 + 0x39);
            temp_v0_2 = temp_ret;
            if (temp_v0_2 < 0) {
                temp_v1 = arg0->unk_154;
                if (temp_v1 == 0) {
                    temp_v0_3 = gSaveContext.playerForm;
                    phi_a1_4 = temp_v0_3;
                    if (temp_v0_3 == 4) {
                        phi_a1_4 = 0U;
                    }
                    phi_a2 = (s32) (&gSaveContext + (phi_a1_4 * 4) + temp_v1)->unk_4C;
                } else {
                    phi_a2 = (s32) gSaveContext.equips.buttonItems[0][temp_v1];
                }
                temp_v1_2 = func_8082F524(arg0, phi_a2 & 0xFF, phi_a2) - 0x3A;
                phi_a0 = temp_v1_2;
                if ((temp_v1_2 < 0) || (temp_v1_2 >= 0x18)) {
                    phi_a0 = arg0->unk_153 - 1;
                }
                func_80831990(arg1, arg0, func_80122ED8(phi_a0));
                return;
            }
            if ((arg0->unk_153 == 0x14) && (gSaveContext.magic == 0)) {
                sp48 = temp_v0_2;
                func_80838A20(arg1, arg0);
            }
            arg0->unk_154 = (s8) temp_ret;
            goto block_20;
        }
block_20:
        if ((arg0->id == 0) && ((s32) arg0->unk_14A >= 2)) {
            if ((func_80124148(arg0) == 0) || (gSaveContext.unk_1016 == 0)) {
                if (gGameInfo->data[865] != 0) {
                    phi_a2_2 = 0x5C;
                } else {
                    phi_a2_2 = func_8012EC80(arg1);
                }
                if (func_8082FC78(arg0, phi_a2_2, phi_a2_2) == 0) {
                    if (gSaveContext.buttonStatus[1] != 0xFF) {
                        phi_a1 = (s32) gSaveContext.equips.buttonItems[0][1];
                    } else {
                        phi_v0_2 = 0xFF;
                        if (gSaveContext.unk_3F22 == 0x10) {
                            phi_v0_2 = (s32) gSaveContext.equips.buttonItems[0][1];
                        }
                        phi_a1 = phi_v0_2;
                    }
                    if (func_8082FC78(arg0, phi_a1) == 0) {
                        if (gSaveContext.buttonStatus[2] != 0xFF) {
                            phi_a1_2 = (s32) gSaveContext.equips.buttonItems[0][2];
                        } else {
                            phi_v0_3 = 0xFF;
                            if (gSaveContext.unk_3F22 == 0x10) {
                                phi_v0_3 = (s32) gSaveContext.equips.buttonItems[0][2];
                            }
                            phi_a1_2 = phi_v0_3;
                        }
                        if (func_8082FC78(arg0, phi_a1_2) == 0) {
                            if (gSaveContext.buttonStatus[3] != 0xFF) {
                                phi_a1_3 = (s32) gSaveContext.equips.buttonItems[0][3];
                            } else {
                                phi_v0_4 = 0xFF;
                                if (gSaveContext.unk_3F22 == 0x10) {
                                    phi_v0_4 = (s32) gSaveContext.equips.buttonItems[0][3];
                                }
                                phi_a1_3 = phi_v0_4;
                            }
                            if (func_8082FC78(arg0, phi_a1_3) == 0) {
                                goto block_46;
                            }
                            goto block_47;
                        }
                        goto block_47;
                    }
                    goto block_47;
                }
                goto block_47;
            }
block_46:
            func_80831990(arg1, arg0, 0xFF);
            return;
        }
block_47:
        temp_v0_4 = func_8082FDC4();
        phi_a3 = temp_v0_4;
        if ((temp_v0_4 >= 4) && (arg0->unk_14B == 0) && (arg0->unk_147 != 6)) {
            phi_a3 = 0;
        }
        sp38 = phi_a3;
        temp_v0_5 = func_8012364C(arg1, arg0, phi_a3, phi_a3);
        if (temp_v0_5 >= 0xFD) {
            phi_v0 = D_8085CFA8;
            phi_a3_2 = 0;
loop_53:
            phi_a3_3 = phi_a3_2;
            if (~(~*phi_v0 | D_80862B44->cur.button) != 0) {
                temp_a3 = phi_a3_2 + 1;
                phi_v0 += 2;
                phi_a3_2 = temp_a3;
                phi_a3_3 = temp_a3;
                if (temp_a3 != 4) {
                    goto loop_53;
                }
            }
            temp_v0_6 = func_8012364C(arg1, arg0, phi_a3_3, phi_a3_3);
            if ((temp_v0_6 < 0xFD) && (func_8082F524(arg0, temp_v0_6) == arg0->unk_147)) {
                D_80862B4C = 1;
                return;
            }
            /* Duplicate return node #71. Try simplifying control flow for better match */
            return;
        }
        if (temp_v0_5 == 0xF0) {
            if ((arg0->unk_B60 == 0) && (temp_v0_7 = Actor_Spawn(&arg1->actorCtx, arg1, 9, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0), (temp_v0_7 != 0))) {
                temp_v0_7->unk_1F0 = 0;
                arg0->unk_B60 = 0x136U;
                return;
            }
            /* Duplicate return node #71. Try simplifying control flow for better match */
            return;
        }
        if (temp_v0_5 == 0xF1) {
            func_80839978(arg1, arg0, temp_v0_5, phi_a3);
            return;
        }
        if (temp_v0_5 == 0xF2) {
            func_80839A10(arg1, arg0, temp_v0_5, phi_a3);
            return;
        }
        sp3C = temp_v0_5;
        sp38 = phi_a3;
        if ((func_80124110(arg0, func_8082F524(arg0, temp_v0_5, temp_v0_5, phi_a3)) != 0) && (gSaveContext.unk_1016 != 0)) {
            if (func_80152498(&arg1->msgCtx) == 0) {
                func_801518B0(arg1, 0xF7U, NULL);
                return;
            }
            /* Duplicate return node #71. Try simplifying control flow for better match */
            return;
        }
        arg0->unk_146 = (s8) phi_a3;
        func_80831990(arg1, arg0, temp_v0_5, phi_a3);
        /* Duplicate return node #71. Try simplifying control flow for better match */
    }
}

void func_808302CC(Actor *arg0, GlobalContext *arg1) {
    AnimationHeaderCommon *sp4C;
    s32 sp38;
    s8 sp37;
    AnimationHeaderCommon *temp_a2;
    f32 temp_f2;
    s8 temp_v0;
    s32 phi_v1;
    AnimationHeaderCommon *phi_a2;
    f32 phi_f0;
    f32 phi_f12;
    f32 phi_f14;
    f32 phi_f0_2;

    sp37 = func_8082F524(arg0, (s32) arg0->unk_148);
    func_8082F43C(arg1, arg0, func_80848808);
    phi_v1 = (s32) *(&D_8085CD00 + ((*(&D_801BFFB0 + (arg0->unk_14C * 5)) * 6) + *(&D_801BFFB0 + (arg0->unk_14D * 5))));
    if ((sp37 == 8) || (temp_v0 = arg0->unk_147, (temp_v0 == 8))) {
        if (sp37 == 0) {
            phi_v1 = -0xE;
        } else {
            phi_v1 = 0xE;
        }
    } else if ((sp37 == 0x15) || (sp37 == 0x11) || ((sp37 == 0) && ((temp_v0 == 0x15) || (temp_v0 == 0x11)))) {
        phi_v1 = 0xD;
        if (sp37 == 0) {
            phi_v1 = -0xD;
        }
    }
    if (phi_v1 < 0) {
        arg0->unk_14E = (s8) -phi_v1;
    } else {
        arg0->unk_14E = (s8) phi_v1;
    }
    temp_a2 = *(&D_8085CC88 + (arg0->unk_14E * 8));
    phi_a2 = temp_a2;
    if ((temp_a2 == &D_0400DC50) && (arg0->unk_144 == 0)) {
        phi_a2 = &D_0400DC60;
    }
    sp38 = phi_v1;
    sp4C = phi_a2;
    sp37 = sp37;
    temp_f2 = (f32) SkelAnime_GetFrameCount(phi_a2);
    phi_f14 = temp_f2;
    if (phi_v1 >= 0) {
        phi_f12 = 0.0f;
        phi_f0_2 = 1.2f;
    } else {
        phi_f12 = temp_f2;
        phi_f14 = 0.0f;
        phi_f0_2 = -1.2f;
    }
    phi_f0 = phi_f0_2;
    if (sp37 != 0) {
        phi_f0 = 2.0f * phi_f0_2;
    }
    SkelAnime_ChangeLinkAnim(arg1, arg0 + 0x284, (LinkAnimationHeader *) phi_a2, phi_f0, phi_f12, phi_f14, (u8) 2, 0.0f);
    arg0->unk_A74 = (s32) (arg0->unk_A74 & 0xBFFFFFFF);
}

void func_808304BC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    Actor *temp_a2_2;
    GlobalContext *temp_a1;
    Actor *phi_a2;
    GlobalContext *phi_a1;

    temp_a2 = arg0;
    phi_a2 = temp_a2;
    phi_a1 = arg1;
    if ((temp_a2->id == 0) && ((temp_a2->unk_A74 * 2) >= 0) && ((temp_a2->unk_14A == temp_a2->unk_147) || (temp_a2->unk_A6C & 0x400000)) && (gSaveContext.health != 0) && (arg1->csCtx.state == 0) && (temp_a2->unk_394 == 0) && (arg1->unk_1887C == 0) && (arg1->activeCamera == 0)) {
        arg0 = temp_a2;
        temp_a1 = arg1;
        temp_a2_2 = arg0;
        phi_a2 = temp_a2_2;
        phi_a1 = temp_a1;
        if (func_8082DA90(arg1, temp_a2) == 0) {
            temp_a0 = temp_a2_2;
            if (gSaveContext.unk_3DD0[4] != 5) {
                arg1 = temp_a1;
                arg0 = temp_a2_2;
                func_8082FE0C(temp_a0, temp_a1, temp_a2_2);
                phi_a2 = arg0;
                phi_a1 = arg1;
            }
        }
    }
    if ((phi_a2->unk_A74 * 2) < 0) {
        func_808302CC(phi_a2, phi_a1, phi_a2);
    }
}

u16 func_808305BC(GlobalContext *arg0, Actor *arg1, s32 *arg2, s32 *arg3) {
    s8 temp_v1;

    if (arg1->unk_147 == 0x12) {
        *arg2 = 9;
        if (arg1->unk_14B == 3) {
            *arg3 = 7;
        } else {
            *arg3 = 6;
        }
    } else {
        *arg2 = 1;
        if (arg1->unk_A6C & 0x800000) {
            *arg3 = 1;
        } else {
            *arg3 = arg1->unk_147 - 7;
        }
    }
    if (arg1->unk_14B == 3) {
        if (((s32) gSaveContext.magic >= 2) || (((gSaveContext.weekEventReg[8] & 1) != 0) && (arg0->sceneNum == 0x11))) {
            return 1U;
        }
        return 0U;
    }
    if ((arg1->unk_A74 & 0x400) != 0) {
        return 1U;
    }
    if (gSaveContext.minigameState == 1) {
        return arg0->interfaceCtx.hbaAmmo;
    }
    temp_v1 = arg0->unk_1887C;
    if (temp_v1 != 0) {
        return (u16) temp_v1;
    }
    return (u16) gSaveContext.inventory.ammo[gItemSlots[*arg2]];
}

s32 func_808306F8(Actor *arg0, GlobalContext *arg1) {
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    Actor *temp_v0_4;
    s16 temp_v0_2;
    s32 temp_v0_3;
    s8 temp_v0;
    s32 phi_v1;
    s32 phi_t0;

    temp_v0 = arg0->unk_147;
    if (((s32) temp_v0 >= 0xA) && ((s32) temp_v0 < 0xD) && (gSaveContext.unk_3F28 != 0)) {
        play_sound(0x4806U);
        return 0;
    }
    func_8082F43C(arg1, arg0, func_80848BF4);
    temp_v0_2 = arg0->unk_B28;
    arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x40);
    arg0->unk_ACC = 0xE;
    if ((s32) temp_v0_2 >= 0) {
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = -(s32) temp_v0_2;
        } else {
            phi_v1 = (s32) temp_v0_2;
        }
        if (phi_v1 != 2) {
            func_800B8E58(arg0, *(&D_8085CFAE + (phi_v1 * 2)));
        }
        if ((func_801240C8((Player *) arg0) == 0) && (func_808305BC(arg1, arg0, &sp50, &sp4C) > 0)) {
            temp_v0_3 = sp4C - 3;
            if ((s32) arg0->unk_B28 >= 0) {
                phi_t0 = temp_v0_3;
                if ((temp_v0_3 >= 0) && (temp_v0_3 < 3)) {
                    if ((s32) gSaveContext.magic < (s32) *(&D_8085CFB8 + temp_v0_3)) {
                        sp4C = 2;
                        phi_t0 = -1;
                    }
                } else if ((sp4C == 7) && (((gSaveContext.weekEventReg[8] & 1) == 0) || (arg1->sceneNum != 0x11))) {
                    phi_t0 = 3;
                } else {
                    phi_t0 = -1;
                }
                sp48 = phi_t0;
                temp_v0_4 = Actor_SpawnAsChild(&arg1->actorCtx, arg0, arg1, 0xF, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) (s32) arg0->shape.rot.y, (s16) 0, sp4C);
                arg0->unk_34C = temp_v0_4;
                if ((temp_v0_4 != 0) && (phi_t0 >= 0)) {
                    func_80115DB4(arg1, *(&D_8085CFB8 + phi_t0), NULL);
                }
            }
        }
    }
    return 1;
}

void func_808308DC(GlobalContext *arg0, Actor *arg1) {
    s32 sp20;
    s32 temp_v1;
    s8 temp_a1;
    u8 temp_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_v0 = arg1->unk_14B;
    temp_v1 = temp_v0 == 1;
    phi_v1 = temp_v1;
    if (temp_v1 == 0) {
        phi_v1 = temp_v0 == 3;
    }
    temp_a1 = arg1->unk_147;
    phi_v1_2 = phi_v1;
    if ((temp_a1 != 0) && (phi_v1 == 0)) {
        sp20 = phi_v1;
        if (func_80124278(arg1, temp_a1) >= 0) {
            sp20 = phi_v1;
            func_8082E1F0(arg1, 0x1802);
        } else {
            sp20 = phi_v1;
            func_8082E1F0(arg1, 0x835);
        }
        phi_v1_2 = sp20;
    }
    sp20 = phi_v1_2;
    func_80831990(arg0, arg1, (s32) arg1->unk_148);
    if (phi_v1_2 == 0) {
        if (func_80124278(arg1, arg1->unk_147) >= 0) {
            func_8082E1F0(arg1, 0x1803);
            return;
        }
        if (arg1->unk_147 != 0) {
            func_8082E1F0(arg1, 0x835);
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_808309CC(GlobalContext *arg0, Actor *arg1) {
    if (arg1->unk_AC4 == func_80848808) {
        func_808308DC(arg0, arg1);
    }
    func_8082F43C(arg0, arg1, *(&D_8085C9F0 + (arg1->unk_147 * 4)));
    arg1->unk_ACC = 0;
    arg1->unk_AA4 = 0;
    func_8082DCA0(arg0, (Player *) arg1);
    arg1->unk_A74 = (s32) (arg1->unk_A74 & 0xBFFFFFFF);
}

AnimationHeaderCommon *func_80830A58(GlobalContext *arg0, Player *arg1) {
    func_8082F43C(arg0, (Actor *) func_8084894C);
    func_8082DCA0(arg0, arg1);
    if (arg1->unk_B40 < 0.5f) {
        return *(&D_8085CFBC + (func_801241B4(arg1, arg1) * 4));
    }
    return *(&D_8085CFC4 + (func_801241B4(arg1, arg1) * 4));
}

void func_80830AE8(Actor *arg0) {
    u8 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk_14B;
    if (temp_v0 == 1) {
        phi_v0 = 0x8EF;
    } else {
        phi_v1 = 0x181F;
        if (temp_v0 == 3) {
            phi_v1 = 0x835;
        }
        phi_v0 = phi_v1;
    }
    func_800B8E58(arg0, phi_v0 & 0xFFFF);
}

void func_80830B38(Actor *arg0) {
    u8 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk_14B;
    if (temp_v0 == 1) {
        phi_v0 = 0x8E7;
    } else {
        phi_v1 = 0x1826;
        if (temp_v0 == 3) {
            phi_v1 = 0x834;
        }
        phi_v0 = phi_v1;
    }
    func_800B8E58(arg0, phi_v0 & 0xFFFF);
}

s32 func_80830B88(GlobalContext *arg0, Player *arg1) {
    AnimationHeaderCommon *sp34;
    AnimationHeaderCommon *temp_v0_3;
    f32 temp_f0;
    s32 temp_v0;
    u8 temp_v0_2;

    if ((~(D_80862B44->cur.button | ~0x10) == 0) && (temp_v0 = arg1->stateFlags1, ((temp_v0 & 0x20C00000) == 0)) && (((temp_v0 * 0x10) >= 0) || (((s32) arg1->currentBoots >= 5) && ((arg1->actor.bgCheckFlags & 1) != 0))) && (arg0->unk_1887C == 0) && (arg1->heldItemActionParam == arg1->itemActionParam) && ((arg1->transformation == 0) || ((func_801234B0(arg1) == 0) && (((temp_v0_2 = arg1->transformation, (temp_v0_2 == 2)) && !(arg1->stateFlags1 & 0x2000000)) || ((temp_v0_2 == 4) && (arg1->currentShield != 0))) && (func_8082FBE8(arg1) != 0)))) {
        temp_v0_3 = func_80830A58(arg0, arg1);
        sp34 = temp_v0_3;
        temp_f0 = (f32) SkelAnime_GetFrameCount(temp_v0_3);
        SkelAnime_ChangeLinkAnim(arg0, &arg1->unk_284, (LinkAnimationHeader *) sp34, 1.0f, temp_f0, temp_f0, (u8) 2, 0.0f);
        func_80830AE8((Actor *) arg1);
        return 1;
    }
    return 0;
}

void func_80830CE8(GlobalContext *arg1) {
    func_8082F43C(arg1, (Actor *) func_80848AB0);
    if ((s32) arg1->unk_14A < 0) {
        func_80123C58(arg1);
    }
    SkelAnime_AnimReverse((SkelAnime *) &arg1->mainCamera.eye.z);
    func_80830B38((Actor *) arg1);
}

void func_80830D40(GlobalContext *arg0, Actor *arg1) {
    Actor *temp_a1;
    Actor *temp_a2;
    SkelAnime *temp_a0;
    f32 temp_f0;
    u8 temp_t9;
    f32 phi_f0;
    Player *phi_a2;
    f32 phi_f0_2;

    temp_t9 = ((arg1->unk_14E * 8) + &D_8085CC88)->unk_4;
    temp_a0 = arg1 + 0x284;
    temp_f0 = (f32) temp_t9;
    phi_f0_2 = temp_f0;
    if ((s32) temp_t9 < 0) {
        phi_f0_2 = temp_f0 + 4294967296.0f;
    }
    phi_f0 = phi_f0_2;
    if (arg1->unk_2A0 < 0.0f) {
        phi_f0 = phi_f0_2 - 1.0f;
    }
    arg1 = arg1;
    temp_a2 = arg1;
    phi_a2 = (Player *) temp_a2;
    if (func_80136A48(temp_a0, phi_f0) != 0) {
        temp_a1 = temp_a2;
        arg1 = temp_a2;
        func_808308DC(arg0, temp_a1, temp_a2);
        phi_a2 = (Player *) arg1;
    }
    func_8082FB68(phi_a2);
}

s32 func_80830DF0(Player *arg0) {
    if ((arg0->stateFlags3 * 2) < 0) {
        func_808302CC();
        return 1;
    }
    return 0;
}

s32 func_80830E30(Actor *arg0, GlobalContext *arg1) {
    s8 temp_v0;
    LinkAnimationHeader *phi_a2;
    LinkAnimationHeader *phi_a2_2;
    LinkAnimationHeader *phi_v0;
    LinkAnimationHeader *phi_v0_2;

    if ((arg0->unk_147 == 0x11) || (arg0->unk_14B == 2)) {
        func_8082F43C(arg1, arg0, func_8084923C);
        temp_v0 = arg0->unk_ADA;
        if (temp_v0 == 0x1B) {
            phi_a2_2 = (LinkAnimationHeader *) &D_0400E3A8;
        } else {
            if (temp_v0 == 0x1C) {
                phi_v0_2 = &D_0400E3B0;
            } else {
                phi_v0_2 = &D_0400E3B8;
            }
            phi_a2_2 = phi_v0_2;
        }
        SkelAnime_ChangeLinkAnimDefaultStop(arg1, arg0 + 0x284, phi_a2_2);
        arg0->unk_ACC = 0xA;
        goto block_17;
    }
    if (func_808306F8(arg0, arg1, func_8084923C) == 0) {
        return 0;
    }
    if (func_801240C8((Player *) arg0) != 0) {
        phi_a2 = &D_0400D9D8;
    } else {
        phi_v0 = &D_0400D4F0;
        if (arg0->unk_14B == 3) {
            phi_v0 = &D_0400E2F8;
        }
        phi_a2 = phi_v0;
    }
    SkelAnime_ChangeLinkAnimDefaultStop(arg1, arg0 + 0x284, phi_a2);
block_17:
    if (arg0->unk_A6C & 0x800000) {
        func_8082DB3C(arg1, arg0, &D_0400E050);
    } else if (((arg0->bgCheckFlags & 1) != 0) && (arg0->unk_14B != 2)) {
        func_8082DB3C(arg1, arg0, func_8082ED20(arg0, arg0, &D_0400E050));
    }
    return 1;
}

s32 func_80830F9C(GlobalContext *arg0) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = (s32) arg0->unk_1887C > 0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = ~(D_80862B44->press.button | ~0x4000) == 0;
    }
    return phi_v0;
}

s32 func_80830FD4(GlobalContext *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s8 temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->unk_1887C;
    temp_v0 = temp_v1 != 0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = (s32) temp_v1 < 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            phi_v0 = (D_80862B44->cur.button & 0xC00F) != 0;
        }
    }
    return phi_v0;
}

s32 func_80831010(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk_AA5;
    if ((temp_v0 == 0) || (temp_v0 == 3)) {
        if ((func_8082FBE8() != 0) || (arg0->unk_730 != 0) || (func_800DF86C(Play_GetCamera(arg1, 0), 0xD) == 0)) {
            return 1;
        }
        arg0->unk_AA5 = 3U;
        goto block_7;
    }
block_7:
    return 0;
}

s32 func_80831094(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    Actor *phi_a2;

    temp_a2 = arg0;
    phi_a2 = temp_a2;
    if ((temp_a2->unk_37C == 0) && ((temp_a2->unk_A6C << 6) >= 0) && ((D_80862B48 != 0) || (arg0 = temp_a2, phi_a2 = arg0, (func_80830F9C(arg1, temp_a2) != 0))) && (arg0 = phi_a2, (func_80830E30(phi_a2, arg1, phi_a2) != 0))) {
        return func_80831010(arg0, arg1, arg0);
    }
    return 0;
}

s32 func_80831124(Actor *arg1) {
    s32 temp_v0;

    temp_v0 = arg1->child;
    if (temp_v0 != 0) {
        if (arg1->unk_34C == 0) {
            arg1->unk_34C = temp_v0;
            func_8082DF48(arg1, (Player *)0xFF, 0xAU, (u8) 0xFA, (u8) 0);
            func_800B8E58(arg1, 0x1828U);
        }
        return 1;
    }
    return 0;
}

s32 func_80831194(GlobalContext *arg0, Player *arg1) {
    s32 sp34;
    s32 sp30;
    s16 temp_v0;
    s8 temp_v0_2;
    s32 phi_v0;

    phi_v0 = 0;
    if (arg1->leftHandActor != 0) {
        if (func_801240C8(arg1) == 0) {
            func_808305BC(arg0, (Actor *) arg1, &sp34, &sp30);
            if ((arg1->transformation != 3) && ((arg1->stateFlags3 & 0x400) == 0)) {
                if (gSaveContext.minigameState == 1) {
                    temp_v0 = arg0->sceneNum;
                    if ((temp_v0 != 0x20) && (temp_v0 != 0x35) && (temp_v0 != 0x24)) {
                        arg0->interfaceCtx.hbaAmmo += -1;
                    }
                } else {
                    temp_v0_2 = arg0->unk_1887C;
                    if (temp_v0_2 != 0) {
                        arg0->unk_1887C = temp_v0_2 - 1;
                    } else {
                        func_80115A14((s32) unksp36, -1);
                    }
                }
            }
            if (arg0->unk_1887C == 1) {
                arg0->unk_1887C = -0xA;
            }
            func_8082DF48((Actor *) arg0, arg1, 0x96U, 0xAU, (u8) 0x96, 0);
        } else {
            func_8082DF48((Actor *) arg0, arg1, 0xFFU, 0x14U, (u8) 0x96, 0);
            arg1->unk_B48 = 0.0f;
        }
        if (arg1->transformation == 3) {
            arg1->unk_D57 = 0x14;
        } else {
            arg1->unk_D57 = 4;
        }
        arg1->leftHandActor->parent = NULL;
        arg1->actor.child = NULL;
        arg1->leftHandActor = NULL;
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_8083133C(Player *arg0) {
    s16 temp_v0;

    arg0->stateFlags1 |= 0x20000;
    if (((arg0->skelAnime.flags & 0x80) == 0) && ((arg0->actor.bgCheckFlags & 0x200) != 0) && (D_80862B20 < 0x2000)) {
        temp_v0 = arg0->actor.wallYaw + 0x8000;
        arg0->actor.shape.rot.y = temp_v0;
        arg0->currentYaw = temp_v0;
    }
    arg0->targetYaw = arg0->actor.shape.rot.y;
}

s32 func_808313A8(GlobalContext *arg0, Player *arg1, Actor *arg2) {
    s32 phi_v0;

    phi_v0 = 0;
    if (arg2 == 0) {
        func_8082DE50(arg0, arg1);
        func_80836988(arg1, arg0);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_808313F0(Player *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    Player *temp_a1;

    temp_a1 = arg0;
    temp_a2 = temp_a1->leftHandActor;
    arg0 = temp_a1;
    if (func_808313A8(arg1, temp_a1, temp_a2) == 0) {
        func_8082F43C(arg1, (Actor *) arg0, func_808490B4);
        SkelAnime_ChangeLinkAnimDefaultRepeat(arg1, &arg0->unk_284, (LinkAnimationHeader *) &D_0400DB30);
    }
}

void func_80831454(Actor *arg0) {
    if (((arg0->unk_A74 * 4) < 0) || (arg0->unk_A70 & 0x2000000)) {
        func_801A89A8(0x110000FF);
    }
}

s32 func_80831494(GlobalContext *arg0, Actor *arg1, void (*arg2)(Actor *, GlobalContext *), s32 arg3) {
    void (*temp_v0)(Actor *, GlobalContext *);

    if (arg2 == arg1->unk_748) {
        return 0;
    }
    arg0->actorCtx.unk5 &= 0xFFFB;
    if ((arg1->flags * 4) < 0) {
        func_8019C300(0);
        arg1->flags &= 0xDFFFFFFF;
    } else {
        temp_v0 = arg1->unk_748;
        if ((temp_v0 == func_80857BE8) || (temp_v0 == func_808561B0)) {
            arg1->shape.shadowDraw = func_800B42F8;
            arg1->unk_ABC = 0.0f;
            arg1->shape.shadowScale = arg1->unk_A68->unk_4;
            if (temp_v0 == func_80857BE8) {
                if (arg1->unk_A74 & 0x80000) {
                    func_80115D5C(arg0);
                }
                func_8082DD2C(arg0, (Player *) arg1);
                arg1->shape.rot.x = 0;
                arg1->shape.rot.z = 0;
                arg1->bgCheckFlags &= 0xF7FF;
            } else {
                Actor_SetScale(arg1, 0.01f);
            }
        } else if ((arg1->unk_14B == 1) && (func_80124190(arg1) != 0)) {
            func_80831990(arg0, arg1, 0xFF);
        }
    }
    func_800AEF44(Effect_GetParams(arg1->unk_744));
    arg1->unk_748 = arg2;
    if ((arg1->unk_147 != arg1->unk_14A) && (((arg3 & 1) == 0) || ((arg1->unk_A6C << 9) >= 0))) {
        func_80123C58((GlobalContext *) arg1);
    }
    if (((arg3 & 1) == 0) && ((arg1->unk_A6C & 0x800) == 0)) {
        func_808309CC(arg0, arg1);
        SkelAnime_ChangeLinkAnimDefaultRepeat(arg0, arg1 + 0x284, func_8082ED20(arg1));
        arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xFFBFFFFF);
    }
    func_80831454(arg1);
    func_8082E794(arg1);
    arg1->unk_A6C = (s32) (arg1->unk_A6C & 0x4BFFFFBF);
    arg1->unk_A70 = (s32) (arg1->unk_A70 & 0xE577FFFF);
    arg1->unk_A74 = (s32) (arg1->unk_A74 & 0xDED05D75);
    arg1->unk_AE7 = 0;
    arg1->unk_AE8 = 0;
    arg1->unk_AA4 = 0;
    arg1->unk_B86 = 0;
    arg1->unk_B88 = 0;
    arg1->unk_B8A = 0;
    arg1->unk_B8C = 0;
    arg1->unk_B8E = 0;
    arg1->unk_B10 = 0.0f;
    arg1->unk_B14 = 0.0f;
    arg1->unk_B18 = 0.0f;
    arg1->unk_B1C = 0.0f;
    arg1->unk_B20 = 0.0f;
    *(arg1 + 0xB24) = 0.0f;
    arg1->shape.rot.z = 0;
    func_8082F09C(arg1);
    func_8082E00C(arg1);
    return 1;
}

void func_8083172C(GlobalContext *arg1) {
    s32 sp1C;

    sp1C = (s32) arg1->unk_275;
    arg1->unk_275 = 0U;
    func_80831494();
    arg1->unk_275 = (u8) sp1C;
}

void func_80831760(GlobalContext *arg1) {
    s32 sp24;
    s8 temp_v0;

    temp_v0 = arg1->unk_14A;
    if ((s32) temp_v0 >= 0) {
        sp24 = (s32) temp_v0;
        arg1->unk_14A = (s8) arg1->unk_147;
        func_80831494(arg1);
        arg1->unk_14A = (s8) sp24;
        func_80123AA4(arg1, func_80123960(arg1, arg1->unk_14A));
    }
}

void func_808317C4(Player *arg0) {
    Actor *temp_a0_2;
    Player *temp_a0;

    temp_a0 = arg0;
    arg0 = arg0;
    if (func_801240C8(temp_a0) != 0) {
        temp_a0_2 = arg0->leftHandActor;
        if (temp_a0_2 != 0) {
            arg0 = arg0;
            Actor_MarkForDeath(temp_a0_2);
            arg0->actor.child = NULL;
            arg0->leftHandActor = NULL;
        }
    }
}

s32 func_80831814(Player *arg0, GlobalContext *arg1, s32 arg2) {
    Player *temp_a0;

    if (((arg0->stateFlags1 & 0x6804) == 0) && (arg0 = arg0, (func_800DF86C(Play_GetCamera(arg1, 0), 6) != 0)) && ((temp_a0 = arg0, ((arg0->actor.bgCheckFlags & 1) != 0)) || ((arg0 = arg0, (func_801242B4(temp_a0) != 0)) && (arg0->actor.yDistToWater < arg0->ageProperties->unk_2C)))) {
        arg0->unk_AA5 = (u8) arg2;
        return 1;
    }
    return 0;
}

void func_808318C0(GlobalContext *arg0) {
    GlobalContext *temp_a0;
    GlobalContext *phi_a0;
    s32 phi_v0;

    temp_a0 = arg0;
    phi_a0 = temp_a0;
    if (func_80115DB4(NULL, 3U) != 0) {
        if (temp_a0->actorCtx.unk3 != 0) {
            arg0 = temp_a0;
            func_800B90F4(temp_a0);
            phi_a0 = arg0;
        } else {
            temp_a0->actorCtx.unk3 = 1;
        }
        phi_v0 = 0x482B;
        if (phi_a0->actorCtx.unk3 != 0) {
            phi_v0 = 0x482A;
        }
        play_sound(phi_v0 & 0xFFFF);
        return;
    }
    play_sound(0x4806U);
}

void func_80831944(GlobalContext *arg0, Actor *arg1) {
    if (func_8012364C(arg0, arg1, func_8082FDC4()) == 0xE) {
        func_808318C0(arg0);
    }
}

/*
Failed to decompile function func_80831990:

Label L80831A58 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80831F34(GlobalContext *arg0, Player *arg1, LinkAnimationHeader *arg2) {
    s32 sp24;
    void (*phi_a2)(Actor *, GlobalContext *);

    sp24 = func_801242B4(arg1);
    func_8082DE50(arg0, arg1);
    if (sp24 != 0) {
        phi_a2 = func_80851BD4;
    } else {
        phi_a2 = func_8084BFDC;
    }
    func_80831494(arg0, (Actor *) arg1, phi_a2, 0);
    func_8082DB18(arg0, arg1, arg2);
    if (arg2 == &D_0400D698) {
        arg1->skelAnime.animFrameCount = 84.0f;
    }
    arg1->stateFlags1 |= 0x80;
    func_8082DAD4((Actor *) arg1);
    func_8082DF8C((Actor *) arg1, 0x680BU);
    if (arg1 == arg0->actorCtx.actorList[2].first) {
        arg1->unk_A86 = (s8) arg0->unk_1879C[6];
        func_801A0184();
        gSaveContext.powderKegTimer = 0;
        gSaveContext.unk_1014 = 0;
        gSaveContext.unk_1016 = 0;
        if (func_80115130(arg0) != 0) {
            arg0->gameOverCtx.state = 0x14;
            arg1->unk_AE7 = 1;
        } else {
            arg0->gameOverCtx.state = 1;
            func_801A41F8(0);
            func_801A3098(0x20U);
            gSaveContext.seqIndex = 0xFF;
            gSaveContext.nightSeqIndex = 0xFF;
        }
        ShrinkWindow_SetLetterboxTarget(0x20);
    }
}

s32 func_80832090(Player *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 temp_v1;
    s32 phi_v0;

    if ((arg0->unk_748 != (s32) func_8084D770) || ((temp_v0 = (arg0->stateFlags3 & 0x40000000) != 0, phi_v0 = temp_v0, (temp_v0 != 0)) && ((temp_v1 = arg0->heldItemId, ((temp_v1 == 0xFC) != 0)) || (temp_v0_2 = temp_v1 == 0xFF, phi_v0 = temp_v0_2, (temp_v0_2 != 0))))) {
        temp_v0_3 = (arg0->unk_AC4 == (s32) func_80848808) == 0;
        phi_v0 = temp_v0_3;
        if (temp_v0_3 == 0) {
            phi_v0 = func_8082F524((Actor *) arg0->heldItemId) == arg0->itemActionParam;
        }
    }
    return phi_v0;
}

s32 func_8083213C(Player *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->unk_748;
    temp_v0 = temp_v1 == (s32) func_8084AC84;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        phi_v0 = temp_v1 == (s32) func_8084AEEC;
    }
    return phi_v0;
}

s32 func_8083216C(Player *arg0, GlobalContext *arg1) {
    if (((arg0->stateFlags1 << 8) >= 0) && (arg0->actor.parent != 0) && (func_801240C8(arg0) != 0)) {
        func_80831494(arg1, (Actor *) arg0, func_80855E08, 1);
        arg0->stateFlags3 |= 0x80;
        func_8082DB18(arg1, arg0, (LinkAnimationHeader *) &D_0400D9C8);
        func_8082E920(arg1, (Actor *) arg0, 0x9B);
        func_8082DAD4((Actor *) arg0);
        arg0->actor.bgCheckFlags &= 0xFFFE;
        arg0->unk_AA6 |= 0x43;
        arg0->currentYaw = arg0->actor.shape.rot.y;
        func_8082DF8C((Actor *) arg0, 0x6802U);
        goto block_21;
    }
    if ((func_80832090(arg0) != 0) && (func_808304BC((Actor *) arg0, arg1), (arg0->unk_748 == func_80852B28))) {
        goto block_21;
    }
    if (((s32 (*)(Player *, GlobalContext *)) arg0->unk_AC4)(arg0, arg1) == 0) {
        return 0;
    }
    if (arg0->unk_AC8 != 0.0f) {
        if ((func_8082ED94(arg0) == 0) || (arg0->linearVelocity != 0.0f)) {
            SkelAnime_LoadAnimationType4(arg1, (s32) arg0->skelAnime.limbCount, arg0->unk_284.limbDrawTbl, arg0->skelAnime.limbDrawTbl, D_8085B9F0);
        }
        if (((arg0->actor.bgCheckFlags & 1) != 0) && ((arg0->skelAnime.flags & 8) == 0)) {
            Math_StepToF(&arg0->unk_AC8, 0.0f, 0.25f);
            SkelAnime_LoadAnimationType2(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.limbDrawTbl, arg0->unk_284.limbDrawTbl, 1.0f - arg0->unk_AC8);
        }
    } else if ((func_8082ED94(arg0) == 0) || (arg0->linearVelocity != 0.0f) || ((arg0->skelAnime.flags & 8) != 0)) {
        SkelAnime_LoadAnimationType3(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.limbDrawTbl, arg0->unk_284.limbDrawTbl, D_8085B9F0);
    } else {
        SkelAnime_LoadAnimationType1(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.limbDrawTbl, arg0->unk_284.limbDrawTbl);
    }
block_21:
    return 1;
}

s32 func_808323C0(Actor *arg0, s16 arg1) {
    if (((s32) arg1 >= 0) && (ActorCutscene_GetCurrentIndex() != arg1)) {
        if (ActorCutscene_GetCanPlayNext(arg1) == 0) {
            ActorCutscene_SetIntentToPlay(arg1);
            return 0;
        }
        ActorCutscene_Start(arg1, arg0);
        goto block_5;
    }
block_5:
    arg0->unk_A86 = (s8) arg1;
    return 1;
}

s32 func_80832444(Actor *arg0) {
    s16 temp_a0;
    s8 temp_a2;

    temp_a2 = arg0->unk_A86;
    if ((s32) temp_a2 >= 0) {
        temp_a0 = (s16) temp_a2;
        arg0 = arg0;
        if (ActorCutscene_GetCanPlayNext(temp_a0) == 0) {
            ActorCutscene_SetIntentToPlay((s16) arg0->unk_A86);
            return 0;
        }
        ActorCutscene_Start((s16) arg0->unk_A86, arg0);
        goto block_4;
    }
block_4:
    return 1;
}

s32 func_8083249C(Actor *arg0) {
    if (((s32) arg0->unk_A86 >= 0) && (ActorCutscene_GetCurrentIndex() != arg0->unk_A86)) {
        return func_80832444(arg0);
    }
    return 1;
}

void func_808324EC(GlobalContext *arg0, Actor *arg1, void (*arg2)(GlobalContext *, Actor *), s32 arg3) {
    arg1->unk_D58 = arg2;
    arg1->unk_A86 = (s8) arg3;
    func_80831494(arg0, (Actor *) func_8084D770, NULL);
    func_8083249C(arg1);
    arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x40);
    func_8082DE14(arg0, (Player *) arg1);
}

void func_80832558(void) {
    func_808324EC((GlobalContext *)-1);
}

void func_80832578(Player *arg0, GlobalContext *arg1) {
    s16 sp26;
    s16 *temp_v0_2;
    s32 temp_a2;
    s32 temp_v0;

    sp26 = arg0->actor.shape.rot.y;
    temp_v0 = arg0->stateFlags2;
    temp_a2 = temp_v0 & 0x60;
    if (temp_a2 == 0) {
        temp_v0_2 = arg0->unk_730;
        if ((temp_v0_2 != 0) && ((arg1->actorCtx.targetContext.unk4B != 0) || (arg0 != arg1->actorCtx.actorList[2].first)) && (*temp_v0_2 != 0x233)) {
            Math_ScaledStepToS(arg0 + 0xBE, Math_Vec3f_Yaw(arg0 + 0x24, temp_v0_2 + 0x3C), 0xFA0);
            goto block_11;
        }
        if ((arg0->stateFlags1 & 0x20000) && (temp_a2 == 0)) {
            Math_ScaledStepToS(arg0 + 0xBE, arg0->targetYaw, 0xFA0);
        }
    } else if ((temp_v0 & 0x40) == 0) {
        Math_ScaledStepToS(arg0 + 0xBE, arg0->currentYaw, 0x7D0);
block_11:
    }
    arg0->unk_B4C = arg0->actor.shape.rot.y - sp26;
}

s16 func_80832660(s16 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0_2;
    s32 phi_v0;
    s16 phi_a1;

    temp_v1_2 = *arg0;
    temp_v0 = arg4 - temp_v1_2;
    if ((s32) temp_v0 < -(s32) arg5) {
        phi_v0 = (s32) arg5 * -0x10000;
    } else {
        phi_a1 = temp_v0;
        if ((s32) arg5 < (s32) temp_v0) {
            phi_a1 = arg5;
        }
        phi_v0 = phi_a1 << 0x10;
    }
    *arg0 = temp_v1_2 + (temp_v0 - (phi_v0 >> 0x10));
    arg3 = arg3;
    Math_ScaledStepToS(arg0, arg1, arg2);
    temp_v1 = *arg0;
    temp_v0_2 = -(s32) arg3;
    if ((s32) temp_v1 < temp_v0_2) {
        *arg0 = (s16) temp_v0_2;
        goto block_9;
    }
    if ((s32) arg3 < (s32) temp_v1) {
        *arg0 = arg3;
block_9:
    }
    return (s16) (temp_v1 - *arg0);
}

s16 func_80832754(Actor *arg0, s32 arg1) {
    s16 sp36;
    s16 *temp_a0;
    s16 temp_a1;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 phi_s1;

    temp_s1 = arg0->shape.rot.y;
    if (arg1 != 0) {
        arg0->unk_AA6 = (u16) (arg0->unk_AA6 | 0x41);
        arg0->unk_AB2 = (s16) arg0->focus.rot.x;
        phi_s1 = arg0->focus.rot.y;
    } else {
        temp_a1 = arg0->focus.rot.x;
        func_80832660(arg0 + 0xAB2, func_80832660(arg0 + 0xAAC, temp_a1, 0x258, 0x2710, (s16) (s32) temp_a1, (s16) 0), 0xC8, 0xFA0, (s16) (s32) arg0->unk_AAC, (s16) 0x2710);
        temp_a0 = &sp36;
        sp36 = arg0->focus.rot.y - temp_s1;
        func_80832660(temp_a0, 0, 0xC8, 0x5DC0, (s16) (s32) arg0->unk_AB4, (s16) 0x1F40);
        temp_s1_2 = arg0->focus.rot.y - sp36;
        func_80832660(arg0 + 0xAAE, (s16) (sp36 - arg0->unk_AB4), 0xC8, 0x1F40, (s16) (s32) sp36, (s16) 0x1F40);
        func_80832660(arg0 + 0xAB4, sp36, 0xC8, 0x1F40, (s16) (s32) arg0->unk_AAE, (s16) 0x1F40);
        arg0->unk_AA6 = (u16) (arg0->unk_AA6 | 0xD9);
        phi_s1 = temp_s1_2;
    }
    return phi_s1;
}

void func_80832888(Player *arg0, GlobalContext *arg1) {
    s32 sp1C;
    Actor *temp_a0_7;
    Actor *temp_v0_7;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a2;
    GlobalContext *temp_a2_2;
    Player *temp_a0_5;
    Player *temp_a0_6;
    Player *temp_a0_8;
    Player *temp_a3;
    Player *temp_a3_2;
    s32 temp_a0_10;
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    u32 temp_a0;
    u32 temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_9;
    s32 phi_v0;
    s32 phi_v1;
    void *phi_v1_2;
    void *phi_v1_3;
    s32 phi_a1;
    Player *phi_a3;
    Player *phi_a3_2;
    GlobalContext *phi_a2;
    Player *phi_a3_3;
    Player *phi_a3_4;

    temp_a3 = arg0;
    temp_a2 = arg1;
    temp_v0 = ~(D_80862B44->cur.button | ~0x2000) == 0;
    phi_v1 = 0;
    if (temp_v0 == 0) {
        temp_a3->stateFlags1 &= 0xBFFFFFFF;
    }
    if ((temp_a2->csCtx.state != 0) || (temp_a3->unk_394 != 0) || (temp_a0 = temp_a3->stateFlags1, ((temp_a0 & 0x20000080) != 0)) || ((temp_a3->stateFlags3 & 0x80) != 0)) {
        temp_a3->unk_738 = 0;
        phi_v0 = 0;
    } else if ((temp_v0 != 0) || ((temp_a3->stateFlags2 & 0x2000) != 0) || (temp_a3->unk_A78 != 0)) {
        temp_v0_3 = temp_a3->unk_738;
        if (temp_v0_3 < 6) {
            temp_a3->unk_738 = 5;
        } else {
            temp_a3->unk_738 = temp_v0_3 - 1;
        }
        phi_v0 = temp_a3->unk_738;
    } else if (temp_a0 & 0x20000) {
        temp_a3->unk_738 = 0;
        phi_v0 = 0;
    } else {
        temp_v0_2 = temp_a3->unk_738;
        temp_t0 = temp_v0_2 - 1;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_a3->unk_738 = temp_t0;
            phi_v0 = temp_t0;
        }
    }
    temp_a0_2 = temp_a2;
    if (phi_v0 >= 6) {
        phi_v1 = 1;
    }
    sp1C = phi_v1;
    arg1 = temp_a2;
    arg0 = temp_a3;
    temp_v0_4 = func_8082DAFC(temp_a0_2, temp_a2, temp_a3);
    temp_a2_2 = arg1;
    temp_a3_2 = arg0;
    phi_a3 = temp_a3_2;
    phi_a3_2 = temp_a3_2;
    phi_a2 = temp_a2_2;
    phi_a3_4 = temp_a3_2;
    phi_a2 = temp_a2_2;
    if ((temp_v0_4 != 0) || (temp_a3_2->unk_738 != 0) || ((temp_a3_2->stateFlags1 & 0x2001000) != 0)) {
        if (temp_v0_4 == 0) {
            temp_a0_3 = temp_a3_2->stateFlags1;
            if (((temp_a0_3 << 6) >= 0) && ((temp_a3_2->itemActionParam != 2) || (temp_a3_2->unk_B28 == 0)) && (~(D_80862B44->press.button | ~0x2000) == 0)) {
                temp_v0_5 = temp_a2_2->actorCtx.actorList[2].first;
                phi_v1_2 = (void *) temp_v0_5;
                if (temp_a3_2 == temp_v0_5) {
                    phi_v1_2 = temp_a2_2->actorCtx.targetContext.unk38;
                }
                temp_a1 = gSaveContext.zTargetSetting != 0;
                phi_v1_3 = phi_v1_2;
                phi_a1 = temp_a1;
                if (temp_a1 == 0) {
                    phi_a1 = (s32) temp_a3_2 != temp_v0_5;
                }
                temp_a3_2->stateFlags1 = temp_a0_3 | 0x8000;
                if ((temp_a3_2->currentMask != 0x14) && (phi_v1_2 != 0) && ((phi_v1_2->flags * 0x10) >= 0) && ((temp_a3_2->stateFlags3 & 0x2200) == 0)) {
                    temp_a0_4 = temp_a3_2->unk_730;
                    if ((phi_v1_2 == temp_a0_4) && (temp_a3_2 == temp_a2_2->actorCtx.actorList[2].first)) {
                        phi_v1_3 = temp_a2_2->actorCtx.targetContext.unk_94;
                    }
                    if ((phi_v1_3 != 0) && ((temp_v0_6 = phi_v1_3->flags, (phi_v1_3 != temp_a0_4)) || (temp_v0_6 & 0x80000))) {
                        phi_v1_3->flags = temp_v0_6 & 0xFFF7FFFF;
                        if (phi_a1 == 0) {
                            temp_a3_2->stateFlags2 |= 0x2000;
                        }
                        temp_a3_2->unk_730 = phi_v1_3;
                        temp_a3_2->unk_738 = 0xF;
                        temp_a3_2->stateFlags2 &= 0xFFDFFFFD;
                    } else {
                        temp_a0_5 = temp_a3_2;
                        if (phi_a1 == 0) {
                            arg1 = temp_a2_2;
                            arg0 = temp_a3_2;
                            func_80123DA4(temp_a0_5);
                            phi_a3 = arg0;
                            phi_a2 = arg1;
                        }
                    }
                    phi_a3->stateFlags1 &= 0xBFFFFFFF;
                    phi_a3_2 = phi_a3;
                } else if ((temp_a3_2->stateFlags1 & 0x40020000) == 0) {
                    temp_a0_6 = temp_a3_2;
                    if (temp_a3_2->unk_748 != func_808573A4) {
                        arg1 = temp_a2_2;
                        arg0 = temp_a3_2;
                        func_8083133C(temp_a0_6, phi_a1, temp_a2_2, temp_a3_2);
                        phi_a3_2 = arg0;
                        phi_a2 = arg1;
                    }
                }
            }
            temp_a0_7 = phi_a3_2->unk_730;
            phi_a3_3 = phi_a3_2;
            phi_a3_4 = phi_a3_2;
            if (temp_a0_7 != 0) {
                if ((phi_a3_2 == phi_a2->actorCtx.actorList[2].first) && (phi_a3_2->unk_A78 != temp_a0_7) && (arg0 = phi_a3_2, phi_a3_3 = arg0, (func_800B83F8(temp_a0_7, phi_a3_2, sp1C, phi_a3_2) != 0))) {
                    temp_a0_8 = arg0;
                    arg0 = arg0;
                    func_80123DA4(temp_a0_8);
                    arg0->stateFlags1 |= 0x40000000;
                    phi_a3_4 = arg0;
                } else {
                    temp_a0_9 = phi_a3_3->unk_730;
                    phi_a3_4 = phi_a3_3;
                    if (temp_a0_9 != 0) {
                        temp_a0_9->targetPriority = 0x28;
                    }
                }
            } else {
                temp_v0_7 = phi_a3_2->unk_A78;
                if (temp_v0_7 != 0) {
                    phi_a3_2->unk_730 = temp_v0_7;
                }
            }
        }
        temp_a0_10 = phi_a3_4->stateFlags1;
        if ((phi_a3_4->unk_730 != 0) && (temp_t8 = temp_a0_10 & 0xFFFCFFFF, ((phi_a3_4->stateFlags3 & 0x2200) == 0))) {
            temp_t9 = temp_t8 & 0x800;
            phi_a3_4->stateFlags1 = temp_t8;
            if ((temp_t9 != 0) || ((phi_a3_4->unk_730->flags & 5) != 5)) {
                phi_a3_4->stateFlags1 = temp_t8 | 0x10000;
                return;
            }
            /* Duplicate return node #69. Try simplifying control flow for better match */
            return;
        }
        if (temp_a0_10 & 0x20000) {
            phi_a3_4->stateFlags2 &= -0x2001;
            return;
        }
        func_80123DC0(phi_a3_4);
        return;
    }
    func_80123DC0(temp_a3_2);
}

s32 func_80832CAC(void *arg1, f32 *arg2, s16 *arg3, f32 arg4) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 phi_f14;
    f32 phi_f12;
    f32 phi_f14_2;

    if ((arg1->unk_AA5 != 0) || (func_8082DA90() != 0) || ((arg1->unk_A6C & 1) != 0)) {
        *arg2 = 0.0f;
        *arg3 = arg1->unk_BE;
        goto block_24;
    }
    *arg2 = D_80862AFC;
    *arg3 = D_80862B00;
    if (arg4 != 0.0f) {
        *arg2 -= 20.0f;
        temp_f2 = *arg2;
        if (temp_f2 < 0.0f) {
            *arg2 = 0.0f;
        } else {
            arg1 = arg1;
            arg2 = arg2;
            temp_f2_2 = 1.0f - Math_CosS((s16) (s32) (temp_f2 * 450.0f));
            *arg2 = (temp_f2_2 * temp_f2_2 * 30.0f) + 7.0f;
        }
    } else {
        *arg2 *= 0.8f;
    }
    if (arg1->unk_14B == 0) {
        *arg2 *= 1.5f;
    }
    if (D_80862AFC != 0.0f) {
        arg2 = arg2;
        arg1 = arg1;
        temp_f0 = Math_SinS(arg1->unk_B6C);
        temp_f2_3 = arg1->unk_AB8;
        temp_f12 = arg1->unk_B50;
        phi_f12 = temp_f12;
        if (temp_f2_3 != 0.0f) {
            if (arg1->unk_730 != 0) {
                phi_f14 = 0.002f;
            } else {
                phi_f14 = 0.008f;
            }
            temp_f12_2 = temp_f12 - (temp_f2_3 * phi_f14);
            phi_f12 = temp_f12_2;
            if (temp_f12_2 < 2.0f) {
                phi_f12 = 2.0f;
            }
        }
        *arg2 = (*arg2 * 0.14f) - (8.0f * temp_f0 * temp_f0);
        temp_f2_4 = *arg2;
        if (temp_f2_4 < 0.0f) {
            *arg2 = 0.0f;
            return 1;
        }
        if (phi_f12 < temp_f2_4) {
            phi_f14_2 = phi_f12;
        } else {
            phi_f14_2 = temp_f2_4;
        }
        *arg2 = phi_f14_2;
        return 1;
    }
block_24:
    return 0;
}

void func_80832F24(Actor *arg0) {
    Math_StepToF(arg0 + 0xAD0, 0.0f, (f32) gGameInfo->data[43] / 100.0f);
}

s32 func_80832F78(s16 *arg0, f32 arg1, s16 *arg2, void *arg3, f32 *arg4) {
    s32 temp_v0;

    if (func_80832CAC(arg3, arg4, arg0, arg1, arg2, arg3) == 0) {
        *arg2 = arg0->unk_BE;
        temp_v0 = arg0->unk_730;
        if (temp_v0 != 0) {
            if ((arg4->unk_1E0B != 0) && ((arg0->unk_A70 & 0x40) == 0)) {
                *arg2 = Math_Vec3f_Yaw((Vec3f *) (arg0 + 0x24), temp_v0 + 0x3C);
                return 0;
            }
            goto block_7;
        }
        if (func_80123434((Player *) arg0) != 0) {
            *arg2 = arg0->unk_AD6;
        }
block_7:
        return 0;
    }
    *arg2 += func_800DFC68(arg4[arg4->unk_810].unk_800);
    return 1;
}

s32 func_80833058(GlobalContext *arg0, Player *arg1, s8 *arg2, s8 *arg3) {
    s8 temp_v0;
    s8 temp_v0_2;
    s8 phi_v0;
    s8 *phi_s0;
    s32 phi_v0_2;

    phi_s0 = arg2;
    if (((arg1->stateFlags1 & 0x20000081) == 0) && (func_8082DA90(arg0) == 0)) {
        if ((arg3 != 0) && (D_80862B04 = func_8083216C(arg1, arg0), (arg1->unk_748 == func_80852B28))) {
            return 1;
        }
        if (func_801240DC((Actor *) arg1) != 0) {
            arg1->unk_AA6 |= 0x41;
            return 1;
        }
        if (((arg1->stateFlags3 * 2) >= 0) && (arg1->unk_AC4 != func_80848808)) {
            temp_v0 = *arg2;
            phi_v0 = temp_v0;
            phi_v0_2 = (s32) temp_v0;
            if ((s32) temp_v0 >= 0) {
loop_10:
                if (*(&D_8085D054 + (phi_v0 * 4))(arg1, arg0) != 0) {
                    return 1;
                }
                temp_v0_2 = phi_s0->unk_1;
                phi_v0 = temp_v0_2;
                phi_s0 += 1;
                phi_v0_2 = (s32) temp_v0_2;
                if ((s32) temp_v0_2 < 0) {
                    goto block_13;
                }
                goto loop_10;
            }
block_13:
            if (*(&D_8085D054 + (phi_v0_2 * -4))(arg1, arg0) != 0) {
                return 1;
            }
            goto block_15;
        }
block_15:
        if (func_8083213C(arg1) != 0) {
            return 1;
        }
        goto block_19;
    }
    if ((arg1->stateFlags1 & 0x800) != 0) {
        func_8083216C(arg1, arg0);
    }
block_19:
    return 0;
}

s32 func_808331FC(Player *arg0, s8 *arg1, SkelAnime *arg2, f32 arg3) {
    ? sp24;
    s16 sp22;

    if ((arg2->animFrameCount - arg3) <= arg2->animCurrentFrame) {
        if (func_80833058((bitwise GlobalContext *) arg3, arg0, arg1, D_8085D01C, 1) != 0) {
            return 0;
        }
        if ((D_80862B04 != 0) || (func_80832F78((s16 *) arg1, (bitwise f32) &sp24, &sp22, (void *)0x3C9374BC, (f32 *) arg0) != 0)) {
            return 1;
        }
        goto block_6;
    }
block_6:
    return -1;
}

void func_808332A0(GlobalContext *arg0, Player *arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 phi_v1;

    if (arg2 != 0) {
        arg1->unk_B08[0] = 0.0f;
    } else {
        arg1->unk_B08[0] = 0.5f;
    }
    arg1->stateFlags1 |= 0x1000;
    if ((arg1->actor.id == 0) && ((arg3 != 0) || (arg1->transformation == 4))) {
        phi_v1 = 0;
        phi_v1 = 0;
        if (arg3 != 0) {
            temp_v0 = arg1->unk_730;
            if (temp_v0 != 0) {
                phi_v1 = (s32) Math_Vec3f_Pitch(arg1 + 0xBEC, temp_v0 + 0x3C);
            }
            if (gSaveContext.magic != 0) {
                goto block_10;
            }
        } else {
block_10:
            if ((Actor_Spawn(arg0 + 0x1CA0, arg0, 0x35, arg1->bodyPartsPos[0].x, arg1->bodyPartsPos[0].y, arg1->bodyPartsPos[0].z, (s16) phi_v1, (s16) 0, (s16) 0, (s16) ((arg1->itemActionParam - 3) | arg2)) != 0) && (arg3 != 0)) {
                func_80115DB4(arg0, 1U, (GlobalContext *)7);
                arg1->unk_D57 = 4;
            }
        }
    }
}

s32 func_808333CC(Actor *arg0) {
    s8 sp25;
    s8 sp24;
    s32 temp_a1;
    s32 temp_a1_2;
    s8 *temp_v1;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_v1_2;
    s8 *phi_v0;
    s8 *phi_v1;
    s32 phi_a1;
    s32 phi_v0_2;
    s8 *phi_v1_2;
    s32 phi_v0_3;
    s8 phi_a2;
    s32 phi_a1_2;

    phi_v0 = arg0 + 0xADF;
    phi_v1 = &sp24;
    if (arg0->unk_147 == 7) {
        return 0;
    }
    phi_a1 = 0;
loop_3:
    temp_a0 = *phi_v0;
    temp_a1 = phi_a1 + 1;
    *phi_v1 = temp_a0;
    phi_v0 += 1;
    phi_a1 = temp_a1;
    if ((s32) temp_a0 < 0) {
        return 0;
    }
    temp_v1 = phi_v1 + 1;
    temp_v1->unk_-1 = (s8) (*phi_v1 * 2);
    phi_v1 = temp_v1;
    if (temp_a1 >= 4) {
        temp_v1_2 = sp24 - sp25;
        phi_a1_2 = 1;
        if ((s32) temp_v1_2 < 0) {
            phi_v0_2 = -(s32) temp_v1_2;
            phi_a2 = temp_v1_2;
        } else {
            phi_v0_2 = (s32) temp_v1_2;
            phi_a2 = temp_v1_2;
        }
        phi_v1_2 = &sp25;
        if (phi_v0_2 < 0xA) {
            return 0;
        }
loop_11:
        temp_a1_2 = phi_a1_2 + 1;
        temp_a0_2 = phi_v1_2->unk_0 - phi_v1_2->unk_1;
        phi_v0_3 = (s32) temp_a0_2;
        phi_a1_2 = temp_a1_2;
        if ((s32) temp_a0_2 < 0) {
            phi_v0_3 = -(s32) temp_a0_2;
        }
        if ((phi_v0_3 < 0xA) || ((temp_a0_2 * phi_a2) < 0)) {
            return 0;
        }
        phi_v1_2 += 1;
        if (temp_a1_2 == 3) {
            return 1;
        }
        goto loop_11;
    }
    goto loop_3;
}

void func_808334D4(GlobalContext *arg0, Player *arg1) {
    AnimationHeaderCommon *sp34;
    s8 temp_v0;
    AnimationHeaderCommon *phi_a2;

    temp_v0 = arg1->swordAnimation;
    if (((s32) temp_v0 >= 4) && ((s32) temp_v0 < 8)) {
        phi_a2 = *(&D_8085CF58 + (func_801241B4(arg1) * 4));
    } else {
        phi_a2 = *(&D_8085CF50 + (func_801241B4(arg1) * 4));
    }
    sp34 = phi_a2;
    func_8082DC38(arg1);
    SkelAnime_ChangeLinkAnim(arg0, &arg1->skelAnime, (LinkAnimationHeader *) phi_a2, 1.0f, 8.0f, (f32) SkelAnime_GetFrameCount(sp34), (u8) 2, -9.0f);
    func_808332A0(arg0, arg1, 0x200, 0);
}

void func_808335B0(GlobalContext *arg0, Actor *arg1) {
    func_80831494(arg0, arg1, func_8084CCEC, 1);
    func_808334D4(arg0, (Player *) arg1);
}

s8 func_808335F4(Player *arg0) {
    s32 sp1C;
    s32 sp18;
    Player *temp_a0;
    s8 temp_a1;
    s8 temp_v0_2;
    s8 temp_v1;
    s8 temp_v1_2;
    u8 temp_v0;
    Player *phi_a0;
    s32 phi_v1;
    Player *phi_a0_2;
    ? *phi_a1;
    s8 phi_v1_2;

    temp_v0 = arg0->transformation;
    temp_a1 = (arg0 + arg0->unk_ADE)->unk_AE3;
    if ((temp_v0 == 2) || (temp_v0 == 1)) {
        if (temp_v0 == 2) {
            phi_a1 = &D_8085D094;
        } else {
            phi_a1 = &D_8085D097;
        }
        temp_v0_2 = arg0->unk_ADD;
        temp_v1_2 = *(phi_a1 + temp_v0_2);
        phi_v1_2 = temp_v1_2;
        if (temp_v0_2 != 0) {
            arg0->swordAnimation = temp_v1_2;
            if ((s32) temp_v0_2 >= 2) {
                arg0->unk_ADD = -1;
            }
        }
    } else {
        sp1C = (s32) temp_a1;
        temp_a0 = arg0;
        phi_a0 = temp_a0;
        phi_a0_2 = temp_a0;
        if (func_808333CC((Actor *) temp_a1) != 0) {
            phi_v1 = 0x1E;
        } else {
            if ((s32) temp_a1 < 0) {
                arg0 = temp_a0;
                phi_a0 = arg0;
                if (func_8082FBE8(temp_a0, temp_a1) != 0) {
                    goto block_16;
                }
                phi_v1 = 4;
            } else {
                temp_v1 = *(&D_8085D090 + temp_a1);
                phi_v1 = (s32) temp_v1;
                if (temp_v1 == 0xC) {
                    temp_a0->stateFlags2 |= 0x40000000;
                    arg0 = temp_a0;
                    sp18 = (s32) temp_v1;
                    phi_a0 = arg0;
                    phi_v1 = (s32) temp_v1;
                    if (func_8082FBE8(temp_a0, temp_a1) == 0) {
block_16:
                        phi_a0 = arg0;
                        phi_v1 = 0;
                    }
                }
            }
            phi_a0_2 = phi_a0;
            if (phi_a0->itemActionParam == 7) {
                phi_v1 = 0;
            }
        }
        sp18 = phi_v1;
        phi_v1_2 = (s8) phi_v1;
        if (func_801241B4(phi_a0_2) != 0) {
            phi_v1_2 = phi_v1 + 1;
        }
    }
    return phi_v1_2;
}

void func_80833728(Actor *arg0, s32 arg1, s32 arg2, s8 arg3) {
    void *temp_v0;

    temp_v0 = arg0 + (arg1 << 7);
    temp_v0->unk_57C = arg2;
    temp_v0->unk_581 = arg3;
    if (arg2 == 2) {
        temp_v0->unk_591 = 0x15;
        return;
    }
    temp_v0->unk_591 = 5;
}

void func_8083375C(Actor *arg0, s32 arg1) {
    ? *sp24;
    s32 sp20;
    s32 phi_a1;
    u8 phi_v1;
    s32 phi_a3;
    ? *phi_v0;
    s32 phi_v1_2;
    s32 phi_a0;

    phi_v0 = &D_8085D09C;
    if (arg0->id == 0x159) {
        arg0->unk_ADA = -1;
        phi_a1 = 0x18;
        phi_v1 = arg0->unk_14B;
    } else {
        if (arg0->unk_14B == 1) {
            phi_a0 = 0;
        } else {
            phi_a0 = func_80124190(arg0);
        }
        phi_a1 = arg1;
        phi_v1 = arg0->unk_14B;
        phi_v0 = (phi_a0 * 8) + &D_8085D09C;
    }
    if ((phi_a1 >= 0x10) && (phi_a1 < 0x16)) {
        if (phi_v1 == 4) {
            phi_a3 = (s32) phi_v0->unk_7;
        } else {
            phi_a3 = (s32) phi_v0->unk_5;
        }
    } else {
        if (phi_v1 == 4) {
            phi_v1_2 = (s32) phi_v0->unk_6;
        } else {
            phi_v1_2 = (s32) phi_v0->unk_4;
        }
        phi_a3 = phi_v1_2;
    }
    sp20 = phi_a3;
    sp24 = phi_v0;
    func_80833728(arg0, 0, phi_v0->unk_0, (s8) phi_a3);
    func_80833728(arg0, 1, phi_v0->unk_0, (s8) phi_a3);
}

void func_80833864(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    LinkAnimationHeader **sp24;
    LinkAnimationHeader **temp_v0;
    s8 phi_s1;

    func_8083375C(arg1, arg2);
    func_80831494(arg0, arg1, func_808548B8, 0);
    arg1->unk_AE8 = 0;
    phi_s1 = (s8) arg2;
    if ((arg2 < 0x13) || (arg2 >= 0x16)) {
        func_8082DC38((Player *) arg1);
    }
    if ((arg2 != arg1->unk_ADA) || ((s32) arg1->unk_ADD >= 3)) {
        arg1->unk_ADD = 0;
    }
    arg1->unk_ADD = (s8) (arg1->unk_ADD + 1);
    if ((s32) arg1->unk_ADD >= 3) {
        phi_s1 = arg2 + 2;
    }
    arg1->unk_ADA = phi_s1;
    temp_v0 = (phi_s1 * 0x10) + &D_8085CD30;
    sp24 = temp_v0;
    func_8082DB90(arg0, arg1, *temp_v0);
    arg1->unk_ADC = (s8) (s32) (arg1->unk_254 + 4.0f);
    if (((u32) temp_v0 < (u32) &D_8085CE30) || ((u32) temp_v0 >= (u32) &D_8085CE60)) {
        func_8082E920(arg0, arg1, 0x19);
    }
    arg1->unk_AD4 = (s16) arg1->shape.rot.y;
}

void func_80833998(Actor *arg0, s8 arg1) {
    if ((s32) arg0->unk_D5C >= 0) {
        arg0->unk_D5C = arg1;
        arg0->unk_B5F = 0;
    }
}

void func_808339B4(Actor *arg0, s32 arg1) {
    if (arg1 < (s32) arg0->unk_D5C) {
        arg0->unk_D5C = (s8) arg1;
    }
    arg0->unk_B5F = 0;
}

void func_808339D4(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    s16 phi_a2;

    phi_a2 = (s16) arg2;
    if ((arg1->unk_D5C != 0) || ((arg1->unk_A74 << 9) < 0) || (arg1->id != 0)) {
        return;
    }
    if (arg1->category != 2) {
        arg1->colChkInfo.damage = (u8) -arg2;
        Actor_ApplyDamage(arg1);
        return;
    }
    if (arg1->unk_153 == 0x14) {
        phi_a2 = (s16) (arg2 >> 2);
    }
    func_80115908(arg0, (u8) phi_a2);
}

void func_80833A64(Actor *arg0) {
    void *temp_t6;

    temp_t6 = arg0->unk_260;
    arg0->unk_278 = (unaligned s32) temp_t6->unk_0;
    arg0->unk_27C = (u16) temp_t6->unk_4;
    func_8082E820((Actor *)3);
}

void func_80833AA0(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    Actor *temp_a1_2;
    Actor *phi_a1;

    temp_a1 = arg0;
    arg0 = temp_a1;
    temp_a1_2 = arg0;
    phi_a1 = temp_a1_2;
    if (func_80831494(arg1, temp_a1, func_8084C16C, 0) != 0) {
        arg0 = temp_a1_2;
        func_8082DB3C(arg1, temp_a1_2, (LinkAnimationHeader *) &D_0400DD30);
        arg0->unk_AE8 = 1;
        phi_a1 = arg0;
    }
    if (phi_a1->unk_AA5 != 4) {
        phi_a1->unk_AA5 = 0U;
    }
}

void func_80833B18(GlobalContext *arg0, Actor *arg1, Actor *arg2, f32 arg3, f32 arg4, s16 arg5, s32 arg6) {
    s32 *sp2C;
    s32 **sp28;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v0;
    s32 **phi_v1;
    s32 **phi_v1_2;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 **phi_v1_3;

    sp2C = NULL;
    if ((arg1->unk_A6C & 0x2000) != 0) {
        func_80833A64(arg1);
    }
    arg1->unk_B64 = 0;
    func_800B8E58(arg1, 0x83FU);
    if ((func_808339D4(arg0, arg1, -(s32) arg1->colChkInfo.damage) != 0) || ((arg1->unk_A70 = (s32) (arg1->unk_A70 & ~0x80), ((arg1->bgCheckFlags & 1) == 0)) && ((arg1->unk_A6C * 0x10) >= 0))) {
        if (arg1->colChkInfo.damage != 0) {
            func_80833998(arg1, (s8) arg6);
        }
        if ((arg1->unk_A70 & 0x10) == 0) {
            if (arg2 == 3) {
                func_80831494(arg0, arg1, func_808546D0, 0);
                sp2C = &D_0400DCD0;
                func_8082DAD4(arg1);
                arg1->velocity.y = 0.0f;
                func_8082DF48((Actor *) arg0, (Player *) arg1, 0xFFU, 0xAU, (u8) 0x28, 0);
                func_800B8E58(arg1, 0x874U);
                func_8082DF8C(arg1, 0x6806U);
                goto block_47;
            }
            if (arg2 == 4) {
                func_80831494(arg0, arg1, func_80854800, 0);
                func_8082DB60(arg0, arg1, &D_0400DC20);
                func_8082DAD4(arg1);
                arg1->unk_AE8 = 0x14;
                arg1->velocity.y = 0.0f;
                func_8082DF48((Actor *) arg0, (Player *) arg1, 0xFFU, 0x50U, (u8) 0x96, 0);
                goto block_47;
            }
            arg5 -= arg1->shape.rot.y;
            temp_v0 = arg1->unk_A6C;
            if ((temp_v0 * 0x10) < 0) {
                func_80831494(arg0, arg1, func_80851B58, 0);
                func_8082DF48((Actor *) arg0, (Player *) arg1, 0xB4U, 0x14U, (u8) 0x32, 0);
                if (arg2 == 1) {
                    arg1->unk_AD0 = (f32) (arg3 * 1.5f);
                    arg1->velocity.y = arg4 * 0.7f;
                } else {
                    arg1->unk_AD0 = 4.0f;
                    arg1->velocity.y = 0.0f;
                }
                func_8082DF8C(arg1, 0x6805U);
                sp2C = &D_0400DFF8;
                goto block_43;
            }
            if ((arg2 == 1) || (arg2 == 2) || ((arg1->bgCheckFlags & 1) == 0) || ((temp_v0 & 0x206004) != 0)) {
                func_80831494(arg0, arg1, func_8084BC64, 0);
                arg1->unk_A74 = (s32) (arg1->unk_A74 | 2);
                func_8082DF48((Actor *) arg0, (Player *) arg1, 0xFFU, 0x14U, (u8) 0x96, 0);
                func_8082DAD4(arg1);
                if (arg2 == 2) {
                    arg1->unk_AE8 = 4;
                    arg1->speedXZ = 3.0f;
                    arg1->unk_AD0 = 3.0f;
                    arg1->velocity.y = 6.0f;
                    func_8082E5A8(arg0, arg1, *(&D_8085BECC + (arg1->unk_14F * 4)));
                    func_8082DF8C(arg1, 0x6805U);
                } else {
                    arg1->speedXZ = arg3;
                    arg1->unk_AD0 = arg3;
                    arg1->velocity.y = arg4;
                    phi_v0_2 = (s32) arg5;
                    if ((s32) arg5 < 0) {
                        phi_v0_2 = -(s32) arg5;
                    }
                    if (phi_v0_2 >= 0x4001) {
                        sp2C = &D_0400DC78;
                    } else {
                        sp2C = &D_0400DAD0;
                    }
                    func_8082DF8C(arg1, 0x6808U);
                }
                arg1->bgCheckFlags &= 0xFFFE;
                goto block_43;
            }
            if ((arg1->unk_AD0 > 4.0f) && (func_80123420((Player *) arg1, arg1, func_80851B58) == 0)) {
                arg1->unk_B64 = 0x14;
                func_8082DF48((Actor *) arg0, (Player *) arg1, 0x78U, 0x14U, (u8) 0xA, 0);
                func_8082DF8C(arg1, 0x6805U);
                return;
            }
            sp28 = D_8085D0D4;
            func_80831494(arg0, arg1, func_8084BBF0, 0);
            func_8082FC60(arg1);
            if ((s32) arg1->colChkInfo.damage < 5) {
                sp28 = D_8085D0D4;
                func_8082DF48((Actor *) arg0, (Player *) arg1, 0x78U, 0x14U, (u8) 0xA, 0);
                phi_v1_3 = D_8085D0D4;
            } else {
                func_8082DF48((Actor *) arg0, (Player *) arg1, 0xB4U, 0x14U, (u8) 0x64, 0);
                arg1->unk_AD0 = 23.0f;
                phi_v1_3 = D_8085D0E4;
            }
            phi_v0 = (s32) arg5;
            phi_v1 = phi_v1_3;
            if ((s32) arg5 < 0) {
                phi_v0 = -(s32) arg5;
            }
            if (phi_v0 < 0x4001) {
                phi_v1 = phi_v1_3 + 8;
            }
            sp28 = phi_v1;
            phi_v1_2 = phi_v1;
            if (func_80123420((Player *) arg1) != 0) {
                phi_v1_2 = phi_v1 + 4;
            }
            sp2C = *phi_v1_2;
            func_8082DF8C(arg1, 0x6805U);
block_43:
            arg1->shape.rot.y += arg5;
            temp_v1 = arg1->shape.rot.y;
            arg1->unk_AD4 = temp_v1;
            arg1->world.rot.y = temp_v1;
            phi_v0_3 = (s32) arg5;
            if ((s32) arg5 < 0) {
                phi_v0_3 = -(s32) arg5;
            }
            if (phi_v0_3 >= 0x4001) {
                arg1->shape.rot.y = temp_v1 + 0x8000;
            }
block_47:
            func_8082DE50(arg0, (Player *) arg1);
            arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x4000000);
            if (sp2C != 0) {
                func_8082DB90(arg0, arg1, (LinkAnimationHeader *) sp2C);
            }
            /* Duplicate return node #49. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #49. Try simplifying control flow for better match */
    }
}

s32 func_808340AC(u32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 - 2;
    if ((temp_v0 >= 0) && (temp_v0 < 2)) {
        return temp_v0;
    }
    return -1;
}

s32 func_808340D4(u32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v0 = arg0 == 4;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        temp_v0_2 = arg0 == 7;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            phi_v0 = arg0 == 0xC;
        }
    }
    return phi_v0;
}

void func_80834104(GlobalContext *arg1) {
    func_80831494((GlobalContext *) func_8085421C, NULL);
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0xA0000000);
}

void func_80834140(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    if ((arg1->unk_A6C & 0x80) == 0) {
        func_80834104(arg0, arg1);
        if (func_8082DA90(arg0) != 0) {
            arg1->unk_AE8 = -0x1E;
        }
        arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x80);
        SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, arg2, 1.0f, 0.0f, 84.0f, (u8) 2, -6.0f);
        arg1->unk_AE7 = 1;
        arg1->unk_AD0 = 0.0f;
    }
}

s32 func_808341F4(GlobalContext *arg0, Actor *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    s16 temp_s0;
    u8 temp_t3;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_s2;
    u8 *phi_s1;
    f32 phi_f16;
    f32 phi_f18;
    f32 phi_f14;
    s16 phi_s0;
    f32 phi_f0;
    s32 phi_s3;
    s32 phi_v0;
    s32 phi_v1;
    f32 phi_f2;

    temp_v0 = arg1->unk_14B;
    phi_s1 = arg1 + 0xD45;
    phi_s3 = 0;
    if ((temp_v0 == 2) || (temp_v0 == 3)) {
        phi_s2 = 0;
        if ((arg1->bgCheckFlags & 1) != 0) {
            if ((arg1->unk_52A & 2) != 0) {
                Math_Vec3f_Copy(arg1 + 0x24, arg1 + 0x108);
                arg1->unk_AD0 = 0.0f;
            }
            func_80834140(arg0, arg1, (LinkAnimationHeader *) &D_0400D698);
        }
    } else {
        if (temp_v0 == 1) {
            phi_v1 = 0x14;
        } else {
            phi_v1 = (s32) (arg1->unk_AD0 * 0.4f) + 1;
        }
        phi_v0 = 0;
        if ((arg1->unk_A70 & 8) != 0) {
            phi_v0 = 0x64;
        }
        phi_s2 = phi_v0 + phi_v1;
    }
    phi_f16 = 20.0f;
    phi_f18 = 0.01f;
    phi_s0 = 0;
    phi_f16 = 20.0f;
    phi_f18 = 0.01f;
    do {
        temp_v0_2 = *phi_s1;
        temp_t3 = temp_v0_2 - phi_s2;
        if (phi_s2 >= (s32) temp_v0_2) {
            *phi_s1 = 0;
        } else {
            *phi_s1 = temp_t3;
            temp_f12 = (f32) (temp_t3 & 0xFF);
            phi_s3 = 1;
            if (phi_f16 < temp_f12) {
                temp_f0 = (temp_f12 - phi_f16) * phi_f18;
                if (temp_f0 < 0.19999999f) {
                    phi_f14 = 0.19999999f;
                } else if (temp_f0 > 0.2f) {
                    phi_f14 = 0.2f;
                } else {
                    phi_f14 = temp_f0;
                }
            } else {
                phi_f14 = temp_f12 * phi_f18;
            }
            temp_f0_2 = (temp_f12 - 25.0f) * 0.02f;
            if (temp_f0_2 < 0.0f) {
                phi_f0 = 0.0f;
            } else {
                if (temp_f0_2 > 1.0f) {
                    phi_f2 = 1.0f;
                } else {
                    phi_f2 = temp_f0_2;
                }
                phi_f0 = phi_f2;
            }
            EffectSsFireTail_SpawnFlameOnPlayer(temp_f12, phi_f14, arg0, phi_f14, phi_s0, phi_f0);
        }
        temp_s0 = phi_s0 + 1;
        phi_s1 += 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x12);
    if (phi_s3 != 0) {
        func_800B8E58(arg1, 0x2031U);
        if ((arg0->gameplayFrames & 3) == 0) {
            func_8085B3E0(arg0, -1);
        }
    } else {
        arg1->unk_D44 = 0;
    }
    return arg1->unk_A6C & 0x80;
}

void func_808344C0(GlobalContext *arg0, Actor *arg1) {
    s32 temp_s0;
    Actor *phi_s1;
    s32 phi_s0;

    phi_s1 = arg1;
    phi_s0 = 0;
    do {
        temp_s0 = phi_s0 + 1;
        phi_s1->unk_D45 = Rand_S16Offset(0, 0xC8);
        phi_s1 += 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x12);
    arg1->unk_D44 = 1;
    func_808341F4(arg0, arg1);
}

void func_80834534(GlobalContext *arg0, Actor *arg1) {
    func_8082DF8C(arg1, 0x6808U);
    func_808344C0(arg0, arg1);
}

s32 func_8083456C(GlobalContext *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if (arg1->unk_BB == 1) {
        phi_v0 = func_80834534();
    }
    return phi_v0;
}

void func_808345A8(Actor *arg0) {
    s8 temp_v0;

    temp_v0 = arg0->unk_D5C;
    if (((s32) temp_v0 > 0) && ((s32) temp_v0 < 0x14)) {
        arg0->unk_D5C = 0x14;
    }
}

void func_808345C8(void) {
    if (gSaveContext.inventory.items[gItemSlots[0x32]] == 0x32) {
        gSaveContext.playerForm = 4;
        gSaveContext.equippedMask = 0;
    }
}

s32 func_80834600(Player *arg0, GlobalContext *arg1) {
    s32 sp70;
    s32 sp6C;
    s32 sp64;
    Actor *sp60;
    Actor *sp5C;
    s32 sp58;
    u32 sp54;
    CollisionContext *sp38;
    Actor *temp_t5;
    ColliderInfo *temp_v0_2;
    CollisionContext *temp_a0_2;
    CollisionPoly *temp_a1;
    s32 temp_v1_2;
    s8 temp_v1;
    u32 temp_a0;
    u32 temp_ret;
    u32 temp_v0_4;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_5;
    s32 phi_v0;
    Actor *phi_a2;
    s32 phi_v1;
    s32 phi_a1;
    u32 phi_a3;
    u8 phi_v1_2;
    Actor *phi_a2_2;
    s32 phi_v1_3;
    LinkAnimationHeader *phi_a2_3;

    if (arg0->unk_D6A != 0) {
        if (func_80123358(arg1, arg0) == 0) {
            func_8085B3E0(arg1, -0x10);
            arg0->unk_D6A = 0;
        }
        goto block_95;
    }
    phi_v0 = 0;
    if ((func_800B6FC8(arg0) - 8.0f) < (arg0->unk_AB8 * arg0->actor.scale.y)) {
        phi_v0 = 1;
    }
    if ((phi_v0 != 0) || ((arg0->actor.bgCheckFlags & 0x100) != 0) || (temp_a0 = D_80862B08, (temp_a0 == 9)) || (arg0->stateFlags2 & 0x80000000)) {
        sp70 = phi_v0;
        func_8082DF8C((Actor *) arg0, 0x6805U);
        if (phi_v0 != 0) {
            func_80169FDC(arg1);
            func_808345C8();
            Scene_SetExitFade(arg1);
        } else {
            func_80169EFC(arg1);
            func_808345C8();
        }
        func_8082DF8C((Actor *) arg0, 0x680CU);
        arg1->unk_18845 = 1;
        play_sound(0x5801U);
        goto block_95;
    }
    temp_v0 = arg0->unk_B75;
    if ((temp_v0 != 0) && (((s32) temp_v0 >= 3) || (arg0->invincibilityTimer == 0))) {
        sp6C = D_8085D0F4;
        if (func_8083456C(arg1, arg0) == 0) {
            if (arg0->unk_B75 == 4) {
                arg0->unk_B65 = 0x28;
            }
            arg0->actor.colChkInfo.damage += arg0->unk_B74;
            func_80833B18(arg1, (Actor *) arg0, (Actor *) (sp + arg0->unk_B75)->unk_6B, arg0->unk_B78, arg0->unk_B7C, (s16) (s32) arg0->unk_B76, 0x14);
        }
        goto block_95;
    }
    if (((arg0->shieldQuad.base.acFlags & 0x80) != 0) || ((arg0->shieldCylinder.base.acFlags & 0x80) != 0) || ((temp_v1 = arg0->invincibilityTimer, ((s32) temp_v1 < 0)) && ((arg0->cylinder.base.acFlags & 2) != 0) && (temp_v0_2 = arg0->cylinder.info.acHitInfo, (temp_v0_2 != 0)) && (temp_v0_2->toucher.dmgFlags != 0x20000000))) {
        func_8082DF48((Actor *) arg1, arg0, 0xB4U, 0x14U, (u8) 0x64, 0);
        if (((s32) arg0->invincibilityTimer >= 0) && (func_801234B0(arg0) == 0)) {
            sp64 = arg0->unk_748 == (s32) func_8084B5C0;
            if (func_801242B4(arg0) == 0) {
                func_80831494(arg1, (Actor *) arg0, func_8084BAA4, 0);
            }
            arg0->unk_AE7 = (s8) sp64;
            if ((s8) sp64 == 0) {
                func_8082F43C(arg1, (Actor *) arg0, func_80848A0C);
                if (arg0->unk_B40 < 0.5f) {
                    phi_a2_3 = *(&D_8085CFD4 + (func_801241B4(arg0) * 4));
                } else {
                    phi_a2_3 = *(&D_8085CFCC + (func_801241B4(arg0) * 4));
                }
                SkelAnime_ChangeLinkAnimDefaultStop(arg1, &arg0->unk_284, phi_a2_3);
            } else {
                func_8082DB18(arg1, arg0, *(&D_8085CFDC + (func_801241B4(arg0, arg0, func_80848A0C) * 4)));
            }
        }
        if ((arg0->stateFlags1 & 0x206004) == 0) {
            arg0->linearVelocity = -18.0f;
            arg0->currentYaw = arg0->actor.shape.rot.y;
        }
        return 0;
    }
    if ((arg0->unk_D6B != 0) || ((s32) temp_v1 > 0) || ((arg0->stateFlags1 << 5) < 0) || (arg0->unk_394 != 0) || ((arg0->swordQuads[0].base.atFlags & 2) != 0) || ((arg0->swordQuads[1].base.atFlags & 2) != 0) || ((arg0->cylinder.base.atFlags & 2) != 0) || ((arg0->shieldCylinder.base.atFlags & 2) != 0)) {
        return 0;
    }
    if ((arg0->cylinder.base.acFlags & 2) != 0) {
        temp_t5 = arg0->cylinder.base.ac;
        sp60 = temp_t5;
        if (temp_t5->flags & 0x1000000) {
            func_800B8E58((Actor *) arg0, 0x83EU);
        }
        temp_v0_3 = arg0->actor.colChkInfo.acHitEffect;
        if (temp_v0_3 == 2) {
            phi_a2 = (Actor *)3;
            goto block_66;
        }
        if (temp_v0_3 == 3) {
            phi_a2 = (Actor *)4;
            goto block_66;
        }
        phi_a2 = (Actor *)1;
        if (temp_v0_3 == 7) {
            arg0->unk_B65 = 0x28;
            goto block_66;
        }
        if (temp_v0_3 == 9) {
            sp5C = (Actor *)1;
            if (func_80834534(arg1, (Actor *) arg0, (Actor *)1) != 0) {

            } else {
                goto block_66;
            }
        } else {
            if (((temp_v0_3 == 4) && (arg0->currentMask != 0x14)) || ((arg0->stateFlags3 & 0x1000) != 0)) {
                goto block_66;
            }
            sp5C = NULL;
            phi_a2 = sp5C;
            if (func_8083456C(arg1, arg0, (Actor *)1) != 0) {

            } else {
block_66:
                sp5C = phi_a2;
                func_80833B18(arg1, (Actor *) arg0, phi_a2, 4.0f, 5.0f, (s16) Actor_YawBetweenActors(sp60, (Actor *) arg0), 0x14);
            }
        }
        goto block_95;
    }
    if (temp_v1 != 0) {
        return 0;
    }
    sp58 = func_808340AC(temp_a0, arg0, 0xB4U, 0x14U);
    temp_a0_2 = &arg1->colCtx;
    sp38 = temp_a0_2;
    temp_ret = func_800C9E88(temp_a0_2, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId);
    temp_v0_4 = temp_ret;
    phi_a1 = 0;
    phi_a3 = temp_v0_4;
    if ((sp58 < 0) || ((temp_v0_4 == 0) && (arg0->transformation == 1) && !(arg0->actor.yDistToWater > 0.0f))) {
        temp_a1 = arg0->actor.wallPoly;
        temp_v1_2 = temp_a1 != 0;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 != 0) {
            sp54 = temp_v0_4;
            phi_v1 = func_800C9E88(temp_a0_2, temp_a1, (s32) arg0->actor.wallBgId) != 0;
        }
        phi_a1 = phi_v1;
        phi_a3 = temp_ret;
        if (phi_v1 != 0) {
            goto block_76;
        }
        return 0;
    }
block_76:
    temp_v0_5 = arg0->transformation;
    if (phi_a1 != 0) {
        phi_v1_2 = arg0->actor.wallBgId;
    } else {
        phi_v1_2 = arg0->actor.floorBgId;
    }
    if (((temp_v0_5 == 3) || (temp_v0_5 == 2)) && (sp58 >= 0) && (phi_a3 == 0) && ((arg0->stateFlags1 * 0x10) >= 0) && ((arg0->actor.bgCheckFlags & 1) != 0) && (arg0->actor.yDistToWater < -30.0f)) {
        func_80834534(arg1, (Actor *) arg0);
    } else {
        arg0->actor.colChkInfo.damage = 4;
        if (phi_v1_2 == 0x32) {
            phi_a2_2 = NULL;
        } else {
            phi_a2_2 = (Actor *)1;
        }
        if (phi_a1 != 0) {
            phi_v1_3 = (s32) arg0->actor.wallYaw;
        } else {
            phi_v1_3 = (s32) arg0->actor.shape.rot.y;
        }
        func_80833B18(arg1, (Actor *) arg0, phi_a2_2, 4.0f, 5.0f, (s16) phi_v1_3, 0x14);
    }
block_95:
    return 1;
}

void func_80834CD0(Actor *arg0, f32 arg1, u16 arg2) {
    u16 temp_a1;

    temp_a1 = arg2 & 0xFFFF;
    arg0->bgCheckFlags &= 0xFFFE;
    arg0->velocity.y = arg1 * D_8085C3E4;
    if (temp_a1 != 0) {
        arg2 = temp_a1;
        func_8082E188((bitwise Actor *) arg1, temp_a1);
        func_8082DF8C(arg0, arg2);
    }
    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x40000);
    arg0->unk_B68 = (s16) (s32) arg0->world.pos.y;
}

void func_80834D50(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2, f32 arg3, u16 arg4) {
    func_80831494(arg0, arg1, func_8084C16C, 1);
    if (arg2 != 0) {
        func_8082DB90(arg0, arg1, arg2);
    }
    func_80834CD0(arg1, arg3, arg4);
}

void func_80834DB8(LinkAnimationHeader *arg0, f32 arg1, GlobalContext *arg2, Actor *arg3) {
    func_80834D50(arg2, arg3, arg0, arg1, (u16) arg2, 0x6800);
}

? func_80834DFC(Player *arg0, GlobalContext *arg1) {
    s32 sp5C;
    s32 *sp58;
    f32 sp54;
    CollisionPoly *sp4C;
    s32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    CollisionContext *sp28;
    CollisionContext *temp_a0;
    CollisionPoly *temp_v0_3;
    PlayerAgeProperties *temp_v0_4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 temp_v1;
    u32 temp_v0_2;
    u8 temp_v0;
    f32 phi_f0;
    s32 phi_v1;
    f32 phi_f0_2;

    temp_v0 = arg0->transformation;
    if ((temp_v0 != 1) && ((temp_v0 != 3) || (func_801242B4(arg0) != 0) || ((s32) arg0->unk_B5C < 4)) && (temp_v0_2 = arg0->stateFlags1, ((temp_v0_2 & 0x800) == 0)) && ((s32) arg0->unk_B5C >= 2) && (((temp_v0_2 * 0x10) >= 0) || (arg0->unk_B54 < arg0->ageProperties->unk_14))) {
        sp5C = 0;
        phi_v1 = sp5C;
        if (func_801242B4(arg0) != 0) {
            if (arg0->transformation == 0) {
                phi_f0 = 80.0f;
            } else {
                phi_f0 = 50.0f;
            }
            if (arg0->actor.yDistToWater < phi_f0) {
                if (((s32) arg0->unk_B5C < 2) || (arg0->ageProperties->unk_10 < arg0->unk_B54)) {
                    goto block_48;
                }
                goto block_23;
            }
            if (((s32) arg0->currentBoots < 5) || ((s32) arg0->unk_B5C >= 3)) {
                goto block_48;
            }
            goto block_23;
        }
        if (((arg0->actor.bgCheckFlags & 1) == 0) || ((arg0->ageProperties->unk_14 <= arg0->unk_B54) && ((arg0->stateFlags1 * 0x10) < 0))) {
            goto block_48;
        }
block_23:
        if ((arg0->actor.wallBgId != 0x32) && ((D_80862B0C & 0x40) != 0)) {
            if ((s32) arg0->unk_B5D >= 6) {
                arg0->stateFlags2 |= 4;
                if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                    goto block_30;
                }
            }
        } else if (((s32) arg0->unk_B5D >= 6) || (~(D_80862B44->press.button | 0xFFFF7FFF) == 0)) {
block_30:
            phi_v1 = 1;
        }
        if (phi_v1 != 0) {
            func_80831494(arg1, (Actor *) arg0, func_8084D4EC, 0);
            temp_f0 = arg0->unk_B54;
            if (arg0->ageProperties->unk_14 <= temp_f0) {
                sp58 = &D_0400DA70;
                arg0->linearVelocity = 1.0f;
            } else {
                temp_v0_3 = arg0->actor.wallPoly;
                sp44 = (f32) temp_v0_3->normal.x * 0.00003051851f;
                sp40 = (f32) temp_v0_3->normal.z * 0.00003051851f;
                temp_f2 = arg0->unk_B58 + 0.5f;
                arg0->stateFlags1 |= 4;
                sp54 = temp_f0;
                sp3C = temp_f2;
                if (func_801242B4((bitwise Player *) 0.00003051851f, arg0) != 0) {
                    sp58 = &D_0400DFC8;
                    arg0->stateFlags1 &= 0xF7FFFFFF;
                    phi_f0_2 = temp_f0 - (60.0f * arg0->ageProperties->unk_08);
                } else {
                    temp_v0_4 = arg0->ageProperties;
                    if (temp_v0_4->unk_18 <= temp_f0) {
                        sp58 = &D_0400DA68;
                        phi_f0_2 = temp_f0 - (59.0f * temp_v0_4->unk_08);
                    } else {
                        sp58 = &D_0400DA60;
                        phi_f0_2 = temp_f0 - (41.0f * temp_v0_4->unk_08);
                    }
                }
                arg0->unk_ABC -= phi_f0_2 * 100.0f;
                arg0->actor.world.pos.x -= temp_f2 * sp44;
                arg0->actor.world.pos.y += arg0->unk_B54 + 10.0f;
                arg0->actor.world.pos.z -= temp_f2 * sp40;
                temp_a0 = &arg1->colCtx;
                sp28 = temp_a0;
                temp_f0_2 = func_800C411C(temp_a0, &sp4C, &sp48, (Actor *) arg0, (Vec3f *) &arg0->actor.world);
                if ((arg0->actor.world.pos.y - temp_f0_2) <= 20.0f) {
                    arg0->actor.world.pos.y = temp_f0_2;
                    if (sp48 != 0x32) {
                        func_800CAEB0(temp_a0, sp48);
                    }
                }
                func_8082DAD4((Actor *) arg0);
                arg0->actor.velocity.y = 0.0f;
            }
            arg0->actor.bgCheckFlags |= 1;
            SkelAnime_ChangeLinkAnimPlaybackStop(arg1, &arg0->skelAnime, (LinkAnimationHeader *) sp58, 1.3f);
            func_801358F4(arg1);
            temp_v1 = arg0->actor.wallYaw + 0x8000;
            arg0->currentYaw = temp_v1;
            arg0->actor.shape.rot.y = temp_v1;
            return 1;
        }
        goto block_48;
    }
    if (((arg0->actor.bgCheckFlags & 1) != 0) && (arg0->unk_B5C == 1) && ((s32) arg0->unk_B5D >= 3)) {
        func_80834DB8((LinkAnimationHeader *) arg0, (bitwise f32) &D_0400DCD8, (bitwise GlobalContext *) ((arg0->unk_B54 * 0.08f) + 5.5f), (Actor *) arg1);
        arg0->linearVelocity = 2.5f;
        return 1;
    }
block_48:
    return 0;
}

void func_80835324(GlobalContext *arg0, Actor *arg1, f32 arg2, s16 arg3) {
    func_80831494(arg0, arg1, func_8084D820, 0);
    func_8082DD2C(arg0, (Player *) arg1);
    arg1->unk_A86 = -1;
    arg1->unk_AE7 = 1;
    arg1->unk_AE8 = (s16) 1;
    arg1->unk_3A0 = (f32) ((Math_SinS(arg3) * arg2) + arg1->world.pos.x);
    arg1->unk_3A8 = (f32) ((Math_CosS(arg3) * arg2) + arg1->world.pos.z);
    func_8082DB18(arg0, (Player *) arg1, func_8082ED20(arg1));
}

void func_808353DC(GlobalContext *arg0, Actor *arg1) {
    func_80831494(arg0, arg1, func_808508C8, 0);
    func_8082E634(arg0, arg1, (LinkAnimationHeader *) &D_0400E000);
}

s32 func_80835428(GlobalContext *arg0, Actor *arg1) {
    if ((func_8082DA90(arg0) == 0) && (arg1->unk_A6C & 0x80000000)) {
        func_80834104(arg0, arg1);
        func_8082DB3C(arg0, arg1, (LinkAnimationHeader *) &D_0400DD30);
        func_8082DF8C(arg1, 0x6807U);
        func_8019F128(0x5803U);
        return 1;
    }
    return 0;
}

void func_808354A4(GlobalContext *arg0, s32 arg1, s32 arg2) {
    u16 temp_a3;

    arg0->nextEntranceIndex = *(arg0->setupExitList + (arg1 * 2));
    temp_a3 = arg0->nextEntranceIndex;
    if (temp_a3 == 0xFFFF) {
        gSaveContext.respawnFlag = 4;
        arg0->nextEntranceIndex = gSaveContext.respawn[3].entranceIndex;
        arg0->unk_1887F = 3;
        gSaveContext.nextTransition = 3;
    } else if ((s32) temp_a3 >= 0xFE00) {
        arg0->nextEntranceIndex = *(&D_8085D0F8 + (((D_8085B9F0 - 0xE6F4)[temp_a3] * 2) + (arg0->curSpawn * 2)));
        Scene_SetExitFade(arg0);
    } else {
        if (arg2 != 0) {
            gSaveContext.respawn[0].entranceIndex = temp_a3;
            func_80169EFC(arg0);
            gSaveContext.respawnFlag = -2;
        }
        gSaveContext.unk_3DBB = 1;
        Scene_SetExitFade(arg0);
    }
    arg0->sceneLoadFlag = 0x14;
}

void func_808355D8(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    func_80833AA0(arg1, arg0);
    arg1->unk_AE8 = -2;
    func_8082E5EC(arg0, arg1, arg2);
    func_8082E1F0(arg1, 0x1852);
}

s32 func_8083562C(GlobalContext *arg0, Actor *arg1, CollisionPoly *arg2, s32 arg3) {
    u32 sp3C;
    s32 sp34;
    ? sp30;
    CollisionContext *sp28;
    s16 temp_v1;
    s32 temp_t8;
    u32 temp_v0;
    u32 temp_v0_4;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u32 phi_a3;
    u32 phi_a3_2;
    s32 phi_v0;

    if ((arg1 == arg0->actorCtx.actorList[2].first) && ((arg1->unk_A6C & 0x80) == 0) && (func_8082DA90() == 0) && (arg1->unk_394 == 0) && ((arg1->unk_A6C & 1) == 0)) {
        phi_a3 = 0U;
        if (((arg2 != 0) && (temp_v0 = func_800C99AC(arg0 + 0x830, arg2, arg3), phi_a3 = temp_v0, phi_a3_2 = temp_v0, (temp_v0 != 0)) && (((temp_v1 = arg0->sceneNum, (temp_v1 != 0x6B)) && (temp_v1 != 0x3E)) || ((s32) temp_v0 < 3)) && (((temp_v1 != 0x45) && (temp_v1 != 0)) || ((s32) temp_v0 < 0x15)) && ((temp_v1 != 0x4D) || ((s32) temp_v0 < 6))) || ((sp3C = phi_a3, phi_a3_2 = phi_a3, (func_808340D4(D_80862B08) != 0)) && (arg1->unk_D5E == 0xC))) {
            temp_t8 = arg1->unk_D68 - (s32) arg1->world.pos.y;
            sp34 = temp_t8;
            if (((arg1->unk_A6C & 0x28800000) == 0) && ((arg1->bgCheckFlags & 1) == 0) && (temp_t8 < 0x190) && (D_80862B18 > 100.0f)) {
                temp_v0_3 = arg1->unk_D5E;
                if ((temp_v0_3 != 5) && (temp_v0_3 != 0xC)) {
                    arg1->unk_AD0 = 0.0f;
                }
                goto block_78;
            }
            if (arg1->unk_A74 & 0x1000000) {
                sp3C = phi_a3_2;
                func_808355D8(arg0, arg1, (LinkAnimationHeader *) &D_0400E2D8, phi_a3_2);
            }
            if (phi_a3_2 == 0) {
                func_80169EFC(arg0);
                Scene_SetExitFade(arg0);
                goto block_40;
            }
            sp3C = phi_a3_2;
            func_808354A4(arg0, phi_a3_2 - 1, func_800C9C74(&arg0->colCtx, arg2, arg3) == 2, phi_a3_2);
            if (((arg1->unk_A6C * 0x10) < 0) && (arg1->unk_D5E == 5)) {
                func_8019F128(0x5807U);
                func_801A4058(5);
                gSaveContext.seqIndex = 0xFF;
                gSaveContext.nightSeqIndex = 0xFF;
                goto block_35;
            }
            if (((arg1->bgCheckFlags & 1) == 0) && (arg1->unk_D5E == 0xC)) {
                func_8019F128(0x5803U);
block_35:
            }
            phi_v0 = arg1->unk_A6C;
            if (arg1->unk_A6C & 0x800000) {
                if (D_801BDAA0 != 0) {
                    D_801BDAA0 = 0;
                } else {
                    D_801BDA9C = 1;
                }
block_40:
                phi_v0 = arg1->unk_A6C;
            }
            if (((phi_v0 & 0x28800000) == 0) && (temp_v0_4 = func_800C99D4(&arg0->colCtx, arg2, arg3), (temp_v0_4 != 0xA)) && ((sp34 < 0x64) || ((arg1->bgCheckFlags & 1) != 0))) {
                if (temp_v0_4 == 0xB) {
                    func_8019F128(0x5805U);
                    func_801A4058(5);
                    gSaveContext.seqIndex = 0xFF;
                    gSaveContext.nightSeqIndex = 0xFF;
                } else {
                    func_8085B74C(arg0);
                }
            } else if ((arg1->bgCheckFlags & 1) == 0) {
                func_8082DABC(arg1);
            }
            func_800DFAC8(Play_GetCamera(arg0, 0), 0x50);
            arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000001);
            return 1;
        }
        if (((arg1->unk_A6C * 0x10) < 0) && (arg1->floorPoly == 0)) {
            func_800C42A8(arg0 + 0x830, arg1 + 0x80, &sp30, arg1, arg1 + 0x24);
            if (arg1->floorPoly == 0) {
                func_80169EFC(arg0);
            } else {
                goto block_56;
            }
        } else {
block_56:
            if (((arg1->unk_A6C << 0) >= 0) && ((arg1->world.pos.y < -4000.0f) || (((temp_v0_2 = arg1->unk_D5E, (temp_v0_2 == 5)) || (temp_v0_2 == 0xC) || (temp_v0_2 == 0xD)) && ((D_80862B18 < 100.0f) || ((s32) arg1->unk_B6A >= 0x191))))) {
                if ((arg1->bgCheckFlags & 1) != 0) {
                    sp28 = &arg0->colCtx;
                    if (arg1->unk_D5E == 5) {
                        func_80169FDC(arg0);
                        func_808345C8();
                    } else {
                        func_80169EFC(arg0);
                    }
                    if (func_800C9E88(sp28, arg1->floorPoly, (s32) arg1->floorBgId) == 0) {
                        gSaveContext.respawnFlag = -5;
                    }
                    arg0->unk_1887F = 4;
                    play_sound(0x5801U);
                } else {
                    if (arg1->unk_A74 & 0x1000000) {
                        func_808355D8(arg0, arg1, (LinkAnimationHeader *) &D_0400E2D8);
                    }
                    if (arg1->unk_D5E == 0xD) {
                        func_80831494(arg0, arg1, func_808497A0, 0);
                        arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
                    } else {
                        func_80834104(arg0, arg1);
                        arg1->unk_AE8 = 0x270F;
                        if (arg1->unk_D5E == 5) {
                            arg1->unk_AE7 = -1;
                        } else {
                            arg1->unk_AE7 = 1;
                        }
                    }
                }
            }
            arg1->unk_D68 = (s16) (s32) arg1->world.pos.y;
        }
        goto block_78;
    }
block_78:
    return 0;
}

void func_80835BC8(Actor *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3) {
    Lib_Vec3f_TranslateAndRotateY(arg1, arg0->shape.rot.y, arg2, arg3);
}

void func_80835BF8(PosRot *arg0, s16 arg1, f32 arg2, Vec3f *arg3) {
    arg3->x = (Math_SinS(arg1) * arg2) + arg0->pos.x;
    arg3->z = (Math_CosS(arg1) * arg2) + arg0->pos.z;
}

void func_80835C64(GlobalContext *arg0, Actor *arg1, Vec3f *arg2, Vec3f *arg3, s32 arg4) {
    f32 sp34;

    func_80835BC8(arg1, arg2, arg3, (Vec3f *) &sp34);
    Actor_Spawn(arg0 + 0x1CA0, arg0, 0x10, sp34, sp38, sp3C, (s16) 0, (s16) 0, (s16) 0, (s16) arg4);
}

void func_80835CD8(? *arg0, Actor *arg1, Vec3f *arg3, CollisionPoly **arg4, s32 *arg5) {
    func_80835BC8(arg1, arg1 + 0x24, arg3);
    func_800C411C(arg0 + 0x830, arg4, arg5, arg1, arg3);
}

void func_80835D2C(void) {
    ? sp24;
    ? sp20;

    func_80835CD8(&sp24, (Actor *) &sp20);
}

void func_80835D58(GlobalContext *arg0, Actor *arg1, ? *arg2, f32 *arg3, s32 *arg4, f32 *arg5) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    ? sp40;

    sp4C = arg1->world.pos.x;
    sp50 = arg1->world.pos.y + arg2->unk_4;
    sp54 = arg1->world.pos.z;
    func_80835BC8(arg1, arg1 + 0x24, (Vec3f *) &sp40);
    func_800C5650(arg0 + 0x830, &sp4C, &sp40, arg5, arg3, (CollisionPoly **)1, NULL, 0, 1, arg4, arg1);
}

s32 func_80835DF8(? *arg0, Actor *arg1, s32 *arg2, s32 *arg3) {
    CollisionPoly *sp2C;
    s32 temp_a2;
    s32 phi_v0;

    temp_a2 = *arg3;
    phi_v0 = 0;
    if ((temp_a2 == 0x32) && (fabsf(arg1->world.pos.y - (bitwise f32) func_80835CD8(arg0, arg1, &D_8085D100, &sp2C, arg2, arg3)) < 10.0f)) {
        func_800FAAB4(arg0, func_800C9C9C(arg0 + 0x830, (CollisionPoly *) *arg2, temp_a2) & 0xFF);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80835EAC(GlobalContext *arg0, Actor *arg1, Actor *arg2) {
    Vec3f *sp24;
    Vec3f *temp_a3;

    arg1->unk_AD4 = (s16) (arg2->home.rot.y + 0x8000);
    arg1->shape.rot.y = arg1->unk_AD4;
    if (arg1->unk_AD0 <= 0.0f) {
        arg1->unk_AD0 = 0.1f;
    }
    func_80835324(arg0, arg1, 50.0f, arg1->shape.rot.y);
    arg1->unk_AE7 = 0;
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
    arg1->unk_397 = (s8) arg1->unk_37C;
    temp_a3 = arg1 + 0x3A0;
    sp24 = temp_a3;
    func_80835BF8(arg2 + 0x24, arg2->shape.rot.y, -140.0f, temp_a3);
    if (arg1->unk_37D != 0) {
        D_8085D10C.x = -400.0f;
    } else {
        D_8085D10C.x = 400.0f;
    }
    D_8085D114 = 200.0f;
    func_80835BC8(arg1, sp24, &D_8085D10C, arg1 + 0x3AC);
    arg2->unk_144 = 1;
    func_8082DAD4(arg1);
    if (arg1->unk_37E != 0) {
        arg1->unk_AE8 = 0;
        func_8082E438(arg0, arg1, func_8082ED20(arg1));
        arg1->unk_250 = 0.0f;
    } else {
        arg1->unk_AD0 = 0.1f;
    }
    func_800DFAC8(Play_GetCamera(arg0, 0), 0x50);
    arg1->unk_3BA = (s16) arg0->doorCtx.transitionActorList[(s32) arg2->params >> 0xA].sides[0].effects;
    func_800B90F4(arg0);
    arg1->unk_B72 = 2;
}

void func_8083604C(GlobalContext *arg0, Actor *arg1, Actor *arg2) {
    ? sp38;
    PosRot *temp_s1;
    s32 phi_v0;

    arg1->unk_AD4 = (s16) arg2->home.rot.y;
    if ((s32) arg1->unk_37D > 0) {
        arg1->unk_AD4 = (s16) (arg1->unk_AD4 - 0x8000);
    }
    arg1->shape.rot.y = arg1->unk_AD4;
    if (arg1->unk_AD0 <= 0.0f) {
        arg1->unk_AD0 = 0.1f;
    }
    func_80835324(arg0, arg1, 50.0f, arg1->shape.rot.y);
    temp_s1 = &arg1->world;
    arg1->unk_AE7 = 0;
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
    arg1->unk_397 = (s8) arg1->unk_37C;
    Actor_CalcOffsetOrientedToDrawRotation(arg2, (Vec3f *) &sp38, (Vec3f *) temp_s1);
    func_80835BF8(temp_s1, arg2->shape.rot.y, (42.0f - fabsf(sp40)) * (f32) arg1->unk_37D, (Vec3f *) temp_s1);
    func_80835BF8(temp_s1, arg2->shape.rot.y, (f32) arg1->unk_37D * 20.0f, arg1 + 0x3A0);
    func_80835BF8(temp_s1, arg2->shape.rot.y, (f32) arg1->unk_37D * -120.0f, arg1 + 0x3AC);
    arg2->unk_15C = 1;
    func_8082DAD4(arg1);
    if (arg1->unk_37E != 0) {
        arg1->unk_AE8 = 0;
        func_8082E438(arg0, arg1, func_8082ED20(arg1));
        arg1->unk_250 = 0.0f;
    } else {
        arg1->unk_AD0 = 0.1f;
    }
    if (arg2->category == 0xA) {
        phi_v0 = 1;
        if ((s32) arg1->unk_37D > 0) {
            phi_v0 = 0;
        }
        arg1->unk_3BA = (s16) arg0->doorCtx.transitionActorList[(s32) (u16) arg2->params >> 0xA].sides[phi_v0].effects;
        func_800B90F4(arg0);
    }
}

void func_80836258(GlobalContext *arg0, Actor *arg1, Actor *arg2) {
    LinkAnimationHeader *sp60;
    f32 sp5C;
    CollisionPoly *sp54;
    s32 sp50;
    f32 sp48;
    ? sp44;
    s32 sp40;
    PosRot *sp34;
    PosRot *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    LinkAnimationHeader *phi_t4;
    s32 phi_v0;

    temp_v0 = arg1->unk_14B;
    arg2->unk_1A0 = temp_v0;
    temp_v1 = temp_v0 - 1;
    if ((s32) arg1->unk_37D < 0) {
        temp_v0_2 = arg1->unk_14B;
        if (temp_v0_2 == 0) {
            sp60 = *(&D_8085BF44 + (arg1->unk_14F * 4));
        } else if (temp_v0_2 == 4) {
            sp60 = *(&D_8085BF5C + (arg1->unk_14F * 4));
        } else {
            phi_t4 = *(&D_8085D118 + (temp_v1 * 4));
            goto block_11;
        }
    } else {
        arg2->unk_1A0 = (u8) (arg2->unk_1A0 + 5);
        temp_v0_3 = arg1->unk_14B;
        if (temp_v0_3 == 0) {
            sp60 = *(&D_8085BF74 + (arg1->unk_14F * 4));
        } else if (temp_v0_3 == 4) {
            sp60 = *(&D_8085BF8C + (arg1->unk_14F * 4));
        } else {
            phi_t4 = *(&D_8085D124 + (temp_v1 * 4));
block_11:
            sp60 = phi_t4;
        }
    }
    func_80831494(arg0, arg1, func_8084E034, 0);
    arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x800000);
    func_8082DE14(arg0, (Player *) arg1);
    if ((s32) arg1->unk_37D < 0) {
        arg1->shape.rot.y = arg2->shape.rot.y;
    } else {
        arg1->shape.rot.y = arg2->shape.rot.y - 0x8000;
    }
    temp_a0 = arg2 + 0x24;
    arg1->unk_AD4 = (s16) arg1->shape.rot.y;
    sp34 = temp_a0;
    temp_f0 = (f32) arg1->unk_37D * 22.0f;
    sp5C = temp_f0;
    func_80835BF8(temp_a0, arg2->shape.rot.y, temp_f0, (Vec3f *) &arg1->world);
    func_8082EC9C(arg0, arg1, sp60);
    if (arg1->unk_37E != 0) {
        arg1->unk_250 = 0.0f;
    }
    func_8082DAD4(arg1);
    func_8082E920(arg0, arg1, 0x28F);
    arg2->unk_1A1 = 1;
    if ((arg1->unk_37C != 3) && (sp40 = ((s32) arg2->params >> 7) & 7, arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000), (arg1->category == 2))) {
        func_800B90F4(arg0);
        func_80835BF8(sp34, arg2->shape.rot.y, -sp5C, (Vec3f *) &sp44);
        sp48 = arg2->world.pos.y + 10.0f;
        func_800C411C(&arg0->colCtx, &sp54, &sp50, arg1, (Vec3f *) &sp44);
        if (func_8083562C(arg0, arg1, sp54, 0x32) != 0) {
            gSaveContext.entranceSpeed = 2.0f;
            return;
        }
        if (sp40 != 7) {
            arg1->unk_AE7 = (s8) (s32) (38.0f * D_8085C3E8);
            if ((s32) arg1->unk_37D > 0) {
                phi_v0 = 0;
            } else {
                phi_v0 = 1;
            }
            temp_f0_2 = D_8085C3E8;
            func_800DFFAC(Play_GetCamera(arg0, 0), arg2, arg0->doorCtx.transitionActorList[(s32) (u16) arg2->params >> 0xA].sides[phi_v0].effects, 0, (s32) arg1->unk_AE7, (s32) (26.0f * temp_f0_2), (s32) (10.0f * temp_f0_2));
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
    }
}

? func_808365DC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    Actor *temp_s0;
    Actor *temp_v0_5;
    Actor *temp_v0_6;
    s8 temp_a0;
    s8 temp_a2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    u8 temp_v1;
    s32 phi_v0;
    Actor *phi_a3;
    u8 phi_v1;
    s32 phi_v0_2;
    Actor *phi_v0_3;

    phi_a3 = arg0;
    if ((gSaveContext.health != 0) && (temp_v0 = arg0->unk_37C, phi_v0 = (s32) temp_v0, (temp_v0 != 0))) {
        if (arg0->category == 2) {
            if ((s32) temp_v0 < 0) {
                arg0 = arg0;
                if (ActorCutscene_GetCanPlayNext(0x7C) == 0) {
                    phi_v0 = (s32) arg0->unk_37C;
                    goto block_6;
                }
                goto block_8;
            }
block_6:
            if ((phi_v0 > 0) && (arg0 = arg0, (ActorCutscene_GetCanPlayNext(0x7D) != 0))) {
block_8:
                phi_a3 = arg0;
                if (((arg0->unk_A6C & 0x800) == 0) && ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) || (arg0->unk_748 == func_8085437C) || (temp_v0_2 = arg0->unk_37C, (temp_v0_2 == 4)) || (temp_v0_2 == 5))) {
                    goto block_13;
                }
                goto block_39;
            }
            goto block_39;
        }
block_13:
        temp_s0 = phi_a3->unk_380;
        if ((s32) phi_a3->unk_37C < 0) {
            func_8085B460(arg1, temp_s0);
            if (temp_s0->textId == 0x1821) {
                temp_s0->flags |= 0x100;
            }
            return 1;
        }
        gSaveContext.respawn[0].data = 0;
        temp_v0_3 = phi_a3->unk_37C;
        if (temp_v0_3 == 4) {
            arg0 = phi_a3;
            func_80835EAC(arg1, phi_a3, temp_s0, phi_a3);
        } else if (temp_v0_3 == 2) {
            arg0 = phi_a3;
            func_8083604C(arg1, phi_a3, temp_s0, phi_a3);
        } else {
            arg0 = phi_a3;
            func_80836258(arg1, phi_a3, temp_s0, phi_a3);
        }
        temp_v1 = arg0->category;
        temp_a1 = arg0;
        phi_v1 = temp_v1;
        if (temp_v1 == 2) {
            arg0->unk_A86 = 0x7D;
            temp_a0 = arg0->unk_A86;
            arg0 = arg0;
            ActorCutscene_Start((s16) temp_a0, temp_a1);
            phi_v1 = arg0->category;
        }
        if (phi_v1 == 2) {
            temp_v0_4 = arg0->unk_37C;
            if (((s32) temp_v0_4 < 3) && (temp_s0->category == 0xA) && ((temp_v0_4 != 1) || ((((s32) temp_s0->params >> 7) & 7) != 7))) {
                if ((s32) arg0->unk_37D > 0) {
                    phi_v0_2 = 0;
                } else {
                    phi_v0_2 = 1;
                }
                temp_a2 = arg1->doorCtx.transitionActorList[(s32) (temp_s0->params & 0xFFFF) >> 0xA].sides[phi_v0_2].room;
                if (((s32) temp_a2 >= 0) && (temp_a2 != arg1->roomCtx.currRoom.num)) {
                    Room_StartRoomTransition(arg1, &arg1->roomCtx, (s32) temp_a2);
                }
            }
        }
        temp_v0_5 = temp_s0->child;
        temp_s0->room = arg1->roomCtx.currRoom.num;
        phi_v0_3 = temp_v0_5;
        if ((temp_v0_5 != 0) || (temp_v0_6 = temp_s0->parent, phi_v0_3 = temp_v0_6, (temp_v0_6 != 0))) {
            phi_v0_3->room = arg1->roomCtx.currRoom.num;
        }
        return 1;
    }
block_39:
    return 0;
}

void func_80836888(Actor *arg0, GlobalContext *arg1) {
    s32 *temp_a2;
    s32 *temp_a2_2;
    LinkAnimationHeader *phi_a2;

    func_80831494(arg1, arg0, func_80849A9C, 1);
    if (arg0->unk_B40 < 0.5f) {
        temp_a2 = func_8082EF54(arg0);
        arg0->unk_B40 = 0.0f;
        phi_a2 = (LinkAnimationHeader *) temp_a2;
    } else {
        temp_a2_2 = func_8082EF9C(arg0);
        arg0->unk_B40 = 1.0f;
        phi_a2 = (LinkAnimationHeader *) temp_a2_2;
    }
    arg0->unk_B44 = (f32) arg0->unk_B40;
    func_8082DB3C(arg1, arg0, phi_a2);
    arg0->unk_AD4 = (s16) arg0->shape.rot.y;
}

void func_8083692C(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_80849DD0, 1);
    func_8082E438(arg1, arg0, func_8082ED20(arg0));
    arg0->unk_AD4 = (s16) arg0->shape.rot.y;
}

void func_80836988(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;

    temp_a0 = arg0;
    if (func_80123420() != 0) {
        func_80836888(temp_a0, arg1);
        return;
    }
    arg0 = temp_a0;
    if (func_80123434((Player *) temp_a0, arg1) != 0) {
        func_8083692C(arg0, arg1);
        return;
    }
    func_8085B384(arg0, arg1);
}

void func_808369F4(Player *arg0, GlobalContext *arg1) {
    void (*phi_a2)(Actor *, GlobalContext *);

    if (func_80123420(arg0) != 0) {
        phi_a2 = func_80849A9C;
    } else if (func_80123434(arg0) != 0) {
        phi_a2 = func_80849DD0;
    } else {
        phi_a2 = func_80849FE0;
    }
    func_80831494(arg1, (Actor *) arg0, phi_a2, 1);
}

void func_80836A5C(Player *arg0) {
    func_808369F4(arg0);
    if (func_80123420(arg0) != 0) {
        arg0->unk_AE8 = 1;
    }
}

void func_80836A98(Player *arg0, LinkAnimationHeader *arg1, GlobalContext *arg2) {
    func_80836A5C(arg0, arg2);
    func_8082EC9C(arg2, (Actor *) arg0, arg1);
}

void func_80836AD8(GlobalContext *arg1) {
    func_80831494(arg1, (Actor *) func_80857BE8, NULL);
    arg1->unk_B28 = 0;
    arg1->unk_B88 = 0;
    arg1->colCtx.dyna.bgActors[6].prevTransform.scale.x = 0.0f;
    arg1->colCtx.dyna.bgActors[6].prevTransform.scale.y = 0.0f;
    arg1->colCtx.dyna.bgActors[6].prevTransform.scale.z = 0.0f;
    arg1->colCtx.dyna.bgActors[6].prevTransform.pos.y = 0.0f;
    arg1->colCtx.dyna.bgActors[6].prevTransform.pos.z = 0.0f;
    func_800B8E58((Actor *) arg1, 0x8E6U);
}

void func_80836B3C(GlobalContext *arg0, Actor *arg1, f32 arg2) {
    AnimationHeaderCommon *sp34;
    s16 temp_v0;

    temp_v0 = arg1->shape.rot.y;
    arg1->unk_AD4 = temp_v0;
    arg1->world.rot.y = temp_v0;
    if (arg1->unk_14B == 1) {
        func_80836AD8(arg0, arg1);
        SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, *(&D_8085BFEC + (arg1->unk_14F * 4)), 1.5f * D_8085C3E4, 0.0f, 6.0f, (u8) 2, 0.0f);
        return;
    }
    sp34 = *(&D_8085BFEC + (arg1->unk_14F * 4));
    func_80831494(arg0, arg1, func_8084C6EC, 0);
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) sp34, 1.25f * D_8085C3E4, arg2, (f32) SkelAnime_GetFrameCount(sp34), (u8) 2, 0.0f);
}

void func_80836C70(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 *temp_s1;
    s32 temp_s0;
    s32 phi_s0;

    temp_s1 = &sp70;
    phi_s0 = 0;
    do {
        sp70 = randPlusMinusPoint5Scaled(4.0f);
        sp74 = Rand_ZeroFloat(2.0f);
        sp78 = randPlusMinusPoint5Scaled(4.0f);
        D_8085D134 = -0.2f;
        EffectSsHahen_Spawn(arg0, arg1 + (arg2 * 0xC) + 0xBEC, (Vec3f *) temp_s1, &D_8085D130, (s16) 0, (s16) 0xA, (s16) 0x154, (s16) 0x10, &D_06008860);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 4);
}

void func_80836D8C(Actor *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->focus.rot.y;
    arg0->focus.rot.x = 0;
    arg0->focus.rot.z = 0;
    arg0->unk_AAC = 0;
    arg0->unk_AAE = 0;
    arg0->unk_AB0 = 0;
    arg0->unk_AB2 = 0;
    arg0->unk_AB4 = 0;
    arg0->unk_AB6 = 0;
    arg0->shape.rot.y = temp_v0;
    arg0->unk_AD4 = temp_v0;
}

s32 func_80836DC0(GlobalContext *arg0, Actor *arg1) {
    if ((gGameInfo->data[528] != 0) || (func_800C9DDC(arg0 + 0x830, arg1->floorPoly, arg1->floorBgId) != 0)) {
        func_80831494(arg0, arg1, func_808561B0, 0);
        arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xBFFDFFFF);
        func_8082E438(arg0, arg1, (AnimationHeaderCommon *) &D_0400E270);
        func_8082DABC(arg1);
        func_80836D8C(arg1);
        arg1->shape.shadowDraw = func_800B3FC0;
        arg1->unk_B48 = -2000.0f;
        arg1->shape.shadowScale = 13.0f;
        func_8082E1F0(arg1, 0x8E2);
        return 1;
    }
    return 0;
}

void func_80836EA0(GlobalContext *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 sp26;
    s16 temp_v0;
    s32 temp_a0;

    temp_v0 = Quake_Add(Play_GetCamera(arg0, 0), 3U);
    temp_a0 = temp_v0 << 0x10;
    sp26 = temp_v0;
    Quake_SetSpeed((s16) (temp_a0 >> 0x10), arg1);
    Quake_SetQuakeValues(sp26, arg2, 0, 0, (s16) 0);
    Quake_SetCountdown(sp26, arg3);
}

s32 func_80836F10(GlobalContext *arg0, Actor *arg1) {
    s32 sp28;
    s32 temp_s0_2;
    u32 temp_v0;
    void *temp_s0;
    s32 phi_s0;
    s32 phi_s0_2;

    temp_v0 = D_80862B08;
    if ((temp_v0 == 6) || (temp_v0 == 9) || (arg1->unk_394 != 0)) {
        phi_s0 = 0;
    } else {
        phi_s0 = (s32) arg1->unk_B6A;
    }
    Math_StepToF(arg1 + 0xAD0, 0.0f, 1.0f);
    arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xFFF3FFFF);
    if (phi_s0 >= 0x190) {
        if ((s32) arg1->unk_B6A < 0x320) {
            sp28 = 0;
        } else {
            sp28 = 1;
        }
        func_800B8E58(arg1, 0x83EU);
        temp_s0 = (sp28 * 6) + &D_8085D13C;
        func_8082DF8C(arg1, temp_s0->unk_4);
        if (func_8085B3E0(arg0, temp_s0->unk_0) != 0) {
            return -1;
        }
        func_80833998(arg1, 0x28);
        func_80836EA0(arg0, 0x80C7, 2, 0x1E);
        func_8082DF48((Actor *) arg0, (Player *) arg1, temp_s0->unk_1, temp_s0->unk_2, (u8) (s32) temp_s0->unk_3, 0);
        return sp28 + 1;
    }
    temp_s0_2 = phi_s0 * 2;
    phi_s0_2 = temp_s0_2;
    if (phi_s0 >= 0xC9) {
        if (temp_s0_2 >= 0x100) {
            phi_s0_2 = 0xFF;
        }
        func_8082DF48((Actor *) arg0, (Player *) arg1, (u8) phi_s0_2, (u8) (s32) ((f32) phi_s0_2 * 0.1f), (u8) phi_s0_2, 0);
        if (D_80862B08 == 6) {
            func_8082DF8C(arg1, 0x6804U);
        }
    }
    func_8082E1BC(arg1);
    return 0;
}

s32 func_808370D4(GlobalContext *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if (((s32) arg1->unk_B6A < 0x320) && ((arg1 + arg1->unk_ADE)->unk_AE3 == 0) && ((arg1->unk_A6C & 0x800) == 0)) {
        func_80836B3C(NULL);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80837134(GlobalContext *arg0, Actor *arg1) {
    LinkAnimationHeader *sp2C;
    s32 sp28;
    s32 sp24;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;

    sp2C = *(&D_8085BFBC + (arg1->unk_14F * 4));
    arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xFFF3FFFF);
    if (arg1->unk_14B == 3) {
        temp_v0 = arg1->unk_248;
        phi_v1 = 0;
        if ((&D_0400E2E8 == temp_v0) || (&D_0400E2D8 == temp_v0)) {
            func_80836C70(arg0, arg1, 0xC);
            func_80836C70(arg0, arg1, 0xF);
            phi_v1 = 1;
        }
        if ((~(D_80862B44->cur.button | 0xFFFF7FFF) != 0) || (sp24 = phi_v1, (func_80836DC0(arg0, arg1) == 0))) {
            if (phi_v1 != 0) {
                func_80836A98((Player *) arg1, sp2C, arg0);
                func_8082E1BC(arg1);
                return;
            }
            goto block_19;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
        return;
    }
    if (arg1->unk_A70 & 0x80000) {
        if (func_80123420((Player *) arg1) != 0) {
            sp2C = *(&D_8085C2AC + (arg1->unk_AE7 * 0xC));
        } else {
            sp2C = *(&D_8085C2A8 + (arg1->unk_AE7 * 0xC));
        }
        goto block_19;
    }
    if (&D_0400DE48 == arg1->unk_248) {
        sp2C = &D_0400DE50;
        goto block_19;
    }
    if (func_80123420((Player *) arg1) != 0) {
        sp2C = &D_0400D420;
        func_8082FC60(arg1);
        goto block_19;
    }
    if ((s32) arg1->unk_B6A < 0x51) {
        sp2C = *(&D_8085BFD4 + (arg1->unk_14F * 4));
        goto block_19;
    }
    if (func_808370D4(arg0, arg1) == 0) {
block_19:
        temp_v0_2 = func_80836F10(arg0, arg1);
        if (temp_v0_2 > 0) {
            sp28 = temp_v0_2;
            func_80836A98((Player *) arg1, *(&D_8085BFBC + (arg1->unk_14F * 4)), arg0);
            arg1->unk_250 = 8.0f;
            if (temp_v0_2 == 1) {
                arg1->unk_AE8 = 0xA;
                return;
            }
            arg1->unk_AE8 = 0x14;
            return;
        }
        if (temp_v0_2 == 0) {
            func_80836A98((Player *) arg1, sp2C, arg0);
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
    }
}

void func_808373A4(GlobalContext *arg1) {
    GlobalContext *temp_a1;
    GlobalContext *temp_a3;

    temp_a3 = arg1;
    temp_a1 = temp_a3;
    arg1 = temp_a3;
    func_8082E438(temp_a1, (Actor *) &D_0400E270, (AnimationHeaderCommon *) temp_a3);
    arg1->colCtx.dyna.bgActors[6].curTransform.scale.x = 20000.0f;
    arg1->colCtx.dyna.bgActors[6].curTransform.scale.y = 196608.0f;
    func_800B8E58((Actor *) arg1, 0x9A9U);
}

s32 func_808373F8(Actor *arg0, LinkAnimationHeader *arg1, u16 arg2) {
    s32 sp28;
    GameInfo *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v1;
    s32 temp_v0_2;
    u8 temp_t4;
    u8 temp_v0_3;
    s32 phi_v0;
    s32 phi_v1;
    u16 phi_f2;
    s32 phi_v0_2;
    f32 phi_a2;
    u16 phi_f2_2;
    GlobalContext *phi_f12;
    u16 phi_f2_3;
    u16 phi_f12_2;

    temp_v0 = gGameInfo;
    temp_f0 = arg1->unk_AD0;
    temp_v1 = arg1->unk_AD4 - arg1->unk_BE;
    if (((f32) temp_v0->data[930] / 100.0f) < temp_f0) {
        phi_f2 = (bitwise u16) ((f32) temp_v0->data[931] / 100.0f);
    } else {
        temp_f2 = (((f32) temp_v0->data[933] * temp_f0) / 1000.0f) + ((f32) temp_v0->data[932] / 100.0f);
        phi_f2 = (bitwise u16) temp_f2;
        if ((arg1->unk_14B == 3) && (phi_f12_2 = (bitwise u16) 8.0f, (temp_f2 < 8.0f))) {
            goto block_6;
        }
        phi_f12_2 = (bitwise u16) 5.0f;
        if (temp_f2 < 5.0f) {
block_6:
            phi_f2 = phi_f12_2;
        }
    }
    phi_v0 = (s32) temp_v1;
    phi_f2_3 = phi_f2;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    }
    if ((phi_v0 >= 0x1000) || (temp_f0 <= 4.0f)) {
        phi_a2 = (bitwise f32) &D_0400DCD8;
        goto block_23;
    }
    if ((arg1->unk_14B != 3) && ((temp_v0_2 = D_80862B1C, (temp_v0_2 == 1)) || (temp_v0_2 == 2))) {
        if (temp_v0_2 == 1) {
            phi_v1 = 4;
        } else {
            phi_v1 = 5;
        }
        if (phi_v1 == 4) {
            phi_v0_2 = 0x6800;
        } else {
            phi_v0_2 = (s32) arg2;
        }
        sp28 = phi_v1;
        func_80834D50((bitwise GlobalContext *) 4.0f, arg0, arg1, *(&D_8085C2A4 + (phi_v1 * 0xC)), phi_f2, phi_v0_2);
        arg1->unk_AE8 = -1;
        arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x80000);
        arg1->unk_AE7 = (s8) phi_v1;
        return 1;
    }
    phi_a2 = (bitwise f32) &D_0400DE48;
block_23:
    phi_f12 = (bitwise GlobalContext *) 4.0f;
    if (arg1->unk_14B == 3) {
        temp_v0_3 = arg1->unk_B67;
        temp_f2_2 = (bitwise f32) phi_f2 * (0.3f + ((f32) (5 - temp_v0_3) * 0.18f));
        phi_f2_2 = (bitwise u16) temp_f2_2;
        if (temp_f2_2 < 4.0f) {
            phi_f2_2 = (bitwise u16) 4.0f;
        }
        temp_f0_2 = arg1->unk_8C;
        phi_f12 = (bitwise GlobalContext *) 0.0f;
        phi_f2_3 = phi_f2_2;
        if ((temp_f0_2 > 0.0f) && (temp_v0_3 != 0)) {
            arg1->unk_28 = (f32) (arg1->unk_28 + temp_f0_2);
            func_80834D50((bitwise GlobalContext *) 0.0f, arg0, arg1, phi_a2, phi_f2_2, 0);
            arg1->unk_AE8 = 1;
            arg1->unk_A74 = (s32) (arg1->unk_A74 | 0x200000);
            func_800B8E58((Actor *) arg1, (0x9B5 - arg1->unk_B67) & 0xFFFF);
            func_8082DF8C((Actor *) arg1, arg2);
            temp_t4 = arg1->unk_B67 - 1;
            arg1->unk_B67 = temp_t4;
            if ((temp_t4 & 0xFF) == 0) {
                arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x80000);
                func_808373A4((GlobalContext *) arg0, arg1);
            }
        } else {
            if (arg1->unk_68 > 0.0f) {
                arg2 = 0U;
            }
            goto block_33;
        }
    } else {
block_33:
        func_80834D50(phi_f12, arg0, arg1, phi_a2, phi_f2_3, (s32) arg2);
        arg1->unk_AE8 = 1;
    }
    return 1;
}

s32 func_80837730(GlobalContext *arg0, Player *arg1, f32 arg2, s32 arg3) {
    f32 sp3C;
    WaterBox *sp38;
    f32 sp2C;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_cond;
    s32 phi_v0;

    temp_f0 = fabsf(arg2);
    temp_cond = temp_f0 > 2.0f;
    sp3C = temp_f0;
    if (temp_cond && (Math_Vec3f_Copy((Vec3f *) &sp28, arg1 + 0xBEC), sp2C += 20.0f, (func_800CA1AC(arg0, arg0 + 0x830, sp28, sp30, &sp2C, &sp38) != 0)) && (temp_f0_2 = sp2C - arg1->bodyPartsPos[6].y, (temp_f0_2 > -2.0f)) && (temp_f0_2 < 100.0f)) {
        phi_v0 = 1;
        if (sp3C <= 10.0f) {
            phi_v0 = 0;
        }
        EffectSsGSplash_Spawn(arg0, (Vec3f *) &sp28, NULL, NULL, (s16) phi_v0, (s16) arg3);
        return 1;
    }
    return 0;
}

s32 func_8083784C(Player *arg0) {
    f32 temp_f0;
    void *temp_v0;

    if ((arg0->actor.velocity.y < 0.0f) && (temp_f0 = arg0->actor.yDistToWater, (temp_f0 > 0.0f)) && ((arg0->ageProperties->unk_2C - temp_f0) < D_80862B18) && (arg0->unk_B67 != 0) && (gSaveContext.health != 0) && ((arg0->stateFlags1 << 5) >= 0) && ((temp_v0 = arg0->targetActor, (temp_v0 == 0)) || ((temp_v0->flags << 0xF) >= 0))) {
        return 1;
    }
    return 0;
}

void func_808378FC(Actor *arg0, Player *arg1) {
    if (func_8082FC24(arg1) == 0) {
        arg1->stateFlags2 |= 0x20;
    }
    if ((func_8083784C(arg1) != 0) && (func_808373F8(arg0, (LinkAnimationHeader *) arg1, 0x6814U) != 0)) {
        func_80837730((GlobalContext *) arg0, arg1, 20.0f, (s32) (arg1->actor.velocity.y * 50.0f));
    }
}

s32 func_8083798C(Actor *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v0 = arg0->unk_388 != 0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = arg0->unk_34C == 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            phi_v0 = arg0->unk_14B != 3;
        }
    }
    return phi_v0;
}

void func_808379C0(GlobalContext *arg0, Actor *arg1) {
    void *sp24;
    LinkAnimationHeader *sp20;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_v1;
    Actor *phi_a0;
    LinkAnimationHeader *phi_a2;

    phi_a0 = arg1;
    if (func_8083798C(arg1) != 0) {
        temp_v1 = arg1->unk_388;
        temp_v0 = temp_v1->unk_0;
        if ((temp_v0 == 0xB0) && (phi_a0 = (Actor *) arg0, ((temp_v1->unk_1C & 1) != 0))) {
            func_80831494(arg0, arg1, func_8084E334, 0);
            phi_a2 = (LinkAnimationHeader *) &D_0400DF90;
        } else if (((temp_v0 == 0x2F) || (temp_v0 == 0x90) || (temp_v0 == 0x171) || (temp_v0 == 0x10C)) && (sp24 = temp_v1, (func_80124020(phi_a0) <= 0))) {
            sp24 = temp_v1;
            func_80831494(arg0, arg1, func_8084E4E4, 0);
            sp20 = &D_0400DD70;
            arg1->world.pos.x = (Math_SinS(temp_v1->unk_92) * 20.0f) + temp_v1->unk_24;
            arg1->world.pos.z = (Math_CosS(temp_v1->unk_92) * 20.0f) + temp_v1->unk_2C;
            temp_v0_2 = temp_v1->unk_92 + 0x8000;
            arg1->shape.rot.y = temp_v0_2;
            arg1->unk_AD4 = temp_v0_2;
            phi_a2 = &D_0400DD70;
        } else {
            func_80831494(arg0, arg1, func_8084E25C, 0);
            phi_a2 = *(&D_8085BFA4 + (arg1->unk_14F * 4));
        }
        func_8082DB18(arg0, (Player *) arg1, phi_a2);
        return;
    }
    func_80836988((Player *) arg1, arg0);
    arg1->unk_A6C = (s32) (arg1->unk_A6C & ~0x800);
}

void func_80837B60(GlobalContext *arg0, Actor *arg1) {
    u16 temp_a1;

    func_8083172C(arg0, arg1, func_8084E980, 0);
    temp_a1 = arg1->textId;
    arg1->unk_A87 = 0;
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000040);
    if (temp_a1 != 0) {
        func_801518B0(arg0, temp_a1, arg1->unk_A88);
    }
    arg1->unk_730 = (Actor *) arg1->unk_A88;
}

void func_80837BD0(void) {
    func_8083172C((GlobalContext *) func_8084FE7C, NULL);
}

void func_80837BF8(void) {
    func_80831494((GlobalContext *) func_8084ED9C, NULL);
}

void func_80837C20(GlobalContext *arg1) {
    s32 sp1C;
    s32 sp18;

    sp1C = (s32) arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head;
    sp18 = (s32) arg1->unk_AE7;
    func_8083172C((GlobalContext *) func_8084F4E8, NULL);
    arg1->unk_68 = 0.0f;
    arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = (s16) sp1C;
    arg1->unk_AE7 = (s8) sp18;
}

void func_80837C78(GlobalContext *arg1) {
    s16 temp_v0;

    func_8083172C((GlobalContext *) func_80852C04, NULL);
    temp_v0 = arg1->mainCamera.thisIdx;
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000400);
    if (temp_v0 == 0xD) {
        arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = 0x14;
        return;
    }
    if ((s32) temp_v0 >= 0) {
        arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = 1;
        return;
    }
    arg1->mainCamera.thisIdx = (s16) -(s32) temp_v0;
}

void func_80837CEC(GlobalContext *arg0, Actor *arg1, CollisionPoly *arg2, f32 arg3, LinkAnimationHeader *arg4) {
    f32 sp24;
    f32 sp20;
    f32 temp_f0;

    sp24 = (f32) arg2->normal.x * 0.00003051851f;
    sp20 = (f32) arg2->normal.z * 0.00003051851f;
    func_80831494(arg0, arg1, func_8084F1B8, 0);
    func_8082DE50(arg0, (Player *) arg1);
    func_8082DB18(arg0, (Player *) arg1, arg4);
    temp_f0 = arg3 + 1.0f;
    arg1->world.pos.x -= temp_f0 * sp24;
    arg1->world.pos.z -= temp_f0 * sp20;
    arg1->shape.rot.y = Math_FAtan2F(sp20, sp24);
    arg1->unk_AD4 = (s16) arg1->shape.rot.y;
    func_8082DAD4(arg1);
    arg1->velocity.y = 0.0f;
    func_8082E6D0(arg1);
}

s32 func_80837DEC(Actor *arg0, GlobalContext *arg1) {
    CollisionPoly *sp94;
    CollisionPoly *sp90;
    s32 sp8C;
    s32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp68;
    f32 sp60;
    f32 sp5C;
    s32 sp54;
    f32 *sp48;
    ? *sp44;
    ? *temp_a1;
    f32 *temp_a0;
    f32 *temp_a2;
    f32 *temp_t5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_t4;
    s32 temp_v1_3;
    u8 temp_v0;
    s32 phi_v0;
    s32 phi_v1;
    f32 phi_f2;
    s32 phi_v0_2;
    s32 phi_v1_2;
    LinkAnimationHeader *phi_v0_3;

    temp_v0 = arg0->unk_14B;
    if ((temp_v0 != 1) && (temp_v0 != 3) && (arg0->yDistToWater < -80.0f)) {
        temp_v1 = arg0->unk_B6C;
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 < 0xAAA) {
            temp_v0_2 = arg0->unk_B6E;
            phi_v1 = (s32) temp_v0_2;
            if ((s32) temp_v0_2 < 0) {
                phi_v1 = -(s32) temp_v0_2;
            }
            if (phi_v1 < 0xAAA) {
                temp_a1 = arg0 + 0x24;
                sp7C = arg0->prevPos.x - arg0->world.pos.x;
                sp84 = arg0->prevPos.z - arg0->world.pos.z;
                temp_f0 = sqrtf((sp7C * sp7C) + (sp84 * sp84));
                if (temp_f0 != 0.0f) {
                    phi_f2 = 5.0f / temp_f0;
                } else {
                    phi_f2 = 0.0f;
                }
                temp_a0 = arg1 + 0x830;
                temp_a2 = &sp7C;
                sp7C = arg0->prevPos.x + (sp7C * phi_f2);
                sp80 = arg0->world.pos.y;
                sp44 = temp_a1;
                sp48 = temp_a0;
                sp84 = arg0->prevPos.z + (sp84 * phi_f2);
                if (func_800C5650((bitwise CollisionContext *) 0.0f, temp_a0, temp_a1, temp_a2, &sp70, &sp94, (void *)1, 0, 0, (s32 *)1, (Actor *) &sp8C, arg0) != 0) {
                    temp_v1_2 = sp94->normal.y;
                    phi_v0_2 = (s32) temp_v1_2;
                    if ((s32) temp_v1_2 < 0) {
                        phi_v0_2 = -(s32) temp_v1_2;
                    }
                    if ((phi_v0_2 < 0x258) && (temp_f12 = (f32) sp94->normal.x * 0.00003051851f, temp_f16 = (f32) sp94->normal.z * 0.00003051851f, sp68 = temp_f12, sp60 = temp_f16, temp_f0_2 = Math3D_NormalizedDistanceFromPlane(temp_f12, (f32) temp_v1_2 * 0.00003051851f, temp_f16, (f32) sp94->dist, (Vec3f *) temp_a1), sp5C = temp_f0_2, temp_f2 = temp_f0_2 + 1.0f, temp_t5 = &sp70, sp70 = arg0->world.pos.x - (temp_f2 * temp_f12), sp78 = arg0->world.pos.z - (temp_f2 * temp_f16), sp74 = arg0->world.pos.y + 26.800001f, temp_f2_2 = arg0->world.pos.y - func_800C411C((CollisionContext *) sp48, &sp90, &sp88, arg0, (Vec3f *) temp_t5), (temp_f2_2 >= -11.0f)) && (temp_f2_2 <= 0.0f)) {
                        temp_v1_3 = D_80862B1C == 6;
                        phi_v1_2 = temp_v1_3;
                        if (temp_v1_3 == 0) {
                            sp54 = temp_v1_3;
                            phi_v1_2 = temp_v1_3;
                            if ((func_800C9A4C((CollisionContext *) sp48, sp94, sp8C) & 8) != 0) {
                                phi_v1_2 = 1;
                            }
                        }
                        if (phi_v1_2 != 0) {
                            phi_v0_3 = (LinkAnimationHeader *) &D_0400DAA8;
                        } else {
                            phi_v0_3 = &D_0400DC30;
                        }
                        sp54 = phi_v1_2;
                        func_80837CEC(arg1, arg0, sp94, sp5C, phi_v0_3);
                        if (phi_v1_2 != 0) {
                            sp54 = phi_v1_2;
                            func_80832558(arg1, arg0, func_80837C20);
                            arg0->unk_AD4 = (s16) (arg0->unk_AD4 + 0x8000);
                            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x200000);
                            arg0->shape.rot.y = arg0->unk_AD4;
                            func_8082E920(arg1, arg0, 0x9F);
                            arg0->unk_AE8 = -1;
                            arg0->unk_AE7 = (s8) phi_v1_2;
                        } else {
                            temp_t4 = arg0->unk_A6C | 0x2000;
                            arg0->unk_A6C = temp_t4;
                            arg0->unk_A6C = (s32) (temp_t4 & 0xFFFDFFFF);
                        }
                        func_800B8E58(arg0, 0x830U);
                        func_8082DF8C(arg0, 0x6803U);
                        return 1;
                    }
                    goto block_28;
                }
                goto block_28;
            }
            goto block_28;
        }
        goto block_28;
    }
block_28:
    return 0;
}

void func_808381A0(Actor *arg0, LinkAnimationHeader *arg1, GlobalContext *arg2) {
    func_80831494(arg2, arg0, func_8084F3DC, 0);
    SkelAnime_ChangeLinkAnimPlaybackStop(arg2, arg0 + 0x240, arg1, 1.3f);
}

s32 func_808381F8(GlobalContext *arg0, Actor *arg1) {
    CollisionPoly *sp34;
    s32 sp30;
    ? sp24;
    s32 phi_v0;

    func_80835BC8(arg1, arg1 + 0x108, &D_8085D148, (Vec3f *) &sp24);
    phi_v0 = 0;
    if (fabsf(func_800C411C(arg0 + 0x830, &sp34, &sp30, arg1, (Vec3f *) &sp24) - arg1->world.pos.y) < 10.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_8083827C(Actor *arg0, GlobalContext *arg1) {
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    WaterBox *sp58;
    CollisionPoly *sp4C;
    f32 sp48;
    f32 sp44;
    void (*sp30)(Actor *, GlobalContext *);
    void (*sp2C)(Actor *, GlobalContext *);
    s16 temp_t0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_f6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 temp_a1;
    u8 temp_v1;
    s32 phi_v1;

    temp_v0 = arg0->unk_A6C;
    temp_f6 = (s32) arg0->world.pos.y;
    arg0->unk_B6A = (s16) (arg0->unk_B68 - temp_f6);
    if (((temp_v0 & 0x28000000) == 0) && (((temp_v0 << 0) < 0) || ((arg0->unk_A74 & 0x2200) == 0)) && ((arg0->bgCheckFlags & 1) == 0)) {
        if (func_80835428(arg1, arg0) == 0) {
            temp_a0 = D_80862B1C;
            if (temp_a0 == 8) {
                arg0->world.pos.x = arg0->prevPos.x;
                arg0->world.pos.z = arg0->prevPos.z;
                return;
            }
            if (((arg0->unk_A74 & 2) == 0) && (temp_v1 = arg0->unk_275, ((temp_v1 & 0x80) == 0)) && (temp_v0_2 = arg0->unk_748, (temp_v0_2 != func_8084C16C)) && (sp2C = func_8084C94C, (temp_v0_2 != func_8084C94C)) && (temp_v0_2 != func_8084CA24) && (temp_v0_2 != func_80857BE8) && (temp_v0_2 != func_808546D0) && (temp_v0_2 != func_80854800)) {
                if ((temp_a0 == 7) || (arg0->unk_ADB != 0) || (((temp_v1 & 8) != 0) && (sp30 = func_8084C16C, (func_808381F8(arg1, arg0, func_8084C16C) != 0)))) {
                    Math_Vec3f_Copy((Vec3f *) &arg0->world, &arg0->prevPos);
                    if (arg0->unk_AD0 > 0.0f) {
                        func_8082DABC(arg0);
                    }
                    arg0->bgCheckFlags |= 2;
                    return;
                }
                temp_t0 = arg0->unk_AD4 - arg0->shape.rot.y;
                sp64 = (s32) temp_t0;
                func_80831494(arg1, arg0, func_8084C16C, 1);
                func_8082DD2C(arg1, (Player *) arg0);
                temp_a1 = arg0->unk_14B;
                arg0->unk_B72 = (u16) arg0->unk_D66;
                if ((temp_a1 != 1) && ((temp_a1 != 3) || (arg0->unk_B67 != 0)) && ((arg0->bgCheckFlags & 4) != 0) && (temp_v0_3 = arg0->unk_A6C, ((temp_v0_3 * 0x10) >= 0)) && (temp_a0_2 = D_80862B1C, (temp_a0_2 != 6)) && (temp_a0_2 != 9) && (D_80862B18 > 20.0f) && (arg0->unk_ADB == 0)) {
                    phi_v1 = (s32) temp_t0;
                    if ((s32) temp_t0 < 0) {
                        phi_v1 = -(s32) temp_t0;
                    }
                    if ((phi_v1 < 0x2000) && (arg0->unk_AD0 > 3.0f)) {
                        if (((temp_v0_3 & 0x800) == 0) && (((temp_a1 == 2) && (~(D_80862B44->cur.button | 0xFFFF7FFF) == 0)) || ((temp_a0_2 == 0xB) && (temp_a1 != 1) && (temp_a1 != 3))) && (sp48 = (bitwise f32) func_80835CD8((? *) arg1, arg0, &D_8085D154, &sp4C, &sp60, &sp5C), sp44 = arg0->world.pos.y, (func_800CA1AC(arg1, &arg1->colCtx, (bitwise f32) sp4C, sp54, &sp44, &sp58) != 0)) && ((sp44 - sp48) > 50.0f)) {
                            func_80834DB8((LinkAnimationHeader *) arg0, (bitwise f32) &D_0400DE58, (GlobalContext *)0x40C00000, (Actor *) arg1);
                            func_80831494(arg1, arg0, sp2C, 0);
                            return;
                        }
                        func_808373F8((Actor *) arg1, (LinkAnimationHeader *) arg0, 0x6814U);
                        return;
                    }
                    goto block_45;
                }
block_45:
                if ((D_80862B1C == 9) || (D_80862B18 <= arg0->unk_A68->unk_34) || (func_80837DEC(arg0, arg1, 1) == 0)) {
                    func_8082DB3C(arg1, arg0, (LinkAnimationHeader *) &D_0400DD30);
                    return;
                }
                /* Duplicate return node #50. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #50. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #50. Try simplifying control flow for better match */
        return;
    }
    arg0->unk_B68 = (s16) temp_f6;
    arg0->unk_B67 = 5U;
}

void func_8083868C(GlobalContext *arg0, Actor *arg1) {
    s32 sp1C;
    Actor *temp_a0;
    Actor *temp_a2;
    GlobalContext *temp_a3;
    u8 temp_v0;
    Actor *phi_a2;
    s32 phi_v1;
    GlobalContext *phi_a3;
    Camera *phi_v0;

    temp_a3 = arg0;
    temp_a2 = arg1;
    temp_a0 = temp_a2;
    phi_a2 = temp_a2;
    phi_v1 = 6;
    phi_a3 = temp_a3;
    if (temp_a2->unk_AA5 == 3) {
        arg1 = temp_a2;
        arg0 = temp_a3;
        phi_a2 = arg1;
        phi_a3 = arg0;
        if (func_800B7118(temp_a0, temp_a2, temp_a3) != 0) {
            temp_v0 = arg1->unk_14B;
            if (temp_v0 == 4) {
                phi_v1 = 0xC;
            } else if (temp_v0 == 3) {
                phi_v1 = 3;
            } else {
                phi_v1 = 0xD;
            }
        } else {
            phi_v1 = 8;
        }
    }
    if (phi_a2->id == 0) {
        sp1C = phi_v1;
        phi_v0 = Play_GetCamera(phi_a3, 0);
    } else {
        sp1C = phi_v1;
        phi_v0 = Play_GetCamera(phi_a3, phi_a2->unk_D8E);
    }
    func_800DF840(phi_v0, (s16) phi_v1);
}

void func_80838760(Actor *arg0) {
    s16 temp_a0;
    s8 temp_a1;

    temp_a1 = arg0->unk_A86;
    if ((s32) temp_a1 >= 0) {
        temp_a0 = (s16) temp_a1;
        arg0 = arg0;
        ActorCutscene_Stop(temp_a0);
        arg0->unk_A86 = -1;
    }
}

s32 func_808387A0(GlobalContext *arg0, Actor *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if (arg1->unk_AA5 == 4) {
        func_80838760(arg1);
        arg1->flags &= -0x101;
        func_80831494(arg0, arg1, func_8085B08C, 0);
        if (arg1->unk_3BA != 0) {
            arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
        }
        func_8082DC38((Player *) arg1, arg1);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80838830(Player *arg0, s16 arg1) {
    OSMesgQueue *sp34;
    OSMesgQueue *temp_a0;
    RomFile *temp_v0;
    u32 temp_a2;

    temp_a0 = arg0 + 0x1DC;
    if (arg1 != 0) {
        arg0->giObjectLoading = 1;
        sp34 = temp_a0;
        osCreateMesgQueue(temp_a0, arg0 + 0x1F4, 1);
        temp_v0 = &objectFileTable[arg1];
        temp_a2 = temp_v0->vromStart;
        DmaMgr_SendRequestImpl(arg0 + 0x1BC, arg0->giObjectSegment, temp_a2, temp_v0->vromEnd - temp_a2, 0, sp34, NULL);
    }
}

void func_808388B8(GlobalContext *arg0, Player *arg1, s32 arg2) {
    LightSettings2 *temp_t2;

    func_8082DE50(arg0, arg1);
    func_80831760(arg0, arg1, func_808553F4, 0);
    func_8082E4A4(arg0, arg1, *(&D_8085D160 + (arg1->transformation * 4)));
    gSaveContext.playerForm = (u8) arg2;
    arg1->stateFlags1 |= 2;
    temp_t2 = &arg0->envCtx.unk_8C;
    D_80862B50.unk_0 = (s32) (unaligned s32) temp_t2->unk_0;
    D_80862B50.unk_4 = (s32) (unaligned s32) temp_t2->unk_4;
    D_80862B50.unk_8 = (s32) (unaligned s32) temp_t2->unk_8;
    D_80862B50.unk_C = (s32) (unaligned s32) temp_t2->unk_C;
    D_80862B50.unk_10 = (s32) (unaligned s32) temp_t2->unk_10;
    D_80862B50.unk_14 = (s32) (unaligned s32) temp_t2->unk_14;
    D_80862B50.unk_18 = (s32) (unaligned s32) temp_t2->unk_18;
    arg1->actor.velocity.y = 0.0f;
    func_800B90F4(arg0);
}

void func_808389BC(GlobalContext *arg0, Player *arg1) {
    func_80831760(arg0, (Player *) func_80855AF4, NULL);
    func_8082E4A4(arg0, arg1, (AnimationHeaderCommon *) &D_0400D0C8);
    arg1->stateFlags1 |= 0x20000100;
    func_8082DAD4((Actor *) arg1);
}

void func_80838A20(GlobalContext *arg0, Actor *arg1) {
    func_80831760(arg0, (Player *) func_80855B9C, NULL);
    func_8082DB90(arg0, arg1, (LinkAnimationHeader *) &D_0400D0A8);
    arg1->unk_153 = 0;
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000100);
    func_8082DAD4(arg1);
    func_80115D5C(arg0);
}

s32 func_80838A90(Actor *arg0, GlobalContext *arg1) {
    s32 sp34;
    void *sp2C;
    Actor *sp28;
    void *sp24;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1_2;
    s8 temp_a1;
    s8 temp_v0_3;
    s8 temp_v0_6;
    s8 temp_v0_7;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_t0;
    void *temp_v1_3;
    AnimationHeaderCommon *phi_a2;
    void *phi_v1;
    s32 phi_v0;

    phi_v0 = 0;
    if (arg0->unk_AA5 != 0) {
        if (((arg0->bgCheckFlags & 3) == 0) && (temp_v0 = arg0->unk_A6C, ((temp_v0 * 0x10) >= 0)) && ((temp_v0 << 8) >= 0) && ((arg0->unk_A74 & 8) == 0) && ((arg0->unk_275 & 8) == 0)) {
            func_80838760(arg0);
            func_80833AA0(arg0, arg1);
            return 1;
        }
        if (func_808387A0(arg1, arg0) == 0) {
            if (arg0->unk_AA5 == 5) {
                temp_a1 = arg0->unk_14A;
                if (((s32) temp_a1 >= 0x3A) && ((s32) temp_a1 < 0x52)) {
                    temp_v0_2 = arg0->unk_153;
                    temp_v1 = temp_a1 - 0x39;
                    temp_a0 = temp_v1 == temp_v0_2;
                    arg0->unk_155 = temp_v0_2;
                    if ((temp_a0 != 0) || ((s32) temp_a1 < 0x4D) || ((temp_a1 == 0x4D) && (arg0->unk_14B != 4))) {
                        if (temp_a0 != 0) {
                            arg0->unk_153 = 0U;
                        } else {
                            arg0->unk_153 = temp_v1;
                        }
                        if (arg0->unk_14B == 4) {
                            func_80838A20(arg1, arg0);
                            return 1;
                        }
                        func_808388B8(arg1, (Player *) arg0, 4);
                        goto block_24;
                    }
                    arg0->unk_153 = temp_v1;
                    if ((temp_v1 & 0xFF) == 0x14) {
                        func_808389BC(arg1, (Player *) arg0);
                        return 1;
                    }
                    func_808388B8(arg1, (Player *) arg0, arg0->unk_14A - 0x4E);
block_24:
                    gSaveContext.equippedMask = arg0->unk_153;
                    goto block_85;
                }
                if (((arg0->flags & 0x100) != 0x100) && (temp_a1 != 0x13)) {
                    if (arg0->unk_B2B != temp_a1) {
                        if ((temp_a1 != 0x22) && (((s32) temp_a1 < 0x19) || ((s32) temp_a1 >= 0x20)) && ((s32) temp_a1 < 0x2A)) {
                            if ((arg0->unk_A88 != 0) && (temp_v0_3 = arg0->unk_A87, ((s32) temp_v0_3 > 0))) {
                                if ((temp_v0_3 != 0x2E) || (temp_a1 != 0x2E)) {
                                    if ((temp_v0_3 != 0x2E) && (func_801241E0(arg0, temp_a1) >= 0)) {
                                        goto block_39;
                                    }
                                    goto block_55;
                                }
                                goto block_39;
                            }
                            goto block_55;
                        }
                        goto block_39;
                    }
block_55:
                    temp_v0_4 = func_801241E0(arg0, arg0->unk_14A);
                    if (temp_v0_4 >= 0) {
                        sp34 = temp_v0_4;
                        func_80838760(arg0);
                        if (sp34 >= 0x14) {
                            func_80831760(arg1, (Player *) arg0, func_80853754, 0);
                            func_8082DB90(arg1, arg0, &D_0400D4A8);
                        } else if ((sp34 > 0) && (sp34 < 0xC)) {
                            func_80831760(arg1, (Player *) arg0, func_80853850, 0);
                            func_8082DB90(arg1, arg0, &D_0400D4D8);
                            arg0->unk_A86 = (s8) arg1->unk_1879C[2];
                        } else {
                            func_80831760(arg1, (Player *) arg0, func_80853194, 0);
                            if (arg0->unk_14B == 3) {
                                phi_a2 = &D_0400E2A0;
                            } else {
                                phi_a2 = &D_0400D4B8;
                            }
                            func_8082E4A4(arg1, (Player *) arg0, phi_a2);
                        }
                        goto block_85;
                    }
                    temp_t0 = arg0->unk_A90;
                    if ((temp_t0 == 0) || (temp_t0->unk_0 == 0x228) || (temp_t0->unk_38 == -1)) {
                        sp24 = temp_t0;
                        if (func_808323C0(arg0, arg1->unk_1879C[0]) == 0) {
                            return 0;
                        }
                        goto block_71;
                    }
                    arg0->unk_A86 = -1;
block_71:
                    sp24 = arg0->unk_A90;
                    func_80831760(arg1, (Player *) arg0, func_8085269C, 0);
                    if ((arg0->unk_25C < 0.0f) || ((temp_v0_5 = arg0->unk_248, temp_v1_2 = arg0->unk_14B * 4, (temp_v0_5 != *(&D_8085D17C + temp_v1_2))) && (temp_v0_5 != *(&D_8085D190 + temp_v1_2)))) {
                        sp24 = arg0->unk_A90;
                        func_8082DB90(arg1, arg0, *(&D_8085D17C + (arg0->unk_14B * 4)));
                    }
                    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x8000000);
                    if (arg0->unk_A90 != 0) {
                        arg0->flags |= 0x20000000;
                        if (arg0->unk_A90->unk_0 == 0x228) {
                            arg0->unk_A94 = -1.0f;
                        } else {
                            arg0->unk_A90->unk_4 = (s32) (arg0->unk_A90->unk_4 | 0x20000000);
                        }
                    }
block_85:
                    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x30000000);
                    func_8082DAD4(arg0);
                    goto block_86;
                }
block_39:
                sp28 = (Actor *) arg0->unk_14A;
                func_80838760(arg0, (Actor *) arg0->unk_14A);
                arg0->unk_14A = 0;
                func_80831760(arg1, (Player *) arg0, func_80853A5C, 0);
                temp_v1_3 = arg0->unk_A88;
                arg0->unk_A86 = -1;
                arg0->unk_14A = (s8) sp28;
                phi_v1 = temp_v1_3;
                if ((temp_v1_3 != 0) && (((temp_v0_6 = arg0->unk_A87, (temp_v0_6 == 0x2E)) && (arg0->unk_14A == 0x2E)) || ((temp_v0_6 != 0x2E) && ((s32) temp_v0_6 > 0)))) {
                    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x20000040);
                    if (temp_v0_6 == 0x2E) {
                        sp2C = temp_v1_3;
                        func_80115A14(0xA, -1);
                        func_80831760(arg1, (Player *) arg0, func_8084B4A8, 0);
                        arg0->unk_AD4 = (s16) (temp_v1_3->unk_92 + 0x8000);
                        arg0->shape.rot.y = arg0->unk_AD4;
                        if (temp_v1_3->unk_98 < 40.0f) {
                            sp2C = temp_v1_3;
                            func_8082DB90(arg1, arg0, (LinkAnimationHeader *) &D_0400DB10);
                            func_8082E920(arg1, arg0, 0x19);
                        } else {
                            sp2C = temp_v1_3;
                            func_8082E438(arg1, arg0, *(&D_8085C16C + (arg0->unk_14F * 4)));
                        }
                        arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x20000000);
                        arg0->unk_AE8 = 0x50;
                        arg0->unk_AE7 = -1;
                        arg0->unk_730 = (void *) arg0->unk_A88;
                        phi_v1 = sp2C;
                    } else {
                        arg0->unk_A86 = 0x7C;
                    }
                    phi_v1->unk_4 = (s32) (phi_v1->unk_4 | 0x100);
                    arg0->textId = 0;
                    arg0->unk_730 = (void *) arg0->unk_A88;
                } else {
                    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x30000040);
                    arg0->unk_AE7 = 1;
                    arg0->textId = 0xFE;
                    arg0->unk_A86 = (s8) arg1->unk_1879C[3];
                }
                temp_v0_7 = arg0->unk_AE7;
                arg0->flags |= 0x100;
                arg0->unk_A87 = (s8) arg0->unk_14A;
                if ((s32) temp_v0_7 >= 0) {
                    func_8082DB18(arg1, (Player *) arg0, *(&D_8085D1F8 + (temp_v0_7 * 4)));
                }
                func_8082DAD4(arg0);
                return 1;
            }
            if (func_8083868C(arg1, arg0) != 0) {
                func_80838760(arg0);
                if ((arg0->unk_A6C << 8) >= 0) {
                    func_80831494(arg1, arg0, func_8084E724, 1);
                    arg0->unk_AE8 = 0xD;
                    func_80836D8C(arg0);
                    if (arg0->unk_AA5 == 2) {
                        arg1->actorCtx.unk5 |= 4;
                    }
                }
                arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x100000);
                play_sound(0x4813U);
                func_8082DABC(arg0);
                return 1;
            }
            arg0->unk_AA5 = 0U;
            play_sound(0x4806U);
            return 0;
        }
block_86:
        phi_v0 = 1;
        /* Duplicate return node #87. Try simplifying control flow for better match */
        return phi_v0;
    }
    return phi_v0;
}

s32 func_808391D8(Player *arg0, GlobalContext *arg1) {
    Actor *sp2C;
    Player *sp28;
    Player *sp24;
    s32 sp20;
    s32 sp1C;
    Player *temp_a0_2;
    Player *temp_a2;
    Player *temp_a3;
    Player *temp_t0;
    s16 temp_v1;
    s16 temp_v1_3;
    s32 temp_a0;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    u8 temp_v0_4;
    s32 phi_v0;
    s32 phi_v0_2;
    Player *phi_a1;
    Player *phi_a3;
    s32 phi_t1;
    s32 phi_t2;
    Player *phi_a2;
    Player *phi_a1_2;
    Player *phi_a2_2;
    Player *phi_a2_3;
    Player *phi_a2_4;
    s32 phi_a0;

    temp_a2 = arg0;
    phi_a2 = temp_a2;
    if (gSaveContext.health != 0) {
        sp2C = temp_a2->targetActor;
        temp_t0 = temp_a2->tatlActor;
        temp_a3 = temp_a2->unk_730;
        temp_v0 = temp_a3 != 0;
        phi_v0 = temp_v0;
        phi_a1 = NULL;
        phi_a3 = temp_a3;
        phi_t1 = 0;
        phi_t2 = 0;
        phi_a1_2 = NULL;
        if (temp_t0 != 0) {
            if (temp_v0 != 0) {
                temp_v0_2 = (temp_a3->actor.flags & 0x40001) == 0x40001;
                phi_v0 = temp_v0_2;
                if (temp_v0_2 == 0) {
                    phi_v0 = temp_a3->actor.hintId != 0xFF;
                }
            }
            phi_t2 = phi_v0;
            if ((phi_v0 != 0) || (temp_a2->tatlTextId != 0)) {
                temp_v1 = temp_a2->tatlTextId;
                temp_a0 = (s32) temp_v1 < 0;
                phi_v0_2 = temp_a0;
                if (temp_a0 != 0) {
                    if (temp_a0 != 0) {
                        phi_a0 = -(s32) temp_v1;
                    } else {
                        phi_a0 = (s32) temp_v1;
                    }
                    phi_v0_2 = (phi_a0 & 0xFF00) != 0x10000;
                }
                phi_t1 = phi_v0_2;
                if ((phi_v0_2 != 0) || (phi_a1 = temp_a3, (phi_v0 == 0))) {
                    phi_a1 = temp_t0;
                    if (phi_v0_2 != 0) {
                        sp2C = NULL;
                        phi_a3 = NULL;
                    }
                }
            }
        }
        if (((sp2C != 0) || (phi_a1 != 0)) && ((phi_a3 == 0) || (phi_a3 == sp2C) || (phi_a3 == phi_a1)) && ((temp_v1_2 = temp_a2->stateFlags1, ((temp_v1_2 & 0x800) == 0)) || ((temp_v0_3 = temp_a2->leftHandActor, (temp_v0_3 != 0)) && ((phi_t1 != 0) || (sp2C == temp_v0_3) || (phi_a1 == temp_v0_3) || ((sp2C != 0) && (sp2C->flags & 0x10000))))) && (((temp_a2->actor.bgCheckFlags & 1) != 0) || (temp_a0_2 = temp_a2, ((temp_v1_2 << 8) < 0)) || (sp24 = phi_a1, arg0 = temp_a2, sp28 = phi_a3, sp20 = phi_t1, sp1C = phi_t2, phi_a2 = arg0, (func_801242B4(temp_a0_2, phi_a1, temp_a2, phi_a3) != 0)))) {
            phi_a1_2 = phi_a1;
            phi_a2_2 = phi_a2;
            if (sp2C != 0) {
                if ((phi_a3 == 0) || (phi_a3 == sp2C)) {
                    phi_a2->stateFlags2 |= 2;
                }
                sp24 = phi_a1;
                arg0 = phi_a2;
                sp20 = phi_t1;
                sp1C = phi_t2;
                phi_a1_2 = phi_a1;
                phi_a2_2 = arg0;
                if (ActorCutscene_GetCanPlayNext(0x7C) == 0) {
                    goto block_55;
                }
                if ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) || (sp2C->flags & 0x10000)) {
                    goto block_42;
                }
                if (phi_a1 == 0) {
                    goto block_55;
                }
                goto block_42;
            }
block_42:
            phi_a2_3 = phi_a2_2;
            phi_a2_4 = phi_a2_2;
            if (phi_a1_2 != 0) {
                if ((phi_t1 == 0) && ((phi_a2_2->stateFlags2 |= 0x200000, sp1C = phi_t2, sp20 = phi_t1, arg0 = phi_a2_2, sp24 = phi_a1_2, phi_a2_3 = arg0, (ActorCutscene_GetCanPlayNext(0x7C) == 0)) || (~(D_80862B44->press.button | ~8) != 0))) {
                    goto block_55;
                }
                sp2C = (Actor *) phi_a1_2;
                phi_a2_3->targetActor = NULL;
                phi_a2_4 = phi_a2_3;
                if ((phi_t1 != 0) || (phi_t2 == 0)) {
                    temp_v1_3 = phi_a2_3->tatlTextId;
                    if ((s32) temp_v1_3 < 0) {
                        (Actor *) phi_a1_2->textId = (s16) -(s32) temp_v1_3;
                    } else {
                        (Actor *) phi_a1_2->textId = temp_v1_3;
                    }
                } else {
                    temp_v0_4 = (Actor *) phi_a1_2->hintId;
                    if (temp_v0_4 != 0xFF) {
                        (Actor *) phi_a1_2->textId = temp_v0_4 + 0x1900;
                    }
                }
                goto block_54;
            }
block_54:
            temp_t9 = D_80862B2C;
            phi_a2_4->currentMask = (u8) temp_t9;
            gSaveContext.equippedMask = (u8) temp_t9;
            func_8085B460(arg1, sp2C, phi_a2_4);
            return 1;
        }
        goto block_55;
    }
block_55:
    return 0;
}

? func_80839518(Player *arg0, GlobalContext *arg1) {
    void *temp_v0;

    if (arg0->unk_AA5 != 0) {
        func_80838A90();
        return 1;
    }
    temp_v0 = arg0->unk_730;
    if ((temp_v0 != 0) && (((temp_v0->flags & 0x40001) == 0x40001) || (temp_v0->hintId != 0xFF))) {
        arg0->stateFlags2 |= 0x200000;
    } else if ((arg0->tatlTextId == 0) && (func_80123420() == 0) && (~(D_80862B44->press.button | ~8) == 0) && (func_80831814(arg0, arg1, 1) == 0)) {
        play_sound(0x4806U);
    }
    return 0;
}

void func_808395F0(Actor *arg0, Actor *arg1, ? arg2, f32 arg3, f32 arg4) {
    f32 phi_f12;
    ? phi_a2;

    phi_f12 = arg3;
    phi_a2 = arg2;
    if (arg1->unk_14B == 2) {
        arg4 *= 0.9f;
        phi_f12 = arg3 * 1.1f;
        phi_a2 = 0x12;
    }
    arg3 = phi_f12;
    func_80833864((bitwise GlobalContext *) phi_f12, arg0, (s32) arg1, phi_a2);
    func_80831494((GlobalContext *) arg0, arg1, func_8084CB58, 0);
    arg1->unk_A74 = (s32) (arg1->unk_A74 | 2);
    arg1->unk_AD0 = arg3;
    arg1->unk_AD4 = (s16) arg1->shape.rot.y;
    arg1->bgCheckFlags &= 0xFFFE;
    arg1->velocity.y = arg4;
    func_8082E188((bitwise Actor *) arg3, (u16) arg1);
    func_8082DF8C(arg1, 0x6801U);
}

s32 func_808396B8(Actor *arg0, Actor *arg1) {
    Actor *temp_a0;
    u8 temp_v0;

    temp_a0 = arg1;
    if (((temp_a0->unk_A6C << 9) >= 0) && (((temp_a0->id != 0) && (~(D_80862B44->press.button | ~0x4000) == 0)) || ((arg1 = temp_a0, (func_80124190(temp_a0) != 0)) && ((temp_v0 = arg1->unk_14B, (temp_v0 != 1)) || ((arg1->bgCheckFlags & 1) != 0)) && ((temp_v0 != 2) || ((arg1->unk_A6C << 6) >= 0)) && (D_80862B48 != 0)))) {
        return 1;
    }
    return 0;
}

s32 func_80839770(Actor *arg0, Actor *arg1) {
    Actor *temp_a1;
    u8 temp_v0;
    f32 phi_a2;

    temp_a1 = arg0;
    arg0 = temp_a1;
    if ((func_808396B8(arg1, temp_a1) != 0) && (temp_v0 = arg0->unk_14B, (temp_v0 != 1)) && (D_80862B08 != 7)) {
        phi_a2 = 2.4e-44f;
        if (temp_v0 == 2) {
            phi_a2 = 2.5e-44f;
        }
        func_808395F0(arg1, arg0, phi_a2, 3.0f, 4.5f);
        return 1;
    }
    return 0;
}

s32 func_80839800(Actor *arg0, GlobalContext *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if (((arg0 + arg0->unk_ADE)->unk_AE3 == 0) && (D_80862B08 != 7)) {
        func_80836B3C(arg1, arg0, 0.0f, arg0);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80839860(Actor *arg0, GlobalContext *arg1, s8 arg2) {
    s32 sp28;
    s32 temp_v0;
    s32 temp_v1;
    f32 phi_f0;
    s32 phi_v0;
    f32 phi_f0_2;

    temp_v1 = arg2 & 1;
    if (temp_v1 == 0) {
        phi_f0_2 = 5.8f;
    } else {
        phi_f0_2 = 3.5f;
    }
    phi_f0 = phi_f0_2;
    if (arg0->unk_145 == 2) {
        phi_f0 = phi_f0_2 * 0.5f;
    }
    sp28 = temp_v1;
    func_80834D50(arg1, arg0, *(&D_8085C2A4 + (arg2 * 0xC)), phi_f0, (u16) 0x6800);
    temp_v0 = arg2 << 0xE;
    arg0->unk_AE8 = 1;
    arg0->unk_AE7 = arg2;
    arg0->unk_AD4 = (s16) (arg0->shape.rot.y + temp_v0);
    if (temp_v1 == 0) {
        arg0->unk_AD0 = 6.0f;
    } else {
        arg0->unk_AD0 = 8.5f;
    }
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x80000);
    if (temp_v0 == 0x8000) {
        phi_v0 = 0x83C;
    } else {
        phi_v0 = 0x83D;
    }
    func_800B8E58(arg0, phi_v0 & 0xFFFF);
}

void func_80839978(GlobalContext *arg0, Player *arg1) {
    if ((arg1->actor.bgCheckFlags & 1) != 0) {
        arg1->heldItemActionParam = 0x14;
        func_80831760(arg0, arg1, func_8084AC84, 0);
        func_8082DB60(arg0, (Actor *) arg1, (LinkAnimationHeader *) &D_0400D228);
        func_8082E920(arg0, (Actor *) arg1, 0x204);
        arg1->stateFlags3 |= 0x20000000;
        arg1->unk_B48 = arg1->linearVelocity;
        func_801A3098(0x53U);
    }
}

void func_80839A10(GlobalContext *arg0, Actor *arg1) {
    if ((arg1->bgCheckFlags & 1) != 0) {
        arg1->unk_14A = 0;
        func_80831760(arg0, (Player *) func_8084AEEC, NULL);
        func_8082DB60(arg0, arg1, (LinkAnimationHeader *) &D_0400CF98);
        arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x2000000);
        func_801A3098(0x71U);
    }
}

s32 func_80839A84(GlobalContext *arg0, Actor *arg1) {
    Actor *temp_a1;

    if (arg1->unk_14B == 3) {
        temp_a1 = arg1;
        if (func_80836DC0(arg0) != 0) {

        } else {
            arg1 = temp_a1;
            func_80831494(arg0, temp_a1, func_808573A4, 0);
            arg1->unk_ADC = 4;
            arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xBFFDFFFF);
            func_808373A4(arg0, (LinkAnimationHeader *) arg1);
        }
        return 1;
    }
    return 0;
}

? func_80839B18(Player *arg0, Actor *arg1) {
    s32 sp2C;
    s8 temp_a2;

    if ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) && (arg1->unk_186E3 != 2) && (D_80862B08 != 7) && (D_80862B40 != 1)) {
        temp_a2 = (arg0 + arg0->unk_ADE)->unk_AE3;
        if ((s32) temp_a2 <= 0) {
            sp2C = (s32) temp_a2;
            if (func_8082FBE8(arg0, temp_a2) != 0) {
                if (arg0->actor.category != 2) {
                    if ((s32) temp_a2 < 0) {
                        func_80834DB8((LinkAnimationHeader *) arg0, (bitwise f32) &D_0400DCD8, (bitwise GlobalContext *) ((f32) gGameInfo->data[69] / 100.0f), arg1);
                        return 1;
                    }
                    func_80836B3C((GlobalContext *) arg1, (Actor *) arg0, 0.0f);
                    return 1;
                }
                if (((arg0->stateFlags1 * 0x10) >= 0) && (func_80124190((Actor *) arg0) != 0) && (func_80832090(arg0) != 0) && (arg0->transformation != 1)) {
                    func_808395F0(arg1, (Actor *) arg0, 2.4e-44f, 5.0f, 5.0f);
                    return 1;
                }
                if (func_80839A84((GlobalContext *) arg1, (Actor *) arg0) == 0) {
                    func_80836B3C((GlobalContext *) arg1, (Actor *) arg0, 0.0f);
                }
                return 1;
            }
            goto block_19;
        }
        func_80839860((Actor *) arg0, (GlobalContext *) temp_a2);
        return 1;
    }
block_19:
    return 0;
}

void func_80839CD8(Player *arg0, GlobalContext *arg1) {
    AnimationHeaderCommon *sp34;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 phi_f0;
    AnimationHeaderCommon *phi_a2;
    f32 phi_f0_2;
    f32 phi_f0_3;
    f32 phi_f0_4;

    temp_f0 = arg0->unk_B38 - 3.0f;
    phi_f0 = temp_f0;
    if (temp_f0 < 0.0f) {
        phi_f0 = temp_f0 + 29.0f;
    }
    if (phi_f0 < 14.0f) {
        temp_f0_2 = 11.0f - phi_f0;
        phi_a2 = *(&D_8085C01C + (arg0->modelAnimType * 4));
        phi_f0_3 = temp_f0_2;
        if (temp_f0_2 < 0.0f) {
            phi_f0_3 = -temp_f0_2 * 1.375f;
        }
        phi_f0_2 = phi_f0_3 / 11.0f;
    } else {
        temp_f0_3 = 26.0f - phi_f0;
        phi_a2 = *(&D_8085C034 + (arg0->modelAnimType * 4));
        phi_f0_4 = temp_f0_3;
        if (temp_f0_3 < 0.0f) {
            phi_f0_4 = -temp_f0_3 * 2.0f;
        }
        phi_f0_2 = phi_f0_4 / 12.0f;
    }
    sp34 = phi_a2;
    sp30 = phi_f0_2;
    SkelAnime_ChangeLinkAnim(arg1, arg0 + 0x240, (LinkAnimationHeader *) phi_a2, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(phi_a2), (u8) 2, 4.0f * sp30);
    arg0->currentYaw = arg0->actor.shape.rot.y;
}

void func_80839E3C(Player *arg0, GlobalContext *arg1) {
    func_808369F4(arg0, arg1);
    func_80839CD8(arg0, arg1);
}

void func_80839E74(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_80849FE0, 1);
    func_8082DB18(arg1, (Player *) arg0, func_8082ED20(arg0));
    arg0->unk_AD4 = (s16) arg0->shape.rot.y;
}

void func_80839ED0(Player *arg0, GlobalContext *arg1) {
    if (((arg0->stateFlags3 & 0x80) == 0) && (arg0->unk_748 != func_80852B28) && (func_8083213C(arg0) == 0)) {
        func_80836D8C((Actor *) arg0);
        if ((arg0->stateFlags1 & 0x40) == 0) {
            if (func_801242B4(arg0) != 0) {
                func_808353DC(arg1, (Actor *) arg0);
            } else {
                func_80836988(arg0, arg1);
            }
        }
        if ((s32) arg0->unk_AA5 < 5) {
            arg0->unk_AA5 = 0;
        }
    }
    arg0->stateFlags1 &= 0xFFEF9FFB;
}

s32 func_80839F98(GlobalContext *arg0, GlobalContext *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if ((arg1->unk_A6C * 0x10) >= 0) {
        if (arg1->unk_AD0 != 0.0f) {
            func_80836B3C(arg1, (bitwise Actor *) 0.0f);
            return 1;
        }
        func_80836AD8(arg1);
        SkelAnime_ChangeLinkAnim(arg0, (SkelAnime *) &arg1->mainCamera.paramData[32], (LinkAnimationHeader *) &D_0400E208, 0.6666667f, 0.0f, 7.0f, (u8) 2, 0.0f);
        phi_v0 = 1;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return phi_v0;
    }
    return phi_v0;
}

void func_8083A04C(Player *arg0) {
    if (arg0->currentBoots == 5) {
        if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
            arg0->currentBoots = 4;
        }
        if (arg0->unk_748 == func_808508C8) {
            arg0->unk_AE8 = 0x14;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if (~(D_80862B44->press.button | ~0x4000) == 0) {
        arg0->currentBoots = 5;
    }
}

? func_8083A0CC(void *arg0, ? arg1) {
    if ((D_80862B04 == 0) && (arg0->unk_14B == 2)) {
        func_8083A04C();
    }
    return 0;
}

s32 func_8083A114(Player *arg0, GlobalContext *arg1) {
    if ((D_80862B04 == 0) && ((arg0->stateFlags1 << 8) >= 0) && (func_8082FB68(arg0) == 0)) {
        if ((arg0->transformation == 2) && ((arg0->stateFlags1 * 0x10) < 0)) {
            func_8083A04C(arg0);
            goto block_19;
        }
        if ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) && (func_8082FB68(arg0) == 0)) {
            if (arg0->transformation == 1) {
                if (func_80839F98(arg1, (GlobalContext *) arg0) != 0) {
                    return 1;
                }
                goto block_14;
            }
            if ((func_80839A84(arg1, (Actor *) arg0) != 0) || (func_80839800((Actor *) arg0, arg1) != 0)) {
                return 1;
            }
block_14:
            if ((arg0->unk_ACF == 0) && ((s32) arg0->itemActionParam >= 3) && (arg0->transformation != 0)) {
                func_80831990(arg1, (Actor *) arg0, 0xFF);
            } else {
                arg0->stateFlags2 ^= 0x100000;
            }
            goto block_19;
        }
        goto block_19;
    }
block_19:
    return 0;
}

s32 func_8083A274(Player *arg0, GlobalContext *arg1) {
    AnimationHeaderCommon *sp34;
    f32 temp_f0;
    u8 temp_v0;
    AnimationHeaderCommon *phi_a2;
    AnimationHeaderCommon *phi_a2_2;
    f32 phi_f2;

    if ((~(D_80862B44->cur.button | ~0x10) == 0) && (arg0->unk_AA5 == 0) && (arg1->unk_1887C == 0) && ((func_801234B0(arg0) != 0) || ((((temp_v0 = arg0->transformation, (temp_v0 == 2)) && !(arg0->stateFlags1 & 0x2000000)) || ((temp_v0 == 4) && (arg0->currentShield != 0))) && (func_80123434(arg0) == 0) && (arg0->unk_730 == 0)))) {
        func_8082DC38(arg0);
        func_8082DCA0(arg1, arg0);
        if (func_80831494(arg1, (Actor *) arg0, func_8084B5C0, 0) != 0) {
            arg0->stateFlags1 |= 0x400000;
            if (arg0->transformation != 1) {
                if (func_801234B0(arg0) == 0) {
                    func_801239AC(arg0);
                    phi_a2 = *(&D_8085C04C + (arg0->modelAnimType * 4));
                } else {
                    phi_a2 = (AnimationHeaderCommon *) &D_0400D218;
                    if (arg0->transformation == 3) {
                        phi_a2 = &D_0400E2C8;
                    }
                }
                phi_a2_2 = phi_a2;
                if (phi_a2 != arg0->skelAnime.animCurrentSeg) {
                    sp34 = phi_a2;
                    if (func_80123420(arg0) != 0) {
                        arg0->unk_B3C = 1.0f;
                    } else {
                        arg0->unk_B3C = 0.0f;
                        sp34 = phi_a2;
                        func_8082FC60((Actor *) arg0);
                    }
                    arg0->unk_AB2.x = 0;
                    arg0->unk_AB2.y = 0;
                    arg0->unk_AB2.z = 0;
                    phi_a2_2 = phi_a2;
                }
                sp34 = phi_a2_2;
                temp_f0 = (f32) SkelAnime_GetFrameCount(phi_a2_2);
                if (phi_a2_2 == &D_0400E2C8) {
                    phi_f2 = 0.0f;
                } else {
                    phi_f2 = temp_f0;
                }
                SkelAnime_ChangeLinkAnim(arg1, &arg0->skelAnime, (LinkAnimationHeader *) phi_a2_2, 0.6666667f, phi_f2, temp_f0, (u8) 2, 0.0f);
            }
            func_80830AE8((Actor *) arg0);
        }
        return 1;
    }
    return 0;
}

s32 func_8083A4A4(Actor *arg0, f32 *arg1, s16 *arg2, f32 arg3) {
    f32 *temp_a0;
    s16 temp_v0;
    s32 phi_v1;

    temp_a0 = arg0 + 0xAD0;
    temp_v0 = arg0->unk_AD4 - *arg2;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 >= 0x6001) {
        arg0 = arg0;
        if (Math_StepToF(temp_a0, 0.0f, arg3) != 0) {
            *arg1 = 0.0f;
            *arg2 = arg0->unk_AD4;
            goto block_6;
        }
        return 1;
    }
block_6:
    return 0;
}

void func_8083A548(Actor *arg0) {
    s8 temp_v0;

    temp_v0 = arg0->unk_ADC;
    if (((s32) temp_v0 > 0) && (~(D_80862B44->cur.button | ~0x4000) != 0)) {
        arg0->unk_ADC = (s8) -(s32) temp_v0;
    }
}

s32 func_8083A580(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    GlobalContext *temp_a3;
    s8 temp_v0;
    u8 temp_v1;

    temp_a2 = arg0;
    temp_a3 = arg1;
    if (~(D_80862B44->cur.button | ~0x4000) == 0) {
        temp_a0 = temp_a2;
        if (((temp_a2->unk_A6C << 9) >= 0) && (arg0 = temp_a2, arg1 = temp_a3, (func_80124190(temp_a0, temp_a2, temp_a3) != 0)) && (temp_v0 = arg0->unk_ADC, ((s32) temp_v0 > 0)) && ((temp_v1 = arg0->unk_14B, (temp_v1 == 2)) || ((temp_v0 == 1) && (arg0->unk_147 != 7)))) {
            if (temp_v1 == 2) {
                func_80830E30(arg0, arg1, arg0, arg1);
                return 1;
            }
            func_808335B0(arg1, arg0, arg0, arg1);
            return 1;
        }
        goto block_11;
    }
    func_8083A548(temp_a2, temp_a2, temp_a3);
block_11:
    return 0;
}

? func_8083A658(GlobalContext *arg0, Player *arg1) {
    ? phi_v0;

    phi_v0 = 0;
    if ((arg1->actor.bgCheckFlags & 1) != 0) {
        func_80831494(arg0, (Actor *) func_80852B28, NULL);
        func_8082DB18(arg0, arg1, (LinkAnimationHeader *) &D_0400DD38);
        arg1->unk_AA5 = 0;
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_8083A6C0(GlobalContext *arg0, Actor *arg1) {
    if (D_80862B48 != 0) {
        if (func_8012420C(arg1) >= 0) {
            func_80831494(arg0, arg1, func_808534C0, 0);
            if (arg1->yDistToWater > 12.0f) {
                arg1->unk_AE8 = 1;
            }
            func_8082DB90(arg0, arg1, *(&D_8085D200 + (arg1->unk_AE8 * 0xC)));
            func_800B8E58(arg1, 0x1801U);
            func_8082DF8C(arg1, 0x6814U);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_8083A794(Player *arg0, GlobalContext *arg1) {
    void (*sp24)(Actor *, GlobalContext *);
    s32 temp_v0;
    void (*phi_a2)(Actor *, GlobalContext *);

    temp_v0 = arg0->unk_748;
    if ((temp_v0 != func_8084AF9C) && (temp_v0 != func_8084B0EC)) {
        arg0->unk_B70 = 0;
        arg0->unk_B34 = 0.0f;
        arg0->unk_B38 = 0.0f;
        sp24 = func_8084AF9C;
        func_8082E514(arg1, arg0, *(&D_8085BEB4 + (arg0->modelAnimType * 4)));
    }
    sp24 = func_8084AF9C;
    if (func_8082FBE8(arg0) != 0) {
        phi_a2 = func_8084B0EC;
    } else {
        phi_a2 = func_8084AF9C;
    }
    func_80831494(arg1, (Actor *) arg0, phi_a2, 1);
}

void func_8083A844(Actor *arg0, s16 arg2) {
    arg0->unk_AD4 = arg2;
    arg0->shape.rot.y = arg0->unk_AD4;
    func_8083A794((Player *) arg2);
}

s32 func_8083A878(GlobalContext *arg0, Actor *arg1, f32 arg2) {
    WaterBox *sp2C;
    f32 sp28;
    f32 *temp_t6;
    f32 temp_f10;

    temp_t6 = &sp28;
    sp28 = arg1->world.pos.y;
    if ((func_800CA1AC(arg0, arg0 + 0x830, arg1->world.pos.x, arg1->world.pos.z, temp_t6, &sp2C) != 0) && (temp_f10 = sp28 - arg1->world.pos.y, sp28 = temp_f10, (arg1->unk_A68->unk_24 <= temp_f10))) {
        func_80831494(arg0, arg1, func_80850B18, 0);
        func_8082E634(arg0, arg1, (LinkAnimationHeader *) &D_0400DFD0);
        arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x28000000);
        arg1->unk_AE8 = 0x14;
        arg1->unk_AD0 = 2.0f;
        func_80123140(arg0, (Player *) arg1);
        return 0;
    }
    func_80835324(arg0, arg1, arg2, arg1->shape.rot.y);
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
    return 1;
}

void func_8083A98C(void *arg0, GlobalContext *arg1) {
    s32 sp1C;
    Input *temp_v0_4;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a1;
    s16 temp_t0;
    s16 temp_t1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 phi_v0;
    s32 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;
    s16 phi_v0_5;
    s16 phi_v1;
    Input *phi_v0_6;
    u16 phi_v0_7;
    s16 phi_a0;
    s16 phi_a0_2;
    s16 phi_v0_8;

    if (arg1->csCtx.state == 0) {
        temp_v1 = arg0->unk_AE8;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            arg0->unk_AE8 = (s16) (temp_v1 - 1);
            phi_v0 = arg0->unk_AE8;
        }
        if (phi_v0 != 0) {
            temp_v0 = arg1->sceneNum;
            if (temp_v0 != 0xD) {
                sp1C = 6;
            } else {
                sp1C = 0xF;
            }
            if (arg0->unk_AE8 == 1) {
                if (temp_v0 == 0xD) {
                    phi_v0_2 = 0x2A00;
                } else {
                    phi_v0_2 = 0x5E6;
                }
                func_801518B0(arg1, phi_v0_2 & 0xFFFF, NULL);
            }
        } else {
            D_80862B44 = arg1->state.input;
            if (arg1->view.fovy >= 25.0f) {
                temp_v1_2 = arg0->unk_48;
                temp_t1 = arg0->unk_4A;
                temp_v0_2 = arg1->state.input[0].rel.stick_y * 4;
                temp_t0 = temp_v1_2;
                if ((s32) temp_v0_2 < -0x12C) {
                    phi_v0_3 = -0x12C;
                } else {
                    phi_a0 = temp_v0_2;
                    if ((s32) temp_v0_2 >= 0x12D) {
                        phi_a0 = 0x12C;
                    }
                    phi_v0_3 = phi_a0;
                }
                arg0->unk_48 = (s16) (temp_v1_2 + phi_v0_3);
                temp_v1_3 = arg0->unk_48;
                if ((s32) temp_v1_3 < -0x2EE0) {
                    arg0->unk_48 = -0x2EE0;
                } else {
                    phi_v0_4 = temp_v1_3;
                    if ((s32) temp_v1_3 >= 0x2EE1) {
                        phi_v0_4 = 0x2EE0;
                    }
                    arg0->unk_48 = phi_v0_4;
                }
                temp_a1 = arg0->unk_BE;
                temp_v0_3 = (s32) D_80862B44->rel.stick_x * -4;
                if ((s32) temp_v0_3 < -0x12C) {
                    phi_v0_5 = -0x12C;
                } else {
                    phi_a0_2 = temp_v0_3;
                    if ((s32) temp_v0_3 >= 0x12D) {
                        phi_a0_2 = 0x12C;
                    }
                    phi_v0_5 = phi_a0_2;
                }
                temp_v1_4 = (s16) (arg0->unk_4A - temp_a1) + phi_v0_5;
                if ((s32) temp_v1_4 < -0x3E80) {
                    phi_v1 = -0x3E80;
                } else {
                    phi_v0_8 = temp_v1_4;
                    if ((s32) temp_v1_4 >= 0x3E81) {
                        phi_v0_8 = 0x3E80;
                    }
                    phi_v1 = phi_v0_8;
                }
                arg0->unk_4A = (s16) (temp_a1 + phi_v1);
                if (arg1->sceneNum == 0x2D) {
                    temp_f2 = (f32) (s16) (arg0->unk_48 - temp_t0);
                    temp_f12 = (f32) (s16) (arg0->unk_4A - temp_t1);
                    func_8019FAD8((Vec3f *) &D_801DB4A4, 0xCDU, sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) / 300.0f);
                }
            }
            if (arg1->sceneNum == 0xD) {
                sp1C = 0xF;
                phi_v0_6 = D_80862B44;
            } else {
                temp_v0_4 = D_80862B44;
                phi_v0_6 = temp_v0_4;
                if (~(temp_v0_4->cur.button | 0xFFFF7FFF) == 0) {
                    sp1C = 0xA;
                } else {
                    sp1C = 0;
                }
            }
            if (~(phi_v0_6->press.button | ~0x4000) == 0) {
                func_801477B4(arg1);
                temp_v0_5 = arg1->sceneNum;
                if (temp_v0_5 == 0x2D) {
                    gSaveContext.respawn[0].entranceIndex = 0x4C20;
                } else {
                    if (temp_v0_5 == 0xD) {
                        phi_v0_7 = 0xE30U;
                    } else {
                        phi_v0_7 = 0x4080U;
                    }
                    gSaveContext.respawn[0].entranceIndex = phi_v0_7;
                }
                func_80169EFC(arg1);
                gSaveContext.respawnFlag = -2;
                arg1->unk_1887F = 0x15;
            }
        }
        func_800DFAC8(Play_GetCamera(arg1, 0), 0x3E);
        func_800DF840(Play_GetCamera(arg1, 0), unksp1E);
    }
}

void func_8083AD04(void *arg0, void *arg1) {
    s16 temp_v0;

    arg1->unk_138 = func_8083A98C;
    arg1->unk_13C = 0;
    temp_v0 = arg0->unk_A4;
    if (temp_v0 == 0x2D) {
        arg1->unk_48 = 0xBD8;
        arg1->unk_4A = -0x4D74;
        arg1->unk_AE8 = 0x14;
    } else if (temp_v0 == 0xD) {
        arg1->unk_48 = 0x9A6;
        arg1->unk_4A = 0x2102;
        arg1->unk_AE8 = 2;
    } else {
        arg1->unk_48 = 0x9A6;
        arg1->unk_4A = 0x2102;
        arg1->unk_AE8 = 0x14;
    }
    arg0->unk_1CA5 = (u8) (arg0->unk_1CA5 | 2);
}

void func_8083AD8C(GlobalContext *arg0, Actor *arg1) {
    func_8085B384(arg1, arg0, arg1);
}

void func_8083ADB8(GlobalContext *arg1) {
    if (func_8083A878(arg1, (Actor *)0x43340000) != 0) {
        arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = -0x14;
    }
}

void func_8083ADF0(void *arg1) {
    arg1->unk_AD0 = 2.0f;
    gSaveContext.entranceSpeed = 2.0f;
    if (func_8083A878((GlobalContext *)0x42F00000) != 0) {
        arg1->unk_AE8 = -0xF;
    }
}

void func_8083AE38(void *arg1) {
    if (gSaveContext.entranceSpeed < 0.1f) {
        gSaveContext.entranceSpeed = 0.1f;
    }
    arg1->unk_AD0 = gSaveContext.entranceSpeed;
    if (func_8083A878((GlobalContext *)0x44480000) != 0) {
        arg1->unk_AE8 = (s16) (s32) (-80.0f / arg1->unk_AD0);
        if ((s32) arg1->unk_AE8 < -0x14) {
            arg1->unk_AE8 = -0x14;
        }
    }
}

void func_8083AECC(Actor *arg0, s16 arg1, GlobalContext *arg2) {
    func_80831494(arg2, arg0, func_8084A5C0, 1);
    func_8013670C(arg2, arg0 + 0x240);
    arg0->unk_B38 = 0.0f;
    arg0->unk_B34 = 0.0f;
    arg0->unk_AD4 = arg1;
}

void func_8083AF30(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;

    temp_a1 = arg0;
    arg0 = temp_a1;
    func_80831494(arg1, temp_a1, func_8084A26C, 1);
    func_8082E514(arg1, (Player *) arg0, *(&D_8085BE9C + (arg0->unk_14F * 4)));
}

void func_8083AF8C(Actor *arg0, s16 arg1, GlobalContext *arg2) {
    func_80831494(arg2, arg0, func_8084B288, 1);
    SkelAnime_ChangeLinkAnim(arg2, arg0 + 0x240, (LinkAnimationHeader *) &D_0400D3F8, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400D3F8), (u8) 2, -6.0f);
    arg0->unk_AD0 = 8.0f;
    arg0->unk_AD4 = arg1;
}

void func_8083B030(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_8084A8E8, 1);
    func_8082E514(arg1, (Player *) arg0, *(&D_8085C0C4 + (arg0->unk_14F * 4)));
    arg0->unk_B38 = 0.0f;
}

void func_8083B090(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_8084B3B8, 1);
    SkelAnime_ChangeLinkAnimPlaybackStop(arg1, arg0 + 0x240, (LinkAnimationHeader *) &D_0400D3E8, 2.0f);
}

void func_8083B0E4(GlobalContext *arg0, Actor *arg1, s16 arg2) {
    arg1->unk_AD4 = arg2;
    func_80831494(arg0, arg1, func_8084AB4C, 1);
    arg1->unk_B4E = 0x4B0;
    arg1->unk_B4E = (s16) (s32) ((f32) arg1->unk_B4E * D_8085C3E4);
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, *(&D_8085C0DC + (arg1->unk_14F * 4)), 1.0f, 0.0f, 0.0f, (u8) 0, -6.0f);
}

void func_8083B1A0(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    Actor *temp_a1_2;
    LinkAnimationHeader *phi_a2;

    temp_a1 = arg0;
    arg0 = temp_a1;
    func_80831494(arg1, temp_a1, func_80849FE0, 1);
    temp_a1_2 = arg0;
    if (temp_a1_2->unk_B40 < 0.5f) {
        phi_a2 = *(&D_8085C10C + (temp_a1_2->unk_14F * 4));
    } else {
        phi_a2 = *(&D_8085C0F4 + (temp_a1_2->unk_14F * 4));
    }
    arg0 = temp_a1_2;
    func_8082DB18(arg1, (Player *) temp_a1_2, phi_a2);
    arg0->unk_AD4 = (s16) arg0->shape.rot.y;
}

void func_8083B23C(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_80849A9C, 1);
    func_8082E438(arg1, arg0, *(&D_8085BF14 + (arg0->unk_14F * 4)));
    arg0->unk_AE8 = 1;
}

void func_8083B29C(Actor *arg0) {
    if (arg0->unk_AD0 != 0.0f) {
        func_8083A794();
        return;
    }
    func_8083B1A0();
}

void func_8083B2E4(Actor *arg0) {
    if (arg0->unk_AD0 != 0.0f) {
        func_8083A794();
        return;
    }
    func_80836988();
}

void func_8083B32C(GlobalContext *arg0, Player *arg1, f32 arg2) {
    s32 temp_t7;

    temp_t7 = arg1->stateFlags1 | 0x40000;
    arg1->stateFlags1 = temp_t7;
    arg1->stateFlags1 = temp_t7 & 0xF7FFFFFF;
    func_8082DC64(arg0, arg1);
    if (func_80837730(arg0, arg1, arg2, 0x1F4) != 0) {
        func_800B8E58((Actor *) arg1, 0x288AU);
    }
    func_80123140(arg0, arg1);
}

s32 func_8083B3B4(GlobalContext *arg0, Actor *arg1, Input *arg2) {
    s16 sp2A;
    f32 sp24;
    s16 *temp_v0;
    s16 temp_v0_2;
    s32 temp_t0;
    s32 temp_v1;
    s32 phi_a2;
    AnimationHeaderCommon *phi_a2_2;

    if (((arg1->unk_A6C & 0x400) == 0) && ((arg1->unk_A70 & 0x400) == 0) && (arg1->unk_14B != 2)) {
        if (arg2 != 0) {
            temp_v0 = arg1->unk_388;
            if (((temp_v0 == 0) || (*temp_v0 != 0x224)) && (~(arg2->press.button | 0xFFFF7FFF) == 0)) {
                temp_v0_2 = arg1->unk_AAA;
                phi_a2 = (s32) temp_v0_2;
                if ((s32) temp_v0_2 < 0) {
                    phi_a2 = -(s32) temp_v0_2;
                }
                if ((phi_a2 < 0x2EE0) && ((s32) arg1->unk_145 < 5) && (func_800C9E18(arg0 + 0x830, arg1->floorPoly, (s32) arg1->floorBgId) < 2)) {
                    goto block_12;
                }
                goto block_17;
            }
            goto block_17;
        }
block_12:
        if (arg1->unk_748 != func_8085B08C) {
            func_80831494(arg0, arg1, func_808516B4, 0);
        }
        func_8082DB18(arg0, (Player *) arg1, (LinkAnimationHeader *) &D_0400DFE0);
        arg1->unk_AAA = 0;
        temp_t0 = arg1->unk_A70 | 0x400;
        arg1->unk_A70 = temp_t0;
        arg1->velocity.y = 0.0f;
        if (arg2 != 0) {
            arg1->unk_A70 = (s32) (temp_t0 | 0x800);
            func_800B8E58(arg1, 0x864U);
        }
        return 1;
    }
block_17:
    if ((arg1->unk_14B != 3) && (((arg1->unk_A6C & 0x400) != 0) || (((arg1->unk_A70 & 0x400) != 0) && (((arg1->unk_748 != func_80850D68) && ((arg1->unk_A74 & 0x8000) == 0)) || ((s32) arg1->unk_AAA < -0x1555)))) && ((arg1->yDistToWater - arg1->velocity.y) < arg1->unk_A68->unk_30)) {
        arg1->unk_A70 = (s32) (arg1->unk_A70 & ~0x400);
        func_8082DC64(arg0, (Player *) arg1);
        if ((arg1->unk_A74 & 0x8000) != 0) {
            sp2A = arg1->unk_B88;
            sp24 = arg1->unk_B48 * 1.5f;
            func_80831494(arg0, arg1, func_8084CA24, 1);
            arg1->unk_A74 = (s32) (arg1->unk_A74 | 0x8000);
            arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xF7FFFFFF);
            if (sp24 > 13.5f) {
                sp24 = 13.5f;
            }
            arg1->unk_AD0 = (f32) (Math_CosS(arg1->unk_AAA) * sp24);
            arg1->velocity.y = -Math_SinS(arg1->unk_AAA) * sp24;
            arg1->unk_B88 = sp2A;
            func_800B8E58(arg1, 0x288AU);
            return 1;
        }
        if (func_80837730(arg0, (Player *) arg1, arg1->velocity.y, 0x1F4) != 0) {
            func_800B8E58(arg1, 0x863U);
        } else {
            func_800B8E58(arg1, 0x863U);
        }
        if (arg2 != 0) {
            func_80831494(arg0, arg1, func_808519FC, 1);
            temp_v1 = arg1->unk_A6C;
            if ((temp_v1 & 0x400) != 0) {
                arg1->unk_A6C = (s32) (temp_v1 | 0x20000C00);
            }
            arg1->unk_AE8 = 2;
        }
        phi_a2_2 = &D_0400DFD8;
        if ((arg1->unk_A6C & 0x800) != 0) {
            phi_a2_2 = &D_0400DFF0;
        }
        func_8082E438(arg0, arg1, phi_a2_2);
        return 1;
    }
    return 0;
}

void func_8083B73C(GlobalContext *arg0, Actor *arg1, s16 arg2) {
    func_80831494(arg0, arg1, func_808513EC, 0);
    func_8082E634(arg0, arg1, (LinkAnimationHeader *) &D_0400DFD0);
    arg1->shape.rot.y = arg2;
    arg1->unk_AD4 = arg2;
}

void func_8083B798(GlobalContext *arg0, GlobalContext *arg1) {
    if (arg1->unk_14B == 2) {
        func_80831494(arg1, (Actor *) func_808513EC, NULL);
        SkelAnime_ChangeLinkAnim(arg0, (SkelAnime *) &arg1->mainCamera.paramData[32], (LinkAnimationHeader *) &D_0400DFD0, 1.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400DFD0), 0.0f, (u8) 0, 0.0f);
        arg1->unk_B48 = 2.0f;
    } else {
        func_8082DB3C(arg1, (Actor *) &D_0400DFD0);
        arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = 1;
    }
    arg1->unk_AAA = 0x3E80;
}

void func_8083B850(GlobalContext *arg0, Player *arg1) {
    f32 temp_f12;
    f32 temp_f2;

    arg1->currentBoots = 4;
    arg1->prevBoots = 4;
    func_80831494(arg0, (Actor *) func_80850D68, NULL);
    temp_f2 = arg1->linearVelocity;
    temp_f12 = arg1->actor.velocity.y;
    arg1->unk_B48 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    func_8082F938((bitwise Player *) temp_f12, (Actor *) arg0, (s32) arg1, 1, 8);
    arg1->currentBoots = 4;
    arg1->prevBoots = 4;
}

void func_8083B8D0(GlobalContext *arg1) {
    if (func_80837730(arg1, arg1->unk_68, 7e-43.0f) != 0) {
        func_800B8E58((Actor *) arg1, 0x2889U);
        if ((s32) arg1->unk_B6A >= 0x321) {
            func_8082DF8C((Actor *) arg1, 0x6804U);
        }
    }
}

void func_8083B930(GlobalContext *arg0, Player *arg1) {
    s32 temp_v1;
    u32 temp_t7;
    u32 temp_v0;
    AnimationHeaderCommon *phi_a2;

    if (((s32) arg1->currentBoots < 5) || ((arg1->actor.bgCheckFlags & 1) == 0) || (arg1->unk_748 == func_80857BE8)) {
        func_8082DE50(arg0, arg1);
        temp_v1 = arg1->unk_748;
        if (temp_v1 == func_8084CA24) {
            func_8083B850(arg0, arg1);
            arg1->stateFlags3 |= 0x8000;
        } else if ((arg1->transformation == 2) && (temp_v1 == func_8084C94C)) {
            func_8083B850(arg0, arg1);
            arg1->stateFlags3 |= 0x8000;
            func_8082DB60(arg0, (Actor *) arg1, (LinkAnimationHeader *) &D_0400E3D8);
        } else if (((s32) arg1->currentBoots < 5) && (temp_v0 = arg1->stateFlags2, ((temp_v0 & 0x400) != 0))) {
            arg1->stateFlags2 = temp_v0 & ~0x400;
            func_8083B3B4(arg0, (Actor *) arg1, NULL);
            arg1->unk_AE7 = 1;
        } else if (temp_v1 == func_8084C94C) {
            func_80831494(arg0, (Actor *) arg1, func_808516B4, 0);
            func_8083B798(arg0, (GlobalContext *) arg1);
        } else {
            func_80831494(arg0, (Actor *) arg1, func_808508C8, 1);
            phi_a2 = &D_0400DFC0;
            if ((arg1->actor.bgCheckFlags & 1) != 0) {
                phi_a2 = &D_0400E008;
            }
            func_8082E438(arg0, (Actor *) arg1, phi_a2);
        }
    }
    if (((arg1->stateFlags1 * 0x10) >= 0) || (arg1->actor.yDistToWater < arg1->ageProperties->unk_2C)) {
        func_8083B8D0(arg0, arg1);
    }
    temp_t7 = arg1->stateFlags1 | 0x8000000;
    arg1->stateFlags1 = temp_t7;
    arg1->stateFlags2 |= 0x400;
    arg1->stateFlags1 = temp_t7 & 0xFFF3FFFF;
    arg1->unk_AEC = 0.0f;
    func_80123140(arg0, arg1);
}

void func_8083BB4C(GlobalContext *arg0, Actor *arg1) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0_3;
    s32 temp_v0_2;
    u16 temp_v0;
    u8 temp_v1_2;
    void *temp_v1;
    Player *phi_a1;

    temp_f0 = arg1->yDistToWater - arg1->unk_A68->unk_2C;
    if (temp_f0 < 0.0f) {
        arg1->unk_AD8 = 0U;
        if ((arg1->unk_14B == 2) && ((arg1->bgCheckFlags & 1) != 0)) {
            arg1->unk_145 = 4;
        }
        func_801A3E38(0);
    } else {
        sp1C = temp_f0;
        func_801A3E38(0x20);
        if ((arg1->unk_14B == 2) || (temp_f0 < 10.0f)) {
            arg1->unk_AD8 = 0U;
        } else {
            temp_v0 = arg1->unk_AD8;
            if ((s32) temp_v0 < 0x12C) {
                arg1->unk_AD8 = (u16) (temp_v0 + 1);
            }
        }
    }
    phi_a1 = (Player *) arg1;
    if ((arg1->parent == 0) && (temp_v0_2 = arg1->unk_748, (temp_v0_2 != func_8084D4EC)) && (temp_v0_2 != func_8084F3DC) && ((temp_v0_2 != func_8084CA24) || (arg1->velocity.y < -2.0f))) {
        temp_v1 = arg1->unk_A68;
        temp_f0_2 = arg1->yDistToWater;
        if (temp_v1->unk_2C < temp_f0_2) {
            temp_v1_2 = arg1->unk_14B;
            if (temp_v1_2 == 1) {
                arg1 = arg1;
                func_80834140(arg0, arg1, (LinkAnimationHeader *) &D_0400DFE8);
                func_808345C8();
                func_8083B8D0(arg0, (Player *) arg1);
                return;
            }
            if (temp_v1_2 == 3) {
                if (arg1->unk_B67 != 0) {
                    func_808373F8((Actor *) arg0, (LinkAnimationHeader *) arg1, 0x6814U);
                    return;
                }
                temp_v0_3 = arg0->sceneNum;
                if ((temp_v0_3 == 0x45) && (arg1->unk_3CF == 0)) {
                    if ((gSaveContext.eventInf[5] & 1) != 0) {
                        arg0->nextEntranceIndex = 0xA820;
                    } else {
                        arg0->nextEntranceIndex = 0xA810;
                    }
                    arg0->sceneLoadFlag = 0x14;
                    arg0->unk_1887F = 4;
                    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x200);
                    arg1 = arg1;
                    play_sound(0x484DU);
                } else if ((arg1->unk_3CF == 0) && ((temp_v0_3 == 0x37) || (temp_v0_3 == 0x38) || (temp_v0_3 == 0x3B))) {
                    arg1 = arg1;
                    func_80169EFC(arg0);
                    func_808345C8();
                } else {
                    arg1 = arg1;
                    func_80831494(arg0, arg1, func_808497A0, 0);
                    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
                }
                func_8083B8D0(arg0, (Player *) arg1);
                return;
            }
            if (((arg1->unk_A6C * 0x10) >= 0) || ((((s32) arg1->unk_145 < 5) || ((arg1->bgCheckFlags & 1) == 0)) && (temp_v0_2 != func_8084E724) && (temp_v0_2 != func_80851B58) && (temp_v0_2 != func_80851BD4) && (temp_v0_2 != func_808508C8) && (temp_v0_2 != func_808513EC) && (temp_v0_2 != func_80851588) && (temp_v0_2 != func_808516B4) && (temp_v0_2 != func_808519FC) && (temp_v0_2 != func_80850B18) && (temp_v0_2 != func_80850D68))) {
                func_8083B930(arg0, (Player *) arg1, &D_0400DFE8);
                return;
            }
            /* Duplicate return node #56. Try simplifying control flow for better match */
            return;
        }
        if (((arg1->unk_A6C * 0x10) < 0) && (temp_f0_2 < temp_v1->unk_24) && (((temp_v0_2 != func_80850D68) && ((arg1->unk_A74 & 0x8000) == 0)) || ((arg1->bgCheckFlags & 1) != 0))) {
            if (arg1->unk_275 == 0) {
                arg1 = arg1;
                func_8083B0E4(arg0, arg1, arg1->shape.rot.y);
                phi_a1 = (Player *) arg1;
            }
            func_8083B32C(arg0, phi_a1, phi_a1->actor.velocity.y);
        }
        /* Duplicate return node #56. Try simplifying control flow for better match */
    }
}

void func_8083BF54(GlobalContext *arg0, Actor *arg1) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    s32 sp7C;
    void *sp60;
    f32 sp5C;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    PosRot *sp38;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f8;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_f4;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_3;
    u32 temp_v1;
    u32 temp_v1_2;
    s32 phi_a0;
    s32 phi_a2;
    f32 phi_f14;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f16;
    f32 phi_f14_2;
    f32 phi_f12;
    u16 phi_a1;
    f32 phi_f16_2;
    void *phi_v1;
    f32 phi_f12_2;
    s32 phi_t0;
    f32 phi_f2;
    s32 phi_v1_2;
    s32 phi_v0;
    s32 phi_v1_3;
    f32 phi_f12_3;
    f32 phi_f12_4;
    s16 phi_a0_2;

    arg1->minVelocityY = -20.0f;
    arg1->gravity = (f32) gGameInfo->data[68] / 100.0f;
    sp7C = 0;
    temp_v0 = func_808340D4(D_80862B08);
    phi_a2 = sp7C;
    if (temp_v0 == 0) {
        temp_v1 = D_80862B08;
        temp_a0 = temp_v1 == 0xE;
        phi_a0 = temp_a0;
        if (temp_a0 == 0) {
            phi_a0 = temp_v1 == 0xF;
        }
        phi_a2 = phi_a0;
        if ((phi_a0 != 0) || (temp_v1 == 0xD)) {
            goto block_5;
        }
        arg1->unk_AB8 = 0.0f;
    } else {
block_5:
        temp_v1_2 = D_80862B08;
        temp_a0_2 = temp_v1_2 == 0xE;
        temp_f2 = fabsf(arg1->unk_AD0 + D_80862B3C) * 20.0f;
        phi_f16 = temp_f2;
        if (temp_v0 != 0) {
            if (temp_v1_2 == 4) {
                phi_f14 = 1300.0f;
                phi_a1 = 0xE9U;
            } else if (temp_v1_2 == 7) {
                phi_f14 = 20000.0f;
                phi_f16 = 0.0f;
                phi_a1 = 0xE9U;
            } else {
                phi_f14 = 10000.0f;
                phi_f16 = temp_f2 * 1.6f;
                phi_a1 = 0xE9U;
            }
        } else if (phi_a2 != 0) {
            if (temp_a0_2 != 0) {
                phi_f14 = 400.0f;
                phi_f16 = temp_f2 * 10.0f;
                phi_a1 = 0xEAU;
            } else {
                phi_f14 = 1300.0f;
                phi_f16 = 0.0f;
                phi_a1 = 0xEAU;
            }
        } else if (arg1->unk_14B == 1) {
            phi_f14 = 10000.0f;
            phi_f16 = 0.0f;
            phi_a1 = 0xE9U;
        } else {
            phi_f14 = 1000.0f;
            phi_f16 = 0.0f;
            phi_a1 = 0xE9U;
        }
        temp_f2_2 = arg1->unk_AB8;
        phi_f14_2 = phi_f14;
        if (phi_f14 < temp_f2_2) {
            phi_f14_2 = temp_f2_2;
        }
        if (temp_a0_2 != 0) {
            phi_f0 = 200.0f;
        } else {
            phi_f0 = (phi_f14_2 - temp_f2_2) * 0.02f;
        }
        if (phi_f0 < 0.0f) {
            phi_f0_2 = 0.0f;
        } else {
            if (phi_f0 > 300.0f) {
                phi_f12_3 = 300.0f;
            } else {
                phi_f12_3 = phi_f0;
            }
            phi_f0_2 = phi_f12_3;
        }
        arg1->unk_AB8 = (f32) (temp_f2_2 + (phi_f0_2 - phi_f16));
        temp_f2_3 = arg1->unk_AB8;
        if (temp_f2_3 < 0.0f) {
            arg1->unk_AB8 = 0.0f;
        } else {
            if (phi_f14_2 < temp_f2_3) {
                phi_f12 = phi_f14_2;
            } else {
                phi_f12 = temp_f2_3;
            }
            arg1->unk_AB8 = phi_f12;
        }
        if ((arg1->unk_AD0 == 0.0f) && (fabsf(arg1->unk_AB8 - temp_f2_2) > 2.0f)) {
            func_800B8F98(arg1, phi_a1);
        }
        arg1->gravity -= arg1->unk_AB8 * 0.004f;
    }
    if (((arg1->unk_A74 & 0x10) != 0) && ((arg1->bgCheckFlags & 0x20) != 0)) {
        if (arg1->yDistToWater < 50.0f) {
            temp_f16 = fabsf(arg1->unk_BF4 - arg1->unk_D74) + (fabsf(arg1->unk_BEC - arg1->unk_D6C) + fabsf(arg1->unk_BF0 - arg1->unk_D70));
            phi_f16_2 = temp_f16;
            if (temp_f16 > 4.0f) {
                phi_f16_2 = 4.0f;
            }
            arg1->unk_AEC = (f32) (arg1->unk_AEC + phi_f16_2);
            if (arg1->unk_AEC > 15.0f) {
                arg1->unk_AEC = 0.0f;
                sp84 = (Rand_ZeroOne() * 10.0f) + arg1->world.pos.x;
                sp88 = arg1->world.pos.y + arg1->yDistToWater;
                sp8C = (Rand_ZeroOne() * 10.0f) + arg1->world.pos.z;
                EffectSsGRipple_Spawn(arg0, (Vec3f *) &sp84, 0x64, 0x1F4, (s16) 0);
                if ((arg1->unk_AD0 > 4.0f) && (func_801242B4((Player *) arg1) == 0) && (temp_f2_4 = arg1->yDistToWater, ((arg1->world.pos.y + temp_f2_4) < arg1->unk_BF0))) {
                    func_80837730(arg0, (Player *) arg1, 20.0f, (s32) ((fabsf(arg1->unk_AD0) * 50.0f) + (temp_f2_4 * 5.0f)));
                } else if ((arg1->unk_A74 & 0x8000) != 0) {
                    phi_v1 = arg1 + 0xBEC;
                    phi_f12_2 = (arg1->world.pos.y + arg1->yDistToWater) - 5.0f;
                    phi_t0 = 0;
                    do {
                        temp_f2_5 = phi_v1->unk_4 - phi_f12_2;
                        if (temp_f2_5 > 0.0f) {
                            temp_f8 = fabsf(arg1->unk_AD0) * 20.0f;
                            sp5C = phi_f12_2;
                            sp54 = phi_t0;
                            sp60 = phi_v1;
                            func_80837730((bitwise GlobalContext *) phi_f12_2, (Player *) arg0, (bitwise f32) arg1, (bitwise s32) 20.0f, (s32) (temp_f8 + (temp_f2_5 * 10.0f)));
                        }
                        temp_t0 = phi_t0 + 1;
                        phi_v1 += 0xC;
                        phi_f12_2 = phi_f12_2;
                        phi_t0 = temp_t0;
                    } while (temp_t0 != 0x12);
                }
            }
        }
        if (arg1->unk_A68->unk_2C < arg1->yDistToWater) {
            phi_v1_2 = 0;
            if (arg1->unk_A6C & 0x4000000) {
                phi_f2 = -fabsf(arg1->unk_AD0);
            } else {
                if (arg1->unk_748 == func_80850D68) {
                    temp_v0_2 = arg1->unk_B8A;
                    phi_a0_2 = temp_v0_2;
                    if ((s32) temp_v0_2 < 0) {
                        phi_a0_2 = (s16) -(s32) temp_v0_2;
                    }
                    phi_f12_4 = ((f32) phi_a0_2 * -0.004f) + (arg1->unk_B48 * -0.38f);
                } else {
                    phi_f12_4 = arg1->velocity.y;
                }
                phi_f2 = phi_f12_4;
            }
            if ((phi_f2 > -1.0f) || ((arg1->unk_145 == 5) && ((arg1->bgCheckFlags & 1) != 0))) {
                sp50 = 0;
                if (Rand_ZeroOne() < 0.2f) {
                    phi_v1_2 = 1;
                }
            } else {
                temp_f4 = (s32) (phi_f2 * -0.3f);
                phi_v1_2 = temp_f4;
                if (temp_f4 >= 9) {
                    phi_v1_2 = 8;
                }
            }
            phi_v0 = 0;
            phi_v1_3 = phi_v1_2;
            if (phi_v1_2 > 0) {
                sp38 = &arg1->world;
                do {
                    sp4C = phi_v0;
                    sp50 = phi_v1_3;
                    EffectSsBubble_Spawn(arg0, (Vec3f *) sp38, 20.0f, 10.0f, 20.0f, 0.13f);
                    temp_v0_3 = phi_v0 + 1;
                    phi_v0 = temp_v0_3;
                } while (temp_v0_3 != phi_v1_3);
            }
        }
    }
}

void func_8083C62C(Actor *arg0, s32 arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s16 sp2E;
    Vec3f *sp28;
    Vec3f *temp_a1;

    sp30 = arg0->world.pos.x;
    temp_a1 = arg0->unk_730 + 0x3C;
    sp34 = arg0->unk_C44 + 3.0f;
    sp28 = temp_a1;
    sp38 = arg0->world.pos.z;
    sp2E = Math_Vec3f_Pitch((Vec3f *) &sp30, temp_a1);
    Math_SmoothStepToS(arg0 + 0x4A, Math_Vec3f_Yaw((Vec3f *) &sp30, temp_a1), 4, 0x2710, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x48, sp2E, 4, 0x2710, (s16) 0);
    arg0->unk_AA6 = (u16) (arg0->unk_AA6 | 2);
    func_80832754(arg0, arg1);
}

void func_8083C6E8(Actor *arg0, GlobalContext *arg1) {
    s16 sp46;
    ? sp34;
    f32 temp_f0;
    s32 temp_a1;
    s32 temp_v0;
    s16 phi_a1;
    s32 phi_a1_2;

    if (arg0->unk_730 != 0) {
        if ((func_800B7128(arg0) != 0) || (func_8082EF20(arg0) != 0)) {
            func_8083C62C(arg0, 1);
            return;
        }
        func_8083C62C(arg0, 0);
        return;
    }
    if (D_80862B08 == 0xB) {
        Math_SmoothStepToS((s16 *) &arg0->focus.rot, -0x4E20, 0xA, 0xFA0, (s16) 0x320);
    } else {
        sp46 = 0;
        temp_f0 = (bitwise f32) func_80835D2C(arg1, arg0, D_8085D218, &sp34);
        if (temp_f0 > -32000.0f) {
            temp_v0 = Math_FAtan2F(40.0f, arg0->world.pos.y - temp_f0);
            if (temp_v0 < -0xFA0) {
                sp46 = -0xFA0;
            } else {
                phi_a1 = (s16) temp_v0;
                if ((s32) (s16) temp_v0 >= 0xFA1) {
                    phi_a1 = 0xFA0;
                }
                sp46 = phi_a1;
            }
        }
        arg0->focus.rot.y = arg0->shape.rot.y;
        Math_SmoothStepToS((s16 *) &arg0->focus.rot, sp46, 0xE, 0xFA0, (s16) 0x1E);
    }
    temp_a1 = func_800B7128(arg0) != 0;
    phi_a1_2 = temp_a1;
    if (temp_a1 == 0) {
        phi_a1_2 = func_8082EF20(arg0, temp_a1) != 0;
    }
    func_80832754(arg0, phi_a1_2);
}

void func_8083C85C(Player *arg0) {
    s16 *temp_a0;

    temp_a0 = arg0 + 0xAB2;
    arg0 = arg0;
    Math_ScaledStepToS(temp_a0, (s16) (s32) (D_80862B3C * -500.0f), 0x384);
    arg0->unk_AA6 |= 0x48;
    arg0->unk_AAC.x = (s16) (s32) (-(f32) arg0->unk_AB2.x * 0.5f);
}

void func_8083C8E8(Actor *arg0, GlobalContext *arg1) {
    s16 sp24;
    f32 temp_f0;
    s16 temp_a1;
    s32 temp_f18;
    s32 temp_v1;
    s16 phi_a1;
    s16 phi_a3;
    s16 phi_a1_2;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;

    if ((func_800B7128(arg0) == 0) && (func_8082EF20(arg0) == 0) && ((temp_f0 = arg0->unk_AD0, (temp_f0 > 5.0f)) || (D_80862B3C != 0.0f))) {
        temp_f18 = (s32) (temp_f0 * 200.0f);
        if ((s32) (s16) temp_f18 < -0xFA0) {
            phi_a1 = -0xFA0;
        } else {
            phi_v0 = (s16) temp_f18;
            if ((s32) (s16) temp_f18 >= 0xFA1) {
                phi_v0 = 0xFA0;
            }
            phi_a1 = phi_v0;
        }
        temp_v1 = -(s32) (s16) (s32) ((f32) (s16) (arg0->unk_AD4 - arg0->shape.rot.y) * temp_f0 * 0.1f);
        temp_a1 = phi_a1 + (s32) (D_80862B3C * -500.0f);
        if ((s32) temp_a1 < -0x2EE0) {
            phi_a1_2 = -0x2EE0;
        } else {
            phi_v0_3 = temp_a1;
            if ((s32) temp_a1 >= 0x2EE1) {
                phi_v0_3 = 0x2EE0;
            }
            phi_a1_2 = phi_v0_3;
        }
        if (temp_v1 < -0xFA0) {
            phi_a3 = -0xFA0;
        } else {
            phi_v0_2 = (s16) temp_v1;
            if (temp_v1 >= 0xFA1) {
                phi_v0_2 = 0xFA0;
            }
            phi_a3 = phi_v0_2;
        }
        sp24 = phi_a3;
        Math_ScaledStepToS(arg0 + 0xAB2, phi_a1_2, 0x384);
        arg0->unk_AAC = (s16) (s32) (-(f32) arg0->unk_AB2 * 0.5f);
        Math_ScaledStepToS(arg0 + 0xAB0, phi_a3, 0x12C);
        Math_ScaledStepToS(arg0 + 0xAB6, phi_a3, 0xC8);
        arg0->unk_AA6 = (u16) (arg0->unk_AA6 | 0x168);
        return;
    }
    func_8083C6E8(arg0, arg1);
}

void func_8083CB04(Player *arg0, f32 arg1, s16 arg2, f32 arg3, f32 arg4, s16 arg5) {
    Math_AsymStepToF(arg0 + 0xAD0, arg1, arg3, arg4);
    Math_ScaledStepToS(arg0 + 0xAD4, arg2, arg5);
}

void func_8083CB58(Player *arg1, s16 arg2) {
    GameInfo *temp_v0;

    temp_v0 = gGameInfo;
    func_8083CB04(arg1, (bitwise f32) arg1, arg2, (f32) temp_v0->data[19] / 100.0f, 1.5f, (s16) (s32) temp_v0->data[27]);
}

? func_8083CBC4(Player *arg0, f32 arg1, s16 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6) {
    s16 temp_v0;
    s32 phi_v1;
    f32 phi_f12;

    temp_v0 = arg0->currentYaw - arg2;
    phi_v1 = (s32) temp_v0;
    phi_f12 = arg3;
    if ((arg0->unk_B50 * 1.5f) < fabsf(arg0->linearVelocity)) {
        arg5 *= 4.0f;
        phi_f12 = arg3 * 4.0f;
    }
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 >= 0x6001) {
        if (Math_StepToF(arg0 + 0xAD0, 0.0f, phi_f12) == 0) {
            return 0;
        }
        arg0->currentYaw = arg2;
        goto block_9;
    }
    Math_AsymStepToF(arg0 + 0xAD0, arg1, arg4, arg5);
    Math_ScaledStepToS(arg0 + 0xAD4, arg2, arg6);
block_9:
    return 1;
}

? func_8083CCB4(Actor *arg0, GlobalContext *arg1) {
    Actor *sp34;
    f32 sp28;
    f32 sp24;
    ? *sp20;
    Actor *temp_a3;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v1;
    s32 temp_v0;
    ? *phi_v0;
    ? *phi_v0_2;

    temp_a3 = arg0->unk_390;
    if (temp_a3 != 0) {
        temp_v0 = temp_a3->unk_150;
        if ((temp_v0 != 2) && (arg0->unk_14B != 0)) {
            if ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) && (sp34 = temp_a3, (ActorCutscene_GetCanPlayNext(0x7C) != 0))) {
                temp_a3->textId = *(&D_8085D252 + (arg0->unk_14B * 2));
                func_8085B460(arg1, temp_a3);
                return 1;
            }
            ActorCutscene_SetIntentToPlay(0x7C);
            goto block_20;
        }
        if ((temp_v0 == 2) && (arg0->unk_14B != 4)) {
            if ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) && (sp34 = temp_a3, (ActorCutscene_GetCanPlayNext(0x7C) != 0))) {
                temp_a3->textId = *(&D_8085D25C + (arg0->unk_14B * 2));
                func_8085B460(arg1, temp_a3);
                return 1;
            }
            ActorCutscene_SetIntentToPlay(0x7C);
            goto block_20;
        }
        if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
            sp34 = temp_a3;
            sp28 = Math_CosS(temp_a3->shape.rot.y);
            sp24 = Math_SinS(temp_a3->shape.rot.y);
            func_80832558(arg1, arg0, func_80837BD0);
            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x800000);
            arg0->bgCheckFlags &= 0xFFDF;
            arg0->unk_D44 = 0;
            if (arg0->unk_14B == 0) {
                phi_v0_2 = &D_8085D224;
            } else {
                phi_v0_2 = &D_8085D23C;
            }
            phi_v0 = phi_v0_2;
            if ((s32) arg0->unk_38C >= 0) {
                phi_v0 = phi_v0_2 + 0xC;
            }
            temp_f0 = phi_v0->unk_4;
            temp_f2 = phi_v0->unk_8;
            arg0->world.pos.x = temp_a3->world.pos.x + temp_a3->unk_258 + ((temp_f0 * sp28) + (temp_f2 * sp24));
            arg0->world.pos.z = temp_a3->world.pos.z + temp_a3->unk_260 + ((temp_f2 * sp28) - (temp_f0 * sp24));
            arg0->unk_B48 = (f32) (temp_a3->world.pos.y - arg0->world.pos.y);
            temp_v1 = temp_a3->shape.rot.y;
            arg0->shape.rot.y = temp_v1;
            arg0->unk_AD4 = temp_v1;
            sp20 = phi_v0;
            func_800B71DC(sp24, sp28, arg1, arg0, temp_a3, temp_a3);
            func_8082DB18(arg1, (Player *) arg0, phi_v0->unk_0);
            func_8082E920(arg1, arg0, 0x9B);
            arg0->parent = arg0->unk_390;
            func_8082DAD4(arg0);
            func_800B90F4(arg1);
            return 1;
        }
        goto block_20;
    }
block_20:
    return 0;
}

? func_8083CF68(GlobalContext *arg0, Player *arg1) {
    s16 sp56;
    ? sp48;
    s16 sp46;
    void (*sp28)(Actor *, GlobalContext *);
    void (*sp24)(Player *, GlobalContext *);
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0_2;
    s32 temp_v0;
    s32 phi_v1;
    f32 phi_f14;
    f32 phi_f18;

    if ((func_80123358(arg0, arg1) == 0) && ((arg1->cylinder.base.ocFlags1 & 2) == 0) && (temp_v0 = arg1->unk_748, (temp_v0 != func_80853D68)) && (temp_v0 != func_80857BE8) && (D_80862B40 == 1)) {
        sp24 = func_80857BE8;
        sp28 = func_80853D68;
        sp56 = Math_FAtan2F(arg1->actor.velocity.z, arg1->actor.velocity.x);
        func_800B75A0(arg1->actor.floorPoly, (Vec3f *) &sp48, &sp46);
        temp_v0_2 = sp46 - sp56;
        phi_v1 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = -(s32) temp_v0_2;
        }
        if (phi_v1 >= 0x3E81) {
            phi_f14 = sp4C;
            if (arg1->unk_748 == func_80857BE8) {
                phi_f14 = Math_CosS(arg1->unk_B6C);
            }
            temp_f16 = (1.0f - phi_f14) * 40.0f;
            temp_f2 = fabsf(arg1->actor.speedXZ) + temp_f16;
            temp_f18 = temp_f2 * temp_f2 * 0.011f;
            phi_f18 = temp_f18;
            if (temp_f18 < 2.2f) {
                phi_f18 = 2.2f;
            }
            arg1->unk_B84 = sp46;
            Math_StepToF(&arg1->unk_B80, temp_f16, phi_f18);
            goto block_16;
        }
        func_80831494(arg0, (Actor *) arg1, sp28, 0);
        func_8082DE50(arg0, arg1);
        func_8082E514(arg0, arg1, *(&D_8085D264 + (arg1->unk_AE7 * 4)));
        temp_f12 = arg1->actor.velocity.x;
        temp_f2_2 = arg1->actor.velocity.z;
        arg1->linearVelocity = sqrtf((temp_f12 * temp_f12) + (temp_f2_2 * temp_f2_2));
        arg1->currentYaw = sp46;
        if ((s32) D_80862B28 >= 0) {
            arg1->unk_AE7 = 1;
            func_8082DF8C((bitwise Actor *) temp_f12, (u16) arg1, 0x6803U);
        }
        return 1;
    }
block_16:
    return 0;
}

void func_8083D168(GlobalContext *arg0, Player *arg1, u8 *arg2) {
    s32 sp1C;
    s32 temp_v1;
    u8 temp_v0;
    s32 phi_v0;

    temp_v0 = arg2->unk_1;
    temp_v1 = temp_v0 & 0x1F;
    if (((temp_v0 & 0x80) != 0) || ((sp1C = temp_v1, arg2 = arg2, Item_DropCollectible(arg0, arg1 + 0x24, temp_v1 | 0x8000), (temp_v1 != 4)) && (temp_v1 != 8) && (temp_v1 != 9) && (temp_v1 != 0xA) && (temp_v1 != 0) && (temp_v1 != 1) && (temp_v1 != 2) && (temp_v1 != 0x14) && (temp_v1 != 0x13))) {
        Item_Give(arg0, arg2->unk_0);
        phi_v0 = 0x4824;
        if ((s32) arg1->unk_384 < 0) {
            phi_v0 = 0x4831;
        }
        play_sound(phi_v0 & 0xFFFF);
    }
}

s32 func_8083D23C(Player *arg0, GlobalContext *arg1) {
    void *sp2C;
    u8 *sp28;
    u8 *sp24;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_t6;
    u32 temp_v1;
    u8 *temp_a2;
    u8 *temp_v1_2;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_t7;
    LinkAnimationHeader *phi_a2;
    u8 *phi_v1;

    if ((gSaveContext.health != 0) && (temp_t7 = arg0->unk_388, sp2C = temp_t7, (temp_t7 != 0))) {
        temp_v0 = arg0->unk_384;
        if ((s32) temp_v0 > 0) {
            if ((s32) temp_v0 < 0xBA) {
                temp_a2 = (temp_v0 * 6) - 6 + &D_8085C3F4;
                temp_t7->parent = arg0;
                sp28 = temp_a2;
                if ((func_80114978((s32) temp_a2->unk_0) == 0xFF) || (temp_a2->unk_4 == 0xB0)) {
                    sp28 = temp_a2;
                    func_8082DCA0(arg1, arg0, temp_a2);
                    func_80838830(arg0, temp_a2->unk_4, temp_a2);
                    if (((arg0->stateFlags2 & 0x400) == 0) || (arg0->currentBoots == 5)) {
                        func_80838760((Actor *) arg0);
                        func_808324EC(arg1, (Actor *) arg0, func_80837C78, (s32) arg1->unk_1879C[1]);
                        if (arg0->transformation == 3) {
                            phi_a2 = (LinkAnimationHeader *) &D_0400E2C0;
                        } else {
                            phi_a2 = &D_0400D5B0;
                        }
                        func_8082DB90(arg1, (Actor *) arg0, phi_a2);
                    }
                    arg0->stateFlags1 |= 0x20000C00;
                    func_8082DAD4((Actor *) arg0);
                    return 1;
                }
                func_8083D168(arg1, arg0, temp_a2);
                arg0->unk_384 = 0;
                goto block_46;
            }
            goto block_46;
        }
        if ((arg0->unk_394 == 0) && (temp_v1 = arg0->stateFlags1, ((temp_v1 & 0x800) == 0))) {
            if (temp_v0 != 0) {
                if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                    temp_t6 = ((s32) temp_v0 * -6) - 6;
                    temp_v1_2 = temp_t6 + &D_8085C3F4;
                    temp_a0 = temp_v1_2->unk_0;
                    phi_v1 = temp_v1_2;
                    if ((temp_a0 != 0xFF) && (((sp24 = temp_v1_2, (func_80114978((s32) temp_a0) == 0xFF)) && ((temp_v1_2->unk_1 & 0x40) != 0)) || ((sp24 = temp_v1_2, phi_v1 = temp_v1_2, (func_80114978((s32) temp_v1_2->unk_0) != 0xFF)) && ((temp_v1_2->unk_1 & 0x20) != 0)))) {
                        if ((temp_t6 + &D_8085C3F4)->unk_0 == 0x44) {
                            arg0->unk_384 = -0xA;
                        } else {
                            arg0->unk_384 = -2;
                        }
                        phi_v1 = ((s32) arg0->unk_384 * -6) - 6 + &D_8085C3F4;
                    }
                    sp24 = phi_v1;
                    func_80832558(arg1, (Actor *) arg0, func_80837C78);
                    arg0->stateFlags1 |= 0x20000C00;
                    func_80838830(arg0, phi_v1->unk_4);
                    arg0->actor.world.pos.x = sp2C->world.pos.x - (Math_SinS(sp2C->shape.rot.y) * arg0->ageProperties->unk_9C);
                    arg0->actor.world.pos.z = sp2C->world.pos.z - (Math_CosS(sp2C->shape.rot.y) * arg0->ageProperties->unk_9C);
                    arg0->actor.world.pos.y = sp2C->world.pos.y;
                    temp_v0_2 = sp2C->shape.rot.y;
                    arg0->actor.shape.rot.y = temp_v0_2;
                    arg0->currentYaw = temp_v0_2;
                    func_8082DAD4((Actor *) arg0, sp2C);
                    temp_a0_2 = phi_v1->unk_0;
                    if ((temp_a0_2 != 0xFF) && ((s32) phi_v1->unk_2 >= 0) && (func_80114978((s32) temp_a0_2) == 0xFF)) {
                        arg0->unk_A86 = (s8) sp2C->unk_21A;
                        func_8082DB90(arg1, (Actor *) arg0, arg0->ageProperties->unk_A0);
                        func_8082E920(arg1, (Actor *) arg0, 0x9F);
                        arg0->actor.bgCheckFlags &= 0xFFDF;
                        sp2C->unk_1EC = 1;
                        return 1;
                    }
                    func_8082DB18(arg1, arg0, (LinkAnimationHeader *) &D_0400DB18);
                    sp2C->unk_1EC = -1;
                    return 1;
                }
                goto block_46;
            }
            if (((temp_v1 * 0x10) >= 0) && (arg0->transformation != 3)) {
                if (arg0->leftHandActor != 0) {
                    if (func_801240C8(arg0) != 0) {
                        goto block_37;
                    }
                    goto block_46;
                }
block_37:
                if ((arg0->transformation != 1) && (((temp_v0_3 = sp2C->id, (temp_v0_3 == 9)) && (sp2C->unk_1F9 != 0)) || ((temp_v0_3 == 0xB0) && ((sp2C->params & 1) != 0)) || (temp_v0_3 == 0xB9))) {
                    goto block_46;
                }
                arg0->stateFlags2 |= 0x10000;
                if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                    func_80832558(arg1, (Actor *) arg0, func_808379C0);
                    func_8082DAD4((Actor *) arg0);
                    arg0->stateFlags1 |= 0x800;
                    return 1;
                }
                goto block_46;
            }
            goto block_46;
        }
        goto block_46;
    }
block_46:
    return 0;
}

void func_8083D6DC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;

    temp_a1 = arg0;
    arg0 = temp_a1;
    func_80831494(arg1, temp_a1, func_8084E65C, 1);
    func_8082DB18(arg1, (Player *) arg0, *(&D_8085C124 + (arg0->unk_14F * 4)));
}

s32 func_8083D738(Player *arg0, Actor *arg1) {
    if ((arg1 != 0) && ((arg1->flags << 8) >= 0) && ((arg0->linearVelocity < 1.1f) || (arg1->id == 0x6A))) {
        return 0;
    }
    return 1;
}

? func_8083D78C(Player *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    ? phi_v0;

    phi_v0 = 0;
    if (((arg0->stateFlags1 & 0x800) != 0) && (temp_a2 = arg0->leftHandActor, (temp_a2 != 0)) && ((D_80862B44->press.button & 0xC007) != 0)) {
        if (func_808313A8(arg1, arg0, temp_a2) == 0) {
            if (func_8083D738(arg0, arg0->leftHandActor) == 0) {
                func_80831494(arg1, (Actor *) arg0, func_8084E58C, 1);
                func_8082DB18(arg1, arg0, *(&D_8085C13C + (arg0->modelAnimType * 4)));
                return 1;
            }
            func_8083D6DC((Actor *) arg0, arg1);
            goto block_7;
        }
block_7:
        phi_v0 = 1;
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return phi_v0;
    }
    return phi_v0;
}

s32 func_8083D860(Actor *arg0, GlobalContext *arg1) {
    s32 sp84;
    s32 sp80;
    CollisionPoly *sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp6C;
    f32 sp48;
    f32 sp40;
    f32 *sp3C;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    LinkAnimationHeader *sp28;
    f32 *temp_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f14;
    f32 temp_f16;
    s16 temp_v0_4;
    s16 temp_v1_2;
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_v1;
    u32 temp_v0;
    void *temp_v0_3;
    s32 phi_t0;
    f32 *phi_v0;
    f32 phi_f14;
    f32 phi_f2;
    f32 phi_f16;
    f32 phi_f12;
    f32 phi_f18;
    s32 phi_v1;
    f32 phi_f18_2;
    f32 phi_f2_2;
    f32 phi_f18_3;
    f32 phi_f16_2;
    f32 phi_f14_2;
    f32 phi_f0;
    LinkAnimationHeader *phi_a2;
    f32 phi_f14_3;
    f32 phi_f2_3;
    f32 phi_f16_3;
    f32 phi_f12_2;

    if ((arg0->unk_B54 >= 79.0f) && (((arg0->unk_A6C * 0x10) >= 0) || (arg0->unk_145 == 5) || (arg0->yDistToWater < arg0->unk_A68->unk_2C))) {
        temp_v0 = D_80862B0C;
        temp_t2 = temp_v0 & 2;
        phi_t0 = 0;
        if ((temp_v0 & 8) != 0) {
            phi_t0 = 2;
        }
        sp80 = temp_t2;
        if ((phi_t0 != 0) || (temp_t2 != 0) || (sp84 = phi_t0, (func_800C9AE4(arg1 + 0x830, arg0->wallPoly, (s32) arg0->wallBgId) != 0))) {
            sp7C = arg0->wallPoly;
            phi_f2_2 = 0.0f;
            phi_f18_3 = 0.0f;
            if (phi_t0 != 0) {
                phi_f16_2 = arg0->world.pos.z;
                phi_f14_2 = arg0->world.pos.x;
            } else {
                sp84 = phi_t0;
                sp3C = &sp48;
                func_800C02C0(sp7C, (s32) arg0->wallBgId, arg1 + 0x830, (TriNorm *) &sp48);
                phi_v0 = sp3C;
                phi_f14 = sp48;
                phi_f2 = sp48;
                phi_f16 = sp50;
                phi_f12 = sp50;
                phi_f18 = sp4C;
                phi_v1 = 1;
                do {
                    temp_f0 = phi_v0->unk_C;
                    temp_v1 = phi_v1 + 1;
                    temp_v0_2 = phi_v0 + 0xC;
                    phi_v0 = temp_v0_2;
                    phi_v1 = temp_v1;
                    phi_f18_2 = phi_f18;
                    phi_f14_3 = phi_f14;
                    phi_f2_3 = phi_f2;
                    phi_f16_3 = phi_f16;
                    phi_f12_2 = phi_f12;
                    if (temp_f0 < phi_f14) {
                        phi_f14_3 = temp_f0;
                    } else if (phi_f2 < temp_f0) {
                        phi_f2_3 = temp_f0;
                    }
                    temp_f0_2 = temp_v0_2->unk_8;
                    phi_f14 = phi_f14_3;
                    phi_f2 = phi_f2_3;
                    if (temp_f0_2 < phi_f16) {
                        phi_f16_3 = temp_f0_2;
                    } else if (phi_f12 < temp_f0_2) {
                        phi_f12_2 = temp_f0_2;
                    }
                    temp_f0_3 = temp_v0_2->unk_4;
                    phi_f16 = phi_f16_3;
                    phi_f12 = phi_f12_2;
                    if (temp_f0_3 < phi_f18) {
                        phi_f18_2 = temp_f0_3;
                    }
                    phi_f18 = phi_f18_2;
                } while (temp_v1 != 3);
                temp_f14 = (phi_f14_3 + phi_f2_3) * 0.5f;
                temp_f16 = (phi_f16_3 + phi_f12_2) * 0.5f;
                sp40 = arg0->world.pos.y - phi_f18_2;
                phi_f2_2 = fabsf(((arg0->world.pos.x - temp_f14) * ((f32) sp7C->normal.z * 0.00003051851f)) - ((arg0->world.pos.z - temp_f16) * ((f32) sp7C->normal.x * 0.00003051851f)));
                phi_f18_3 = ((f32) (s32) ((sp40 / 15.0f) + 0.5f) * 15.0f) - sp40;
                phi_f16_2 = temp_f16;
                phi_f14_2 = temp_f14;
            }
            if (phi_f2_2 < 8.0f) {
                sp34 = (f32) sp7C->normal.x * 0.00003051851f;
                sp30 = (f32) sp7C->normal.z * 0.00003051851f;
                temp_f0_4 = arg0->unk_B58;
                sp6C = phi_f18_3;
                sp74 = phi_f16_2;
                sp78 = phi_f14_2;
                sp84 = phi_t0;
                sp2C = temp_f0_4;
                func_80832558(arg1, arg0, func_80837C20);
                temp_t4 = arg0->unk_A6C | 0x200000;
                arg0->unk_A6C = temp_t4;
                arg0->unk_A6C = (s32) (temp_t4 & 0xF7FFFFFF);
                if ((phi_t0 != 0) || (sp80 != 0)) {
                    arg0->unk_AE7 = (s8) phi_t0;
                    if ((s8) phi_t0 != 0) {
                        phi_a2 = (LinkAnimationHeader *) &D_0400DA88;
                        if ((arg0->bgCheckFlags & 1) != 0) {
                            phi_a2 = &D_0400DAA0;
                        }
                        phi_f0 = (arg0->unk_A68->unk_3C + 4.0f) - temp_f0_4;
                    } else {
                        phi_f0 = 20.5f;
                        phi_a2 = arg0->unk_A68->unk_AC;
                    }
                    temp_v0_4 = arg0->wallYaw + 0x8000;
                    arg0->unk_AE8 = -2;
                    arg0->world.pos.y += phi_f18_3;
                    arg0->unk_AD4 = temp_v0_4;
                    arg0->shape.rot.y = temp_v0_4;
                } else {
                    temp_v0_3 = arg0->unk_A68;
                    temp_v1_2 = arg0->wallYaw;
                    arg0->unk_AE8 = -4;
                    arg0->shape.rot.y = temp_v1_2;
                    arg0->unk_AD4 = temp_v1_2;
                    phi_f0 = (temp_v0_3->unk_38 - temp_v0_3->unk_3C) + 17.0f;
                    phi_a2 = temp_v0_3->unk_B0;
                }
                arg0->world.pos.x = (phi_f0 * sp34) + phi_f14_2;
                arg0->world.pos.z = (phi_f0 * sp30) + phi_f16_2;
                sp28 = phi_a2;
                func_8082DAD4(arg0);
                Math_Vec3f_Copy(&arg0->prevPos, (Vec3f *) &arg0->world);
                func_8082DB18(arg1, (Player *) arg0, phi_a2);
                func_8082E920(arg1, arg0, 0x9F);
                return 1;
            }
            goto block_35;
        }
        goto block_35;
    }
block_35:
    return 0;
}

void func_8083DCC4(Actor *arg0, LinkAnimationHeader *arg1, GlobalContext *arg2) {
    func_8083172C(arg2, arg0, func_8084FC0C, 0);
    SkelAnime_ChangeLinkAnimPlaybackStop(arg2, arg0 + 0x240, arg1, 1.3333334f);
}

? func_8083DD1C(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    CollisionPoly *sp84;
    s32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    CollisionPoly *sp5C;
    f32 sp58;
    ? *sp44;
    ? *temp_a0;
    CollisionPoly *temp_a1_2;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 temp_f0;
    s16 temp_a0_2;

    sp58 = Math_CosS(arg1->shape.rot.y);
    temp_f0 = Math_SinS(arg1->shape.rot.y);
    temp_a0 = arg0 + 0x830;
    temp_a1 = &sp74;
    temp_a2 = &sp68;
    sp74 = arg1->world.pos.x + (arg5 * temp_f0);
    sp7C = arg1->world.pos.z + (arg5 * sp58);
    sp68 = arg1->world.pos.x + (arg4 * temp_f0);
    sp70 = arg1->world.pos.z + (arg4 * sp58);
    sp44 = temp_a0;
    sp6C = arg1->world.pos.y + arg2;
    sp78 = sp6C;
    if (func_800C5650((bitwise CollisionContext *) arg5, (bitwise f32 *) arg4, temp_a0, temp_a1, temp_a2, &sp5C, arg1 + 0x7C, 1, 0, NULL, (Actor *)1, (Actor *) &sp80, arg1) != 0) {
        temp_a1_2 = arg1->wallPoly;
        arg1->bgCheckFlags |= 0x200;
        arg1->wallBgId = (u8) sp80;
        sp84 = temp_a1_2;
        D_80862B0C = func_800C9A4C((CollisionContext *) temp_a0, temp_a1_2, sp80);
        Math_ScaledStepToS(arg1 + 0xBE, Math_FAtan2F(-((f32) temp_a1_2->normal.z * 0.00003051851f), -((f32) temp_a1_2->normal.x * 0.00003051851f)), 0x320);
        temp_a0_2 = arg1->shape.rot.y;
        arg1->unk_AD4 = temp_a0_2;
        arg1->world.pos.x = (bitwise f32) sp5C - (Math_SinS(temp_a0_2) * arg3);
        arg1->world.pos.z = sp64 - (Math_CosS(arg1->shape.rot.y) * arg3);
        return 1;
    }
    arg1->bgCheckFlags &= 0xFDFF;
    return 0;
}

void func_8083DEE4(GlobalContext *arg1) {
    f32 temp_f0;

    temp_f0 = arg1->unk_A68->unk_38;
    func_8083DD1C((GlobalContext *)0x41D66667, (bitwise Actor *) (temp_f0 + 5.0f), temp_f0 + 15.0f, 0.0f);
}

void func_8083DF38(Actor *arg0, LinkAnimationHeader *arg1, GlobalContext *arg2) {
    s16 temp_v0;

    if (func_80832558(arg2, arg0, func_80837BF8) == 0) {
        func_80831494(arg2, arg0, func_8084ED9C, 0);
    }
    func_8082DB18(arg2, (Player *) arg0, arg1);
    func_8082DAD4(arg0);
    temp_v0 = arg0->wallYaw + 0x8000;
    arg0->unk_AD4 = temp_v0;
    arg0->shape.rot.y = temp_v0;
}

? func_8083DFC4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a3;
    DynaPolyActor *temp_v0;
    u8 temp_a1;
    Actor *phi_a3;
    Actor *phi_a3_2;

    temp_a3 = arg0;
    phi_a3 = temp_a3;
    if (((temp_a3->unk_A6C & 0x800) == 0) && ((temp_a3->bgCheckFlags & 0x200) != 0) && (D_80862B20 < 0x3000)) {
        temp_a0 = temp_a3;
        if ((temp_a3->unk_AD0 > 0.0f) && (arg0 = temp_a3, phi_a3 = arg0, (func_8083D860(temp_a0, arg1, temp_a3) != 0))) {
            return 1;
        }
        arg0 = phi_a3;
        if ((func_801242B4((Player *) phi_a3) == 0) && ((arg0->unk_AD0 == 0.0f) || ((arg0->unk_A70 & 4) == 0)) && ((D_80862B0C & 0x40) != 0) && ((arg0->bgCheckFlags & 1) != 0) && (arg0->unk_B54 >= 39.0f) && (arg0->unk_A70 = (s32) (arg0->unk_A70 | 1), (~(D_80862B44->cur.button | 0xFFFF7FFF) == 0))) {
            temp_a1 = arg0->wallBgId;
            if ((temp_a1 != 0x32) && (arg0 = arg0, temp_v0 = BgCheck_GetActorOfMesh(&arg1->colCtx, (s32) temp_a1), phi_a3_2 = arg0, (temp_v0 != 0))) {
                arg0->unk_364 = temp_v0;
            } else {
                arg0->unk_364 = 0;
                phi_a3_2 = arg0;
            }
            func_8083DF38(phi_a3_2, (LinkAnimationHeader *) &D_0400DE00, arg1, phi_a3_2);
            return 1;
        }
        goto block_18;
    }
block_18:
    return 0;
}

s32 func_8083E14C(GlobalContext *arg0, Player *arg1) {
    u8 temp_a1;
    DynaPolyActor *phi_v1;

    if (((arg1->actor.bgCheckFlags & 0x200) != 0) && (((arg1->stateFlags2 & 0x10) != 0) || (~(D_80862B44->cur.button | 0xFFFF7FFF) == 0))) {
        temp_a1 = arg1->actor.wallBgId;
        phi_v1 = NULL;
        if (temp_a1 != 0x32) {
            phi_v1 = BgCheck_GetActorOfMesh(arg0 + 0x830, (s32) temp_a1);
        }
        if (phi_v1 == arg1->rightHandActor) {
            if ((arg1->stateFlags2 & 0x10) != 0) {
                return 1;
            }
            return 0;
        }
        goto block_9;
    }
block_9:
    func_808369F4(arg1, arg0);
    func_8082DB18(arg0, arg1, (LinkAnimationHeader *) &D_0400DE08);
    arg1->stateFlags2 &= -0x11;
    return 1;
}

void func_8083E234(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_8084EE50, 0);
    func_8082DB18(arg1, (Player *) arg0, (LinkAnimationHeader *) &D_0400DDF8);
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x10);
}

void func_8083E28C(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;

    temp_a1 = arg0;
    arg0 = temp_a1;
    func_80831494(arg1, temp_a1, func_8084EF9C, 0);
    func_8082DB18(arg1, (Player *) arg0, *(&D_8085C1B4 + (arg0->unk_14F * 4)));
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x10);
}

void func_8083E2F4(Actor *arg0) {
    arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xF7DFFFFF);
    func_80833AA0();
    if (arg0->unk_14B == 3) {
        arg0->unk_AD0 = -1.7f;
        return;
    }
    arg0->unk_AD0 = -0.4f;
}

s32 func_8083E354(Actor *arg0, GlobalContext *arg1) {
    CollisionPoly *temp_a1;
    u32 temp_v0;
    u8 temp_a2;

    if ((~(D_80862B44->press.button | 0xFFFF7FFF) != 0) && ((arg0->bgCheckFlags & 0x200) != 0) && ((temp_v0 = D_80862B0C, ((temp_v0 & 8) != 0)) || ((temp_v0 & 2) != 0) || (temp_a1 = arg0->wallPoly, temp_a2 = arg0->wallBgId, arg0 = arg0, (func_800C9AE4(arg1 + 0x830, temp_a1, (s32) temp_a2) != 0)))) {
        return 0;
    }
    arg0 = arg0;
    func_8083E2F4(arg0, arg1);
    func_8082DF8C(arg0, 0x6814U);
    return 1;
}

s32 func_8083E404(Actor *arg0, f32 arg1, s16 arg2) {
    f32 sp1C;
    Actor *temp_a0;
    f32 temp_f2;
    s32 temp_a1;
    Actor *phi_a0;
    s32 phi_a1;
    s32 phi_v0;

    sp1C = (f32) (s16) (arg2 - arg0->shape.rot.y);
    if (arg0->unk_730 != 0) {
        temp_a1 = func_800B7128((Actor *) arg2) != 0;
        temp_a0 = arg0;
        phi_a0 = temp_a0;
        phi_a1 = temp_a1;
        if (temp_a1 == 0) {
            arg0 = temp_a0;
            phi_a0 = arg0;
            phi_a1 = func_8082EF20(temp_a0, temp_a1) != 0;
        }
        func_8083C62C(phi_a0, phi_a1);
    }
    temp_f2 = fabsf(sp1C) / 32768.0f;
    if (((temp_f2 * temp_f2 * 50.0f) + 6.0f) < arg1) {
        return 1;
    }
    phi_v0 = 0;
    if ((((1.0f - temp_f2) * 10.0f) + 6.8f) < arg1) {
        phi_v0 = -1;
    }
    return phi_v0;
}

s32 func_8083E514(Actor *arg0, f32 *arg1, s16 *arg2, GlobalContext *arg3) {
    s16 sp2E;
    u16 sp2C;
    s16 temp_v1;
    u16 phi_a2;
    s32 phi_v0;
    f32 *phi_a3;
    u16 phi_a2_2;

    temp_v1 = *arg2 - arg0->unk_AD6;
    phi_a2 = temp_v1 & 0xFFFF;
    if ((s32) temp_v1 < 0) {
        phi_a2 = -(s32) temp_v1 & 0xFFFF;
    }
    sp2E = temp_v1;
    sp2C = phi_a2;
    if (((func_800B7128(arg0, phi_a2) != 0) || (sp2E = temp_v1, sp2C = phi_a2, phi_a3 = arg1, phi_a2_2 = phi_a2, (func_8082EF20(arg0) != 0))) && (phi_a3 = arg1, phi_a2_2 = (u16) (s16) phi_a2, (arg0->unk_730 == 0))) {
        sp2E = temp_v1;
        *arg1 *= Math_SinS((s16) phi_a2);
        if (*arg1 != 0.0f) {
            phi_v0 = -1;
            if ((s32) temp_v1 >= 0) {
                phi_v0 = 1;
            }
            *arg2 = (phi_v0 << 0xE) + arg0->shape.rot.y;
        } else {
            *arg2 = arg0->shape.rot.y;
        }
        if (arg0->unk_730 != 0) {
            func_8083C62C(arg0, 1);
        } else {
            Math_SmoothStepToS((s16 *) &arg0->focus.rot, (s16) (s32) ((f32) D_80862B44->rel.stick_y * 240.0f), 0xE, 0xFA0, (s16) 0x1E);
            func_80832754(arg0, 1);
        }
        goto block_20;
    }
    if (arg0->unk_730 != 0) {
        return func_8083E404(arg0, *phi_a3, *arg2, phi_a3);
    }
    sp2C = phi_a2_2;
    func_8083C6E8(arg0, arg3, phi_a2_2, phi_a3);
    if ((*arg1 != 0.0f) && ((s32) phi_a2_2 < 0x1770)) {
        return 1;
    }
    if ((Math_SinS((s16) (0x4000 - ((s32) phi_a2_2 >> 1))) * 200.0f) < *arg1) {
        return -1;
    }
block_20:
    return 0;
}

s32 func_8083E758(Player *arg0, f32 *arg1, s16 *arg2) {
    f32 temp_f0;
    s16 temp_v0;
    s16 phi_v1;
    s32 phi_v0;

    temp_v0 = *arg2 - arg0->actor.shape.rot.y;
    phi_v1 = temp_v0 & 0xFFFF;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0 & 0xFFFF;
    }
    temp_f0 = Math_CosS(phi_v1);
    *arg1 *= temp_f0;
    phi_v0 = 0;
    if (*arg1 != 0.0f) {
        if (temp_f0 > 0.0f) {
            return 1;
        }
        phi_v0 = -1;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return phi_v0;
    }
    return phi_v0;
}

s32 func_8083E7F8(Actor *arg0, f32 *arg1, s16 *arg2, GlobalContext *arg3) {
    s16 temp_a0;
    s16 temp_v0;
    s32 phi_v1;
    s16 phi_v1_2;

    func_8083C6E8(arg0, arg3);
    if (*arg1 == 0.0f) {
        temp_v0 = arg0->unk_B4C;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_v1 >= 0x191) {
            goto block_4;
        }
        return 0;
    }
block_4:
    temp_a0 = *arg2 - func_800DFC68((arg3 + (arg3->activeCamera * 4))->unk_800);
    phi_v1_2 = temp_a0;
    if ((s32) temp_a0 < 0) {
        phi_v1_2 = (s16) -(s32) temp_a0;
    }
    if ((((phi_v1_2 - 0x2000) & 0xFFFF) < 0x4000) || (arg0->unk_B4C != 0)) {
        return -1;
    }
    return 1;
}

void func_8083E8E0(Actor *arg0, f32 arg1, s16 arg2) {
    if (arg1 > 0.0f) {
        if ((s32) (s16) (arg2 - arg0->shape.rot.y) < 0) {
            arg0->unk_B44 = 0.0f;
        } else {
            arg0->unk_B44 = 1.0f;
        }
    }
    Math_StepToF(arg0 + 0xB40, arg0->unk_B44, 0.3f);
}

void func_8083E958(GlobalContext *arg0, Actor *arg1) {
    s32 *sp30;
    f32 temp_f0;

    sp30 = func_8082EF54(arg1);
    temp_f0 = arg1->unk_B38;
    func_8013682C(arg0, arg1 + 0x240, (LinkAnimationHeader *) sp30, temp_f0, func_8082EF9C(arg1), temp_f0, arg1->unk_B40, arg1 + 0x88A);
}

s32 func_8083E9C4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 temp_f0;

    if ((arg3 == 0.0f) && (arg1 > 0.0f)) {
        arg3 = arg2;
    }
    temp_f0 = (arg0 + arg1) - arg3;
    if (((temp_f0 * arg1) >= 0.0f) && (((temp_f0 - arg1) * arg1) < 0.0f)) {
        return 1;
    }
    return 0;
}

void func_8083EA44(Actor *arg0, f32 arg1) {
    s32 sp24;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f14_2;
    s32 temp_v0;
    f32 phi_f14;
    f32 phi_f14_2;

    temp_f14 = arg1 * ((f32) gGameInfo->data[126] * 0.5f);
    phi_f14 = temp_f14;
    if (temp_f14 < -7.25f) {
        phi_f14 = -7.25f;
    } else if (temp_f14 > 7.25f) {
        phi_f14 = 7.25f;
    }
    arg1 = phi_f14;
    temp_v0 = func_8083E9C4(arg0->unk_B38, phi_f14, 29.0f, 10.0f);
    temp_f14_2 = arg1;
    sp24 = temp_v0;
    phi_f14_2 = temp_f14_2;
    if ((temp_v0 != 0) || (arg1 = temp_f14_2, phi_f14_2 = arg1, (func_8083E9C4(arg0->unk_B38, temp_f14_2, 29.0f, 24.0f) != 0))) {
        arg1 = phi_f14_2;
        func_8082E12C(arg0, arg0->unk_AD0);
        if (arg0->unk_AD0 > 4.0f) {
            arg0->unk_A70 = (s32) (arg0->unk_A70 | 8);
        }
        if (sp24 != 0) {
            arg0->shape.unk_17 = 1;
        } else {
            arg0->shape.unk_17 = 2;
        }
    }
    arg0->unk_B38 = (f32) (arg0->unk_B38 + arg1);
    temp_f0 = arg0->unk_B38;
    if (temp_f0 < 0.0f) {
        arg0->unk_B38 = (f32) (temp_f0 + 29.0f);
        return;
    }
    if (temp_f0 >= 29.0f) {
        arg0->unk_B38 = (f32) (temp_f0 - 29.0f);
    }
}

void func_8083EBD0(GlobalContext *arg0, Actor *arg1) {
    AnimationHeaderCommon *sp44;
    u32 sp40;
    s32 sp38;
    s32 sp34;
    AnimationHeaderCommon **temp_v1_3;
    f32 temp_f6;
    s16 temp_v0;
    s32 temp_f8;
    s32 temp_v1_4;
    s8 temp_v0_4;
    u32 temp_v0_3;
    u32 temp_v1;
    u32 temp_v1_2;
    u8 temp_a1;
    u8 temp_v0_2;
    u32 phi_v1;
    AnimationHeaderCommon *phi_a2;
    f32 phi_f0;
    AnimationHeaderCommon **phi_v0;
    u8 phi_a1;
    s32 phi_v1_2;

    temp_v0 = arg1->id;
    if (temp_v0 != 0) {
        temp_v1 = (s32) arg1->colChkInfo.health < 0x64;
        if (temp_v1 != 0) {
            sp40 = temp_v1;
            goto block_3;
        }
        goto block_10;
    }
block_3:
    phi_v1 = sp40;
    if ((temp_v0 == 0) && ((arg1->unk_730 != 0) || ((temp_v0_2 = arg1->unk_14B, (temp_v0_2 != 0)) && (temp_v0_2 != 4)) || (arg1->unk_153 == 0x13) || ((temp_v0_3 = LifeMeter_IsCritical(), temp_v1_2 = temp_v0_3, phi_v1 = temp_v1_2, (temp_v0_3 == 0)) && (temp_v0_4 = (arg1->unk_AA4 + 1) & 1, arg1->unk_AA4 = temp_v0_4, (temp_v0_4 != 0))))) {
block_10:
        arg1->unk_A70 = (s32) (arg1->unk_A70 & 0xEFFFFFFF);
        phi_a2 = func_8082ED20(arg1);
    } else {
        arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x10000000);
        if ((arg1->unk_A6C & 0x800) != 0) {
            phi_a2 = func_8082ED20(arg1);
        } else {
            temp_a1 = arg0->roomCtx.currRoom.unk2;
            if (phi_v1 != 0) {
                phi_a1 = 7U;
                if ((s32) arg1->unk_AA4 >= 0) {
                    arg1->unk_AA4 = -1;
                } else {
                    phi_a1 = 8U;
                }
            } else {
                sp38 = (s32) temp_a1;
                temp_f6 = Rand_ZeroOne() * 5.0f;
                temp_f8 = (s32) temp_f6;
                phi_a1 = temp_a1;
                if ((temp_f8 < 4) && (((temp_f8 != 0) && (temp_f8 != 3)) || ((arg1->unk_151 == 8) && ((temp_f8 == 3) || (sp34 = temp_f8, sp38 = (s32) temp_a1, phi_a1 = temp_a1, (func_80124190(arg1, (Actor *) temp_a1) != 0)))))) {
                    phi_v1_2 = (s32) temp_f6;
                    if ((s32) temp_f6 == 0) {
                        sp34 = (s32) temp_f6;
                        phi_v1_2 = (s32) temp_f6;
                        if (func_801241B4((Player *) arg1, (Player *) arg0->roomCtx.currRoom.unk2) != 0) {
                            phi_v1_2 = 4;
                        }
                    }
                    phi_a1 = phi_v1_2 + 9;
                }
            }
            temp_v1_3 = (phi_a1 * 8) + &D_8085C84C;
            phi_v0 = temp_v1_3;
            if (arg1->unk_14F != 1) {
                phi_v0 = temp_v1_3 + 4;
            }
            phi_a2 = *phi_v0;
        }
    }
    sp44 = phi_a2;
    temp_v1_4 = arg1->unk_248;
    if ((phi_a2 == temp_v1_4) || (&D_0400E318 == temp_v1_4) || (&D_0400E330 == temp_v1_4) || (&D_0400E348 == temp_v1_4)) {
        phi_f0 = 0.0f;
    } else {
        phi_f0 = -6.0f;
    }
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) phi_a2, 0.6666667f * D_8085C3E4, 0.0f, (f32) SkelAnime_GetFrameCount(phi_a2), (u8) 2, phi_f0);
}

void func_8083EE60(Player *arg0, GlobalContext *arg1) {
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    SkelAnime *temp_s1;
    SkelAnime *temp_s1_2;
    SkelAnime *temp_s1_3;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 phi_f20;
    SkelAnime *phi_s1;

    if (arg0->unk_B34 < 1.0f) {
        temp_v0 = gGameInfo;
        temp_f20 = (f32) temp_v0->data[126] * 0.5f;
        func_8083EA44((bitwise Actor *) 1000.0f, (bitwise f32) arg0, (f32) temp_v0->data[35] / 1000.0f);
        temp_s1 = arg0 + 0x240;
        func_801367B0(arg1, temp_s1, *(&D_8085C154 + (arg0->modelAnimType * 4)), arg0->unk_B38);
        arg0->unk_B34 += 1.0f * temp_f20;
        phi_s1 = temp_s1;
        if (arg0->unk_B34 >= 1.0f) {
            arg0->unk_B34 = 1.0f;
        }
        phi_f20 = arg0->unk_B34;
    } else {
        temp_v0_2 = gGameInfo;
        temp_f2 = arg0->linearVelocity;
        temp_f0 = temp_f2 - ((f32) temp_v0_2->data[48] / 100.0f);
        if (temp_f0 < 0.0f) {
            func_8083EA44((bitwise Actor *) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[36] / 1000.0f) * temp_f2) + ((f32) temp_v0_2->data[35] / 1000.0f));
            temp_s1_2 = arg0 + 0x240;
            func_801367B0(arg1, temp_s1_2, *(&D_8085C154 + (arg0->modelAnimType * 4)), arg0->unk_B38);
            phi_f20 = 1.0f;
            phi_s1 = temp_s1_2;
        } else {
            temp_f20_2 = ((f32) temp_v0_2->data[37] / 1000.0f) * temp_f0;
            phi_f20 = temp_f20_2;
            if (temp_f20_2 < 1.0f) {
                func_8083EA44((bitwise Actor *) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[36] / 1000.0f) * temp_f2) + ((f32) temp_v0_2->data[35] / 1000.0f));
            } else {
                func_8083EA44((bitwise Actor *) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[38] / 1000.0f) * temp_f0) + ((f32) temp_v0_2->data[39] / 100.0f));
                phi_f20 = 1.0f;
            }
            temp_s1_3 = arg0 + 0x240;
            func_8013676C(arg1, temp_s1_3, *(&D_8085C154 + (arg0->modelAnimType * 4)), arg0->unk_B38);
            func_801367B0(arg1, temp_s1_3, (LinkAnimationHeader *) &D_0400DAF0, arg0->unk_B38 * 0.55172414f);
            phi_s1 = temp_s1_3;
        }
    }
    if (phi_f20 < 1.0f) {
        func_801367F4(arg1, phi_s1, 1.0f - phi_f20);
    }
}

void func_8083F144(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_8084A794, 1);
    func_8082E438(arg1, arg0, (AnimationHeaderCommon *) &D_0400DAC0);
}

s32 func_8083F190(Player *arg0, f32 *arg1, s16 *arg2, Actor *arg3) {
    if (arg0->linearVelocity > 6.0f) {
        func_8083F144(arg3);
        return 1;
    }
    if (*arg1 != 0.0f) {
        if (func_80832F24() != 0) {
            *arg1 = 0.0f;
            *arg2 = arg0->currentYaw;
            goto block_6;
        }
        return 1;
    }
block_6:
    return 0;
}

void func_8083F230(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_8084A884, 1);
    func_8082DB18(arg1, (Player *) arg0, (LinkAnimationHeader *) &D_0400DAC8);
}

void func_8083F27C(GlobalContext *arg0, Actor *arg1) {
    LinkAnimationHeader *sp38;
    LinkAnimationHeader *sp34;
    GameInfo *temp_v1;
    LinkAnimationHeader *temp_t0;
    f32 temp_f0;
    void *temp_v0;

    temp_v0 = (arg1->unk_14F * 4) + &D_8085BE84;
    temp_t0 = temp_v0->unk_228;
    sp34 = temp_v0->unk_240;
    arg1->unk_248 = temp_t0;
    temp_v1 = gGameInfo;
    sp38 = temp_t0;
    func_8083EA44(arg1, (((f32) temp_v1->data[32] / 1000.0f) * arg1->unk_AD0) + ((f32) temp_v1->data[30] / 1000.0f));
    temp_f0 = arg1->unk_B38 * 0.55172414f;
    func_8013682C(arg0, arg1 + 0x240, sp34, temp_f0, temp_t0, temp_f0, arg1->unk_B40, arg1 + 0x88A);
}

void func_8083F358(Player *arg0, s32 arg1, GlobalContext *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    u8 temp_v1;
    s32 phi_v1;
    s16 phi_a1;
    f32 phi_f2;
    f32 phi_f2_2;
    LinkAnimationHeader *phi_v0;
    f32 phi_f2_3;
    s16 phi_v1_2;

    temp_v0 = D_80862B28;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 < 0xE38) {
        phi_a1 = 0;
    } else if ((s32) temp_v0 < -0x2AAA) {
        phi_a1 = -0x2AAA;
    } else {
        phi_v1_2 = temp_v0;
        if ((s32) temp_v0 >= 0x2AAB) {
            phi_v1_2 = 0x2AAA;
        }
        phi_a1 = phi_v1_2;
    }
    arg1 = arg1;
    Math_ScaledStepToS(arg0 + 0xB70, phi_a1, 0x190);
    temp_v1 = arg0->modelAnimType;
    if ((temp_v1 == 3) || ((temp_v0_2 = arg0->unk_B70, (temp_v0_2 == 0)) && (arg0->unk_AB8 <= 0.0f))) {
        if (arg1 == 0) {
            func_801367B0(arg2, arg0 + 0x240, *(&D_8085BE9C + (temp_v1 * 4)), arg0->unk_B38);
            return;
        }
        func_8013676C(arg2, arg0 + 0x240, *(&D_8085BE9C + (temp_v1 * 4)), arg0->unk_B38);
        return;
    }
    if (temp_v0_2 != 0) {
        phi_f2 = (f32) temp_v0_2 / 10922.0f;
    } else {
        phi_f2 = arg0->unk_AB8 * 0.0006f;
    }
    temp_f2 = phi_f2 * (fabsf(arg0->linearVelocity) * 0.5f);
    phi_f2_2 = temp_f2;
    phi_v0 = (LinkAnimationHeader *) &D_0400DBB0;
    if (temp_f2 > 1.0f) {
        phi_f2_2 = 1.0f;
    }
    phi_f2_3 = phi_f2_2;
    if (phi_f2_2 < 0.0f) {
        phi_v0 = &D_0400DB68;
        phi_f2_3 = -phi_f2_2;
    }
    if (arg1 == 0) {
        temp_f0 = arg0->unk_B38;
        func_8013682C(arg2, arg0 + 0x240, *(&D_8085BE9C + (temp_v1 * 4)), temp_f0, phi_v0, temp_f0, phi_f2_3, arg0 + 0x88A);
        return;
    }
    temp_f0_2 = arg0->unk_B38;
    func_801368CC(arg2, arg0 + 0x240, *(&D_8085BE9C + (temp_v1 * 4)), temp_f0_2, phi_v0, temp_f0_2, phi_f2_3, arg0 + 0x88A);
}

void func_8083F57C(Player *arg0, GlobalContext *arg1) {
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 phi_f20;

    if (arg0->unk_B34 < 1.0f) {
        temp_v0 = gGameInfo;
        temp_f20 = (f32) temp_v0->data[126] * 0.5f;
        func_8083EA44((bitwise Actor *) 1000.0f, (bitwise f32) arg0, (f32) temp_v0->data[35] / 1000.0f);
        func_801367B0(arg1, arg0 + 0x240, *(&D_8085BE9C + (arg0->modelAnimType * 4)), arg0->unk_B38);
        arg0->unk_B34 += 1.0f * temp_f20;
        if (arg0->unk_B34 >= 1.0f) {
            arg0->unk_B34 = 1.0f;
        }
        phi_f20 = arg0->unk_B34;
    } else {
        temp_v0_2 = gGameInfo;
        temp_f2 = arg0->linearVelocity;
        temp_f0 = temp_f2 - ((f32) temp_v0_2->data[48] / 100.0f);
        if (temp_f0 < 0.0f) {
            func_8083EA44((bitwise Actor *) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[36] / 1000.0f) * temp_f2) + ((f32) temp_v0_2->data[35] / 1000.0f));
            func_8083F358(arg0, 0, arg1);
            phi_f20 = 1.0f;
        } else {
            temp_f20_2 = ((f32) temp_v0_2->data[37] / 1000.0f) * temp_f0;
            phi_f20 = temp_f20_2;
            if (temp_f20_2 < 1.0f) {
                func_8083EA44((bitwise Actor *) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[36] / 1000.0f) * temp_f2) + ((f32) temp_v0_2->data[35] / 1000.0f));
            } else {
                func_8083EA44((bitwise Actor *) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[38] / 1000.0f) * temp_f0) + ((f32) temp_v0_2->data[39] / 100.0f));
                phi_f20 = 1.0f;
            }
            func_8083F358(arg0, 1, arg1);
            func_801367B0(arg1, arg0 + 0x240, func_8082EEE0(arg0), arg0->unk_B38 * 0.6896552f);
        }
    }
    if (phi_f20 < 1.0f) {
        func_801367F4(arg1, arg0 + 0x240, 1.0f - phi_f20);
    }
}

void func_8083F828(PosRot *arg0, ? *arg1, f32 arg2, f32 arg3, f32 arg4) {
    arg1->unk_0 = (f32) (randPlusMinusPoint5Scaled(arg3) + arg0->pos.x);
    arg1->unk_4 = (f32) (randPlusMinusPoint5Scaled(arg4) + (arg0->pos.y + arg2));
    arg1->unk_8 = (f32) (randPlusMinusPoint5Scaled(arg3) + arg0->pos.z);
}

s32 func_8083F8A8(GameState *arg0, Actor *arg1, f32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    ? spA8;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    ? sp84;
    s32 sp70;
    s32 sp6C;
    f32 *temp_s2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_s0;
    s32 temp_s0_2;
    u16 temp_v0;
    s32 phi_s4;
    s32 phi_s0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_s4_2;
    s32 phi_s0_2;
    s32 phi_v0_3;

    if ((arg3 < 0) || (temp_v0 = arg1->unk_B72, (temp_v0 == 0xE))) {
        temp_lo_3 = func_80173B48(arg0) / 0x1312D00;
        phi_v0_2 = arg3;
        phi_s4_2 = temp_lo_3;
        if (arg3 < 0) {
            phi_v0_2 = -arg3;
        }
        if (temp_lo_3 >= phi_v0_2) {
            phi_v0_3 = arg3;
            if (arg3 < 0) {
                phi_v0_3 = -arg3;
            }
            phi_s4_2 = phi_v0_3;
        }
        phi_s0_2 = 0;
        if (phi_s4_2 > 0) {
            sp70 = (s32) (s16) arg5;
            sp6C = (s32) (s16) arg6;
            do {
                func_8083F828(&arg1->world, &spA8, 0.0f, 40.0f, 10.0f);
                D_8085D27C.x = randPlusMinusPoint5Scaled(3.0f);
                D_8085D284 = randPlusMinusPoint5Scaled(3.0f);
                EffectSsDust_Spawn((GlobalContext *) arg0, 0U, (Vec3f *) &spA8, &D_8085D27C, &D_8085D270, &D_8085D26C, &D_8085D26C, (s16) sp70, (s16) sp6C, (s16) 0x2A, (u8) 0);
                temp_s0_2 = phi_s0_2 + 1;
                phi_s0_2 = temp_s0_2;
            } while (temp_s0_2 != phi_s4_2);
        }
        return 1;
    }
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        temp_lo_2 = func_80173B48(arg0) / 0xB71B00;
        if (temp_lo_2 > 0) {
            if (temp_lo_2 < arg3) {
                phi_v0 = temp_lo_2;
            } else {
                phi_v0 = arg3;
            }
            func_800BBDAC((GlobalContext *) arg0, arg1, arg1 + 0x24, arg2, phi_v0, arg4, (s16) arg5, (s16) arg6, (u8) arg7);
            return 1;
        }
        goto block_25;
    }
    if (temp_v0 == 8) {
        temp_lo = func_80173B48(arg0) / 0xB71B00;
        phi_s4 = temp_lo;
        if (temp_lo >= arg3) {
            phi_s4 = arg3;
        }
        phi_s0 = 0;
        if (phi_s4 > 0) {
            temp_s2 = &sp90;
            do {
                func_8083F828(arg1 + 0x24, &sp84, 0.0f, 20.0f, 20.0f);
                sp90 = randPlusMinusPoint5Scaled(3.0f);
                sp94 = Rand_ZeroFloat(2.0f);
                sp98 = randPlusMinusPoint5Scaled(3.0f);
                D_8085D28C = -0.1f;
                EffectSsHahen_Spawn((GlobalContext *) arg0, (Vec3f *) &sp84, (Vec3f *) temp_s2, &D_8085D288, (s16) 0, (s16) 0x96, (s16) 1, (s16) 0x10, (Gfx *) &D_040528B0);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != phi_s4);
        }
    }
block_25:
    return 0;
}

s32 func_8083FBC4(GlobalContext *arg0, GlobalContext *arg1) {
    s32 temp_s1;
    s32 temp_s1_2;
    u16 temp_v0;
    Vec3f *phi_s0;
    s32 phi_s1;
    Vec3f *phi_s0_2;
    s32 phi_s1_2;

    temp_v0 = arg1->unk_B72;
    phi_s1 = 0;
    phi_s0_2 = arg1 + 0xD4;
    phi_s1_2 = 0;
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        do {
            func_800B1210(arg0, phi_s0_2, &D_801D15B0, &D_801D15B0, (s16) 0x32, (s16) 0x1E);
            temp_s1_2 = phi_s1_2 + 1;
            phi_s0_2 += 0xC;
            phi_s1_2 = temp_s1_2;
        } while (temp_s1_2 != 2);
        return 1;
    }
    if (temp_v0 == 0xE) {
        phi_s0 = arg1 + 0xD4;
        do {
            EffectSsDust_Spawn(arg0, 0U, phi_s0, &D_801D15B0, &D_8085D270, &D_8085D26C, &D_8085D26C, (s16) 0x64, (s16) 0x28, (s16) 0x11, (u8) 0);
            temp_s1 = phi_s1 + 1;
            phi_s0 += 0xC;
            phi_s1 = temp_s1;
        } while (temp_s1 != 2);
        return 1;
    }
    return 0;
}

? func_8083FCF0(GlobalContext *arg1, Player *arg2, Actor *arg3, f32 arg4) {
    f32 temp_f0;
    s32 phi_a2;

    temp_f0 = arg1->unk_258;
    if (arg4 < temp_f0) {
        func_8082DC38(arg2, arg3, arg1);
        goto block_6;
    }
    if ((bitwise f32) arg2 <= temp_f0) {
        arg1->colCtx.dyna.bgActors[4].maxY |= 0x2000000;
        phi_a2 = -1;
        if ((bitwise f32) arg3 <= temp_f0) {
            phi_a2 = 1;
        }
        func_8082FA5C(arg2, arg3, phi_a2);
        return 1;
    }
block_6:
    return 0;
}

? func_8083FD80(Player *arg0, GlobalContext *arg1) {
    if ((func_801234B0(arg0) == 0) && (func_80124190((Actor *) arg0) != 0) && (arg0->transformation != 2) && (D_80862B48 != 0)) {
        func_8083375C((Actor *) arg0, 0xC);
        func_8082DB18(arg1, arg0, (LinkAnimationHeader *) &D_0400DBE8);
        arg0->unk_AE7 = 1;
        arg0->swordAnimation = 0xC;
        arg0->currentYaw = arg0->actor.shape.rot.y + arg0->unk_AB2.y;
        arg0->unk_ADD = 0;
        return 1;
    }
    return 0;
}

s32 func_8083FE38(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v0 = func_80838A90(arg0, arg1) != 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        temp_v0_2 = func_808391D8((Player *) arg0, arg1) != 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            phi_v0 = func_8083D23C((Player *) arg0, arg1) != 0;
        }
    }
    return phi_v0;
}

void func_8083FE90(GlobalContext *arg0, Player *arg1, u16 arg2) {
    func_80836EA0(arg0, 0x6C77, 7, 0x14);
    func_8082DF48((Actor *) arg0, arg1, 0xFFU, 0x14U, (u8) 0x96, 0);
    func_800B8E58((Actor *) arg1, arg2);
}

void func_8083FEF4(GlobalContext *arg0, Actor *arg1) {
    func_80115A14(8, -1);
    func_80831990(arg0, arg1, 0xFF);
}

s32 func_8083FF30(GlobalContext *arg0, Actor *arg1) {
    Actor *temp_a3;
    s16 temp_a2;
    void *temp_a1;
    s32 phi_v0;

    temp_a3 = arg1;
    phi_v0 = 0;
    if ((temp_a3->unk_147 == 7) && (temp_a3->unk_B0C > 0.5f)) {
        temp_a1 = temp_a3 + 0xCA0;
        if (gSaveContext.inventory.ammo[gItemSlots[8]] != 0) {
            temp_a2 = temp_a3->shape.rot.y;
            arg1 = temp_a3;
            EffectSsStick_Spawn(arg0, temp_a1, (s16) (temp_a2 + 0x8000), temp_a3);
            arg1->unk_B0C = 0.5f;
            func_8083FEF4(arg0, arg1);
            func_800B8E58(arg1, 0x181DU);
        }
        phi_v0 = 1;
    }
    return phi_v0;
}

? func_8083FFEC(GlobalContext *arg0, Actor *arg1) {
    u16 temp_t8;
    u16 temp_v0;
    ? phi_v0;

    phi_v0 = 0;
    if (arg1->unk_147 == 4) {
        temp_v0 = gSaveContext.swordHealth;
        temp_t8 = temp_v0 - 1;
        if ((s32) temp_v0 > 0) {
            gSaveContext.swordHealth = temp_t8;
            if ((temp_t8 & 0xFFFF) <= 0) {
                Item_Give(arg0, 0x4DU);
                func_80831990(arg0, arg1, 0x4D);
                func_800B8E58(arg1, 0x184CU);
                if (func_80152498(&arg0->msgCtx) == 0) {
                    func_801518B0(arg0, 0xF9U, NULL);
                }
            }
        }
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80840094(GlobalContext *arg0, Actor *arg1) {
    func_8083FF30(arg0, arg1);
    func_8083FFEC(arg0, arg1);
}

void func_808400CC(GlobalContext *arg0, Player *arg1) {
    u8 sp37;
    s32 sp2C;
    u8 temp_v0;
    s32 phi_v1;

    if (arg1->unk_748 != func_8084B5C0) {
        func_8082DD2C(arg0, arg1);
        temp_v0 = arg1->transformation;
        if ((temp_v0 != 4) && (temp_v0 != 0)) {
            sp37 = arg1->skelAnime.flags;
            arg1->skelAnime.flags = 0;
            func_80831494(arg0, (Actor *) arg1, func_80854C70, 0);
            arg1->skelAnime.flags = sp37;
        } else {
            func_80831494(arg0, (Actor *) arg1, func_80854C70, 0);
            if (func_80123420(arg1) != 0) {
                phi_v1 = 2;
            } else {
                phi_v1 = 0;
            }
            sp2C = phi_v1;
            func_8082DB90(arg0, (Actor *) arg1, *(&D_8085D294 + ((func_801241B4(arg1) * 4) + (phi_v1 * 4))));
        }
    }
    func_8082DF48((Actor *) arg0, arg1, 0xB4U, 0x14U, (u8) 0x64, 0);
    arg1->linearVelocity = -18.0f;
    func_80840094(arg0, (Actor *) arg1);
}

s32 func_808401F4(GlobalContext *arg0, Actor *arg1) {
    f32 spD8;
    s32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC0;
    f32 spBC;
    f32 spB0;
    ? sp64;
    s16 sp5C;
    u32 sp54;
    Vec3f *sp48;
    CollisionContext *sp44;
    CollisionContext *temp_a0_2;
    DynaPolyActor *temp_v0;
    Vec3f *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f10;
    s16 *temp_v1_2;
    s32 temp_v0_3;
    u32 temp_v0_2;
    u32 temp_v1;
    Vec3f *phi_a1;
    f32 phi_f2;
    s32 phi_v0;

    if ((s32) arg1->unk_ADB > 0) {
        if ((s32) arg1->unk_ADA < 0x1E) {
            if (((arg1->unk_574 & 4) == 0) && ((arg1->unk_5F4 & 4) == 0)) {
                if ((arg1->unk_258 >= 2.0f) && (temp_a0 = arg1 + 0xB9C, (arg1->unk_AD0 >= 0.0f))) {
                    phi_a1 = arg1 + 0xBA8;
                    if ((arg1->unk_14B == 1) || (arg1->id == 0x159)) {
                        phi_a1 = arg1 + 0xAFC;
                    }
                    sp48 = temp_a0;
                    temp_f0 = Math_Vec3f_DistXYZAndStoreDiff(temp_a0, phi_a1, (Vec3f *) &spB0);
                    phi_f2 = temp_f0;
                    if (temp_f0 != 0.0f) {
                        phi_f2 = (temp_f0 + 10.0f) / temp_f0;
                    }
                    temp_a0_2 = arg0 + 0x830;
                    spC8 = sp48->x + (spB0 * phi_f2);
                    spCC = sp48->y + (spB4 * phi_f2);
                    sp44 = temp_a0_2;
                    spD0 = sp48->z + (spB8 * phi_f2);
                    if ((func_800C5650(temp_a0_2, &spC8, (? *) sp48, &spBC, &spD8, (CollisionPoly **)1, NULL, 0, 1, &spD4, arg1) != 0) && (func_800C9D14(sp44, spD8, spD4) == 0) && (func_800C99D4(sp44, (bitwise CollisionPoly *) spD8, spD4) != 6) && (func_800B90AC(arg0, arg1, (bitwise s32) spD8, spD4, (s32) &spBC) == 0)) {
                        if (arg1->unk_14B == 1) {
                            func_8082DF2C(arg0);
                            func_8083FE90(arg0, (Player *) arg1, 0x180AU);
                            if (arg1->unk_14B == 1) {
                                func_800B648C(arg0, 2, 2, 0x42C80000, &arg1->world);
                                func_800C0094((bitwise CollisionPoly *) spD8, spBC, spC0, spC4, (MtxF *) &sp64);
                                func_8018219C((MtxF *) &sp64, (Vec3s *) &sp5C, 1);
                                Actor_Spawn(&arg0->actorCtx, arg0, 1, spBC, spC0, spC4, (s16) (s32) sp5C, (s16) (s32) sp5E, (s16) (s32) sp60, (s16) 0x1F4);
                            }
                            if ((spD4 != 0x32) && (((temp_v0 = BgCheck_GetActorOfMesh(sp44, spD4), ((arg1->unk_574 & 2) != 0)) && (temp_v0 == arg1->unk_568)) || (((arg1->unk_5F4 & 2) != 0) && (temp_v0 == arg1->unk_5E8)))) {
                                goto block_48;
                            }
                            func_808400CC(arg0, (Player *) arg1);
                            if (arg1->unk_14B != 1) {
                                return 1;
                            }
                            goto block_48;
                        }
                        if (arg1->unk_AD0 >= 0.0f) {
                            temp_v0_2 = func_800C9BB8(sp44, (bitwise CollisionPoly *) spD8, spD4);
                            temp_v1 = temp_v0_2;
                            if (temp_v0_2 == 0xA) {
                                CollisionCheck_SpawnShieldParticlesWood(arg0, (Vec3f *) &spBC, &arg1->projectedPos);
                            } else {
                                temp_a1 = &spBC;
                                temp_f10 = spBC + (8.0f * ((f32) spD8->unk_8 * 0.00003051851f));
                                spBC = temp_f10;
                                spC0 += 8.0f * ((f32) spD8->unk_A * 0.00003051851f);
                                sp54 = temp_v1;
                                spBC = temp_f10 + (8.0f * ((f32) spD8->unk_C * 0.00003051851f));
                                CollisionCheck_SpawnShieldParticles(arg0, (Vec3f *) temp_a1);
                                if (temp_v1 == 0xB) {
                                    func_800B8E58(arg1, 0x181BU);
                                } else {
                                    func_800B8E58(arg1, 0x181AU);
                                }
                            }
                            func_80840094(arg0, arg1);
                            func_8082DF48((Actor *) arg0, (Player *) arg1, 0xB4U, 0x14U, (u8) 0x64, 0);
                            arg1->unk_AD0 = -14.0f;
                        }
                        goto block_35;
                    }
                    goto block_35;
                }
                goto block_35;
            }
            func_808400CC(arg0, (Player *) arg1);
            func_8082DF2C(arg0);
            return 1;
        }
block_35:
        temp_v0_3 = (arg1->unk_574 & 2) != 0;
        if ((temp_v0_3 != 0) || ((arg1->unk_5F4 & 2) != 0)) {
            if (((s32) arg1->unk_ADA < 0x1E) && (arg1->unk_14B != 1)) {
                if (temp_v0_3 != 0) {
                    phi_v0 = 0;
                } else {
                    phi_v0 = 1;
                }
                temp_v1_2 = (arg1 + (phi_v0 << 7))->unk_568;
                if ((temp_v1_2 != 0) && (*temp_v1_2 != 0xA8)) {
                    func_8082DF2C(arg0);
                }
            }
            if ((func_8083FF30(arg0, arg1) == 0) && (func_8083FFEC(arg0, arg1), (arg1->colChkInfo.atHitEffect == 1))) {
                arg1->colChkInfo.damage = 8;
                func_80833B18(arg0, arg1, (Actor *)4, 0.0f, 0.0f, (s16) (s32) arg1->shape.rot.y, 0x14);
                return 1;
            }
            goto block_48;
        }
        goto block_48;
    }
block_48:
    return 0;
}

void func_80840770(GlobalContext *arg0, Actor *arg1) {
    s16 temp_v0;
    s32 temp_t6;

    temp_v0 = arg1->unk_AE8;
    if (temp_v0 != 0) {
        if ((s32) temp_v0 > 0) {
            arg1->unk_AE8 = (s16) (temp_v0 - 1);
            if (arg1->unk_AE8 == 0) {
                if ((arg1->unk_A6C * 0x10) < 0) {
                    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) &D_0400E000, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400E000), (u8) 2, -16.0f);
                } else {
                    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) &D_0400D698, 1.0f, 99.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400D698), (u8) 2, 0.0f);
                }
                gSaveContext.healthAccumulator = 0xA0;
                arg1->unk_AE8 = -1;
                return;
            }
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        if (gSaveContext.healthAccumulator == 0) {
            func_80838760(arg1);
            temp_t6 = arg1->unk_A6C & ~0x80;
            arg1->unk_A6C = temp_t6;
            if ((temp_t6 * 0x10) < 0) {
                func_808353DC(arg0, arg1);
            } else {
                func_8085B384(arg1, arg0);
            }
            arg1->unk_D6B = 0x14;
            func_808339B4(arg1, -0x14);
            func_801A01C4();
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return;
    }
    if (arg1->unk_AE7 != 0) {
        func_80838760(arg1);
        arg1->unk_AE8 = 0x3C;
        arg1->unk_A86 = (s8) arg0->unk_1879C[7];
        func_80835C64(arg0, arg1, (Vec3f *) &arg1->world, &D_8085D2A4, 5);
        func_800B8E58(arg1, 0x20A8U);
        return;
    }
    if (arg0->gameOverCtx.state == 2) {
        arg0->gameOverCtx.state = 3;
    }
}

void func_80840980(s32 arg1) {
    func_8082DF8C((Actor *) (arg1 & 0xFFFF));
}

void func_808409A8(GlobalContext *arg0, Player *arg1, f32 arg2, f32 arg3) {
    Actor *sp24;
    Actor *temp_a2;

    temp_a2 = arg1->leftHandActor;
    sp24 = temp_a2;
    if (func_808313A8(arg0, arg1, temp_a2) == 0) {
        temp_a2->world.rot.y = arg1->actor.shape.rot.y;
        temp_a2->speedXZ = arg2;
        temp_a2->velocity.y = arg3;
        func_808309CC(arg0, (Actor *) arg1, temp_a2);
        func_800B8E58((Actor *) arg1, 0x83AU);
        func_8082DF8C((Actor *) arg1, 0x6800U);
    }
}

s32 func_80840A30(Actor *arg0, Actor *arg1, f32 *arg2, f32 arg3) {
    void *sp2C;
    DynaPolyActor *temp_v0_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_v0_4;
    u8 temp_a1;
    void *temp_a3;
    s32 phi_v1;
    void *phi_a3;

    phi_a3 = NULL;
    if (arg3 <= *arg2) {
        if (((arg1->bgCheckFlags & 0x200) == 0) || (D_80862B24 >= 0x1C00)) {
            if (((arg1->unk_52A & 2) != 0) && (temp_a3 = arg1->unk_524, phi_a3 = temp_a3, (temp_a3 != 0))) {
                temp_v0 = temp_a3->unk_0;
                if (temp_v0 != 0x1A5) {
                    if ((temp_v0 == 0x41) || (temp_v0 == 0x1D4) || (temp_v0 == 0x229)) {
                        temp_v0_2 = arg1->world.rot.y - temp_a3->unk_92;
                        phi_v1 = (s32) temp_v0_2;
                        if ((s32) temp_v0_2 < 0) {
                            phi_v1 = -(s32) temp_v0_2;
                        }
                        if (phi_v1 >= 0x6001) {
                            goto block_12;
                        }
                        goto block_29;
                    }
                    goto block_29;
                }
                goto block_12;
            }
            goto block_29;
        }
block_12:
        sp2C = phi_a3;
        if (func_8082DA90((bitwise GlobalContext *) arg3, arg0, phi_a3) == 0) {
            if (arg1->unk_37C == 4) {
                func_8085B384(arg1, (GlobalContext *) arg0);
                return 1;
            }
            if (phi_a3 != 0) {
                phi_a3->unk_16 = 1;
            } else {
                temp_a1 = arg1->wallBgId;
                if (temp_a1 != 0x32) {
                    temp_v0_3 = BgCheck_GetActorOfMesh(arg0 + 0x830, (s32) temp_a1);
                    if ((temp_v0_3 != 0) && ((temp_v1 = temp_v0_3->actor.id, (temp_v1 == 0xE5)) || (temp_v1 == 0x22D) || (temp_v1 == 0x23C))) {
                        temp_v0_3->actor.home.rot.z = 1;
                    }
                }
            }
            temp_v0_4 = arg1->unk_A74;
            if ((temp_v0_4 & 0x1000) == 0) {
                if (((temp_v0_4 & 0x8000) != 0) && (arg1->unk_748 != func_8084CA24)) {
                    func_80831494((GlobalContext *) arg0, arg1, func_80851B58, 0);
                    func_8082DB90((GlobalContext *) arg0, arg1, (LinkAnimationHeader *) &D_0400DFF8);
                    func_8082DD2C((GlobalContext *) arg0, (Player *) arg1);
                    arg1->unk_AD0 = (f32) (arg1->unk_AD0 * 0.2f);
                } else {
                    func_80831494((GlobalContext *) arg0, arg1, func_8084C6EC, 0);
                    func_8082DB18((GlobalContext *) arg0, (Player *) arg1, *(&D_8085C004 + (arg1->unk_14F * 4)));
                    arg1->unk_AE8 = 1;
                }
            }
            arg1->unk_AD0 = (f32) -arg1->unk_AD0;
            func_80836EA0((GlobalContext *) arg0, 0x81F3, 3, 0xC);
            func_8082DF48(arg0, (Player *) arg1, 0xFFU, 0x14U, (u8) 0x96, 0);
            func_800B648C((GlobalContext *) arg0, 2, 2, 0x42C80000, &arg1->world);
            func_800B8E58(arg1, 0x83EU);
            func_8082DF8C(arg1, 0x6804U);
            return 1;
        }
        goto block_29;
    }
block_29:
    return 0;
}

s32 func_80840CD4(Actor *arg0, GlobalContext *arg1) {
    s32 temp_t2;
    s32 phi_a2;

    if (func_808387A0(arg1, arg0) != 0) {
        arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20000);
        goto block_10;
    }
    if (~(D_80862B44->cur.button | ~0x4000) != 0) {
        if ((arg0->unk_B08 >= 0.85f) || (func_808333CC(arg0) != 0)) {
            phi_a2 = (s32) *(&D_8085CF84 + func_801241B4((Player *) arg0));
        } else {
            phi_a2 = (s32) *(&D_8085CF80 + func_801241B4((Player *) arg0));
        }
        func_80833864(arg1, arg0, phi_a2);
        func_808339B4(arg0, -8);
        temp_t2 = arg0->unk_A70 | 0x20000;
        arg0->unk_A70 = temp_t2;
        if ((arg0 + arg0->unk_ADE)->unk_AE3 == 0) {
            arg0->unk_A70 = (s32) (temp_t2 | 0x40000000);
        }
block_10:
        return 1;
    }
    return 0;
}

void func_80840DEC(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_8084CE84, 1);
}

void func_80840E24(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_8084D18C, 1);
}

void func_80840E5C(Player *arg0, GlobalContext *arg1) {
    func_808369F4(arg0, arg1);
    func_8082DC38(arg0);
    func_8082E438(arg1, (Actor *) arg0, *(&D_8085CF68 + (func_801241B4(arg0) * 4)));
    arg0->currentYaw = arg0->actor.shape.rot.y;
}

void func_80840EC0(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_8084CCEC, 1);
    func_8082DB3C(arg1, arg0, *(&D_8085CF60 + (func_801241B4((Player *) arg0) * 4)));
    arg0->unk_AE8 = 1;
    arg0->unk_B38 = 0.0f;
}

void func_80840F34(Actor *arg0) {
    f32 phi_f0;

    if ((gSaveContext.weekEventReg[23] & 2) != 0) {
        phi_f0 = 1.0f;
    } else {
        phi_f0 = 0.5f;
    }
    Math_StepToF(arg0 + 0xB08, phi_f0, 0.02f);
}

s32 func_80840F90(GlobalContext *arg0, GlobalContext *arg1, void *arg2, Player *arg3, s16 arg4, s32 arg5) {
    f32 sp34;
    f32 sp28;
    s32 sp24;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    s32 temp_f6;
    s32 temp_v1;
    Player *phi_f12;

    phi_f12 = arg3;
    if ((arg5 != 0) && (arg1->unk_AD0 == 0.0f)) {
        return func_801360E0(arg0, arg1 + 0x240);
    }
    if (arg5 != 2) {
        temp_f16 = (f32) gGameInfo->data[126] * 0.5f;
        temp_v1 = (arg2->unk_4 - arg0->csCtx.frames) + 1;
        temp_f14 = (f32) arg2->unk_18 - arg1->unk_24;
        sp34 = temp_f16;
        sp24 = temp_v1;
        temp_f12 = (f32) arg2->unk_20 - arg1->unk_2C;
        temp_f18 = sqrtf((temp_f14 * temp_f14) + (temp_f12 * temp_f12)) / temp_f16;
        sp28 = temp_f18;
        temp_f18_2 = temp_f18;
        arg4 = Math_FAtan2F(temp_f12, temp_f14);
        if (arg5 == 1) {
            temp_f2 = (f32) (arg2->unk_18 - arg2->unk_C);
            temp_f12_2 = (f32) (arg2->unk_20 - arg2->unk_14);
            temp_f6 = (s32) ((((sqrtf((temp_f2 * temp_f2) + (temp_f12_2 * temp_f12_2)) / temp_f16) / (f32) (arg2->unk_4 - arg2->unk_2)) / 1.5f) * 4.0f);
            if (temp_f6 >= temp_v1) {
                arg4 = arg1->unk_BE;
                phi_f12 = NULL;
            } else {
                phi_f12 = (bitwise Player *) (temp_f18_2 / (f32) ((temp_v1 - temp_f6) + 1));
            }
        } else {
            phi_f12 = (bitwise Player *) (temp_f18_2 / (f32) temp_v1);
        }
    }
    arg1->colCtx.dyna.bgActors[4].minY |= 0x20;
    arg3 = phi_f12;
    func_8083F57C(phi_f12, arg1, arg0, arg2, arg5);
    func_8083CB58(arg3, (s16) arg1, arg3, arg4);
    if (((bitwise f32) arg3 == 0.0f) && (arg1->unk_AD0 == 0.0f)) {
        func_80839CD8(arg3, arg1, arg0);
    }
    return 0;
}

s32 func_808411D4(GlobalContext *arg0, GlobalContext *arg1, Player **arg2, s32 arg3) {
    s32 sp2C;
    f32 temp_f12;
    f32 temp_f2;
    s32 phi_v1;

    temp_f2 = arg1->unk_3A0 - arg1->unk_24;
    temp_f12 = arg1->unk_3A8 - arg1->unk_2C;
    sp2C = (s32) sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    phi_v1 = (s32) Math_Vec3f_Yaw(arg1 + 0x24, arg1 + 0x3A0);
    if (sp2C < arg3) {
        *arg2 = NULL;
        phi_v1 = (s32) arg1->unk_BE;
    }
    if (func_80840F90(arg0, arg1, NULL, *arg2, (s16) phi_v1, 2) != 0) {
        return 0;
    }
    return sp2C;
}

void func_808412A0(s32 arg0, void *arg1) {
    arg1->unk_138 = &func_801229EC;
    arg1->unk_13C = 0;
}

void func_808412BC(GlobalContext *arg0, Actor *arg1) {
    func_80831494(arg0, arg1, func_80854118, 0);
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) &D_0400DF78, 0.6666667f, 0.0f, 24.0f, (u8) 2, 0.0f);
    arg1->world.pos.y += 800.0f;
}

void func_80841358(GlobalContext *arg0, Player *arg1, s32 arg2) {
    s32 sp24;
    s32 sp20;
    u8 temp_v0;

    temp_v0 = *(&D_8085D2B0 + arg1->transformation);
    sp24 = (s32) temp_v0;
    sp20 = (s32) *(&D_8085C99C + temp_v0);
    func_808317C4(arg1);
    func_8082DCA0(arg0, arg1);
    arg1->heldItemId = (u8) sp24;
    arg1->nextModelGroup = func_80123960((GlobalContext *) arg1, (s8) sp20);
    func_8082F8BC(arg0, arg1, sp20);
    func_808309CC(arg0, (Actor *) arg1);
    if (arg2 != 0) {
        func_800B8E58((Actor *) arg1, 0x1803U);
    }
}

void func_80841408(GlobalContext *arg0, Actor *arg1) {
    func_80831494(arg0, arg1, func_80852FD4, 0);
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
    Math_Vec3f_Copy((Vec3f *) &arg1->world, &D_8085D2B4);
    arg1->shape.rot.y = -0x8000;
    arg1->unk_AD4 = (s16) arg1->shape.rot.y;
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, arg1->unk_A68->unk_A8, 0.6666667f, 0.0f, 0.0f, (u8) 2, 0.0f);
    func_8082E920(arg0, arg1, 0x28F);
    if (arg1->unk_14B == 0) {
        func_80841358(arg0, (Player *) arg1, 0);
    }
    arg1->unk_AE8 = 0x14;
}

void func_808414E0(GlobalContext *arg0, Actor *arg1) {
    func_80831494(arg0, arg1, func_8085437C, 0);
    func_8082E920(arg0, arg1, 0x9B);
}

void func_80841528(Actor *arg0, LinkAnimationHeader *arg1) {
    func_80834DB8(arg1, (bitwise f32) &D_0400DCD8, (GlobalContext *)0x41400000, arg0);
    func_80831494((GlobalContext *) arg0, (Actor *) arg1, func_8085439C, 0);
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
    arg1->unk_B68 = (s16) (s32) arg1->unk_28;
}

void func_808415A0(void *arg1) {
    func_80833B18((GlobalContext *)1, (Actor *)0x40000000, (Actor *)0x40000000, (bitwise f32) (arg1->unk_BE + 0x8000), 0.0f);
}

void func_808415E4(void *arg1) {
    func_80831494((GlobalContext *) func_808540A0, NULL);
    arg1->unk_13C = 0;
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
}

void func_80841624(GlobalContext *arg0, Actor *arg1) {
    if (gSaveContext.isOwlSave != 0) {
        func_80831494(arg0, arg1, func_808496AC, 0);
        func_8082E514(arg0, (Player *) arg1, *(&D_8085C28C + (arg1->unk_14F * 4)));
        arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
        arg1->unk_AE8 = 0x28;
        gSaveContext.isOwlSave = 0;
        return;
    }
    func_80831494(arg0, arg1, func_80849FE0, 0);
    func_8082E514(arg0, (Player *) arg1, *(&D_8085C28C + (arg1->unk_14F * 4)));
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
    arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x20000000);
    Actor_Spawn(&arg0->actorCtx, arg0, 0x1CE, arg1->world.pos.x, arg1->world.pos.y, arg1->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) -1);
}

void func_80841744(GlobalContext *arg0, GlobalContext *arg1) {
    func_80831494(arg1, (Actor *) func_80855C28, NULL);
    if (((s32) (arg1->unk_1C & 0xF00) >> 8) == 8) {
        func_8082DBC0(arg0, arg1, *(&D_8085D17C + (arg1->unk_14B * 4)));
        arg1->unk_14A = 0x14;
        func_80123AA4(arg1, func_80123960(arg1, arg1->unk_14A));
    } else {
        func_8082DB60(arg0, (Actor *) arg1, *(&D_8085C28C + (arg1->unk_14F * 4)));
    }
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
    arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = 0x2710;
    arg1->unk_ABC = -10000.0f;
    arg1->colCtx.dyna.bgActors[6].curTransform.pos.x = 8.0f;
}

void func_8084182C(Actor *arg0, GlobalContext *arg1, FlexSkeletonHeader *arg2) {
    Actor_ProcessInitChain(arg0, &D_8085D2C0);
    arg0->unk_AD4 = (s16) arg0->world.rot.y;
    if ((((s32) (arg0->params & 0xF00) >> 8) != 0xC) && ((gSaveContext.respawnFlag != 2) || (gSaveContext.respawn[1].playerParams != 0xCFF))) {
        func_808309CC(arg1, arg0);
        SkelAnime_InitLinkAnimetion(arg1, arg0 + 0x240, arg2, *(&D_8085BE84 + (arg0->unk_14F * 4)), 9, arg0 + 0x74C, arg0 + 0x7EB, 0x16);
        arg0->unk_27E = (unaligned s32) D_8085D2C4.unk_0;
        arg0->unk_282 = (u16) D_8085D2C4.unk_4;
        SkelAnime_InitLinkAnimetion(arg1, arg0 + 0x284, arg2, func_8082ED20(arg0), 9, arg0 + 0x929, arg0 + 0x9C8, 0x16);
        arg0->unk_2C2 = (unaligned s32) D_8085D2C4.unk_0;
        arg0->unk_2C6 = (u16) D_8085D2C4.unk_4;
        if (arg0->unk_14B == 1) {
            SkelAnime_InitSV(arg1, arg0 + 0x2C8, &D_060177B8, &D_060178D0, arg0 + 0x30C, arg0 + 0x32A, 5);
        }
        ActorShape_Init(&arg0->shape, 0.0f, func_800B42F8, arg0->unk_A68->unk_4);
    }
    arg0->unk_3BC = -1;
    Collider_InitAndSetCylinder(arg1, arg0 + 0x518, arg0, &D_8085C2EC);
    Collider_InitAndSetCylinder(arg1, arg0 + 0x6E4, arg0, &D_8085C318);
    Collider_InitAndSetQuad(arg1, arg0 + 0x564, arg0, &D_8085C344);
    Collider_InitAndSetQuad(arg1, arg0 + 0x5E4, arg0, &D_8085C344);
    Collider_InitAndSetQuad(arg1, arg0 + 0x664, arg0, &D_8085C394);
}

void func_80841A50(GlobalContext *arg0, Actor *arg1) {
    s32 sp1C;
    Vec3f *temp_a0;
    Vec3f *temp_a1;

    if ((s32) arg0->roomCtx.currRoom.num >= 0) {
        temp_a0 = arg1 + 0x3C0;
        temp_a1 = arg1 + 0x24;
        if ((s32) arg0->roomCtx.prevRoom.num < 0) {
            sp1C = arg0 + 0x18000;
            arg1 = arg1;
            Math_Vec3f_Copy(temp_a0, temp_a1);
            arg1->unk_3CC = (s16) arg1->shape.rot.y;
            arg1->unk_3CF = 1;
            arg1->unk_3CE = (s8) arg0->roomCtx.currRoom.num;
        }
    }
}

void func_80841AC4(Actor *arg0, GlobalContext *arg1) {
    s32 sp60;
    LightInfo *sp44;
    PosRot *sp40;
    LightInfo *temp_a0;
    LightInfo *temp_v1_2;
    PosRot *temp_a0_2;
    RespawnData *temp_t8;
    RespawnData *temp_t9_2;
    s16 temp_v0;
    s16 temp_v0_7;
    s16 temp_v1_3;
    s32 temp_a2;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s8 temp_v0_2;
    u32 temp_t7;
    u32 temp_t9;
    u8 temp_t1;
    u8 temp_t6;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_6;
    void *temp_v0_4;
    u8 phi_v0;
    u8 phi_v0_2;
    s32 phi_a2;
    s32 phi_v0_3;
    SaveContext *phi_v1;
    s32 phi_a2_2;
    SaveContext *phi_a3;
    s8 phi_a1;
    s32 phi_v0_4;

    arg1->playerInit = func_8084182C;
    arg1->playerUpdate = func_80844EF8;
    arg1->unk_18770 = func_8085B170;
    arg1->startPlayerFishing = func_8085B134;
    arg1->grabPlayer = func_8085B1F0;
    arg1->startPlayerCutscene = func_8085B28C;
    arg1->func_18780 = func_8085B384;
    arg1->damagePlayer = func_8085B3E0;
    arg1->talkWithPlayer = func_8085B460;
    arg1->unk_1878C = func_8085B74C;
    arg1->unk_18790 = func_8085B820;
    arg1->unk_18794 = func_8085B854;
    arg1->setPlayerTalkAnim = func_8085B930;
    gActorOverlayTable->initInfo->objectId = 1;
    temp_v0 = arg0->shape.rot.x;
    arg0->room = -1;
    arg0->unk_A86 = -1;
    temp_t1 = temp_v0 - 1;
    if (temp_v0 != 0) {
        arg0->unk_14B = temp_t1;
        temp_v0_2 = Object_GetIndex(arg1 + 0x17D88, gLinkFormObjectIndexes[temp_t1 & 0xFF]);
        arg0->objBankIndex = temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            Actor_MarkForDeath(arg0);
            return;
        }
        Actor_SetObjectSegment(arg1, arg0);
        goto block_10;
    }
    temp_t6 = gSaveContext.playerForm;
    temp_v1 = temp_t6 & 0xFF;
    arg0->unk_14B = temp_t6;
    if (temp_v1 == 4) {
        temp_v0_3 = gSaveContext.equippedMask;
        phi_v0 = temp_v0_3;
        if (temp_v0_3 == 0x14) {
            gSaveContext.equippedMask = 0;
            phi_v0 = 0U;
        }
        arg0->unk_153 = phi_v0;
    } else {
        arg0->unk_153 = (u8) (temp_v1 + 0x15);
        gSaveContext.equippedMask = 0;
    }
    func_80114CA0(arg1, -1);
    arg0->unk_B28 = 0;
    arg0->unk_B90 = 0;
    arg0->unk_B92 = 0;
    arg0->unk_B94 = 0;
    arg0->unk_B96 = 0;
    arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFCFFEFF7);
    arg0->unk_A70 = (s32) (arg0->unk_A70 & 0xBEFDFFFF);
    arg0->unk_A74 = (s32) (arg0->unk_A74 & 0xFC424437);
    arg0->unk_B08 = 0.0f;
    arg0->unk_B0C = 0.0f;
block_10:
    if (arg0->unk_14B == 2) {
        if ((arg0->unk_A6C * 0x10) < 0) {
            arg0->unk_B10 = 1.0f;
        } else {
            arg0->unk_B10 = 0.0f;
        }
    }
    temp_t7 = arg0->flags & 0xFBFDFFFF;
    arg0->flags = temp_t7;
    phi_v0_2 = arg0->unk_14B;
    if (arg0->unk_14B != 3) {
        temp_t9 = temp_t7 | 0x4000000;
        arg0->flags = temp_t9;
        if (arg0->unk_14B == 1) {
            arg0->flags = temp_t9 | 0x20000;
            phi_v0_2 = arg0->unk_14B;
        }
    }
    arg0->unk_A68 = (void *) ((phi_v0_2 * 0xDC) + &D_8085BA38);
    arg0->unk_14A = 0;
    arg0->unk_147 = 0;
    arg0->unk_148 = 0xFF;
    func_80831990(arg1, arg0, 0xFF);
    func_80123C90(arg1, arg0);
    arg0->unk_149 = (s8) arg0->unk_145;
    func_8084182C(arg0, arg1, *(&D_801BFE00 + (arg0->unk_14B * 4)));
    if (arg0->shape.rot.z != 0) {
        arg0->shape.rot.z = 0;
        func_8082F938((Player *) arg1, arg0, 0, 4);
        temp_v0_4 = Effect_GetParams(arg0->unk_744);
        if (arg0->unk_14B == 1) {
            temp_v0_4->unk_606 = (unaligned s32) D_8085D338;
        } else {
            temp_v0_4->unk_606 = (unaligned s32) D_8085D33C;
        }
        temp_v0_5 = arg0->unk_394;
        if ((temp_v0_5 == 9) || (temp_v0_5 == 0x5D)) {
            func_80831494(arg1, arg0, func_8085B08C, 0);
            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x20000000);
            return;
        }
        func_80831494(arg1, arg0, func_80855818, 0);
        arg0->shape.rot.y = arg0->unk_AD4;
        if (arg0->unk_155 != 0) {
            func_8082DB90(arg1, arg0, (LinkAnimationHeader *) &D_0400D0A8);
        } else {
            temp_v0_6 = arg0->unk_14B;
            if (temp_v0_6 == 4) {
                SkelAnime_ChangeLinkAnim(arg1, arg0 + 0x240, *(&D_8085D160 + (temp_v0_6 * 4)), -0.6666667f, 9.0f, 0.0f, (u8) 2, 0.0f);
            } else {
                func_8082DB60(arg1, arg0, &D_0400D0D0);
            }
        }
        arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x30000000);
        arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x20000);
        arg0->unk_B24 = 3.0f;
        return;
    }
    arg0->unk_155 = (u8) arg0->unk_153;
    Effect_Add(arg1, arg0 + 0x73C, 2, 0U, (u8) 0, &D_8085D30C);
    Effect_Add(arg1, arg0 + 0x740, 2, 0U, (u8) 0, &D_8085D30C);
    func_8082F938((Player *) arg1, arg0, 0, 4);
    if (arg0->unk_14B == 1) {
        *(&D_8085D330 + 4) = (unaligned s32) D_8085D338;
    } else {
        *(&D_8085D330 + 4) = (unaligned s32) D_8085D33C;
    }
    Effect_Add(arg1, arg0 + 0x744, 4, 0U, (u8) 0, &D_8085D330);
    if (arg0->shape.rot.x != 0) {
        arg0->shape.rot.x = 0;
        arg0->unk_394 = 0x44U;
        func_80831494(arg1, arg0, func_8085B08C, 0);
        arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x20000000);
        return;
    }
    arg1->unk_1887C = 0;
    arg1->unk_1887D = 0;
    arg1->unk_1887E = 0;
    arg0->unk_1F8 = zelda_malloc(0x2000U);
    arg0->unk_23C = zelda_malloc(0x3800U);
    temp_a0 = arg0 + 0x508;
    sp44 = temp_a0;
    Lights_PointNoGlowSetInfo(temp_a0, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) 0xFF, (u8) 0x80, (u8) 0, (s16) -1);
    arg0->unk_504 = LightContext_InsertLight(arg1, &arg1->lightCtx, sp44);
    func_8016A178(arg1, arg0->cutscene);
    temp_a2 = gSaveContext.respawnFlag;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    phi_a3 = &gSaveContext;
    if (temp_a2 != 0) {
        if (temp_a2 == -3) {
            arg0->params = gSaveContext.respawn[3].playerParams;
        } else {
            if ((temp_a2 == 1) || (temp_a2 == -1)) {
                arg0->unk_D6A = -2;
            }
            if (temp_a2 != -7) {
                temp_a0_2 = &arg0->world;
                if ((temp_a2 == -8) || (temp_a2 == -5) || (temp_a2 == -4)) {
                    phi_a2 = 1;
                }
                if ((phi_a2 < 0) && (phi_a2 != -1) && (phi_a2 != -6)) {
                    phi_v1 = &gSaveContext;
                } else {
                    phi_v0_3 = phi_a2 - 1;
                    if (phi_a2 < 0) {
                        phi_v0_3 = 2;
                    }
                    temp_v1_2 = &gSaveContext + (phi_v0_3 << 5);
                    sp44 = temp_v1_2;
                    sp40 = temp_a0_2;
                    sp60 = phi_a2;
                    Math_Vec3f_Copy((Vec3f *) temp_a0_2, (Vec3f *) &gSaveContext.respawn[phi_v0_3]);
                    Math_Vec3f_Copy((Vec3f *) &arg0->home, (Vec3f *) sp40);
                    Math_Vec3f_Copy(&arg0->prevPos, (Vec3f *) sp40);
                    Math_Vec3f_Copy((Vec3f *) &arg0->focus, (Vec3f *) sp40);
                    arg0->unk_B68 = (s16) (s32) arg0->world.pos.y;
                    temp_v0_7 = gSaveContext.respawn[phi_v0_3].yaw;
                    arg0->shape.rot.y = temp_v0_7;
                    arg0->unk_AD4 = temp_v0_7;
                    arg0->params = gSaveContext.respawn[phi_v0_3].playerParams;
                    phi_v1 = (SaveContext *) temp_v1_2;
                }
                arg1->actorCtx.switchFlags[2] = phi_v1->respawn[0].tempSwchFlags;
                arg1->actorCtx.collectibleFlags[1] = phi_v1->respawn[0].unk_18;
                arg1->actorCtx.collectibleFlags[2] = phi_v1->respawn[0].tempCollectFlags;
                phi_a2_2 = phi_a2;
                phi_a3 = &gSaveContext;
            }
        }
    }
    if ((phi_a2_2 == 4) || (phi_a1 = 0, (phi_a3->respawnFlag == -4))) {
        phi_a1 = 1;
    }
    sp60 = phi_a2_2;
    if (func_801226E0(arg1, phi_a1, phi_a2_2, phi_a3) == 0) {
        gSaveContext.respawn[0].playerParams = (arg0->params & 0xFF) | 0xD00;
    }
    gSaveContext.respawn[0].data = 1;
    if (phi_a2_2 == 0) {
        temp_t9_2 = gSaveContext.respawn;
        temp_t8 = &gSaveContext.respawn[2];
        temp_t8->pos.x = temp_t9_2->pos.x;
        temp_t8->pos.y = temp_t9_2->pos.y;
        temp_t8->pos.z = temp_t9_2->pos.z;
        temp_t8->unk_C = (s32) temp_t9_2->unk_C;
        temp_t8->unk_10 = (s32) temp_t9_2->unk_10;
        temp_t8->tempSwchFlags = temp_t9_2->tempSwchFlags;
        temp_t8->unk_18 = temp_t9_2->unk_18;
        temp_t8->tempCollectFlags = temp_t9_2->tempCollectFlags;
    }
    gSaveContext.respawn[2].playerParams = (gSaveContext.respawn[2].playerParams & 0xFF) | 0xD00;
    temp_v0_8 = (s32) (arg0->params & 0xF00) >> 8;
    phi_v0_4 = temp_v0_8;
    if (((temp_v0_8 == 5) || (temp_v0_8 == 6)) && (gSaveContext.cutscene >= 0xFFF0)) {
        phi_v0_4 = 0xD;
    }
    *(&D_8085D2CC + (phi_v0_4 * 4))(arg1, arg0, phi_a2_2);
    if ((arg0->draw != 0) && (gSaveContext.hasTatl != 0) && ((temp_v0_9 = gSaveContext.gameMode, (temp_v0_9 == 0)) || (temp_v0_9 == 3)) && (arg1->sceneNum != 8)) {
        arg0->unk_A80 = func_80835C64(arg1, arg0, (Vec3f *) &arg0->world, &D_8085D340, 0);
        temp_v1_3 = (s16) gSaveContext.dogParams;
        if (temp_v1_3 != 0) {
            gSaveContext.dogParams = temp_v1_3 | 0x8000;
        }
        if (gSaveContext.powderKegTimer != 0) {
            arg0->unk_14D = func_80123960((GlobalContext *) arg0, 0xF);
            arg0->unk_148 = 0xC;
            func_8082F8BC(arg1, (Player *) arg0, 0xF);
            func_808313F0((Player *) arg0, arg1);
        } else if (gSaveContext.unk_1014 != 0) {
            func_8082F5FC((Player *) arg0, Actor_SpawnAsChild(&arg1->actorCtx, arg0, arg1, 0xB9, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) (s32) arg0->shape.rot.y, (s16) 0, 0x8000));
            func_808313F0((Player *) arg0, arg1);
        }
    }
    func_8010A2DC(arg1);
    func_80841A50(arg1, arg0);
    arg0->unk_3CF = 0;
    gGameInfo->data[544] = 0;
}

void func_80842510(s16 *arg0) {
    s16 temp_v0;
    s32 temp_f4;
    s16 phi_v1;
    s16 phi_a2;
    s16 phi_v1_2;

    temp_v0 = *arg0;
    phi_v1 = temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s16) -(s32) temp_v0;
    }
    temp_f4 = (s32) (((f32) phi_v1 * 100.0f) / 1000.0f);
    if ((s32) (s16) temp_f4 < 0x190) {
        phi_a2 = 0x190;
    } else {
        phi_v1_2 = (s16) temp_f4;
        if ((s32) (s16) temp_f4 >= 0xFA1) {
            phi_v1_2 = 0xFA0;
        }
        phi_a2 = phi_v1_2;
    }
    Math_ScaledStepToS(arg0, 0, phi_a2);
}

void func_808425B4(Player *arg0) {
    s16 sp26;
    s16 *temp_a0;
    u16 phi_v0;
    u16 phi_v0_2;
    u16 phi_v0_3;
    u16 phi_v0_4;
    u16 phi_v0_5;
    u16 phi_v0_6;
    u16 phi_v0_7;

    if ((arg0->unk_AA6 & 2) == 0) {
        temp_a0 = &sp26;
        sp26 = arg0->actor.focus.rot.y - arg0->actor.shape.rot.y;
        func_80842510(temp_a0);
        arg0->actor.focus.rot.y = arg0->actor.shape.rot.y + sp26;
    }
    phi_v0 = arg0->unk_AA6;
    if ((arg0->unk_AA6 & 1) == 0) {
        func_80842510(arg0 + 0x48);
        phi_v0 = arg0->unk_AA6;
    }
    phi_v0_2 = phi_v0;
    if ((phi_v0 & 8) == 0) {
        func_80842510(arg0 + 0xAAC);
        phi_v0_2 = arg0->unk_AA6;
    }
    phi_v0_3 = phi_v0_2;
    if ((phi_v0_2 & 0x40) == 0) {
        func_80842510(arg0 + 0xAB2);
        phi_v0_3 = arg0->unk_AA6;
    }
    phi_v0_4 = phi_v0_3;
    if ((phi_v0_3 & 4) == 0) {
        func_80842510(arg0 + 0x4C);
        phi_v0_4 = arg0->unk_AA6;
    }
    phi_v0_5 = phi_v0_4;
    if ((phi_v0_4 & 0x10) == 0) {
        func_80842510(arg0 + 0xAAE);
        phi_v0_5 = arg0->unk_AA6;
    }
    phi_v0_6 = phi_v0_5;
    if ((phi_v0_5 & 0x20) == 0) {
        func_80842510(arg0 + 0xAB0);
        phi_v0_6 = arg0->unk_AA6;
    }
    phi_v0_7 = phi_v0_6;
    if ((phi_v0_6 & 0x80) == 0) {
        if (arg0->unk_AA8 != 0) {
            func_80842510(arg0 + 0xAA8);
        } else {
            func_80842510(arg0 + 0xAB4);
        }
        phi_v0_7 = arg0->unk_AA6;
    }
    if ((phi_v0_7 & 0x100) == 0) {
        func_80842510(arg0 + 0xAB6);
    }
    arg0->unk_AA6 = 0;
}

void func_808426F0(GlobalContext *arg0, Player *arg1) {
    Player *sp3C;
    s32 sp38;
    Actor *sp34;
    Actor *sp30;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp18;
    Actor *temp_t5;
    Actor *temp_v0_8;
    Actor *temp_v0_9;
    Actor *temp_v1;
    CollisionPoly *temp_a1_3;
    Player *temp_a0;
    Player *temp_a0_3;
    Player *temp_a0_4;
    Player *temp_a0_5;
    Player *temp_a1;
    Player *temp_a3;
    Player *temp_a3_2;
    Player *temp_a3_3;
    Player *temp_a3_4;
    s16 temp_v0_4;
    s32 temp_f18;
    s32 temp_t1;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_v0_11;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s8 temp_a1_2;
    s8 temp_v0_5;
    u16 temp_v0_3;
    u32 temp_a0_2;
    u32 temp_a2;
    u32 temp_a2_2;
    u32 temp_t2;
    u8 temp_a2_3;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_12;
    u8 temp_v0_13;
    u8 temp_v0_2;
    u8 temp_v1_2;
    s32 phi_t1;
    s32 phi_a2;
    Player *phi_a3;
    s32 phi_t0;
    s32 phi_t1_2;
    Player *phi_a3_2;
    Player *phi_a3_3;
    u8 phi_v0;
    Player *phi_a3_4;
    u8 phi_t0_2;
    Player *phi_a3_5;
    u8 phi_t0_3;
    s32 phi_v0_2;
    s32 phi_t1_3;

    temp_a3 = arg1;
    temp_a0 = temp_a3;
    phi_a2 = (s32) (Player *)-1;
    if (temp_a3 == arg0->actorCtx.actorList[2].first) {
        sp3C = (Player *)-1;
        arg1 = temp_a3;
        temp_t1 = func_801242B4(temp_a0, (Player *)-1, temp_a3) != 0;
        temp_a3_2 = arg1;
        phi_t1 = temp_t1;
        phi_a3 = temp_a3_2;
        if (temp_t1 == 0) {
            phi_t1 = temp_a3_2->unk_748 == (s32) func_8084CA24;
        }
        sp38 = phi_t1;
        temp_v0 = temp_a3_2->transformation;
        if (temp_v0 == 1) {
            temp_a2 = temp_a3_2->stateFlags3;
            if (temp_a2 & 0x80000) {
                phi_a2 = 0xA;
            } else if ((temp_a2 & 0x1000) != 0) {
                phi_a2 = 0x27;
            } else {
                phi_a2 = 0x26;
            }
        } else if (temp_v0 == 2) {
            if (((temp_a3_2->stateFlags1 * 0x10) >= 0) || ((phi_t1 == 0) && ((temp_a3_2->actor.bgCheckFlags & 1) != 0))) {
                phi_a2 = 0x26;
            } else {
                phi_a2 = 7;
            }
        } else if (temp_v0 == 3) {
            phi_a2 = 0x29;
        } else {
            temp_v0_2 = temp_a3_2->currentMask;
            if (temp_v0_2 == 0x12) {
                phi_a2 = 0x18;
            } else if (temp_v0_2 == 0x11) {
                phi_a2 = 0x1A;
            } else if (temp_v0_2 == 0xE) {
                phi_a2 = 0x19;
            }
        }
        if (phi_a2 >= 0) {
            arg1 = temp_a3_2;
            sp18 = phi_t1;
            func_801155B4(arg0, (s16) phi_a2, phi_a2, temp_a3_2);
            phi_a3 = arg1;
        } else if (arg0->interfaceCtx.unk_21C != 0) {
            arg0->interfaceCtx.unk_21C = 0;
            arg0->interfaceCtx.unk_21E = 0;
        }
        arg1 = phi_a3;
        sp18 = phi_t1;
        phi_a3_5 = arg1;
        if ((func_80152498(arg0 + 0x4908) == 0) || ((temp_v0_3 = arg0->msgCtx.unk11F04, (((s32) temp_v0_3 < 0x100) == 0)) && ((s32) temp_v0_3 < 0x201)) || (((s32) temp_v0_3 >= 0x1BB2) && ((s32) temp_v0_3 < 0x1BB7))) {
            sp34 = arg1->leftHandActor;
            temp_t5 = arg1->unk_388;
            temp_a1 = arg1;
            sp28 = (s32) arg1->unk_AE3[arg1->unk_ADE];
            phi_t0 = 0xA;
            phi_t0_2 = (u8) 0xA;
            phi_t0_3 = (u8) 0xA;
            if ((arg1->transformation == 1) && ((arg1->stateFlags1 << 9) >= 0)) {
                phi_t0 = 0x23;
            }
            if ((arg0->actorCtx.unk5 & 4) != 0) {
                phi_t0_2 = 0x17U;
            } else {
                arg1 = arg1;
                sp20 = phi_t0;
                sp18 = phi_t1;
                sp30 = temp_t5;
                temp_a3_3 = arg1;
                phi_a3_5 = temp_a3_3;
                if ((func_80123358(arg0, temp_a1) != 0) || ((temp_a3_3->actor.flags * 4) < 0) || (temp_t2 = temp_a3_3->stateFlags1, ((temp_t2 & 0x1000) != 0)) || (temp_a2_2 = temp_a3_3->stateFlags3, ((temp_a2_2 << 0xC) < 0)) || (temp_t4 = temp_a3_3->unk_748, (temp_t4 == func_80854430))) {

                } else if (temp_t2 & 0x100000) {
                    phi_t0_2 = 3U;
                } else if ((temp_a3_3->itemActionParam == 2) && (temp_v0_4 = temp_a3_3->unk_B28, (temp_v0_4 != 0))) {
                    if (temp_v0_4 == 2) {
                        phi_t0_2 = 0x14U;
                    }
                } else if ((temp_a2_2 & 0x2000) != 0) {
                    phi_t0_2 = 0xDU;
                } else {
                    temp_v0_5 = temp_a3_3->doorType;
                    if ((temp_v0_5 != 0) && (temp_v0_5 != 4) && ((temp_t2 & 0x800) == 0)) {
                        phi_t0_2 = 4U;
                    } else {
                        temp_t3 = temp_t2 & 0x800;
                        if (temp_a2_2 & 0x200000) {
                            phi_t0_2 = *(&D_8085D34C + temp_a3_3->unk_B67);
                        } else if (((temp_t3 == 0) || (sp34 == 0)) && (temp_t5 != 0) && ((s32) temp_a3_3->unk_384 < 0)) {
                            phi_t0_2 = 4U;
                        } else if ((phi_t1 == 0) && ((temp_a3_3->stateFlags2 & 1) != 0)) {
                            phi_t0_2 = 0x11U;
                        } else {
                            temp_a0_2 = temp_a3_3->stateFlags2;
                            temp_a1_2 = temp_t2 & 0x800000;
                            if (((temp_a0_2 & 4) != 0) || ((temp_a1_2 == 0) && (temp_a3_3->unk_390 != 0))) {
                                phi_t0_2 = 0xBU;
                            } else if (temp_a1_2 != 0) {
                                temp_v1 = temp_a3_3->unk_390;
                                temp_v0_6 = temp_v1->unk_144;
                                if (((temp_v0_6 == 7) || (temp_v0_6 == 0) || (temp_v0_6 == 8)) && (temp_v0_7 = temp_v1->unk_1E8, ((temp_v0_7 << 0xC) >= 0)) && ((temp_v0_7 << 6) >= 0)) {
                                    phi_t1_2 = 1;
                                } else {
                                    phi_t1_2 = 0;
                                }
                                if ((phi_t1_2 == 0) && (temp_t4 != func_808505D0)) {
                                    if (((temp_a0_2 & 2) != 0) && (temp_v0_8 = temp_a3_3->targetActor, (temp_v0_8 != 0))) {
                                        if ((temp_v0_8->category == 4) || (temp_v0_8->id == 0x19A)) {
                                            phi_t0_2 = 0xFU;
                                        } else {
                                            phi_t0_2 = 1U;
                                        }
                                    } else {
                                        arg1 = temp_a3_3;
                                        if ((func_8082DA90(arg0, (Actor *) temp_a1_2, (void *) temp_a2_2, temp_a3_3) == 0) && (temp_a0_3 = arg1, arg1 = arg1, phi_a3_5 = arg1, (func_800B7128((Actor *) temp_a0_3) == 0)) && ((arg1->stateFlags1 << 0xB) >= 0)) {
                                            phi_t0_2 = 8U;
                                        } else {
                                            phi_a3_5 = arg1;
                                        }
                                    }
                                } else {
                                    goto block_91;
                                }
                            } else {
block_91:
                                if (((temp_a0_2 & 2) != 0) && (temp_v0_9 = temp_a3_3->targetActor, (temp_v0_9 != 0))) {
                                    temp_v1_2 = temp_v0_9->category;
                                    if ((temp_v1_2 == 4) || (temp_v1_2 == 5) || (temp_v0_9->id == 0x19A)) {
                                        phi_t0_2 = 0xFU;
                                    } else {
                                        phi_t0_2 = 1U;
                                    }
                                } else if (((temp_t2 & 0x202000) != 0) || ((temp_a1_2 != 0) && (temp_a0_2 & 0x400000))) {
                                    phi_t0_2 = 0xDU;
                                } else if ((temp_t3 != 0) && (temp_a3_3->unk_384 == 0) && (sp34 != 0)) {
                                    if (((temp_a3_3->actor.bgCheckFlags & 1) != 0) || (sp34->id == 0x11)) {
                                        arg1 = temp_a3_3;
                                        phi_a3_5 = arg1;
                                        if (func_8083D738(temp_a3_3, sp34, temp_a2_2, temp_a3_3) == 0) {
                                            phi_t0_2 = 0xCU;
                                        } else {
                                            phi_t0_2 = 9U;
                                        }
                                    }
                                } else if (temp_a0_2 & 0x10000) {
                                    phi_t0_2 = 0x11U;
                                } else if ((temp_a0_2 & 0x800) != 0) {
                                    temp_f18 = (s32) ((120.0f - temp_a3_3->actor.yDistToWater) / 40.0f);
                                    if (temp_f18 < 0) {
                                        phi_v0_2 = 0;
                                    } else {
                                        phi_t1_3 = temp_f18;
                                        if (temp_f18 >= 2) {
                                            phi_t1_3 = 1;
                                        }
                                        phi_v0_2 = phi_t1_3;
                                    }
                                    phi_t0_2 = *(&D_8085D354 + phi_v0_2);
                                } else if ((temp_a2_2 & 0x100) != 0) {
                                    phi_t0_2 = 5U;
                                } else if ((temp_a2_2 & 0x1000) != 0) {
                                    phi_t0_2 = 3U;
                                } else {
                                    arg1 = temp_a3_3;
                                    sp20 = phi_t0;
                                    sp30 = temp_t5;
                                    temp_a3_4 = arg1;
                                    phi_a3_2 = temp_a3_4;
                                    phi_a3_4 = temp_a3_4;
                                    phi_a3_5 = temp_a3_4;
                                    if ((func_8082FBE8(temp_a3_3, temp_a1_2, temp_a2_2, temp_a3_3) == 0) && ((temp_a3_4->stateFlags1 * 0x10) < 0) && (sp38 == 0)) {
                                        phi_t0_2 = 0x24U;
                                    } else {
                                        temp_v0_10 = temp_a3_4->transformation;
                                        phi_v0 = temp_v0_10;
                                        if ((temp_v0_10 == 3) || ((sp38 == 0) && (((temp_a3_4->stateFlags1 * 0x10) >= 0) || ((temp_a3_4->actor.bgCheckFlags & 1) != 0)))) {
                                            if ((temp_v0_10 == 3) && ((temp_a3_4->actor.bgCheckFlags & 1) != 0) && (temp_a1_3 = temp_a3_4->actor.floorPoly, temp_a2_3 = temp_a3_4->actor.floorBgId, sp30 = temp_t5, sp20 = phi_t0, arg1 = temp_a3_4, phi_a3_2 = arg1, phi_a3_4 = arg1, (func_800C9DDC(&arg0->colCtx, temp_a1_3, temp_a2_3, temp_a3_4) != 0))) {
                                                phi_v0 = arg1->transformation;
                                                goto block_136;
                                            }
                                            arg1 = phi_a3_2;
                                            sp20 = phi_t0;
                                            temp_v0_11 = func_8082FBE8(phi_a3_2);
                                            sp24 = temp_v0_11;
                                            if (((temp_v0_11 != 0) && (arg1->transformation != 3)) || (temp_a0_4 = arg1, !(arg1->stateFlags1 & 0x400000)) || (arg1 = arg1, sp20 = phi_t0, phi_t0_2 = (u8) phi_t0, phi_a3_5 = arg1, (func_801234B0(temp_a0_4) == 0))) {
                                                phi_a3_3 = arg1;
                                                if ((arg1->transformation != 1) && ((arg1->stateFlags1 & 0x4004) == 0) && (sp28 <= 0) && ((arg1 = arg1, sp20 = phi_t0, phi_a3_3 = arg1, (func_80123420(arg1) != 0)) || ((temp_a0_5 = arg1, (D_80862B08 != 7)) && ((arg1 = arg1, sp20 = phi_t0, phi_a3_3 = arg1, (func_80123434(temp_a0_5) != 0)) || ((arg0->roomCtx.currRoom.unk3 != 2) && ((arg1->stateFlags1 << 9) >= 0) && (sp28 == 0)))))) {
                                                    phi_t0_2 = 0U;
                                                    phi_a3_5 = arg1;
                                                } else {
                                                    phi_t0_2 = (u8) phi_t0;
                                                    phi_a3_5 = phi_a3_3;
                                                    if ((arg0->roomCtx.currRoom.unk3 != 2) && (sp24 != 0) && (sp28 > 0)) {
                                                        phi_t0_2 = 5U;
                                                    } else {
                                                        temp_v0_12 = phi_a3_3->transformation;
                                                        if ((temp_v0_12 == 3) && ((phi_a3_3->stateFlags1 * 0x10) >= 0) && ((phi_a3_3->actor.bgCheckFlags & 1) != 0)) {
                                                            phi_t0_2 = 0U;
                                                        } else if (((temp_v0_12 == 4) || (temp_v0_12 == 2)) && (((s32) phi_a3_3->itemActionParam >= 3) || ((phi_a3_3->stateFlags2 & 0x100000) && (arg0->actorCtx.targetContext.unk38 == 0)))) {
                                                            phi_t0_2 = 0x13U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
block_136:
                                            phi_a3_5 = phi_a3_4;
                                            if (phi_v0 == 2) {
                                                phi_t0_2 = 0x25U;
                                            } else if (((phi_a3_4->stateFlags1 * 0x10) < 0) && (temp_t5 != 0) && (temp_t5->id == 0x224)) {
                                                phi_t0_2 = 0x11U;
                                            } else {
                                                phi_t0_2 = 7U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            phi_t0_3 = phi_t0_2;
            if (phi_t0_2 != 0x13) {
                phi_a3_5->unk_ACF = 0x14;
            } else {
                temp_v0_13 = phi_a3_5->unk_ACF;
                if (temp_v0_13 != 0) {
                    phi_a3_5->unk_ACF = temp_v0_13 - 1;
                }
            }
            arg1 = phi_a3_5;
            func_8011552C(arg0, phi_t0_3 & 0xFFFF);
            if ((func_801690CC(arg0) == 0) && (arg1->stateFlags2 & 0x200000) && ((arg1->stateFlags3 & 0x100) == 0)) {
                if (arg1->unk_730 != 0) {
                    func_80115764(arg0, 0x2B);
                } else {
                    func_80115764(arg0, 0x2A);
                }
                ActorCutscene_SetIntentToPlay(0x7C);
                return;
            }
            func_80115764(arg0, 0x2C);
            /* Duplicate return node #183. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #183. Try simplifying control flow for better match */
    }
}

s32 func_808430E0(Player *arg0) {
    if ((arg0->transformation == 3) && ((arg0->actor.bgCheckFlags & 1) != 0) && (func_8083784C() != 0)) {
        arg0->actor.bgCheckFlags &= 0xFFFE;
    }
    if ((arg0->actor.bgCheckFlags & 1) != 0) {
        return 0;
    }
    if ((arg0->stateFlags1 * 0x10) >= 0) {
        D_80862B08 = 0;
    }
    arg0->unk_B6C = 0;
    arg0->unk_B6E = 0;
    D_80862B28 = 0;
    return 1;
}

void func_80843178(GlobalContext *arg0, Player *arg1) {
    u8 spC7;
    CollisionPoly *spC0;
    f32 spBC;
    f32 spB4;
    u32 spB0;
    s32 spAC;
    f32 spA8;
    s32 spA4;
    s16 spA2;
    CollisionPoly *sp98;
    f32 sp94;
    f32 sp8C;
    CollisionPoly *sp84;
    f32 sp80;
    s32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    ? sp68;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp4C;
    void *sp3C;
    CollisionContext *sp38;
    PosRot *sp34;
    CollisionContext *temp_a0_2;
    CollisionPoly *temp_a0_3;
    CollisionPoly *temp_t2;
    PlayerAgeProperties *temp_v1;
    PlayerAgeProperties *temp_v1_7;
    PosRot *temp_v0_5;
    f32 *temp_t8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s16 temp_a0_4;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_6;
    u32 temp_v0_4;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_v0_6;
    s32 phi_v0;
    u32 phi_v1;
    u32 phi_v1_2;
    f32 phi_f2;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    u32 phi_v1_3;

    spC7 = 0;
    temp_v0 = arg1->unk_748 == (s32) func_8084D820;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = arg1->unk_397 == 4;
    }
    spAC = phi_v0;
    D_80862B1C = (s32) arg1->unk_D5E;
    temp_a0 = arg1->stateFlags1;
    temp_v1 = arg1->ageProperties;
    temp_f0 = temp_v1->unk_38;
    temp_f2 = temp_v1->unk_00;
    if ((temp_a0 & 0xA0000000) != 0) {
        if ((((temp_a0 & 0x80) == 0) && ((arg1->stateFlags2 & 0x4000) == 0) && ((temp_a0 << 0) < 0)) || (phi_v0 != 0)) {
            arg1->actor.bgCheckFlags &= 0xFFFE;
            phi_v1_3 = 0x38U;
        } else {
            temp_v0_2 = temp_a0 & 1;
            if ((temp_v0_2 != 0) && (arg0->roomCtx.currRoom.unk3 != 1) && ((arg1->unk_D68 - (s32) arg1->actor.world.pos.y) >= 0x64)) {
                phi_v1_3 = 0x39U;
            } else {
                phi_v1_3 = 0x3FU;
                if ((temp_v0_2 == 0) && ((temp_v0_3 = arg1->unk_748, (temp_v0_3 == func_8084E034)) || (temp_v0_3 == func_8084D820))) {
                    arg1->actor.bgCheckFlags &= 0xFDF7;
                    phi_v1_3 = 0x3CU;
                }
            }
        }
    } else {
        phi_v1_3 = 0x814U;
        if (arg1->unk_748 == func_808561B0) {

        } else if (((arg1->stateFlags3 & 0x81000) != 0) && (arg1->linearVelocity >= 8.0f)) {
            phi_v1_3 = 0x337U;
        } else {
            phi_v1_3 = 0x3FU;
        }
    }
    phi_v1 = phi_v1_3;
    if ((arg1->stateFlags3 & 1) != 0) {
        phi_v1 = phi_v1_3 & ~6;
    }
    if ((phi_v1 & 4) != 0) {
        arg1->stateFlags3 |= 0x10;
    }
    spB0 = phi_v1;
    spBC = temp_f0;
    spB4 = temp_f2;
    phi_v1_2 = phi_v1;
    if (func_801242B4(arg1, (Player *) func_8084D820) != 0) {
        phi_v1_2 = phi_v1 & ~0x18;
    }
    spB0 = phi_v1_2;
    Actor_UpdateBgCheckInfo(arg0, (Actor *) arg1, 26.800001f, temp_f0, temp_f2, phi_v1_2);
    arg1->unk_AC0 -= (arg1->actor.world.pos.y - arg1->actor.prevPos.y) / arg1->actor.scale.y;
    temp_f0_2 = arg1->unk_AC0;
    phi_f2 = -1000.0f;
    if (temp_f0_2 < -1000.0f) {

    } else if (temp_f0_2 > 1000.0f) {
        phi_f2 = 1000.0f;
    } else {
        phi_f2 = temp_f0_2;
    }
    arg1->unk_AC0 = phi_f2;
    if ((arg1->actor.bgCheckFlags & 0x10) != 0) {
        arg1->actor.velocity.y = 0.0f;
    }
    D_80862B18 = arg1->actor.world.pos.y - arg1->actor.floorHeight;
    D_80862B10 = 0;
    temp_t2 = arg1->actor.floorPoly;
    spC0 = temp_t2;
    if ((temp_t2 != 0) && ((phi_v1_2 & 4) != 0)) {
        temp_a0_2 = &arg0->colCtx;
        sp38 = temp_a0_2;
        arg1->unk_D5E = func_800C9B40(temp_a0_2, temp_t2, (s32) arg1->actor.floorBgId);
        if (arg1 == arg0->actorCtx.actorList[2].first) {
            func_801A3CF4(func_800C9CC4(temp_a0_2, spC0, (s32) arg1->actor.floorBgId));
            temp_a2 = arg1->actor.floorBgId;
            if (temp_a2 == 0x32) {
                func_800FAAB4((? *) arg0, func_800C9C9C(sp38, spC0, (s32) temp_a2) & 0xFF);
            } else {
                func_800CAEF4(sp38, (s32) temp_a2);
            }
        }
        temp_v0_4 = func_800C9E18(sp38, spC0, (s32) arg1->actor.floorBgId);
        D_80862B10 = temp_v0_4;
        if (temp_v0_4 != 0) {
            D_80862B14 = func_800C9D8C(sp38, spC0, (s32) arg1->actor.floorBgId);
            temp_v1_2 = D_80862B14;
            if (((temp_v1_2 == 0) && (arg1->actor.yDistToWater > 20.0f)) || ((temp_v1_2 != 0) && ((arg1->actor.bgCheckFlags & 1) != 0))) {
                D_80862B16 = func_800C9E40(sp38, spC0, (s32) arg1->actor.floorBgId) << 0xA;
            } else {
                D_80862B10 = 0;
            }
        }
    }
    arg1->actor.bgCheckFlags &= 0xFDFF;
    sp38 = &arg0->colCtx;
    if ((arg1->actor.bgCheckFlags & 8) != 0) {
        D_8085D35C = 17.800001f;
        D_8085D360 = arg1->ageProperties->unk_38 + 10.0f;
        if (func_80835D58(arg0, (Actor *) arg1, &D_8085D358, &spA8, &spA4, &D_80862B30) != 0) {
            arg1->actor.bgCheckFlags |= 0x200;
            if ((bitwise s32) spA8 != arg1->actor.wallPoly) {
                arg1->actor.wallPoly = (bitwise CollisionPoly *) spA8;
                arg1->actor.wallBgId = (u8) spA4;
                arg1->actor.wallYaw = Math_FAtan2F((f32) spA8->unk_C, (f32) spA8->unk_8);
            }
        }
        temp_v1_3 = arg1->actor.shape.rot.y - (arg1->actor.wallYaw + 0x8000);
        spA2 = temp_v1_3;
        D_80862B0C = func_800C9A4C(sp38, arg1->actor.wallPoly, (s32) arg1->actor.wallBgId);
        if ((s32) temp_v1_3 < 0) {
            D_80862B20 = -(s32) temp_v1_3;
        } else {
            D_80862B20 = (s32) temp_v1_3;
        }
        temp_v1_4 = arg1->currentYaw - (arg1->actor.wallYaw + 0x8000);
        if ((s32) temp_v1_4 < 0) {
            D_80862B24 = -(s32) temp_v1_4;
        } else {
            D_80862B24 = (s32) temp_v1_4;
        }
        temp_f0_3 = (f32) D_80862B24 * 0.00008f;
        if (((arg1->actor.bgCheckFlags & 1) == 0) || (temp_f0_3 >= 1.0f)) {
            arg1->unk_B50 = (f32) gGameInfo->data[45] / 100.0f;
        } else {
            temp_f2_2 = ((f32) gGameInfo->data[45] / 100.0f) * temp_f0_3;
            arg1->unk_B50 = temp_f2_2;
            if (temp_f2_2 < 0.1f) {
                arg1->unk_B50 = 0.1f;
            }
        }
        if (((arg1->actor.bgCheckFlags & 0x200) != 0) && (D_80862B20 < 0x3000)) {
            temp_a0_3 = arg1->actor.wallPoly;
            temp_v1_5 = temp_a0_3->normal.y;
            phi_v0_2 = (s32) temp_v1_5;
            if ((s32) temp_v1_5 < 0) {
                phi_v0_2 = -(s32) temp_v1_5;
            }
            if (phi_v0_2 < 0x258) {
                temp_v0_5 = &arg1->actor.world;
                sp34 = temp_v0_5;
                sp98 = temp_a0_3;
                temp_f12 = (f32) temp_a0_3->normal.x * 0.00003051851f;
                temp_f16 = (f32) temp_a0_3->normal.z * 0.00003051851f;
                sp94 = temp_f12;
                sp8C = temp_f16;
                temp_f0_4 = Math3D_NormalizedDistanceFromPlane(temp_f12, (f32) temp_v1_5 * 0.00003051851f, temp_f16, (f32) temp_a0_3->dist, (Vec3f *) temp_v0_5);
                temp_f2_3 = temp_f0_4 + 10.0f;
                arg1->unk_B58 = temp_f0_4;
                temp_t8 = &sp70;
                sp70 = arg1->actor.world.pos.x - (temp_f2_3 * temp_f12);
                sp78 = arg1->actor.world.pos.z - (temp_f2_3 * temp_f16);
                sp74 = arg1->actor.world.pos.y + arg1->ageProperties->unk_0C;
                temp_f0_5 = func_800C411C(sp38, &sp84, &sp7C, (Actor *) arg1, (Vec3f *) temp_t8);
                temp_f12_2 = arg1->actor.world.pos.y;
                temp_f14 = temp_f0_5;
                temp_f2_4 = temp_f0_5 - temp_f12_2;
                arg1->unk_B54 = temp_f2_4;
                if ((temp_f2_4 < 17.800001f) || (sp6C = temp_f14, (func_800C4F84(temp_f12_2, temp_f14, sp38, &sp68, sp34, (temp_f0_5 - temp_f12_2) + 20.0f, &sp80, &sp7C, arg1) != 0))) {
                    arg1->unk_B54 = 399.96002f;
                } else {
                    D_8085D35C = (temp_f14 + 5.0f) - arg1->actor.world.pos.y;
                    if (func_80835D58(arg0, (Actor *) arg1, &D_8085D358, &sp80, &sp7C, &D_80862B30) != 0) {
                        temp_v1_6 = arg1->actor.wallYaw - Math_FAtan2F((f32) sp80->unk_C, (f32) sp80->unk_8);
                        phi_v0_3 = temp_v1_6;
                        if (temp_v1_6 < 0) {
                            phi_v0_3 = -temp_v1_6;
                        }
                        if ((phi_v0_3 < 0x4000) && (func_800C9AB0(sp38, (bitwise CollisionPoly *) sp80, sp7C) == 0)) {
                            arg1->unk_B54 = 399.96002f;
                        } else {
                            goto block_78;
                        }
                    } else {
block_78:
                        if (func_800C9A7C(sp38, sp98, (s32) arg1->actor.wallBgId) == 0) {
                            temp_v1_7 = arg1->ageProperties;
                            temp_f0_6 = arg1->unk_B54;
                            if (temp_v1_7->unk_1C <= temp_f0_6) {
                                temp_a0_4 = sp84->normal.y;
                                phi_v0_4 = (s32) temp_a0_4;
                                if ((s32) temp_a0_4 < 0) {
                                    phi_v0_4 = -(s32) temp_a0_4;
                                }
                                if (phi_v0_4 >= 0x5DC1) {
                                    if ((temp_v1_7->unk_14 <= temp_f0_6) || (func_801242B4(arg1) != 0)) {
                                        spC7 = 4;
                                    } else if (arg1->ageProperties->unk_18 <= arg1->unk_B54) {
                                        spC7 = 3;
                                    } else {
                                        spC7 = 2;
                                    }
                                }
                            } else {
                                spC7 = 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        arg1->unk_B5D = 0;
        arg1->unk_B54 = 0.0f;
        arg1->unk_B50 = (f32) gGameInfo->data[45] / 100.0f;
    }
    if (arg1->unk_B5C == spC7) {
        if (arg1->linearVelocity != 0.0f) {
            temp_v0_6 = arg1->unk_B5D;
            if ((s32) temp_v0_6 < 0x64) {
                arg1->unk_B5D = temp_v0_6 + 1;
            }
        }
    } else {
        arg1->unk_B5C = spC7;
        arg1->unk_B5D = 0;
    }
    D_80862B08 = func_800C99D4(sp38, spC0, (s32) arg1->actor.floorBgId);
    if ((arg1->actor.bgCheckFlags & 1) != 0) {
        D_80862B40 = func_800C9C74(sp38, arg1->actor.floorPoly, (s32) arg1->actor.floorBgId);
        if (func_808430E0(arg1) == 0) {
            sp5C = (f32) spC0->normal.y * 0.00003051851f;
            temp_a2_2 = arg1->actor.floorBgId;
            if (temp_a2_2 != 0x32) {
                func_800CAEB0(sp38, (s32) temp_a2_2);
            } else if (((arg1->actor.bgCheckFlags & 2) == 0) && (arg1->actor.yDistToWater <= 24.0f) && (D_80862B40 != 1) && (D_80862B10 == 0) && (sp5C > 0.5f)) {
                sp3C = arg0 + 0x18000;
                if (ActorCutscene_GetCurrentIndex() != sp3C->unk_7AC) {
                    func_80841A50(arg0, (Actor *) arg1);
                }
            }
            sp60 = (f32) spC0->normal.x * 0.00003051851f;
            sp5C = 1.0f / sp5C;
            temp_f18 = (f32) spC0->normal.z * 0.00003051851f;
            sp58 = temp_f18;
            sp54 = Math_SinS(arg1->currentYaw);
            temp_f0_7 = Math_CosS(arg1->currentYaw);
            sp4C = temp_f0_7;
            arg1->unk_B6C = Math_FAtan2F(1.0f, (-(sp60 * sp54) - (temp_f18 * temp_f0_7)) * sp5C);
            arg1->unk_B6E = Math_FAtan2F(1.0f, (-(sp60 * sp4C) - (sp58 * sp54)) * sp5C);
            sp54 = Math_SinS(arg1->actor.shape.rot.y);
            D_80862B28 = Math_FAtan2F(1.0f, (-(sp60 * sp54) - (sp58 * Math_CosS(arg1->actor.shape.rot.y))) * sp5C);
            func_8083CF68(arg0, arg1);
        }
    } else {
        func_808430E0(arg1);
        D_80862B40 = 0;
    }
    if (spC0 != 0) {
        arg1->unk_D66 = arg1->unk_B72;
        if (spAC != 0) {
            arg1->unk_B72 = 2;
            return;
        }
        if (((arg1->actor.bgCheckFlags & 0x20) != 0) && (temp_f0_8 = arg1->actor.yDistToWater, (temp_f0_8 < 50.0f))) {
            if (temp_f0_8 < 20.0f) {
                if (D_80862B08 == 0xD) {
                    arg1->unk_B72 = 3;
                    return;
                }
                arg1->unk_B72 = 4;
                return;
            }
            if (D_80862B08 == 0xD) {
                arg1->unk_B72 = 0xD;
                return;
            }
            arg1->unk_B72 = 5;
            return;
        }
        if ((arg1->stateFlags2 & 0x200) != 0) {
            arg1->unk_B72 = 1;
            return;
        }
        if (((f32) spC0->normal.y * 0.00003051851f) > 0.5f) {
            arg1->unk_B72 = func_800C9BDC(sp38, spC0, (s32) arg1->actor.floorBgId);
        }
        /* Duplicate return node #125. Try simplifying control flow for better match */
    }
}

/*
Failed to decompile function func_80843EC0:

Label L80844238 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_808442D8(GlobalContext *arg0, Actor *arg1) {
    f32 sp3C;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s16 phi_v1;
    f32 phi_f12;

    if (arg1->unk_B0C == 0.0f) {
        func_80831990(arg0, arg1, 0xFF);
        return;
    }
    temp_v0 = arg1->unk_B28;
    phi_f12 = 1.0f;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg1->unk_B28 = (s16) (temp_v0 - 1);
        phi_v1 = arg1->unk_B28;
    }
    if (phi_v1 == 0) {
        func_80115A14(8, -1);
        arg1->unk_B28 = 1;
        arg1->unk_B0C = 0.0f;
        phi_f12 = 0.0f;
    } else if ((s32) arg1->unk_B28 >= 0xC9) {
        phi_f12 = (f32) (0xD2 - (s32) arg1->unk_B28) / 10.0f;
    } else if ((s32) arg1->unk_B28 < 0x14) {
        temp_f12 = (f32) (s32) arg1->unk_B28 / 20.0f;
        arg1->unk_B0C = temp_f12;
        phi_f12 = temp_f12;
    }
    if ((phi_f12 > 0.0f) && ((sp3C = phi_f12, func_800B0EB0(arg0, arg1 + 0xB9C, &D_8085D364, &D_8085D370, &D_8085D37C, &D_8085D380, (s16) (s32) (phi_f12 * 200.0f), (s16) 0, (s16) 8), (arg0->roomCtx.currRoom.enablePosLights != 0)) || (gGameInfo->data[573] != 0))) {
        sp3C = phi_f12;
        temp_f2 = (Rand_ZeroOne() * 30.0f) + 225.0f;
        Lights_PointSetColorAndRadius(arg1 + 0x508, (u32) temp_f2 & 0xFF, (u32) (temp_f2 * 0.7f) & 0xFF, 0U, (s16) (s32) (phi_f12 * 300.0f));
    }
}

void func_808445C4(GlobalContext *arg0, Actor *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    void *sp38;
    s32 sp34;
    s32 temp_a0;
    s32 temp_at;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_t7;
    u8 temp_t9;
    s32 phi_a0;

    temp_t7 = arg1->unk_B65 - 1;
    temp_v1 = temp_t7 & 0xFF;
    temp_t9 = arg1->unk_B66 + temp_v1;
    temp_v0 = temp_t9 & 0xFF;
    temp_at = temp_v0 < 0x15;
    arg1->unk_B65 = temp_t7;
    arg1->unk_B66 = temp_t9;
    if (temp_at == 0) {
        temp_a0 = temp_v1 * 2;
        arg1->unk_B66 = (u8) (temp_v0 - 0x14);
        phi_a0 = temp_a0;
        if (temp_a0 >= 0x29) {
            phi_a0 = 0x28;
        }
        sp34 = phi_a0;
        sp38 = ((s32) Rand_ZeroFloat(17.9f) * 0xC) + arg1 + 0xBEC;
        sp3C = (randPlusMinusPoint5Scaled(5.0f) + sp38->unk_0) - arg1->world.pos.x;
        sp40 = (randPlusMinusPoint5Scaled(5.0f) + sp38->unk_4) - arg1->world.pos.y;
        sp44 = (randPlusMinusPoint5Scaled(5.0f) + sp38->unk_8) - arg1->world.pos.z;
        EffectSsFhgFlash_SpawnShock(arg0, arg1, &sp3C, unksp36, 1);
        func_800B8F98(arg1, 0x68U);
    }
}

void func_808446F4(GlobalContext *arg1) {
    f32 temp_f0;
    f32 phi_f0;

    temp_f0 = 200000.0f - (arg1->colCtx.dyna.bgActors[5].prevTransform.pos.x * 5.0f);
    phi_f0 = temp_f0;
    if (temp_f0 < 0.0f) {
        phi_f0 = 0.0f;
    }
    arg1->unk_A9C = (f32) (arg1->unk_A9C + phi_f0);
    if (arg1->unk_A9C > 4000000.0f) {
        arg1->unk_A9C = 0.0f;
        func_8082DF48((Actor *)0x78, (Player *)0x14, (u8) 0xA, (u8) 0);
    }
}

void func_80844784(GlobalContext *arg0, Actor *arg1) {
    f32 sp6C;
    s16 sp6A;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp2C;
    Vec3f *sp24;
    void *sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f8_2;
    s16 temp_a3;
    s16 temp_v0;
    s32 temp_f8;
    s32 phi_v1;
    s16 phi_a3;
    f32 phi_f0;
    s16 phi_v0;
    s16 phi_v1_2;

    if (((arg1->bgCheckFlags & 1) != 0) && (D_80862B08 == 5) && ((s32) arg1->unk_145 < 5)) {
        temp_a3 = arg1->unk_AD4;
        temp_v0 = arg1->world.rot.y - temp_a3;
        phi_v1 = (s32) temp_v0;
        phi_a3 = temp_a3;
        phi_f0 = arg1->unk_AD0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((phi_v1 >= 0x6001) && (arg1->speedXZ != 0.0f)) {
            phi_a3 = (s16) (temp_a3 + 0x8000);
            phi_f0 = 0.0f;
        }
        sp6A = phi_a3;
        sp6C = phi_f0;
        if ((Math_StepToF(arg1 + 0x70, phi_f0, 0.35f) != 0) && (phi_f0 == 0.0f)) {
            arg1->world.rot.y = arg1->unk_AD4;
        }
        temp_f2 = arg1->unk_AD0;
        if (temp_f2 != 0.0f) {
            temp_f8 = (s32) ((fabsf(temp_f2) * 700.0f) - (fabsf(arg1->speedXZ) * 100.0f));
            if (temp_f8 < 0) {
                phi_v0 = 0;
            } else {
                phi_v1_2 = (s16) temp_f8;
                if (temp_f8 >= 0x547) {
                    phi_v1_2 = 0x546;
                }
                phi_v0 = phi_v1_2;
            }
            Math_ScaledStepToS(arg1 + 0x32, phi_a3, phi_v0);
        }
        if ((arg1->unk_AD0 == 0.0f) && (arg1->speedXZ != 0.0f)) {
            func_8019F780(&arg1->projectedPos, func_8082E078(arg1, 0xD0) & 0xFFFF, arg1->speedXZ);
        }
    } else {
        arg1->speedXZ = arg1->unk_AD0;
        arg1->world.rot.y = arg1->unk_AD4;
    }
    Actor_SetVelocityYRotationAndGravity(arg1);
    D_80862B3C = 0.0f;
    if ((gSaveContext.health != 0) && ((arg1->unk_B80 != 0.0f) || (arg1->unk_B2C != 0.0f) || (arg0->envCtx.windSpeed >= 50.0f)) && (func_801233E4(arg0) == 0) && ((arg1->unk_A6C & 0x206004) == 0) && ((arg1->unk_A74 & 0x100) == 0) && (arg1->unk_748 != func_8084D4EC) && (arg1->id == 0)) {
        arg1->velocity.x += arg1->unk_B80 * Math_SinS(arg1->unk_B84);
        temp_f2_2 = 10.0f - arg1->velocity.y;
        arg1->velocity.z += arg1->unk_B80 * Math_CosS(arg1->unk_B84);
        if (temp_f2_2 > 0.0f) {
            temp_f0 = *(&D_8085D3E0 + (arg1->unk_14B * 4));
            sp54 = arg1->unk_B2C * temp_f0;
            sp5C = temp_f2_2;
            sp20 = arg0 + 0x10000;
            sp58 = temp_f0;
            temp_f4 = Math_SinS(arg1->unk_B30) * sp54;
            sp50 = temp_f4;
            sp4C = Math_CosS(arg1->unk_B30) * sp54;
            sp48 = Math_SinS(arg1->unk_B32) * sp4C;
            sp44 = Math_CosS(arg1->unk_B32) * sp4C;
            if ((temp_f4 > 0.0f) && (arg1->unk_14B == 3) && ((arg1->bgCheckFlags & 1) == 0)) {
                if (func_80831494(arg0, arg1, func_80856918, 1) != 0) {
                    arg1->unk_A74 = (s32) (arg1->unk_A74 | 0x1002000);
                    func_8082E1F0(arg1, 0x1850);
                    func_8019FD90(4, 2);
                }
                arg1->unk_AE8 = 0x270F;
                Math_Vec3f_Copy(arg1 + 0xAF0, (Vec3f *) &arg1->world);
            }
            temp_f18 = sp20->unk_70B8;
            if (temp_f18 >= 50.0f) {
                temp_f12 = (f32) sp20->unk_70B0;
                temp_f14 = (f32) sp20->unk_70B2;
                temp_f16 = (f32) sp20->unk_70B4;
                temp_f0_2 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16));
                if (temp_f0_2 != 0.0f) {
                    temp_f2_3 = ((temp_f18 - 50.0f) * 0.1f * sp58) / temp_f0_2;
                    sp48 -= temp_f12 * temp_f2_3;
                    sp50 -= temp_f14 * temp_f2_3;
                    sp44 -= temp_f16 * temp_f2_3;
                }
            }
            if (sp5C < sp50) {
                temp_f0_3 = sp5C / sp50;
                sp48 *= temp_f0_3;
                sp50 *= temp_f0_3;
                sp44 *= temp_f0_3;
            }
            if ((arg1->bgCheckFlags & 1) != 0) {
                sp24 = &arg1->projectedPos;
                sp2C = Math_CosS(arg1->unk_AD4);
                temp_f8_2 = (Math_SinS(arg1->unk_AD4) * sp48) + (sp44 * sp2C);
                D_80862B3C = temp_f8_2;
                if (fabsf(temp_f8_2) > 4.0f) {
                    func_8083FBC4((bitwise GlobalContext *) sp2C, arg0, arg1);
                }
                func_8019F780(sp24, func_8082E078(arg1, 0xD0) & 0xFFFF, fabsf(D_80862B3C));
            }
            arg1->velocity.x += sp48;
            arg1->velocity.z += sp44;
            arg1->velocity.y += sp50;
        }
    }
    Actor_ApplyMovement(arg1);
}

void func_80844D80(GlobalContext *arg0, Player *arg1) {
    ? spAC;
    ? spA0;
    ? sp94;
    ? sp88;
    ? sp7C;
    Vec3f *temp_s7;
    s32 temp_s1;
    s32 phi_s1;

    temp_s7 = arg1 + 0xBA8;
    Math_Vec3f_Diff(arg1 + 0xB9C, temp_s7, (Vec3f *) &sp7C);
    Math_Vec3f_SumScaled(temp_s7, (Vec3f *) &sp7C, 0.3f, (Vec3f *) &spA0);
    phi_s1 = 0;
    do {
        Math_Vec3f_SumScaled(temp_s7, (Vec3f *) &sp7C, Rand_ZeroOne(), (Vec3f *) &spAC);
        Math_Vec3f_AddRand((Vec3f *) &spAC, 15.0f, (Vec3f *) &spAC);
        Math_Vec3f_DistXYZAndStoreNormDiff((Vec3f *) &spA0, (Vec3f *) &spAC, 1.7f, (Vec3f *) &sp94);
        Math_Vec3f_ScaleAndStore((Vec3f *) &sp94, 0.01f, (Vec3f *) &sp88);
        EffectSsKiraKira_SpawnDispersed(arg0, (Vec3f *) &spAC, (Vec3f *) &sp94, (Vec3f *) &sp88, &D_8085D3F4, &D_8085D3F8, (s16) Rand_S16Offset(-0x14, -0x78), 0xF);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 2);
}

void func_80844EF8(Player *arg0, GlobalContext *arg1, Input *arg2) {
    s32 sp58;
    f32 sp50;
    f32 sp44;
    Vec3f *sp38;
    CollisionCheckContext *sp34;
    void *sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *sp28;
    Actor *temp_v0_13;
    Actor *temp_v0_16;
    ColliderCylinder *temp_a1_3;
    ColliderCylinder *temp_a1_4;
    ColliderCylinder *temp_a1_5;
    CollisionCheckContext *temp_a1_6;
    CsCmdActorAction *temp_v0_14;
    Vec3f *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 temp_v0_19;
    s16 temp_v0_9;
    s32 temp_v0_15;
    s32 temp_v0_17;
    s32 temp_v0_21;
    s32 temp_v0_22;
    s32 temp_v1_7;
    s8 temp_v0;
    s8 temp_v0_10;
    s8 temp_v0_11;
    s8 temp_v0_4;
    s8 temp_v0_8;
    s8 temp_v1_2;
    u16 temp_v0_6;
    u16 temp_v0_7;
    u16 temp_v1_8;
    u32 temp_a0;
    u32 temp_t7;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u8 temp_a1_2;
    u8 temp_v0_12;
    u8 temp_v0_18;
    u8 temp_v0_20;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v1;
    u8 temp_v1_5;
    u8 temp_v1_6;
    f32 phi_f0;
    s32 phi_v0;
    s32 phi_a2;
    f32 phi_f2;
    f32 phi_f0_2;
    f32 phi_f0_3;
    LinkAnimationHeader *phi_a2_2;
    GlobalContext *phi_a3;
    s32 phi_v1;
    f32 phi_f0_4;
    f32 phi_f2_2;
    f32 phi_f0_5;
    LinkAnimationHeader *phi_v0_2;

    D_80862B44 = arg2;
    temp_v0 = arg0->unk_D6A;
    if ((s32) temp_v0 < 0) {
        arg0->unk_D6A = temp_v0 + 1;
        if (arg0->unk_D6A == 0) {
            arg0->unk_D6A = 1;
            play_sound(0x5806U);
        }
    }
    temp_a1 = arg0 + 8;
    sp38 = temp_a1;
    Math_Vec3f_Copy(arg0 + 0x108, temp_a1);
    sp44 = fabsf(arg0->linearVelocity);
    temp_f2 = (fabsf(Math_SinS(arg0->unk_B6C) * 800.0f) + 100.0f) * sp44;
    if (temp_f2 < 300.0f) {
        phi_f0 = 300.0f;
    } else {
        phi_f0 = temp_f2;
    }
    Math_StepToF(arg0 + 0xAC0, 0.0f, phi_f0);
    temp_v1 = arg0->unk_D57;
    if (temp_v1 != 0) {
        arg0->unk_D57 = temp_v1 - 1;
    }
    temp_v0_2 = arg0->unk_B5E;
    if (temp_v0_2 != 0) {
        arg0->unk_B5E = temp_v0_2 - 1;
    }
    temp_v0_3 = arg0->unk_D6B;
    if (temp_v0_3 != 0) {
        arg0->unk_D6B = temp_v0_3 - 1;
    }
    temp_v0_4 = arg0->invincibilityTimer;
    if ((s32) temp_v0_4 < 0) {
        arg0->invincibilityTimer = temp_v0_4 + 1;
    } else if ((s32) temp_v0_4 > 0) {
        arg0->invincibilityTimer = temp_v0_4 - 1;
    }
    temp_v0_5 = arg0->unk_B64;
    if (temp_v0_5 != 0) {
        arg0->unk_B64 = temp_v0_5 - 1;
    }
    temp_v0_6 = arg0->unk_B60;
    if (temp_v0_6 != 0) {
        arg0->unk_B60 = temp_v0_6 - 1;
    }
    temp_v0_7 = gSaveContext.unk_1016;
    if (temp_v0_7 != 0) {
        gSaveContext.unk_1016 = temp_v0_7 - 1;
    }
    func_80122C20(arg1, arg0 + 0x3D0);
    if ((arg0->transformation == 0) && (func_8082FBE8(arg0) != 0)) {
        func_80844D80(arg1, arg0);
    }
    if (arg0->transformation == 2) {
        phi_v0 = 0;
        if ((arg0->stateFlags1 * 0x10) < 0) {
            phi_v0 = 1;
        }
        Math_StepToF(&arg0->unk_B08[2], (f32) phi_v0, *(&D_8085D3FC + (phi_v0 * 4)));
    }
    func_80832888(arg0, arg1);
    sp30 = arg1 + 0x18000;
    if (arg1->roomCtx.currRoom.enablePosLights != 0) {
        Lights_PointSetColorAndRadius(&arg0->unk_508, 0xFFU, 0xFFU, 0xFFU, (s16) 0x3C);
    } else {
        arg0->unk_508.params.point.radius = -1;
    }
    temp_v0_8 = arg0->itemActionParam;
    if ((temp_v0_8 == 7) && (arg0->unk_B28 != 0)) {
        func_808442D8(arg1, (Actor *) arg0);
    } else if (temp_v0_8 == 2) {
        temp_v0_9 = arg0->unk_B28;
        if ((s32) temp_v0_9 < 0) {
            arg0->unk_B28 = temp_v0_9 + 1;
        }
    }
    if (arg0->unk_B65 != 0) {
        func_808445C4(arg1, (Actor *) arg0);
    }
    if (arg0->isBurning != 0) {
        func_808341F4(arg1, (Actor *) arg0);
    }
    if ((arg0->stateFlags2 & 0x8000) != 0) {
        if ((arg0->actor.bgCheckFlags & 1) == 0) {
            func_8082DABC((Actor *) arg0);
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) arg0);
        }
        func_80843178(arg1, arg0);
        sp28 = &arg0->cylinder;
        sp2C = &arg0->shieldCylinder;
    } else {
        temp_v0_10 = arg0->prevBoots;
        temp_v1_2 = arg0->currentBoots;
        sp2C = (ColliderCylinder *) &arg0->unk_508;
        if (temp_v0_10 != temp_v1_2) {
            if (temp_v1_2 == 5) {
                if ((arg0->stateFlags1 * 0x10) < 0) {
                    func_8082DC64(arg1, arg0);
                    if (arg0->ageProperties->unk_2C < arg0->actor.yDistToWater) {
                        arg0->stateFlags2 |= 0x400;
                    }
                }
            } else if (((arg0->stateFlags1 * 0x10) < 0) && ((temp_v0_10 == 5) || ((arg0->actor.bgCheckFlags & 1) != 0))) {
                func_8083B930(arg1, arg0);
                arg0->stateFlags2 &= -0x401;
                if (arg0->unk_748 == func_808508C8) {
                    arg0->unk_AE8 = 0x14;
                }
            }
            arg0->prevBoots = arg0->currentBoots;
        }
        if ((arg0->actor.parent == 0) && (arg0->stateFlags1 & 0x800000)) {
            arg0->actor.parent = arg0->unk_390;
            func_80837BD0(arg1, (Actor *) arg0);
            arg0->unk_AE8 = -1;
            func_8082DB18(arg1, arg0, (LinkAnimationHeader *) &D_0400E088);
            func_8082E920(arg1, (Actor *) arg0, 0x9B);
        }
        temp_v0_11 = arg0->unk_ADC;
        if (temp_v0_11 == 0) {
            arg0->unk_ADD = 0;
        } else if ((s32) temp_v0_11 < 0) {
            arg0->unk_ADC = temp_v0_11 + 1;
        } else {
            arg0->unk_ADC = temp_v0_11 - 1;
        }
        if ((arg0->stateFlags3 & 0x2000) == 0) {
            Math_ScaledStepToS(&arg0->unk_AAA, 0, 0x190);
        }
        temp_v0_12 = arg0->transformation;
        if (((s32) temp_v0_12 > 0) && ((s32) temp_v0_12 < 4)) {
            func_800BBB74(&arg0->eyeTexId, 0x14, 0x50, 3);
        } else {
            func_800BBAC0(&arg0->eyeTexId, 0x14, 0x50, 6);
        }
        if ((sp30->unk_840 & 0x20) != 0) {
            phi_a2 = 0;
        } else {
            phi_a2 = 3;
        }
        arg0->actor.shape.face = phi_a2 + arg0->eyeTexId;
        if (arg0->currentMask == 4) {
            func_80124420(arg0);
        }
        if (func_800B7118((Actor *) arg0) != 0) {
            func_808484F0(arg0);
        }
        if ((sp30->unk_844 == 0) && ((arg0->skelAnime.flags & 0x80) == 0)) {
            if (((arg0->stateFlags1 & 2) == 0) && (arg0->actor.parent == 0)) {
                func_80844784(arg1, (Actor *) arg0);
            }
            func_80843178(arg1, arg0);
        } else {
            D_80862B08 = 0;
            arg0->unk_D5E = 0;
            if (arg0->stateFlags1 & 0x800000) {
                temp_v0_13 = arg0->unk_390;
                arg0->actor.floorPoly = temp_v0_13->floorPoly;
                arg0->actor.floorBgId = temp_v0_13->floorBgId;
            }
            D_80862B10 = 0;
            arg0->unk_B80 = 0.0f;
        }
        func_8083562C(arg1, (Actor *) arg0, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId);
        temp_v1_3 = D_80862B10;
        temp_t7 = temp_v1_3 - 1;
        if (temp_v1_3 != 0) {
            D_80862B10 = temp_t7;
            if (D_80862B14 == 0) {
                temp_f2_2 = *(&D_8085D404 + (temp_t7 * 4));
                phi_f2 = temp_f2_2;
                if ((arg0->stateFlags1 * 0x10) >= 0) {
                    phi_f2 = temp_f2_2 * 0.25f;
                }
            } else {
                phi_f2 = *(&D_8085D410 + (D_80862B10 * 4));
            }
            sp50 = phi_f2;
            Math_StepToF(&arg0->unk_B80, phi_f2, phi_f2 * 0.1f);
            if ((arg0->stateFlags1 * 0x10) < 0) {
                phi_f0_2 = 400.0f;
            } else {
                phi_f0_2 = 800.0f;
            }
            Math_ScaledStepToS(&arg0->unk_B84, D_80862B16, (s16) (s32) (phi_f0_2 * phi_f2));
        } else if (arg0->unk_B80 != 0.0f) {
            if ((arg0->stateFlags1 * 0x10) < 0) {
                phi_f0_3 = 0.5f;
            } else {
                phi_f0_3 = 2.0f;
            }
            Math_StepToF(&arg0->unk_B80, 0.0f, phi_f0_3);
        }
        if (((arg0->stateFlags1 & 0x20000080) == 0) && ((arg0->stateFlags3 & 0x80) == 0) && (arg0->unk_748 != func_80854430)) {
            func_8083BB4C(arg1, (Actor *) arg0);
            if (func_801690CC(arg1) == 0) {
                if ((arg0->actor.id == 0) && ((arg0->stateFlags1 << 0) >= 0) && (gSaveContext.health == 0) && (func_808323C0((Actor *) arg0, sp30->unk_7A8) != 0)) {
                    if (arg0->stateFlags3 & 0x1000000) {
                        func_808355D8(arg1, (Actor *) arg0, (LinkAnimationHeader *) &D_0400E2D8);
                    } else {
                        temp_v1_4 = arg0->stateFlags1;
                        if ((temp_v1_4 & 0x206004) != 0) {
                            func_8082DD2C(arg1, arg0, &D_0400E2D8);
                            func_80833AA0((Actor *) arg0, arg1);
                        } else if (((arg0->actor.bgCheckFlags & 1) != 0) || ((temp_v1_4 * 0x10) < 0)) {
                            if (func_801242B4(arg0, arg0, (Player *) &D_0400E2D8) != 0) {
                                phi_a2_2 = (LinkAnimationHeader *) &D_0400DFE8;
                            } else {
                                phi_v0_2 = (LinkAnimationHeader *) &D_0400D698;
                                if (arg0->unk_B65 != 0) {
                                    phi_v0_2 = &D_0400DC28;
                                }
                                phi_a2_2 = phi_v0_2;
                            }
                            func_80831F34(arg1, arg0, phi_a2_2);
                        }
                    }
                } else {
                    if ((arg0->actor.parent == 0) && ((func_8082DA90(arg1) != 0) || (arg0->unk_D6B != 0) || (func_80834600(arg0, arg1) == 0))) {
                        func_8083827C((Actor *) arg0, arg1);
                    } else {
                        arg0->unk_B68 = (s16) (s32) arg0->actor.world.pos.y;
                    }
                    func_808446F4(arg1, arg0);
                }
            }
        } else if (((arg0->actor.bgCheckFlags & 1) == 0) && (arg0->unk_748 == func_8084D820) && (arg0->unk_397 == 4)) {
            arg0->actor.world.pos.y = arg0->actor.prevPos.y;
        }
        temp_a1_2 = arg1->csCtx.state;
        if (temp_a1_2 != 0) {
            temp_v1_5 = arg0->unk_394;
            if ((temp_v1_5 != 5) && ((arg0->stateFlags1 << 8) >= 0)) {
                temp_a0 = arg0->stateFlags2;
                if (((temp_a0 & 0x80) == 0) && (arg0->actor.id == 0)) {
                    temp_v0_14 = arg1->csCtx.linkAction;
                    if ((temp_v0_14 != 0) && (*(&D_8085D384 + temp_v0_14->unk0) != 0)) {
                        func_800B7298(arg1, NULL, 5U);
                        func_8082DABC((Actor *) arg0);
                        goto block_144;
                    }
                    if ((temp_v1_5 == 0) && ((temp_a0 & 0x8000400) == 0) && (temp_a1_2 != 3)) {
                        func_800B7298(arg1, NULL, 0x14U);
                        func_8082DABC((Actor *) arg0);
block_144:
                    }
                }
            }
        }
        temp_v1_6 = arg0->unk_394;
        phi_a3 = arg1;
        if (temp_v1_6 != 0) {
            temp_v0_15 = arg0->unk_748;
            if ((temp_v1_6 != 6) || ((arg0->stateFlags1 & 0x4206004) == 0)) {
                if (temp_v0_15 != func_8085B08C) {
                    arg0->unk_AA5 = 4;
                    if (temp_v1_6 == 5) {
                        func_808387A0(arg1, (Actor *) arg0);
                        func_8082DAD4((Actor *) arg0);
                        phi_a3 = arg1;
                    }
                }
            } else if (temp_v0_15 != func_8085B08C) {
                func_8085AACC(arg1, arg0, 0, arg1);
                phi_a3 = arg1;
            }
        } else {
            arg0->unk_395 = 0;
        }
        func_8083BF54(phi_a3, (Actor *) arg0);
        Lights_PointSetPosition((LightInfo *) sp2C, (s16) (s32) arg0->actor.world.pos.x, (s16) (s32) (arg0->actor.world.pos.y + 40.0f), (s16) (s32) arg0->actor.world.pos.z);
        temp_v0_16 = arg0->unk_730;
        if (((temp_v0_16 == 0) || (arg0->targetActor == temp_v0_16) || (temp_v0_16->hintId == 0xFF)) && (arg0->tatlTextId == 0)) {
            arg0->stateFlags2 &= 0xFFDFFFFD;
        }
        arg0->stateFlags1 &= 0xFFBFEFEF;
        arg0->stateFlags2 &= 0xFBBEAC92;
        arg0->stateFlags3 &= 0xE1EFE6AF;
        func_808425B4(arg0);
        func_8082EB38(arg1, arg0);
        if ((arg0->stateFlags1 * 0x10) < 0) {
            D_8085C3E4 = 0.5f;
        } else {
            D_8085C3E4 = 1.0f;
        }
        D_8085C3E8 = 1.0f / D_8085C3E4;
        D_80862B4C = 0;
        D_80862B48 = 0;
        temp_v0_17 = func_801690CC(arg1);
        temp_v1_7 = temp_v0_17;
        D_80862B2C = (s32) arg0->currentMask;
        phi_v1 = temp_v1_7;
        if ((arg0->stateFlags3 & 4) == 0) {
            sp58 = temp_v0_17;
            ((? (*)(Player *, GlobalContext *)) arg0->unk_748)(arg0, arg1);
            phi_v1 = sp58;
        }
        if (phi_v1 == 0) {
            func_808426F0(arg1, arg0);
        }
        func_80843EC0(arg1, arg0);
        temp_v0_18 = arg0->skelAnime.flags;
        if ((temp_v0_18 & 8) != 0) {
            if ((temp_v0_18 & 4) != 0) {
                phi_f0_4 = 1.0f;
            } else {
                phi_f0_4 = arg0->ageProperties->unk_08;
            }
            SkelAnime_LoadAnimationType5(arg1, (Actor *) arg0, &arg0->skelAnime, phi_f0_4);
        }
        func_80832578(arg0, arg1);
        if ((arg0->actor.flags & 0x100) != 0) {
            arg0->targetActorDistance = 0.0f;
        } else {
            arg0->targetActor = NULL;
            arg0->unk_A87 = 0;
            arg0->targetActorDistance = 3.4028235e38f;
        }
        if (((arg0->actor.flags * 4) >= 0) && (arg0->unk_AA5 != 5)) {
            arg0->unk_A90 = NULL;
            arg0->unk_A94 = 3.4028235e38f;
        }
        if ((arg0->stateFlags1 & 0x800) == 0) {
            arg0->unk_388 = NULL;
            arg0->unk_386 = 0x6000;
        }
        if (arg0->actor.parent == 0) {
            arg0->unk_390 = NULL;
        }
        arg0->tatlTextId = 0;
        arg0->unk_B2B = -1;
        arg0->unk_AA0 = 3.4028235e38f;
        arg0->doorType = 0;
        arg0->unk_B75 = 0;
        arg0->unk_A78 = NULL;
        Math_StepToF(&arg0->windSpeed, 0.0f, 0.5f);
        if ((arg0->unk_B62 != 0) || ((gSaveContext.unk_3F28 == 0) && (gSaveContext.magic != 0) && ((arg0->stateFlags1 & 0x10) != 0))) {
            func_8082F1AC(arg1, (Actor *) arg0);
        }
        temp_f0 = arg0->actor.world.pos.y - arg0->actor.prevPos.y;
        temp_f2_3 = ((arg0->bodyPartsPos[3].y + arg0->bodyPartsPos[6].y) * 0.5f) + temp_f0;
        temp_f0_2 = temp_f0 + (arg0->bodyPartsPos[7].y + 10.0f);
        phi_f2_2 = temp_f2_3;
        phi_f0_5 = temp_f0_2;
        if (arg0->cylinder.info.toucher.dmgFlags == 0x80000U) {
            arg0->cylinder.dim.height = 0x50;
            phi_f2_2 = ((temp_f0_2 + temp_f2_3) * 0.5f) - 40.0f;
        } else {
            arg0->cylinder.dim.height = (s16) (s32) (temp_f0_2 - temp_f2_3);
            temp_v0_19 = arg0->cylinder.dim.height;
            if ((s32) temp_v0_19 < 0) {
                arg0->cylinder.dim.height = (s16) -(s32) temp_v0_19;
                phi_f2_2 = temp_f0_2;
                phi_f0_5 = temp_f2_3;
            }
        }
        temp_f12 = arg0->actor.world.pos.y;
        arg0->cylinder.dim.yShift = (s16) (s32) (phi_f2_2 - temp_f12);
        if (arg0->unk_B62 != 0) {
            arg0->shieldCylinder.base.acFlags = 0;
            arg0->shieldCylinder.info.toucher.dmgFlags = 0x80000;
            arg0->shieldCylinder.info.toucherFlags = 1;
            arg0->shieldCylinder.info.bumperFlags = 0;
            arg0->shieldCylinder.dim.height = 0x50;
            arg0->shieldCylinder.dim.radius = 0x32;
            temp_a1_3 = &arg0->shieldCylinder;
            arg0->shieldCylinder.dim.yShift = (s16) (s32) ((((phi_f0_5 + phi_f2_2) * 0.5f) - 40.0f) - temp_f12);
            sp2C = temp_a1_3;
            Collider_UpdateCylinder((Actor *) arg0, temp_a1_3);
            CollisionCheck_SetAT(arg1, &arg1->colChkCtx, (Collider *) sp2C);
        } else if (arg0->stateFlags1 & 0x400000) {
            temp_v0_20 = arg0->transformation;
            if ((temp_v0_20 == 1) || (temp_v0_20 == 3)) {
                arg0->shieldCylinder.base.acFlags = 0x15;
                arg0->shieldCylinder.info.toucher.dmgFlags = 0x100000;
                arg0->shieldCylinder.info.toucherFlags = 0;
                arg0->shieldCylinder.info.bumperFlags = 1;
                if (temp_v0_20 == 1) {
                    arg0->shieldCylinder.dim.height = 0x23;
                } else {
                    arg0->shieldCylinder.dim.height = 0x1E;
                }
                temp_a1_4 = &arg0->shieldCylinder;
                if (arg0->transformation == 1) {
                    arg0->shieldCylinder.dim.radius = 0x1E;
                } else {
                    arg0->shieldCylinder.dim.radius = 0x14;
                }
                arg0->shieldCylinder.dim.yShift = 0;
                sp2C = temp_a1_4;
                Collider_UpdateCylinder((Actor *) arg0, temp_a1_4);
                CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) sp2C);
                arg0->cylinder.dim.yShift = 0;
                arg0->cylinder.dim.height = arg0->shieldCylinder.dim.height;
            } else {
                arg0->cylinder.dim.height = (s16) (s32) ((f32) arg0->cylinder.dim.height * 0.8f);
            }
        }
        temp_a1_5 = &arg0->cylinder;
        sp2C = &arg0->shieldCylinder;
        sp28 = temp_a1_5;
        Collider_UpdateCylinder((Actor *) arg0, temp_a1_5);
        if ((arg0->stateFlags2 & 0x4000) == 0) {
            if (((arg0->stateFlags1 & 0x806084) == 0) && ((arg0->stateFlags3 * 8) >= 0)) {
                temp_v0_21 = arg0->unk_748;
                if ((temp_v0_21 != func_808561B0) && (temp_v0_21 != func_80853D68) && (arg0->actor.draw != 0)) {
                    if ((arg0->actor.id != 0) && (arg0->unk_394 == 0x6E)) {
                        arg0->cylinder.dim.radius = 8;
                    }
                    CollisionCheck_SetOC(arg1, &arg1->colChkCtx, (Collider *) sp28);
                }
            }
            if (((arg0->stateFlags1 & 0x4000080) == 0) && ((s32) arg0->invincibilityTimer <= 0)) {
                temp_v0_22 = arg0->unk_748;
                if ((temp_v0_22 != func_808561B0) && ((temp_v0_22 != func_80857BE8) || (arg0->unk_AE7 != 1))) {
                    temp_a1_6 = &arg1->colChkCtx;
                    if (arg0->cylinder.base.atFlags != 0) {
                        sp34 = temp_a1_6;
                        CollisionCheck_SetAT(arg1, temp_a1_6, (Collider *) sp28);
                    }
                    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) sp28);
                }
            }
        }
        func_801358D4(arg1);
    }
    func_801229FC(arg0);
    Math_Vec3f_Copy(sp38, (Vec3f *) &arg0->actor.world);
    if (((arg0->stateFlags1 & 0x30000080) != 0) || (arg0 != arg1->actorCtx.actorList[2].first)) {
        arg0->actor.colChkInfo.mass = 0xFF;
    } else {
        arg0->actor.colChkInfo.mass = *(&D_8085D174 + arg0->transformation);
    }
    arg0->stateFlags3 &= -0x405;
    Collider_ResetCylinderAC(arg1, (Collider *) sp28);
    Collider_ResetCylinderAC(arg1, (Collider *) sp2C);
    Collider_ResetCylinderAT(arg1, (Collider *) sp2C);
    Collider_ResetQuadAT(arg1, (Collider *) arg0->swordQuads);
    Collider_ResetQuadAT(arg1, (Collider *) &arg0->swordQuads[1]);
    Collider_ResetQuadAC(arg1, (Collider *) &arg0->shieldQuad);
    temp_v1_8 = arg0->actor.bgCheckFlags;
    if (((temp_v1_8 & 1) == 0) || ((temp_v1_8 & 2) != 0) || (arg0->actor.floorBgId != 0x32)) {
        arg0->unk_AC0 = 0.0f;
    }
    arg0->actor.shape.yOffset = arg0->unk_ABC + arg0->unk_AC0;
}

void func_808460B8(Actor *arg0, GlobalContext *arg1) {
    u16 sp50;
    u16 sp44;
    ? *sp38;
    Actor *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    arg0->unk_A74 = (s32) (arg0->unk_A74 & ~0x10);
    if ((s32) (s16) gSaveContext.dogParams < 0) {
        if (Object_GetIndex(arg1 + 0x17D88, 0x132) < 0) {
            gSaveContext.dogParams = 0;
        } else {
            gSaveContext.dogParams = (s16) gSaveContext.dogParams & 0x7FFF;
            func_80835BC8(arg0, arg0 + 0x24, &D_8085D41C, &D_80862AF0);
            temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0xE2, D_80862AF0.x, D_80862AF4, D_80862AF8, (s16) 0, (s16) (s32) arg0->shape.rot.y, (s16) 0, (s16) ((s16) gSaveContext.dogParams | 0x8000));
            if (temp_v0 != 0) {
                temp_v0->room = -1;
            }
        }
    }
    temp_v0_2 = arg0->unk_388;
    if ((temp_v0_2 != 0) && (temp_v0_2->unk_138 == 0)) {
        arg0->unk_388 = NULL;
    }
    temp_v0_3 = arg0->unk_34C;
    if ((temp_v0_3 != 0) && (temp_v0_3->unk_138 == 0)) {
        func_8082DCA0(arg1, (Player *) arg0);
    }
    if ((arg1->actorCtx.unk268 != 0) && (arg0 == arg1->actorCtx.actorList[2].first)) {
        sp44.unk_0 = (s32) (unaligned s32) arg1->actorCtx.unk_26C;
        sp44.unk_4 = (s32) (unaligned s32) arg1->actorCtx.unk_270;
        sp44.unk_8 = (s32) (unaligned s32) arg1->actorCtx.unk_274;
        sp44.unk_C = (s32) (unaligned s32) arg1->unk_1F18;
        sp44.unk_10 = (s32) (unaligned s32) arg1->actorCtx.unk_27C;
        sp44.unk_14 = (s32) (unaligned s32) arg1->actorCtx.unk_280;
    } else if ((arg0->unk_394 == 5) || ((arg0->unk_A6C & 0x20000020) != 0) || (arg0 != arg1->actorCtx.actorList[2].first) || (func_8082DA90(arg1) != 0) || (gSaveContext.health == 0)) {
        bzero((void *) &sp44, 0x18);
        arg0->unk_B68 = (s16) (s32) arg0->world.pos.y;
    } else {
        sp44.unk_0 = (s32) (unaligned s32) arg1->unk_14;
        sp44.unk_4 = (s32) (unaligned s32) arg1->state.input[0].cur.errno;
        sp44.unk_8 = (s32) (unaligned s32) arg1->state.input[0].prev.stick_x;
        sp44.unk_C = (s32) (unaligned s32) arg1->unk_20;
        sp44.unk_10 = (s32) (unaligned s32) arg1->state.input[0].press.errno;
        sp44.unk_14 = (s32) (unaligned s32) arg1->state.input[0].rel.stick_x;
        if (arg0->unk_B5E != 0) {
            sp44 &= 0xFFFF3FF7;
            sp50 &= 0xFFFF3FF7;
        }
    }
    sp38 = &arg1->actorCtx.unk_26C;
    func_80844EF8((Player *) arg0, arg1, (Input *) &sp44);
    arg1->actorCtx.unk268 = 0;
    bzero((void *) sp38, 0x18);
    gGameInfo->data[532] = (s16) (s32) arg0->world.pos.x;
    gGameInfo->data[533] = (s16) (s32) arg0->world.pos.y;
    gGameInfo->data[534] = (s16) (s32) arg0->world.pos.z;
    gGameInfo->data[535] = arg0->world.rot.y;
}

void func_808463C0(void **arg0, Actor *arg1, s32 arg2, ? *arg3, ? *arg4) {
    void *temp_t0;
    void *temp_v1;
    void *temp_v1_2;

    temp_t0 = *arg0;
    temp_v1 = temp_t0->unk_2B0;
    temp_t0->unk_2B0 = (void *) (temp_v1 + 8);
    temp_v1->unk_4 = arg3;
    temp_v1->unk_0 = 0xDB060030;
    temp_v1_2 = temp_t0->unk_2C0;
    temp_t0->unk_2C0 = (void *) (temp_v1_2 + 8);
    temp_v1_2->unk_4 = arg3;
    temp_v1_2->unk_0 = 0xDB060030;
    func_801246F4(arg1->unk_244, arg1->unk_260, arg1->unk_242, arg2, (s32) arg1->unk_14B, 0, (s32) arg1->shape.face, arg4, &func_80128BD0, arg1);
}

void func_80846460(Actor *arg0) {
    Vec3f *temp_s4;
    f32 temp_f0;
    s32 temp_s1;
    Vec3f *phi_s0;
    s32 phi_s1;

    temp_s4 = arg0 + 0x24;
    arg0->focus.pos.y = arg0->world.pos.y + 24.0f;
    arg0->focus.pos.x = arg0->world.pos.x;
    arg0->focus.pos.z = arg0->world.pos.z;
    phi_s0 = arg0 + 0xBEC;
    phi_s1 = 0;
    do {
        Math_Vec3f_Copy(phi_s0, temp_s4);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0xC;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x12);
    temp_f0 = arg0->world.pos.y;
    arg0->unk_C44 = (f32) (temp_f0 + 24.0f);
    arg0->unk_BF0 = (f32) (temp_f0 + 60.0f);
    Math_Vec3f_Copy(arg0 + 0xD4, temp_s4);
    Math_Vec3f_Copy(arg0 + 0xE0, temp_s4);
}

void func_80846528(Actor *arg0, GlobalContext *arg1) {
    s32 spEC;
    ? **spE8;
    ? **spE4;
    f32 spE0;
    u32 *spDC;
    s32 spD8;
    Gfx *spCC;
    GraphicsContext *spC4;
    u8 spBC;
    f32 spB8;
    f32 spB4;
    u8 sp9B;
    ? *sp84;
    s32 sp80;
    ? sp74;
    s16 sp70;
    f32 sp64;
    f32 *sp48;
    void *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_2;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f8;
    s16 temp_s0_2;
    s16 temp_v0_10;
    s16 temp_v0_7;
    s32 temp_v0_3;
    s8 temp_v1;
    u32 temp_v0_15;
    u32 temp_v1_2;
    void *temp_a1;
    void *temp_v0_9;
    GraphicsContext *phi_a0;
    f32 phi_f2;
    f32 phi_f14;

    spEC = 0;
    Math_Vec3f_Copy(arg0 + 0xD6C, arg0 + 0xBEC);
    if ((arg0->unk_A74 & 0x40100) != 0) {
        spE8 = D_8085D550;
        temp_s0 = arg1->state.gfxCtx;
        SysMatrix_StatePush();
        func_8012C268(arg1);
        spEC = 1;
        if (arg0->unk_A74 & 0x40000) {
            SysMatrix_SetStateRotationAndTranslation(arg0->unk_AF0, arg0->unk_AF4, arg0->unk_AF8, &D_801D15BC);
            Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
            spE8 = D_8085D568;
            spE0 = 0.0f;
        } else {
            SysMatrix_InsertTranslation(0.0f, -arg0->unk_ABC, 0.0f, 1);
            temp_f8 = (f32) (arg0->unk_AE8 - 6);
            spE0 = temp_f8;
            if (temp_f8 < 0.0f) {
                spE8 = D_8085D55C;
                spE0 = (f32) arg0->unk_B86;
            }
        }
        spDC = D_8085D574;
        sp48 = arg0 + 0xAFC;
        spD8 = 0;
        spE4 = spE8;
        do {
            SysMatrix_StatePush();
            func_80124618(*spE4, spE0, sp48);
            Matrix_Scale(arg0->unk_AFC, arg0->unk_B00, arg0->unk_B04, 1);
            temp_v0 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            spCC = temp_v0;
            spCC->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_v0_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_2->words.w1 = *spDC;
            SysMatrix_StatePop();
            temp_v0_3 = spD8 + 1;
            spD8 = temp_v0_3;
            spDC += 4;
            spE4 += 4;
        } while (temp_v0_3 != 3);
        SysMatrix_StatePop();
    }
    if (((arg0->unk_A70 * 4) >= 0) && (arg0->unk_ABC > -3900.0f)) {
        temp_a0 = arg1->state.gfxCtx;
        spC4 = temp_a0;
        phi_a0 = temp_a0;
        if (spEC == 0) {
            func_8012C268(arg1);
            phi_a0 = arg1->state.gfxCtx;
        }
        func_8012C2DC(phi_a0);
        func_800B8050(arg0, arg1, 0);
        func_800B8118(arg0, arg1, 0);
        func_80122868(arg1, (Player *) arg0);
        if ((arg0->unk_A74 & 0x1000) != 0) {
            temp_f0 = arg0->unk_ABC;
            spB8 = temp_f0 + 1.0f;
            spB4 = 1.0f - (temp_f0 * 0.5f);
            func_80846460(arg0);
            SysMatrix_InsertTranslation(arg0->world.pos.x, arg0->world.pos.y + (1200.0f * arg0->scale.y * spB8), arg0->world.pos.z, 0);
            if (arg0->unk_B86 != 0) {
                Matrix_RotateY(arg0->unk_B28, 1U);
                SysMatrix_InsertXRotation_s(arg0->unk_B86, 1);
                Matrix_RotateY((s16) ((s32) arg0->unk_B28 * -1), 1U);
            }
            Matrix_RotateY(arg0->shape.rot.y, 1U);
            SysMatrix_InsertZRotation_s(arg0->shape.rot.z, 1);
            if (spB8 < spB4) {
                phi_f2 = spB4;
            } else {
                phi_f2 = spB8;
            }
            Matrix_Scale(arg0->scale.x * spB4 * 1.15f, arg0->scale.y * spB8 * 1.15f, phi_f2 * arg0->scale.z * 1.15f, 1);
            SysMatrix_InsertXRotation_s(arg0->shape.rot.x, 1);
            Scene_SetRenderModeXlu(arg1, 0, 1U);
            Lib_LerpRGB(&D_8085D580, &D_8085D584, arg0->unk_B10, (Color_RGB8 *) &spBC);
            temp_v0_4 = spC4->polyOpa.p;
            spC4->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFB000000;
            temp_v0_4->words.w1 = (spBC << 0x18) | (spBD << 0x10) | (spBE << 8) | 0xFF;
            temp_v0_5 = spC4->polyOpa.p;
            spC4->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_v0_6 = spC4->polyOpa.p;
            spC4->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDE000000;
            temp_v0_6->words.w1 = (u32) &D_0600BDD8;
            temp_v0_7 = arg0->unk_B88;
            if (temp_v0_7 != 0) {
                if ((s32) temp_v0_7 < 3) {
                    func_80124618(&D_8085D540, (f32) temp_v0_7, arg0 + 0xAF0);
                    Matrix_Scale(arg0->unk_AF0, arg0->unk_AF4, arg0->unk_AF8, 1);
                    temp_v0_8 = spC4->polyOpa.p;
                    spC4->polyOpa.p = temp_v0_8 + 8;
                    temp_v0_8->words.w0 = 0xDA380003;
                    temp_v0_8->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                }
                temp_v0_9 = spC4->polyOpa.p;
                spC4->polyOpa.p = temp_v0_9 + 8;
                temp_v0_9->words.w0 = 0xDE000000;
                temp_v0_9->words.w1 = &D_0600C540;
            }
            temp_a1 = arg0 + 0x3D0;
            sp44 = temp_a1;
            func_80122BA4(arg1, temp_a1, 1, 0xFF);
            func_80122BA4(arg1, temp_a1, 2, 0xFF);
            temp_v0_10 = arg0->unk_B88;
            if ((s32) temp_v0_10 < 3) {
                temp_v1 = arg0->unk_AE7;
                if ((s32) temp_v1 >= 5) {
                    temp_f14 = (f32) (temp_v1 - 4) * 0.02f;
                    if (temp_v0_10 != 0) {
                        sp9B = ((s32) temp_v0_10 * -0x55) + 0xFF;
                    } else {
                        sp9B = (u8) (u32) (200.0f * temp_f14);
                    }
                    if (temp_v0_10 != 0) {
                        phi_f14 = 0.65f;
                    } else {
                        phi_f14 = temp_f14 * 1.0f;
                    }
                    Matrix_Scale(1.0f, phi_f14, phi_f14, 1);
                    temp_v0_11 = spC4->polyXlu.p;
                    spC4->polyXlu.p = temp_v0_11 + 8;
                    temp_v0_11->words.w0 = 0xDA380003;
                    temp_v0_11->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                    AnimatedMat_DrawXlu(arg1, Lib_SegmentedToVirtual(&D_06013138));
                    temp_v0_12 = spC4->polyXlu.p;
                    spC4->polyXlu.p = temp_v0_12 + 8;
                    temp_v0_12->words.w0 = 0xFB000000;
                    temp_v0_12->words.w1 = sp9B | 0x9B000000;
                    temp_v0_13 = spC4->polyXlu.p;
                    spC4->polyXlu.p = temp_v0_13 + 8;
                    temp_v0_13->words.w1 = (u32) &D_060127B0;
                    temp_v0_13->words.w0 = 0xDE000000;
                    AnimatedMat_DrawXlu(arg1, Lib_SegmentedToVirtual(&D_06014684));
                    temp_v0_14 = spC4->polyXlu.p;
                    spC4->polyXlu.p = temp_v0_14 + 8;
                    temp_v0_14->words.w1 = (u32) &D_060134D0;
                    temp_v0_14->words.w0 = 0xDE000000;
                }
            }
        } else if ((arg0->unk_14B == 1) && (arg0->unk_A6C & 0x400000)) {
            func_80846460(arg0);
            SkelAnime_DrawSV(arg1, arg0->unk_2CC, arg0->unk_2E8, (s32) arg0->unk_2CA, NULL, NULL, NULL);
            sp44 = arg0 + 0x3D0;
        } else {
            sp84 = &func_80125D4C;
            if ((arg0->unk_394 != 0) || (arg0->projectedPos.z < 320.0f)) {
                sp80 = 0;
            } else {
                sp80 = 1;
            }
            if (arg0->unk_A6C & 0x100000) {
                SkinMatrix_Vec3fMtxFMultXYZ(&arg1->projectionMatrix, (Vec3f *) &arg0->focus, (Vec3f *) &sp74);
                if (sp7C < -4.0f) {
                    sp84 = &func_801262C8;
                }
            }
            if (arg0->unk_A70 & 0x4000000) {
                temp_v0_15 = arg1->gameplayFrames;
                temp_s0_2 = temp_v0_15 * 0x258;
                sp70 = temp_v0_15 * 0x3E8;
                SysMatrix_StatePush();
                arg0->scale.y = -arg0->scale.y;
                SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y + (2.0f * arg0->yDistToWater) + (arg0->unk_ABC * arg0->scale.y), arg0->world.pos.z, (Vec3s *) &arg0->shape);
                Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
                SysMatrix_InsertXRotation_s(temp_s0_2, 1);
                Matrix_RotateY(sp70, 1U);
                Matrix_Scale(1.1f, 0.95f, 1.05f, 1);
                Matrix_RotateY((s16) ((s32) sp70 * -1), 1U);
                SysMatrix_InsertXRotation_s((s16) ((s32) temp_s0_2 * -1), 1);
                func_808463C0((void **) arg1, arg0, sp80, &D_801C0860, sp84);
                arg0->scale.y = -arg0->scale.y;
                SysMatrix_StatePop();
            }
            temp_v0_16 = spC4->polyOpa.p;
            spC4->polyOpa.p = temp_v0_16 + 8;
            temp_v0_16->words.w1 = 0;
            temp_v0_16->words.w0 = 0xD9FFF9FF;
            temp_v0_17 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_17 + 8;
            temp_v0_17->words.w1 = 0;
            temp_v0_17->words.w0 = 0xD9FFF9FF;
            if ((arg0->unk_14B == 2) && (arg0->unk_B62 != 0) && ((arg0->unk_A74 & 0x8000) == 0)) {
                SysMatrix_StatePush();
                SysMatrix_InsertXRotation_s(-0x4000, 1);
                SysMatrix_InsertTranslation(0.0f, 0.0f, -1800.0f, 1);
                func_801253A4(arg1, arg0);
                SysMatrix_StatePop();
            }
            func_808463C0((void **) arg1, arg0, sp80, &D_801C0850, sp84);
            sp44 = arg0 + 0x3D0;
        }
        func_801229A0(arg1, (Player *) arg0);
        if ((arg0->unk_A70 & 0x4000) != 0) {
            temp_f12 = arg0->unk_B48;
            temp_v0_18 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_18 + 8;
            temp_v0_18->words.w0 = 0xDB060020;
            temp_v1_2 = arg1->gameplayFrames;
            sp64 = temp_f12;
            temp_v0_18->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, 0U, -(s32) temp_v1_2 & 0x7F, 0x20, 0x20, 1, 0U, ((s32) temp_v1_2 * -2) & 0x7F, 0x20, 0x20);
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0_19 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_19 + 8;
            temp_v0_19->words.w0 = 0xDA380003;
            temp_v0_19->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_v0_20 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_20 + 8;
            temp_v0_20->words.w1 = 0x3264FF;
            temp_v0_20->words.w0 = 0xFB000000;
            temp_v0_21 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_21 + 8;
            temp_v0_21->words.w1 = (u32) &D_04050D10;
            temp_v0_21->words.w0 = 0xDE000000;
        }
        if ((s32) arg0->unk_B2A > 0) {
            func_8012697C(arg1, (Player *) arg0);
        }
        func_80122D44(arg1, sp44);
    }
    arg1->actorCtx.unk5 &= 0xFFF7;
}

void func_808470D4(Actor *arg0, GlobalContext *arg1) {
    Effect_Destroy(arg1, arg0->unk_73C);
    Effect_Destroy(arg1, arg0->unk_740);
    Effect_Destroy(arg1, arg0->unk_744);
    LightContext_RemoveLight(arg1, &arg1->lightCtx, arg0->unk_504);
    Collider_DestroyCylinder(arg1, arg0 + 0x518);
    Collider_DestroyCylinder(arg1, arg0 + 0x6E4);
    Collider_DestroyQuad(arg1, arg0 + 0x564);
    Collider_DestroyQuad(arg1, arg0 + 0x5E4);
    Collider_DestroyQuad(arg1, arg0 + 0x664);
    zelda_free(arg0->unk_1F8);
    zelda_free(arg0->unk_23C);
    func_80115D5C(arg1);
    func_80831454(arg0);
}

void func_80847190(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    s32 sp2C;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a1_2;
    s8 temp_v0;
    s8 temp_v0_4;
    u16 temp_a1;
    s16 phi_s0;
    s32 phi_a1;
    s16 phi_a1_2;
    s32 phi_a1_3;
    s16 phi_a1_4;
    s32 phi_a1_5;
    s16 phi_a1_6;
    s16 phi_v0;

    if ((func_800B7128(arg1) == 0) && (func_8082EF20(arg1) == 0) && (arg2 == 0)) {
        Math_SmoothStepToS((s16 *) &arg1->focus.rot, (s16) (D_80862B44->rel.stick_y * 0xF0), 0xE, 0xFA0, (s16) 0x1E);
        temp_s0 = (s32) D_80862B44->rel.stick_x * -0x10;
        if ((s32) temp_s0 < -0xBB8) {
            phi_s0 = -0xBB8;
        } else {
            phi_a1_6 = temp_s0;
            if ((s32) temp_s0 >= 0xBB9) {
                phi_a1_6 = 0xBB8;
            }
            phi_s0 = phi_a1_6;
        }
        arg1->focus.rot.y += phi_s0;
    } else {
        temp_v0 = D_80862B44->rel.stick_y;
        phi_a1 = -1;
        phi_a1_3 = -1;
        if ((s32) temp_v0 >= 0) {
            phi_a1 = 1;
        }
        sp2C = phi_a1;
        arg1->focus.rot.x += (s32) ((1.0f - Math_CosS((s16) (temp_v0 * 0xC8))) * 1500.0f) * phi_a1;
        if (arg1->unk_A6C & 0x800000) {
            temp_v0_2 = arg1->focus.rot.x;
            if ((s32) temp_v0_2 < -0x1F40) {
                arg1->focus.rot.x = -0x1F40;
            } else {
                phi_a1_2 = temp_v0_2;
                if ((s32) temp_v0_2 >= 0xFA1) {
                    phi_a1_2 = 0xFA0;
                }
                goto block_21;
            }
        } else {
            temp_v0_3 = arg1->focus.rot.x;
            if ((s32) temp_v0_3 < -0x36B0) {
                arg1->focus.rot.x = -0x36B0;
            } else {
                phi_a1_2 = temp_v0_3;
                if ((s32) temp_v0_3 >= 0x36B1) {
                    phi_a1_2 = 0x36B0;
                }
block_21:
                arg1->focus.rot.x = phi_a1_2;
            }
        }
        temp_v0_4 = D_80862B44->rel.stick_x;
        temp_s0_2 = arg1->focus.rot.y - arg1->shape.rot.y;
        if ((s32) temp_v0_4 >= 0) {
            phi_a1_3 = 1;
        }
        sp2C = phi_a1_3;
        temp_s0_3 = temp_s0_2 + ((s32) ((1.0f - Math_CosS((s16) (temp_v0_4 * 0xC8))) * -1500.0f) * phi_a1_3);
        if ((s32) temp_s0_3 < -0x4AAA) {
            phi_a1_4 = -0x4AAA;
        } else {
            phi_v0 = temp_s0_3;
            if ((s32) temp_s0_3 >= 0x4AAB) {
                phi_v0 = 0x4AAA;
            }
            phi_a1_4 = phi_v0;
        }
        arg1->focus.rot.y = phi_a1_4 + arg1->shape.rot.y;
    }
    arg1->unk_AA6 = (u16) (arg1->unk_AA6 | 2);
    temp_a1 = arg0->unk_1887C != 0;
    phi_a1_5 = (s32) temp_a1;
    if (temp_a1 == 0) {
        temp_a1_2 = func_800B7128(arg1, temp_a1) != 0;
        phi_a1_5 = temp_a1_2;
        if (temp_a1_2 == 0) {
            phi_a1_5 = func_8082EF20(arg1, temp_a1_2) != 0;
        }
    }
    func_80832754(arg1, phi_a1_5);
}

void func_8084748C(s16 *arg0, f32 *arg1, f32 arg2, s16 arg3) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 phi_f14;
    f32 phi_f2;
    f32 phi_f12;

    temp_f12 = *arg1;
    temp_f2 = arg0->unk_258 - 10.0f;
    temp_f0 = ((f32) gGameInfo->data[45] / 100.0f) * 0.8f;
    phi_f14 = arg2;
    phi_f12 = temp_f12;
    if (temp_f0 < temp_f12) {
        *arg1 = temp_f0;
        phi_f12 = *arg1;
    }
    if ((temp_f2 > 0.0f) && (temp_f2 < 16.0f)) {
        phi_f2 = fabsf(temp_f2) * 0.5f;
    } else {
        phi_f14 = 0.0f;
        phi_f2 = 0.0f;
    }
    Math_AsymStepToF(arg1, phi_f14 * 0.8f, phi_f2, (fabsf(phi_f12) * 0.02f) + 0.05f);
    Math_ScaledStepToS(arg0 + 0xAD4, arg3, 0x640);
}

void func_808475B4(s16 *arg0) {
    f32 sp4;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    f32 phi_f18;
    f32 phi_f0;
    f32 phi_f18_2;
    f32 phi_f4;
    f32 phi_f16;
    f32 phi_f18_3;
    f32 phi_f18_4;
    f32 phi_f18_5;

    temp_f2 = arg0->unk_68;
    temp_f14 = arg0->unk_8C;
    temp_f18 = arg0->unk_A68->unk_28;
    temp_f0 = temp_f14 - temp_f18;
    phi_f18 = temp_f18;
    phi_f16 = -5.0f;
    phi_f16 = -5.0f;
    if (temp_f2 < 0.0f) {
        phi_f18 = temp_f18 + 1.0f;
    }
    if (temp_f14 < phi_f18) {
        if (temp_f0 < -0.4f) {
            phi_f0 = -0.4f;
        } else {
            if (temp_f0 > -0.1f) {
                phi_f18_3 = -0.1f;
            } else {
                phi_f18_3 = temp_f0;
            }
            phi_f0 = phi_f18_3;
        }
        if (temp_f2 <= 0.0f) {
            phi_f18_2 = 0.0f;
        } else {
            phi_f18_2 = temp_f2 * 0.5f;
        }
        sp4 = phi_f0 - phi_f18_2;
    } else {
        if (((arg0->unk_A6C & 0x80) == 0) && ((s32) arg0->unk_145 >= 5) && (temp_f2 >= -5.0f)) {
            phi_f4 = -0.3f;
            goto block_29;
        }
        if ((arg0->unk_14B == 3) && (temp_f2 < 0.0f)) {
            sp4 = -temp_f2;
            phi_f16 = 0.0f;
        } else {
            phi_f18_5 = 0.1f;
            phi_f16 = 2.0f;
            if (temp_f0 < 0.1f) {

            } else if (temp_f0 > 0.4f) {
                phi_f18_5 = 0.4f;
            } else {
                phi_f18_5 = temp_f0;
            }
            if (temp_f2 >= 0.0f) {
                phi_f18_4 = 0.0f;
            } else {
                phi_f18_4 = temp_f2 * -0.3f;
            }
            phi_f4 = phi_f18_4 + phi_f18_5;
block_29:
            sp4 = phi_f4;
        }
        if (temp_f14 > 100.0f) {
            arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x400);
        }
    }
    arg0->unk_68 = (f32) (arg0->unk_68 + sp4);
    if (((arg0->unk_68 - phi_f16) * sp4) > 0.0f) {
        arg0->unk_68 = phi_f16;
    }
    arg0->unk_74 = 0.0f;
}

void func_808477D0(GlobalContext *arg0, Actor *arg1, Input *arg2, f32 arg3) {
    f32 temp_f0;
    f32 phi_f0;
    f32 phi_f2;

    if ((arg2 != 0) && ((arg2->press.button & 0xC000) != 0)) {
        phi_f0 = 1.0f;
    } else {
        phi_f0 = 0.5f;
    }
    temp_f0 = phi_f0 * arg3;
    phi_f2 = 1.0f;
    if (temp_f0 < 1.0f) {

    } else if (temp_f0 > 2.5f) {
        phi_f2 = 2.5f;
    } else {
        phi_f2 = temp_f0;
    }
    arg1->unk_25C = phi_f2;
    func_801360E0(arg0, arg1 + 0x240);
}

s32 func_80847880(GlobalContext *arg0, Actor *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if (arg0->unk_1887C != 0) {
        if (arg0->sceneNum == 0x45) {
            func_80831494(arg0, arg1, func_80854430, 0);
            arg0->unk_1887C = 0;
            arg1->unk_394 = 0;
            return 1;
        }
        func_8082DE50(arg0, (Player *) arg1);
        func_80831494(arg0, arg1, func_80854614, 0);
        if ((func_800B7118(arg1) == 0) || (func_801240C8((Player *) arg1) != 0)) {
            func_80831990(arg0, arg1, 1);
        }
        func_8082DB18(arg0, (Player *) arg1, func_8082ED20(arg1));
        arg1->unk_394 = 0;
        arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x100000);
        func_8082DABC(arg1);
        func_80836D8C(arg1);
        phi_v0 = 1;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return phi_v0;
    }
    return phi_v0;
}

s32 func_80847994(GlobalContext *arg0, Actor *arg1) {
    s32 temp_v0;

    temp_v0 = arg1->unk_A74;
    if ((temp_v0 & 0x20) != 0) {
        arg1->unk_A74 = (s32) (temp_v0 & ~0x20);
        arg1->unk_14A = 0x14;
        arg1->unk_AA5 = 5;
        func_80838A90(arg1, arg0, arg1, arg0);
        return 1;
    }
    return 0;
}

void func_808479F4(GlobalContext *arg0, Actor *arg1, f32 arg2) {
    DynaPolyActor *temp_v0;
    u8 temp_a1;
    u8 temp_a2;

    temp_a2 = arg1->wallBgId;
    if (temp_a2 != 0x32) {
        temp_a1 = temp_a2;
        arg1 = arg1;
        temp_v0 = BgCheck_GetActorOfMesh(arg0 + 0x830, (s32) temp_a1);
        if (temp_v0 != 0) {
            func_800B72F8(temp_v0, arg2, arg1->world.rot.y);
        }
    }
}

void func_80847A50(Actor *arg0) {
    s32 phi_v0;

    phi_v0 = 0x80A;
    if (arg0->unk_AE7 != 0) {
        phi_v0 = 0x80C;
    }
    func_800B8E58(arg0, (phi_v0 + arg0->unk_A68->unk_94) & 0xFFFF);
}

s32 func_80847A94(? *arg0, Actor *arg1, s32 arg2, f32 *arg3) {
    f32 sp60;
    f32 sp5C;
    CollisionPoly *sp50;
    f32 sp44;
    f32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_v1;

    temp_f0 = arg1->unk_390->unk_28;
    temp_v1 = arg2 * 0xC;
    sp60 = temp_f0 + 20.0f;
    sp5C = temp_f0 - 20.0f;
    sp30 = temp_v1;
    temp_f0_2 = (bitwise f32) func_80835CD8(arg0, arg1, temp_v1 + &D_8085D588, &sp50, &sp3C, &sp34);
    *arg3 = temp_f0_2;
    if ((sp5C < temp_f0_2) && (*arg3 < sp60) && (func_80835D58((GlobalContext *) arg0, arg1, sp30 + &D_8085D5A0, &sp40, &sp38, &sp44) == 0) && (func_80835D58((GlobalContext *) arg0, arg1, sp30 + &D_8085D5B8, &sp40, &sp38, &sp44) == 0)) {
        arg1->floorPoly = (CollisionPoly *) sp3C;
        arg1->floorBgId = (u8) sp38;
        arg1->unk_B72 = func_800C9BDC(arg0 + 0x830, (CollisionPoly *) sp3C, sp34);
        return 1;
    }
    return 0;
}

s32 func_80847BF0(Actor *arg0, ? *arg1) {
    void *sp3C;
    s32 sp38;
    f32 sp34;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_t0;
    s32 phi_a2;
    s32 phi_a2_2;
    s32 phi_v0;
    s32 phi_a2_3;
    s32 phi_v0_2;
    LinkAnimationHeader *phi_a2_4;

    temp_t0 = arg0->unk_390;
    if ((s32) arg0->unk_AE8 < 0) {
        arg0->unk_AE8 = 0x63;
        goto block_36;
    }
    phi_a2 = 1;
    phi_a2_2 = 1;
    phi_a2_3 = 1;
    if ((s32) arg0->unk_38C < 0) {
        phi_a2 = 0;
    }
    sp38 = phi_a2;
    sp3C = temp_t0;
    if (func_80847A94(arg1, arg0, phi_a2, &sp34) == 0) {
        sp3C = temp_t0;
        if (func_80847A94(arg1, arg0, phi_a2 ^ 1, &sp34) == 0) {
            goto block_36;
        }
        arg0->unk_38C = (s8) -(s32) arg0->unk_38C;
        goto block_8;
    }
block_8:
    if ((arg1->unk_1F2C == 0) && (sp3C = arg0->unk_390, (func_8082DA90((GlobalContext *) arg1) == 0))) {
        temp_v1 = arg0->unk_390->unk_1E8;
        phi_a2_2 = 0;
        phi_a2_3 = 0;
        if ((temp_v1 & 0x40) != 0) {

        }
        if (phi_a2_2 == 0) {
            temp_v0 = arg0->unk_390->unk_144;
            if (((temp_v0 == 7) || (temp_v0 == 0) || (temp_v0 == 8)) && ((temp_v1 << 0xC) >= 0) && ((temp_v1 << 6) >= 0)) {
                phi_v0 = 1;
            } else {
                phi_v0 = 0;
            }
            if (phi_v0 != 0) {
                goto block_21;
            }
            goto block_36;
        }
block_21:
        arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x400000);
        temp_v1_2 = arg0->unk_390->unk_1E8;
        if ((temp_v1_2 & 0x40) != 0) {

        }
        if (phi_a2_3 == 0) {
            temp_v0_2 = arg0->unk_390->unk_144;
            if (((temp_v0_2 == 7) || (temp_v0_2 == 0) || (temp_v0_2 == 8)) && ((temp_v1_2 << 0xC) >= 0) && ((temp_v1_2 << 6) >= 0)) {
                phi_v0_2 = 1;
            } else {
                phi_v0_2 = 0;
            }
            if ((phi_v0_2 != 0) && (~(D_80862B44->press.button | 0xFFFF7FFF) == 0)) {
                goto block_33;
            }
            goto block_36;
        }
block_33:
        arg0->unk_390->unk_124 = 0;
        sp3C = arg0->unk_390;
        func_8083172C((GlobalContext *) arg1, arg0, func_808505D0, 0);
        arg0->unk_B48 = (f32) (sp34 - arg0->unk_390->unk_28);
        phi_a2_4 = (LinkAnimationHeader *) &D_0400E070;
        if ((s32) arg0->unk_38C < 0) {
            phi_a2_4 = &D_0400E060;
        }
        func_8082DB18((GlobalContext *) arg1, (Player *) arg0, phi_a2_4);
        return 1;
    }
block_36:
    return 0;
}

void func_80847E2C(Actor *arg0, f32 arg1, f32 arg2) {
    f32 temp_f2;
    f32 phi_f12;

    temp_f2 = arg0->unk_B48;
    if ((temp_f2 != 0.0f) && (arg2 <= arg0->unk_258)) {
        if (arg1 < fabsf(temp_f2)) {
            if (temp_f2 >= 0.0f) {
                phi_f12 = 1.0f * arg1;
            } else {
                phi_f12 = -1.0f * arg1;
            }
        } else {
            phi_f12 = temp_f2;
        }
        arg0->unk_B48 = (f32) (temp_f2 - phi_f12);
        arg0->world.pos.y += phi_f12;
    }
}

s32 func_80847ED4(Player *arg0) {
    s16 *temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v1 = arg0->unk_388;
    temp_v0 = temp_v1 != 0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = *temp_v1 == 0x224;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            phi_v0 = ~(D_80862B44->cur.button | 0xFFFF7FFF) == 0;
        }
    }
    return phi_v0;
}

void func_80847F1C(Player *arg0) {
    f32 sp28;
    s16 sp26;
    s16 temp_a1;
    s16 temp_v0;
    void *temp_s0;
    s16 phi_v1;

    temp_s0 = arg0->unk_388;
    if (func_80847ED4(arg0) != 0) {
        sp28 = arg0->actor.world.pos.y;
        temp_a1 = temp_s0->shape.rot.y;
        temp_v0 = arg0->currentYaw - temp_a1;
        sp26 = temp_v0;
        Lib_Vec3f_TranslateAndRotateY(temp_s0 + 0x24, temp_a1, &D_8085D5D0, arg0 + 0x24);
        arg0->actor.world.pos.y = sp28;
        arg0->actor.shape.rot.y = temp_s0->shape.rot.y;
        phi_v1 = temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = (s16) -(s32) temp_v0;
        }
        temp_s0->speedXZ = Math_CosS(phi_v1) * arg0->linearVelocity * 0.5f;
        if (temp_s0->speedXZ < 0.0f) {
            temp_s0->speedXZ = 0.0f;
        }
        func_8083133C(arg0);
    }
}

void func_80847FF8(f32 *arg0, s16 *arg2, s16 arg3) {
    func_8084748C(arg2, arg0, (bitwise f32) arg2, arg3);
    func_8082E224((Actor *) arg0, &D_8085D5DC);
    func_80847F1C((Player *) arg0);
}

void func_80848048(GlobalContext *arg0, Actor *arg1) {
    func_80831494(arg0, arg1, func_80851588, 0);
    func_8082E634(arg0, arg1, (LinkAnimationHeader *) &D_0400DFD0);
}

? func_80848094(GlobalContext *arg0, Actor *arg1, f32 *arg2, s16 *arg3) {
    s32 *sp24;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;
    LinkAnimationHeader *phi_a3;
    ? phi_v0;

    temp_v0 = arg1->unk_AD4 - *arg3;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 >= 0x6001) {
        sp24 = &D_0400E000;
        phi_a3 = (LinkAnimationHeader *) &D_0400E000;
        if (Math_StepToF(arg1 + 0xAD0, 0.0f, 1.0f) != 0) {
            arg1->unk_AD4 = (s16) *arg3;
        } else {
            *arg2 = 0.0f;
            *arg3 = arg1->unk_AD4;
        }
    } else {
        temp_v0_2 = func_8083E514(arg1, arg2, arg3, arg0);
        if (temp_v0_2 > 0) {
            phi_a3 = (LinkAnimationHeader *) &D_0400DFD0;
        } else if (temp_v0_2 < 0) {
            phi_a3 = &D_0400DFB8;
        } else {
            phi_a3 = &D_0400DFA8;
            if ((s32) (s16) (arg1->shape.rot.y - *arg3) > 0) {
                phi_a3 = &D_0400DFB0;
            }
        }
    }
    phi_v0 = 0;
    if (phi_a3 != arg1->unk_248) {
        func_8082E634(arg0, arg1, phi_a3, phi_a3);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_808481CC(f32 *arg0, s16 *arg1, f32 arg2) {
    f32 sp2C;
    s16 sp2A;

    func_80832F78(arg1, (bitwise f32) &sp2C, &sp2A, NULL, arg0);
    func_8084748C(arg1, (f32 *) (arg1 + 0xAD0), sp2C * 0.5f, sp2A);
    func_8084748C(arg1, (f32 *) (arg1 + 0x68), arg2, arg1->unk_AD4);
}

void func_80848250(GlobalContext *arg0, Actor *arg1) {
    arg1->unk_B2A = 0;
    arg1->unk_A6C = (s32) (arg1->unk_A6C & ~0xC00);
    arg1->unk_384 = 0;
    func_800E0238(Play_GetCamera(arg0, 0));
}

void func_80848294(GlobalContext *arg0, Actor *arg1) {
    func_80848250(arg0, arg1);
    func_8082DC28(arg1);
    func_80839E74(arg1, arg0);
    arg1->unk_AD4 = (s16) arg1->shape.rot.y;
}

s32 func_808482E0(GlobalContext *arg0, Actor *arg1) {
    u8 *sp1C;
    Actor *temp_a2;
    GlobalContext *temp_a3;
    s16 temp_v1;
    s16 temp_v1_2;
    u8 *temp_v0;
    u8 temp_a1;
    s32 phi_v0;
    s32 phi_v1;

    temp_a3 = arg0;
    temp_a2 = arg1;
    temp_v1 = temp_a2->unk_384;
    if (temp_v1 == 0) {
        return 1;
    }
    if (temp_a2->unk_AE7 == 0) {
        temp_v0 = (temp_v1 * 6) - 6 + &D_8085C3F4;
        temp_a2->unk_AE7 = 1;
        temp_a1 = temp_v0->unk_3;
        arg0 = temp_a3;
        arg1 = temp_a2;
        sp1C = temp_v0;
        func_801518B0(temp_a3, (u16) temp_a1, temp_a2);
        Item_Give(arg0, temp_v0->unk_0);
        temp_v1_2 = arg1->unk_384;
        if (((s32) temp_v1_2 >= 0x78) && ((s32) temp_v1_2 < 0x90)) {
            func_801A3098(0x37U);
        } else if ((((s32) temp_v1_2 > 0) && ((s32) temp_v1_2 < 4)) || (temp_v1_2 == 0xA)) {
            play_sound(0x4831U);
        } else {
            if ((temp_v1_2 == 0xD) || ((temp_v1_2 == 0xC) && ((gSaveContext.inventory.questItems & 0xF0000000) == 0x40000000))) {
                phi_v0 = 0x924;
            } else {
                if ((temp_v1_2 == 0xC) || (((s32) temp_v1_2 >= 5) && ((s32) temp_v1_2 < 8))) {
                    phi_v1 = 0x39;
                } else {
                    phi_v1 = 0x922;
                }
                phi_v0 = phi_v1;
            }
            func_801A3098(phi_v0 & 0xFFFF);
        }
    } else {
        arg1 = temp_a2;
        arg0 = temp_a3;
        if (func_80152498(temp_a3 + 0x4908) == 2) {
            if (arg1->unk_384 == 0x4C) {
                arg0->nextEntranceIndex = 0x1C00;
                gSaveContext.nextCutsceneIndex = 0xFFF2;
                arg0->sceneLoadFlag = 0x14;
                arg0->unk_1887F = 3;
                gSaveContext.nextTransition = 3;
                arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xDFFFFFFF);
                func_8085B28C(arg0, NULL, 7, arg0);
            }
            arg1->unk_384 = 0;
        }
    }
    return 0;
}

void func_808484CC(void) {
    func_8082E224(&D_8085D5E0);
}

void func_808484F0(Player *arg0) {
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_cond;

    temp_f12 = arg0->unk_B08[1];
    arg0->unk_B08[0] += temp_f12;
    temp_f2 = arg0->unk_B08[0];
    arg0->unk_B08[1] = temp_f12 - (temp_f2 * 5.0f);
    arg0->unk_B08[1] *= 0.3f;
    if (fabsf(arg0->unk_B08[1]) < 0.00001f) {
        temp_cond = fabsf(temp_f2) < 0.00001f;
        arg0->unk_B08[1] = 0.0f;
        if (temp_cond) {
            arg0->unk_B08[0] = 0.0f;
        }
    }
}

s32 func_80848570(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 temp_v0;

    if (func_8083A6C0(arg1, arg0) == 0) {
        if (func_808396B8((Actor *) arg1, arg0) != 0) {
            temp_v0 = func_808335F4((Player *) arg0);
            sp24 = temp_v0;
            func_80833864(arg1, arg0, temp_v0);
            if ((sp24 >= 0x1E) || ((arg0->unk_14B == 0) && (func_8082FBE8((Player *) arg0) != 0))) {
                arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20000);
                func_808332A0(arg1, (Player *) arg0, 0, sp24 < 0x1E);
            }
            goto block_7;
        }
        return 0;
    }
block_7:
    return 1;
}

void func_80848640(GlobalContext *arg0, Actor *arg1) {
    void *sp4C;
    ActorContext *sp3C;
    Actor *temp_v0_2;
    ActorContext *temp_a0;
    u8 temp_v0;
    void *temp_v1;
    u32 phi_v1;

    temp_v0 = arg1->unk_14B;
    temp_a0 = arg0 + 0x1CA0;
    temp_v1 = (arg0 + (temp_v0 * 4))->unk_1EF4;
    if (temp_v1 != 0) {
        sp4C = temp_v1;
        Math_Vec3f_Copy(temp_v1 + 8, arg1 + 0x24);
        temp_v1->unk_190 = 0;
        temp_v1->unk_191 = 0x14;
        temp_v1->unk_16 = (s16) arg1->shape.rot.y;
        sp3C = arg0 + 0x1CA0;
        phi_v1 = (u32) temp_v1;
    } else {
        sp3C = temp_a0;
        phi_v1 = Actor_Spawn(temp_a0, arg0, 0x21, arg1->world.pos.x, arg1->world.pos.y, arg1->world.pos.z, (s16) 0, (s16) (s32) arg1->shape.rot.y, (s16) 0, (s16) (s32) temp_v0);
    }
    if (phi_v1 != 0) {
        arg0->actorCtx.unk254[arg1->unk_14B] = phi_v1;
        func_80169E6C(arg0, arg1->unk_14B + 3, 0xBFF);
    }
    temp_v0_2 = Actor_Spawn(sp3C, arg0, 0x160, arg1->world.pos.x, arg1->world.pos.y, arg1->world.pos.z, (s16) 0, (s16) (s32) arg1->shape.rot.y, (s16) 0, (s16) ((gSaveContext.playerForm * 8) | arg1->unk_14B));
    if (temp_v0_2 != 0) {
        func_800B8E58(temp_v0_2, 0x8E4U);
    }
}

s32 func_80848780(Player *arg0, GlobalContext *arg1) {
    if (func_80830B88(arg1, arg0, arg1) != 0) {
        return 1;
    }
    return 0;
}

? func_808487B8(Player *arg0, GlobalContext *arg1) {
    if ((func_80830B88(arg1, arg0) != 0) || (func_80830DF0(arg0, arg1) != 0)) {
        return 1;
    }
    return 0;
}

s32 func_80848808(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s8 temp_v1;
    s32 phi_v0;

    if (func_801360E0(arg1, arg0 + 0x284) == 0) {
        temp_v1 = arg0->unk_147;
        if (func_8082F524(arg0, (s32) arg0->unk_148) == temp_v1) {
            temp_v0 = D_80862B48 != 0;
            phi_v0 = temp_v0;
            if (temp_v0 == 0) {
                temp_v0_2 = arg0->unk_14F != 3;
                phi_v0 = temp_v0_2;
                if (temp_v0_2 != 0) {
                    temp_v0_3 = temp_v1 != 7;
                    phi_v0 = temp_v0_3;
                    if (temp_v0_3 != 0) {
                        phi_v0 = arg1->unk_1887C == 0;
                    }
                }
            }
            D_80862B48 = phi_v0;
            if (phi_v0 != 0) {
                goto block_7;
            }
            goto block_8;
        }
block_8:
        if (func_8082ED94((Player *) arg0) != 0) {
            func_80830D40(arg1, arg0);
            func_8082DB18(arg1, (Player *) arg0, func_8082ED20(arg0));
            arg0->unk_AA4 = 0;
        } else {
            func_80830D40(arg1, arg0);
        }
        return 1;
    }
block_7:
    func_8082F43C(arg1, arg0, *(&D_8085C9F0 + (arg0->unk_147 * 4)));
    arg0->unk_ACC = 0;
    arg0->unk_AA4 = 0;
    D_80862B4C = D_80862B48;
    return arg0->unk_AC4(arg0, arg1);
}

? func_8084894C(Player *arg0, GlobalContext *arg1) {
    Player *temp_a0;
    SkelAnime *temp_a1;

    temp_a1 = arg0 + 0x284;
    arg0 = arg0;
    func_801360E0(arg1, temp_a1);
    if (~(D_80862B44->cur.button | ~0x10) != 0) {
        func_80830CE8(arg1, arg0, arg0);
    } else {
        temp_a0 = arg0;
        arg0->stateFlags1 |= 0x400000;
        arg0 = arg0;
        func_801239AC(temp_a0);
        if ((arg0->transformation == 2) && (~(D_80862B44->cur.button | ~0x4000) == 0)) {
            func_8082F164(arg0, 0x4010, arg0);
        }
    }
    return 1;
}

s32 func_80848A0C(Player *arg0, GlobalContext *arg1) {
    AnimationHeaderCommon *sp3C;
    SkelAnime *sp34;
    AnimationHeaderCommon *temp_v0;
    SkelAnime *temp_a1;
    f32 temp_f0;

    temp_a1 = arg0 + 0x284;
    sp34 = temp_a1;
    if (func_801360E0(arg1, temp_a1) != 0) {
        temp_v0 = func_80830A58(arg1, arg0);
        sp3C = temp_v0;
        temp_f0 = (f32) SkelAnime_GetFrameCount(temp_v0);
        SkelAnime_ChangeLinkAnim(arg1, sp34, (LinkAnimationHeader *) sp3C, 1.0f, temp_f0, temp_f0, (u8) 2, 0.0f);
    }
    arg0->stateFlags1 |= 0x400000;
    func_801239AC(arg0);
    return 1;
}

? func_80848AB0(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    s32 temp_t6;

    temp_t6 = D_80862B4C;
    D_80862B48 = temp_t6;
    if ((temp_t6 != 0) || (func_801360E0(arg1, arg0 + 0x284) != 0)) {
        sp24 = arg0 + 0x284;
        func_8082F43C(arg1, arg0, *(&D_8085C9F0 + (arg0->unk_147 * 4)));
        SkelAnime_ChangeLinkAnimDefaultRepeat(arg1, sp24, *(&D_8085BE84 + (arg0->unk_14F * 4)));
        arg0->unk_AA4 = 0;
        arg0->unk_AC4(arg0, arg1);
        return 0;
    }
    return 1;
}

s32 func_80848B6C(Player *arg0, Actor *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_B28;
    if ((s32) temp_v0 >= 0) {
        arg0->unk_B28 = (s16) -(s32) temp_v0;
    }
    if (((func_801240C8(arg0) == 0) || (func_80831124(arg1, arg0) != 0)) && (func_80830B88((GlobalContext *) arg1, arg0) == 0) && (func_80831094((Actor *) arg0, (GlobalContext *) arg1) == 0)) {
        return 0;
    }
    return 1;
}

s32 func_80848BF4(Player *arg0, GlobalContext *arg1) {
    s32 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    s16 temp_v0;
    s32 phi_v0;

    if (func_801240C8(arg0) != 0) {
        sp2C = 0;
    } else {
        phi_v0 = 2;
        if (arg0->transformation != 3) {
            phi_v0 = 1;
        }
        sp2C = phi_v0;
    }
    if (arg0->transformation != 3) {
        Math_ScaledStepToS(&arg0->unk_AB2.z, 0x4B0, 0x190);
        arg0->unk_AA6 |= 0x100;
    }
    if ((arg0->unk_ACE == 0) && (func_8082ED94(arg0) == 0) && (&D_0400D520 == arg0->skelAnime.animCurrentSeg)) {
        temp_a1 = &arg0->unk_284;
        sp24 = temp_a1;
        SkelAnime_ChangeLinkAnimDefaultStop(arg1, temp_a1, *(&D_8085D5E4 + (sp2C * 4)));
        arg0->unk_ACE = -1;
    } else {
        temp_a1_2 = &arg0->unk_284;
        sp24 = temp_a1_2;
        if (func_801360E0(arg1, temp_a1_2) != 0) {
            SkelAnime_ChangeLinkAnimDefaultRepeat(arg1, sp24, *(&D_8085D5F0 + (sp2C * 4)));
            arg0->unk_ACE = 1;
        } else if (arg0->unk_ACE == 1) {
            arg0->unk_ACE = 2;
        }
    }
    temp_v0 = arg0->unk_ACC;
    if ((s32) temp_v0 >= 0xB) {
        arg0->unk_ACC = temp_v0 - 1;
    }
    func_80831010((Actor *) arg0, arg1);
    if (((s32) arg0->unk_ACE > 0) && (((s32) arg0->unk_B28 < 0) || ((D_80862B4C == 0) && (func_80830FD4(arg1) == 0)))) {
        func_8082F43C(arg1, (Actor *) arg0, func_80848E4C);
        if ((s32) arg0->unk_B28 >= 0) {
            if (sp2C != 0) {
                if (func_80831194(arg1, arg0) == 0) {
                    func_800B8E58((Actor *) arg0, *(&D_8085D5FA + (arg0->unk_B28 * 2)));
                }
                if (arg0->transformation == 3) {
                    SkelAnime_ChangeLinkAnimPlaybackStop(arg1, sp24, &D_0400E2F0, 0.6666667f);
                }
            } else if ((arg0->actor.bgCheckFlags & 1) != 0) {
                func_80831194(arg1, arg0);
            }
        }
        arg0->unk_ACC = 0xA;
        func_8082DABC((Actor *) arg0);
    } else {
        arg0->stateFlags3 |= 0x40;
    }
    return 1;
}

s32 func_80848E4C(Player *arg0, GlobalContext *arg1) {
    s32 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    LinkAnimationHeader *phi_a2;
    LinkAnimationHeader *phi_a2_2;

    temp_a1 = arg0 + 0x284;
    sp24 = temp_a1;
    sp2C = func_801360E0(arg1, temp_a1);
    if ((func_801240C8(arg0) != 0) && (func_80831124((Actor *) arg1, arg0) == 0)) {

    } else if (func_80830B88(arg1, arg0) == 0) {
        if ((((s32) arg0->unk_B28 >= 0) || (D_80862B4C == 0)) && (((sp2C == 0) && (arg0->transformation == 3)) || (D_80862B48 == 0))) {
            if (func_80830F9C(arg1) != 0) {
                goto block_11;
            }
            goto block_20;
        }
block_11:
        if ((s32) arg0->unk_B28 < 0) {
            arg0->unk_B28 = (s16) -(s32) arg0->unk_B28;
        } else {
            arg0->unk_B28 = (s16) (s32) arg0->unk_B28;
        }
        if (func_808306F8((Actor *) arg0, arg1) != 0) {
            if (func_801240C8(arg0) != 0) {
                arg0->unk_ACE = 1;
            } else {
                phi_a2 = (LinkAnimationHeader *) &D_0400D500;
                if (arg0->transformation == 3) {
                    phi_a2 = &D_0400E2F8;
                }
                SkelAnime_ChangeLinkAnimDefaultStop(arg1, sp24, phi_a2);
            }
        }
    } else {
block_20:
        temp_v0 = arg0->unk_ACC;
        if (temp_v0 != 0) {
            arg0->unk_ACC = temp_v0 - 1;
        }
        if ((func_8082FBE8(arg0) != 0) || (arg0->unk_AA5 != 0) || (arg0->stateFlags1 & 0x100000)) {
            temp_v0_2 = arg0->unk_ACC;
            if (temp_v0_2 == 0) {
                arg0->unk_ACC = temp_v0_2 + 1;
            }
        } else {
            if (func_801240C8(arg0) != 0) {
                func_8082F43C(arg1, (Actor *) arg0, (s32 (*)(Actor *, GlobalContext *)) func_80848B6C);
            } else {
                func_8082F43C(arg1, (Actor *) arg0, func_80849054);
                if (arg0->transformation == 3) {
                    phi_a2_2 = &D_0400E2F8;
                } else {
                    phi_a2_2 = &D_0400D4F8;
                }
                SkelAnime_ChangeLinkAnimDefaultStop(arg1, sp24, phi_a2_2);
            }
            arg0->unk_ACC = 0;
        }
    }
    return 1;
}

s32 func_80849054(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a1;

    temp_a1 = arg0 + 0x284;
    if (((arg0->bgCheckFlags & 1) == 0) || (arg0 = arg0, (func_801360E0(arg1, temp_a1) != 0))) {
        func_8082F43C(arg1, arg0, (s32 (*)(Actor *, GlobalContext *)) func_80848B6C, arg0);
    }
    return 1;
}

s32 func_808490B4(Actor *arg0, GlobalContext *arg1) {
    s16 *sp24;
    SkelAnime *sp20;
    SkelAnime *temp_a1;
    s16 *temp_t6;

    temp_t6 = arg0->unk_34C;
    sp24 = temp_t6;
    if (temp_t6 == 0) {
        func_808309CC(arg1, arg0);
    }
    if (func_80830B88(arg1, (Player *) arg0) != 0) {
        return 1;
    }
    temp_a1 = arg0 + 0x284;
    if ((arg0->unk_A6C & 0x800) != 0) {
        sp20 = temp_a1;
        if (func_801360E0(arg1, temp_a1) != 0) {
            SkelAnime_ChangeLinkAnimDefaultRepeat(arg1, temp_a1, (LinkAnimationHeader *) &D_0400DB30);
        }
        if ((*sp24 == 0x11) && (arg0->velocity.y <= 0.0f)) {
            arg0->minVelocityY = -2.0f;
            arg0->gravity = -0.5f;
            arg0->unk_B68 = (s16) (s32) arg0->world.pos.y;
        }
        return 1;
    }
    return func_80848780((Player *) arg0, arg1);
}

s32 func_808491B4(Player *arg0, GlobalContext *arg1) {
    Player *temp_a1;
    Player *temp_a3;

    temp_a3 = arg0;
    temp_a1 = temp_a3;
    arg0 = temp_a3;
    if (func_80830B88(arg1, temp_a1, (GlobalContext *) temp_a3) != 0) {
        return 1;
    }
    if (arg0->stateFlags1 & 0x2000000) {
        func_8082F43C(arg1, (Actor *) arg0, func_80849570, (Actor *) arg0);
        goto block_6;
    }
    if (func_80831094((Actor *) arg0, arg1, func_80849570, arg0) != 0) {
        return 1;
    }
block_6:
    return 0;
}

s32 func_8084923C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp1C;
    SkelAnime *temp_a1;

    temp_a1 = arg0 + 0x284;
    sp1C = temp_a1;
    if (func_801360E0(arg1, temp_a1) != 0) {
        func_8082F43C(arg1, arg0, func_808492C4);
        SkelAnime_ChangeLinkAnimDefaultRepeat(arg1, sp1C, (LinkAnimationHeader *) &D_0400E3C0);
    }
    if (&D_0400E3C0 == arg0->unk_28C) {
        func_80831010(arg0, arg1);
    }
    return 1;
}

s32 func_808492C4(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp1C;
    SkelAnime *temp_a1;

    temp_a1 = arg0 + 0x284;
    sp1C = temp_a1;
    func_801360E0(arg1, temp_a1);
    func_80831010(arg0, arg1);
    if (D_80862B4C == 0) {
        func_8082F43C(arg1, arg0, func_8084933C);
        SkelAnime_ChangeLinkAnimDefaultStop(arg1, sp1C, (LinkAnimationHeader *) &D_0400E398);
    }
    return 1;
}

s32 func_8084933C(Actor *arg0, GlobalContext *arg1) {
    f32 sp58;
    f32 sp54;
    Actor *sp4C;
    SkelAnime *sp40;
    ActorContext *sp3C;
    Actor *temp_v0_2;
    Actor *temp_v0_4;
    ActorContext *temp_a0;
    SkelAnime *temp_a2;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 phi_t0;
    s32 phi_t0_2;

    temp_a2 = arg0 + 0x284;
    sp40 = temp_a2;
    if (func_801360E0(arg1, temp_a2) != 0) {
        func_8082F43C(arg1, arg0, func_80849570);
        arg0->unk_ACC = 0;
    } else if (func_80136A48(temp_a2, 6.0f) != 0) {
        func_80835BF8(arg0 + 0xC7C, arg0->shape.rot.y, 0.0f, (Vec3f *) &sp54);
        temp_a0 = &arg1->actorCtx;
        sp58 = arg0->world.pos.y + 50.0f;
        temp_v0 = arg0->shape.rot.y;
        if (arg0->unk_730 != 0) {
            phi_t0 = temp_v0 + 0x36B0;
        } else {
            phi_t0 = (s32) (s16) (temp_v0 - 0x190);
        }
        sp3C = temp_a0;
        temp_v0_2 = Actor_Spawn(temp_a0, arg1, 0x20, sp54, sp58, sp5C, (s16) (s32) arg0->focus.rot.x, (s16) phi_t0, (s16) 0, (s16) 0);
        arg0->unk_A7C = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_t8 = arg0->unk_730;
            temp_v0_2->unk_1C4 = temp_t8;
            if (temp_t8 != 0) {
                temp_v0_2->unk_1CF = 0x10;
            }
            temp_v0_2->unk_1CC = (s8) (temp_v0_2->unk_1CF + 0x24);
            sp4C = temp_v0_2;
            func_80835BF8(arg0 + 0xCA0, arg0->shape.rot.y, 0.0f, (Vec3f *) &sp54);
            temp_v0_3 = arg0->shape.rot.y;
            if (arg0->unk_730 != 0) {
                phi_t0_2 = temp_v0_3 - 0x36B0;
            } else {
                phi_t0_2 = (s32) (s16) (temp_v0_3 + 0x190);
            }
            sp4C = temp_v0_2;
            temp_v0_4 = Actor_Spawn(sp3C, arg1, 0x20, sp54, sp58, sp5C, (s16) (s32) arg0->focus.rot.x, (s16) phi_t0_2, (s16) 0, (s16) 1);
            if (temp_v0_4 != 0) {
                temp_t8_2 = arg0->unk_730;
                temp_v0_4->unk_1C4 = temp_t8_2;
                if (temp_t8_2 != 0) {
                    temp_v0_4->unk_1CF = 0x10;
                }
                temp_v0_4->unk_1CC = (s8) (temp_v0_4->unk_1CF + 0x24);
                temp_v0_2->child = temp_v0_4;
                temp_v0_4->parent = temp_v0_2;
            }
            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x2000000);
            arg0->unk_A74 = (s32) (arg0->unk_A74 & 0xFF7FFFFF);
            if (func_80123420((Player *) arg0) == 0) {
                func_8083133C((Player *) arg0);
            }
            arg0->unk_D57 = 0x14;
            func_800B8E58(arg0, 0x1805U);
            func_8082DF8C(arg0, 0x6800U);
        }
    }
    return 1;
}

s32 func_80849570(Player *arg0, GlobalContext *arg1) {
    s32 phi_v0;

    if (func_80830B88(arg1, arg0) != 0) {
        return 1;
    }
    phi_v0 = 0;
    if (arg0->stateFlags3 & 0x800000) {
        func_8082F43C(arg1, (Actor *) arg0, func_80849620);
        SkelAnime_ChangeLinkAnimDefaultStop(arg1, &arg0->unk_284, (LinkAnimationHeader *) &D_0400E3A0);
        arg0->stateFlags3 &= 0xFF7FFFFF;
        func_800B8E58((Actor *) arg0, 0x836U);
        func_8082DF8C((Actor *) arg0, 0x6800U);
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80849620(Player *arg0, GlobalContext *arg1) {
    if ((func_808491B4(arg0, arg1) == 0) && (func_801360E0(arg1, &arg0->unk_284) != 0)) {
        if (arg0->stateFlags1 & 0x2000000) {
            func_8082F43C(arg1, (Actor *) arg0, func_80849570);
            arg0->unk_ACC = 0;
        } else {
            func_8082F43C(arg1, (Actor *) arg0, (s32 (*)(Actor *, GlobalContext *)) func_80848780);
        }
    }
    return 1;
}

void func_808496AC(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s16 phi_v0;

    func_801360E0(arg1, arg0 + 0x240);
    func_808323C0(arg0, arg1->unk_1879C[2]);
    temp_v1 = arg0->unk_AE8;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        arg0->unk_AE8 = (s16) (temp_v1 - 1);
        phi_v0 = arg0->unk_AE8;
    }
    if (phi_v0 == 0) {
        if (func_80152498(&arg1->msgCtx) == 0) {
            func_80838760(arg0);
            func_80831494(arg1, arg0, func_80849FE0, 0);
            arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xDFFFFFFF);
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    if (arg0->unk_AE8 == 0x1E) {
        if (func_80152498(&arg1->msgCtx) != 0) {
            arg0->unk_AE8 = (s16) (arg0->unk_AE8 + 1);
            return;
        }
        func_801518B0(arg1, 0xC03U, NULL);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_808497A0(Player *arg0, GlobalContext *arg1) {
    PosRot *sp24;
    GameInfo *temp_v1;
    GameInfo *temp_v1_2;
    GameInfo *temp_v1_3;
    GameInfo *temp_v1_4;
    PosRot *temp_a2;
    PosRot *temp_a2_2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    arg0->stateFlags3 |= 0x10000000;
    func_801360E0(arg1, arg0 + 0x240);
    func_8083216C(arg0, arg1);
    temp_v1 = gGameInfo;
    temp_a0 = temp_v1->data[544];
    if (temp_a0 == 0) {
        temp_v1->data[544] = 0x14;
        gGameInfo->data[548] = 0;
        temp_v1_2 = gGameInfo;
        temp_v0 = temp_v1_2->data[548];
        temp_v1_2->data[547] = temp_v0;
        gGameInfo->data[546] = temp_v0;
        gGameInfo->data[545] = temp_v0;
        play_sound(0x484DU);
        return;
    }
    if ((s32) temp_a0 > 0) {
        temp_v1->data[548] += temp_a0;
        temp_v1_3 = gGameInfo;
        if ((s32) temp_v1_3->data[548] >= 0x100) {
            temp_v1_3->data[548] = 0xFF;
            if (arg0->unk_B86 == 0) {
                arg0->unk_B86 = 1;
                func_8082DE50(arg1, arg0, &gGameInfo);
                return;
            }
            gGameInfo->data[544] = -0x14;
            arg0->stateFlags1 &= 0xF7FFFFFF;
            arg0->actor.bgCheckFlags &= 0xFFFE;
            func_80123C90(arg1, (Actor *) arg0, &gGameInfo);
            temp_a2 = &arg0->actor.world;
            arg0->prevBoots = arg0->currentBoots;
            if (arg0->unk_3CF != 0) {
                temp_a2_2 = &arg0->actor.world;
                sp24 = temp_a2_2;
                Math_Vec3f_Copy((Vec3f *) temp_a2_2, &arg0->unk_3C0);
                arg0->actor.shape.rot.y = arg0->unk_3CC;
            } else {
                sp24 = temp_a2;
                Math_Vec3f_Copy((Vec3f *) temp_a2, (Vec3f *) gSaveContext.respawn);
                arg0->actor.shape.rot.y = gSaveContext.respawn[0].yaw;
            }
            Math_Vec3f_Copy(&arg0->actor.prevPos, (Vec3f *) &arg0->actor.world);
            arg0->linearVelocity = 0.0f;
            arg0->currentYaw = arg0->actor.shape.rot.y;
            arg0->actor.velocity.y = 0.0f;
            func_8082DB18(arg1, arg0, func_8082ED20((Actor *) arg0));
            if ((arg0->unk_3CE == arg1->roomCtx.currRoom.num) && ((s32) arg1->roomCtx.prevRoom.num < 0)) {
                arg0->unk_AE8 = 5;
                return;
            }
            arg1->roomCtx.currRoom.num = -1;
            arg1->roomCtx.prevRoom.num = -1;
            arg1->roomCtx.currRoom.segment = NULL;
            arg1->roomCtx.prevRoom.segment = NULL;
            func_8012EBF8(arg1, &arg1->roomCtx);
            arg0->unk_AE8 = -1;
            arg0->unk_AE7 = arg0->unk_3CE;
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return;
    }
    temp_v0_2 = arg0->unk_AE8;
    if ((s32) temp_v0_2 < 0) {
        if (Room_StartRoomTransition(arg1, &arg1->roomCtx, (s32) arg0->unk_AE7) != 0) {
            func_8010A33C(arg1, (s16) arg1->roomCtx.currRoom.num);
            func_8010A2DC(arg1);
            arg0->unk_AE8 = 5;
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return;
    }
    if ((s32) temp_v0_2 > 0) {
        arg0->unk_AE8 = temp_v0_2 - 1;
        return;
    }
    temp_v1->data[548] += temp_a0;
    temp_v1_4 = gGameInfo;
    if ((s32) temp_v1_4->data[548] < 0) {
        temp_v1_4->data[548] = 0;
        gGameInfo->data[544] = 0;
        func_808339B4((Actor *) arg0, -0x28, &gGameInfo);
        func_8085B384((Actor *) arg0, arg1);
        arg0->actor.bgCheckFlags |= 1;
    }
}

void func_80849A9C(Actor *arg0, GlobalContext *arg1) {
    f32 sp44;
    s16 sp42;
    s32 sp30;
    s16 temp_v0_3;
    s32 temp_v0;
    u32 temp_v0_2;
    s32 phi_v1;

    if (arg0->unk_AE8 != 0) {
        if (func_801360E0(arg1, arg0 + 0x240) != 0) {
            func_8082E794(arg0);
            func_8082DB3C(arg1, arg0, func_8082EF54(arg0));
            arg0->unk_AE8 = 0;
            arg0->unk_A74 = (s32) (arg0->unk_A74 & ~8);
        }
        func_8082FC60(arg0);
    } else {
        func_8083E958(arg1, arg0);
    }
    func_80832F24(arg0);
    if (func_80833058(arg1, (Player *) arg0, D_8085CFE4, (s8 *)1) == 0) {
        if ((func_8082FB68((Player *) arg0) == 0) && ((func_80123434((Player *) arg0) == 0) || (arg0->unk_AC4 != func_8084894C))) {
            func_8083B29C(arg0, arg1);
            return;
        }
        func_80832F78((s16 *) arg0, (bitwise f32) &sp44, &sp42, NULL, (f32 *) arg1);
        temp_v0 = func_8083E404(arg0, sp44, sp42);
        if (temp_v0 > 0) {
            func_8083A844(arg0, (s16) arg1, sp42);
            return;
        }
        if (temp_v0 < 0) {
            func_8083AF8C(arg0, sp42, arg1);
            return;
        }
        if (sp44 > 4.0f) {
            func_8083B030(arg0, arg1);
            return;
        }
        func_8083EA44(arg0, (arg0->unk_AD0 * 0.3f) + 1.0f);
        func_8083E8E0(arg0, sp44, sp42);
        temp_v0_2 = (u32) arg0->unk_B38;
        if ((temp_v0_2 < 6U) || ((u32) (temp_v0_2 - 0xE) < 6U)) {
            Math_StepToF(arg0 + 0xAD0, 0.0f, 1.5f);
            return;
        }
        temp_v0_3 = sp42 - arg0->unk_AD4;
        phi_v1 = (s32) temp_v0_3;
        if ((s32) temp_v0_3 < 0) {
            phi_v1 = -(s32) temp_v0_3;
        }
        if (phi_v1 >= 0x4001) {
            if (Math_StepToF(arg0 + 0xAD0, 0.0f, 1.5f) != 0) {
                arg0->unk_AD4 = sp42;
                return;
            }
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return;
        }
        sp30 = phi_v1;
        Math_AsymStepToF(arg0 + 0xAD0, sp44 * 0.3f, 2.0f, 1.5f);
        Math_ScaledStepToS(arg0 + 0xAD4, sp42, (s16) (s32) ((f32) phi_v1 * 0.1f));
        /* Duplicate return node #25. Try simplifying control flow for better match */
    }
}

void func_80849DD0(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    s16 sp3A;
    s16 temp_v0_2;
    s32 temp_v0;
    s32 phi_v1;

    if (func_801360E0(arg1, arg0 + 0x240) != 0) {
        func_8082E794(arg0);
        func_8082DB18(arg1, (Player *) arg0, func_8082ED20(arg0));
        arg0->unk_A74 = (s32) (arg0->unk_A74 & ~8);
    }
    func_80832F24(arg0);
    if (func_80833058(arg1, (Player *) arg0, D_8085CFEC, (s8 *)1) == 0) {
        if (func_8082FB68((Player *) arg0) != 0) {
            func_8083B23C(arg0, arg1);
            return;
        }
        if (func_80123434((Player *) arg0) == 0) {
            func_8083172C(arg1, arg0, func_80849FE0, 1);
            arg0->unk_AD4 = (s16) arg0->shape.rot.y;
            return;
        }
        if (arg0->unk_AC4 == func_8084894C) {
            func_8083B23C(arg0, arg1);
            return;
        }
        func_80832F78((s16 *) arg0, (bitwise f32) &sp3C, &sp3A, NULL, (f32 *) arg1);
        temp_v0 = func_8083E514(arg0, &sp3C, &sp3A, arg1);
        if (temp_v0 > 0) {
            func_8083A844(arg0, (s16) arg1, sp3A);
            return;
        }
        if (temp_v0 < 0) {
            func_8083AECC(arg0, sp3A, arg1);
            return;
        }
        if (sp3C > 4.9f) {
            func_8083B030(arg0, arg1);
            func_8082FC60(arg0);
            return;
        }
        if (sp3C != 0.0f) {
            func_8083AF30(arg0, arg1);
            return;
        }
        temp_v0_2 = sp3A - arg0->shape.rot.y;
        phi_v1 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = -(s32) temp_v0_2;
        }
        if (phi_v1 >= 0x321) {
            func_8083B0E4(arg1, arg0, sp3A);
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
    }
}

void func_80849FE0(Player *arg0, GlobalContext *arg1) {
    s32 sp44;
    s32 sp40;
    f32 sp3C;
    s16 sp3A;
    Vec3s *temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0;
    u8 temp_v0_2;
    s16 phi_v0;
    s16 phi_v1;
    s32 phi_v0_2;

    temp_v0 = func_8082ED94(arg0);
    sp44 = temp_v0;
    sp40 = func_801360E0(arg1, &arg0->skelAnime);
    func_8083C85C(arg0);
    if (temp_v0 > 0) {
        func_8082EEA4(arg0, temp_v0 - 1);
    }
    if ((sp40 != 0) || ((temp_v0_2 = arg0->currentMask, (temp_v0_2 == 0x13)) && (&D_0400D0B0 != arg0->skelAnime.animCurrentSeg)) || ((temp_v0_2 != 0x13) && (&D_0400D0B0 == arg0->skelAnime.animCurrentSeg))) {
        temp_v1 = arg0->unk_AE8;
        if (temp_v1 != 0) {
            if (temp_v1 == 0) {
                phi_v0 = 0;
            } else {
                arg0->unk_AE8 = temp_v1 - 1;
                phi_v0 = arg0->unk_AE8;
            }
            phi_v1 = arg0->unk_AE8;
            if (phi_v0 == 0) {
                arg0->skelAnime.animFrameCount = arg0->skelAnime.totalFrames - 1.0f;
                phi_v1 = arg0->unk_AE8;
            }
            temp_v0_3 = arg0->skelAnime.limbDrawTbl;
            temp_v0_3->y = (temp_v0_3->y + ((phi_v1 & 1) * 0x50)) - 0x28;
        } else {
            func_8082E794((Actor *) arg0);
            func_8083EBD0(arg1, (Actor *) arg0);
        }
        arg0->stateFlags3 &= -9;
    }
    func_80832F24((Actor *) arg0);
    if ((arg0->unk_AE8 == 0) && (func_80847880(arg1, (Actor *) arg0) == 0) && (func_80833058(arg1, arg0, D_8085D01C, (s8 *)1) == 0)) {
        if (func_8082FB68(arg0) != 0) {
            func_8083B23C((Actor *) arg0, arg1);
            return;
        }
        if (func_80123434(arg0) != 0) {
            func_8083692C((Actor *) arg0, arg1);
            return;
        }
        func_80832F78((s16 *) arg0, (bitwise f32) &sp3C, &sp3A, (void *)0x3C9374BC, (f32 *) arg1);
        if (sp3C != 0.0f) {
            func_8083A844((Actor *) arg0, (s16) arg1, sp3A);
            return;
        }
        temp_v1_2 = sp3A - arg0->actor.shape.rot.y;
        phi_v0_2 = (s32) temp_v1_2;
        if ((s32) temp_v1_2 < 0) {
            phi_v0_2 = -(s32) temp_v1_2;
        }
        if (phi_v0_2 >= 0x321) {
            func_8083B0E4(arg1, (Actor *) arg0, sp3A);
            return;
        }
        Math_ScaledStepToS(&arg0->actor.shape.rot.y, sp3A, 0x4B0);
        arg0->currentYaw = arg0->actor.shape.rot.y;
        if (func_8082ED20((Actor *) arg0) == arg0->skelAnime.animCurrentSeg) {
            func_8083C6E8((Actor *) arg0, arg1);
        }
        /* Duplicate return node #31. Try simplifying control flow for better match */
    }
}

void func_8084A26C(Actor *arg0, GlobalContext *arg1) {
    f32 sp4C;
    f32 sp44;
    s16 sp42;
    s32 sp34;
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    s16 temp_v0_3;
    s32 *temp_v0;
    s32 temp_v0_2;
    f32 phi_f0;
    s32 phi_v0;
    f32 phi_f2;
    s32 phi_v1;

    arg0->unk_241 = 0;
    temp_a0 = arg0 + 0x240;
    sp2C = temp_a0;
    func_801360A8(temp_a0);
    temp_v0 = func_8082EFE4(arg0);
    arg0->unk_248 = temp_v0;
    if (temp_v0 == &D_0400D520) {
        phi_f0 = 24.0f;
        phi_f2 = -((f32) gGameInfo->data[575] / 100.0f);
    } else {
        phi_f0 = 29.0f;
        phi_f2 = (f32) gGameInfo->data[575] / 100.0f;
    }
    arg0->unk_254 = phi_f0;
    arg0->unk_250 = (f32) (phi_f0 - 1.0f);
    if ((s32) (s16) (arg0->unk_AD4 - arg0->shape.rot.y) >= 0) {
        phi_v0 = 1;
    } else {
        phi_v0 = -1;
    }
    arg0->unk_25C = (f32) ((f32) phi_v0 * (arg0->unk_AD0 * phi_f2));
    sp4C = phi_f0;
    func_801360E0(arg1, sp2C);
    if ((func_80136A48(sp2C, 0.0f) != 0) || (func_80136A48(sp2C, phi_f0 * 0.5f) != 0)) {
        func_8082E12C(arg0, arg0->unk_AD0);
    }
    if (func_80833058(arg1, (Player *) arg0, D_8085CFF8, (s8 *)1) == 0) {
        if (func_8082FB68((Player *) arg0) != 0) {
            func_8083B23C(arg0, arg1);
            return;
        }
        if (func_80123434((Player *) arg0) == 0) {
            func_8085B384(arg0, arg1);
            return;
        }
        func_80832F78((s16 *) arg0, (bitwise f32) &sp44, &sp42, NULL, (f32 *) arg1);
        temp_v0_2 = func_8083E514(arg0, &sp44, &sp42, arg1);
        if (temp_v0_2 > 0) {
            func_8083A844(arg0, (s16) arg1, sp42);
            return;
        }
        if (temp_v0_2 < 0) {
            func_8083AECC(arg0, sp42, arg1);
            return;
        }
        if (sp44 > 4.9f) {
            func_8083B030(arg0, arg1);
            func_8082FC60(arg0);
            return;
        }
        if ((sp44 == 0.0f) && (arg0->unk_AD0 == 0.0f)) {
            func_8083692C(arg0, arg1);
            return;
        }
        temp_v0_3 = sp42 - arg0->unk_AD4;
        phi_v1 = (s32) temp_v0_3;
        if ((s32) temp_v0_3 < 0) {
            phi_v1 = -(s32) temp_v0_3;
        }
        if (phi_v1 >= 0x4001) {
            if (Math_StepToF(arg0 + 0xAD0, 0.0f, 1.5f) != 0) {
                arg0->unk_AD4 = sp42;
                return;
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return;
        }
        sp34 = phi_v1;
        Math_AsymStepToF(arg0 + 0xAD0, sp44 * 0.4f, 1.5f, 1.5f);
        Math_ScaledStepToS(arg0 + 0xAD4, sp42, (s16) (s32) ((f32) phi_v1 * 0.1f));
        /* Duplicate return node #29. Try simplifying control flow for better match */
    }
}

void func_8084A5C0(Player *arg0, GlobalContext *arg1) {
    f32 sp34;
    s16 sp32;
    s32 sp2C;
    s16 sp2A;
    s32 temp_v0;

    func_8083EE60(arg0, arg1);
    if (func_80833058(arg1, arg0, D_8085D004, (s8 *)1) == 0) {
        if (func_8082FC24(arg0) == 0) {
            func_8083A844((Actor *) arg0, (s16) arg1, arg0->currentYaw);
            return;
        }
        func_80832F78((s16 *) arg0, (bitwise f32) &sp34, &sp32, NULL, (f32 *) arg1);
        temp_v0 = func_8083E514((Actor *) arg0, &sp34, &sp32, arg1);
        if (temp_v0 >= 0) {
            sp2C = temp_v0;
            if (func_8083F190(arg0, &sp34, &sp32, (Actor *) arg1) == 0) {
                if (sp2C != 0) {
                    func_8083A794(arg0, arg1);
                    return;
                }
                if (sp34 > 4.9f) {
                    func_8083B030((Actor *) arg0, arg1);
                    return;
                }
                func_8083AF30((Actor *) arg0, arg1);
                return;
            }
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return;
        }
        sp2A = sp32 - arg0->currentYaw;
        Math_AsymStepToF(&arg0->linearVelocity, sp34 * 1.5f, 1.5f, 2.0f);
        Math_ScaledStepToS(&arg0->currentYaw, sp32, (s16) (s32) ((f32) sp2A * 0.1f));
        if ((sp34 == 0.0f) && (arg0->linearVelocity == 0.0f)) {
            func_8083692C((Actor *) arg0, arg1);
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_8084A794(Actor *arg0, GlobalContext *arg1) {
    s32 sp34;
    f32 sp30;
    s16 sp2E;

    sp34 = func_801360E0(arg1, arg0 + 0x240);
    func_80832F24(arg0);
    if ((func_80833058(arg1, (Player *) arg0, D_8085D004, (s8 *)1) == 0) && (func_80832F78((s16 *) arg0, (bitwise f32) &sp30, &sp2E, NULL, (f32 *) arg1), (arg0->unk_AD0 == 0.0f))) {
        arg0->unk_AD4 = (s16) arg0->shape.rot.y;
        if (func_8083E514(arg0, &sp30, &sp2E, arg1) > 0) {
            func_8083A794((Player *) arg0, arg1);
            return;
        }
        if ((sp30 != 0.0f) || (sp34 != 0)) {
            func_8083F230(arg0, arg1);
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_8084A884(Player *arg0, GlobalContext *arg1) {
    s32 sp1C;

    sp1C = func_801360E0(arg1, arg0 + 0x240);
    if ((func_80833058(arg1, arg0, D_8085D004, (s8 *)1) == 0) && (sp1C != 0)) {
        func_8083692C((Actor *) arg0, arg1);
    }
}

void func_8084A8E8(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    s16 sp3A;
    s32 sp2C;
    f32 temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    func_8083F27C(arg1, arg0);
    if (func_80833058(arg1, (Player *) arg0, D_8085D00C, (s8 *)1) == 0) {
        if (func_8082FC24((Player *) arg0) == 0) {
            func_8083A794((Player *) arg0, arg1);
            return;
        }
        func_80832F78((s16 *) arg0, (bitwise f32) &sp3C, &sp3A, NULL, (f32 *) arg1);
        if (func_80123434((Player *) arg0) != 0) {
            phi_v0 = func_8083E514(arg0, &sp3C, &sp3A, arg1);
        } else {
            phi_v0 = func_8083E404(arg0, sp3C, sp3A);
        }
        if (phi_v0 > 0) {
            func_8083A794((Player *) arg0, arg1);
            return;
        }
        if (phi_v0 < 0) {
            if (func_80123434((Player *) arg0) != 0) {
                func_8083AECC(arg0, sp3A, arg1);
                return;
            }
            func_8083AF8C(arg0, sp3A, arg1);
            return;
        }
        if ((arg0->unk_AD0 < 3.6f) && (sp3C < 4.0f)) {
            if ((func_80123420((Player *) arg0) == 0) && (func_80123434((Player *) arg0) != 0)) {
                func_8083AF30(arg0, arg1);
                return;
            }
            func_80836988((Player *) arg0, arg1);
            return;
        }
        func_8083E8E0(arg0, sp3C, sp3A);
        temp_v0 = sp3A - arg0->unk_AD4;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_v1 >= 0x4001) {
            if (Math_StepToF(arg0 + 0xAD0, 0.0f, 3.0f) != 0) {
                arg0->unk_AD4 = sp3A;
                return;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
        temp_f0 = sp3C * 0.9f;
        sp2C = phi_v1;
        temp_a1 = temp_f0;
        sp3C = temp_f0;
        Math_AsymStepToF(arg0 + 0xAD0, temp_a1, 2.0f, 3.0f);
        Math_ScaledStepToS(arg0 + 0xAD4, sp3A, (s16) (s32) ((f32) phi_v1 * 0.1f));
        /* Duplicate return node #24. Try simplifying control flow for better match */
    }
}

void func_8084AB4C(Player *arg0, GlobalContext *arg1) {
    f32 sp34;
    s16 sp32;

    func_801360E0(arg1, arg0 + 0x240);
    if (func_801241B4(arg0) != 0) {
        SkelAnime_LoadLinkAnimetion(arg1, func_8082ED20((Actor *) arg0), 0, (s32) arg0->skelAnime.limbCount, (void *) arg0->skelAnime.transitionDrawTbl);
        SkelAnime_LoadAnimationType3(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.limbDrawTbl, arg0->skelAnime.transitionDrawTbl, D_8085B9F0);
    }
    func_80832F78((s16 *) arg0, (bitwise f32) &sp34, &sp32, (void *)0x3C9374BC, (f32 *) arg1);
    if ((arg0 != arg1->actorCtx.actorList[2].first) && (arg0->unk_730 == 0)) {
        sp32 = arg0->actor.home.rot.y;
    }
    if (func_80833058(arg1, arg0, &D_8085D018, (s8 *)1) == 0) {
        if (sp34 != 0.0f) {
            arg0->actor.shape.rot.y = sp32;
            func_8083A794(arg0, arg1);
        } else if (Math_ScaledStepToS(&arg0->actor.shape.rot.y, sp32, arg0->unk_B4E) != 0) {
            func_80839E74((Actor *) arg0, arg1);
        }
        arg0->currentYaw = arg0->actor.shape.rot.y;
    }
}

void func_8084AC84(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    s16 sp32;
    s16 sp30;
    f32 temp_f0;
    f32 temp_f2;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    if (arg0->unk_AD0 < 1.0f) {
        arg0->unk_248 = &D_0400D228;
    } else {
        arg0->unk_248 = &D_0400D220;
    }
    func_801360E0(arg1, arg0 + 0x240);
    if ((func_80847880(arg1, arg0) == 0) && ((func_80833058(arg1, (Player *) arg0, D_8085D01C, (s8 *)1) == 0) || (arg0->unk_748 == func_8084AC84))) {
        if (~(D_80862B44->cur.button | ~0x4000) != 0) {
            func_80839E74(arg0, arg1);
            return;
        }
        arg0->unk_AD0 = (f32) arg0->unk_B48;
        func_80832F78((s16 *) arg0, (bitwise f32) &sp3C, &sp32, (void *)0x3C9374BC, (f32 *) arg1);
        sp30 = sp32;
        if (func_8083A4A4(arg0, &sp3C, &sp32, (f32) gGameInfo->data[43] / 100.0f) == 0) {
            func_8083CB04((Player *) arg0, sp3C, sp32, (f32) gGameInfo->data[19] / 100.0f, 1.5f, (s16) 0x3E8);
            func_8083C8E8(arg0, arg1);
            if ((arg0->unk_AD0 == 0.0f) && (sp3C == 0.0f)) {
                arg0->unk_AD4 = sp30;
                arg0->shape.rot.y = arg0->unk_AD4;
            }
        }
        temp_f2 = arg0->unk_254 * 0.5f;
        temp_f0 = arg0->unk_258 + 5.0f;
        arg0->unk_B48 = (f32) arg0->unk_AD0;
        arg0->unk_AD0 = (f32) (arg0->unk_AD0 * (Math_CosS((s16) (s32) ((temp_f0 - (temp_f2 * (f32) (s32) (temp_f0 / temp_f2))) * 1000.0f)) * 0.4f));
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_8084AEEC(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    func_801360E0(arg1, arg0 + 0x240);
    func_80832F24(arg0);
    if ((func_80847880(arg1, arg0) == 0) && ((func_80833058(arg1, (Player *) arg0, D_8085D01C, NULL) == 0) || (arg0->unk_748 == func_8084AEEC)) && (~(D_80862B44->cur.button | ~0x4000) != 0)) {
        func_80839E74(arg0, arg1);
    }
}

void func_8084AF9C(Player *arg0, GlobalContext *arg1) {
    f32 sp2C;
    s16 sp2A;

    arg0->stateFlags2 |= 0x20;
    func_8083F57C(arg0, arg1);
    if (func_80833058(arg1, arg0, D_8085D028, (s8 *)1) == 0) {
        if (func_8082FC24(arg0) != 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        func_80832F78((s16 *) arg0, (bitwise f32) &sp2C, &sp2A, (void *)0x3C9374BC, (f32 *) arg1);
        if (arg0->currentMask == 4) {
            sp2C *= 1.5f;
        }
        if (func_8083A4A4((Actor *) arg0, &sp2C, &sp2A, (f32) gGameInfo->data[43] / 100.0f) == 0) {
            func_8083CB58(arg0, (bitwise s16) sp2C, (Player *) sp2A);
            func_8083C8E8((Actor *) arg0, arg1);
            if ((arg0->linearVelocity == 0.0f) && (sp2C == 0.0f)) {
                func_80839E3C(arg0, arg1);
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_8084B0EC(Player *arg0, GlobalContext *arg1) {
    f32 sp2C;
    s16 sp2A;

    arg0->stateFlags2 |= 0x20;
    func_8083F57C(arg0, arg1);
    if (func_80833058(arg1, arg0, D_8085D034, (s8 *)1) == 0) {
        if (func_8082FC24(arg0) == 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        func_80832F78((s16 *) arg0, (bitwise f32) &sp2C, &sp2A, NULL, (f32 *) arg1);
        if (func_8083A4A4((Actor *) arg0, &sp2C, &sp2A, (f32) gGameInfo->data[43] / 100.0f) == 0) {
            if (((func_80123434(arg0) != 0) && (sp2C != 0.0f) && (func_8083E514((Actor *) arg0, &sp2C, &sp2A, arg1) <= 0)) || ((func_80123434(arg0) == 0) && (func_8083E404((Actor *) arg0, sp2C, sp2A) <= 0))) {
                func_80836988(arg0, arg1);
                return;
            }
            func_8083CB58(arg0, (bitwise s16) sp2C, (Player *) sp2A);
            func_8083C8E8((Actor *) arg0, arg1);
            if ((arg0->linearVelocity == 0.0f) && (sp2C == 0.0f)) {
                func_80836988(arg0, arg1);
            }
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_8084B288(Player *arg0, GlobalContext *arg1) {
    s32 sp34;
    f32 sp30;
    s16 sp2E;

    sp34 = func_801360E0(arg1, arg0 + 0x240);
    if (func_80833058(arg1, arg0, D_8085D00C, (s8 *)1) == 0) {
        if (func_8082FC24(arg0) == 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        func_80832F78((s16 *) arg0, (bitwise f32) &sp30, &sp2E, NULL, (f32 *) arg1);
        if ((arg0->skelAnime.transCurrentFrame == 0.0f) && (arg0->skelAnime.animCurrentFrame > 5.0f)) {
            func_80832F24((Actor *) arg0);
            if ((arg0->skelAnime.animCurrentFrame > 10.0f) && (func_8083E404((Actor *) arg0, sp30, sp2E) < 0)) {
                func_8083AF8C((Actor *) arg0, sp2E, arg1);
                return;
            }
            if (sp34 != 0) {
                func_8083B090((Actor *) arg0, arg1);
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_8084B3B8(Actor *arg0, GlobalContext *arg1) {
    s32 sp34;
    f32 sp30;
    s16 sp2E;

    sp34 = func_801360E0(arg1, arg0 + 0x240);
    func_80832F24(arg0);
    if ((func_80833058(arg1, (Player *) arg0, D_8085D044, (s8 *)1) == 0) && (func_80832F78((s16 *) arg0, (bitwise f32) &sp30, &sp2E, NULL, (f32 *) arg1), (arg0->unk_AD0 == 0.0f))) {
        arg0->unk_AD4 = (s16) arg0->shape.rot.y;
        if (func_8083E404(arg0, sp30, sp2E) > 0) {
            func_8083A794((Player *) arg0, arg1);
            return;
        }
        if ((sp30 != 0.0f) || (sp34 != 0)) {
            func_80836988((Player *) arg0, arg1);
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_8084B4A8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 phi_v1;

    if (&D_0400DB10 == arg0->unk_248) {
        if (func_801360E0(arg1, arg0 + 0x240) != 0) {
            func_8082E794(arg0);
            func_8082E438(arg1, arg0, *(&D_8085C16C + (arg0->unk_14F * 4)));
        }
    } else {
        func_8082E67C(arg1, arg0, *(&D_8085C184 + (arg0->unk_14F * 4)));
    }
    temp_v0 = arg0->unk_AE8;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_AE8 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk_AE8;
    }
    if (phi_v1 == 0) {
        if (func_80838A90(arg0, arg1) == 0) {
            func_80836A98((Player *) arg0, *(&D_8085C19C + (arg0->unk_14F * 4)), arg1);
        }
        arg0->flags &= -0x101;
        func_800E0238(Play_GetCamera(arg1, 0));
    }
}

void func_8084B5C0(Actor *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp46;
    f32 sp40;
    SkelAnime *sp34;
    Input *temp_v0;
    SkelAnime *temp_a1;
    s16 temp_a0;
    s16 temp_a1_2;
    s32 temp_a0_2;
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_f4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s16 phi_a1;
    s32 phi_v1;
    s32 phi_v1_2;
    s16 phi_a3;
    s16 phi_a2;

    func_80832F24(arg0);
    temp_a1 = arg0 + 0x240;
    if (arg0->unk_14B == 1) {
        SkelAnime_FrameUpdateMatrix(arg0 + 0x2C8);
        if (func_8083FE38(arg0, arg1) == 0) {
            if (func_8083A274((Player *) arg0, arg1) == 0) {
                arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFBFFFFF);
                if ((s32) arg0->unk_14A < 0) {
                    func_80123C58((GlobalContext *) arg0);
                }
                func_80836A98((Player *) arg0, *(&D_8085C07C + (arg0->unk_14F * 4)), arg1);
                func_80830B38(arg0);
                return;
            }
            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x400000);
            return;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return;
    }
    sp34 = temp_a1;
    if (func_801360E0(arg1, temp_a1) != 0) {
        if (func_801234B0((Player *) arg0) == 0) {
            func_8082DB3C(arg1, arg0, *(&D_8085C064 + (arg0->unk_14F * 4)));
        }
        arg0->unk_AE8 = 1;
        arg0->unk_AE7 = 0;
    }
    if (func_801234B0((Player *) arg0) == 0) {
        arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x400000);
        func_8083216C((Player *) arg0, arg1);
        arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFBFFFFF);
        if (arg0->unk_14B == 2) {
            func_8082F164((Player *) arg0, 0x4010);
        }
    }
    if (arg0->unk_AE8 != 0) {
        temp_v0 = D_80862B44;
        sp54 = (f32) (temp_v0->rel.stick_y * 0xB4);
        sp50 = (f32) ((s32) temp_v0->rel.stick_x * -0x78);
        temp_a0 = arg0->shape.rot.y - func_800DFC68(arg1->cameraPtrs[arg1->activeCamera]);
        sp4E = temp_a0;
        sp40 = Math_CosS(temp_a0);
        temp_f16 = (s32) ((Math_SinS(temp_a0) * sp50) + (sp54 * sp40));
        sp4C = (s16) temp_f16;
        sp40 = Math_CosS(temp_a0);
        temp_a1_2 = (s16) temp_f16;
        temp_a0_2 = (s32) ((sp50 * sp40) - (Math_SinS(temp_a0) * sp54));
        sp4A = (s16) temp_a0_2;
        phi_a1 = temp_a1_2;
        if ((s32) temp_a1_2 >= 0xDAD) {
            phi_a1 = 0xDAC;
        }
        temp_v0_2 = phi_a1 - arg0->focus.rot.x;
        phi_v1 = temp_v0_2;
        if (temp_v0_2 < 0) {
            phi_v1 = -temp_v0_2;
        }
        temp_f10 = (s32) ((f32) phi_v1 * 0.25f);
        phi_a2 = (s16) temp_f10;
        if ((s32) (s16) temp_f10 < 0x64) {
            phi_a2 = 0x64;
        }
        temp_v0_3 = (s16) temp_a0_2 - arg0->unk_AB4;
        if (temp_v0_3 < 0) {
            phi_v1_2 = -temp_v0_3;
        } else {
            phi_v1_2 = temp_v0_3;
        }
        temp_f4 = (s32) ((f32) phi_v1_2 * 0.25f);
        phi_a3 = (s16) temp_f4;
        if ((s32) (s16) temp_f4 < 0x32) {
            phi_a3 = 0x32;
        }
        sp46 = phi_a3;
        Math_ScaledStepToS((s16 *) &arg0->focus.rot, phi_a1, phi_a2);
        arg0->unk_AB2 = (s16) arg0->focus.rot.x;
        Math_ScaledStepToS(arg0 + 0xAB4, sp4A, phi_a3);
        if (arg0->unk_AE7 != 0) {
            if (func_808401F4(arg1, arg0) == 0) {
                if (arg0->unk_258 < 2.0f) {
                    func_8082FA5C((Player *) arg1, arg0, 1);
                }
            } else {
                arg0->unk_AE8 = 1;
                arg0->unk_AE7 = 0;
            }
            goto block_40;
        }
        if (func_8083FE38(arg0, arg1) == 0) {
            if (func_8083A274((Player *) arg0, arg1) != 0) {
                func_8083FD80((Player *) arg0, arg1);
                goto block_40;
            }
            arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFBFFFFF);
            func_8082DC38((Player *) arg0);
            if (func_801234B0((Player *) arg0) != 0) {
                func_80836A5C((Player *) arg0, arg1);
                SkelAnime_ChangeLinkAnim(arg1, sp34, (LinkAnimationHeader *) arg0->unk_248, 1.0f, (f32) SkelAnime_GetFrameCount(arg0->unk_248), 0.0f, (u8) 2, 0.0f);
            } else {
                if ((s32) arg0->unk_14A < 0) {
                    func_80123C58((GlobalContext *) arg0);
                }
                func_80836A98((Player *) arg0, *(&D_8085C07C + (arg0->unk_14F * 4)), arg1);
            }
            func_800B8E58(arg0, 0x1826U);
            return;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return;
    }
block_40:
    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x400000);
    func_801239AC((Player *) arg0);
    arg0->unk_AA6 = (u16) (arg0->unk_AA6 | 0xC1);
}

void func_8084BAA4(Actor *arg0, GlobalContext *arg1) {
    AnimationHeaderCommon *sp38;
    SkelAnime *sp30;
    AnimationHeaderCommon *temp_a0;
    SkelAnime *temp_a2;
    f32 temp_f0;
    s32 temp_v0;

    func_80832F24(arg0);
    if (arg0->unk_AE7 == 0) {
        D_80862B04 = func_8083216C((Player *) arg0, arg1);
        if ((arg0->unk_AC4 == func_8084894C) || (func_808331FC((Player *) arg1, (s8 *) arg0, arg0 + 0x284, 4.0f) > 0)) {
            func_80831494(arg1, arg0, func_80849A9C, 1);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    temp_a2 = arg0 + 0x240;
    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x400000);
    sp30 = temp_a2;
    temp_v0 = func_808331FC((Player *) arg1, (s8 *) arg0, temp_a2, 4.0f);
    if ((temp_v0 != 0) && ((temp_v0 > 0) || (func_801360E0(arg1, sp30) != 0))) {
        func_80831494(arg1, arg0, func_8084B5C0, 1);
        func_801239AC((Player *) arg0);
        temp_a0 = *(&D_8085C04C + (arg0->unk_14F * 4));
        sp38 = temp_a0;
        temp_f0 = (f32) SkelAnime_GetFrameCount(temp_a0);
        SkelAnime_ChangeLinkAnim(arg1, sp30, (LinkAnimationHeader *) sp38, 1.0f, temp_f0, temp_f0, (u8) 2, 0.0f);
    }
}

void func_8084BBF0(Actor *arg0, Player *arg1) {
    s32 sp1C;
    SkelAnime *sp18;
    SkelAnime *temp_a2;
    s32 temp_v0;

    func_80832F24(arg0);
    temp_a2 = arg0 + 0x240;
    sp18 = temp_a2;
    temp_v0 = func_808331FC(arg1, (s8 *) arg0, temp_a2, 16.0f);
    if ((temp_v0 != 0) && ((sp1C = temp_v0, (func_801360E0((GlobalContext *) arg1, temp_a2) != 0)) || (sp1C > 0))) {
        func_80836988((Player *) arg0, (GlobalContext *) arg1);
    }
}

void func_8084BC64(Actor *arg0, GlobalContext *arg1) {
    s16 temp_t2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0_2;
    s32 phi_a2;
    LinkAnimationHeader *phi_a2_2;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x60);
    func_808345A8(arg0);
    if (((arg0->unk_A6C * 4) >= 0) && (arg0->unk_AE8 == 0) && (arg0->unk_B75 != 0)) {
        temp_v0 = arg0->unk_B76;
        temp_t2 = arg0->shape.rot.y;
        arg0->shape.rot.y = temp_v0;
        temp_v1 = temp_t2 - temp_v0;
        arg0->unk_AD4 = temp_v0;
        arg0->unk_AD0 = (f32) arg0->unk_B78;
        if ((s32) temp_v1 < 0) {
            phi_a2 = -(s32) temp_v1;
        } else {
            phi_a2 = (s32) temp_v1;
        }
        if (phi_a2 >= 0x4001) {
            arg0->shape.rot.y = temp_v0 + 0x8000;
        }
        if (arg0->velocity.y < 0.0f) {
            arg0->gravity = 0.0f;
            arg0->velocity.y = 0.0f;
        }
    }
    if ((func_801360E0(arg1, arg0 + 0x240) != 0) && ((arg0->bgCheckFlags & 1) != 0)) {
        temp_v1_2 = arg0->unk_AE8;
        if (temp_v1_2 != 0) {
            arg0->unk_AE8 = (s16) (temp_v1_2 - 1);
            if (arg0->unk_AE8 == 0) {
                func_8085B384(arg0, arg1);
            }
        } else {
            temp_v0_2 = arg0->unk_A6C & 0x20000000;
            if ((temp_v0_2 != 0) || (((arg0->unk_529 & 2) == 0) && (arg0->unk_B75 == 0))) {
                if (temp_v0_2 != 0) {
                    arg0->unk_AE8 = (s16) (temp_v1_2 + 1);
                } else {
                    func_80831494(arg1, arg0, func_8084BE40, 0);
                    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x4000000);
                }
                phi_a2_2 = (LinkAnimationHeader *) &D_0400DAD8;
                if (arg0->shape.rot.y != arg0->unk_AD4) {
                    phi_a2_2 = &D_0400DC80;
                }
                func_8082DB18(arg1, (Player *) arg0, phi_a2_2);
                func_8082DF8C(arg0, 0x6806U);
            }
        }
    }
    if ((arg0->bgCheckFlags & 2) != 0) {
        func_8082E094(arg0, 0x850U);
    }
}

void func_8084BE40(Actor *arg0, GlobalContext *arg1) {
    LinkAnimationHeader *phi_a2;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x60);
    func_808345A8(arg0);
    func_80832F24(arg0);
    if ((func_801360E0(arg1, arg0 + 0x240) != 0) && (arg0->unk_AD0 == 0.0f)) {
        if ((arg0->unk_A6C * 4) < 0) {
            arg0->unk_AE8 = (s16) (arg0->unk_AE8 + 1);
        } else {
            func_80831494(arg1, arg0, func_8084BF28, 0);
            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x4000000);
        }
        phi_a2 = (LinkAnimationHeader *) &D_0400DAE0;
        if (arg0->shape.rot.y != arg0->unk_AD4) {
            phi_a2 = &D_0400DC88;
        }
        func_8082DB90(arg1, arg0, phi_a2);
        arg0->unk_AD4 = (s16) arg0->shape.rot.y;
    }
}

void func_8084BF28(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    SkelAnime *sp20;
    SkelAnime *temp_a2;
    s32 temp_v0;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    func_808345A8(arg0);
    temp_a2 = arg0 + 0x240;
    if ((arg0->unk_A6C * 4) < 0) {
        func_801360E0(arg1, arg0 + 0x240);
    } else {
        sp20 = temp_a2;
        temp_v0 = func_808331FC((Player *) arg1, (s8 *) arg0, temp_a2, 16.0f);
        if ((temp_v0 != 0) && ((sp24 = temp_v0, (func_801360E0(arg1, temp_a2) != 0)) || (sp24 > 0))) {
            func_80836988((Player *) arg0, arg1);
        }
    }
    func_8082E224(arg0, &D_8085D604);
}

void func_8084BFDC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a2;
    s32 temp_v0;
    u32 temp_a0;

    if ((arg0->unk_14B != 1) && (arg0->yDistToWater <= 0.0f) && ((arg1->roomCtx.currRoom.unk2 == 3) || (temp_a0 = D_80862B08, (temp_a0 == 9)) || ((func_808340AC(temp_a0) >= 0) && (func_800C9E88(arg1 + 0x830, arg0->floorPoly, (s32) arg0->floorBgId) == 0)))) {
        func_808344C0(arg1, arg0);
    }
    func_80832F24(arg0);
    temp_a2 = arg0 + 0x240;
    sp24 = temp_a2;
    if (func_801360E0(arg1, temp_a2) != 0) {
        if (arg0 == arg1->actorCtx.actorList[2].first) {
            func_80840770(arg1, arg0, temp_a2);
            return;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return;
    }
    temp_v0 = arg0->unk_248;
    if (&D_0400D698 == temp_v0) {
        func_8082E224(arg0, &D_8085D60C, temp_a2);
        return;
    }
    if ((&D_0400DC28 == temp_v0) && (func_80136A48(temp_a2, 88.0f) != 0)) {
        func_8082E094(arg0, 0x850U);
    }
}

? func_8084C124(GlobalContext *arg1) {
    if (func_80837730(arg1, (Player *)0x40400000, 7e-43.0f) != 0) {
        func_800B8E58((Actor *) arg1, 0x2889U);
        return 1;
    }
    return 0;
}

void func_8084C16C(Player *arg0, f32 *arg1) {
    f32 sp44;
    s16 sp42;
    Actor *sp3C;
    s16 sp3A;
    SkelAnime *sp34;
    Actor *temp_a2;
    SkelAnime *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 temp_v0_2;
    s8 temp_v0;
    u8 temp_v0_3;

    if (func_80123420(arg0) != 0) {
        arg0->actor.gravity = -1.2f;
    }
    if ((arg0->actor.bgCheckFlags & 1) == 0) {
        func_80832F78((s16 *) arg0, (bitwise f32) &sp44, &sp42, NULL, arg1);
        if ((arg0->stateFlags1 & 0x800) != 0) {
            temp_a2 = arg0->leftHandActor;
            sp3C = temp_a2;
            if ((func_808313A8((GlobalContext *) arg1, arg0, temp_a2) == 0) && (temp_a2->id == 0x11) && ((D_80862B44->press.button & 0xC007) != 0)) {
                func_808409A8((GlobalContext *) arg1, arg0, arg0->linearVelocity + 2.0f, arg0->actor.velocity.y + 2.0f);
            }
        }
        temp_a1 = &arg0->skelAnime;
        sp34 = temp_a1;
        func_801360E0((GlobalContext *) arg1, temp_a1);
        if ((&D_0400DD50 == arg0->skelAnime.animCurrentSeg) && (func_80136A48(sp34, 4.0f) != 0)) {
            func_800B8E58((Actor *) arg0, 0x83CU);
        }
        if (arg0->transformation == 3) {
            sp3A = arg0->currentYaw;
            func_808378FC((Actor *) arg1, arg0);
            func_8083CBC4(arg0, sp44 * 0.5f, sp42, 2.0f, 0.2f, 0.1f, (s16) 0x190);
            if (&D_0400E270 == arg0->skelAnime.animCurrentSeg) {
                arg0->stateFlags2 |= 0x60;
                arg0->unk_B08[2] += -800.0f;
                temp_f0 = arg0->unk_B08[2];
                arg0->actor.shape.rot.y += (s32) temp_f0 + (arg0->currentYaw - sp3A);
                Math_StepToF(&arg0->unk_B08[3], 0.0f, temp_f0);
            }
        } else {
            func_8083CBC4(arg0, sp44, sp42, 1.0f, 0.05f, 0.1f, (s16) 0xC8);
        }
        func_8083216C(arg0, (GlobalContext *) arg1);
        if ((((arg0->stateFlags2 & 0x80000) && ((temp_v0 = arg0->unk_AE7, (temp_v0 == 2)) || ((s32) temp_v0 >= 4))) || (func_80839770((Actor *) arg0, (Actor *) arg1) == 0)) && (arg0->actor.velocity.y < 0.0f)) {
            temp_v0_2 = arg0->unk_AE8;
            if ((s32) temp_v0_2 >= 0) {
                if (((arg0->actor.bgCheckFlags & 8) != 0) || (temp_v0_2 == 0) || ((s32) arg0->unk_B6A > 0)) {
                    if ((D_80862B18 > 800.0f) || (arg0->stateFlags3 & 0x10000)) {
                        func_80840980((s32) arg0, 0x6807);
                        arg0->stateFlags3 &= 0xFFFEFFFF;
                    }
                    SkelAnime_ChangeLinkAnim((GlobalContext *) arg1, sp34, &D_0400DD10, 1.0f, 0.0f, 0.0f, (u8) 2, 8.0f);
                    arg0->unk_AE8 = -1;
                }
            } else {
                if ((temp_v0_2 == -1) && ((s32) arg0->unk_B6A >= 0x79) && (D_80862B18 > 280.0f)) {
                    arg0->unk_AE8 = -2;
                    func_80840980((s32) arg0, 0x6808);
                }
                if (((arg0->actor.bgCheckFlags & 0x200) != 0) && ((arg0->stateFlags1 & 0x8000800) == 0) && (arg0->linearVelocity > 0.0f)) {
                    temp_v0_3 = arg0->transformation;
                    if ((temp_v0_3 != 1) && ((temp_v0_3 != 3) || (arg0->unk_B67 != 0))) {
                        temp_f0_2 = arg0->unk_B54;
                        if ((temp_f0_2 >= 150.0f) && (arg0->unk_AE3[arg0->unk_ADE] == 0)) {
                            if (func_8083D860((bitwise Actor *) 150.0f, (GlobalContext *) arg0, (Actor *) arg1) != 0) {
                                func_8084C124((GlobalContext *) arg1, arg0);
                            }
                        } else if ((s32) arg0->unk_B5C >= 2) {
                            temp_f2 = arg0->ageProperties->unk_08;
                            if ((temp_f0_2 < (150.0f * temp_f2)) && ((70.0f * temp_f2) < ((arg0->actor.world.pos.y - arg0->actor.floorHeight) + temp_f0_2))) {
                                func_801358F4((GlobalContext *) arg1);
                                if (arg0->stateFlags3 & 0x10000) {
                                    func_8082DF8C((Actor *) arg0, 0x6819U);
                                } else {
                                    func_8082DF8C((Actor *) arg0, 0x6803U);
                                }
                                arg0->actor.world.pos.y += arg0->unk_B54;
                                func_80837CEC((GlobalContext *) arg1, (Actor *) arg0, arg0->actor.wallPoly, arg0->unk_B58, *(&D_8085C214 + (arg0->modelAnimType * 4)));
                                arg0->currentYaw += 0x8000;
                                arg0->stateFlags1 |= 0x2000;
                                arg0->actor.shape.rot.y = arg0->currentYaw;
                                func_8084C124((GlobalContext *) arg1, arg0);
                            }
                        }
                    }
                }
            }
        }
    } else {
        func_80837134((GlobalContext *) arg1, (Actor *) arg0, &sp42);
        func_8083216C(arg0, (GlobalContext *) arg1);
    }
    func_80838A90((Actor *) arg0, (GlobalContext *) arg1);
}

void func_8084C6EC(Actor *arg0, GlobalContext *arg1) {
    s32 sp44;
    f32 sp3C;
    s16 sp3A;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_v0;
    s32 phi_v0;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x8000000);
    temp_a1 = arg0 + 0x240;
    sp30 = temp_a1;
    sp44 = func_801360E0(arg1, temp_a1);
    if (func_80136A48(sp30, 8.0f) != 0) {
        func_808339B4(arg0, -0xA);
    }
    temp_f0 = arg0->unk_258;
    if (temp_f0 >= 8.0f) {
        if (temp_f0 < 18.0f) {
            func_8082F0E4(arg0, 0x4000000, 1, 0xC);
        } else {
            func_8082F09C(arg0, 0x4000000, 1);
        }
    }
    if (func_8083FE38(arg0, arg1) == 0) {
        if (arg0->unk_AE8 != 0) {
            Math_StepToF(arg0 + 0xAD0, 0.0f, 2.0f);
            temp_v0 = func_808331FC((Player *) arg1, (s8 *) arg0, sp30, 5.0f);
            if ((temp_v0 != 0) && ((temp_v0 > 0) || (sp44 != 0))) {
                func_80836A5C((Player *) arg0, arg1);
                return;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return;
        }
        if (func_80840A30((Actor *) arg1, arg0, arg0 + 0xAD0, 6.0f) == 0) {
            if (!(arg0->unk_258 < 15.0f)) {
                if (func_80848570(arg0, arg1) == 0) {
                    goto block_16;
                }
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return;
            }
block_16:
            if (arg0->unk_258 >= 20.0f) {
                func_80836A5C((Player *) arg0, arg1, &sp3A, 0x3C930000);
                return;
            }
            func_80832F78((s16 *) arg0, (bitwise f32) &sp3C, &sp3A, (void *)0x3C9374BC, (f32 *) arg1);
            temp_f0_2 = sp3C * 1.5f;
            if ((temp_f0_2 < 3.0f) || (sp3C = temp_f0_2, ((arg0 + arg0->unk_ADE)->unk_AE3 != 0))) {
                sp3C = 3.0f;
            }
            func_8083CB58((Player *) arg0, (bitwise s16) sp3C, (Player *) arg0->shape.rot.y);
            if (func_8083FBC4(arg1, (GlobalContext *) arg0) != 0) {
                phi_v0 = 0xC1;
                if (arg0->unk_B72 == 0xE) {
                    phi_v0 = 0x1AE;
                }
                func_800B8F98(arg0, phi_v0 & 0xFFFF);
            }
            func_8082E224(arg0, &D_8085D61C);
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
    }
}

void func_8084C94C(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    if (func_801360E0(arg1, arg0 + 0x240) != 0) {
        func_8082DB3C(arg1, arg0, (LinkAnimationHeader *) &D_0400DE60);
    }
    Math_StepToF(arg0 + 0xAD0, 0.0f, 0.05f);
    if ((arg0->bgCheckFlags & 1) != 0) {
        if ((s32) arg0->unk_B6A >= 0x190) {
            arg0->colChkInfo.damage = 0x10;
            func_80833B18(arg1, arg0, (Actor *)1, 4.0f, 5.0f, (s16) (s32) arg0->shape.rot.y, 0x14);
            return;
        }
        func_80836B3C(arg1, arg0, 4.0f);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_8084CA24(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    if (func_801360E0(arg1, arg0 + 0x240) != 0) {
        func_8082DB60(arg1, arg0, (LinkAnimationHeader *) &D_0400E3D8);
    }
    Math_SmoothStepToS(arg0 + 0xB88, 0, 6, 0x7D0, (s16) 0x190);
    if (func_80840A30((Actor *) arg1, arg0, arg0 + 0xAD0, 0.0f) == 0) {
        if ((arg0->bgCheckFlags & 1) != 0) {
            if ((s32) arg0->unk_AAA >= 0x36B1) {
                arg0->colChkInfo.damage = 0x10;
                func_80833B18(arg1, arg0, (Actor *)1, 4.0f, 5.0f, (s16) (s32) arg0->shape.rot.y, 0x14);
                return;
            }
            func_80836B3C(arg1, arg0, 4.0f);
            return;
        }
        arg0->gravity = -1.0f;
        arg0->unk_AAA = Math_FAtan2F(arg0->speedXZ, -arg0->velocity.y);
        func_8082F164((Player *) arg0, 0x10);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_8084CB58(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    s16 sp36;
    f32 temp_f18;
    u8 temp_t3;
    void *temp_v1;
    f32 phi_f18;

    temp_v1 = (arg0->unk_ADA * 0x10) + &D_8085CD30;
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    if (arg0->unk_14B == 2) {
        arg0->gravity = -0.8f;
    } else {
        arg0->gravity = -1.2f;
    }
    sp3C = temp_v1;
    func_801360E0(arg1, arg0 + 0x240);
    if (func_808401F4(arg1, arg0) == 0) {
        temp_t3 = temp_v1->unk_D;
        temp_f18 = (f32) temp_t3;
        phi_f18 = temp_f18;
        if ((s32) temp_t3 < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        func_8083FCF0(arg1, (Player *) arg0, (Actor *)0x40C00000, (f32) temp_v1->unk_C, phi_f18);
        if ((arg0->bgCheckFlags & 1) == 0) {
            func_80832F78((s16 *) arg0, (bitwise f32) &sp38, &sp36, NULL, (f32 *) arg1);
            func_8083CBC4((Player *) arg0, sp38, arg0->unk_AD4, 1.0f, 0.05f, 0.1f, (s16) 0xC8);
            return;
        }
        if (func_80836F10(arg1, arg0, &sp36) >= 0) {
            arg0->unk_ADA = (s8) (arg0->unk_ADA + 3);
            func_80833864(arg1, arg0, (s32) arg0->unk_ADA);
            arg0->unk_ADD = 3;
            arg0->unk_ADB = 0;
            func_8082E1BC(arg0);
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_8084CCEC(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    s16 sp32;
    s32 temp_v0;

    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x1000);
    if (func_801360E0(arg1, arg0 + 0x240) != 0) {
        func_8082E794(arg0);
        func_8083133C((Player *) arg0);
        arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFFDFFFF);
        func_8082DB3C(arg1, arg0, *(&D_8085CF60 + (func_801241B4((Player *) arg0) * 4)));
        arg0->unk_AE8 = -1;
    }
    func_80832F24(arg0);
    if ((func_8083FE38(arg0, arg1) == 0) && (arg0->unk_AE8 != 0)) {
        func_80840F34(arg0);
        if ((s32) arg0->unk_AE8 < 0) {
            if (arg0->unk_B08 >= 0.1f) {
                arg0->unk_ADD = 0;
                arg0->unk_AE8 = 1;
                return;
            }
            if (~(D_80862B44->cur.button | ~0x4000) != 0) {
                func_80840E5C((Player *) arg0, arg1);
                return;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        if (func_80840CD4(arg0, arg1) == 0) {
            func_80832F78((s16 *) arg0, (bitwise f32) &sp34, &sp32, NULL, (f32 *) arg1);
            temp_v0 = func_8083E7F8(arg0, &sp34, &sp32, arg1);
            if (temp_v0 > 0) {
                func_80840DEC(arg0, arg1);
                return;
            }
            if (temp_v0 < 0) {
                func_80840E24(arg0, arg1);
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

void func_8084CE84(s32 (*arg0)(Actor *, GlobalContext *), GlobalContext *arg1) {
    f32 sp5C;
    Player *sp58;
    f32 sp54;
    s16 sp52;
    s32 sp44;
    s32 sp38;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_v0_2;
    s32 phi_v1;
    f32 phi_f0;
    f32 phi_f12;
    Player *phi_f12_2;
    s32 phi_v1_2;
    Player *phi_f0_2;

    temp_v0 = arg0->unk_AD4 - arg0->unk_BE;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    temp_f16 = fabsf(arg0->unk_AD0);
    temp_f12 = temp_f16 * 1.5f;
    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x1000);
    phi_f12 = temp_f12;
    if (temp_f12 < 1.5f) {
        phi_f12 = 1.5f;
    }
    if (phi_v1 < 0x4000) {
        phi_f0 = -1.0f;
    } else {
        phi_f0 = 1.0f;
    }
    temp_f12_2 = phi_f0 * phi_f12;
    sp5C = temp_f16;
    func_8083EA44((bitwise Actor *) temp_f12_2, 1.5f, (bitwise f32) arg0, temp_f12_2);
    temp_f2 = temp_f16 * 0.5f;
    if (temp_f2 < 0.5f) {
        phi_f12_2 = (bitwise Player *) 0.5f;
    } else {
        if (temp_f2 > 1.0f) {
            phi_f0_2 = (Player *)0x3F800000;
        } else {
            phi_f0_2 = (bitwise Player *) temp_f2;
        }
        phi_f12_2 = phi_f0_2;
    }
    sp58 = phi_f12_2;
    sp38 = func_801241B4(phi_f12_2, (bitwise Player *) 0.5f, arg0);
    func_8013682C(arg1, arg0 + 0x240, *(&D_8085CF60 + (sp38 * 4)), 0.0f, *(&D_8085CF70 + (func_801241B4((Player *) arg0) * 4)), arg0->unk_B38 * 0.7241379f, (bitwise f32) phi_f12_2, arg0 + 0x88A);
    if ((func_8083FE38((Actor *) arg0, arg1) == 0) && (func_80840CD4((Actor *) arg0, arg1) == 0)) {
        func_80840F34((Actor *) arg0);
        func_80832F78((s16 *) arg0, (bitwise f32) &sp54, &sp52, NULL, (f32 *) arg1);
        temp_v0_2 = func_8083E7F8((Actor *) arg0, &sp54, &sp52, arg1);
        if (temp_v0_2 < 0) {
            func_80840E24((Actor *) arg0, arg1);
            return;
        }
        if (temp_v0_2 == 0) {
            sp54 = 0.0f;
            sp52 = arg0->unk_AD4;
        }
        temp_v0_3 = sp52 - arg0->unk_AD4;
        phi_v1_2 = (s32) temp_v0_3;
        if ((s32) temp_v0_3 < 0) {
            phi_v1_2 = -(s32) temp_v0_3;
        }
        if (phi_v1_2 >= 0x4001) {
            if (Math_StepToF(arg0 + 0xAD0, 0.0f, 1.0f) != 0) {
                arg0->unk_AD4 = sp52;
                return;
            }
            /* Duplicate return node #27. Try simplifying control flow for better match */
            return;
        }
        sp44 = phi_v1_2;
        Math_AsymStepToF(arg0 + 0xAD0, sp54 * 0.2f, 1.0f, 0.5f);
        Math_ScaledStepToS(arg0 + 0xAD4, sp52, (s16) (s32) ((f32) phi_v1_2 * 0.1f));
        if ((sp54 == 0.0f) && (arg0->unk_AD0 == 0.0f)) {
            func_80840EC0((Actor *) arg0, arg1);
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
    }
}

void func_8084D18C(Actor *arg0, GlobalContext *arg1) {
    f32 sp5C;
    Player *sp58;
    f32 sp54;
    s16 sp52;
    s32 sp44;
    s32 sp38;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_v0;
    s16 phi_v0;
    f32 phi_f2;
    s32 phi_v0_2;
    Actor *phi_f12;
    Player *phi_f12_2;
    s32 phi_v1;
    Player *phi_f2_2;

    temp_f0 = fabsf(arg0->unk_AD0);
    sp5C = temp_f0;
    arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x1000);
    if (temp_f0 == 0.0f) {
        temp_v1 = arg0->unk_B4C;
        phi_v0 = temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = (s16) -(s32) temp_v1;
        }
        temp_f2 = (f32) phi_v0 * 0.0015f;
        phi_f2 = temp_f2;
        phi_v0_2 = -1;
        if (temp_f2 < 400.0f) {
            phi_f2 = 0.0f;
        }
        if ((s32) temp_v1 >= 0) {
            phi_v0_2 = 1;
        }
        sp5C = phi_f2;
        func_8083EA44(arg0, (f32) phi_v0_2 * phi_f2);
    } else {
        temp_f12 = temp_f0 * 1.5f;
        phi_f12 = (bitwise Actor *) temp_f12;
        if (temp_f12 < 1.5f) {
            phi_f12 = (bitwise Actor *) 1.5f;
        }
        func_8083EA44(phi_f12, 1.5f, (bitwise f32) arg0, (bitwise f32) phi_f12);
    }
    temp_f0_2 = sp5C * 0.5f;
    if (temp_f0_2 < 0.5f) {
        phi_f12_2 = (bitwise Player *) 0.5f;
    } else {
        if (temp_f0_2 > 1.0f) {
            phi_f2_2 = (Player *)0x3F800000;
        } else {
            phi_f2_2 = (bitwise Player *) temp_f0_2;
        }
        phi_f12_2 = phi_f2_2;
    }
    sp58 = phi_f12_2;
    sp38 = func_801241B4(phi_f12_2, (bitwise Player *) 0.5f, (s32 (*)(Actor *, GlobalContext *)) arg0);
    func_8013682C(arg1, arg0 + 0x240, *(&D_8085CF60 + (sp38 * 4)), 0.0f, *(&D_8085CF78 + (func_801241B4((Player *) arg0) * 4)), arg0->unk_B38 * 0.7241379f, (bitwise f32) phi_f12_2, arg0 + 0x88A);
    if ((func_8083FE38(arg0, arg1) == 0) && (func_80840CD4(arg0, arg1) == 0)) {
        func_80840F34(arg0);
        func_80832F78((s16 *) arg0, (bitwise f32) &sp54, &sp52, NULL, (f32 *) arg1);
        temp_v0 = func_8083E7F8(arg0, &sp54, &sp52, arg1);
        if (temp_v0 > 0) {
            func_80840DEC(arg0, arg1);
            return;
        }
        if (temp_v0 == 0) {
            sp54 = 0.0f;
            sp52 = arg0->unk_AD4;
        }
        temp_v0_2 = sp52 - arg0->unk_AD4;
        phi_v1 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = -(s32) temp_v0_2;
        }
        if (phi_v1 >= 0x4001) {
            if (Math_StepToF(arg0 + 0xAD0, 0.0f, 1.0f) != 0) {
                arg0->unk_AD4 = sp52;
                return;
            }
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return;
        }
        sp44 = phi_v1;
        Math_AsymStepToF(arg0 + 0xAD0, sp54 * 0.2f, 1.0f, 0.5f);
        Math_ScaledStepToS(arg0 + 0xAD4, sp52, (s16) (s32) ((f32) phi_v1 * 0.1f));
        if ((sp54 == 0.0f) && (arg0->unk_AD0 == 0.0f) && (sp5C == 0.0f)) {
            func_80840EC0(arg0, arg1);
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
    }
}

void func_8084D4EC(Actor *arg0, GlobalContext *arg1) {
    s32 sp3C;
    SkelAnime *sp2C;
    SkelAnime *temp_a1;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f0_3;
    f32 phi_f0_4;

    temp_a1 = arg0 + 0x240;
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    sp2C = temp_a1;
    temp_v0 = func_801360E0(arg1, temp_a1);
    if (&D_0400DA70 == arg0->unk_248) {
        arg0->unk_AD0 = 1.0f;
        if (func_80136A48(sp2C, 8.0f) != 0) {
            temp_f0 = arg0->unk_B54;
            temp_f2 = arg0->unk_A68->unk_C;
            phi_f0_4 = temp_f0;
            if (temp_f2 < temp_f0) {
                phi_f0_4 = temp_f2;
            }
            if ((arg0->unk_A6C * 0x10) < 0) {
                phi_f0_3 = phi_f0_4 * 0.085f;
            } else {
                phi_f0_3 = phi_f0_4 * 0.072f;
            }
            phi_f0 = phi_f0_3;
            if (arg0->unk_14B == 4) {
                phi_f0 = phi_f0_3 + 1.0f;
            }
            func_80834D50(arg1, arg0, NULL, phi_f0, (u16) 0x6814);
            arg0->unk_AE8 = -1;
            return;
        }
        /* Duplicate return node #30. Try simplifying control flow for better match */
        return;
    }
    sp3C = temp_v0;
    temp_v0_2 = func_808331FC((Player *) arg1, (s8 *) arg0, sp2C, 4.0f);
    if (temp_v0_2 == 0) {
        arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFFBBFFB);
        return;
    }
    if ((temp_v0 != 0) || (temp_v0_2 > 0)) {
        func_80839E74(arg0, arg1);
        arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFFBBFFB);
        arg0->unk_ABC = 0.0f;
        return;
    }
    temp_v0_3 = arg0->unk_248;
    phi_f0_2 = 0.0f;
    if (&D_0400DFC8 == temp_v0_3) {
        if (func_80136A48(sp2C, 30.0f) != 0) {
            func_8083B32C(arg1, (Player *) arg0, 10.0f);
        }
        phi_f0_2 = 50.0f;
    } else if (&D_0400DA68 == temp_v0_3) {
        phi_f0_2 = 30.0f;
    } else if (&D_0400DA60 == temp_v0_3) {
        phi_f0_2 = 16.0f;
    }
    if (func_80136A48(sp2C, phi_f0_2) != 0) {
        func_8082E1BC(arg0);
        func_8082DF8C(arg0, 0x6804U);
    }
    if ((&D_0400DA60 == arg0->unk_248) || (arg0->unk_258 > 5.0f)) {
        if (arg0->unk_AE8 == 0) {
            func_8082E188(arg0);
            arg0->unk_AE8 = 1;
        }
        Math_SmoothStepToF(arg0 + 0xABC, 0.0f, 0.1f, 400.0f, 150.0f);
    }
}

void func_8084D770(Actor *arg0, GlobalContext *arg1) {
    s32 temp_t7;

    temp_t7 = arg0->unk_A70 | 0x60;
    arg0->unk_A70 = temp_t7;
    if (func_80837BF8 == arg0->unk_D58) {
        arg0->unk_A70 = (s32) (temp_t7 | 1);
    }
    func_801360E0(arg1, arg0 + 0x240);
    func_8083249C(arg0);
    if ((((arg0->unk_A6C & 0x800) != 0) && (arg0->unk_34C != 0) && (arg0->unk_384 == 0)) || (func_8083216C((Player *) arg0, arg1) == 0)) {
        arg0->unk_D58(arg1, arg0);
    }
}

void func_8084D820(Actor *arg0, GlobalContext *arg1) {
    f32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    f32 sp5C;
    s32 sp58;
    TransitionActorEntry *sp50;
    PosRot *sp38;
    Vec3f *sp34;
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_4;
    GameInfo *temp_v0_5;
    GameInfo *temp_v0_6;
    PosRot *temp_a1_3;
    Room *temp_t9;
    RoomContext *temp_a1_2;
    TransitionActorEntry *temp_t5;
    TransitionActorEntry *temp_v1_4;
    Vec3f *temp_a3;
    f32 *temp_a2;
    s16 temp_v0_3;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_t0;
    s32 temp_t0_2;
    s8 temp_a0;
    s8 temp_a1;
    s8 temp_t6;
    s8 phi_v1;
    f32 phi_f0;
    s32 phi_t0;
    s32 phi_v1_2;
    f32 phi_f0_2;

    if (func_80838A90(arg0, arg1) == 0) {
        if (((arg0->unk_A74 & 0x10) != 0) && ((arg0->bgCheckFlags & 1) == 0)) {
            func_80833AA0(arg0, arg1);
            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x20000000);
        } else if (arg0->unk_AE8 == 0) {
            func_801360E0(arg1, arg0 + 0x240);
            temp_a0 = arg0->unk_37E;
            if (temp_a0 == 0) {
                phi_v1 = 0;
            } else {
                arg0->unk_37E = (s8) (temp_a0 - 1);
                phi_v1 = arg0->unk_37E;
            }
            if (phi_v1 == 0) {
                arg0->unk_AE8 = 1;
                arg0->unk_AD0 = 0.1f;
            }
        } else if (arg0->unk_AE7 == 0) {
            temp_a2 = &sp6C;
            sp6C = 5.0f * D_8085C3E4;
            temp_t0 = func_808411D4(arg1, (GlobalContext *) arg0, (Player **) temp_a2, -1);
            phi_t0 = temp_t0;
            if (arg0->unk_397 == 4) {
                temp_v0 = gGameInfo;
                temp_v1 = temp_v0->data[544];
                if ((s32) temp_v1 < 0) {
                    if (arg1->roomCtx.unk31 != 1) {
                        temp_v0->data[548] += temp_v1;
                        temp_v0_2 = gGameInfo;
                        if ((s32) temp_v0_2->data[548] < 0) {
                            temp_v0_2->data[548] = 0;
                        }
                        if (arg0->unk_37D != 0) {
                            phi_f0 = 3.0f;
                        } else {
                            phi_f0 = -3.0f;
                        }
                        arg0->world.pos.y += phi_f0;
                        arg0->prevPos.y = arg0->world.pos.y;
                    }
                } else if (temp_v1 == 0) {
                    sp68 = temp_t0;
                    temp_t0_2 = temp_t0;
                    phi_t0 = temp_t0_2;
                    if (func_80835DF8((? *) arg1, arg0, &sp64, &sp60) != 0) {
                        arg0->floorPoly = (CollisionPoly *) sp64;
                        arg0->floorBgId = (u8) sp60;
                    }
                }
            }
            if (phi_t0 < 0x1E) {
                arg0->unk_AE7 = 1;
                arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x20000000);
                arg0->unk_3A0 = (f32) arg0->unk_3AC;
                arg0->unk_3A8 = (f32) arg0->unk_3B4;
            }
        } else {
            sp58 = 0x14;
            sp5C = 5.0f;
            if ((arg0->unk_A6C & 1) != 0) {
                sp5C = gSaveContext.entranceSpeed;
                if (D_80862B10 != 0) {
                    arg0->unk_3A0 = (f32) ((Math_SinS(D_80862B16) * 400.0f) + arg0->world.pos.x);
                    arg0->unk_3A8 = (f32) ((Math_CosS(D_80862B16) * 400.0f) + arg0->world.pos.z);
                }
            } else {
                temp_v0_3 = arg0->unk_AE8;
                if ((s32) temp_v0_3 < 0) {
                    arg0->unk_AE8 = (s16) (temp_v0_3 + 1);
                    sp58 = -1;
                    sp5C = gSaveContext.entranceSpeed;
                } else if (arg0->unk_397 == 4) {
                    temp_v0_4 = gGameInfo;
                    temp_v1_2 = temp_v0_4->data[544];
                    if (temp_v1_2 == 0) {
                        temp_v0_4->data[544] = 0x10;
                        gGameInfo->data[548] = 0;
                        temp_v0_5 = gGameInfo;
                        temp_v1_3 = temp_v0_5->data[548];
                        temp_v0_5->data[547] = temp_v1_3;
                        gGameInfo->data[546] = temp_v1_3;
                        gGameInfo->data[545] = temp_v1_3;
                    } else if ((s32) temp_v1_2 >= 0) {
                        temp_v0_4->data[548] += temp_v1_2;
                        temp_v0_6 = gGameInfo;
                        if ((s32) temp_v0_6->data[548] >= 0x100) {
                            temp_t6 = arg0->unk_37F;
                            temp_t5 = arg1->doorCtx.transitionActorList;
                            temp_v1_4 = &temp_t5[temp_t6];
                            temp_v0_6->data[548] = 0xFF;
                            temp_a1 = arg1->roomCtx.currRoom.num;
                            if ((temp_v1_4->sides[0].room != temp_a1) && ((s32) temp_a1 >= 0)) {
                                temp_a1_2 = &arg1->roomCtx;
                                temp_t9 = &arg1->roomCtx.prevRoom;
                                temp_t9->unk_0 = (s32) temp_a1_2->unk_0;
                                temp_t9->unk_4 = (s32) temp_a1_2->unk_4;
                                temp_t9->mesh = temp_a1_2->currRoom.mesh;
                                temp_t9->segment = temp_a1_2->currRoom.segment;
                                temp_t9->unk_10 = temp_a1_2->currRoom.unk_10;
                                arg1->roomCtx.currRoom.num = -1;
                                arg1->roomCtx.currRoom.segment = NULL;
                                func_8012EBF8(arg1, temp_a1_2);
                            } else {
                                gGameInfo->data[544] = -0x10;
                                if ((s32) arg1->roomCtx.currRoom.num < 0) {
                                    sp50 = temp_v1_4;
                                    Room_StartRoomTransition(arg1, &arg1->roomCtx, (s32) temp_v1_4->sides[0].room);
                                    arg1->roomCtx.prevRoom.num = -1;
                                    arg1->roomCtx.prevRoom.segment = NULL;
                                }
                                arg0->world.pos.x = (f32) temp_t5[temp_t6].pos.x;
                                arg0->world.pos.y = (f32) temp_t5[temp_t6].pos.y;
                                arg0->world.pos.z = (f32) temp_t5[temp_t6].pos.z;
                                arg0->shape.rot.y = (s16) (s32) (((f32) (((s32) temp_t5[temp_t6].rotY >> 7) & 0x1FF) / 180.0f) * 32768.0f);
                                if (arg0->unk_37D != 0) {
                                    D_8085D62C.x = -120.0f;
                                } else {
                                    D_8085D62C.x = 120.0f;
                                }
                                if (arg0->unk_37D != 0) {
                                    D_8085D630 = -75.0f;
                                } else {
                                    D_8085D630 = 75.0f;
                                }
                                D_8085D634 = -240.0f;
                                if (arg0->unk_37D != 0) {
                                    func_800DFFAC(arg1->cameraPtrs[0], arg0, -2, 0, temp_t5[temp_t6].pos.x + 0x32, temp_t5[temp_t6].pos.y + 0x5F, temp_t5[temp_t6].pos.z - 0x32);
                                } else {
                                    func_800DFFAC(arg1->cameraPtrs[0], arg0, -2, 0, temp_t5[temp_t6].pos.x - 0x32, temp_t5[temp_t6].pos.y + 5, temp_t5[temp_t6].pos.z - 0x32);
                                }
                                temp_a1_3 = &arg0->world;
                                sp38 = temp_a1_3;
                                func_80835BC8(arg0, (Vec3f *) temp_a1_3, &D_8085D62C, (Vec3f *) temp_a1_3);
                                if (arg0->unk_37D != 0) {
                                    D_8085D638.x = 130.0f;
                                } else {
                                    D_8085D638.x = -130.0f;
                                }
                                temp_a3 = arg0 + 0x3A0;
                                sp34 = temp_a3;
                                D_8085D640 = 160.0f;
                                func_80835BC8(arg0, (Vec3f *) temp_a1_3, &D_8085D638, temp_a3);
                                D_8085D64C = 160.0f;
                                func_80835BC8(arg0, sp34, &D_8085D644, arg0 + 0x3AC);
                                phi_v1_2 = -0x4000;
                                if (arg0->unk_37D != 0) {
                                    phi_v1_2 = 0x4000;
                                }
                                arg0->unk_AE7 = 0;
                                arg0->shape.rot.y += phi_v1_2;
                                temp_v0_7 = arg0->shape.rot.y;
                                arg0->unk_AD4 = temp_v0_7;
                                arg0->world.rot.y = temp_v0_7;
                            }
                        }
                        if (arg0->unk_37D != 0) {
                            phi_f0_2 = 3.0f;
                        } else {
                            phi_f0_2 = -3.0f;
                        }
                        arg0->world.pos.y += phi_f0_2;
                        arg0->prevPos.y = arg0->world.pos.y;
                    }
                }
            }
            if ((arg0->unk_AE8 == 0) || ((func_808411D4(arg1, (GlobalContext *) arg0, (Player **) &sp5C, sp58) == 0) && (arg0->unk_AD0 == 0.0f) && ((Play_GetCamera(arg1, 0)->flags2 & 0x10) != 0))) {
                if (arg0->unk_397 == 4) {
                    sp34 = arg1 + 0x18000;
                    func_8010A33C(arg1, (s16) arg1->roomCtx.currRoom.num);
                    func_8010A2DC(arg1);
                }
                gGameInfo->data[544] = 0;
                sp34 = arg1 + 0x18000;
                func_800E0238(Play_GetCamera(arg1, 0));
                func_80838760(arg0);
                if ((arg0->unk_A74 << 0xE) >= 0) {
                    sp34 = arg1 + 0x18000;
                    func_801226E0(arg1, gSaveContext.respawn[0].data, (s32) (arg1 + 0x18000));
                }
                if ((arg1 + 0x18000)->unk_87C != 0) {
                    (arg1 + 0x18000)->unk_780(arg0, arg1, arg1 + 0x18000);
                    func_80831494(arg1, arg0, func_80854430, 0);
                    if (arg1->sceneNum == 0x45) {
                        arg1->unk_1887C = 0;
                    }
                } else if (func_808391D8((Player *) arg0, arg1, arg1 + 0x18000) == 0) {
                    func_8083B2E4(arg0, arg1);
                }
            }
        }
    }
    if ((arg0->unk_A6C & 0x800) != 0) {
        func_8083216C((Player *) arg0, arg1);
    }
}

void func_8084E034(Actor *arg0, ? *arg1) {
    void *sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    SkelAnime *sp20;
    SkelAnime *temp_a1;
    s32 temp_v0;
    s8 temp_v1;
    s8 temp_v1_2;
    void *temp_t6;
    s32 phi_v0;
    s8 phi_v0_2;
    s8 phi_v0_3;
    s16 phi_v0_4;

    temp_t6 = arg0->unk_380;
    temp_v0 = temp_t6 != 0;
    sp3C = temp_t6;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = temp_t6->unk_1A4 == 7;
    }
    sp38 = phi_v0;
    temp_v1 = arg0->unk_AE7;
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    if (temp_v1 == 0) {
        phi_v0_2 = 0;
    } else {
        arg0->unk_AE7 = (s8) (temp_v1 - 1);
        phi_v0_2 = arg0->unk_AE7;
    }
    if (phi_v0_2 == 0) {
        func_80835DF8(arg1, arg0, &sp30, &sp2C);
    }
    temp_a1 = arg0 + 0x240;
    sp20 = temp_a1;
    sp34 = func_801360E0((GlobalContext *) arg1, temp_a1);
    func_8083216C((Player *) arg0, (GlobalContext *) arg1);
    if (sp34 != 0) {
        if (arg0->unk_AE8 == 0) {
            temp_v1_2 = arg0->unk_37E;
            if (temp_v1_2 == 0) {
                phi_v0_3 = 0;
            } else {
                arg0->unk_37E = (s8) (temp_v1_2 - 1);
                phi_v0_3 = arg0->unk_37E;
            }
            if (phi_v0_3 == 0) {
                arg0->unk_AE8 = 1;
                arg0->unk_250 = (f32) (arg0->unk_254 - 1.0f);
                return;
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return;
        }
        func_80838760(arg0);
        func_80839E74(arg0, (GlobalContext *) arg1);
        if ((arg0->category == 2) && (sp38 == 0)) {
            if ((s32) arg1->unk_186F4 >= 0) {
                func_8012EBF8((GlobalContext *) arg1, arg1 + 0x186E0);
            }
            func_800E0238(Play_GetCamera((GlobalContext *) arg1, 0));
            func_80169E6C((GlobalContext *) arg1, 0, 0xBFF);
            return;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return;
    }
    if (((arg0->unk_A6C * 4) >= 0) && (func_80136A48(sp20, 15.0f) != 0)) {
        func_80838760(arg0);
        arg1->unk_18780(arg0, arg1);
        return;
    }
    if ((sp38 != 0) && (func_80136A48(sp20, 15.0f) != 0)) {
        if ((s32) arg0->unk_37D < 0) {
            phi_v0_4 = sp3C->unk_30;
        } else {
            phi_v0_4 = sp3C->unk_34;
        }
        if (phi_v0_4 != 0) {
            func_808354A4((GlobalContext *) arg1, phi_v0_4 - 1, 0);
        }
    }
}

void func_8084E25C(Actor *arg0, GlobalContext *arg1) {
    Actor *sp24;
    SkelAnime *sp20;
    Actor *temp_a2_2;
    SkelAnime *temp_a2;

    func_80832F24(arg0);
    temp_a2 = arg0 + 0x240;
    sp20 = temp_a2;
    if (func_801360E0(arg1, temp_a2) != 0) {
        func_80836988((Player *) arg0, arg1, temp_a2);
        func_808313F0((Player *) arg0, arg1);
        return;
    }
    if (func_80136A48(temp_a2, 4.0f) != 0) {
        temp_a2_2 = arg0->unk_388;
        sp24 = temp_a2_2;
        if (func_808313A8(arg1, (Player *) arg0, temp_a2_2) == 0) {
            arg0->child = temp_a2_2;
            arg0->unk_34C = temp_a2_2;
            temp_a2_2->parent = arg0;
            temp_a2_2->bgCheckFlags &= 0xFF00;
            arg0->unk_35E = (s16) (temp_a2_2->shape.rot.y - arg0->shape.rot.y);
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    Math_ScaledStepToS(arg0 + 0x35E, 0, 0xFA0);
}

void func_8084E334(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    Actor *temp_v0;
    SkelAnime *temp_a1;

    func_80832F24(arg0);
    temp_a1 = arg0 + 0x240;
    sp20 = temp_a1;
    if (func_801360E0(arg1, temp_a1) != 0) {
        func_8082DB3C(arg1, arg0, (LinkAnimationHeader *) &D_0400DFA0);
        arg0->unk_AE8 = 1;
        return;
    }
    if (arg0->unk_AE8 == 0) {
        if (func_80136A48(sp20, 27.0f) != 0) {
            temp_v0 = arg0->unk_388;
            arg0->unk_34C = temp_v0;
            arg0->child = temp_v0;
            temp_v0->parent = arg0;
            return;
        }
        if (func_80136A48(sp20, 25.0f) != 0) {
            func_8082DF8C(arg0, 0x6801U);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if ((D_80862B44->press.button & 0xC007) != 0) {
        func_80831494(arg1, arg0, func_8084E434, 1);
        func_8082DB18(arg1, (Player *) arg0, &D_0400DF98);
    }
}

void func_8084E434(Player *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    Actor *temp_v0;
    SkelAnime *temp_a2;

    temp_a2 = arg0 + 0x240;
    sp20 = temp_a2;
    if (func_801360E0(arg1, temp_a2) != 0) {
        func_80836988(arg0, arg1, temp_a2);
        return;
    }
    if (func_80136A48(temp_a2, 6.0f) != 0) {
        temp_v0 = arg0->leftHandActor;
        temp_v0->speedXZ = 10.0f;
        temp_v0->world.rot.y = arg0->actor.shape.rot.y;
        temp_v0->velocity.y = 20.0f;
        func_808309CC(arg1, (Actor *) arg0);
        func_800B8E58((Actor *) arg0, 0x83AU);
        func_8082DF8C((Actor *) arg0, 0x6800U);
    }
}

void func_8084E4E4(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    s16 temp_v0;

    temp_a0 = arg1;
    arg1 = arg1;
    if (func_801360E0(temp_a0, arg0 + 0x240) != 0) {
        func_8082DB3C(arg1, arg0, (LinkAnimationHeader *) &D_0400DD80, arg1);
        arg0->unk_AE8 = 0xF;
        return;
    }
    temp_v0 = arg0->unk_AE8;
    if (temp_v0 != 0) {
        arg0->unk_AE8 = (s16) (temp_v0 - 1);
        if (arg0->unk_AE8 == 0) {
            func_80836A98((Player *) arg0, &D_0400DD78, arg1, arg1);
            arg0->unk_A6C = (s32) (arg0->unk_A6C & ~0x800);
            func_8082DF8C(arg0, 0x6805U);
        }
    }
}

void func_8084E58C(Actor *arg0, GlobalContext *arg1) {
    Actor *sp24;
    SkelAnime *sp20;
    Actor *temp_a2_2;
    SkelAnime *temp_a2;

    func_80832F24(arg0);
    temp_a2 = arg0 + 0x240;
    sp20 = temp_a2;
    if (func_801360E0(arg1, temp_a2) != 0) {
        func_80836988((Player *) arg0, arg1, temp_a2);
        return;
    }
    if (func_80136A48(temp_a2, 4.0f) != 0) {
        temp_a2_2 = arg0->unk_34C;
        sp24 = temp_a2_2;
        if (func_808313A8(arg1, (Player *) arg0, temp_a2_2) == 0) {
            temp_a2_2->velocity.y = 0.0f;
            temp_a2_2->speedXZ = 0.0f;
            sp24 = temp_a2_2;
            func_808309CC(arg1, arg0, temp_a2_2);
            if (temp_a2_2->id == 0x6A) {
                func_80831814((Player *) arg0, arg1, 0);
            }
        }
    }
}

void func_8084E65C(Actor *arg0, GlobalContext *arg1) {
    ? sp34;
    s16 sp32;
    SkelAnime *sp2C;
    SkelAnime *temp_a1;

    func_80832F24(arg0);
    temp_a1 = arg0 + 0x240;
    sp2C = temp_a1;
    if ((func_801360E0(arg1, temp_a1) != 0) || ((arg0->unk_258 >= 8.0f) && (func_80832F78((s16 *) arg0, (bitwise f32) &sp34, &sp32, (void *)0x3C9374BC, (f32 *) arg1) != 0))) {
        func_80836988((Player *) arg0, arg1);
        return;
    }
    if (func_80136A48(sp2C, 3.0f) != 0) {
        func_808409A8(arg1, (Player *) arg0, arg0->unk_AD0 + 8.0f, 12.0f);
    }
}

void func_8084E724(s16 *arg0, GlobalContext *arg1) {
    s16 temp_v1_2;
    u8 temp_v1;
    s16 phi_v0;

    if ((arg0->unk_A6C * 0x10) < 0) {
        func_808475B4(arg0);
        func_8084748C(arg0, arg0 + 0xAD0, 0.0f, arg0->unk_BE);
    } else {
        func_80832F24((Actor *) arg0);
    }
    if ((arg0->unk_AA5 == 3) && ((func_800B7118((Actor *) arg0) != 0) || (func_8082ECCC((Actor *) arg0) != 0))) {
        func_8083216C((Player *) arg0, arg1);
    }
    temp_v1 = arg0->unk_AA5;
    if (((temp_v1 == 2) && ((arg1->actorCtx.unk5 & 4) == 0)) || ((temp_v1 != 2) && ((arg0->unk_394 != 0) || (temp_v1 == 0) || ((s32) temp_v1 >= 5) || (func_8082FB68((Player *) arg0) != 0) || (arg0->unk_730 != 0) || (func_8083868C(arg1, (Actor *) arg0) == 0) || ((arg0->unk_AA5 == 3) && (((func_8082F524((Actor *) arg0, func_8012EC80(arg1)) != arg0->unk_147) && ((D_80862B44->press.button & 0x4000) != 0)) || ((D_80862B44->press.button & 0x8010) != 0) || (func_80123434((Player *) arg0) != 0) || ((func_800B7128((Actor *) arg0) == 0) && (func_8082EF20((Actor *) arg0) == 0)))) || ((arg0->unk_AA5 == 1) && ((D_80862B44->press.button & 0xC01F) != 0)) || (func_808391D8((Player *) arg0, arg1) != 0)))) {
        func_80839ED0((Player *) arg0, arg1);
        play_sound(0x4813U);
    } else {
        temp_v1_2 = arg0->unk_AE8;
        if (temp_v1_2 == 0) {
            phi_v0 = 0;
        } else {
            arg0->unk_AE8 = (s16) (temp_v1_2 - 1);
            phi_v0 = arg0->unk_AE8;
        }
        if ((phi_v0 == 0) || (arg0->unk_AA5 != 3)) {
            if (func_801240DC((Actor *) arg0) != 0) {
                arg0->unk_AA6 = (u16) (arg0->unk_AA6 | 0x43);
            } else {
                arg0->unk_BE = func_80847190(arg1, (Actor *) arg0, 0);
            }
        }
    }
    arg0->unk_AD4 = (s16) arg0->unk_BE;
}

void func_8084E980(Actor *arg0, GlobalContext *arg1) {
    s32 sp44;
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    s32 temp_v0;
    s32 phi_v1;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    func_8083249C(arg0);
    func_8083216C((Player *) arg0, arg1);
    if (func_80152498(&arg1->msgCtx) == 2) {
        arg0->flags &= -0x101;
        if ((arg0->unk_A88->unk_4 & 5) != 5) {
            arg0->unk_A70 = (s32) (arg0->unk_A70 & ~0x2000);
        }
        func_800E0238(Play_GetCamera(arg1, 0));
        ActorCutscene_Stop(0x7C);
        if (arg0->unk_A6C & 0x800000) {
            sp44 = (s32) arg0->unk_AE8;
            func_80837BD0(arg1, arg0);
            arg0->unk_AE8 = (s16) sp44;
        } else if ((func_80847994(arg1, arg0) == 0) && (func_80847880(arg1, arg0) == 0) && (func_808387A0(arg1, arg0) == 0) && ((arg0->unk_388 != arg0->unk_A88) || (func_8083D23C((Player *) arg0, arg1) == 0))) {
            if (func_801242B4((Player *) arg0) != 0) {
                func_808353DC(arg1, arg0);
            } else {
                func_8085B384(arg0, arg1);
            }
        }
        arg0->unk_B5E = 0xA;
        return;
    }
    if (arg0->unk_A6C & 0x800000) {
        func_8084FE7C(arg0, arg1);
    } else if (func_801242B4((Player *) arg0, (Player *) 0) != 0) {
        func_808508C8(arg0, arg1);
        if (arg0->yDistToWater > 100.0f) {
            arg0->velocity.y = 0.0f;
            arg0->gravity = 0.0f;
        }
    } else if ((func_80123420((Player *) arg0) == 0) && (func_801360E0(arg1, arg0 + 0x240) != 0)) {
        if (arg0->unk_275 != 0) {
            func_8082E794(arg0, arg0, &D_0400DEA8);
            if ((arg0->unk_A88->unk_2 == 4) && (arg0->unk_147 != 2)) {
                func_8082DB90(arg1, arg0, (LinkAnimationHeader *) &D_0400DEA0);
            } else {
                func_8082DB3C(arg1, arg0, func_8082ED20(arg0));
            }
        } else {
            func_8082DB60(arg1, arg0, (LinkAnimationHeader *) &D_0400DEA8);
        }
    }
    if (arg0->unk_730 != 0) {
        arg0->unk_AD4 = func_8083C62C(arg0, 0);
        arg0->shape.rot.y = arg0->unk_AD4;
        if (arg0->unk_AE7 != 0) {
            temp_a1 = arg0 + 0x284;
            if ((arg0->unk_A6C & 0x800) == 0) {
                sp34 = temp_a1;
                if (func_801360E0(arg1, temp_a1) != 0) {
                    arg0->unk_AE7 = (s8) (arg0->unk_AE7 - 1);
                    if (arg0->unk_AE7 != 0) {
                        SkelAnime_ChangeLinkAnim(arg1, sp34, (LinkAnimationHeader *) &D_0400DEA0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400DEA0), (u8) 2, -6.0f);
                    }
                }
            }
            SkelAnime_LoadAnimationType4(arg1, (s32) arg0->unk_240, arg0->unk_260, arg0->unk_2A4, D_8085B9F0);
            return;
        }
        if (((arg0->unk_A6C & 0x800) == 0) && (&D_0400DEA8 == arg0->unk_248)) {
            temp_v0 = arg0->focus.rot.y - arg0->shape.rot.y;
            phi_v1 = temp_v0;
            if (temp_v0 < 0) {
                phi_v1 = -temp_v0;
            }
            if (phi_v1 >= 0xFA1) {
                SkelAnime_ChangeLinkAnim(arg1, arg0 + 0x284, *(&D_8085C0DC + (arg0->unk_14F * 4)), 0.4f, 0.0f, (f32) SkelAnime_GetFrameCount(*(&D_8085C0DC + (arg0->unk_14F * 4))), (u8) 2, -6.0f);
                arg0->unk_AE7 = 2;
            }
        }
        /* Duplicate return node #40. Try simplifying control flow for better match */
    }
}

void func_8084ED9C(Player *arg0, GlobalContext *arg1) {
    f32 sp34;
    s16 sp32;
    s32 temp_v0;

    arg0->stateFlags2 |= 0x141;
    func_8083DEE4(arg1, arg0);
    if ((func_801360E0(arg1, arg0 + 0x240) != 0) && (func_8083E14C(arg1, arg0) == 0)) {
        func_80832F78((s16 *) arg0, (bitwise f32) &sp34, &sp32, NULL, (f32 *) arg1);
        temp_v0 = func_8083E758(arg0, &sp34, &sp32);
        if (temp_v0 > 0) {
            func_8083E234((Actor *) arg0, arg1);
            return;
        }
        if (temp_v0 < 0) {
            func_8083E28C((Actor *) arg0, arg1);
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_8084EE50(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    s16 sp32;
    s32 temp_v0;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x141);
    if (func_8082E67C(arg1, arg0, (LinkAnimationHeader *) &D_0400DE10) != 0) {
        arg0->unk_AE8 = 1;
    } else if ((arg0->unk_AE8 == 0) && (func_80136A48(arg0 + 0x240, 11.0f) != 0)) {
        func_8082DF8C(arg0, 0x6818U);
    }
    func_8082E224(arg0, &D_8085D650);
    func_8083DEE4(arg1, (Player *) arg0);
    if (func_8083E14C(arg1, (Player *) arg0) == 0) {
        func_80832F78((s16 *) arg0, (bitwise f32) &sp34, &sp32, NULL, (f32 *) arg1);
        temp_v0 = func_8083E758((Player *) arg0, &sp34, &sp32);
        if (temp_v0 < 0) {
            func_8083E28C(arg0, arg1);
        } else if (temp_v0 == 0) {
            func_8083DF38(arg0, &D_0400DDF0, arg1);
        } else {
            arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x10);
        }
    }
    if ((arg0->unk_A70 & 0x10) != 0) {
        func_808479F4(arg1, arg0, 2.0f);
        arg0->unk_AD0 = 2.0f;
    }
}

void func_8084EF9C(Actor *arg0, GlobalContext *arg1) {
    f32 sp78;
    s16 sp76;
    f32 sp68;
    ? sp64;
    f32 sp5C;
    s32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 *temp_a1;
    f32 temp_f16;
    s32 temp_v0;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x141);
    if (func_8082E67C(arg1, arg0, *(&D_8085C1CC + (arg0->unk_14F * 4))) != 0) {
        arg0->unk_AE8 = 1;
    } else if (arg0->unk_AE8 == 0) {
        if (func_80136A48(arg0 + 0x240, 11.0f) != 0) {
            func_8082DF8C(arg0, 0x6818U);
        }
    } else {
        func_8082E224(arg0, &D_8085D658);
    }
    func_8083DEE4(arg1, (Player *) arg0);
    if (func_8083E14C(arg1, (Player *) arg0) == 0) {
        func_80832F78((s16 *) arg0, (bitwise f32) &sp78, &sp76, NULL, (f32 *) arg1);
        temp_v0 = func_8083E758((Player *) arg0, &sp78, &sp76);
        if (temp_v0 > 0) {
            func_8083E234(arg0, arg1);
        } else if (temp_v0 == 0) {
            func_8083DF38(arg0, *(&D_8085C1E4 + (arg0->unk_14F * 4)), arg1);
        } else {
            arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x10);
        }
    }
    if ((arg0->unk_A70 & 0x10) != 0) {
        temp_a1 = &sp4C;
        if ((fabsf((bitwise f32) func_80835D2C(arg1, arg0, D_8085D660, &sp64) - arg0->world.pos.y) < 26.800001f) && (temp_f16 = sp68 - 7.0f, sp68 = temp_f16, sp4C = arg0->world.pos.x, sp50 = temp_f16, sp54 = arg0->world.pos.z, (func_800C5650(&arg1->colCtx, temp_a1, &sp64, &sp40, &sp5C, (CollisionPoly **)1, NULL, 0, 1, &sp58, arg0) == 0))) {
            func_808479F4(arg1, arg0, -2.0f);
            return;
        }
        arg0->unk_A70 = (s32) (arg0->unk_A70 & ~0x10);
        /* Duplicate return node #17. Try simplifying control flow for better match */
    }
}

void func_8084F1B8(Actor *arg0, GlobalContext *arg1) {
    ? sp3C;
    s16 sp3A;
    SkelAnime *sp2C;
    SkelAnime *temp_a2;
    LinkAnimationHeader *phi_a3;
    f32 phi_f0;
    LinkAnimationHeader *phi_a3_2;

    temp_a2 = arg0 + 0x240;
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40);
    sp2C = temp_a2;
    if (func_801360E0(arg1, temp_a2) != 0) {
        if ((s32) arg0->unk_AE7 > 0) {
            phi_a3 = (LinkAnimationHeader *) &D_0400DC48;
        } else {
            phi_a3 = *(&D_8085C22C + (arg0->unk_14F * 4));
        }
        func_8082DB3C(arg1, arg0, phi_a3, (GlobalContext *) phi_a3);
    } else if (arg0->unk_AE7 == 0) {
        if (&D_0400DC30 == arg0->unk_248) {
            phi_f0 = 11.0f;
        } else {
            phi_f0 = 1.0f;
        }
        if (func_80136A48(temp_a2, phi_f0) != 0) {
            func_8082E094(arg0, 0x800U);
            if (&D_0400DC30 == arg0->unk_248) {
                arg0->unk_AE7 = 1;
            } else {
                arg0->unk_AE7 = -1;
            }
        }
    }
    Math_ScaledStepToS(&arg0->shape.rot.y, arg0->unk_AD4, 0x800);
    if (arg0->unk_AE7 != 0) {
        func_80832F78((s16 *) arg0, (bitwise f32) &sp3C, &sp3A, NULL, (f32 *) arg1);
        if ((s32) (arg0 + arg0->unk_ADE)->unk_ADF >= 0) {
            if ((s32) arg0->unk_AE7 > 0) {
                phi_a3_2 = *(&D_8085C1FC + (arg0->unk_14F * 4));
            } else {
                phi_a3_2 = *(&D_8085C244 + (arg0->unk_14F * 4));
            }
            func_808381A0(arg0, phi_a3_2, arg1, phi_a3_2);
            return;
        }
        if ((~(D_80862B44->cur.button | 0xFFFF7FFF) == 0) || (arg0->shape.feetFloorFlags != 0)) {
            func_80833A64(arg0);
            if ((s32) arg0->unk_AE7 < 0) {
                arg0->unk_AD0 = -0.8f;
            } else {
                arg0->unk_AD0 = 0.8f;
            }
            func_80833AA0(arg0, arg1);
            arg0->unk_A6C = (s32) (arg0->unk_A6C & ~0x6004);
            arg0->bgCheckFlags &= 0xFFFE;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
    }
}

void func_8084F3DC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a1;

    temp_a1 = arg0 + 0x240;
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40);
    sp24 = temp_a1;
    if (func_801360E0(arg1, temp_a1) != 0) {
        arg0->unk_AD4 = (s16) (arg0->unk_260->unk_8 + arg0->shape.rot.y);
        func_8082E820(arg0, 1);
        arg0->shape.rot.y = arg0->unk_AD4;
        func_80839E74(arg0, arg1);
        arg0->unk_A6C = (s32) (arg0->unk_A6C & ~0x6004);
        return;
    }
    if (func_80136A48(sp24, arg0->unk_250 - 6.0f) != 0) {
        func_8082E1BC(arg0);
        return;
    }
    if (func_80136A48(sp24, arg0->unk_250 - 34.0f) != 0) {
        func_800B8E58(arg0, 0x831U);
        func_8082DF8C(arg0, 0x6804U);
        func_8084C124(arg1, (Player *) arg0);
    }
}

void func_8084F4E8(Actor *arg0, GlobalContext *arg1) {
    s32 sp94;
    s32 sp90;
    ? sp7C;
    s32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    ? sp60;
    AnimationHeaderCommon *sp58;
    LinkAnimationHeader *sp54;
    SkelAnime *sp34;
    AnimationHeaderCommon *temp_a0_4;
    DynaPolyActor *temp_v0_2;
    Input *temp_v0;
    LinkAnimationHeader *temp_a2;
    PosRot *temp_a0;
    SkelAnime *temp_a0_5;
    SkelAnime *temp_a0_6;
    SkelAnime *temp_a1_3;
    Vec3f *temp_a0_2;
    Vec3f *temp_a1_2;
    f32 temp_f0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s8 temp_a0_3;
    s8 temp_t0;
    s8 temp_t1;
    u8 temp_a1;
    void *temp_t2;
    void *temp_t3;
    void *temp_t4;
    void *temp_t4_2;
    void *temp_t8;
    void *temp_v0_5;
    s32 phi_v1;
    s32 phi_v0;
    f32 phi_f0;
    f32 phi_f2;
    f32 phi_f0_2;
    s32 phi_t0;
    s32 phi_t1;
    s32 phi_t0_2;
    s32 phi_t1_2;
    s16 phi_v0_2;
    f32 phi_f0_3;
    s8 phi_v0_3;
    s8 phi_v0_4;

    temp_v0 = D_80862B44;
    temp_t0 = temp_v0->rel.stick_y;
    temp_t1 = temp_v0->rel.stick_x;
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40);
    arg0->unk_B68 = (s16) (s32) arg0->world.pos.y;
    phi_t0 = (s32) temp_t0;
    phi_t1 = (s32) temp_t1;
    if (arg0->unk_AE7 != 0) {
        phi_v1 = (s32) temp_t0;
        if ((s32) temp_t0 < 0) {
            phi_v1 = -(s32) temp_t0;
        }
        phi_v0 = (s32) temp_t1;
        if ((s32) temp_t1 < 0) {
            phi_v0 = -(s32) temp_t1;
        }
        if (phi_v1 < phi_v0) {
            phi_v0_3 = temp_t1;
            if ((s32) temp_t1 < 0) {
                phi_v0_3 = (s8) -(s32) temp_t1;
            }
            phi_f0 = (f32) phi_v0_3 * 0.0325f;
            phi_t0 = 0;
        } else {
            goto block_9;
        }
    } else {
block_9:
        phi_v0_4 = temp_t0;
        if ((s32) temp_t0 < 0) {
            phi_v0_4 = (s8) -(s32) temp_t0;
        }
        phi_f0 = (f32) phi_v0_4 * 0.05f;
        phi_t1 = 0;
    }
    phi_f0_2 = phi_f0;
    phi_t0_2 = phi_t0;
    phi_t1_2 = phi_t1;
    if (phi_f0 < 1.0f) {
        phi_f0_2 = 1.0f;
    } else if (phi_f0 > 3.35f) {
        phi_f0_2 = 3.35f;
    }
    if (arg0->unk_25C >= 0.0f) {
        phi_f2 = 1.0f;
    } else {
        phi_f2 = -1.0f;
    }
    arg0->unk_25C = (f32) (phi_f2 * phi_f0_2);
    if ((s32) arg0->unk_AE8 >= 0) {
        if (arg0->wallPoly != 0) {
            temp_a1 = arg0->wallBgId;
            if (temp_a1 != 0x32) {
                sp94 = phi_t0;
                sp90 = phi_t1;
                temp_v0_2 = BgCheck_GetActorOfMesh(arg1 + 0x830, (s32) temp_a1);
                if (temp_v0_2 != 0) {
                    temp_a0 = &temp_v0_2->actor.world;
                    temp_a1_2 = &temp_v0_2->actor.prevPos;
                    sp94 = phi_t0;
                    sp90 = phi_t1;
                    Math_Vec3f_Diff((Vec3f *) temp_a0, temp_a1_2, (Vec3f *) &sp7C);
                    temp_a0_2 = arg0 + 0x24;
                    Math_Vec3f_Sum(temp_a0_2, (Vec3f *) &sp7C, temp_a0_2);
                }
            }
        }
        sp90 = phi_t1;
        sp94 = phi_t0;
        Actor_UpdateBgCheckInfo(arg1, arg0, 26.800001f, 6.0f, arg0->unk_A68->unk_0 + 15.0f, 7U);
        func_8083DD1C(arg1, arg0, 26.800001f, arg0->unk_A68->unk_3C, 50.0f, -20.0f);
        phi_t0_2 = phi_t0;
        phi_t1_2 = phi_t1;
    }
    sp94 = phi_t0_2;
    sp90 = phi_t1_2;
    func_80831944(arg1, arg0);
    if ((((s32) arg0->unk_AE8 < 0) || (sp94 = phi_t0_2, sp90 = phi_t1_2, (func_8083E354(arg0, arg1) == 0))) && (temp_a1_3 = arg0 + 0x240, sp34 = temp_a1_3, sp94 = phi_t0_2, sp90 = phi_t1_2, (func_801360E0(arg1, temp_a1_3) != 0))) {
        temp_v1 = arg0->unk_AE8;
        if ((s32) temp_v1 < 0) {
            phi_v0_2 = temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_v0_2 = (s16) -(s32) temp_v1;
            }
            arg0->unk_AE8 = (s16) (phi_v0_2 & 1);
            return;
        }
        if (phi_t0_2 != 0) {
            temp_a0_3 = arg0->unk_AE7;
            temp_v0_3 = temp_a0_3 + temp_v1;
            if (phi_t0_2 > 0) {
                sp6C = 0.0f;
                sp70 = arg0->unk_A68->unk_40;
                sp78 = temp_v0_3;
                sp74 = arg0->unk_A68->unk_3C + 10.0f;
                temp_f0 = (bitwise f32) func_80835D2C(arg1, arg0, &sp6C, &sp60);
                if (arg0->world.pos.y < temp_f0) {
                    if (arg0->unk_AE7 != 0) {
                        arg0->world.pos.y = temp_f0;
                        arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFDFFFFF);
                        func_80837CEC(arg1, arg0, arg0->wallPoly, arg0->unk_A68->unk_3C, (LinkAnimationHeader *) &D_0400DCF8);
                        arg0->unk_AD4 = (s16) (arg0->unk_AD4 + 0x8000);
                        arg0->shape.rot.y = arg0->unk_AD4;
                        func_808381A0(arg0, (LinkAnimationHeader *) &D_0400DCF8, arg1);
                        arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x4000);
                    } else {
                        func_8083DCC4(arg0, (arg0->unk_A68 + (arg0->unk_AE8 * 4))->unk_D4, arg1);
                    }
                } else {
                    temp_t4 = arg0->unk_A68 + (temp_v0_3 * 6);
                    arg0->unk_278 = (unaligned s32) temp_t4->unk_4A;
                    arg0->unk_27C = (u16) temp_t4->unk_4E;
                    func_8082DB18(arg1, (Player *) arg0, (arg0->unk_A68 + (temp_v0_3 * 4))->unk_B4);
                }
            } else {
                temp_v0_4 = temp_v0_3 ^ 1;
                if ((arg0->world.pos.y - arg0->floorHeight) < 15.0f) {
                    if (temp_a0_3 != 0) {
                        func_8083E2F4(arg0, arg1);
                    } else {
                        if (temp_v1 != 0) {
                            temp_t2 = arg0->unk_A68;
                            arg0->unk_278 = (unaligned s32) temp_t2->unk_44;
                            arg0->unk_27C = (u16) temp_t2->unk_48;
                        }
                        func_8083DCC4(arg0, (arg0->unk_A68 + (arg0->unk_AE8 * 4))->unk_CC, arg1);
                        arg0->unk_AE8 = 1;
                    }
                } else {
                    temp_t3 = arg0->unk_A68 + (temp_v0_4 * 6);
                    arg0->unk_278 = (unaligned s32) temp_t3->unk_62;
                    arg0->unk_27C = (u16) temp_t3->unk_66;
                    temp_a0_4 = (arg0->unk_A68 + (temp_v0_4 * 4))->unk_B4;
                    sp58 = temp_a0_4;
                    SkelAnime_ChangeLinkAnim(arg1, sp34, (LinkAnimationHeader *) sp58, -1.0f, (f32) SkelAnime_GetFrameCount(temp_a0_4), 0.0f, (u8) 2, 0.0f);
                }
            }
            arg0->unk_AE8 = (s16) (arg0->unk_AE8 ^ 1);
            return;
        }
        if ((arg0->unk_AE7 != 0) && (phi_t1_2 != 0)) {
            temp_v0_5 = arg0->unk_A68;
            temp_a2 = (temp_v0_5 + (temp_v1 * 4))->unk_C4;
            if (phi_t1_2 > 0) {
                temp_t8 = temp_v0_5 + (temp_v1 * 6);
                arg0->unk_278 = (unaligned s32) temp_t8->unk_7A;
                arg0->unk_27C = (u16) temp_t8->unk_7E;
                func_8082DB18(arg1, (Player *) arg0, temp_a2);
                return;
            }
            temp_t4_2 = temp_v0_5 + (temp_v1 * 6);
            arg0->unk_278 = (unaligned s32) temp_t4_2->unk_86;
            arg0->unk_27C = (u16) temp_t4_2->unk_8A;
            sp54 = temp_a2;
            SkelAnime_ChangeLinkAnim(arg1, sp34, temp_a2, -1.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) temp_a2), 0.0f, (u8) 2, 0.0f);
            return;
        }
        arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x1000);
        return;
    }
    temp_v1_2 = arg0->unk_AE8;
    if ((s32) temp_v1_2 < 0) {
        temp_a0_5 = arg0 + 0x240;
        if (temp_v1_2 == -2) {
            sp34 = temp_a0_5;
            if ((func_80136A48(temp_a0_5, 14.0f) == 0) && (func_80136A48(temp_a0_5, 29.0f) == 0)) {
                goto block_58;
            }
            goto block_63;
        }
block_58:
        temp_a0_6 = arg0 + 0x240;
        if ((arg0->unk_AE8 == -4) && ((sp34 = temp_a0_6, (func_80136A48(temp_a0_6, 22.0f) != 0)) || (func_80136A48(temp_a0_6, 35.0f) != 0) || (func_80136A48(sp34, 49.0f) != 0) || (func_80136A48(sp34, 55.0f) != 0))) {
block_63:
            func_80847A50(arg0);
            return;
        }
        /* Duplicate return node #69. Try simplifying control flow for better match */
        return;
    }
    if (arg0->unk_25C > 0.0f) {
        phi_f0_3 = 20.0f;
    } else {
        phi_f0_3 = 0.0f;
    }
    if (func_80136A48(arg0 + 0x240, phi_f0_3) != 0) {
        func_80847A50(arg0);
    }
}

void func_8084FC0C(s8 *arg0, Player *arg1) {
    ? *sp40;
    CollisionPoly *sp3C;
    s32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    SkelAnime *temp_a2;
    s32 temp_v0;
    ? *phi_v1;

    temp_a2 = arg0 + 0x240;
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40);
    sp28 = temp_a2;
    temp_v0 = func_808331FC(arg1, arg0, temp_a2, 4.0f);
    if (temp_v0 == 0) {
        arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFDFFFFF);
        return;
    }
    if ((temp_v0 > 0) || (func_801360E0((GlobalContext *) arg1, sp28) != 0)) {
        func_80839E74((Actor *) arg0, (GlobalContext *) arg1);
        arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFDFFFFF);
        return;
    }
    phi_v1 = &D_8085D66C;
    if (arg0->unk_AE8 != 0) {
        func_8082E224((Actor *) arg0, &D_8085D67C);
        phi_v1 = &D_8085D674;
    }
    sp40 = phi_v1;
    if ((func_80136A48(sp28, phi_v1->unk_0) != 0) || (func_80136A48(sp28, phi_v1->unk_4) != 0)) {
        sp2C = arg0->unk_24;
        temp_a0 = &arg1->unk_830;
        sp30 = arg0->unk_28 + 20.0f;
        sp28 = temp_a0;
        sp34 = arg0->unk_2C;
        if (func_800C411C((CollisionContext *) temp_a0, &sp3C, &sp38, (Actor *) arg0, (Vec3f *) &sp2C) != 0.0f) {
            arg0->unk_B72 = func_800C9BDC((CollisionContext *) temp_a0, sp3C, sp38);
            func_8082E1BC((Actor *) arg0);
        }
    }
}

void func_8084FD7C(GlobalContext *arg1, Actor *arg2) {
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;
    s16 phi_a3;
    s32 phi_v1_2;

    temp_v0 = arg1->colCtx.dyna.bgActors[7].curTransform.unk_12;
    if (temp_v0 != 0) {
        arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = temp_v0 - 1;
        return;
    }
    arg1->unk_AB4 = (s16) (func_80847190((GlobalContext *)1) - arg1->unk_BE);
    temp_a0 = arg1->unk_AB4;
    phi_v1 = temp_a0;
    if ((s32) temp_a0 < 0) {
        phi_v1 = (s16) -(s32) temp_a0;
    }
    temp_v0_2 = phi_v1 - 0x4000;
    phi_a3 = temp_v0_2;
    if ((s32) temp_v0_2 > 0) {
        phi_v1_2 = -1;
        if ((s32) temp_v0_2 >= 0x15F) {
            phi_a3 = 0x15E;
        }
        if ((s32) temp_a0 >= 0) {
            phi_v1_2 = 1;
        }
        arg2->shape.rot.y += phi_a3 * phi_v1_2;
        arg2->world.rot.y = arg2->shape.rot.y;
    }
    arg1->unk_AB4 = (s16) (arg1->unk_AB4 + 0x2710);
    arg1->unk_AA8 = -0x1388;
}

s32 func_8084FE48(Actor *arg0) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk_730 == 0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = func_8082FC24() == 0;
    }
    return phi_v0;
}

void func_8084FE7C(Actor *arg0, GlobalContext *arg1) {
    void *sp4C;
    s32 sp44;
    SkelAnime *sp2C;
    void *sp28;
    SkelAnime *temp_a1;
    SkelAnime *temp_a2;
    f32 temp_f0;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    u8 temp_t5;
    u8 temp_t6;
    void *temp_v1;
    s32 phi_v0;
    f32 phi_f4;
    f32 phi_f8;
    s32 phi_v0_2;
    s16 phi_v1;
    s32 phi_v0_3;
    s32 phi_v0_4;
    LinkAnimationHeader *phi_a2;
    s16 phi_v0_5;

    sp4C = arg0->unk_390;
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40);
    func_80847E2C(arg0, 1.0f, 10.0f);
    temp_a1 = arg0 + 0x240;
    if (arg0->unk_AE8 == 0) {
        sp2C = temp_a1;
        if (func_801360E0(arg1, temp_a1) != 0) {
            arg0->unk_248 = &D_0400E088;
            arg0->unk_AE8 = 0x63;
        } else {
            phi_v0 = 1;
            if ((s32) arg0->unk_38C < 0) {
                phi_v0 = 0;
            }
            temp_v1 = (phi_v0 * 2) + &D_8085D6DC;
            temp_t5 = temp_v1->unk_0;
            temp_f4 = (f32) temp_t5;
            phi_f4 = temp_f4;
            if ((s32) temp_t5 < 0) {
                phi_f4 = temp_f4 + 4294967296.0f;
            }
            sp28 = temp_v1;
            if (func_80136A48(sp2C, phi_f4) != 0) {
                func_800B7170(arg1, arg0);
                func_800B8E58(arg0, 0x831U);
            } else {
                temp_t6 = temp_v1->unk_1;
                temp_f8 = (f32) temp_t6;
                phi_f8 = temp_f8;
                if ((s32) temp_t6 < 0) {
                    phi_f8 = temp_f8 + 4294967296.0f;
                }
                if (func_80136A48(sp2C, phi_f8) != 0) {
                    func_800B8E58(arg0, 0x832U);
                }
            }
        }
    } else {
        if ((sp4C->unk_90 & 1) != 0) {
            func_80841A50(arg1, arg0);
        }
        func_800B7170(arg1, arg0);
        temp_v0 = arg0->unk_AE8;
        arg0->unk_278 = (unaligned s32) D_8085D6E0.unk_0;
        arg0->unk_27C = (u16) D_8085D6E0.unk_4;
        if (((s32) temp_v0 < 0) || ((temp_v1_2 = sp4C->unk_20C, ((temp_v0 & 0xFFFF) != temp_v1_2)) && ((temp_v1_2 >= 2) || ((s32) temp_v0 >= 2)))) {
            temp_v1_3 = sp4C->unk_20C;
            if (temp_v1_3 < 2) {
                temp_f0 = Rand_ZeroOne();
                phi_v0_2 = 0;
                phi_v1 = (s16) 1;
                if (temp_f0 < 0.1f) {
                    phi_v0_2 = 2;
                } else if (temp_f0 < 0.2f) {
                    phi_v0_2 = 1;
                }
                sp44 = 1;
                func_8082DB18(arg1, (Player *) arg0, *(&D_8085D6D0 + (phi_v0_2 * 4)));
            } else {
                arg0->unk_248 = (s32 *) *(&D_8085D680 + (temp_v1_3 * 4));
                if ((s32) temp_v0 >= 0) {
                    sp44 = temp_v1_3;
                    SkelAnime_SetTransition(arg1, arg0 + 0x240, 8.0f);
                }
                phi_v1 = (s16) sp4C->unk_20C;
                if (sp4C->unk_20C < 4) {
                    sp44 = sp4C->unk_20C;
                    func_808309CC(arg1, arg0);
                    arg0->unk_AE7 = 0;
                    phi_v1 = (s16) sp4C->unk_20C;
                }
            }
            arg0->unk_AE8 = phi_v1;
        }
        if (arg0->unk_AE8 == 1) {
            if ((D_80862B04 != 0) || (func_8082DAFC(arg1) != 0)) {
                func_8082DB18(arg1, (Player *) arg0, &D_0400E098);
            } else if (func_801360E0(arg1, arg0 + 0x240) != 0) {
                arg0->unk_AE8 = 0x63;
            } else if (&D_0400E088 == arg0->unk_248) {
                func_8082E224(arg0, &D_8085D6E8);
            }
        } else {
            arg0->unk_258 = (f32) sp4C->unk_210;
            func_801361BC(arg1, arg0 + 0x240);
        }
        SkelAnime_LoadAnimationType1(arg1, (s32) arg0->unk_240, arg0->unk_264, arg0->unk_260);
        if ((arg1->csCtx.state != 0) || (arg0->unk_394 != 0)) {
            arg0->unk_AA5 = 0;
            goto block_45;
        }
        temp_v0_2 = arg0->unk_AE8;
        if (((s32) temp_v0_2 < 2) || ((s32) temp_v0_2 >= 4)) {
            D_80862B04 = func_8083216C((Player *) arg0, arg1);
            if (D_80862B04 != 0) {
block_45:
                arg0->unk_AE7 = 0;
            }
        }
        arg0->world.pos.x = sp4C->unk_24 + sp4C->unk_258;
        arg0->world.pos.y = (sp4C->unk_28 + sp4C->unk_25C) - 27.0f;
        arg0->world.pos.z = sp4C->unk_2C + sp4C->unk_260;
        temp_v0_3 = sp4C->unk_BE;
        arg0->shape.rot.y = temp_v0_3;
        arg0->unk_AD4 = temp_v0_3;
        if (D_80862B04 == 0) {
            temp_a2 = arg0 + 0x284;
            if (arg0->unk_AE7 != 0) {
                sp2C = temp_a2;
                if (func_801360E0(arg1, temp_a2) != 0) {
                    sp4C->unk_1E8 = (s32) (sp4C->unk_1E8 & ~0x100);
                    arg0->unk_AE7 = 0;
                }
                if (&D_0400E080 == arg0->unk_28C) {
                    if (func_80136A48(temp_a2, 23.0f) != 0) {
                        func_800B8E58(arg0, 0x181EU);
                        func_8082DF8C(arg0, 0x6802U);
                    }
                    SkelAnime_LoadAnimationType1(arg1, (s32) arg0->unk_240, arg0->unk_260, arg0->unk_2A4);
                } else {
                    if (func_80136A48(temp_a2, 10.0f) != 0) {
                        func_800B8E58(arg0, 0x181EU);
                        func_8082DF8C(arg0, 0x6802U);
                    }
                    SkelAnime_LoadAnimationType3(arg1, (s32) arg0->unk_240, arg0->unk_260, arg0->unk_2A4, D_8085B9F0);
                }
            } else if ((arg0->flags & 0x100) != 0x100) {
                temp_v1_4 = sp4C->unk_1E8;
                phi_v0_3 = 0;
                phi_v0_4 = 0;
                phi_a2 = NULL;
                if ((temp_v1_4 & 0x200) != 0) {
                    phi_v0_3 = 1;
                }
                if (phi_v0_3 != 0) {
                    phi_a2 = &D_0400E080;
                } else {
                    if ((temp_v1_4 & 0x100) != 0) {
                        phi_v0_4 = 1;
                    }
                    if (phi_v0_4 != 0) {
                        temp_v0_4 = arg0->unk_AE8;
                        if (((s32) temp_v0_4 >= 2) && (temp_v0_4 != 0x63)) {
                            phi_a2 = *(&D_8085D6A4 + (temp_v0_4 * 4));
                        }
                    }
                }
                if (phi_a2 != 0) {
                    SkelAnime_ChangeLinkAnimDefaultStop(arg1, arg0 + 0x284, phi_a2);
                    arg0->unk_AE7 = 1;
                }
            }
        }
        if (arg0->unk_A6C & 0x100000) {
            if ((D_80862B44->press.button & 0x8000) == 0) {
                if (func_8084FE48(arg0) == 0) {
                    goto block_75;
                }
                func_8084FD7C(arg1, arg0, sp4C);
            } else {
block_75:
                arg0->unk_AA5 = 0;
                arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFEFFFFF);
            }
        } else if ((arg0->unk_394 != 0) || ((func_8082DAFC(arg1) == 0) && ((sp4C->unk_70 != 0.0f) || (func_808391D8((Player *) arg0, arg1) == 0)) && (func_80847BF0(arg0, (? *) arg1) == 0) && (func_80838A90(arg0, arg1) == 0))) {
            if (arg0->unk_730 != 0) {
                if (func_800B7128(arg0) != 0) {
                    arg0->unk_AB4 = (s16) (func_8083C62C(arg0, 1) - arg0->shape.rot.y);
                    temp_v1_5 = arg0->unk_AB4;
                    if ((s32) temp_v1_5 < -0x4AAA) {
                        arg0->unk_AB4 = -0x4AAA;
                    } else {
                        phi_v0_5 = temp_v1_5;
                        if ((s32) temp_v1_5 >= 0x4AAB) {
                            phi_v0_5 = 0x4AAA;
                        }
                        arg0->unk_AB4 = phi_v0_5;
                    }
                    temp_v1_6 = arg0->unk_AB4;
                    arg0->focus.rot.y = arg0->shape.rot.y + temp_v1_6;
                    arg0->unk_AB4 = (s16) (temp_v1_6 + 0xFA0);
                    arg0->unk_AA6 = (u16) (arg0->unk_AA6 | 0x80);
                } else {
                    func_8083C62C(arg0, 0);
                }
                arg0->unk_AA8 = 0;
            } else if (func_8084FE48(arg0) != 0) {
                if (func_800B7128(arg0) != 0) {
                    func_80831010(arg0, arg1);
                }
                arg0->unk_B86 = 0xC;
            } else if (func_800B7128(arg0) != 0) {
                func_8084FD7C(arg1, arg0, sp4C);
            }
        }
    }
    if (arg0->unk_394 == 6) {
        arg0->unk_394 = 0U;
    }
}

void func_808505D0(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    void *temp_a2;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40);
    func_80847E2C(arg0, 1.0f, 10.0f);
    if (func_801360E0(arg1, arg0 + 0x240) != 0) {
        temp_a2 = arg0->unk_390;
        sp24 = temp_a2;
        func_800DFAC8(Play_GetCamera(arg1, 0), 1);
        func_80839E74(arg0, arg1);
        arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFF7FFFFF);
        arg0->parent = NULL;
        D_801BDA9C = 0;
        if (((*(gBitFlags + 0x38) & gSaveContext.inventory.questItems) != 0) || (gGameInfo->data[673] != 0)) {
            gSaveContext.horseData.scene = arg1->sceneNum;
            gSaveContext.horseData.pos.x = (s16) (s32) temp_a2->unk_24;
            gSaveContext.horseData.pos.y = (s16) (s32) temp_a2->unk_28;
            gSaveContext.horseData.pos.z = (s16) (s32) temp_a2->unk_2C;
            gSaveContext.horseData.angle = temp_a2->unk_BE;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if ((s32) arg0->unk_38C < 0) {
        D_8085D708.unk_2 = 0x2828;
    } else {
        D_8085D708.unk_2 = 0x281D;
    }
    func_8082E224(arg0, &D_8085D708);
}

s32 func_80850734(GlobalContext *arg0, Player *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if ((arg1->transformation == 2) && (arg1->windSpeed == 0.0f) && ((s32) arg1->currentBoots < 5) && (~(D_80862B44->cur.button | 0xFFFF7FFF) == 0)) {
        func_8083B850(arg0, arg1);
        arg1->stateFlags2 |= 0x400;
        SkelAnime_ChangeLinkAnim(arg0, &arg1->skelAnime, (LinkAnimationHeader *) &D_0400E418, 0.6666667f, 4.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400E418), (u8) 2, -6.0f);
        arg1->unk_AE8 = 5;
        arg1->unk_B86 = 0;
        arg1->unk_B48 = arg1->linearVelocity;
        arg1->actor.velocity.y = 0.0f;
        func_800B8E58((Actor *) arg1, 0x8ECU);
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80850854(GlobalContext *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if ((arg1->unk_14B == 3) && (arg1->unk_B67 != 0) && (gSaveContext.health != 0) && (D_80862AFC != 0.0f)) {
        func_808373F8(NULL);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_808508C8(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    s16 sp32;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    func_8082E67C(arg1, arg0, (LinkAnimationHeader *) &D_0400E000);
    func_808475B4((s16 *) arg0);
    temp_v0 = arg0->unk_AE8;
    if (temp_v0 != 0) {
        arg0->unk_AE8 = (s16) (temp_v0 - 1);
    }
    func_8082F164((Player *) arg0, 0x10);
    if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
        arg0->unk_AE8 = 0;
    }
    if ((func_8082DAFC(arg1) == 0) && (func_80833058(arg1, (Player *) arg0, D_8085D048, (s8 *)1) == 0) && (func_8083B3B4(arg1, arg0, D_80862B44) == 0) && ((arg0->unk_AE8 != 0) || (func_80850734(arg1, (Player *) arg0) == 0))) {
        sp34 = 0.0f;
        sp32 = arg0->shape.rot.y;
        if ((s32) arg0->unk_AA5 >= 3) {
            arg0->unk_AA5 = 0U;
        }
        if ((s32) arg0->unk_145 >= 5) {
            if ((arg0->bgCheckFlags & 1) != 0) {
                func_80836A98((Player *) arg0, *(&D_8085BFD4 + (arg0->unk_14F * 4)), arg1);
                func_8082E1BC(arg0);
            }
            goto block_24;
        }
        if ((func_80850854(arg1, arg0) == 0) && (func_80832F78((s16 *) arg0, (bitwise f32) &sp34, &sp32, NULL, (f32 *) arg1), (sp34 != 0.0f))) {
            temp_v0_2 = arg0->shape.rot.y - sp32;
            phi_v1 = (s32) temp_v0_2;
            if ((s32) temp_v0_2 < 0) {
                phi_v1 = -(s32) temp_v0_2;
            }
            if ((phi_v1 < 0x6001) || (Math_StepToF(arg0 + 0xAD0, 0.0f, 1.0f) != 0)) {
                if ((func_8082FC24((Player *) arg0) != 0) || (func_80847ED4((Player *) arg0) != 0)) {
                    func_80848048(arg1, arg0);
                } else {
                    func_8083B73C(arg1, arg0, sp32);
                }
                goto block_24;
            }
        } else {
block_24:
            func_8084748C((s16 *) arg0, arg0 + 0xAD0, sp34, sp32);
            func_80847F1C((Player *) arg0);
        }
    }
}

void func_80850B18(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 phi_v1;

    if (func_80838A90(arg0, arg1) == 0) {
        arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
        func_808477D0(arg1, arg0, NULL, arg0->unk_AD0);
        func_808475B4((s16 *) arg0);
        temp_v0 = arg0->unk_AE8;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_AE8 = (s16) (temp_v0 - 1);
            phi_v1 = arg0->unk_AE8;
        }
        if (phi_v1 == 0) {
            func_808353DC(arg1, arg0);
        }
    }
}

void func_80850BA8(s16 *arg0) {
    s16 temp_a0;

    temp_a0 = arg0->unk_AAA;
    arg0 = arg0;
    arg0->unk_AD0 = (f32) (Math_CosS(temp_a0) * arg0->unk_B48);
    arg0->unk_68 = (f32) (-Math_SinS(arg0->unk_AAA) * arg0->unk_B48);
}

void func_80850BF8(s16 *arg0, f32 arg1) {
    s32 temp_f4;
    s32 phi_v1;
    s16 phi_a0;
    s16 phi_v1_2;

    Math_AsymStepToF(arg0 + 0xB48, arg1, 1.0f, (fabsf(arg0->unk_B48) * 0.01f) + 0.4f);
    phi_v1 = -1;
    if ((s32) D_80862B44->rel.stick_x >= 0) {
        phi_v1 = 1;
    }
    temp_f4 = (s32) ((f32) phi_v1 * (1.0f - Math_CosS((s16) (D_80862B44->rel.stick_x * 0x10E))) * -1100.0f);
    if ((s32) (s16) temp_f4 < -0x1F40) {
        phi_a0 = -0x1F40;
    } else {
        phi_v1_2 = (s16) temp_f4;
        if ((s32) (s16) temp_f4 >= 0x1F41) {
            phi_v1_2 = 0x1F40;
        }
        phi_a0 = phi_v1_2;
    }
    arg0->unk_AD4 = (s16) (arg0->unk_AD4 + phi_a0);
}

void func_80850D20(void) {
    func_8083F8A8((GameState *)0x41400000, (Actor *)-1, 1.0f, 0xA0, 2.8e-44f, 1);
}

void func_80850D68(s16 *arg0, GlobalContext *arg1) {
    f32 sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3C;
    s16 sp3A;
    s16 *sp28;
    DynaPolyActor *temp_v0_3;
    GameInfo *temp_v1_2;
    GameInfo *temp_v1_4;
    GameInfo *temp_v1_5;
    s16 *temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 temp_v1;
    s16 temp_v1_3;
    u8 temp_a1_4;
    s16 phi_v0;
    s32 phi_a1;
    s16 phi_a1_2;
    s16 phi_t1;
    s32 phi_v0_2;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    func_808475B4(arg0);
    func_8082F164((Player *) arg0, 0x10);
    if ((func_80833058(arg1, (Player *) arg0, D_8085D048, NULL) == 0) && (func_8083B3B4(arg1, (Actor *) arg0, D_80862B44) == 0) && (func_80840A30((Actor *) arg1, (Actor *) arg0, (f32 *) (arg0 + 0xAD0), 0.0f) == 0)) {
        sp44 = 0.0f;
        if (arg0->unk_AE8 != 0) {
            temp_a1 = arg0 + 0x240;
            if (((func_8082DA90(arg1) == 0) && (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0)) || (arg0->unk_145 != 4)) {
                arg0->unk_B86 = 1;
            }
            sp28 = temp_a1;
            if (func_801360E0(arg1, (SkelAnime *) temp_a1) != 0) {
                temp_v1 = arg0->unk_AE8;
                if (temp_v1 == 0) {
                    phi_v0 = 0;
                } else {
                    arg0->unk_AE8 = (s16) (temp_v1 - 1);
                    phi_v0 = arg0->unk_AE8;
                }
                if (phi_v0 == 0) {
                    if (arg0->unk_B86 != 0) {
                        arg0->unk_A74 = (s32) (arg0->unk_A74 & 0xFFFF7FFF);
                        func_8082DB90(arg1, (Actor *) arg0, (LinkAnimationHeader *) &D_0400E408);
                    } else {
                        func_8082DB60(arg1, (Actor *) arg0, (LinkAnimationHeader *) &D_0400E3D8);
                    }
                } else {
                    goto block_16;
                }
            } else {
block_16:
                func_80832F78(arg0, (bitwise f32) &sp44, &sp40, NULL, (f32 *) arg1);
                Math_ScaledStepToS(arg0 + 0xAD4, sp40, 0x640);
                if (arg0->unk_258 >= 13.0f) {
                    sp44 = 12.0f;
                    if (func_80136A48((SkelAnime *) sp28, 13.0f) != 0) {
                        arg0->unk_B48 = 16.0f;
                    }
                    arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x8000);
                } else {
                    sp44 = 0.0f;
                }
            }
            Math_SmoothStepToS(arg0 + 0xB88, (s16) (D_80862B44->rel.stick_x * 0xC8), 0xA, 0x3E8, (s16) 0x64);
            temp_v1_2 = gGameInfo;
            Math_SmoothStepToS(arg0 + 0xB8E, arg0->unk_B88, (s16) (temp_v1_2->data[904] + 1), temp_v1_2->data[905], (s16) (s32) temp_v1_2->data[906]);
        } else if (arg0->unk_B86 == 0) {
            func_801360E0(arg1, (SkelAnime *) (arg0 + 0x240));
            if (((func_8082DA90(arg1) == 0) && (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0)) || (arg0->unk_145 != 4) || (arg0->unk_B2C > 9.0f)) {
                arg0->unk_A74 = (s32) (arg0->unk_A74 & 0xFFFF7FFF);
                func_8082DB90(arg1, (Actor *) arg0, (LinkAnimationHeader *) &D_0400E408);
                arg0->unk_B86 = 1;
            } else {
                sp44 = 9.0f;
                func_800B8F98((Actor *) arg0, 0xEDU);
            }
            temp_v0 = arg0->unk_B8C;
            temp_a1_2 = D_80862B44->rel.stick_y * 0xC8;
            phi_a1 = (s32) temp_a1_2;
            if (temp_v0 != 0) {
                arg0->unk_B8C = (s16) (temp_v0 - 1);
                temp_v1_3 = arg0->unk_B6C - 0xFA0;
                if ((s32) temp_v1_3 < (s32) temp_a1_2) {
                    phi_a1 = (s32) temp_v1_3;
                }
            }
            phi_a1_2 = (s16) phi_a1;
            if (((s32) arg0->unk_AAA >= -0x1555) && (arg0->unk_8C < (arg0->unk_A68->unk_24 + 10.0f)) && (phi_a1 < 0x7D0)) {
                phi_a1_2 = 0x7D0;
            }
            Math_SmoothStepToS(arg0 + 0xAAA, phi_a1_2, 4, 0xFA0, (s16) 0x190);
            temp_a1_3 = D_80862B44->rel.stick_x * 0x64;
            sp42 = temp_a1_3;
            if ((Math_ScaledStepToS(arg0 + 0xB8A, temp_a1_3, 0x384) != 0) && (temp_a1_3 == 0)) {
                Math_SmoothStepToS(arg0 + 0xB88, 0, 4, 0x5DC, (s16) 0x64);
                temp_v1_4 = gGameInfo;
                Math_SmoothStepToS(arg0 + 0xB8E, arg0->unk_B88, (s16) (temp_v1_4->data[908] + 1), temp_v1_4->data[909], (s16) (s32) temp_v1_4->data[910]);
            } else {
                temp_v0_2 = arg0->unk_B88;
                temp_t0 = arg0->unk_B8A;
                temp_t2 = temp_v0_2;
                if ((s32) temp_t0 < 0) {
                    phi_t1 = -0x3A98;
                } else {
                    phi_t1 = 0x3A98;
                }
                arg0->unk_B88 = (s16) (temp_v0_2 + temp_t0);
                temp_v1_5 = gGameInfo;
                sp3C = temp_t2;
                sp3A = phi_t1;
                Math_SmoothStepToS(arg0 + 0xB8E, arg0->unk_B88, (s16) (temp_v1_5->data[911] + 1), temp_v1_5->data[912], (s16) (s32) temp_v1_5->data[913]);
                temp_t0_2 = arg0->unk_B8A;
                phi_v0_2 = (s32) temp_t0_2;
                if ((s32) temp_t0_2 < 0) {
                    phi_v0_2 = -(s32) temp_t0_2;
                }
                if ((phi_v0_2 >= 0xFA1) && ((((temp_t2 + temp_t0_2) - phi_t1) * (temp_t2 - phi_t1)) <= 0)) {
                    func_800B8E58((Actor *) arg0, 0x8EEU);
                }
            }
            if (D_80862B18 < 20.0f) {
                func_80850D20(arg1, arg0);
            }
        } else {
            Math_SmoothStepToS(arg0 + 0xB88, 0, 4, 0xFA0, (s16) 0x190);
            if (((arg0->unk_258 <= 5.0f) || (func_80850734(arg1, (Player *) arg0) == 0)) && (func_801360E0(arg1, (SkelAnime *) (arg0 + 0x240)) != 0)) {
                func_808353DC(arg1, (Actor *) arg0);
            }
            func_8082F09C((Actor *) arg0);
        }
        if (((s32) arg0->unk_B8C < 8) && ((arg0->unk_90 & 1) != 0)) {
            temp_a1_4 = arg0->unk_85;
            if ((temp_a1_4 == 0x32) || (temp_v0_3 = BgCheck_GetActorOfMesh(&arg1->colCtx, (s32) temp_a1_4), (temp_v0_3 == 0)) || (temp_v0_3->actor.id != 0x1A5)) {
                temp_v0_4 = arg0->unk_AAA;
                arg0->unk_AAA = (s16) (temp_v0_4 + ((-(s32) arg0->unk_B6C - temp_v0_4) * 2));
                arg0->unk_B8C = 0xF;
            }
            func_80850D20(arg1, arg0);
            func_800B8E58((Actor *) arg0, 0x83BU);
        }
        func_80850BF8(arg0, sp44);
        func_80850BA8(arg0);
    }
}

void func_808513EC(s16 *arg0, GlobalContext *arg1) {
    f32 sp34;
    s16 sp32;
    s16 sp30;
    s32 phi_v0;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    func_808475B4(arg0);
    func_8082F164((Player *) arg0, 0x10);
    if ((func_80833058(arg1, (Player *) arg0, D_8085D048, (s8 *)1) == 0) && (func_8083B3B4(arg1, (Actor *) arg0, D_80862B44) == 0) && (func_80850854(arg1, (Actor *) arg0) == 0)) {
        func_808477D0(arg1, (Actor *) arg0, D_80862B44, arg0->unk_AD0);
        if (func_8082DA90(arg1) != 0) {
            sp34 = arg0->unk_AD0;
            sp32 = arg0->unk_BE;
        } else {
            func_80832F78(arg0, (bitwise f32) &sp34, &sp32, NULL, (f32 *) arg1);
        }
        sp30 = arg0->unk_BE - sp32;
        if (func_80850734(arg1, (Player *) arg0) == 0) {
            if ((func_8082FC24((Player *) arg0) != 0) || (func_80847ED4((Player *) arg0) != 0)) {
                func_80848048(arg1, (Actor *) arg0);
            } else if (sp34 != 0.0f) {
                phi_v0 = (s32) sp30;
                if ((s32) sp30 < 0) {
                    phi_v0 = -(s32) sp30;
                }
                if ((phi_v0 >= 0x6001) || ((s32) arg0->unk_145 >= 5)) {
                    goto block_15;
                }
            } else {
block_15:
                func_808353DC(arg1, (Actor *) arg0);
            }
            func_80847FF8((f32 *) arg0, arg0 + 0xAD0, (bitwise s16) sp34, sp32);
        }
    }
}

void func_80851588(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    s16 sp2A;

    func_808477D0(arg1, arg0, D_80862B44, arg0->unk_AD0);
    func_808475B4((s16 *) arg0);
    func_8082F164((Player *) arg0, 0x10);
    if ((func_80833058(arg1, (Player *) arg0, D_8085D048, (s8 *)1) == 0) && (func_8083B3B4(arg1, arg0, D_80862B44) == 0)) {
        func_80832F78((s16 *) arg0, (bitwise f32) &sp2C, &sp2A, NULL, (f32 *) arg1);
        if (sp2C == 0.0f) {
            func_808353DC(arg1, arg0);
        } else if ((func_8082FC24((Player *) arg0) == 0) && (func_80847ED4((Player *) arg0) == 0)) {
            func_8083B73C(arg1, arg0, sp2A);
        } else {
            func_80848094(arg1, arg0, &sp2C, &sp2A);
        }
        func_80847FF8((f32 *) arg0, arg0 + 0xAD0, (bitwise s16) sp2C, sp2A);
    }
}

void func_808516B4(Player *arg0, GlobalContext *arg1) {
    f32 sp28;
    SkelAnime *sp20;
    SkelAnime *temp_a2;
    f32 temp_f0;
    f32 temp_f2;
    s8 temp_v0;
    f32 phi_f2;

    arg0->stateFlags2 |= 0x20;
    arg0->actor.gravity = 0.0f;
    func_8083216C(arg0, arg1);
    func_8082F164(arg0, 0x10);
    if (func_80838A90((Actor *) arg0, arg1) == 0) {
        if ((s32) arg0->currentBoots >= 5) {
            func_808353DC(arg1, (Actor *) arg0);
            return;
        }
        temp_v0 = arg0->unk_AE7;
        if (temp_v0 == 0) {
            if (arg0->unk_AE8 == 0) {
                temp_a2 = &arg0->skelAnime;
                sp20 = temp_a2;
                if ((func_801360E0(arg1, temp_a2) != 0) || ((arg0->skelAnime.animCurrentFrame >= 22.0f) && (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0))) {
                    func_8083B798(arg1, (GlobalContext *) arg0, temp_a2);
                } else if (func_80136A48(temp_a2, 20.0f) != 0) {
                    arg0->actor.velocity.y = -2.0f;
                }
                func_80832F24((Actor *) arg0);
            } else {
                func_808477D0(arg1, (Actor *) arg0, D_80862B44, arg0->actor.velocity.y);
                arg0->unk_AAA = 0x3E80;
                if ((~(D_80862B44->cur.button | 0xFFFF7FFF) == 0) && (func_8083D23C(arg0, arg1) == 0) && ((arg0->actor.bgCheckFlags & 1) == 0) && (arg0->actor.yDistToWater < 120.0f)) {
                    func_808481CC((f32 *) arg1, (s16 *) arg0, -2.0f);
                } else {
                    arg0->unk_AE7 += 1;
                    func_8082E634(arg1, (Actor *) arg0, (LinkAnimationHeader *) &D_0400E000);
                }
            }
            temp_f0 = (arg0->actor.yDistToWater - arg0->ageProperties->unk_30) * 0.04f;
            if (temp_f0 < arg0->actor.velocity.y) {
                arg0->actor.velocity.y = temp_f0;
                return;
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return;
        }
        if (temp_v0 == 1) {
            func_801360E0(arg1, &arg0->skelAnime);
            func_808475B4((s16 *) arg0);
            if ((s32) arg0->unk_AAA < 0x2710) {
                arg0->unk_AE7 += 1;
                arg0->unk_AE8 = (s16) (s32) arg0->actor.yDistToWater;
                func_8082E634(arg1, (Actor *) arg0, (LinkAnimationHeader *) &D_0400DFD0);
                return;
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return;
        }
        if (func_8083B3B4(arg1, (Actor *) arg0, D_80862B44) == 0) {
            temp_f2 = ((f32) arg0->unk_AE8 * 0.018f) + 4.0f;
            if ((arg0->stateFlags1 & 0x800) != 0) {
                D_80862B44 = NULL;
            }
            sp28 = temp_f2;
            func_808477D0(arg1, (Actor *) arg0, D_80862B44, fabsf(arg0->actor.velocity.y));
            Math_ScaledStepToS(&arg0->unk_AAA, -0x2710, 0x320);
            phi_f2 = temp_f2;
            if (temp_f2 > 8.0f) {
                phi_f2 = 8.0f;
            }
            func_808481CC((f32 *) arg1, (s16 *) arg0, phi_f2);
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
    }
}

void func_808519FC(Player *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    arg0->stateFlags2 |= 0x20;
    func_8082F164(arg0, 0x10);
    if ((((arg0->stateFlags1 & 0x400) != 0) || (arg0->skelAnime.animCurrentFrame <= 1.0f) || (func_80850734(arg1, arg0) == 0)) && (func_801360E0(arg1, &arg0->skelAnime) != 0)) {
        if (((arg0->stateFlags1 & 0x400) == 0) || (func_808482E0(arg1, (Actor *) arg0) != 0)) {
            func_80848250(arg1, (Actor *) arg0);
            func_808353DC(arg1, (Actor *) arg0);
            func_8082DC64(arg1, arg0);
        }
    } else {
        temp_a0 = &arg0->skelAnime;
        if (((arg0->stateFlags1 & 0x400) != 0) && (sp24 = temp_a0, (func_80136A48(temp_a0, 10.0f) != 0))) {
            func_8082ECE0(arg0);
            func_8082DC64(arg1, arg0);
        } else if (func_80136A48(&arg0->skelAnime, 5.0f) != 0) {
            func_8082DF8C((Actor *) arg0, 0x680AU);
        }
    }
    func_808475B4((s16 *) arg0);
    func_8084748C((s16 *) arg0, &arg0->linearVelocity, 0.0f, arg0->actor.shape.rot.y);
}

void func_80851B58(s16 *arg0, GlobalContext *arg1) {
    func_808475B4(arg0);
    Math_StepToF((f32 *) (arg0 + 0xAD0), 0.0f, 0.4f);
    if ((func_801360E0(arg1, (SkelAnime *) (arg0 + 0x240)) != 0) && (arg0->unk_AD0 < 10.0f)) {
        func_808353DC(arg1, (Actor *) arg0);
    }
}

void func_80851BD4(s16 *arg0, GlobalContext *arg1) {
    func_808475B4(arg0);
    if ((func_801360E0(arg1, (SkelAnime *) (arg0 + 0x240)) != 0) && (arg0 == arg1->actorCtx.actorList[2].first)) {
        func_80840770(arg1, (Actor *) arg0);
    }
    func_8084748C(arg0, (f32 *) (arg0 + 0xAD0), 0.0f, arg0->unk_BE);
}

s32 func_80851C40(GlobalContext *arg0, Actor *arg1) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    u16 temp_v1_3;
    u8 temp_v1_2;
    s16 phi_v1;
    s32 phi_v0;

    temp_v1 = arg0->sceneNum;
    phi_v1 = temp_v1;
    if (temp_v1 == 0x15) {
        arg0 = arg0;
        temp_v0 = func_801A2DE0(0x54) != 0;
        phi_v0 = temp_v0;
        if (temp_v0 == 0) {
            phi_v1 = arg0->sceneNum;
            goto block_3;
        }
    } else {
block_3:
        if ((phi_v1 == 0x15) || (temp_v0_2 = arg1->unk_394 == 0x44, phi_v0 = temp_v0_2, (temp_v0_2 == 0))) {
            temp_v1_2 = arg0->msgCtx.unk11F22;
            temp_v0_3 = temp_v1_2 == 0x12;
            phi_v0 = temp_v0_3;
            if (temp_v0_3 == 0) {
                temp_v0_4 = temp_v1_2 == 0x13;
                phi_v0 = temp_v0_4;
                if (temp_v0_4 == 0) {
                    temp_v0_5 = temp_v1_2 == 0x14;
                    phi_v0 = temp_v0_5;
                    if (temp_v0_5 == 0) {
                        temp_v1_3 = arg0->msgCtx.unk1202A;
                        temp_v0_6 = temp_v1_3 != 1;
                        phi_v0 = temp_v0_6;
                        if (temp_v0_6 != 0) {
                            temp_v0_7 = arg1->unk_394 == 5;
                            phi_v0 = temp_v0_7;
                            if (temp_v0_7 == 0) {
                                temp_v0_8 = temp_v1_3 == 3;
                                phi_v0 = temp_v0_8;
                                if (temp_v0_8 == 0) {
                                    phi_v0 = arg0->msgCtx.unk_1202C == 0x32;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return phi_v0;
}

void func_80851D30(GlobalContext *arg0, Actor *arg1) {
    f32 sp50;
    f32 *sp44;
    f32 *temp_a3;
    f32 *temp_s0;
    s32 temp_s1;
    u8 temp_v1;
    void *temp_s0_2;
    f32 *phi_s0;
    s32 phi_s1;

    temp_s0 = arg1 + 0xAF4;
    sp44 = temp_s0;
    temp_a3 = sp44;
    phi_s0 = temp_s0;
    if (func_80851C40(arg0, arg1) != 0) {
        if (arg1->unk_241 != 0) {
            sp44 = temp_a3;
            func_8082DB60(arg0, arg1, *(&D_8085D190 + (arg1->unk_14B * 4)), temp_a3);
        }
        sp44 = temp_a3;
        func_80124618(&D_801C03A0, arg1->unk_258, &sp50, temp_a3);
        temp_s0_2 = sp44 + 0x10;
        temp_s0_2->unk_-10 = sp50;
        temp_s0_2->unk_-C = sp50;
        temp_s0_2->unk_-8 = sp50;
        temp_s0_2->unk_-4 = sp50;
        temp_s0_2->unk_0 = sp50;
        return;
    }
    if (arg0->msgCtx.unk1202A == 1) {
        temp_v1 = arg0->msgCtx.unk_12048;
        if (temp_v1 != 0xFF) {
            *(temp_a3 + (temp_v1 * 4)) = 1.2f;
            func_8082DB90(arg0, arg1, *(&D_8085D190 + (arg1->unk_14B * 4)), temp_a3);
            return;
        }
        phi_s1 = 0;
        do {
            Math_StepToF(phi_s0, 1.0f, 0.04000001f);
            temp_s1 = phi_s1 + 1;
            phi_s0 += 4;
            phi_s1 = temp_s1;
        } while (temp_s1 != 5);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80851EAC(Actor *arg0) {
    arg0->unk_B86 = -1;
    arg0->unk_B88 = -1;
    arg0->unk_B10 = 0.0f;
}

void func_80851EC8(GlobalContext *arg0, GlobalContext *arg1) {
    u8 temp_v1;

    temp_v1 = arg0->msgCtx.unk_12048;
    (arg1 + (*((temp_v1 * 8) + &D_8085D714) * 2))->unk_B86 = (s16) temp_v1;
    *(arg1 + (temp_v1 * 4) + 0xB10) = 3.0f;
}

void func_80851F18(GlobalContext *arg0, GlobalContext *arg1) {
    s32 sp2C;
    f32 *temp_a1;
    f32 *temp_v0_4;
    s16 temp_t1;
    s16 temp_t1_2;
    s32 temp_t2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_t1 = arg1->colCtx.dyna.bgActors[7].curTransform.unk_12;
    if ((s32) temp_t1 >= 0) {
        SkelAnime_LoadLinkAnimetion(arg0, ((temp_t1 * 8) + &D_8085D714)->unk_4, (s32) (arg1 + (temp_t1 * 4))->unk_B10, (s32) arg1->mainCamera.paramData[32], arg1->unk_264);
        SkelAnime_LoadAnimationType3(arg0, (s32) arg1->mainCamera.paramData[32], arg1->unk_260, (Vec3s *) arg1->unk_264, D_8085BA08);
    }
    temp_t1_2 = arg1->unk_B88;
    if ((s32) temp_t1_2 >= 0) {
        temp_t2 = (s32) (arg1 + 0x899) & ~0xF;
        sp2C = temp_t2;
        SkelAnime_LoadLinkAnimetion(arg0, ((temp_t1_2 * 8) + &D_8085D714)->unk_4, (s32) (arg1 + (temp_t1_2 * 4))->unk_B10, (s32) arg1->mainCamera.paramData[32], (void *) temp_t2);
        SkelAnime_LoadAnimationType3(arg0, (s32) arg1->mainCamera.paramData[32], arg1->unk_260, (Vec3s *) sp2C, D_8085BA20);
    }
    temp_a1 = arg1 + 0xB10;
    temp_v0 = temp_a1 + 4;
    *temp_a1 += 1.0f;
    if (*temp_a1 >= 9.0f) {
        *temp_a1 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 0) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
        } else if (arg1->unk_B88 == 0) {
            arg1->unk_B88 = -1;
        }
    }
    temp_v0->unk_0 = (f32) (temp_v0->unk_0 + 1.0f);
    if (temp_v0->unk_0 >= 9.0f) {
        temp_v0->unk_0 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 1) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
        } else if (arg1->unk_B88 == 1) {
            arg1->unk_B88 = -1;
        }
    }
    temp_v0_2 = temp_v0 + 4;
    temp_v0_2->unk_0 = (f32) (temp_v0->unk_4 + 1.0f);
    if (temp_v0_2->unk_0 >= 9.0f) {
        temp_v0_2->unk_0 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 2) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
        } else if (arg1->unk_B88 == 2) {
            arg1->unk_B88 = -1;
        }
    }
    temp_v0_3 = temp_v0_2 + 4;
    temp_v0_3->unk_0 = (f32) (temp_v0_2->unk_4 + 1.0f);
    if (temp_v0_3->unk_0 >= 9.0f) {
        temp_v0_3->unk_0 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 3) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
        } else if (arg1->unk_B88 == 3) {
            arg1->unk_B88 = -1;
        }
    }
    temp_v0_4 = temp_v0_3 + 4;
    *temp_v0_4 = temp_v0_3->unk_4 + 1.0f;
    if (*temp_v0_4 >= 9.0f) {
        *temp_v0_4 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 4) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
            return;
        }
        if (arg1->unk_B88 == 4) {
            arg1->unk_B88 = -1;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
    }
}

void func_808521E0(GlobalContext *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    GlobalContext *phi_a0;

    temp_a0 = arg0;
    phi_a0 = temp_a0;
    if (func_80851C40(arg1) != 0) {
        if (&D_0400E1F0 != arg1->unk_248) {
            func_8082DB60(temp_a0, (Actor *) arg1, (LinkAnimationHeader *) &D_0400E1F0);
        }
        func_80124618(&D_801C0490, arg1->unk_258, (f32 *) &arg1->colCtx.dyna.bgActors[6].prevTransform.rot);
        return;
    }
    if (temp_a0->msgCtx.unk1202A == 1) {
        if (temp_a0->msgCtx.unk_12048 != 0xFF) {
            arg0 = temp_a0;
            func_80851EC8(temp_a0, arg1);
            phi_a0 = arg0;
        }
        func_80851F18(phi_a0, arg1);
    }
}

void func_80852290(GlobalContext *arg0, Actor *arg1) {
    f32 sp3C;
    s16 sp38;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a3;
    GlobalContext *temp_a3_2;
    Input *temp_a2;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_f4;
    void *temp_v0;
    GlobalContext *phi_a3;
    s32 phi_a1;
    s16 phi_a1_2;
    s16 phi_a1_3;
    s32 phi_a1_4;
    s16 phi_v1;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    temp_a3_2 = arg0;
    phi_a3 = temp_a3_2;
    if (func_80851C40(temp_a0, arg1, temp_a3) != 0) {
        if (arg1->unk_241 != 0) {
            func_8082DB60(temp_a3_2, arg1, *(&D_8085D190 + (arg1->unk_14B * 4)), (f32 *) temp_a3_2);
        }
        arg1->unk_B8A = 8;
    } else {
        if (temp_a3_2->msgCtx.unk1202A == 1) {
            temp_a0_2 = temp_a3_2;
            if (temp_a3_2->msgCtx.unk_12048 != 0xFF) {
                temp_v0 = arg1->unk_A90;
                if ((temp_v0 != 0) && (arg1->unk_A94 < 0.0f)) {
                    temp_v0->unk_4 = (s32) (temp_v0->unk_4 | 0x20000000);
                    arg1->unk_A94 = 0.0f;
                }
                arg0 = temp_a3_2;
                func_8082DB90(temp_a0_2, arg1, *(&D_8085D190 + (arg1->unk_14B * 4)), (f32 *) temp_a3_2);
                arg1->unk_B8A = 8;
                phi_a3 = arg0;
            }
        }
        temp_a2 = phi_a3 + 0x14;
        D_80862B44 = temp_a2;
        func_800FF3A0(&sp3C, &sp38, temp_a2);
        phi_a1 = (s32) sp38;
        if ((s32) (s16) (sp38 + 0x4000) < 0) {
            sp3C = -sp3C;
            phi_a1 = (s32) (s16) (sp38 - 0x8000);
        }
        if (phi_a1 < -0x1F40) {
            phi_a1_2 = -0x1F40;
            goto block_16;
        }
        sp38 = (s16) phi_a1;
        if (phi_a1 >= 0x2EE1) {
            phi_a1_2 = 0x2EE0;
block_16:
            sp38 = phi_a1_2;
        }
        temp_f4 = (s32) (sp3C * -100.0f);
        phi_a1_3 = (s16) temp_f4;
        if ((s32) (s16) temp_f4 >= 0xFA1) {
            phi_a1_3 = 0xFA0;
        }
        Math_SmoothStepToS(arg1 + 0xAB2, phi_a1_3, 4, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg1 + 0xAB4, sp38, 4, 0x7D0, (s16) 0);
        temp_v1 = arg1->unk_AB2;
        arg1->unk_AAC = (s16) -(s32) temp_v1;
        arg1->unk_AA6 = (u16) (arg1->unk_AA6 | 0xC8);
        if ((s32) temp_v1 < 0) {
            phi_a1_4 = (s32) temp_v1 * -0x10000;
        } else {
            phi_a1_4 = temp_v1 << 0x10;
        }
        temp_a1 = phi_a1_4 >> 0x10;
        if (temp_a1 < 0x7D0) {
            arg1->shape.face = 0;
        } else if (temp_a1 < 0xFA0) {
            arg1->shape.face = 0xD;
        } else {
            arg1->shape.face = 8;
        }
    }
    temp_v0_2 = arg1->unk_B8A;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        arg1->unk_B8A = (s16) (temp_v0_2 - 1);
        phi_v1 = arg1->unk_B8A;
    }
    if (phi_v1 != 0) {
        arg1->unk_B86 = (s16) (arg1->unk_B86 + (s32) ((f32) arg1->unk_AB2 * 2.5f));
        arg1->unk_B88 = (s16) (arg1->unk_B88 + (s32) ((f32) arg1->unk_AB4 * 3.0f));
        return;
    }
    arg1->unk_B86 = 0;
    arg1->unk_B88 = 0;
}

void func_8085255C(GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg1->unk_14B;
    if (temp_v0 == 3) {
        func_80851D30();
        return;
    }
    if (temp_v0 == 1) {
        func_808521E0();
        return;
    }
    if (temp_v0 == 2) {
        func_80852290();
    }
}

void func_808525C4(GlobalContext *arg0, Actor *arg1) {
    GlobalContext *temp_a3;
    s16 temp_v0;
    u8 temp_v1;

    temp_a3 = arg0;
    temp_v0 = arg1->unk_AE8;
    arg1->unk_AE8 = (s16) (temp_v0 + 1);
    if ((((s32) temp_v0 < 3) ^ 1) != 0) {
        temp_v1 = arg1->unk_14B;
        if ((temp_v1 == 2) || (temp_v1 == 3)) {
            func_8082E5A8(temp_a3, arg1, *(&D_8085D190 + (temp_v1 * 4)), temp_a3);
        } else if (temp_v1 == 1) {
            arg0 = temp_a3;
            func_80851EAC(arg1, temp_a3);
            func_8082DB60(arg0, arg1, (LinkAnimationHeader *) &D_0400E200);
        } else {
            func_8082DB60(temp_a3, arg1, *(&D_8085D190 + (temp_v1 * 4)), (f32 *) temp_a3);
        }
        arg1->unk_B48 = 1.0f;
    }
}

void func_8085269C(Actor *arg0, GlobalContext *arg1) {
    s32 sp40;
    void *sp3C;
    Actor *temp_a1;
    Actor *temp_v0_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v1;
    s32 temp_v1_2;
    u16 temp_v0;
    void *temp_v0_3;
    s32 phi_v1;
    f32 phi_f2;
    s16 phi_v1_2;

    if ((arg0->unk_AA5 != (Actor *)4) && (((func_801360E0(arg1, arg0 + 0x240) != 0) && (arg0->unk_248 == *(&D_8085D17C + (arg0->unk_14B * 4)))) || ((arg0->unk_241 == 0) && (arg0->unk_AE8 == 0)))) {
        func_808525C4(arg1, arg0, (Actor *)4);
        if (((arg0->flags * 4) >= 0) || (*arg0->unk_A90 == 0x228)) {
            func_80152434(arg1, 1U);
            return;
        }
        /* Duplicate return node #46. Try simplifying control flow for better match */
        return;
    }
    if (arg0->unk_AE8 != 0) {
        temp_v0 = arg1->msgCtx.unk1202A;
        if (temp_v0 == (Actor *)4) {
            arg1->interfaceCtx.unk_222 = 0;
            ActorCutscene_Stop(arg1->unk_1879C[0]);
            temp_a1 = arg0->unk_A88;
            arg0->flags &= 0xDFFFFFFF;
            if ((temp_a1 != 0) && (arg0->unk_A90 == temp_a1) && (arg0->unk_A94 >= 0.0f)) {
                func_8085B460(arg1, temp_a1);
                return;
            }
            temp_v1 = arg0->unk_A84;
            if ((s32) temp_v1 < 0) {
                temp_v0_2 = arg0->unk_A80;
                arg0->unk_A88 = temp_v0_2;
                temp_v0_2->textId = (u16) -(s32) temp_v1;
                func_8085B460(arg1, arg0->unk_A88);
                return;
            }
            if (func_80838A90(arg0, arg1) == 0) {
                func_80836A5C((Player *) arg0, arg1);
                func_8082DBC0(arg1, (GlobalContext *) arg0, *(&D_8085D17C + (arg0->unk_14B * 4)));
                return;
            }
            /* Duplicate return node #46. Try simplifying control flow for better match */
            return;
        }
        temp_v1_2 = ((s32) temp_v0 < 0x1C) ^ 1;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 != 0) {
            phi_v1 = (s32) temp_v0 < 0x27;
        }
        if ((phi_v1 != 0) || (temp_v0 == 0x16) || (temp_v0 == 0x1A) || (temp_v0 == 0x18) || (temp_v0 == 0x19)) {
            if (temp_v0 == 0x16) {
                if (func_8082DA90(arg1) == 0) {
                    if (gSaveContext.deaths == 1) {
                        arg1->nextEntranceIndex = 0x1C10;
                    } else {
                        arg1->nextEntranceIndex = 0x1C00;
                    }
                    gSaveContext.nextCutsceneIndex = 0xFFF7;
                    arg1->sceneLoadFlag = 0x14;
                    return;
                }
                /* Duplicate return node #46. Try simplifying control flow for better match */
                return;
            }
            arg1->interfaceCtx.unk_222 = 0;
            sp3C = arg1 + 0x10000;
            sp40 = phi_v1;
            ActorCutscene_Stop(arg1->unk_1879C[0]);
            arg0->flags &= 0xDFFFFFFF;
            if (phi_v1 != 0) {
                phi_v1_2 = 0x1CE;
            } else {
                phi_v1_2 = 0x18C;
            }
            if (Actor_Spawn(&arg1->actorCtx, arg1, phi_v1_2, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) (s32) arg1->msgCtx.unk1202A) != 0) {
                arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xDFFFFFFF);
                arg0->unk_394 = 0;
                func_8085B28C(arg1, NULL, 0x13);
                arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x30000000);
                return;
            }
            func_80836A5C((Player *) arg0, arg1);
            func_8082DBC0(arg1, (GlobalContext *) arg0, *(&D_8085D17C + (arg0->unk_14B * 4)));
            return;
        }
        if ((temp_v0 == 3) && (arg1->msgCtx.unk1202E == 3)) {
            arg1->interfaceCtx.unk_222 = 0;
            ActorCutscene_Stop(arg1->unk_1879C[0]);
            arg0->flags &= 0xDFFFFFFF;
            func_80831760(arg1, (Player *) arg0, func_80855A7C, 0);
            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x30000000);
            return;
        }
        if (arg0->unk_AA5 == (Actor *)4) {
            temp_v0_3 = arg0->unk_260;
            temp_f12 = (f32) temp_v0_3->unk_0;
            temp_f14 = (f32) temp_v0_3->unk_4;
            temp_f0 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14));
            phi_f2 = temp_f0;
            if (temp_f0 != 0.0f) {
                temp_f2 = (temp_f0 - 100.0f) / temp_f0;
                phi_f2 = temp_f2;
                if (temp_f2 < 0.0f) {
                    phi_f2 = 0.0f;
                }
            }
            temp_v0_3->unk_0 = (s16) (s32) (temp_f12 * phi_f2);
            arg0->unk_260->unk_4 = (s16) (s32) (temp_f14 * phi_f2);
            return;
        }
        func_8085255C(arg1, arg0, (Actor *)4);
        /* Duplicate return node #46. Try simplifying control flow for better match */
    }
}

void func_80852B28(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp3C;
    SkelAnime *temp_a2;

    func_80832F24(arg0);
    temp_a2 = arg0 + 0x240;
    sp3C = temp_a2;
    if (func_801360E0(arg1, temp_a2) != 0) {
        func_80836A98((Player *) arg0, (LinkAnimationHeader *) &D_0400DD40, arg1);
        return;
    }
    if (func_80136A48(temp_a2, 3.0f) != 0) {
        if (Actor_Spawn(&arg1->actorCtx, arg1, 0xF, arg0->unk_CA0, arg0->unk_CA4, arg0->unk_CA8, (s16) 0xFA0, (s16) (s32) arg0->shape.rot.y, (s16) 0, (s16) 8) != 0) {
            func_80115A14(9, -1);
            arg0->unk_D57 = 4;
        }
        func_8082DF8C(arg0, 0x6800U);
    }
}

void func_80852C04(Actor *arg0, GlobalContext *arg1) {
    s32 sp38;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_a2;
    s32 temp_v0_5;
    s8 temp_v0_2;
    u8 temp_v0_4;
    s32 phi_a2;
    LinkAnimationHeader *phi_a2_2;
    LinkAnimationHeader *phi_a2_3;

    func_8083249C(arg0);
    temp_a1 = arg0 + 0x240;
    sp30 = temp_a1;
    if (func_801360E0(arg1, temp_a1) != 0) {
        temp_v0 = arg0->unk_AE8;
        if (temp_v0 != 0) {
            if ((s32) temp_v0 >= 2) {
                arg0->unk_AE8 = (s16) (temp_v0 - 1);
            }
            if ((func_808482E0(arg1, arg0) != 0) && (arg0->unk_AE8 == 1)) {
                func_80123AA4((GlobalContext *) arg0, func_80123960((GlobalContext *) arg0, arg0->unk_14A));
                temp_v0_2 = arg0->unk_B2A;
                if ((temp_v0_2 == 0x5D) || (temp_v0_2 == 0x64) || (temp_v0_2 == 0x65) || (temp_v0_2 == 0x66)) {
                    func_80838760(arg0);
                    func_80848250(arg1, arg0);
                    arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xDFFFFFFF);
                    func_8085B28C(arg1, NULL, 0x5D);
                    return;
                }
                if ((arg0->unk_A88 == 0) || (temp_a2 = (s32) arg0->unk_A87 < 0, phi_a2 = temp_a2, (temp_a2 == 0))) {
                    phi_a2 = (arg0->unk_A74 & 0x20) != 0;
                }
                if ((phi_a2 != 0) || (gSaveContext.healthAccumulator == 0)) {
                    sp38 = phi_a2;
                    func_80838760(arg0);
                    if (phi_a2 != 0) {
                        func_80848250(arg1, arg0, phi_a2);
                        arg0->unk_A87 = 0;
                        if (func_80847994(arg1, arg0) == 0) {
                            func_8085B460(arg1, arg0->unk_A88);
                            return;
                        }
                        /* Duplicate return node #48. Try simplifying control flow for better match */
                        return;
                    }
                    func_80848294(arg1, arg0, phi_a2);
                    return;
                }
                /* Duplicate return node #48. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #48. Try simplifying control flow for better match */
            return;
        }
        func_8082E794(arg0, arg0);
        temp_v0_3 = arg0->unk_384;
        if ((temp_v0_3 == 0x11) || (temp_v0_3 == 0x52) || (temp_v0_3 == 0x76)) {
            func_80838760(arg0);
            arg0->unk_A6C = (s32) (arg0->unk_A6C & ~0xC00);
            if (arg0->unk_384 == 0x11) {
                func_80839E74(arg0, arg1);
                return;
            }
            arg0->colChkInfo.damage = 0;
            func_80833B18(arg1, arg0, (Actor *)3, 0.0f, 0.0f, (s16) 0, 0x14);
            return;
        }
        if (&D_0400DB18 == arg0->unk_248) {
            if (arg0->unk_14B == 3) {
                phi_a2_2 = (LinkAnimationHeader *) &D_0400E2C0;
            } else {
                phi_a2_2 = &D_0400D5B0;
            }
            func_8082DB90(arg1, arg0, phi_a2_2);
        } else {
            phi_a2_3 = &D_0400D5A8;
            if (arg0->unk_14B == 3) {
                phi_a2_3 = (LinkAnimationHeader *) &D_0400E2B8;
            }
            func_8082DB90(arg1, arg0, phi_a2_3);
        }
        func_8082E920(arg1, arg0, 0x9F);
        func_80838760(arg0);
        arg0->unk_AE8 = 2;
        arg0->unk_A86 = (s8) arg1->unk_1879C[1];
        return;
    }
    if (arg0->unk_AE8 == 0) {
        temp_v0_4 = arg0->unk_14B;
        if (temp_v0_4 == 4) {
            func_8082E224(arg0, &D_8085D73C);
            return;
        }
        if (temp_v0_4 == 3) {
            func_8082E224(arg0, &D_8085D74C);
            return;
        }
        /* Duplicate return node #48. Try simplifying control flow for better match */
        return;
    }
    temp_v0_5 = arg0->unk_248;
    if ((&D_0400D5B0 == temp_v0_5) || (&D_0400E2C0 == temp_v0_5)) {
        Math_ScaledStepToS(&arg0->shape.rot.y, (s16) (func_800DFCDC(arg1->cameraPtrs[arg1->activeCamera]) + 0x8000), 0xFA0);
    } else if ((&D_0400E2B8 == temp_v0_5) && (func_80136A48(sp30, 10.0f) != 0)) {
        func_8082E1BC(arg0);
    }
    if (func_80136A48(sp30, 21.0f) != 0) {
        func_8082ECE0((Player *) arg0);
    }
}

void func_80852FD4(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp18;
    SkelAnime *temp_a1;
    SkelAnime *temp_a3;
    s16 temp_v0;
    s16 phi_v1;

    temp_a3 = arg0 + 0x240;
    temp_a1 = temp_a3;
    sp18 = temp_a3;
    arg0 = arg0;
    if (func_801360E0(arg1, temp_a1) != 0) {
        if (arg0->unk_AE7 == 0) {
            temp_v0 = arg0->unk_AE8;
            if (temp_v0 == 0) {
                phi_v1 = 0;
            } else {
                arg0->unk_AE8 = (s16) (temp_v0 - 1);
                phi_v1 = arg0->unk_AE8;
            }
            if (phi_v1 == 0) {
                arg0->unk_AE7 = 1;
                arg0->unk_250 = (f32) (arg0->unk_254 - 1.0f);
                return;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        func_80839E74(arg0, arg1, arg0, temp_a3);
        return;
    }
    if ((arg0->unk_14B == 0) && (arg0 = arg0, (func_80136A48(temp_a3, 158.0f) != 0))) {
        func_8082DF8C(arg0, 0x6800U, (u16) arg0);
        return;
    }
    if (arg0->unk_14B != 0) {
        func_8082E224(arg0, &D_8085D75C, (SkelAnime *) arg0);
        return;
    }
    func_808484CC(arg0, &D_8085D75C, arg0);
}

void func_808530E0(GlobalContext *arg0, Actor *arg1) {
    ? sp4C;
    ? sp40;
    ? sp34;

    func_80835BC8(arg1, arg1 + 0x24, &D_8085D764, (Vec3f *) &sp4C);
    func_80835BC8(arg1, &D_801D15B0, &D_8085D770, (Vec3f *) &sp40);
    func_80835BC8(arg1, &D_801D15B0, &D_8085D77C, (Vec3f *) &sp34);
    func_800B0EB0(arg0, (Vec3f *) &sp4C, (Vec3f *) &sp40, (Vec3f *) &sp34, &D_8085D788, D_8085D78C, (s16) 0x28, (s16) 0xA, (s16) 0xA);
}

void func_80853194(Actor *arg0, GlobalContext *arg1) {
    s32 sp40;
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s8 temp_v0_2;
    u8 *temp_v1;
    u8 temp_v1_2;
    s32 phi_v1;
    s32 phi_v1_2;
    LinkAnimationHeader *phi_a2;
    s32 phi_a2_2;

    func_808323C0(arg0, arg1->unk_1879C[2]);
    temp_a1 = arg0 + 0x240;
    sp34 = temp_a1;
    if (func_801360E0(arg1, temp_a1) != 0) {
        temp_v0 = arg0->unk_AE8;
        if (temp_v0 == 0) {
            temp_v0_2 = arg0->unk_14A;
            temp_v1 = &D_8085D76D + temp_v0_2;
            if (temp_v0_2 == 0x21) {
                temp_v0_3 = Rand_S16Offset(-1, 3);
                phi_v1 = (s32) temp_v0_3;
                if (temp_v0_3 == 0) {
                    phi_v1 = 3;
                }
                phi_v1_2 = phi_v1;
                if ((phi_v1 < 0) && ((s32) gSaveContext.health < 0x11)) {
                    phi_v1_2 = 3;
                }
                if (phi_v1_2 < 0) {
                    func_80115908(arg1, -0x10U);
                } else {
                    gSaveContext.healthAccumulator = phi_v1_2 * 0x10;
                }
            } else {
                temp_v1_2 = *temp_v1;
                if ((temp_v1_2 & 1) != 0) {
                    gSaveContext.healthAccumulator = 0x140;
                }
                if ((temp_v1_2 & 2) != 0) {
                    sp40 = (s32) temp_v1_2;
                    Parameter_AddMagic(arg1, (s16) (gSaveContext.unk_3F30 + (gSaveContext.doubleMagic * 0x30) + 0x30), &gSaveContext);
                }
                if ((*temp_v1 & 4) != 0) {
                    gSaveContext.healthAccumulator = 0x50;
                }
                if (arg0->unk_14A == 0x28) {
                    gSaveContext.weekEventReg[14] |= 8;
                }
                gSaveContext.unk_1016 = 0;
            }
            if (arg0->unk_14B == 3) {
                phi_a2 = (LinkAnimationHeader *) &D_0400E290;
            } else {
                phi_a2 = &D_0400D4C0;
            }
            func_8082DB60(arg1, arg0, phi_a2);
            arg0->unk_AE8 = 1;
            return;
        }
        if ((s32) temp_v0 < 0) {
            arg0->unk_AE8 = (s16) (temp_v0 + 1);
            temp_v0_4 = arg0->unk_AE8;
            if (temp_v0_4 == 0) {
                arg0->unk_AE8 = 3;
                arg0->unk_250 = (f32) (arg0->unk_254 - 1.0f);
                return;
            }
            if (temp_v0_4 == -6) {
                func_808530E0(arg1, arg0);
                return;
            }
            /* Duplicate return node #44. Try simplifying control flow for better match */
            return;
        }
        func_80838760(arg0);
        func_80839E74(arg0, arg1);
        return;
    }
    temp_v0_5 = arg0->unk_AE8;
    if (temp_v0_5 == 1) {
        if ((gSaveContext.healthAccumulator == 0) && (gSaveContext.unk_3F28 != 9)) {
            if (arg0->unk_14B == 3) {
                SkelAnime_ChangeLinkAnim(arg1, sp34, &D_0400E298, 0.6666667f, 0.0f, 5.0f, (u8) 2, -6.0f);
                arg0->unk_AE8 = -7;
            } else {
                func_8082E4A4(arg1, (Player *) arg0, &D_0400D4B0);
                arg0->unk_AE8 = 2;
            }
            if (arg0->unk_14A == 0x26) {
                phi_a2_2 = 0x19;
            } else {
                phi_a2_2 = 0x12;
            }
            func_80123D50(arg1, (Player *) arg0, phi_a2_2, 0x15);
        }
        func_8082DF8C(arg0, 0x6010U);
        return;
    }
    if ((temp_v0_5 == 2) && (func_80136A48(sp34, 29.0f) != 0)) {
        func_8082DF8C(arg0, 0x680AU);
    }
}

void func_808534C0(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    ? *temp_v1;
    Actor *temp_a1;
    f32 temp_f8;
    s32 temp_f18;
    s32 temp_t0;
    s8 temp_v0;
    u8 temp_t3;
    void *temp_t1;
    f32 phi_f8;
    ? *phi_v1;
    s32 phi_t0;
    s32 phi_t0_2;
    ? *phi_v1_2;

    sp24 = (arg0->unk_AE8 * 0xC) + &D_8085D200;
    func_80832F24(arg0);
    if (func_801360E0(arg1, arg0 + 0x240) != 0) {
        if (arg0->unk_AE7 != 0) {
            func_808323C0(arg0, arg1->unk_1879C[3]);
            if (arg0->unk_AE8 == 0) {
                func_801518B0(arg1, (u16) *(&D_8085D797 + (arg0->unk_AE7 * 6)), arg0);
                func_801A3098(0x922U);
                arg0->unk_AE8 = 1;
                return;
            }
            if ((func_80152498(&arg1->msgCtx) == 2) && (arg0->unk_AE7 = 0, func_80838760(arg0), func_800E0238(Play_GetCamera(arg1, 0)), temp_a1 = arg0->unk_A88, (temp_a1 != 0)) && ((s32) arg0->unk_A87 < 0)) {
                func_8085B460(arg1, temp_a1);
                return;
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return;
        }
        func_80839E74(arg0, arg1);
        return;
    }
    if (arg0->unk_AE7 == 0) {
        temp_t3 = sp24->unk_8;
        temp_f8 = (f32) temp_t3;
        phi_f8 = temp_f8;
        if ((s32) temp_t3 < 0) {
            phi_f8 = temp_f8 + 4294967296.0f;
        }
        temp_f18 = (s32) (arg0->unk_258 - phi_f8);
        if ((temp_f18 >= 0) && ((s32) sp24->unk_9 >= temp_f18)) {
            if ((arg0->unk_AE8 != 0) && (temp_f18 == 0)) {
                func_800B8E58(arg0, 0x2868U);
            }
            if (func_8012364C(arg1, arg0, (s32) arg0->unk_146) == 0x12) {
                temp_t1 = arg0->unk_388;
                phi_v1 = &D_8085D798;
                phi_t0 = 0;
                if (temp_t1 != 0) {
loop_20:
                    phi_t0_2 = phi_t0;
                    phi_v1_2 = phi_v1;
                    if ((phi_v1->unk_0 != temp_t1->unk_0) || ((temp_v0 = phi_v1->unk_2, ((s32) temp_v0 >= 0)) && (temp_v0 != temp_t1->unk_1C))) {
                        temp_t0 = phi_t0 + 1;
                        temp_v1 = phi_v1 + 6;
                        phi_v1 = temp_v1;
                        phi_t0 = temp_t0;
                        phi_t0_2 = temp_t0;
                        phi_v1_2 = temp_v1;
                        if (temp_t0 != 0xE) {
                            goto loop_20;
                        }
                    }
                    if (phi_t0_2 < 0xE) {
                        arg0->unk_AE7 = (s8) (phi_t0_2 + 1);
                        arg0->unk_AE8 = 0;
                        arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x30000000);
                        temp_t1->unk_120 = arg0;
                        func_80123D50(arg1, (Player *) arg0, (s32) phi_v1_2->unk_3, (s32) phi_v1_2->unk_4);
                        func_8082DB90(arg1, arg0, sp24->unk_4);
                    }
                }
            }
        }
    }
    if (arg0->unk_258 <= 7.0f) {
        arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x800);
    }
}

void func_80853754(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    SkelAnime *sp28;
    SkelAnime *temp_a2;

    func_808323C0(arg0, arg1->unk_1879C[2]);
    temp_a2 = arg0 + 0x240;
    sp28 = temp_a2;
    if (func_801360E0(arg1, temp_a2) != 0) {
        func_80838760(arg0);
        func_80839E74(arg0, arg1);
        return;
    }
    if (func_80136A48(temp_a2, 37.0f) != 0) {
        sp2C = 8;
        func_800B8E58(arg0, 0x286CU);
        func_8082DF8C(arg0, 0x6814U);
        if (arg0->unk_14A == 0x29) {
            func_80123D50(arg1, (Player *) arg0, 0x12, 0x15);
            func_800B8E58(arg0, 0x20A8U);
            sp2C = 1;
        }
        func_80835C64(arg1, arg0, arg0 + 0x350, &D_8085D7EC, sp2C);
    }
}

void func_80853850(Actor *arg0, GlobalContext *arg1) {
    f32 sp6C;
    s32 sp68;
    f32 sp5C;
    void *sp4C;
    f32 sp44;
    SkelAnime *sp40;
    SkelAnime *temp_a2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    D_8085D800 = (f32) *(&D_8085D804 + arg0->unk_14B);
    if (func_80835D58(arg1, arg0, &D_8085D7F8, &sp6C, &sp68, &sp5C) != 0) {
        temp_f16 = arg0->world.pos.x;
        temp_f18 = arg0->world.pos.z;
        temp_f2 = temp_f16 - sp5C;
        temp_f12 = temp_f18 - sp64;
        temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        if (temp_f0 != 0.0f) {
            temp_f14 = 3.0f / temp_f0;
            arg0->world.pos.x = temp_f16 + (temp_f2 * temp_f14);
            arg0->world.pos.z = temp_f18 + (temp_f12 * temp_f14);
        }
    }
    func_80832F24(arg0);
    func_8083249C(arg0);
    temp_a2 = arg0 + 0x240;
    sp40 = temp_a2;
    if (func_801360E0(arg1, temp_a2) != 0) {
        func_80838760(arg0);
        if (func_80838A90(arg0, arg1) == 0) {
            func_80839E74(arg0, arg1);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (func_80136A48(temp_a2, 76.0f) != 0) {
        sp4C = (arg0->unk_14A * 4) - 0x58 + &D_8085D80C;
        sp44 = Math_SinS(arg0->shape.rot.y);
        Actor_Spawn(&arg1->actorCtx, arg1, sp4C->unk_0, (sp44 * 5.0f) + arg0->unk_350, arg0->unk_354, (Math_CosS(arg0->shape.rot.y) * 5.0f) + arg0->unk_358, (s16) 0x4000, (s16) (s32) arg0->shape.rot.y, (s16) 0, (s16) (s32) sp4C->unk_2);
        func_80123D50(arg1, (Player *) arg0, 0x12, 0x15);
        return;
    }
    func_8082E224(arg0, &D_8085D838);
}

void func_80853A5C(Actor *arg0, GlobalContext *arg1) {
    Actor *sp2C;
    void *sp28;
    SkelAnime *sp20;
    Actor *temp_a1_2;
    SkelAnime *temp_a1;
    s8 temp_v0;
    s8 temp_v0_3;
    u16 temp_a1_3;
    u16 temp_v0_2;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x4000000);
    func_8083249C(arg0);
    temp_a1 = arg0 + 0x240;
    sp20 = temp_a1;
    if (func_801360E0(arg1, temp_a1) != 0) {
        temp_v0 = arg0->unk_A87;
        if (temp_v0 == 0) {
            temp_a1_2 = arg0->unk_A88;
            sp2C = temp_a1_2;
            func_80838760(arg0, temp_a1_2);
            arg0->unk_B2A = 0;
            temp_v0_2 = temp_a1_2->textId;
            if ((temp_v0_2 != 0) && (temp_v0_2 != 0xFFFF)) {
                arg0->flags |= 0x100;
            }
            func_8085B460(arg1, temp_a1_2);
        } else {
            sp28 = (*(&D_8085D1A4 + temp_v0) * 6) - 6 + &D_8085C3F4;
            if (func_801241E0(arg0, arg0->unk_14A) < 0) {
                temp_v0_3 = sp28->unk_2;
                if ((s32) temp_v0_3 < 0) {
                    arg0->unk_B2A = (s8) -(s32) temp_v0_3;
                } else {
                    arg0->unk_B2A = temp_v0_3;
                }
            }
            if (arg0->unk_AE8 == 0) {
                temp_a1_3 = arg0->textId;
                if ((temp_a1_3 != 0) && (temp_a1_3 != 0xFFFF)) {
                    func_801518B0(arg1, temp_a1_3, arg0);
                }
                arg0->unk_AE8 = 1;
            } else if (func_80152498(&arg1->msgCtx) == 2) {
                func_80838760(arg0);
                arg0->unk_B2A = 0;
                arg0->flags &= -0x101;
                func_80839E74(arg0, arg1);
                arg0->unk_B5E = 0xA;
            }
        }
    } else if ((s32) arg0->unk_AE8 >= 0) {
        if ((func_801241E0(arg0, arg0->unk_14A) >= 0) && (func_80136A48(sp20, 36.0f) != 0)) {
            func_80123AA4((GlobalContext *) arg0, 0xCU);
        } else if (func_80136A48(sp20, 2.0f) != 0) {
            func_80838830((Player *) arg0, ((*(&D_8085D1A4 + arg0->unk_14A) * 6) - 6 + &D_8085C3F4)->unk_4);
        }
        func_8082E224(arg0, &D_8085D840);
    }
    if ((arg0->unk_AE7 == 0) && (arg0->unk_730 != 0)) {
        arg0->unk_AD4 = func_8083C62C(arg0, 0);
        arg0->shape.rot.y = arg0->unk_AD4;
    }
}

void func_80853CC0(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x60);
    if (func_801360E0(arg1, arg0 + 0x240) != 0) {
        func_8082DB3C(arg1, arg0, (LinkAnimationHeader *) &D_0400DE30);
    }
    if (arg1->sceneNum != 0x5F) {
        func_8082F164((Player *) arg0, 0x10);
    }
    if (func_8082DE88(arg0, 0, 0x64) != 0) {
        func_80836988((Player *) arg0, arg1);
        arg0->unk_A70 = (s32) (arg0->unk_A70 & ~0x80);
    }
}

void func_80853D68(GlobalContext *arg0, GlobalContext *arg1) {
    void *sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s16 sp46;
    s16 sp44;
    ? sp38;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    void *temp_a3;
    f32 phi_f0;
    s16 phi_v0;
    f32 phi_f0_2;
    f32 phi_f2;
    f32 phi_f12;
    LinkAnimationHeader *phi_a1;
    f32 phi_f2_2;

    arg0->colCtx.dyna.bgActors[4].minY |= 0x60;
    func_801360E0(arg1, arg0 + 0x240);
    func_8083FBC4(arg1, arg0);
    func_8019F780(&arg0->view.at, func_8082E078((Actor *) arg0, 0xD0) & 0xFFFF, arg0->unk_70);
    if ((func_80838A90((Actor *) arg0, arg1) == 0) && ((arg0->unk_14B != 1) || (func_8083A114((Player *) arg0, arg1) == 0))) {
        temp_a3 = arg0->state.heap.tail;
        if (temp_a3 == 0) {
            func_80833AA0((Actor *) arg0, arg1, &sp46, temp_a3);
            return;
        }
        sp54 = temp_a3;
        func_800B75A0((CollisionPoly *) temp_a3, (Vec3f *) &sp38, &sp46);
        phi_v0 = sp46;
        if (arg0->unk_AE7 != 0) {
            phi_v0 = (s16) (sp46 + 0x8000);
        }
        if (arg0->unk_AD0 < 0.0f) {
            sp46 += 0x8000;
        }
        temp_f0 = (1.0f - sp3C) * 40.0f;
        if (temp_f0 < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_f0 > 10.0f) {
                phi_f2_2 = 10.0f;
            } else {
                phi_f2_2 = temp_f0;
            }
            phi_f0 = phi_f2_2;
        }
        temp_f2 = phi_f0 * phi_f0 * 0.015f;
        sp50 = phi_f0;
        temp_f12 = sp3C * 0.01f;
        sp44 = phi_v0;
        sp4C = temp_f2;
        sp48 = temp_f12;
        phi_f0_2 = phi_f0;
        phi_f2 = temp_f2;
        phi_f12 = temp_f12;
        if (func_800C9C74(&arg1->colCtx, (CollisionPoly *) temp_a3, (s32) arg0->unk_85) != 1) {
            phi_f0_2 = 0.0f;
            phi_f12 = sp3C * 10.0f;
        }
        if (temp_f2 < 1.0f) {
            phi_f2 = 1.0f;
        }
        sp50 = phi_f0_2;
        if ((Math_AsymStepToF((f32 *) &arg0->colCtx.dyna.bgActors[5].boundingSphere.center.z, phi_f0_2, phi_f2, phi_f12) != 0) && (phi_f0_2 == 0.0f)) {
            if (arg0->unk_AE7 == 0) {
                phi_a1 = *(&D_8085C25C + (arg0->unk_14F * 4));
            } else {
                phi_a1 = *(&D_8085C274 + (arg0->unk_14F * 4));
            }
            func_80836A98((Player *) arg0, phi_a1, arg1);
        }
        Math_SmoothStepToS((s16 *) &arg0->colCtx.dyna.bgActors[5].minY, sp46, 0xA, 0xFA0, (s16) 0x320);
        Math_ScaledStepToS(arg0 + 0xBE, sp44, 0x7D0);
        /* Duplicate return node #26. Try simplifying control flow for better match */
    }
}

void func_80854010(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_AE8;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_AE8 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk_AE8;
    }
    if ((phi_v1 == 0) && (func_808387A0(arg1, arg0) != 0)) {
        func_80859CE0(arg1, arg0, 0);
        func_80831494(arg1, arg0, func_8085B08C, 0);
        func_8085B08C(arg0, arg1);
    }
}

void func_808540A0(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_80854010, 0);
    arg0->unk_AE8 = 0x28;
    Actor_Spawn(&arg1->actorCtx, arg1, 0x49, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 0x10);
}

void func_80854118(Actor *arg0, GlobalContext *arg1) {
    f32 sp28;
    CsCmdActorAction *temp_a1;

    if (D_80862B18 < 150.0f) {
        if (func_801360E0(arg1, arg0 + 0x240) != 0) {
            if (arg0->unk_AE8 == 0) {
                if ((arg0->bgCheckFlags & 1) != 0) {
                    arg0->unk_250 = (f32) (arg0->unk_254 - 1.0f);
                    func_8082E1BC(arg0);
                    arg0->unk_AE8 = 1;
                }
            } else {
                func_8085B384(arg0, arg1);
            }
        }
        Math_SmoothStepToF(&arg0->velocity.y, 2.0f, 0.3f, 8.0f, 0.5f);
    }
    if (arg1->csCtx.state != 0) {
        temp_a1 = arg1->csCtx.linkAction;
        if (temp_a1 != 0) {
            sp28 = arg0->world.pos.y;
            func_8085AB58(arg0, temp_a1);
            arg0->world.pos.y = sp28;
        }
    }
}

void func_8085421C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a2;
    s16 temp_v0;
    s8 temp_v0_2;

    temp_a2 = arg0 + 0x240;
    if (arg0->unk_248 == 0) {
        arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x4000);
    } else {
        sp20 = temp_a2;
        func_801360E0(arg1, temp_a2);
        if ((&D_0400D698 == arg0->unk_248) && (func_80136A48(temp_a2, 60.0f) != 0)) {
            func_8082E094(arg0, 0x850U);
            func_8082DF8C(arg0, 0x6805U);
        }
    }
    temp_v0 = arg0->unk_AE8;
    arg0->unk_AE8 = (s16) (temp_v0 + 1);
    if (((((s32) temp_v0 < 9) ^ 1) != 0) && (func_8082DA90(arg1) == 0)) {
        temp_v0_2 = arg0->unk_AE7;
        if (temp_v0_2 != 0) {
            if ((s32) temp_v0_2 < 0) {
                func_80169FDC(arg1);
            } else {
                func_80169EFC(arg1);
            }
            if (func_800C9E88(&arg1->colCtx, arg0->floorPoly, (s32) arg0->floorBgId) == 0) {
                gSaveContext.respawnFlag = -5;
            }
            arg1->unk_1887F = 4;
            play_sound(0x5801U);
        } else {
            arg1->unk_1887F = 2;
            gSaveContext.nextTransition = 2;
            gSaveContext.seqIndex = 0xFF;
            gSaveContext.nightSeqIndex = 0xFF;
        }
        arg1->sceneLoadFlag = 0x14;
    }
}

void func_8085437C(void) {
    func_808365DC();
}

void func_8085439C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a1;
    f32 temp_f0;

    temp_a1 = arg0 + 0x240;
    arg0->gravity = -1.0f;
    arg0 = arg0;
    func_801360E0(arg1, temp_a1);
    temp_f0 = arg0->velocity.y;
    if (temp_f0 < 0.0f) {
        func_80833AA0(arg0, arg1);
        return;
    }
    if (temp_f0 < 6.0f) {
        Math_StepToF(arg0 + 0xAD0, 3.0f, 0.5f);
    }
}

void func_80854430(Player *arg0, GlobalContext *arg1) {
    if ((s32) arg1->unk_1887C < 0) {
        arg1->unk_1887C = 0;
        func_80839ED0(arg0, arg1);
        return;
    }
    if (arg0->unk_AE7 == 0) {
        if ((arg1->sceneNum != 0x45) && (~(D_80862B44->press.button | ~0x4000) == 0)) {
            arg1->unk_1887C = 0xA;
            func_80847880(arg1, (Actor *) arg0);
            func_80831494(arg1, (Actor *) arg0, func_80854430, 1);
            arg0->unk_AE7 = 1;
            return;
        }
        arg1->unk_1887C = 0;
        func_80847190(arg1, (Actor *) arg0, 0);
        if ((arg1->actorCtx.unk5 & 4) != 0) {
            arg0->stateFlags1 |= 0x100000;
            func_8083868C(arg1, (Actor *) arg0);
            return;
        }
        arg0->stateFlags1 &= 0xFFEFFFFF;
        if ((arg1->sceneNum == 0x45) && (func_8012364C(arg1, (Actor *) arg0, func_8082FDC4()) == 0xD)) {
            arg1->actorCtx.unk5 |= 4;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    if ((D_80862B44->press.button & 0x801F) != 0) {
        arg1->unk_1887C = -1;
        func_80854614((Actor *) arg0, arg1);
        func_80831494(arg1, (Actor *) arg0, func_80854430, 0);
        arg0->unk_AE7 = 0;
        return;
    }
    arg1->unk_1887C = 0xA;
    func_80854614((Actor *) arg0, arg1);
}

void func_80854614(Actor *arg0, GlobalContext *arg1) {
    s8 temp_a0;

    arg0->unk_AA5 = 3;
    func_8083868C(arg1, arg0);
    func_801360E0(arg1, arg0 + 0x240);
    func_8083216C((Player *) arg0, arg1);
    arg0->unk_AB4 = (s16) (func_80847190(arg1, arg0, 1) - arg0->shape.rot.y);
    arg0->unk_AA6 = (u16) (arg0->unk_AA6 | 0x80);
    temp_a0 = arg1->unk_1887C;
    if ((s32) temp_a0 < 0) {
        arg1->unk_1887C = temp_a0 + 1;
        if (arg1->unk_1887C == 0) {
            func_80839ED0((Player *) arg0, arg1);
        }
    }
}

void func_808546D0(Actor *arg0, GlobalContext *arg1) {
    s8 temp_v0;

    temp_v0 = arg0->unk_AE7;
    if ((s32) temp_v0 >= 0) {
        if ((s32) temp_v0 < 6) {
            arg0->unk_AE7 = (s8) (temp_v0 + 1);
        } else {
            arg0->unk_B48 = (f32) ((f32) ((s32) temp_v0 >> 1) * 22.0f);
            if (func_8082DE88(arg0, 1, 0x64) != 0) {
                arg0->unk_AE7 = -1;
                EffectSsIcePiece_SpawnBurst(arg1, &arg0->world, arg0->scale.x);
                func_800B8E58(arg0, 0x875U);
            }
            if (arg0->unk_14B == 2) {
                func_80834104(arg1, arg0);
                arg0->unk_248 = 0;
                arg0->unk_AE8 = -0x28;
                arg0->unk_AE7 = 1;
                arg0->unk_AD0 = 0.0f;
            } else if ((arg1->gameplayFrames & 3) == 0) {
                func_8085B3E0(arg1, -1);
            }
        }
        arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x4000);
        return;
    }
    if (func_801360E0(arg1, arg0 + 0x240) != 0) {
        func_80836988((Player *) arg0, arg1);
        func_808339B4(arg0, 0x14);
    }
}

void func_80854800(Actor *arg0, GlobalContext *arg1) {
    s16 phi_v1;

    func_801360E0(arg1, arg0 + 0x240);
    func_808345A8(arg0);
    if (((s32) arg0->unk_AE8 % 0x19) == 0) {
        if (func_808339D4(arg1, arg0, -1) != 0) {
            goto block_3;
        }
    } else {
block_3:
        if (arg0->unk_AE8 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_AE8 = (s16) (arg0->unk_AE8 - 1);
            phi_v1 = arg0->unk_AE8;
        }
        if (phi_v1 == 0) {
            func_80836988((Player *) arg0, arg1);
        }
    }
    arg0->unk_B65 = 0x28;
    func_800B8F98(arg0, (arg0->unk_A68->unk_92 + 0x600C) & 0xFFFF);
}

void func_808548B8(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    LinkAnimationHeader *sp38;
    u8 sp37;
    SkelAnime *sp28;
    f32 temp_f10;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    u8 temp_t4;
    u8 temp_v1;
    Actor *phi_f0;
    f32 phi_f10;
    s32 phi_v0;

    sp3C = (arg0->unk_ADA * 0x10) + &D_8085CD30;
    if (arg0->unk_258 < (arg0->unk_250 - 6.0f)) {
        arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    }
    if (func_808401F4(arg1, arg0) == 0) {
        if (arg0->unk_AD0 >= 0.0f) {
            if (arg0->unk_14B == 1) {
                phi_f0 = (Actor *)0x40A00000;
            } else {
                phi_f0 = NULL;
            }
            temp_t4 = sp3C->unk_D;
            temp_f10 = (f32) temp_t4;
            phi_f10 = temp_f10;
            if ((s32) temp_t4 < 0) {
                phi_f10 = temp_f10 + 4294967296.0f;
            }
            func_8083FCF0(arg1, (Player *) arg0, phi_f0, (f32) sp3C->unk_C, phi_f10);
        }
        temp_v0 = arg0->unk_ADA;
        if ((temp_v0 == 0x18) || (temp_v0 == 0x19)) {
            arg0->unk_3D0 = 3;
        }
        if (((arg0->unk_A70 * 2) < 0) && (func_80136A48(arg0 + 0x240, 0.0f) != 0)) {
            arg0->unk_A70 = (s32) (arg0->unk_A70 & 0xBFFFFFFF);
            arg0->unk_AD0 = 15.0f;
        }
        sp28 = arg0 + 0x240;
        if (arg0->unk_AD0 > 12.0f) {
            func_8083FBC4(arg1, (GlobalContext *) arg0);
        }
        Math_StepToF(arg0 + 0xAD0, 0.0f, 5.0f);
        func_8083A548(arg0);
        if ((func_801360E0(arg1, sp28) != 0) || ((temp_v0_2 = arg0->unk_ADA, (((s32) temp_v0_2 < 0x13) == 0)) && ((s32) temp_v0_2 < 0x16) && (arg0->unk_258 > 2.0f) && (func_808333CC(arg0) != 0))) {
            D_80862B48 = (s32) arg0->unk_AE8;
            if (func_80848570(arg0, arg1) == 0) {
                if (func_80123420((Player *) arg0) != 0) {
                    sp38 = sp3C->unk_8;
                } else {
                    sp38 = sp3C->unk_4;
                }
                func_8082DC38((Player *) arg0);
                if (sp38 == 0) {
                    arg0->unk_275 = (u8) (arg0->unk_275 & 0xFFF7);
                    func_8085B384(arg0, arg1);
                } else {
                    sp37 = arg0->unk_275;
                    if (arg0->unk_14B == 2) {
                        if (func_8083A580(arg0, arg1) != 0) {
                            sp38 = arg0->unk_28C;
                        }
                        arg0->unk_ADC = 0;
                    } else if ((sp38 == &D_0400D728) && (arg0->unk_14F != 3)) {
                        sp38 = &D_0400D8B0;
                    }
                    arg0->unk_275 = 0U;
                    func_80831494(arg1, arg0, func_80849FE0, 1);
                    func_8082EC9C(arg1, arg0, sp38);
                    arg0->unk_AD4 = (s16) arg0->shape.rot.y;
                    arg0->unk_275 = sp37;
                }
                arg0->unk_A74 = (s32) (arg0->unk_A74 | 8);
                return;
            }
            /* Duplicate return node #46. Try simplifying control flow for better match */
            return;
        }
        temp_v1 = arg0->unk_14B;
        if (((temp_v1 == 2) && (temp_v0_3 = arg0->unk_ADA, (temp_v0_3 != 0x1D)) && (temp_v0_3 != 0x15)) || ((temp_v1 == 1) && (arg0->unk_ADA != 0x1A))) {
            phi_v0 = 0;
            if (~(D_80862B44->press.button | ~0x4000) == 0) {
                phi_v0 = 1;
            }
            arg0->unk_AE8 = (s16) (arg0->unk_AE8 | phi_v0);
        }
        /* Duplicate return node #46. Try simplifying control flow for better match */
    }
}

void func_80854C70(Actor *arg0, GlobalContext *arg1) {
    func_801360E0(arg1, arg0 + 0x240);
    func_80832F24(arg0);
    if (arg0->unk_258 >= 6.0f) {
        func_80836988((Player *) arg0, arg1);
    }
}

void func_80854CD0(f32 arg0, void *arg1, u8 *arg2, u8 *arg3, u8 *arg4, void *arg5, void *arg6, void *arg7, void *arg8, void *arg9, void *argA, ? *argB, ? *argC) {
    ? *temp_s1;
    ? *temp_s1_2;
    ? *temp_s3;
    ? *temp_s3_2;
    s32 temp_v0;
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 temp_s2;
    u8 temp_s2_2;
    u8 temp_t3;
    u8 temp_t3_2;
    u8 temp_t6;
    u8 temp_t6_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t4;
    void *temp_t4_2;
    void *temp_t5;
    void *temp_t5_2;
    u8 phi_t6;
    u8 phi_v1;
    u8 *phi_a0;
    void *phi_a1;
    void *phi_t1;
    void *phi_t2;
    void *phi_t4;
    void *phi_t0;
    void *phi_s0;
    ? *phi_s1;
    ? *phi_s3;
    void *phi_t5;
    s32 phi_v0;
    u8 phi_t6_2;
    u8 phi_v1_2;
    u8 *phi_a0_2;
    void *phi_a1_2;
    void *phi_t1_2;
    void *phi_t2_2;
    void *phi_t4_2;
    void *phi_t0_2;
    void *phi_s0_2;
    ? *phi_s1_2;
    ? *phi_s3_2;
    void *phi_t5_2;
    u8 *phi_a2;
    u8 *phi_a3;

    temp_v1 = *arg3;
    temp_t6 = *arg2;
    phi_t6 = temp_t6;
    phi_v1 = temp_v1;
    phi_a0 = arg4;
    phi_a1 = arg1;
    phi_t1 = arg6;
    phi_t2 = arg7;
    phi_t4 = arg8;
    phi_t0 = arg5;
    phi_s0 = argA;
    phi_s1 = argB;
    phi_s3 = argC;
    phi_t5 = arg9;
    phi_v0 = 1;
    phi_t6_2 = temp_t6;
    phi_v1_2 = temp_v1;
    phi_a0_2 = arg4;
    phi_a1_2 = arg1;
    phi_t1_2 = arg6;
    phi_t2_2 = arg7;
    phi_t4_2 = arg8;
    phi_t0_2 = arg5;
    phi_s0_2 = argA;
    phi_s1_2 = argB;
    phi_s3_2 = argC;
    phi_t5_2 = arg9;
    phi_a2 = arg2;
    phi_a3 = arg3;
    if (1 != 3) {
        do {
            temp_v0 = phi_v0 + 1;
            temp_a1 = phi_a1 + 2;
            temp_a2 = phi_a2 + 1;
            temp_a3 = phi_a3 + 1;
            temp_a0 = phi_a0 + 1;
            temp_t0 = phi_t0 + 2;
            temp_t1 = phi_t1 + 1;
            temp_t2 = phi_t2 + 1;
            temp_t4 = phi_t4 + 1;
            temp_t5 = phi_t5 + 2;
            temp_s0 = phi_s0 + 1;
            temp_s1 = phi_s1 + 1;
            temp_s3 = phi_s3 + 1;
            temp_a1->unk_-2 = (s16) (((s32) ((f32) (phi_t6 - phi_v1) * arg0) + phi_v1) - *phi_a0);
            temp_t3 = temp_t2->unk_-1;
            temp_t0->unk_-2 = (s16) (((s32) ((f32) (temp_t1->unk_-1 - temp_t3) * arg0) + temp_t3) - temp_t4->unk_-1);
            temp_s2 = temp_s1->unk_-1;
            temp_t5->unk_-2 = (s16) (((s32) ((f32) (temp_s0->unk_-1 - temp_s2) * arg0) + temp_s2) - temp_s3->unk_-1);
            temp_v1_2 = *temp_a3;
            temp_t6_2 = *temp_a2;
            phi_t6 = temp_t6_2;
            phi_v1 = temp_v1_2;
            phi_a0 = temp_a0;
            phi_a1 = temp_a1;
            phi_t1 = temp_t1;
            phi_t2 = temp_t2;
            phi_t4 = temp_t4;
            phi_t0 = temp_t0;
            phi_s0 = temp_s0;
            phi_s1 = temp_s1;
            phi_s3 = temp_s3;
            phi_t5 = temp_t5;
            phi_v0 = temp_v0;
            phi_t6_2 = temp_t6_2;
            phi_v1_2 = temp_v1_2;
            phi_a0_2 = temp_a0;
            phi_a1_2 = temp_a1;
            phi_t1_2 = temp_t1;
            phi_t2_2 = temp_t2;
            phi_t4_2 = temp_t4;
            phi_t0_2 = temp_t0;
            phi_s0_2 = temp_s0;
            phi_s1_2 = temp_s1;
            phi_s3_2 = temp_s3;
            phi_t5_2 = temp_t5;
            phi_a2 = temp_a2;
            phi_a3 = temp_a3;
        } while (temp_v0 != 3);
    }
    temp_t0_2 = phi_t0_2 + 2;
    temp_t1_2 = phi_t1_2 + 1;
    temp_t2_2 = phi_t2_2 + 1;
    temp_t4_2 = phi_t4_2 + 1;
    temp_t5_2 = phi_t5_2 + 2;
    temp_s0_2 = phi_s0_2 + 1;
    temp_s1_2 = phi_s1_2 + 1;
    temp_s3_2 = phi_s3_2 + 1;
    (phi_a1_2 + 2)->unk_-2 = (s16) (((s32) ((f32) (phi_t6_2 - phi_v1_2) * arg0) + phi_v1_2) - *phi_a0_2);
    temp_t3_2 = temp_t2_2->unk_-1;
    temp_t0_2->unk_-2 = (s16) (((s32) ((f32) (temp_t1_2->unk_-1 - temp_t3_2) * arg0) + temp_t3_2) - temp_t4_2->unk_-1);
    temp_s2_2 = temp_s1_2->unk_-1;
    temp_t5_2->unk_-2 = (s16) (((s32) ((f32) (temp_s0_2->unk_-1 - temp_s2_2) * arg0) + temp_s2_2) - temp_s3_2->unk_-1);
    argC = temp_s3_2;
    argB = temp_s1_2;
    argA = temp_s0_2;
    arg9 = temp_t5_2;
    arg8 = temp_t4_2;
    arg7 = temp_t2_2;
    arg6 = temp_t1_2;
    arg5 = temp_t0_2;
    arg4 = phi_a0_2 + 1;
}

void func_80854EFC(Actor *arg0, f32 arg1, s16 *arg2) {
    u8 sp77;
    u8 sp76;
    u8 sp75;
    u8 sp74;
    u8 sp73;
    u8 sp72;
    s16 sp70;
    ? *temp_v0;
    ? *temp_v0_2;
    s16 temp_t2;
    s16 *phi_v1;
    s16 *phi_t0;
    f32 phi_f12;
    ? *phi_t3;
    ? *phi_t4;
    ? *phi_v0;

    sp70 = arg0->unk_170DA;
    sp72 = arg0->unk_170D7;
    sp73 = arg0->unk_170D8;
    sp74 = arg0->unk_170D9;
    sp75 = arg0->unk_170C8;
    sp76 = arg0->unk_170C9;
    sp77 = arg0->unk_170CA;
    phi_v1 = arg2;
    phi_t0 = &sp70;
    phi_f12 = arg1;
    phi_t3 = &D_8085D844;
    if (arg1 <= 1.0f) {
        temp_v0 = arg0 + 0x170CE;
        phi_t4 = temp_v0;
        phi_v0 = temp_v0;
    } else {
        phi_v1 = arg2 + 8;
        phi_t0 = arg2;
        phi_t3 = &D_8085D844;
        phi_t4 = &D_8085D844;
        if (arg1 <= 2.0f) {
            phi_f12 = arg1 - 1.0f;
            phi_v0 = arg0 + 0x170CE;
        } else {
            phi_v1 = &sp70;
            phi_t0 = arg2 + 0x10;
            phi_t4 = &D_8085D844;
            if (arg1 <= 3.0f) {
                phi_v1 = arg2 + 0x10;
                phi_t0 = arg2 + 8;
                phi_f12 = arg1 - 2.0f;
                phi_t3 = &D_8085D844;
                phi_t4 = &D_8085D844;
                phi_v0 = arg0 + 0x170CE;
            } else {
                temp_v0_2 = arg0 + 0x170CE;
                phi_f12 = arg1 - 3.0f;
                phi_t3 = temp_v0_2;
                phi_v0 = temp_v0_2;
            }
        }
    }
    temp_t2 = *phi_t0;
    arg0->unk_170A8 = (s16) (((s32) ((f32) (*phi_v1 - temp_t2) * phi_f12) + temp_t2) - arg0->unk_170DA);
    func_80854CD0(phi_f12, arg0 + 0x170A2, phi_v1 + 2, phi_t0 + 2, arg0 + 0x170D7, arg0 + 0x17090, phi_v1 + 5, phi_t0 + 5, arg0 + 0x170C8, arg0 + 0x17096, phi_t3, phi_t4, phi_v0);
}

void func_808550D0(Vec3f *arg1, f32 arg2, Actor *arg3, s32 arg4) {
    f32 sp3C;
    Vec3f *sp38;
    Actor *temp_f12;
    Vec3f *temp_s0;
    void *temp_a2;
    Actor *phi_f12;
    Vec3f *phi_s0;

    temp_f12 = arg3;
    temp_a2 = (arg4 * 0x54) + &D_8085D848;
    temp_s0 = temp_a2 + 0x18;
    sp38 = temp_s0;
    arg3 = temp_f12;
    func_80854EFC(temp_f12, arg2, (bitwise s16 *) arg2, temp_a2);
    phi_f12 = arg3;
    phi_s0 = temp_s0;
    if ((bitwise f32) arg3 > 2.0f) {
        phi_f12 = (bitwise Actor *) ((bitwise f32) arg3 - 2.0f);
        phi_s0 = sp38 + 0x28;
    } else if ((bitwise f32) arg3 > 1.0f) {
        phi_f12 = (bitwise Actor *) ((bitwise f32) arg3 - 1.0f);
        phi_s0 = sp38 + 0x14;
    }
    arg3 = phi_f12;
    func_80835BC8(phi_f12, arg1, arg1 + 0x24, phi_s0, &sp3C);
    Lights_PointNoGlowSetInfo(arg1 + 0x508, (s16) (s32) sp3C, (s16) (s32) sp40, (s16) (s32) sp44, (u8) (s32) phi_s0->unk_C, (u8) (s32) phi_s0->unk_D, (u8) (s32) phi_s0->unk_E, (s16) (s32) ((f32) phi_s0->unk_10 * (bitwise f32) arg3));
}

void func_80855218(GlobalContext *arg0, Actor *arg1, ? **arg2) {
    s32 temp_v0;
    s32 phi_v1;

    if ((func_801360E0(arg0, arg1 + 0x240) != 0) && (&D_0400D0C8 == arg1->unk_248)) {
        func_8082DB60(arg0, arg1, &D_0400D0D0);
        return;
    }
    temp_v0 = arg1->unk_248;
    if ((&D_0400D0C8 == temp_v0) || (&D_0400D0D0 == temp_v0)) {
        if ((s32) arg1->unk_AE7 >= 0x3A) {
            Math_StepToS(arg1 + 0xAE8, 0xFF, 0x32);
        }
        phi_v1 = (s32) arg1->unk_AE7;
        if ((s32) arg1->unk_AE7 >= 0x40) {
            Math_StepToF(arg1 + 0xB18, 0.0f, 0.015f);
            goto block_11;
        }
        if ((s32) arg1->unk_AE7 >= 0xE) {
            Math_StepToF(arg1 + 0xB18, 0.3f, 0.3f);
block_11:
            phi_v1 = (s32) arg1->unk_AE7;
        }
        if (phi_v1 >= 0x42) {
            Math_StepToF(arg1 + 0xB1C, 0.0f, 0.02f);
        } else if (phi_v1 >= 0x10) {
            Math_StepToF(arg1 + 0xB1C, -0.1f, 0.1f);
        }
        if ((gGameInfo->data[544] == 0) && (&D_0400D0C8 == arg1->unk_248)) {
            func_8082E224(arg1, &D_8085D8F0);
            return;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return;
    }
    if ((s32) arg1->unk_AE7 >= 0x14) {
        Math_StepToS(arg1 + 0xAE8, 0xFF, 0x14);
    }
    if (gGameInfo->data[544] == 0) {
        func_8082E224(arg1, &D_8085D904);
        if (arg1->unk_AE7 == 0xF) {
            func_800B8E58(arg1, 0x9A4U);
        }
    }
}

void func_808553F4(Actor *arg0, GlobalContext *arg1) {
    ? *sp4C;
    s32 sp48;
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    f32 temp_f6;
    s16 temp_v1;
    s32 temp_t7;
    s32 temp_v0_3;
    s8 temp_a0;
    s8 temp_a0_2;
    u16 temp_t8;
    u16 temp_v1_2;
    u8 temp_t9;
    u8 temp_v0_4;
    s16 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    f32 phi_f6;
    s32 phi_a0;
    s32 phi_v0_4;

    sp4C = &D_8085D910;
    sp48 = 0;
    func_808323C0(arg0, arg1->unk_1879C[5]);
    D_80862B44 = arg1 + 0x14;
    phi_v0 = 1;
    phi_v0_4 = (s32) 1;
    if (arg0->unk_14B == 4) {
        phi_v0 = 0;
    }
    func_800DF840((arg1 + (arg1->activeCamera * 4))->unk_800, phi_v0);
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40);
    arg0->shape.rot.y = func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk_800) + 0x8000;
    func_80855218(arg1, arg0, &sp4C);
    if (arg0->unk_AE7 == 0x14) {
        func_80165DCC(0x64);
    }
    temp_v0 = gGameInfo;
    temp_v1 = temp_v0->data[544];
    if (temp_v1 != 0) {
        temp_v0->data[548] += temp_v1;
        temp_v0_2 = gGameInfo;
        if ((s32) temp_v0_2->data[548] >= 0x100) {
            temp_v0_2->data[548] = 0xFF;
            arg0->update = (void (*)(Actor *, GlobalContext *)) func_8012301C;
            arg0->draw = NULL;
            arg0->unk_AE7 = 0;
            func_80165DF0();
            temp_t8 = *(&D_8085D908 + (gSaveContext.playerForm * 2));
            temp_t7 = (s32) temp_t8 >> 8;
            gSaveContext.weekEventReg[temp_t7] |= temp_t8;
        }
        goto block_24;
    }
    temp_a0 = arg0->unk_AE7;
    if (arg0->unk_14B == 4) {
        phi_v0_2 = 0x53;
    } else {
        phi_v0_2 = 0x37;
    }
    arg0->unk_AE7 = (s8) (temp_a0 + 1);
    if (phi_v0_2 >= (s32) temp_a0) {
        if ((s32) arg0->unk_AE7 >= 5) {
            if ((arg0->unk_14B != 4) || (temp_v1_2 = *(&D_8085D908 + (gSaveContext.playerForm * 2)), temp_v0_3 = (temp_v1_2 & 0xFF & gSaveContext.weekEventReg[(s32) temp_v1_2 >> 8]) != 0, phi_v0_3 = temp_v0_3, (temp_v0_3 != 0))) {
                phi_v0_3 = (D_80862B44->press.button & 0xC00F) != 0;
            }
            sp48 = phi_v0_3;
            if (phi_v0_3 != 0) {
                goto block_17;
            }
        }
    } else {
block_17:
        gGameInfo->data[544] = 0x2D;
        gGameInfo->data[545] = 0xDC;
        gGameInfo->data[546] = 0xDC;
        gGameInfo->data[547] = 0xDC;
        gGameInfo->data[548] = 0;
        if (sp48 != 0) {
            temp_a0_2 = arg0->unk_A86;
            if (ActorCutscene_GetCurrentIndex() == temp_a0_2) {
                func_800E0348(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera((s16) temp_a0_2)));
            }
            if (arg0->unk_14B == 4) {
                func_801A75E8(0x9AA);
                func_801A75E8(0x1858);
            } else {
                func_801A75E8(0x9A4);
            }
        }
        func_800B8E58(arg0, 0x484FU);
block_24:
    }
    phi_a0 = (s32) arg0->unk_AE7;
    if ((s32) arg0->unk_AE7 >= (s32) sp4C->unk_0) {
        temp_v0_4 = sp4C->unk_2;
        if ((s32) arg0->unk_AE7 < (s32) temp_v0_4) {
            temp_t9 = sp4C->unk_1;
            temp_f6 = (f32) temp_t9;
            phi_f6 = temp_f6;
            if ((s32) temp_t9 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            Math_StepToF(arg0 + 0xB20, 1.0f, phi_f6 / 100.0f);
        } else if ((s32) arg0->unk_AE7 < (s32) sp4C->unk_3) {
            if (temp_v0_4 == (s32) arg0->unk_AE7) {
                func_801000CC(0x2912U);
            }
            Math_StepToF(arg0 + 0xB20, 2.0f, 0.5f);
        } else {
            Math_StepToF(arg0 + 0xB20, 3.0f, 0.2f);
        }
        phi_a0 = (s32) arg0->unk_AE7;
    }
    if (phi_a0 >= 0x10) {
        if (phi_a0 < 0x40) {
            Math_StepToF(arg0 + 0xB24, 1.0f, 0.2f);
        } else if (phi_a0 < 0x37) {
            Math_StepToF(arg0 + 0xB24, 2.0f, 1.0f);
        } else {
            Math_StepToF(arg0 + 0xB24, 3.0f, 0.55f);
        }
    }
    if (arg0->unk_14B == 4) {
        phi_v0_4 = 0;
    }
    func_808550D0((Vec3f *) arg1, (bitwise f32) arg0, arg0->unk_B20, arg0->unk_B24, phi_v0_4);
}

void func_80855818(Actor *arg0, GlobalContext *arg1) {
    f32 sp40;
    s16 sp3E;
    GameInfo *temp_v1;
    GameInfo *temp_v1_2;
    LightSettings2 *temp_t4;
    LinkAnimationHeader *temp_a2;
    s16 temp_a0;
    s8 temp_v0;
    s16 phi_v1;
    s32 phi_v1_2;

    phi_v1 = 1;
    phi_v1_2 = (s32) 1;
    if (arg0->unk_155 == 0) {
        phi_v1 = 0;
    }
    func_800DF840((arg1 + (arg1->activeCamera * 4))->unk_800, phi_v1);
    temp_v1 = gGameInfo;
    temp_a2 = arg1 + 0x14;
    temp_a0 = temp_v1->data[544];
    if (temp_a0 != 0) {
        temp_v1->data[548] -= temp_a0;
        temp_v1_2 = gGameInfo;
        if ((s32) temp_v1_2->data[548] < 0) {
            temp_v1_2->data[544] = 0;
            gGameInfo->data[548] = 0;
        }
    }
    temp_v0 = arg0->unk_AE7;
    arg0->unk_AE7 = (s8) (temp_v0 + 1);
    if ((s32) temp_v0 < 4) {
        if ((arg0->unk_155 == 0) && (arg0->unk_AE7 == 4)) {
            SkelAnime_ChangeLinkAnim(arg1, arg0 + 0x240, func_8082ED20(arg0, (Actor *) &sp3E, temp_a2, &gGameInfo), 1.0f, 0.0f, 20.0f, (u8) 2, 20.0f);
            goto block_15;
        }
        goto block_16;
    }
    func_800FF3A0(&sp40, &sp3E, (Input *) temp_a2);
    if (((func_801360E0(arg1, arg0 + 0x240) != 0) || (((s32) arg0->unk_AE7 >= 0xB) && (sp40 != 0.0f))) && (gGameInfo->data[544] == 0)) {
        arg0->unk_A6C = (s32) (arg0->unk_A6C & ~2);
        arg0->unk_155 = (u8) arg0->unk_153;
        arg0->unk_A86 = (s8) arg1->unk_1879C[5];
        func_80838760(arg0);
        temp_t4 = &arg1->envCtx.unk_8C;
        temp_t4->unk_0 = (unaligned s32) D_80862B50.unk_0;
        temp_t4->unk_4 = (unaligned s32) D_80862B50.unk_4;
        temp_t4->unk_8 = (unaligned s32) D_80862B50.unk_8;
        temp_t4->unk_C = (unaligned s32) D_80862B50.unk_C;
        temp_t4->unk_10 = (unaligned s32) D_80862B50.unk_10;
        temp_t4->unk_14 = (unaligned s32) D_80862B50.unk_14;
        temp_t4->unk_18 = (unaligned s32) D_80862B50.unk_18;
        func_8085B384(arg0, arg1);
        return;
    }
    Math_StepToF(arg0 + 0xB24, 4.0f, 0.2f);
block_15:
block_16:
    if (arg0->unk_155 == 0) {
        phi_v1_2 = 0;
    }
    func_808550D0((Vec3f *) arg1, (bitwise f32) arg0, NULL, arg0->unk_B24, phi_v1_2);
}

void func_80855A7C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_AE8;
    arg0->unk_AE8 = (s16) (temp_v0 + 1);
    if ((((s32) temp_v0 < 0x5B) ^ 1) != 0) {
        arg1->msgCtx.unk1202A = 4;
        func_8085B384(arg0, arg1, arg0, arg1);
        return;
    }
    if (arg0->unk_AE8 == 0xA) {
        func_80848640(arg1, arg0, arg0, arg1);
    }
}

void func_80855AF4(Actor *arg0, GlobalContext *arg1) {
    u8 temp_t2;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40);
    func_80855218(arg1, arg0, NULL);
    arg0->unk_AE7 = (s8) (arg0->unk_AE7 + 1);
    if ((arg0->unk_A6C & 0x100) == 0) {
        temp_t2 = arg0->unk_153;
        arg0->unk_153 = 0x14U;
        arg0->unk_155 = temp_t2;
        gSaveContext.equippedMask = 0x14;
        func_80115DB4(arg1, 0U, (GlobalContext *)6);
        arg0->unk_145 = 2;
        arg0->unk_149 = 2;
        func_80123140(arg1, (Player *) arg0);
        func_8085B384(arg0, arg1);
    }
}

void func_80855B9C(Player *arg0, GlobalContext *arg1) {
    Player *temp_a1_2;
    SkelAnime *temp_a1;
    u8 temp_t0;

    temp_a1 = arg0 + 0x240;
    arg0->stateFlags2 |= 0x40;
    arg0 = arg0;
    func_801360E0(arg1, temp_a1);
    if ((arg0->stateFlags1 & 0x100) == 0) {
        temp_t0 = arg0->currentMask;
        arg0->currentMask = 0;
        temp_a1_2 = arg0;
        arg0->prevMask = temp_t0;
        gSaveContext.equippedMask = 0;
        arg0->currentBoots = 1;
        arg0->prevBoots = 1;
        arg0 = arg0;
        func_80123140(arg1, temp_a1_2);
        func_8085B384((Actor *) arg0, arg1);
    }
}

void func_80855C28(Actor *arg0, GlobalContext *arg1) {
    s16 sp3E;
    AnimationHeaderCommon *sp34;
    s16 temp_v0;
    s32 phi_a0;

    func_808323C0(arg0, arg1->unk_1879C[4]);
    sp3E = arg0->shape.rot.y - arg0->world.rot.y;
    phi_a0 = 0;
    if ((arg0->floorHeight - arg0->world.pos.y) < 60.0f) {
        Math_StepToF(arg0 + 0xB24, 200.0f, 150.0f);
        phi_a0 = Math_StepToS(arg0 + 0xAE8, 0xFA0, 0x15E);
    }
    arg0->shape.rot.y += arg0->unk_AE8;
    arg0->unk_260->unk_0 = 0;
    arg0->unk_260->unk_4 = 0;
    arg0->unk_ABC = (f32) (arg0->unk_ABC + arg0->unk_B24);
    if (arg0->unk_ABC >= 0.0f) {
        arg0->unk_ABC = 0.0f;
        if ((phi_a0 != 0) && ((s32) sp3E < 0) && (temp_v0 = arg0->world.rot.y, ((s32) (s16) (arg0->shape.rot.y - temp_v0) >= 0))) {
            arg0->shape.rot.y = temp_v0;
            func_80838760(arg0);
            if (((s32) (arg0->params & 0xF00) >> 8) == 8) {
                sp34 = *(&D_8085D17C + (arg0->unk_14B * 4));
                func_80836A5C((Player *) arg0, arg1);
                SkelAnime_ChangeLinkAnim(arg1, arg0 + 0x240, (LinkAnimationHeader *) sp34, -0.6666667f, (f32) SkelAnime_GetFrameCount(sp34), 0.0f, (u8) 2, -6.0f);
                return;
            }
            func_80839E74(arg0, arg1);
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if (arg0->unk_AE7 == 0) {
        func_800B8E58(arg0, 0x9A8U);
        arg0->unk_AE7 = 1;
    }
}

void func_80855E08(Actor *arg0, GlobalContext *arg1) {
    PosRot *sp28;
    PosRot *temp_a3;
    f32 temp_f0;
    f32 temp_f2;
    f32 phi_f0;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x20);
    if (func_801360E0(arg1, arg0 + 0x240) != 0) {
        func_8082DB3C(arg1, arg0, (LinkAnimationHeader *) &D_0400D9D0);
    }
    temp_a3 = &arg0->world;
    sp28 = temp_a3;
    Math_Vec3f_Sum((Vec3f *) temp_a3, &arg0->velocity, (Vec3f *) temp_a3);
    if (func_80831124((Actor *) arg1, (Player *) arg0) != 0) {
        Math_Vec3f_Copy(&arg0->prevPos, (Vec3f *) temp_a3);
        func_80843178(arg1, (Player *) arg0);
        temp_f2 = arg0->world.pos.y;
        temp_f0 = temp_f2 - arg0->floorHeight;
        phi_f0 = temp_f0;
        if (temp_f0 > 20.0f) {
            phi_f0 = 20.0f;
        }
        arg0->shape.rot.x = 0;
        arg0->unk_AD0 = 1.0f;
        arg0->world.pos.y = temp_f2 - phi_f0;
        arg0->velocity.y = 0.0f;
        arg0->world.rot.x = arg0->shape.rot.x;
        func_80833AA0((bitwise Actor *) 20.0f, (GlobalContext *) arg0, (s16 *) arg1);
        arg0->unk_A70 = (s32) (arg0->unk_A70 & ~0x400);
        arg0->bgCheckFlags |= 1;
        arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x10000);
        return;
    }
    if ((&D_0400D9C8 != arg0->unk_248) || (arg0->unk_258 >= 4.0f)) {
        arg0->gravity = 0.0f;
        Math_ScaledStepToS((s16 *) &arg0->shape, arg0->world.rot.x, 0x800);
        func_8082DF48((Actor *) arg1, (Player *) arg0, 0x64U, 2U, (u8) 0x64, 0);
    }
}

void func_80855F9C(f32 *arg0, s16 *arg1) {
    ? sp24;
    s16 sp22;

    arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x20);
    func_80832F78(arg1, (bitwise f32) &sp24, &sp22, (void *)0x3C9374BC, arg0);
    Math_ScaledStepToS(arg1 + 0xAD4, sp22, 0x258);
}

void func_80856000(GlobalContext *arg0, f32 *arg1) {
    ? sp3C;
    ? sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    ? sp28;

    sp2C = arg1->unk_24;
    sp30 = arg1->unk_28 - 20.0f;
    sp34 = arg1->unk_2C;
    func_800C4F84((bitwise f32) (arg0 + 0x830), (bitwise f32) &sp28, (CollisionContext *) &sp2C, (? *)0x41F00000, (PosRot *) &sp3C, (bitwise f32) &sp38, arg1);
}

void func_80856074(GameState *arg0, Actor *arg1) {
    if (func_8083F8A8(arg0, arg1, 12.0f, 4, 0.0f, 0xA, 0x32, 1) != 0) {
        EffectSsHahen_SpawnBurst((GlobalContext *) arg0, (Vec3f *) &arg1->world, 3.0f, 0, (s16) 4, (s16) 8, (s16) 2, (s16) -1, (s16) 0xA, NULL);
    }
}

void func_80856110(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg5, s16 arg6, s16 arg7) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    sp34 = arg1->world.pos.x;
    sp38 = arg1->world.pos.y + arg2;
    D_8085D91C = arg3;
    D_8085D928 = arg4;
    sp3C = arg1->world.pos.z;
    func_800B0EB0(arg0, (Vec3f *) &sp34, &D_8085D918, &D_8085D924, &D_8085D930, &D_8085D934, (s16) (s32) arg5, (s16) (s32) arg6, (s16) (s32) arg7);
}

void func_808561B0(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    s32 sp38;
    s32 sp34;
    f32 sp30;
    DynaPolyActor *temp_v0_2;
    DynaPolyActor *temp_v0_4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v1;
    s32 temp_t2;
    s8 temp_v0;
    u8 temp_a1;
    u8 temp_a1_2;
    s32 phi_v1;
    f32 phi_f0;

    func_801360E0(arg1, arg0 + 0x240);
    if (func_80838A90(arg0, arg1) == 0) {
        temp_v0 = arg0->unk_AE7;
        if (temp_v0 == 0) {
            arg0->unk_ABC = (f32) (arg0->unk_ABC + arg0->unk_B48);
            if (arg0->unk_ABC < -1000.0f) {
                arg0->unk_ABC = -1000.0f;
                arg0->unk_AE7 = 1;
                arg0->unk_B48 = 0.0f;
            }
            func_80856074((GameState *) arg1, arg0);
            goto block_39;
        }
        if (temp_v0 == 1) {
            arg0->unk_B48 = (f32) (arg0->unk_B48 + -22.0f);
            if (arg0->unk_B48 < -170.0f) {
                arg0->unk_B48 = -170.0f;
            }
            arg0->unk_ABC = (f32) (arg0->unk_ABC + arg0->unk_B48);
            temp_f0 = arg0->unk_ABC;
            if (temp_f0 < -3900.0f) {
                arg0->unk_ABC = -3900.0f;
                arg0->unk_AE7 = 2;
                arg0->shape.rot.y = func_800DFC68(arg1->cameraPtrs[arg1->activeCamera]);
                temp_v1 = arg0->shape.rot.y;
                arg0->scale.y = 0.01f;
                arg0->world.rot.y = temp_v1;
                arg0->unk_AD4 = temp_v1;
            } else {
                temp_f2 = arg0->unk_B48;
                temp_a1 = arg0->floorBgId;
                arg0->scale.y = 0.01f + (Math_SinS((s16) (s32) ((temp_f0 + 1000.0f) * -30.0f)) * 0.004f);
                temp_f12 = 0.01f - (temp_f2 * -0.000015f);
                arg0->scale.x = temp_f12;
                arg0->scale.z = temp_f12;
                arg0->shape.rot.y += (s32) (temp_f2 * 130.0f);
                if (temp_a1 != 0x32) {
                    temp_v0_2 = BgCheck_GetActorOfMesh(&arg1->colCtx, (s32) temp_a1);
                    if (temp_v0_2 != 0) {
                        Math_Vec3f_StepToXZ((Vec3f *) &arg0->world, (Vec3f *) &temp_v0_2->actor.world, 1.0f);
                    }
                }
            }
            func_80856074((GameState *) arg1, arg0);
            goto block_39;
        }
        if (temp_v0 == 2) {
            if (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0) {
                if (func_80856000(arg1, (f32 *) arg0) != 0) {
                    arg0->unk_AE8 = 0;
                } else {
                    arg0->unk_AE7 = 3;
                    if ((s32) arg0->unk_AE8 >= 0xA) {
                        arg0->unk_B48 = 2700.0f;
                    } else {
                        arg0->unk_B48 = 1450.0f;
                    }
                    func_8082E1F0(arg0, 0x8E3);
                }
            } else {
                temp_v0_3 = arg0->unk_AE8;
                if ((s32) temp_v0_3 < 0xF) {
                    arg0->unk_AE8 = (s16) (temp_v0_3 + 1);
                    if (arg0->unk_AE8 == 0xA) {
                        func_80856110(arg1, arg0, 20.0f, 3.8f, -0.1f, (s16) 0x8C, (s16) 0x17, (s16) 0xF);
                    }
                }
            }
            func_80855F9C((f32 *) arg1, (s16 *) arg0);
            goto block_39;
        }
        temp_f2_2 = arg0->unk_B48;
        arg0->unk_ABC = (f32) (arg0->unk_ABC + temp_f2_2);
        temp_f0_2 = arg0->unk_ABC;
        if (temp_f0_2 >= 0.0f) {
            sp38 = ((s32) arg0->unk_AE8 < 0xA) ^ 1;
            temp_a1_2 = arg0->floorBgId;
            temp_f0_3 = temp_f2_2 * arg0->scale.y;
            phi_v1 = -1;
            phi_f0 = temp_f0_3;
            if (temp_a1_2 != 0x32) {
                sp30 = temp_f0_3;
                sp3C = temp_f0_2;
                temp_v0_4 = BgCheck_GetActorOfMesh(&arg1->colCtx, (s32) temp_a1_2);
                phi_v1 = 0;
                phi_f0 = temp_f0_3;
                if ((temp_v0_4 != 0) && (temp_v0_4->actor.id == 0x183) && ((temp_v0_4->actor.params & 0x100) != 0)) {
                    phi_v1 = 1;
                    phi_f0 = temp_f0_3 * ((f32) 0xAE / 100.0f);
                }
            }
            sp34 = phi_v1;
            sp30 = phi_f0;
            sp3C = arg0->unk_ABC;
            Math_Vec3f_Copy(arg0 + 0xAF0, (Vec3f *) &arg0->world);
            arg0->unk_ABC = 0.0f;
            arg0->world.pos.y += arg0->unk_ABC * arg0->scale.y;
            func_80834DB8((bitwise LinkAnimationHeader *) arg0->unk_ABC, (bitwise f32) arg0, (GlobalContext *) &D_0400E2D0, (bitwise Actor *) phi_f0, arg1);
            func_80831494(arg1, arg0, func_80856918, 1);
            arg0->unk_A7C = 0;
            temp_t2 = arg0->unk_A74 | 0x200;
            arg0->unk_A74 = temp_t2;
            if (sp38 != 0) {
                arg0->unk_A74 = (s32) (temp_t2 | 0x2000);
            }
            if (phi_v1 < 0) {
                arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x40000);
            }
            arg0->unk_AE7 = (s8) phi_v1;
            arg0->unk_AE8 = 0x270F;
            func_8082F0E4(arg0, 0x20000, 2, 0x14);
            goto block_39;
        }
        if (temp_f0_2 < 0.0f) {
            func_80856074((bitwise GameState *) temp_f0_2, (Actor *) arg1, arg0);
block_39:
        }
        if (arg0->unk_ABC < -1500.0f) {
            temp_v0_5 = arg0->unk_B86;
            arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x100);
            if ((s32) temp_v0_5 < 8) {
                arg0->unk_B86 = (s16) (temp_v0_5 + 1);
                if (arg0->unk_B86 == 8) {
                    func_8082E1F0(arg0, 0x9A0);
                }
            }
        }
    }
}

void func_808566C0(GlobalContext *arg0, Actor *arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    s32 sp4C;
    s32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp34;
    void *sp2C;
    void *temp_v0;
    f32 phi_f2;
    f32 phi_f2_2;
    s32 phi_v0;

    sp4C = D_8085D938;
    sp48 = D_8085D93C;
    if (Rand_ZeroOne() < 0.5f) {
        phi_f2 = -1.0f;
    } else {
        phi_f2 = 1.0f;
    }
    sp34 = phi_f2;
    D_8085D940.x = (Rand_ZeroFloat(arg4) + arg3) * phi_f2;
    D_8085D94C.x = arg5 * phi_f2;
    if (Rand_ZeroOne() < 0.5f) {
        phi_f2_2 = -1.0f;
    } else {
        phi_f2_2 = 1.0f;
    }
    sp34 = phi_f2_2;
    temp_v0 = arg1 + (arg2 * 0xC) + 0xBEC;
    D_8085D948 = (Rand_ZeroFloat(arg4) + arg3) * phi_f2_2;
    D_8085D954 = arg5 * phi_f2_2;
    sp2C = temp_v0;
    sp3C = temp_v0->unk_0;
    sp40 = Rand_ZeroFloat(15.0f) + temp_v0->unk_4;
    sp44 = temp_v0->unk_8;
    if (Rand_ZeroOne() < 0.5f) {
        phi_v0 = 0x7D0;
    } else {
        phi_v0 = -0x96;
    }
    EffectSsKiraKira_SpawnDispersed(arg0, (Vec3f *) &sp3C, &D_8085D940, &D_8085D94C, (Color_RGBA8 *) &sp4C, (Color_RGBA8 *) &sp48, (s16) phi_v0, arg6);
}

void func_8085687C(Actor *arg0) {

}

? func_80856888(f32 *arg0, f32 arg1, f32 arg2) {
    f32 temp_f0;
    f32 phi_f12;

    phi_f12 = arg2;
    if (arg2 != 0.0f) {
        temp_f0 = *arg0;
        if (arg1 < temp_f0) {
            phi_f12 = -arg2;
        }
        *arg0 = temp_f0 + phi_f12;
        if (((*arg0 - arg1) * phi_f12) >= 0.0f) {
            *arg0 = arg1;
            return 1;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return 0;
    }
    if (arg1 == *arg0) {
        return 1;
    }
    return 0;
}

void func_80856918(Actor *arg0, GlobalContext *arg1) {
    f32 sp78;
    s16 sp76;
    f32 sp6C;
    f32 sp68;
    s16 sp66;
    s32 sp58;
    SkelAnime *sp48;
    s16 *sp44;
    PosRot *sp3C;
    Actor *temp_v0;
    Actor *temp_v0_6;
    PosRot *temp_a0_2;
    SkelAnime *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4_2;
    s16 temp_a0;
    s16 temp_a0_3;
    s16 temp_v0_3;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a1;
    s32 temp_cond;
    s32 temp_cond_2;
    s32 temp_f4;
    s32 temp_t9;
    s32 temp_v0_2;
    s32 temp_v0_4;
    u8 temp_v0_5;
    s32 phi_v1;
    s16 phi_a1;
    s32 phi_v0;
    s32 phi_v0_2;
    s16 phi_v1_2;
    f32 phi_f6;
    s32 phi_v1_3;
    s16 phi_a1_2;
    s16 phi_v1_4;

    temp_v0 = arg0->unk_A7C;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        arg0->unk_A7C = NULL;
    }
    if (func_80838A90(arg0, arg1) == 0) {
        if ((arg0->bgCheckFlags & 1) != 0) {
            func_80837134(arg1, arg0);
            return;
        }
        temp_f12 = arg0->velocity.y;
        if ((temp_f12 > 0.0f) && ((arg0->unk_A74 & 0x200) != 0)) {
            arg0->minVelocityY = -20.0f;
            arg0->gravity = -5.5f;
            func_8082F0E4((bitwise Actor *) temp_f12, (s32) arg0, 0x20000, 2, 0x14);
            func_80856110(arg1, arg0, 0.0f, 0.0f, -1.0f, (s16) 0x1F4, (s16) 0, (s16) 8);
            if ((arg0->bgCheckFlags & 0x10) != 0) {
                func_80833AA0(arg0, arg1);
            }
        } else {
            temp_v0_2 = arg0->unk_A74;
            if ((temp_v0_2 & 0x2000) == 0) {
                func_80833AA0((bitwise Actor *) temp_f12, (GlobalContext *) arg0, (s16 *) arg1);
            } else if ((temp_v0_2 & 0x200) != 0) {
                if (temp_f12 < 0.0f) {
                    if ((s32) arg0->unk_AE7 < 0) {
                        func_80833AA0((bitwise Actor *) temp_f12, (GlobalContext *) arg0, (s16 *) arg1);
                    } else {
                        func_801360E0(arg1, arg0 + 0x240);
                        if (arg0->unk_258 > 6.0f) {
                            arg0->velocity.y = 6.0f;
                            temp_t9 = arg0->unk_A74 & ~0x200;
                            arg0->unk_A74 = temp_t9;
                            arg0->unk_A74 = (s32) (temp_t9 | 0x1000000);
                            func_8082E1F0(arg0, 0x1850);
                            func_8019FD90(4, 2);
                        }
                    }
                }
                arg0->minVelocityY = -10.0f;
                arg0->gravity = -0.5f;
                func_8082F09C(arg0);
            } else if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                func_808355D8((bitwise GlobalContext *) temp_f12, (Actor *) arg1, (LinkAnimationHeader *) arg0, (u32) &D_0400E2D8);
            } else {
                temp_f14 = arg0->velocity.x;
                temp_f12_2 = arg0->velocity.z;
                temp_f0 = sqrtf((temp_f14 * temp_f14) + (temp_f12_2 * temp_f12_2));
                temp_cond = temp_f0 == 0.0f;
                arg0->unk_AD0 = temp_f0;
                if (!temp_cond) {
                    temp_v0_3 = Math_FAtan2F(temp_f12_2, temp_f14);
                    temp_a0 = arg0->shape.rot.y - temp_v0_3;
                    phi_a1 = temp_v0_3;
                    if ((s32) temp_a0 < 0) {
                        phi_v1 = -(s32) temp_a0;
                    } else {
                        phi_v1 = (s32) temp_a0;
                    }
                    if (phi_v1 >= 0x4001) {
                        temp_a1 = (temp_v0_3 + 0x8000) << 0x10;
                        arg0->unk_AD0 = (f32) -arg0->unk_AD0;
                        phi_a1 = (s16) (temp_a1 >> 0x10);
                    }
                    arg0->unk_AD4 = phi_a1;
                }
                if (arg0->unk_B2C != 0.0f) {
                    Math_SmoothStepToS(arg0 + 0xB8C, arg0->unk_B30, 3, 0x1F40, (s16) 0x190);
                }
                sp44 = arg0 + 0xB8C;
                func_8085687C(arg0);
                temp_v1 = arg0->unk_AE8;
                temp_a0_2 = &arg0->world;
                if (temp_v1 != 0) {
                    arg0->unk_AE8 = (s16) (temp_v1 - 1);
                }
                sp3C = temp_a0_2;
                temp_f0_2 = Math_Vec3f_DistXZ((Vec3f *) temp_a0_2, arg0 + 0xAF0);
                temp_a2 = arg0 + 0x240;
                sp48 = temp_a2;
                temp_f2 = *(&D_8085D958 + (arg0->unk_AE7 * 4)) - temp_f0_2;
                sp78 = temp_f2;
                func_801360E0(arg1, temp_a2);
                temp_v1_2 = arg0->unk_AE8;
                if ((temp_v1_2 != 0) && (temp_f2 > 300.0f)) {
                    sp76 = 0x1770;
                    if (&D_0400E2D0 != arg0->unk_248) {
                        func_8082E5EC(arg1, arg0, (LinkAnimationHeader *) &D_0400E2D8);
                    } else if (func_80136A48(temp_a2, 8.0f) != 0) {
                        func_80835BC8(arg0, (Vec3f *) sp3C, &D_8085D960, arg0 + 0xC7C);
                        func_80835BC8(arg0, (Vec3f *) sp3C, &D_8085D96C, arg0 + 0xCA0);
                        phi_v0 = 0;
                        do {
                            sp58 = phi_v0;
                            func_808566C0(arg1, arg0, 0xC, 0.6f, 1.0f, 0.8f, 0x11);
                            func_808566C0(arg1, arg0, 0xF, 0.6f, 1.0f, 0.8f, 0x11);
                            temp_v0_4 = phi_v0 + 1;
                            phi_v0 = temp_v0_4;
                        } while (temp_v0_4 != 0xD);
                    }
                } else if ((temp_v1_2 == 0) || (temp_f2 < 0.0f)) {
                    sp76 = 0;
                    func_808355D8(arg1, arg0, (LinkAnimationHeader *) &D_0400E2E8);
                } else {
                    sp76 = 0x1770 - (s32) ((300.0f - temp_f2) * 10.0f);
                    if (&D_0400E278 != arg0->unk_248) {
                        func_8082E55C(arg1, arg0, &D_0400E278, &D_0400E278);
                    } else if (func_80136A48(temp_a2, 6.0f) != 0) {
                        func_800B8E58(arg0, 0x9A6U);
                    }
                }
                Math_AsymStepToS(arg0 + 0xB88, sp76, 0x190, 0x190);
                temp_a0_3 = arg0->unk_B88;
                arg0->unk_B8A = (s16) (arg0->unk_B8A + temp_a0_3);
                if ((s32) temp_a0_3 < 0) {
                    phi_v0_2 = -(s32) temp_a0_3;
                } else {
                    phi_v0_2 = (s32) temp_a0_3;
                }
                if (phi_v0_2 >= 0xFA1) {
                    phi_v1_2 = temp_a0_3;
                    if ((s32) temp_a0_3 < 0) {
                        phi_v1_2 = (s16) -(s32) temp_a0_3;
                    }
                    arg0->unk_B66 = (u8) (arg0->unk_B66 + (u32) ((f32) phi_v1_2 * 0.01f));
                }
                temp_v0_5 = arg0->unk_B66;
                if ((s32) temp_v0_5 >= 0xC9) {
                    arg0->unk_B66 = (u8) (temp_v0_5 - 0xC8);
                    func_808566C0(arg1, arg0, 0xC, 0.0f, 1.0f, 0.0f, 0x20);
                    func_808566C0(arg1, arg0, 0xF, 0.0f, 1.0f, 0.0f, 0x20);
                }
                func_8019FCB8(&arg0->projectedPos, 0x1851, 2.0f * ((f32) arg0->unk_B88 * 0.00016666666f));
                if ((arg0->unk_A7C == 0) && (~(D_80862B44->press.button | ~0x4000) == 0)) {
                    if (gSaveContext.inventory.ammo[gItemSlots[9]] == 0) {
                        play_sound(0x4806U);
                    } else {
                        temp_v0_6 = Actor_Spawn(&arg1->actorCtx, arg1, 0xF, arg0->unk_BEC, arg0->unk_BF0, arg0->unk_BF4, (s16) -1, (s16) 0, (s16) 0, (s16) 8);
                        arg0->unk_A7C = temp_v0_6;
                        if (temp_v0_6 != 0) {
                            temp_v0_6->velocity.x = arg0->velocity.x * 1.5f;
                            arg0->unk_A7C->velocity.z = arg0->velocity.z * 1.5f;
                            func_80115A14(9, -1);
                            Audio_PlayActorSound2(arg0->unk_A7C, 0x9ACU);
                        }
                    }
                }
                if (arg0->velocity.y < 0.0f) {
                    if (sp76 != 0) {
                        arg0->minVelocityY = -0.38f;
                        phi_f6 = -0.2f;
                    } else {
                        temp_f0_3 = (f32) arg0->unk_B88;
                        arg0->minVelocityY = (temp_f0_3 * 0.0033f) + -20.0f;
                        phi_f6 = ((f32) gGameInfo->data[68] / 100.0f) + (temp_f0_3 * 0.00004f);
                    }
                    arg0->gravity = phi_f6;
                }
                arg0->unk_B68 = (s16) (s32) arg0->world.pos.y;
                func_80832F78((s16 *) arg0, (bitwise f32) &sp6C, &sp66, NULL, (f32 *) arg1);
                if (sp6C == 0.0f) {
                    sp68 = 0.1f;
                } else {
                    temp_v0_7 = arg0->unk_AD4 - sp66;
                    phi_v1_3 = (s32) temp_v0_7;
                    if ((s32) temp_v0_7 < 0) {
                        phi_v1_3 = -(s32) temp_v0_7;
                    }
                    if (phi_v1_3 >= 0x4001) {
                        sp6C = -sp6C;
                        sp66 += 0x8000;
                    }
                    sp68 = 0.25f;
                }
                Math_SmoothStepToS(sp44, (s16) (s32) (sp6C * 600.0f), 8, 0xFA0, (s16) 0x64);
                Math_ScaledStepToS(arg0 + 0xAD4, sp66, 0xFA);
                temp_f4 = (s32) ((f32) (s16) (sp66 - arg0->unk_AD4) * -2.0f);
                if ((s32) (s16) temp_f4 < -0x1F40) {
                    phi_a1_2 = -0x1F40;
                } else {
                    phi_v1_4 = (s16) temp_f4;
                    if ((s32) (s16) temp_f4 >= 0x1F41) {
                        phi_v1_4 = 0x1F40;
                    }
                    phi_a1_2 = phi_v1_4;
                }
                Math_SmoothStepToS(arg0 + 0xB8E, phi_a1_2, 0x14, 0x320, (s16) 0x14);
                sp6C = fabsf(Math_SinS(arg0->unk_B8C)) * (sp6C * ((f32) arg0->unk_B88 * 0.0004f));
                func_80856888(arg0 + 0xAD0, sp6C, sp68);
                temp_f2_2 = arg0->unk_AD0;
                temp_f12_3 = arg0->velocity.y;
                temp_f0_4 = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_3 * temp_f12_3));
                temp_cond_2 = temp_f0_4 > 8.0f;
                sp6C = temp_f0_4;
                if (temp_cond_2) {
                    temp_f4_2 = 8.0f / temp_f0_4;
                    sp6C = temp_f4_2;
                    arg0->unk_AD0 = (f32) (arg0->unk_AD0 * temp_f4_2);
                    arg0->velocity.y *= sp6C;
                }
            }
        }
        func_808378FC((Actor *) arg1, (Player *) arg0);
        /* Duplicate return node #82. Try simplifying control flow for better match */
    }
}

void func_808573A4(Actor *arg0, GlobalContext *arg1) {
    s16 sp46;
    f32 sp40;
    s16 sp3E;
    f32 *temp_a1;
    f32 temp_f0;

    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x60);
    func_801360E0(arg1, arg0 + 0x240);
    func_8082F0E4(arg0, 0x8000, 1, 0x1E);
    if (func_80838A90(arg0, arg1) == 0) {
        sp46 = arg0->unk_AD4;
        func_80832F78((s16 *) arg0, (bitwise f32) &sp40, &sp3E, (void *)0x3C9374BC, (f32 *) arg1);
        temp_a1 = &sp40;
        sp40 *= 1.0f - (0.9f * ((11100.0f - arg0->unk_B10) / 11100.0f));
        if (func_8083A4A4(arg0, temp_a1, &sp3E, (f32) gGameInfo->data[43] / 100.0f) == 0) {
            func_8083CB58((Player *) arg0, (bitwise s16) sp40, (Player *) sp3E);
        }
        arg0->unk_B10 = (f32) (arg0->unk_B10 + -800.0f);
        temp_f0 = arg0->unk_B10;
        arg0->shape.rot.y += (s32) temp_f0 + (arg0->unk_AD4 - sp46);
        if (Math_StepToF(arg0 + 0xB14, 0.0f, temp_f0) != 0) {
            arg0->shape.rot.y = arg0->unk_AD4;
            func_8083B2E4(arg0, arg1);
        } else if (&D_0400E270 == arg0->unk_248) {
            arg0->unk_A74 = (s32) (arg0->unk_A74 | 0x100000);
            if (arg0->unk_B14 < 0.0f) {
                func_8082E438(arg1, arg0, func_8082ED20(arg0));
            }
        }
        func_808566C0(arg1, arg0, 0, 1.0f, 0.5f, 0.0f, 0x20);
        if (arg0->unk_B10 > 9500.0f) {
            func_8083F8A8((GameState *) arg1, arg0, 2.0f, 1, 2.5f, 0xA, 0x12, 1);
        }
        func_800AE930(&arg1->colCtx, Effect_GetParams(arg0->unk_744), (f32 *) &arg0->world, 2.0f, (s16) (s32) arg0->unk_AD4, arg0->floorPoly, (s32) arg0->floorBgId);
        func_800B8F98(arg0, func_8082E078(arg0, 0xD0) & 0xFFFF);
    }
}

void func_80857640(Actor *arg0, Actor *arg1, s32 arg2) {
    func_80834CD0(arg1, (bitwise f32) arg0, (u16) arg1, 0x6800);
    func_800B8E58(arg0, 0x8E1U);
    func_8082DABC(arg0);
    if ((s32) arg0->unk_AE8 < arg2) {
        arg0->unk_AE8 = (s16) arg2;
    }
    arg0->unk_AE7 = 1;
    arg0->unk_B48 = 1.0f;
}

void func_808576BC(GameState *arg0, Actor *arg1) {
    s32 sp34;
    f32 sp30;
    s32 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;

    sp30 = Math_CosS(arg1->unk_AD4);
    temp_v0 = (s32) (((Math_SinS(arg1->unk_AD4) * arg1->velocity.x) + (arg1->velocity.z * sp30)) * 800.0f) - arg1->unk_AE8;
    phi_v0 = temp_v0;
    if (temp_v0 < 0) {
        phi_v0 = -temp_v0;
    }
    if (phi_v0 >= 0x7D1) {
        if (phi_v0 >= 0x1771) {
            sp34 = phi_v0;
            func_800B8F98(arg1, 0x1ADU);
        }
        if (func_8083F8A8(arg0, arg1, 12.0f, -1 - (phi_v0 >> 0xC), (f32) (phi_v0 >> 0xA) + 1.0f, (phi_v0 >> 7) + 0xA0, 0x14, 1) != 0) {
            phi_v0_2 = 0xC1;
            if (arg1->unk_B72 == 0xE) {
                phi_v0_2 = 0x1AE;
            }
            func_800B8E58(arg1, phi_v0_2 & 0xFFFF);
        }
    }
}

void func_808577E0(Player *arg0) {
    f32 *temp_a0;
    f32 temp_a2;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    s16 phi_v1;
    f32 phi_f12;
    f32 phi_f12_2;

    temp_v0 = arg0->unk_AE8;
    phi_v1 = temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s16) -(s32) temp_v0;
    }
    temp_a0 = arg0 + 0xABC;
    temp_f14 = (f32) phi_v1 * 0.00004f;
    if (arg0->unk_ABC < temp_f14) {
        arg0->unk_B48 += 0.08f;
    } else {
        arg0->unk_B48 += -0.07f;
    }
    temp_f2 = arg0->unk_B48;
    if (temp_f2 < -0.2f) {
        arg0->unk_B48 = -0.2f;
    } else {
        if (temp_f2 > 0.14f) {
            phi_f12 = 0.14f;
        } else {
            phi_f12 = temp_f2;
        }
        arg0->unk_B48 = phi_f12;
    }
    temp_f2_2 = arg0->unk_B48;
    if (fabsf(temp_f2_2) < 0.12f) {
        temp_a2 = temp_f2_2;
        arg0 = arg0;
        if (Math_StepUntilF(temp_a0, temp_f14, temp_a2) != 0) {
            arg0->unk_B48 = 0.0f;
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return;
    }
    arg0->unk_ABC += temp_f2_2;
    temp_f0 = arg0->unk_ABC;
    phi_f12_2 = -0.7f;
    if (temp_f0 < -0.7f) {

    } else if (temp_f0 > 0.3f) {
        phi_f12_2 = 0.3f;
    } else {
        phi_f12_2 = temp_f0;
    }
    arg0->unk_ABC = phi_f12_2;
}

s32 func_80857950(GlobalContext *arg0, Actor *arg1) {
    s32 phi_v0;

    if (((arg1->unk_B88 == 0) && (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0)) || ((phi_v0 = 0, (arg1->unk_AE7 == 3)) && (arg1->velocity.y < 0.0f))) {
        func_80831494(arg0, arg1, func_80849FE0, 1);
        Math_Vec3f_Copy((Vec3f *) &arg1->world, &arg1->prevPos);
        SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) &D_0400E208, -0.6666667f, 7.0f, 0.0f, (u8) 2, 0.0f);
        func_800B8E58(arg1, 0x8E7U);
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80857A44(GlobalContext *arg0, Actor *arg1) {
    Actor *temp_a0;
    SkelAnime *temp_a1;
    f32 temp_f0;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    if (func_801360E0(arg0, temp_a1) != 0) {
        temp_a0 = arg1;
        arg1 = arg1;
        func_8082E794(temp_a0);
        temp_f0 = arg1->unk_AD0;
        arg1->shape.shadowDraw = func_800B3FC0;
        arg1->bgCheckFlags |= 0x800;
        arg1->unk_AE7 = 4;
        arg1->shape.shadowScale = 30.0f;
        arg1->unk_B08 = temp_f0;
        arg1->unk_B0C = 0.0f;
        arg1->home.rot.y = arg1->unk_AD4;
        arg1->unk_AE8 = (s16) (s32) (temp_f0 * 500.0f);
        return 1;
    }
    return 0;
}

void func_80857AEC(GlobalContext *arg0, Player *arg1) {
    if ((arg1->actor.bgCheckFlags & 2) != 0) {
        arg1->unk_B08[1] += arg1->unk_B08[0] * 0.05f;
        if (arg1->unk_B88 == 0) {
            if (arg1->unk_AE7 == 1) {
                arg1->unk_AE7 = 2;
                func_8083FE90(arg0, arg1, 0x8E8U);
                arg0->actorCtx.unk2 = 4;
                EffectSsBlast_SpawnWhiteShockwave(arg0, &arg1->actor.world, &D_801D15B0, &D_801D15B0);
                arg1->unk_AE8 = 0;
                arg1->unk_B08[0] = 0.0f;
                Actor_Spawn(&arg0->actorCtx, arg0, 1, arg1->actor.world.pos.x, arg1->actor.world.pos.y, arg1->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            } else {
                arg1->unk_AE7 = 4;
            }
        }
        func_8082E1BC((Actor *) arg1);
    }
}

void func_80857BE8(Player *arg0, GlobalContext *arg1) {
    f32 spE4;
    s16 spE2;
    s32 spDC;
    s32 spD8;
    f32 spCC;
    s16 spCA;
    s16 spC8;
    s32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp94;
    s16 sp92;
    s16 sp90;
    s16 sp8E;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7C;
    ? sp70;
    f32 sp6C;
    f32 sp54;
    f32 sp38;
    f32 sp34;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f14_4;
    f32 temp_f14_5;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    f32 temp_f6_4;
    f32 temp_f8;
    s16 *temp_a2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_9;
    s16 temp_v1_3;
    s32 temp_cond;
    s32 temp_cond_2;
    s32 temp_f10_2;
    s32 temp_f6_2;
    s32 temp_f6_3;
    s32 temp_v0_8;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_v0_7;
    f32 phi_f2;
    s32 phi_v1;
    s16 phi_a2;
    f32 phi_f2_2;
    f32 phi_f2_3;
    s32 phi_v1_2;
    f32 phi_f2_4;
    s32 phi_a0;
    s32 phi_v1_3;
    ? phi_f2_5;
    f32 phi_f2_6;
    f32 phi_f2_7;
    f32 phi_f12;
    s16 phi_a2_2;
    f32 phi_f14;
    s32 phi_v1_4;
    s16 phi_a3;
    s16 phi_v1_5;
    s16 phi_a0_2;
    f32 phi_f14_2;
    f32 phi_f0;
    s32 phi_v1_6;
    f32 phi_f2_8;
    f32 phi_f8;
    s16 phi_v1_7;
    s16 phi_v1_8;
    s32 phi_v1_9;

    if ((func_80833058(arg1, arg0, D_8085D050, NULL) == 0) && ((arg0->unk_AE7 != 0) || (func_80857A44(arg1, (Actor *) arg0) != 0)) && (arg0->stateFlags3 |= 0x1000, func_808577E0(arg0), (func_80857950(arg1, (Actor *) arg0) == 0))) {
        spE4 = 0.0f;
        spE2 = arg0->currentYaw;
        phi_f0 = 0.0f;
        if (arg0->doorType == 4) {
            phi_f2 = 0.0f;
        } else {
            phi_f2 = 12.0f;
        }
        if (func_80840A30((Actor *) arg1, (Actor *) arg0, arg0->unk_B08, phi_f2) != 0) {
            if (arg0->unk_748 == func_80857BE8) {
                arg0->linearVelocity *= 0.1f;
                func_80834CD0((Actor *) arg0, 10.0f, 0U);
                if (arg0->unk_B88 != 0) {
                    arg0->unk_B88 = 0;
                    arg0->unk_AE7 = 3;
                }
                goto block_18;
            }
            /* Duplicate return node #173. Try simplifying control flow for better match */
            return;
        }
        if ((arg0->actor.bgCheckFlags & 8) != 0) {
            temp_f0 = arg0->unk_B08[0];
            if (temp_f0 >= 12.0f) {
                temp_v0 = arg0->currentYaw - (arg0->actor.wallYaw + 0x8000);
                phi_v1 = -1;
                phi_a2 = temp_v0;
                if ((s32) temp_v0 < 0) {
                    phi_a2 = (s16) -(s32) temp_v0;
                }
                arg0->unk_B08[1] += temp_f0 * 0.05f;
                if ((s32) temp_v0 >= 0) {
                    phi_v1 = 1;
                }
                arg0->unk_B8C = 4;
                arg0->currentYaw += 0x8000 - (phi_v1 * ((phi_a2 + 0x100) & ~0x1FF) * 2);
                temp_v0_2 = arg0->currentYaw;
                arg0->actor.home.rot.y = temp_v0_2;
                arg0->actor.shape.rot.y = temp_v0_2;
                func_800B8E58((Actor *) arg0, 0x185EU);
            }
        }
block_18:
        temp_v0_3 = arg0->unk_B8E;
        arg0->stateFlags2 |= 0x60;
        if (temp_v0_3 != 0) {
            arg0->unk_B8E = temp_v0_3 - 1;
        } else {
            func_80832F78((s16 *) arg0, (bitwise f32) &spE4, &spE2, NULL, (f32 *) arg1);
            spE4 *= 2.6f;
        }
        temp_v0_4 = arg0->unk_B8C;
        if (temp_v0_4 != 0) {
            arg0->unk_B8C = temp_v0_4 - 1;
            spE2 = arg0->currentYaw;
        }
        if (arg0->unk_B88 != 0) {
            spE4 = 18.0f;
            Math_StepToC(&arg0->unk_AE7, 4, 1);
            temp_v1 = arg0->stateFlags3 & 0x80000;
            if ((temp_v1 != 0) && ((~(D_80862B44->cur.button | 0xFFFF7FFF) != 0) || (gSaveContext.magic == 0) || ((arg0->unk_AE7 == 4) && (arg0->unk_B08[0] < 12.0f)))) {
                if (Math_StepToS(&arg0->unk_B88, 0, 1) != 0) {
                    arg0->stateFlags3 &= 0xFFF7FFFF;
                    func_80115D5C(arg1);
                    func_800B8E58((Actor *) arg0, 0x9A2U);
                }
                arg0->unk_AE7 = 4;
            } else if ((s32) arg0->unk_B88 < 7) {
                if (temp_v1 == 0) {
                    arg0->unk_3D0 = 2;
                }
                arg0->unk_B88 += 1;
            }
        }
        spDC = (s32) (spE4 * 900.0f);
        if (arg0->unk_B8A != 0) {
            phi_f2_2 = 1.0f;
        } else {
            phi_f2_2 = 0.0f;
        }
        Math_AsymStepToF(&arg0->unk_B08[2], phi_f2_2, 0.8f, 0.05f);
        if ((arg0->actor.bgCheckFlags & 1) != 0) {
            func_80857AEC(arg1, arg0);
            if (arg0->unk_AE7 == 2) {
                temp_v0_5 = arg0->unk_B8A;
                if (temp_v0_5 == 0) {
                    arg0->unk_AE7 = 4;
                } else {
                    arg0->unk_B8A = temp_v0_5 - 1;
                    arg0->unk_ABC = 0.0f;
                    arg0->unk_B48 = 0.14f;
                }
            } else if ((arg0->unk_B88 == 0) && (~(D_80862B44->press.button | ~0x4000) == 0) && (func_8012EC80(arg1) < 0xFD)) {
                func_80857640((Actor *) arg0, (Actor *)0x41600000, 0x1F40);
            } else {
                temp_v0_6 = arg0->currentYaw;
                sp90 = temp_v0_6;
                temp_a0 = temp_v0_6 - arg0->actor.home.rot.y;
                sp8E = temp_a0;
                temp_f12 = Math_CosS(temp_a0);
                if (arg0->unk_B88 == 0) {
                    arg0->unk_B08[1] = 0.0f;
                    if ((s32) arg0->unk_AE7 >= 0x36) {
                        sp88 = temp_f12;
                        func_80115DB4((bitwise GlobalContext *) temp_f12, (bitwise u8) 0.0f, arg1, (SaveContext *)2, 5);
                        arg0->unk_B88 = 1;
                        arg0->stateFlags3 |= 0x80000;
                        arg0->unk_B08[0] = 18.0f;
                        func_8082E1F0((Actor *) arg0, 0x9A3);
                    }
                } else {
                    temp_f0_2 = arg0->unk_B08[1];
                    if (temp_f0_2 < 0.0f) {
                        arg0->unk_B08[1] = 0.0f;
                    } else {
                        if (temp_f0_2 > 0.9f) {
                            phi_f2_3 = 0.9f;
                        } else {
                            phi_f2_3 = temp_f0_2;
                        }
                        arg0->unk_B08[1] = phi_f2_3;
                    }
                }
                temp_f2 = (1.0f - arg0->unk_B08[1]) * arg0->unk_B08[0] * temp_f12;
                phi_f2_4 = temp_f2;
                if (!(temp_f2 < 0.0f)) {
                    if (spE4 == 0.0f) {
                        phi_v1_2 = (s32) sp8E;
                        if ((s32) sp8E < 0) {
                            phi_v1_2 = -(s32) sp8E;
                        }
                        if (phi_v1_2 >= 0xFA1) {
                            goto block_62;
                        }
                    }
                } else {
block_62:
                    phi_f2_4 = 0.0f;
                }
                temp_f6 = fabsf(temp_f12) * 20.0f;
                spBC = phi_f2_4;
                Math_StepToF(&arg0->unk_B08[1], 0.0f, temp_f6);
                temp_f6_2 = (s32) (spBC * 500.0f);
                phi_a0 = temp_f6_2;
                if (temp_f6_2 < 0) {
                    phi_a0 = 0;
                }
                temp_v1_2 = (s32) (spE4 * 400.0f) - phi_a0;
                phi_v1_3 = temp_v1_2;
                if (temp_v1_2 < 0) {
                    phi_v1_3 = 0;
                }
                if (spDC < phi_a0) {
                    spDC = phi_a0;
                }
                spC0 = phi_v1_3;
                spAC = Math_SinS(arg0->actor.home.rot.y) * spBC;
                spA8 = Math_CosS(arg0->actor.home.rot.y) * spBC;
                spB4 = Math_SinS(arg0->currentYaw) * arg0->unk_B08[0];
                temp_f12_2 = Math_CosS(arg0->currentYaw) * arg0->unk_B08[0];
                temp_f14 = spB4 - spAC;
                temp_a1 = &spCC;
                spA4 = temp_f14;
                temp_f16 = temp_f12_2 - spA8;
                temp_a2 = &spCA;
                spA0 = temp_f16;
                arg0->linearVelocity = spBC;
                arg0->currentYaw = arg0->actor.home.rot.y;
                spCC = spE4;
                spCA = spE2;
                if ((s32) arg0->unk_AE7 >= 5) {
                    phi_f2_5 = 0;
                } else {
                    phi_f2_5 = 0x3F800000;
                }
                sp38 = temp_f14;
                sp34 = temp_f16;
                if (func_8083A4A4((bitwise Actor *) temp_f12_2, (bitwise f32 *) temp_f14, (s16 *) arg0, (bitwise f32) temp_a1, temp_a2, phi_f2_5) != 0) {
                    if (arg0->unk_B88 == 0) {
                        arg0->unk_AE7 = 4;
                    }
                    if (arg0->unk_AE7 == 4) {
                        spDC = -0xFA0;
                    }
                } else {
                    temp_v0_7 = arg0->unk_B72;
                    if (((temp_v0_7 == 0xE) || (temp_v0_7 == 0xF) || (temp_v0_7 == 1) || (D_80862B08 == 5)) && (spC0 >= 0x7D0)) {
                        phi_f2_6 = 0.08f;
                    } else {
                        phi_f2_6 = (f32) arg0->unk_AE8 * 0.0003f;
                    }
                    sp84 = phi_f2_6;
                    temp_f12_3 = (Math_SinS(arg0->unk_B6C) * 8.0f) + 0.6f;
                    if (arg0->unk_B88 == 0) {
                        if ((gSaveContext.unk_3F28 == 0) && ((s32) gSaveContext.magic >= 2) && ((s32) arg0->unk_AE8 >= 0x36B0)) {
                            arg0->unk_AE7 += 1;
                            sp80 = temp_f12_3;
                            sp84 = phi_f2_6;
                            func_800B8F98((Actor *) arg0, 0xEBU);
                        } else {
                            arg0->unk_AE7 = 4;
                        }
                    }
                    phi_f2_7 = phi_f2_6;
                    phi_f12 = temp_f12_3;
                    if (spE4 != spCC) {
                        arg0->currentYaw = spE2;
                    }
                    if (phi_f2_6 < 0.0f) {
                        phi_f2_7 = 0.0f;
                    }
                    if (temp_f12_3 < 0.0f) {
                        phi_f12 = 0.0f;
                    }
                    Math_AsymStepToF(&arg0->linearVelocity, spE4, phi_f2_7, phi_f12);
                    temp_v1_3 = (s16) (s32) (fabsf(arg0->actor.speedXZ) * 20.0f) + 0x12C;
                    phi_a2_2 = temp_v1_3;
                    if ((s32) temp_v1_3 < 0x64) {
                        phi_a2_2 = 0x64;
                    }
                    temp_f6_3 = (s32) ((f32) (s16) (spE2 - arg0->currentYaw) * -0.5f);
                    arg0->unk_B08[1] += (f32) ((s16) temp_f6_3 * (s16) temp_f6_3) * 8e-9.0f;
                    spC8 = phi_a2_2;
                    sp7C = (s16) temp_f6_3;
                    Math_ScaledStepToS(&arg0->currentYaw, spE2, phi_a2_2);
                    sp6C = (bitwise f32) func_80835D2C(arg1, (Actor *) arg0, D_8085D978, &sp70);
                    temp_f14_2 = (bitwise f32) func_80835D2C(arg1, (Actor *) arg0, D_8085D984, &sp70) - sp6C;
                    phi_f14 = temp_f14_2;
                    if (fabsf(temp_f14_2) > 100.0f) {
                        phi_f14 = 0.0f;
                    }
                    temp_v0_8 = Math_FAtan2F(60.0f, phi_f14);
                    phi_a3 = (s16) temp_v0_8;
                    if (temp_v0_8 < 0) {
                        phi_v1_4 = -(s32) (s16) temp_v0_8;
                    } else {
                        phi_v1_4 = (s32) (s16) temp_v0_8;
                    }
                    if (phi_v1_4 >= 0x2AAB) {
                        phi_a3 = 0;
                    }
                    Math_ScaledStepToS(&arg0->actor.shape.rot.z, (s16) (phi_a3 + sp7C), spC8);
                }
                spBC = arg0->linearVelocity;
                arg0->actor.home.rot.y = arg0->currentYaw;
                arg0->currentYaw = sp90;
                func_800B75A0(arg0->actor.floorPoly, (Vec3f *) &sp94, &sp92);
                temp_f14_3 = sqrtf((sp38 * sp38) + (sp34 * sp34));
                phi_f14_2 = temp_f14_3;
                if (arg0->unk_B88 != 0) {
                    phi_a0_2 = sp8E;
                    if ((s32) sp8E < 0) {
                        phi_a0_2 = (s16) -(s32) sp8E;
                    }
                    temp_v0_9 = arg0->unk_B6C;
                    phi_v1_5 = temp_v0_9;
                    if ((s32) temp_v0_9 < 0) {
                        phi_v1_5 = (s16) -(s32) temp_v0_9;
                    }
                    if ((phi_v1_5 + phi_a0_2) >= 0x3A99) {
                        arg0->unk_B88 = 0;
                        arg0->unk_AE7 = 4;
                        arg0->unk_B8E = 0x14;
                        arg0->unk_AE8 = 0;
                        arg0->stateFlags3 &= 0xFFF7FFFF;
                        spB8 = temp_f14_3;
                        func_80115D5C(arg1);
                        phi_f14_2 = temp_f14_3;
                    }
                } else {
                    temp_f16_2 = (0.6f * sp94) + sp38;
                    temp_f18 = (0.6f * sp9C) + sp34;
                    temp_f0_3 = sqrtf((temp_f16_2 * temp_f16_2) + (temp_f18 * temp_f18));
                    if ((temp_f0_3 < temp_f14_3) || (temp_f0_3 < 6.0f)) {
                        spA4 = temp_f16_2;
                        spA0 = temp_f18;
                        phi_f14_2 = temp_f0_3;
                    }
                }
                if (phi_f14_2 != 0.0f) {
                    phi_f0 = phi_f14_2 - 0.3f;
                    if (phi_f14_2 < 0.3f) {

                    }
                    temp_f14_4 = phi_f0 / phi_f14_2;
                    temp_f8 = spA4 * temp_f14_4;
                    temp_f10 = spA0 * temp_f14_4;
                    spA4 = temp_f8;
                    spA0 = temp_f10;
                    if (phi_f0 != 0.0f) {
                        sp54 = phi_f0;
                        arg0->unk_B28 = Math_FAtan2F(temp_f10, temp_f8);
                    }
                    if (arg0->unk_AE8 == 0) {
                        temp_v0_10 = arg0->unk_B86;
                        temp_f10_2 = (s32) (phi_f0 * 800.0f);
                        arg0->unk_B86 = temp_v0_10 + temp_f10_2;
                        if (((arg0->actor.bgCheckFlags & 1) != 0) && (temp_f10_2 != 0) && (((temp_v0_10 + temp_f10_2) * temp_v0_10) <= 0)) {
                            sp54 = phi_f0;
                            func_8019F780(&arg0->actor.projectedPos, func_8082E078((Actor *) arg0, 0x990) & 0xFFFF, phi_f0);
                        }
                    }
                }
                temp_f6_4 = Math_SinS(arg0->actor.home.rot.y) * spBC;
                spAC = temp_f6_4;
                temp_f14_5 = temp_f6_4 + spA4;
                temp_f12_4 = (Math_CosS(arg0->actor.home.rot.y) * spBC) + spA0;
                temp_f0_4 = sqrtf((temp_f14_5 * temp_f14_5) + (temp_f12_4 * temp_f12_4));
                temp_cond = temp_f0_4 > 18.0f;
                arg0->unk_B08[0] = temp_f0_4;
                if (temp_cond) {
                    arg0->unk_B08[0] = 18.0f;
                } else {
                    arg0->unk_B08[0] = arg0->unk_B08[0];
                }
                arg0->currentYaw = Math_FAtan2F(temp_f12_4, temp_f14_5);
            }
            func_808576BC((GameState *) arg1, (Actor *) arg0);
            temp_a0_2 = arg0->unk_AE8;
            phi_v1_6 = (s32) temp_a0_2;
            if ((s32) temp_a0_2 < 0) {
                phi_v1_6 = -(s32) temp_a0_2;
            }
            if (phi_v1_6 >= 0xFA1) {
                arg0->stateFlags2 |= 8;
            }
            if ((arg0->actor.bgCheckFlags & 1) != 0) {
                arg0->linearVelocity = Math_CosS(arg0->unk_B6C) * arg0->unk_B08[0];
                arg0->actor.velocity.y = Math_SinS(arg0->unk_B6C) * arg0->unk_B08[0];
            }
            if ((arg0->unk_B88 != 0) || (func_800C9C24(&arg1->colCtx, arg0->actor.floorPoly, arg0->actor.floorBgId, 1) != 0)) {
                sp38 = (bitwise f32) &arg1->colCtx;
                func_800AE930((bitwise CollisionContext *) sp38, Effect_GetParams(arg0->blureEffectIndex[2]), (f32 *) &arg0->actor.world, 15.0f, (s16) (s32) arg0->actor.shape.rot.y, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId);
            } else {
                func_800AEF44(Effect_GetParams(arg0->blureEffectIndex[2]));
            }
        } else {
            Math_ScaledStepToS(&arg0->actor.shape.rot.z, 0, 0x190);
            arg0->unk_B86 = 0;
            if (arg0->unk_B88 != 0) {
                arg0->actor.gravity = -1.0f;
                Math_ScaledStepToS(&arg0->actor.home.rot.y, spE2, 0x190);
                temp_f2_2 = arg0->linearVelocity;
                temp_f12_5 = arg0->actor.velocity.y;
                if (temp_f2_2 >= 0.0f) {
                    phi_f2_8 = 1.0f;
                } else {
                    phi_f2_8 = -1.0f;
                }
                temp_f12_6 = phi_f2_8 * sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_5 * temp_f12_5));
                temp_cond_2 = temp_f12_6 > 18.0f;
                arg0->unk_B08[0] = temp_f12_6;
                if (temp_cond_2) {
                    arg0->unk_B08[0] = 18.0f;
                } else {
                    phi_f8 = arg0->unk_B08[0];
                    goto block_155;
                }
            } else {
                temp_f12_7 = arg0->actor.velocity.y;
                arg0->unk_B48 += temp_f12_7 * 0.005f;
                if (arg0->unk_AE7 == 1) {
                    if (temp_f12_7 > 0.0f) {
                        temp_f0_5 = arg0->actor.gravity;
                        if ((temp_f12_7 + temp_f0_5) < 0.0f) {
                            arg0->actor.velocity.y = -temp_f0_5;
                        }
                    } else {
                        arg0->unk_B8A = 0xA;
                        if (temp_f12_7 > -1.0f) {
                            arg0->actor.gravity = -0.2f;
                        } else {
                            arg0->unk_3D0 = 1;
                            arg0->actor.gravity = -10.0f;
                        }
                    }
                }
                phi_f8 = arg0->linearVelocity;
block_155:
                arg0->unk_B08[0] = phi_f8;
            }
            func_800AEF44(Effect_GetParams(arg0->blureEffectIndex[2]));
        }
        Math_ScaledStepToS(&arg0->actor.shape.rot.y, arg0->actor.home.rot.y, 0x7D0);
        if (spDC >= 0) {
            phi_v1_7 = 0x7D0;
        } else {
            phi_v1_7 = 0x3E8;
        }
        Math_AsymStepToS(&arg0->unk_AE8, unkspDE, phi_v1_7, 0x4B0);
        temp_a0_3 = arg0->unk_AE8;
        if (temp_a0_3 != 0) {
            temp_a3 = arg0->actor.shape.rot.x;
            arg0->actor.shape.rot.x = temp_a3 + temp_a0_3;
            phi_v1_8 = temp_a0_3;
            if ((s32) temp_a0_3 < 0) {
                phi_v1_8 = (s16) -(s32) temp_a0_3;
            }
            spD8 = (s32) temp_a3;
            Math_ScaledStepToS(&arg0->unk_B86, 0, phi_v1_8);
            if (((arg0->actor.bgCheckFlags & 1) != 0) && (((arg0->unk_AE8 + temp_a3) * temp_a3) <= 0)) {
                phi_v1_9 = 0x990;
                if (arg0->unk_B88 != 0) {
                    phi_v1_9 = 0x980;
                }
                sp38 = (bitwise f32) &arg0->actor.projectedPos;
                func_8019F780((bitwise Vec3f *) sp38, func_8082E078((Actor *) arg0, phi_v1_9 & 0xFFFF) & 0xFFFF, arg0->unk_B08[0]);
            }
        }
        if (arg0->unk_AE7 == 2) {
            sp38 = (bitwise f32) &arg0->actor.world;
            func_8082F0E4((Actor *) arg0, 0x400, 4, 0x3C);
            func_800B648C(arg1, 0, 2, 0x42C80000, (bitwise PosRot *) sp38);
            return;
        }
        if (arg0->unk_B88 != 0) {
            func_8082F0E4((Actor *) arg0, 0x4000, 1, 0x19);
            return;
        }
        func_8082F0E4((Actor *) arg0, 0x4000000, 1, 0x19);
        /* Duplicate return node #173. Try simplifying control flow for better match */
    }
}

void func_80858C84(GlobalContext *arg0, Actor *arg1, AnimationHeaderCommon *arg2) {
    func_8082E784(arg1);
    func_8082E438(arg0, arg1, arg2);
    func_8082DABC(arg1);
}

void func_80858CC8(GlobalContext *arg0, Actor *arg1, AnimationHeaderCommon *arg2) {
    func_8082E784(arg1);
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) arg2, 0.6666667f, 0.0f, (f32) SkelAnime_GetFrameCount(arg2), (u8) 2, -8.0f);
    func_8082DABC(arg1);
}

void func_80858D48(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    func_8082E784(arg1);
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, arg2, 0.6666667f, 0.0f, 0.0f, (u8) 0, -8.0f);
    func_8082DABC(arg1);
}

void func_80858DB4(s32 arg0, Actor *arg1, ? arg2) {
    func_8082DABC(arg1);
}

void func_80858DDC(void) {
    func_80858C84();
}

void func_80858DFC(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    func_8082E784(arg1);
    func_8082E5A8(arg0, arg1, arg2);
    func_8082DABC(arg1);
}

void func_80858E40(void) {
    func_80858CC8();
}

void func_80858E60(void) {
    func_80858D48();
}

void func_80858E80(void) {
    func_8082EA60();
}

void func_80858EA0(void) {
    func_8082EA10(0x9C);
}

void func_80858EC0(GlobalContext *arg0, GlobalContext *arg1) {
    func_8082DBC0(arg0, arg1);
    func_8082E920(arg0, (Actor *) arg1, 0x9C);
}

void func_80858EFC(void) {
    func_8082EB18();
}

void func_80858F1C(void) {
    func_8082EAC8(0x9C);
}

void func_80858F3C(void) {
    func_8082DB18();
}

void func_80858F5C(void) {
    func_8082DB3C();
}

void func_80858F7C(void) {
    func_8082DB90();
}

void func_80858F9C(void) {
    func_8082DB60();
}

void func_80858FBC(GlobalContext *arg0, Player *arg1, s32 arg2) {
    func_801360E0(arg0, arg1 + 0x240);
}

void func_80858FE8(Actor *arg0) {
    if (&D_0400E120 == arg0->unk_248) {
        func_8082E094((Actor *)0xD0);
        func_800B8E58(arg0, 0x6042U);
    }
}

void func_80859028(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    Actor *temp_a1_2;
    Actor *temp_a3;
    SkelAnime *temp_a1;
    s32 temp_v0;
    Actor *phi_a3;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    temp_a3 = arg1;
    phi_a3 = temp_a3;
    if (func_801360E0(arg0, temp_a1) != 0) {
        temp_a1_2 = temp_a3;
        arg1 = temp_a3;
        func_80858D48(arg0, temp_a1_2, arg2, temp_a3);
        arg1->unk_AE8 = 1;
        phi_a3 = arg1;
    }
    temp_v0 = phi_a3->unk_248;
    if (&D_0400E150 == temp_v0) {
        func_8082E224(phi_a3, &D_8085DA08);
        return;
    }
    if (&D_0400E118 == temp_v0) {
        func_8082E224(phi_a3, &D_8085DA14);
        return;
    }
    if (&D_0400E430 == temp_v0) {
        func_8082E224(phi_a3, &D_8085DA38);
        return;
    }
    if (&D_0400D030 == temp_v0) {
        func_8082E224(phi_a3, &D_8085DA7C);
        return;
    }
    if (&D_0400CF48 == temp_v0) {
        func_8082E224(phi_a3, &D_8085DA84);
        return;
    }
    if (&D_0400D108 == temp_v0) {
        func_8082E224(phi_a3, &D_8085DA90);
        return;
    }
    func_80858FE8(phi_a3);
}

void func_80859168(GlobalContext *arg0, Actor *arg1, LinkAnimationHeader *arg2) {
    if (func_801360E0(arg0, arg1 + 0x240) != 0) {
        func_8082E794(arg1);
        func_8082DB60(arg0, arg1, arg2);
    }
}

void func_808591BC(GlobalContext *arg0, Actor *arg1, s32 *arg2) {
    if (func_801360E0(arg0, arg1 + 0x240) != 0) {
        func_8082EB18(arg0, arg1, arg2);
        arg1->unk_AE8 = 1;
    }
}

void func_80859210(GlobalContext *arg0, Actor *arg1, ? *arg2) {
    func_801360E0(arg0, arg1 + 0x240);
    func_8082E224(arg1, arg2);
}

void func_80859248(Player *arg0) {
    void *temp_v0;
    void *phi_v0;

    temp_v0 = arg0->unk_398;
    phi_v0 = temp_v0;
    if ((temp_v0 == 0) || (temp_v0->update == 0)) {
        arg0->unk_398 = NULL;
        phi_v0 = NULL;
    }
    arg0->unk_730 = phi_v0;
    if (phi_v0 != 0) {
        arg0->actor.shape.rot.y = func_8083C62C(NULL);
    }
}

void func_8085929C(GlobalContext *arg1, Actor *arg2) {
    s32 temp_t7;

    temp_t7 = arg1->unk_A6C | 0x8000000;
    arg1->unk_A6C = temp_t7;
    arg1->colCtx.dyna.bgActors[4].minY |= 0x400;
    arg1->unk_A6C = (s32) (temp_t7 & 0xFFF3FFFF);
    func_8082DB3C((GlobalContext *) &D_0400DFD0);
    arg1->unk_AD0 = 0.0f;
}

void func_80859300(GlobalContext *arg0, GlobalContext *arg1, ? arg2) {
    arg1->state.heap.size = 0;
    if (arg1->unk_AE7 == 0) {
        if ((arg1->unk_14B == 3) || (func_8083B3B4(arg1, NULL) != 0)) {
            arg1->unk_AE7 = 1;
            return;
        }
        func_808477D0(arg0, (Actor *) arg1, NULL, fabsf(arg1->unk_68));
        Math_ScaledStepToS(arg1 + 0xAAA, -0x2710, 0x320);
        func_8084748C((s16 *) arg1, (f32 *) &arg1->state.input[3].press, 4.0f, arg1->unk_AD4);
        return;
    }
    if (func_801360E0(arg0, arg1 + 0x240) != 0) {
        if (arg1->unk_AE7 == 1) {
            func_8082E634(arg0, (Actor *) arg1, (LinkAnimationHeader *) &D_0400E000);
        } else {
            func_8082DB3C(arg0, (Actor *) arg1, (LinkAnimationHeader *) &D_0400E000);
        }
    }
    func_808475B4((s16 *) arg1);
    func_8084748C((s16 *) arg1, (f32 *) &arg1->colCtx.dyna.bgActors[5].boundingSphere.center.z, 0.0f, arg1->unk_BE);
}

void func_80859414(GlobalContext *arg0, Player *arg1, ? arg2) {
    Actor *temp_v0;

    func_80859248(arg1);
    if (func_801242B4(arg1) != 0) {
        func_80859300(arg0, (GlobalContext *) arg1, 0);
        return;
    }
    func_801360E0(arg0, &arg1->skelAnime);
    if ((func_801240DC((Actor *) arg1) != 0) || ((arg1->stateFlags1 & 0x800) != 0)) {
        func_8083216C(arg1, arg0);
        return;
    }
    temp_v0 = arg1->unk_388;
    if ((temp_v0 != 0) && (temp_v0->textId == 0xFFFF)) {
        func_8083D23C(arg1, arg0);
    }
}

void func_808594D0(GlobalContext *arg0, Actor *arg1, ? arg2) {
    AnimationHeaderCommon *sp34;
    AnimationHeaderCommon *temp_a2;
    GlobalContext *temp_a3;
    u8 temp_v0;

    temp_a3 = arg0;
    if ((arg1->unk_A6C * 0x10) < 0) {
        func_8085929C(temp_a3, arg1, 0, temp_a3);
        return;
    }
    temp_v0 = arg1->unk_396;
    temp_a2 = *(&D_8085C28C + (arg1->unk_14F * 4));
    if ((temp_v0 == 6) || (temp_v0 == 0x2E)) {
        func_8082DB18(temp_a3, (Player *) arg1, (LinkAnimationHeader *) temp_a2, temp_a3);
    } else {
        sp34 = temp_a2;
        arg0 = temp_a3;
        func_8082E784(arg1, arg1, temp_a2, temp_a3);
        SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) temp_a2, 0.6666667f, 0.0f, (f32) SkelAnime_GetFrameCount(sp34), (u8) 0, -4.0f);
    }
    func_8082DABC(arg1);
}

void func_808595B8(GlobalContext *arg0, Actor *arg1, ? arg2) {
    if (func_80847880(arg0, arg1) == 0) {
        if ((arg1->unk_394 == 0x14) && (arg0->csCtx.state == 0)) {
            func_800B7298(arg0, NULL, 6U);
            return;
        }
        if ((arg1->unk_A6C * 0x10) < 0) {
            func_80859300(arg0, (GlobalContext *) arg1, 0);
            arg1->velocity.y = 0.0f;
            return;
        }
        func_801360E0(arg0, arg1 + 0x240);
        if ((func_801240DC(arg1) != 0) || ((arg1->unk_A6C & 0x800) != 0)) {
            func_8083216C((Player *) arg1, arg0);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_8085968C(GlobalContext *arg0, Player *arg1, ? arg2) {
    Player *temp_a0;
    Player *temp_a3;
    Actor *phi_a3;
    LinkAnimationHeader *phi_a2;

    temp_a3 = arg1;
    temp_a0 = temp_a3;
    phi_a3 = (Actor *) temp_a3;
    if (temp_a3->actor.id == 0x159) {
        arg1 = temp_a3;
        func_80838830(temp_a0, 0x26B, (u8 *) temp_a3);
        arg1->stateFlags1 |= 0x400;
        phi_a3 = (Actor *) arg1;
    }
    if (phi_a3->unk_14B == 3) {
        phi_a2 = (LinkAnimationHeader *) &D_0400E2B8;
    } else {
        phi_a2 = &D_0400D5A8;
    }
    func_8082DB90(arg0, phi_a3, phi_a2, (f32 *) phi_a3);
}

void func_80859708(GlobalContext *arg0, void *arg1, ? arg2) {
    SkelAnime *sp1C;
    SkelAnime *temp_a2;

    temp_a2 = arg1 + 0x240;
    sp1C = temp_a2;
    func_801360E0(arg0, temp_a2);
    if ((arg1->unk_0 == 0x159) && (func_801378B8(temp_a2, 20.0f) != 0)) {
        arg1->unk_B2A = 0x3A;
        func_80151BB4(arg0, 0x1BU);
        func_801A3098(0x37U);
    }
}

void func_8085978C(void *arg0, void *arg1, ? arg2) {
    f32 temp_f0;
    s16 temp_v0;
    void *temp_a2;

    temp_a2 = arg1;
    temp_a2->unk_A6C = (s32) (temp_a2->unk_A6C & 0xFDFFFFFF);
    arg1 = temp_a2;
    temp_v0 = Math_Vec3f_Yaw(temp_a2 + 0x24, temp_a2 + 0x3A0);
    temp_f0 = arg1->unk_AD0;
    arg1->unk_32 = temp_v0;
    arg1->unk_BE = temp_v0;
    arg1->unk_AD4 = temp_v0;
    if (temp_f0 <= 0.0f) {
        arg1->unk_AD0 = 0.1f;
    } else if (temp_f0 > 2.5f) {
        arg1->unk_AD0 = 2.5f;
    }
    if ((arg1->unk_14B != 4) && (arg0->unk_186E3 == 5)) {
        gGameInfo->data[544] = 0x2D;
        gGameInfo->data[545] = 0xFF;
        gGameInfo->data[546] = 0xFF;
        gGameInfo->data[547] = 0xFF;
        gGameInfo->data[548] = 0;
        play_sound(0x4834U);
    }
}

void func_80859890(void *arg1, ? arg2) {
    f32 sp24;
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    f32 *temp_a2;
    s16 temp_v1;

    temp_v0 = gGameInfo;
    temp_v1 = temp_v0->data[544];
    if ((s32) temp_v1 > 0) {
        temp_v0->data[548] += temp_v1;
        temp_v0_2 = gGameInfo;
        if ((s32) temp_v0_2->data[548] >= 0x100) {
            temp_v0_2->data[544] = -0x40;
            gGameInfo->data[548] = 0xFF;
            gSaveContext.playerForm = 4;
            arg1->unk_138 = func_8012301C;
            arg1->unk_13C = 0;
            arg1->unk_AE7 = 0;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if ((s32) temp_v1 < 0) {
        temp_v0->data[548] += temp_v1;
        temp_v0_3 = gGameInfo;
        if ((s32) temp_v0_3->data[548] < 0) {
            temp_v0_3->data[544] = 0;
            gGameInfo->data[548] = 0;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    temp_a2 = &sp24;
    sp24 = 2.5f;
    func_808411D4((GlobalContext *) temp_a2, (GlobalContext *)0xA);
    arg1->unk_AE8 = (s16) (arg1->unk_AE8 + 1);
    if ((s32) arg1->unk_AE8 >= 0x15) {
        arg1->unk_394 = 0xA;
    }
}

void func_80859990(s32 arg0, void *arg1, ? arg2) {
    arg1->unk_AD0 = 2.5f;
    func_80835BF8(arg1 + 0x24, arg1->unk_BE, 180.0f, arg1 + 0x3A0);
}

void func_808599DC(? arg2) {
    f32 sp1C;
    f32 *temp_a2;

    temp_a2 = &sp1C;
    sp1C = 2.5f;
    func_808411D4((GlobalContext *) temp_a2, (GlobalContext *)0xA);
}

void func_80859A10(GlobalContext *arg0, Actor *arg1, ? arg2) {
    func_8083B23C(arg1, arg0, arg1);
}

void func_80859A44(GlobalContext *arg0, Player *arg1, ? arg2) {
    func_80859248(arg1);
    if (arg1->unk_AE8 != 0) {
        if (func_801360E0(arg0, &arg1->skelAnime) != 0) {
            func_8082DB3C(arg0, (Actor *) arg1, func_8082EF54((Actor *) arg1));
            arg1->unk_AE8 = 0;
        }
        func_8082FC60((Actor *) arg1);
        return;
    }
    func_8083E958(arg0, (Actor *) arg1);
}

void func_80859AD0(void) {
    func_80840F90(NULL, NULL, NULL);
}

void func_80859AF8(void *arg1) {
    arg1->unk_C2 = 0xF;
    func_80840F90(NULL, NULL, NULL);
}

void func_80859B28(void) {
    func_80840F90(NULL, NULL, (void *)1);
}

void func_80859B54(GlobalContext *arg1, ? arg2) {
    GlobalContext *temp_a1;
    GlobalContext *temp_a3;

    temp_a3 = arg1;
    temp_a1 = temp_a3;
    arg1 = temp_a3;
    func_80858CC8(temp_a1, (Actor *) &D_0400DDB0, (AnimationHeaderCommon *) temp_a3);
    arg1->unk_14A = 0x14;
    func_80123AA4(arg1, func_80123960(arg1, arg1->unk_14A));
}

void func_80859BA8(GlobalContext *arg0, Actor *arg1, void *arg2) {
    f32 sp4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f6;
    u16 temp_v0;

    temp_f0 = (f32) arg2->unk_C;
    temp_v0 = arg2->unk_2;
    temp_f2 = (f32) arg2->unk_10;
    temp_f12 = (f32) arg2->unk_14;
    temp_f6 = (f32) (arg0->csCtx.frames - temp_v0) / (f32) (arg2->unk_4 - temp_v0);
    sp4 = temp_f6;
    arg1->world.pos.x = (((f32) arg2->unk_18 - temp_f0) * temp_f6) + temp_f0;
    arg1->world.pos.y = (((f32) arg2->unk_1C - temp_f2) * sp4) + temp_f2;
    arg1->world.pos.z = (((f32) arg2->unk_20 - temp_f12) * sp4) + temp_f12;
}

void func_80859C60(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    if (arg2 != 0) {
        func_80859BA8(arg0, arg1);
    }
    func_801360E0(arg0, arg1 + 0x240);
}

void func_80859CA0(Actor *arg1, Actor *arg2) {
    func_8082E514(*(&D_8085C28C + (arg1->unk_14F * 4)));
    func_8082DABC(arg1);
}

void func_80859CE0(GlobalContext *arg0, Actor *arg1, ? arg2) {
    arg1->draw = func_80846528;
}

void func_80859CFC(GlobalContext *arg0, Player *arg1, ? arg2) {
    func_80841358(arg0, arg1, 0);
    func_8082DB90(arg0, (Actor *) arg1, (LinkAnimationHeader *) &D_0400D660);
}

void func_80859D44(GlobalContext *arg0, s32 arg1, ? arg2) {
    func_801360E0(arg0, arg1 + 0x240);
}

void func_80859D70(GlobalContext *arg0, Actor *arg1, ? arg2) {
    ? sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    void *temp_s0;

    func_808591BC(arg0, arg1, *(&D_8085E354 + (arg1->unk_14B * 4)));
    if (arg1->unk_151 != 0xFF) {
        arg1->unk_151 = 0xFFU;
        return;
    }
    temp_s0 = (arg1->unk_14B * 0xC) + &D_8085E368;
    sp34 = randPlusMinusPoint5Scaled((f32) temp_s0->unk_6) + (f32) temp_s0->unk_0;
    sp38 = randPlusMinusPoint5Scaled((f32) temp_s0->unk_8) + (f32) temp_s0->unk_2;
    sp3C = randPlusMinusPoint5Scaled((f32) temp_s0->unk_A) + (f32) temp_s0->unk_4;
    SkinMatrix_Vec3fMtxFMultXYZ(arg1 + 0xD04, (Vec3f *) &sp34, (Vec3f *) &sp40);
    EffectSsKiraKira_SpawnDispersed(arg0, (Vec3f *) &sp40, &D_801D15B0, &D_801D15B0, &D_8085E3A4, &D_8085E3A8, (s16) 0x258, -0xA);
}

void func_80859EBC(GlobalContext *arg0, Player *arg1, s32 arg2) {
    SkelAnime *temp_a1;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    if (func_801360E0(arg0, temp_a1) != 0) {
        func_8085AACC(arg0, arg1, arg2, (GlobalContext *) arg1);
        return;
    }
    if (arg1->unk_AE8 == 0) {
        arg1 = arg1;
        Item_Give(arg0, 0x4EU);
        func_80841358(arg0, arg1, 0);
        return;
    }
    func_808484CC((Actor *) arg1, (? *) 0x4EU);
}

void func_80859F4C(GlobalContext *arg0, Player *arg1, ? arg2) {
    if (func_801360E0(arg0, arg1 + 0x240) != 0) {
        func_8083FCF0(arg0, arg1, NULL, 99.0f, arg1->skelAnime.animFrameCount - 8.0f);
    }
    if (arg1->itemActionParam != 5) {
        func_80841358(arg0, arg1, 1);
    }
}

void func_80859FCC(s32 arg0, void *arg1, ? arg2) {
    if (arg1->unk_14B != 3) {
        gSaveContext.playerForm = 3;
    }
}

void func_80859FF4(GlobalContext *arg0, void *arg1, ? arg2) {
    SkelAnime *temp_a1;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    func_801360E0(arg0, temp_a1);
    if (arg1->unk_14B != gSaveContext.playerForm) {
        arg1->unk_138 = func_8012301C;
        arg1->unk_13C = 0;
    }
}

void func_8085A04C(GlobalContext *arg0, void *arg1, void *arg2) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    u16 temp_v0;

    temp_f2 = (f32) arg2->unk_18;
    temp_f14 = (f32) arg2->unk_20;
    temp_f12 = (f32) arg2->unk_1C;
    sp1C = (f32) arg2->unk_14 - temp_f14;
    temp_v0 = arg2->unk_4;
    temp_f0 = (f32) (temp_v0 - arg0->csCtx.frames) / (f32) (temp_v0 - arg2->unk_2);
    arg1->unk_24 = (f32) ((((f32) arg2->unk_C - temp_f2) * temp_f0) + temp_f2);
    arg1->unk_28 = (f32) ((((f32) arg2->unk_10 - temp_f12) * temp_f0) + temp_f12);
    arg1->unk_2C = (f32) ((sp1C * temp_f0) + temp_f14);
    func_801360E0(arg0, arg1 + 0x240);
}

void func_8085A120(s32 arg0, void *arg1, ? arg2) {
    if (arg1->unk_14B != 0) {
        gSaveContext.playerForm = 0;
    }
}

void func_8085A144(GlobalContext *arg0, void *arg1, ? arg2) {
    SkelAnime *temp_a1;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    func_801360E0(arg0, temp_a1);
    if (arg1->unk_14B != gSaveContext.playerForm) {
        arg1->unk_138 = func_8012301C;
        arg1->unk_13C = 0;
    }
}

void func_8085A19C(GlobalContext *arg1, ? arg2) {
    func_8082DB18(arg1, (Player *) &D_0400D2D0);
    arg1->unk_AAA = -0x8000;
}

void func_8085A1D4(GlobalContext *arg0, void *arg1, ? arg2) {
    SkelAnime *temp_a1;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    func_801360E0(arg0, temp_a1);
    arg1->unk_74 = 0.0f;
    Math_StepToF(arg1 + 0x68, -arg1->unk_78, -((f32) gGameInfo->data[68] / 100.0f));
}

void func_8085A24C(GlobalContext *arg1, ? arg2) {
    GlobalContext *temp_a3;
    u8 temp_t6;

    temp_a3 = arg1;
    temp_t6 = temp_a3->unk_14B;
    arg1 = temp_a3;
    func_8082DB90(temp_a3, *(&D_8085D17C + (temp_t6 * 4)), (LinkAnimationHeader *) temp_a3);
    arg1->unk_14A = 0x14;
    func_80123AA4(arg1, func_80123960(arg1, arg1->unk_14A));
}

void func_8085A2AC(GlobalContext *arg0, Actor *arg1, ? arg2) {
    SkelAnime *temp_a1;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    if ((func_801360E0(arg0, temp_a1) != 0) && (arg1->unk_248 == *(&D_8085D17C + (arg1->unk_14B * 4)))) {
        func_808525C4(arg0, arg1, arg1);
        return;
    }
    if (arg1->unk_AE8 != 0) {
        func_8085255C(arg0, arg1, arg1);
    }
}

void func_8085A330(void *arg1, ? arg2) {
    func_8082DBC0(*(&D_8085D17C + (arg1->unk_14B * 4)));
}

void func_8085A364(GlobalContext *arg0, Actor *arg1) {
    s32 temp_v0;

    func_80859BA8(arg0, arg1);
    if (func_801360E0(arg0, arg1 + 0x240) != 0) {
        func_8082EB18(arg0, arg1, &D_0400D100);
    }
    temp_v0 = arg1->unk_248;
    if (&D_0400D0B8 == temp_v0) {
        func_8082E224(arg1, &D_8085DA48);
        return;
    }
    if (&D_0400D028 == temp_v0) {
        func_800B8F98(arg1, 0x1C0U);
        return;
    }
    func_80858FE8(arg1);
}

void func_8085A40C(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    SkelAnime *temp_a1;
    s32 temp_v0;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    if (func_801360E0(arg0, temp_a1) != 0) {
        func_80859CA0((Actor *) arg0, arg1, arg2, arg1);
        return;
    }
    temp_v0 = arg1->unk_248;
    if (&D_0400CF58 == temp_v0) {
        func_8082E224(arg1, &D_8085DA88);
        return;
    }
    if (&D_0400D090 == temp_v0) {
        func_8082E224(arg1, &D_8085DA8C);
    }
}

void func_8085A4A4(GlobalContext *arg0, Player *arg1, ? arg2) {
    Player *temp_a1_2;
    Player *temp_a3;
    SkelAnime *temp_a1;
    Actor *phi_a3;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    temp_a3 = arg1;
    phi_a3 = (Actor *) temp_a3;
    if ((func_801360E0(arg0, temp_a1) != 0) && (temp_a3->unk_AE8 == 0)) {
        temp_a1_2 = temp_a3;
        if ((temp_a3->actor.bgCheckFlags & 1) != 0) {
            arg1 = temp_a3;
            func_8082DB18(arg0, temp_a1_2, (LinkAnimationHeader *) &D_0400DAD8, (GlobalContext *) temp_a3);
            arg1->unk_AE8 = 1;
            phi_a3 = (Actor *) arg1;
        }
    }
    if (phi_a3->unk_AE8 != 0) {
        func_80832F24(phi_a3);
    }
}

void func_8085A530(GlobalContext *arg0, s32 arg1, ? arg2) {
    f32 sp28;
    f32 phi_f0;

    if (arg0->sceneNum == 0x70) {
        phi_f0 = (f32) gGameInfo->data[920];
    } else {
        phi_f0 = 0.0f;
    }
    sp28 = phi_f0;
    SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x240, (LinkAnimationHeader *) &D_0400DCA8, 1.0f, phi_f0, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0400DCA8), (u8) 2, -8.0f);
}

void func_8085A5DC(GlobalContext *arg0, void *arg1, ? arg2) {
    SkelAnime *sp28;
    SkelAnime *temp_a1;
    s16 temp_v0;

    temp_a1 = arg1 + 0x240;
    sp28 = temp_a1;
    arg1 = arg1;
    if (func_801360E0(arg0, temp_a1) != 0) {
        temp_v0 = arg1->unk_AE8;
        arg1->unk_AE8 = (s16) (temp_v0 + 1);
        if ((((s32) temp_v0 < 0x15) ^ 1) != 0) {
            SkelAnime_ChangeLinkAnim(arg0, temp_a1, (LinkAnimationHeader *) &D_0400E410, 1.0f, 0.0f, 0.0f, (u8) 0, -16.0f);
        }
    }
}

void func_8085A66C(GlobalContext *arg0, Player *arg1, ? arg2) {
    if (func_801242B4(arg1) != 0) {
        func_8085929C(arg0, (Actor *) arg1, 0);
        return;
    }
    func_80858E40(arg0, arg1, &D_0400D638);
}

void func_8085A6C0(GlobalContext *arg0, Player *arg1, s32 arg2) {
    if (func_801242B4(arg1) != 0) {
        func_80859300(arg0, (GlobalContext *) arg1, 0);
        return;
    }
    func_80858FBC(arg0, arg1, arg2);
}

void func_8085A710(GlobalContext *arg0, Player *arg1) {
    func_80858FBC(arg0, arg1);
    if (func_8083D23C(arg1, arg0) != 0) {
        arg0->csCtx.state = 3;
        ActorCutscene_Stop(ActorCutscene_GetCurrentIndex());
    }
}

void func_8085A768(GlobalContext *arg0, Player *arg1, ? arg2) {
    func_80838830(arg1, 0x215);
    func_80858E40(arg0, arg1, &D_0400DCA8);
    arg1->stateFlags2 &= 0xFEFFFFFF;
}

void func_8085A7C0(GlobalContext *arg0, Actor *arg1, ? arg2) {
    SkelAnime *sp2C;
    MessageContext *temp_a0;
    SkelAnime *temp_a2;
    s16 temp_v0;

    temp_a2 = arg1 + 0x240;
    sp2C = temp_a2;
    if (func_801360E0(arg0, temp_a2) != 0) {
        temp_v0 = arg1->unk_AE8;
        temp_a0 = &arg0->msgCtx;
        if (temp_v0 == 0) {
            sp2C = (SkelAnime *) temp_a0;
            if ((func_80152498(temp_a0) == 2) || (func_80152498(temp_a0) == 0)) {
                arg1->unk_B2A = 0;
                arg1->unk_AE8 = -1;
                return;
            }
            arg1->unk_B2A = 0x6F;
            return;
        }
        if ((s32) temp_v0 < 0) {
            if (Actor_HasParent(arg1, arg0) != 0) {
                arg1->parent = NULL;
                arg1->unk_AE8 = 1;
                return;
            }
            func_800B8A1C(arg1, arg0, 0xAB, 9999.9f, 9999.9f);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if (func_80136A48(temp_a2, 4.0f) != 0) {
        gSaveContext.weekEventReg[50] |= 0x80;
    }
}

void func_8085A8C4(void *arg0, void *arg1, ? arg2) {
    if ((arg1->unk_14B != 4) && (arg0->unk_186E3 == 5)) {
        gGameInfo->data[544] = 0x2D;
        gGameInfo->data[545] = 0xFF;
        gGameInfo->data[546] = 0xFF;
        gGameInfo->data[547] = 0xFF;
        gGameInfo->data[548] = 0;
        play_sound(0x4834U);
    }
}

void func_8085A940(GlobalContext *arg0, void *arg1, ? arg2) {
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    s16 temp_v1;

    temp_v0 = gGameInfo;
    temp_v1 = temp_v0->data[544];
    if ((s32) temp_v1 > 0) {
        temp_v0->data[548] += temp_v1;
        temp_v0_2 = gGameInfo;
        if ((s32) temp_v0_2->data[548] >= 0x100) {
            temp_v0_2->data[544] = -0x40;
            gGameInfo->data[548] = 0xFF;
            gSaveContext.playerForm = 4;
            arg1->unk_138 = func_8012301C;
            arg1->unk_13C = 0;
            arg1->unk_AE7 = 0;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if ((s32) temp_v1 < 0) {
        temp_v0->data[548] += temp_v1;
        temp_v0_3 = gGameInfo;
        if ((s32) temp_v0_3->data[548] < 0) {
            temp_v0_3->data[544] = 0;
            gGameInfo->data[548] = 0;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    func_801360E0(arg0, arg1 + 0x240);
}

void func_8085AA10(GlobalContext *arg0, s32 arg1, ? arg2) {
    if ((func_801360E0(arg0, arg1 + 0x240) != 0) && (ActorCutscene_GetCurrentIndex() == 0x7D)) {
        ActorCutscene_Stop(0x7D);
    }
}

void func_8085AA60(? arg2) {
    func_80848640();
}

void func_8085AA84(GlobalContext *arg0, void *arg1, ? arg2) {
    SkelAnime *temp_a1;

    temp_a1 = arg1 + 0x240;
    arg1 = arg1;
    if (func_801360E0(arg0, temp_a1) != 0) {
        arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x1000000);
    }
}

void func_8085AACC(GlobalContext *arg0, Player *arg1, s32 arg2) {
    if (func_801242B4(arg1) != 0) {
        func_808353DC(arg0, (Actor *) arg1);
        func_8082DC64(arg0, arg1);
    } else {
        func_80839ED0(arg1, arg0);
        if (func_808391D8(arg1, arg0) == 0) {
            func_8083D23C(arg1, arg0);
        }
    }
    arg1->unk_394 = 0;
    arg1->unk_AA5 = 0;
}

void func_8085AB58(Actor *arg0, CsCmdActorAction *arg1) {
    s16 temp_v0;

    arg0->world.pos.x = (f32) arg1->unk_C;
    arg0->world.pos.y = (f32) arg1->unk_10;
    arg0->world.pos.z = (f32) arg1->unk_14;
    temp_v0 = arg1->unk_8;
    arg0->shape.rot.y = temp_v0;
    arg0->unk_AD4 = temp_v0;
}

void func_8085ABA8(Actor *arg0, CsCmdActorAction *arg1) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0;
    s32 phi_v1;

    temp_f2 = (f32) (arg1->unk_C - (s32) arg0->world.pos.x);
    temp_f12 = (f32) (arg1->unk_10 - (s32) arg0->world.pos.y);
    temp_v0 = arg1->unk_8 - arg0->shape.rot.y;
    temp_f14 = (f32) (arg1->unk_14 - (s32) arg0->world.pos.z);
    if (arg0->unk_AD0 == 0.0f) {
        if (!(sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) > 50.0f)) {
            phi_v1 = (s32) temp_v0;
            if ((s32) temp_v0 < 0) {
                phi_v1 = -(s32) temp_v0;
            }
            if (phi_v1 >= 0x4001) {
                goto block_5;
            }
        } else {
block_5:
            func_8085AB58((bitwise Actor *) temp_f12, (bitwise CsCmdActorAction *) temp_f14);
        }
    }
    arg0->unk_275 = 0;
    func_8082E784(arg0);
}

void func_8085AC9C(GlobalContext *arg1, Actor *arg3) {
    s8 temp_v0;
    void *temp_v0_2;

    temp_v0 = arg3->unk_0;
    if ((s32) temp_v0 > 0) {
        *(&D_8085D990 + (temp_v0 * 4))(arg3->flags);
        goto block_4;
    }
    if ((s32) temp_v0 < 0) {
        arg3->flags();
block_4:
    }
    if (((D_80862B6C & 4) != 0) && ((arg1->unk_275 & 4) == 0)) {
        temp_v0_2 = arg1->unk_264;
        temp_v0_2->unk_2 = (s16) (s32) ((f32) temp_v0_2->unk_2 / arg1->unk_A68->unk_8);
        D_80862B6C = 0;
    }
}

void func_8085AD5C(GlobalContext *arg2) {
    if ((arg2 != 1) && (arg2 != 7) && (arg2 != 0x14) && (arg2 != 6)) {
        func_8082DCA0();
    }
}

void func_8085ADA0(GlobalContext *arg0, Actor *arg1, ? arg2) {
    CsCmdActorAction *sp3C;
    s32 sp30;
    s32 sp2C;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    u16 temp_a0;
    u16 temp_t3;
    u16 temp_v0_5;
    u8 temp_v0;
    u8 temp_v1;
    s32 phi_a0;
    s32 phi_v0;
    s32 phi_v1;
    u8 phi_v1_2;
    s32 phi_v1_3;

    if (arg1->id == 0x159) {
        sp3C = arg0->csCtx.npcActions[func_800EE200(arg0, 0x1FAU)];
    } else {
        sp3C = arg0->csCtx.linkAction;
    }
    temp_v0 = arg0->csCtx.state;
    phi_a0 = 0;
    if ((temp_v0 == 0) || (temp_v0 == 3) || (temp_v0 == 4)) {
        temp_v0_2 = *(&D_8085D384 + arg1->unk_396);
        if ((temp_v0_2 == 0x44) && (arg0->sceneNum == 0x19)) {
            arg1->unk_AA5 = 5;
            if (func_80838A90(arg1, arg0) != 0) {
                arg1->unk_394 = 0;
                return;
            }
            /* Duplicate return node #40. Try simplifying control flow for better match */
            return;
        }
        phi_a0 = 1;
        if (temp_v0_2 != 0x10) {
            arg1->unk_394 = 6;
            func_800B7298(arg0, NULL, 6U);
            arg1->unk_396 = 0U;
            func_8082DABC(arg1);
            return;
        }
        goto block_12;
    }
block_12:
    if ((phi_a0 == 0) && (sp3C == 0)) {
        arg1->flags &= -0x41;
        return;
    }
    temp_v1 = arg1->unk_396;
    phi_v1_2 = temp_v1;
    if (phi_a0 == 0) {
        temp_a0 = sp3C->unk0;
        if (temp_a0 != temp_v1) {
            temp_v0_3 = *(&D_8085D384 + temp_a0);
            phi_v0 = (s32) temp_v0_3;
            if (((s32) temp_v0_3 >= 0) && (D_801F4DE0 == 0)) {
                if ((temp_v0_3 == 2) || (temp_v0_3 == 3)) {
                    sp30 = (s32) temp_v0_3;
                    func_8085ABA8(arg1, sp3C);
                } else {
                    sp30 = (s32) temp_v0_3;
                    func_8085AB58(arg1, sp3C);
                }
                phi_v0 = sp30;
            }
            if (phi_v0 == 0x6C) {
                arg1->unk_A74 = (s32) (arg1->unk_A74 | 0x20000000);
            } else if (phi_v0 == 0x6E) {
                arg1->unk_A74 = (s32) (arg1->unk_A74 & 0xDFFFFFFF);
            }
            sp30 = phi_v0;
            D_80862B6C = (s32) arg1->unk_275;
            func_8082E794(arg1);
            if (phi_v0 < 0) {
                sp2C = -phi_v0;
            } else {
                sp2C = phi_v0;
            }
            sp30 = phi_v0;
            func_8085AD5C(arg0, arg1, sp2C);
            if (phi_v0 < 0) {
                phi_v1 = -phi_v0;
            } else {
                phi_v1 = phi_v0;
            }
            func_8085AC9C(arg0, arg1, sp3C, (phi_v1 * 8) + &D_8085DA94);
            arg1->unk_AE8 = 0;
            arg1->unk_AE7 = 0;
            temp_t3 = sp3C->unk0;
            arg1->unk_396 = (u8) temp_t3;
            phi_v1_2 = temp_t3 & 0xFF;
        }
    }
    temp_v0_4 = *(&D_8085D384 + phi_v1_2);
    if ((s32) temp_v0_4 < 0) {
        phi_v1_3 = -(s32) temp_v0_4;
    } else {
        phi_v1_3 = (s32) temp_v0_4;
    }
    func_8085AC9C(arg0, arg1, sp3C, (phi_v1_3 * 8) + &D_8085DEF4);
    temp_v0_5 = sp3C->unk_6;
    if (temp_v0_5 != 0) {
        Math_SmoothStepToS((s16 *) &arg1->focus.rot, (s16) temp_v0_5, 4, 0x2710, (s16) 0);
        func_80832754(arg1, 0);
    }
}

void func_8085B08C(Actor *arg0, GlobalContext *arg1) {
    u8 temp_a2;

    if (arg0->unk_395 != arg0->unk_394) {
        D_80862B6C = (s32) arg0->unk_275;
        func_8082E794(arg0);
        temp_a2 = arg0->unk_394;
        arg0->unk_395 = temp_a2;
        func_8085AD5C(arg1, arg0, (s32) temp_a2);
        func_8085AC9C(arg1, arg0, NULL, (arg0->unk_394 * 8) + &D_8085DA94);
    }
    func_8085AC9C(arg1, arg0, NULL, (arg0->unk_394 * 8) + &D_8085DEF4);
}

s32 func_8085B134(GlobalContext *arg0) {
    GlobalContext *sp1C;
    GlobalContext *temp_a1;

    temp_a1 = arg0->actorCtx.actorList[2].first;
    sp1C = temp_a1;
    func_8082DE50(temp_a1);
    func_80831990(arg0, (Actor *) temp_a1, 0x5C);
    return 1;
}

void func_8085B170(GlobalContext *arg0, Player *arg1) {
    func_8082DE50(arg0, arg1);
    func_80831494(arg0, (Actor *) arg1, func_80853CC0, 0);
    func_8082DB18(arg0, arg1, (LinkAnimationHeader *) &D_0400DE28);
    arg1->stateFlags2 |= 0x80;
    func_8082DAD4((Actor *) arg1);
    func_8082DF8C((Actor *) arg1, 0x680DU);
}

s32 func_8085B1F0(GlobalContext *arg0, Player *arg1) {
    Player *temp_a0;
    Player *temp_a1;

    temp_a1 = arg1;
    if ((func_80123358(arg0, arg1) == 0) && (temp_a0 = temp_a1, ((s32) temp_a1->invincibilityTimer >= 0)) && (arg1 = temp_a1, (func_801240DC((Actor *) temp_a0, temp_a1) == 0)) && ((arg1->stateFlags1 & 0xB06080) == 0) && ((arg1->stateFlags2 & 0x80) == 0) && ((arg1->stateFlags3 & 0x80) == 0)) {
        func_8085B170(arg0, arg1);
        return 1;
    }
    return 0;
}

s32 func_8085B28C(GlobalContext *arg0, GlobalContext *arg1, s32 arg2) {
    s16 temp_v0;
    Player *phi_s0;

    phi_s0 = arg0->actorCtx.actorList[2].first;
    if (arg1 != 0) {
        if (arg2 == 0) {
            return arg1->subCameras[2].rUpdateRateInv == (s32) func_8084E034;
        }
        temp_v0 = arg1->unk_0;
        if ((temp_v0 == 0x159) && (arg2 < 0)) {
            func_8083B0E4(arg1, (Actor *) arg1->unk_16);
            goto block_11;
        }
        if (temp_v0 == 0x159) {
            phi_s0 = (Player *) arg1;
        }
        goto block_8;
    }
block_8:
    if ((phi_s0->actor.id == 0x159) || (func_80123358(arg0, phi_s0) == 0)) {
        arg0 = arg0;
        func_8082DE50(arg0, phi_s0);
        func_80831494(arg0, (Actor *) phi_s0, func_8085B08C, 0);
        phi_s0->unk_398 = (Actor *) arg1;
        phi_s0->unk_394 = (u8) arg2;
        func_8082DAD4((Actor *) phi_s0);
        return 1;
    }
block_11:
    return 0;
}

void func_8085B384(Actor *arg0, GlobalContext *arg1) {
    func_80831494(arg1, arg0, func_80849FE0, 1);
    func_8082E438(arg1, arg0, func_8082ED20(arg0));
    arg0->unk_AD4 = (s16) arg0->shape.rot.y;
}

s32 func_8085B3E0(GlobalContext *arg0, s32 arg1) {
    Player *sp1C;
    Player *temp_a3;

    temp_a3 = arg0->actorCtx.actorList[2].first;
    if ((((temp_a3->stateFlags2 & 0x80) != 0) || (sp1C = temp_a3, (func_80123358(arg0, temp_a3) == 0))) && (sp1C = arg0->actorCtx.actorList[2].first, (func_808339D4(arg0, (Actor *) arg0->actorCtx.actorList[2].first, arg1, arg0->actorCtx.actorList[2].first) == 0))) {
        arg0->actorCtx.actorList[2].first->stateFlags2 &= -0x81;
        return 1;
    }
    return 0;
}

void func_8085B460(GlobalContext *arg0, Actor *arg1) {
    s32 sp24;
    Actor *temp_a1;
    Actor *temp_a3;
    Actor *temp_a3_2;
    Actor *temp_a3_3;
    Actor *temp_s0;
    Actor *temp_v1;
    u32 temp_v0;
    void *temp_v0_2;
    LinkAnimationHeader *phi_a2;

    temp_a3 = arg1;
    temp_s0 = arg0->actorCtx.actorList[2].first;
    arg1 = temp_a3;
    func_808323C0(temp_s0, 0x7C, temp_a3);
    temp_a3_2 = arg1;
    temp_a1 = temp_a3_2;
    if ((temp_s0->unk_A88 != 0) || (temp_a3_2 == temp_s0->unk_A80) || ((temp_a3_2->flags & 0x40001) == 0x40001)) {
        temp_a3_2->flags |= 0x100;
    }
    temp_s0->unk_A88 = temp_a3_2;
    temp_s0->unk_A87 = 0;
    temp_s0->unk_730 = temp_a3_2;
    if (temp_a3_2->textId == 0xFFFF) {
        arg1 = temp_a3_2;
        func_800B7298(arg0, temp_a1, 1U);
        arg1->flags |= 0x100;
        func_8082DE14(arg0, (Player *) temp_s0);
    } else {
        temp_v0 = temp_s0->flags;
        if ((temp_v0 & 0x100) != 0) {
            temp_s0->textId = 0;
        } else {
            temp_s0->flags = temp_v0 | 0x100;
            temp_s0->textId = temp_a3_2->textId;
        }
        if (temp_s0->unk_A6C & 0x800000) {
            sp24 = (s32) temp_s0->unk_AE8;
            func_8082DE14(arg0, (Player *) temp_s0, (GlobalContext *) 1U, temp_a3_2);
            func_80837B60(arg0, temp_s0);
            temp_s0->unk_AE8 = (s16) sp24;
        } else {
            arg1 = temp_a3_2;
            temp_a3_3 = arg1;
            if (func_801242B4((Player *) temp_s0, (Player *) temp_s0, (Player *) 1U, (Player *) temp_a3_2) != 0) {
                func_80832558(arg0, temp_s0, func_80837B60, temp_a3_3);
                func_8082E634(arg0, temp_s0, (LinkAnimationHeader *) &D_0400E000);
            } else if ((temp_a3_3->category != 4) || (temp_s0->unk_147 == 2)) {
                arg1 = temp_a3_3;
                func_80837B60(arg0, temp_s0);
                if (func_80123420((Player *) temp_s0) == 0) {
                    if ((arg1 != temp_s0->unk_A80) && (arg1->xzDistToPlayer < (f32) (arg1->colChkInfo.cylRadius + 0x28))) {
                        func_8082DB90(arg0, temp_s0, (LinkAnimationHeader *) &D_0400DB10, (f32 *) arg1);
                    } else {
                        func_8082DB3C(arg0, temp_s0, func_8082ED20(temp_s0));
                    }
                }
            } else {
                arg1 = temp_a3_3;
                func_80832558(arg0, temp_s0, func_80837B60, temp_a3_3);
                phi_a2 = (LinkAnimationHeader *) &D_0400DEA0;
                if (arg1->xzDistToPlayer < (f32) (arg1->colChkInfo.cylRadius + 0x28)) {
                    phi_a2 = (LinkAnimationHeader *) &D_0400DB10;
                }
                func_8082DB90(arg0, temp_s0, phi_a2, (f32 *) arg1);
            }
            if (&D_0400DB10 == temp_s0->unk_248) {
                func_8082E920(arg0, temp_s0, 0x19);
            }
            func_8082DAD4(temp_s0);
        }
        temp_s0->unk_A6C = (s32) (temp_s0->unk_A6C | 0x20000040);
    }
    temp_v1 = temp_s0->unk_A88;
    temp_v0_2 = temp_s0->unk_A80;
    if ((temp_v1 == temp_v0_2) && ((temp_v1->textId & 0xFF00) != 0x200)) {
        temp_v0_2->unk_4 = (s32) (temp_v0_2->unk_4 | 0x100);
    }
}

void func_8085B74C(GlobalContext *arg0) {
    GlobalContext *sp1C;
    GlobalContext *temp_a1;
    f32 temp_f0;
    f32 temp_f2;
    f32 phi_f0;
    s16 phi_v0;

    temp_a1 = arg0->actorCtx.actorList[2].first;
    temp_f0 = temp_a1->unk_AD0;
    phi_f0 = temp_f0;
    if (temp_f0 < 0.0f) {
        temp_a1->state.input[1].prev.button += 0x8000;
        phi_f0 = -temp_f0;
    }
    temp_f2 = (f32) gGameInfo->data[45] / 100.0f;
    if (temp_f2 < phi_f0) {
        gSaveContext.entranceSpeed = temp_f2;
    } else {
        gSaveContext.entranceSpeed = phi_f0;
    }
    if (D_80862B10 != 0) {
        phi_v0 = D_80862B16;
    } else {
        phi_v0 = temp_a1->state.input[1].prev.button;
    }
    sp1C = temp_a1;
    func_80835324(temp_a1, (Actor *)0x43C80000, (bitwise f32) phi_v0);
    temp_a1->unk_A6C = (s32) (temp_a1->unk_A6C | 0x20000001);
}

void func_8085B820(GlobalContext *arg0, s16 arg1) {
    Actor *temp_a0;

    temp_a0 = arg0->actorCtx.actorList[2].first;
    temp_a0->focus.rot.y = arg1;
    func_80836D8C(temp_a0, arg1, arg0);
}

s32 func_8085B854(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    s32 sp24;
    s32 temp_v0;
    s32 phi_v1;

    temp_v0 = func_8082F524(arg1, arg2);
    phi_v1 = temp_v0;
    if ((temp_v0 >= 0x3A) && (temp_v0 < 0x52) && (temp_v0 == (arg1->unk_153 + 0x39))) {
        phi_v1 = 0;
    }
    if ((phi_v1 <= 0) || (phi_v1 >= 0x53)) {
        return -1;
    }
    arg1->unk_14A = 0;
    arg1->unk_748 = 0;
    sp24 = phi_v1;
    func_80831760(arg0, (Player *) arg1, func_80853A5C, 0);
    arg1->unk_A86 = 0x7C;
    arg1->unk_14A = (s8) phi_v1;
    func_8082DB18(arg0, (Player *) arg1, (LinkAnimationHeader *) &D_0400DCA8);
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000040);
    arg1->unk_B2A = 0;
    arg1->unk_A87 = (s8) sp24;
    return sp24;
}

s32 func_8085B930(GlobalContext *arg0, Actor *arg1, s32 arg2) {
    Actor *sp34;
    LinkAnimationHeader *sp2C;
    Actor *temp_t7;
    LinkAnimationHeader *phi_a2;

    temp_t7 = arg0->actorCtx.actorList[2].first;
    sp34 = temp_t7;
    if ((temp_t7->flags & 0x100) == 0) {
        return 0;
    }
    phi_a2 = (LinkAnimationHeader *) arg1;
    if (arg1 == 0) {
        phi_a2 = func_8082ED20(sp34, arg1);
    }
    sp2C = phi_a2;
    SkelAnime_ChangeLinkAnim(arg0, sp34 + 0x240, phi_a2, 0.6666667f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) arg1), (u8) arg2, -6.0f);
    return 1;
}
