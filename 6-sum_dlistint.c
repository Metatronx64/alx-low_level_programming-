#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of elements in a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: Sum of the elements in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

