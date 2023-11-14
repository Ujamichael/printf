#include "main.h"

/**
 * get_struct_mem - pointer func to struct
 * @i: itr
 */

char* (*get_struct_mem(char i))(va_list)
{
	int j = 0;

	print mem[] =
	{
		{'c', print_c},
		{'s', print_s},
		{'\0', NULL}
	};
	while (mem[j].mem_var != '\0')
	{
		if (mem[j].mem_var == i)
			return (mem[j].mem_func);
		j++;
	}
	return (NULL);
}
/**
 * create_buffer - define buffer and allocate space
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		return (NULL);
	}
	return (buffer);
}
/**
 * print_buffer - write inpute to stdout
 * @buffer: container
 * @len: manage len
 * @pin: arg
 */
void print_buffer(char *buffer, int len, va_list pin)
{
	char *buff;

	buff = realloc(buffer, len); /* to correct size of buffer */
		write(1, buff, len);

	free(buff);
	va_end(pin);
}
/**
 * check_buffer_overflow - manage buffer space
 * @buffer: buffer
 * @len: calc len
 */
char check_buffer_overflow(char *buffer, int len)
{
	if (len > 1020)
	{
		write(1, buffer, len);
		len = 0;
	}
	return (len);
}

