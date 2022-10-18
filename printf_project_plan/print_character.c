#include "main.h"
#include <stdio.h>
/**
 * print_character - writes the character c to stdout
 * @args: input char
 * @buffer: buffer pointer
 * @buf: index for buffer pointer
 * Return: On success 1.
 */
int print_character(va_list args, char *buffer, unsigned int buf)
{
	char c;

	c = va_arg(args, int);
	handle_buffer(buffer, c, buf);

	return (1);
}
