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
	listint_t *new_node, *iter;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		iter = *head;
		while (iter)
		{
			if (i == idx)
			{
				new_node->next = iter->next;
				iter->next = new_node;
				return (new_node);
			}
			iter = iter->next;
			i++;
		}
		if (idx > i)
			return (NULL);
	}
	return (new_node);
	return (NULL);
}
