/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:20:28 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 16:12:40 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
		return ((char *) ft_calloc(1, 1));
	i = start;
	if (len > s_len)
		substr = (char *) ft_calloc(s_len - start + 1, 1);
	else
		substr = (char *) ft_calloc(len + 1, 1);
	if (!substr)
		return (0);
	while ((unsigned char) s[i] && i - start < len)
	{
		substr[i - start] = (unsigned char) s[i];
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
