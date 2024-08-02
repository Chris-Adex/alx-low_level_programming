#include "lists.h"

/**
 * list_len - function that returns then number of elements in a linked list_t
 * @h: list_t list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
