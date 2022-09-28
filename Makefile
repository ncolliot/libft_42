# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 13:16:22 by ninoc.vinal       #+#    #+#              #
#    Updated: 2022/09/28 12:15:23 by ncolliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strtrim.c ft_strjoin.c ft_substr.c ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c ft_strdup.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
COMP = gcc -Wall -Wextra -Werror
ERASE = rm -rf
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJS) ${INCLUDE}
	@ar rcs $(NAME) $(OBJS)
clean:
	@${ERASE} ${OBJS}
fclean:
	@${ERASE} ${OBJS} ${NAME}

re: fclean all

