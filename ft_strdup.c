/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:26:06 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/27 14:26:13 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
    char	*str;
    int	len;

    while(src[len])
        len++;
    str = (char*)malloc(sizeof(*str) * (len+1));
    while(*src)
        *str++ = *src++;
    *str = '\0';
    return (str);
}