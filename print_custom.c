#include "main.h"

/**
 * print_bigS- non printable chars
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \X, followed by the ASCII Ccode value in
 * hexadecimal(upper case)
 * @len: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * the flag passed
 * Return: numb of char
 */

int print_bigS(va_list len, flags_s *f)
{
	int i, counter = 0;
	char *res;
	char *s = va_arg(len, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			counter += 2;
			res = converter(s[i], 16, 0);
			if (!res[1])
				counter += _putchar('0');
			counter += _puts(res);
		}
		else
			counter += _putchar(s[i]);
	}
	return (counter);
}

/**
 * print_rev- prints a string in reverse
 * @len: argument from _printf
 * @f:pointer to struct flags
 * Return: length of printed string
 */

int print_rev(va_list len, flags_s *f)
{
	int i = 0, j;
	char *s = va_arg(len, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

/**
 * print_rot13- prints a string using rot13
 * @len: list of arg from _Printf
 * @f: pointer to struct flags
 * Return: len of printed string
 */

int print_rot13(va_list len, flags_s *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(len, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}

/**
 * print_percent- prints percent
 * @len: va_list args from _printf
 * @f:pointer to struct flags
 * Return: numb of char printed
 */

int print_percent(va_list len, flags_s *f)
{
	(void)len;
	(void)f;
	return (_putchar('%'));
}
