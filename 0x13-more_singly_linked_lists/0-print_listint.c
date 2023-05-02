#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints the list.
 *
 *@h: the head
 *
 *Return: the nodes
 */
size_t print_listint(const listint_t *h)
{
size_t m = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
m++;
}
return (m);
}
