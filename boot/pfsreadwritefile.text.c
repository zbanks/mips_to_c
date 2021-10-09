s32 __osCheckId(OSPfs *);                           /* extern */
s32 __osPfsGetStatus(OSMesgQueue *, s32);           /* extern */
s32 __osPfsRWInode(s32, ?, u8);                     /* extern */
s32 __osPfsSelectBank(OSPfs *, u8);                 /* extern */



s32 __osPfsGetNextPage(OSPfs *param_1, __OSInode *param_2, u8 param_3, u8 param_4) {
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_at;
    u8 temp_v0_2;
    u8 temp_v0_3;
    s32 phi_v0;

    temp_v0_2 = param_4->unk0;
    if ((temp_v0_2 != param_2->inodePage[0].inode_t.bank) && (param_2->inodePage[0].inode_t.bank = temp_v0_2, temp_v0 = __osPfsRWInode((s32) param_3, 0, param_2->inodePage[0].inode_t.bank), (temp_v0 != 0))) {
        return temp_v0;
    }
    temp_at = *((s32) param_3 + (param_4->unk1 * 2));
    param_4->unk0 = temp_at;
    temp_v1 = temp_at & 0xFFFF;
    if ((temp_v1 < param_1->inodeStartPage) || ((s32) param_4->unk0 >= (s32) param_1->banks) || (temp_v0_3 = param_4->unk1, ((s32) temp_v0_3 <= 0)) || (phi_v0 = 0, (((s32) temp_v0_3 < 0x80) == 0))) {
        if (temp_v1 == 1) {
            return 5;
        }
        phi_v0 = 3;
        // Duplicate return node #10. Try simplifying control flow for better match
        return phi_v0;
    }
    return phi_v0;
}

s32 osPfsReadWriteFile(OSPfs *pfs, s32 file_no, u8 flag, s32 offset, s32 size_in_bytes, u8 *data_buffer) {
    u8 sp154;
    u8 sp14C;
    ? sp4C;
    u16 sp48;
    s8 sp3B;
    s32 sp34;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    u16 temp_t3;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s0_3;
    u8 *phi_s1;
    s32 phi_v0;
    s32 phi_s3;

    temp_s0 = flag & 0xFF;
    if ((file_no >= pfs->dir_size) || (file_no < 0)) {
        return 5;
    }
    if ((size_in_bytes <= 0) || ((size_in_bytes & 0x1F) != 0)) {
        return 5;
    }
    if ((offset < 0) || ((offset & 0x1F) != 0)) {
        return 5;
    }
    if ((pfs->status & 1) == 0) {
        return 5;
    }
    if (__osCheckId(pfs) == 2) {
        return 2;
    }
    if ((pfs->activebank != 0) && (temp_v0_7 = __osPfsSelectBank(pfs, 0U), (temp_v0_7 != 0))) {
        return temp_v0_7;
    }
    temp_v0_6 = __osContRamRead(pfs->queue, pfs->channel, (pfs->dir_table + file_no) & 0xFFFF, &sp14C);
    if (temp_v0_6 != 0) {
        return temp_v0_6;
    }
    if ((sp150 == 0) || ((s32) sp14C == 0)) {
        return 5;
    }
    if (((s32) sp152 < pfs->inodeStartPage) || ((s32) (u8) sp152 >= (s32) pfs->banks) || ((s32) sp153 <= 0) || ((s32) sp153 >= 0x80)) {
        if (sp152 == 1) {
            return 5;
        }
        return 3;
    }
    sp34 = temp_s0;
    if ((temp_s0 == 0) && ((sp154 & 2) == 0)) {
        return 6;
    }
    sp3B = 0xFF;
    temp_v0_8 = offset / 0x20;
    sp48 = sp152;
    phi_s0 = temp_v0_8;
    phi_s0_2 = temp_v0_8;
    if (temp_v0_8 >= 8) {
loop_32:
        temp_v0_5 = __osPfsGetNextPage(pfs, (__OSInode *) &sp3B, (u8) &sp4C, (u8) &sp48);
        temp_s0_2 = phi_s0 - 8;
        phi_s0 = temp_s0_2;
        phi_s0_2 = temp_s0_2;
        if (temp_v0_5 != 0) {
            return temp_v0_5;
        }
        if (temp_s0_2 < 8) {
            goto block_35;
        }
        goto loop_32;
    }
block_35:
    temp_t8 = size_in_bytes / 0x20;
    phi_s1 = data_buffer;
    phi_s3 = temp_t8;
    if (temp_t8 > 0) {
loop_36:
        phi_s0_3 = phi_s0_2;
        if ((phi_s0_2 == 8) && (temp_v0_4 = __osPfsGetNextPage(pfs, (__OSInode *) &sp3B, (u8) &sp4C, (u8) &sp48), phi_s0_3 = 0, (temp_v0_4 != 0))) {
            return temp_v0_4;
        }
        if (((u8) sp48 != pfs->activebank) && (temp_v0_3 = __osPfsSelectBank(pfs, (u8) sp48), (temp_v0_3 != 0))) {
            return temp_v0_3;
        }
        temp_t3 = ((sp49 * 8) + phi_s0_3) & 0xFFFF;
        if (sp34 == 0) {
            phi_v0 = __osContRamRead(pfs->queue, pfs->channel, temp_t3, phi_s1);
        } else {
            phi_v0 = __osContRamWrite(pfs->queue, pfs->channel, temp_t3, phi_s1, 0);
        }
        phi_s1 += 0x20;
        if (phi_v0 != 0) {
            return phi_v0;
        }
        temp_s3 = phi_s3 - 1;
        phi_s0_2 = phi_s0_3 + 1;
        phi_s3 = temp_s3;
        if (temp_s3 == 0) {
            goto block_48;
        }
        goto loop_36;
    }
block_48:
    if ((sp34 == 1) && ((sp154 & 2) == 0)) {
        sp154 |= 2;
        if ((pfs->activebank != 0) && (temp_v0_2 = __osPfsSelectBank(pfs, 0U), (temp_v0_2 != 0))) {
            return temp_v0_2;
        }
        temp_v0 = __osContRamWrite(pfs->queue, pfs->channel, (pfs->dir_table + file_no) & 0xFFFF, &sp14C, 0);
        if (temp_v0 != 0) {
            return temp_v0;
        }
        goto block_55;
    }
block_55:
    return __osPfsGetStatus(pfs->queue, pfs->channel);
}

