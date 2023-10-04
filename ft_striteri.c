/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:42:33 by truello           #+#    #+#             */
/*   Updated: 2023/10/04 10:48:31 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		(*f)(i, s + i);
		i++;
	}
}
/*
void	toupperi(unsigned int i, char *c)
{
	if (!i)
	;
	*c = ft_toupper(*c);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char *str = av[1];

		ft_striteri(str, &toupperi);
		printf("Strmapi : %s\n", str);
	}
	return (0);
}*/
