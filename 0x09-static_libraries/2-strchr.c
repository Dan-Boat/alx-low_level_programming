#include "main.h"
/**
* _strchr - find a character in a string
* @s: string to search through
* @c: character to find
* Return: Null if not find or ponter to the c
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
