#include "main.h"

int BUFFER_SIZE = 1024;

/**
 * _printf - a function that prints formated text
 *
 * @str: const char*
 * Return: a formated char/str
 */
int _printf(const char *str, ...)
{
	char *buffer;
	va_list args;
	int len;

	BUFFER_SIZE = 1024;
	if (str == NULL)
		return (-1);

	va_start(args, str);
	buffer = parser(str, args);

	va_end(args);

	print_buffer(buffer);
	len = _strlen(buffer);
	free(buffer);
	return (len);
}
