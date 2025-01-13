# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spawar <spawar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 17:33:36 by spawar            #+#    #+#              #
#    Updated: 2024/03/19 17:33:40 by spawar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc 

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcat.c ft_strlen.c ft_strlcpy.c ft_isalnum.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_toupper.c ft_tolower.c ft_bzero.c ft_memcpy.c ft_memset.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:
		$(MAKE) clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re