CC = cc 

CFLAGS = -Wall -Wextra -Werror

LIBFTDIR = Libft/

NAME = push_swap

SRCS =	Main/push_swap.c \
		Main/algohelpers.c \
		Main/algorithm.c \
		Main/ft_both.c \
		Main/ft_mini.c \
		Main/ft_op.c \
		Main/ft_op2.c \
		Main/ft_valid.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
		@make -sC $(LIBFTDIR)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L $(LIBFTDIR) -lft

clean:
		rm -f $(OBJS)
		@cd $(LIBFTDIR) && $(MAKE) clean

fclean:
		$(MAKE) clean
		rm -f $(NAME)
		@cd $(LIBFTDIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re