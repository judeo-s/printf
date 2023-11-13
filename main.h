#ifndef PRINTF_HEADER
#define PRINTF_HEADER

#define BUFFER 1024
#include <stdarg.h>
#include <stdlib.h>

typedef struct format_list
{
	char *symbol;
	char * (*f)(va_list);
}format_t;

void _printf(const char *, ...);
char * parser(const char *, va_list);


char *buffer_realloc(char *buffer);
char *buffer_alloc(int size);
int check_utilization(char *buffer, int str_size);

int _strlen(char *s);
void _strcpy(char *dest, char *src, unsigned int n);
void str_concat(char *s1, char *s2);

char *_reverse(va_list args);
char *_rot13(va_list args);
#endif
