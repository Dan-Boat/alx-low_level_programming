#include "lists.h"

/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;
	int c;

	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;

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
	new_node->next = NULL;

	if (temp)
		temp->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
