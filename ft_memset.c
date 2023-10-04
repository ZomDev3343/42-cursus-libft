/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:37:29 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 13:34:48 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *) b)[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
/*#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac > 2)
	{
		char c = av[1][0];
		int len = atoi(av[2]);
		char str[50] = "fhrioghehrghgorhghrehohogrhghe";

		ft_memset(str, c, len);
		printf("%s\n", str);
	}
	return (0);
}*/
