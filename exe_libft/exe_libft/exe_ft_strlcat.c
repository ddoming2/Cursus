/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:58:36 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/19 15:02:17 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

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

int	main(void)
{
	char		destination[15] = "holaaaaaaaaaa";
	const char	*source = "adios";
	size_t		size;
	char		destination2[15] = "holaaaaaaaaaa";
	const char	*source2 = "adios";

	size = 20;
        printf("%s\n", destination);
	printf("%zu\n", strlcat(destination, source, size));
	printf("%s\n", destination);
        printf("%s\n", destination2);
	printf("%zu\n", ft_strlcat(destination2, source2, size));
        printf("%s\n", destination2);

}
