/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:50:54 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/25 13:30:33 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	char	sign;
	int	value;
	char	*s;

	i = 0;
	sign = '+';
	value = 0;
	s = (char *)nptr;
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\f' || s[i] == '\n' || s[i] == '\r'
			|| s[i] == '\t' || s[i] == '\v')
			i++;
		if (s[i] == '-' || s[i] == '+')
		{
			sign = s[i];
			i++;
		}
//		while (s[i] >= '0' && s[i] <= '9')
//		{
//			i++;
//		}
//		i--;
		while (s[i] >= '0' && s[i] <= '9')
		{
			value = value * 10 + ((s[i] - '0'));
			i++;
		}
		        if (sign == '-')
                return (value * -1);
        else
                return (value);
	}
	return (0);
}
/*
int	main(void)
{
	const char	*nptr;

	nptr = "                      \t\v   \f\n    -78959382648sdfjhlkjdfb";
	printf("%d\n", atoi(nptr));
	printf("%d\n", ft_atoi(nptr));
	return (0);
}
*/
