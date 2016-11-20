/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:45:30 by mlubisi           #+#    #+#             */
/*   Updated: 2016/11/17 13:54:15 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush_back(t_list *l, t_list *to_add)
{
	if (l->next)
		return (ft_lstpush_back(l->next, to_add));
	l->next = to_add;
}
