/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:20:28 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 11:14:46 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (0);
	i = start;
	substr = (char *) ft_calloc(len, 1);
	while (substr && s[i] && i - start < len)
	{
		substr[i - start] = s[i];
		i++;
	}
	return (substr);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		char *str = av[1];
		int start = atoi(av[2]);
		int len = atoi(av[3]);

		char *substr = ft_substr(str, start, len);
		printf("Substr : %s\n", substr);
		free(substr);
	}
	return (0);
}*/
