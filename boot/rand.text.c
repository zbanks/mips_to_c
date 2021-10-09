static s32 sRandInt = 1;
u32 sRandFloat;



s32 Rand_Next(void) {
    s32 temp_v0;

    temp_v0 = (sRandInt * 0x19660D) + 0x3C6EF35F;
    sRandInt = temp_v0;
    return temp_v0;
}

void Rand_Seed(u32 seed) {
    sRandInt = (s32) seed;
}

f32 Rand_ZeroOne(void) {
    u32 temp_t8;

    temp_t8 = (sRandInt * 0x19660D) + 0x3C6EF35F;
    sRandFloat = (temp_t8 >> 9) | 0x3F800000;
    sRandInt = (s32) temp_t8;
    return (bitwise f32) sRandFloat - (bitwise f32) 0x3F800000;
}

f32 Rand_Centered(void) {
    u32 temp_t8;

    temp_t8 = (sRandInt * 0x19660D) + 0x3C6EF35F;
    sRandFloat = (temp_t8 >> 9) | 0x3F800000;
    sRandInt = (s32) temp_t8;
    return (bitwise f32) sRandFloat - 1.5f;
}

void Rand_Seed_Variable(u32 *rndNum, u32 seed) {
    *rndNum = seed;
}

u32 Rand_Next_Variable(u32 *param_1) {
    u32 temp_v0;

    temp_v0 = (*param_1 * 0x19660D) + 0x3C6EF35F;
    *param_1 = temp_v0;
    return temp_v0;
}

f32 Rand_ZeroOne_Variable(u32 *param_1) {
    u32 temp_t7;
    u32 temp_v0;

    temp_v0 = (*param_1 * 0x19660D) + 0x3C6EF35F;
    temp_t7 = (temp_v0 >> 9) | 0x3F800000;
    *param_1 = temp_v0;
    sRandFloat = temp_t7;
    return (bitwise f32) sRandFloat - (bitwise f32) 0x3F800000;
}

f32 Rand_Centered_Variable(u32 *param_1) {
    u32 temp_t7;
    u32 temp_v0;

    temp_v0 = (*param_1 * 0x19660D) + 0x3C6EF35F;
    temp_t7 = (temp_v0 >> 9) | 0x3F800000;
    *param_1 = temp_v0;
    sRandFloat = temp_t7;
    return (bitwise f32) sRandFloat - 1.5f;
}

