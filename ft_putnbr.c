

# include "ft_printf.h"

int	ft_putnbr(int n)
{
	int count;

	count = 0;
	if (n == -2147483648)
	{
		count += write(1, "-2147483648", 11);
	}
	else if (n >= 0 && n <= 9)
	{
		count += ft_putchar(n + '0');
	}
	else if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else if (n < 0)
	{
		count += write(1, "-", 1);
		count +=  ft_putnbr(n * -1);
	}
	// printf("=====> %d\n", count);
	return (count);
}
