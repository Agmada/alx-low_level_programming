#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int s;

	tmp = v;
	for (s = 0; tmp; s++)
		tmp = tmp->next;
	return (s);
}
