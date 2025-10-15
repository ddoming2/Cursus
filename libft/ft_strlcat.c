/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 19:28:47 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/15 20:24:36 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ssize;
	size_t	dsize;

	i = 0;
	ssize = sizeof(src);
	dsize = sizeof(dst);
	if (size > 0)
	{
		while ()
		{
			dst[dsize
		}
	}
	else
		return (0);
	return (ssize + dsize);
}
