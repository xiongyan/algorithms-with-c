#include <stdlib.h>

#include "list.c"
#include "stack.h"


/*
* stack push
*/

int stack_push(Stack *stack, const void *data)
{
	/*
	* Push the data onto the stack.
	*/
	return list_ins_next(stack, NULL, data);
}


/*
* stack pop
*/

int stack_pop(Stack *stack, void **data)
{
	/*
	* Pop the data off the stack
	*/
	return list_rem_next(stack, NULL, data);
}
