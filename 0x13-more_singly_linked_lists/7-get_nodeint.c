#include "lists.h"

/**
 * get_nodeint_at_index - returning the node at a certain index in linked list
 * @head: first node in linked list
 * @index: index of node to return
 * Return: pointer to the node been looked for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (NULL);
	if (index == 0)
		return (temp);

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
