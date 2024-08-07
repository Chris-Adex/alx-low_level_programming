#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a linked list at a given positn
 * @head: pointer to the head
 * @idx: index of the list where the new node will be added
 * @n: value for the new node to be added
 * Return: pointer to the new node or NULL if function fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int count;

	*tmp = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
	return (new_node);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
