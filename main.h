#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* Flag Modifier Macros */
#define PLUS 1
#define SPACE 2
#define HASH 4
#define ZERO 8
#define NEG 16
#define PLUS_FLAG (flags & 1)
#define SPACE_FLAG ((flags >> 1) & 1)
#define HASH_FLAG ((flags >> 2) & 1)
#define ZERO_FLAG ((flags >> 3) & 1)
#define NEG_FLAG ((flags >> 4) & 1)

/* Length Modifier Macros */
#define SHORT 1
#define LONG 2
int _printf(const char *format, ...);
typedef struct formatter {
	char * symbol;
	void (*f)(char *);
} format_me;
void (*converter(char *))(va_list list);
void print_char(va_list list);
void print_string(va_list list);
void print_d(va_list list);
void print_i(va_list list);
#endif
