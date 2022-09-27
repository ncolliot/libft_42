/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:32 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/26 14:15:33 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t  i;
    unsigned char   *strr;

    i = 0;
    strr = (unsigned char*)str;
    while(i < n)
    {
        if(strr[i] == c)
        {
            return((void*)&strr[i]);
        }
        i++;
    }
    return(NULL);
}/*

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = ':';
    char *ret;

    ret = ft_memchr(str, ch, 5);
    printf("String after |%c| is - |%s|\n", ch, ret);
    return(0);
}*/