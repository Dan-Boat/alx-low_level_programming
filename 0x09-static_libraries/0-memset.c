#include "main.h"
/**
* _memset - Function that fills memmory with a constant byte
* @s: buffer array
* @b: character constant byte
* @n: number of bytes of memory area to fill
* Return: pointer to memory @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
