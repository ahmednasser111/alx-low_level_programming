#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return c;
}