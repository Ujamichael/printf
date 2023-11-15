#include "main.h"


int (*get_print(char s))(va_list, flags_s *)
{
	hp func_arr[] = {
		{'i', print_int},
		{'c', print_char},
		{'s', print_strings},
		{'d', print_int},
		{'u', print_unsigned},
		{'b', print_binary},
		{'x', print_hex},
		{'X', print_hex_lg},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
	};
	int totalflags = 14;

	register int i;
	for (i =0; i< totalflags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return(NULL);
}
