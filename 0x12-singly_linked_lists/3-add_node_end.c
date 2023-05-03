#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *_strlen - length of node
 *   @str: str
 *    Return: x
 */
unsigned int _strlen(char *str)
{
unsigned int x;
for (x = 0; str[x]; x++)
;
return (x);
}

/**
 *  add_node_end - add end node
 *   @head: head
 *    @str: str
 *     Return: f
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *f, *s;
if (str == NULL)
return (NULL);
f = malloc(sizeof(list_t));
if (f == NULL)
return (NULL);
f->str = strdup(str);
if (f->str == NULL)
{
free(f);
return (NULL);
}
f->len = _strlen(f->str);
f->next = NULL;
if (*head == NULL)
{
*head = f;
return (f);
}
s = *head;
while (s->next)
s = s->next;
s->next = f;
return (f);
}
