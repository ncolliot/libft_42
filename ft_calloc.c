#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*memo;
	size_t	i;

	i = 0;
	memo = malloc(count * size);
	if (memo == NULL)
		return (0);
	while (i < count * size)
	{
		memo[i] = 0;
		i++;
	}
	return (memo);
}