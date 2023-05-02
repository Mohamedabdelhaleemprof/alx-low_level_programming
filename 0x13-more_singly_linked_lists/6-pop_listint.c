#include "lists.h"
#include <stdlib.h>

/**
 *  pop_listint - delete the head
 *   @head: head
 *    Return: void
 */
int pop_listint(listint_t **head)
{
listint_t *m;
int x;
if (head == NULL || *head == NULL)
return (0);
m = *head;
*head = m->next;
x = m->x;
free(m);
return (x);
}
