NAME = libftprintf.a

TEST_EXEC = test_printf

CC = cc
CFLAGS = -Wall -Wextra -Werror -Ilibft

AR = ar rcs

SRCS = ft_printf.c ft_printf_aux.c 
OBJS = $(SRCS:.c=.o)

LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: all
	$(CC) $(CFLAGS) main.c -o $(TEST_EXEC) -L. -lftprintf

clean:
	make -C libft clean
	rm -f $(OBJS)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)
	rm -f $(TEST_EXEC)

re: fclean all

.PHONY: all clean fclean re test