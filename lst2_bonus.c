/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst2_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:11:04 by truello           #+#    #+#             */
/*   Updated: 2023/10/05 16:28:01 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst != 0)
		ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cur;

	cur = lst;
	while (cur)
	{
		f(cur->content);
		cur = cur->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new_list;
	t_list	*cur_nl;

	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (0);
	cur_nl = new_list;
	cur = lst->next;
	while (cur)
	{
		cur_nl->next = ft_lstnew(f(cur->content));
		cur_nl = cur_nl->next;
		if (!cur_nl)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		cur = cur->next;
	}
	return (new_list);
}
