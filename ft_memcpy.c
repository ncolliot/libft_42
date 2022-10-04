/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:40 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/04 14:23:23 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
    char    src1[] = "Hello";
    char    dest1[] = "World";
    printf("Before memcpy dest = %s\n", dest1);
    ft_memcpy(dest1, src1, ft_strlen(src1) + 1);
    printf("After memcpy dest = %s\n\n", dest1);

    char src2[] = "Hello";
    char dest2[] = "World";
    printf("Before memcpy dest = %s\n", dest2);
    memcpy(dest2, src2, ft_strlen(src2) + 1);
    printf("After memcpy dest = %s\n", dest2);
    return(0);
}*/