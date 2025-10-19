/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:12:22 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/19 19:44:15 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	character;

	i = 0;
	character = (unsigned char)c;
	while (s[i] != '\0' && s[i] != character)
		i++;
	if (s[i] == character)
		return ((char *)&s[i]);
	return (NULL);
}
