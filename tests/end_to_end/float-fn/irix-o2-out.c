f32 func_004000BC();                                /* static */
f64 func_004000C4(f64);                             /* static */

f32 test(void) {
    f64 temp_f0;

    temp_f0 = func_004000C4((f64) func_004000BC());
    return (f32) temp_f0;
}
