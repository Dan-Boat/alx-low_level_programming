#include "main.h"
/**
* malloc_checked - allocate mem using malloc
* @b: unsigned int mem size parameter
* Return: void pointer if it works and terminate 98 if it fails
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
