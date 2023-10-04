/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:05:04 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 13:53:15 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		found_idx;

	i = 0;
	found_idx = -1;
	while (s[i])
	{
		if (s[i] == (char) c)
			found_idx = i;
		i++;
	}
	if ((char) c == 0)
		return ((char *) s + i);
	if (found_idx > -1)
		return ((char *) s + found_idx);
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

		printf("Derniere occurence de %c : %s\n", c, ft_strrchr(str, c));
	}

	return (0);
}*/
