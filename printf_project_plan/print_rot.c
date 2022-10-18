#include "main.h"

/**
 * print_rot - writes the str in ROT13
 * @args: input string
 * @buffer: buffer pointer
 * @buf: index for buffer pointer
 * Return: number of chars printed.
 */

int print_rot(va_list args, char *buffer, unsigned int buf)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, j, k;
	char nill[] = "(avyy)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			buf = handle_buffer(buffer, nill[i], buf);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (str[i] == alf[j])
			{
				k = 1;
				buf = handle_buffer(buffer, rot[j], buf);
				break;
			}
		}
		if (k == 0)
			buf = handle_buffer(buffer, str[i], buf);
	}
	return (i);
}
