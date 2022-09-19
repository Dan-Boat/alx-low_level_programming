#include "main.h"
/**
* swap_int - funtion that swaps the values of two integers
* @a: parameter int pointer
* @b: parameter int pointer
* Return: 0 - Always
*/
void swap_int(int *a, int *b)
{
		int c;

		c = *a;
		*a = *b;
		*b = c;
}

