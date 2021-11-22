# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yelousse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 16:08:20 by yelousse          #+#    #+#              #
#    Updated: 2021/11/22 16:38:56 by yelousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC    =    ft_atoi.c    \
        ft_isalpha.c    \
        ft_memchr.c    \
        ft_memset.c    \
        ft_strjoin.c    \
        ft_strncmp.c    \
        ft_substr.c    \
        ft_bzero.c    \
        ft_isascii.c    \
        ft_memcmp.c    \
        ft_split.c    \
        ft_strlcat.c    \
        ft_strnstr.c    \
        ft_tolower.c    \
        ft_calloc.c    \
        ft_isdigit.c    \
        ft_memcpy.c    \
        ft_strchr.c    \
        ft_strlcpy.c    \
        ft_strrchr.c    \
        ft_toupper.c    \
        ft_isalnum.c    \
        ft_isprint.c    \
        ft_memmove.c    \
        ft_strdup.c    \
        ft_strlen.c    \
        ft_strtrim.c    \

OBJS = $(SRC:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

IDIR = includes

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(IDIR)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re
