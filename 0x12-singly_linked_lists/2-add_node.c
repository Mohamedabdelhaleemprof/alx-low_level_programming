#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  _strlen - length
 *   @s : s 
 *    Return: x
 */
int _strlen(const char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}

/**
 *  add_node - node will be added
 *   @head: head
 *    @str: str
 *     Return: w
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *w;
w = malloc(sizeof(list_t));
if (w == NULL)
return (NULL);
w->str = strdup(str);
w->len = _strlen(str);
w->next = *head;
*head = w;
return (w);
}
