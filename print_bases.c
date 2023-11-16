#include "main.h"

/**
 * print_hex- prints hexadecimal base,
 * @len: va_list args from _printf
 * @f: pointer to struct flags
 * Return: number of char printed
 */

int print_hex(va_list len, flags_s *f)
{
	unsigned int numb = va_arg(len, unsigned int);
	char *str = converter(numb, 16, 1);
	int counter = 0;

	if (f->hash == 1 && str[0] != '0')
		counter += _puts("0x");
	counter += _puts(str);
	return (counter);
}

/**
 * print_hex_lg - prints base in uppercase
 * @len: va_list args
 * @f: pointer to struct flags
 * Return:numb of char printed
 */

int print_hex_lg(va_list len, flags_s *f)
{
	unsigned int numb = va_arg(len, unsigned int);
	char *str = converter(numb, 16, 0);
	int counter = 0;

	if (f->hash == 1 && str[0] != '0')
		counter += _puts("0X");
	counter += _puts(str);
	return (counter);
}

/**
 * print_binary - prints to base 2
 * @len: va_list args from _printf
 * @f: pointer to struct flags
 * Return: numb of char printed
 */

int print_binary(va_list len, flags_s *f)
{
	unsigned int numb = va_arg(len, unsigned int);
	char *str = converter(numb, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal- prints base 8
 * @len:va_list args from _printf
 * @f:pointer to struct flags
 * Return:numb of char printed
 */

int print_octal(va_list len, flags_s *f)
{
	unsigned int numb = va_arg(len, unsigned int);
	char *str = converter(numb, 8, 0);
	int counter = 0;

	if (f->hash == 1 && str[0] != '0')
		counter += _putchar('0');
	counter += _puts(str);
	return (counter);
}
