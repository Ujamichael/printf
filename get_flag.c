#include "main.h"

/**
 * _get_flag turns on flags if _printf() finds flag
 * modifier in format
 * @s: holds flag specifier
 * @f: pointer
 * returns 1 if flag has been turned on and 0 if not
 */

int get_flag(char s, flags_s *f)
{
	int i = 0;
	switch (s)
	{
		case '+':
			f->plus = 1;
			i=1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}

