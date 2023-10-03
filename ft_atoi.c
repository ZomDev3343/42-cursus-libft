/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:39:44 by truello           #+#    #+#             */
/*   Updated: 2023/10/03 11:24:16 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t			i;
	long int		r;
	unsigned char	minus_count;

	i = 0;
	r = 0;
	minus_count = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		minus_count = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		r = r * 10 + (str[i] - '0');
		if (r > 2147483647 || r < -2147483648)
			return (0);
		i++;
	}
	if (minus_count == 1)
		r *= -1;
	return ((int) r);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("ft_atoi : %d\n", ft_atoi(av[1]));
		printf("atoi : %d\n", ft_atoi(av[1]));
	}
	return (0);
}*/
