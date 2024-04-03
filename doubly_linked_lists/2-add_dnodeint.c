#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * *add_dnodeint - Function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: Pointer to the first element
 * @n: number of elements
 * Return: The adress of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *b;
b = malloc(sizeof(dlistint_t));
if (b == NULL)
{
return (NULL);
}
b->n = n;
b->prev = NULL;
if (*head == NULL)
{
b->next = NULL;
}
else
{
b->next = *head;
(*head)->prev = b;
}
*head = b;
return (b);
}
