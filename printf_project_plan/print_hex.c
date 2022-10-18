#include "main.h"
/**
* print_hex - prints a decimal in hexadecimal
* @args: input string
* @buffer: buffer pointer
* @buf: index for buffer pointer
* Return: number of chars printed
*/
int print_hex(va_list args, char *buffer, unsigned int buf)
{
	int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

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
	binary = malloc(sizeof(char) * (32 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = fill_hex_array(binary, hexadecimal, 0, 8);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			buf = handle_buffer(buffer, hexadecimal[i], buf);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count);
}
