#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

typedef struct node {
    int value;
    struct node* next;
} Node;

struct queue {
    int size;
    Node* start;
    Node* end;
};

Queue* createQueue() {
    Queue* queue = (Queue*) malloc (sizeof(Queue));
    if (queue == NULL) {
        return NULL;
    }
    queue->size = 0;
    queue->start = NULL;
    queue->end = NULL;
    return queue;
}

int push(Queue* queue, int value) {
    if ( queue == NULL) {
        printf("Queue not defined.\n");
        return 0;
    }
    Node* newNode = (Node*) malloc (sizeof(Node));
    if (newNode == NULL) {
        printf("Queue not defined.\n");
        return 0;
    }
    newNode->value = value;
    newNode->next = NULL;
    if (queue->end = NULL) {
        queue->start = newNode;
    } else {
        queue->end->next = newNode;
    }
    queue->end = newNode;
    queue->size++;
    return 1;
}

int pop(Queue* queue) {
    if (queue == NULL) {
        printf("Queue not defined.\n");
        return 0;
    }
    if (queue->start = NULL) {
        return 0;
    }
    Node* newNode = queue->start;
    queue->start = queue->start->next;
    if (queue->start == NULL) {
        queue->end = NULL;
    }
    free(newNode);
    queue->size--;
    return 1;
}

int emptyQueue(Queue* queue) {
    return (queue->size == 0);
}

int cleanQueue(Queue* queue) {
    if (queue == NULL) {
        printf("Queue not defined.\n");
        return 0;
    }
    while (!emptyQueue(queue)) {
        pop(queue);
    }
    return 1;
}
int sizeQueue(Queue* queue) {
    return queue->size;
}
int printQueue(Queue* queue) {
    if (queue == NULL) {
        printf("Queue not defined.\n");
        return 0;
    }
    Node* auxiliary = queue->start;
    while (auxiliary != NULL) {
        if (auxiliary == queue->start) {
            printf("%d", auxiliary->value);
        } else {
            printf(", %d", auxiliary->value);
        }
        auxiliary = auxiliary->next;
    }
    printf("\n");
    return 1;
}

int destroyQueue(Queue* queue) {
    if (queue == NULL) {
        printf("Queue not defined.\n");
        return 0;
    }
    if (emptyQueue(queue)) {
        free(queue);
    } else {
        cleanQueue(queue);
        free(queue);
    }
    return 1;
}