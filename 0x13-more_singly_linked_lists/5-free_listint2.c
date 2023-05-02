#include "lists.h"
#include <stdlib.h>

/**
 *  free_listint2 - function that frees list
 *   @head: head
 *    Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *m;
if (head == NULL)
return;
while (*head != NULL)
{
m = (*head)->next;
free(*head);
*head = m;
}
}
