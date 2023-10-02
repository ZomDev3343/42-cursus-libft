/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:40:24 by truello           #+#    #+#             */
/*   Updated: 2023/10/02 15:02:12 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	size_t	len;
	char	*dup;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	dup = (char *) malloc(len + 1);
	dup[len] = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}
