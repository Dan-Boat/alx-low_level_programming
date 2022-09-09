#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Use putchar funtion to print
 * all letters but the letter 'q' and 'e'.
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
