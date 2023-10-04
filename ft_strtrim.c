/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:59:43 by truello           #+#    #+#             */
/*   Updated: 2023/10/03 14:56:03 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	in_set(char const *set, const char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trimmed;

	i = 0;
	start = 0;
	end = 0;
	while (in_set(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (in_set(set, s1[i]))
		i--;
	end = i;
	trimmed = (char *) ft_calloc(end - start + 1, 1);
	if (!trimmed)
		return (0);
	i += 1;
	while (--i >= start)
		trimmed[i - start] = s1[i];
	return (trimmed);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char *str = av[1];
		char *sep = av[2];

		char *trimmed = ft_strtrim(str, sep);
		printf("Trimmed : %s\n", trimmed);
		free(trimmed);
	}
	return (0);
}*/
