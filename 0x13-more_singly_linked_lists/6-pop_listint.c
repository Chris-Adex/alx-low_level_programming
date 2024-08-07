#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - function that deletes head node
 * @head: header address
 * Return: the head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (i);
}
