#include "main.h"
/**
* _strpbrk - find strings on any set of bytes
* @s: string to go through
* @accept: string to find similar chars
* Return: pointer to the byte in s matches one in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j; /* i for s and j for accept*/
	int *p; /* locate the address found in s*/

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
