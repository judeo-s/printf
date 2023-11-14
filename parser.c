#include "main.h"
#include <stdio.h>

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
	format_t format_list[] = { {"c", _char}, {"s", _string}, {"%", _percent},
{"d", _integer}, {"i", _integer}, {"b", _binary}, {"r", _reverse},
{"R", _rot13}, {"u", _unsigned}, {"o", _octal}, {"x", _hex}, {"X", _HEX},
{"p", _address}, {NULL, NULL} };
	char *parsed_buffer, *temp_buffer;
	int x = 0, j, index = 0;

	parsed_buffer = buffer_alloc(BUFFER_SIZE);
	while (input_string[x])
	{
		if (input_string[x] == '%')
		{
			for (j = 0; format_list[j].symbol != NULL; j++)
			{
				if (input_string[x + 1] == format_list[j].symbol[0])
				{
					temp_buffer = format_list[j].f(args);	
					if (safe_copy(parsed_buffer, temp_buffer))
					{
						index = _strlen(parsed_buffer);
						break;
					}
				}
			}
			if (format_list[j].symbol == NULL)
			{
				parsed_buffer[index] = input_string[x];
				index++;
				x++;
			}
			else
			{
				x += 2;
				continue;
			}
		}
		parsed_buffer[index] = input_string[x];
		index++;
		x++;
	}
	parsed_buffer[index] = input_string[x];
	free(temp_buffer);
	return (parsed_buffer);
}
