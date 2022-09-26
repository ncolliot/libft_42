/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:42 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/26 14:15:43 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.geeksforgeeks.org/write-memcpy/
#include <libft.h>

void    *ft_memmove(char *dest, char *src, size_t n)
{
    int i;
    char    temp[n];

    i = 0;
    while(i < n)
    {
        temp[i] = src[i];
        i++;
    }
    i = 0;
    while(i < n)
    {
        dest[i] = temp[i];
        i++;
    }
}/*

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