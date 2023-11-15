#include "main.h"

/**
 * _printf- prints output according to a format
 * @format: format string with characters and specifiers
 * des:this function will call get_print() that will
 * determine which printing function to call depending on the
 * specifiers and return the lenght of the formatted string
 * Return: returns lenght of formated string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_s *);
	const char *p;
	va_list args;
	flags_s flags = {0, 0, 0};

	register int counter = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				counter += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
			p++;
			pfunc = get_print(*p);
			counter += (pfunc)
				? pfunc(args, &flags)
				: _printf("%%%c", *p);
		}
		else
			counter += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	return (counter);
}
