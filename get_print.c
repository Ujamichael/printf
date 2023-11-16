#include "main.h"

/**
 * get_print- prints string
 * @s: contains strings
 * Return: returns value on success
 */

int (*get_print(char s))(va_list, flags_s *)
{
	hp func_arr[] = {
		{'i', print_int},
		{'s', print_strings},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_lg},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
	};
	int totalflags = 14;

	register int i;

	for (i = 0; i < totalflags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
