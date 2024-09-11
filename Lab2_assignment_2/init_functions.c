// init_functions.c

#include <stdio.h>
#include <stdlib.h>
#include "datatypes.h"
#include "my_globals.h"

void init_msgA(Msg_A *pMsgA) {
    if (pMsgA != NULL) {
        pMsgA->msg_type = MSG_A;
        pMsgA->iValue = 100;
        pMsgA->fValue = 200.5f;
        pMsgA->dValue = 300.123;
    }
}

void init_msgB(Msg_B *pMsgB) {
    if (pMsgB != NULL) {
        pMsgB->msg_type = MSG_B;
        pMsgB->iValue1 = 101;
        pMsgB->iValue2 = 102;
        pMsgB->fValue1 = 201.5f;
        pMsgB->dValue1 = 301.123;
        pMsgB->fValue2 = 202.5f;
        pMsgB->dValue2 = 302.123;
    }
}

void print_msgA(Msg_A *pMsgA) {
    if (pMsgA != NULL) {
        printf("Msg_A: iValue = %u, fValue = %f, dValue = %lf\n", 
                pMsgA->iValue, pMsgA->fValue, pMsgA->dValue);
    }
}

void print_msgB(Msg_B *pMsgB) {
    if (pMsgB != NULL) {
        printf("Msg_B: iValue1 = %u, iValue2 = %u, fValue1 = %f, dValue1 = %lf, fValue2 = %f, dValue2 = %lf\n",
                pMsgB->iValue1, pMsgB->iValue2, pMsgB->fValue1, pMsgB->dValue1,
                pMsgB->fValue2, pMsgB->dValue2);
    }
}

void print_msg(void *pMsg) {
    Msg_A *pMsgA = (Msg_A *)pMsg;
    if (pMsgA->msg_type == MSG_A) {
        print_msgA(pMsgA);
    } else {
        Msg_B *pMsgB = (Msg_B *)pMsg;
        print_msgB(pMsgB);
    }
}
