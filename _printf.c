#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - a function that prints formated text
 *
 * @str: const char*
 * Return: void
 */
void _printf(const char *str, ...)
{
	if (str)
	{
		char *parsed;
		va_list args;

		va_start(args, str);
		parsed = parser(str, args);
		va_end(args);
	}
}
