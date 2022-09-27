/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:16:13 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/26 14:16:14 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}/*

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = ft_strrchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);
   
    return(0);
}*/