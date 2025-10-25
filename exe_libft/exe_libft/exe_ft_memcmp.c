/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:38:25 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/22 22:05:46 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*source1;
	unsigned char	*source2;

	i = 0;
	source1 = (unsigned char *)s1;
	source2 = (unsigned char *)s2;
	while (i < n && n > 0)
	{
		if (source1[i] - source2[i] == 0)
			i++;
		else
			return (source1[i] - source2[i]);
	}
	return (0);
}

int	main(void)
{
	const void	*s1 = "hola";
	const void	*s2 = "hola";
	size_t		n = 5;

	printf("%d\n", memcmp(s1, s2, n));
	printf("%d\n", ft_memcmp(s1, s2, n));
}
