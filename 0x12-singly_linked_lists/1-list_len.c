#include "lists.h"

/**
 * list_len - a funtion that returns a number of elements in a link
 * @h: lists_t list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
