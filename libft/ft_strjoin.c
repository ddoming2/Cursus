/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:44:26 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/26 22:01:43 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_joiner(char *join, char *string1, char *string2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (string1[i] != '\0')
	{
		join[i] = string1[i];
		i++;
	}
	while (string2[j] != '\0')
	{
		join[i] = string2[j];
		i++;
		j++;
	}
	join[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = ft_calloc((ft_strlen(s1) + ft_strlen(s2)) + 1, sizeof(char));
	if (!join)
		return (NULL);
	ft_joiner(join, (char *)s1, (char *)s2);
	return (join);
}
