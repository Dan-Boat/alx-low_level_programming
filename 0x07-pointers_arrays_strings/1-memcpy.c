#include "main.h"
/**
* _memcpy - copy memory area
* @dest: character array to copy into
* @src: character array to copy from
* @n: size of element to copy
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp;

	temp = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (temp);
}
