/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 07:01:04 by ddoming2          #+#    #+#             */
/*   Updated: 2025/11/05 16:45:06 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <ctype.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argc > i)
	{
		printf("%s\n", "Char Original");
		printf("%s\n", &argv[i][0]);
		printf("%s\n", "Resultado isalpha");
		printf("%d\n", isalpha((int)argv[i][0]));
		printf("%s\n", "Resultado ft_isalpha");
		printf("%d\n\n", ft_isalpha((int)argv[i][0]));
		i++;
	}
	return (0);
}
