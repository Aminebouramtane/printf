

#include "ft_printf.h"

int    ft_putstr(char *str)
{
    size_t  i;

    i = 0;
    if (!str)
        return ft_putstr("(null)");
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}
