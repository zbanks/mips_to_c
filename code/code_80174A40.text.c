struct _mips2c_stack_Graph_BranchDlist {};          /* size 0x0 */

struct _mips2c_stack_Graph_DlistAlloc {};           /* size 0x0 */

struct _mips2c_stack_Graph_GfxPlusOne {};           /* size 0x0 */

Gfx *Graph_GfxPlusOne(Gfx *gfx) {
    return gfx + 8;
}

Gfx *Graph_BranchDlist(Gfx *gfx, Gfx *dst) {
    gfx->words.w0 = 0xDE010000;
    gfx->words.w1 = (u32) dst;
    return dst;
}

void *Graph_DlistAlloc(Gfx **gfx, u32 size) {
    Gfx *temp_a2;
    Gfx *temp_v0;
    Gfx *temp_v1;

    temp_v0 = *gfx;
    temp_v1 = temp_v0 + 8;
    temp_a2 = temp_v1 + ((size + 7) & ~7);
    temp_v0->words.w1 = (u32) temp_a2;
    temp_v0->words.w0 = 0xDE010000;
    *gfx = temp_a2;
    return (void *) temp_v1;
}
