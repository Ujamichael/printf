#include "main.h"

/**
 * print_string- loops through a string and prints every char
 * @len: va_list args from ptintf
 * @f: pointer to struct flags
 * Return: numb of char printed
 */

int print_string(va_list len, flags_s *f)
{
	char *s = va_arg(len, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a single char
 * @len:va_list args
 * @f:pointer to struct flags
 * Return:numb of char printed
 */

int print_char(va_list len, flags_s *f)
{
	(void)f;
	_putchar(va_arg(len, int));
	return (1);
}
