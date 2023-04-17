#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (q)
	{
		if (q->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", q->len, q->str);

		t++;
		q = q->next;
	}

	return (t);
}
