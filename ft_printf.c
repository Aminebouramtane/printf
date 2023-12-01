


# include "printf.h"

static int ft_check_if(char c, va_list list)
{
	int counter;

	counter = 0;
	if (c == 'c')
		counter += ft_putchar(va_arg(list, int));
	else if (c == 's')
		counter += ft_putstr(va_arg(list, char *));
	else if (c == 'd' || c == 'i')
		counter += ft_putnbr(va_arg(list, int));
	else if (c == 'p')
	{
		counter += ft_putstr("0x");
		counter += ft_print_hex((unsigned long)va_arg(list, void *));
	}
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
		if (format[i] == '%')
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
	va_end(ap);
	return (count);
}

int main ()
{
	// int c = 4;
	int s = 4;
	// printf("%d",(unsigned int)c);
	ft_printf("%p\n", &s);
	printf("%p\n", &s);

	// printf("%d\n", a);
	// printf("%d\n", b);
}
