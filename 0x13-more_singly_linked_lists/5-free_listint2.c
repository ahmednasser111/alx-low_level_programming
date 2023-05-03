#include "lists.h"

/**
 * free_listint2 - ...
 * @head: ...
 *
 * Return: ...
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head);
		*head = (*head)->next;
		free(temp);
	}
	head = 0;
}