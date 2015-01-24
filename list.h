/*
*	Header for the Linked List Abstract Datatype
*/


#ifndef LIST_H
#define LIST_H

#include <stdlib.h>


/*
*	Define a structure for linked list elements.
*/

typedef struct ListElmt_
{
	void  *data;
	struct ListElmt_ *next;
}ListElmt;


/*
*	Define a structure for linked lists.
*/

typedef struct List_
{
	int size;
	int (*match)(const void *key1, const void *key2);
	void (*destory)(void *data);
	ListElmt_ *head;
	ListElmt_ *tail;
}List;


/*
*  Public Interface
*/

void list_init(List *list, void(*destory)(void *data));
void list_destory(List *list);

#define list_size(list) ((list)->size)
#define list_head(list) ((list)->head)
#define list_tail(list) ((list)->tail)
#define list_is_head(list, element) ((element) == (list)->head ? 1 : 0)
#define list_is_tail(element) ((element)->next == NULL ? 1 : 0)
#define list_data(element) ((element)->data)
#define list_next(element) ((element)->next)
#endif

