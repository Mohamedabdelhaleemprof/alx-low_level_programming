#include "lists.h"
#include <stdlib.h>
/**
 *   add_nodeint_end - add node
 *     @head: head of double pointer
 *       @n: the number where to add
 *         Return: NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *x;
listint_t *m;
if (head == NULL)
return (NULL);
x = malloc(sizeof(listint_t));
if (x == NULL)
return (NULL);
x->n = n;
x->next = NULL;
if (*head == NULL)
{
*head = x;
return (x);
}
m = *head;
while (m->next != NULL)
{
m = m->next;
}
m->next = x;
return (x);
}
