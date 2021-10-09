

void __osDequeueThread(OSThread **param_1, OSThread *param_2) {
    OSThread *temp_a3;
    OSThread *temp_a3_2;
    OSThread *phi_a3;
    OSThread **phi_a2;

    temp_a3 = *param_1;
    phi_a3 = temp_a3;
    phi_a2 = param_1;
    if (temp_a3 != 0) {
loop_1:
        if (phi_a3 == param_2) {
            *phi_a2 = param_2->next;
            return;
        }
        temp_a3_2 = phi_a3->next;
        phi_a3 = temp_a3_2;
        phi_a2 = &phi_a3->next;
        if (temp_a3_2 == 0) {
            // Duplicate return node #4. Try simplifying control flow for better match
            return;
        }
        goto loop_1;
    }
}

