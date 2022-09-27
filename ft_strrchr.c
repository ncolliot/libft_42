/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:16:13 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/27 14:53:42 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
		i--;
	}
	return (NULL);
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