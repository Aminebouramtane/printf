

#include "printf.h"

int	ft_print_hex(unsigned int nb)
{
    int	count;
	char	*ptr;

	count = 0;
	ptr = "0123456789abcdef";
	if(nb > 16)
	{
		count += ft_print_hex(nb / 16);
		count += ft_print_hex(nb % 16);
	}
	else
	{
		count += ft_putchar(ptr[nb]);
	}
}