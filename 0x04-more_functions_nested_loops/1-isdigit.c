#include "main.h"
/**
* _isdigit - funciton checks if the input character is a digit
* @c: int number
* Return: 1 for digits , 0 for otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
