/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:16:17 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/13 16:16:26 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		size;
	char		*sub;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	if (size < len)
		len = size;
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			sub[j++] = s[start++];
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
