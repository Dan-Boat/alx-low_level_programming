#include "main.h"
/**
* _strncat -  concatenate two strings wit at most n bytes of src
* @dest: char paramter pointer
* @src: char parameter pointe
* @n: int paramter number of src to concatenater
* Return: combined address to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
