#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <strings.h>
#include <stdlib.h>

int _printf(const char *format, ...);

/* strcyp function that copy string */
char *copy(char *dest, char *src);

/* func that print char & string */
char *print_c(va_list pin);
char *print_s(va_list pin);


/* buffer functions */
char* (*get_struct_mem(char i))(va_list);
char *create_buffer(void);
void print_buffer(char *buffer, int len, va_list pin);
char check_buffer_overflow(char *buffer, int len);


/*
 * type - struct type
 * @print: defined type
 * @mem_var: member 1
 * @mem_func(va_list): member 2
 */
typedef struct type
{
	char mem_var;
	char* (*mem_func)(va_list);
} print;

#endif
