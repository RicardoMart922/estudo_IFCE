#ifndef __QUEUE__H
#define __QUEUE__H

typedef struct queue Queue;
typedef struct ponto Ponto;

Queue* createQueue();
int pushQueue(Queue* queue, Ponto key);
int popQueue(Queue* queue);
Ponto frontQueue(Queue* queue);
int sizeQueue(Queue* queue);
int isEmpty(Queue* queue);
int printQueue(Queue* queue);
void destroyQueue(Queue* queue);

#endif