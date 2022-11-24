#include "lists.h"

/**
 * print_list - a funct that print all elements of a list
 * @h: the list_t list
 * Return: nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	if (h->str  == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	nodes++;
	h = h->next;
}
return (nodes);
}
