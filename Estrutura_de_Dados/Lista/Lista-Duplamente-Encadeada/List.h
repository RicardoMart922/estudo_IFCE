#ifndef __LIST__H
#define __LIST__H

typedef struct list List;

List* createList();
int emptyList(List* list);
int sizeList(List* list);
int pushStartList(List* list, int value);
int pushEndList(List* list, int value);
int pushSortList(List* list, int value, int index);
int popStartList(List* list);
int popEndList(List* list);
int popSortList(List* list, int value);
int cleanList(List* list);
int peekBiggerElementList(List* list);
int peekFirstElementList(List* list);
int peekLastElementList(List* list);
int peekAmountBiggerElementList(List* list, int value);
int printList(List* list);
int destroyList(List* list);

#endif