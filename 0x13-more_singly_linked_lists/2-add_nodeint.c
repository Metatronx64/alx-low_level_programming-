#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint:a function that adds a node to the beginning of a linked list  
 *head:pointer to a pointer to the head of a linked list 
 *n:data to insert in the new node
 *
 * Return pointer to new node or NULL if memory allocation fails  
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return new_node;
}

