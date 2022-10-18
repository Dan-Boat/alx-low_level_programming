#include "main.h"
/**
* handle_bufffer - concatenates the buffer characters
* @buffer: buffer pointer
* @c: charcter to concatenate
* @buf: index of buffer pointer
* Return: index of buffer pointer.
*/
unsigned int handle_buffer(char *buffer, char c, unsigned int buf)
{
	if (buf == 1024)
	{
		print_buffer(buffer, buf);
		buf = 0;
	}
	buffer[buf] = c;
	buf++;
	return (buf);
}
