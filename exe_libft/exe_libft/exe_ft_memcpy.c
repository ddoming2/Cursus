/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:30:17 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/02 20:50:23 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destination;
	const char	*source;

	i = 0;
	destination = (char *)dest;
	source = (const char *)src;
	while ((i < n) && (source[i] != '\0'))
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	const char	src[5] = "hola";
	char	dest[5] = "1111";
	size_t	n = 2;
	printf("%s\n", src);
	printf("%s\n", (char *)ft_memcpy(dest, src, n));
	return (0);
}
