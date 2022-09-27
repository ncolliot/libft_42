/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:16:22 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/27 15:07:35 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z') // condition that change the character
		return(c + 32);
	else
		return(c); // unchanged character
}/*
int main()
{
    char a = 'R';
    printf("%c\n", a);
    printf("%c", ft_tolower(a));
    return(0);
}*/