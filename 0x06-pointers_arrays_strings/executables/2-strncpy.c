#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: int parameter pointer
 * @src: int parameter pointer
 * @n: number of chars to copy over
 * Return: the copied addess `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
