/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:37 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/04 15:37:32 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
			i++;
		else
			return (*(unsigned char *)(s1 + i) - *((unsigned char *)s2 + i));
	}
	return (0);
}
/*
int main()
{
	char str[] = "This is for the test";
	char c[] = "is";
	printf("%d\n", memcmp(str, c, strlen(str)));
	printf("%d", ft_memcmp(str, c, strlen(str)));
	return(0);
}*/