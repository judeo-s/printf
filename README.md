# _printf Project

This team project is part of the first-year curriculum at ALX, aiming to replicate the functionality of the C standard library's `printf()` function. The project encompasses a variety of tasks that involve teamwork, application of variadic functions, understanding the complexities of the `printf` function, and managing a project with multiple files.

## Learning Objectives

By working on this project, you will gain knowledge in the following areas:

- **Version Control with Git:** Learn how to use Git in a team setting, managing branches, resolving conflicts, and maintaining a clean version history.

- **Variadic Functions:** Apply variadic functions to a substantial project, understanding how to handle a variable number of arguments.

- **Complexities of printf:** Gain insight into the intricacies of the `printf` function, including handling various format specifiers and flags.

- **Project Management:** Learn how to manage a project with numerous files efficiently, establishing a productive workflow.

## Prototype

```c
int _printf(const char *format, ...);
```

## Usage

Prints a string to the standard output, according to a given format. Key details about usage:

- All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4.
- Compilation command: `gcc -Wall -Werror -Wextra -pedantic *.c`
- Returns the number of characters in the output string on success, -1 otherwise.
- Call it this way: `_printf("format string", arguments...)` where the format string can contain conversion specifiers, flags, and regular characters.

## Examples

- `_printf("Hello, main\n")` prints "Hello, Main", followed by a new line.
- `_printf("%s", "Hello")` prints "Hello".
- `_printf("This is a number: %d", 98)` prints "This is a number: 98".

## Tasks

These are the tasks for this project, with completed tasks linking to the corresponding files:

0. **[I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](https://github.com/judeo-s/printf/blob/main/_printf.c)**
   - Write a function that produces output according to format.
   - Conversion specifiers: `c` (character), `s` (string).

1. **Education is when you read the fine print. Experience is what you get if you don't**
   - Handle the following conversion specifiers:
     - `d` (base 10 integer)
     - `i` (integer)
