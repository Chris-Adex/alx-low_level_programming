#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - func that returns the nth node if a listint_t list
 * @head: header address
 * @index: index of the node
 * Return: NULL if node does not exist
 * or the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
