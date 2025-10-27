/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:03:12 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/27 18:52:56 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_compare(char *s1, char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (!(s1[i] == set[j] && j <= ft_strlen(set)))
	{
		if (s1[i] == set[j])
			i++;
		else
			j++;
	}
	return (i);
}

int	ft_erapmoc(char *s1, char *set)
{
	int 	i;
	int	j;

	i = ft_strlen(s1);
	j = 0;
	while (!(s1[i] = set[j] && j <= ft_strlen(set)))
	{
		if (s1[i] == set[j])
			i--;
		else
			j++;
	}
	return (i);
}

char	*ft_trimmer(int start, int finish, char *s1)
{
	int	i;
	int	j;
	char	*trim;
	
	trim = ft_calloc(finish - start, sizeof(char));
	i = start;
	j = 0;
	while (i <= finish)
	{
		trim[j]	= s1[i];
		i++;
		j++;
	}
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int	start;
	int	finish;

	start = ft_compare((char *)s1, (char *)set);
	finish = ft_erapmoc((char *)s1, (char *)set);
	trim = ft_calloc(finish - start, sizeof(char));
	if (!trim)
		return (NULL);
	trim = ft_trimmer(start, finish, (char *)s1);
	return (trim);
}
