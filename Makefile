
NAME = libftprintf.a

FILES = ft_putchar.c	\
		ft_putstr.c		\
		ft_putnbr.c

O_FILES = $(FILES:%.c=%.o)

all : $(NAME)

$(NAME) : $(O_FILES)
	ar -r $@ $(O_FILES)

clean :
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
