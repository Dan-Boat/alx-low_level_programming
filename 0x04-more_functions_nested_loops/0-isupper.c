#include "main.h"
/**
* _isupper function checks for uppercase character 
* @c character letter 
* Returns 1: uppercase and 0: otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
