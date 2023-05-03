#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of the list
 *
 * @head: the head of the list
 * @n: value of node
 * Return: pointer to the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *temp = *head;

	if (head == NULL)
		return NULL;
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		while (temp)
			temp = temp->next;
		temp->next = new;
	}
	return new;
}