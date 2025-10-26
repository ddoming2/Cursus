/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:33:43 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/26 01:36:40 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned char	*ptr;
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	ptr = ft_calloc(ft_strlen((const char *)str) + 1, sizeof (unsigned char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (ft_strlen((const char *)str) + 1 > i)
	{
		ptr[i] = str[i];
		i++;
	}
	return ((char *)ptr);
}
