/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:54:44 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/15 20:08:34 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ssize;
	size_t	dsize;

	i = 0;
	ssize = sizeof(src);
	dsize = sizeof(dst);
	if (size > 0)
	{
		while (size - 1 > i && i < ssize && i < dsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
		return (0);
	return (ssize);
}
