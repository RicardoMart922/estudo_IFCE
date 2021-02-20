#ifndef __LIST__H
#define __LIST__H

typedef struct list List;

List* createList();
int emptyList(List* list);
int sizeList(List* list);
int cleanList(List* list);
int printList(List* list);
int destroyList(List* list);

#endif