

# include "printf.h"

void    ft_putchar(char c, size_t len)
{
    write(1, &c, 1);
    len++;
}
