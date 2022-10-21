/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:09:38 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/21 03:10:47 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_max_and_min(unsigned int res, int sign)
{
	if (res > 2147483647 && sign == 1)
		return (-1);
	if (res > 2147483648 && sign == -1)
		return (0);
	else
		return ((int)res * sign);
}

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				i;
	int				n;

	i = 0;
	n = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
	}
	return (ft_max_and_min(result, n));
}
/*
int main()
{
	const char str[] = "12345";
	printf("%d", ft_atoi(str));
}*/
