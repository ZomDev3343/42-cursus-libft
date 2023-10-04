/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:59:43 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 15:47:42 by truello          ###   ########.fr       */
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

static void	get_start_and_end(char const *s1, char const *set,
							int *start, int *end)
{
	int	i;

	i = 0;
	while (in_set(set, s1[i]))
		i++;
	*start = i;
	i = ft_strlen(s1) - 1;
	if (*start > i)
		*end = *start - 1;
	else
	{
		while (in_set(set, s1[i]))
			i--;
		*end = i;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if (s1[0] == 0)
		return ((char *) ft_calloc(1, 1));
	if (set[0] == 0)
		return (ft_strdup((char *)s1));
	get_start_and_end(s1, set, &start, &end);
	end += 1;
	if (start == end)
		return ((char *) ft_calloc(1, 1));
	else
		trimmed = (char *) ft_calloc(end - start + 1, 1);
	if (!trimmed)
		return (0);
	while (--end >= start)
		trimmed[end - start] = s1[end];
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
		int start, end;
	
		get_start_and_end(str, sep, &start, &end);
		printf("%d-%d\n", start, end);
		char *trimmed = ft_strtrim(str, sep);
		printf("Trimmed : %s\n", trimmed);
		free(trimmed);
	}
	return (0);
}*/
