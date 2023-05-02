#include "lists.h"
#include <stdlib.h>

/**
 *  free_listint - frees the function
 *   @head: the head
 *    Return: NULL or head
 */

void free_listint(listint_t *head)
{
listint_t *m;
while (head != NULL)
{
m = head->next;
free(head);
head = m;
}
}
