NAME = libftprintf.a

SRC = ft_printf.c ft_putadress.c ft_putchar.c ft_puthexnbr.c ft_putnbr.c ft_putstr.c ft_putunsigned.c

OBJS = ${SRC:.c=.o}
CC = cc 
CFLAGS=-Wall -Wextra -Werror

all : $(NAME)

$(NAME): ${OBJS}
	ar rc ${NAME} $?

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<
	
clean:
	rm -f ${OBJS} 
	
fclean: clean
	rm -f ${NAME}

re: fclean all
