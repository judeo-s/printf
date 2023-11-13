#include "main.h"

/**
 *_memcpy - a function to copy content of a certain string to
 *          another string specific.
 *
 * @dest: char *
 * @src: char *
 * @n: unsigned int
 * Return: char *
 */
void _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
}


/**
 * buffer_alloc - a fuction that allocates heap memory
 * @size: int
 * Return: char *
 */
char *buffer_alloc(int size)
{
	static char *buffer;

	buffer = (char *)malloc(size);
	if(!buffer)
		return (NULL);

	return (buffer);
}


/**
 * check_utilization - a function that checks if there is enough
 *                     space in the buffer for string concatination
 * @buffer: char *
 * @str_size: int
 * Return: int 
 */
int check_utilization(char *buffer, int str_size)
{
	int free_space = sizeof(buffer) - _strlen(buffer);
	if(str_size > free_space)
		return (0);
	else
		return (1);
}


/**
 * _realloc - a function that reallocates more memory for parsed buffer.
 *
 * @buffer: char *
 * Return: char *
 */
char *_realloc(char *buffer, int size)
{
	static char *new_buffer;

 	new_buffer = (char *)malloc(size);
	if (new_buffer)
	{
		_memcpy(new_buffer, buffer, sizeof(buffer));
		free(buffer);
	}
	else
		return (NULL);

	return (new_buffer);
}
