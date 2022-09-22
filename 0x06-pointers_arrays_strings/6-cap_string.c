#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @str: character parameter pointer
 * Return: string of @str
 */

char *cap_string(char *str)
{
	int i, c;
	int option;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, option = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			option = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[i])
				option = 1;
		}

		if (option)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				trigger = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				trigger = 0;
			else if (str[i] >= '0' && str[i] < '9')
				option = 0;
		}
	}
	return (str);
}
