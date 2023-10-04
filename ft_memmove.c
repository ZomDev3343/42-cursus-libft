/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:09:54 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 11:05:11 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst)
		return (0);
	i = 0;
	while (i < len)
	{
		if (!((unsigned char *)dst)[i])
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[50] = "Hello World !";
	char s2[50];

	ft_bzero(s2, 50);
	s2[4] = 'q';
	s2[6] = '4';
	ft_memmove(s2, s1, 10);
	printf("S2 : %s\n", s2);
	return (0);
}*/
