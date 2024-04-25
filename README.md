# Project `ft_printf`

## Description
This project is part of the 42 curriculum, focusing on recreating the functionality of the standard C library function `printf`. The `ft_printf` function formats and prints data according to a format specifier, providing a customizable and flexible output mechanism. This project aims to enhance your understanding of string parsing, memory management, and variadic functions in C.

## Requirements
- A C compiler (gcc/clang recommended)
- Basic knowledge of C programming
- Understanding of format specifiers and variadic functions

## Installation
1. Clone the repository:
  `git clone [repository_url]`
  `cd ft_printf`
2. Compile the project:
  `make`
This will compile the `libftprintf.a` library.

## Usage
1. Include the `ft_printf.h` header file in your C program.
2. Call the `ft_printf` function with the format string and optional arguments.
3. The function will print the formatted output to the standard output.

Format Specifiers
The ft_printf function supports the following format specifiers:

- `%c`: Character
- `%s`: String
- `%d`, `%i`: Signed decimal integer
- `%u`: Unsigned decimal integer
- `%x`,`%X`: Unsigned hexadecimal integer (lowercase or uppercase)
- `%p`: Pointer address
- `%%`: Percent sign

Example usage:
```c
#include "ft_printf.h"

int main(void)
{
 ft_printf("Hello, %s!\n", "world");
 return (0);
}
