#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * *add_node_end - Function that adds a new node
 * at the end of a list_t list.
 * @head: the pointer of the first element
 * @str: la chaine a ajouter
 *
 * Return: the adress of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int lent = 0;
list_t *b, *temp;
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
b->next = NULL;
if (*head == NULL)
{
*head = b;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = b;
}
return (b);
}
