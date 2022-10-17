/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:09:57 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/18 00:16:36 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memo;
	size_t	i;

	i = 0;
	memo = malloc(count * size);
	if (memo == NULL)
		return (0);
	while (i < count * size)
	{
		memo[i++] = 0;
	}
	return (memo);
}
