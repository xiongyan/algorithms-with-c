/*
* Header for the Stack Abstract Datatype
*/

#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include "list.h"

/*
* Implement statcks as linked lists.
*/

typedef List Stack;

/*
*	Public Interface
*/

#define stack_init list_init
#define stack_destory list_destory

int stack_push(Stack *stack, const void *data);
int stack_pop(Stack *stack, void **data);

#define stack_peek(stack) ((stack)->head == NULL ? NULL : (stack)->head->data)
#define stack_size list_size


#endif // STACK_H
