/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:12:22 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/22 21:35:00 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	character;
	const unsigned char	*source;


	i = 0;
	character = (unsigned char)c;
	source = (const unsigned char *)s;
	if (n > 0)
	{	
		while (i < n)
		{
			if (source[i] == character)
				return ((unsigned char *)&source[i]);
			i++;
		}
	}
	return (NULL);
}

int	main(void)
{
	int	s[] = {0, 1, 2 ,3 ,4 ,5};
	int 	c = 2;
	size_t	n = 3;

	printf("%s\n", (char *)memchr(s, c, n));
	printf("%s\n", (char *)ft_memchr(s, c, n));
	return (0);
}
