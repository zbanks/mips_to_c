extern f32 globalf;
extern s32 globali;

f32 test(s32 arg0, s32 arg1, f64 arg8, f64 arg9) {
    globali = (s32) arg8;
    globalf = (f32) arg0;
    return (f32) (f64) (arg1 + 3) + (f32) ((f64) (f32) (arg9 + 5.0) + 5.3);
}
