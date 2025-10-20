/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:12:22 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/20 07:15:55 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * DIO ERROR IMPLICIT DECLARATION MEMRCHR ORIGINAL (NO SE HA PODIDO PROBAR)
 * FALTA MANEJAR ERROR DE N > CONST VOID *S[N]
 * FALTA QUITAR MAIN
 * FALTA PASAR PACO
 */
//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memrchr(const void *s, int c, size_t n)
{
	char	*character;
	char	*source;
	unsigned int	i;

	character = NULL;
	source = (char *)s;
	while (*source && i < n)
	{
		if ((unsigned char)*source == (unsigned char)(c))
			character = source;
		source++;
		i++;
	}
	if ((unsigned char)c == '\0')
		return (source);
	return (character);
}

int	main(void)
{
	const void *s = "hola";
	int 	c = 'o';
	size_t	n = 5;

	printf("%s\n", (char *)memrchr(s, c, n));
	printf("%s\n", (char *)ft_memrchr(s, c, n));
	return (0);
}
