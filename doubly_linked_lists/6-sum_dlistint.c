#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * sum_dlistint - Function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: Pointer to the first element
 * Return: The sum of all the data n or 0
 */
int sum_dlistint(dlistint_t *head)
{
  int sum = 0;
while (head != NULL)
{
 sum = sum + (head->n);
 head = head->next;
}
if (head == NULL)
{
return (sum);
}
else
{
  return (0);
}
}
