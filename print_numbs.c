#include "main.h"

/**
 * print_int- prints integer
 * @len:va_list of argumentsfrom _printf()
 * @f:pointer to the struct flags
 * if a flag is passed to printf
 * Return:counter value
 */

int print_int(va_list len, flags_s *f)
{
	int n = va_arg(len, int);
	int res = digit_counter(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * digit_counter- returns number of dgits for _printf()
 * @i: integer iteration
 * Return: number of dgits
 */

int digit_counter(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = 1 * -1;
	else
		u = 1;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

/**
 * print_numb-helper func that loops through and prints all its digits
 * @n: integer to be printed
 * Return:nothing
 */

void print_numb(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;
	if (n1 / 10)
		print_numb(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * print_unsigned- prints postive integers
 * @len:va_list of args from _Printf
 * Return: number of char printed
 * @f: pointer to struct flags
 */

int print_unsigned(va_list len, flags_s *f)
{
	unsigned int u = va_arg(len, unsigned int);
	char *str = converter(u, 10, 0);

	(void)f;
	return (_puts(str));
}
