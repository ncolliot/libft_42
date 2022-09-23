#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    int	j;

	if(*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while(haystack[i] != '\0' && i < len)
	{
		if(haystack[i] == needle[0])
		{
			j = 0;
			while(needle[j] && haystack[i + j] && i + j < len && haystack[i + j] == needle[j])
				j++;
			if(needle[j] == '\0')
				return((char*)haystack + i);
		}
		i++;
	}
	return(0);
}

int main(void)
{
	char str[] = "This is for the test";
	char c[] = "the";
	printf("%s\n", strnstr(str, c, 15));
	printf("%s\n", ft_strnstr(str, c, 15));
	return(0);
}