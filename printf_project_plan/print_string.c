#include "main.h"

/**
 * print_string - writes the string to stdout
 * @args: input string
 * @buffer: buffer pointer
 * @buf: index for buffer pointer
 * Return: On success 1.
 */
int print_string(va_list args, char *buffer, unsigned int buf)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			buf = handle_buffer(buffer, nill[i], buf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		buf = handle_buffer(buffer, str[i], buf);
	return (i);
}
