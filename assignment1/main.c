#include <stdio.h>
#include <stdlib.h>
#include "datatypes.h"


int main() {
    Msg_A *msgA_array[5];
    Msg_B *msgB_array[5];
    void *msg_array[10];

    //allocate
    for (int i = 0; i < 5; i++) {
        msgA_array[i] = (Msg_A *)malloc(sizeof(Msg_A));
        init_msgA(msgA_array[i]);
        msg_array[i] = (void *)msgA_array[i];
    }

    for (int i = 0; i < 5; i++) {
        msgB_array[i] = (Msg_B *)malloc(sizeof(Msg_B));
        init_msgB(msgB_array[i]);
        msg_array[i + 5] = (void *)msgB_array[i];
    }

    for (int i = 0; i < 10; i++) {
        print_msg(msg_array[i]);
    }

    // deallocate memory
    for (int i = 0; i < 5; i++) {
        free(msgA_array[i]);
        free(msgB_array[i]);
    }

    return 0;
}