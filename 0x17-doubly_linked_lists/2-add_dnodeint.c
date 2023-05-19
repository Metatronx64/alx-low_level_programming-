#include "lists.h"

/**
 * add_dnodeint - Add a new node to the beginning of a doubly linked list
 * @head: Pointer to the head of the linked list
 * @n: Element to add to the list
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Create a new node */
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		/* Adding to an empty list */
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	/* Adding to the beginning of a non-empty list */
	new_node->n = n;
	(*head)->prev = new_node;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (*head);
}

