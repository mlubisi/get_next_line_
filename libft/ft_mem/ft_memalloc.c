/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:45:57 by mlubisi           #+#    #+#             */
/*   Updated: 2016/08/07 17:46:00 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tmp;
	size_t	i;

	if ((tmp = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
