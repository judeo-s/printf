#include "main.h"

/**
 *
 */
char * parser(const char *input_string, va_list args)
{
	char * parsed_buffer;
	int x;

	format_t format_list[] = {
		{"c", _char},
		{"s", _string},
		{"%", _percent},
		{"d", _integer},
		{"i", _integer},
		{"b", _binary},
		{"r", _reverse},
		{"R", _rot13},
		{"u", _unsigned},
		{"o", _octal},
		{"x", _hex},
		{"X", _HEX},
		{NULL, NULL}
	};

	parsed_buffer = buffer_alloc(BUFFER);
	x = 0;

	while(input_string[x])
	{
		
		x++;
	}
	return (parsed_buffer);
}

