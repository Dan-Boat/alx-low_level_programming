#include "main.h"
/**
* _islower - function that checks for lowercase character
* Return: 1 if its lower or 0 for otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
