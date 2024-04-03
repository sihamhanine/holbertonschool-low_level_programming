#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_dnodeint_at_index - Function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: Pointer to the first element
 * @index: l'index where we delete the node
 * Return: 1 if it succeded or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;
if (*head == NULL)
return (-1);
temp = *head;
while (temp != NULL && i != index)
{
temp = temp->next;
i++;
}
if (temp == NULL)
{
return (-1);
}
if (temp->prev != NULL)
{
temp->prev->next = temp->next;
}
else
{
*head = temp->next;
}
if (temp->next != NULL)
{
temp->next->prev = temp->prev;
}
free(temp);
return (1);
}

