#include "lists.h"

/**
 * add_node - a funct that adds a new node at the begin of a list
 * @head: a pointer
 * @str: string
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
