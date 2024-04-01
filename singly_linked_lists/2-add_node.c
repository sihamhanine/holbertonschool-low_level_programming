#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * *add_node - Function that adds a new node at
 * the beginning of a list_t list.
 * @head: the pointer of the first element
 * @str: la chaine a ajouter
 *
 * Return: return node
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int lent = 0;
list_t *b;
b = malloc(sizeof(list_t));
if (b == NULL)
{
return (NULL);
}
b->str = strdup(str);
if (b->str == NULL)
{
free(b);
return (NULL);
}
while (*str != '\0')
{
lent++;
str++;
}
b->len = lent;
b->next = *head;
*head = b;
return (*head);
}
