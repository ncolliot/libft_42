/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:32 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/04 14:13:12 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
/*

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = ':';
    char *ret;

    ret = ft_memchr(str, ch, 5);
    printf("String after |%c| is - |%s|\n", ch, ret);
    return(0);
}*/