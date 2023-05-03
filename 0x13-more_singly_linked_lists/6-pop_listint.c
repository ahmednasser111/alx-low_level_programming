#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	if (*head == NULL)
		return 0;
	new_head = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new_head;
	return (n);
}
