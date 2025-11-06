/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:50:54 by ddoming2          #+#    #+#             */
/*   Updated: 2025/11/06 17:48:23 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_spacecount(char *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\f' || s[i] == '\n'
		|| s[i] == '\r' || s[i] == '\t' || s[i] == '\v')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	char	sign;
	int		value;
	char	*s;

	i = 0;
	sign = '+';
	value = 0;
	s = (char *)nptr;
	i = ft_spacecount(s);
	if (s[i] == '-' || s[i] == '+')
	{
		sign = s[i];
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		value = value * 10 + ((s[i] - '0'));
		i++;
	}
	if (sign == '-')
		return (-value);
	return (value);
}
