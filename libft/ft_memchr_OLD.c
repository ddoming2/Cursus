/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:52:27 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/17 17:11:32 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <stdio.h>

void *memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c && i >= n)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (s[i]);
	}
	return (NULL);
}

int	main(void)
{
	
}
