/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:52:54 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/26 00:06:39 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(void)
{
	unsigned char	*ptr;
	int	i;
	int	j;

	i = 3;
	j = 0;
	ptr = ft_calloc(i, sizeof(unsigned char));
	if (ptr == NULL)
		return (1);
	while (j < i)
	{
		write(1, &ptr[j], 1);
		j++;
	}
	return (0);
}
