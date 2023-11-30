

#include "printf.h"

char    *ft_putstr(char *str, size_t len)
{
    size_t  i;

    i = 0;
    if (!str)
        ft_putstr("(null)", len);
    else
    {
        while (str[i])
        {
            ft_puchar(str[i], len);
            i++;
        }
        
    }
    return (str);
}