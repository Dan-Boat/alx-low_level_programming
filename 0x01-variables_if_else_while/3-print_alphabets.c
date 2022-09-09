#include <stdio.h>
/**
 * main - Entry points
 *
 * Description: Prints alphabet in lowercase and 
 * then uppercase, followed by new line
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char a = 'a';
        char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}

