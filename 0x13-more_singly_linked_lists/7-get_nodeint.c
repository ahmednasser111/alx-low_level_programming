#include "lists.h"
/**
 * get_nodeint_at_index - get the node at index
 *
 * @head: the head of the list
 * @index: the index of the node
 * Return: the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
