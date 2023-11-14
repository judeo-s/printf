#ifndef PRINTF_HEADER
#define PRINTF_HEADER

extern int BUFFER_SIZE;

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct format_list
{
	char *symbol;
	char * (*f)(va_list);
}format_t;


int _printf(const char *, ...);
char * parser(const char *, va_list);


char *buffer_realloc(char *buffer);
char *buffer_alloc(int size);
int check_utilization(char *buffer, int str_size);
int safe_copy(char *buffer, char *data);

char *_hex(va_list args);
char *_HEX(va_list args);
char *_octal(va_list args);
char *_binary(va_list args);

char *_unsigned(va_list args);
char *_integer(va_list args);
char *int2str(int num);

int _strlen(char *s);
char *_string(va_list args);
void str_concat(char *s1, char *s2);
char *_percent(va_list args);
char *_char(va_list args);

char *_reverse(va_list args);
char *_rot13(va_list args);
void print_buffer(char *buffer);
void clear_buffer(char* buffer, int size);
#endif
