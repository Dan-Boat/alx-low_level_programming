#include "main.h"
#include <stdio.h>
/**
* main - print the number of arguments
* @argc: argument count
* @argv: argument vector
* Return: 0 - Always
*/
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
