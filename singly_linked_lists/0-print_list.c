#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * print_list - Function that prints all the elements of a list_t list.
 *
 * @h: the pointer that pointe of the first element
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
