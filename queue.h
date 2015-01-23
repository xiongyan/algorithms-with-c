/*
*	Header for the Queue Abstract Datatype
*/

#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include "list.h"

/*
* Implement queues as linked lists.
*/

typedef list Queue;

/*
* Public interface
*/

#define queue_int list_init
#define queue_destory list_destory

int queue_enqueue(Queue *queue, const void *data);
int queue_dequeue(Queue *queue, void **data);

#define queue_peek(queue) ((queue)->head == NULL ? NULL :(queue)->head->data)
#define queue_size list_size

#endif // QUEUE_H
