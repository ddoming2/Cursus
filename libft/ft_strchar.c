/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:12:22 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/14 19:30:38 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char	*t;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	t = *s[i];
	return (t);
}

int	main(void)
{
	char	*s = "hola";
	printf("%s\n", s);
	printf("%s\n", ft_strchr(s, 'o'));
	return (0);
}
