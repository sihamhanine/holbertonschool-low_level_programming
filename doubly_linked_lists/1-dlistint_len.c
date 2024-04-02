#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * dlistint_len - Function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: Pointer to the first element
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
const dlistint_t *temp;
temp = h;
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}
