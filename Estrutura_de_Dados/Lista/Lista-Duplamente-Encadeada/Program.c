#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "List.h"

int main() {

    List* list = createList();
    char option[4];
    int value = 0, index = 0;
    while (1) {
        scanf("%d", option);

        if (!strcmp(option, "-s")) {
            if (!emptyList(list)) {
                printList(list);
            } else {
                printf("Empty list\n");
            }
            break;
        }

        if (!strcmp(option, "-c")) {
            if (emptyList(list)) {
                cleanList(list);
            } else {
                printf("Empty list\n");
            }
        }

        if (!strcmp(option, "-a")) {
            scanf("%d", &value);
            if ((value == 1) || (value == 42) || (value == 45) || (value == 67)) {
                scanf("%d", &index);
                pushSortList(list, value, index);
            } else {
                pushStartList(list, value);
            }
        }

        if (!strcmp(option, "-r")) {
            if (!emptyList(list)) {
                scanf("%d", &value);
                popSortList(list, value);
            } else {
                printf("Empty list\n");
            }
        }

        if (!strcmp(option, "-m")) {
            printf("%d\n", peekBiggerElementList(list));
        }

        if (!strcmp(option, "-ss")) {
            printf("%d\n", sizeList(list));
        }

        if (!strcmp(option, "-sl")) {
            printf("%d\n", peekLastElementList(list));
        }

        if (!strcmp(option, "-sf")) {
            printf("%d\n", peekFirstElementList(list));
        }

        if (strcmp(option, "-sg")) {
            scanf("%d", &value);
            printf("%d\n", peekAmountBiggerElementList(list, value));
        }
    }
    destroyList(list);
    return 1;
}