#include <stdarg.h>
#include "main.h"

/**
 * int2str - a function to convert signed integers to strings
 *
 * @num: int
 * Return: char *
 */
char *int2str(int num)
{
	char temp, *str = buffer_alloc(12);
	int i = 0, isNegative = 0;
	int start, end;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	while (num != 0)
	{
		int rem = num % 10;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / 10;
	}
	if (isNegative)
	{
		str[i++] = '-';
	}
	str[i] = '\0';

	end = i - 1;
	start = 0;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}


/**
 * long2str - a function to convert signed integers to strings
 *
 * @num: int
 * Return: char *
 */
char *long2str(long num)
{
	char temp, *str = buffer_alloc(20);
	int i = 0, isNegative = 0;
	int start, end;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	while (num != 0)
	{
		int rem = num % 10;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / 10;
	}
	if (isNegative)
	{
		str[i++] = '-';
	}
	str[i] = '\0';

	end = i - 1;
	start = 0;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}



/**
 * _integer - a function that converts variadic integer inputs to strings.
 *
 * @args: va_list
 * Return: char *
 */
char *_integer(va_list args)
{
	int num = va_arg(args, int);
	char *str = int2str(num);

	return (str);
}


/**
 * _unsigned - a function that converts variadic unsigned
 *             integer inputs to strings.
 *
 * @args: va_list
 * Return: char *
 */
char *_unsigned(va_list args)
{
	long num = va_arg(args, long);
	char *str;

	if (num >= 0)
		str = long2str(num);
	else
		return ("");
	return (str);
}
