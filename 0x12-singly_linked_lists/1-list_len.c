#include "lists.h"

/**
 * list_len - returning the number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
