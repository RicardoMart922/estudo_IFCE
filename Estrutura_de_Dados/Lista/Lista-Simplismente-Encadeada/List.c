#include <stdio.h>
#include <stdlib.h>
#include "List.h"

typedef struct node {
    struct node* next;
    int value;
} Node;

struct list {
    int size;
    Node* start;
    Node* end;
};

List* createList() {
    List* list = (List*) malloc (sizeof(List));
    if (list == NULL) {
        return NULL;
    }
    list->size = 0;
    list->start = NULL;
    list->end = NULL;
    return list;
}

int emptyList() {

}