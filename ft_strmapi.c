/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:10:25 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 18:47:36 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_string;
	size_t	len;

	len = ft_strlen(s) + 1;
	new_string = (char *) ft_calloc(len, 1);
	if (!new_string)
		return (0);
	i = 0;
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	return (new_string);
}
/*
char	toupperi(unsigned int i, char c)
{
	if (!i)
	;
	return ft_toupper(c);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char *str = av[1];

		char *res = ft_strmapi(str, &toupperi);
		printf("Strmapi : %s\n", res);
	}
	return (0);
}*/
