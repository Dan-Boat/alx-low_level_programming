#include "lists.h"
#include <stdio.h>

/**
* print_list - print all elements of `list_t` list
* @h: head of linked list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t c;

	c = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		c++;
	}

	return (c);
}
