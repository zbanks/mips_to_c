extern void D_0F000000;
s32 D_801F6D10;
s16 D_801FBBCC;
s16 D_801FBBCE;
GameInfo *gGameInfo;
s32 gScreenHeight = 0xF0;
s32 gScreenWidth = 0x140;
u32 gSegments[16];
Gfx *graphDlEntry;
Gfx sFillSetupDL[12] = {
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFE793C}},
    {{0xEF382C30, 0}},
    {{0xD9000000, 0x220405}},
    {{0xDE000000, 0xE0001C8}},
    {{0xF9000000, 8}},
    {{0xDB040004, 2}},
    {{0xDB04000C, 2}},
    {{0xDB040014, 0xFFFE}},
    {{0xDB04001C, 0xFFFE}},
    {{0xDF000000, 0}},
};
Gfx sSetupDL[438] = {
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC30B3FF, 0x5FFEFE38}},
    {{0xEF182CA0, 0xC8104B50}},
    {{0xD9000000, 0x210405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFE7838}},
    {{0xEF182C00, 0xC8112048}},
    {{0xD9000000, 0x230404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFE793C}},
    {{0xEF082C00, 0x552078}},
    {{0xD9000000, 0x220405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFE7838}},
    {{0xEF182C00, 0xC8112078}},
    {{0xD9000000, 0x230405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFC327E64, 0xFFFFF7FB}},
    {{0xEF082C00, 0x5049D8}},
    {{0xD9000000, 0x220405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC11FE23, 0xFFFFF7FB}},
    {{0xEF082C00, 0x5049D8}},
    {{0xD9000000, 0x220405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFCF238}},
    {{0xEF182C00, 0xC8113048}},
    {{0xD9000000, 0x230004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF082C00, 0x5041C8}},
    {{0xD9000000, 0x220004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFE793C}},
    {{0xEF082C00, 0x552048}},
    {{0xD9000000, 0x220404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC121804, 0xFF13FFFF}},
    {{0xEF182C00, 0xC81041C8}},
    {{0xD9000000, 0x230004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E24, 0xFFFFF3F9}},
    {{0xEF082C00, 0x552048}},
    {{0xD9000000, 0x220404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E03, 0xFF0FF3FF}},
    {{0xEF182C00, 0xC8112048}},
    {{0xD9000000, 0x230404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC11FE23, 0xFFFFF7FB}},
    {{0xEF082C00, 0x552048}},
    {{0xD9000000, 0x220404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF082C00, 0x504240}},
    {{0xD9000000, 0x220404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFCF279}},
    {{0xEF082C00, 0x553078}},
    {{0xD9000000, 0x220005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFCF238}},
    {{0xEF182C00, 0xC8113078}},
    {{0xD9000000, 0x230005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119603, 0xFF0FFFFF}},
    {{0xEF182C00, 0xC81049D8}},
    {{0xD9000000, 0x230005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E24, 0xFFFFF3F9}},
    {{0xEF082C00, 0x553078}},
    {{0xD9000000, 0x220005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127FFF, 0xFFFFF238}},
    {{0xEF182C00, 0xC8113078}},
    {{0xD9000000, 0x230405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF082C00, 0x505258}},
    {{0xD9000000, 0x220005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF082C00, 0x504B51}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC121824, 0xFF33FFFF}},
    {{0xEF082C00, 0x5049D8}},
    {{0xD9000000, 0x220005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC121804, 0xFF13FFFF}},
    {{0xEF182C00, 0xC81049D8}},
    {{0xD9000000, 0x220005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E24, 0xFFFFF3F9}},
    {{0xEF082C00, 0x552078}},
    {{0xD9000000, 0x220405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E04, 0xFF13F3FF}},
    {{0xEF182C00, 0xC8112078}},
    {{0xD9000000, 0x230405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E03, 0xFF0FF3FF}},
    {{0xEF182C00, 0xC8112078}},
    {{0xD9000000, 0x230405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E03, 0xFF0FF3FF}},
    {{0xEF182C00, 0xC192078}},
    {{0xD9000000, 0x220405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC11FE23, 0xFFFFF7FB}},
    {{0xEF082C00, 0x5049D8}},
    {{0xD9000000, 0x200405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC11FE23, 0xFFFFF3F9}},
    {{0xEF00AC30, 0x553049}},
    {{0xD9000000, 0x200004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC1218E0, 0xFFFFFFF8}},
    {{0xEF182C00, 0xC192078}},
    {{0xD9000000, 0x220405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFDF6FB}},
    {{0xEF082C00, 0x507858}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC30B261, 0x44664924}},
    {{0xEF082C00, 0x552078}},
    {{0xD9000000, 0x260405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC30B261, 0x44664924}},
    {{0xEF082C00, 0x552078}},
    {{0xD9000000, 0x2E0405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC11E2A1, 0xF0A67800}},
    {{0xEF182C00, 0xC192078}},
    {{0xD9000000, 0x2E0405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFCF87C}},
    {{0xEF002C30, 0xF0A4001}},
    {{0xD9000000, 0x200004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFCF279}},
    {{0xEF082C00, 0x504DD8}},
    {{0xD9000000, 0x200405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFE793C}},
    {{0xEF302C30, 1}},
    {{0xD9000000, 0x200004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFC327FFF, 0xFFFFF638}},
    {{0xEF182C00, 0xC8112078}},
    {{0xD9000000, 0x230405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFE793C}},
    {{0xEF082C00, 0x5049D8}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF002C30, 0x504241}},
    {{0xD9000000, 0x200000}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC2527FF, 0x1FFC9238}},
    {{0xEF182C00, 0xF0A4000}},
    {{0xD9000000, 0x200204}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC121824, 0xFF33FFFF}},
    {{0xEF082C00, 0x504A50}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E24, 0xFFFFF3F9}},
    {{0xEF082C00, 0x504240}},
    {{0xD9000000, 0x200404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC11FE23, 0xFFFFF3F9}},
    {{0xEF00AC30, 0x504241}},
    {{0xD9000000, 0x200004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC1197FF, 0xFFFFFE38}},
    {{0xEF182C00, 0xC8104F50}},
    {{0xD9000000, 0x210405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFDF2F9}},
    {{0xEF002C30, 0x504241}},
    {{0xD9000000, 0x200004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFDF2F9}},
    {{0xEF082C00, 0x504240}},
    {{0xD9000000, 0x200004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC11FE23, 0xFFFFF7FB}},
    {{0xEF082C00, 0x504A50}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFDF6FB}},
    {{0xEF082C00, 0x5041C8}},
    {{0xD9000000, 0x200404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFC327E64, 0xFFFFF7FB}},
    {{0xEF082C00, 0x5041C8}},
    {{0xD9000000, 0x220404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF002C30, 0xF0A4001}},
    {{0xD9000000, 0x400}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF082C00, 0x504240}},
    {{0xD9000000, 0x400}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF002C30, 0x504241}},
    {{0xD9000000, 0x400}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC262A60, 0x150C937F}},
    {{0xEF102C30, 0xF0A4001}},
    {{0xD9000000, 0x400}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC262A60, 0x150C937F}},
    {{0xEF102C30, 0xC184241}},
    {{0xD9000000, 0x400}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC262A60, 0x150C937F}},
    {{0xEF102C30, 0xC184241}},
    {{0xD9000000, 0x400}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF000C30, 0x504241}},
    {{0xD9000000, 0x200404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFDF6FB}},
    {{0xEF002C30, 0x504341}},
    {{0xD9000000, 0x200000}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFC323864, 0xFF73FFFF}},
    {{0xEF082C00, 0x504340}},
    {{0xD9000000, 0x200405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC11E2A1, 0xF0A67800}},
    {{0xEF182C00, 0xC192048}},
    {{0xD9000000, 0x2E0404}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC30B261, 0x5566FF7F}},
    {{0xEF082C00, 0x504B50}},
    {{0xD9000000, 0x200405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC30B261, 0x5566FF7F}},
    {{0xEF082CA0, 0x504B50}},
    {{0xD9000000, 0x200405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E03, 0xFF0FF3FF}},
    {{0xEF182CC0, 0xC8112078}},
    {{0xD9000000, 0x230405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF002C30, 0x504361}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000000, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFCF238}},
    {{0xEF102C30, 0xC184241}},
    {{0xD9000000, 0x200004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF082C00, 0x504341}},
    {{0xD9000000, 0x200004}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFCF279}},
    {{0xEF082C00, 0xF0A3231}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF082C00, 0xF0A3231}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFCF279}},
    {{0xEF082C00, 0x553271}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC119623, 0xFF2FFFFF}},
    {{0xEF082C00, 0x553271}},
    {{0xD9000000, 0x200005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFCFFFFFF, 0xFFFCF279}},
    {{0xEF082C00, 0xF0A3231}},
    {{0xD9000000, 0x210005}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E03, 0xFF0FF3FF}},
    {{0xEF182C40, 0xC81049D8}},
    {{0xD9000000, 0x230405}},
    {{0xDF000000, 0}},
    {{0xE7000000, 0}},
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xFC127E03, 0xFF0FF3FF}},
    {{0xEF182C40, 0xC8104B50}},
    {{0xD9000000, 0x230005}},
    {{0xDF000000, 0}},
};



Gfx *Gfx_SetFog(Gfx *gfx, s32 r, s32 g, s32 b, s32 a, s32 n, s32 f) {
    s32 temp_v1;

    gfx->words.w0 = 0xF8000000;
    gfx->words.w1 = (r << 0x18) | ((g & 0xFF) << 0x10) | ((b & 0xFF) << 8) | (a & 0xFF);
    if (n >= 0x3E5) {
        if (n >= 0x3E8) {
            gfx->unk8 = 0xDB080000;
            gfx->unkC = 0;
        } else {
            gfx->unkC = 0x7FFF8100;
            gfx->unk8 = 0xDB080000;
        }
    } else if (n < 0) {
        gfx->unkC = 0xFF;
        gfx->unk8 = 0xDB080000;
    } else {
        gfx->unk8 = 0xDB080000;
        temp_v1 = f - n;
        gfx->unkC = (s32) ((((0x1F400 / temp_v1) & 0xFFFF) << 0x10) | (((s32) ((n * -0x100) + 0x1F400) / temp_v1) & 0xFFFF));
    }
    return gfx + 0x10;
}

Gfx *Gfx_SetFogWithSync(Gfx *gfx, s32 r, s32 g, s32 b, s32 a, s32 n, s32 f) {
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    s32 temp_a1;
    Gfx *phi_a0;

    gfx->words.w0 = 0xE7000000;
    gfx->words.w1 = 0;
    temp_a0 = gfx + 8;
    temp_a0->words.w0 = 0xF8000000;
    temp_a0->words.w1 = (r << 0x18) | ((g & 0xFF) << 0x10) | ((b & 0xFF) << 8) | (a & 0xFF);
    temp_a0_2 = temp_a0 + 8;
    if (n >= 0x3E8) {
        temp_a0_2->words.w0 = 0xDB080000;
        temp_a0_2->words.w1 = 0;
        phi_a0 = temp_a0_2 + 8;
    } else if (n >= 0x3E5) {
        temp_a0_2->words.w0 = 0xDB080000;
        temp_a0_2->words.w1 = 0x7FFF8100;
        phi_a0 = temp_a0_2 + 8;
    } else if (n < 0) {
        temp_a0_2->words.w1 = 0xFF;
        temp_a0_2->words.w0 = 0xDB080000;
        phi_a0 = temp_a0_2 + 8;
    } else {
        temp_a0_2->words.w0 = 0xDB080000;
        temp_a1 = f - n;
        temp_a0_2->words.w1 = (((0x1F400 / temp_a1) & 0xFFFF) << 0x10) | (((s32) ((n * -0x100) + 0x1F400) / temp_a1) & 0xFFFF);
        phi_a0 = temp_a0_2 + 8;
    }
    return phi_a0;
}

Gfx *Gfx_SetFog2(Gfx *gfx, s32 r, s32 g, s32 b, s32 a, s32 n, s32 f) {
    return Gfx_SetFog(gfx, r, g, b, a, n, f);
}

Gfx *Gfx_CallSetupDLImpl(Gfx *gfx, u32 i) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) &sSetupDL[i * 6];
    return gfx + 8;
}

Gfx *Gfx_CallSetupDL(Gfx *gfx, u32 i) {
    return Gfx_CallSetupDLImpl(gfx, i);
}

void Gfx_CallSetupDLAtPtr(Gfx **gfxp, u32 i) {
    *gfxp = Gfx_CallSetupDL(*gfxp, i);
}

Gfx *func_8012BFC4(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xAB0);
    return gfx + 8;
}

Gfx *func_8012BFEC(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xAB0);
    return gfx + 8;
}

Gfx *func_8012C014(Gfx *gfx) {
    Gfx *temp_a0;

    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0x9C0);
    temp_a0 = gfx + 8;
    temp_a0->words.w1 = 0xC0;
    temp_a0->words.w0 = 0xE3001801;
    return temp_a0 + 8;
}

void func_8012C058(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0xAE0);
}

void func_8012C080(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0xAB0);
}

void func_8012C0A8(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x960);
}

void func_8012C0D0(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x990);
}

void func_8012C0F8(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x9C0);
}

void func_8012C120(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x9F0);
}

void func_8012C148(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0xA20);
}

void func_8012C170(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0xA50);
}

Gfx *func_8012C198(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0x4E0);
    return gfx + 8;
}

void func_8012C1C0(GraphicsContext *gfxCtx) {
    gfxCtx->polyOpa.p = func_8012C198(gfxCtx->polyOpa.p);
}

Gfx *func_8012C1EC(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0x450);
    return gfx + 8;
}

void func_8012C214(GraphicsContext *gfxCtx) {
    gfxCtx->polyOpa.p = func_8012C1EC(gfxCtx->polyOpa.p);
}

void func_8012C240(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x4B0);
}

void func_8012C268(GlobalContext *globalCtx) {
    func_8012C28C(globalCtx->state.gfxCtx);
}

void func_8012C28C(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x4B0);
}

Gfx *func_8012C2B4(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xD50);
    return gfx + 8;
}

void func_8012C2DC(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x4B0);
}

Gfx *func_8012C304(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xD80);
    return gfx + 8;
}

void func_8012C32C(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x5D0);
}

void func_8012C354(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x600);
}

void func_8012C37C(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x630);
}

Gfx *func_8012C3A4(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xC00);
    return gfx + 8;
}

Gfx *func_8012C3CC(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0x660);
    return gfx + 8;
}

void func_8012C3F4(GraphicsContext *gfxCtx) {
    gfxCtx->polyOpa.p = func_8012C3CC(gfxCtx->polyOpa.p);
}

void func_8012C420(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x690);
}

void func_8012C448(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x840);
}

void func_8012C470(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x6C0);
}

Gfx *func_8012C498(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0x540);
    return gfx + 8;
}

void func_8012C4C0(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x540);
}

void func_8012C4E8(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x810);
}

void func_8012C510(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x870);
}

void func_8012C538(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->overlay.p;
    gfxCtx->overlay.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x8A0);
}

void func_8012C560(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x720);
}

void func_8012C588(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0xC0);
}

void func_8012C5B0(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x6F0);
}

void func_8012C5D8(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x60);
}

Gfx *func_8012C600(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0x750);
    return gfx + 8;
}

void func_8012C628(GraphicsContext *gfxCtx) {
    gfxCtx->polyOpa.p = func_8012C600(gfxCtx->polyOpa.p);
}

void func_8012C654(GraphicsContext *gfxCtx) {
    gfxCtx->overlay.p = func_8012C600(gfxCtx->overlay.p);
}

void func_8012C680(Gfx **gfxp) {
    Gfx *temp_v0;

    temp_v0 = *gfxp;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0->words.w1 = (u32) (sSetupDL + 0x750);
    *gfxp = temp_v0 + 8;
}

void func_8012C6AC(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x780);
}

void func_8012C6D4(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x7B0);
}

void func_8012C6FC(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x8D0);
}

Gfx *func_8012C724(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xC60);
    return gfx + 8;
}

Gfx *func_8012C74C(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xC90);
    return gfx + 8;
}

Gfx *func_8012C774(Gfx *gfx) {
    Gfx *temp_a0;

    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xCC0);
    temp_a0 = gfx + 8;
    temp_a0->words.w1 = 0xC0;
    temp_a0->words.w0 = 0xE3001801;
    return temp_a0 + 8;
}

Gfx *func_8012C7B8(Gfx *gfx) {
    Gfx *temp_a0;

    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xCF0);
    temp_a0 = gfx + 8;
    temp_a0->words.w1 = 0xC0;
    temp_a0->words.w0 = 0xE3001801;
    return temp_a0 + 8;
}

Gfx *func_8012C7FC(Gfx *gfx) {
    Gfx *temp_a0;

    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xC30);
    temp_a0 = gfx + 8;
    temp_a0->words.w1 = 0xC0;
    temp_a0->words.w0 = 0xE3001801;
    return temp_a0 + 8;
}

Gfx *func_8012C840(Gfx *gfx) {
    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0xD20);
    return gfx + 8;
}

Gfx *func_8012C868(Gfx *gfx) {
    Gfx *temp_a0;

    gfx->words.w0 = 0xDE000000;
    gfx->words.w1 = (u32) (sSetupDL + 0x3C0);
    temp_a0 = gfx + 8;
    temp_a0->words.w1 = 0xC0;
    temp_a0->words.w0 = 0xE3001801;
    return temp_a0 + 8;
}

void func_8012C8AC(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x7E0);
}

void func_8012C8D4(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->overlay.p;
    gfxCtx->overlay.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x7E0);
}

void func_8012C8FC(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x900);
}

void func_8012C924(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x930);
}

void func_8012C94C(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x510);
}

void func_8012C974(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0xB40);
    temp_v1_2 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0xC0;
    temp_v1_2->words.w0 = 0xE3001801;
}

void func_8012C9BC(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0xB70);
}

void func_8012C9E4(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0xA80);
}

void func_8012CA0C(Gfx **gfxp) {
    Gfx *temp_v0;

    temp_v0 = *gfxp;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0->words.w1 = (u32) (sSetupDL + 0xA80);
    *gfxp = temp_v0 + 8;
}

void func_8012CA38(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0xB10);
}

Gfx *Gfx_BranchTexScroll(Gfx **gfxp, u32 x, u32 y, s32 width, s32 height) {
    void *temp_v0;
    void *temp_v1;

    temp_v0 = Graph_DlistAlloc(gfxp, 0x18U);
    temp_v1 = temp_v0;
    temp_v0->unk0 = 0xE8000000;
    temp_v0->unk4 = 0;
    temp_v0->unk8 = (s32) (((x & 0xFFF) << 0xC) | 0xF2000000 | (y & 0xFFF));
    temp_v0->unkC = (s32) ((((((width - 1) * 4) + x) & 0xFFF) << 0xC) | ((y + ((height - 1) * 4)) & 0xFFF));
    temp_v0->unk10 = 0xDF000000;
    temp_v0->unk14 = 0;
    return (Gfx *) temp_v1;
}

void func_8012CB04(Gfx **gfxp, u32 x, u32 y) {
    Gfx_BranchTexScroll(gfxp, x, y, 0, 0);
}

Gfx *func_8012CB28(GraphicsContext *gfxCtx, u32 x, u32 y) {
    return Gfx_TexScroll(gfxCtx, x, y, 0, 0);
}

Gfx *Gfx_TexScroll(GraphicsContext *gfxCtx, u32 x, u32 y, s32 width, s32 height) {
    Gfx *temp_v1;
    s32 temp_a1;
    s32 temp_a2;

    temp_a1 = x & 0x7FF;
    temp_a2 = y & 0x7FF;
    temp_v1 = gfxCtx->polyOpa.d - 0x20;
    gfxCtx->polyOpa.d = temp_v1;
    temp_v1->words.w0 = 0xE8000000;
    temp_v1->words.w1 = 0;
    temp_v1->unk8 = (s32) (((temp_a1 & 0xFFF) << 0xC) | 0xF2000000 | (temp_a2 & 0xFFF));
    temp_v1->unkC = (s32) ((((((width - 1) * 4) + temp_a1) & 0xFFF) << 0xC) | ((temp_a2 + ((height - 1) * 4)) & 0xFFF));
    temp_v1->unk10 = 0xDF000000;
    temp_v1->unk14 = 0;
    return temp_v1;
}

Gfx *Gfx_TwoTexScroll(GraphicsContext *gfxCtx, s32 tile1, u32 x1, u32 y1, s32 width1, s32 height1, s32 tile2, u32 x2, u32 y2, s32 width2, s32 height2) {
    Gfx *temp_v1;
    s32 temp_a2;
    s32 temp_a3;

    temp_a2 = x1 & 0x7FF;
    temp_a3 = y1 & 0x7FF;
    temp_v1 = gfxCtx->polyOpa.d - 0x30;
    gfxCtx->polyOpa.d = temp_v1;
    x2 &= 0x7FF;
    y2 &= 0x7FF;
    temp_v1->words.w0 = 0xE8000000;
    temp_v1->words.w1 = 0;
    temp_v1->unk8 = (s32) (((temp_a2 & 0xFFF) << 0xC) | 0xF2000000 | (temp_a3 & 0xFFF));
    temp_v1->unkC = (s32) (((tile1 & 7) << 0x18) | (((temp_a2 + ((width1 - 1) * 4)) & 0xFFF) << 0xC) | ((temp_a3 + ((height1 - 1) * 4)) & 0xFFF));
    temp_v1->unk10 = 0xE8000000U;
    temp_v1->unk14 = 0;
    temp_v1->unk18 = (s32) (((x2 & 0xFFF) << 0xC) | 0xF2000000 | (y2 & 0xFFF));
    temp_v1->unk1C = (s32) (((tile2 & 7) << 0x18) | (((x2 + ((width2 - 1) * 4)) & 0xFFF) << 0xC) | ((y2 + ((height2 - 1) * 4)) & 0xFFF));
    temp_v1->unk20 = 0xDF000000;
    temp_v1->unk24 = 0;
    return temp_v1;
}

Gfx *Gfx_TwoTexScrollEnvColor(GraphicsContext *gfxCtx, s32 tile1, u32 x1, u32 y1, s32 width1, s32 height1, s32 tile2, u32 x2, u32 y2, s32 width2, s32 height2, s32 r, s32 g, s32 b, s32 a) {
    Gfx *temp_v1;
    s32 temp_a2;
    s32 temp_a3;

    temp_a2 = x1 & 0x7FF;
    temp_a3 = y1 & 0x7FF;
    temp_v1 = gfxCtx->polyOpa.d - 0x30;
    gfxCtx->polyOpa.d = temp_v1;
    x2 &= 0x7FF;
    y2 &= 0x7FF;
    temp_v1->words.w0 = 0xE8000000;
    temp_v1->words.w1 = 0;
    temp_v1->unk8 = (s32) (((temp_a2 & 0xFFF) << 0xC) | 0xF2000000 | (temp_a3 & 0xFFF));
    temp_v1->unkC = (s32) (((tile1 & 7) << 0x18) | (((temp_a2 + ((width1 - 1) * 4)) & 0xFFF) << 0xC) | ((temp_a3 + ((height1 - 1) * 4)) & 0xFFF));
    temp_v1->unk10 = 0xE8000000U;
    temp_v1->unk14 = 0;
    temp_v1->unk18 = (s32) (((x2 & 0xFFF) << 0xC) | 0xF2000000 | (y2 & 0xFFF));
    temp_v1->unk1C = (s32) (((tile2 & 7) << 0x18) | (((x2 + ((width2 - 1) * 4)) & 0xFFF) << 0xC) | ((y2 + ((height2 - 1) * 4)) & 0xFFF));
    temp_v1->unk20 = 0xFB000000;
    temp_v1->unk24 = (s32) ((r << 0x18) | ((g & 0xFF) << 0x10) | ((b & 0xFF) << 8) | (a & 0xFF));
    temp_v1->unk28 = 0xDF000000;
    temp_v1->unk2C = 0;
    return temp_v1;
}

Gfx *Gfx_EnvColor(GraphicsContext *gfxCtx, s32 r, s32 g, s32 b, s32 a) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.d - 0x10;
    gfxCtx->polyOpa.d = temp_v1;
    temp_v1->words.w0 = 0xFB000000;
    temp_v1->words.w1 = (r << 0x18) | ((g & 0xFF) << 0x10) | ((b & 0xFF) << 8) | (a & 0xFF);
    temp_v1->unk8 = 0xDF000000;
    temp_v1->unkC = 0;
    return temp_v1;
}

Gfx *Gfx_PrimColor(GraphicsContext *gfxCtx, s32 lodfrac, s32 r, s32 g, s32 b, s32 a) {
    Gfx *temp_v1;

    temp_v1 = gfxCtx->polyOpa.d - 0x10;
    gfxCtx->polyOpa.d = temp_v1;
    temp_v1->words.w0 = (lodfrac & 0xFF) | 0xFA000000;
    temp_v1->words.w1 = (r << 0x18) | ((g & 0xFF) << 0x10) | ((b & 0xFF) << 8) | (a & 0xFF);
    temp_v1->unk8 = 0xDF000000;
    temp_v1->unkC = 0;
    return temp_v1;
}

void func_8012CF0C(GraphicsContext *gfxCtx, s32 iParm2, s32 iParm3, u8 r, u8 g, u8 b) {
    Gfx *temp_a1_2;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v1;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    s32 temp_a1;
    s32 temp_v1_2;
    void *temp_t4;
    s32 phi_v1;
    Gfx *phi_a1;

    gSegments->unk0 = 0;
    temp_v1 = graphDlEntry;
    gSegments->unk3C = (void *) gfxCtx->framebuffer;
    gSegments->unk38 = temp_v1;
    temp_t4 = gfxCtx->zbuffer;
    temp_v0 = temp_v1 + 0xB0;
    temp_v0->words.w1 = (u32) &D_0E000140;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0->unkC = sFillSetupDL;
    temp_v0->unk8 = 0xDE000000U;
    temp_v0->unk10 = (s32) (((D_801FBBCC - 1) & 0xFFF) | 0xFF100000);
    temp_v0->unk14 = &D_0F000000;
    if (temp_t4 != 0) {
        temp_v0->unk18 = 0xFE000000;
        temp_v0->unk1C = temp_t4;
    } else {
        temp_v0->unk18 = 0xFE000000;
        temp_v0->unk1C = &D_0F000000;
    }
    temp_v0->unk20 = 0xDF000000U;
    temp_v0->unk24 = 0;
    temp_v0_2 = graphDlEntry + 0x1C8;
    temp_v0_2->words.w0 = 0xED000000;
    temp_v0_2->words.w1 = (((s32) ((f32) D_801FBBCC * 4.0f) & 0xFFF) << 0xC) | ((s32) ((f32) D_801FBBCE * 4.0f) & 0xFFF);
    temp_v0_2->unk8 = 0xDF000000U;
    temp_v0_2->unkC = 0;
    temp_v0_3 = graphDlEntry + 0x48;
    if (temp_t4 == 0) {
        temp_v0_3->words.w0 = 0xDF000000;
        temp_v0_3->words.w1 = 0;
    } else {
        temp_v0_3->words.w1 = (u32) temp_t4;
        temp_v0_3->words.w0 = ((D_801FBBCC - 1) & 0xFFF) | 0xFF100000;
        temp_v0_3->unk8 = 0xE7000000;
        temp_v0_3->unkC = 0;
        temp_v0_3->unk14 = 0x300000;
        temp_v0_3->unk10 = 0xE3000A01;
        temp_v0_3->unk18 = 0xE200001C;
        temp_v0_3->unk1C = 0;
        temp_v0_3->unk20 = 0xF7000000;
        temp_v0_3->unk24 = 0xFFFCFFFC;
        temp_v0_3->unk2C = &D_0E0002C8;
        temp_v0_3->unk28 = 0xDE000000U;
        temp_v0_3->unk34 = &D_0F000000;
        temp_v0_3->unk30 = (s32) (((D_801FBBCC - 1) & 0xFFF) | 0xFF100000);
        temp_v0_3->unk38 = 0xDF000000U;
        temp_v0_3->unk3C = 0;
    }
    temp_v0_4 = graphDlEntry + 0x88;
    temp_v0_4->words.w1 = (u32) &D_0F000000;
    temp_v0_4->words.w0 = ((D_801FBBCC - 1) & 0xFFF) | 0xFF100000;
    temp_v0_4->unkC = 0x300000;
    temp_v0_4->unk8 = 0xE3000A01;
    temp_v0_4->unk10 = 0xE200001C;
    temp_v0_4->unk14 = 0;
    temp_v0_4->unk18 = 0xF7000000;
    temp_a1 = ((r << 8) & 0xF800) | ((g * 8) & 0x7C0) | (((s32) b >> 2) & 0x3E) | 1;
    temp_v0_4->unk1C = (s32) ((temp_a1 << 0x10) | temp_a1);
    temp_v0_4->unk20 = 0xDE010000;
    temp_v0_4->unk24 = &D_0E0002C8;
    temp_v0_5 = graphDlEntry + 0x2C8;
    temp_v0_5->words.w0 = (((D_801FBBCC - 1) & 0x3FF) << 0xE) | 0xF6000000 | (((D_801FBBCE - 1) & 0x3FF) * 4);
    temp_v0_5->words.w1 = 0;
    temp_v0_5->unk8 = 0xE7000000;
    temp_v0_5->unkC = 0;
    temp_v0_5->unk10 = 0xDF000000U;
    temp_v0_5->unk14 = 0;
    temp_v0_6 = graphDlEntry + 0x2E0;
    temp_v0_6->words.w0 = ((D_801FBBCC & 0x3FF) << 0xE) | 0xF6000000 | ((D_801FBBCE & 0x3FF) * 4);
    temp_v0_6->words.w1 = 0;
    temp_v0_6->unk8 = 0xE7000000;
    temp_v0_6->unkC = 0;
    temp_v0_6->unk10 = 0xDF000000U;
    temp_v0_6->unk14 = 0;
    phi_v1 = 0;
    phi_a1 = graphDlEntry + 0x140;
    do {
        if (phi_v1 == 0xE) {
            phi_a1->words.w0 = 0xE0000000;
            phi_a1->words.w1 = 0;
        } else {
            phi_a1->words.w0 = ((phi_v1 * 4) & 0xFFFF) | 0xDB060000;
            phi_a1->words.w1 = gSegments[phi_v1];
        }
        if (phi_v1 == 0xD) {
            phi_a1->unk8 = 0xE0000000U;
            phi_a1->unkC = 0;
        } else {
            phi_a1->unk8 = (u32) ((((phi_v1 * 4) + 4) & 0xFFFF) | 0xDB060000);
            phi_a1->unkC = (s32) gSegments[phi_v1].unk4;
        }
        temp_v1_2 = phi_v1 + 2;
        temp_a1_2 = phi_a1 + 0x10;
        phi_v1 = temp_v1_2;
        phi_a1 = temp_a1_2;
    } while (temp_v1_2 != 0x10);
    temp_a1_2->words.w0 = 0xDF000000;
    temp_a1_2->words.w1 = 0;
    temp_v1_3 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1_3 + 8;
    temp_v1_3->words.w0 = 0xDE000000;
    temp_v1_3->words.w1 = (u32) (graphDlEntry + 0xB0);
    temp_v1_4 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1_4 + 8;
    temp_v1_4->words.w0 = 0xDE000000;
    temp_v1_4->words.w1 = (u32) (graphDlEntry + 0xB0);
    temp_v1_5 = gfxCtx->overlay.p;
    gfxCtx->overlay.p = temp_v1_5 + 8;
    temp_v1_5->words.w0 = 0xDE000000;
    temp_v1_5->words.w1 = (u32) (graphDlEntry + 0xB0);
    temp_v1_6 = gfxCtx->unk1B8.p;
    gfxCtx->unk1B8.p = temp_v1_6 + 8;
    temp_v1_6->words.w0 = 0xDE000000;
    temp_v1_6->words.w1 = (u32) (graphDlEntry + 0xB0);
    if (iParm3 != 0) {
        temp_v1_7 = gfxCtx->polyOpa.p;
        gfxCtx->polyOpa.p = temp_v1_7 + 8;
        temp_v1_7->words.w1 = (u32) &D_0E000048;
        temp_v1_7->words.w0 = 0xDE000000;
    }
    if (iParm2 != 0) {
        temp_v1_8 = gfxCtx->polyOpa.p;
        gfxCtx->polyOpa.p = temp_v1_8 + 8;
        temp_v1_8->words.w1 = (u32) &D_0E000088;
        temp_v1_8->words.w0 = 0xDE000000;
    }
}

void func_8012D374(GraphicsContext *gfxCtx, u8 r, u8 g, u8 b) {
    if (((s32) gGameInfo->data[190] < 2) && (D_801F6D10 < 2)) {
        func_8012CF0C(gfxCtx, 1, 1, r, (u8) (s32) g, (u8) (s32) b);
        return;
    }
    func_8012CF0C(gfxCtx, 0, 0, r, (u8) (s32) g, (u8) (s32) b);
}

void func_8012D40C(f32 *param_1, f32 *param_2, s16 *param_3) {
    param_1->unk0 = (f32) param_3->unk0 * 0.25f;
    param_1->unk4 = (f32) ((f32) param_3->unk2 * 0.25f);
    param_1->unk8 = (f32) ((f32) param_3->unk8 * 0.25f);
    param_1->unkC = (f32) ((f32) param_3->unkA * 0.25f);
    param_2->unk0 = param_1->unk0 / (f32) ((s32) gScreenWidth / 2);
    param_2->unk8 = (f32) (param_1->unk8 - param_1->unk0);
    param_2->unk4 = (f32) (param_1->unk4 / (f32) ((s32) gScreenHeight / 2));
    param_2->unkC = (f32) (param_1->unkC - param_1->unk4);
}

