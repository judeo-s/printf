#include "main.h"

/**
 * _char - a funciton to generate a char variadic function as string.
 *
 * @args: va_list
 * Return: char *
 */
char *_char(va_list args)
{
	char *str = buffer_alloc(2);
	str[0] = (char)va_arg(args, int);
	str[1] = '\0';
	return str;
}


/**
 * _percent - a function that converts a % sign into string.
 *
 * @args: va_list
 * Return: char *
 */
char *_percent(__attribute__((unused))va_list args)
{
	char *str = buffer_alloc(2);
	str[0] = '%';
	str[1] = '\0';
	return str;
}


/**
 * _string - a function that retrieves strings from variadic arguments
 *
 * @args: va_list
 * Return: char *
 */
char *_string(va_list args)
{
	char *string = va_arg(args, char *);
	return (string);
}


/**
 * _strlen - a function that returns the size of a string
 *
 * @s: Pointer to an char variable
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	
	for (i = 0; s[i] != '\0'; ++i)
	{
		continue;
	}

	return (i);
}


/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: char *
 * @s2: char *
 * Return: char *
 */
void str_concat(char *s1, char *s2)
{
	static char *string1;
	static char *string2;

	int size, x, y;

	if (string1 == NULL)
		string1 = "";

	if (string2 == NULL)
		string2 = "";

	string1 = s1;
	string2 = s2;
	size = _strlen(s1);
	x = size;
	y = 0;

	while (string2[y] != '\0')
	{
		string1[x] = string2[y];
		x++;
		y++;
	}
	string1[x] = '\0';

	free(string2);
}
