#include "main.h"

/**
 * converter- function converts base to string
 * @numb:number to print
 * @base:base to convert
 * @lowercase: flag if hex values need to lowercase
 * Return:result string
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
	do {
		*--ptr = rep[numb % base];
		numb /= base;
	} while (numb != 0);

	return (ptr);
}
