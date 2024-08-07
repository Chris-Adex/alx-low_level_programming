#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes head node
 * @head: header address
 * Return: the head node's data or 0 if list is empty
 */

int pop_listint(listint **head)
{
	listint *tmp;
	int i;

	if ((head || *head) == NULL)
		return (0);

	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (i);
}
