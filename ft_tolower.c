/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:16:22 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/26 14:20:29 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(char c)
{
    if(c >= 65 && c <= 90) // condition that change the character
        return(c + 32);
    return(c); // unchanged character
}/*
int main()
{
    char a = 'R';
    printf("%c\n", a);
    printf("%c", ft_tolower(a));
    return(0);
}*/