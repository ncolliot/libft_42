/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:28 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/30 14:49:56 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return(c >= 32 && c <= 126);
}/*

int	main()
{
	char cha;

	cha = 'b';
	printf("ch1: %d\n", ft_isprint(cha));
	printf("ch1: %d\n\n", isprint(cha));

	cha = '@';
	printf("ch2: %d\n", ft_isprint(cha));
	printf("ch2: %d\n\n", isprint(cha));

	cha = ' ';
	printf("ch3: %d\n", ft_isprint(cha));
	printf("ch3: %d\n\n", isprint(cha));

	cha = '\n';
	printf("ch4: %d\n", ft_isprint(cha));
	printf("ch4: %d\n\n", isprint(cha));

	cha = '\t';
	printf("ch5: %d\n", ft_isprint(cha));
	printf("ch5: %d\n\n", isprint(cha));
}*/