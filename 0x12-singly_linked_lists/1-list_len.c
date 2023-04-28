#include "lists.h"

/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list in the program
 * return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t pass;
	pass = 0;
	while (h != NULL)
	{
		pass++;
		h = h->next;
	}
	return (pass);
}
