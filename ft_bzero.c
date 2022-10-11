/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:09:15 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/11 10:16:36 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}
/*
int main()
{
    char str[] = "This is for the test!";
    printf("%s\n", str);
    ft_bzero(str, 1);
    printf("%s\n", str);
	ft_bzero(str, 1);
    printf("%s\n", str);
    return (0);
}*/