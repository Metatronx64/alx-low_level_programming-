#include "lists.h"

/**
 * dlistint_len - Calculate the length of a doubly linked list
 * @h: The head of the linked list
 *
 * Return: The length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}

