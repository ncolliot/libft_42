/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:15:54 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/26 14:15:55 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char	*str;
    size_t	i;
	size_t	j;

	str = str = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if(!str)
		return(NULL);
	i = 0;
	j = 0;
	while(s1[i])
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while(s2[i])
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = 0;
	return(str);
}