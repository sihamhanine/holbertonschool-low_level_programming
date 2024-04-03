#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * *get_dnodeint_at_index - Function that returns the nth
 * node of a dlistint_t linked list.
 * @head: Pointer to the first element
 * @index: the index of the node
 * Return: The adress of element in this index or NULl
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; i < index && head != NULL; i++)
{
head = head->next;
}
if (head == NULL)
{
return (NULL);
}
else
{
return (head);
}
}

