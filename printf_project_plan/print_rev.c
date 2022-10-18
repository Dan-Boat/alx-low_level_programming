#include "main.h"

/**
 * print_rev - writes the str in reverse
 * @args: input string
 * @buffer: buffer pointer
 * @buf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_rev(va_list args, char *buffer, unsigned int buf)
{
	char *str;
	unsigned int i;
	int j = 0;
	char nill[] = "(llun)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			buf = handle_buffer(buffer, nill[i], buf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		buf = handle_buffer(buffer, str[j], buf);
	}
	return (i);
}
