#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  _ra - reallocation
 *   @list: old list
 *    @size:  new list size
 *     @new: new node
 *      Return: w
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
listint_t **w;
size_t x;
w = malloc(size * sizeof(listint_t *));
if (w == NULL)
{
free(list);
exit(98);
}
for (x = 0; x < size - 1; x++)
	w[x] = list[x];
w[x] = new;
free(list);
return (w);
}

/**
 *  free_listint_safe - freeing
 *   @head: head
 *    Return: t
 */
size_t free_listint_safe(listint_t **head)
{
size_t x, t = 0;
listint_t **w = NULL;
listint_t *s;
if (head == NULL || *head == NULL)
return (t);
while (*head != NULL)
{
for (x = 0; x < t; x++)
{
if (*head == w[x])
{
*head = NULL;
free(w);
return (t);
}
}
t++;
w = _ra(w, t, *head);
s = (*head)->next;
free(*head);
*head = s;
}
free(w);
return (t);
}
