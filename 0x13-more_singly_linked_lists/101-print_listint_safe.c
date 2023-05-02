#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  _r - reallocation
 *   @list: list a
 *    @size: new list
 *     @new: new node
 *      Return: m
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
const listint_t **m;
size_t x;
m = malloc(size * sizeof(listint_t *));
if (m == NULL)
{
free(list);
exit(98);
}
for (x = 0; x < size - 1; x++)
m[x] = list[x];
m[x] = new;
free(list);
return (m);
}

/**
 *  print_listint_safe - print
 *   @head: head
 *    Return:t
 */
size_t print_listint_safe(const listint_t *head)
{
size_t x, t = 0;
const listint_t **w = NULL;
while (head != NULL)
{
for (x = 0; x < t; x++)
{
if (head == w[x])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(w);
return (t);
}
}
t++;
w = _r(list, num, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(w);
return (t);
}
