#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ft_tolower(char c)
{
    if(c >= 65 && c <= 90) // condition that change the character
        return(c + 32);
    return(c); // unchanged character
}
int main()
{
    char a = 'R';
    printf("%c\n", a);
    printf("%c", ft_tolower(a));
    return(0);
}