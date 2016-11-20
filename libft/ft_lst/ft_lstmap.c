/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:25:16 by mlubisi           #+#    #+#             */
/*   Updated: 2016/08/07 17:57:07 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*begin_list;

	begin_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if (!begin_list)
		{
			begin_list = (f)(lst);
			lst = lst->next;
			new = begin_list;
		}
		else
		{
			new->next = (f)(lst);
			new = new->next;
			lst = lst->next;
		}
	}
	return (begin_list);
}
