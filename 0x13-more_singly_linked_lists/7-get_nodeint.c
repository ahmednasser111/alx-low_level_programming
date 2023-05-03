#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	if (head == NULL || index < 0)
		return (NULL);
	for (; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
