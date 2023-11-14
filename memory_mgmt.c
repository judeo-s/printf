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
	if (!buffer)
		return (NULL);

	clear_buffer(buffer, size);
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
	int free_space = BUFFER_SIZE - _strlen(buffer);

	if (str_size > free_space)
		return (0);
	else
		return (1);
}


/**
 * _realloc - a function that reallocates more memory for parsed buffer.
 *
 * @buffer: char *
 * @size: int
 * Return: char *
 */
char *_realloc(char *buffer, int size)
{
	static char *new_buffer;

	new_buffer = buffer_alloc(size);
	if (new_buffer)
	{
		_memcpy(new_buffer, buffer, BUFFER_SIZE);
		free(buffer);
		BUFFER_SIZE = size;
	}
	else
		return (NULL);

	return (new_buffer);
}


/**
 * safe_copy - a function that copies data from one buffer to another
 *
 * @buffer: char *
 * @data: char *
 * Return: int
 */
int safe_copy(char *buffer, char *data)
{
	while (!check_utilization(buffer, _strlen(data)))
	{
		buffer = _realloc(buffer, BUFFER_SIZE + 1024);
	}
	str_concat(buffer, data);
	if (buffer)
		return (1);
	else
		return (0);
}
