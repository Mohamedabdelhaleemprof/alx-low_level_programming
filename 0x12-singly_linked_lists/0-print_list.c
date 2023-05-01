#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print.
 * @h: h
 * Return: the m.
 */
size_t print_list(const list_t *h)
{
int m = 0;
while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
m++;
h = h->next;
}
return (m);
}
