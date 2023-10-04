/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:32:03 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 11:12:17 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n)
	{
		if (((unsigned char *) s1)[i] > ((unsigned char *)s2)[i])
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		else if (((unsigned char *) s1)[i] < ((unsigned char *) s2)[i])
			return (((unsigned char *) s2)[i] - ((unsigned char *) s1)[i]);
		i++;
	}
	return (0);
}
