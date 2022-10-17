/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:42 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/18 00:00:32 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	if (dst != NULL || src != NULL)
	{
		a = (unsigned char *)dst;
		b = (unsigned char *)src;
		if (src < dst)
		{
			b = b + len - 1;
			a = a + len - 1;
			while (len--)
				*a-- = *b--;
		}
		else if (src >= dst)
		{
			while (len--)
				*a++ = *b++;
		}
		return (dst);
	}
	else
		return (NULL);
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