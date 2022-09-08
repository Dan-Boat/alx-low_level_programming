#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: Prints text without using printt or puts 
 *
 *  Return: Always 1 (Sucess)
 *
 */
int main(void)
{
	/* declare and initialize string */
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int s = strlen(text);
	write(2, text, s);
	
	return (1);
}
