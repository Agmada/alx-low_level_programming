#include "lists."
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t p;
	list_t *new;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	new->str = strdup(str);
	for (p = 0; str[p]; p++);
	
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
