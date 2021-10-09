extern u32 D_A4040010;



void __osSpSetStatus(u32 value) {
    D_A4040010 = value;
}

