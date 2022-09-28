#include "main.h"
/**
* _pow_recursion - calculate the power of x to y
* @x: base input
* @y: exponent number
* Return: x to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
