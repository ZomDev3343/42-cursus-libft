/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:40:24 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 11:09:18 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	size_t	len;
	char	*dup;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + 1;
	dup = (char *) ft_calloc(len, 1);
	if (!dup)
		return (0);
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}
