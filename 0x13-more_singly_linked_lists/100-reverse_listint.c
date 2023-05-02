#include "lists.h"

/**
 * reverse_listint - reverse
 * @head: double pointer
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *m, *t;
if (head == NULL || *head == NULL)
	return (NULL);
if ((*head)->next == NULL)
	return (*head);
m = NULL;
while (*head != NULL)
	{
		t = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = t;
	}
*head = m;
return (*head);
}
