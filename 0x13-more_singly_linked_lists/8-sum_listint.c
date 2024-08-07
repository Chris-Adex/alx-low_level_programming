#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list
 * @head : pointer to the head of the list
 * Return: sum of all data (n) or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
