#include "lists.h"

/**
 * listint_len - returning the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 * Return: num of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}