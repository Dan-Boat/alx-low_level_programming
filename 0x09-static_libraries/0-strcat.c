#include "main.h"
/**
* _strcat - concatenate two strings
* @dest: char parameter pointer
* @src: char parameter pointer
* Return: the combined address `dest`
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* set a counter for the parameter 1*/
	for (i = 0; dest[i] != '\0'; i++)
		;

	/*set a counter for the parameter 2*/
	for (j = 0; src[j] != '\0'; j++)
	{
		/* *dest = *src stores the base address of the src at the end of dest*/
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
