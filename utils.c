#include "main.h"

/**
 * clear_buffer - a fuction that clears existing data in allocated buffers.
 *
 * @buffer: char *
 * @size: int
 * Return: void
 */
void clear_buffer(char *buffer, int size)
{
	int i;

	for (i = 0; i < size; ++i)
	{
		buffer[i] = '\0';
	}
}


/**
 * print_buffer - a function that is used to print to the screen in chuncks.
 *
 * @buffer: char *
 * Return: void
 */
void print_buffer(char *buffer)
{
	int len = _strlen(buffer);
	int written = 0, to_write, result;

	while (written < len)
	{
		to_write = len - written;
		if (to_write > 1024)
		{
			to_write = 1024;
		}
		result = write(1, buffer + written, to_write);
		if (result == -1)
		{
			break;
		}
		written += result;
	}
}



/**
 * _rot13 - a function that uses rot13 to encrypt strings
 *
 * @args: va_list
 * Return: char *
 */
char *_rot13(va_list args)
{
	char *text = _string(args);
	int counter, index;

	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cipher[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; text[index] != '\0'; index++)
	{
		for (counter = 0; counter < 53; counter++)
		{
			if (text[index] == normal[counter])
			{
				text[index] = cipher[counter];
				break;
			}
		}
	}
	return (text);
}


/**
 * _reverse - a function that prints a string in reverse
 *
 * @args: va_list
 * Return: void
 */
char *_reverse(va_list args)
{
	char *text = _string(args);
	int size = _strlen(text) - 1;
	int index = 0;
	int i;
	char *rev_string;

	rev_string = buffer_alloc(size);

	for (i = size; i >= 0; --i)
	{
		rev_string[index] = text[i];
		index++;
	}
	rev_string[size + 1] = '\0';
	free(text);

	return (rev_string);
}


/**
 * _address - a function that prints the address of a variable
 *
 * @args: va_list
 * Return: char *
 */
char *_address(va_list args)
{
	int digit, j, i = 0;
	unsigned long address = va_arg(args, unsigned long);
	char temp, *str = buffer_alloc(20);

	do {
		digit = address % 16;
		str[i++] = (digit < 10) ? '0' + digit : 'a' + digit - 10;
		address /= 16;
	} while (address != 0);
	str[i++] = 'x';
	str[i++] = '0';

	for (j = 0; j < i / 2; ++j)
	{
		temp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = temp;
	}
	str[i] = '\0';
	return (str);
}
