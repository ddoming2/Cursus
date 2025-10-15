/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_ft_memset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:47:25 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/02 20:05:22 by ddoming2         ###   ########.fr       */
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

int	main(void)
{
	char	s[5] = "hola";
	int	c;
	size_t n;

	c = 42;
	n = 2;
	printf("%s\n", s);
	printf("%s\n", (char *)ft_memset(s, c, n));
}
