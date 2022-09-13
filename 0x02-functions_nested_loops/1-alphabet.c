#include "main.h"
/**
* print_alphabet - funtion that prints alphabets in lowercase
* Retun: 0
*/
void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
