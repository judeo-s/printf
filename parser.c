#include "main.h"

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


/**
 * parser - a function that converts all format specifiers in
 *          a unformated text into formated text.
 *
 * @input_string: const char *
 * @args: va_list
 * Return: char *
 */
char *parser(const char *input_string, va_list args)
{
	char *parsed_buffer, *temp_buffer;
	int x, j, index;

	parsed_buffer = buffer_alloc(BUFFER_SIZE);
	x = 0;
	index = 0;

	while(input_string[x])
	{
		if(input_string[x] == '%')
		{
			for (j = 0; format_list[j].symbol != NULL; j++)
			{
				if (input_string[x + 1] == format_list[j].symbol[0])
				{
					temp_buffer = format_list[j].f(args);
					if(safe_copy(parsed_buffer, temp_buffer))
					{
						index = _strlen(parsed_buffer);
						break;
					}
				}
			}
			x+=2;
			continue;
		}
		parsed_buffer[index] = input_string[x];
		index++;	
		x++;
	}
	return (parsed_buffer);
}

