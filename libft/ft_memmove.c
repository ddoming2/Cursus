/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <ddoming2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:46:47 by ddoming2          #+#    #+#             */
/*   Updated: 2025/10/19 21:06:26 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*temp;

	destination = (unsigned char *)dest;
	temp = (unsigned char *)src;
	if (destination == NULL && temp == NULL)
		return (NULL);
	if (temp < destination)
	{
		while (n > 0)
		{
			n--;
			destination[n] = temp[n];
		}
	}
	else
		ft_memcpy((void *)destination, (const void *)temp, n);
	return (dest);
}
