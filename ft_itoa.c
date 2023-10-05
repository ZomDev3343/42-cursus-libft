/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:49:44 by truello           #+#    #+#             */
/*   Updated: 2023/10/05 11:19:12 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*init_str(int n, unsigned char *minus, size_t *n_len)
{
	char	*r;

	*n_len = 0;
	*minus = 0;
	if (n < 0)
		*minus = 1;
	while (n != 0)
	{
		(*n_len)++;
		n /= 10;
	}
	r = (char *) ft_calloc(*n_len + *minus + 1 + (*n_len == 0), 1);
	if (!r)
		return (0);
	if (*minus)
		r[0] = '-';
	return (r);
}

char	*ft_itoa(int n)
{
	long int		nbr;
	size_t			i;
	size_t			n_len;
	char			*r;
	unsigned char	minus;

	nbr = n;
	i = 0;
	r = init_str(n, &minus, &n_len);
	if (!r)
		return (0);
	if (minus == 1)
		nbr *= -1;
	if (n_len == 0)
		r[0] = '0';
	while (i < n_len)
	{
		r[minus + n_len - i - 1] = '0' + nbr % 10;
		nbr /= 10;
		i++;
	}
	return (r);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int nb = atoi(av[1]);
		printf("Atoi : %d\n", nb);
		char *result = ft_itoa(nb);
		printf("ft_itoa : %s\n", result);
		free(result);
	}
	return (0);
}*/
