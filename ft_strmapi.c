/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:55:01 by ncolliot          #+#    #+#             */
/*   Updated: 2022/09/29 14:22:01 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    size_t  len;
    size_t  i;

    i = 0;
    str = NULL;
    len = ft_strlen(s);
    str = malloc(sizeof(char) * (len + 1));
    if (s != NULL && f != NULL && str != NULL)
    {
        while (len > i)
        {
            str[i] = f(i, s[i]);
            i++;
        }
        str[i] = '\0';
        return (str);
    }
    return (NULL);
}