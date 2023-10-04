/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:45:11 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 17:58:28 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_parts(char **parts)
{
	size_t	i;

	i = 0;
	while (parts[i])
	{
		free(parts[i]);
		i++;
	}
	free(parts);
	return (0);
}

static int	get_nb_parts(char *str, char c)
{
	while (*(++str))
		if ((*str == c && *(str - 1) != c)
			|| (!*(str + 1) && *str != c))
			return (1 + get_nb_parts(str, c));
	return (0);
}

static char	**init_parts(char *str, char c)
{
	char	**parts;
	int		nb_parts;

	nb_parts = get_nb_parts(str, c);
	parts = (char **) ft_calloc(nb_parts + 1, sizeof(char *));
	return (parts);
}

static void	fill_part(char *str, char *part, int part_len, int *start)
{
	int	og_pl;

	if (!str[0])
		return ;
	og_pl = part_len;
	while (--part_len >= 0)
		part[part_len] = str[*start + part_len];
	*start += og_pl;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		current_part;
	char	**parts;

	i = 0;
	current_part = 0;
	start = 0;
	parts = init_parts((char *) s, c);
	while (parts && current_part < get_nb_parts((char *) s, c))
	{
		if (s[i] == c)
			start++;
		if ((s[i] != c && s[i + 1] == c)
			|| !s[i + 1])
		{
			parts[current_part] = (char *) ft_calloc(i + 1 - start, 1);
			if (!parts[current_part])
				return (free_parts(parts));
			fill_part((char *) s, parts[current_part], i + 1 - start, &start);
			current_part++;
		}
		i++;
	}
	return (parts);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char *str = av[1];
		char sep = av[2][0];

		char **res = ft_split(str, sep);
		int i = 0;
		if (!res)
			return (0);
		while (res[i])
		{
			printf("Part[%d] : %s\n", i, res[i]);
			i++;
		}
		printf("Part[%d] : %s\n", i, res[i]);
		free_parts(res);
	}
	return (0);
}*/
