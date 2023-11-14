.TH PRINTF 3 “November 2023” “Printf Project” “User Manual”

.SH NAME \_printf - format and print data

.SH SYNOPSIS \#include “main.h” .br \_printf(const char \*format, …);

.SH DESCRIPTION The \_printffunction prints formatted text to the
standard output, similar to the C standard library’s ()function. It
supports various conversion specifiers to handle different types of
data.

The function should be used by including the “main.h” header file in
your program.

.SH PROTOTYPE \_printf(const char \*format, …);

.SH USAGE To use \_printf, include the “main.h” header file in your
program. Call the function with a format string and any additional
arguments.

The format string may contain conversion specifiers, flags, and regular
characters. Some supported conversion specifiers include: .br %c-
character .br %s- string .br %d- base 10 integer .br - integer

Returns the number of characters in the output string on success, -1
otherwise.

.SH EXAMPLES \#include “main.h” .br main(void) { .br \_printf(“Hello,
%s\!”, “world”); .br return (0); .br }

.SH COMPILATION All files were created and compiled on Ubuntu 14.04.4
LTS using GCC 4.8.4. .br Compilation command: -Wall -Werror -Wextra
-pedantic \*.c

.SH SEE ALSO man printf - the standard io function for formating

.SH AUTHORS Jude Osam-Sackey <osamsackeyjude@gmail.com> .br Aminu Yiwere
<yiwereamin@gmail.com>

.SH BUGS Report bugs to <yiwereamin@gmail.com>.

.SH COPYRIGHT Copyright (C) 2023 ALX SE. This is free software.

.SH LICENSE This program comes with ABSOLUTELY NO WARRANTY.
