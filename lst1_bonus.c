/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst1_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:17:35 by truello           #+#    #+#             */
/*   Updated: 2023/10/05 16:26:02 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *) malloc(sizeof(t_list));
	res->content = content;
	res->next = 0;
	return (res);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*old_first;

	old_first = *lst;
	lst = &new;
	new->next = old_first;
}

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		size;

	cur = lst;
	size = 0;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return (size);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cur;

	cur = lst;
	while (cur->next)
		cur = cur->next;
	return (cur);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	cur = *lst;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
}
