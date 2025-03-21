#include "queue.h"

address CreateStack (infotype *nilai){
    address P;
    Create_Node (&P);
    info(P) = *nilai;
    next(P) = nil;
    return P;
}

void enqueue (Queue *Q, infotype *nilai){
    address P = CreateStack(nilai);
    if (isEmpty(Q->head)) {
        Q->head = P;
        Q->tail = P;
    } else {
        Ins_Akhir(&(Q->head), P);
        Q->tail = P;
    }
    (*nilai)++;
}

void dequeue (Queue *Q, infotype *nilai){
    if (!isEmpty(Q->head)) {
        Del_Awal(&(Q->head), nilai);
        if (Q->head == nil) {
            Q->tail = nil;
        }
    }
}

void dequeueandprint (Queue *Q){
    infotype nilai;
    if (!isEmpty(Q->head)) {
        dequeue(Q, &nilai);
        printf("nilai yang dihapus adalah %d", nilai);
    } else {
        printf("Queue kosong");
    }
    printf("\n");
}

void createinit(Queue *Q1, Queue *Q2){
    Q1->head = nil;
    Q1->tail = nil;
    Q2->head = nil;
    Q2->tail = nil;
}

void Exit (Queue *Q1, Queue *Q2){
    DeAlokasi(&(Q1->head));
    Q1->tail = nil;
    DeAlokasi(&(Q2->head));
    Q2->tail = nil;
}