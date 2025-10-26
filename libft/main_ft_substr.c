/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:50:09 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/26 20:32:12 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*s = "tripouille";
	unsigned int	start = 11;
	size_t		len = 42000;
	char		*res = ft_substr(s, start, len);
//	char		*res = "hola";
	int		i = 0;

	while (res[i] != '\0')
	{
		write(1, &res[i], 1);
		i++;
	}
	printf("%d\n", ft_strlen(res));
	write (1, "\n", 1);
	return (0);
}
