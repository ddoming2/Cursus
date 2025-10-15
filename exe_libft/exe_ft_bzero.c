/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:06:13 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/02 20:28:32 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while ((i < n) && (str[i] != '\0'))
	{
		str[i] = c;
		i++;
	}
	return (str);
}

void    ft_bzero(void *s, size_t n)
{
        s = ft_memset(s, 0, n);
}

int	main(void)
{
	char	s[5] = "hola";
	size_t n;

	n = 2;
	printf("%s\n", s);
	ft_bzero(s, n);
	printf("%s\n", s);
	return (0);
}
