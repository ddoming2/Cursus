/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:58:36 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/19 15:03:29 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;
	size_t 	j;

	j = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = dlen;
	if (dlen >= size)
		return (size + slen);
	while (src[j] && i < size - 1)
	{
		dst[i] = (unsigned char)src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (slen + dlen);
}
