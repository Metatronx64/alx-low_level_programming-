#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list
 * @head: Pointer to the head of the linked list
 * @n: Element to add to the list
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *back;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	back = *head;
	while (back->next != NULL)
	{
		back = back->next;
	}

	/* Adding to the end of the list */
	new_node->n = n;
	new_node->next = NULL;
	back->next = new_node;
	new_node->prev = back;

	return (*head);
}

