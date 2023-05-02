#include "lists.h"

/**
 *  sum_listint -  the sum
 *   @head: head
 *    Return: t
 */
int sum_listint(listint_t *head)
{
int t = 0;
while (head != NULL)
{
t += head->n;
head = head->next;
}
return (t);
}
