/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:50 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/26 14:15:51 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while((char*)str[i])
    {
        if((char*)str[i] == c)
        {
            return((char*)&str[i]);
        }
        if((char*)str[i] == '\0')
            return(NULL);
        i++;
    }
}/*

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = ':';
    char *ret;

    ret = ft_strchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);
   
    return(0);
}*/