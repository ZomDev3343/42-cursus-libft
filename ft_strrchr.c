/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:05:04 by truello           #+#    #+#             */
/*   Updated: 2023/10/06 16:43:07 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;
	char	*str;

	str = (char *) s;
	i = 0;
	s_len = ft_strlen(str);
	if ((char) c == 0)
		return (str + s_len);
	while (i < s_len)
	{
		if (str[s_len - i - 1] == (char) c)
			return (str + (s_len - i - 1));
		i++;
	}
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
