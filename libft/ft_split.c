/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:51:47 by ddoming2          #+#    #+#             */
/*   Updated: 2025/11/06 20:27:59 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	ft_free_split(char **result, size_t j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

static char	*ft_get_word(const char *s, char c, size_t *i)
{
	size_t	start;
	size_t	end;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	end = *i;
	return (ft_substr(s, start, end - start));
}

static char	**ft_fill_split(const char *s, char c, size_t word_count)
{
	char	**result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (j < word_count)
	{
		result[j] = ft_get_word(s, c, &i);
		if (!result[j])
		{
			ft_free_split(result, j);
			return (NULL);
		}
		j++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	return (ft_fill_split(s, c, word_count));
}
