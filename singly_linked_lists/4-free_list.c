#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * free_list - Function that frees a list_t list.
 * 
 * @head: the pointer of the first element
 *
 * Return: no thing
 */
void free_list(list_t *head)
{
  list_t *temp;
  temp = head;
  while (temp->next != NULL)
    {
      free(temp->str);
      free(temp);
      
    }
}