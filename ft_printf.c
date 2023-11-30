


# include "printf.h"

static int ft_check_if(char c, va_list list)
{
	int counter;

	counter = 0;
	if (c == 'c')
		counter += ft_putchar(va_arg(list, int));
	else if (c == 's')
		counter += ft_putstr(va_arg(list, char *));
	else if (c == 'd')
		counter += ft_putnbr(va_arg(list, int));
	return (counter);
}

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if(format[i] == '%')
		{
			i++;
			count += ft_check_if(format[i], ap);
		}
		else
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	return count;
}

int main ()
{
	int a = ft_printf("%s  %d   %c\n", "amine", 3333, 'b');
	int b =    printf("%s  %d   %c\n", "amine", 3333, 'b');

	printf("%d\n", a);
	printf("%d\n", b);
}
