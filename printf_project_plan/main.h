#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_character(va_list args, char *buffer, unsigned int buf);
int print_string(va_list args, char *buffer, unsigned int buf);
int print_integer(va_list args, char *buffer, unsigned int buf);
int print_binary(va_list args, char *buffer, unsigned int buf);
int print_unt(va_list args, char *buffer, unsigned int buf);
int print_oct(va_list args, char *buffer, unsigned int buf);
int print_hex(va_list args, char *buffer, unsigned int buf);
int print_upx(va_list args, char *buffer, unsigned int buf);
int print_non_chars(va_list args, char *buffer, unsigned int buf);
int print_address(va_list args, char *buffer, unsigned int buf);
int print_rev(va_list args, char *buffer, unsigned int buf);
int print_rot(va_list args, char *buffer, unsigned int buf);
int print_long_integer(va_list args, char *buffer, unsigned int buf);
int print_long_unt(va_list args, char *buffer, unsigned int buf);
int print_long_oct(va_list args, char *buffer, unsigned int buf);
int print_long_hex(va_list args, char *buffer, unsigned int buf);
int print_long_upx(va_list args, char *buffer, unsigned int buf);
int print_hint(va_list args, char *buffer, unsigned int buf);
int print_hunt(va_list args, char *buffer, unsigned int buf);
int print_hoct(va_list args, char *buffer, unsigned int buf);
int print_hhex(va_list args, char *buffer, unsigned int buf);
int print_hupx(va_list args, char *buffer, unsigned int buf);
int print_pint(va_list args, char *buffer, unsigned int buf);
int print_noct(va_list args, char *buffer, unsigned int buf);
int print_nhex(va_list args, char *buffer, unsigned int buf);
int print_nupx(va_list args, char *buffer, unsigned int buf);
int print_sint(va_list args, char *buffer, unsigned int buf);
int (*get_func(const char *s, int index))(va_list, char *, unsigned int);
int print_func(const char *s, int index);
unsigned int handle_buffer(char *buffer, char c, unsigned int buf);
int print_buffer(char *buffer, unsigned int buf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);

#endif
