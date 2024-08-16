#include <stdio.h>
#include <stdlib.h>
#include "datatypes.h"

void init_msgA(Msg_A *pMsgA) {
    if (pMsgA != NULL) {
        pMsgA->msg_type = MSG_A;
        pMsgA->iValue = 10;
        pMsgA->fValue = 20.5;
        pMsgA->dValue = 30.1234;
    }
}

void init_msgB(Msg_B *pMsgB) {
    if (pMsgB != NULL) {
        pMsgB->msg_type = MSG_B;
        pMsgB->iValue1 = 11;
        pMsgB->iValue2 = 12;
        pMsgB->fValue1 = 21.5;
        pMsgB->dValue1 = 31.2;
        pMsgB->fValue2 = 22.5;
        pMsgB->dValue2 = 32.1234;
    }
}

void print_msgA(Msg_A *pMsgA) {
    if (pMsgA == NULL) return;
    printf("Msg_A:\n");
    printf("  iValue: %u\n", pMsgA->iValue);
    printf("  fValue: %.2f\n", pMsgA->fValue);
    printf("  dValue: %.5f\n", pMsgA->dValue);
}

void print_msgB(Msg_B *pMsgB) {
    if (pMsgB == NULL) return;
    printf("Msg_B:\n");
    printf("  iValue1: %u\n", pMsgB->iValue1);
    printf("  iValue2: %u\n", pMsgB->iValue2);
    printf("  fValue1: %.2f\n", pMsgB->fValue1);
    printf("  dValue1: %.5f\n", pMsgB->dValue1);
    printf("  fValue2: %.2f\n", pMsgB->fValue2);
    printf("  dValue2: %.5f\n", pMsgB->dValue2);
}

void print_msg(void *pMsg) {
    if (pMsg == NULL) return;
    MSG_TYPE type = *((MSG_TYPE *)pMsg);
    if (type == MSG_A) {
        print_msgA((Msg_A *)pMsg);
    } else if (type == MSG_B) {
        print_msgB((Msg_B *)pMsg);
    }
}