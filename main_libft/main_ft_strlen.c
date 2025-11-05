/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 07:01:04 by ddoming2          #+#    #+#             */
/*   Updated: 2025/11/05 17:01:48 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argc > i)
	{
		printf("%s\n", "Input");
		printf("%s\n", &argv[i][0]);
		printf("%s\n", "Resultado strlen");
		printf("%ld\n", strlen((const char *)argv[i][0]));
		printf("%s\n", "Resultado ft_strlen");
		printf("%d\n\n", ft_strlen((const char *)argv[i][0]));
		i++;
	}
	return (0);
}
