/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:26:06 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/04 12:25:04 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s1) + 1);
	if (str != NULL)
	{
		ft_memcpy(str, s1, ft_strlen(s1) + 1);
		return (str);
	}
	return (NULL);
}
