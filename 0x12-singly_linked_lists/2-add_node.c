#include "lists.h"

/**
 * add_node - adds a Node to the beginning of a list
 * @head: head of the list
 * @str: string to be added
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;

	return (*head = new_node);
}
