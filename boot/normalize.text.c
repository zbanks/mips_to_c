

void guNormalize(f32 *x, f32 *y, f32 *z) {
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 temp_f8;

    temp_f4 = *x;
    temp_f6 = *y;
    temp_f8 = *z;
    temp_f10 = 1.0f / sqrtf((temp_f8 * temp_f8) + ((temp_f4 * temp_f4) + (temp_f6 * temp_f6)));
    temp_f18 = temp_f6 * temp_f10;
    temp_f4_2 = temp_f8 * temp_f10;
    *x = temp_f4 * temp_f10;
    *y = temp_f18;
    *z = temp_f4_2;
}

