#include "main.h"

/**
 * _putchar() writes output to stdout
 * @c: char to print
 * return 1 on sucess and -1 on error
 */

int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i=0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++
	}
	return (1);
}

/**
 * _puts() prints a string to stdout
 * @str: pointer to the string 
 * return number of chars printed
 */
int  _puts(char *str)
{
	register int i;
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
