#include "main.h"
/**
* main - entry point
* description: use the _putchar function to print text
* Return 0 Always 
*/
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
