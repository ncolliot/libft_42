/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:57:36 by ncolliot          #+#    #+#             */
/*   Updated: 2022/11/21 11:01:10 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[j])
		j++;
	while (src[i] && j + i < (size - 1))
	{
		dest[i + j] = src[i];
		i++;
	}
	if (i < size)
		dest[j + i] = '\0';
	if (j > size)
		return (ft_strlen(src) + size);
	return (j + ft_strlen(src));
}
/*
int main(void)
{
	char dst[] = "";
	char src[] = "This is for the test";
	int res = ft_strlcat(dst, src, strlen(src));
	printf("res = %d", res);
	return (0);
}*/