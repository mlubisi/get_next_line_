/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:44:33 by mlubisi           #+#    #+#             */
/*   Updated: 2016/11/14 14:44:35 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrev(t_list *lst)
{
	t_list *out;

	out = NULL;
	while (lst)
	{
		ft_lstadd(&out, ft_lstnew(lst->content, lst->content_size));
		lst = lst->next;
	}
	return (out);
}
