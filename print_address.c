#include "main.h"

/**
 * print_address- prints address to input in hexa format
 * @len: va_list args from printf
 * @f:pointer to struct flags
 * Return:numb of char printed
 */

int print_address(va_list len, flags_s *f)
{
	char *str;
	unsigned long int a = va_arg(len, unsigned long int);

	register int counter = 0;

	(void)f;

	if (!a)
		return (_puts("(nil)"));
	str = converter(a, 16, 1);
	counter += _puts("0x");
	counter += _puts(str);
	return (counter);
}
