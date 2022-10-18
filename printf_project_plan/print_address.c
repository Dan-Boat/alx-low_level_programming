#include "main.h"
#include <stdio.h>
/**
* print_address - prints the address of an input variable
* @args: input address.
* @buffer: buffer pointer.
* @buf: index for buffer pointer
* Return: number of chars printed.
*/
int print_address(va_list args, char *buffer, unsigned int buf)
{
	void *address;
	long int int_input;
	int i, count, first_digit, isnegative;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	address = (va_arg(args, void *));
	if (address == NULL)
	{
		for (i = 0; nill[i]; i++)
			buf = handle_buffer(buffer, nill[i], buf);
		return (5);
	}
	int_input = (intptr_t)address;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = fill_hex_array(binary, hexadecimal, 0, 16);
	buf = handle_buffer(buffer, '0', buf);
	buf = handle_buffer(buffer, 'x', buf);
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
	return (count + 2);
}
