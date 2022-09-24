#include <libft.h>

int ft_toupper(int c)
{
    if(c >= 97 && c <= 122)
        return(c - 32);
    return(c);
}/*
int main()
{
    char a = 'r';
    printf("%c\n", a);
    printf("%c", ft_toupper(a));
    return(0);
}*/