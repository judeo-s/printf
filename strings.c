#include "main.h"


/**
 * _strlen - a function that returns the size of a string
 *
 * @s: Pointer to an char variable
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	if (s)
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

	int size1, size2, x, y;

	if (string1 == NULL)
		string1 = "";

	if (string2 == NULL)
		string2 = "";

	string1 = s1;
	string2 = s2;
	size1 = _strlen(s1);
	size2 = _strlen(s2) + 1;
	x = size1;
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
