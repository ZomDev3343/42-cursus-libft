/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:07:55 by truello           #+#    #+#             */
/*   Updated: 2023/10/02 16:18:03 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	src_len;

	i = 0;
	len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= ft_strlen(dst))
		return (src_len + dstsize);
	while (*dst)
		dst++;
	while ((i < dstsize - (len - src_len) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len);
}
