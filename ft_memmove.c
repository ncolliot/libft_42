/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:42 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/04 12:07:42 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a > b)
	{
		while (i < len)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dst);
}
/*

int main()
{
    char    dest[] = "Hello";
    char    src[] = "World!";
    char    dest1[] = "Hello";
    char    src1[] = "World!";
    ft_memmove(dest, src, strlen(src) + 1);
    memmove(dest1, src1, strlen(src1) + 1);
    printf("%s\n", dest);
    printf("%s", dest1);
    return(0);
}*/