#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void    ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int     ft_isprint(int c);
void    *ft_memchr(const void *str, int c, size_t n);
int	    ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(char *dest, char *src, size_t n);
void    *ft_memmove(char *dest, char *src, size_t n);
char    *ft_strchr(const char *str, int c);
char	*ft_strdup(char *src);
size_t  ft_strlcpy(char *dest, const char *src, const size_t len);
size_t	strlen(const char *s);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, char c);
int		ft_tolower(char c);
int		ft_toupper(char c);

#endif