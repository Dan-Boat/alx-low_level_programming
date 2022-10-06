#include "main.h"
/**
* str_concat - concatenate two strings using malloc
* @s1: string parameter 1
* @s2: string parameter 2
* @n: unsigned int size to include s2
* Return: pointer to concat string
*/

char char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int i, c, strlen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen = (unsigned int)_strlen(s1);
	a = malloc((strlen + n + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (i = 0, c = 0; i < (strlen + n); i++)
	{
		if (i < strlen)
			a[i] = s1[i];
		else
			a[i] = s2[c++];
	}
	a[i] = '\0';

	return (a);
}
