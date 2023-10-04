/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:27:55 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 14:33:53 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (i + j < len && haystack[i + j]
			&& haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == 0)
				return ((char *) haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		const char *haystack = av[1];
		const char *needle = av[2];
		const int len = atoi(av[3]);
		
		printf("%s\n", ft_strnstr(haystack, needle, len));
	}
	return (0);
}*/
