/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddoming2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:00:53 by ddoming2          #+#    #+#             */
/*   Updated: 2025/11/05 06:58:00 by ddoming2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t  ft_word_count(const char *s, char c)
{
        size_t  i;
        size_t  j;

        i = 0;
        j = 0;
        while (s[i] != '\0')
        {
                while (s[i] == c)
                        i++;
                if (s[i] != '\0')
                        j++;
                while (s[i] != '\0' && s[i] != c)
                        i++;
        }
        return (j);
}

int	main(int argc, char *argv)
{
	int		i;
	int		j;
	char		*s;
	char		c;
	char		**split;

	i = 0;
	j = 0;
//	if (argc == 3)
//	{
		split = ft_calloc(ft_word_count(s, c) + 1, sizeof(char));
		s = "hola que tal";
		c = ' ';
		split = ft_split(s, c);
		while (i < ft_word_count(s, c))
		{
			while (split[i][j] != '\0')
			{
				printf("%c", split[i][j]);
				j++;
			}
			j = 0;
			i++;
		}
		if (!split)
			return(0);
		free(split);
//	}
		return (0);
}
