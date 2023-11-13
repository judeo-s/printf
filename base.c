#include "main.h"

/**
 * _binary - a function that converts integer values to binary string
 *
 * @args: va_list
 * Return: char *
 */
char* _binary(va_list args)
{
	int i, num;
	char *binary = buffer_alloc(33);
	char *bin_no_zeros;

	num = va_arg(args, int);
	binary[32] = '\0';

	if (num == 0)
    {
        return ("0");
    }

	for(i = 31; i >= 0; --i, num >>= 1)
	{
		binary[i] = (num & 1) + '0';
	}

	i = 0;
	while(binary[i] == '0')
	{
		bin_no_zeros = &binary[i];
		i++;
	}
	if(bin_no_zeros)
	{
		bin_no_zeros = &binary[i];
		free(binary);
	    return (bin_no_zeros);
	}
	return (binary);
}


/**
 * _octal - a function that converts integer values to octal string
 *
 * @args: va_list
 * Return: char *
 */
char *_octal(va_list args)
{
	char* octal_str = buffer_alloc(33);
	int i, j, num;

	num = va_arg(args, int);
	i = 0;

	do{
		octal_str[i++] = (num % 8) + '0';
		num /= 8;
	}
	while (num != 0);

    octal_str[i] = '\0';
	
	for (j = 0; j < i / 2; ++j)
	{	
		char temp = octal_str[j];
		octal_str[j] = octal_str[i - j - 1];
		octal_str[i - j - 1] = temp;
	}
	return octal_str;
}

