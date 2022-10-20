#include "main.h"

/**
 * print_non_chars - prints a string and values of
 * non-printed chars
 * @args: input string
 * @buffer: buffer pointer
 * @buf: index for buffer pointer
 * Return: number of chars printed
 */
int print_non_chars(va_list args, char *buffer, unsigned int buf)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int i, sum, op;

	str = va_arg(args, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			buf = handle_buffer(buffer, '\\', buf);
			buf = handle_buffer(buffer, 'x', buf);
			op = str[i];
			binary = fill_binary_array(binary, op, 0, 32);
			hexadecimal = fill_hex_array(binary, hexadecimal, 1, 8);
			buf = handle_buffer(buffer, hexadecimal[6], buf);
			buf = handle_buffer(buffer, hexadecimal[7], buf);
			sum += 3;
		}
		else
			buf = handle_buffer(buffer, str[i], buf);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
