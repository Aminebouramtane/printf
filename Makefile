
NAME = libftprintf.a

FILES = ft_puchar	\
		ft_putnbr	\
		ft_putnbr	\

O_FILES = (FILES :.c=.o)

FLAGS = -Wall -Wextra -Werror
CC = cc

all : $(NAME)

$(NAME) : O_FILES
	ar r ${O_FILES}

