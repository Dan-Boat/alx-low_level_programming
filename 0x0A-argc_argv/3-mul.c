#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - print the multiplication of two nums
* @argc: argument count
* @argv: argument vector
* Return: 0 -if it works, 1 - fails
*/
int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1]  && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
