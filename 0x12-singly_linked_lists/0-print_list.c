#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * * print_list - prints all elements of a list_t list.
 * * @h: a pointer to the list to iterato to.
 * * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
