/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_ft_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:12:22 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/19 21:43:04 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*character;
	char	*str;

	character = NULL;
	str = (char *)s;
	while (*str)
	{
		if ((unsigned char)*str == (unsigned char)c)
			character = str;
		str++;
	}
	if ((unsigned char)c== '\0')
		return (str);
	return (character);
}

int	main(void)
{
	const char	*s = "bonjour";
	int		c = 'a';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}
