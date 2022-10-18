#include "main.h"
/**
 * print_unt - prints an unsigned int
 * @args: number to print
 * @buffer: buffer pointer
 * @buf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_unt(va_list args, char *buffer, unsigned int buf)
{
	unsigned int int_in, int_temp, i, div;

	int_in = va_arg(args, unsigned int);
	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		buf = handle_buffer(buffer, ((int_in / div) % 10) + '0', buf);
	}
	return (i);
}