

# include "printf.h"

void ft_putnbr(int nb, size_t len)
{
	if (nb ==  -2147483648)
	{
		ft_putchar("-", len);
		ft_putnbr(2147483648, len);
	}
	else if (nb >= 0 && nb <= 9)
	{
		nb = nb + '0';
		ft_putchar(nb, len);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
	else if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-', len);
		ft_putnbr(nb, len);
	}
}