/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:41:02 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/08 20:05:15 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		n--;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}	

char	*ft_itoa(int n)
{
	unsigned int	one;
	int				len;
	char			*c;

	len = ft_numlen(n);
	if (n < 0)
		one = (unsigned)(n * -1);
	else
		one = (unsigned)n;
	c = malloc(sizeof(char) * (len + 1));
	if (c != NULL)
	{
		c[len--] = '\0';
		if (n < 0)
			c[0] = '-';
		else if (n == 0)
			c[0] = '0';
		while (one > 0)
		{
			c[len--] = (char)(one % 10 + '0');
			one /= 10;
		}
	}
	return (c);
}
/*
int	main(void)
{
	int	num = 5625;
	printf("%s\n", ft_itoa(num));
	return(0);
}*/