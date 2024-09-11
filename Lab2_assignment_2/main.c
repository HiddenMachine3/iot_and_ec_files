#include <stdio.h>
#include <stdlib.h>
#include "datatypes.h"
#include "my_globals.h"
#include "init_functions.c"

Msg_A *msgA_array[5];
Msg_B *msgB_array[5];
void *msg_array[10];

int main(void) {
    for (int i = 0; i < 5; i++) {
        msgA_array[i] = (Msg_A *)malloc(sizeof(Msg_A));
        msgB_array[i] = (Msg_B *)malloc(sizeof(Msg_B));
    }

    for (int i = 0; i < 5; i++) {
        init_msgA(msgA_array[i]);
        init_msgB(msgB_array[i]);
    }

    for (int i = 0; i < 5; i++) {
        msg_array[i] = (void *)msgA_array[i];
        msg_array[i + 5] = (void *)msgB_array[i];
    }

    for (int i = 0; i < 10; i++) {
        print_msg(msg_array[i]);
    }

    for (int i = 0; i < 5; i++) {
        free(msgA_array[i]);
        free(msgB_array[i]);
    }

    return 0;
}
