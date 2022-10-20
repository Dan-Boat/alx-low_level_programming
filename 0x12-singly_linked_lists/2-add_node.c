#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
* add_node - add a new node at the beginning of `list_t` list
* @head: double pointer to head
* @str: string to be saved in new node, must be duplicated
* Return: Address of new element or NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int c;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	
	for (c = 0; str[c] != '\0'; c++)
			;
	new_node->len = c;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
