

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int count;

	count = 0;
	if (nb >= 0 && nb <= 9)
		count += ft_putchar(nb + '0');
	else if (nb > 9)
	{
		count += ft_print_u(nb / 10);
		count += ft_print_u(nb % 10);
	}
	return (count);
}
