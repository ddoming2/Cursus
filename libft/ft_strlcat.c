/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:58:36 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/16 22:40:10 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ssize;
	size_t	dsize;
	size_t	i;

	i = 0;
	ssize = ft_strlen(src) + 1;
	dsize = ft_strlen(dst) + 1;
	while (i + dsize < size)
	{
		dst[i + dsize] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ssize - 1 + dsize - 1);
}
