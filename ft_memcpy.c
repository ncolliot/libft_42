/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:40 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/26 14:15:41 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.geeksforgeeks.org/write-memcpy/
#include <libft.h>

void    *ft_memcpy(char *dest, char *src, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        dest[i] = src[i];
        i++;
    }
}/*
int main()
{
    char    src1[] = "Hello";
    char    dest1[] = "World";
    printf("Before memcpy dest = %s\n", dest1);
    ft_memcpy(dest1, src1, strlen(src1) + 1);
    printf("After memcpy dest = %s\n\n", dest1);

    char src2[] = "Hello";
    char dest2[] = "World";
    printf("Before memcpy dest = %s\n", dest2);
    memcpy(dest2, src2, strlen(src2) + 1);
    printf("After memcpy dest = %s\n", dest2);
    return(0);
}*/