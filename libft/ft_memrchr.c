/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:12:22 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/20 06:54:44 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * FALTA MANEJAR ERROR DE N > CONST VOID *S[N]
 * FALTA QUITAR MAIN
 * FALTA PASAR PACO
 */
//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	character;
	const char	*source;


	i = 0;
	character = (unsigned char)c;
	source = (const char *)s;
	while (source[i] != '\0' && source[i] != character && i < n)
		i++;
	if (source[i] == character)
		return ((void *)&source[i]);
	return (NULL);
}

int	main(void)
{
	const void *s = "hola";
	int 	c = 'o';
	size_t	n = 5;

	printf("%s\n", (char *)memchr(s, c, n));
	printf("%s\n", (char *)ft_memchr(s, c, n));
	return (0);
}
