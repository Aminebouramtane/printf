
NAME = libftprintf.a

FILES = ft_putchar.c	\
		ft_putstr.c		\
		ft_putnbr.c		\
		ft_print_hex.c	\
		ft_print_u.c	\
		ft_print_hex_lower.c	\
		ft_print_hex_upper.c \
		ft_printf.c

O_FILES = $(FILES:%.c=%.o)

all : $(NAME)

$(NAME) : $(O_FILES)
	ar -r $@ $(O_FILES)

clean :
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
