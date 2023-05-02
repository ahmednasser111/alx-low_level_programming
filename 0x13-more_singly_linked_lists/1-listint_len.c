#include "lists.h"
/**
 * listint_len - get the size of a list
 *
 * @h: a pointer to the linked list
 * Returns: the size of nodes in the list
 */
size_t listint_len(const listint_t *h);
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
