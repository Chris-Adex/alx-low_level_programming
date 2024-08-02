#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end list_t list
 * @head: head of the linked list
 * @str: string.
 *
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *curr_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new_node->len = i;
	new_node->next = NULL;
	curr_node = *head;

	if (curr_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (curr_node->next)
			curr_node = curr_node->next;
		curr_node->next = new_node;
	}

	return (*head);
}
