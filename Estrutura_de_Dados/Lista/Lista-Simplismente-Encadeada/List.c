#include <stdio.h>
#include <stdlib.h>
#include "List.h"

typedef struct node {
    struct node* previous;
    struct node* next;
    int value;
} Node;

struct list {
    int size;
    Node* start;
    Node* end;
};