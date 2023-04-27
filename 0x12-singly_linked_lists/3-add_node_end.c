#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list
 * @head: The original linked list
 * @str: The string to add to the node
 *
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
		return (temp);
	}
	return (NULL);
}
