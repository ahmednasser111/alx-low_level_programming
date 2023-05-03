#include "lists.h"
/**
 * insert_nodeint_at_index - ...
 * @head: ...
 * @idx: ...
 * @n: ...
 *
 * Return: ...
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	int i = 1;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	for (; temp != NULL; temp = temp->next, i++)
		if (i == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	return (NULL);
}
