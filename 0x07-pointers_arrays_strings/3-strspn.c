#include "main.h"
/**
* _strspn - get the length of a prefix string
* @s: the inital string
* @accept: string to the bytes in s
* Return: number of bytes in s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c; /* i for string s, j for accept, return c*/

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
