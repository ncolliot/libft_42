/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:43:37 by ncolliot          #+#    #+#             */
/*   Updated: 2022/10/13 13:37:53 by ncolliot         ###   ########.fr       */
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
			while (str[i] && str[i] != c)
				i++;
		printf("i = %d\n", i);
		}
	}
	printf("count = %d\n", count);
	return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	printf("word = %s\n", word);
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;
	char *tmp;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return (0);
		ft_putword(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	tmp = *s2;
	printf("s2 = %s\n", tmp);
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	int				num_words;

	if (s == NULL)
		return (NULL);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (s2 != NULL)
	{
		ft_split_words(s, c, s2, num_words);
		return (s2);
	}
	return (0);
}

int main(void)
{
	char str[] = "it's for the test";
	char c = 's';
	char *final = *ft_split(str, c);
	printf("%s\n", final);
	return (0);
}