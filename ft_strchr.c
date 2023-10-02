/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:43:59 by truello           #+#    #+#             */
/*   Updated: 2023/10/02 18:04:55 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) s + i);
		i++;
	}
	if (c == 0)
		return ((char *) s + i);
	return (0);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char *str = av[1];
		char c = av[2][0];
		
		printf("Premiere occurence de %c : %s\n", c, ft_strchr(str, c));
	}

	return (0);
}*/
