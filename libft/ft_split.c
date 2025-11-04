/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:51:47 by ddoming2          #+#    #+#             */
/*   Updated: 2025/11/04 19:43:09 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_word_counter(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (j);
}

char	*ft_splitter(const char *s, char c, size_t *i)
{
	size_t	start;
	size_t	finish;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	finish = *i;
	return (ft_substr(s, start, finish - start));
}

void	ft_free(char **solution, size_t j)
{
	while (j > 0)
		free(solution[--j]);
	free(solution);
}

char	**ft_arrayer(const char *s, char c, size_t word_count)
{
	char	**solution;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	solution = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!solution)
		return (NULL);
	while (j < word_count)
	{
		solution[j] = ft_splitter(s, c, &i);
		if (!solution[j])
		{
			ft_free(solution, j);
			return (NULL);
		}
		j++;
	}
	solution[j] = NULL;
	return (solution);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_arrayer(s, c, ft_word_counter(s, c)));
}
