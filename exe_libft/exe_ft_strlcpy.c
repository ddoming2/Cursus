/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_ft_strlcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:54:44 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/05 18:01:55 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ssize;
	size_t	dsize;

	i = 0;
	ssize = ft_strlen(src) + 1;
	dsize = ft_strlen(dst) + 1;
	
	while(size > 0 && size - 1 > i && i < ssize && i < dsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(ssize);
}

int	main(void)
{
	char		dst[6] = "adios";
	const char	src[5] = "hola";
	size_t		size;

	size = 5;
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcpy(dst, src, size));
	printf("%s\n", dst);
	return(0);
	
}
