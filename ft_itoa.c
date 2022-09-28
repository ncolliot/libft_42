/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:41:02 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/28 17:17:02 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numlen(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		n++;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	if (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}	

char	*ft_itoa(int n)
{
	unsigned	one;
	size_t	len;
	char	*c;

	len = numlen(n);
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
