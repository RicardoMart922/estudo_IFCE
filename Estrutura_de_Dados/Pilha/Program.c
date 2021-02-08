#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"

int main() {
    Stack* stack = createStack();
    char option[4];
    int value = 0;

    while (1) {
        scanf("%s", option);
        if (!strcmp(option, "-s")) {
            if (!emptyStack(stack)) {
                printStack(stack);
            } else {
                printf("Empty stack.\n");
            }
            break;
        }

        if (!strcmp(option, "-c")) {
            if (!emptyStack(stack)) {
                cleanStack(stack);
            } else { 
                printf("Empty stack.\n");
            }
        }

        if (!strcmp(option, "-i")) {
            scanf("%d", &value);
            push(stack, value);
        }

        if (!strcmp(option, "-r")) {
            if (!emptyStack(stack)) {
                pop(stack);
            } else {
                printf("Empty stack.\n");
            }
        }

        if (!strcmp(option, "-t")) {
            if (!emptyStack(stack)) {
                printf("%d\n", peek(stack));
            } else {
                printf("Empty stack.\n");
            }
        }

        if (!strcmp(option, "-b")) {
            if (!emptyStack(stack)) {
                printf("%d\n", lastElementStack(stack));
            } else {
                printf("Empty stack.\n");
            }
        }

        if (strcmp(option, "-ss")) {
            if (!emptyStack(stack)) {
                printf("%d\n", sizeStack(stack));
            }
        }
    }
    destroyStack(stack);
    return 1;
}