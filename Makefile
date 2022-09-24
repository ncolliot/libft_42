SRC = ft_bzero.c ft_calloc.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBJECTS = (SRC:.c=.o)

#BONUS = 

CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	ar rcs $(NAME) $(OBJECTS)

clean: 
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
