#include "lists.h"
/**
* list_len - Returns the number of elements in a linked `list_t` list
* @h: head of linked list
* Return: number of elements in list
*/
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t c;

	c = 0;
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		c++;
	}

	return (c);
}
