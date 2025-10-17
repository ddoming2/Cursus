/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:12:22 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/17 07:01:34 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s);
	while (s[i - 1] && s[i - 1] != c)
		i--;
	if (i > 0)
		return ((char *)&s[i - 1]);
	return (NULL);
}
