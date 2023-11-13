#include "main.h"


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
 * _rot13 - a function that uses rot13 to encrypt strings
 *
 * @s: string input
 * Return: char *
*/
char *_rot13(va_list args)
{
	char *text = va_arg(args, char *);
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
 * @s: Pointer to an char variable
 * Return: void
 */
char *_reverse(va_list args)
{
	char *text = va_arg(args, char *);
	int size = _strlen(text) - 1;
	int index = 0;
	int i;
	static char *rev_string;

	rev_string = buffer_alloc(size);

	for (i = size; i >= 0; --i)
	{
		rev_string[index] = text[i];
		index++;
	}
	rev_string[size + 1] = '\0';
	free (text);

	return (rev_string);
}

