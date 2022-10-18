#include "main.h"

/**
 * print_noct - print the number in octal begining with zero
 * @args: input string
 * @buffer: buffer pointer
 * @buf: index for buffer pointer
 * Return: number of chars printed
 */
int print_noct(va_list args, char *buffer, unsigned int buf)
{
	int int_input, i, isnegative, count, first_digit;
	char *octal, *binary;

	int_input = va_arg(args, int);
	isnegative = 0;
	if (int_input == 0)
	{
		buf = handle_buffer(buffer, '0', buf);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	buf = handle_buffer(buffer, '0', buf);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 32);
	octal = malloc(sizeof(char) * (11 + 1));
	octal = fill_oct_array(binary, octal);
	for (first_digit = i = count = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			buf = handle_buffer(buffer, octal[i], buf);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count + 1);
}
