/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:27:55 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 11:12:45 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!haystack || !needle)
		return (0);
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i])
	{
		while (j < len && haystack[i + j] == needle[j])
			j++;
		if (j >= len)
			return ((char *) haystack + i);
		else
			j = 0;
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
