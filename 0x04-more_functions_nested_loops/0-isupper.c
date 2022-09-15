#include "main.h"
/**
* _isupper function checks for uppercase character 
* @c character letter 
* Returns 1: uppercase and 0: otherwise
*/

int _isupper(int c)
{
	if (c > 64 && c <= 91)
		return (1);

	return (0);
}
