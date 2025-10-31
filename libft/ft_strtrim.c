/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:03:12 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/31 12:34:33 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	finish;

	start = 0;
	finish = ft_strlen(s);
	if (!set || !s)
		return (NULL);
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	while (finish > start && ft_strchr(set, s[finish - 1]))
		finish--;
	return (ft_substr(s, start, finish - start));
}
