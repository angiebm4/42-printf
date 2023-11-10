NAME=libftprintf.a
CC= gcc
CFLAGS=-Wall -Werror -Wextra
FUNCTIONS=	ft_printf.c \
			ft_type_char.c \
			ft_type_string.c \
			ft_type_ptr.c \
			ft_type_nbr.c \
			ft_type_nbr2.c \
			ft_type_un_nbr.c \
			ft_type_hex.c \
			ft_type_percent.c \
			ft_width.c \
			ft_type_un_nbr2.c \
			ft_type_hex2.c \
			ft_type_nbr3.c \
			ft_type_hex3.c

OBJ= $(FUNCTIONS:%.c=%.o)

all: $(NAME)

debug: CFLAGS+=-fsanitize=address -g3
debug: all

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

bonus: $(NAME)

test: $(NAME) main.o
	$(CC) ${CFLAGS} main.o -o tests libftprintf.a 

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) main.o

re: fclean all
.PHONY: clean fclean re all
