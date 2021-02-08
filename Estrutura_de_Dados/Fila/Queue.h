#ifndef __QUEUE__H
#define __QUEUE__H

typedef struct queue Queue;

Queue* createQueue();
int push(Queue* queue, int value);
int pop(Queue* queue);
int emptyQueue(Queue* queue);
int cleanQueue(Queue* queue);
int sizeQueue(Queue* queue);
int printQueue(Queue* queue);
int destroyQueue(Queue* queue);

#endif