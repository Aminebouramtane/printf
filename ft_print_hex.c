

#include "ft_printf.h"

int	ft_print_hex(unsigned long nb)
{
	int		count;
	char	*ptr;

	count = 0;
	ptr = "0123456789abcdef";
	if (nb > 16)
	{
		count += ft_print_hex(nb / 16);
		count += ft_print_hex(nb % 16);
	}
	else
	{
		count += ft_putchar(ptr[nb]);
	}
	return (count);
}
// int main()
// {
// 	char *s = "jj";
// 	printf("|%d|\n", ft_print_hex((size_t)s));
// 	printf("|%p|\n", s);
// }

