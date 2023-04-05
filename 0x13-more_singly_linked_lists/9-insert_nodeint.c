#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t linked list.
 * head: Pointer to the pointer to the head node of the linked list.
 * idx: Index of the list where the new node should be added, starting from 0.
 * n: Data (n) of the new node to be added.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
    	listint_t *new_node, *current;

    	/* Allocate memory for the new node */
    	new_node = malloc(sizeof(listint_t));
    	if (new_node == NULL)
    	{
        	return NULL;
   	 }
    	new_node->n = n;

    	/* Special case: insert at the beginning of the list */
    	if (idx == 0)
    	{
        	new_node->next = *head;
        	*head = new_node;
        	return new_node;
   	 }

    	/* Go through the list until the index-th node is found */
    	current = *head;
    	while (current != NULL && i < idx - 1)
    	{
        	current = current->next;
        	i++;
    	}

    	/* Return NULL if the index is out of bounds */
    	if (i < idx - 1 || current == NULL)
   	 {
        	free(new_node);
        	return NULL;
   	 }

    	/* Insert the new node between the index-th and (index+1)-th nodes */
    	new_node->next = current->next;
    	current->next = new_node;

    	return (new_node);
}

