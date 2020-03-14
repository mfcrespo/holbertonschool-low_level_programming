#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 *struct dataformat - defines a character like a data type
 *@data: represent some data type
 *@correctformat: prints data in correct format
 *Description: Contains a character and return a function pointer
 */

typedef struct dataformat
{
	char *data;
	void (*correctformat)(va_list);
} type_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
