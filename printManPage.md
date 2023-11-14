# Printf Project

This project, part of the first-year curriculum at ALX, aims to replicate the functionality of the C standard library's `printf()` function. The project encompasses a variety of tasks that involve teamwork, application of variadic functions, understanding the complexities of the `printf` function, and managing a project with multiple files.

## Learning Objectives

- **Version Control with Git:** Learn how to use Git in a team setting, managing branches, resolving conflicts, and maintaining a clean version history.
- **Variadic Functions:** Apply variadic functions to a substantial project, understanding how to handle a variable number of arguments.
- **Complexities of printf:** Gain insight into the intricacies of the `printf` function, including handling various format specifiers and flags.
- **Project Management:** Learn how to manage a project with numerous files efficiently, establishing a productive workflow.

## Prototype

```c
int _printf(const char *format, ...);
```

## Usage

To use `_printf`, include the "main.h" header file in your program. Call the function with a format string and any additional arguments.

The format string may contain conversion specifiers, flags, and regular characters. Some supported conversion specifiers include:

- `%c` - character
- `%s` - string
- `%d` - base 10 integer
- `%i` - integer

Returns the number of characters in the output string on success, -1 otherwise.

## Examples

```c
#include "main.h"

int main(void) {
    _printf("Hello, %s!\n", "world");
    return (0);
}
```

## Compilation

All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4.

Compilation command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

## See Also

- `man printf` - the standard I/O function for formatting

## Authors

- Jude Osam-Sackey <osamsackeyjude@gmail.com>
- Aminu Yiwere <yiwereamin@gmail.com>

## Bugs

Report bugs to <yiwereamin@gmail.com>.

## Copyright

Copyright (C) 2023 ALX SE. This is free software.

## License

This program comes with ABSOLUTELY NO WARRANTY.
```

