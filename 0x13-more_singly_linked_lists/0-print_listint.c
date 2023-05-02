#include "lists.h"
/**
 * print_listint - print a linked list of integers
 *
 * @h: a pointer to the linked list
 * Returns: the size of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
