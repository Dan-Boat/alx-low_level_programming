#include <stdio.h>
#include "main.h"

/**
*
* main - print the largest number of 3 integers
*/
int main(void)
{
	int a, b, c;
	int largest;
	
	a = 20;
	b = 5333;
	c = 300;
	largest = largest_number(a, b, c);
	
	printf("%d is the largest number\n", largest);
	return (0);
}
