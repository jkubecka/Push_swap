/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:38:54 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/07 19:41:29 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_fill_word(char const *s, char c)
{
	char	*word;
	size_t	letter;
	size_t	j;

	letter = 0;
	j = 0;
	while (s[letter] && s[letter] != c)
		letter++;
	word = (char *)malloc(sizeof(char) * (letter + 1));
	if (!word)
		return (NULL);
	while (j < letter)
	{
		word[j] = s[j];
		j++;
	}
	word[letter] = '\0';
	return (word);
}

void	ft_free_array(char **str)
{
	size_t	j;

	j = 0;
	while (str[j])
	{
		free(str[j]);
		j++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	char	**substr;

	i = 0;
	words = ft_count_words(s, c);
	if (!s)
		return (NULL);
	substr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!substr)
		return (NULL);
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		substr[i] = ft_fill_word(s, c);
		if (!substr[i])
			return (ft_free_array(substr), NULL);
		i++;
		while (*s && *s != c)
			s++;
	}
	substr[i] = NULL;
	return (substr);
}
