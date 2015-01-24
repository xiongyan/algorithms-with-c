/*
*	Implementation of the Queue Abstract Datatype
*/

#include <stdlib.h>

#include "list.c"
#include "queue.h"


/*
* queue_enqueue
*/

int queue_enqueue(Queue *queue, const void *data)
{
	/*
	* Enqueue the data.
	*/

	return list_ins_next(queue, list_tail(queue), data);
}

/*
* queue_dequeue
*/
int queue_dequeue(Queue *queue, void** data)
{
	/*
	* Dequeue the data
	*/

	return list_rem_next(queue, NULL, data);
}
