#include <stdio.h>
#include <string.h>
// this fonction compare the size ascii valor between two strings
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(n > i)
	{
		if(*(unsigned char*)(s1 + i) == *(unsigned char*)(s2 + i))
			i++;
		else
			return(*(unsigned char*)(s1 + i) - *((unsigned char*)s2 + i));
	}
	return(0);
}

int main()
{
	char str[] = "This is for the test";
	char c[] = "is";
	printf("%d\n", memcmp(str, c, strlen(str)));
	printf("%d", ft_memcmp(str, c, strlen(str)));
	return(0);
}