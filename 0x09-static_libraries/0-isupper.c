#include "main.h"
/**
* _isupper - function checks for uppercase character
* @c: int type number
* Return: 1 uppercase and 0: otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
