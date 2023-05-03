#include "lists.h"
/**
 * sum_listint - sum the list of integers
 *
 * @head: head of list
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
