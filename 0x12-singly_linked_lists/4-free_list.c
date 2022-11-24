#include "lists.h"

/**
 * free_list - a funct that frees list_t lists
 * @head: pointer
 * Return: free lists
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
