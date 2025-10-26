/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 01:37:29 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/26 02:22:32 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*sub;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	while (i < start)
		i++;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	while (s[i] && j < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	return ((char *)sub);
}
