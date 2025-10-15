/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:46:47 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/15 21:40:49 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*temp;

	destination = (char *)dest;
	temp = (char *)src;
	ft_memcpy((void *)destination, (const void *)temp, n);
	return (dest);
}
