#include "main.h"
/**
* _puts - print strings followed by a new line
* @str: character parameter pointer
* Return 0: -Always
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
