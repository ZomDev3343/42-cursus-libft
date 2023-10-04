/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:39:27 by truello           #+#    #+#             */
/*   Updated: 2023/10/03 13:58:49 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*result;
	int		i;
	size_t	s2_len;

	i = -1;
	s2_len = ft_strlen(s2);
	len = ft_strlen(s1) + s2_len;
	result = (char *) ft_calloc(len + 1, 1);
	if (!result)
		return (0);
	while (s1[++i])
		result[i] = s1[i];
	i = -1;
	while (s2[++i])
		result[len - i - 1] = s2[s2_len - i - 1];
	return (result);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char *s1 = av[1];
		char *s2 = av[2];

		char *r = ft_strjoin(s1, s2);
		printf("Strjoin : %s\n", r);
		free(r);
	}
	return (0);
}*/
