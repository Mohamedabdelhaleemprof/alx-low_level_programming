#include "lists.h"
#include <stdlib.h>
/**
 *   add_nodeint - add node
 *     @head: head
 *       @n: number which u add
 *         Return: NULL or x
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *x;

if (head == NULL)
return (NULL);
x = malloc(sizeof(listint_t));
if (x == NULL)
return (NULL);
x->n = n;
x->next = *head;
*head = x;
return (x);
}
