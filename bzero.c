#include <string.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    size_t	i;

    i = 0;
    while(i < n)
    {
        *(char*)(s + i) = 0;
        i++;
    }
}

int main()
{
    char str[50] = "This is for the test!";
    printf("%s\n", str);
    bzero(str, strlen(str));
    printf("%s", str);
    return (0);
}