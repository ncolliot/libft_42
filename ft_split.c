/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:43:37 by ncolliot          #+#    #+#             */
/*   Updated: 2022/11/17 17:24:35 by ncolliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			split[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	split[i] = 0;
	return (split);
}
/*
int main(void)
{
	char str[] = "its fors the tsest";
	char c = 's';
	char *final = *ft_split(str, c);
	printf("%s\n", final);
	free(final);
	return (0);
}*/