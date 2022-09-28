#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void    ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int     ft_isprint(int c);
void    *ft_memchr(const void *str, int c, size_t n);
int	    ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
char    *ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
size_t  ft_strlcpy(char *dest, const char *src, const size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char    *ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

#endif