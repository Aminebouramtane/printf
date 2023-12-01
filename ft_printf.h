
#ifndef YY
#define YY
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_print_hex(unsigned long nb);
int	ft_print_u(unsigned int nb);
int	ft_print_hex_lower(int nb);
int	ft_print_hex_upper(int nb);
#endif
