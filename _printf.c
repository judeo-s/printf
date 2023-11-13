#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - a function that prints formated text
 *
 * @str: const char*
 * Return: a formated char/str
 */
int _printf(const char *str, ...)
{
	int chars_printed = 0;
	va_list num_of_args;

	if (str == NULL)
		return (-1);

	va_start(num_of_args, str);

	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			chars_printed++;
		}
		else
		{
			str++;
			if (*str == '\0')
				break;
			if (*str == 'c')
			{
				char letter = va_arg(num_of_args, int);

				write(1, &letter, 1);
				chars_printed++;
			}
			else if (*str == 's')
			{
				char *string = va_arg(num_of_args, char*);
				int len_str = 0;

				while (string[len_str] != '\0')
					len_str++;

				write(1, string, len_str);
					chars_printed += len_str;
			}
			else if (*str == '%')
			{
				write(1, str, 1);
				chars_printed++;
			}
		}
		str++;
	}
	va_end(num_of_args);

	return (chars_printed);
}
