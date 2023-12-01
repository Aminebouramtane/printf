

#include "ft_printf.h"

int	ft_print_hex_upper(int nb)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_print_hex_upper(nb / 16);
		count += ft_print_hex_upper(nb % 16);
	}
	else
		count += ft_putchar(hex[nb]);
	return (count);
}
