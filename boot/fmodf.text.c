

f32 fmodf(f32 dividend, f32 divisor) {
    if (divisor == 0.0f) {
        return 0.0f;
    }
    return dividend - ((f32) (s32) (dividend / divisor) * divisor);
}

