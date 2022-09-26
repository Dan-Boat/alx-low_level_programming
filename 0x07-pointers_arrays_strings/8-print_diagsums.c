#include "main.h"
#include <stdio.h>
/**
* print_diagsums - sum of diagonals
* @a: input array
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i, num_points, sum1 = 0, sum2 = 0;

	num_points = size * size /* the number of points*/

	for (i = 0; i < num_points; i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < num_points - 1)
			sum2 += *(a + i);
	}
	print("%d, %d\n", sum1, sum2);
}
