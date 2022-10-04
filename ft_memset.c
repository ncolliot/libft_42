/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:03:02 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/04 14:03:10 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int main()
{
    char str[] = "For the test";
	ft_memset(str, '.', 7);
    printf("%s", str);
    return(0);
}
*/