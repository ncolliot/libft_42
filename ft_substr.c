/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:16:17 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/10 18:46:30 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	str = NULL;

	
	str = malloc(sizeof(char) * (len + 1));
	i = start;
	j = 0;
	if (s != NULL && str != NULL)
	{
		while (j < len && i < ft_strlen(s))
		{
			str[j++] = s[i++];
		}
		str[j] = '\0';
		return (str);
	}
	return (str);
}
