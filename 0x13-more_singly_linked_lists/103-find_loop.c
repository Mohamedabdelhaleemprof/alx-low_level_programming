#include "lists.h"

/**
 *  find_listint_loop - find loop
 *   @head: head
 *    Return: s
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *w, *s;
w = s = head;
while (w && s && s->next)
{
w = w->next;
s = s->next->next;
if (w == s)
{
w = head;
break;
}
}
if (!w || !s || !s->next)
return (NULL);
while (w != s)
{
w = w->next;
s = s->next;
}
return (s);
}
