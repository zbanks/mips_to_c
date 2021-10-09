struct _mips2c_stack_Entrance_GetSceneNum {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Entrance_GetSceneNumAbsolute {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Entrance_GetSpawnNum {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Entrance_GetTableEntry {};     /* size 0x0 */

struct _mips2c_stack_Entrance_GetTransitionFlags {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

static ? sSceneEntranceTable;                       /* unable to generate initializer */

EntranceTableEntry *Entrance_GetTableEntry(u16 entrance) {
    u32 temp_a0;

    temp_a0 = entrance & 0xFFFF;
    return ((temp_a0 & 0xF) * 4) + *(*(&sSceneEntranceTable + 4 + ((temp_a0 >> 9) * 0xC)) + (((temp_a0 >> 4) & 0x1F) * 4));
}

s32 Entrance_GetSceneNum(u16 entranceIndex) {
    return (s32) Entrance_GetTableEntry(entranceIndex & 0xFFFF)->sceneNum;
}

s32 Entrance_GetSceneNumAbsolute(u16 entranceIndex) {
    s8 temp_v1;
    s32 phi_a0;

    temp_v1 = Entrance_GetTableEntry(entranceIndex & 0xFFFF)->sceneNum;
    phi_a0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_a0 = -(s32) temp_v1;
    }
    return phi_a0;
}

s32 Entrance_GetSpawnNum(u16 entranceIndex) {
    return (s32) Entrance_GetTableEntry(entranceIndex & 0xFFFF)->spawnNum;
}

s32 Entrance_GetTransitionFlags(u16 entranceIndex) {
    return (s32) Entrance_GetTableEntry(entranceIndex & 0xFFFF)->flags;
}
