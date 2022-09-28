#include "main.h"
/**
* _puts_recursion - print a string
* @s: char paramter string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
