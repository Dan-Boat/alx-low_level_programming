#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string paramter
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
	int i;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = (s[i] - 65 > 25) ?
				storel[s[i] - 97] : storeh[s[i] - 65];
		}
	}
	return (s);
}
