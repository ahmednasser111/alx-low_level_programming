#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	if (head == NULL)
		return (NULL);
	for (; i != index; head = head->next, i++)
	{
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
