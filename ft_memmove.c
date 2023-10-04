/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:09:54 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 13:25:46 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (!ptr && !ptr2)
		return (0);
	i = 0;
	if (ptr >= ptr2)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
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
