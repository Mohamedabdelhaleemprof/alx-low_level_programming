#include "lists.h"
#include <stdlib.h>

/**
 *  insert_nodeint_at_index - insertion
 *   @head: head
 *    @idx: node number
 *     @n: new node
 *      Return: t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *m, *t;
if (head == NULL)
return (NULL);
if (idx != 0)
{
m = *head;
for (x = 0; x < idx - 1 && m != NULL; x++)
{
m = m->next;
}
if (m == NULL)
return (NULL);
}
t = malloc(sizeof(listint_t));
if (t == NULL)
return (NULL);
t->n = n;
if (idx == 0)
{
t->next = *head;
*head = t;
return (t);
}
t->next = m->next;
m->next = t;
return (t);
}
