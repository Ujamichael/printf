#include "main.h"
/**
 * _printf - custome printf func
 * @format: string
 * @...: ellipis
 * Return: arg
 */
int _printf(const char *format, ...)
{
	int print_char = 0, _strlen = 0;
	char *str, c = 0;
	va_list my_args;

	if (format == NULL)
		return (-1);

	va_start(my_args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else
		{
			format++;

			if (*format == '\0')
				break;
			if (*format == 'c')
				c = va_arg(my_args, int);
				write(1, &c, 1);
				print_char++;
			if (*format == '%')
				write(1, format, 1);
				print_char++;
			if (*format == 's')
				str = va_arg(my_args, char*);
				while (str[_strlen] != '\0')
					_strlen++;
				write(1, str, _strlen);
				print_char += _strlen;
		}
		format++;
	}
	va_end(my_args);
	return (print_char);
}
