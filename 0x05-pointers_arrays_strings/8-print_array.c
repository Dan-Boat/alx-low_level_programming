#include "main.h"
/**
* print_array - print elements of array
* @a: integer parameter pointer
* @n: interger parameter
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	printf("\n");
	}
}
