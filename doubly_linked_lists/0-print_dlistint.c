#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: Pointer to the first element
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;
const dlistint_t *temp;
temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
count++;
temp = temp->next;
}
return (count);
}
