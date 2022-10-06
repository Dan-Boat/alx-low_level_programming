#include "main.h"
/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: unsigned int number of elements
 * @size: unsigned int size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
