#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * *insert_dnodeint_at_index - Function that inserts a
 *  new node at a given position.
 * @h: Pointer to the first element
 * @idx: l'index where we insert the new node
 * @n: the number of elements
 * Return: The adress of the new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp;
dlistint_t *b;
unsigned int i;
temp = *h;
b = malloc(sizeof(dlistint_t));
if (b == NULL)
return (NULL);
b->prev = NULL;
b->next = NULL;
b->n = n;
if (idx == 0)
{
b->next = *h;
if (*h != NULL)
(*h)->prev = b;
*h = b;
return (b);
}
else
{
i = 0;
while (temp != NULL && i != idx - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL || i != idx - 1)
{
free(b);
return (NULL);
}
b->next = temp->next;
if (temp->next != NULL)
temp->next->prev = b;
temp->next = b;
b->prev = temp;
return (b);
}
}
