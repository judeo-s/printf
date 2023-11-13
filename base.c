#include "main.h"


/**
 * _binary - a function that converts integer values to binary string
 *
 * @args: va_list
 * Return: char *
 */
char* _binary(va_list args){
	int i, num;
	char *binary = buffer_alloc(33);

	binary[32] = '\0';
	

	for(i = 31; i >= 0; --i, num >>= 1)
	{
		binary[i] = (num & 1) + '0';
	}
    return (binary);
}


/**
 * _octal - a 
 *
 */
char *_octal(va_list args)
{
	int num
	return (str);
}
