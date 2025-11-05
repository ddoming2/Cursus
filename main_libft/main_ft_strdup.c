/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:45:35 by ddoming2          #+#    #+#             */
/*   Updated: 2025/11/04 17:31:53 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(int argc, char *argv[])
{
	unsigned char *s = (unsigned char *)argv[1];
	char	*dup = ft_strdup((const char *)s);

	if (argc == 2)
	{
		printf("%s\n", "String Original");
		printf("%s\n", s);
		printf("%s\n", "String Duplicada");
		printf("%s\n", dup);
	}
	else
		return (0);
}
