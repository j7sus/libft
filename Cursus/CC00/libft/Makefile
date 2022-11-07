# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 15:10:30 by jecontre          #+#    #+#              #
#    Updated: 2022/11/03 17:50:10 by jecontre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c \
	   ft_strlen.c ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_calloc.c ft_strlcat.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c \
	   ft_strnstr.c ft_strdup.c \
	   ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_striteri.c ft_strmapi.c ft_itoa.c ft_putnbr_fd.c ft_split.c

OBJS = $(SRCS:.c=.o)

HEADER = libft.h

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

INCLUDE = -I ./

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
