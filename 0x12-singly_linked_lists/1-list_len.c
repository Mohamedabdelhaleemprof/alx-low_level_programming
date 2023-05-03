#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  list_len - list
 *   @h: head
 *    Return: t
 */
size_t list_len(const list_t *h)
{
int t = 0;
while (h)
{
t++;
h = h->next;
}
return (t);
}
