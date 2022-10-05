/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:50 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/05 12:34:58 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
/*

int main(void)
{
	const char str[] = "http://www.google.com";
	const char ch = ':';
	char *ret;

	ret = ft_strchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}*/