/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 21:06:18 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/26 21:28:37 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char const	*s1 = "hola";
	char const	*s2 = "adios";
	char		*join;

	join = ft_strjoin(s1, s2);
	printf("%s\n", join);
	return (0);
}
