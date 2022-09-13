#include "main.h"
/**
* print_alphabet_x10 - prints lowercase alphabet 10x
* Return: 0
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char start;

	while (i < 10)
	{
		/* intialize just before the while func*/
		start = 'a';
		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		i++;
	}
}
