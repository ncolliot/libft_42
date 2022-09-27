/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:16:26 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/27 14:25:08 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if(c >= 97 && c <= 122)
        return(c - 32);
    return(c);
}/*
int main()
{
    char a = 'r';
    printf("%c\n", a);
    printf("%c", ft_toupper(a));
    return(0);
}*/