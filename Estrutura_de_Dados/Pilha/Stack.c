#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

typedef struct node {
    int value;
    struct node* next;
} Node;

struct stack {
    int size;
    Node* first;
    Node* last;
};

Stack* createStack() {
    Stack* stack = (Stack*) malloc (sizeof(Stack));
    if (stack == NULL) {
        return NULL;
    }
    stack->size = 0;
    stack->first = NULL;
    stack->last = NULL;
    return stack;
}

int push(Stack* stack, int value) {
    if (stack == NULL) {
        printf("Error: Stack not defined");
        return 0;
    }
    Node* newNode = (Node*) malloc (sizeof(Node));
    newNode->value = value;
    if (newNode == NULL) {
        printf("Error: Stack not defined");
        return 0;
    }
    if (emptyStack(stack)) {
        stack->last = newNode;
        stack->first = newNode;
    } else {
        newNode->next = stack->first;
        stack->first = newNode;
    }
    stack->size++;
    return 1;
}

int pop(Stack* stack) {
    if (stack == NULL) {
        printf("Error: Stack not defined.");
        return 0;
    }
    Node* auxiliary = (Node*) malloc (sizeof(Node));
    if (auxiliary == NULL) {
        printf("Error: Stack not defined.");
        return 0;
    }
    int result = auxiliary->value;
    if (emptyStack(stack)) {
        stack->last = NULL;
    } else {
        stack->first = stack->first->next;
        free(auxiliary);
        stack->size--;
    }
    return result;
}

int peek(Stack* stack) {
    return stack->first->value;
}

int emptyStack(Stack* stack) {
    return (stack->size == 0);
}

int printStack(Stack* stack) {
    if (stack == NULL) {
        printf("Error: Stack not defined.");
        return 0;
    }
    Node* auxiliary = stack->first;
    while (auxiliary != NULL) {
        if (auxiliary == stack->first) {
            printf("%d", auxiliary->value);
        } else {
            printf(", %d", auxiliary->value);
        }
        auxiliary = auxiliary->next;
    } 
    printf("\n");
    return 1;
}

int destroyStack(Stack* stack) {
    if (stack == NULL) {
        printf("Error: Stack not defined.");
        return 0;
    }
    if (!emptyStack(stack)) {
        cleanStack(stack);
        free(stack);
    } else {
        free(stack);
    }
    return 1;
}

int cleanStack(Stack* stack) {
    if (stack == NULL) {
        printf("Error: Stack not defined.");
        return 0;
    }
    while (!emptyStack(stack)) {
        pop(stack);
    }
    return 1;
}

int sizeStack(Stack* stack) {
    return stack->size;
}

int lastElementStack(Stack* stack) {
    return stack->last->value;
}