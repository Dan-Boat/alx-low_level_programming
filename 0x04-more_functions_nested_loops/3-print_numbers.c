#include "main.h"
/**
* print_numbers - print numbers from 0 to 9
*/
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
