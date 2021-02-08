#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Queue.h"

int main() {

    Queue* queue = createQueue();
    char option[4];
    int value = 0;

    while (1) {
        scanf("%s", option);

        if (!strcmp(option, "-s")) {
            if (!emptyQueue(queue)) {
                printQueue(queue);
            } else {
                printf("Queue empty.\n");
            }
            break;
        }

        if (!strcmp(option, "-c")) {
            if (!emptyQueue(queue)) {
                cleanQueue(queue);
            } else {
                printf("Queue empty.\n");
            }
        }

        if (!strcmp(option, "-i")) {
            scanf("%d", &value);
            push(queue, value);
        }

        if (!strcmp(option, "-r")) {
            if (!emptyQueue(queue)) {
                pop(queue);
            } else {
                printf("Queue empty.\n");
            }
        }

        if (!strcmp(option, "-ss")) {
            if (!emptyQueue(queue)) {
                printf("%d\n", sizeQueue(queue));
            }
        }
    }
    destroyQueue(queue);
    return 1;
}