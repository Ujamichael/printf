#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <strings.h>
#include <stdlib.h>


/**
 * struct flags - struct containing flags to switch on
 * when flag specifier is passed to _printf()
 * @plus
 * @space
 * @hash
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_s;

/**
 * struct to handle print
 * depending on the format specifier passed to _printf()
 * @c:format specifier
 * @f:pointer to the correct printing function
 */
typedef struct handleprint
{
	char c;
	int (*f)(va_list ag, flags_s *f);
}hp;

/*print_number */
int print_int(va_list 1, flags_s *f);
void print_numb(int n);
int print_unsigned(va_list 1, flags_s *f);
int digit_counter(int i);

/*print_bases*/
int print_hex(va_list 1, flags_s *f);
int print_hex_lg(va_list 1, flags_s *f);
int print_binary(va_list 1, flags_s f*);
int print_octal(va_list 1, flags_s *f);

/*converter*/
char *converter(unsigned long int numb, int base, int lowercase);

/*_printf*/
int _printf(const char *format, ...);

/*get_flag*/
int get_flag(char s, flags_s *f);

/*print_alpha */
int print_strings(va_list 1, flags_s *f);
int print_char(va_list 1, flags_s *f);

/*get_print*/
int (*get_print(char s))(va_list, flags_s *);

/*write_functions*/
int _putchar(char c);
int _puts(char *str);

/*print_custom */
int print_rot13(va_list 1, flags_s *f);
int print_rev(va_list 1, flags_s *f);
int print_bigs(va_list 1, flags_s *f);


/*print_address*/
int print_address(va_list 1, flags_s *f);

/*print_percent*/
int print_percent(va_list 1, flags_s *f);


#endif
