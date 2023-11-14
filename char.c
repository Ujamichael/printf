#include "main.h"
/**
 * print_c - function that print char
 * @pin: char
 * Return: string of char
 */
char *print_c(va_list pin)
{
	char c;
	char *p;

	c = va_arg(pin, int);

	if (c == 0)
	{
		return ('\0');
	}
	p = malloc(sizeof(char) * 2);

	if (p == NULL)
	{
		return (NULL);
	}
	p[0] = c;
	p[1] = '\0';

	return (p);
}
