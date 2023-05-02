#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete
 *  @head: head
 *   @index: number
 *    Return: 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x;
listint_t *m, *t;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
t = (*head)->next;
free(*head);
*head = t;
return (1);
}
m = *head;
for (x = 0; x < index - 1; x++)
{
if (m->next == NULL)
return (-1);
m = m->next;
}
t = m->next;
m->next = t->next;
free(t);
return (1);
}
