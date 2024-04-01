#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - Function that returns the number of elements
 * in a linked list_t list
 *
 * @h: the pointer that pointe of the first element
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
int size_t = 0;
while (h != NULL)
{
h = h->next;
size_t++;
}
return (size_t);
}
