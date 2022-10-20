#include "lists.h"

/**
 * free_list - free a `list_t` list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *nxt;

	temp = head;

	while (temp != NULL)
	{
		nxt = temp->next;
		free(temp->str);
		free(temp);
		temp = nxt;
	}
}
