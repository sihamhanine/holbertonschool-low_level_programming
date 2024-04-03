#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * *add_dnodeint_end - Function that adds a new node at
 * the end of a dlistint_t list.
 * @head: Pointer to the first element
 * @n: number of elements
 * Return: The adress of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *b, *temp;
b = malloc(sizeof(dlistint_t));
if (b == NULL)
{
return (NULL);
}
b->n = n;
b->next = NULL;
if (*head == NULL)
{
b->prev = NULL;
*head = b;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = b;
b->prev = temp;
}
return (b);
}
