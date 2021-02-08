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

int emptyList(List* list) {
    return (list->size == 0);
}

int sizeList(List* list) {
    return list->size;
}

int pushStartList(List* list, int value) {
    if (list == NULL) {
        return 0;
    }
    Node* newNode = (Node*) malloc (sizeof(Node));
    if (newNode == NULL) {
        return 0;
    }
    newNode->value = value;
    newNode->next = NULL;
    newNode->previous = NULL;
    if (emptyList(list)) {
        list->start = newNode;
        list->end = newNode;
    } else {
        newNode->next = list->start;
        list->start->previous = newNode;
        list->start = newNode;
    }
    list->size++;
    return 1;
}

int pushEndList(List* list, int value) {
    if (list == NULL) {
        return 0;
    }
    Node* newNode = (Node*) malloc (sizeof(Node));
    if (newNode == NULL) {
        return 0;
    }
    newNode->value = value;
    newNode->next = NULL;
    newNode->previous = NULL;
    if (emptyList(list)) {
        list->start = newNode;
        list->end = newNode;
    } else {
        newNode->previous = list->start;
        list->end->next = newNode;
        list->end = newNode;
    }
    list->size++;
    return 1;
}

int pushSortList(List* list, int value, int index) {
    if (list == NULL) {
        return 0;
    }
    index--;
    if ((index < 0) || (index > sizeList(list))) {
        return 0;
    }
    if (index == 0) {
        pushStartList(list, value);
        return 1;
    }
    if (index == sizeList(list)) {
        pushEndList(list, value);
        return 1;
    }
    Node* newNode = (Node*) malloc (sizeof(Node));
    if (newNode == NULL) {
        return 0;
    }
    newNode->value = value;
    newNode->next = NULL;
    newNode->previous = NULL;
    Node* current = list->start;
    int i = 1;
    for (i = 1; i < index; i++) {
        current = current->next;
    }
    newNode->next = current->next;
    newNode->previous = current;
    current->next->previous = newNode;
    current->next = newNode;
    list->size++;
    return 1;
}

int popStartList(List* list) {
    if (list == NULL) {
        return 0;
    }
    if (emptyList(list)) {
        return 0;
    }
    Node* auxiliary = NULL;
    if (sizeList(list) == 1) {
        auxiliary = list->start;
        list->start = NULL;
        list->end = NULL;
        free(auxiliary);
    } else {
        auxiliary = list->start;
        list->start = auxiliary->next;
        auxiliary->next->previous = NULL;
        free(auxiliary);
    }
    list->size--;
    return 1;
}

int popEndList(List* list) {
    if (list == NULL) {
        return 0;
    }
    if (emptyList(list)) {
        return 0;
    }
    Node* auxiliary = NULL;
    if (sizeList(list) == 1) {
        auxiliary = list->start;
        list->start = NULL;
        list->end = NULL;
        free(auxiliary);
    } else {
        auxiliary = list->start;
        while (auxiliary->next != NULL) {
            auxiliary = auxiliary->next;
        }
        list->end = auxiliary->previous;
        auxiliary->previous->next = NULL;
        free(auxiliary);
    }
    list->size--;
    return 1;
}
int popSortList(List* list, int value) {
    if (list == NULL) {
        return 0;
    }
    if (emptyList(list)) {
        return 0;
    }
    if (value == peekFirstElementList(list)) {
        popStartList(list);
        return 1;
    }
    if (value == peekLastElementList(list)) {
        popEndList(list);
        return 1;
    }
    Node* auxiliary = list->start;
    Node* current = list->start->next;
    while (current != NULL) {
        if (auxiliary->value == value) {
            break;
        }
        auxiliary = current;
        current = current->next;
    }
    if (current != NULL) {
        auxiliary->next = current->next;
        free(current);
        auxiliary->next->previous = auxiliary; 
        if ((auxiliary->next == NULL) || (auxiliary->next == list->start)) {
            list->end = auxiliary;
        }
    }
    list->size--;
    return 1;
}

int cleanList(List* list) {
    if (list == NULL) {
        return 0;
    }
    if (emptyList(list)) {
        printList(list);
        return 0;
    }
    if (!emptyList(list)) {
        while (!emptyList(list)) {
            popStartList(list);
        }
    }
    return 1;
}

int peekBiggerElementList(List* list) {
    if (list == NULL) {
        return 0;
    }
    int bigger = list->start->value;
    Node* auxiliary = list->start;
    do {
        if (bigger < auxiliary->value) {
            bigger = auxiliary->value;
        }
        auxiliary = auxiliary->next;
    } while ((auxiliary != NULL) && (auxiliary != list->start));
    return bigger;
}

int peekFirstElementList(List* list) {
    if (list == NULL) {
        return 0;
    }
    return list->start->value;
}
int peekLastElementList(List* list) {
    if (list == NULL) {
        return 0;
    }
    return list->end->value;
}

int peekAmountBiggerElementList(List* list, int value) {
    if (list == NULL) {
        return 0;
    }
    int amount = 0;
    Node* auxiliary = list->start;
    do {
        if (auxiliary->value > value) {
            amount++;
        }
        auxiliary = auxiliary->next;
    } while ((auxiliary != NULL) && (auxiliary != list->start));
    return amount;
}

int printList(List* list) {
    if (list == NULL) {
        return 0;
    }
    if (emptyList(list)) {
        printf("Empty list!\n");
        return 1;
    }
    Node* auxiliary = list->start;
    do {
        printf("%d ", auxiliary->value);
        auxiliary = auxiliary->next;
    } while ((auxiliary != NULL) && (auxiliary != list->start));
    return 1;
}

int destroyList(List* list) {
    if (list == NULL) {
        return 0;
    }
    if (emptyList(list)) {
        free(list);  
    } else {
        cleanList(list);
    }
    return 1;
}