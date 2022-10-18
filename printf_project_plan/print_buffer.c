#include "main.h"
/**
* print_buffer - prints buffer
* @buffer: buffer pointer
* @nbuf: number of bytes to print
* Return: number of bytes printed.
*/
int print_buffer(char *buffer, unsigned int buf)
{
	return (write(1, buffer, buf));
}
