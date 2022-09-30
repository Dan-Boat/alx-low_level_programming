#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - print sum of two positive inputs
* @argc: argument count
* @argv: argument vector
* Return: 0 - success, 1 - fails
*/
int main(int argc, char *argv[])
{
	int sum, i, num;
	char *c;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &c, 10);
			if (!*c)
				sum += num;
			else
				printf("Error\n");
				return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
