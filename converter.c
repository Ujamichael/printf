#include "main.h"

/**
 * converter function converts base to string
 * @num:number
 * @base:base
 * @lowercase: flag if hexa values need to lowercase
 * return: result string
 */

char *converter(unsigned long int numb, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do
	{
		*--ptr = rep[numb % base];
		numb /= base;
	} while (numb != 0);

	return (ptr);
}
