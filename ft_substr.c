/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:16:17 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/28 17:19:13 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
    
	i = start;
	j = 0;
	if(!s || !(str = (char*)malloc(len + 1)))
		return(NULL);
	while(j < len && i < ft_strlen(s))
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return(str);
}