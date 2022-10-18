#include "main.h"
/**
* print_func - print the appropriate format for a specific identifier
* @s: argument indentifier
* @index: index of argument identifier.
* Return: amount of identifiers.
*/
int print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_character}, {"s", print_string}, {"i", print_integer},
		{"d", print_integer}, {"b", print_binary}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex}, {"X", print_upx},
		{"S", print_non_chars}, {"p", print_address}, {"li", print_long_integer},
		{"ld", print_long_integer}, {"lu", print_long_unt}, {"lo", print_long_oct},
		{"lx", print_long_hex}, {"lX", print_long_upx}, {"hi", print_hint},
		{"hd", print_hint}, {"hu", print_hunt}, {"ho", print_hoct},
		{"hx", print_hhex}, {"hX", print_hupx}, {"#o", print_noct},
		{"#x", print_nhex}, {"#X", print_nupx}, {"#i", print_integer},
		{"#d", print_integer}, {"#u", print_unt}, {"+i", print_pint},
		{"+d", print_pint}, {"+u", print_unt}, {"+o", print_oct},
		{"+x", print_hex}, {"+X", print_upx}, {" i", print_sint},
		{" d", print_sint}, {" u", print_unt}, {" o", print_oct},
		{" x", print_hex}, {" X", print_upx}, {"R", print_rot},
		{"r", print_rev}, {"%", print_prg}, {"l", print_prg},
		{"h", print_prg}, {" +i", print_pint}, {" +d", print_pint},
		{"+ i", print_pint}, {"+ d", print_pint}, {" %", print_prg},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
