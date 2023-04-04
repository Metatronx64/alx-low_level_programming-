#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * head- pointer to the head of the list.
 * n- value to be added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *temp;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Set the value of the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /*Iterate through  the list until the last node is reached */
    temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    /* Set the new node as the next node after  the last node */
    temp->next = new_node;

    return (new_node);
}
