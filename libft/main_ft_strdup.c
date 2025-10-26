/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:45:35 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/26 01:30:23 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(void)
{
	unsigned char *s = "hola";
	unsigned char	*dup = ft_strdup(s);

	while (*dup)
	{
		write(1, dup, 1);
			dup++;
	}
	return (0);
}
