#include "main.h"
/**
* print_chessboard - print chess borad (!for what?)
* @a: 2D array of chars
*/
void print_chessboard(char (*a)[8])
{
	int x, y; /*x -rows, y -cols */

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		y++;
	}
}
