#include "main.h"
/**
* _isalpha - function that checks for lowercase character
* @c: type int
* Return: 1 if its lower or 0 for otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
