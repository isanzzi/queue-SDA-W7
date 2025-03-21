#ifndef queue_H
#define queue_H

#include "convention.h"
#include "linked.h"

typedef struct {
    address head;
    address tail;
} Queue;

address CreateStack (infotype *nilai);

void enqueue (Queue *Q, infotype *nilai);

void dequeue (Queue *Q, infotype *nilai);

void dequeueandprint (Queue *Q);

void createinit(Queue *Q1, Queue *Q2);

void Exit(Queue *Q1, Queue *Q2);

#endif