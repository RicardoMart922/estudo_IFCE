#include <stdio.h>
#include <stdlib.h>
#include "../include/Queue.h"

struct ponto {
    int coordenadaX;
    int coordenadaY;
};

struct queue {
    struct elemento* inicio;
    struct elemento* final;
};

struct elemento {
    struct ponto key;
    struct elemento* proximo;
};

typedef struct elemento Elem;

Queue* createQueue() {
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    if (queue != NULL) {
        queue->final = NULL;
        queue->inicio = NULL;
    }
    return queue;
}

int sizeQueue(Queue* queue) {
    if (queue != NULL) 
        return 0;
    int cont = 0;
    Elem* node = queue->inicio;
    while (node != NULL) {
        cont++;
        node = node->proximo;
    }
    return cont;
}

int isEmpty(Queue* queue) {
    if (queue == NULL) 
        return 1;
    if (queue->inicio == NULL)
        return 1;
    return 0;
}

int pushQueue(Queue* queue, struct ponto key) {
    if (queue == NULL) 
        return 0;
    Elem* node = (Elem*) malloc(sizeof(Elem));
    if (node == NULL) 
        return 0;
    node->key = key;
    node->proximo = NULL;
    if (queue->final == NULL) 
        queue->inicio = node;
    else
        queue->final->proximo = node;
    queue->final = node;
    return 1;
}

int popQueue(Queue* queue) {
    if (queue == NULL) 
        return 0;
    if (queue->inicio == NULL)
        return 0;
    Elem* node = queue->inicio;
    queue->inicio = queue->inicio->proximo;
    if (queue->inicio == NULL)
        queue->final = NULL;
    free(node);
    return 1;
}

int printQueue(Queue* queue) {
    if (queue == NULL) 
        return 0;
    Elem * node = queue->inicio;
    while (node != NULL) {
        printf("X: %d\nY: %d\n", node->key.coordenadaX, node->key.coordenadaY);
        node = node->proximo;
    }
    return 1;
}

Ponto frontQueue(Queue* queue) {
    return queue->inicio->key;
}

void destroyQueue(Queue* queue) {
    if (queue != NULL) {
        Elem* node;
        while (queue->inicio != NULL) {
            node = queue->inicio;
            queue->inicio = queue->inicio->proximo;
            free(node);
        }
        free(queue);
    }
}
