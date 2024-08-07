#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node by a given index of a linked list
 * @head: pointer to the head
 * @index: index of the node to be deleted
 *
 * Return: 1 - if function is successful or -1 if function fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	curr = *head;
	for (i = 0; curr != NULL && i < index - 1; i++)
	{
		curr = curr->next;
	}

	if (curr == NULL || curr->next == NULL)
		return (-1);

	tmp = curr->next;
	curr->next = curr->next->next;
	free(tmp);

	return (1);
}
