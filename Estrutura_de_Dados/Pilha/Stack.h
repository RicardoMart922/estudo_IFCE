#ifndef __STACK__H
#define __STACK__H

typedef struct stack Stack;

Stack* createStack();
int push(Stack* stack, int value);
int pop(Stack* stack);
int peek(Stack* stack);
int emptyStack(Stack* stack);
int printStack(Stack* stack);
int destroyStack(Stack* stack);
int cleanStack(Stack* stack);
int sizeStack(Stack* stack);
int lastElementStack(Stack* stack);

#endif