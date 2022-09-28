#include "main.h"
/**
* factorial - calculates the factorial of n
* @n: input integer
* Return: the factorial number (n*(n-1)!)
*/
int factorial(int n)
{
	if (n <= 1 && n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
