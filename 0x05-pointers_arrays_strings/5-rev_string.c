#include "main.h"
/**
* rev_string - reverse string
* @s: character parameter pointer
* Return: 0 - Always
*/
void rev_string(char *s)
{
	int i, j, k;
	char h;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	for (i--, j = 0; j < k / 2; i--, j++)
	{
		h = s[j];
		s[j] = s[i];
		s[i] = h;
	}
}
