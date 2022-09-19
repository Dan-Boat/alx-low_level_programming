#include "main.h"
/**
* print_rev - function that print strings in reverse
* @s: character parameter pointer
* Return: 0 - Always
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n')
}
