#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
    char	*str;
    int	len;

    while(src[len])
        len++;
    str = (char*)malloc(sizeof(*str) * (len+1));
    while(*src)
        *str++ = *src++;
    *str = '\0';
    return (str);
}