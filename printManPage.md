```markdown
# _printf(3) User Manual

## NAME

`_printf` - format and print data

## SYNOPSIS

```c
#include "main.h"
int _printf(const char *format, ...);
```

## DESCRIPTION

The `_printf` function prints formatted text to the standard output, similar to the C standard library's `printf()` function. It supports various conversion specifiers to handle different types of data.

The function should be used by including the "main.h" header file in your program.

## PROTOTYPE

```c
int _printf(const char *format, ...);
```

## USAGE

To use `_printf`, include the "main.h" header file in your program. Call the function with a format string and any additional arguments.

The format string may contain conversion specifiers, flags, and regular characters. Some supported conversion specifiers include:
- `%c` - character
- `%s` - string
- `%d` - base 10 integer
- `%i` - integer

Returns the number of characters in the output string on success, -1 otherwise.

## EXAMPLES

```c
#include "main.h"
int main(void) {
    _printf("Hello, %s!\n", "world");
    return (0);
}
```

## COMPILATION

All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4.

Compilation command: `gcc -Wall -Werror -Wextra -pedantic *.c`

## SEE ALSO

- `man printf` - the standard I/O function for formatting

## AUTHORS

- Jude Osam-Sackey <osamsackeyjude@gmail.com>
- Aminu Yiwere <yiwereamin@gmail.com>

## BUGS

Report bugs to <yiwereamin@gmail.com>.

## COPYRIGHT

Copyright (C) 2023 ALX SE. This is free software.

## LICENSE

This program comes with ABSOLUTELY NO WARRANTY.
```
