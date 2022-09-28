#include "main.h"
/**
* _sqrt_recursion - det natural square root
* @n: input int number
* Return: root of the square, or -1
*/
int _sqrt_recursion(int n)
{
	/* I will use a helper funtion for this task*/
	return (get_square(n, 1));
}

/**
* get_square - iterate until i*i = c
* @c: number to get square root
* @i: iterator to get perfect square
* Return: square root of perfect sqaure
*/

int get_square(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (get_square(c, i + 1));
	else
		return (-1);
}
