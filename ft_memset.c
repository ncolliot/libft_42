#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

int main()
{
    char str[] = "For the test";
	ft_memset(str, '.', 7);
    printf("%s", str);
    return(0);
}