/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:04:03 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/22 23:12:15 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *)big);
	while (little[i] && big[j])
	{
		while (j < len && little[i] && big[j] &&little[i] == big[j])
		{	
			i++;
			j++;
		}
		if (!little[i] && i == (size_t)ft_strlen(little))
			return ((char *)&big[j - i]);
		else
		{	
			j++;
			j = j - i;
			i = 0;
		}
	}
	return (NULL);
}
