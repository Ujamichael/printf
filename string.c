#include "main.h"
/**
 * copy - strcyp function
 * @dest: arg 1
 * @src: arg 2
 * Return: dest
 */
char *copy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/**
 * print_s - function that print string
 * @pin: char
 * Return: arg
 */
char *print_s(va_list pin)
{
	char *s;
	char *c;
	int lenght;

	c = va_arg(pin, char *);

	if (c == NULL)
	{
		return (NULL);
	}
	while (c[lenght] != '\0')
		lenght++;
	s = malloc(sizeof(char) * lenght + 1);

	if (s == NULL)
		return (NULL);
	return (copy(s, c));
}
